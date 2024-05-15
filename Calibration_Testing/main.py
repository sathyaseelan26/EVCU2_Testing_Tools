import pandas as pd

Map_File = open("EVCU2_0_BSW_APP_KM_HEV.map","r").readlines()
Template = open("Calibration_A2l_Template.txt").read()

Calibration_Dict = {}
Calibration_Dict["Name"] = []
Calibration_Dict["Start_Address"] = []

for line in Map_File:
    if "KeCANR_b_ComTxMsg_" in line and "CALIB_FLASH" in line:
        Calibration_Name = line.split(" ")[9]
        Start_add = line.split(" ")[0]
        Calibration_Dict["Name"].append(Calibration_Name)
        Calibration_Dict["Start_Address"].append(Start_add)

with open("Calibration_A2L_Codes.txt","w") as f:
    leng = len(Calibration_Dict["Name"])
    for i in range(0,leng):
        f.write(Template.replace("#Calibration_Name",Calibration_Dict["Name"][i]).replace("#Start_Address",Calibration_Dict["Start_Address"][i]))
    

