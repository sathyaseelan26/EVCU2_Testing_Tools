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
public static void Test_Case_SendCANR_CPIM_Over_Temp_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CPIM_Over_Temp_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.CPIM_Over_Temperature.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CPIM_Over_Temp_FD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.CPIM_Over_Temperature.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CPIM_Over_Temperature from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal CPIM_Over_Temperature starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_RmnTiToFuSOCFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_RmnTiToFuSOCFD11_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_RemaningTimeToFullSOC.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 60929.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_RmnTiToFuSOCFD11_CT2B_FUNC_ac_Test_1","60929.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_RemaningTimeToFullSOC.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_RemaningTimeToFullSOC from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_RemaningTimeToFullSOC starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_CPIM_Error_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CPIM_Error_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.CPIM_Error.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_CPIM_Error_FD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.CPIM_Error.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal CPIM_Error from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal CPIM_Error starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PerWakeUp_Diag_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PerWakeUp_Diag_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.PerWakeUp_Diag.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 551;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PerWakeUp_Diag_FD11_CT2B_FUNC_ac_Test_1","551");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.PerWakeUp_Diag.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1023;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PerWakeUp_Diag_FD11_CT2B_FUNC_ac_Test_1","1023");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.PerWakeUp_Diag.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PerWakeUp_Diag from the message HYBRID_SYSTEM_EPT1 in channel FD11", Testcase_description = "Check whether the signal PerWakeUp_Diag starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PtrainPrplsnActvPTFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PtrainPrplsnActvPTFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.PT_SYSTEM_FD_1.PowertrainPrplsnActv_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PtrainPrplsnActvPTFD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.PT_SYSTEM_FD_1.PowertrainPrplsnActv_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PowertrainPrplsnActv_PT from the message PT_SYSTEM_FD_1 in channel FD11", Testcase_description = "Check whether the signal PowertrainPrplsnActv_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_WeldCheck_CompleteFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WeldCheck_CompleteFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.WeldCheck_Complete.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WeldCheck_CompleteFD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.WeldCheck_Complete.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal WeldCheck_Complete from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal WeldCheck_Complete starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_EVReady_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVReady_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVReady.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVReady_FD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVReady.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVReady from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVReady starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HCP_ShutdownCommand_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HCP_ShutdownCommand_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.HCP_ShutdownCommand.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HCP_ShutdownCommand from the message HYBRID_SYSTEM_EPT1 in channel FD11", Testcase_description = "Check whether the signal HCP_ShutdownCommand starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_ChrgCurrIsOORFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_ChrgCurrIsOORFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_ChargeCurrIsOOR.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_ChrgCurrIsOORFD11_CT2B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_ChargeCurrIsOOR.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_ChargeCurrIsOOR from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal VDCM_ChargeCurrIsOOR starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCMBattFullSOCprcFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCMBattFullSOCprcFD11_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_BattFullSOC_prc.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 18.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCMBattFullSOCprcFD11_CT2B_FUNC_ac_Test_1","18.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_BattFullSOC_prc.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_BattFullSOC_prc from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal VDCM_BattFullSOC_prc starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_WU_Timer_Value_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WU_Timer_Value_FD11_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.WU_Timer_Value.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 31063.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WU_Timer_Value_FD11_CT2B_FUNC_ac_Test_1","31063.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.WU_Timer_Value.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 65535.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_WU_Timer_Value_FD11_CT2B_FUNC_ac_Test_1","65535.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.WU_Timer_Value.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal WU_Timer_Value from the message HYBRID_SYSTEM_EPT1 in channel FD11", Testcase_description = "Check whether the signal WU_Timer_Value starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_EVEgyCap_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVEgyCap_FD11_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVEnergyCapacity.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 89930.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVEgyCap_FD11_CT2B_FUNC_ac_Test_1","89930.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVEnergyCapacity.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 131070.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVEgyCap_FD11_CT2B_FUNC_ac_Test_1","131070.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVEnergyCapacity.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVEnergyCapacity from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVEnergyCapacity starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_GearEngdForDispPTFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_GearEngdForDispPTFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.PT_SYSTEM_FD_1.GearEngagedForDisplay_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 21;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_GearEngdForDispPTFD11_CT2B_FUNC_ac_Test_1","21");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.PT_SYSTEM_FD_1.GearEngagedForDisplay_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GearEngagedForDisplay_PT from the message PT_SYSTEM_FD_1 in channel FD11", Testcase_description = "Check whether the signal GearEngagedForDisplay_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_ChrgnCmpl_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_ChrgnCmpl_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_ChargingComplete.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_ChrgnCmpl_FD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_ChargingComplete.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_ChargingComplete from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_ChargingComplete starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_DriveReady_PT_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DriveReady_PT_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.PT_SYSTEM_FD_1.DriveReady_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DriveReady_PT_FD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.PT_SYSTEM_FD_1.DriveReady_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DriveReady_PT from the message PT_SYSTEM_FD_1 in channel FD11", Testcase_description = "Check whether the signal DriveReady_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HCP_DC_Retry_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HCP_DC_Retry_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.HCP_DC_Retry.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HCP_DC_Retry_FD11_CT2B_FUNC_ac_Test_1","15");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.HCP_DC_Retry.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HCP_DC_Retry from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal HCP_DC_Retry starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_SOCIsOOR_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_SOCIsOOR_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_SOCIsOOR.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_SOCIsOOR_FD11_CT2B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_SOCIsOOR.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_SOCIsOOR from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal VDCM_SOCIsOOR starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMSEVMaxVLimit_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMSEVMaxVLimit_FD11_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVMax_V_Limit.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 607.3000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMSEVMaxVLimit_FD11_CT2B_FUNC_ac_Test_1","607.3000000000001");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVMax_V_Limit.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMSEVMaxVLimit_FD11_CT2B_FUNC_ac_Test_1","1638.2");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVMax_V_Limit.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVMax_V_Limit from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVMax_V_Limit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_GearEngagedForDisplay_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_GearEngagedForDisplay_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.TRANSM_FD_2.GearEngagedForDisplay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 7;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_GearEngagedForDisplay_CT2B_FUNC_ac_Test_1","7");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.TRANSM_FD_2.GearEngagedForDisplay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 30;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_GearEngagedForDisplay_CT2B_FUNC_ac_Test_1","30");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.TRANSM_FD_2.GearEngagedForDisplay.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GearEngagedForDisplay from the message TRANSM_FD_2 in channel FD11", Testcase_description = "Check whether the signal GearEngagedForDisplay starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_RdyToChrgSt_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_RdyToChrgSt_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_ReadyToChargeState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_RdyToChrgSt_FD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_ReadyToChargeState.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_ReadyToChargeState from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_ReadyToChargeState starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_GearEngaged_PT_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_GearEngaged_PT_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.PT_SYSTEM_FD_1.GearEngaged_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 9;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_GearEngaged_PT_FD11_CT2B_FUNC_ac_Test_1","9");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.PT_SYSTEM_FD_1.GearEngaged_PT.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GearEngaged_PT from the message PT_SYSTEM_FD_1 in channel FD11", Testcase_description = "Check whether the signal GearEngaged_PT starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_DischrgngSysStatusFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DischrgngSysStatusFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_DISPLAY2.DischargingSysStatus.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DischargingSysStatus from the message HYBRID_DISPLAY2 in channel FD11", Testcase_description = "Check whether the signal DischargingSysStatus starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_EVTarVolt_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVTarVolt_FD11_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVTargetVoltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1013.8000000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVTarVolt_FD11_CT2B_FUNC_ac_Test_1","1013.8000000000001");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVTargetVoltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1638.2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVTarVolt_FD11_CT2B_FUNC_ac_Test_1","1638.2");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVTargetVoltage.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVTargetVoltage from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVTargetVoltage starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_SelPmtOptn_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_SelPmtOptn_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_SelectedPaymentOptn.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_SelectedPaymentOptn from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_SelectedPaymentOptn starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_SelEgyTrfTypFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_SelEgyTrfTypFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_SelectedEnergyTransferType.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 14;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_SelEgyTrfTypFD11_CT2B_FUNC_ac_Test_1","14");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_SelectedEnergyTransferType.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_SelectedEnergyTransferType from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_SelectedEnergyTransferType starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_V2X_ModeRequest_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2X_ModeRequest_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.RPF_FD_3.V2X_ModeRequest.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 2;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2X_ModeRequest_CT2B_FUNC_ac_Test_1","2");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.RPF_FD_3.V2X_ModeRequest.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_V2X_ModeRequest_CT2B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.RPF_FD_3.V2X_ModeRequest.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal V2X_ModeRequest from the message RPF_FD_3 in channel FD11", Testcase_description = "Check whether the signal V2X_ModeRequest starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_EVMaxPLimit_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVMaxPLimit_FD11_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVMax_P_Limit.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 922515.1000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVMaxPLimit_FD11_CT2B_FUNC_ac_Test_1","922515.1000000001");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVMax_P_Limit.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1677721.4;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVMaxPLimit_FD11_CT2B_FUNC_ac_Test_1","1677721.4");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVMax_P_Limit.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVMax_P_Limit from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVMax_P_Limit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_PrplsnSysActive_10B_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PrplsnSysActive_10B_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.PropulsionSystemActive_10B.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_PrplsnSysActive_10B_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.PropulsionSystemActive_10B.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal PropulsionSystemActive_10B from the message HYBRID_SYSTEM_EPT1 in channel FD11", Testcase_description = "Check whether the signal PropulsionSystemActive_10B starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_EVMaxILimit_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -500.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVMaxILimit_FD11_CT2B_FUNC_ac_Test_1","-500.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVMax_I_Limit.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 240.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVMaxILimit_FD11_CT2B_FUNC_ac_Test_1","240.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVMax_I_Limit.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 522.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVMaxILimit_FD11_CT2B_FUNC_ac_Test_1","522.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVMax_I_Limit.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 29, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVMax_I_Limit from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVMax_I_Limit starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_EVErrorCode_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVErrorCode_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVErrorCode.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVErrorCode_FD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVErrorCode.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 30, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVErrorCode from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVErrorCode starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_BattUnderVoltFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_BattUnderVoltFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_BattUnderVolt.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_BattUnderVoltFD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_BattUnderVolt.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 31, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_BattUnderVolt from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal VDCM_BattUnderVolt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_EVRESS_SOC_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVRESS_SOC_FD11_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVRESS_SOC.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 86.76426000000001;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVRESS_SOC_FD11_CT2B_FUNC_ac_Test_1","86.76426000000001");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVRESS_SOC.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 99.97548;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVRESS_SOC_FD11_CT2B_FUNC_ac_Test_1","99.97548");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVRESS_SOC.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 32, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVRESS_SOC from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVRESS_SOC starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HCPSessionStopCmd_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HCPSessionStopCmd_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.HCP_SessionStopCmd.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HCPSessionStopCmd_FD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.HCP_SessionStopCmd.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 33, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HCP_SessionStopCmd from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal HCP_SessionStopCmd starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_EVTarCurr_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = -500.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVTarCurr_FD11_CT2B_FUNC_ac_Test_1","-500.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVTargetCurrent.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = -290.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVTarCurr_FD11_CT2B_FUNC_ac_Test_1","-290.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVTargetCurrent.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 522.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVTarCurr_FD11_CT2B_FUNC_ac_Test_1","522.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVTargetCurrent.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 34, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVTargetCurrent from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVTargetCurrent starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_BattOverVolt_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_BattOverVolt_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_BattOverVolt.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_BattOverVolt_FD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_BattOverVolt.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 35, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_BattOverVolt from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal VDCM_BattOverVolt starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_BattTempIsOORFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_BattTempIsOORFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_BattTempIsOOR.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 1;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_BattTempIsOORFD11_CT2B_FUNC_ac_Test_1","1");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_BattTempIsOOR.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 36, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_BattTempIsOOR from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal VDCM_BattTempIsOOR starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_SelServId_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_SelServId_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_SelectedServiceId.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 39379;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_SelServId_FD11_CT2B_FUNC_ac_Test_1","39379");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_SelectedServiceId.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 65535;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_SelServId_FD11_CT2B_FUNC_ac_Test_1","65535");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_SelectedServiceId.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 37, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_SelectedServiceId from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_SelectedServiceId starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_EVEgyReq_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVEgyReq_FD11_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVEnergyRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 122450.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_EVEgyReq_FD11_CT2B_FUNC_ac_Test_1","122450.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_EVEnergyRequest.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 38, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_EVEnergyRequest from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_EVEnergyRequest starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_VDCM_CellVoltIsOORFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_CellVoltIsOORFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_CellVoltIsOOR.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 3;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_VDCM_CellVoltIsOORFD11_CT2B_FUNC_ac_Test_1","3");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM2.VDCM_CellVoltIsOOR.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 39, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal VDCM_CellVoltIsOOR from the message VDCM_OBCM2 in channel FD11", Testcase_description = "Check whether the signal VDCM_CellVoltIsOOR starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_ServCtgy_FD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_ServCtgy_FD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_ServiceCategory.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 5;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_ServCtgy_FD11_CT2B_FUNC_ac_Test_1","5");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_ServiceCategory.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 40, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_ServiceCategory from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_ServiceCategory starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HVCMS_RmnTiToBuSOCFD11_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_RmnTiToBuSOCFD11_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_RemaningTimeToBulkSOC.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 45153;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_RmnTiToBuSOCFD11_CT2B_FUNC_ac_Test_1","45153");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_RemaningTimeToBulkSOC.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 65534;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HVCMS_RmnTiToBuSOCFD11_CT2B_FUNC_ac_Test_1","65534");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.VDCM_OBCM.HVCMS_RemaningTimeToBulkSOC.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 41, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HVCMS_RemaningTimeToBulkSOC from the message VDCM_OBCM in channel FD11", Testcase_description = "Check whether the signal HVCMS_RemaningTimeToBulkSOC starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_DCInputCurrentLimitV2X_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double Temp_Actual_Value = 0;
	double Temp_Input_Value = 0;

	Temp_Input_Value = 0.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DCInputCurrentLimitV2X_CT2B_FUNC_ac_Test_1","0.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.RPF_FD_3.DCInputCurrentLimit_V2X.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 15.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DCInputCurrentLimitV2X_CT2B_FUNC_ac_Test_1","15.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.RPF_FD_3.DCInputCurrentLimit_V2X.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}

	Temp_Input_Value = 63.0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_DCInputCurrentLimitV2X_CT2B_FUNC_ac_Test_1","63.0");
	Execution.Wait(2500);
	Temp_Actual_Value = NetworkDB.FD11.EVCU2.RPF_FD_3.DCInputCurrentLimit_V2X.Value;
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Math.Round(Temp_Actual_Value),Math.Round(Temp_Input_Value)))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 42, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal DCInputCurrentLimit_V2X from the message RPF_FD_3 in channel FD11", Testcase_description = "Check whether the signal DCInputCurrentLimit_V2X starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SendCANR_HybridDriveModeSts_CT2B_FUNC_ac_Test_1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	long Temp_Actual_Value = 0;
	long Temp_Input_Value = 0;

	Temp_Input_Value = 0;
	Report.TestCaseComment("Modifying the value to " + Temp_Input_Value);
	T32_CSharp_API.WriteVariableValue("SendCANR_HybridDriveModeSts_CT2B_FUNC_ac_Test_1","0");
	Execution.Wait(2500);
	Temp_Actual_Value = (long) (NetworkDB.FD11.EVCU2.HYBRID_SYSTEM_EPT1.HybridDriveModeSts.Value);
	Test_Input_Values = Test_Input_Values + "Input Test Data: " + Temp_Input_Value + "\n";
	Test_Actual_Values = Test_Actual_Values + "Actual Data: " + Temp_Actual_Value + "\n";
	if (!(T32_CSharp_API.Validate(Temp_Actual_Value,Temp_Input_Value))){
		Test_Result = "Fail";		Test_Remarks = Test_Remarks + "Failing for Input Test Data: " +  Temp_Input_Value + "\n";
	}
report.fields.Add(new Excel_Fields {Test_Case_ID = 43, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HybridDriveModeSts from the message HYBRID_SYSTEM_EPT1 in channel FD11", Testcase_description = "Check whether the signal HybridDriveModeSts starting from the CAN physical Layer is connected correctly till the ComAbs level.", Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values, Expected_output = Test_Input_Values.Replace("Input Test Data:","Expected Data: "),Actual_output = Test_Actual_Values,Test_result = Test_Result, Screenshots = "", Remarks = Test_Remarks });
}


[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Tx_Testing_FD11()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_Tx_FD11.xlsx";

	Test_Case_SendCANR_CPIM_Over_Temp_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_RmnTiToFuSOCFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_CPIM_Error_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PerWakeUp_Diag_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PtrainPrplsnActvPTFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_WeldCheck_CompleteFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_EVReady_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HCP_ShutdownCommand_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_ChrgCurrIsOORFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_VDCMBattFullSOCprcFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_WU_Timer_Value_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_EVEgyCap_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_GearEngdForDispPTFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_ChrgnCmpl_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_DriveReady_PT_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HCP_DC_Retry_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_SOCIsOOR_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMSEVMaxVLimit_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_GearEngagedForDisplay_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_RdyToChrgSt_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_GearEngaged_PT_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_DischrgngSysStatusFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_EVTarVolt_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_SelPmtOptn_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_SelEgyTrfTypFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_V2X_ModeRequest_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_EVMaxPLimit_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_PrplsnSysActive_10B_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_EVMaxILimit_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_EVErrorCode_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_BattUnderVoltFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_EVRESS_SOC_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HCPSessionStopCmd_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_EVTarCurr_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_BattOverVolt_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_BattTempIsOORFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_SelServId_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_EVEgyReq_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_VDCM_CellVoltIsOORFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_ServCtgy_FD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HVCMS_RmnTiToBuSOCFD11_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_DCInputCurrentLimitV2X_CT2B_FUNC_ac_Test_1(report);
	Test_Case_SendCANR_HybridDriveModeSts_CT2B_FUNC_ac_Test_1(report);
	report.Save_Excel(Report_Save_Path);


}

}
