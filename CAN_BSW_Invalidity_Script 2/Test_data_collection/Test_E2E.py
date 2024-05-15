import os
import pandas as pd
import Python_Api as T32api
from time import sleep

wrkng_dir = os.getcwd()
os.chdir(wrkng_dir)


Actual_Data_Array = []
data1=[]
Actual_Data_Array_1 = []

time_out_variable= pd.read_excel('Global_Variables_to_be_declared_Rx.xlsx')
T32api.Connect_To_Api()
for i in range(0,len(time_out_variable)):
    data1.append(time_out_variable.at[i,"Global Variable"])
    val = T32api.Read_Variable_Value(time_out_variable.at[i,"Global Variable"])
    Actual_Data_Array.append(val)   
T32api.Disconnect_from_Api()
sleep(30)
T32api.Connect_To_Api()
for i in range(0,len(time_out_variable)):
    data1.append(time_out_variable.at[i,"Global Variable"])
    val = T32api.Read_Variable_Value(time_out_variable.at[i,"Global Variable"])
    Actual_Data_Array_1.append(val)
T32api.Disconnect_from_Api()
df = pd.DataFrame(list(zip(data1,Actual_Data_Array,Actual_Data_Array_1)),columns = ["Global Variable for Check status","Before Time Out","After Time Out"])        
df.to_excel('Timeout.xlsx',engine = 'xlsxwriter',index = False)

  