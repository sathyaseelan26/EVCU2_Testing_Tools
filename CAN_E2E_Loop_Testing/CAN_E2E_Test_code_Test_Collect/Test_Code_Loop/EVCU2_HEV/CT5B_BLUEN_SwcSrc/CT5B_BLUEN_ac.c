/*
 * File: CT5B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'CT5B_BLUEN_ac'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:47:09 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CT5B_BLUEN_ac.h"



float32 SendCANR_HVBattCurr_MaxCal_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_DC_Curr_Max_Thrsh_FD5_CT5B_BLUEN_ac_Test_1;
boolean SendCANR_J1772_CloseS2_FD5_CT5B_BLUEN_ac_Test_1;
uint8 SendCANR_OBCM_PLUG_STS_FD5_CT5B_BLUEN_ac_Test_1;
boolean SendCANR_ChargeSystemFault_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_HVBattVolt_MinCal_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_T4_Sensor_Temp_FD5_CT5B_BLUEN_ac_Test_1;
uint8 SendCANR_OBC_ControlMethod_FD5_CT5B_BLUEN_ac_Test_1;
uint8 SendCANR_CmdIgnSts_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_PIMF_CoolantFlow_FD5_CT5B_BLUEN_ac_Test_1;
uint8 SendCANR_ChargingLevel_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_WU_Timer_Value_FD5_CT5B_BLUEN_ac_Test_1;
boolean SendCANR_IMPACTCommand_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_VoltageRequest_FD5_CT5B_BLUEN_ac_Test_1;
uint8 SendCANR_ChrgSysFaultReason_FD5_CT5B_BLUEN_ac_Test_1;
uint16 SendCANR_PerWakeUp_Diag_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_HVBattVolt_MaxCal_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_AC_Curr_Max_Thrsh_FD5_CT5B_BLUEN_ac_Test_1;
uint8 SendCANR_ChargeEnable_FD5_CT5B_BLUEN_ac_Test_1;
uint8 SendCANR_ChargeSystemSts_FD5_CT5B_BLUEN_ac_Test_1;
uint8 SendCANR_OBC_OperativeMdReq_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_CurrentRequest_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_ACCurrent_MaxCal_FD5_CT5B_BLUEN_ac_Test_1;
boolean SendCANR_IMPACTConfirm_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_T7_Sensor_Temp_FD5_CT5B_BLUEN_ac_Test_1;
float32 SendCANR_RadiatorFanSts_FD5_CT5B_BLUEN_ac_Test_1;
boolean SendCANR_VDCM_SessnStopReq_FD5_CT5B_BLUEN_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, CT5B_BLUEN_CODE) CT5B_BLUEN_FastTEF /* Explicit Task: FastTEF */
{
    float32 rtb_TmpSignalConversionAtVeOBCR;
    float32 rtb_TmpSignalConversionAtVeOB_g;
    float32 tmpRead_2;
    float32 tmpRead_7;
    float32 tmpRead_c;
    float32 tmpRead_d;
    float32 tmpRead_h;
    float32 tmpRead_l;
    float32 tmpRead_m;
    float32 tmpRead_o;
    sint16 tmpRead_9;
    uint16 tmpRead_f;
    uint16 tmpRead_g;
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
    boolean tmpRead_i;
    boolean tmpRead_j;
    boolean tmpRead_k;
    boolean tmpRead_n;

    /* Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' */
    Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value(&tmpRead_o);

    /* Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' */
    Rte_Read_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value(&tmpRead_n);

    /* Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' */
    Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_m);

    /* Inport: '<Root>/VePMPR_dV_FEDMFlw' */
    Rte_Read_VePMPR_dV_FEDMFlw_Value(&tmpRead_l);

    /* Inport: '<Root>/VeIMPR_b_ImpactToggleCAN' */
    Rte_Read_VeIMPR_b_ImpactToggleCAN_Value(&tmpRead_k);

    /* Inport: '<Root>/VeIMPR_b_ImpactDetectedCAN' */
    Rte_Read_VeIMPR_b_ImpactDetectedCAN_Value(&tmpRead_j);

    /* Inport: '<Root>/VeTAIR_b_RadFanSts_FA' */
    Rte_Read_VeTAIR_b_RadFanSts_FA_Value(&tmpRead_i);

    /* Inport: '<Root>/VeTAIR_Pct_RadFanSts' */
    Rte_Read_VeTAIR_Pct_RadFanSts_Value(&tmpRead_h);

    /* Inport: '<Root>/VeSSDR_t_WU_TimerValue' */
    Rte_Read_VeSSDR_t_WU_TimerValue_Value(&tmpRead_g);

    /* Inport: '<Root>/VeSSDR_k_DiagPerWakeUp' */
    Rte_Read_VeSSDR_k_DiagPerWakeUp_Value(&tmpRead_f);

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
    /* Outport: '<Root>/SendCANR_CmdIgnSts_FD5' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     *  Inport: '<Root>/VePMDR_e_PowerModeRaw'
     */

tmpRead = SendCANR_CmdIgnSts_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_CmdIgnSts_FD5_SendCANR_CmdIgnSts_FD5((uint8)tmpRead);

    /* Outport: '<Root>/SendCANR_CmdIgnSts_FD5Vld' incorporates:
     *  Logic: '<S10>/Logical Operator'
     */
    Rte_Write_SendCANR_CmdIgnSts_FD5Vld_SendCANR_CmdIgnSts_FD5Vld
        (!tmpRead_0);

    /* SignalConversion generated from: '<S2>/VeOBCR_I_MaxAllowableCrntAC' incorporates:
     *  Inport: '<Root>/VeOBCR_I_MaxAllowableCrntAC'
     */
    Rte_Read_VeOBCR_I_MaxAllowableCrntAC_Value
        (&rtb_TmpSignalConversionAtVeOBCR);

    /* Outport: '<Root>/SendCANR_AC_Curr_Max_Thrsh_FD5' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeOBCR = SendCANR_AC_Curr_Max_Thrsh_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_AC_Curr_Max_Thrsh_FD5_SendCANR_AC_Curr_Max_Thrsh_FD5        (rtb_TmpSignalConversionAtVeOBCR);

    /* Outport: '<Root>/SendCANR_AC_Curr_Max_Thrsh_FD5Vld' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    
        Rte_Write_SendCANR_AC_Curr_Max_Thrsh_FD5Vld_SendCANR_AC_Curr_Max_Thrsh_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChargeEnable_FD5' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     */

 tmpRead_1= SendCANR_ChargeEnable_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_ChargeEnable_FD5_SendCANR_ChargeEnable_FD5((uint8)
        tmpRead_1);

    /* Outport: '<Root>/SendCANR_ChargeEnable_FD5Vld' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    Rte_Write_SendCANR_ChargeEnable_FD5Vld_SendCANR_ChargeEnable_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_CurrentRequest_FD5' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     */

tmpRead_2 = SendCANR_CurrentRequest_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_CurrentRequest_FD5_SendCANR_CurrentRequest_FD5        (tmpRead_2);

    /* Outport: '<Root>/SendCANR_CurrentRequest_FD5Vld' incorporates:
     *  Logic: '<S13>/Logical Operator'
     */
    
        Rte_Write_SendCANR_CurrentRequest_FD5Vld_SendCANR_CurrentRequest_FD5Vld
        (true);

    /* SignalConversion generated from: '<S2>/VeOBCR_I_MaxAllowableCrntBatt' incorporates:
     *  Inport: '<Root>/VeOBCR_I_MaxAllowableCrntBatt'
     */
    Rte_Read_VeOBCR_I_MaxAllowableCrntBatt_Value
        (&rtb_TmpSignalConversionAtVeOB_g);

    /* Outport: '<Root>/SendCANR_DC_Curr_Max_Thrsh_FD5' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeOB_g = SendCANR_DC_Curr_Max_Thrsh_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_DC_Curr_Max_Thrsh_FD5_SendCANR_DC_Curr_Max_Thrsh_FD5        (rtb_TmpSignalConversionAtVeOB_g);

    /* Outport: '<Root>/SendCANR_DC_Curr_Max_Thrsh_FD5Vld' incorporates:
     *  Logic: '<S14>/Logical Operator'
     */
    
        Rte_Write_SendCANR_DC_Curr_Max_Thrsh_FD5Vld_SendCANR_DC_Curr_Max_Thrsh_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_J1772_CloseS2_FD5' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     */

tmpRead_3 = SendCANR_J1772_CloseS2_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_J1772_CloseS2_FD5_SendCANR_J1772_CloseS2_FD5        (tmpRead_3);

    /* Outport: '<Root>/SendCANR_J1772_CloseS2_FD5Vld' incorporates:
     *  Logic: '<S15>/Logical Operator'
     */
    Rte_Write_SendCANR_J1772_CloseS2_FD5Vld_SendCANR_J1772_CloseS2_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_OBC_ControlMethod_FD5' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChrgrTrsfMethodReq'
     */
    

tmpRead_4 = SendCANR_OBC_ControlMethod_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_OBC_ControlMethod_FD5_SendCANR_OBC_ControlMethod_FD5        ((uint8)tmpRead_4);

    /* Outport: '<Root>/SendCANR_OBC_ControlMethod_FD5Vld' incorporates:
     *  Logic: '<S16>/Logical Operator'
     */
    
        Rte_Write_SendCANR_OBC_ControlMethod_FD5Vld_SendCANR_OBC_ControlMethod_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_OBC_OperativeMdReq_FD5' incorporates:
     *  DataTypeConversion: '<S17>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChrgrModeReq'
     */
    

tmpRead_5 = SendCANR_OBC_OperativeMdReq_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_OBC_OperativeMdReq_FD5_SendCANR_OBC_OperativeMdReq_FD5        ((uint8)tmpRead_5);

    /* Outport: '<Root>/SendCANR_OBC_OperativeMdReq_FD5Vld' incorporates:
     *  Logic: '<S17>/Logical Operator'
     */
    
        Rte_Write_SendCANR_OBC_OperativeMdReq_FD5Vld_SendCANR_OBC_OperativeMdReq_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_VDCM_SessnStopReq_FD5' incorporates:
     *  DataTypeConversion: '<S18>/Data Type Conversion'
     */
    

tmpRead_6 = SendCANR_VDCM_SessnStopReq_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_VDCM_SessnStopReq_FD5_SendCANR_VDCM_SessnStopReq_FD5        (tmpRead_6);

    /* Outport: '<Root>/SendCANR_VDCM_SessnStopReq_FD5Vld' incorporates:
     *  Logic: '<S18>/Logical Operator'
     */
    
        Rte_Write_SendCANR_VDCM_SessnStopReq_FD5Vld_SendCANR_VDCM_SessnStopReq_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_VoltageRequest_FD5' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion'
     */

tmpRead_7 = SendCANR_VoltageRequest_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_VoltageRequest_FD5_SendCANR_VoltageRequest_FD5        (tmpRead_7);

    /* Outport: '<Root>/SendCANR_VoltageRequest_FD5Vld' incorporates:
     *  Logic: '<S19>/Logical Operator'
     */
    
        Rte_Write_SendCANR_VoltageRequest_FD5Vld_SendCANR_VoltageRequest_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_ACCurrent_MaxCal_FD5' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion'
     */

rtb_TmpSignalConversionAtVeOBCR = SendCANR_ACCurrent_MaxCal_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_ACCurrent_MaxCal_FD5_SendCANR_ACCurrent_MaxCal_FD5        (rtb_TmpSignalConversionAtVeOBCR);

    /* Outport: '<Root>/SendCANR_ACCurrent_MaxCal_FD5Vld' incorporates:
     *  Logic: '<S20>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ACCurrent_MaxCal_FD5Vld_SendCANR_ACCurrent_MaxCal_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChargeSystemFault_FD5' incorporates:
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     */
    

tmpRead_8 = SendCANR_ChargeSystemFault_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_ChargeSystemFault_FD5_SendCANR_ChargeSystemFault_FD5        (tmpRead_8);

    /* Outport: '<Root>/SendCANR_ChargeSystemFault_FD5Vld' incorporates:
     *  Logic: '<S21>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChargeSystemFault_FD5Vld_SendCANR_ChargeSystemFault_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChrgSysFaultReason_FD5' incorporates:
     *  DataTypeConversion: '<S22>/Data Type Conversion'
     */
    

tmpRead_9 = SendCANR_ChrgSysFaultReason_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_ChrgSysFaultReason_FD5_SendCANR_ChrgSysFaultReason_FD5        ((uint8)tmpRead_9);

    /* Outport: '<Root>/SendCANR_ChrgSysFaultReason_FD5Vld' incorporates:
     *  Logic: '<S22>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChrgSysFaultReason_FD5Vld_SendCANR_ChrgSysFaultReason_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChargeSystemSts_FD5' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     */

tmpRead_a = SendCANR_ChargeSystemSts_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_ChargeSystemSts_FD5_SendCANR_ChargeSystemSts_FD5        ((uint8)tmpRead_a);

    /* Outport: '<Root>/SendCANR_ChargeSystemSts_FD5Vld' incorporates:
     *  Logic: '<S23>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChargeSystemSts_FD5Vld_SendCANR_ChargeSystemSts_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_ChargingLevel_FD5' incorporates:
     *  DataTypeConversion: '<S24>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */

tmpRead_b= SendCANR_ChargingLevel_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_ChargingLevel_FD5_SendCANR_ChargingLevel_FD5((uint8)
        tmpRead_b);

    /* Outport: '<Root>/SendCANR_ChargingLevel_FD5Vld' incorporates:
     *  Logic: '<S24>/Logical Operator'
     */
    Rte_Write_SendCANR_ChargingLevel_FD5Vld_SendCANR_ChargingLevel_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVBattCurr_MaxCal_FD5' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeOB_g = SendCANR_HVBattCurr_MaxCal_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_HVBattCurr_MaxCal_FD5_SendCANR_HVBattCurr_MaxCal_FD5        (rtb_TmpSignalConversionAtVeOB_g);

    /* Outport: '<Root>/SendCANR_HVBattCurr_MaxCal_FD5Vld' incorporates:
     *  Logic: '<S25>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVBattCurr_MaxCal_FD5Vld_SendCANR_HVBattCurr_MaxCal_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVBattVolt_MaxCal_FD5' incorporates:
     *  DataTypeConversion: '<S26>/Data Type Conversion'
     */
    

tmpRead_c = SendCANR_HVBattVolt_MaxCal_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_HVBattVolt_MaxCal_FD5_SendCANR_HVBattVolt_MaxCal_FD5        (tmpRead_c);

    /* Outport: '<Root>/SendCANR_HVBattVolt_MaxCal_FD5Vld' incorporates:
     *  Logic: '<S26>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVBattVolt_MaxCal_FD5Vld_SendCANR_HVBattVolt_MaxCal_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVBattVolt_MinCal_FD5' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion'
     */
    

tmpRead_d = SendCANR_HVBattVolt_MinCal_FD5_CT5B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_HVBattVolt_MinCal_FD5_SendCANR_HVBattVolt_MinCal_FD5        (tmpRead_d);

    /* Outport: '<Root>/SendCANR_HVBattVolt_MinCal_FD5Vld' incorporates:
     *  Logic: '<S27>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVBattVolt_MinCal_FD5Vld_SendCANR_HVBattVolt_MinCal_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_OBCM_PLUG_STS_FD5' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion'
     */

tmpRead_b = SendCANR_OBCM_PLUG_STS_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_OBCM_PLUG_STS_FD5_SendCANR_OBCM_PLUG_STS_FD5((uint8)
        tmpRead_b);

    /* Outport: '<Root>/SendCANR_OBCM_PLUG_STS_FD5Vld' incorporates:
     *  Logic: '<S28>/Logical Operator'
     */
    Rte_Write_SendCANR_OBCM_PLUG_STS_FD5Vld_SendCANR_OBCM_PLUG_STS_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD5' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion'
     */

tmpRead_f = SendCANR_PerWakeUp_Diag_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_PerWakeUp_Diag_FD5_SendCANR_PerWakeUp_Diag_FD5        (tmpRead_f);

    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD5Vld' incorporates:
     *  Logic: '<S29>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PerWakeUp_Diag_FD5Vld_SendCANR_PerWakeUp_Diag_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD5' incorporates:
     *  DataTypeConversion: '<S30>/Data Type Conversion'
     */

tmpRead_g = SendCANR_WU_Timer_Value_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_WU_Timer_Value_FD5_SendCANR_WU_Timer_Value_FD5        ((float32)tmpRead_g);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD5Vld' incorporates:
     *  Logic: '<S30>/Logical Operator'
     */
    
        Rte_Write_SendCANR_WU_Timer_Value_FD5Vld_SendCANR_WU_Timer_Value_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_RadiatorFanSts_FD5' incorporates:
     *  DataTypeConversion: '<S31>/Data Type Conversion'
     */

tmpRead_h = SendCANR_RadiatorFanSts_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_RadiatorFanSts_FD5_SendCANR_RadiatorFanSts_FD5        (tmpRead_h);

    /* Outport: '<Root>/SendCANR_RadiatorFanSts_FD5Vld' incorporates:
     *  Logic: '<S31>/Logical Operator'
     */
    
        Rte_Write_SendCANR_RadiatorFanSts_FD5Vld_SendCANR_RadiatorFanSts_FD5Vld(
        !tmpRead_i);

    /* Outport: '<Root>/SendCANR_IMPACTCommand_FD5' incorporates:
     *  DataTypeConversion: '<S32>/Data Type Conversion'
     */

tmpRead_j = SendCANR_IMPACTCommand_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_IMPACTCommand_FD5_SendCANR_IMPACTCommand_FD5        (tmpRead_j);

    /* Outport: '<Root>/SendCANR_IMPACTCommand_FD5Vld' incorporates:
     *  Logic: '<S32>/Logical Operator'
     */
    Rte_Write_SendCANR_IMPACTCommand_FD5Vld_SendCANR_IMPACTCommand_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_IMPACTConfirm_FD5' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion'
     */

tmpRead_k = SendCANR_IMPACTConfirm_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_IMPACTConfirm_FD5_SendCANR_IMPACTConfirm_FD5        (tmpRead_k);

    /* Outport: '<Root>/SendCANR_IMPACTConfirm_FD5Vld' incorporates:
     *  Logic: '<S33>/Logical Operator'
     */
    Rte_Write_SendCANR_IMPACTConfirm_FD5Vld_SendCANR_IMPACTConfirm_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_PIMF_CoolantFlow_FD5' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     */

tmpRead_l = SendCANR_PIMF_CoolantFlow_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_PIMF_CoolantFlow_FD5_SendCANR_PIMF_CoolantFlow_FD5        (tmpRead_l);

    /* Outport: '<Root>/SendCANR_PIMF_CoolantFlow_FD5Vld' incorporates:
     *  Logic: '<S34>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PIMF_CoolantFlow_FD5Vld_SendCANR_PIMF_CoolantFlow_FD5Vld
        (true);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD5' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion'
     */

tmpRead_m = SendCANR_T4_Sensor_Temp_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_T4_Sensor_Temp_FD5_SendCANR_T4_Sensor_Temp_FD5        (tmpRead_m);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD5Vld' incorporates:
     *  Logic: '<S35>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T4_Sensor_Temp_FD5Vld_SendCANR_T4_Sensor_Temp_FD5Vld(
        !tmpRead_n);

    /* Outport: '<Root>/SendCANR_T7_Sensor_Temp_FD5' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion'
     */

tmpRead_o = SendCANR_T7_Sensor_Temp_FD5_CT5B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_T7_Sensor_Temp_FD5_SendCANR_T7_Sensor_Temp_FD5        (tmpRead_o);

    /* Outport: '<Root>/SendCANR_T7_Sensor_Temp_FD5Vld' incorporates:
     *  Logic: '<S36>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T7_Sensor_Temp_FD5Vld_SendCANR_T7_Sensor_Temp_FD5Vld
        (true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CT5B_BLUEN_CODE) CT5B_BLUEN_ac_Init
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
