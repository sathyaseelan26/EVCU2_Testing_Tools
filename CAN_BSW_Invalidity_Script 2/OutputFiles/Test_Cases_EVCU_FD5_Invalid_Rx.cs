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
public class AutomatedTestClass_Rx_FD5
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
        SetSignal<NetworkDB.FD5.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp3_DUALCHARGER_THERMAL_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.DUALCHARGER_THERMAL.OBC_Temp3>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp3_DUALCHARGER_THERMAL_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp3_DUALCHARGER_THERMAL_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp3 from the message DUALCHARGER_THERMAL in channel FD5", Testcase_description = "Check whether the signal OBC_Temp3 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPA_Rotor_Temperature_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_Rotor_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Rotor_Temperature_P_MCPA_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_Rotor_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Rotor_Temperature_P_MCPA_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Rotor_Temperature_P_MCPA_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_Rotor_Temperature_P from the message MCPA_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPA_Rotor_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD5.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp2_DUALCHARGER_THERMAL_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.DUALCHARGER_THERMAL.OBC_Temp2>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp2_DUALCHARGER_THERMAL_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp2_DUALCHARGER_THERMAL_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp2 from the message DUALCHARGER_THERMAL in channel FD5", Testcase_description = "Check whether the signal OBC_Temp2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_FaultReason(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 126.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_FaultReason>(126.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_FaultReason_HV_CHARGER2_FD5")),2);
        Canoe_Input_Value_Phys=127;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_FaultReason>(127);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_FaultReason_HV_CHARGER2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_FaultReason_HV_CHARGER2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_FaultReason from the message HV_CHARGER2 in channel FD5", Testcase_description = "Check whether the signal OBC_FaultReason starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD5.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp1_DUALCHARGER_THERMAL_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.DUALCHARGER_THERMAL.OBC_Temp1>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp1_DUALCHARGER_THERMAL_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp1_DUALCHARGER_THERMAL_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp1 from the message DUALCHARGER_THERMAL in channel FD5", Testcase_description = "Check whether the signal OBC_Temp1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_ChargeTimeMin(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 65534.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_ChargeTimeMin>(65534.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_ChargeTimeMin_HV_CHARGER2_FD5")),2);
        Canoe_Input_Value_Phys=65535;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_ChargeTimeMin>(65535);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_ChargeTimeMin_HV_CHARGER2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_ChargeTimeMin_HV_CHARGER2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_ChargeTimeMin from the message HV_CHARGER2 in channel FD5", Testcase_description = "Check whether the signal OBC_ChargeTimeMin starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPB_Rotor_Temperature_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_Rotor_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Rotor_Temperature_P_MCPB_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_Rotor_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Rotor_Temperature_P_MCPB_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Rotor_Temperature_P_MCPB_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_Rotor_Temperature_P from the message MCPB_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPB_Rotor_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_ChargeTimeSec(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 196602.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_ChargeTimeSec>(196602.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_ChargeTimeSec_HV_CHARGER2_FD5")),2);
        Canoe_Input_Value_Phys=65535;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_ChargeTimeSec>(65535);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_ChargeTimeSec_HV_CHARGER2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_ChargeTimeSec_HV_CHARGER2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_ChargeTimeSec from the message HV_CHARGER2 in channel FD5", Testcase_description = "Check whether the signal OBC_ChargeTimeSec starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SGCP_PIM_AC_Side_Busbar_Temp_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_PIM_AC_Side_Busbar_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_AC_Side_Busbar_Temp_P_SGCP_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_PIM_AC_Side_Busbar_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_AC_Side_Busbar_Temp_P_SGCP_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_AC_Side_Busbar_Temp_P_SGCP_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_PIM_AC_Side_Busbar_Temp_P from the message SGCP_STATUS in channel FD5", Testcase_description = "Check whether the signal SGCP_PIM_AC_Side_Busbar_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPA_CoolantTemp_P(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 164.6;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_CoolantTemp_P>(164.6);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_CoolantTemp_P_MCPA_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=2047;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_CoolantTemp_P>(2047);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_CoolantTemp_P_MCPA_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_CoolantTemp_P_MCPA_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_CoolantTemp_P from the message MCPA_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPA_CoolantTemp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_IdleTimeMin(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 65534.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_IdleTimeMin>(65534.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_IdleTimeMin_HV_CHARGER2_FD5")),2);
        Canoe_Input_Value_Phys=65535;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_IdleTimeMin>(65535);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_IdleTimeMin_HV_CHARGER2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_IdleTimeMin_HV_CHARGER2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_IdleTimeMin from the message HV_CHARGER2 in channel FD5", Testcase_description = "Check whether the signal OBC_IdleTimeMin starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OBC_IdleTimeSec(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 196602.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_IdleTimeSec>(196602.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_IdleTimeSec_HV_CHARGER2_FD5")),2);
        Canoe_Input_Value_Phys=65535;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OBC_IdleTimeSec>(65535);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_IdleTimeSec_HV_CHARGER2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_IdleTimeSec_HV_CHARGER2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_IdleTimeSec from the message HV_CHARGER2 in channel FD5", Testcase_description = "Check whether the signal OBC_IdleTimeSec starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPB_PIM_DC_Side_Busbar_Temp_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_PIM_DC_Side_Busbar_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_PIM_DC_Side_Busbar_Temp_P_MCPB_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_PIM_DC_Side_Busbar_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_PIM_DC_Side_Busbar_Temp_P_MCPB_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_PIM_DC_Side_Busbar_Temp_P_MCPB_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_PIM_DC_Side_Busbar_Temp_P from the message MCPB_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPB_PIM_DC_Side_Busbar_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPA_Control_Board_Temperature_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_Control_Board_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Control_Board_Temperature_P_MCPA_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_Control_Board_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Control_Board_Temperature_P_MCPA_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Control_Board_Temperature_P_MCPA_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_Control_Board_Temperature_P from the message MCPA_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPA_Control_Board_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPB_Control_Board_Temperature_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_Control_Board_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Control_Board_Temperature_P_MCPB_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_Control_Board_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Control_Board_Temperature_P_MCPB_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Control_Board_Temperature_P_MCPB_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_Control_Board_Temperature_P from the message MCPB_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPB_Control_Board_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPA_Inverter_Temp_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_Inverter_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Inverter_Temp_P_MCPA_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_Inverter_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Inverter_Temp_P_MCPA_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Inverter_Temp_P_MCPA_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_Inverter_Temp_P from the message MCPA_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPA_Inverter_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SGCP_Control_Board_Temperature_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_Control_Board_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Control_Board_Temperature_P_SGCP_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_Control_Board_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Control_Board_Temperature_P_SGCP_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Control_Board_Temperature_P_SGCP_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_Control_Board_Temperature_P from the message SGCP_STATUS in channel FD5", Testcase_description = "Check whether the signal SGCP_Control_Board_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SGCP_Inverter_Temp_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_Inverter_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Inverter_Temp_P_SGCP_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_Inverter_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Inverter_Temp_P_SGCP_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Inverter_Temp_P_SGCP_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_Inverter_Temp_P from the message SGCP_STATUS in channel FD5", Testcase_description = "Check whether the signal SGCP_Inverter_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPB_CoolantTemp_P(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 164.6;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_CoolantTemp_P>(164.6);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_CoolantTemp_P_MCPB_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=2047;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_CoolantTemp_P>(2047);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_CoolantTemp_P_MCPB_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_CoolantTemp_P_MCPB_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_CoolantTemp_P from the message MCPB_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPB_CoolantTemp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ChrgFailSts(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.ChrgFailSts>(6.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ChrgFailSts_HV_CHARGER2_FD5")),2);
        Canoe_Input_Value_Phys=7;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.ChrgFailSts>(7);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ChrgFailSts_HV_CHARGER2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ChrgFailSts_HV_CHARGER2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ChrgFailSts from the message HV_CHARGER2 in channel FD5", Testcase_description = "Check whether the signal ChrgFailSts starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Charging_WHr(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 65534.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.Charging_WHr>(65534.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Charging_WHr_HV_CHARGER2_FD5")),2);
        Canoe_Input_Value_Phys=65535;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.Charging_WHr>(65535);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Charging_WHr_HV_CHARGER2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Charging_WHr_HV_CHARGER2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Charging_WHr from the message HV_CHARGER2 in channel FD5", Testcase_description = "Check whether the signal Charging_WHr starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPB_DC_Voltage_P(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 1022.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_DC_Voltage_P>(1022.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_DC_Voltage_P_MCPB_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=1023;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_DC_Voltage_P>(1023);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_DC_Voltage_P_MCPB_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_DC_Voltage_P_MCPB_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DC_Voltage_P from the message MCPB_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPB_DC_Voltage_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_OnboardChargerReady(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OnboardChargerReady>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OnboardChargerReady_HV_CHARGER2_FD5")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.OnboardChargerReady>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OnboardChargerReady_HV_CHARGER2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OnboardChargerReady_HV_CHARGER2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OnboardChargerReady from the message HV_CHARGER2 in channel FD5", Testcase_description = "Check whether the signal OnboardChargerReady starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SGCP_CoolantTemp_P(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 164.6;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_CoolantTemp_P>(164.6);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_CoolantTemp_P_SGCP_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=2047;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_CoolantTemp_P>(2047);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_CoolantTemp_P_SGCP_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_CoolantTemp_P_SGCP_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_CoolantTemp_P from the message SGCP_STATUS in channel FD5", Testcase_description = "Check whether the signal SGCP_CoolantTemp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPB_Inverter_Temp_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_Inverter_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Inverter_Temp_P_MCPB_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPB.MCPB_STATUS.MCPB_Inverter_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Inverter_Temp_P_MCPB_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Inverter_Temp_P_MCPB_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_Inverter_Temp_P from the message MCPB_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPB_Inverter_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD5.BPCM.BATTERY_HV2.BMS_HV_SOC_AccuracySts>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_BMS_HV_SOC_AccuracySts_BATTERY_HV2_FD5")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.BPCM.BATTERY_HV2.BMS_HV_SOC_AccuracySts>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_BMS_HV_SOC_AccuracySts_BATTERY_HV2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_BMS_HV_SOC_AccuracySts_BATTERY_HV2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal BMS_HV_SOC_AccuracySts from the message BATTERY_HV2 in channel FD5", Testcase_description = "Check whether the signal BMS_HV_SOC_AccuracySts starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ACplug_PwrMax(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 32767.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.ACplug_PwrMax>(32767.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ACplug_PwrMax_HV_CHARGER2_FD5")),2);
        Canoe_Input_Value_Phys=65535;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.HV_CHARGER2.ACplug_PwrMax>(65535);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ACplug_PwrMax_HV_CHARGER2_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ACplug_PwrMax_HV_CHARGER2_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ACplug_PwrMax from the message HV_CHARGER2 in channel FD5", Testcase_description = "Check whether the signal ACplug_PwrMax starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SGCP_DC_Voltage_P(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 1022.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_DC_Voltage_P>(1022.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_DC_Voltage_P_SGCP_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=1023;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_DC_Voltage_P>(1023);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_DC_Voltage_P_SGCP_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_DC_Voltage_P_SGCP_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_DC_Voltage_P from the message SGCP_STATUS in channel FD5", Testcase_description = "Check whether the signal SGCP_DC_Voltage_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SGCP_PIM_DC_Side_Busbar_Temp_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_PIM_DC_Side_Busbar_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_DC_Side_Busbar_Temp_P_SGCP_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_PIM_DC_Side_Busbar_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_DC_Side_Busbar_Temp_P_SGCP_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_DC_Side_Busbar_Temp_P_SGCP_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =29, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_PIM_DC_Side_Busbar_Temp_P from the message SGCP_STATUS in channel FD5", Testcase_description = "Check whether the signal SGCP_PIM_DC_Side_Busbar_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPA_DC_Voltage_P(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 1022.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_DC_Voltage_P>(1022.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_DC_Voltage_P_MCPA_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=1023;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_DC_Voltage_P>(1023);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_DC_Voltage_P_MCPA_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_DC_Voltage_P_MCPA_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =30, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DC_Voltage_P from the message MCPA_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPA_DC_Voltage_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD5.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp4_DUALCHARGER_THERMAL_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.IDCM.DUALCHARGER_THERMAL.OBC_Temp4>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp4_DUALCHARGER_THERMAL_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_OBC_Temp4_DUALCHARGER_THERMAL_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =31, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal OBC_Temp4 from the message DUALCHARGER_THERMAL in channel FD5", Testcase_description = "Check whether the signal OBC_Temp4 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_SGCP_Rotor_Temperature_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_Rotor_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Rotor_Temperature_P_SGCP_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.SGCP.SGCP_STATUS.SGCP_Rotor_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Rotor_Temperature_P_SGCP_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Rotor_Temperature_P_SGCP_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =32, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_Rotor_Temperature_P from the message SGCP_STATUS in channel FD5", Testcase_description = "Check whether the signal SGCP_Rotor_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_MCPA_PIM_DC_Side_Busbar_Temp_P(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_PIM_DC_Side_Busbar_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_PIM_DC_Side_Busbar_Temp_P_MCPA_STATUS_FD5")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD5.MCPA.MCPA_STATUS.MCPA_PIM_DC_Side_Busbar_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_PIM_DC_Side_Busbar_Temp_P_MCPA_STATUS_FD5")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_PIM_DC_Side_Busbar_Temp_P_MCPA_STATUS_FD5_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =33, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_PIM_DC_Side_Busbar_Temp_P from the message MCPA_STATUS in channel FD5", Testcase_description = "Check whether the signal MCPA_PIM_DC_Side_Busbar_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Testing_Rx_FD5()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_FD5.xlsx";

	Test_Case_OBC_Temp3(report);
	Test_Case_MCPA_Rotor_Temperature_P(report);
	Test_Case_OBC_Temp2(report);
	Test_Case_OBC_FaultReason(report);
	Test_Case_OBC_Temp1(report);
	Test_Case_OBC_ChargeTimeMin(report);
	Test_Case_MCPB_Rotor_Temperature_P(report);
	Test_Case_OBC_ChargeTimeSec(report);
	Test_Case_SGCP_PIM_AC_Side_Busbar_Temp_P(report);
	Test_Case_MCPA_CoolantTemp_P(report);
	Test_Case_OBC_IdleTimeMin(report);
	Test_Case_OBC_IdleTimeSec(report);
	Test_Case_MCPB_PIM_DC_Side_Busbar_Temp_P(report);
	Test_Case_MCPA_Control_Board_Temperature_P(report);
	Test_Case_MCPB_Control_Board_Temperature_P(report);
	Test_Case_MCPA_Inverter_Temp_P(report);
	Test_Case_SGCP_Control_Board_Temperature_P(report);
	Test_Case_SGCP_Inverter_Temp_P(report);
	Test_Case_MCPB_CoolantTemp_P(report);
	Test_Case_ChrgFailSts(report);
	Test_Case_Charging_WHr(report);
	Test_Case_MCPB_DC_Voltage_P(report);
	Test_Case_OnboardChargerReady(report);
	Test_Case_SGCP_CoolantTemp_P(report);
	Test_Case_MCPB_Inverter_Temp_P(report);
	Test_Case_BMS_HV_SOC_AccuracySts(report);
	Test_Case_ACplug_PwrMax(report);
	Test_Case_SGCP_DC_Voltage_P(report);
	Test_Case_SGCP_PIM_DC_Side_Busbar_Temp_P(report);
	Test_Case_MCPA_DC_Voltage_P(report);
	Test_Case_OBC_Temp4(report);
	Test_Case_SGCP_Rotor_Temperature_P(report);
	Test_Case_MCPA_PIM_DC_Side_Busbar_Temp_P(report);
	report.Save_Excel(Report_Save_Path);


}

}
