import pandas as pd

Output_Excel_Dict = {
    "Test Case ID": [],
    "Categorization (Software feature/ System element under test)":[],
    "Test case objective":[],
    "Test steps":[],
    "Test input data":[],
    "Expected output":[],
    "Reset":[],
    "Actual output":[],
    "Col_1":[],
    "Col_2":[],
    "Col_3":[],
    "Test result":[],
    "Remarks":[]    
}

Calibration_Parameters = []
with open("EVCU2_0_BSW_APP_corebev.map","r") as f:
    buffer = f.readlines()
    for line in buffer:
        if "KeCANR" in line and "CALIB_FLASH" in line:
            Calibration_parameter = line.split(" ")[9]
            if Calibration_parameter not in Calibration_Parameters:
                Calibration_Parameters.append(Calibration_parameter)

i = 0
for Calibration_parameter in Calibration_Parameters:
    Output_Excel_Dict["Test Case ID"].append(i)
    Output_Excel_Dict["Categorization (Software feature/ System element under test)"].append("Software feature")
    Output_Excel_Dict["Test case objective"].append("To test the calibration parameter " + Calibration_parameter)
    Output_Excel_Dict["Test steps"].append("1) Add the calibration parameter: " + Calibration_parameter + " in INCA and set it to 1.\n2) Observe the message: " + Calibration_parameter.replace("KeCANR_b_ComTxMsg_", "").replace("_Enbld","") + " in the CANoe trace. It should be present a calibration parameter is 1.\n3) Now change the calibration parameter to 0.\n4) Now, the signal should not be visible in the CAN Trace.\n5) If yes, it is a pass case. Else, fail case.")
    Output_Excel_Dict["Test input data"].append("Input Data: 0\nInput Data: 1")
    Output_Excel_Dict["Expected output"].append("The message " + Calibration_parameter.replace("KeCANR_b_ComTxMsg_", "").replace("_Enbld","") + " should be visible when Calibration parameter: " + Calibration_parameter + " is set to 1 \nand not visible when Calibration parameter: " + Calibration_parameter + " is set to 0.")
    Output_Excel_Dict["Reset"].append("")
    Output_Excel_Dict["Actual output"].append("")
    Output_Excel_Dict["Col_1"].append("")
    Output_Excel_Dict["Col_2"].append("")
    Output_Excel_Dict["Col_3"].append("")
    Output_Excel_Dict["Test result"].append("")
    Output_Excel_Dict["Remarks"].append("")
    i = i+1

pd.DataFrame(Output_Excel_Dict).to_excel("Test_Report_Calibration_parameters.xlsx",index=False)