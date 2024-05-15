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
public static void Test_Case_VeCANR_b_IDCM_Wakeup_HCP_FD11_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.LV_CHARGER1.IDCM_Wakeup_HCP>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_IDCM_Wakeup_HCP_FD11_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.LV_CHARGER1.IDCM_Wakeup_HCP>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_IDCM_Wakeup_HCP_FD11_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_Wakeup_HCP from the message LV_CHARGER1 in channel FD11", Testcase_description = "Check whether the signal IDCM_Wakeup_HCP starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_HVCMS_EVSEPrsntVltFD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPresentVoltage>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEPrsntVltFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 90.9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPresentVoltage>(90.9);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEPrsntVltFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEPresentVoltage from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEPresentVoltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_HVCMS_EVSEPrsntCurFD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPresentCurrent>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEPrsntCurFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 512.38;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPresentCurrent>(512.38);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEPrsntCurFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEPresentCurrent from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEPresentCurrent starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_OBC_Temp3_FD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp3_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp3_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp3_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp3 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp3 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_ChrgFailSts_FD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.HV_CHARGER2.ChrgFailSts>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ChrgFailSts_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.HV_CHARGER2.ChrgFailSts>(7.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ChrgFailSts_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChrgFailSts from the message HV_CHARGER2 in channel FD11", Testcase_description = "Check whether the signal ChrgFailSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_OBC_Temp4_FD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp4_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 168.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(168.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp4_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp4_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp4 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp4 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_OBC_Temp2_FD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp2_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 138.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(138.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp2_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp2_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp2 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCM_Cell_Volt_MinFD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Min>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_Volt_MinFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3.115;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Min>(3.115);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_Volt_MinFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_Cell_Volt_Min from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_Cell_Volt_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaximumVoltageLimit>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4226.900000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaximumVoltageLimit>(4226.900000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6553.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaximumVoltageLimit>(6553.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEMaximumVoltageLimit from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEMaximumVoltageLimit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_HVCMS_EVSEMinCurLmFD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -500.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinCurrentLimit>(-500.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEMinCurLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinCurrentLimit>(254.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEMinCurLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEMinCurrentLimit from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEMinCurrentLimit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_OBC_Temp1_FD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp1_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(50.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp1_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp1_FD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp1 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_HVCMS_EVSEMaxCurLmFD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -500.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaxCurrentLimit>(-500.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEMaxCurLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 124.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaxCurrentLimit>(124.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEMaxCurLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEMaxCurrentLimit from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEMaxCurrentLimit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCM_Cell_Volt_MaxFD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Max>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_Volt_MaxFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4.964;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Max>(4.964);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_Volt_MaxFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_Cell_Volt_Max from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_Cell_Volt_Max starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_HVCMS_ResponseCodeFD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_ResponseCode>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_ResponseCodeFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_ResponseCode>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_ResponseCodeFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_ResponseCode from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_ResponseCode starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_HVCMS_EVSEMinVltLmFD11_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinimumVoltageLimit>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMinVltLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1102.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinimumVoltageLimit>(1102.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMinVltLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6553.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinimumVoltageLimit>(6553.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMinVltLmFD11_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEMinimumVoltageLimit from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEMinimumVoltageLimit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_V2X_Modefeedback_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_Modefeedback>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_Modefeedback_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_Modefeedback>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_Modefeedback_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_Modefeedback from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal V2X_Modefeedback starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_OBCM_CCSts_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM2.OBCM_CCSts>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_OBCM_CCSts_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM2.OBCM_CCSts>(7.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_OBCM_CCSts_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBCM_CCSts from the message OBCM_VDCM2 in channel FD11", Testcase_description = "Check whether the signal OBCM_CCSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_HVCMS_TxMsgStat_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_TxMessageStat>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_TxMsgStat_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_TxMessageStat>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_TxMsgStat_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_TxMessageStat from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_TxMessageStat starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_HVCMS_EVSEPrsntVltFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPresentVoltage>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEPrsntVltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 475.8;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPresentVoltage>(475.8);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEPrsntVltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEPresentVoltage from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEPresentVoltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_HVCMS_EVSEStsCod_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEStatusCode>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_EVSEStsCod_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEStatusCode>(15.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_EVSEStsCod_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEStatusCode from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEStatusCode starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_HVCMS_EVSECurRglTlFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -500.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSECurrRegulationTol>(-500.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSECurRglTlFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 433.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSECurrRegulationTol>(433.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSECurRglTlFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSECurrRegulationTol from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSECurrRegulationTol starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_ChargerFaultStatesFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM2.Charger_FaultStates>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ChargerFaultStatesFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM2.Charger_FaultStates>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ChargerFaultStatesFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM2.Charger_FaultStates>(14.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ChargerFaultStatesFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Charger_FaultStates from the message OBCM_VDCM2 in channel FD11", Testcase_description = "Check whether the signal Charger_FaultStates starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_HVCMS_EVSEPrsntCurFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPresentCurrent>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEPrsntCurFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 67.12;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPresentCurrent>(67.12);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEPrsntCurFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEPresentCurrent from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEPresentCurrent starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_V2X_LV_Feed_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_LV_Feed>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_V2X_LV_Feed_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 21.260172800000003;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_LV_Feed>(21.260172800000003);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_V2X_LV_Feed_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_LV_Feed>(40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_V2X_LV_Feed_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_LV_Feed from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal V2X_LV_Feed starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCM_OCVMaxCelVoltFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_OCV_Max_Cell_Volt>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_OCVMaxCelVoltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 0.006;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_OCV_Max_Cell_Volt>(0.006);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_OCVMaxCelVoltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_OCV_Max_Cell_Volt from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_OCV_Max_Cell_Volt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaximumVoltageLimit>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6393.1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaximumVoltageLimit>(6393.1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6553.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaximumVoltageLimit>(6553.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEMaximumVoltageLimit from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEMaximumVoltageLimit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_BMS_HV_HiTempThd_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_High_Temp_Thrsh>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_BMS_HV_HiTempThd_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 115.10000000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_High_Temp_Thrsh>(115.10000000000002);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_BMS_HV_HiTempThd_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_High_Temp_Thrsh>(164.7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_BMS_HV_HiTempThd_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BMS_HV_High_Temp_Thrsh from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal BMS_HV_High_Temp_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_HVCMS_EVSEMaxCurLmFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -500.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaxCurrentLimit>(-500.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEMaxCurLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 482.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaxCurrentLimit>(482.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEMaxCurLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEMaxCurrentLimit from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEMaxCurrentLimit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_EVSE_Srvc2Crtfct_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_Service2_Certificate>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_Srvc2Crtfct_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_Service2_Certificate>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_Srvc2Crtfct_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 29, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_Service2_Certificate from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_Service2_Certificate starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_OBCM_PLCTypeSts_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.OBCM_PLCTypeSts>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_OBCM_PLCTypeSts_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.OBCM_PLCTypeSts>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_OBCM_PLCTypeSts_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.OBCM_PLCTypeSts>(6.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_OBCM_PLCTypeSts_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 30, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBCM_PLCTypeSts from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal OBCM_PLCTypeSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCMMaxCelVoltAlwdFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Max_Cell_Volt_Allowed>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCMMaxCelVoltAlwdFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7.1930000000000005;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Max_Cell_Volt_Allowed>(7.1930000000000005);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCMMaxCelVoltAlwdFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 31, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_Max_Cell_Volt_Allowed from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_Max_Cell_Volt_Allowed starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_AcOuputCurrent_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.AcOuputCurrent>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_AcOuputCurrent_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.AcOuputCurrent>(30.6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_AcOuputCurrent_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 102.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.AcOuputCurrent>(102.3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_AcOuputCurrent_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 32, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AcOuputCurrent from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal AcOuputCurrent starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_EVSE_OfrdPmtOptn_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_OfferedPaymentOptn>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_EVSE_OfrdPmtOptn_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 33, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_OfferedPaymentOptn from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_OfferedPaymentOptn starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_ACOutputVoltage3_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputVoltage3>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_ACOutputVoltage3_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 39.800000000000004;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputVoltage3>(39.800000000000004);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_ACOutputVoltage3_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 34, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ACOutputVoltage3 from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal ACOutputVoltage3 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_ACOutputCurrent2_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputCurrent2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_ACOutputCurrent2_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputCurrent2>(8.9);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_ACOutputCurrent2_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 35, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ACOutputCurrent2 from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal ACOutputCurrent2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_OnboardChrgrReady_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.HV_CHARGER2.OnboardChargerReady>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_OnboardChrgrReady_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.HV_CHARGER2.OnboardChargerReady>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_OnboardChrgrReady_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 36, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OnboardChargerReady from the message HV_CHARGER2 in channel FD11", Testcase_description = "Check whether the signal OnboardChargerReady starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_V2X_InputCurrent_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_InputCurrent>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_V2X_InputCurrent_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 64.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_InputCurrent>(64.3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_V2X_InputCurrent_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 102.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_InputCurrent>(102.3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_V2X_InputCurrent_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 37, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_InputCurrent from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal V2X_InputCurrent starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_ACOutputVoltage2_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputVoltage2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_ACOutputVoltage2_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 188.9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputVoltage2>(188.9);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_ACOutputVoltage2_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 38, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ACOutputVoltage2 from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal ACOutputVoltage2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_DC_TimeOut_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.DC_TimeOut>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_DC_TimeOut_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.DC_TimeOut>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_DC_TimeOut_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 39, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DC_TimeOut from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal DC_TimeOut starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_V2X_FailSts_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_FailSts>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_V2X_FailSts_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_FailSts>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_V2X_FailSts_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 40, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_FailSts from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal V2X_FailSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_DischargeFaultStatus_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.DischargeFaultStatus>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_DischargeFaultStatus_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.DischargeFaultStatus>(6.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_DischargeFaultStatus_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 41, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DischargeFaultStatus from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal DischargeFaultStatus starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_HVCMS_EVSEMinVltLmFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinimumVoltageLimit>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMinVltLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4556.8;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinimumVoltageLimit>(4556.8);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMinVltLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6553.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinimumVoltageLimit>(6553.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_HVCMS_EVSEMinVltLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 42, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEMinimumVoltageLimit from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEMinimumVoltageLimit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_OnboardChargerModeFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.HV_CHARGER2.OnboardChargerMode>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_OnboardChargerModeFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.HV_CHARGER2.OnboardChargerMode>(15.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_OnboardChargerModeFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 43, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OnboardChargerMode from the message HV_CHARGER2 in channel FD11", Testcase_description = "Check whether the signal OnboardChargerMode starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCMMaxPkVoltAllwdFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Max_Pk_Volt_Allowed>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCMMaxPkVoltAllwdFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1681.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Max_Pk_Volt_Allowed>(1681.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCMMaxPkVoltAllwdFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 44, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_Max_Pk_Volt_Allowed from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_Max_Pk_Volt_Allowed starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_HVCMS_EVSEPkCurRplFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -500.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPeakCurrentRipple>(-500.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEPkCurRplFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 127.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPeakCurrentRipple>(127.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEPkCurRplFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 45, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEPeakCurrentRipple from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEPeakCurrentRipple starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_h_HVBatCelVoltLoThrsFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_Low_Thrsh>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_h_HVBatCelVoltLoThrsFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.158;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_Low_Thrsh>(8.158);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_h_HVBatCelVoltLoThrsFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.191;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_Low_Thrsh>(8.191);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_h_HVBatCelVoltLoThrsFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 46, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatCell_Voltage_Low_Thrsh from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal HVBatCell_Voltage_Low_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_HVCMS_EVSEMinCurLmFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -500.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinCurrentLimit>(-500.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEMinCurLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -291.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMinCurrentLimit>(-291.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_HVCMS_EVSEMinCurLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 47, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEMinCurrentLimit from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEMinCurrentLimit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_HEV_OnRq_BPCM_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HEV_OnRq_BPCM>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_HEV_OnRq_BPCM_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HEV_OnRq_BPCM>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_HEV_OnRq_BPCM_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 48, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HEV_OnRq_BPCM from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal HEV_OnRq_BPCM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_V2X_InterlockSts_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_InterlockSts>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_InterlockSts_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_InterlockSts>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_InterlockSts_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 49, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_InterlockSts from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal V2X_InterlockSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCMMinCelVoltAlwdFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Min_Cell_Volt_Allowed>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCMMinCelVoltAlwdFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2.415;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Min_Cell_Volt_Allowed>(2.415);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCMMinCelVoltAlwdFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 50, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_Min_Cell_Volt_Allowed from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_Min_Cell_Volt_Allowed starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_d_BPCM_HVNrCelMaxTmpFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_HV_NumCellMaxTemp>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_d_BPCM_HVNrCelMaxTmpFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 224;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_HV_NumCellMaxTemp>(224.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_d_BPCM_HVNrCelMaxTmpFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 51, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_HV_NumCellMaxTemp from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_HV_NumCellMaxTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCM_Cell_VoltAvg_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Avg>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_VoltAvg_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3.2600000000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Avg>(3.2600000000000002);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_VoltAvg_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 52, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_Cell_Volt_Avg from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_Cell_Volt_Avg starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_OBC_Temp3_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp3_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 57.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(57.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp3_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp3_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 53, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp3 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp3 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_OBC_Temp1_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp1_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 124.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(124.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp1_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp1_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 54, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp1 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_EVSE_Supprtd_ISO1_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_Supported_ISO1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_Supprtd_ISO1_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_Supported_ISO1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_Supprtd_ISO1_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 55, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_Supported_ISO1 from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_Supported_ISO1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_h_EVSE_ServiceId_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_ServiceId>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_h_EVSE_ServiceId_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 36761;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_ServiceId>(36761.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_h_EVSE_ServiceId_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 65535;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_ServiceId>(65535.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_h_EVSE_ServiceId_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 56, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_ServiceId from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_ServiceId starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_ACOutputCurrent3_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputCurrent3>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_ACOutputCurrent3_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 70.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputCurrent3>(70.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_ACOutputCurrent3_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 57, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ACOutputCurrent3 from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal ACOutputCurrent3 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCM_OCVMinCelVoltFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_OCV_Min_Cell_Volt>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_OCVMinCelVoltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.764;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_OCV_Min_Cell_Volt>(5.764);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_OCVMinCelVoltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 58, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_OCV_Min_Cell_Volt from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_OCV_Min_Cell_Volt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_EVSE_Supportd_DIN_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_Supported_DIN>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_Supportd_DIN_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_Supported_DIN>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_Supportd_DIN_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 59, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_Supported_DIN from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_Supported_DIN starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_EVSE_FreeService_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_FreeService>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_FreeService_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_FreeService>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_FreeService_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 60, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_FreeService from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_FreeService starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_cmp_HVCMS_EgToBDlvd_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EnergyToBeDelivered>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_cmp_HVCMS_EgToBDlvd_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 80227.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EnergyToBeDelivered>(80227.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_cmp_HVCMS_EgToBDlvd_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 61, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EnergyToBeDelivered from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EnergyToBeDelivered starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TCP_ComTerminated_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM2.TCP_Communication_Terminated>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TCP_ComTerminated_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM2.TCP_Communication_Terminated>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TCP_ComTerminated_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 62, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TCP_Communication_Terminated from the message OBCM_VDCM2 in channel FD11", Testcase_description = "Check whether the signal TCP_Communication_Terminated starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_d_BPCM_HVNrCelMaxVltFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_HV_NumCellMaxVolt>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_d_BPCM_HVNrCelMaxVltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 170;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_HV_NumCellMaxVolt>(170.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_d_BPCM_HVNrCelMaxVltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 63, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_HV_NumCellMaxVolt from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_HV_NumCellMaxVolt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_DCInputVoltage_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 180.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.DCInputVoltage>(180.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_DCInputVoltage_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 762.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.DCInputVoltage>(762.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_DCInputVoltage_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 64, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DCInputVoltage from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal DCInputVoltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_HVCMS_EVSEVltLmAchFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEVoltageLimitAchieved>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_EVSEVltLmAchFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEVoltageLimitAchieved>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_EVSEVltLmAchFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 65, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEVoltageLimitAchieved from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEVoltageLimitAchieved starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_HVCMS_EVSEProcg_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEProcessing>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_HVCMS_EVSEProcg_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEProcessing>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_HVCMS_EVSEProcg_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 66, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEProcessing from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEProcessing starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_AcOutputVoltage_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.AcOutputVoltage>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_AcOutputVoltage_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 190.20000000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.AcOutputVoltage>(190.20000000000002);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_AcOutputVoltage_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 204.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.AcOutputVoltage>(204.7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_AcOutputVoltage_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 67, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AcOutputVoltage from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal AcOutputVoltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_d_BPCM_HVNrCelMinTmpFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_HV_NumCellMinTemp>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_d_BPCM_HVNrCelMinTmpFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 467;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_HV_NumCellMinTemp>(467.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_d_BPCM_HVNrCelMinTmpFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 68, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_HV_NumCellMinTemp from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_HV_NumCellMinTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_V2X_Derate_Reason_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_Derate_Reason>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_Derate_Reason_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_Derate_Reason>(7.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_Derate_Reason_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 69, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_Derate_Reason from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal V2X_Derate_Reason starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCM_Cell_Volt_MinFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Min>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_Volt_MinFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.773;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Min>(5.773);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_Volt_MinFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 70, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_Cell_Volt_Min from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_Cell_Volt_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_V2X_Status_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.V2X_Status>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_Status_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.V2X_Status>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_Status_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.V2X_Status>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_Status_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 71, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_Status from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal V2X_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_OBC_Temp2_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp2_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -17.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(-17.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp2_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp2_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 72, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp2 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_OBC_Temp4_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp4_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp4_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_OBC_Temp4_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 73, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp4 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp4 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_f_ACOutput_Frequency_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutput_Frequency>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_f_ACOutput_Frequency_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 41.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutput_Frequency>(41.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_f_ACOutput_Frequency_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 127.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutput_Frequency>(127.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_f_ACOutput_Frequency_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 74, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ACOutput_Frequency from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal ACOutput_Frequency starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_ACOutputCurrent1_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputCurrent1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_ACOutputCurrent1_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 74.10000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputCurrent1>(74.10000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_ACOutputCurrent1_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 75, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ACOutputCurrent1 from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal ACOutputCurrent1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_P_Available_Power_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.Available_Power>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_P_Available_Power_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10.700000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.Available_Power>(10.700000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_P_Available_Power_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.Available_Power>(12.7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_P_Available_Power_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 76, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Available_Power from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal Available_Power starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_ChrgFailSts_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.HV_CHARGER2.ChrgFailSts>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ChrgFailSts_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.HV_CHARGER2.ChrgFailSts>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ChrgFailSts_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 77, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChrgFailSts from the message HV_CHARGER2 in channel FD11", Testcase_description = "Check whether the signal ChrgFailSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_EVSE_IsolationSts_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_IsolationSts>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_EVSE_IsolationSts_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_IsolationSts>(4.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_EVSE_IsolationSts_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 78, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_IsolationSts from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_IsolationSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_h_HVBatCelVoltHiThrsFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_High_Thrsh>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_h_HVBatCelVoltHiThrsFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6.803;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_High_Thrsh>(6.803);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_h_HVBatCelVoltHiThrsFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.191;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_High_Thrsh>(8.191);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_h_HVBatCelVoltHiThrsFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 79, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatCell_Voltage_High_Thrsh from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal HVBatCell_Voltage_High_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_HVCMS_EVSECurLmAchFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSECurrentLimitAchieved>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_EVSECurLmAchFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSECurrentLimitAchieved>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_EVSECurLmAchFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 80, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSECurrentLimitAchieved from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSECurrentLimitAchieved starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_EVSE_OfrdPymntEIM_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_OfferedPaymentEIM>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_OfrdPymntEIM_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_OfferedPaymentEIM>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_OfrdPymntEIM_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 81, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_OfferedPaymentEIM from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_OfferedPaymentEIM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_EVSE_OfdPymtCntct_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_OfferedPaymentContract>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_OfdPymtCntct_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_OfferedPaymentContract>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_EVSE_OfdPymtCntct_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 82, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_OfferedPaymentContract from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_OfferedPaymentContract starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCM_OCVAvgCelVoltFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_OCV_Avg_Cell_Volt>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_OCVAvgCelVoltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.1370000000000005;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_OCV_Avg_Cell_Volt>(5.1370000000000005);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_OCVAvgCelVoltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 83, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_OCV_Avg_Cell_Volt from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_OCV_Avg_Cell_Volt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_f_AcOutputFrequency_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.AcOutputFrequency>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_f_AcOutputFrequency_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.AcOutputFrequency>(10.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_f_AcOutputFrequency_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 127.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.AcOutputFrequency>(127.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_f_AcOutputFrequency_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 84, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AcOutputFrequency from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal AcOutputFrequency starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_HVCMS_ResponseCodeFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_ResponseCode>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_ResponseCodeFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_ResponseCode>(12.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_ResponseCodeFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 85, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_ResponseCode from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_ResponseCode starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_V2X_FaultRsn_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_FaultRsn>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_FaultRsn_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 13;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_FaultRsn>(13.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_V2X_FaultRsn_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 86, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_FaultRsn from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal V2X_FaultRsn starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_d_BPCM_HVNrCelMinVltFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_HV_NumCellMinVolt>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_d_BPCM_HVNrCelMinVltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 167;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_HV_NumCellMinVolt>(167.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_d_BPCM_HVNrCelMinVltFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 87, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_HV_NumCellMinVolt from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_HV_NumCellMinVolt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_HVCMS_EVSEPwrLmAchFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPowerLimitAchieved>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_EVSEPwrLmAchFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEPowerLimitAchieved>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HVCMS_EVSEPwrLmAchFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 88, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEPowerLimitAchieved from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEPowerLimitAchieved starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_BMS_HVLoTempThd_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_Low_Temp_Thrsh>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_BMS_HVLoTempThd_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 109.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_Low_Temp_Thrsh>(109.5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_BMS_HVLoTempThd_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_Low_Temp_Thrsh>(164.7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_BMS_HVLoTempThd_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 89, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BMS_HV_Low_Temp_Thrsh from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal BMS_HV_Low_Temp_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_V2X_InputVoltage_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_InputVoltage>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_V2X_InputVoltage_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 785.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_InputVoltage>(785.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_V2X_InputVoltage_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_InputVoltage>(1023.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_V2X_InputVoltage_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 90, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_InputVoltage from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal V2X_InputVoltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_ACOutputVoltage1_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputVoltage1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_ACOutputVoltage1_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 245.60000000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.ACOutputVoltage1>(245.60000000000002);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_ACOutputVoltage1_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 91, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ACOutputVoltage1 from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal ACOutputVoltage1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCM_Cell_Volt_MaxFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Max>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_Volt_MaxFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6.144;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Cell_Volt_Max>(6.144);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCM_Cell_Volt_MaxFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 92, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_Cell_Volt_Max from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_Cell_Volt_Max starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_EVSEOfrdEgyTrfTyp_FD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_OfferedEnergyTransferType>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_EVSEOfrdEgyTrfTyp_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_OfferedEnergyTransferType>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_EVSEOfrdEgyTrfTyp_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.EVSE_OfferedEnergyTransferType>(15.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_EVSEOfrdEgyTrfTyp_FD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 93, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_OfferedEnergyTransferType from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal EVSE_OfferedEnergyTransferType starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_P_HVCMS_EVSEMaxPwrLmFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaxPowerLimit>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_P_HVCMS_EVSEMaxPwrLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1644012.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.OBCM_VDCM.HVCMS_EVSEMaxPowerLimit>(1644012.5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_P_HVCMS_EVSEMaxPwrLmFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 94, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVSEMaxPowerLimit from the message OBCM_VDCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVSEMaxPowerLimit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_V2X_Derate_Status_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_Derate_Status>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_V2X_Derate_Status_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.PPIM.RPF_FD_2.V2X_Derate_Status>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_V2X_Derate_Status_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 95, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_Derate_Status from the message RPF_FD_2 in channel FD11", Testcase_description = "Check whether the signal V2X_Derate_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_f_V2X_Frequency_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.V2X_Frequency>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_f_V2X_Frequency_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 816.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.V2X_Frequency>(816.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_f_V2X_Frequency_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.V2X_Frequency>(1023.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_f_V2X_Frequency_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 96, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_Frequency from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal V2X_Frequency starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_U_BPCMMinPkVoltAllwdFD11_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Min_Pk_Volt_Allowed>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCMMinPkVoltAllwdFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1044.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV_VLIMITS.BPCM_Min_Pk_Volt_Allowed>(1044.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_U_BPCMMinPkVoltAllwdFD11_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 97, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BPCM_Min_Pk_Volt_Allowed from the message BATTERY_HV_VLIMITS in channel FD11", Testcase_description = "Check whether the signal BPCM_Min_Pk_Volt_Allowed starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_I_DCInputCurrent_CR2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.DCInputCurrent>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_DCInputCurrent_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 84.10000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.RPF_FD_1.DCInputCurrent>(84.10000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_I_DCInputCurrent_CR2B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 98, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DCInputCurrent from the message RPF_FD_1 in channel FD11", Testcase_description = "Check whether the signal DCInputCurrent starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Testing_Rx_FD11()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Rx_FD11.xlsx";

	Test_Case_VeCANR_b_IDCM_Wakeup_HCP_FD11_APMR_ac_Test_1(report);
	Test_Case_VeCANR_U_HVCMS_EVSEPrsntVltFD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_I_HVCMS_EVSEPrsntCurFD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_T_OBC_Temp3_FD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_e_ChrgFailSts_FD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_T_OBC_Temp4_FD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_T_OBC_Temp2_FD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCM_Cell_Volt_MinFD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_I_HVCMS_EVSEMinCurLmFD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_T_OBC_Temp1_FD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_I_HVCMS_EVSEMaxCurLmFD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCM_Cell_Volt_MaxFD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_e_HVCMS_ResponseCodeFD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_U_HVCMS_EVSEMinVltLmFD11_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_e_V2X_Modefeedback_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_OBCM_CCSts_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_HVCMS_TxMsgStat_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_HVCMS_EVSEPrsntVltFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_HVCMS_EVSEStsCod_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_HVCMS_EVSECurRglTlFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_ChargerFaultStatesFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_HVCMS_EVSEPrsntCurFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_V2X_LV_Feed_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCM_OCVMaxCelVoltFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_HVCMS_EVSEMaxVltLmFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_BMS_HV_HiTempThd_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_HVCMS_EVSEMaxCurLmFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_EVSE_Srvc2Crtfct_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_OBCM_PLCTypeSts_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCMMaxCelVoltAlwdFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_AcOuputCurrent_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_EVSE_OfrdPmtOptn_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_ACOutputVoltage3_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_ACOutputCurrent2_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_OnboardChrgrReady_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_V2X_InputCurrent_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_ACOutputVoltage2_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_DC_TimeOut_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_V2X_FailSts_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_DischargeFaultStatus_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_HVCMS_EVSEMinVltLmFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_OnboardChargerModeFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCMMaxPkVoltAllwdFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_HVCMS_EVSEPkCurRplFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_h_HVBatCelVoltLoThrsFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_HVCMS_EVSEMinCurLmFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_HEV_OnRq_BPCM_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_V2X_InterlockSts_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCMMinCelVoltAlwdFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_d_BPCM_HVNrCelMaxTmpFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCM_Cell_VoltAvg_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_OBC_Temp3_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_OBC_Temp1_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_EVSE_Supprtd_ISO1_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_h_EVSE_ServiceId_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_ACOutputCurrent3_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCM_OCVMinCelVoltFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_EVSE_Supportd_DIN_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_EVSE_FreeService_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_cmp_HVCMS_EgToBDlvd_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TCP_ComTerminated_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_d_BPCM_HVNrCelMaxVltFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_DCInputVoltage_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_HVCMS_EVSEVltLmAchFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_HVCMS_EVSEProcg_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_AcOutputVoltage_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_d_BPCM_HVNrCelMinTmpFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_V2X_Derate_Reason_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCM_Cell_Volt_MinFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_V2X_Status_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_OBC_Temp2_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_OBC_Temp4_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_f_ACOutput_Frequency_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_ACOutputCurrent1_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_P_Available_Power_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_ChrgFailSts_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_EVSE_IsolationSts_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_h_HVBatCelVoltHiThrsFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_HVCMS_EVSECurLmAchFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_EVSE_OfrdPymntEIM_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_EVSE_OfdPymtCntct_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCM_OCVAvgCelVoltFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_f_AcOutputFrequency_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_HVCMS_ResponseCodeFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_V2X_FaultRsn_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_d_BPCM_HVNrCelMinVltFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_HVCMS_EVSEPwrLmAchFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_BMS_HVLoTempThd_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_V2X_InputVoltage_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_ACOutputVoltage1_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCM_Cell_Volt_MaxFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_EVSEOfrdEgyTrfTyp_FD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_P_HVCMS_EVSEMaxPwrLmFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_V2X_Derate_Status_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_f_V2X_Frequency_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_U_BPCMMinPkVoltAllwdFD11_CR2B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_I_DCInputCurrent_CR2B_FUNC_ac_Test_1(report);
	report.Save_Excel(Report_Save_Path);


}

}
