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
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule2>(0.0);
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_Schedule2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_Schedule2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
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
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd1>(0.0);
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_ClimateSchd1 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_ClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
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
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd1>(0.0);
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_ClimateSchd1 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_ClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
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
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Charge_Now>(0.0);
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Charge_Now from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Charge_Now starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
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
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd2>(0.0);
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_ClimateSchd2 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_ClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
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
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule2>(0.0);
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_Schedule2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_Schedule2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
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
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule1>(0.0);
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_Schedule1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_Schedule1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
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
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule1>(0.0);
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_Schedule1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_Schedule1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
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
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd2>(0.0);
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_ClimateSchd2 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_ClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_End_Time_Min2_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min2>(40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min2>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Min2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_End_Time_Min1_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 35.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min1>(35.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min1>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Min1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_End_Time_Hr1_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr1>(5.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr1>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Hr1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_End_Time_Min2_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min2>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Min2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_Start_Time_Min1_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 35.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min1>(35.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min1>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Min1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_End_Time_Hr2_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr2>(16.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr2>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Hr2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_End_Time_Hr1_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr1>(12.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr1>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Hr1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_Start_Time_Min2_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 45.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min2>(45.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min2>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Min2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_Start_Time_Hr2_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr2>(4.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr2>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Hr2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_Start_Time_Hr1_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr1>(7.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr1>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Hr1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_Start_Time_Hr2_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 20.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr2>(20.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr2>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Hr2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_End_Time_Min1_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min1>(15.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min1>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Min1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_Start_Time_Hr1_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr1>(9.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr1>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Hr1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_Start_Time_Min1_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 45.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min1>(45.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min1>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min1_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Min1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_Start_Time_Min2_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 20.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min2>(20.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min2>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Min2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_End_Time_Hr2_CIDB_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr2>(4.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr2>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr2_CIDB_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Hr2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_Charge_Schedule_Type2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Charge_Schedule_Type2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Charge_Schedule_Type2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Charge_Schedule_Type2>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Charge_Schedule_Type2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Charge_Schedule_Type2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Charge_Schedule_Type2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBM_Schedule_Day2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Schedule_Day2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_Schedule_Day2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 18;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Schedule_Day2>(18.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_Schedule_Day2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Schedule_Day2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Schedule_Day2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_ClimateSchd2_Dprtr_Hr_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Hr>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd2_Dprtr_Hr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Hr>(15.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd2_Dprtr_Hr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Hr>(30.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd2_Dprtr_Hr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd2_Departure_Hr from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd2_Departure_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_Submit_Schedule1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Submit_Schedule1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Submit_Schedule1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 29, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_Schedule1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_Schedule1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_HAS_TelltaleSts_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.CADM.ADAS_FD_HMI.HAS_TelltaleSts>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HAS_TelltaleSts_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.CADM.ADAS_FD_HMI.HAS_TelltaleSts>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HAS_TelltaleSts_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.CADM.ADAS_FD_HMI.HAS_TelltaleSts>(6.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_HAS_TelltaleSts_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 30, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HAS_TelltaleSts from the message ADAS_FD_HMI in channel FD3", Testcase_description = "Check whether the signal HAS_TelltaleSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Enable_Schedule2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Enable_Schedule2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Enable_Schedule2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Enable_Schedule2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Enable_Schedule2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 31, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Enable_Schedule2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Enable_Schedule2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Submit_Schedule1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_Schedule1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_Schedule1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 32, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_Schedule1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_Schedule1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBM_AllowClimateSchd2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_AllowClimateSchd2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_AllowClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_AllowClimateSchd2>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_AllowClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 33, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_AllowClimateSchd2 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_AllowClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_External_ChargeTarget2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.External_ChargeTarget2>(50.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_External_ChargeTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 95.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.External_ChargeTarget2>(95.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_External_ChargeTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 125.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.External_ChargeTarget2>(125.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_External_ChargeTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 34, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal External_ChargeTarget2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal External_ChargeTarget2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_AllowClimateSchd1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.AllowClimateSchd1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_AllowClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.AllowClimateSchd1>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_AllowClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 35, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AllowClimateSchd1 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal AllowClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_ClimSchd2DprtrMin_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Min>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd2DprtrMin_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Min>(50.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd2DprtrMin_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 70.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Min>(70.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd2DprtrMin_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 36, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd2_Departure_Min from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd2_Departure_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBM_ExtrnlChargTarget2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_External_ChargeTarget2>(50.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBM_ExtrnlChargTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 125.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_External_ChargeTarget2>(125.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBM_ExtrnlChargTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 37, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_External_ChargeTarget2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_External_ChargeTarget2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_Start_Time_Hr1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 21.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr1>(21.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr1>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 38, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Hr1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Submit_ClimateSchd2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_ClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_ClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 39, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_ClimateSchd2 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_ClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_EnableClimateSchd2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Enable_ClimateSchd2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_EnableClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 40, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Enable_ClimateSchd2 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_Enable_ClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_SubmitClimateSchd1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_SubmitClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_SubmitClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 41, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_ClimateSchd1 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_ClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Enable_Schedule1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Enable_Schedule1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Enable_Schedule1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Enable_Schedule1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Enable_Schedule1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 42, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Enable_Schedule1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Enable_Schedule1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_Schedule_Day2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Schedule_Day2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Schedule_Day2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 42;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Schedule_Day2>(42.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Schedule_Day2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 43, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Schedule_Day2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Schedule_Day2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Day>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 202;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Day>(202.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Day>(254.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 44, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd2_Day from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd2_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Enable_ClimateSchd2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Enable_ClimateSchd2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Enable_ClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Enable_ClimateSchd2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Enable_ClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 45, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Enable_ClimateSchd2 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Enable_ClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Day>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 121;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Day>(121.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Day>(254.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 46, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd1_Day from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd1_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_SubmitClimateSchd2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_SubmitClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Submit_ClimateSchd2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_SubmitClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 47, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_ClimateSchd2 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_ClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_End_Time_Min2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min2>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 48, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Min2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_Climate_Cabin_Temp1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp1>(16.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_Cabin_Temp1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 17.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp1>(17.5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_Cabin_Temp1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp1>(31.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_Cabin_Temp1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 49, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_Cabin_Temp1 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Climate_Cabin_Temp1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_Schedule_Day1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Schedule_Day1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Schedule_Day1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 243;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Schedule_Day1>(243.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Schedule_Day1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 50, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Schedule_Day1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Schedule_Day1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBM_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Day>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 165;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Day>(165.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Day>(254.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 51, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd1_Day from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd1_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_ChargeUntilFull1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeUntilFull1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_ChargeUntilFull1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeUntilFull1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_ChargeUntilFull1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 52, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ChargeUntilFull1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_ChargeUntilFull1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBMImmediatChrgTarget2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Immediate_ChargeTarget2>(50.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBMImmediatChrgTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 105.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Immediate_ChargeTarget2>(105.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBMImmediatChrgTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 125.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Immediate_ChargeTarget2>(125.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBMImmediatChrgTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 53, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Immediate_ChargeTarget2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Immediate_ChargeTarget2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_ImmediateChargeTarget1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Immediate_ChargeTarget1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_ImmediateChargeTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Immediate_ChargeTarget1>(50.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_ImmediateChargeTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 75.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Immediate_ChargeTarget1>(75.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_ImmediateChargeTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 54, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Immediate_ChargeTarget1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Immediate_ChargeTarget1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_End_Time_Hr2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr2>(16.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr2>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 55, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Hr2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_End_Time_Min2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min2>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 56, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Min2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_Enable_Schedule1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Enable_Schedule1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Enable_Schedule1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Enable_Schedule1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Enable_Schedule1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 57, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Enable_Schedule1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Enable_Schedule1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_Start_Time_Min1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 25.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min1>(25.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min1>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 58, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Min1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_ClimSchd1DprtrHr_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Hr>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd1DprtrHr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Hr>(14.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd1DprtrHr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Hr>(30.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd1DprtrHr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 59, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd1_Departure_Hr from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd1_Departure_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Submit_Schedule2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_Schedule2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Submit_Schedule2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_Schedule2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 60, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_Schedule2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_Schedule2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_AllowClimateSchd2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.AllowClimateSchd2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_AllowClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.AllowClimateSchd2>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_AllowClimateSchd2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 61, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AllowClimateSchd2 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal AllowClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_Climate_TBM_CabinTemp2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp2>(16.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_TBM_CabinTemp2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 19.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp2>(19.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_TBM_CabinTemp2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp2>(31.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_TBM_CabinTemp2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 62, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_TBM_Cabin_Temp2 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal Climate_TBM_Cabin_Temp2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBM_Schedule_Day1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Schedule_Day1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_Schedule_Day1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 159;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Schedule_Day1>(159.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_Schedule_Day1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 63, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Schedule_Day1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Schedule_Day1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_End_Time_Min1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min1>(30.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min1>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 64, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Min1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_Trns_DrvMdReq_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_14.Trns_DrvMdReq>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Trns_DrvMdReq_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_14.Trns_DrvMdReq>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Trns_DrvMdReq_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_14.Trns_DrvMdReq>(14.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Trns_DrvMdReq_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 65, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Trns_DrvMdReq from the message TELEMATIC_FD_14 in channel FD3", Testcase_description = "Check whether the signal Trns_DrvMdReq starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_Climate_TBM_CabinTemp1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp1>(16.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_TBM_CabinTemp1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp1>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_TBM_CabinTemp1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp1>(31.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_TBM_CabinTemp1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 66, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_TBM_Cabin_Temp1 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal Climate_TBM_Cabin_Temp1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_End_Time_Min1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min1>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 67, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Min1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_End_Time_Hr1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr1>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_End_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 68, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Hr1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBMChrgSchedulType1Req_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeSchedule_Type1_Req>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBMChrgSchedulType1Req_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeSchedule_Type1_Req>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBMChrgSchedulType1Req_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeSchedule_Type1_Req>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBMChrgSchedulType1Req_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 69, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ChargeSchedule_Type1_Req from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_ChargeSchedule_Type1_Req starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_ClimSchd2DprtrHr_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Hr>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd2DprtrHr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 29.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Hr>(29.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd2DprtrHr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Hr>(30.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd2DprtrHr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 70, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd2_Departure_Hr from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd2_Departure_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TerrainModeStat_ECM_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.ECM.ENGINE_FD_6.TerrainModeStat_ECM>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TerrainModeStat_ECM_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.ECM.ENGINE_FD_6.TerrainModeStat_ECM>(5.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TerrainModeStat_ECM_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.ECM.ENGINE_FD_6.TerrainModeStat_ECM>(30.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TerrainModeStat_ECM_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 71, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TerrainModeStat_ECM from the message ENGINE_FD_6 in channel FD3", Testcase_description = "Check whether the signal TerrainModeStat_ECM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_ClimSchd1DprtrMin_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Min>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd1DprtrMin_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Min>(10.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd1DprtrMin_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 70.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Min>(70.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_ClimSchd1DprtrMin_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 72, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd1_Departure_Min from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd1_Departure_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_Start_Time_Hr2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 22.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr2>(22.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr2>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 73, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Hr2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_T_Climate_Cabin_Temp2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp2>(16.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_Cabin_Temp2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 22.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp2>(22.5);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_Cabin_Temp2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp2>(31.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_T_Climate_Cabin_Temp2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 74, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_Cabin_Temp2 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Climate_Cabin_Temp2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_RACE_CLDWN_ON_OFF_REQ_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_14.RACE_CLDWN_ON_OFF_REQ>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_RACE_CLDWN_ON_OFF_REQ_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 75, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RACE_CLDWN_ON_OFF_REQ from the message TELEMATIC_FD_14 in channel FD3", Testcase_description = "Check whether the signal RACE_CLDWN_ON_OFF_REQ starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_Submit_Schedule2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Submit_Schedule2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Submit_Schedule2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Submit_Schedule2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 76, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Submit_Schedule2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Submit_Schedule2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBMExtrnlChrgTarget1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_External_ChargeTarget1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBMExtrnlChrgTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_External_ChargeTarget1>(10.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBMExtrnlChrgTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 75.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_External_ChargeTarget1>(75.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBMExtrnlChrgTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 77, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_External_ChargeTarget1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_External_ChargeTarget1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBM_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Day>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 249;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Day>(249.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Day>(254.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 78, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd2_Day from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd2_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_ChargeUntilFull2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.ChargeUntilFull2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_ChargeUntilFull2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.ChargeUntilFull2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_ChargeUntilFull2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 79, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeUntilFull2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ChargeUntilFull2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Enable_ClimateSchd1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Enable_ClimateSchd1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Enable_ClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Enable_ClimateSchd1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Enable_ClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 80, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Enable_ClimateSchd1 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Enable_ClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_Start_Time_Hr1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr1>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 81, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Hr1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_ClimateSchd1_Dprtr_Hr_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Hr>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd1_Dprtr_Hr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Hr>(5.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd1_Dprtr_Hr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Hr>(30.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd1_Dprtr_Hr_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 82, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd1_Departure_Hr from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd1_Departure_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBMChrgSchedulType2Req_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeSchedule_Type2_Req>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBMChrgSchedulType2Req_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeSchedule_Type2_Req>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBMChrgSchedulType2Req_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeSchedule_Type2_Req>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBMChrgSchedulType2Req_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 83, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ChargeSchedule_Type2_Req from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_ChargeSchedule_Type2_Req starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_External_ChargeTarget1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.External_ChargeTarget1>(50.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_External_ChargeTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 95.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.External_ChargeTarget1>(95.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_External_ChargeTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 125.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.External_ChargeTarget1>(125.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_External_ChargeTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 84, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal External_ChargeTarget1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal External_ChargeTarget1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBMImmediatChrgTarget1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Immediate_ChargeTarget1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBMImmediatChrgTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Immediate_ChargeTarget1>(40.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBMImmediatChrgTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 75.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Immediate_ChargeTarget1>(75.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_TBMImmediatChrgTarget1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 85, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Immediate_ChargeTarget1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Immediate_ChargeTarget1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_Start_Time_Min1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min1>(15.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min1>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 86, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Min1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_End_Time_Hr1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr1>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr1>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 87, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Hr1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_Start_Time_Min2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min2>(5.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min2>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_Start_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 88, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Min2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_Charge_Schedule_Type1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Charge_Schedule_Type1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Charge_Schedule_Type1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Charge_Schedule_Type1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Charge_Schedule_Type1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Charge_Schedule_Type1>(3.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Charge_Schedule_Type1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 89, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Charge_Schedule_Type1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Charge_Schedule_Type1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_Enable_Schedule2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Enable_Schedule2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Enable_Schedule2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Enable_Schedule2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Enable_Schedule2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 90, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Enable_Schedule2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Enable_Schedule2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_End_Time_Hr2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr2>(12.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr2>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_End_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 91, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Hr2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_ClimateSchd2_Dprtr_Min_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Min>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd2_Dprtr_Min_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 65.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Min>(65.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd2_Dprtr_Min_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 70.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Min>(70.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd2_Dprtr_Min_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 92, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd2_Departure_Min from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd2_Departure_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_TBM_AllowClimateSchd1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_AllowClimateSchd1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_AllowClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_AllowClimateSchd1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_AllowClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_AllowClimateSchd1>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_TBM_AllowClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 93, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_AllowClimateSchd1 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_AllowClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_Start_Time_Min2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 25.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min2>(25.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min2>(55.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Min2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 94, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Min2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_ChargeUntilFull2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeUntilFull2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_ChargeUntilFull2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_ChargeUntilFull2>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_ChargeUntilFull2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 95, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ChargeUntilFull2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_ChargeUntilFull2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_ClimateSchd1_Dprtr_Min_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Min>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd1_Dprtr_Min_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Min>(10.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd1_Dprtr_Min_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 70.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Min>(70.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_ClimateSchd1_Dprtr_Min_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 96, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd1_Departure_Min from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd1_Departure_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_t_TBM_Start_Time_Hr2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr2>(8.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr2>(23.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_t_TBM_Start_Time_Hr2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 97, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Hr2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_Command_15Sts_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.BCM.BCM_FD_14.Command_15Sts>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Command_15Sts_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.BCM.BCM_FD_14.Command_15Sts>(2.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_e_Command_15Sts_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 98, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Command_15Sts from the message BCM_FD_14 in channel FD3", Testcase_description = "Check whether the signal Command_15Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_Submit_ClimateSchd1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_ClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Submit_ClimateSchd1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_Submit_ClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 99, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Submit_ClimateSchd1 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Submit_ClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_ChargeUntilFull1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.ChargeUntilFull1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_ChargeUntilFull1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.ChargeUntilFull1>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_ChargeUntilFull1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 100, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeUntilFull1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ChargeUntilFull1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_EnableClimateSchd1_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_Enable_ClimateSchd1>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_EnableClimateSchd1_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 101, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Enable_ClimateSchd1 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_Enable_ClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_e_ImmediateChargeTarget2_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Immediate_ChargeTarget2>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_ImmediateChargeTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Immediate_ChargeTarget2>(30.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_ImmediateChargeTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 75.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Immediate_ChargeTarget2>(75.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.ReadvariablevalueDouble("VeCANR_e_ImmediateChargeTarget2_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 102, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Immediate_ChargeTarget2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Immediate_ChargeTarget2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_VeCANR_b_TBM_Charge_Now_CR1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Charge_Now>(0.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Charge_Now_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Charge_Now>(1.0);
	Execution.Wait(2500);
	Temp_Actual_Value = T32_CSharp_API.Readvariablevalue("VeCANR_b_TBM_Charge_Now_CR1B_FUNC_ac_Test_1");
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " + Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 103, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Charge_Now from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Charge_Now starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Testing_Rx_FD3()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Rx_FD3.xlsx";

	Test_Case_VeCANR_b_Submit_Schedule2_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_SubmitClimateSchd1_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_ClimateSchd1_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Charge_Now_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_SubmitClimateSchd2_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Submit_Schedule2_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_Schedule1_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Submit_Schedule1_APMR_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_ClimateSchd2_APMR_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_End_Time_Min2_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_End_Time_Min1_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_End_Time_Hr1_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_End_Time_Min2_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_Start_Time_Min1_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_End_Time_Hr2_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_End_Time_Hr1_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_Start_Time_Min2_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_Start_Time_Hr2_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_Start_Time_Hr1_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_Start_Time_Hr2_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_End_Time_Min1_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_Start_Time_Hr1_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_Start_Time_Min1_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_Start_Time_Min2_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_End_Time_Hr2_CIDB_ac_Test_1(report);
	Test_Case_VeCANR_e_Charge_Schedule_Type2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBM_Schedule_Day2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_ClimateSchd2_Dprtr_Hr_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Submit_Schedule1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_HAS_TelltaleSts_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_Enable_Schedule2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_Schedule1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBM_AllowClimateSchd2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_External_ChargeTarget2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_AllowClimateSchd1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_ClimSchd2DprtrMin_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBM_ExtrnlChargTarget2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_Start_Time_Hr1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_ClimateSchd2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_EnableClimateSchd2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_SubmitClimateSchd1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_Enable_Schedule1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_Schedule_Day2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_Enable_ClimateSchd2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_SubmitClimateSchd2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_End_Time_Min2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_Climate_Cabin_Temp1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_Schedule_Day1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBM_ClimateSchd1_Day_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_ChargeUntilFull1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBMImmediatChrgTarget2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_ImmediateChargeTarget1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_End_Time_Hr2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_End_Time_Min2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Enable_Schedule1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_Start_Time_Min1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_ClimSchd1DprtrHr_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_Schedule2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_AllowClimateSchd2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_Climate_TBM_CabinTemp2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBM_Schedule_Day1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_End_Time_Min1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_Trns_DrvMdReq_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_Climate_TBM_CabinTemp1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_End_Time_Min1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_End_Time_Hr1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBMChrgSchedulType1Req_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_ClimSchd2DprtrHr_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TerrainModeStat_ECM_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_ClimSchd1DprtrMin_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_Start_Time_Hr2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_T_Climate_Cabin_Temp2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_RACE_CLDWN_ON_OFF_REQ_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Submit_Schedule2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBMExtrnlChrgTarget1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBM_ClimateSchd2_Day_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_ChargeUntilFull2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_Enable_ClimateSchd1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_Start_Time_Hr1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_ClimateSchd1_Dprtr_Hr_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBMChrgSchedulType2Req_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_External_ChargeTarget1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBMImmediatChrgTarget1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_Start_Time_Min1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_End_Time_Hr1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_Start_Time_Min2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_Charge_Schedule_Type1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Enable_Schedule2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_End_Time_Hr2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_ClimateSchd2_Dprtr_Min_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_TBM_AllowClimateSchd1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_Start_Time_Min2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_ChargeUntilFull2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_ClimateSchd1_Dprtr_Min_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_t_TBM_Start_Time_Hr2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_Command_15Sts_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_Submit_ClimateSchd1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_ChargeUntilFull1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_EnableClimateSchd1_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_e_ImmediateChargeTarget2_CR1B_FUNC_ac_Test_1(report);
	Test_Case_VeCANR_b_TBM_Charge_Now_CR1B_FUNC_ac_Test_1(report);
	report.Save_Excel(Report_Save_Path);


}

}
