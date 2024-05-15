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
public static void Test_Case_SendCANR_RearAirHtrCoreTemp_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RearAirHtrCoreTemp_CT1B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.RearAirHtrCoreTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 168.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RearAirHtrCoreTemp_CT1B_FUNC_ac_Test_1","168.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.RearAirHtrCoreTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RearAirHtrCoreTemp_CT1B_FUNC_ac_Test_1","214.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.RearAirHtrCoreTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RearAirHtrCoreTemp from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal RearAirHtrCoreTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_NextChrg_Strt_Time_Min_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NextChrg_Strt_Time_Min_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_Start_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 35.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NextChrg_Strt_Time_Min_CT1B_FUNC_ac_Test_1","35.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_Start_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NextChrg_Strt_Time_Min_CT1B_FUNC_ac_Test_1","55.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_Start_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_Charge_Start_Time_Min from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_Charge_Start_Time_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_End_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Hr2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 17.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1","17.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Hr2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1","23.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Hr2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Hr2_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Hr2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ElecClntHtrInletTemp_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ElecClntHtrInletTemp_CT1B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.ElecClntHtrInletTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 178.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ElecClntHtrInletTemp_CT1B_FUNC_ac_Test_1","178.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.ElecClntHtrInletTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ElecClntHtrInletTemp_CT1B_FUNC_ac_Test_1","214.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.ElecClntHtrInletTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ElecClntHtrInletTemp from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal ElecClntHtrInletTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_RrAxleLockerIndRq_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RrAxleLockerIndRq_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.RrAxleLockerIndRq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RrAxleLockerIndRq_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.RrAxleLockerIndRq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RrAxleLockerIndRq_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.RrAxleLockerIndRq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RrAxleLockerIndRq from the message DRIVETRAIN_FD_3 in channel FD3", Testcase_description = "Check whether the signal RrAxleLockerIndRq starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_AllowClimateSchd2_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AllowClimateSchd2_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.AllowClimateSchd2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AllowClimateSchd2_Sts_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.AllowClimateSchd2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AllowClimateSchd2_Sts_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.AllowClimateSchd2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AllowClimateSchd2_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal AllowClimateSchd2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_DC_Voltage_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Voltage_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 185.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Voltage_CT1B_FUNC_ac_Test_1","185.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Voltage_CT1B_FUNC_ac_Test_1","1023.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_DC_Voltage from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_DC_Voltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Next_SchCabin_Temp_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_SchCabin_Temp_CT1B_FUNC_ac_Test_1","16.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_SchCabin_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 29.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_SchCabin_Temp_CT1B_FUNC_ac_Test_1","29.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_SchCabin_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_SchCabin_Temp_CT1B_FUNC_ac_Test_1","31.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_SchCabin_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_SchCabin_Temp from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_SchCabin_Temp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ActualDrvModStatusFD3_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ActualDrvModStatusFD3_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_POWERTRAIN4.Actual_DriveMode_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 26;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ActualDrvModStatusFD3_CT1B_FUNC_ac_Test_1","26");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_POWERTRAIN4.Actual_DriveMode_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Actual_DriveMode_Status from the message HYBRID_POWERTRAIN4 in channel FD3", Testcase_description = "Check whether the signal Actual_DriveMode_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_End_Time_Min2_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Min2_Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Min2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Min2_Sts_CT1B_FUNC_ac_Test_1","55.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Min2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Min2_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Min2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_DC_EstChargeTime1_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DC_EstChargeTime1_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.DC_EstChargeTime1.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 29.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DC_EstChargeTime1_CT1B_FUNC_ac_Test_1","29.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.DC_EstChargeTime1.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DC_EstChargeTime1_CT1B_FUNC_ac_Test_1","254.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.DC_EstChargeTime1.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DC_EstChargeTime1 from the message VDCM_HMI in channel FD3", Testcase_description = "Check whether the signal DC_EstChargeTime1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2LInstantPwrDrawFrunk_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LInstantPwrDrawFrunk_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Instant_Power_Draw_Frunk.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9.1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LInstantPwrDrawFrunk_CT1B_FUNC_ac_Test_1","9.1");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Instant_Power_Draw_Frunk.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LInstantPwrDrawFrunk_CT1B_FUNC_ac_Test_1","12.7");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Instant_Power_Draw_Frunk.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2L_Instant_Power_Draw_Frunk from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2L_Instant_Power_Draw_Frunk starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_EstRange_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_EstRange_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.EstRange.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1258.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_EstRange_CT1B_FUNC_ac_Test_1","1258.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.EstRange.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2046.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_EstRange_CT1B_FUNC_ac_Test_1","2046.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.EstRange.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EstRange from the message VDCM_HMI in channel FD3", Testcase_description = "Check whether the signal EstRange starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 146.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_1","146.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_1","215.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_InverterTemp from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_InverterTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_2","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 141.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_2","141.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_2","215.0");
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
public static void Test_Case_SendCANR_V2LTotalPowerTimehours_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LTotalPowerTimehours_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Total_Power_Time_hours.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LTotalPowerTimehours_CT1B_FUNC_ac_Test_1","8.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Total_Power_Time_hours.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LTotalPowerTimehours_CT1B_FUNC_ac_Test_1","31.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Total_Power_Time_hours.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2L_Total_Power_Time_hours from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2L_Total_Power_Time_hours starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_DC_Current_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -1638.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Current_CT1B_FUNC_ac_Test_1","-1638.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -1137.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Current_CT1B_FUNC_ac_Test_1","-1137.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_DC_Current_CT1B_FUNC_ac_Test_1","1638.3");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_DC_Current from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_DC_Current starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_RearAirHtrPwrCnsAct_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RearAirHtrPwrCnsAct_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.RearAirHtrPwrCnsAct.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 246.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RearAirHtrPwrCnsAct_CT1B_FUNC_ac_Test_1","246.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.RearAirHtrPwrCnsAct.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RearAirHtrPwrCnsAct_CT1B_FUNC_ac_Test_1","254.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.RearAirHtrPwrCnsAct.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RearAirHtrPwrCnsAct from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal RearAirHtrPwrCnsAct starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2VTotalPowerTimeminut_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2VTotalPowerTimeminut_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Total_Power_Time_minutes.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 17.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2VTotalPowerTimeminut_CT1B_FUNC_ac_Test_1","17.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Total_Power_Time_minutes.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 63.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2VTotalPowerTimeminut_CT1B_FUNC_ac_Test_1","63.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Total_Power_Time_minutes.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2V_Total_Power_Time_minutes from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2V_Total_Power_Time_minutes starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Schedule_Confirmed2_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Schedule_Confirmed2_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Schedule_Confirmed2.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Schedule_Confirmed2_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Schedule_Confirmed2.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Schedule_Confirmed2 from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Schedule_Confirmed2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Est_HVBatSOC_VDCM_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Est_HVBatSOC_VDCM_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.Est_HVBatSOC_VDCM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 53.7314;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Est_HVBatSOC_VDCM_CT1B_FUNC_ac_Test_1","53.7314");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.Est_HVBatSOC_VDCM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 99.6188;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Est_HVBatSOC_VDCM_CT1B_FUNC_ac_Test_1","99.6188");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.Est_HVBatSOC_VDCM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Est_HVBatSOC_VDCM from the message VDCM_HMI in channel FD3", Testcase_description = "Check whether the signal Est_HVBatSOC_VDCM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_End_Time_Min1_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Min1_Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Min1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 45.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Min1_Sts_CT1B_FUNC_ac_Test_1","45.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Min1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Min1_Sts_CT1B_FUNC_ac_Test_1","55.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Min1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Min1_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Min1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage1_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage1_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage1_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage1 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_DC_EstChargeTime2_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DC_EstChargeTime2_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.DC_EstChargeTime2.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 198.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DC_EstChargeTime2_CT1B_FUNC_ac_Test_1","198.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.DC_EstChargeTime2.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DC_EstChargeTime2_CT1B_FUNC_ac_Test_1","254.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.DC_EstChargeTime2.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DC_EstChargeTime2 from the message VDCM_HMI in channel FD3", Testcase_description = "Check whether the signal DC_EstChargeTime2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Propulsion_DrvMd_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Propulsion_DrvMd_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_POWERTRAIN4.Propulsion_DrvMd_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Propulsion_DrvMd_Sts from the message HYBRID_POWERTRAIN4 in channel FD3", Testcase_description = "Check whether the signal Propulsion_DrvMd_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ClimateSchd1DprtrHrSts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd1DprtrHrSts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd1_Departure_Hr_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 22.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd1DprtrHrSts_CT1B_FUNC_ac_Test_1","22.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd1_Departure_Hr_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd1DprtrHrSts_CT1B_FUNC_ac_Test_1","30.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd1_Departure_Hr_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd1_Departure_Hr_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd1_Departure_Hr_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2L_Trunk_Status_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2L_Trunk_Status_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Trunk_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2L_Trunk_Status_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Trunk_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2L_Trunk_Status_CT1B_FUNC_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Trunk_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2L_Trunk_Status from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2L_Trunk_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChargeScheduleType2Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeScheduleType2Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Charge_Schedule_Type2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeScheduleType2Sts_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Charge_Schedule_Type2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeScheduleType2Sts_CT1B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Charge_Schedule_Type2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Charge_Schedule_Type2_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Charge_Schedule_Type2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_1","10");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_1","15");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 29, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_InverterState from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_InverterState starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_2","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_2","12");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_2","15");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 30, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_InverterState from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_InverterState starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2V_TotalPowerTimedays_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2V_TotalPowerTimedays_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Total_Power_Time_days.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2V_TotalPowerTimedays_CT1B_FUNC_ac_Test_1","1.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Total_Power_Time_days.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2V_TotalPowerTimedays_CT1B_FUNC_ac_Test_1","3.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Total_Power_Time_days.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 31, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2V_Total_Power_Time_days from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2V_Total_Power_Time_days starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage1_CT1B_FUNC_ac_Test_2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage1_CT1B_FUNC_ac_Test_2","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage1_CT1B_FUNC_ac_Test_2","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 32, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage1 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ClimateSchd2DprtrHrSts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd2DprtrHrSts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd2_Departure_Hr_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd2DprtrHrSts_CT1B_FUNC_ac_Test_1","4.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd2_Departure_Hr_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd2DprtrHrSts_CT1B_FUNC_ac_Test_1","30.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd2_Departure_Hr_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 33, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd2_Departure_Hr_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd2_Departure_Hr_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Start_Time_Min2_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Min2_Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Min2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 45.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Min2_Sts_CT1B_FUNC_ac_Test_1","45.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Min2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Min2_Sts_CT1B_FUNC_ac_Test_1","55.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Min2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 34, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Min2_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Min2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_2","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 521.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_2","521.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_2","1023.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 35, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_DC_Voltage from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_DC_Voltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ClimateSchd2_Day_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd2_Day_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd2_Day_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 81;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd2_Day_Sts_CT1B_FUNC_ac_Test_1","81");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd2_Day_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd2_Day_Sts_CT1B_FUNC_ac_Test_1","254");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd2_Day_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 36, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd2_Day_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd2_Day_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVACPowerUse_DisplayV_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVACPowerUse_DisplayV_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVACPowerUse_DisplayV.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVACPowerUse_DisplayV_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVACPowerUse_DisplayV.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 37, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVACPowerUse_DisplayV from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal HVACPowerUse_DisplayV starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_NxtExtnlChrgImediatTgt_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExtnlChrgImediatTgt_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_External_Charge_ImmediateTgt.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExtnlChrgImediatTgt_CT1B_FUNC_ac_Test_1","10.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_External_Charge_ImmediateTgt.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 75.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExtnlChrgImediatTgt_CT1B_FUNC_ac_Test_1","75.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_External_Charge_ImmediateTgt.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 38, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Nxt_External_Charge_ImmediateTgt from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Nxt_External_Charge_ImmediateTgt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MCPA_RPM_PT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -32768.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MCPA_RPM_PT_CT1B_FUNC_ac_Test_1","-32768.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.MCPA_RPM_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -29116.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MCPA_RPM_PT_CT1B_FUNC_ac_Test_1","-29116.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.MCPA_RPM_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 32767.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MCPA_RPM_PT_CT1B_FUNC_ac_Test_1","32767.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.MCPA_RPM_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 39, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_RPM_PT from the message ENGINE_SIMULATOR1 in channel FD3", Testcase_description = "Check whether the signal MCPA_RPM_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PropRaceoptionsSts_PT1_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PropRaceoptionsSts_PT1_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.Propulsion_Raceoptions_Sts_PT1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PropRaceoptionsSts_PT1_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.Propulsion_Raceoptions_Sts_PT1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 40, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Propulsion_Raceoptions_Sts_PT1 from the message ENGINE_SIMULATOR1 in channel FD3", Testcase_description = "Check whether the signal Propulsion_Raceoptions_Sts_PT1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage6_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage6_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage6.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage6_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage6.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 41, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage6 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage6 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HTAuxPmpRPMAct_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpRPMAct_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpRPMAct.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4656.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpRPMAct_CT1B_FUNC_ac_Test_1","4656.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpRPMAct.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6096.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpRPMAct_CT1B_FUNC_ac_Test_1","6096.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpRPMAct.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 42, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HTAuxPmpRPMAct from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HTAuxPmpRPMAct starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVACPowerUse_Display_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVACPowerUse_Display_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVACPowerUse_Display.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 26.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVACPowerUse_Display_CT1B_FUNC_ac_Test_1","26.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVACPowerUse_Display.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 127.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVACPowerUse_Display_CT1B_FUNC_ac_Test_1","127.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVACPowerUse_Display.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 43, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVACPowerUse_Display from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal HVACPowerUse_Display starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChrgnLevelForDisplay_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChrgnLevelForDisplay_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.ChargingLevelForDisplay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChrgnLevelForDisplay_CT1B_FUNC_ac_Test_1","14");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.ChargingLevelForDisplay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 44, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargingLevelForDisplay from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal ChargingLevelForDisplay starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Cooperative_Status_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Cooperative_Status_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HCP_CHARGING_STAT.Cooperative_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Cooperative_Status_CT1B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HCP_CHARGING_STAT.Cooperative_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Cooperative_Status_CT1B_FUNC_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HCP_CHARGING_STAT.Cooperative_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 45, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Cooperative_Status from the message HCP_CHARGING_STAT in channel FD3", Testcase_description = "Check whether the signal Cooperative_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_WED_STATUS_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WED_STATUS_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.WED_STATUS.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WED_STATUS_CT1B_FUNC_ac_Test_1","6");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.WED_STATUS.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 46, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal WED_STATUS from the message ENGINE_SIMULATOR1 in channel FD3", Testcase_description = "Check whether the signal WED_STATUS starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_NxtExternlChrgExtnlTgt_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExternlChrgExtnlTgt_CT1B_FUNC_ac_Test_1","50.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_External_Charge_ExternalTgt.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 125.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExternlChrgExtnlTgt_CT1B_FUNC_ac_Test_1","125.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_External_Charge_ExternalTgt.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 47, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Nxt_External_Charge_ExternalTgt from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Nxt_External_Charge_ExternalTgt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_RearAirHtrPCBTemp_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RearAirHtrPCBTemp_CT1B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.RearAirHtrPCBTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 172.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RearAirHtrPCBTemp_CT1B_FUNC_ac_Test_1","172.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.RearAirHtrPCBTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RearAirHtrPCBTemp_CT1B_FUNC_ac_Test_1","214.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.RearAirHtrPCBTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 48, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RearAirHtrPCBTemp from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal RearAirHtrPCBTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_InverterState_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterState_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterState_CT1B_FUNC_ac_Test_1","6");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterState_CT1B_FUNC_ac_Test_1","15");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 49, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_InverterState from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_InverterState starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Chrg_Schedule_Type1Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Chrg_Schedule_Type1Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Charge_Schedule_Type1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Chrg_Schedule_Type1Sts_CT1B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Charge_Schedule_Type1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 50, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Charge_Schedule_Type1_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Charge_Schedule_Type1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_End_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Hr1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1","12.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Hr1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_End_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1","23.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.End_Time_Hr1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 51, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Hr1_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Hr1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HybridEfficiencyCoach_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridEfficiencyCoach_CT1B_FUNC_ac_Test_1","-100.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridEfficiencyCoach.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 85.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridEfficiencyCoach_CT1B_FUNC_ac_Test_1","85.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridEfficiencyCoach.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridEfficiencyCoach_CT1B_FUNC_ac_Test_1","100.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridEfficiencyCoach.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 52, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HybridEfficiencyCoach from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal HybridEfficiencyCoach starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_RPM_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -32768.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_RPM_CT1B_FUNC_ac_Test_1","-32768.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 17846.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_RPM_CT1B_FUNC_ac_Test_1","17846.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 32767.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_RPM_CT1B_FUNC_ac_Test_1","32767.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 53, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_RPM from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_RPM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CbnPreconditionReqSts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CbnPreconditionReqSts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinPreconditionReqSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CbnPreconditionReqSts_CT1B_FUNC_ac_Test_1","8");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinPreconditionReqSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CbnPreconditionReqSts_CT1B_FUNC_ac_Test_1","14");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinPreconditionReqSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 54, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CabinPreconditionReqSts from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal CabinPreconditionReqSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_AirflowRequest_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AirflowRequest_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_THERMAL_COMMAND.AirflowRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 38.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AirflowRequest_CT1B_FUNC_ac_Test_1","38.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_THERMAL_COMMAND.AirflowRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AirflowRequest_CT1B_FUNC_ac_Test_1","100.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_THERMAL_COMMAND.AirflowRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 55, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AirflowRequest from the message HYBRID_THERMAL_COMMAND in channel FD3", Testcase_description = "Check whether the signal AirflowRequest starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Enabl_ClimateSchd2_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Enabl_ClimateSchd2_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.Enable_ClimateSchd2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Enabl_ClimateSchd2_Sts_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.Enable_ClimateSchd2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 56, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Enable_ClimateSchd2_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Enable_ClimateSchd2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_FRfShVlvSts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_FRfShVlvSts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.FRfShVlvSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_FRfShVlvSts_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.FRfShVlvSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 57, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal FRfShVlvSts from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal FRfShVlvSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CoastingTelltale_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CoastingTelltale_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.VDCM_HMI.CoastingTelltale.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CoastingTelltale_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.VDCM_HMI.CoastingTelltale.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CoastingTelltale_CT1B_FUNC_ac_Test_1","6");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.VDCM_HMI.CoastingTelltale.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 58, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CoastingTelltale from the message VDCM_HMI in channel FD3", Testcase_description = "Check whether the signal CoastingTelltale starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Next_Climate_Day_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Climate_Day_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Climate_Day.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 59, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_Climate_Day from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_Climate_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChargeSystemFault_DPT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemFault_DPT_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.ChargeSystemFault_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemFault_DPT_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.ChargeSystemFault_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 60, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeSystemFault_DPT from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal ChargeSystemFault_DPT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ExternalChrgTarget2Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ExternalChrgTarget2Sts_CT1B_FUNC_ac_Test_1","50.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.External_ChargeTarget2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 105.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ExternalChrgTarget2Sts_CT1B_FUNC_ac_Test_1","105.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.External_ChargeTarget2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 125.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ExternalChrgTarget2Sts_CT1B_FUNC_ac_Test_1","125.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.External_ChargeTarget2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 61, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal External_ChargeTarget2_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal External_ChargeTarget2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Est_Range_ChrgStopTime_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Est_Range_ChrgStopTime_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.Est_Range_ChrgStopTime.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 659.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Est_Range_ChrgStopTime_CT1B_FUNC_ac_Test_1","659.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.Est_Range_ChrgStopTime.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2046.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Est_Range_ChrgStopTime_CT1B_FUNC_ac_Test_1","2046.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_HMI.Est_Range_ChrgStopTime.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 62, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Est_Range_ChrgStopTime from the message VDCM_HMI in channel FD3", Testcase_description = "Check whether the signal Est_Range_ChrgStopTime starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_AllowClimateSchd1_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AllowClimateSchd1_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.AllowClimateSchd1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AllowClimateSchd1_Sts_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.AllowClimateSchd1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 63, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AllowClimateSchd1_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal AllowClimateSchd1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Race_Prep_FD3_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Race_Prep_FD3_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Race_Prep.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Race_Prep_FD3_CT1B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Race_Prep.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 64, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Race_Prep from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal Race_Prep starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2VTotalPowerTimehours_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2VTotalPowerTimehours_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Total_Power_Time_hours.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2VTotalPowerTimehours_CT1B_FUNC_ac_Test_1","14.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Total_Power_Time_hours.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2VTotalPowerTimehours_CT1B_FUNC_ac_Test_1","31.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Total_Power_Time_hours.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 65, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2V_Total_Power_Time_hours from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2V_Total_Power_Time_hours starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_Temperature_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_Temperature_CT1B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -7.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_Temperature_CT1B_FUNC_ac_Test_1","-7.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_Temperature_CT1B_FUNC_ac_Test_1","215.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 66, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_Temperature from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_Temperature starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HybridEfficiencyCoachV_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridEfficiencyCoachV_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridEfficiencyCoachV.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridEfficiencyCoachV_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridEfficiencyCoachV.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 67, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HybridEfficiencyCoachV from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal HybridEfficiencyCoachV starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HTShtOffVlvReq_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTShtOffVlvReq_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTShtOffVlvReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTShtOffVlvReq_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTShtOffVlvReq.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 68, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HTShtOffVlvReq from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HTShtOffVlvReq starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_SchCond_Time_Till_Dep_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_SchCond_Time_Till_Dep_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.SchCond_Time_Till_Dep.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 120.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_SchCond_Time_Till_Dep_CT1B_FUNC_ac_Test_1","120.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.SchCond_Time_Till_Dep.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 126.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_SchCond_Time_Till_Dep_CT1B_FUNC_ac_Test_1","126.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.SchCond_Time_Till_Dep.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 69, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SchCond_Time_Till_Dep from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal SchCond_Time_Till_Dep starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Racemode_Popup_PT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Racemode_Popup_PT_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY2.Racemode_Popup_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 64;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Racemode_Popup_PT_CT1B_FUNC_ac_Test_1","64");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY2.Racemode_Popup_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 127;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Racemode_Popup_PT_CT1B_FUNC_ac_Test_1","127");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY2.Racemode_Popup_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 70, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Racemode_Popup_PT from the message HYBRID_DISPLAY2 in channel FD3", Testcase_description = "Check whether the signal Racemode_Popup_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage7_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage7_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage7.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage7_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage7.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 71, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage7 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage7 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HybridOutputPower_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridOutputPower_CT1B_FUNC_ac_Test_1","-100.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridOutputPower.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 42.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridOutputPower_CT1B_FUNC_ac_Test_1","42.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridOutputPower.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridOutputPower_CT1B_FUNC_ac_Test_1","100.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridOutputPower.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 72, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HybridOutputPower from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal HybridOutputPower starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Next_Chrg_Strt_Time_Hr_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_Strt_Time_Hr_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_Start_Time_Hr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_Strt_Time_Hr_CT1B_FUNC_ac_Test_1","5.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_Start_Time_Hr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_Strt_Time_Hr_CT1B_FUNC_ac_Test_1","23.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_Start_Time_Hr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 73, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_Charge_Start_Time_Hr from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_Charge_Start_Time_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Next_Climate_Time_Hr_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Climate_Time_Hr_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Climate_Time_Hr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Climate_Time_Hr_CT1B_FUNC_ac_Test_1","5.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Climate_Time_Hr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Climate_Time_Hr_CT1B_FUNC_ac_Test_1","23.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Climate_Time_Hr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 74, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_Climate_Time_Hr from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_Climate_Time_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage5_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage5_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage5.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage5_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage5.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 75, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage5 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage5 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_NxtExtChargEndTimeHr_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExtChargEndTimeHr_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_Ext_Charge_End_Time_Hr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 26.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExtChargEndTimeHr_CT1B_FUNC_ac_Test_1","26.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_Ext_Charge_End_Time_Hr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 76, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Nxt_Ext_Charge_End_Time_Hr from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Nxt_Ext_Charge_End_Time_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Schedule_Day1_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Schedule_Day1_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Schedule_Day1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 127;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Schedule_Day1_Sts_CT1B_FUNC_ac_Test_1","127");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Schedule_Day1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 78, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Schedule_Day1_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Schedule_Day1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage11_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage11_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage11.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage11_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage11.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 79, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage11 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage11 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2V_Instant_Power_Draw_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2V_Instant_Power_Draw_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Instant_Power_Draw.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2V_Instant_Power_Draw_CT1B_FUNC_ac_Test_1","16.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Instant_Power_Draw.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 25.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2V_Instant_Power_Draw_CT1B_FUNC_ac_Test_1","25.5");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Instant_Power_Draw.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 80, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2V_Instant_Power_Draw from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2V_Instant_Power_Draw starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Next_Charge_StartDay_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Charge_StartDay_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_StartDay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 13;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Charge_StartDay_CT1B_FUNC_ac_Test_1","13");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_StartDay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 81, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_Charge_StartDay from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_Charge_StartDay starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2L_Frunk_Status_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2L_Frunk_Status_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Frunk_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2L_Frunk_Status_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Frunk_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2L_Frunk_Status_CT1B_FUNC_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Frunk_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 82, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2L_Frunk_Status from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2L_Frunk_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_RaceModeSts_PT1_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RaceModeSts_PT1_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.RaceModeSts_PT1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RaceModeSts_PT1_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.RaceModeSts_PT1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 83, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RaceModeSts_PT1 from the message ENGINE_SIMULATOR1 in channel FD3", Testcase_description = "Check whether the signal RaceModeSts_PT1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -1638.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_1","-1638.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -1085.8000000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_1","-1085.8000000000002");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_1","1638.3");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 84, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_DC_Current from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_DC_Current starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -1638.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_2","-1638.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 953.8000000000002;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_2","953.8000000000002");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_2","1638.3");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Current.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 85, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_DC_Current from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_DC_Current starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Nxt_ChargeScheduleType_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Nxt_ChargeScheduleType_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_Charge_Schedule_Type.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Nxt_ChargeScheduleType_CT1B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_Charge_Schedule_Type.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 86, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Nxt_Charge_Schedule_Type from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Nxt_Charge_Schedule_Type starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage9_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage9_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage9.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage9_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage9.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 87, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage9 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage9 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_2","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 200.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_2","200.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_2","215.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 88, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_Temperature from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_Temperature starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 805.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_1","805.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_1","1023.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_DC_Voltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 89, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_DC_Voltage from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_DC_Voltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage2_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage2_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage2.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage2_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage2.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 90, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage2 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage2 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ClimatSchd2DprtrMinSts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimatSchd2DprtrMinSts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd2_Departure_Min_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimatSchd2DprtrMinSts_CT1B_FUNC_ac_Test_1","40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd2_Departure_Min_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 70.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimatSchd2DprtrMinSts_CT1B_FUNC_ac_Test_1","70.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd2_Departure_Min_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 91, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd2_Departure_Min_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd2_Departure_Min_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVBatterySOC_Display_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatterySOC_Display_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVBatterySOC_Display.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10.5894;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatterySOC_Display_CT1B_FUNC_ac_Test_1","10.5894");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVBatterySOC_Display.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatterySOC_Display_CT1B_FUNC_ac_Test_1","100.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVBatterySOC_Display.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 92, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatterySOC_Display from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal HVBatterySOC_Display starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2LTotalPowerTimeminut_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LTotalPowerTimeminut_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Total_Power_Time_minutes.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LTotalPowerTimeminut_CT1B_FUNC_ac_Test_1","30.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Total_Power_Time_minutes.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 63.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LTotalPowerTimeminut_CT1B_FUNC_ac_Test_1","63.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Total_Power_Time_minutes.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 93, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2L_Total_Power_Time_minutes from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2L_Total_Power_Time_minutes starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Regen_Status_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Regen_Status_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Regen_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Regen_Status_CT1B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Regen_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Regen_Status_CT1B_FUNC_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Regen_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 94, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Regen_Status from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal Regen_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_InverterTemp_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterTemp_CT1B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterTemp_CT1B_FUNC_ac_Test_1","50.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_InverterTemp_CT1B_FUNC_ac_Test_1","215.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_InverterTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 95, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_InverterTemp from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_InverterTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_RACE_PREP_RCE_TYP_STS_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RACE_PREP_RCE_TYP_STS_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY2.RACE_PREP_RACE_TYPE_STS.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RACE_PREP_RCE_TYP_STS_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY2.RACE_PREP_RACE_TYPE_STS.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 96, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RACE_PREP_RACE_TYPE_STS from the message HYBRID_DISPLAY2 in channel FD3", Testcase_description = "Check whether the signal RACE_PREP_RACE_TYPE_STS starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Climate_Cabin_Temp2Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Climate_Cabin_Temp2Sts_CT1B_FUNC_ac_Test_1","16.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.Climate_Cabin_Temp2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 25.5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Climate_Cabin_Temp2Sts_CT1B_FUNC_ac_Test_1","25.5");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.Climate_Cabin_Temp2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Climate_Cabin_Temp2Sts_CT1B_FUNC_ac_Test_1","31.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.Climate_Cabin_Temp2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 97, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_Cabin_Temp2_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Climate_Cabin_Temp2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HybridOutputPowerV_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridOutputPowerV_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridOutputPowerV.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridOutputPowerV_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HybridOutputPowerV.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 98, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HybridOutputPowerV from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal HybridOutputPowerV starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Schedule_Day2_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Schedule_Day2_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Schedule_Day2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 129;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Schedule_Day2_Sts_CT1B_FUNC_ac_Test_1","129");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Schedule_Day2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 99, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Schedule_Day2_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Schedule_Day2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_AxleLckr_Stat_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AxleLckr_Stat_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.AxleLckr_Stat.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AxleLckr_Stat_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.AxleLckr_Stat.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AxleLckr_Stat_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.AxleLckr_Stat.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 100, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AxleLckr_Stat from the message DRIVETRAIN_FD_3 in channel FD3", Testcase_description = "Check whether the signal AxleLckr_Stat starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_AxleLckr_SRV_RQ_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AxleLckr_SRV_RQ_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.AxleLckr_SRV_RQ.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AxleLckr_SRV_RQ_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.AxleLckr_SRV_RQ.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 101, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AxleLckr_SRV_RQ from the message DRIVETRAIN_FD_3 in channel FD3", Testcase_description = "Check whether the signal AxleLckr_SRV_RQ starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MCPB_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -512.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MCPB_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1","-512.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.MCPB_Torque_Achieved_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 477.125;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MCPB_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1","477.125");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.MCPB_Torque_Achieved_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 511.875;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MCPB_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1","511.875");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.MCPB_Torque_Achieved_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 102, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_Torque_Achieved_PT from the message ENGINE_SIMULATOR1 in channel FD3", Testcase_description = "Check whether the signal MCPB_Torque_Achieved_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ClimateSchd1_Day_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd1_Day_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd1_Day_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 63;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd1_Day_Sts_CT1B_FUNC_ac_Test_1","63");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd1_Day_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 254;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimateSchd1_Day_Sts_CT1B_FUNC_ac_Test_1","254");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd1_Day_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 103, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd1_Day_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd1_Day_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Next_Chrg_End_Time_Min_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_End_Time_Min_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_End_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_End_Time_Min_CT1B_FUNC_ac_Test_1","15.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_End_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_End_Time_Min_CT1B_FUNC_ac_Test_1","55.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_End_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 104, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_Charge_End_Time_Min from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_Charge_End_Time_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -32768.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_1","-32768.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 26431.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_1","26431.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 32767.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_1","32767.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 105, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_RPM from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_RPM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChargeUntilFull1_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeUntilFull1_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.ChargeUntilFull1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeUntilFull1_Sts_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.ChargeUntilFull1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 106, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeUntilFull1_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal ChargeUntilFull1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ImmediatChrgTarget1Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ImmediatChrgTarget1Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Immediate_ChargeTarget1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ImmediatChrgTarget1Sts_CT1B_FUNC_ac_Test_1","15.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Immediate_ChargeTarget1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 107, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Immediate_ChargeTarget1_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Immediate_ChargeTarget1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 95.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_1","95.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 215.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_1","215.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_Temperature.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 108, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_Temperature from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_Temperature starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_BatteryRunaway_Lamp_PT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_BatteryRunaway_Lamp_PT_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.VDCM_HMI.BatteryRunaway_Lamp_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_BatteryRunaway_Lamp_PT_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.VDCM_HMI.BatteryRunaway_Lamp_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 109, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BatteryRunaway_Lamp_PT from the message VDCM_HMI in channel FD3", Testcase_description = "Check whether the signal BatteryRunaway_Lamp_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage10_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage10_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage10.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage10_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage10.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 110, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage10 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage10 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_PopUpMessage7_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_PopUpMessage7_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.VDCM_HMI.VDCM_PopUpMessage7.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_PopUpMessage7_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.VDCM_HMI.VDCM_PopUpMessage7.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 111, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_PopUpMessage7 from the message VDCM_HMI in channel FD3", Testcase_description = "Check whether the signal VDCM_PopUpMessage7 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Tcase2WD_Stat_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Tcase2WD_Stat_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.Tcase2WD_Stat.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Tcase2WD_Stat_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.Tcase2WD_Stat.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 112, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Tcase2WD_Stat from the message DRIVETRAIN_FD_3 in channel FD3", Testcase_description = "Check whether the signal Tcase2WD_Stat starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CompressorState_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CompressorState_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CompressorState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CompressorState_CT1B_FUNC_ac_Test_1","8");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CompressorState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CompressorState_CT1B_FUNC_ac_Test_1","14");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CompressorState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 113, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CompressorState from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal CompressorState starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorB_TorqueAchieved_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -512.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_TorqueAchieved_CT1B_FUNC_ac_Test_1","-512.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 293.375;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_TorqueAchieved_CT1B_FUNC_ac_Test_1","293.375");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 511.875;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorB_TorqueAchieved_CT1B_FUNC_ac_Test_1","511.875");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorB_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 114, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorB_TorqueAchieved from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorB_TorqueAchieved starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChargeSystemSts_DPT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemSts_DPT_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.ChargeSystemSts_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemSts_DPT_CT1B_FUNC_ac_Test_1","4");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.ChargeSystemSts_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeSystemSts_DPT_CT1B_FUNC_ac_Test_1","6");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.ChargeSystemSts_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 115, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeSystemSts_DPT from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal ChargeSystemSts_DPT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Next_Climate_Time_Min_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Climate_Time_Min_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Climate_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 35.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Climate_Time_Min_CT1B_FUNC_ac_Test_1","35.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Climate_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Climate_Time_Min_CT1B_FUNC_ac_Test_1","55.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Climate_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 116, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_Climate_Time_Min from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_Climate_Time_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Climate_Cabin_Temp1Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 16.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Climate_Cabin_Temp1Sts_CT1B_FUNC_ac_Test_1","16.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.Climate_Cabin_Temp1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Climate_Cabin_Temp1Sts_CT1B_FUNC_ac_Test_1","31.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.Climate_Cabin_Temp1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 117, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_Cabin_Temp1_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Climate_Cabin_Temp1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVBatCoolantLvlLo_DPT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCoolantLvlLo_DPT_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCoolantLevelLow_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCoolantLvlLo_DPT_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCoolantLevelLow_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCoolantLvlLo_DPT_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCoolantLevelLow_DPT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 118, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatCoolantLevelLow_DPT from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HVBatCoolantLevelLow_DPT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_NxtExtChargeEndTimeMin_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExtChargeEndTimeMin_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_Ext_Charge_End_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExtChargeEndTimeMin_CT1B_FUNC_ac_Test_1","40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_Ext_Charge_End_Time_Min.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 119, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Nxt_Ext_Charge_End_Time_Min from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Nxt_Ext_Charge_End_Time_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ExternalChrgTarget1Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 50.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ExternalChrgTarget1Sts_CT1B_FUNC_ac_Test_1","50.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.External_ChargeTarget1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 75.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ExternalChrgTarget1Sts_CT1B_FUNC_ac_Test_1","75.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.External_ChargeTarget1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 125.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ExternalChrgTarget1Sts_CT1B_FUNC_ac_Test_1","125.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.External_ChargeTarget1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 120, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal External_ChargeTarget1_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal External_ChargeTarget1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_RefrigerantPressure_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RefrigerantPressure_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.RefrigerantPressure.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 13.3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RefrigerantPressure_CT1B_FUNC_ac_Test_1","13.3");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.RefrigerantPressure.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RefrigerantPressure_CT1B_FUNC_ac_Test_1","40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.RefrigerantPressure.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 121, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RefrigerantPressure from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal RefrigerantPressure starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Next_Chrg_End_Time_Hr_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_End_Time_Hr_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_End_Time_Hr.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_End_Time_Hr_CT1B_FUNC_ac_Test_1","15");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_End_Time_Hr.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_End_Time_Hr_CT1B_FUNC_ac_Test_1","30");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_End_Time_Hr.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 122, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_Charge_End_Time_Hr from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_Charge_End_Time_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ElecCoolantHtrPwr_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ElecCoolantHtrPwr_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.ElecCoolantHtrPwr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8.040000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ElecCoolantHtrPwr_CT1B_FUNC_ac_Test_1","8.040000000000001");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.ElecCoolantHtrPwr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 10.16;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ElecCoolantHtrPwr_CT1B_FUNC_ac_Test_1","10.16");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.ElecCoolantHtrPwr.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 123, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ElecCoolantHtrPwr from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal ElecCoolantHtrPwr starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_PopUpMessage5_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_PopUpMessage5_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.VDCM_HMI.VDCM_PopUpMessage5.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_PopUpMessage5_CT1B_FUNC_ac_Test_1","6");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.VDCM_HMI.VDCM_PopUpMessage5.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 124, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_PopUpMessage5 from the message VDCM_HMI in channel FD3", Testcase_description = "Check whether the signal VDCM_PopUpMessage5 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage4_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage4_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage4.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage4_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage4.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 125, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage4 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage4 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PopUpMessage3_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage3_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage3.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PopUpMessage3_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.PopUpMessage3.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 126, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PopUpMessage3 from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal PopUpMessage3 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVBatterySOC_DisplayV_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatterySOC_DisplayV_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVBatterySOC_DisplayV.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatterySOC_DisplayV_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HVBatterySOC_DisplayV.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 127, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatterySOC_DisplayV from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal HVBatterySOC_DisplayV starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Enbl_ClimateSchd1_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Enbl_ClimateSchd1_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.Enable_ClimateSchd1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Enbl_ClimateSchd1_Sts_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.Enable_ClimateSchd1_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 128, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Enable_ClimateSchd1_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Enable_ClimateSchd1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -512.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_2","-512.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 343.875;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_2","343.875");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 511.875;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_2","511.875");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 129, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_TorqueAchieved from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_TorqueAchieved starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Start_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Hr1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1","7.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Hr1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1","23.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Hr1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 130, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Hr1_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Hr1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HeaterCoreInletTemp_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HeaterCoreInletTemp_CT1B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HeaterCoreInletTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 86.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HeaterCoreInletTemp_CT1B_FUNC_ac_Test_1","86.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HeaterCoreInletTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 214.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HeaterCoreInletTemp_CT1B_FUNC_ac_Test_1","214.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_HVAC.HeaterCoreInletTemp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 131, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HeaterCoreInletTemp from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HeaterCoreInletTemp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HTAuxPmpMontrngRPM_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpMontrngRPM_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpMontrngRPM.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HTAuxPmpMontrngRPM_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HTAuxPmpMontrngRPM.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 132, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HTAuxPmpMontrngRPM from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HTAuxPmpMontrngRPM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -512.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_1","-512.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 203.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_1","203.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 511.875;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_1","511.875");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_TorqueAchieved.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 133, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_TorqueAchieved from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_TorqueAchieved starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Lv1_EstChargeTime_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Lv1_EstChargeTime_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Lv1_EstChargeTime.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 6595.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Lv1_EstChargeTime_CT1B_FUNC_ac_Test_1","6595.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Lv1_EstChargeTime.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 8190.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Lv1_EstChargeTime_CT1B_FUNC_ac_Test_1","8190.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Lv1_EstChargeTime.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 134, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Lv1_EstChargeTime from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal Lv1_EstChargeTime starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVBatCritCondT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCritCondT_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCritCondT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVBatCritCondT_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.HVBatCritCondT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 135, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVBatCritCondT from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal HVBatCritCondT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_AxleLckrEvicDisp_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AxleLckrEvicDisp_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.AxleLckrEvicDisp.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AxleLckrEvicDisp_CT1B_FUNC_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.AxleLckrEvicDisp.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_AxleLckrEvicDisp_CT1B_FUNC_ac_Test_1","30");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.DRIVETRAIN_FD_3.AxleLckrEvicDisp.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 136, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AxleLckrEvicDisp from the message DRIVETRAIN_FD_3 in channel FD3", Testcase_description = "Check whether the signal AxleLckrEvicDisp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CabinConditioningSts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CabinConditioningSts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinConditioningSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CabinConditioningSts_CT1B_FUNC_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinConditioningSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CabinConditioningSts_CT1B_FUNC_ac_Test_1","9");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.CabinConditioningSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 137, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CabinConditioningSts from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal CabinConditioningSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Lv2_EstChargeTime_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Lv2_EstChargeTime_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Lv2_EstChargeTime.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 626.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Lv2_EstChargeTime_CT1B_FUNC_ac_Test_1","626.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Lv2_EstChargeTime.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2046.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Lv2_EstChargeTime_CT1B_FUNC_ac_Test_1","2046.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.Lv2_EstChargeTime.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 138, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Lv2_EstChargeTime from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal Lv2_EstChargeTime starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_RPM_MCPB_PT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -32768.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RPM_MCPB_PT_CT1B_FUNC_ac_Test_1","-32768.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.RPM_MCPB_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -9549.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RPM_MCPB_PT_CT1B_FUNC_ac_Test_1","-9549.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.RPM_MCPB_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 32767.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RPM_MCPB_PT_CT1B_FUNC_ac_Test_1","32767.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.RPM_MCPB_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 139, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RPM_MCPB_PT from the message ENGINE_SIMULATOR1 in channel FD3", Testcase_description = "Check whether the signal RPM_MCPB_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ClimSchd1Dprtr_Min_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimSchd1Dprtr_Min_Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd1_Departure_Min_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 65.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimSchd1Dprtr_Min_Sts_CT1B_FUNC_ac_Test_1","65.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd1_Departure_Min_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 70.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ClimSchd1Dprtr_Min_Sts_CT1B_FUNC_ac_Test_1","70.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CLIMATE_SCHEDULE_HCP1.ClimateSchd1_Departure_Min_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 140, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd1_Departure_Min_Sts from the message CLIMATE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd1_Departure_Min_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ChargeUntilFull2_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeUntilFull2_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.ChargeUntilFull2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ChargeUntilFull2_Sts_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.ChargeUntilFull2_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 141, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChargeUntilFull2_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal ChargeUntilFull2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Next_Chrg_EndDay_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_EndDay_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_EndDay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Next_Chrg_EndDay_CT1B_FUNC_ac_Test_1","9");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Next_Charge_EndDay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 142, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Next_Charge_EndDay from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Next_Charge_EndDay starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MCPA_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -512.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MCPA_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1","-512.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.MCPA_Torque_Achieved_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -319.375;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MCPA_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1","-319.375");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.MCPA_Torque_Achieved_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 511.875;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MCPA_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1","511.875");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.ENGINE_SIMULATOR1.MCPA_Torque_Achieved_PT.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 143, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_Torque_Achieved_PT from the message ENGINE_SIMULATOR1 in channel FD3", Testcase_description = "Check whether the signal MCPA_Torque_Achieved_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HCP_EVServiceLampOn_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HCP_EVServiceLampOn_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HCP_EVServiceLampOn.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HCP_EVServiceLampOn_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_DISPLAY.HCP_EVServiceLampOn.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 144, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HCP_EVServiceLampOn from the message HYBRID_DISPLAY in channel FD3", Testcase_description = "Check whether the signal HCP_EVServiceLampOn starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Start_Time_Min1_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Min1_Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Min1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Min1_Sts_CT1B_FUNC_ac_Test_1","15.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Min1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 55.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Min1_Sts_CT1B_FUNC_ac_Test_1","55.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Min1_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 145, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Min1_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Min1_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Sch_PreCondition_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Sch_PreCondition_Sts_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.Sch_PreCondition_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Sch_PreCondition_Sts_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.Sch_PreCondition_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Sch_PreCondition_Sts_CT1B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HYBRID_HVAC.Sch_PreCondition_Sts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 146, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Sch_PreCondition_Sts from the message HYBRID_HVAC in channel FD3", Testcase_description = "Check whether the signal Sch_PreCondition_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_NxtExternalChargEndDay_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExternalChargEndDay_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_External_Charge_EndDay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_NxtExternalChargEndDay_CT1B_FUNC_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_NEXT.Nxt_External_Charge_EndDay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 147, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Nxt_External_Charge_EndDay from the message CHARGE_SCHEDULE_NEXT in channel FD3", Testcase_description = "Check whether the signal Nxt_External_Charge_EndDay starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -32768.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_2","-32768.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -6253.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_2","-6253.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 32767.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_2","32767.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_RM_MOTORS.MotorA_RPM.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 148, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MotorA_RPM from the message HYBRID_RM_MOTORS in channel FD3", Testcase_description = "Check whether the signal MotorA_RPM starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2L_Total_PwrTimedays_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2L_Total_PwrTimedays_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Total_Power_Time_days.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 17.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2L_Total_PwrTimedays_CT1B_FUNC_ac_Test_1","17.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Total_Power_Time_days.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2L_Total_PwrTimedays_CT1B_FUNC_ac_Test_1","31.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Total_Power_Time_days.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 149, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2L_Total_Power_Time_days from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2L_Total_Power_Time_days starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_T4_Sensor_Temp_FD3_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -40.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD3_CT1B_FUNC_ac_Test_1","-40.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 16.6;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD3_CT1B_FUNC_ac_Test_1","16.6");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 164.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_T4_Sensor_Temp_FD3_CT1B_FUNC_ac_Test_1","164.7");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.VDCM_PWT3.T4_Sensor_Temp.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 150, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal T4_Sensor_Temp from the message VDCM_PWT3 in channel FD3", Testcase_description = "Check whether the signal T4_Sensor_Temp starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2LInstantPwrDrawTrunk_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LInstantPwrDrawTrunk_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Instant_Power_Draw_Trunk.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LInstantPwrDrawTrunk_CT1B_FUNC_ac_Test_1","5.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Instant_Power_Draw_Trunk.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 12.7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2LInstantPwrDrawTrunk_CT1B_FUNC_ac_Test_1","12.7");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.V2X_EVCU.V2L_Instant_Power_Draw_Trunk.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 151, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2L_Instant_Power_Draw_Trunk from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2L_Instant_Power_Draw_Trunk starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Start_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Hr2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 17.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1","17.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Hr2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 23.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Start_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1","23.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Start_Time_Hr2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 152, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Hr2_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Hr2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2V_Status_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2V_Status_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2V_Status_CT1B_FUNC_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.V2X_EVCU.V2V_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 153, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2V_Status from the message V2X_EVCU in channel FD3", Testcase_description = "Check whether the signal V2V_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_ImmediatChrgTarget2Sts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ImmediatChrgTarget2Sts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Immediate_ChargeTarget2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_ImmediatChrgTarget2Sts_CT1B_FUNC_ac_Test_1","15.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Immediate_ChargeTarget2_Sts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 154, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Immediate_ChargeTarget2_Sts from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Immediate_ChargeTarget2_Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_RadiatorFanSts_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RadiatorFanSts_CT1B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_THERMAL_COMMAND.RadiatorFanSts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 93.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RadiatorFanSts_CT1B_FUNC_ac_Test_1","93.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_THERMAL_COMMAND.RadiatorFanSts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 100.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_RadiatorFanSts_CT1B_FUNC_ac_Test_1","100.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD3.EVCU2.HYBRID_THERMAL_COMMAND.RadiatorFanSts.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 155, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal RadiatorFanSts from the message HYBRID_THERMAL_COMMAND in channel FD3", Testcase_description = "Check whether the signal RadiatorFanSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Schedule_Confirmed1_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Schedule_Confirmed1_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Schedule_Confirmed1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Schedule_Confirmed1_CT1B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.CHARGE_SCHEDULE_HCP1.Schedule_Confirmed1.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 156, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Schedule_Confirmed1 from the message CHARGE_SCHEDULE_HCP1 in channel FD3", Testcase_description = "Check whether the signal Schedule_Confirmed1 starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_Chargeport_Lock_Status_CT1B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Chargeport_Lock_Status_CT1B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HCP_CHARGING_STAT.Chargeport_Lock_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_Chargeport_Lock_Status_CT1B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD3.EVCU2.HCP_CHARGING_STAT.Chargeport_Lock_Status.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 157, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Chargeport_Lock_Status from the message HCP_CHARGING_STAT in channel FD3", Testcase_description = "Check whether the signal Chargeport_Lock_Status starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
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

	Temp_Input_Value = 118;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_IMMO_CODE_REQUEST_IMOR_ac_Test_1","118");
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
report.fields.Add(new Excel_Fields {Test_Case_ID = 158, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ControlEncodingReq from the message IMMO_CODE_REQUEST in channel FD3", Testcase_description = "Check whether the signal ControlEncodingReq starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Tx_Testing_FD3()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Tx_FD3.xlsx";

	Test_Case_SendCANR_RearAirHtrCoreTemp_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_NextChrg_Strt_Time_Min_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_End_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ElecClntHtrInletTemp_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_RrAxleLockerIndRq_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_AllowClimateSchd2_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_DC_Voltage_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Next_SchCabin_Temp_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ActualDrvModStatusFD3_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_End_Time_Min2_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_DC_EstChargeTime1_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2LInstantPwrDrawFrunk_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_EstRange_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_2(report);
	Test_Case_SendCANR_V2LTotalPowerTimehours_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_DC_Current_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_RearAirHtrPwrCnsAct_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2VTotalPowerTimeminut_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Schedule_Confirmed2_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Est_HVBatSOC_VDCM_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_End_Time_Min1_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage1_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_DC_EstChargeTime2_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Propulsion_DrvMd_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ClimateSchd1DprtrHrSts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2L_Trunk_Status_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ChargeScheduleType2Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_2(report);
	Test_Case_SendCANR_V2V_TotalPowerTimedays_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage1_CT1B_FUNC_ac_Test_2(report);
	Test_Case_SendCANR_ClimateSchd2DprtrHrSts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Start_Time_Min2_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_2(report);
	Test_Case_SendCANR_ClimateSchd2_Day_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVACPowerUse_DisplayV_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_NxtExtnlChrgImediatTgt_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MCPA_RPM_PT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PropRaceoptionsSts_PT1_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage6_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HTAuxPmpRPMAct_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVACPowerUse_Display_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ChrgnLevelForDisplay_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Cooperative_Status_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_WED_STATUS_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_NxtExternlChrgExtnlTgt_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_RearAirHtrPCBTemp_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_InverterState_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Chrg_Schedule_Type1Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_End_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HybridEfficiencyCoach_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_RPM_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_CbnPreconditionReqSts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_AirflowRequest_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Enabl_ClimateSchd2_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_FRfShVlvSts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_CoastingTelltale_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Next_Climate_Day_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ChargeSystemFault_DPT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ExternalChrgTarget2Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Est_Range_ChrgStopTime_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_AllowClimateSchd1_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Race_Prep_FD3_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2VTotalPowerTimehours_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_Temperature_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HybridEfficiencyCoachV_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HTShtOffVlvReq_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_SchCond_Time_Till_Dep_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Racemode_Popup_PT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage7_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HybridOutputPower_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Next_Chrg_Strt_Time_Hr_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Next_Climate_Time_Hr_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage5_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_NxtExtChargEndTimeHr_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Schedule_Day1_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage11_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2V_Instant_Power_Draw_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Next_Charge_StartDay_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2L_Frunk_Status_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_RaceModeSts_PT1_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_2(report);
	Test_Case_SendCANR_Nxt_ChargeScheduleType_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage9_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_2(report);
	Test_Case_SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage2_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ClimatSchd2DprtrMinSts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVBatterySOC_Display_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2LTotalPowerTimeminut_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Regen_Status_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_InverterTemp_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_RACE_PREP_RCE_TYP_STS_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Climate_Cabin_Temp2Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HybridOutputPowerV_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Schedule_Day2_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_AxleLckr_Stat_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_AxleLckr_SRV_RQ_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MCPB_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ClimateSchd1_Day_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Next_Chrg_End_Time_Min_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ChargeUntilFull1_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ImmediatChrgTarget1Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_BatteryRunaway_Lamp_PT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage10_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_PopUpMessage7_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Tcase2WD_Stat_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_CompressorState_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorB_TorqueAchieved_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ChargeSystemSts_DPT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Next_Climate_Time_Min_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Climate_Cabin_Temp1Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVBatCoolantLvlLo_DPT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_NxtExtChargeEndTimeMin_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ExternalChrgTarget1Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_RefrigerantPressure_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Next_Chrg_End_Time_Hr_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ElecCoolantHtrPwr_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_PopUpMessage5_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage4_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PopUpMessage3_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVBatterySOC_DisplayV_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Enbl_ClimateSchd1_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_2(report);
	Test_Case_SendCANR_Start_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HeaterCoreInletTemp_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HTAuxPmpMontrngRPM_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Lv1_EstChargeTime_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVBatCritCondT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_AxleLckrEvicDisp_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_CabinConditioningSts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Lv2_EstChargeTime_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_RPM_MCPB_PT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ClimSchd1Dprtr_Min_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ChargeUntilFull2_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Next_Chrg_EndDay_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MCPA_TorqueAchieved_PT_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HCP_EVServiceLampOn_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Start_Time_Min1_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Sch_PreCondition_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_NxtExternalChargEndDay_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_2(report);
	Test_Case_SendCANR_V2L_Total_PwrTimedays_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_T4_Sensor_Temp_FD3_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2LInstantPwrDrawTrunk_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Start_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2V_Status_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_ImmediatChrgTarget2Sts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_RadiatorFanSts_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Schedule_Confirmed1_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_Chargeport_Lock_Status_CT1B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_IMMO_CODE_REQUEST_IMOR_ac_Test_1(report);
	report.Save_Excel(Report_Save_Path);


}

}
