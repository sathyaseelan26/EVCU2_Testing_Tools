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
public class AutomatedTestClass_Tx_FD11
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
public static void Test_Case_SendCANR_ACCurrent_MaxCal_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -31.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ACCurrent_MaxCal_FD11_CT2B_BLUEN_ac_Test_1","-31.5");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ACCurrent_MaxCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14.25;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ACCurrent_MaxCal_FD11_CT2B_BLUEN_ac_Test_1","14.25");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ACCurrent_MaxCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ACCurrent_MaxCal_FD11_CT2B_BLUEN_ac_Test_1","50.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ACCurrent_MaxCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ACCurrent_MaxCal from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal ACCurrent_MaxCal starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PerWakeUp_Diag_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PerWakeUp_Diag_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.PerWakeUp_Diag.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 705;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PerWakeUp_Diag_FD11_CT2B_BLUEN_ac_Test_1","705");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.PerWakeUp_Diag.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PerWakeUp_Diag_FD11_CT2B_BLUEN_ac_Test_1","1023");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.PerWakeUp_Diag.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PerWakeUp_Diag from the message HYBRID_SYSTEM_EPT1 in channel FD11", Testcase_description = "Check whether the signal PerWakeUp_Diag starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVBattCurr_MaxCal_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -32.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBattCurr_MaxCal_FD11_CT2B_BLUEN_ac_Test_1","-32.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.HVBatteryCurrent_MaxCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -25.75;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBattCurr_MaxCal_FD11_CT2B_BLUEN_ac_Test_1","-25.75");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.HVBatteryCurrent_MaxCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBattCurr_MaxCal_FD11_CT2B_BLUEN_ac_Test_1","31.5");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.HVBatteryCurrent_MaxCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatteryCurrent_MaxCal from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal HVBatteryCurrent_MaxCal starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVBattVolt_MaxCal_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBattVolt_MaxCal_FD11_CT2B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.HVBatteryVoltage_MaxCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 399.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBattVolt_MaxCal_FD11_CT2B_BLUEN_ac_Test_1","399.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.HVBatteryVoltage_MaxCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 510.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBattVolt_MaxCal_FD11_CT2B_BLUEN_ac_Test_1","510.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.HVBatteryVoltage_MaxCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatteryVoltage_MaxCal from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal HVBatteryVoltage_MaxCal starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChargeSystemSts_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemSts_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargeSystemSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemSts_FD11_CT2B_BLUEN_ac_Test_1","5");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargeSystemSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemSts_FD11_CT2B_BLUEN_ac_Test_1","6");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargeSystemSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeSystemSts from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal ChargeSystemSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_OBCM_PLUG_STS_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_OBCM_PLUG_STS_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.OBCM_PLUG_STS.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_OBCM_PLUG_STS_FD11_CT2B_BLUEN_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.OBCM_PLUG_STS.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBCM_PLUG_STS from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal OBCM_PLUG_STS starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_OBC_ControlMethod_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_OBC_ControlMethod_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.OBC_ControlMethod.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_OBC_ControlMethod_FD11_CT2B_BLUEN_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.OBC_ControlMethod.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_ControlMethod from the message HYBRID_CHARGING_COMMAND in channel FD11", Testcase_description = "Check whether the signal OBC_ControlMethod starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_J1772_CloseS2_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_J1772_CloseS2_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.J1772_CloseS2.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_J1772_CloseS2_FD11_CT2B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.J1772_CloseS2.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal J1772_CloseS2 from the message HYBRID_CHARGING_COMMAND in channel FD11", Testcase_description = "Check whether the signal J1772_CloseS2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_RadiatorFanSts_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RadiatorFanSts_FD11_CT2B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_THERMAL_COMMAND.RadiatorFanSts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RadiatorFanSts_FD11_CT2B_BLUEN_ac_Test_1","9.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_THERMAL_COMMAND.RadiatorFanSts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RadiatorFanSts_FD11_CT2B_BLUEN_ac_Test_1","100.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_THERMAL_COMMAND.RadiatorFanSts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RadiatorFanSts from the message HYBRID_THERMAL_COMMAND in channel FD11", Testcase_description = "Check whether the signal RadiatorFanSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChargeSystemFault_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemFault_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargeSystemFault.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemFault_FD11_CT2B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargeSystemFault.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeSystemFault from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal ChargeSystemFault starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VoltageRequest_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VoltageRequest_FD11_CT2B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.VoltageRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 695.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VoltageRequest_FD11_CT2B_BLUEN_ac_Test_1","695.7");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.VoltageRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 819.1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VoltageRequest_FD11_CT2B_BLUEN_ac_Test_1","819.1");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.VoltageRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VoltageRequest from the message HYBRID_CHARGING_COMMAND in channel FD11", Testcase_description = "Check whether the signal VoltageRequest starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_UDCChrgr_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_UDCChrgr_CT2B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.VDCM_UDCChrgr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4213.900000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_UDCChrgr_CT2B_BLUEN_ac_Test_1","4213.900000000001");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.VDCM_UDCChrgr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6553.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_UDCChrgr_CT2B_BLUEN_ac_Test_1","6553.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.VDCM_UDCChrgr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_UDCChrgr from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal VDCM_UDCChrgr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_OBC_OperativeMdReqFD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_OBC_OperativeMdReqFD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.OBC_OperativeModeReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_OBC_OperativeMdReqFD11_CT2B_BLUEN_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.OBC_OperativeModeReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_OBC_OperativeMdReqFD11_CT2B_BLUEN_ac_Test_1","14");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.OBC_OperativeModeReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_OperativeModeReq from the message HYBRID_CHARGING_COMMAND in channel FD11", Testcase_description = "Check whether the signal OBC_OperativeModeReq starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_SessnStopReq_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_SessnStopReq_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.VDCM_SessnStopReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_SessnStopReq_FD11_CT2B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.VDCM_SessnStopReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_SessnStopReq from the message HYBRID_CHARGING_COMMAND in channel FD11", Testcase_description = "Check whether the signal VDCM_SessnStopReq starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChargingLevel_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargingLevel_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargingLevel.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargingLevel_FD11_CT2B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargingLevel.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargingLevel_FD11_CT2B_BLUEN_ac_Test_1","14");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargingLevel.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargingLevel from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal ChargingLevel starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChrgSysFaultReasonFD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChrgSysFaultReasonFD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargeSystemFaultReason.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 223;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChrgSysFaultReasonFD11_CT2B_BLUEN_ac_Test_1","223");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargeSystemFaultReason.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChrgSysFaultReasonFD11_CT2B_BLUEN_ac_Test_1","254");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.ChargeSystemFaultReason.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeSystemFaultReason from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal ChargeSystemFaultReason starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_T4_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 32.10000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1","32.10000000000001");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1","164.7");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal T4_Sensor_Temp from the message VDCM_PWT3 in channel FD11", Testcase_description = "Check whether the signal T4_Sensor_Temp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChargeEnable_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeEnable_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.ChargeEnable.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeEnable_FD11_CT2B_BLUEN_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.ChargeEnable.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeEnable_FD11_CT2B_BLUEN_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.ChargeEnable.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeEnable from the message HYBRID_CHARGING_COMMAND in channel FD11", Testcase_description = "Check whether the signal ChargeEnable starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_WU_Timer_Value_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WU_Timer_Value_FD11_CT2B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.WU_Timer_Value.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 39451.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WU_Timer_Value_FD11_CT2B_BLUEN_ac_Test_1","39451.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.WU_Timer_Value.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 65535.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WU_Timer_Value_FD11_CT2B_BLUEN_ac_Test_1","65535.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.WU_Timer_Value.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal WU_Timer_Value from the message HYBRID_SYSTEM_EPT1 in channel FD11", Testcase_description = "Check whether the signal WU_Timer_Value starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVBattVolt_MinCal_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBattVolt_MinCal_FD11_CT2B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.HVBatteryVoltage_MinCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 181.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBattVolt_MinCal_FD11_CT2B_BLUEN_ac_Test_1","181.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.HVBatteryVoltage_MinCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 510.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBattVolt_MinCal_FD11_CT2B_BLUEN_ac_Test_1","510.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.HVBatteryVoltage_MinCal.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatteryVoltage_MinCal from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal HVBatteryVoltage_MinCal starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_IDCChrgr_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_IDCChrgr_CT2B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.VDCM_IDCChrgr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3017.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_IDCChrgr_CT2B_BLUEN_ac_Test_1","3017.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.VDCM_IDCChrgr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6553.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_IDCChrgr_CT2B_BLUEN_ac_Test_1","6553.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_STATUS.VDCM_IDCChrgr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_IDCChrgr from the message HYBRID_CHARGING_STATUS in channel FD11", Testcase_description = "Check whether the signal VDCM_IDCChrgr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CmdIgnSts_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CmdIgnSts_FD11_CT2B_BLUEN_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.BCM_FD_10.CmdIgnSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CmdIgnSts_FD11_CT2B_BLUEN_ac_Test_1","5");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.BCM_FD_10.CmdIgnSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CmdIgnSts_FD11_CT2B_BLUEN_ac_Test_1","6");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.BCM_FD_10.CmdIgnSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CmdIgnSts from the message BCM_FD_10 in channel FD11", Testcase_description = "Check whether the signal CmdIgnSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_T7_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T7_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_PWT3.T7_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 126.20000000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T7_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1","126.20000000000002");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_PWT3.T7_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T7_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1","164.7");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_PWT3.T7_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal T7_Sensor_Temp from the message VDCM_PWT3 in channel FD11", Testcase_description = "Check whether the signal T7_Sensor_Temp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PIMF_CoolantFlow_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PIMF_CoolantFlow_FD11_CT2B_BLUEN_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_PWT3.PIMF_CoolantFlow.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 56.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PIMF_CoolantFlow_FD11_CT2B_BLUEN_ac_Test_1","56.5");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_PWT3.PIMF_CoolantFlow.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 63.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PIMF_CoolantFlow_FD11_CT2B_BLUEN_ac_Test_1","63.5");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_PWT3.PIMF_CoolantFlow.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PIMF_CoolantFlow from the message VDCM_PWT3 in channel FD11", Testcase_description = "Check whether the signal PIMF_CoolantFlow starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_AC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -511.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1","-511.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.AC_Curr_Max_Thrsh.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 438.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1","438.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.AC_Curr_Max_Thrsh.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 511.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1","511.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.AC_Curr_Max_Thrsh.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AC_Curr_Max_Thrsh from the message HYBRID_CHARGING_COMMAND in channel FD11", Testcase_description = "Check whether the signal AC_Curr_Max_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CurrentRequest_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -32.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CurrentRequest_FD11_CT2B_BLUEN_ac_Test_1","-32.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.CurrentRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3.200000000000003;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CurrentRequest_FD11_CT2B_BLUEN_ac_Test_1","3.200000000000003");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.CurrentRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 70.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CurrentRequest_FD11_CT2B_BLUEN_ac_Test_1","70.3");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.CurrentRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CurrentRequest from the message HYBRID_CHARGING_COMMAND in channel FD11", Testcase_description = "Check whether the signal CurrentRequest starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_DC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -511.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1","-511.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.DC_Curr_Max_Thrsh.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 333.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1","333.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.DC_Curr_Max_Thrsh.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 511.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1","511.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_CHARGING_COMMAND.DC_Curr_Max_Thrsh.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DC_Curr_Max_Thrsh from the message HYBRID_CHARGING_COMMAND in channel FD11", Testcase_description = "Check whether the signal DC_Curr_Max_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Tx_Testing_FD11()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Tx_FD11.xlsx";

	Test_Case_SendCANR_ACCurrent_MaxCal_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_PerWakeUp_Diag_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_HVBattCurr_MaxCal_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_HVBattVolt_MaxCal_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_ChargeSystemSts_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_OBCM_PLUG_STS_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_OBC_ControlMethod_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_J1772_CloseS2_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_RadiatorFanSts_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_ChargeSystemFault_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_VoltageRequest_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_UDCChrgr_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_OBC_OperativeMdReqFD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_SessnStopReq_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_ChargingLevel_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_ChrgSysFaultReasonFD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_T4_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_ChargeEnable_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_WU_Timer_Value_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_HVBattVolt_MinCal_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_IDCChrgr_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_CmdIgnSts_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_T7_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_PIMF_CoolantFlow_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_AC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_CurrentRequest_FD11_CT2B_BLUEN_ac_Test_1(report);
	Test_Case_SendCANR_DC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1(report);
	report.Save_Excel(Report_Save_Path);


}

}
