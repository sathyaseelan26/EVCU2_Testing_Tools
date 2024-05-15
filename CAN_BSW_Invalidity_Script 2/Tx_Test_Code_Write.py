from Global_Declarations import (
                                    read_excel, 
                                    exit,
                                    get_FD_ver_input,
                                    rename,
                                    DataFrame,
                                    OutputFiles,
                                    TestApp,
                                    ComAbs_files
                                )
global_variables_Tx = []
global_data_types_Tx = []
signal_name_in_excel_Tx = []
minimum_Tx = []
maximum_Tx = []
invalid_Tx = []


def clear_lists():
    global_variables_Tx.clear()
    global_data_types_Tx.clear()
    signal_name_in_excel_Tx.clear()
    minimum_Tx.clear()
    maximum_Tx.clear()
    invalid_Tx.clear()
pass

def Rename_After_Test_Codes_Addition(file):
    rename(file, file + ".WithoutCANTxTestCodes")
    rename(file + ".Test", file)    
    pass

def get_Function_Name_Template(Board: str,FD_ver: str):
    Function_Name_Template = str(ComAbs_files[f"{FD_ver}"])
    Function_Name_Template = Function_Name_Template.replace(".c","")
    if Board.upper() == "EDM MCPA":
        Function_Name_Template = Function_Name_Template.replace("_MCPA","")
    elif Board.upper() == "EDM MCPB":
        Function_Name_Template = Function_Name_Template.replace("_MCPB","")
    elif Board.upper() == "EDM MCPC" or Board.upper() == "EDM SGCP":
        Function_Name_Template = Function_Name_Template.replace("_SGCP","")
    return Function_Name_Template

def get_Global_Variable_Declarations(FD_ver_input:list, Test_Mapping_Sheets_Folder, Board):
    Global_Variable_Declarations = []
    Global_Variable_Declarations.append("\n\n//Global Tx Automated Test Codes\n")
    for FD_ver in FD_ver_input:
        clear_lists()
        Current_Mapping_Sheet = read_excel(Test_Mapping_Sheets_Folder+"/"+Board+"_"+FD_ver+'.xlsx',sheet_name = "Tx")
        Global_Variable_Declarations.append(f"//Global Tx Test Variables for {FD_ver}\n")
        for i in range(0, len(Current_Mapping_Sheet)):
            current_data = [Current_Mapping_Sheet.at[i,"Mapped IDT"], Current_Mapping_Sheet.at[i,"Argument1 (data)"],Current_Mapping_Sheet.at[i,"Argument2 (valid flag)"], Current_Mapping_Sheet.at[i,"CAN Signal Name"], Current_Mapping_Sheet.at[i,"Signal Min Value"], Current_Mapping_Sheet.at[i,"Signal Max Value"], Current_Mapping_Sheet.at[i,"Invalid Value.1"]]
            Global_Variable_Declarations.append("{} Data_{};\nIDTBoolean Test_{} = 1;\n\n".format(current_data[0],current_data[1],current_data[2]))
            global_variables_Tx.append("Data_{}".format(current_data[1]))
            global_data_types_Tx.append(current_data[0])
            signal_name_in_excel_Tx.append(current_data[3])
            minimum_Tx.append(current_data[4])
            maximum_Tx.append(current_data[5])
            invalid_Tx.append(current_data[6])       
        df = DataFrame(list(zip(signal_name_in_excel_Tx,global_data_types_Tx,global_variables_Tx,minimum_Tx,maximum_Tx,invalid_Tx)),columns = ["Signal Name","Data Type","Global Variable","Min_Val", "Max_Val", "Invalid_Value"])     
        df.to_excel(OutputFiles + '\Test_Information_{}_{}_Tx.xlsx'.format(Board,FD_ver),engine = 'xlsxwriter',index = False)   
    return Global_Variable_Declarations

def get_Function_Declarations(FD_ver_input:list, Test_Mapping_Sheets_Folder, Board):
    Function_Declarations = []
    for FD_ver in FD_ver_input:
        clear_lists()
        Function_Name_Template = get_Function_Name_Template(Board,FD_ver)
        Current_Mapping_Sheet = read_excel(Test_Mapping_Sheets_Folder+"/"+Board+"_"+FD_ver+'.xlsx',sheet_name = "Tx")
        Function_Declarations.append(f"//Global Tx Test Function Declarations for {FD_ver}\n")   
        for i in range(0,len(Current_Mapping_Sheet)):
            current_data = [Current_Mapping_Sheet.at[i,"Operation Name"],Current_Mapping_Sheet.at[i,"Mapped IDT"], Current_Mapping_Sheet.at[i,"Argument1 (data)"], Current_Mapping_Sheet.at[i,"Argument2 (valid flag)"]]
            Function_Declarations.append("FUNC(void, {}_CODE) {}_{} ( {} Data_{}, IDTBoolean Test_{} );\n".format(Function_Name_Template,Function_Name_Template,current_data[0],current_data[1],current_data[2],current_data[3]))
    return Function_Declarations

def get_Function_Calls(FD_ver_input:list, Test_Mapping_Sheets_Folder, Board):
    Function_Calls = []
    for FD_ver in FD_ver_input:
        clear_lists()
        Function_Name_Template = get_Function_Name_Template(Board,FD_ver)
        Current_Mapping_Sheet = read_excel(Test_Mapping_Sheets_Folder+"/"+Board+"_"+FD_ver+'.xlsx',sheet_name = "Tx")
        Function_Calls.append(f"//Global Tx Test Function Calls for {FD_ver}\n")   
        for i in range(0,len(Current_Mapping_Sheet)):
            current_data = [Current_Mapping_Sheet.at[i,"Operation Name"],Current_Mapping_Sheet.at[i,"Mapped IDT"], Current_Mapping_Sheet.at[i,"Argument1 (data)"], Current_Mapping_Sheet.at[i,"Argument2 (valid flag)"]]
            Function_Calls.append("{}_{} ( Data_{}, Test_{} );\n".format(Function_Name_Template,current_data[0],current_data[1],current_data[2]))
    return Function_Calls


def check_if_already_done(TestApp):
    with open(TestApp,"r") as f:
        if "//Global Tx Automated Test Codes" in f.read():
            return True
        else:
            return False
        
def Write_Test_Code_Tx(Board, Test_Mapping_Sheets_Folder, DBC_Folder):
    if check_if_already_done(TestApp):
        print("Test Code is already written. Please check the TestApp.c file")
        input("Press Enter to continue")
        pass
    else:
        FD_ver_input = get_FD_ver_input(Board)
        Global_Variable_Declarations = get_Global_Variable_Declarations(FD_ver_input,Test_Mapping_Sheets_Folder,Board)
        Function_Declarations = get_Function_Declarations(FD_ver_input,Test_Mapping_Sheets_Folder,Board)
        Function_Calls = get_Function_Calls(FD_ver_input,Test_Mapping_Sheets_Folder,Board)
        
        with open(TestApp,"r") as source_file, open(TestApp + ".Test","w") as edited_file:
            Global_Declarations_Done = False
            Function_Calls_Done = False
            Cyclic_100ms_Reached = False

            for line in source_file:
                edited_file.write(line)
                
                if Global_Declarations_Done == False and  "Start of user variable defintions - Do not remove this comment" in line:
                    edited_file.writelines(Global_Variable_Declarations)
                    edited_file.writelines(Function_Declarations)
                    Global_Declarations_Done = True
                    
                if Global_Declarations_Done and "FUNC (void, TestAPP_CODE) TestAPP_Cyclic_100ms" in line:
                    Cyclic_100ms_Reached = True
                    
                if Cyclic_100ms_Reached and Function_Calls_Done == False and "Start of user variable defintions" in line:
                    edited_file.writelines(Function_Calls)
                    Function_Calls_Done = True
        Rename_After_Test_Codes_Addition(TestApp)
    pass