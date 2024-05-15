import pandas as pd
import os
import cantools.database as db
import random 

Working_Dir = os.getcwd() 
Inputs_Folder = Working_Dir + "/Inputs"
Outputs_Folder = Working_Dir + "/Outputs"
DBC_Folder = Inputs_Folder + "/DBCs"

Tx_Input_Excel = Inputs_Folder + "/Global_Variables_to_be_declared_sorted_Tx.xlsx"
Rx_Input_Excel = Inputs_Folder + "/Global_Variables_to_be_declared_sorted_Rx.xlsx"


DBC_FD3 = db.load_file(DBC_Folder + "/" + "FD3" + ".dbc")
Messages_Rx_FD3 = [msg for msg in DBC_FD3.messages if "EVCU2" in msg.receivers]
Messages_Tx_FD3 = [msg for msg in DBC_FD3.messages if "EVCU2" in msg.senders]
DBC_FD5 = db.load_file(DBC_Folder + "/" + "FD5" + ".dbc")
Messages_Rx_FD5 = [msg for msg in DBC_FD5.messages if "EVCU2" in msg.receivers]
Messages_Tx_FD5 = [msg for msg in DBC_FD5.messages if "EVCU2" in msg.senders]
DBC_FD11 = db.load_file(DBC_Folder + "/" + "FD11" + ".dbc")
Messages_Rx_FD11 = [msg for msg in DBC_FD11.messages if "EVCU2" in msg.receivers]
Messages_Tx_FD11 = [msg for msg in DBC_FD11.messages if "EVCU2" in msg.senders]
DBC_FD14 = db.load_file(DBC_Folder + "/" + "FD14" + ".dbc")
Messages_Rx_FD14 = [msg for msg in DBC_FD14.messages if "EVCU2" in msg.receivers]
Messages_Tx_FD14 = [msg for msg in DBC_FD14.messages if "EVCU2" in msg.senders]
DBC_FD16 = db.load_file(DBC_Folder + "/" + "FD16" + ".dbc")
Messages_Rx_FD16 = [msg for msg in DBC_FD16.messages if "EVCU2" in msg.receivers]
Messages_Tx_FD16 = [msg for msg in DBC_FD16.messages if "EVCU2" in msg.senders]
        
Message_Name = []
Sending_Node = []
Factor = []
Offset = []


def gather_Required_Information_Rx():
    Message_Name.clear()
    Sending_Node.clear()
    Factor.clear()
    Offset.clear()
    Rx_Input_Excel_df = pd.read_excel(Rx_Input_Excel)

    for i in range(0, len(Rx_Input_Excel_df)):
        Signal_Name = Rx_Input_Excel_df.at[i,"Signal Name"]
        FD_ver = Rx_Input_Excel_df.at[i,"FD_Ver"]
        if FD_ver == "FD3":
            Messages = Messages_Rx_FD3
        elif FD_ver == "FD5":
            Messages = Messages_Rx_FD5
        elif FD_ver == "FD11":
            Messages = Messages_Rx_FD11
        elif FD_ver == "FD14":
            Messages = Messages_Rx_FD14
        elif FD_ver == "FD16":
            Messages = Messages_Rx_FD16
        
        Signal_Found = False
        
        for message in Messages:
            for signal in message.signals:
                if signal.name == Signal_Name:
                    Message_Name.append(message.name)
                    Factor.append(signal.scale)
                    Offset.append(signal.offset)
                    Sending_Node.append(message.senders)
                    Signal_Found = True
                    break
            if Signal_Found:
                print(str(Signal_Name) + " Done")
                break
        
        if not Signal_Found:
            print(str(Signal_Name) + "Not Found in " + FD_ver)
            Message_Name.append("Not Found")
            Factor.append("Not Found")
            Offset.append("Not Found")
            Sending_Node.append("Not Found")
        
    Rx_Input_Excel_df["Message_Name"] = Message_Name
    Rx_Input_Excel_df["Offset_Val"] = Offset
    Rx_Input_Excel_df["Factor_Val"] = Factor
    Rx_Input_Excel_df["Sending_Nodes"] = Sending_Node
    Rx_Input_Excel_df.to_excel(Outputs_Folder + "/Global_Variables_to_be_declared_sorted_Rx.xlsx",index=False)        
    pass

def gather_Required_Information_Tx():
    Message_Name.clear()
    Sending_Node.clear()
    Factor.clear()
    Offset.clear()
    Tx_Input_Excel_df = pd.read_excel(Tx_Input_Excel)

    for i in range(0, len(Tx_Input_Excel_df)):
        Signal_Name = Tx_Input_Excel_df.at[i,"Signal Name"]
        FD_ver = Tx_Input_Excel_df.at[i,"FD_Ver"]
        if FD_ver == "FD3":
            Messages = Messages_Tx_FD3
        elif FD_ver == "FD5":
            Messages = Messages_Tx_FD5
        elif FD_ver == "FD11":
            Messages = Messages_Tx_FD11
        elif FD_ver == "FD14":
            Messages = Messages_Tx_FD14
        elif FD_ver == "FD16":
            Messages = Messages_Tx_FD16
            
        Signal_Found = False
        
        for message in Messages:
            for signal in message.signals:
                if signal.name == Signal_Name:
                    Message_Name.append(message.name)
                    Factor.append(signal.scale)
                    Offset.append(signal.offset)
                    Signal_Found = True
                    break
            if Signal_Found:
                print(str(Signal_Name) + " Done")
                break
        
        if not Signal_Found:
            print(str(Signal_Name) + "Not Found in " + FD_ver)
            Message_Name.append("Not Found")
            Factor.append("Not Found")
            Offset.append("Not Found")
        
    Tx_Input_Excel_df["Message_Name"] = Message_Name
    Tx_Input_Excel_df["Offset_Val"] = Offset
    Tx_Input_Excel_df["Factor_Val"] = Factor
    Tx_Input_Excel_df.to_excel(Outputs_Folder + "/Global_Variables_to_be_declared_sorted_Tx.xlsx",index=False)        
    pass

def get_Signal_in_db(Signal_Name,Messages,Message_Name):
    for message in Messages:
        if message.name == Message_Name:
            for signal in message.signals:
                if signal.name == Signal_Name:
                    return signal
    pass

def scaled_to_raw(val, offset, factor): 
    prelim = ((val - offset) / factor)
    return int(prelim)

def raw_to_scaled(val, offset, factor):
    return (val*factor) + offset

def Generate_Test_Cases_Rx(Board, FD_ver, Input_Excel, Node_Name):
    Number_of_test_cases = 1 #Number of middle test cases which means excluding min and max value
    test_values_list = []
    Test_Cases_Name = []
    f = open(Outputs_Folder + "\Test_Cases_{}_{}_Rx.cs".format(Board,FD_ver),"w")
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
        Sending_Nodes = list(str(str(Input_Excel.at[i,"Sending_Nodes"]).translate(str.maketrans("[]'","   "))).split(','))
        if Factor_Val == 0 or None:
            print("Factor value is invalid for " + Signal_Name + " from " + Message_Name + " in " + FD_ver)
            continue
        
        if Max_Val == None:
            Max_Val = 0
            continue
            
        if Min_Val == None:
            Min_Val = 0
            continue
        
        #print(current[0])
        curr_func_name = "Test_Case_{}".format(Global_Variable)
        Test_Cases_Name.append(curr_func_name)
        f.write("\n[Export][TestCase][BreakOnFail(false)]\npublic static void {}(Test_MSExcel_Report report)\n{{\n".format(curr_func_name))

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
                    val = random.randint(min_val_db,max_val_db)
                    val = raw_to_scaled(val, Offset_Val, Factor_Val)
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
            f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Passed";\n\tstring Test_Remarks = "";\n\tdouble Temp_Actual_Value = 0;\n\tdouble Temp_Input_Value = 0;\n')
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
                Line.append('\tTemp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("{}");\n'.format(Global_Variable))
                Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                Line.append('\tTest_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\\n";\n')
                Line.append('\tif (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){\n')
                Line.append('\t\tTest_Result = "Failed";')
                Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                Line.append('\t}\n')
                #Line.append("\telse Report.TestStepFail(\"Expected Value:\" + {} + \"\tActual Value:\" + {}.Value);\n\n".format(k,current[0]))
                f.writelines(Line)
        else:
            f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Passed";\n\tstring Test_Remarks = "";\n\tlong Temp_Actual_Value = 0;\n\tlong Temp_Input_Value = 0;\n')
            for k in test_values_list:
                Line = []
                Line.append('\n\tTemp_Input_Value = {};'.format(int(k)))
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
                Line.append('\t\tTest_Result = "Failed";')
                Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\\n";\n')
                Line.append('\t}\n')
     
                #Line.append("\telse Report.TestStepFail(\"Expected Value:\" + {} + \"\tActual Value:\" + {}.Value);\n\n".format(k,current[0]))
                f.writelines(Line)
        f.write('report.fields.Add(new Excel_Fields {{Test_Case_ID = {}, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal {} from the message {} in channel {}", Testcase_description = "Check whether the signal {} starting from the CAN physical Layer is connected correctly till the Application layer.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Reset = "",Actual_output = Test_Actual_Values,Col_1="" ,Col_2="" ,Col_3="" ,Test_result = Test_Result, Remarks = Test_Remarks }});\n'.format(i+1,Signal_Name,Message_Name,FD_ver,Signal_Name))
        f.write("}\n\n")
        test_values_list = [] #Clear the list for next signal

    f.write("\n[Export][TestSequence][BreakOnFail(false)]\npublic static void Automated_Testing_Rx_{}()\n{{\n".format(FD_ver))
    f.write("\tTest_MSExcel_Report report = new Test_MSExcel_Report();\n")
    f.write('\tstring Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Rx_{}.xlsx";\n\n'.format(FD_ver))
    for tc in Test_Cases_Name:
        f.write("\t{}(report);\n".format(tc))
    f.write("\treport.Save_Excel(Report_Save_Path);\n")
    f.write("\n\n}\n")
    f.write("\n}\n")
    f.close()
    pass

def Generate_Test_Cases_Tx(Board, FD_ver, Input_Excel, Node_Name):
    Number_of_test_cases = 1 #Number of middle test cases which means excluding min and max value
    test_values_list = []
    Test_Cases_Name = []
    f = open(Outputs_Folder + "\Test_Cases_{}_{}_Tx.cs".format(Board,FD_ver),"w")
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
        
        if Factor_Val == 0 or None:
            print("Factor value is invalid for " + Signal_Name + " from " + Message_Name + " in " + FD_ver)
            continue
        
        if Max_Val == None:
            Max_Val = 0
            continue
            
        if Min_Val == None:
            Min_Val = 0
            continue
        #print(current[0])
        curr_func_name = "Test_Case_{}".format(Global_Variable)
        Test_Cases_Name.append(curr_func_name)
        f.write("\n[Export][TestCase][BreakOnFail(false)]\npublic static void {}(Test_MSExcel_Report report)\n{{\n".format(curr_func_name))

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
                    val = random.randint(min_val_db,max_val_db)
                    val = raw_to_scaled(val, Offset_Val, Factor_Val)
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
            f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Passed";\n\tstring Test_Remarks = "";\n\tdouble Temp_Actual_Value = 0;\n\tdouble Temp_Input_Value = 0;\n')
            for k in test_values_list:
                Line = []
                Line.append('\n\tTemp_Input_Value = {};'.format(k))
                Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n")
                Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable,k))
                Line.append("\tExecution.Wait(2500);\n")#Execution Time Needs to be dependent on Signal Timeout in Excel sheet
                Line.append('\tTemp_Actual_Value = NetworkDB.{}.{}.{}.{}.Value;\n'.format(FD_ver,Node_Name,Message_Name,Signal_Name))
                Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                Line.append('\tTest_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\\n";\n')
                Line.append('\tif (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){\n')
                Line.append('\t\tTest_Result = "Failed";')
                Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                Line.append('\t}\n')
            #For Rx Line.append("\tTestFunction.COM_Rx_Variable.ReadvariablevalueDouble(\"{}\",{});\n".format(current[1],k))
                
                f.writelines(Line)
        else:
            f.write('\tstring Test_Input_Values = "";\n\tstring Test_Actual_Values = "";\n\tstring Test_Result = "Passed";\n\tstring Test_Remarks = "";\n\tlong Temp_Actual_Value = 0;\n\tlong Temp_Input_Value = 0;\n')
            for k in test_values_list:
                Line = []
                Line.append('\n\tTemp_Input_Value = {};'.format(int(k)))
                Line.append("\n\tReport.TestCaseComment(\"Modifying the value to \" + Temp_Input_Value);\n")
                Line.append('\tT32_CSharp_API.WriteVariableValue("{}","{}");\n'.format(Global_Variable,int(k)))
                Line.append("\tExecution.Wait(2500);\n")#Execution Time Needs to be dependent on Signal Timeout in Excel sheet
                Line.append('\tTemp_Actual_Value = (long) (NetworkDB.{}.{}.{}.{}.Value);\n'.format(FD_ver,Node_Name,Message_Name,Signal_Name))
                Line.append('\tTest_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\\n";\n')
                Line.append('\tTest_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\\n";\n')
                Line.append('\tif (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){\n')
                Line.append('\t\tTest_Result = "Failed";')
                Line.append('\t\tTest_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\\n";\n')
                Line.append('\t}\n')
                
                f.writelines(Line)
        f.write('report.fields.Add(new Excel_Fields {{Test_Case_ID = {}, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal {} from the message {} in channel {}", Testcase_description = "Check whether the signal {} starting from the CAN physical Layer is connected correctly till the CAN Physical layer.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Reset="",Actual_output = Test_Actual_Values,Col_1="", Col_2="", Col_3="",Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks }});\n'.format(i+1,Signal_Name,Message_Name,FD_ver,Signal_Name))
        f.write("}\n\n")
        test_values_list = [] #Clear the list for next signal

    f.write("\n[Export][TestSequence][BreakOnFail(false)]\npublic static void Automated_Tx_Testing_{}()\n{{\n".format(FD_ver))
    f.write("\tTest_MSExcel_Report report = new Test_MSExcel_Report();\n")
    f.write('\tstring Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Tx_{}.xlsx";\n\n'.format(FD_ver))
    for tc in Test_Cases_Name:
        f.write("\t{}(report);\n".format(tc))
    f.write("\treport.Save_Excel(Report_Save_Path);\n")
    f.write("\n\n}\n")
    f.write("\n}\n")
    f.close()
    pass

def Tx(FD):
    gather_Required_Information_Tx()
    Tx_Input_Excel = pd.read_excel(Outputs_Folder + "/Global_Variables_to_be_declared_sorted_Tx.xlsx")
    for FD_ver in FD:
        Input_Excel = Tx_Input_Excel[Tx_Input_Excel["FD_Ver"] == FD_ver]
        Input_Excel = Input_Excel.reset_index(drop=None)
        Generate_Test_Cases_Tx("EVCU", FD_ver, Input_Excel, "EVCU2")
        print("Test Cases created for " + FD_ver)
    pass

def Rx(FD):
    gather_Required_Information_Rx()
    Rx_Input_Excel = pd.read_excel(Outputs_Folder + "/Global_Variables_to_be_declared_sorted_Rx.xlsx")
    for FD_ver in FD:
        Input_Excel = Rx_Input_Excel[Rx_Input_Excel["FD_Ver"] == FD_ver]
        Input_Excel = Input_Excel.reset_index(drop=None)
        Generate_Test_Cases_Rx("EVCU", FD_ver, Input_Excel, "EVCU2")
        print("Test Cases created for " + FD_ver)
    pass

def main():
    FD = ["FD3", "FD5", "FD11", "FD14", "FD16"]
    Tx(FD)
    Rx(FD)
    pass



if __name__ == "__main__":
    main()