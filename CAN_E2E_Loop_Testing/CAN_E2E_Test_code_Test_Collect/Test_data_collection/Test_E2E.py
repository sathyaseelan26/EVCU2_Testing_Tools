import os
import pandas as pd
import Python_Api as T32api
from time import sleep

wrkng_dir = os.getcwd()
os.chdir(wrkng_dir)


Actual_Data_Array = []
data1=[]
Actual_Data_Array_2 = []
data2=[]
check_variable= pd.read_excel('Global_Variables_declared_E2E_Check_Status.xlsx')
opt_variable=pd.read_excel('Global_Variables_declare_Operation_Return.xlsx')
T32api.Connect_To_Api()
for i in range(0,len(check_variable)):
    data1.append(check_variable.at[i,"Global Variable"])
    val = T32api.Read_Variable_Value(check_variable.at[i,"Global Variable"])
    Actual_Data_Array.append(val)
    sleep(0.5)
for s in range(0,len(opt_variable)):
    data2.append(opt_variable.at[s,"Global Variable"])
    val2 = T32api.Read_Variable_Value(opt_variable.at[s,"Global Variable"])
    Actual_Data_Array_2.append(val2)
    sleep(0.5)
T32api.Disconnect_from_Api()
df = pd.DataFrame(list(zip(data1,Actual_Data_Array,data2,Actual_Data_Array_2)),columns = ["Global Variable for Check status","Check Status Value","Global Variable for Opt Return ","Opt Return Value"])        
df.to_excel('E2E_Check_Status.xlsx',engine = 'xlsxwriter',index = False)

  