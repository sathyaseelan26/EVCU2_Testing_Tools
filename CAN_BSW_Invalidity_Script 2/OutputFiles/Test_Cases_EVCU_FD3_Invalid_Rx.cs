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
public class AutomatedTestClass_Rx_FD3
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
public static void Test_Case_End_Time_Hr1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 23.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr1>(23.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Hr1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr1>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Hr1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Hr1_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =1, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Hr1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_End_Time_Hr2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 23.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr2>(23.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Hr2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Hr2>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Hr2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Hr2_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =2, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Hr2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Start_Time_Min1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 55.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min1>(55.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Min1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min1>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Min1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Min1_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =3, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Min1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Start_Time_Hr2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 23.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr2>(23.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Hr2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr2>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Hr2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Hr2_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =4, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Hr2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_ClimateSchd2_Day(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 254.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Day>(254.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd2_Day_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Day>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd2_Day_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd2_Day_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =5, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd2_Day from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd2_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_Schedule_Day1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 254.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Schedule_Day1>(254.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Schedule_Day1_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Schedule_Day1>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Schedule_Day1_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Schedule_Day1_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =6, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Schedule_Day1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Schedule_Day1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_End_Time_Min1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 55.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min1>(55.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Min1_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min1>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Min1_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Min1_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =7, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Min1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ClimateSchd1_Departure_Min(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 70.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Min>(70.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd1_Departure_Min_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Min>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd1_Departure_Min_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd1_Departure_Min_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =8, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd1_Departure_Min from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd1_Departure_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_End_Time_Hr1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 23.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr1>(23.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Hr1_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr1>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Hr1_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Hr1_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =9, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Hr1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Climate_Cabin_Temp2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 30.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp2>(30.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_Cabin_Temp2_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp2>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_Cabin_Temp2_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_Cabin_Temp2_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =10, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_Cabin_Temp2 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Climate_Cabin_Temp2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_ClimateSchd1_Departure_Min(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 70.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Min>(70.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd1_Departure_Min_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Min>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd1_Departure_Min_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd1_Departure_Min_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =11, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd1_Departure_Min from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd1_Departure_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ClimateSchd2_Day(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 254.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Day>(254.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd2_Day_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Day>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd2_Day_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd2_Day_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =12, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd2_Day from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd2_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Climate_Cabin_Temp1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 30.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp1>(30.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_Cabin_Temp1_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.Climate_Cabin_Temp1>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_Cabin_Temp1_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_Cabin_Temp1_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =13, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_Cabin_Temp1 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Climate_Cabin_Temp1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_Start_Time_Hr1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 23.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr1>(23.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Hr1_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr1>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Hr1_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Hr1_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =14, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Hr1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Start_Time_Min2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 55.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min2>(55.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Min2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Min2>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Min2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Min2_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =15, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Min2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ClimateSchd1_Day(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 254.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Day>(254.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd1_Day_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Day>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd1_Day_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd1_Day_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =16, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd1_Day from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd1_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_ClimateSchd2_Departure_Min(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 70.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Min>(70.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd2_Departure_Min_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Min>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd2_Departure_Min_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd2_Departure_Min_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =17, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd2_Departure_Min from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd2_Departure_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_End_Time_Min2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 55.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min2>(55.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Min2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min2>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Min2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Min2_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =18, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Min2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_HAS_TelltaleSts(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD3.ADCAM.ADAS_FD_HMI.HAS_TelltaleSts>(6.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_HAS_TelltaleSts_ADAS_FD_HMI_FD3")),2);
        Canoe_Input_Value_Phys=7;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.ADCAM.ADAS_FD_HMI.HAS_TelltaleSts>(7);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_HAS_TelltaleSts_ADAS_FD_HMI_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_HAS_TelltaleSts_ADAS_FD_HMI_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =19, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal HAS_TelltaleSts from the message ADAS_FD_HMI in channel FD3", Testcase_description = "Check whether the signal HAS_TelltaleSts starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ClimateSchd1_Departure_Hr(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 30.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Hr>(30.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd1_Departure_Hr_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd1_Departure_Hr>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd1_Departure_Hr_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd1_Departure_Hr_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =20, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd1_Departure_Hr from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd1_Departure_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Schedule_Day1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 254.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Schedule_Day1>(254.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Schedule_Day1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Schedule_Day1>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Schedule_Day1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Schedule_Day1_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =21, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Schedule_Day1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Schedule_Day1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_Start_Time_Min1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 55.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min1>(55.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Min1_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min1>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Min1_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Min1_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =22, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Min1 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ClimateSchd2_Departure_Hr(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 30.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Hr>(30.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd2_Departure_Hr_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Hr>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd2_Departure_Hr_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd2_Departure_Hr_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =23, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd2_Departure_Hr from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd2_Departure_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_ClimateSchd2_Departure_Min(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 70.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Min>(70.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd2_Departure_Min_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.ClimateSchd2_Departure_Min>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd2_Departure_Min_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_ClimateSchd2_Departure_Min_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =24, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal ClimateSchd2_Departure_Min from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal ClimateSchd2_Departure_Min starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Climate_TBM_Cabin_Temp2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 30.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp2>(30.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_TBM_Cabin_Temp2_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp2>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_TBM_Cabin_Temp2_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_TBM_Cabin_Temp2_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =25, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_TBM_Cabin_Temp2 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal Climate_TBM_Cabin_Temp2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_Start_Time_Min2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 55.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min2>(55.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Min2_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Min2>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Min2_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Min2_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =26, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Min2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_ClimateSchd1_Departure_Hr(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 30.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Hr>(30.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd1_Departure_Hr_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Departure_Hr>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd1_Departure_Hr_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd1_Departure_Hr_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =27, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd1_Departure_Hr from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd1_Departure_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Trns_DrvMdReq(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 14.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_14.Trns_DrvMdReq>(14.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Trns_DrvMdReq_TELEMATIC_FD_14_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_14.Trns_DrvMdReq>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Trns_DrvMdReq_TELEMATIC_FD_14_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Trns_DrvMdReq_TELEMATIC_FD_14_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =28, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Trns_DrvMdReq from the message TELEMATIC_FD_14 in channel FD3", Testcase_description = "Check whether the signal Trns_DrvMdReq starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Schedule_Day2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 254.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Schedule_Day2>(254.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Schedule_Day2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Schedule_Day2>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Schedule_Day2_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Schedule_Day2_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =29, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Schedule_Day2 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Schedule_Day2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_ClimateSchd1_Day(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 254.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Day>(254.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd1_Day_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd1_Day>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd1_Day_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd1_Day_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =30, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd1_Day from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd1_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_Start_Time_Hr2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 23.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr2>(23.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Hr2_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Start_Time_Hr2>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Hr2_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Start_Time_Hr2_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =31, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Start_Time_Hr2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Start_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Climate_TBM_Cabin_Temp1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 30.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp1>(30.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_TBM_Cabin_Temp1_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.Climate_TBM_Cabin_Temp1>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_TBM_Cabin_Temp1_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Climate_TBM_Cabin_Temp1_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =32, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Climate_TBM_Cabin_Temp1 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal Climate_TBM_Cabin_Temp1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_End_Time_Hr2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 23.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr2>(23.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Hr2_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Hr2>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Hr2_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Hr2_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =33, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Hr2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Hr2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_AllowClimateSchd1(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_AllowClimateSchd1>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_AllowClimateSchd1_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_AllowClimateSchd1>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_AllowClimateSchd1_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_AllowClimateSchd1_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =34, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_AllowClimateSchd1 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_AllowClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_AllowClimateSchd1(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.AllowClimateSchd1>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_AllowClimateSchd1_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.AllowClimateSchd1>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_AllowClimateSchd1_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_AllowClimateSchd1_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =35, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AllowClimateSchd1 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal AllowClimateSchd1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_End_Time_Min1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 55.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min1>(55.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Min1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.End_Time_Min1>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Min1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_End_Time_Min1_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =36, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal End_Time_Min1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal End_Time_Min1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_GPS_Date_Month(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 12.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Month>(12.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_Date_Month_TELEMATIC_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Month>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_Date_Month_TELEMATIC_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_Date_Month_TELEMATIC_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =37, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_Date_Month from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_Date_Month starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_GPS_Date_Day(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 31.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Day>(31.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_Date_Day_TELEMATIC_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Day>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_Date_Day_TELEMATIC_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_Date_Day_TELEMATIC_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =38, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_Date_Day from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_Date_Day starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_Cooperative_Charge_Command(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD3.SGW.TBM_COOP_CHARGING.TBM_Cooperative_Charge_Command>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Cooperative_Charge_Command_TBM_COOP_CHARGING_FD3")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_COOP_CHARGING.TBM_Cooperative_Charge_Command>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Cooperative_Charge_Command_TBM_COOP_CHARGING_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Cooperative_Charge_Command_TBM_COOP_CHARGING_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =39, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Cooperative_Charge_Command from the message TBM_COOP_CHARGING in channel FD3", Testcase_description = "Check whether the signal TBM_Cooperative_Charge_Command starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_GPS_UTC_Minute(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 59.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Minute>(59.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_UTC_Minute_TELEMATIC_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Minute>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_UTC_Minute_TELEMATIC_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_UTC_Minute_TELEMATIC_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =40, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_UTC_Minute from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_UTC_Minute starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_GPS_UTC_Hour(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 23.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Hour>(23.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_UTC_Hour_TELEMATIC_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Hour>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_UTC_Hour_TELEMATIC_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_UTC_Hour_TELEMATIC_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =41, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_UTC_Hour from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_UTC_Hour starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_GPS_Date_Year(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Year>(65534.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_Date_Year_TELEMATIC_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=65535;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_Date_Year>(65535);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_Date_Year_TELEMATIC_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_Date_Year_TELEMATIC_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =42, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_Date_Year from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_Date_Year starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_AUD_LVL(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 38.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_13.AUD_LVL>(38.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_AUD_LVL_TELEMATIC_FD_13_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_13.AUD_LVL>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_AUD_LVL_TELEMATIC_FD_13_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_AUD_LVL_TELEMATIC_FD_13_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =43, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AUD_LVL from the message TELEMATIC_FD_13 in channel FD3", Testcase_description = "Check whether the signal AUD_LVL starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_GPS_UTC_Second(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 59.99;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Second>(59.99);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_UTC_Second_TELEMATIC_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=65535;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TELEMATIC_FD_1.GPS_UTC_Second>(65535);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_UTC_Second_TELEMATIC_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_GPS_UTC_Second_TELEMATIC_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =44, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal GPS_UTC_Second from the message TELEMATIC_FD_1 in channel FD3", Testcase_description = "Check whether the signal GPS_UTC_Second starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Remote_Chargeport_Command(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD3.SGW.TBM_COOP_CHARGING.Remote_Chargeport_Command>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Remote_Chargeport_Command_TBM_COOP_CHARGING_FD3")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_COOP_CHARGING.Remote_Chargeport_Command>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Remote_Chargeport_Command_TBM_COOP_CHARGING_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Remote_Chargeport_Command_TBM_COOP_CHARGING_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =45, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Remote_Chargeport_Command from the message TBM_COOP_CHARGING in channel FD3", Testcase_description = "Check whether the signal Remote_Chargeport_Command starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_AllowClimateSchd2(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.AllowClimateSchd2>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_AllowClimateSchd2_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_HU1.AllowClimateSchd2>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_AllowClimateSchd2_CLIMATE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_AllowClimateSchd2_CLIMATE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =46, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal AllowClimateSchd2 from the message CLIMATE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal AllowClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_Schedule_Day2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 254.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Schedule_Day2>(254.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Schedule_Day2_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=255;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_Schedule_Day2>(255);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Schedule_Day2_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_Schedule_Day2_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =47, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_Schedule_Day2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_Schedule_Day2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_End_Time_Min2(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 55.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min2>(55.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Min2_TBM_SCHEDULE_FD_1_FD3")),2);
        Canoe_Input_Value_Phys=15;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.TBM_SCHEDULE_FD_1.TBM_End_Time_Min2>(15);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Min2_TBM_SCHEDULE_FD_1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_End_Time_Min2_TBM_SCHEDULE_FD_1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =48, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_End_Time_Min2 from the message TBM_SCHEDULE_FD_1 in channel FD3", Testcase_description = "Check whether the signal TBM_End_Time_Min2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_AllowClimateSchd2(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_AllowClimateSchd2>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_AllowClimateSchd2_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_AllowClimateSchd2>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_AllowClimateSchd2_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_AllowClimateSchd2_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =49, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_AllowClimateSchd2 from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_AllowClimateSchd2 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Start_Time_Hr1(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 23.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr1>(23.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Hr1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CHARGE_SCHEDULE_HU1.Start_Time_Hr1>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Hr1_CHARGE_SCHEDULE_HU1_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Start_Time_Hr1_CHARGE_SCHEDULE_HU1_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =50, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Start_Time_Hr1 from the message CHARGE_SCHEDULE_HU1 in channel FD3", Testcase_description = "Check whether the signal Start_Time_Hr1 starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_TBM_ClimateSchd2_Departure_Hr(Test_MSExcel_Report report)
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

        Canoe_Input_Value_Phys= 30.0;
        Report.TestCaseComment("Modifying the value to Max" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Hr>(30.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd2_Departure_Hr_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Canoe_Input_Value_Phys=31;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.SGW.CLIMATE_SCHEDULE_TBM.TBM_ClimateSchd2_Departure_Hr>(31);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd2_Departure_Hr_CLIMATE_SCHEDULE_TBM_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_TBM_ClimateSchd2_Departure_Hr_CLIMATE_SCHEDULE_TBM_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =51, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal TBM_ClimateSchd2_Departure_Hr from the message CLIMATE_SCHEDULE_TBM in channel FD3", Testcase_description = "Check whether the signal TBM_ClimateSchd2_Departure_Hr starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestCase][BreakOnFail(false)]
public static void Test_Case_Command_15Sts(Test_MSExcel_Report report)
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
        SetSignal<NetworkDB.FD3.BCM.BCM_FD_14.Command_15Sts>(2.0);
        Execution.Wait(2500);
        MAX_Input_Value_Raw = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Command_15Sts_BCM_FD_14_FD3")),2);
        Canoe_Input_Value_Phys=3;
        Report.TestCaseComment("Modifying the value to SNA" + Canoe_Input_Value_Phys);
        SetSignal<NetworkDB.FD3.BCM.BCM_FD_14.Command_15Sts>(3);
        Execution.Wait(2500);
        SNA_Actual_Value_RAW = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Command_15Sts_BCM_FD_14_FD3")),2);
        Test_Input_Values = Test_Input_Values + "Input SNA Data: " + Canoe_Input_Value_Phys;
        Test_Actual_Values = Test_Actual_Values + "Actual Data: " + SNA_Actual_Value_RAW;
        if (!(T32_CSharp_API.Validate(MAX_Input_Value_Raw,SNA_Actual_Value_RAW)))
        {
        Test_Result = "Fail";Test_Remarks = Test_Remarks + "Failing for SNA Test Data: " +  Canoe_Input_Value_Phys ;
        }
        Execution.Wait(2500);
        Status_Actual_Value = Math.Round(T32_CSharp_API.ReadvariablevalueDouble(("Rte_Command_15Sts_BCM_FD_14_FD3_status")),2);
        Test_Input_Values = Test_Input_Values + "Invalidity Status: " + Status_Input_Value ;
        Test_Actual_Values = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value ;
        if (!(T32_CSharp_API.Validate(Status_Input_Value,Status_Actual_Value)))
        {
            Test_Result = "Fail";
            Test_Remarks = Test_Remarks + "Failing for Invalidity Policy: " +  Status_Input_Value;
        }
        report.fields.Add(new Excel_Fields {Test_Case_ID =52, Categorization = "Software feature", Testcase_objective = "To test the CAN Signal Command_15Sts from the message BCM_FD_14 in channel FD3", Testcase_description = "Check whether the signal Command_15Sts starting from the CAN physical Layer is connected correctly till the ComAbs level.",Test_steps = "Test Steps",Module = "CAN", Test_input_data = Test_Input_Values + "\nInvalidity Status: " + Status_Input_Value, Expected_output = "\nMax value:" + Canoe_Input_Value_Phys, Actual_output = Test_Actual_Values + "Actual Invalidity Status: " + Status_Actual_Value,Test_result = Test_Result, Screenshots = "NA", Remarks= "Test Remaks"});
        }
[Export][TestSequence][BreakOnFail(false)]
public static void Automated_Testing_Rx_FD3()
{
	Test_MSExcel_Report report = new Test_MSExcel_Report();
	string Report_Save_Path = @"D:\San\Automation\Test_Reports\Test_CAN_Report_FD3.xlsx";

	Test_Case_End_Time_Hr1(report);
	Test_Case_End_Time_Hr2(report);
	Test_Case_Start_Time_Min1(report);
	Test_Case_Start_Time_Hr2(report);
	Test_Case_TBM_ClimateSchd2_Day(report);
	Test_Case_TBM_Schedule_Day1(report);
	Test_Case_TBM_End_Time_Min1(report);
	Test_Case_ClimateSchd1_Departure_Min(report);
	Test_Case_TBM_End_Time_Hr1(report);
	Test_Case_Climate_Cabin_Temp2(report);
	Test_Case_TBM_ClimateSchd1_Departure_Min(report);
	Test_Case_ClimateSchd2_Day(report);
	Test_Case_Climate_Cabin_Temp1(report);
	Test_Case_TBM_Start_Time_Hr1(report);
	Test_Case_Start_Time_Min2(report);
	Test_Case_ClimateSchd1_Day(report);
	Test_Case_TBM_ClimateSchd2_Departure_Min(report);
	Test_Case_End_Time_Min2(report);
	Test_Case_HAS_TelltaleSts(report);
	Test_Case_ClimateSchd1_Departure_Hr(report);
	Test_Case_Schedule_Day1(report);
	Test_Case_TBM_Start_Time_Min1(report);
	Test_Case_ClimateSchd2_Departure_Hr(report);
	Test_Case_ClimateSchd2_Departure_Min(report);
	Test_Case_Climate_TBM_Cabin_Temp2(report);
	Test_Case_TBM_Start_Time_Min2(report);
	Test_Case_TBM_ClimateSchd1_Departure_Hr(report);
	Test_Case_Trns_DrvMdReq(report);
	Test_Case_Schedule_Day2(report);
	Test_Case_TBM_ClimateSchd1_Day(report);
	Test_Case_TBM_Start_Time_Hr2(report);
	Test_Case_Climate_TBM_Cabin_Temp1(report);
	Test_Case_TBM_End_Time_Hr2(report);
	Test_Case_TBM_AllowClimateSchd1(report);
	Test_Case_AllowClimateSchd1(report);
	Test_Case_End_Time_Min1(report);
	Test_Case_GPS_Date_Month(report);
	Test_Case_GPS_Date_Day(report);
	Test_Case_TBM_Cooperative_Charge_Command(report);
	Test_Case_GPS_UTC_Minute(report);
	Test_Case_GPS_UTC_Hour(report);
	Test_Case_GPS_Date_Year(report);
	Test_Case_AUD_LVL(report);
	Test_Case_GPS_UTC_Second(report);
	Test_Case_Remote_Chargeport_Command(report);
	Test_Case_AllowClimateSchd2(report);
	Test_Case_TBM_Schedule_Day2(report);
	Test_Case_TBM_End_Time_Min2(report);
	Test_Case_TBM_AllowClimateSchd2(report);
	Test_Case_Start_Time_Hr1(report);
	Test_Case_TBM_ClimateSchd2_Departure_Hr(report);
	Test_Case_Command_15Sts(report);
	report.Save_Excel(Report_Save_Path);


}

}
