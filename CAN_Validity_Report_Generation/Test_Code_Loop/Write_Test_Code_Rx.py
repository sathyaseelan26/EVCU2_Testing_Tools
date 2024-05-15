#Define Test Codes in files (But Global declaration not done) RX

import os
import pandas as pd
import re

global_data_type = []
global_variable = []
global_variable_in_file = []
global_variable_count_in_file = []
port_name_in_excel = []
signal_name_in_excel = []
minimum = []
maximum = []
invalid = []
FD = []

def Rename_File(final_path):
    os.remove(final_path)
    os.rename(final_path + ".edited",final_path)
    pass

def add_in_excel_for_global(port_name,global_variable_name,data_type,file_name,count,sig_name,min_val,max_val,inv_val,FD_Ver):
    global_data_type.append(data_type)
    global_variable.append(global_variable_name)
    global_variable_in_file.append("{}{}".format(file_name[0],file_name[1]))
    global_variable_count_in_file.append(count)
    port_name_in_excel.append(port_name)
    signal_name_in_excel.append(sig_name)
    minimum.append(min_val)
    maximum.append(max_val)
    invalid.append(inv_val)
    FD.append(FD_Ver)
    #print(global_variable_in_file)
   # print(global_variable)
    pass

def add_Test_Variable(final_path,port_name,file_name,data_type,sig_name,min_val,max_val,inv_val,FD_Ver):
    #print(final_path)
    #print(file_name[0])
    with open(final_path,"r+") as source_code, open(final_path+".edited","w") as edited_code:
        next_line_req = 0
        count = 1
        prev_line = ""
        for line in source_code:
            edited_code.write(line)
            #Rte_PortName
            #(&tmp)
            
            #Rte_PortName(&tmp)
            
            #(void)Rte_PortName
            #(&tmp)
            #if next_line_req == 1:
                #line = prev_line + line
            #(void)Rte_PortName(&tmp)
            if "(void)" in line:
                line = line.replace('(void)','')
            if (((port_name + "_" + port_name) in line and "Rte_Read_" in line) or (next_line_req == 1)):
                if ('(' in line and ')' in line):
                    #print(line)
                    pattern = r'\((.*?)\)'
                    var_name = re.findall(pattern, line)[0]
                    var_name = var_name.replace("&","")
                    #print(var_name)
                    global_variable_name = "{}_{}_Test_{}".format(port_name,file_name[0],count)
                    #print(var_name)
                    edited_code.write("\n{} = {};\n".format(global_variable_name,var_name))
                    add_in_excel_for_global(port_name,global_variable_name,data_type,file_name,count,sig_name,min_val,max_val,inv_val,FD_Ver)
                    count+=1
                    
                    if next_line_req == 1:
                        next_line_req = 0
                        
                else:
                    next_line_req = 1
            
           # if next_line_req != 1:
           #     edited_code.write(line)
            #else:
             #   prev_line = line.rstrip()
    pass



def Search_in_Folder(abs_path,text,data_type,sig_name,min_val,max_val,inv_val,FD_Ver):
    os.chdir(abs_path)
    files = os.listdir()
   
    
    #print(files)
    for file_name in files:
        file_name_c = os.path.basename(abs_path)
        file_name_c = os.path.splitext(file_name)
        #print(file_name_c[1])
        if os.path.isfile(file_name) and file_name_c[1] == '.c':
            #print("Hi")
            with open(file_name, 'r') as f:
                if text in f.read():
                    final_path = os.path.abspath(file_name)
                    #print(text + " word found in this path " + final_path)
                    add_Test_Variable(final_path,text,file_name_c,data_type,sig_name,min_val,max_val,inv_val,FD_Ver)
                    f.close()
                    Rename_File(final_path)
                    global found
                    found = 1
                    #print(found)
                #else:
                   # print("No match found in " + abs_path)
                    #print(file_name_c)
                    #return 0
    pass

def searchText(path,text,data_type,sig_name,min_val,max_val,inv_val,FD_Ver):
    os.chdir(path)
    folders = os.listdir()
    #print(folders)
    for folder_name in folders:
        os.chdir(path)
        #print(file_name)
        abs_path = os.path.abspath(folder_name)
        if os.path.isdir(abs_path):
            #print(abs_path)
            Search_in_Folder(abs_path,text,data_type,sig_name,min_val,max_val,inv_val,FD_Ver)
            #print(found)
    pass

wrkng_dir = os.getcwd()
path = wrkng_dir +  r'/COREBEV_EVCU'
# wrkng_dir = r'C:\Users\srr923056\TATA\Stellantis\CAN Testing'
# os.chdir(wrkng_dir)
#print(wrkng_dir)
Port_Data_Type = pd.read_excel('Port_Data_Type_Rx.xlsx')

#searchText(path,"VeCANR_I_HVCMS_EVSEMaxCurLmFD11","ADTSHVCMS_EVSEMaxCurLmFD11")
#print(found)


for i in range(0,len(Port_Data_Type)):
    searchText(path,Port_Data_Type.at[i,"Port"],Port_Data_Type.at[i,"Data_Type"],Port_Data_Type.at[i,"CAN Signal Name"],Port_Data_Type.at[i,"Min_Val"],Port_Data_Type.at[i,"Max_Val"],Port_Data_Type.at[i,"Invalid_Value"],Port_Data_Type.at[i,"FD_Ver"])
    if found == 0:
        print("{} was not found".format(Port_Data_Type.at[i,"Port"]))
    else:
        found = 0


os.chdir(wrkng_dir)
df = pd.DataFrame(list(zip(global_data_type,global_variable,global_variable_in_file,global_variable_count_in_file,port_name_in_excel,signal_name_in_excel,minimum,maximum,invalid,FD)),columns = ["Data Type","Global Variable","File Name","Count","Port","Signal Name","Min_Val", "Max_Val", "Invalid_Value","FD_Ver"])        
#print(df)
df.to_excel('Global_Variables_to_be_declared_Rx.xlsx',engine = 'xlsxwriter',index = False)
# os.chdir(wrkng_dir)