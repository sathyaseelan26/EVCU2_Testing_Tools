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
public class AutomatedTestClass_Rx_FD11
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
public static void Test_Case_EVSE_CHAdeMOProtocol(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double MAX_Input_Value_Raw = 0;
	double Canoe_Input_Value_Phys = 0;
	double SNA_Actual_Value_RAW = 0;
	double Status_Input_Value = 1;
	double Status_Actual_Value = 0;

        Canoe_Input_Value_Phys= 6.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_CHAdeMOProtocol>(6.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_EVSE_CHAdeMOProtocol_IDCM_CHADEMO_STATUS1_FD11")),2);
        Canoe_Input_Value_Phys=7;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.IDCM_CHADEMO_STATUS1.EVSE_CHAdeMOProtocol>(7);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_EVSE_CHAdeMOProtocol_IDCM_CHADEMO_STATUS1_FD11")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_EVSE_CHAdeMOProtocol_IDCM_CHADEMO_STATUS1_FD11_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal EVSE_CHAdeMOProtocol from the message IDCM_CHADEMO_STATUS1 in channel FD11", Testcase_description = "Check whether the signal EVSE_CHAdeMOProtocol starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_Temp1(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double MAX_Input_Value_Raw = 0;
	double Canoe_Input_Value_Phys = 0;
	double SNA_Actual_Value_RAW = 0;
	double Status_Input_Value = 1;
	double Status_Actual_Value = 0;

        Canoe_Input_Value_Phys= 214.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp1_DUALCHARGER_THERMAL_FD11")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp1_DUALCHARGER_THERMAL_FD11")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp1_DUALCHARGER_THERMAL_FD11_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp1 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_Temp3(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double MAX_Input_Value_Raw = 0;
	double Canoe_Input_Value_Phys = 0;
	double SNA_Actual_Value_RAW = 0;
	double Status_Input_Value = 1;
	double Status_Actual_Value = 0;

        Canoe_Input_Value_Phys= 214.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp3_DUALCHARGER_THERMAL_FD11")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp3_DUALCHARGER_THERMAL_FD11")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp3_DUALCHARGER_THERMAL_FD11_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp3 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp3 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_BMS_HV_SOC_AccuracySts(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double MAX_Input_Value_Raw = 0;
	double Canoe_Input_Value_Phys = 0;
	double SNA_Actual_Value_RAW = 0;
	double Status_Input_Value = 1;
	double Status_Actual_Value = 0;

        Canoe_Input_Value_Phys= 2.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_AccuracySts>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_BMS_HV_SOC_AccuracySts_BATTERY_HV2_FD11")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.BPCM.BATTERY_HV2.BMS_HV_SOC_AccuracySts>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_BMS_HV_SOC_AccuracySts_BATTERY_HV2_FD11")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_BMS_HV_SOC_AccuracySts_BATTERY_HV2_FD11_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BMS_HV_SOC_AccuracySts from the message BATTERY_HV2 in channel FD11", Testcase_description = "Check whether the signal BMS_HV_SOC_AccuracySts starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_Temp2(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double MAX_Input_Value_Raw = 0;
	double Canoe_Input_Value_Phys = 0;
	double SNA_Actual_Value_RAW = 0;
	double Status_Input_Value = 1;
	double Status_Actual_Value = 0;

        Canoe_Input_Value_Phys= 214.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp2_DUALCHARGER_THERMAL_FD11")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp2_DUALCHARGER_THERMAL_FD11")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp2_DUALCHARGER_THERMAL_FD11_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp2 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_Temp4(Test_MSExcel_Report report)
{
	string Test_Input_Values = "";
	string Test_Actual_Values = "";
	string Test_Result = "Pass";
	string Test_Remarks = "";
	double MAX_Input_Value_Raw = 0;
	double Canoe_Input_Value_Phys = 0;
	double SNA_Actual_Value_RAW = 0;
	double Status_Input_Value = 1;
	double Status_Actual_Value = 0;

        Canoe_Input_Value_Phys= 214.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp4_DUALCHARGER_THERMAL_FD11")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD11.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp4_DUALCHARGER_THERMAL_FD11")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp4_DUALCHARGER_THERMAL_FD11_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp4 from the message DUALCHARGER_THERMAL in channel FD11", Testcase_description = "Check whether the signal OBC_Temp4 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Testing_Rx_FD11()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_FD11.xlsx";

	Test_Case_EVSE_CHAdeMOProtocol(report);
	Test_Case_OBC_Temp1(report);
	Test_Case_OBC_Temp3(report);
	Test_Case_BMS_HV_SOC_AccuracySts(report);
	Test_Case_OBC_Temp2(report);
	Test_Case_OBC_Temp4(report);
	report.Save_Excel(Report_Save_Path);


}

}
