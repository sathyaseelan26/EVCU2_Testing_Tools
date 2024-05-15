from Global_Declarations import (
                                    randint,
                                    read_excel,
                                    load_file,
                                    init_DBCs,
                                    get_FD_ver_input,
                                    get_Node_Name,
                                    find_Node_in_DB,
                                    DBCs,
                                    OutputFiles,
                                    Output_Test_Cases
                                )


def get_Factor_from_db(db,target_signal_name,Available_Messages):
    for message in Available_Messages:
        for signal in message.signals:
            #print(str(signal.name))
            if str(signal.name) == target_signal_name:
                #print("Signal Name: {} found in Message Name: {} with ID: {}".format(signal.name,message.name,hex(message.frame_id)))
                return [1,signal.scale,message.senders,message.name,message.cycle_time,signal.offset]
    return [0]

def scaled_to_raw(val, offset, factor): 
    prelim = ((val - offset) / factor)
    return int(prelim)

def raw_to_scaled(val, offset, factor):
    return (val*factor) + offset

    
def Gather_Required_Information(Board, DBC_Folder, FD_ver, Node_Name, comm_type):
    try:
        db = load_file(DBC_Folder + "/" + DBCs[f"{FD_ver}"])
    except KeyError:
        print(FD_ver + " DBC not found")
        return -1, None
    Node_Name = find_Node_in_DB(Node_Name,db)
    Input_Excel = read_excel(OutputFiles + '/Test_Information_{}_{}_{}.xlsx'.format(Board,FD_ver, comm_type)) 
    # if "Factor" in Input_Excel.columns and "Sending Node" in Input_Excel.columns:
    #     print(f"Required Information already present in Test Information Excel Sheet for {Board} {FD_ver} {comm_type}")
    #     return 1, Input_Excel
    Available_Messages = [message for message in db.messages if (f"{Node_Name}" in message.senders or f"{Node_Name}" in message.receivers)]
    
    Factor = []
    Sending_Node = []
    Message_Name = []
    Cycle_Time= []
    Offset_Val = []
    
    for i in range(0,len(Input_Excel)):
        ret_val = get_Factor_from_db(db,Input_Excel.at[i,"Signal Name"],Available_Messages)
        if ret_val == [0]:
            print("Signal Name: {} is not found".format(Input_Excel.at[i,"Signal Name"]))
            continue
        Factor.append(ret_val[1])
        Sending_Node.append(ret_val[2])
        Message_Name.append(ret_val[3])
        if ret_val[4] == None:
            Cycle_Time.append(0)
        else:
            Cycle_Time.append(ret_val[4])
        Offset_Val.append(ret_val[5])
        
    Input_Excel["Factor_Val"] = Factor
    Input_Excel["Offset_Val"] = Offset_Val
    Input_Excel["Message_Name"] = Message_Name
    Input_Excel["Cycle_Time"] = Cycle_Time
    Input_Excel["Sending_Nodes"] = Sending_Node
    while True:
        try:
            Input_Excel.to_excel(OutputFiles + '\Test_Information_{}_{}_{}.xlsx'.format(Board,FD_ver,comm_type),engine = 'xlsxwriter',index = False)   
            break
        except PermissionError:
            input("Please close the Test_Information_{}_{}_{}.xlsx file and press enter".format(Board,FD_ver,comm_type))
    return 0,Input_Excel


def Generate_Test_Cases_Rx(Board, FD_ver, Input_Excel, Node_Name):
    Number_of_test_cases = 3 #Number of middle test cases which means excluding min and max value
    test_values_list = []
    Test_Cases_Name = []
    f = open(OutputFiles + "/Test_Cases_{}_{}_Rx.cs".format(Board,FD_ver),"w")
    f.write("using System;\nusing System.Collections.ObjectModel;\nusing Vector.Tools;\nusing Vector.CANoe.Runtime;\nusing Vector.CANoe.Threading;\nusing Vector.Diagnostics;\nusing Vector.Scripting.UI;\nusing Vector.CANoe.TFS;\nusing Vector.CANoe.VTS;\nusing NetworkDB;\nusing Trace32_API;\nusing Report_Generation;\n\n[TestClass]\npublic class AutomatedTestClass_Tx_{}\n{{\n".format(FD_ver))
    f.write("public static void SetSignal<T>(Int16 d) where T : class, IRuntimeValue\n{\n\tRuntimeObject<T>.Value = d;\n}\n")
    f.write("public static void SetSignal<T>(Double d) where T : class, IRuntimeValue\n{\n\tRuntimeObject<T>.Value = d;\n}\n") 

    for i in range(0,len(Input_Excel)):
        Global_Variable = Input_Excel.at[i,"Global Variable"]
        Signal_Name = Input_Excel.at[i,"Signal Name"]
        Data_Type = Input_Excel.at[i,"Data Type"]
        Min_Val = Input_Excel.at[i,"Min_Val"]
        Max_Val = Input_Excel.at[i,"Max_Val"]
        Invalid_Val = Input_Excel.at[i,"Invalid_Value"]
        Message_Name = Input_Excel.at[i,"Message_Name"]
        Offset_Val = Input_Excel.at[i,"Offset_Val"]
        Factor_Val = Input_Excel.at[i,"Factor_Val"]
        Cycle_Time = Input_Excel.at[i,"Cycle_Time"]
        Sending_Nodes = list(str(str(Input_Excel.at[i,"Sending_Nodes"]).translate(str.maketrans("[]'","   "))).split(','))
        
        if Factor_Val == 0:
            print(Signal_Name + " from " + Message_Name + " has factor value to be 0. Hence cannot be considered for validation.")
            continue
        
        min_val_db = scaled_to_raw(Min_Val, Offset_Val, Factor_Val)
        max_val_db = scaled_to_raw(Max_Val, Offset_Val, Factor_Val)
        

        
        if min_val_db == 0 and max_val_db == 0:
            print(Signal_Name + " from " + Message_Name + " has min and max values to be 0. Hence cannot be considered for validation.")
            continue
        
        if Cycle_Time == 0:
            print(Signal_Name + " from " + Message_Name + " has cycle time to be 0. Test case is created.")
            
        #print(current[0])
        curr_func_name = "Test_Case_{}".format(Signal_Name)
        Test_Cases_Name.append(curr_func_name)
        f.write("\n[Export][TestCase][BreakOnFail(false)]\npublic static void {}(Test_MSExcel_Report report)\n{{\n".format(curr_func_name))

        while len(test_values_list) < Number_of_test_cases: #This Loop is for creating random values for signals. Hence these are used only for middle values. The number of middle values required can be adjusted by varying the Number_of_test_cases variable 
            if Data_Type == "boolean" or (max_val_db-min_val_db) < Number_of_test_cases:
                break
                #elif "float" in current[2]:
                    #val = random.uniform(float(current[3]), float(current[4]))
                    #if val not in test_values_list and str(val) != str(current[5]):
                    #test_values_list.append(float("{:.1f}".format(val))) 
            else:
                while True:            
                    val = randint(min_val_db,max_val_db)
                    val = raw_to_scaled(val, Offset_Val, Factor_Val)
                    if "float" not in Data_Type:
                        val = int(val)
                    if val not in test_values_list and  str(val) != str(Invalid_Val):
                        test_values_list.append(val) #need to add exception handling for non float signals having values less than Number_of_test_cases
                        break

        if str(Invalid_Val) == "-":
            #Add signal min value to the list
            if float(Min_Val) not in test_values_list: #and str(float(current[3])) != str(float(current[5])):
                if "float" not in Data_Type:
                    test_values_list.insert(0,int(Min_Val))
                else:
                    test_values_list.insert(0,float(Min_Val))
            #Add signal max value to the list
            if float(Max_Val) not in test_values_list: #and str(current[5]) != "-" and str(float(current[4])) != str(float(current[5])):
                if "float" not in Data_Type:
                    test_values_list.insert(len(test_values_list),int(Max_Val))
                else:
                    test_values_list.insert(len(test_values_list),float(Max_Val))
        else:
            #Add signal min value to the list
            if float(Min_Val) not in test_values_list and float(Min_Val) != float(Invalid_Val):
                if "float" not in Data_Type:
                    test_values_list.insert(0,int(Min_Val))
                else:
                    test_values_list.insert(0,float(Min_Val))
            #Add signal max value to the list
            if float(Max_Val) not in test_values_list and float(Max_Val) != float(Invalid_Val):
                if "float" not in Data_Type:
                    test_values_list.insert(len(test_values_list),int(Max_Val))
                else:
                    test_values_list.insert(len(test_values_list),float(Max_Val))

        if "float" in Data_Type:
            f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Pass";\n\tstring Test_Remarks = "";\n\tdouble Temp_Actual_Value = 0;\n\tdouble Temp_Input_Value = 0;\n')
            for k in test_values_list:
                Line = []
                Line.append('\n\tTemp_Input_Value = {};'.format(k))
                Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n")
                Line.append("\tSetSignal<NetworkDB.{}.{}.{}.{}>({});\n".format(FD_ver,Sending_Nodes[0].replace(" ",""),Message_Name,Signal_Name,k))
                # if Cycle_Time == 0 or Cycle_Time == None:
                #     Line.append("\tExecution.Wait({});\n".format("100")) #If Cycle Time is 0, then set 100 as cycle time. Same is to be applied in node panel in CANoe.
                # else:
                #     Line.append("\tExecution.Wait({});\n".format(Cycle_Time*2))
                #Line.append("\n\tif({}.Value.Equals({})) Report.TestStepPass(\"Pass\"); \n".format(current[0],k))
                Line.append("\tExecution.Wait({});\n".format("2500")) 
                Line.append('\tTemp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("{}");\n'.format(Global_Variable))
                Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                Line.append('\tTest_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\\n";\n')
                Line.append('\tif (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){\n')
                Line.append('\t\tTest_Result = "Fail";')
                Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                Line.append('\t}\n')
                #Line.append("\telse Report.TestStepFail(\"Expected Value:\" + {} + \"\tActual Value:\" + {}.Value);\n\n".format(k,current[0]))
                f.writelines(Line)
        else:
            f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Pass";\n\tstring Test_Remarks = "";\n\tlong Temp_Actual_Value = 0;\n\tlong Temp_Input_Value = 0;\n')
            for k in test_values_list:
                Line = []
                Line.append('\n\tTemp_Input_Value = {};'.format(k))
                Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n".format(k))
                Line.append("\tSetSignal<NetworkDB.{}.{}.{}.{}>({});\n".format(FD_ver,Sending_Nodes[0].replace(" ",""),Message_Name,Signal_Name,k))
                # if Cycle_Time == 0 or Cycle_Time == None:
                #     Line.append("\tExecution.Wait({});\n".format("100")) #If Cycle Time is 0, then set 100 as cycle time. Same is to be applied in node panel in CANoe.
                # else:
                #     Line.append("\tExecution.Wait({});\n".format(Cycle_Time*2))
                #Line.append("\n\tif({}.Value.Equals({})) Report.TestStepPass(\"Pass\"); \n".format(current[0],k))
                Line.append("\tExecution.Wait({});\n".format("2500")) 
                Line.append('\tTemp_Actual_Value = T32_CSharp_API.Readvariablevalue("{}");\n'.format(Global_Variable))
                Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                Line.append('\tTest_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\\n";\n')
                Line.append('\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){\n')
                Line.append('\t\tTest_Result = "Fail";')
                Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\\n";\n')
                Line.append('\t}\n')
     
                #Line.append("\telse Report.TestStepFail(\"Expected Value:\" + {} + \"\tActual Value:\" + {}.Value);\n\n".format(k,current[0]))
                f.writelines(Line)
        f.write('report.fields.Add(new Excel_Fields {{Test_Case_ID = {}, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal {} from the message {} in channel {}", Testcase_description = "Check whether the signal {} starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks }});\n'.format(i+1,Signal_Name,Message_Name,FD_ver,Signal_Name))
        f.write("}\n\n")
        test_values_list = [] #Clear the list for next signal

    f.write("\n[Export][TestSequence][BreakOnFail(false)]\npublic static void Automated_Testing_Rx_{}()\n{{\n".format(FD_ver))
    f.write("\tTest_MSExcel_Report report = new Test_MSExcel_Report();\n")
    f.write('\tstring Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_{}.xlsx";\n\n'.format(FD_ver))
    for tc in Test_Cases_Name:
        f.write("\t{}(report);\n".format(tc))
    f.write("\treport.Save_Excel(Report_Save_Path);\n")
    f.write("\n\n}\n")
    f.write("\n}\n")
    f.close()
    pass


def Generate_Test_Cases_Tx(Board, FD_ver, Input_Excel, Node_Name):
    Number_of_test_cases = 1 #Number of middle test cases which means excluding min and max value
    rand_val = 0
    test_values_list = []
    Test_Cases_Name = []
    f = open(Output_Test_Cases + "\Test_Cases_{}_{}_Tx.cs".format(Board,FD_ver),"w")

    f.write("using System;\nusing System.Collections.ObjectModel;\nusing Vector.Tools;\nusing Vector.CANoe.Runtime;\nusing Vector.CANoe.Threading;\nusing Vector.Diagnostics;\nusing Vector.Scripting.UI;\nusing Vector.CANoe.TFS;\nusing Vector.CANoe.VTS;\nusing NetworkDB;\nusing Connection;\n\n[TestClass]\npublic class AutomatedTestClass_Tx_{}\n{{\n".format(FD_ver))
    f.write("public static void SetSignal<T>(Int16 d) where T : class, IRuntimeValue\n{\n\tRuntimeObject<T>.Value = d;\n}\n")
    f.write("public static void SetSignal<T>(Double d) where T : class, IRuntimeValue\n{\n\tRuntimeObject<T>.Value = d;\n}\n")

    for i in range(0,len(Input_Excel)):
        current = [Input_Excel.at[i,'Signal Name'], Input_Excel.at[i,'Global Variable'], Input_Excel.at[i,'Data Type'], Input_Excel.at[i,'Min_Val'], Input_Excel.at[i,'Max_Val'], Input_Excel.at[i,'Invalid_Value'], Input_Excel.at[i,"Factor"]]
        #print(current[0])
        curr_func_name = "Signal_Name_{}()".format(current[0])
        Test_Cases_Name.append(curr_func_name)
        f.write("\n[Export][TestCase][BreakOnFail(false)]\npublic static void {}\n{{\n".format(curr_func_name))

        while len(test_values_list) < Number_of_test_cases: #This Loop is for creating random values for signals. Hence these are used only for middle values. The number of middle values required can be adjusted by varying the Number_of_test_cases variable 
            if current[2] == "boolean":
                break
                #elif "float" in current[2]:
                    #val = random.uniform(float(current[3]), float(current[4]))
                    #if val not in test_values_list and str(val) != str(current[5]):
                    #test_values_list.append(float("{:.1f}".format(val))) 
            else:
                while True:
                    if float(current[6]) < 1:
                        min_val = int(current[3]*10 / float(current[6]))
                        max_val = int(current[4]*10 / float(current[6]))
                        val = randint(min_val, max_val)
                        val_new = int(int(val/10) * float(current[6]))
                        if val_new not in test_values_list and str(val) != str(current[5]):
                            test_values_list.append(val_new) #need to add exception handling for non float signals having values less than Number_of_test_cases
                            break
                    else:
                        min_val = int(current[3])
                        max_val = int(current[4])
                        val = randint(min_val, max_val)
                        if ((val % current[6])==0) and val not in test_values_list and str(val) != str(current[5]):
                            test_values_list.append(val) #need to add exception handling for non float signals having values less than Number_of_test_cases
                            break

        if str(current[5]) == "-":
            #Add signal min value to the list
            if float(current[3]) not in test_values_list: #and str(float(current[3])) != str(float(current[5])):
                test_values_list.insert(0,current[3])
            #Add signal max value to the list
            if float(current[4]) not in test_values_list: #and str(current[5]) != "-" and str(float(current[4])) != str(float(current[5])):
                test_values_list.insert(len(test_values_list),current[4])
        else:
            #Add signal min value to the list
            if float(current[3]) not in test_values_list and float(current[3]) != float(current[5]):
                test_values_list.insert(0,current[3])
            #Add signal max value to the list
            if float(current[4]) not in test_values_list and float(current[4]) != float(current[5]):
                test_values_list.insert(len(test_values_list),current[4])
        if "float" in current[2]:
            for k in test_values_list:
                Line = []
                Line.append("\n\tReport.TestCaseComment(\"Modifying the value to {}\");\n".format(k))
                Line.append('\tTestFunction.COMRxTxVariableTests.WriteVariableValue("{}",{});\n'.format(current[1],k))
                Line.append("\tExecution.Wait(1500);\n")#Execution Time Needs to be dependent on Signal Timeout in Excel sheet
                Line.append("\n\tif(NetworkDB.{}.{}.Value.Equals({})) Report.TestStepPass(\"Pass\"); \n".format(Node_Name,current[0],k))
                Line.append("\telse Report.TestStepFail(\"Expected Value:\" + {} + \"\tActual Value:\" + NetworkDB.{}.{}.Value);\n\n".format(k,Node_Name,current[0]))
            #For Rx Line.append("\tTestFunction.COM_Rx_Variable.ReadvariablevalueDouble(\"{}\",{});\n".format(current[1],k))
                
                f.writelines(Line)
        else:
            for k in test_values_list:
                Line = []
                Line.append("\n\tReport.TestCaseComment(\"Modifying the value to {}\");\n".format(k))
                Line.append('\tTestFunction.COMRxTxVariableTests.WriteVariableValue("{}",{});\n'.format(current[1],k))
            #For Rx Line.append("\tSetSignal<{}>({});\n".format(current[0],k))
                Line.append("\tExecution.Wait(1500);\n")#Execution Time Needs to be dependent on Signal Timeout in Excel sheet
                Line.append("\n\tif(NetworkDB.{}.{}.Value.Equals({})) Report.TestStepPass(\"Pass\"); \n".format(Node_Name,current[0],k))
                Line.append("\telse Report.TestStepFail(\"Expected Value:\" + {} + \"\tActual Value:\" + NetworkDB.{}.{}.Value);\n\n".format(k,Node_Name,current[0]))
                #For Rx Line.append("\tTestFunction.COM_Rx_Variable.Readvariablevalue(\"{}\",{});\n".format(current[1],k))
                
                f.writelines(Line)
        f.write("}\n\n")
        test_values_list = [] #Clear the list for next signal

    f.write("\n[Export][TestSequence][BreakOnFail(false)]\npublic static void Signal_Testing_Tx_{}()\n{{\n".format(FD_ver))

    for tc in Test_Cases_Name:
        f.write("\n\t{};".format(tc))
        
    f.write("\n\n}\n")
    f.write("\n}\n")
    f.close()
    pass

def Create_Test_Cases_Tx(Board, DBC_Folder):
    init_DBCs(DBC_Folder)
    FD_Available = get_FD_ver_input(Board)
    Node_Name = get_Node_Name(Board)
    
    for FD_ver in FD_Available:
        df = Gather_Required_Information(Board,DBC_Folder,FD_ver,Node_Name,"Tx")
        if df == -1:
            continue
        Generate_Test_Cases_Tx(Board,FD_ver,df,Node_Name)
        print(f"Generated Test Cases for {Board} {FD_ver} Tx")
    pass

def Create_Test_Cases_Rx(Board, DBC_Folder):
    init_DBCs(DBC_Folder)
    FD_Available = get_FD_ver_input(Board)
    Node_Name = get_Node_Name(Board)
    for FD_ver in FD_Available:
        ret_val,df = Gather_Required_Information(Board,DBC_Folder,FD_ver,Node_Name,"Rx")
        if ret_val == -1:
            continue
        Generate_Test_Cases_Rx(Board,FD_ver,df,Node_Name)
        print(f"\nGenerated Test Cases for {Board} {FD_ver} Rx\n")
    pass