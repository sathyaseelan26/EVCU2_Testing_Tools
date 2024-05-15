using System;
using System.Collections.ObjectModel;
using Vector.Tools;
using Vector.CANoe.Runtime;
using Vector.CANoe.Threading;
using Vector.Diagnostics;
using Vector.Scripting.UI;
using Vector.CANoe.TFS;
using Vector.CANoe.VTS;
using NetworkDB;
using Trace32_API;
using Report_Generation;

[TestClass]
public class AutomatedTestClass_Tx_FD3
{
public static void SetSignal<T>(Int16 d) where T : class, IRuntimeValue
{
	RuntimeObject<T>.Value = d;
}
public static void SetSignal<T>(Double d) where T : class, IRuntimeValue
{
	RuntimeObject<T>.Value = d;
}

[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Sch_PreCondition_Sts_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Sch_PreCondition_Sts_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.Sch_PreCondition_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Sch_PreCondition_Sts_CT1B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.Sch_PreCondition_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Sch_PreCondition_Sts_CT1B_BLUEN_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.Sch_PreCondition_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Sch_PreCondition_Sts from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal Sch_PreCondition_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_T4_Sensor_Temp_FD3_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD3_CT1B_BLUEN_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7.700000000000003;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD3_CT1B_BLUEN_ac_Test_1","7.700000000000003");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD3_CT1B_BLUEN_ac_Test_1","164.7");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal T4_Sensor_Temp from the message VDCM_PWT3 in channel FD3", Testcase_description = "Check whether the signal T4_Sensor_Temp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_InverterState_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterState_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterState_CT1B_BLUEN_ac_Test_1","5");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterState_CT1B_BLUEN_ac_Test_1","15");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_InverterState from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_InverterState starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_InverterTemp_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterTemp_CT1B_BLUEN_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 48.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterTemp_CT1B_BLUEN_ac_Test_1","48.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterTemp_CT1B_BLUEN_ac_Test_1","215.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_InverterTemp from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_InverterTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVBatCritCondT_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCritCondT_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCritCondT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCritCondT_CT1B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCritCondT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatCritCondT from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HVBatCritCondT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_Temperature_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_Temperature_CT1B_BLUEN_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -12.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_Temperature_CT1B_BLUEN_ac_Test_1","-12.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_Temperature_CT1B_BLUEN_ac_Test_1","215.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_Temperature from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_Temperature starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_DC_Voltage_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Voltage_CT1B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 962.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Voltage_CT1B_BLUEN_ac_Test_1","962.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Voltage_CT1B_BLUEN_ac_Test_1","1023.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_DC_Voltage from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_DC_Voltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CabinConditioningSts_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CabinConditioningSts_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinConditioningSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CabinConditioningSts_CT1B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinConditioningSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CabinConditioningSts_CT1B_BLUEN_ac_Test_1","9");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinConditioningSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CabinConditioningSts from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal CabinConditioningSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_Temperature_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_Temperature_CT1B_BLUEN_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -39.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_Temperature_CT1B_BLUEN_ac_Test_1","-39.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_Temperature_CT1B_BLUEN_ac_Test_1","215.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_Temperature from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_Temperature starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HeaterCoreInletTemp_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HeaterCoreInletTemp_CT1B_BLUEN_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HeaterCoreInletTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -21.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HeaterCoreInletTemp_CT1B_BLUEN_ac_Test_1","-21.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HeaterCoreInletTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HeaterCoreInletTemp_CT1B_BLUEN_ac_Test_1","214.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HeaterCoreInletTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HeaterCoreInletTemp from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HeaterCoreInletTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_SchCond_Time_Till_Dep_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_SchCond_Time_Till_Dep_CT1B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.SchCond_Time_Till_Dep.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 79.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_SchCond_Time_Till_Dep_CT1B_BLUEN_ac_Test_1","79.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.SchCond_Time_Till_Dep.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 126.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_SchCond_Time_Till_Dep_CT1B_BLUEN_ac_Test_1","126.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.SchCond_Time_Till_Dep.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SchCond_Time_Till_Dep from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal SchCond_Time_Till_Dep starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_FRfShVlvSts_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_FRfShVlvSts_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.FRfShVlvSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_FRfShVlvSts_CT1B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.FRfShVlvSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal FRfShVlvSts from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal FRfShVlvSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CompressorState_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CompressorState_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CompressorState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CompressorState_CT1B_BLUEN_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CompressorState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CompressorState_CT1B_BLUEN_ac_Test_1","14");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CompressorState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CompressorState from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal CompressorState starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_InverterState_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterState_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterState_CT1B_BLUEN_ac_Test_1","12");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterState_CT1B_BLUEN_ac_Test_1","15");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_InverterState from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_InverterState starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_InverterTemp_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterTemp_CT1B_BLUEN_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 123.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterTemp_CT1B_BLUEN_ac_Test_1","123.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterTemp_CT1B_BLUEN_ac_Test_1","215.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_InverterTemp from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_InverterTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HTAuxPmpRPMAct_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpRPMAct_CT1B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpRPMAct.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4440.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpRPMAct_CT1B_BLUEN_ac_Test_1","4440.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpRPMAct.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6096.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpRPMAct_CT1B_BLUEN_ac_Test_1","6096.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpRPMAct.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HTAuxPmpRPMAct from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HTAuxPmpRPMAct starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_DC_Voltage_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Voltage_CT1B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 735.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Voltage_CT1B_BLUEN_ac_Test_1","735.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Voltage_CT1B_BLUEN_ac_Test_1","1023.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_DC_Voltage from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_DC_Voltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_TorqueAchieved_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -512.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_TorqueAchieved_CT1B_BLUEN_ac_Test_1","-512.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -237.375;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_TorqueAchieved_CT1B_BLUEN_ac_Test_1","-237.375");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 511.875;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_TorqueAchieved_CT1B_BLUEN_ac_Test_1","511.875");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_TorqueAchieved from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_TorqueAchieved starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HTAuxPmpMontrngRPM_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpMontrngRPM_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpMontrngRPM.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpMontrngRPM_CT1B_BLUEN_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpMontrngRPM.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HTAuxPmpMontrngRPM from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HTAuxPmpMontrngRPM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_DC_Current_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -1638.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Current_CT1B_BLUEN_ac_Test_1","-1638.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -188.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Current_CT1B_BLUEN_ac_Test_1","-188.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Current_CT1B_BLUEN_ac_Test_1","1638.3");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_DC_Current from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_DC_Current starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_TorqueAchieved_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -512.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_TorqueAchieved_CT1B_BLUEN_ac_Test_1","-512.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -304.125;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_TorqueAchieved_CT1B_BLUEN_ac_Test_1","-304.125");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 511.875;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_TorqueAchieved_CT1B_BLUEN_ac_Test_1","511.875");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_TorqueAchieved from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_TorqueAchieved starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CbnPreconditionReqSts_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CbnPreconditionReqSts_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinPreconditionReqSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CbnPreconditionReqSts_CT1B_BLUEN_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinPreconditionReqSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CbnPreconditionReqSts_CT1B_BLUEN_ac_Test_1","14");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinPreconditionReqSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CabinPreconditionReqSts from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal CabinPreconditionReqSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_APCM_Rq_Display_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_APCM_Rq_Display_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY2.APCM_Rq_Display.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_APCM_Rq_Display_CT1B_BLUEN_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY2.APCM_Rq_Display.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APCM_Rq_Display from the message HYBRID_DISPLAY2 in channel FD3", Testcase_description = "Check whether the signal APCM_Rq_Display starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PE_CoolTempIn_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PE_CoolTempIn_CT1B_BLUEN_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_THERMAL_COMMAND.PE_CoolTempIn.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 132.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PE_CoolTempIn_CT1B_BLUEN_ac_Test_1","132.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_THERMAL_COMMAND.PE_CoolTempIn.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PE_CoolTempIn_CT1B_BLUEN_ac_Test_1","214.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_THERMAL_COMMAND.PE_CoolTempIn.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PE_CoolTempIn from the message HYBRID_THERMAL_COMMAND in channel FD3", Testcase_description = "Check whether the signal PE_CoolTempIn starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_DC_Current_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -1638.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Current_CT1B_BLUEN_ac_Test_1","-1638.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -67.20000000000005;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Current_CT1B_BLUEN_ac_Test_1","-67.20000000000005");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Current_CT1B_BLUEN_ac_Test_1","1638.3");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_DC_Current from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_DC_Current starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ElecCoolantHtrPwr_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ElecCoolantHtrPwr_CT1B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.ElecCoolantHtrPwr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4.36;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ElecCoolantHtrPwr_CT1B_BLUEN_ac_Test_1","4.36");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.ElecCoolantHtrPwr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10.16;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ElecCoolantHtrPwr_CT1B_BLUEN_ac_Test_1","10.16");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.ElecCoolantHtrPwr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ElecCoolantHtrPwr from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal ElecCoolantHtrPwr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_RPM_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -32768.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_RPM_CT1B_BLUEN_ac_Test_1","-32768.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -90.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_RPM_CT1B_BLUEN_ac_Test_1","-90.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 32767.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_RPM_CT1B_BLUEN_ac_Test_1","32767.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_RPM from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_RPM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVBatCooltLevelLow_DPT_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCooltLevelLow_DPT_CT1B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCoolantLevelLow_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCooltLevelLow_DPT_CT1B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCoolantLevelLow_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCooltLevelLow_DPT_CT1B_BLUEN_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCoolantLevelLow_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatCoolantLevelLow_DPT from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HVBatCoolantLevelLow_DPT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_RPM_CT1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -32768.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_RPM_CT1B_BLUEN_ac_Test_1","-32768.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 327.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_RPM_CT1B_BLUEN_ac_Test_1","327.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 32767.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_RPM_CT1B_BLUEN_ac_Test_1","32767.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 29, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_RPM from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_RPM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_IMMO_CODE_REQUEST_IMOR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_IMMO_CODE_REQUEST_IMOR_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.IMMO_CODE_REQUEST.ControlEncodingReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 232;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_IMMO_CODE_REQUEST_IMOR_ac_Test_1","232");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.IMMO_CODE_REQUEST.ControlEncodingReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 255;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_IMMO_CODE_REQUEST_IMOR_ac_Test_1","255");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.IMMO_CODE_REQUEST.ControlEncodingReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 30, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ControlEncodingReq from the message IMMO_CODE_REQUEST in channel FD3", Testcase_description = "Check whether the signal ControlEncodingReq starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Tx_Testing_FD3()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Tx_FD3.xlsx";

	Test_Case_SendCANR_Sch_PreCondition_Sts_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_T4_Sensor_Temp_FD3_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_InverterState_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_InverterTemp_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_HVBatCritCondT_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_Temperature_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_DC_Voltage_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_CabinConditioningSts_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_Temperature_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_HeaterCoreInletTemp_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_SchCond_Time_Till_Dep_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_FRfShVlvSts_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_CompressorState_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_InverterState_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_InverterTemp_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_HTAuxPmpRPMAct_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_DC_Voltage_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_TorqueAchieved_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_HTAuxPmpMontrngRPM_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_DC_Current_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_TorqueAchieved_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_CbnPreconditionReqSts_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_APCM_Rq_Display_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_PE_CoolTempIn_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_DC_Current_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_ElecCoolantHtrPwr_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_RPM_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_HVBatCooltLevelLow_DPT_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_RPM_CT1B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_IMMO_CODE_REQUEST_IMOR_ac_Test_1(report);
	report.Save_Excel(Report_Save_Path);


}

}
