from Global_Declarations import (
    read_excel,
    get_FD_ver_input,
    np,
    randint,
    OutputFiles
)

def scaled_to_raw(val, offset, factor): 
    prelim = ((val - offset) / factor)
    return int(prelim)

def raw_to_scaled(val, offset, factor):
    scaled_value  = (val*factor) + offset
    return scaled_value
    
def type_Cast_to_DataType(scaled_value,data_type):
    if data_type == "boolean":
        return np.uint8(scaled_value)
    elif data_type == "uint8":
        return np.uint8(scaled_value)
    elif data_type == "uint16":
        return np.uint16(scaled_value)
    elif data_type == "uint32": 
        return np.uint32(scaled_value)
    elif data_type == "uint64":
        return np.uint64(scaled_value)
    elif data_type == "sint8":
        return np.int8(scaled_value)
    elif data_type == "sint16":
        return np.int16(scaled_value)
    elif data_type == "sint32":
        return np.int32(scaled_value)
    elif data_type == "sint64":
        return np.int64(scaled_value)
    elif data_type == "float32":
        return np.float32(scaled_value)
    elif data_type == "float64":
        return np.float64(scaled_value)
    else:
        print("Data Type: " + str(data_type) + " is not defined. Typecasting it as uint64 instead")
        return np.uint64(scaled_value)
    
def Create_Test_Cases_Tx(Board):
    while True:
        try:
            input_Excel = read_excel(OutputFiles + "/Test_Information_" + Board + ".xlsx",sheet_name="Tx")
            break
        except PermissionError:
            input("Please close the file: " + OutputFiles + "/Test_Information_" + Board + ".xlsx" + " and press enter.")
            
    FD_ver_available = get_FD_ver_input(Board)
    for FD_ver in FD_ver_available:
        Input_Excel = input_Excel[input_Excel["FD Channel"] == FD_ver]
        Input_Excel = Input_Excel.reset_index(drop=True)
        Number_of_test_cases = 2 #Number of middle test cases which means excluding min and max value
        test_values_list = []
        Test_Cases_Name = []
        f = open(OutputFiles + "\Test_Cases_{}_{}_Tx.cs".format(Board,FD_ver),"w")
        f.write("using System;\nusing System.Collections.ObjectModel;\nusing Vector.Tools;\nusing Vector.CANoe.Runtime;\nusing Vector.CANoe.Threading;\nusing Vector.Diagnostics;\nusing Vector.Scripting.UI;\nusing Vector.CANoe.TFS;\nusing Vector.CANoe.VTS;\nusing NetworkDB;\nusing Trace32_API;\nusing Report_Generation;\n\n[TestClass]\npublic class AutomatedTestClass_Tx_{}\n{{\n".format(FD_ver))
        f.write("public static void SetSignal<T>(Int16 d) where T : class, IRuntimeValue\n{\n\tRuntimeObject<T>.Value = d;\n}\n")
        f.write("public static void SetSignal<T>(Double d) where T : class, IRuntimeValue\n{\n\tRuntimeObject<T>.Value = d;\n}\n") 

        for i in range(0,len(Input_Excel)):
            Global_Variable = Input_Excel.at[i,"Test Variable"]
            Signal_Name = Input_Excel.at[i,"Signal Name"]
            Data_Type = Input_Excel.at[i,"Data Type"]
            Min_Val = Input_Excel.at[i,"Minimum Value"]
            Max_Val = Input_Excel.at[i,"Maximum Value"]
            Invalid_Val = Input_Excel.at[i,"Invalid Value"]
            Message_Name = Input_Excel.at[i,"Message Name"]
            Offset_Val = Input_Excel.at[i,"Offset"]
            Factor_Val = Input_Excel.at[i,"Factor"]
            Node_Name = Input_Excel.at[i,"Sending Nodes"]
            Port_Name = Input_Excel.at[i,"Port Name"]
            Signal_Type = Input_Excel.at[i,"Signal Type"]
            Invalidation_Policy = Input_Excel.at[i,"Invalidation Policy"]
            
            if Factor_Val == 0 or None:
                print("Factor value is invalid for " + Signal_Name + " from " + Message_Name + " in " + FD_ver)
                continue
            
            if Max_Val == None:
                Max_Val = 0
                
            if Min_Val == None:
                Min_Val = 0
                
            #print(current[0])
            if Signal_Type == "Signal" or Signal_Type == "Vld":
                curr_func_name = "Test_Case_{}".format(Port_Name)
            elif Signal_Type == "Packet":
                curr_func_name = "Test_Case_{}".format(Signal_Name + "_" + Port_Name)
            else:
                curr_func_name = "Test_Case_{}".format(Port_Name)
                
            Test_Cases_Name.append(curr_func_name)
            f.write("\n[Export][TestCase][BreakOnFail(false)]\npublic static void {}(Test_MSExcel_Report report)\n{{\n".format(curr_func_name))
            if Signal_Type == "Signal":
                f.write('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable.replace("_Test","_Vld_Test"),1))
            if Signal_Type == "Signal" or Signal_Type == "Packet":
                f.write("\t")
                while len(test_values_list) < Number_of_test_cases: #This Loop is for creating random values for signals. Hence these are used only for middle values. The number of middle values required can be adjusted by varying the Number_of_test_cases variable 
                    if Data_Type == "boolean":
                        break
                        #elif "float" in current[2]:
                            #val = random.uniform(float(current[3]), float(current[4]))
                            #if val not in test_values_list and str(val) != str(current[5]):
                            #test_values_list.append(float("{:.1f}".format(val))) 
                    else:
                        while True:            
                            min_val_db = scaled_to_raw(Min_Val, Offset_Val, Factor_Val)
                            max_val_db = scaled_to_raw(Max_Val, Offset_Val, Factor_Val)
                            val = randint(min_val_db,max_val_db)
                            val = raw_to_scaled(val, Offset_Val, Factor_Val)
                            val = type_Cast_to_DataType(val,Data_Type)
                            if val not in test_values_list and  str(val) != str(Invalid_Val):
                                test_values_list.append(val) #need to add exception handling for non float signals having values less than Number_of_test_cases
                                break

                    #Add signal min value to the list
                if type_Cast_to_DataType(Min_Val,Data_Type) not in test_values_list: #and str(float(current[3])) != str(float(current[5])):
                    test_values_list.insert(0,type_Cast_to_DataType(Min_Val,Data_Type))
                #Add signal max value to the list
                if type_Cast_to_DataType(Max_Val,Data_Type) not in test_values_list: #and str(current[5]) != "-" and str(float(current[4])) != str(float(current[5])):
                    test_values_list.insert(len(test_values_list),type_Cast_to_DataType(Max_Val,Data_Type))
            
                if "float" in Data_Type:
                    f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Pass";\n\tstring Test_Remarks = "";\n\tdouble Temp_Actual_Value = 0;\n\tdouble Temp_Input_Value = 0;\n')
                    for k in test_values_list:
                        k=float(k)
                        Line = []
                        Line.append('\n\tTemp_Input_Value = Math.Round({},2);'.format(k))
                        Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n")
                        Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable,k))
                        Line.append("\tExecution.Wait(3500);\n")#Execution Time Needs to be dependent on Signal Timeout in Excel sheet
                        Line.append('\tTemp_Actual_Value = Math.Round(NetworkDB.{}.{}.{}.{}.Value,2);\n'.format(FD_ver,Node_Name,Message_Name,Signal_Name))
                        Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                        Line.append('\tTest_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\\n";\n')
                        Line.append('\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){\n')
                        Line.append('\t\tTest_Result = "Fail";')
                        Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                        Line.append('\t}\n')
                        
                        f.writelines(Line)
                else:
                    f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Pass";\n\tstring Test_Remarks = "";\n\tlong Temp_Actual_Value = 0;\n\tlong Temp_Input_Value = 0;\n')
                    for k in test_values_list:
                        Line = []
                        Line.append('\n\tTemp_Input_Value = {};'.format(int(k)))
                        Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n")
                        Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable,int(k)))
                        Line.append("\tExecution.Wait(3500);\n")#Execution Time Needs to be dependent on Signal Timeout in Excel sheet
                        Line.append('\tTemp_Actual_Value = (long)(NetworkDB.{}.{}.{}.{}.Value);\n'.format(FD_ver,Node_Name,Message_Name,Signal_Name))
                        Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                        Line.append('\tTest_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\\n";\n')
                        Line.append('\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){\n')
                        Line.append('\t\tTest_Result = "Fail";')
                        Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                        Line.append('\t}\n')
                        
                        f.writelines(Line)
                f.write('report.fields.Add(new Excel_Fields {{Test_Case_ID = {}, Categorization = "Software feature", Testcase_objective = "To test the CAN port: {} from the message {} in channel {}", Testcase_description = "Check whether the signal {} starting from the CAN physical Layer is connected correctly till the Application component.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks }});\n'.format(i+1,Port_Name,Message_Name,FD_ver,Signal_Name))
                f.write("}\n\n")
            elif Signal_Type == "Not Testable":
                f.write('report.fields.Add(new Excel_Fields {{Test_Case_ID = {}, Categorization = "Software feature", Testcase_objective = "To test the CAN port: {}", Testcase_description = "Check whether the port {} starting from the CAN physical Layer is connected correctly till the Application component.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = "NA", Expected_output = "NA",Actual_output = "NA",Test_result = "Not Tested", Screenshots = "", Remarks = "Port cannot be found in mapping sheet." }});\n'.format(i+1,Port_Name,Port_Name))
                f.write("}\n\n")
            else: #If signal type is Vld
                if Data_Type == "boolean":
                    val = 1
                else:
                    while True:            
                        min_val_db = scaled_to_raw(Min_Val, Offset_Val, Factor_Val)
                        max_val_db = scaled_to_raw(Max_Val, Offset_Val, Factor_Val)
                        val = randint(min_val_db,max_val_db)
                        val = raw_to_scaled(val, Offset_Val, Factor_Val)
                        if str(val) != str(Invalid_Val):
                            break
                if "float" in Data_Type:
                    f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Pass";\n\tstring Test_Remarks = "";\n\tdouble Temp_Actual_Value = 0;\n\tdouble Temp_Input_Value = 0;\n')
                    Line = []
                    Line.append('\n\tTemp_Input_Value = {};'.format(1))                    
                    Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n")
                    Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable,1))
                    Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable.replace("_Vld_Test","_Test"),Min_Val))
                    Line.append("\tExecution.Wait(3500);\n")#Execution Time Needs to be dependent on Signal Timeout in Excel sheet
                    Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable.replace("_Vld_Test","_Test"),val))
                    Line.append("\tExecution.Wait(3500);\n")
                    Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                    
                    Line.append('\n\tTemp_Input_Value = {};'.format(0))
                    Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n")
                    Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable,0))
                    Line.append("\tExecution.Wait(3500);\n")
                    Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                    
                    Line.append('\tTemp_Actual_Value = Math.Round((NetworkDB.{}.{}.{}.{}.Value),2);\n'.format(FD_ver,Node_Name,Message_Name,Signal_Name))
                    
                    if Invalidation_Policy == "Keep":
                        Line.append('\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,{}))){{\n'.format(type_Cast_to_DataType(Invalid_Val,Data_Type)))
                        Line.append('\t\tTest_Result = "Fail";')
                        Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                        Line.append('\t}\n')  
                    else:
                        Line.append('\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,Math.Round({},2)))){{\n'.format(type_Cast_to_DataType(val,Data_Type)))
                        Line.append('\t\tTest_Result = "Fail";')
                        Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                        Line.append('\t}\n')  
                    
                    f.writelines(Line)
                else:
                    f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Pass";\n\tstring Test_Remarks = "";\n\tlong Temp_Actual_Value = 0;\n\tlong Temp_Input_Value = 0;\n')
                    Line = []
                    Line.append('\n\tTemp_Input_Value = {};'.format(1))
                    
                    Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n")
                    Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable,1))
                    Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable.replace("_Vld_Test","_Test"),Min_Val))
                    Line.append("\tExecution.Wait(3500);\n")#Execution Time Needs to be dependent on Signal Timeout in Excel sheet
                    Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable.replace("_Vld_Test","_Test"),val))
                    Line.append("\tExecution.Wait(3500);\n")
                    Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                    
                    Line.append('\n\tTemp_Input_Value = {};'.format(0))
                    Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n")
                    Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable,0))
                    Line.append("\tExecution.Wait(3500);\n")
                    Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                    
                    Line.append('\tTemp_Actual_Value = (long)(NetworkDB.{}.{}.{}.{}.Value);\n'.format(FD_ver,Node_Name,Message_Name,Signal_Name))
                    
                    if Invalidation_Policy == "Keep":
                        Line.append('\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,{}))){{\n'.format(type_Cast_to_DataType(Invalid_Val,Data_Type)))
                        Line.append('\t\tTest_Result = "Fail";')
                        Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                        Line.append('\t}\n')  
                    else:
                        Line.append('\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,{}))){{\n'.format(type_Cast_to_DataType(val,Data_Type)))
                        Line.append('\t\tTest_Result = "Fail";')
                        Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                        Line.append('\t}\n')  
                                                
                    f.writelines(Line)
                f.write('report.fields.Add(new Excel_Fields {{Test_Case_ID = {}, Categorization = "Software feature", Testcase_objective = "To test the CAN Vld port: {} from the message {} in channel {}", Testcase_description = "Check whether the signal {} starting from the CAN physical Layer is connected correctly till the Application component.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = "The signal {} should send {} when {} is set to 0.",Actual_output = "NA",Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks }});\n'.format(i+1,Port_Name,Message_Name,FD_ver,Signal_Name,Signal_Name, "Invalid Value: " + str(Invalid_Val) if Invalidation_Policy == "Keep" else "last sent value, ie " + str(val),Port_Name))
                f.write("}\n\n")
            test_values_list = [] #Clear the list for next signal

        f.write("\n[Export][TestSequence][BreakOnFail(false)]\npublic static void Automated_Tx_Testing_{}()\n{{\n".format(FD_ver))
        f.write("\tTest_MSExcel_Report report = new Test_MSExcel_Report();\n")
        f.write('\tstring Report_Save_Path = @"D:\San\Automation_Test_Reports\EDM_V9\{}\Test_CAN_Report_Tx_{}.xlsx";\n\n'.format(Board.replace("EDM_","").upper(),FD_ver))
        for tc in Test_Cases_Name:
            f.write("\t{}(report);\n".format(tc))
        f.write("\treport.Save_Excel(Report_Save_Path);\n")
        f.write("\n\n}\n")
        f.write("\n}\n")
        f.close()
    pass

def Create_Test_Cases_Rx(Board):
    while True:
        try:
            input_Excel = read_excel(OutputFiles + "/Test_Information_" + Board + ".xlsx",sheet_name="Rx")
            break
        except PermissionError:
            input("Please close the file: " + OutputFiles + "/Test_Information_" + Board + ".xlsx" + " and press enter.")
            
    FD_ver_available = get_FD_ver_input(Board)
    
    for FD_ver in FD_ver_available:
        Input_Excel = input_Excel[input_Excel["FD Channel"] == FD_ver]
        Input_Excel = Input_Excel.reset_index(drop=True)
        Number_of_test_cases = 1 #Number of middle test cases which means excluding min and max value
        test_values_list = []
        Test_Cases_Name = []
        f = open(OutputFiles + "\Test_Cases_{}_{}_Rx.cs".format(Board,FD_ver),"w")
        f.write("using System;\nusing System.Collections.ObjectModel;\nusing Vector.Tools;\nusing Vector.CANoe.Runtime;\nusing Vector.CANoe.Threading;\nusing Vector.Diagnostics;\nusing Vector.Scripting.UI;\nusing Vector.CANoe.TFS;\nusing Vector.CANoe.VTS;\nusing NetworkDB;\nusing Trace32_API;\nusing Report_Generation;\n\n[TestClass]\npublic class AutomatedTestClass_Rx_{}\n{{\n".format(FD_ver))
        f.write("public static void SetSignal<T>(Int16 d) where T : class, IRuntimeValue\n{\n\tRuntimeObject<T>.Value = d;\n}\n")
        f.write("public static void SetSignal<T>(Double d) where T : class, IRuntimeValue\n{\n\tRuntimeObject<T>.Value = d;\n}\n") 

        for i in range(0,len(Input_Excel)):
            Global_Variable = Input_Excel.at[i,"Test Variable"]
            Signal_Name = Input_Excel.at[i,"Signal Name"]
            Data_Type = Input_Excel.at[i,"Data Type"]
            Min_Val = Input_Excel.at[i,"Minimum Value"]
            Max_Val = Input_Excel.at[i,"Maximum Value"]
            Invalid_Val = Input_Excel.at[i,"Invalid Value"]
            Message_Name = Input_Excel.at[i,"Message Name"]
            Offset_Val = Input_Excel.at[i,"Offset"]
            Factor_Val = Input_Excel.at[i,"Factor"]
            Signal_Timeout = Input_Excel.at[i,"Signal Timeout"]
            Port_Name = Input_Excel.at[i,"Port Name"]
            Signal_Type = Input_Excel.at[i,"Signal Type"]

            if Factor_Val == 0 or None:
                print("Factor value is invalid for " + Signal_Name + " from " + Message_Name + " in " + FD_ver)
                continue
            
            if Max_Val == None:
                Max_Val = 0
                
            if Min_Val == None:
                Min_Val = 0
                
            #print(current[0])
            if Signal_Type == "Signal" or Signal_Type == "TO":
                curr_func_name = "Test_Case_{}".format(Port_Name)
                Sending_Nodes = eval(Input_Excel.at[i,"Sending Nodes"])
            elif Signal_Type == "Packet":
                curr_func_name = "Test_Case_{}".format(Signal_Name + "_" + Port_Name)
                Sending_Nodes = eval(Input_Excel.at[i,"Sending Nodes"])
            else:
                curr_func_name = "Test_Case_{}".format(Port_Name)
                
            Test_Cases_Name.append(curr_func_name)
            f.write("\n[Export][TestCase][BreakOnFail(false)]\npublic static void {}(Test_MSExcel_Report report)\n{{\n".format(curr_func_name))
            if Signal_Type == "Signal" or Signal_Type == "Packet":
                f.write("\tNetworkDB.{}.Frames.{} f = new NetworkDB.{}.Frames.{}".format(FD_ver,Message_Name,FD_ver,Message_Name))
                f.write("{};\n")
                
                while len(test_values_list) < Number_of_test_cases: #This Loop is for creating random values for signals. Hence these are used only for middle values. The number of middle values required can be adjusted by varying the Number_of_test_cases variable 
                    if Data_Type == "boolean":
                        break
                        #elif "float" in current[2]:
                            #val = random.uniform(float(current[3]), float(current[4]))
                            #if val not in test_values_list and str(val) != str(current[5]):
                            #test_values_list.append(float("{:.1f}".format(val))) 
                    else:
                        while True:            
                            min_val_db = scaled_to_raw(Min_Val, Offset_Val, Factor_Val)
                            max_val_db = scaled_to_raw(Max_Val, Offset_Val, Factor_Val)
                            val = randint(min_val_db,max_val_db)
                            val = raw_to_scaled(val, Offset_Val, Factor_Val)
                            val = type_Cast_to_DataType(val,Data_Type)
                            if val not in test_values_list and  str(val) != str(Invalid_Val):
                                test_values_list.append(val) #need to add exception handling for non float signals having values less than Number_of_test_cases
                                break
                if str(Invalid_Val) == "-":
                    #Add signal min value to the list
                    if float(Min_Val) not in test_values_list: #and str(float(current[3])) != str(float(current[5])):
                        test_values_list.insert(0,Min_Val)
                    #Add signal max value to the list
                    if float(Max_Val) not in test_values_list: #and str(current[5]) != "-" and str(float(current[4])) != str(float(current[5])):
                        test_values_list.insert(len(test_values_list),Max_Val)
                else:
                    #Add signal min value to the list
                    if float(Min_Val) not in test_values_list and float(Min_Val) != float(Invalid_Val):
                        test_values_list.insert(0,Min_Val)
                    #Add signal max value to the list
                    if float(Max_Val) not in test_values_list and float(Max_Val) != float(Invalid_Val):
                        test_values_list.insert(len(test_values_list),Max_Val)
                if "float" in Data_Type:
                    f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Pass";\n\tstring Test_Remarks = "";\n\tdouble Temp_Actual_Value = 0;\n\tdouble Temp_Input_Value = 0;\n')
                    for k in test_values_list:
                        k=float(k)
                        Line = []
                        Line.append("\t\nCaplTestFunctions.CAPL_APIs.DisableMessage(f.ID,{});\n".format(2 if FD_ver == "FD5" else 5))
                        Line.append("\tExecution.Wait({});\n".format("200")) 
                        Line.append("\tCaplTestFunctions.CAPL_APIs.EnableMessage(f.ID,{});\n".format(2 if FD_ver == "FD5" else 5))
                        Line.append('\n\tTemp_Input_Value = Math.Round({},2);'.format(k))
                        Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n".format(k))
                        Line.append("\tSetSignal<NetworkDB.{}.{}.{}.{}>({});\n".format(FD_ver,Sending_Nodes[0].replace(" ",""),Message_Name,Signal_Name,k))
                        # if Cycle_Time == 0 or Cycle_Time == None:
                        #     Line.append("\tExecution.Wait({});\n".format("100")) #If Cycle Time is 0, then set 100 as cycle time. Same is to be applied in node panel in CANoe.
                        # else:
                        #     Line.append("\tExecution.Wait({});\n".format(Cycle_Time*2))
                        #Line.append("\n\tif({}.Value.Equals({})) Report.TestStepPass(\"Pass\"); \n".format(current[0],k))
                        Line.append("\tExecution.Wait({});\n".format("3500")) 
                        Line.append('\tTemp_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble("{}"),2);\n'.format(Global_Variable))
                        Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                        Line.append('\tTest_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\\n";\n')
                        Line.append('\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){\n')
                        Line.append('\t\tTest_Result = "Fail";')
                        Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                        Line.append('\t}\n')
                        #Line.append("\telse Report.TestStepFail(\"Expected Value:\" + {} + \"\tActual Value:\" + {}.Value);\n\n".format(k,current[0]))
                        f.writelines(Line)
                else:
                    f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Pass";\n\tstring Test_Remarks = "";\n\tlong Temp_Actual_Value = 0;\n\tlong Temp_Input_Value = 0;\n')
                    for k in test_values_list:
                        Line = []
                        Line.append("\t\nCaplTestFunctions.CAPL_APIs.DisableMessage(f.ID,{});\n".format(2 if FD_ver == "FD5" else 5))
                        Line.append("\tExecution.Wait({});\n".format("200")) 
                        Line.append("\tCaplTestFunctions.CAPL_APIs.EnableMessage(f.ID,{});\n".format(2 if FD_ver == "FD5" else 5))
                        Line.append('\n\tTemp_Input_Value = {};'.format(int(k)))
                        Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n".format(int(k)))
                        Line.append("\tSetSignal<NetworkDB.{}.{}.{}.{}>({});\n".format(FD_ver,Sending_Nodes[0].replace(" ",""),Message_Name,Signal_Name,int(k)))
                        # if Cycle_Time == 0 or Cycle_Time == None:
                        #     Line.append("\tExecution.Wait({});\n".format("100")) #If Cycle Time is 0, then set 100 as cycle time. Same is to be applied in node panel in CANoe.
                        # else:
                        #     Line.append("\tExecution.Wait({});\n".format(Cycle_Time*2))
                        #Line.append("\n\tif({}.Value.Equals({})) Report.TestStepPass(\"Pass\"); \n".format(current[0],k))
                        Line.append("\tExecution.Wait({});\n".format("3500")) 
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
            elif Signal_Type == "Not Testable":
                f.write('report.fields.Add(new Excel_Fields {{Test_Case_ID = {}, Categorization = "Software feature", Testcase_objective = "To test the CAN port: {}", Testcase_description = "Check whether the port {} starting from the CAN physical Layer is connected correctly till the Application component.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = "NA", Expected_output = "NA",Actual_output = "NA",Test_result = "Not Tested", Screenshots = "", Remarks = "Port cannot be found in mapping sheet." }});\n'.format(i+1,Port_Name,Port_Name))
                f.write("}\n\n")
            else: #If signal type isTO
                f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Pass";\n\tstring Test_Remarks = "";\n\tlong Temp_Actual_Value = 0;\n\tlong Temp_Input_Value = 0;\n')
                f.write("\tNetworkDB.{}.Frames.{} f = new NetworkDB.{}.Frames.{}".format(FD_ver,Message_Name,FD_ver,Message_Name))
                f.write("{};\n")
                f.write("\t\nReport.TestCaseComment(\"Sending the message and observing the TO value \");\n")
                f.write("\tCaplTestFunctions.CAPL_APIs.EnableMessage(f.ID,{});\n".format(2 if FD_ver == "FD5" else 5))
                f.write("\tExecution.Wait({});\n".format("3500"))
                f.write('\tTemp_Actual_Value = T32_CSharp_API.Readvariablevalue("{}");\n'.format(Global_Variable))
                f.write("\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,0))){\n")    
                f.write('\t\tTest_Result = "Fail";')
                f.write('\t\tTest_Remarks = Test_Remarks + "The TO is 1 when message is sent.";\n\t}\n')     
                
                f.write("\tReport.TestCaseComment(\"Disabling the sending of message and observing the TO value \");\n")
                f.write("\tCaplTestFunctions.CAPL_APIs.DisableMessage(f.ID,{});\n".format(2 if FD_ver == "FD5" else 5))
                f.write("\tExecution.Wait({});\n".format(int(Signal_Timeout + (Signal_Timeout*10/100))))
                f.write('\tTemp_Actual_Value = T32_CSharp_API.Readvariablevalue("{}");\n'.format(Global_Variable))
                f.write("\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,1))){\n")    
                f.write('\t\tTest_Result = "Fail";')
                f.write('\t\tTest_Remarks = Test_Remarks + "The TO is 0 when message is not sent, even after the timeout period.";\n\t}\n')     
                
                f.write('report.fields.Add(new Excel_Fields {{Test_Case_ID = {}, Categorization = "Software feature", Testcase_objective = "To test the CAN TO port {} from the message {} in channel {}", Testcase_description = "Check whether the signal {} starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = "NA", Expected_output = "The TO port: {} value should be 1 after it\'s timeout period when the signal: {} is not sent and 0 when the signal: {} is sent.",Actual_output = "NA",Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks }});\n'.format(i+1,Port_Name,Message_Name,FD_ver,Signal_Name, Port_Name, Signal_Name, Signal_Name))
                f.write("}\n\n")
            test_values_list = [] #Clear the list for next signal

        f.write("\n[Export][TestSequence][BreakOnFail(false)]\npublic static void Automated_Testing_Rx_{}()\n{{\n".format(FD_ver))
        f.write("\tTest_MSExcel_Report report = new Test_MSExcel_Report();\n")
        f.write('\tstring Report_Save_Path = @"D:\San\Automation_Test_Reports\EDM_V9\{}\Test_CAN_Report_Rx_{}.xlsx";\n\n'.format(Board.replace("EDM_","").upper(),FD_ver))
        for tc in Test_Cases_Name:
            f.write("\t{}(report);\n".format(tc))
        f.write("\treport.Save_Excel(Report_Save_Path);\n")
        f.write("\n\n}\n")
        f.write("\n}\n")
        f.close()
    pass

def Test():
    Create_Test_Cases_Tx("EDM_MCPA")
    Create_Test_Cases_Rx("EDM_MCPA")
    pass

if __name__ == "__main__":
    Test()