/*
 * File: CT1B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'CT1B_BLUEN_ac'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:45:43 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CT1B_BLUEN_ac.h"



uint8 SendCANR_Sch_PreCondition_Sts_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_T4_Sensor_Temp_FD3_CT1B_BLUEN_ac_Test_1;
uint8 SendCANR_MotorA_InverterState_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorB_InverterTemp_CT1B_BLUEN_ac_Test_1;
boolean SendCANR_HVBatCritCondT_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorA_Temperature_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorA_DC_Voltage_CT1B_BLUEN_ac_Test_1;
uint8 SendCANR_CabinConditioningSts_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorB_Temperature_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_HeaterCoreInletTemp_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_SchCond_Time_Till_Dep_CT1B_BLUEN_ac_Test_1;
boolean SendCANR_FRfShVlvSts_CT1B_BLUEN_ac_Test_1;
uint8 SendCANR_CompressorState_CT1B_BLUEN_ac_Test_1;
uint8 SendCANR_MotorB_InverterState_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorA_InverterTemp_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_HTAuxPmpRPMAct_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorB_DC_Voltage_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorA_TorqueAchieved_CT1B_BLUEN_ac_Test_1;
uint8 SendCANR_HTAuxPmpMontrngRPM_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorB_DC_Current_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorB_TorqueAchieved_CT1B_BLUEN_ac_Test_1;
uint8 SendCANR_CbnPreconditionReqSts_CT1B_BLUEN_ac_Test_1;
uint8 SendCANR_APCM_Rq_Display_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_PE_CoolTempIn_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorA_DC_Current_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_ElecCoolantHtrPwr_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorA_RPM_CT1B_BLUEN_ac_Test_1;
uint8 SendCANR_HVBatCooltLevelLow_DPT_CT1B_BLUEN_ac_Test_1;
float32 SendCANR_MotorB_RPM_CT1B_BLUEN_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, CT1B_BLUEN_CODE) CT1B_BLUEN_FastTEF /* Explicit Task: FastTEF */
{
    float32 tmpRead_11;
    float32 tmpRead_13;
    float32 tmpRead_15;
    float32 tmpRead_17;
    float32 tmpRead_3;
    float32 tmpRead_7;
    float32 tmpRead_b;
    float32 tmpRead_f;
    float32 tmpRead_h;
    float32 tmpRead_k;
    float32 tmpRead_m;
    float32 tmpRead_o;
    float32 tmpRead_q;
    float32 tmpRead_s;
    float32 tmpRead_u;
    float32 tmpRead_x;
    float32 tmpRead_z;
    sint16 tmpRead_0;
    sint16 tmpRead_1;
    sint16 tmpRead_d;
    TeBRDR_e_BatCltLvlLo tmpRead_9;
    TeINVR_e_MtrInvrtrSt tmpRead_j;
    TeINVR_e_MtrInvrtrSt tmpRead_w;
    TePMPR_e_TFSNA tmpRead_5;
    TeTAIR_e_CompStat tmpRead_2;
    TeTPCR_e_SC_WakeUpSt tmpRead_e;
    TeTRGR_e_AutoPosCorrMd tmpRead;
    boolean tmpRead_10;
    boolean tmpRead_12;
    boolean tmpRead_14;
    boolean tmpRead_16;
    boolean tmpRead_18;
    boolean tmpRead_4;
    boolean tmpRead_6;
    boolean tmpRead_8;
    boolean tmpRead_a;
    boolean tmpRead_c;
    boolean tmpRead_g;
    boolean tmpRead_i;
    boolean tmpRead_l;
    boolean tmpRead_n;
    boolean tmpRead_p;
    boolean tmpRead_r;
    boolean tmpRead_t;
    boolean tmpRead_v;
    boolean tmpRead_y;

    /* Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' */
    Rte_Read_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value(&tmpRead_18);

    /* Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' */
    Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_17);

    /* Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' */
    Rte_Read_VeTMIR_b_PsvPmpClnt_TmpIn_FA_Value(&tmpRead_16);

    /* Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' */
    Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value(&tmpRead_15);

    /* Inport: '<Root>/VeMTIR_b_MtrB_TorqAchievedFA' */
    Rte_Read_VeMTIR_b_MtrB_TorqAchievedFA_Value(&tmpRead_14);

    /* Inport: '<Root>/VeMTIR_M_MtrB_TorqAchieved' */
    Rte_Read_VeMTIR_M_MtrB_TorqAchieved_Value(&tmpRead_13);

    /* Inport: '<Root>/VeINVR_b_MtrB_TempFA' */
    Rte_Read_VeINVR_b_MtrB_TempFA_Value(&tmpRead_12);

    /* Inport: '<Root>/VeINVR_T_MtrB_Temp' */
    Rte_Read_VeINVR_T_MtrB_Temp_Value(&tmpRead_11);

    /* Inport: '<Root>/VeMSPR_b_MtrB_SpdFA' */
    Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&tmpRead_10);

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_z);

    /* Inport: '<Root>/VeINVR_b_MtrB_InvrtrTempFA' */
    Rte_Read_VeINVR_b_MtrB_InvrtrTempFA_Value(&tmpRead_y);

    /* Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp' */
    Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value(&tmpRead_x);

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_w);

    /* Inport: '<Root>/VeINVR_b_MtrB_DC_VoltFA' */
    Rte_Read_VeINVR_b_MtrB_DC_VoltFA_Value(&tmpRead_v);

    /* Inport: '<Root>/VeINVR_U_MtrB_DC_Volt' */
    Rte_Read_VeINVR_U_MtrB_DC_Volt_Value(&tmpRead_u);

    /* Inport: '<Root>/VeINVR_b_MtrB_DC_CrntFA' */
    Rte_Read_VeINVR_b_MtrB_DC_CrntFA_Value(&tmpRead_t);

    /* Inport: '<Root>/VeINVR_I_MtrB_DC_Crnt' */
    Rte_Read_VeINVR_I_MtrB_DC_Crnt_Value(&tmpRead_s);

    /* Inport: '<Root>/VeMTIR_b_MtrA_TorqAchievedFA' */
    Rte_Read_VeMTIR_b_MtrA_TorqAchievedFA_Value(&tmpRead_r);

    /* Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved' */
    Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value(&tmpRead_q);

    /* Inport: '<Root>/VeINVR_b_MtrA_TempFA' */
    Rte_Read_VeINVR_b_MtrA_TempFA_Value(&tmpRead_p);

    /* Inport: '<Root>/VeINVR_T_MtrA_Temp' */
    Rte_Read_VeINVR_T_MtrA_Temp_Value(&tmpRead_o);

    /* Inport: '<Root>/VeMSPR_b_MtrA_SpdFA' */
    Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&tmpRead_n);

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead_m);

    /* Inport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA' */
    Rte_Read_VeINVR_b_MtrA_InvrtrTempFA_Value(&tmpRead_l);

    /* Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp' */
    Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value(&tmpRead_k);

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_j);

    /* Inport: '<Root>/VeINVR_b_MtrA_DC_VoltFA' */
    Rte_Read_VeINVR_b_MtrA_DC_VoltFA_Value(&tmpRead_i);

    /* Inport: '<Root>/VeINVR_U_MtrA_DC_Volt' */
    Rte_Read_VeINVR_U_MtrA_DC_Volt_Value(&tmpRead_h);

    /* Inport: '<Root>/VeINVR_b_MtrA_DC_CrntFA' */
    Rte_Read_VeINVR_b_MtrA_DC_CrntFA_Value(&tmpRead_g);

    /* Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt' */
    Rte_Read_VeINVR_I_MtrA_DC_Crnt_Value(&tmpRead_f);

    /* Inport: '<Root>/VeTHMR_e_SC_WkUp' */
    Rte_Read_VeTHMR_e_SC_WkUp_Value(&tmpRead_e);

    /* Inport: '<Root>/VeTPCR_t_TimeToDeparture' */
    Rte_Read_VeTPCR_t_TimeToDeparture_Value(&tmpRead_d);

    /* Inport: '<Root>/VeTRIR_b_HtrCorClnt_TmpIn_FA' */
    Rte_Read_VeTRIR_b_HtrCorClnt_TmpIn_FA_Value(&tmpRead_c);

    /* Inport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn' */
    Rte_Read_VeTRIR_T_HtrCorClnt_TmpIn_Value(&tmpRead_b);

    /* Inport: '<Root>/VeTHMR_b_HV_BatTempCrit_Cond' */
    Rte_Read_VeTHMR_b_HV_BatTempCrit_Cond_Value(&tmpRead_a);

    /* Inport: '<Root>/VeTHMR_e_HV_Bat_CltLvlLo' */
    Rte_Read_VeTHMR_e_HV_Bat_CltLvlLo_Value(&tmpRead_9);

    /* Inport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_FA' */
    Rte_Read_VePMIR_b_HTAuxPumpRPMAct_FA_Value(&tmpRead_8);

    /* Inport: '<Root>/VePMIR_n_HTAuxPumpRPMAct' */
    Rte_Read_VePMIR_n_HTAuxPumpRPMAct_Value(&tmpRead_7);

    /* Inport: '<Root>/VePMIR_b_HTAuxPumpMntrRPM_FA' */
    Rte_Read_VePMIR_b_HTAuxPumpMntrRPM_FA_Value(&tmpRead_6);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM' */
    Rte_Read_VePMIR_e_HTAuxPumpMntrRPM_Value(&tmpRead_5);

    /* Inport: '<Root>/VeRCVR_b_FtRfgtShtoff_VlvSts' */
    Rte_Read_VeRCVR_b_FtRfgtShtoff_VlvSts_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHTRR_P_HVC_HtrPwrAct' */
    Rte_Read_VeHTRR_P_HVC_HtrPwrAct_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAIR_e_CompStat' */
    Rte_Read_VeTAIR_e_CompStat_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTHMR_e_CabinPreCondReqMsg' */
    Rte_Read_VeTHMR_e_CabinPreCondReqMsg_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTHMR_e_CabinPreCondReqStat' */
    Rte_Read_VeTHMR_e_CabinPreCondReqStat_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTRGR_e_AutoPosCorrMdReq' */
    Rte_Read_VeTRGR_e_AutoPosCorrMdReq_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_APCM_Rq_Display' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     *  Inport: '<Root>/VeTRGR_e_AutoPosCorrMdReq'
     */

tmpRead = SendCANR_APCM_Rq_Display_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_APCM_Rq_Display_SendCANR_APCM_Rq_Display((uint8)
        tmpRead);

    /* Outport: '<Root>/SendCANR_APCM_Rq_DisplayVld' incorporates:
     *  Logic: '<S8>/Logical Operator'
     */
    Rte_Write_SendCANR_APCM_Rq_DisplayVld_SendCANR_APCM_Rq_DisplayVld(true);

    /* Outport: '<Root>/SendCANR_CabinConditioningSts' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     */

tmpRead_0 = SendCANR_CabinConditioningSts_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_CabinConditioningSts_SendCANR_CabinConditioningSts        ((uint8)tmpRead_0);

    /* Outport: '<Root>/SendCANR_CabinConditioningStsVld' incorporates:
     *  Logic: '<S9>/Logical Operator'
     */
    
        Rte_Write_SendCANR_CabinConditioningStsVld_SendCANR_CabinConditioningStsVld
        (true);

    /* Outport: '<Root>/SendCANR_CbnPreconditionReqSts' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     */
    

tmpRead_1 = SendCANR_CbnPreconditionReqSts_CT1B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_CbnPreconditionReqSts_SendCANR_CbnPreconditionReqSts        ((uint8)tmpRead_1);

    /* Outport: '<Root>/SendCANR_CbnPreconditionReqStsVld' incorporates:
     *  Logic: '<S10>/Logical Operator'
     */
    
        Rte_Write_SendCANR_CbnPreconditionReqStsVld_SendCANR_CbnPreconditionReqStsVld
        (true);

    /* Outport: '<Root>/SendCANR_CompressorState' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     *  Inport: '<Root>/VeTAIR_e_CompStat'
     */

tmpRead_2 = SendCANR_CompressorState_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_CompressorState_SendCANR_CompressorState((uint8)
        tmpRead_2);

    /* Outport: '<Root>/SendCANR_CompressorStateVld' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    Rte_Write_SendCANR_CompressorStateVld_SendCANR_CompressorStateVld(true);

    /* Outport: '<Root>/SendCANR_ElecCoolantHtrPwr' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     */

tmpRead_3 = SendCANR_ElecCoolantHtrPwr_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_ElecCoolantHtrPwr_SendCANR_ElecCoolantHtrPwr        (tmpRead_3);

    /* Outport: '<Root>/SendCANR_ElecCoolantHtrPwrVld' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    Rte_Write_SendCANR_ElecCoolantHtrPwrVld_SendCANR_ElecCoolantHtrPwrVld
        (true);

    /* Outport: '<Root>/SendCANR_FRfShVlvSts' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     */

tmpRead_4 = SendCANR_FRfShVlvSts_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_FRfShVlvSts_SendCANR_FRfShVlvSts(tmpRead_4);

    /* Outport: '<Root>/SendCANR_FRfShVlvStsVld' incorporates:
     *  Logic: '<S13>/Logical Operator'
     */
    Rte_Write_SendCANR_FRfShVlvStsVld_SendCANR_FRfShVlvStsVld(true);

    /* Outport: '<Root>/SendCANR_HTAuxPmpMontrngRPM' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM'
     */

tmpRead_5 = SendCANR_HTAuxPmpMontrngRPM_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_HTAuxPmpMontrngRPM_SendCANR_HTAuxPmpMontrngRPM        ((uint8)tmpRead_5);

    /* Outport: '<Root>/SendCANR_HTAuxPmpMontrngRPM_Vld' incorporates:
     *  Logic: '<S14>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HTAuxPmpMontrngRPM_Vld_SendCANR_HTAuxPmpMontrngRPM_Vld
        (!tmpRead_6);

    /* Outport: '<Root>/SendCANR_HTAuxPmpRPMAct' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     */

tmpRead_7 = SendCANR_HTAuxPmpRPMAct_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_HTAuxPmpRPMAct_SendCANR_HTAuxPmpRPMAct(tmpRead_7);

    /* Outport: '<Root>/SendCANR_HTAuxPmpRPMActVld' incorporates:
     *  Logic: '<S15>/Logical Operator'
     */
    Rte_Write_SendCANR_HTAuxPmpRPMActVld_SendCANR_HTAuxPmpRPMActVld
        (!tmpRead_8);

    /* Outport: '<Root>/SendCANR_HVBatCooltLevelLow_DPT' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion'
     *  Inport: '<Root>/VeTHMR_e_HV_Bat_CltLvlLo'
     */
    

tmpRead_9 = SendCANR_HVBatCooltLevelLow_DPT_CT1B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_HVBatCooltLevelLow_DPT_SendCANR_HVBatCooltLevelLow_DPT        ((uint8)tmpRead_9);

    /* Outport: '<Root>/SendCANR_HVBatCooltLevelLow_DPT_Vld' incorporates:
     *  Logic: '<S16>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVBatCooltLevelLow_DPT_Vld_SendCANR_HVBatCooltLevelLow_DPT_Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVBatCritCondT' incorporates:
     *  DataTypeConversion: '<S17>/Data Type Conversion'
     */

tmpRead_a = SendCANR_HVBatCritCondT_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_HVBatCritCondT_SendCANR_HVBatCritCondT(tmpRead_a);

    /* Outport: '<Root>/SendCANR_HVBatCritCondT_Vld' incorporates:
     *  Logic: '<S17>/Logical Operator'
     */
    Rte_Write_SendCANR_HVBatCritCondT_Vld_SendCANR_HVBatCritCondT_Vld(true);

    /* Outport: '<Root>/SendCANR_HeaterCoreInletTemp' incorporates:
     *  DataTypeConversion: '<S18>/Data Type Conversion'
     */

tmpRead_b = SendCANR_HeaterCoreInletTemp_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_HeaterCoreInletTemp_SendCANR_HeaterCoreInletTemp        (tmpRead_b);

    /* Outport: '<Root>/SendCANR_HeaterCoreInletTempVld' incorporates:
     *  Logic: '<S18>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HeaterCoreInletTempVld_SendCANR_HeaterCoreInletTempVld
        (!tmpRead_c);

    /* Outport: '<Root>/SendCANR_SchCond_Time_Till_Dep' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion'
     */
    

tmpRead_d = SendCANR_SchCond_Time_Till_Dep_CT1B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_SchCond_Time_Till_Dep_SendCANR_SchCond_Time_Till_Dep        ((float32)tmpRead_d);

    /* Outport: '<Root>/SendCANR_SchCond_Time_Till_DepVld' incorporates:
     *  Logic: '<S19>/Logical Operator'
     */
    
        Rte_Write_SendCANR_SchCond_Time_Till_DepVld_SendCANR_SchCond_Time_Till_DepVld
        (true);

    /* Outport: '<Root>/SendCANR_Sch_PreCondition_Sts' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion'
     *  Inport: '<Root>/VeTHMR_e_SC_WkUp'
     */

tmpRead_e = SendCANR_Sch_PreCondition_Sts_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_Sch_PreCondition_Sts_SendCANR_Sch_PreCondition_Sts        ((uint8)tmpRead_e);

    /* Outport: '<Root>/SendCANR_Sch_PreCondition_StsVld' incorporates:
     *  Logic: '<S20>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Sch_PreCondition_StsVld_SendCANR_Sch_PreCondition_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_MotorA_DC_Current' incorporates:
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     */

tmpRead_f = SendCANR_MotorA_DC_Current_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorA_DC_Current_SendCANR_MotorA_DC_Current        (tmpRead_f);

    /* Outport: '<Root>/SendCANR_MotorA_DC_CurrentVld' incorporates:
     *  Logic: '<S21>/Logical Operator'
     */
    Rte_Write_SendCANR_MotorA_DC_CurrentVld_SendCANR_MotorA_DC_CurrentVld(
        !tmpRead_g);

    /* Outport: '<Root>/SendCANR_MotorA_DC_Voltage' incorporates:
     *  DataTypeConversion: '<S22>/Data Type Conversion'
     */

tmpRead_h = SendCANR_MotorA_DC_Voltage_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorA_DC_Voltage_SendCANR_MotorA_DC_Voltage        (tmpRead_h);

    /* Outport: '<Root>/SendCANR_MotorA_DC_VoltageVld' incorporates:
     *  Logic: '<S22>/Logical Operator'
     */
    Rte_Write_SendCANR_MotorA_DC_VoltageVld_SendCANR_MotorA_DC_VoltageVld(
        !tmpRead_i);

    /* Outport: '<Root>/SendCANR_MotorA_InverterState' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     */

tmpRead_j = SendCANR_MotorA_InverterState_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorA_InverterState_SendCANR_MotorA_InverterState        ((uint8)tmpRead_j);

    /* Outport: '<Root>/SendCANR_MotorA_InverterStateVld' incorporates:
     *  Logic: '<S23>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorA_InverterStateVld_SendCANR_MotorA_InverterStateVld
        (true);

    /* Outport: '<Root>/SendCANR_MotorA_InverterTemp' incorporates:
     *  DataTypeConversion: '<S24>/Data Type Conversion'
     */

tmpRead_k = SendCANR_MotorA_InverterTemp_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorA_InverterTemp_SendCANR_MotorA_InverterTemp        (tmpRead_k);

    /* Outport: '<Root>/SendCANR_MotorA_InverterTempVld' incorporates:
     *  Logic: '<S24>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorA_InverterTempVld_SendCANR_MotorA_InverterTempVld
        (!tmpRead_l);

    /* Outport: '<Root>/SendCANR_MotorA_RPM' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion'
     */

tmpRead_m = SendCANR_MotorA_RPM_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorA_RPM_SendCANR_MotorA_RPM(tmpRead_m);

    /* Outport: '<Root>/SendCANR_MotorA_RPM_Vld' incorporates:
     *  Logic: '<S25>/Logical Operator'
     */
    Rte_Write_SendCANR_MotorA_RPM_Vld_SendCANR_MotorA_RPM_Vld(!tmpRead_n);

    /* Outport: '<Root>/SendCANR_MotorA_Temperature' incorporates:
     *  DataTypeConversion: '<S26>/Data Type Conversion'
     */

tmpRead_o = SendCANR_MotorA_Temperature_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorA_Temperature_SendCANR_MotorA_Temperature        (tmpRead_o);

    /* Outport: '<Root>/SendCANR_MotorA_TemperatureVld' incorporates:
     *  Logic: '<S26>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorA_TemperatureVld_SendCANR_MotorA_TemperatureVld(
        !tmpRead_p);

    /* Outport: '<Root>/SendCANR_MotorA_TorqueAchieved' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion'
     */
    

tmpRead_q = SendCANR_MotorA_TorqueAchieved_CT1B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_MotorA_TorqueAchieved_SendCANR_MotorA_TorqueAchieved        (tmpRead_q);

    /* Outport: '<Root>/SendCANR_MotorA_TorqueAchievedVld' incorporates:
     *  Logic: '<S27>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorA_TorqueAchievedVld_SendCANR_MotorA_TorqueAchievedVld
        (!tmpRead_r);

    /* Outport: '<Root>/SendCANR_MotorB_DC_Current' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion'
     */

tmpRead_s = SendCANR_MotorB_DC_Current_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorB_DC_Current_SendCANR_MotorB_DC_Current        (tmpRead_s);

    /* Outport: '<Root>/SendCANR_MotorB_DC_CurrentVld' incorporates:
     *  Logic: '<S28>/Logical Operator'
     */
    Rte_Write_SendCANR_MotorB_DC_CurrentVld_SendCANR_MotorB_DC_CurrentVld(
        !tmpRead_t);

    /* Outport: '<Root>/SendCANR_MotorB_DC_Voltage' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion'
     */

tmpRead_u = SendCANR_MotorB_DC_Voltage_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorB_DC_Voltage_SendCANR_MotorB_DC_Voltage        (tmpRead_u);

    /* Outport: '<Root>/SendCANR_MotorB_DC_VoltageVld' incorporates:
     *  Logic: '<S29>/Logical Operator'
     */
    Rte_Write_SendCANR_MotorB_DC_VoltageVld_SendCANR_MotorB_DC_VoltageVld(
        !tmpRead_v);

    /* Outport: '<Root>/SendCANR_MotorB_InverterState' incorporates:
     *  DataTypeConversion: '<S30>/Data Type Conversion'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     */

tmpRead_w = SendCANR_MotorB_InverterState_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorB_InverterState_SendCANR_MotorB_InverterState        ((uint8)tmpRead_w);

    /* Outport: '<Root>/SendCANR_MotorB_InverterStateVld' incorporates:
     *  Logic: '<S30>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorB_InverterStateVld_SendCANR_MotorB_InverterStateVld
        (true);

    /* Outport: '<Root>/SendCANR_MotorB_InverterTemp' incorporates:
     *  DataTypeConversion: '<S31>/Data Type Conversion'
     */

tmpRead_x = SendCANR_MotorB_InverterTemp_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorB_InverterTemp_SendCANR_MotorB_InverterTemp        (tmpRead_x);

    /* Outport: '<Root>/SendCANR_MotorB_InverterTempVld' incorporates:
     *  Logic: '<S31>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorB_InverterTempVld_SendCANR_MotorB_InverterTempVld
        (!tmpRead_y);

    /* Outport: '<Root>/SendCANR_MotorB_RPM' incorporates:
     *  DataTypeConversion: '<S32>/Data Type Conversion'
     */

tmpRead_z = SendCANR_MotorB_RPM_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorB_RPM_SendCANR_MotorB_RPM(tmpRead_z);

    /* Outport: '<Root>/SendCANR_MotorB_RPM_Vld' incorporates:
     *  Logic: '<S32>/Logical Operator'
     */
    Rte_Write_SendCANR_MotorB_RPM_Vld_SendCANR_MotorB_RPM_Vld(!tmpRead_10);

    /* Outport: '<Root>/SendCANR_MotorB_Temperature' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion'
     */

tmpRead_11 = SendCANR_MotorB_Temperature_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_MotorB_Temperature_SendCANR_MotorB_Temperature        (tmpRead_11);

    /* Outport: '<Root>/SendCANR_MotorB_TemperatureVld' incorporates:
     *  Logic: '<S33>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorB_TemperatureVld_SendCANR_MotorB_TemperatureVld(
        !tmpRead_12);

    /* Outport: '<Root>/SendCANR_MotorB_TorqueAchieved' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     */
    

tmpRead_13 = SendCANR_MotorB_TorqueAchieved_CT1B_BLUEN_ac_Test_1;
        Rte_Write_SendCANR_MotorB_TorqueAchieved_SendCANR_MotorB_TorqueAchieved        (tmpRead_13);

    /* Outport: '<Root>/SendCANR_MotorB_TorqueAchievedVld' incorporates:
     *  Logic: '<S34>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorB_TorqueAchievedVld_SendCANR_MotorB_TorqueAchievedVld
        (!tmpRead_14);

    /* Outport: '<Root>/SendCANR_PE_CoolTempIn' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion'
     */

tmpRead_15 = SendCANR_PE_CoolTempIn_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_PE_CoolTempIn_SendCANR_PE_CoolTempIn(tmpRead_15);

    /* Outport: '<Root>/SendCANR_PE_CoolTempInVld' incorporates:
     *  Logic: '<S35>/Logical Operator'
     */
    Rte_Write_SendCANR_PE_CoolTempInVld_SendCANR_PE_CoolTempInVld
        (!tmpRead_16);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD3' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion'
     */

tmpRead_17 = SendCANR_T4_Sensor_Temp_FD3_CT1B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_T4_Sensor_Temp_FD3_SendCANR_T4_Sensor_Temp_FD3        (tmpRead_17);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD3Vld' incorporates:
     *  Logic: '<S36>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T4_Sensor_Temp_FD3Vld_SendCANR_T4_Sensor_Temp_FD3Vld(
        !tmpRead_18);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CT1B_BLUEN_CODE) CT1B_BLUEN_ac_Init
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
