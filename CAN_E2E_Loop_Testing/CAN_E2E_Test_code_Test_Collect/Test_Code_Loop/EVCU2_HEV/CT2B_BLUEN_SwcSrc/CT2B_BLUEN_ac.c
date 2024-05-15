/*
 * File: CT2B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'CT2B_BLUEN_ac'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:46:17 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CT2B_BLUEN_ac.h"



float32 SendCANR_ACCurrent_MaxCal_FD11_CT2B_BLUEN_ac_Test_1;
uint16 SendCANR_PerWakeUp_Diag_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_HVBattCurr_MaxCal_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_HVBattVolt_MaxCal_FD11_CT2B_BLUEN_ac_Test_1;
uint8 SendCANR_ChargeSystemSts_FD11_CT2B_BLUEN_ac_Test_1;
uint8 SendCANR_OBCM_PLUG_STS_FD11_CT2B_BLUEN_ac_Test_1;
uint8 SendCANR_OBC_ControlMethod_FD11_CT2B_BLUEN_ac_Test_1;
boolean SendCANR_J1772_CloseS2_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_RadiatorFanSts_FD11_CT2B_BLUEN_ac_Test_1;
boolean SendCANR_ChargeSystemFault_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_VoltageRequest_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_VDCM_UDCChrgr_CT2B_BLUEN_ac_Test_1;
uint8 SendCANR_OBC_OperativeMdReqFD11_CT2B_BLUEN_ac_Test_1;
boolean SendCANR_VDCM_SessnStopReq_FD11_CT2B_BLUEN_ac_Test_1;
uint8 SendCANR_ChargingLevel_FD11_CT2B_BLUEN_ac_Test_1;
uint8 SendCANR_ChrgSysFaultReasonFD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_T4_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1;
uint8 SendCANR_ChargeEnable_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_WU_Timer_Value_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_HVBattVolt_MinCal_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_VDCM_IDCChrgr_CT2B_BLUEN_ac_Test_1;
uint8 SendCANR_CmdIgnSts_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_T7_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_PIMF_CoolantFlow_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_AC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_CurrentRequest_FD11_CT2B_BLUEN_ac_Test_1;
float32 SendCANR_DC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, CT2B_BLUEN_CODE) CT2B_BLUEN_FastTEF /* Explicit Task: FastTEF */
{
    float32 rtb_TmpSignalConversionAtVeOBCR;
    float32 rtb_TmpSignalConversionAtVeOB_g;
    float32 tmpRead_2;
    float32 tmpRead_7;
    float32 tmpRead_c;
    float32 tmpRead_d;
    float32 tmpRead_f;
    float32 tmpRead_h;
    float32 tmpRead_l;
    float32 tmpRead_n;
    float32 tmpRead_o;
    float32 tmpRead_q;
    sint16 tmpRead_9;
    uint16 tmpRead_j;
    uint16 tmpRead_k;
    TeOBCR_e_ChargingLevel tmpRead_b;
    TeOBCR_e_ChargingSystemSts tmpRead_a;
    TeOBCR_e_ChrgrModeCmd_OBCM tmpRead_5;
    TeOBCR_e_ChrgrTrsfMethodReq tmpRead_4;
    TePMDR_e_PowerMode tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_3;
    boolean tmpRead_6;
    boolean tmpRead_8;
    boolean tmpRead_e;
    boolean tmpRead_g;
    boolean tmpRead_i;
    boolean tmpRead_m;
    boolean tmpRead_p;

    /* Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' */
    Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value(&tmpRead_q);

    /* Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' */
    Rte_Read_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value(&tmpRead_p);

    /* Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' */
    Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_o);

    /* Inport: '<Root>/VePMPR_dV_FEDMFlw' */
    Rte_Read_VePMPR_dV_FEDMFlw_Value(&tmpRead_n);

    /* Inport: '<Root>/VeTAIR_b_RadFanSts_FA' */
    Rte_Read_VeTAIR_b_RadFanSts_FA_Value(&tmpRead_m);

    /* Inport: '<Root>/VeTAIR_Pct_RadFanSts' */
    Rte_Read_VeTAIR_Pct_RadFanSts_Value(&tmpRead_l);

    /* Inport: '<Root>/VeSSDR_t_WU_TimerValue' */
    Rte_Read_VeSSDR_t_WU_TimerValue_Value(&tmpRead_k);

    /* Inport: '<Root>/VeSSDR_k_DiagPerWakeUp' */
    Rte_Read_VeSSDR_k_DiagPerWakeUp_Value(&tmpRead_j);

    /* Inport: '<Root>/VeBPCR_b_HV_BatVoltFA' */
    Rte_Read_VeBPCR_b_HV_BatVoltFA_Value(&tmpRead_i);

    /* Inport: '<Root>/VeBPCR_U_HV_BatVolt' */
    Rte_Read_VeBPCR_U_HV_BatVolt_Value(&tmpRead_h);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCurrFA' */
    Rte_Read_VeBPCR_b_HV_BatCurrFA_Value(&tmpRead_g);

    /* Inport: '<Root>/VeBPCR_I_HV_BatCurr' */
    Rte_Read_VeBPCR_I_HV_BatCurr_Value(&tmpRead_f);

    /* Inport: '<Root>/VeOBCR_b_PluggedIn' */
    Rte_Read_VeOBCR_b_PluggedIn_Value(&tmpRead_e);

    /* Inport: '<Root>/VeOBCR_U_MinAllowableBattVolt' */
    Rte_Read_VeOBCR_U_MinAllowableBattVolt_Value(&tmpRead_d);

    /* Inport: '<Root>/VeOBCR_U_MaxAllowableBattVolt' */
    Rte_Read_VeOBCR_U_MaxAllowableBattVolt_Value(&tmpRead_c);

    /* Inport: '<Root>/VeOBCR_e_ChargingLevel' */
    Rte_Read_VeOBCR_e_ChargingLevel_Value(&tmpRead_b);

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead_a);

    /* Inport: '<Root>/VeOBCR_k_ChrgSysFault_Reason' */
    Rte_Read_VeOBCR_k_ChrgSysFault_Reason_Value(&tmpRead_9);

    /* Inport: '<Root>/VeOBCR_b_ChrgSysFaultBPCM' */
    Rte_Read_VeOBCR_b_ChrgSysFaultBPCM_Value(&tmpRead_8);

    /* Inport: '<Root>/VeOBCR_U_ChrgVltReqDelta' */
    Rte_Read_VeOBCR_U_ChrgVltReqDelta_Value(&tmpRead_7);

    /* Inport: '<Root>/VeOBCR_b_HCP_SessionStpCmd' */
    Rte_Read_VeOBCR_b_HCP_SessionStpCmd_Value(&tmpRead_6);

    /* Inport: '<Root>/VeOBCR_e_ChrgrModeReq' */
    Rte_Read_VeOBCR_e_ChrgrModeReq_Value(&tmpRead_5);

    /* Inport: '<Root>/VeOBCR_e_ChrgrTrsfMethodReq' */
    Rte_Read_VeOBCR_e_ChrgrTrsfMethodReq_Value(&tmpRead_4);

    /* Inport: '<Root>/VeOBCR_b_CloseS2Cntctr' */
    Rte_Read_VeOBCR_b_CloseS2Cntctr_Value(&tmpRead_3);

    /* Inport: '<Root>/VeOBCR_I_ChrgCrntReqDelta' */
    Rte_Read_VeOBCR_I_ChrgCrntReqDelta_Value(&tmpRead_2);

    /* Inport: '<Root>/VeOBCR_b_EnblChrg' */
    Rte_Read_VeOBCR_b_EnblChrg_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMDR_b_PowerModeRawFA' */
    Rte_Read_VePMDR_b_PowerModeRawFA_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMDR_e_PowerModeRaw' */
    Rte_Read_VePMDR_e_PowerModeRaw_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_CmdIgnSts_FD11' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     *  Inport: '<Root>/VePMDR_e_PowerModeRaw'
     */

tmpRead = SendCANR_CmdIgnSts_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_CmdIgnSts_FD11_SendCANR_CmdIgnSts_FD11((uint8)
        tmpRead);

    /* Outport: '<Root>/SendCANR_CmdIgnSts_FD11Vld' incorporates:
     *  Logic: '<S9>/Logical Operator'
     */
    Rte_Write_SendCANR_CmdIgnSts_FD11Vld_SendCANR_CmdIgnSts_FD11Vld
        (!tmpRead_0);

    /* SignalConversion generated from: '<S2>/VeOBCR_I_MaxAllowableCrntAC' incorporates:
     *  Inport: '<Root>/VeOBCR_I_MaxAllowableCrntAC'
     */
    Rte_Read_VeOBCR_I_MaxAllowableCrntAC_Value
        (&rtb_TmpSignalConversionAtVeOBCR);

    /* Outport: '<Root>/SendCANR_AC_Curr_Max_Thrsh_FD11' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeOBCR = SendCANR_AC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_AC_Curr_Max_Thrsh_FD11_SendCANR_AC_Curr_Max_Thrsh_FD11        (rtb_TmpSignalConversionAtVeOBCR);

    /* Outport: '<Root>/SendCANR_AC_Curr_Max_Thrsh_FD11Vld' incorporates:
     *  Logic: '<S10>/Logical Operator'
     */
    
        Rte_Write_SendCANR_AC_Curr_Max_Thrsh_FD11Vld_SendCANR_AC_Curr_Max_Thrsh_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChargeEnable_FD11' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     */

tmpRead_1 = SendCANR_ChargeEnable_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_ChargeEnable_FD11_SendCANR_ChargeEnable_FD11((uint8)
        tmpRead_1);

    /* Outport: '<Root>/SendCANR_ChargeEnable_FD11Vld' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    Rte_Write_SendCANR_ChargeEnable_FD11Vld_SendCANR_ChargeEnable_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_CurrentRequest_FD11' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     */

tmpRead_2 = SendCANR_CurrentRequest_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_CurrentRequest_FD11_SendCANR_CurrentRequest_FD11        (tmpRead_2);

    /* Outport: '<Root>/SendCANR_CurrentRequest_FD11Vld' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    
        Rte_Write_SendCANR_CurrentRequest_FD11Vld_SendCANR_CurrentRequest_FD11Vld
        (true);

    /* SignalConversion generated from: '<S2>/VeOBCR_I_MaxAllowableCrntBatt' incorporates:
     *  Inport: '<Root>/VeOBCR_I_MaxAllowableCrntBatt'
     */
    Rte_Read_VeOBCR_I_MaxAllowableCrntBatt_Value
        (&rtb_TmpSignalConversionAtVeOB_g);

    /* Outport: '<Root>/SendCANR_DC_Curr_Max_Thrsh_FD11' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeOB_g = SendCANR_DC_Curr_Max_Thrsh_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_DC_Curr_Max_Thrsh_FD11_SendCANR_DC_Curr_Max_Thrsh_FD11        (rtb_TmpSignalConversionAtVeOB_g);

    /* Outport: '<Root>/SendCANR_DC_Curr_Max_Thrsh_FD11Vld' incorporates:
     *  Logic: '<S13>/Logical Operator'
     */
    
        Rte_Write_SendCANR_DC_Curr_Max_Thrsh_FD11Vld_SendCANR_DC_Curr_Max_Thrsh_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_J1772_CloseS2_FD11' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     */

tmpRead_3 = SendCANR_J1772_CloseS2_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_J1772_CloseS2_FD11_SendCANR_J1772_CloseS2_FD11        (tmpRead_3);

    /* Outport: '<Root>/SendCANR_J1772_CloseS2_FD11Vld' incorporates:
     *  Logic: '<S14>/Logical Operator'
     */
    
        Rte_Write_SendCANR_J1772_CloseS2_FD11Vld_SendCANR_J1772_CloseS2_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_OBC_ControlMethod_FD11' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChrgrTrsfMethodReq'
     */
    

tmpRead_4 = SendCANR_OBC_ControlMethod_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_OBC_ControlMethod_FD11_SendCANR_OBC_ControlMethod_FD11        ((uint8)tmpRead_4);

    /* Outport: '<Root>/SendCANR_OBC_ControlMethod_FD11Vld' incorporates:
     *  Logic: '<S15>/Logical Operator'
     */
    
        Rte_Write_SendCANR_OBC_ControlMethod_FD11Vld_SendCANR_OBC_ControlMethod_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_OBC_OperativeMdReqFD11' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChrgrModeReq'
     */
    

tmpRead_5 = SendCANR_OBC_OperativeMdReqFD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_OBC_OperativeMdReqFD11_SendCANR_OBC_OperativeMdReqFD11        ((uint8)tmpRead_5);

    /* Outport: '<Root>/SendCANR_OBC_OperativeMdReqFD11Vld' incorporates:
     *  Logic: '<S16>/Logical Operator'
     */
    
        Rte_Write_SendCANR_OBC_OperativeMdReqFD11Vld_SendCANR_OBC_OperativeMdReqFD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_VDCM_SessnStopReq_FD11' incorporates:
     *  DataTypeConversion: '<S17>/Data Type Conversion'
     */
    

tmpRead_6 = SendCANR_VDCM_SessnStopReq_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_VDCM_SessnStopReq_FD11_SendCANR_VDCM_SessnStopReq_FD11        (tmpRead_6);

    /* Outport: '<Root>/SendCANR_VDCM_SessnStopReq_FD11Vld' incorporates:
     *  Logic: '<S17>/Logical Operator'
     */
    
        Rte_Write_SendCANR_VDCM_SessnStopReq_FD11Vld_SendCANR_VDCM_SessnStopReq_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_VoltageRequest_FD11' incorporates:
     *  DataTypeConversion: '<S18>/Data Type Conversion'
     */

tmpRead_7 = SendCANR_VoltageRequest_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_VoltageRequest_FD11_SendCANR_VoltageRequest_FD11        (tmpRead_7);

    /* Outport: '<Root>/SendCANR_VoltageRequest_FD11Vld' incorporates:
     *  Logic: '<S18>/Logical Operator'
     */
    
        Rte_Write_SendCANR_VoltageRequest_FD11Vld_SendCANR_VoltageRequest_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_ACCurrent_MaxCal_FD11' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeOBCR = SendCANR_ACCurrent_MaxCal_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_ACCurrent_MaxCal_FD11_SendCANR_ACCurrent_MaxCal_FD11        (rtb_TmpSignalConversionAtVeOBCR);

    /* Outport: '<Root>/SendCANR_ACCurrent_MaxCal_FD11Vld' incorporates:
     *  Logic: '<S19>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ACCurrent_MaxCal_FD11Vld_SendCANR_ACCurrent_MaxCal_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChargeSystemFault_FD11' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion'
     */
    

tmpRead_8 = SendCANR_ChargeSystemFault_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_ChargeSystemFault_FD11_SendCANR_ChargeSystemFault_FD11        (tmpRead_8);

    /* Outport: '<Root>/SendCANR_ChargeSystemFault_FD11Vld' incorporates:
     *  Logic: '<S20>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChargeSystemFault_FD11Vld_SendCANR_ChargeSystemFault_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChrgSysFaultReasonFD11' incorporates:
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     */
    

tmpRead_9 = SendCANR_ChrgSysFaultReasonFD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_ChrgSysFaultReasonFD11_SendCANR_ChrgSysFaultReasonFD11        ((uint8)tmpRead_9);

    /* Outport: '<Root>/SendCANR_ChrgSysFaultReasonFD11Vld' incorporates:
     *  Logic: '<S21>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChrgSysFaultReasonFD11Vld_SendCANR_ChrgSysFaultReasonFD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChargeSystemSts_FD11' incorporates:
     *  DataTypeConversion: '<S22>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     */

tmpRead_a = SendCANR_ChargeSystemSts_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_ChargeSystemSts_FD11_SendCANR_ChargeSystemSts_FD11        ((uint8)tmpRead_a);

    /* Outport: '<Root>/SendCANR_ChargeSystemSts_FD11Vld' incorporates:
     *  Logic: '<S22>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChargeSystemSts_FD11Vld_SendCANR_ChargeSystemSts_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChargingLevel_FD11' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */

tmpRead_b = SendCANR_ChargingLevel_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_ChargingLevel_FD11_SendCANR_ChargingLevel_FD11        ((uint8)tmpRead_b);

    /* Outport: '<Root>/SendCANR_ChargingLevel_FD11Vld' incorporates:
     *  Logic: '<S23>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChargingLevel_FD11Vld_SendCANR_ChargingLevel_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVBattCurr_MaxCal_FD11' incorporates:
     *  DataTypeConversion: '<S24>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeOB_g = SendCANR_HVBattCurr_MaxCal_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_HVBattCurr_MaxCal_FD11_SendCANR_HVBattCurr_MaxCal_FD11        (rtb_TmpSignalConversionAtVeOB_g);

    /* Outport: '<Root>/SendCANR_HVBattCurr_MaxCal_FD11Vld' incorporates:
     *  Logic: '<S24>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVBattCurr_MaxCal_FD11Vld_SendCANR_HVBattCurr_MaxCal_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVBattVolt_MaxCal_FD11' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion'
     */
    

tmpRead_c = SendCANR_HVBattVolt_MaxCal_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_HVBattVolt_MaxCal_FD11_SendCANR_HVBattVolt_MaxCal_FD11        (tmpRead_c);

    /* Outport: '<Root>/SendCANR_HVBattVolt_MaxCal_FD11Vld' incorporates:
     *  Logic: '<S25>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVBattVolt_MaxCal_FD11Vld_SendCANR_HVBattVolt_MaxCal_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVBattVolt_MinCal_FD11' incorporates:
     *  DataTypeConversion: '<S26>/Data Type Conversion'
     */
    

tmpRead_d = SendCANR_HVBattVolt_MinCal_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_HVBattVolt_MinCal_FD11_SendCANR_HVBattVolt_MinCal_FD11        (tmpRead_d);

    /* Outport: '<Root>/SendCANR_HVBattVolt_MinCal_FD11Vld' incorporates:
     *  Logic: '<S26>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVBattVolt_MinCal_FD11Vld_SendCANR_HVBattVolt_MinCal_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_OBCM_PLUG_STS_FD11' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion'
     */

tmpRead_e = SendCANR_OBCM_PLUG_STS_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_OBCM_PLUG_STS_FD11_SendCANR_OBCM_PLUG_STS_FD11        ((uint8)tmpRead_e);

    /* Outport: '<Root>/SendCANR_OBCM_PLUG_STS_FD11Vld' incorporates:
     *  Logic: '<S27>/Logical Operator'
     */
    
        Rte_Write_SendCANR_OBCM_PLUG_STS_FD11Vld_SendCANR_OBCM_PLUG_STS_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_VDCM_IDCChrgr' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion'
     */

tmpRead_f = SendCANR_VDCM_IDCChrgr_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_VDCM_IDCChrgr_SendCANR_VDCM_IDCChrgr(tmpRead_f);

    /* Outport: '<Root>/SendCANR_VDCM_IDCChrgrVld' incorporates:
     *  Logic: '<S28>/Logical Operator'
     */
    Rte_Write_SendCANR_VDCM_IDCChrgrVld_SendCANR_VDCM_IDCChrgrVld
        (!tmpRead_g);

    /* Outport: '<Root>/SendCANR_VDCM_UDCChrgr' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion'
     */

tmpRead_h = SendCANR_VDCM_UDCChrgr_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_VDCM_UDCChrgr_SendCANR_VDCM_UDCChrgr(tmpRead_h);

    /* Outport: '<Root>/SendCANR_VDCM_UDCChrgrVld' incorporates:
     *  Logic: '<S29>/Logical Operator'
     */
    Rte_Write_SendCANR_VDCM_UDCChrgrVld_SendCANR_VDCM_UDCChrgrVld
        (!tmpRead_i);

    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD11' incorporates:
     *  DataTypeConversion: '<S30>/Data Type Conversion'
     */

tmpRead_j = SendCANR_PerWakeUp_Diag_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_PerWakeUp_Diag_FD11_SendCANR_PerWakeUp_Diag_FD11        (tmpRead_j);

    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD11Vld' incorporates:
     *  Logic: '<S30>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PerWakeUp_Diag_FD11Vld_SendCANR_PerWakeUp_Diag_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD11' incorporates:
     *  DataTypeConversion: '<S31>/Data Type Conversion'
     */

tmpRead_k = SendCANR_WU_Timer_Value_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_WU_Timer_Value_FD11_SendCANR_WU_Timer_Value_FD11        ((float32)tmpRead_k);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD11Vld' incorporates:
     *  Logic: '<S31>/Logical Operator'
     */
    
        Rte_Write_SendCANR_WU_Timer_Value_FD11Vld_SendCANR_WU_Timer_Value_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_RadiatorFanSts_FD11' incorporates:
     *  DataTypeConversion: '<S32>/Data Type Conversion'
     */

tmpRead_l = SendCANR_RadiatorFanSts_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_RadiatorFanSts_FD11_SendCANR_RadiatorFanSts_FD11        (tmpRead_l);

    /* Outport: '<Root>/SendCANR_RadiatorFanSts_FD11Vld' incorporates:
     *  Logic: '<S32>/Logical Operator'
     */
    
        Rte_Write_SendCANR_RadiatorFanSts_FD11Vld_SendCANR_RadiatorFanSts_FD11Vld
        (!tmpRead_m);

    /* Outport: '<Root>/SendCANR_PIMF_CoolantFlow_FD11' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion'
     */
    

tmpRead_n = SendCANR_PIMF_CoolantFlow_FD11_CT2B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_PIMF_CoolantFlow_FD11_SendCANR_PIMF_CoolantFlow_FD11        (tmpRead_n);

    /* Outport: '<Root>/SendCANR_PIMF_CoolantFlow_FD11Vld' incorporates:
     *  Logic: '<S33>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PIMF_CoolantFlow_FD11Vld_SendCANR_PIMF_CoolantFlow_FD11Vld
        (true);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD11' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     */

tmpRead_o = SendCANR_T4_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_T4_Sensor_Temp_FD11_SendCANR_T4_Sensor_Temp_FD11        (tmpRead_o);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD11Vld' incorporates:
     *  Logic: '<S34>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T4_Sensor_Temp_FD11Vld_SendCANR_T4_Sensor_Temp_FD11Vld
        (!tmpRead_p);

    /* Outport: '<Root>/SendCANR_T7_Sensor_Temp_FD11' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion'
     */

tmpRead_q = SendCANR_T7_Sensor_Temp_FD11_CT2B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_T7_Sensor_Temp_FD11_SendCANR_T7_Sensor_Temp_FD11        (tmpRead_q);

    /* Outport: '<Root>/SendCANR_T7_Sensor_Temp_FD11Vld' incorporates:
     *  Logic: '<S35>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T7_Sensor_Temp_FD11Vld_SendCANR_T7_Sensor_Temp_FD11Vld
        (true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CT2B_BLUEN_CODE) CT2B_BLUEN_ac_Init
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
