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
public class AutomatedTestClass_Tx_FD16
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
public static void Test_Case_VeCANR_b_SGCP_DC_Volt_V_P_FD16_CR4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Volt_V_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_SGCP_DC_Volt_V_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Volt_V_P>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_SGCP_DC_Volt_V_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_DC_Volt_V_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_DC_Volt_V_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_SGCP_DC_Crrnt_V_P_FD16_CR4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Current_V_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_SGCP_DC_Crrnt_V_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Current_V_P>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_SGCP_DC_Crrnt_V_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_DC_Current_V_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_DC_Current_V_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_SGCP_DC_Current_P_FD16_CR4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -1638.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Current_P>(-1638.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_SGCP_DC_Current_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1059.9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Current_P>(1059.9);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_SGCP_DC_Current_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Current_P>(1638.3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_SGCP_DC_Current_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_DC_Current_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_DC_Current_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_SGCP_DerateResn_P_FD16_CR4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DerateReason_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_SGCP_DerateResn_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DerateReason_P>(10.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_SGCP_DerateResn_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DerateReason_P>(15.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_SGCP_DerateResn_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_DerateReason_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_DerateReason_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_SGCP_DC_Voltage_P_FD16_CR4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Voltage_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_SGCP_DC_Voltage_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 935.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Voltage_P>(935.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_SGCP_DC_Voltage_P_FD16_CR4B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_DC_Voltage_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_DC_Voltage_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_MCPA_DTC_Stat2_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_DTC_Stat2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPA_DTC_Stat2_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_DTC_Stat2>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPA_DTC_Stat2_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DTC_Stat2 from the message MCPA_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPA_DTC_Stat2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_cmp_MCPA_ClantTmp_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_CoolantTemp_P>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_cmp_MCPA_ClantTmp_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 28.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_CoolantTemp_P>(28.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_cmp_MCPA_ClantTmp_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_CoolantTemp_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_CoolantTemp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_MCPA_DC_Voltage_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Voltage_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_MCPA_DC_Voltage_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 179.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Voltage_P>(179.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_MCPA_DC_Voltage_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DC_Voltage_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_DC_Voltage_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_MCPA_DTC_Stat1_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_DTC_Stat1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPA_DTC_Stat1_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_DTC_Stat1>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPA_DTC_Stat1_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DTC_Stat1 from the message MCPA_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPA_DTC_Stat1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_MCPA_DTC_Idx2_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_DTC_Idx2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPA_DTC_Idx2_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 18;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_DTC_Idx2>(18.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPA_DTC_Idx2_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DTC_Idx2 from the message MCPA_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPA_DTC_Idx2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_MCPB_DC_Crrnt_V_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Current_V_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_MCPB_DC_Crrnt_V_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Current_V_P>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_MCPB_DC_Crrnt_V_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DC_Current_V_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_DC_Current_V_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_MCPB_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -1638.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Current_P>(-1638.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_MCPB_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1210.2000000000003;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Current_P>(1210.2000000000003);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_MCPB_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Current_P>(1638.3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_MCPB_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DC_Current_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_DC_Current_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_MCPB_DTC_Stat1_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_DTC_Stat1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPB_DTC_Stat1_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_DTC_Stat1>(6.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPB_DTC_Stat1_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DTC_Stat1 from the message MCPB_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPB_DTC_Stat1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_MCPA_Cal_ID_Idx_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_Cal_ID_Idx>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPA_Cal_ID_Idx_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_Cal_ID_Idx>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPA_Cal_ID_Idx_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_Cal_ID_Idx from the message MCPA_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPA_Cal_ID_Idx starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_MCPA_DC_Volt_V_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Volt_V_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_MCPA_DC_Volt_V_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Volt_V_P>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_MCPA_DC_Volt_V_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DC_Volt_V_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_DC_Volt_V_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_MCPA_DTC_Idx1_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_DTC_Idx1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPA_DTC_Idx1_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 27;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_DTC_Idx1>(27.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPA_DTC_Idx1_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DTC_Idx1 from the message MCPA_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPA_DTC_Idx1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_MCPB_CalChar_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_CalChar>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPB_CalChar_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 105;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_CalChar>(105.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPB_CalChar_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_CalChar from the message MCPB_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPB_CalChar starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_MCPB_DTC_Stat2_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_DTC_Stat2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPB_DTC_Stat2_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_DTC_Stat2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPB_DTC_Stat2_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DTC_Stat2 from the message MCPB_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPB_DTC_Stat2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_MCPB_DTC_Idx2_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_DTC_Idx2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPB_DTC_Idx2_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 28;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_DTC_Idx2>(28.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPB_DTC_Idx2_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DTC_Idx2 from the message MCPB_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPB_DTC_Idx2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_MCPA_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -1638.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Current_P>(-1638.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_MCPA_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -552.4000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Current_P>(-552.4000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_MCPA_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Current_P>(1638.3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_MCPA_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DC_Current_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_DC_Current_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_MCPA_CalChar_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_CalChar>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPA_CalChar_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 105;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_OBD_DTC.MCPA_CalChar>(105.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPA_CalChar_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_CalChar from the message MCPA_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPA_CalChar starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_MCPB_CoolantTmp_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_CoolantTemp_P>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_MCPB_CoolantTmp_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 91.20000000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_CoolantTemp_P>(91.20000000000002);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_MCPB_CoolantTmp_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_CoolantTemp_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_CoolantTemp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_MCPB_DC_Voltage_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Voltage_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_MCPB_DC_Voltage_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 687.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Voltage_P>(687.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_MCPB_DC_Voltage_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1022.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Voltage_P>(1022.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_MCPB_DC_Voltage_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DC_Voltage_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_DC_Voltage_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_MCPB_DTC_Idx1_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_DTC_Idx1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPB_DTC_Idx1_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_DTC_Idx1>(7.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPB_DTC_Idx1_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DTC_Idx1 from the message MCPB_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPB_DTC_Idx1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_MCPA_DC_Crrnt_V_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Current_V_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_MCPA_DC_Crrnt_V_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Current_V_P>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_MCPA_DC_Crrnt_V_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DC_Current_V_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_DC_Current_V_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_MCPB_DC_Volt_V_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Volt_V_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_MCPB_DC_Volt_V_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Volt_V_P>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_MCPB_DC_Volt_V_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DC_Volt_V_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_DC_Volt_V_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_MCPB_Cal_ID_Idx_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_Cal_ID_Idx>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPB_Cal_ID_Idx_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 56;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_OBD_DTC.MCPB_Cal_ID_Idx>(56.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_MCPB_Cal_ID_Idx_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_Cal_ID_Idx from the message MCPB_OBD_DTC in channel FD16", Testcase_description = "Check whether the signal MCPB_Cal_ID_Idx starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_MCPB_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DerateReason_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPB_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DerateReason_P>(5.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPB_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DerateReason_P>(15.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPB_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DerateReason_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_DerateReason_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_MCPA_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DerateReason_P>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPA_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DerateReason_P>(4.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPA_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DerateReason_P>(15.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_MCPA_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 29, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DerateReason_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_DerateReason_P starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Testing_Rx_FD16()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Rx_FD16.xlsx";

	Test_Case_VeCANR_b_SGCP_DC_Volt_V_P_FD16_CR4B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_SGCP_DC_Crrnt_V_P_FD16_CR4B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_SGCP_DC_Current_P_FD16_CR4B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_SGCP_DerateResn_P_FD16_CR4B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_SGCP_DC_Voltage_P_FD16_CR4B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_MCPA_DTC_Stat2_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_cmp_MCPA_ClantTmp_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_MCPA_DC_Voltage_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_MCPA_DTC_Stat1_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_y_MCPA_DTC_Idx2_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_MCPB_DC_Crrnt_V_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_MCPB_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_MCPB_DTC_Stat1_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_y_MCPA_Cal_ID_Idx_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_MCPA_DC_Volt_V_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_y_MCPA_DTC_Idx1_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_y_MCPB_CalChar_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_MCPB_DTC_Stat2_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_y_MCPB_DTC_Idx2_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_MCPA_DC_Current_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_y_MCPA_CalChar_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_MCPB_CoolantTmp_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_MCPB_DC_Voltage_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_y_MCPB_DTC_Idx1_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_MCPA_DC_Crrnt_V_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_MCPB_DC_Volt_V_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_y_MCPB_Cal_ID_Idx_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_MCPB_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_MCPA_DerateResn_P_FD16_CRDB_FUNC_ac_Test_1(report);
	report.Save_Excel(Report_Save_Path);


}

}
