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
public static void Test_Case_VeCANR_b_TBM_Submit_Schedule2_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule2>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Submit_Schedule2_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Submit_Schedule2_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_Schedule2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_Schedule2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_Submit_Schedule1_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule1>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Submit_Schedule1_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Submit_Schedule1_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_Schedule1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_Schedule1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_SubmitClimateSchd2_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd2>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_SubmitClimateSchd2_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_SubmitClimateSchd2_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_ClimateSchd2 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_ClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Submit_ClimateSchd1_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd1>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_ClimateSchd1_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_ClimateSchd1_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_ClimateSchd1 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_ClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Submit_Schedule2_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule2>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_Schedule2_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_Schedule2_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_Schedule2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_Schedule2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_SubmitClimateSchd1_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd1>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_SubmitClimateSchd1_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_SubmitClimateSchd1_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_ClimateSchd1 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_ClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Submit_ClimateSchd2_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd2>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_ClimateSchd2_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_ClimateSchd2_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_ClimateSchd2 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_ClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_Charge_Now_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Charge_Now>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Charge_Now_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Charge_Now>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Charge_Now_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Charge_Now from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Charge_Now starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Submit_Schedule1_APMR_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule1>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_Schedule1_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_Schedule1_APMR_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_Schedule1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_Schedule1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Minute1_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Minute1_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Minute1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Minute1_TLM>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Minute1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Minute1_TLM>(5.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Minute1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Minute1_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Minute1_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Year3_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year3_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year3_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year3_TLM>(6.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year3_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year3_TLM>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year3_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Year3_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Year3_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Month1_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Month1_TLM>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Month1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Month1_TLM>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Month1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Month1_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Month1_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Month2_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Month2_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Month2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Month2_TLM>(7.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Month2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Month2_TLM>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Month2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Month2_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Month2_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Hour1_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Hour1_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Hour1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Hour1_TLM>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Hour1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Hour1_TLM>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Hour1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Hour1_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Hour1_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Year1_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year1_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year1_TLM>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year1_TLM>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Year1_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Year1_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_cmp_GPS_Date_Month_FD3_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Month>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_cmp_GPS_Date_Month_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Month>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_cmp_GPS_Date_Month_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Month>(12.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_cmp_GPS_Date_Month_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_Date_Month from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_Date_Month starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_GPS_Date_Day_FD3_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Day>(1);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_Date_Day_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Day>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_Date_Day_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Day>(31.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_Date_Day_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_Date_Day from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_Date_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_l_TotalOdometer_FD3_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.IPC.IPC_FD_1.TotalOdometer>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_l_TotalOdometer_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 239212.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.IPC.IPC_FD_1.TotalOdometer>(239212.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_l_TotalOdometer_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1048575.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.IPC.IPC_FD_1.TotalOdometer>(1048575.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_l_TotalOdometer_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TotalOdometer from the message IPC_FD_1 in channel FD3", Testcase_description = "Check whether the signal TotalOdometer starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Day2_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Day2_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Day2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Day2_TLM>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Day2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Day2_TLM>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Day2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Day2_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Day2_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Year4_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year4_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year4_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year4_TLM>(6.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year4_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year4_TLM>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year4_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Year4_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Year4_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Hour2_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Hour2_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Hour2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Hour2_TLM>(8.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Hour2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Hour2_TLM>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Hour2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Hour2_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Hour2_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_GPS_Date_Year_FD3_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Year>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_Date_Year_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 36937.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Year>(36937.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_Date_Year_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 65534.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Year>(65534.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_Date_Year_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_Date_Year from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_Date_Year starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Day1_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Day1_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Day1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Day1_TLM>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Day1_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Day1_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Day1_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_GPS_UTC_Minute_FD3_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Minute>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_UTC_Minute_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 52.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Minute>(52.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_UTC_Minute_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 59.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Minute>(59.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_UTC_Minute_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_UTC_Minute from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_UTC_Minute starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Minute2_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Minute2_TLM>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Minute2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Minute2_TLM>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Minute2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Minute2_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Minute2_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_GPS_UTC_Second_FD3_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Second>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_UTC_Second_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 44.12;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Second>(44.12);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_UTC_Second_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 59.99;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Second>(59.99);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_UTC_Second_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_UTC_Second from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_UTC_Second starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_y_Year2_TLM_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year2_TLM>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year2_TLM>(4.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.Year2_TLM>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_y_Year2_TLM_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Year2_TLM from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal Year2_TLM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_GPS_UTC_Hour_FD3_CR1B_BLUEN_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Hour>(0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_UTC_Hour_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Hour>(16.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_UTC_Hour_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Hour>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_GPS_UTC_Hour_FD3_CR1B_BLUEN_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_UTC_Hour from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_UTC_Hour starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Testing_Rx_FD3()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Rx_FD3.xlsx";

	Test_Case_VeCANR_b_TBM_Submit_Schedule2_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Submit_Schedule1_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_SubmitClimateSchd2_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_ClimateSchd1_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_Schedule2_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_SubmitClimateSchd1_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_ClimateSchd2_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Charge_Now_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_Schedule1_APMR_ac_Test_1(report);
	Test_Case_VeCANR_y_Minute1_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Year3_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Month1_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Month2_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Hour1_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Year1_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_cmp_GPS_Date_Month_FD3_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_t_GPS_Date_Day_FD3_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_l_TotalOdometer_FD3_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Day2_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Year4_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Hour2_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_t_GPS_Date_Year_FD3_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Day1_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_t_GPS_UTC_Minute_FD3_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Minute2_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_t_GPS_UTC_Second_FD3_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_y_Year2_TLM_CR1B_BLUEN_ac_Test_1(report);
	Test_Case_VeCANR_t_GPS_UTC_Hour_FD3_CR1B_BLUEN_ac_Test_1(report);
	report.Save_Excel(Report_Save_Path);


}

}
