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
public class AutomatedTestClass_Rx_FD16
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
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Voltage_P>(1022.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_DC_Voltage_P_MCPB_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=1023;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_DC_Voltage_P>(1023);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_DC_Voltage_P_MCPB_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_DC_Voltage_P_MCPB_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_DC_Voltage_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_DC_Voltage_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_PIM_DC_Side_Busbar_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_DC_Side_Busbar_Temp_P_SGCP_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_PIM_DC_Side_Busbar_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_DC_Side_Busbar_Temp_P_SGCP_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_DC_Side_Busbar_Temp_P_SGCP_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_PIM_DC_Side_Busbar_Temp_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_PIM_DC_Side_Busbar_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_PIM_AC_Side_Busbar_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_AC_Side_Busbar_Temp_P_SGCP_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_PIM_AC_Side_Busbar_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_AC_Side_Busbar_Temp_P_SGCP_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_PIM_AC_Side_Busbar_Temp_P_SGCP_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_PIM_AC_Side_Busbar_Temp_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_PIM_AC_Side_Busbar_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_Control_Board_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Control_Board_Temperature_P_SGCP_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_Control_Board_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Control_Board_Temperature_P_SGCP_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Control_Board_Temperature_P_SGCP_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_Control_Board_Temperature_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_Control_Board_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_CoolantTemp_P>(164.6);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_CoolantTemp_P_MCPA_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=2047;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_CoolantTemp_P>(2047);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_CoolantTemp_P_MCPA_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_CoolantTemp_P_MCPA_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_CoolantTemp_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_CoolantTemp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_Rotor_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Rotor_Temperature_P_MCPB_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_Rotor_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Rotor_Temperature_P_MCPB_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Rotor_Temperature_P_MCPB_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_Rotor_Temperature_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_Rotor_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_Inverter_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Inverter_Temp_P_MCPA_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_Inverter_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Inverter_Temp_P_MCPA_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Inverter_Temp_P_MCPA_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_Inverter_Temp_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_Inverter_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_PIM_DC_Side_Busbar_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_PIM_DC_Side_Busbar_Temp_P_MCPA_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_PIM_DC_Side_Busbar_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_PIM_DC_Side_Busbar_Temp_P_MCPA_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_PIM_DC_Side_Busbar_Temp_P_MCPA_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_PIM_DC_Side_Busbar_Temp_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_PIM_DC_Side_Busbar_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Voltage_P>(1022.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_DC_Voltage_P_SGCP_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=1023;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_DC_Voltage_P>(1023);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_DC_Voltage_P_SGCP_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_DC_Voltage_P_SGCP_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_DC_Voltage_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_DC_Voltage_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_Rotor_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Rotor_Temperature_P_SGCP_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_Rotor_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Rotor_Temperature_P_SGCP_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Rotor_Temperature_P_SGCP_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_Rotor_Temperature_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_Rotor_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_Inverter_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Inverter_Temp_P_MCPB_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_Inverter_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Inverter_Temp_P_MCPB_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Inverter_Temp_P_MCPB_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_Inverter_Temp_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_Inverter_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_Control_Board_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Control_Board_Temperature_P_MCPA_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_Control_Board_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Control_Board_Temperature_P_MCPA_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Control_Board_Temperature_P_MCPA_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_Control_Board_Temperature_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_Control_Board_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_Rotor_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Rotor_Temperature_P_MCPA_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_Rotor_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Rotor_Temperature_P_MCPA_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_Rotor_Temperature_P_MCPA_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_Rotor_Temperature_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_Rotor_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_Control_Board_Temperature_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Control_Board_Temperature_P_MCPB_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_Control_Board_Temperature_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Control_Board_Temperature_P_MCPB_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_Control_Board_Temperature_P_MCPB_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_Control_Board_Temperature_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_Control_Board_Temperature_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_Inverter_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Inverter_Temp_P_SGCP_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_Inverter_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Inverter_Temp_P_SGCP_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_Inverter_Temp_P_SGCP_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_Inverter_Temp_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_Inverter_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_CoolantTemp_P>(164.6);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_CoolantTemp_P_SGCP_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=2047;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.SGCP.SGCP_STATUS.SGCP_CoolantTemp_P>(2047);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_CoolantTemp_P_SGCP_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_SGCP_CoolantTemp_P_SGCP_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal SGCP_CoolantTemp_P from the message SGCP_STATUS in channel FD16", Testcase_description = "Check whether the signal SGCP_CoolantTemp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_CoolantTemp_P>(164.6);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_CoolantTemp_P_MCPB_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=2047;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_CoolantTemp_P>(2047);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_CoolantTemp_P_MCPB_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_CoolantTemp_P_MCPB_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_CoolantTemp_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_CoolantTemp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_PIM_DC_Side_Busbar_Temp_P>(214.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_PIM_DC_Side_Busbar_Temp_P_MCPB_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPB.MCPB_STATUS.MCPB_PIM_DC_Side_Busbar_Temp_P>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_PIM_DC_Side_Busbar_Temp_P_MCPB_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPB_PIM_DC_Side_Busbar_Temp_P_MCPB_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPB_PIM_DC_Side_Busbar_Temp_P from the message MCPB_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPB_PIM_DC_Side_Busbar_Temp_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
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
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Voltage_P>(1022.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_DC_Voltage_P_MCPA_STATUS_FD16")),2);
        Canoe_Input_Value_Phys=1023;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD16.MCPA.MCPA_STATUS.MCPA_DC_Voltage_P>(1023);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_DC_Voltage_P_MCPA_STATUS_FD16")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_MCPA_DC_Voltage_P_MCPA_STATUS_FD16_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal MCPA_DC_Voltage_P from the message MCPA_STATUS in channel FD16", Testcase_description = "Check whether the signal MCPA_DC_Voltage_P starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Testing_Rx_FD16()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_FD16.xlsx";

	Test_Case_MCPB_DC_Voltage_P(report);
	Test_Case_SGCP_PIM_DC_Side_Busbar_Temp_P(report);
	Test_Case_SGCP_PIM_AC_Side_Busbar_Temp_P(report);
	Test_Case_SGCP_Control_Board_Temperature_P(report);
	Test_Case_MCPA_CoolantTemp_P(report);
	Test_Case_MCPB_Rotor_Temperature_P(report);
	Test_Case_MCPA_Inverter_Temp_P(report);
	Test_Case_MCPA_PIM_DC_Side_Busbar_Temp_P(report);
	Test_Case_SGCP_DC_Voltage_P(report);
	Test_Case_SGCP_Rotor_Temperature_P(report);
	Test_Case_MCPB_Inverter_Temp_P(report);
	Test_Case_MCPA_Control_Board_Temperature_P(report);
	Test_Case_MCPA_Rotor_Temperature_P(report);
	Test_Case_MCPB_Control_Board_Temperature_P(report);
	Test_Case_SGCP_Inverter_Temp_P(report);
	Test_Case_SGCP_CoolantTemp_P(report);
	Test_Case_MCPB_CoolantTemp_P(report);
	Test_Case_MCPB_PIM_DC_Side_Busbar_Temp_P(report);
	Test_Case_MCPA_DC_Voltage_P(report);
	report.Save_Excel(Report_Save_Path);


}

}
