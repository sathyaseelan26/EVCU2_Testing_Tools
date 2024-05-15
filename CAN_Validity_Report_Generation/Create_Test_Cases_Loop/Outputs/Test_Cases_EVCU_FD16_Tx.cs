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
public static void Test_Case_SendCANR_PerWakeUp_Diag_FD16_CT4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PerWakeUp_Diag_FD16_CT4B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD16.EVCU2.HYBRID_SYSTEM_EPT1.PerWakeUp_Diag.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 244;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PerWakeUp_Diag_FD16_CT4B_FUNC_ac_Test_1","244");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD16.EVCU2.HYBRID_SYSTEM_EPT1.PerWakeUp_Diag.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PerWakeUp_Diag_FD16_CT4B_FUNC_ac_Test_1","1023");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD16.EVCU2.HYBRID_SYSTEM_EPT1.PerWakeUp_Diag.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PerWakeUp_Diag from the message HYBRID_SYSTEM_EPT1 in channel FD16", Testcase_description = "Check whether the signal PerWakeUp_Diag starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_T7_CoolntTmpVldty_FD16_CT4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T7_CoolntTmpVldty_FD16_CT4B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD16.EVCU2.VDCM_PWT3.T7_CoolantTempVldty.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T7_CoolntTmpVldty_FD16_CT4B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD16.EVCU2.VDCM_PWT3.T7_CoolantTempVldty.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal T7_CoolantTempVldty from the message VDCM_PWT3 in channel FD16", Testcase_description = "Check whether the signal T7_CoolantTempVldty starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_T7_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T7_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.VDCM_PWT3.T7_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 38.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T7_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1","38.2");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.VDCM_PWT3.T7_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T7_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1","164.7");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.VDCM_PWT3.T7_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal T7_Sensor_Temp from the message VDCM_PWT3 in channel FD16", Testcase_description = "Check whether the signal T7_Sensor_Temp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_EOPA_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_EOPA_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.HYBRID_THERMAL_COMMAND.EOPA_OIL_FlwRate.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_EOPA_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1","8.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.HYBRID_THERMAL_COMMAND.EOPA_OIL_FlwRate.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 25.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_EOPA_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1","25.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.HYBRID_THERMAL_COMMAND.EOPA_OIL_FlwRate.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EOPA_OIL_FlwRate from the message HYBRID_THERMAL_COMMAND in channel FD16", Testcase_description = "Check whether the signal EOPA_OIL_FlwRate starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_T4_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 45.400000000000006;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1","45.400000000000006");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1","164.7");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal T4_Sensor_Temp from the message VDCM_PWT3 in channel FD16", Testcase_description = "Check whether the signal T4_Sensor_Temp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_EOPB_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_EOPB_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.HYBRID_THERMAL_COMMAND.EOPB_OIL_FlwRate.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_EOPB_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1","14.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.HYBRID_THERMAL_COMMAND.EOPB_OIL_FlwRate.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 25.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_EOPB_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1","25.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.HYBRID_THERMAL_COMMAND.EOPB_OIL_FlwRate.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EOPB_OIL_FlwRate from the message HYBRID_THERMAL_COMMAND in channel FD16", Testcase_description = "Check whether the signal EOPB_OIL_FlwRate starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_WU_Timer_Value_FD16_CT4B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WU_Timer_Value_FD16_CT4B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.HYBRID_SYSTEM_EPT1.WU_Timer_Value.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 64459.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WU_Timer_Value_FD16_CT4B_FUNC_ac_Test_1","64459.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.HYBRID_SYSTEM_EPT1.WU_Timer_Value.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 65535.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WU_Timer_Value_FD16_CT4B_FUNC_ac_Test_1","65535.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD16.EVCU2.HYBRID_SYSTEM_EPT1.WU_Timer_Value.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal WU_Timer_Value from the message HYBRID_SYSTEM_EPT1 in channel FD16", Testcase_description = "Check whether the signal WU_Timer_Value starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Tx_Testing_FD16()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Tx_FD16.xlsx";

	Test_Case_SendCANR_PerWakeUp_Diag_FD16_CT4B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_T7_CoolntTmpVldty_FD16_CT4B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_T7_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_EOPA_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_T4_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_EOPB_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_WU_Timer_Value_FD16_CT4B_FUNC_ac_Test_1(report);
	report.Save_Excel(Report_Save_Path);


}

}
