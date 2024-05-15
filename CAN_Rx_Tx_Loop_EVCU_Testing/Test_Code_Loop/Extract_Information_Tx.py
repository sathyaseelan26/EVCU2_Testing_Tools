#Get Port DataType from Mapping Sheets TX

import pandas as pd
import os


wrkng_dir = os.getcwd()
os.chdir(wrkng_dir)

#Read all Mapping Sheets
Excel_FD3 = pd.read_excel('CAN_EVCU2_FD3.xlsx',sheet_name = "Tx")
Excel_FD5 = pd.read_excel('CAN_EVCU2_FD5.xlsx',sheet_name = "Tx")
Excel_FD11 = pd.read_excel('CAN_EVCU2_FD11.xlsx',sheet_name = "Tx")
Excel_FD14 = pd.read_excel('CAN_EVCU2_FD14.xlsx',sheet_name = "Tx")
Excel_FD16 = pd.read_excel('CAN_EVCU2_FD16.xlsx',sheet_name = "Tx")

Excel_FD3.columns = Excel_FD3.iloc[0]
Excel_FD3 = Excel_FD3[1:].reset_index(drop=True)
Excel_FD3.columns.name = None

Excel_FD5.columns = Excel_FD5.iloc[0]
Excel_FD5 = Excel_FD5[1:].reset_index(drop=True)
Excel_FD5.columns.name = None

Excel_FD11.columns = Excel_FD11.iloc[0]
Excel_FD11 = Excel_FD11[1:].reset_index(drop=True)
Excel_FD11.columns.name = None

Excel_FD14.columns = Excel_FD14.iloc[0]
Excel_FD14 = Excel_FD14[1:].reset_index(drop=True)
Excel_FD14.columns.name = None

Excel_FD16.columns = Excel_FD16.iloc[0]
Excel_FD16 = Excel_FD16[1:].reset_index(drop=True)
Excel_FD16.columns.name = None
#print(Excel_FD3)
#Read Port List Excel File
Port_List = pd.read_excel('Ports_List_Tx.xls')

#print(Port_List)


Port = []
Data_Type = []
FD_Ver = []
Signal_Name = []
Min_Val = []
Max_Val = []
Invalid_Value = []

Not_Found_Ports = []

for i in range(0,len(Port_List)):
    index = 0

    if "SendCANR" in Port_List.at[i,"TargetRPort"]: 
        if Excel_FD3['Port Name'].eq(Port_List.at[i,"TargetRPort"]).any():
            for index in range(0,len(Excel_FD3)):
                if Excel_FD3.at[index,"Port Name"] == Port_List.at[i,"TargetRPort"]:
                    Port.append(Port_List.at[i,"TargetRPort"])
                    Data_Type.append(Excel_FD3.at[index,"Mapped IDT"])
                    FD_Ver.append("FD3")
                    Signal_Name.append(Excel_FD3.at[index,"CAN Signal Name"])
                    Min_Val.append(Excel_FD3.at[index,"Signal Min Value"])
                    Max_Val.append(Excel_FD3.at[index,"Signal Max Value"])
                    Invalid_Value.append(Excel_FD3.at[index,"Invalid Value"])
                    
        elif Excel_FD5["Port Name"].eq(Port_List.at[i,"TargetRPort"]).any() :
            for index in range(0,len(Excel_FD5)):
                if Excel_FD5.at[index,"Port Name"] == Port_List.at[i,"TargetRPort"]:
                    Port.append(Port_List.at[i,"TargetRPort"])
                    Data_Type.append(Excel_FD5.at[index,"Mapped IDT"])
                    FD_Ver.append("FD5")
                    Signal_Name.append(Excel_FD5.at[index,"CAN Signal Name"])
                    Min_Val.append(Excel_FD5.at[index,"Signal Min Value"])
                    Max_Val.append(Excel_FD5.at[index,"Signal Max Value"])
                    Invalid_Value.append(Excel_FD5.at[index,"Invalid Value"])
                    
        # print( "{}    Yes".format(Port_List.at[i,"TargetRPort"]))
        elif Excel_FD11["Port Name"].eq(Port_List.at[i,"TargetRPort"]).any() :
            for index in range(0,len(Excel_FD11)):
                if Excel_FD11.at[index,"Port Name"] == Port_List.at[i,"TargetRPort"]:
                    Port.append(Port_List.at[i,"TargetRPort"])
                    Data_Type.append(Excel_FD11.at[index,"Mapped IDT"])
                    FD_Ver.append("FD11")
                    Signal_Name.append(Excel_FD11.at[index,"CAN Signal Name"])
                    Min_Val.append(Excel_FD11.at[index,"Signal Min Value"])
                    Max_Val.append(Excel_FD11.at[index,"Signal Max Value"])
                    Invalid_Value.append(Excel_FD11.at[index,"Invalid Value"])    

        elif Excel_FD14['Port Name'].eq(Port_List.at[i,"TargetRPort"]).any() :
            for index in range(0,len(Excel_FD14)):
                if Excel_FD14.at[index,"Port Name"] == Port_List.at[i,"TargetRPort"]:
                    Port.append(Port_List.at[i,"TargetRPort"])
                    Data_Type.append(Excel_FD14.at[index,"Mapped IDT"])
                    FD_Ver.append("FD14")
                    Signal_Name.append(Excel_FD14.at[index,"CAN Signal Name"])
                    Min_Val.append(Excel_FD14.at[index,"Signal Min Value"])
                    Max_Val.append(Excel_FD14.at[index,"Signal Max Value"])
                    Invalid_Value.append(Excel_FD14.at[index,"Invalid Value"])                

        # print( "{}    Yes".format(Port_List.at[i,"TargetRPort"]))
        elif Excel_FD16['Port Name'].eq(Port_List.at[i,"TargetRPort"]).any() :
            for index in range(0,len(Excel_FD16)):
                if Excel_FD16.at[index,"Port Name"] == Port_List.at[i,"TargetRPort"]:
                    Port.append(Port_List.at[i,"TargetRPort"])
                    Data_Type.append(Excel_FD16.at[index,"Mapped IDT"])
                    FD_Ver.append("FD16")
                    Signal_Name.append(Excel_FD16.at[index,"CAN Signal Name"])
                    Min_Val.append(Excel_FD16.at[index,"Signal Min Value"])
                    Max_Val.append(Excel_FD16.at[index,"Signal Max Value"])
                    Invalid_Value.append(Excel_FD16.at[index,"Invalid Value"])
        else:
            Not_Found_Ports.append(Port_List.at[i,"TargetRPort"])
   
        
   
df = pd.DataFrame(list(zip(Port,Data_Type,FD_Ver,Signal_Name,Min_Val, Max_Val, Invalid_Value)),columns = ["Port","Data_Type","FD_Ver","CAN Signal Name","Min_Val", "Max_Val", "Invalid_Value"])
df.to_excel('Port_Data_Type_Tx.xlsx',engine = 'xlsxwriter',index=False)
Not_Found_Ports