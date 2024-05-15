from Global_Declarations import (
                                    rename,
                                    remove,
                                    copy,
                                    read_excel,
                                    get_FD_ver_input,
                                    exists,
                                    init_Test_Mapping_Sheets,
                                    DataFrame,
                                    OutputFiles,
                                    ComAbs_files,
                                    Test_Mapping_Sheets
                                    
                                    
                                )

Not_Found_Signals_Rx = []
global_variables_Rx = []
global_data_types_Rx = []
signal_name_in_excel_Rx = []
minimum_Rx = []
maximum_Rx = []
invalid_Rx = []
Variable_Not_Found_Signals_Rx = []


def clear_global_lists():
    Not_Found_Signals_Rx.clear()
    global_variables_Rx.clear()
    global_data_types_Rx.clear()
    signal_name_in_excel_Rx.clear()
    minimum_Rx.clear()
    maximum_Rx.clear()
    invalid_Rx.clear()
    Variable_Not_Found_Signals_Rx.clear()
    pass

def Rename_After_Test_Codes_Addition(file):
    rename(file, file + ".WithoutTestCodes")
    rename(file + ".Test", file)    
    pass

def Rename_File(final_path):
    remove(final_path)
    rename(final_path + ".edited",final_path)
    pass

def add_in_excel_for_global(global_variable_name,data_type,sig_name,min_val,max_val,inv_val):
    signal_name_in_excel_Rx.append(sig_name)
    global_data_types_Rx.append(data_type)
    global_variables_Rx.append(global_variable_name)
    minimum_Rx.append(min_val)
    maximum_Rx.append(max_val)
    invalid_Rx.append(inv_val)
   # print(global_variable)
    pass

def add_Test_Variable(Signal_Name,file_name,Data_Type,FD_ver):
    found_Breakpoint = False
    Task_Done = False
    with open(file_name,"r+") as source_code, open(file_name+".edited","w") as edited_code:
        for line in source_code:
            edited_code.write(line)
            if Task_Done == False and ("FUNC" in line and "{}_".format(Signal_Name)  in line and "Received" in line):
                found_Breakpoint = True
            if found_Breakpoint and Task_Done == False:
                if "Rte_Read_Return" in line and Signal_Name in line:
                    if "float" in Data_Type:
                        edited_code.write("\t{}_{}_Raw_Test = FloatFromUint({}_Raw, {}_Factor,{}_Offset);\n".format(Signal_Name,FD_ver,Signal_Name,Signal_Name,Signal_Name))
                    else:
                        edited_code.write("\t{}_{}_Raw_Test = {}_Raw;\n".format(Signal_Name,FD_ver,Signal_Name))
                    Task_Done = True
    return Task_Done

def search_Signal_Name(Signal_Name,Invalid_Value,Data_Type,Min_Value,Max_Value,FD_ver,ComAbs_File,ComAbs_folder):
    file_name = ""
    #if FD_ver == "FD3":
    file_name = ComAbs_folder + "/" + ComAbs_File + ".Test"
    with open(file_name, 'r', encoding='utf-8') as f:
        if Signal_Name in f.read():
            if add_Test_Variable(Signal_Name,file_name,Data_Type,FD_ver):
                add_in_excel_for_global("{}_{}_Raw_Test".format(Signal_Name,FD_ver),Data_Type,Signal_Name,Min_Value,Max_Value,Invalid_Value)
            else:
                Variable_Not_Found_Signals_Rx.append(Signal_Name)
            f.close()
            Rename_File(file_name)
        else:
            Not_Found_Signals_Rx.append(Signal_Name)

def create_copy_of_ComAbsfiles(ComAbs_files:dict, ComAbs_folder):
    for filename in ComAbs_files.values():
        copy(ComAbs_folder + "/" + filename, ComAbs_folder + "/" + filename + ".Test")


def Delcare_Global_Variables(df, ComAbs_File, ComAbs_folder):
    Global_Variables_to_be_declared = df
    file_name = ComAbs_folder + "/" + ComAbs_File + ".Test"
    Task_Done = False
    with open(file_name,"r+") as source_code, open(file_name+".edited","w") as edited_code:
        for line in source_code:
            edited_code.write(line)
            if Task_Done == False and "/* Local Data Declaration */" in line:
                Task_Done = True
                edited_code.write("\n\n//Global Rx Automated Test Variables Declaration\n")
                for i in range(0,len(Global_Variables_to_be_declared)):
                    Data_Type = Global_Variables_to_be_declared.at[i,"Data Type"]
                    Global_Variable_Name = Global_Variables_to_be_declared.at[i,"Global Variable"]
                    edited_code.write("{} {};\n".format(Data_Type,Global_Variable_Name))
                    #print(Data_Type)
                edited_code.write("// End of Global Test Variables Declaration\n\n\n")
    Rename_File(file_name)
pass

def check_if_already_done(file_name):
    with open(file_name,"r") as f:
        if "//Global Rx Automated Test Variables Declaration" in f.read():
            return True
        else:
            return False

def Write_Test_Code_Rx(Board, Test_Mapping_Sheets_Folder, ComAbs_folder, DBC_Folder):
    create_copy_of_ComAbsfiles(ComAbs_files, ComAbs_folder)
    #FD_ver_input = list(input("Enter FD Versions: ").split(" "))
    
    FD_ver_input = get_FD_ver_input(Board)
    
    for FD_ver in FD_ver_input:
        try:
            Excel_sheet_Name = Test_Mapping_Sheets_Folder+"/"+Test_Mapping_Sheets[FD_ver]
        except KeyError:
            print(FD_ver + " Test Mapping sheet not found.")
            continue
        if not exists(Excel_sheet_Name):
            print(str(Excel_sheet_Name) + " does not exist.")
            continue
        Excel_sheet = read_excel(Excel_sheet_Name,sheet_name = "Rx")
        Current_ComAbs_file = ComAbs_files[f"{FD_ver}"]
        file_name_temp = ComAbs_folder +"/" + Current_ComAbs_file
        
        if not check_if_already_done(file_name_temp):
            for i in range(0,len(Excel_sheet)):
                search_Signal_Name(Excel_sheet.at[i,"CAN Signal Name"],Excel_sheet.at[i,"Invalid Value_Scaled"],Excel_sheet.at[i,"Mapped IDT"],Excel_sheet.at[i,"Signal Min Value"],Excel_sheet.at[i,"Signal Max Value"],FD_ver,Current_ComAbs_file,ComAbs_folder)
            print("{} Not Found Signals:".format(FD_ver) + str(Not_Found_Signals_Rx))
            print("{} Variable Not Written Signals: ".format(FD_ver) + str(Variable_Not_Found_Signals_Rx))

            df = DataFrame(list(zip(signal_name_in_excel_Rx,global_data_types_Rx,global_variables_Rx,minimum_Rx,maximum_Rx,invalid_Rx)),columns = ["Signal Name","Data Type","Global Variable","Min_Val", "Max_Val", "Invalid_Value"])
            while True:
                try:
                    df.to_excel(OutputFiles + '\Test_Information_{}_{}_Rx.xlsx'.format(Board,FD_ver),engine = 'xlsxwriter',index = False)   
                    break
                except PermissionError:
                    input("Please close the Test_Information_{}_{}_Rx.xlsx file and press enter".format(Board,FD_ver))
            clear_global_lists()
            Delcare_Global_Variables(df,Current_ComAbs_file, ComAbs_folder)
            Rename_After_Test_Codes_Addition(ComAbs_folder + "/" + Current_ComAbs_file)
        else:
            print(f"{Current_ComAbs_file} already has Test Codes. Please check.")
            pass
pass
        