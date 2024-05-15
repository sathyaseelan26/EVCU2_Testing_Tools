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
public static void Test_Case_APM2_BoostSwitchSts(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_BoostSwitchSts>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_BoostSwitchSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_BoostSwitchSts>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_BoostSwitchSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_BoostSwitchSts from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_BoostSwitchSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_ContactorFault(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ContactorFault>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ContactorFault_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ContactorFault>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ContactorFault_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_ContactorFault from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_ContactorFault starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_DcChEnaSts_Fdbk(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_DcChEnaSts_Fdbk>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_DcChEnaSts_Fdbk_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_DcChEnaSts_Fdbk>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_DcChEnaSts_Fdbk_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_DcChEnaSts_Fdbk from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_DcChEnaSts_Fdbk starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_DeratRsnSts(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_DeratRsnSts>(6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_DeratRsnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_DeratRsnSts>(4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_DeratRsnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_DeratRsnSts>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_DeratRsnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_DeratRsnSts>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_DeratRsnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_DeratRsnSts from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_DeratRsnSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_DisChargedSts_Fdbk(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_DisChargedSts_Fdbk>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_DisChargedSts_Fdbk_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_DisChargedSts_Fdbk>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_DisChargedSts_Fdbk_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_DisChargedSts_Fdbk from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_DisChargedSts_Fdbk starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_ErrorWord(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ErrorWord>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ErrorWord_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1560921669;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ErrorWord>(1560921669);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ErrorWord_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2526324279;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ErrorWord>(2526324279);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ErrorWord_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2479906870;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ErrorWord>(2479906870);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ErrorWord_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4294967295;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ErrorWord>(4294967295);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ErrorWord_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_ErrorWord from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_ErrorWord starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_FaultSts(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_FaultSts>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_FaultSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_FaultSts>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_FaultSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_FaultSts from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_FaultSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_HVChrgBusCurrent(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -815.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusCurrent>(-815.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusCurrent_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -143.19999999999993;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusCurrent>(-143.19999999999993);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusCurrent_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -222.29999999999995;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusCurrent>(-222.29999999999995);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusCurrent_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -690.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusCurrent>(-690.3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusCurrent_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 823.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusCurrent>(823.3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusCurrent_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_HVChrgBusCurrent from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_HVChrgBusCurrent starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_HVChrgBusVoltage(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusVoltage>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 44.6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusVoltage>(44.6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 810.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusVoltage>(810.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1251.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusVoltage>(1251.7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_HVChrgBusVoltage>(1638.3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_HVChrgBusVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_HVChrgBusVoltage from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_HVChrgBusVoltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_IInpMaxCnvr(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -815.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_IInpMaxCnvr>(-815.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_IInpMaxCnvr_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -17.09999999999991;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_IInpMaxCnvr>(-17.09999999999991);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_IInpMaxCnvr_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -479.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_IInpMaxCnvr>(-479.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_IInpMaxCnvr_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -11.299999999999955;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_IInpMaxCnvr>(-11.299999999999955);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_IInpMaxCnvr_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 823.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_IInpMaxCnvr>(823.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_IInpMaxCnvr_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_IInpMaxCnvr from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_IInpMaxCnvr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_K6_WldgDtnSts(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_K6_WldgDtnSts>(3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_K6_WldgDtnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_K6_WldgDtnSts>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_K6_WldgDtnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_K6_WldgDtnSts>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_K6_WldgDtnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_K6_WldgDtnSts from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_K6_WldgDtnSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_K7_WldgDtnSts(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_K7_WldgDtnSts>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_K7_WldgDtnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_K7_WldgDtnSts>(3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_K7_WldgDtnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_K7_WldgDtnSts>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_K7_WldgDtnSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_K7_WldgDtnSts from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_K7_WldgDtnSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_ModeSts_Fbk(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ModeSts_Fbk>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ModeSts_Fbk_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ModeSts_Fbk>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ModeSts_Fbk_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 13;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ModeSts_Fbk>(13);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ModeSts_Fbk_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ModeSts_Fbk>(10);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ModeSts_Fbk_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_ModeSts_Fbk>(14);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_ModeSts_Fbk_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_ModeSts_Fbk from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_ModeSts_Fbk starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_RecoveryAction(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_RecoveryAction>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_RecoveryAction_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_RecoveryAction>(3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_RecoveryAction_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_RecoveryAction>(6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_RecoveryAction_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_RecoveryAction>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_RecoveryAction_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_RecoveryAction from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_RecoveryAction starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_Service_Lamp_Request(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_Service_Lamp_Request>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_Service_Lamp_Request_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_Service_Lamp_Request>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2_Service_Lamp_Request_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_Service_Lamp_Request from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_Service_Lamp_Request starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_TempFET1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempFET1>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempFET1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 131.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempFET1>(131.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempFET1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempFET1>(215.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempFET1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 118.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempFET1>(118.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempFET1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_TempFET1 from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_TempFET1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_TempFET2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempFET2>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempFET2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 74.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempFET2>(74.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempFET2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 79.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempFET2>(79.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempFET2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 187.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempFET2>(187.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempFET2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempFET2>(215.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempFET2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_TempFET2 from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_TempFET2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_TempInlet(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInlet>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInlet_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 101.20000000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInlet>(101.20000000000002);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInlet_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 80.80000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInlet>(80.80000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInlet_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -8.299999999999997;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInlet>(-8.299999999999997);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInlet_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInlet>(164.6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInlet_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_TempInlet from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_TempInlet starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_TempInt(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInt>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 83.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInt>(83.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 213.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInt>(213.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 44.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInt>(44.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempInt>(215.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_TempInt from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_TempInt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_TempL1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL1>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 200.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL1>(200.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 22.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL1>(22.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -13.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL1>(-13.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL1>(215.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_TempL1 from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_TempL1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_TempL2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL2>(-40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 211.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL2>(211.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 163.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL2>(163.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 35.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL2>(35.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempL2>(215.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempL2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_TempL2 from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_TempL2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2_TempMargin(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -21.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempMargin>(-21.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempMargin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7.971;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempMargin>(7.971);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempMargin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -4.683;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempMargin>(-4.683);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempMargin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -11.676;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempMargin>(-11.676);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempMargin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 21.219;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2_TempMargin>(21.219);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("APM2_TempMargin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2_TempMargin from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2_TempMargin starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_APM2InterlockSts(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2InterlockSts>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2InterlockSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2InterlockSts>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2InterlockSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2InterlockSts>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2InterlockSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.APM2InterlockSts>(3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("APM2InterlockSts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal APM2InterlockSts from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal APM2InterlockSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_CurrEVSE(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -815.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.CurrEVSE>(-815.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CurrEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -276.19999999999993;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.CurrEVSE>(-276.19999999999993);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CurrEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -116.69999999999993;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.CurrEVSE>(-116.69999999999993);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CurrEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -587.9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.CurrEVSE>(-587.9);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CurrEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 823.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.CurrEVSE>(823.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CurrEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CurrEVSE from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal CurrEVSE starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_PwrEff(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.PwrEff>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("PwrEff_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 49.900000000000006;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.PwrEff>(49.900000000000006);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("PwrEff_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 54.1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.PwrEff>(54.1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("PwrEff_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 98.10000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.PwrEff>(98.10000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("PwrEff_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 102.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.PwrEff>(102.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("PwrEff_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PwrEff from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal PwrEff starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VltgChgEVSE(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgEVSE>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1579.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgEVSE>(1579.7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 66.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgEVSE>(66.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1278.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgEVSE>(1278.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgEVSE>(1638.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgEVSE_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VltgChgEVSE from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal VltgChgEVSE starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VltgChgInt(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgInt>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 315.20000000000005;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgInt>(315.20000000000005);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1551.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgInt>(1551.7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 531.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgInt>(531.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.APM2.APM2_VDCM.VltgChgInt>(1638.2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VltgChgInt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VltgChgInt from the message APM2_VDCM in channel FD11", Testcase_description = "Check whether the signal VltgChgInt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ImpactHardwire(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV.ImpactHardwire>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("ImpactHardwire_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV.ImpactHardwire>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("ImpactHardwire_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ImpactHardwire from the message BATTERY_HV in channel FD11", Testcase_description = "Check whether the signal ImpactHardwire starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ImpactHardwireV(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV.ImpactHardwireV>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("ImpactHardwireV_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV.ImpactHardwireV>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("ImpactHardwireV_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 29, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ImpactHardwireV from the message BATTERY_HV in channel FD11", Testcase_description = "Check whether the signal ImpactHardwireV starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_BMS_HV_High_Temp_Thrsh(Test_MSExcel_Report report)
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
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_High_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 90.30000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_High_Temp_Thrsh>(90.30000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_High_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 89.9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_High_Temp_Thrsh>(89.9);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_High_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 66.30000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_High_Temp_Thrsh>(66.30000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_High_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_High_Temp_Thrsh>(164.7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_High_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 30, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BMS_HV_High_Temp_Thrsh from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal BMS_HV_High_Temp_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_BMS_HV_Low_Temp_Thrsh(Test_MSExcel_Report report)
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
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_Low_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -16.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_Low_Temp_Thrsh>(-16.5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_Low_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 128.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_Low_Temp_Thrsh>(128.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_Low_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 38.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_Low_Temp_Thrsh>(38.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_Low_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_Low_Temp_Thrsh>(164.7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_Low_Temp_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 31, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BMS_HV_Low_Temp_Thrsh from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal BMS_HV_Low_Temp_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_BMS_HV_SOC_AccuracySts(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_AccuracySts>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("BMS_HV_SOC_AccuracySts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_AccuracySts>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("BMS_HV_SOC_AccuracySts_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 32, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BMS_HV_SOC_AccuracySts from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal BMS_HV_SOC_AccuracySts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_BMS_HV_SOC_Max(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Max>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Max_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 43.921583999999996;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Max>(43.921583999999996);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Max_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 24.705890999999998;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Max>(24.705890999999998);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Max_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 37.647071999999994;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Max>(37.647071999999994);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Max_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Max>(100.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Max_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 33, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BMS_HV_SOC_Max from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal BMS_HV_SOC_Max starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_BMS_HV_SOC_Min(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Min>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Min_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 18.780336000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Min>(18.780336000000002);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Min_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 19.954107;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Min>(19.954107);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Min_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 95.075451;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Min>(95.075451);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Min_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_Min>(100.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("BMS_HV_SOC_Min_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 34, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BMS_HV_SOC_Min from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal BMS_HV_SOC_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_HEV_OnRq_BPCM(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HEV_OnRq_BPCM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("HEV_OnRq_BPCM_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HEV_OnRq_BPCM>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("HEV_OnRq_BPCM_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 35, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HEV_OnRq_BPCM from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal HEV_OnRq_BPCM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_HVBatCell_Voltage_High_Thrsh(Test_MSExcel_Report report)
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
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_High_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6.045;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_High_Thrsh>(6.045);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_High_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.3180000000000005;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_High_Thrsh>(5.3180000000000005);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_High_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1.1340000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_High_Thrsh>(1.1340000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_High_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.191;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_High_Thrsh>(8.191);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_High_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 36, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatCell_Voltage_High_Thrsh from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal HVBatCell_Voltage_High_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_HVBatCell_Voltage_Low_Thrsh(Test_MSExcel_Report report)
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
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_Low_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3.25;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_Low_Thrsh>(3.25);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_Low_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4.806;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_Low_Thrsh>(4.806);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_Low_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.38;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_Low_Thrsh>(5.38);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_Low_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.191;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.HVBatCell_Voltage_Low_Thrsh>(8.191);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatCell_Voltage_Low_Thrsh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 37, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatCell_Voltage_Low_Thrsh from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal HVBatCell_Voltage_Low_Thrsh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_Temp1(Test_MSExcel_Report report)
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
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 98.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(98.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 117.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(117.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 38, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp1 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_Temp2(Test_MSExcel_Report report)
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
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 188.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(188.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -3.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(-3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(-30.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 39, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp2 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_Temp3(Test_MSExcel_Report report)
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
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 35.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(35.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 161.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(161.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 104.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(104.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 40, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp3 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp3 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_Temp4(Test_MSExcel_Report report)
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
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 211.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(211.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 161.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(161.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 103.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(103.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(214.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("OBC_Temp4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 41, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp4 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp4 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_CRC_FOTA_MASTER(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.CRC_FOTA_MASTER>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 107;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.CRC_FOTA_MASTER>(107);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 203;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.CRC_FOTA_MASTER>(203);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 134;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.CRC_FOTA_MASTER>(134);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 255;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.CRC_FOTA_MASTER>(255);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 42, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CRC_FOTA_MASTER from the message FOTA_MASTER in channel FD11", Testcase_description = "Check whether the signal CRC_FOTA_MASTER starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_FOTA_Status(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.FOTA_Status>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("FOTA_Status_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.FOTA_Status>(8);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("FOTA_Status_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.FOTA_Status>(6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("FOTA_Status_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.FOTA_Status>(14);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("FOTA_Status_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.FOTA_Status>(15);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("FOTA_Status_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 43, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal FOTA_Status from the message FOTA_MASTER in channel FD11", Testcase_description = "Check whether the signal FOTA_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MessageCounter_FOTA_MASTER(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.MessageCounter_FOTA_MASTER>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("MessageCounter_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.MessageCounter_FOTA_MASTER>(3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("MessageCounter_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 13;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.MessageCounter_FOTA_MASTER>(13);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("MessageCounter_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.MessageCounter_FOTA_MASTER>(4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("MessageCounter_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.SGW.FOTA_MASTER.MessageCounter_FOTA_MASTER>(15);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("MessageCounter_FOTA_MASTER_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 44, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MessageCounter_FOTA_MASTER from the message FOTA_MASTER in channel FD11", Testcase_description = "Check whether the signal MessageCounter_FOTA_MASTER starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_HVBattery_RealTimeClock(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY5.HVBattery_RealTimeClock>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBattery_RealTimeClock_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 77449689.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY5.HVBattery_RealTimeClock>(77449689.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBattery_RealTimeClock_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1439000755.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY5.HVBattery_RealTimeClock>(1439000755.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBattery_RealTimeClock_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4158134717.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY5.HVBattery_RealTimeClock>(4158134717.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBattery_RealTimeClock_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4294967294.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY5.HVBattery_RealTimeClock>(4294967294.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBattery_RealTimeClock_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 50, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBattery_RealTimeClock from the message HVBATTERY5 in channel FD11", Testcase_description = "Check whether the signal HVBattery_RealTimeClock starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Warning_PackTempHigh(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY_RM_CHARGING1.Warning_PackTempHigh>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("Warning_PackTempHigh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY_RM_CHARGING1.Warning_PackTempHigh>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("Warning_PackTempHigh_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 52, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Warning_PackTempHigh from the message HVBATTERY_RM_CHARGING1 in channel FD11", Testcase_description = "Check whether the signal Warning_PackTempHigh starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_HVBatSleepTime(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY_THERMAL.HVBatSleepTime>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatSleepTime_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9.8;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY_THERMAL.HVBatSleepTime>(9.8);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatSleepTime_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 32.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY_THERMAL.HVBatSleepTime>(32.4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatSleepTime_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14.200000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY_THERMAL.HVBatSleepTime>(14.200000000000001);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatSleepTime_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 48.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.BPCM.HVBATTERY_THERMAL.HVBatSleepTime>(48.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("HVBatSleepTime_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 53, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatSleepTime from the message HVBATTERY_THERMAL in channel FD11", Testcase_description = "Check whether the signal HVBatSleepTime starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_CdM_Avail_output_current_EXT(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_Avail_output_current_EXT>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_Avail_output_current_EXT_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 67.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_Avail_output_current_EXT>(67.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_Avail_output_current_EXT_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 557.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_Avail_output_current_EXT>(557.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_Avail_output_current_EXT_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1021.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_Avail_output_current_EXT>(1021.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_Avail_output_current_EXT_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_Avail_output_current_EXT>(1023.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_Avail_output_current_EXT_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 54, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CdM_Avail_output_current_EXT from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal CdM_Avail_output_current_EXT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_CdM_Charger_connector_lock(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_Charger_connector_lock>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CdM_Charger_connector_lock_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_Charger_connector_lock>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CdM_Charger_connector_lock_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 55, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CdM_Charger_connector_lock from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal CdM_Charger_connector_lock starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_CdM_ExtFun_Thres_Volt(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_ExtFun_Thres_Volt>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_ExtFun_Thres_Volt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1279.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_ExtFun_Thres_Volt>(1279.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_ExtFun_Thres_Volt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1202.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_ExtFun_Thres_Volt>(1202.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_ExtFun_Thres_Volt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1239.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_ExtFun_Thres_Volt>(1239.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_ExtFun_Thres_Volt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2047.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.CdM_ExtFun_Thres_Volt>(2047.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("CdM_ExtFun_Thres_Volt_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 56, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CdM_ExtFun_Thres_Volt from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal CdM_ExtFun_Thres_Volt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_EVSE_BatteryCompatibilty(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_BatteryCompatibilty>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_BatteryCompatibilty_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_BatteryCompatibilty>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_BatteryCompatibilty_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 57, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_BatteryCompatibilty from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal EVSE_BatteryCompatibilty starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_EVSE_CHAdeMOProtocol(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_CHAdeMOProtocol>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_CHAdeMOProtocol_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_CHAdeMOProtocol>(5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_CHAdeMOProtocol_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_CHAdeMOProtocol>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_CHAdeMOProtocol_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_CHAdeMOProtocol>(6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_CHAdeMOProtocol_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 58, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_CHAdeMOProtocol from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal EVSE_CHAdeMOProtocol starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_EVSE_ChargingSystemError(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_ChargingSystemError>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_ChargingSystemError_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_ChargingSystemError>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_ChargingSystemError_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 59, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_ChargingSystemError from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal EVSE_ChargingSystemError starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_EVSE_EnergizingState(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_EnergizingState>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_EnergizingState_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_EnergizingState>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("EVSE_EnergizingState_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 60, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_EnergizingState from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal EVSE_EnergizingState starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_EVSE_RemainingMin(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingMin>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingMin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 52.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingMin>(52.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingMin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 94.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingMin>(94.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingMin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingMin>(254.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingMin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 255.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingMin>(255.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingMin_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 61, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_RemainingMin from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal EVSE_RemainingMin starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_EVSE_RemainingSec(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingSec>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingSec_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 480.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingSec>(480.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingSec_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 570.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingSec>(570.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingSec_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2330.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingSec>(2330.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingSec_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2550.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_RemainingSec>(2550.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_RemainingSec_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 62, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_RemainingSec from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal EVSE_RemainingSec starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_EVSE_ThrshldVoltage(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_ThrshldVoltage>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_ThrshldVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 105.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_ThrshldVoltage>(105.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_ThrshldVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 181.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_ThrshldVoltage>(181.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_ThrshldVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 475.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_ThrshldVoltage>(475.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_ThrshldVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_ThrshldVoltage>(1023.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("EVSE_ThrshldVoltage_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 63, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_ThrshldVoltage from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal EVSE_ThrshldVoltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_CRC_IDCM_OBD_DTC(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.CRC_IDCM_OBD_DTC>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_IDCM_OBD_DTC_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 66;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.CRC_IDCM_OBD_DTC>(66);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_IDCM_OBD_DTC_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 80;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.CRC_IDCM_OBD_DTC>(80);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_IDCM_OBD_DTC_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 121;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.CRC_IDCM_OBD_DTC>(121);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_IDCM_OBD_DTC_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 255;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.CRC_IDCM_OBD_DTC>(255);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("CRC_IDCM_OBD_DTC_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 64, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CRC_IDCM_OBD_DTC from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal CRC_IDCM_OBD_DTC starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_CAL_ID(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_ID>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_ID_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_ID>(31);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_ID_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 35;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_ID>(35);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_ID_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 41;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_ID>(41);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_ID_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 62;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_ID>(62);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_ID_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 65, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_CAL_ID from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_CAL_ID starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_CAL_VN(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_VN>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_VN_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 151;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_VN>(151);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_VN_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 102;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_VN>(102);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_VN_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 232;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_VN>(232);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_VN_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_CAL_VN>(254);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_CAL_VN_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 66, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_CAL_VN from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_CAL_VN starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Idx1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx1>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx1>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx1>(30);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 67, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Idx1 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Idx1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Idx2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx2>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 28;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx2>(28);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 22;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx2>(22);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 27;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx2>(27);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx2>(30);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 68, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Idx2 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Idx2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Idx3(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx3>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 26;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx3>(26);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 16;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx3>(16);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 11;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx3>(11);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx3>(30);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 69, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Idx3 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Idx3 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Idx4(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx4>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 26;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx4>(26);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 27;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx4>(27);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 11;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx4>(11);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx4>(30);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 70, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Idx4 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Idx4 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Idx5(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx5>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 19;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx5>(19);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 29;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx5>(29);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 22;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx5>(22);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx5>(30);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 71, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Idx5 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Idx5 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Idx6(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx6>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx6_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 19;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx6>(19);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx6_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 17;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx6>(17);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx6_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx6>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx6_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx6>(30);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx6_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 72, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Idx6 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Idx6 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Idx7(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx7>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx7_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 26;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx7>(26);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx7_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx7>(15);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx7_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 24;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx7>(24);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx7_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx7>(30);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx7_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 73, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Idx7 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Idx7 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Idx8(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx8>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 22;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx8>(22);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx8>(12);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 26;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx8>(26);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Idx8>(30);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Idx8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 74, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Idx8 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Idx8 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Stat1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat1>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat1>(5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat1>(4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat1>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat1_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 75, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Stat1 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Stat1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Stat2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat2>(6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat2>(3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat2>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat2>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat2_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 76, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Stat2 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Stat2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Stat3(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat3>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat3>(5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat3>(4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat3>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat3>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat3_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 77, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Stat3 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Stat3 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Stat4(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat4>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat4>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat4>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat4>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat4_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 78, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Stat4 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Stat4 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Stat5(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat5>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat5>(5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat5>(4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat5>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat5>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat5_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 79, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Stat5 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Stat5 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Stat6(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat6>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat6_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat6>(6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat6_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat6>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat6_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat6>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat6_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 80, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Stat6 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Stat6 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Stat7(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat7>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat7_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat7>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat7_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat7>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat7_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 81, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Stat7 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Stat7 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_DTC_Stat8(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat8>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat8>(5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat8>(4);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat8>(3);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_DTC_Stat8>(7);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_DTC_Stat8_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 82, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_DTC_Stat8 from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_DTC_Stat8 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_RBM_Idx(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 11;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_RBM_Idx>(11);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_RBM_Idx_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_RBM_Idx>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_RBM_Idx_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_RBM_Idx>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_RBM_Idx_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_RBM_Idx>(30);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_RBM_Idx_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 83, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_RBM_Idx from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_RBM_Idx starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_RBM_Stat(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_RBM_Stat>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_RBM_Stat_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_RBM_Stat>(5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_RBM_Stat_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_RBM_Stat>(2);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_RBM_Stat_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.IDCM_RBM_Stat>(6);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_RBM_Stat_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 84, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_RBM_Stat from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal IDCM_RBM_Stat starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MessageCounter_IDCM_OBD_DTC(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.MessageCounter_IDCM_OBD_DTC>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("MessageCounter_IDCM_OBD_DTC_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.MessageCounter_IDCM_OBD_DTC>(14);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("MessageCounter_IDCM_OBD_DTC_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.IDCM_OBD_DTC.MessageCounter_IDCM_OBD_DTC>(15);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("MessageCounter_IDCM_OBD_DTC_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 85, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MessageCounter_IDCM_OBD_DTC from the message IDCM_OBD_DTC in channel FD11", Testcase_description = "Check whether the signal MessageCounter_IDCM_OBD_DTC starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_IDCM_Wakeup_HCP(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.LV_CHARGER1.IDCM_Wakeup_HCP>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_Wakeup_HCP_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD11.IDCM.LV_CHARGER1.IDCM_Wakeup_HCP>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("IDCM_Wakeup_HCP_FD11_Raw_Test");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 86, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal IDCM_Wakeup_HCP from the message LV_CHARGER1 in channel FD11", Testcase_description = "Check whether the signal IDCM_Wakeup_HCP starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Testing_Rx_FD11()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_FD11.xlsx";

	Test_Case_APM2_BoostSwitchSts(report);
	Test_Case_APM2_ContactorFault(report);
	Test_Case_APM2_DcChEnaSts_Fdbk(report);
	Test_Case_APM2_DeratRsnSts(report);
	Test_Case_APM2_DisChargedSts_Fdbk(report);
	Test_Case_APM2_ErrorWord(report);
	Test_Case_APM2_FaultSts(report);
	Test_Case_APM2_HVChrgBusCurrent(report);
	Test_Case_APM2_HVChrgBusVoltage(report);
	Test_Case_APM2_IInpMaxCnvr(report);
	Test_Case_APM2_K6_WldgDtnSts(report);
	Test_Case_APM2_K7_WldgDtnSts(report);
	Test_Case_APM2_ModeSts_Fbk(report);
	Test_Case_APM2_RecoveryAction(report);
	Test_Case_APM2_Service_Lamp_Request(report);
	Test_Case_APM2_TempFET1(report);
	Test_Case_APM2_TempFET2(report);
	Test_Case_APM2_TempInlet(report);
	Test_Case_APM2_TempInt(report);
	Test_Case_APM2_TempL1(report);
	Test_Case_APM2_TempL2(report);
	Test_Case_APM2_TempMargin(report);
	Test_Case_APM2InterlockSts(report);
	Test_Case_CurrEVSE(report);
	Test_Case_PwrEff(report);
	Test_Case_VltgChgEVSE(report);
	Test_Case_VltgChgInt(report);
	Test_Case_ImpactHardwire(report);
	Test_Case_ImpactHardwireV(report);
	Test_Case_BMS_HV_High_Temp_Thrsh(report);
	Test_Case_BMS_HV_Low_Temp_Thrsh(report);
	Test_Case_BMS_HV_SOC_AccuracySts(report);
	Test_Case_BMS_HV_SOC_Max(report);
	Test_Case_BMS_HV_SOC_Min(report);
	Test_Case_HEV_OnRq_BPCM(report);
	Test_Case_HVBatCell_Voltage_High_Thrsh(report);
	Test_Case_HVBatCell_Voltage_Low_Thrsh(report);
	Test_Case_OBC_Temp1(report);
	Test_Case_OBC_Temp2(report);
	Test_Case_OBC_Temp3(report);
	Test_Case_OBC_Temp4(report);
	Test_Case_CRC_FOTA_MASTER(report);
	Test_Case_FOTA_Status(report);
	Test_Case_MessageCounter_FOTA_MASTER(report);
	Test_Case_HVBattery_RealTimeClock(report);
	Test_Case_Warning_PackTempHigh(report);
	Test_Case_HVBatSleepTime(report);
	Test_Case_CdM_Avail_output_current_EXT(report);
	Test_Case_CdM_Charger_connector_lock(report);
	Test_Case_CdM_ExtFun_Thres_Volt(report);
	Test_Case_EVSE_BatteryCompatibilty(report);
	Test_Case_EVSE_CHAdeMOProtocol(report);
	Test_Case_EVSE_ChargingSystemError(report);
	Test_Case_EVSE_EnergizingState(report);
	Test_Case_EVSE_RemainingMin(report);
	Test_Case_EVSE_RemainingSec(report);
	Test_Case_EVSE_ThrshldVoltage(report);
	Test_Case_CRC_IDCM_OBD_DTC(report);
	Test_Case_IDCM_CAL_ID(report);
	Test_Case_IDCM_CAL_VN(report);
	Test_Case_IDCM_DTC_Idx1(report);
	Test_Case_IDCM_DTC_Idx2(report);
	Test_Case_IDCM_DTC_Idx3(report);
	Test_Case_IDCM_DTC_Idx4(report);
	Test_Case_IDCM_DTC_Idx5(report);
	Test_Case_IDCM_DTC_Idx6(report);
	Test_Case_IDCM_DTC_Idx7(report);
	Test_Case_IDCM_DTC_Idx8(report);
	Test_Case_IDCM_DTC_Stat1(report);
	Test_Case_IDCM_DTC_Stat2(report);
	Test_Case_IDCM_DTC_Stat3(report);
	Test_Case_IDCM_DTC_Stat4(report);
	Test_Case_IDCM_DTC_Stat5(report);
	Test_Case_IDCM_DTC_Stat6(report);
	Test_Case_IDCM_DTC_Stat7(report);
	Test_Case_IDCM_DTC_Stat8(report);
	Test_Case_IDCM_RBM_Idx(report);
	Test_Case_IDCM_RBM_Stat(report);
	Test_Case_MessageCounter_IDCM_OBD_DTC(report);
	Test_Case_IDCM_Wakeup_HCP(report);
	report.Save_Excel(Report_Save_Path);


}

}
