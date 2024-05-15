/*
 * File: CT4B_FUNC_ac.c
 *
 * Code generated for Simulink model 'CT4B_FUNC_ac'.
 *
 * Model version                  : 1.42
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:34:03 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CT4B_FUNC_ac.h"



float32 SendCANR_T4_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1;
float32 SendCANR_EOPA_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1;
float32 SendCANR_EOPB_OIL_TEMP_FD16_CT4B_FUNC_ac_Test_1;
boolean SendCANR_IMPACTCommand_FD16_CT4B_FUNC_ac_Test_1;
boolean SendCANR_IMPACTConfirm_FD16_CT4B_FUNC_ac_Test_1;
float32 SendCANR_EOPA_OIL_TEMP_FD16_CT4B_FUNC_ac_Test_1;
float32 SendCANR_WU_Timer_Value_FD16_CT4B_FUNC_ac_Test_1;
float32 SendCANR_EOPB_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1;
boolean SendCANR_T7_CoolntTmpVldty_FD16_CT4B_FUNC_ac_Test_1;
uint16 SendCANR_PerWakeUp_Diag_FD16_CT4B_FUNC_ac_Test_1;
float32 SendCANR_T7_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, CT4B_FUNC_CODE) CT4B_FUNC_FastTEF /* Explicit Task: FastTEF */
{
    float32 tmpRead_1;
    float32 tmpRead_3;
    float32 tmpRead_5;
    float32 tmpRead_7;
    float32 tmpRead_b;
    float32 tmpRead_d;
    float32 tmpRead_e;
    uint16 tmpRead;
    uint16 tmpRead_0;
    boolean rtb_TmpSignalConversionAtVeTMIR;
    boolean tmpRead_2;
    boolean tmpRead_4;
    boolean tmpRead_6;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_c;

    /* Inport: '<Root>/VeSABR_M_RELSD_TgtTrq' */
    Rte_Read_VeSABR_M_RELSD_TgtTrq_Value(&tmpRead_e);

    /* Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' */
    Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value(&tmpRead_d);

    /* Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' */
    Rte_Read_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value(&tmpRead_c);

    /* Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' */
    Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_b);

    /* Inport: '<Root>/VeIMPR_b_ImpactToggleCAN' */
    Rte_Read_VeIMPR_b_ImpactToggleCAN_Value(&tmpRead_a);

    /* Inport: '<Root>/VeIMPR_b_ImpactDetectedCAN' */
    Rte_Read_VeIMPR_b_ImpactDetectedCAN_Value(&tmpRead_9);

    /* Inport: '<Root>/VePMIR_b_TransAuxPump2OilTemp_FA' */
    Rte_Read_VePMIR_b_TransAuxPump2OilTemp_FA_Value(&tmpRead_8);

    /* Inport: '<Root>/VePMIR_T_TransAuxPump2OilTemp' */
    Rte_Read_VePMIR_T_TransAuxPump2OilTemp_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTAPR_b_MtrB_OilFlwActFA' */
    Rte_Read_VeTAPR_b_MtrB_OilFlwActFA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTAPR_dV_MtrB_OilFlwAct' */
    Rte_Read_VeTAPR_dV_MtrB_OilFlwAct_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_b_TransAuxPumpOilTemp_FA' */
    Rte_Read_VePMIR_b_TransAuxPumpOilTemp_FA_Value(&tmpRead_4);

    /* Inport: '<Root>/VePMIR_T_TransAuxPumpOilTemp' */
    Rte_Read_VePMIR_T_TransAuxPumpOilTemp_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTAPR_b_MtrA_OilFlwActFA' */
    Rte_Read_VeTAPR_b_MtrA_OilFlwActFA_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTAPR_dV_MtrA_OilFlwAct' */
    Rte_Read_VeTAPR_dV_MtrA_OilFlwAct_Value(&tmpRead_1);

    /* Inport: '<Root>/VeSSDR_t_WU_TimerValue' */
    Rte_Read_VeSSDR_t_WU_TimerValue_Value(&tmpRead_0);

    /* Inport: '<Root>/VeSSDR_k_DiagPerWakeUp' */
    Rte_Read_VeSSDR_k_DiagPerWakeUp_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD16' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     */

tmpRead = SendCANR_PerWakeUp_Diag_FD16_CT4B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_PerWakeUp_Diag_FD16_SendCANR_PerWakeUp_Diag_FD16        (tmpRead);

    /* Outport: '<Root>/SendCANR_PerWakeUp_Diag_FD16Vld' incorporates:
     *  Logic: '<S8>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PerWakeUp_Diag_FD16Vld_SendCANR_PerWakeUp_Diag_FD16Vld
        (true);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD16' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     */

tmpRead_0 = SendCANR_WU_Timer_Value_FD16_CT4B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_WU_Timer_Value_FD16_SendCANR_WU_Timer_Value_FD16        ((float32)tmpRead_0);

    /* Outport: '<Root>/SendCANR_WU_Timer_Value_FD16Vld' incorporates:
     *  Logic: '<S9>/Logical Operator'
     */
    
        Rte_Write_SendCANR_WU_Timer_Value_FD16Vld_SendCANR_WU_Timer_Value_FD16Vld
        (true);

    /* Outport: '<Root>/SendCANR_EOPA_OIL_FlwRate_FD16' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     */
    

tmpRead_1 = SendCANR_EOPA_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_EOPA_OIL_FlwRate_FD16_SendCANR_EOPA_OIL_FlwRate_FD16        (tmpRead_1);

    /* Outport: '<Root>/SendCANR_EOPA_OIL_FlwRate_FD16Vld' incorporates:
     *  Logic: '<S10>/Logical Operator'
     */
    
        Rte_Write_SendCANR_EOPA_OIL_FlwRate_FD16Vld_SendCANR_EOPA_OIL_FlwRate_FD16Vld
        (!tmpRead_2);

    /* Outport: '<Root>/SendCANR_EOPA_OIL_TEMP_FD16' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     */

tmpRead_3 = SendCANR_EOPA_OIL_TEMP_FD16_CT4B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_EOPA_OIL_TEMP_FD16_SendCANR_EOPA_OIL_TEMP_FD16        (tmpRead_3);

    /* Outport: '<Root>/SendCANR_EOPA_OIL_TEMP_FD16Vld' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    
        Rte_Write_SendCANR_EOPA_OIL_TEMP_FD16Vld_SendCANR_EOPA_OIL_TEMP_FD16Vld(
        !tmpRead_4);

    /* Outport: '<Root>/SendCANR_EOPB_OIL_FlwRate_FD16' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     */
    

tmpRead_5 = SendCANR_EOPB_OIL_FlwRate_FD16_CT4B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_EOPB_OIL_FlwRate_FD16_SendCANR_EOPB_OIL_FlwRate_FD16        (tmpRead_5);

    /* Outport: '<Root>/SendCANR_EOPB_OIL_FlwRate_FD16Vld' incorporates:
     *  Logic: '<S12>/Logical Operator'
     */
    
        Rte_Write_SendCANR_EOPB_OIL_FlwRate_FD16Vld_SendCANR_EOPB_OIL_FlwRate_FD16Vld
        (!tmpRead_6);

    /* Outport: '<Root>/SendCANR_EOPB_OIL_TEMP_FD16' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion'
     */

tmpRead_7 = SendCANR_EOPB_OIL_TEMP_FD16_CT4B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_EOPB_OIL_TEMP_FD16_SendCANR_EOPB_OIL_TEMP_FD16        (tmpRead_7);

    /* Outport: '<Root>/SendCANR_EOPB_OIL_TEMP_FD16Vld' incorporates:
     *  Logic: '<S13>/Logical Operator'
     */
    
        Rte_Write_SendCANR_EOPB_OIL_TEMP_FD16Vld_SendCANR_EOPB_OIL_TEMP_FD16Vld(
        !tmpRead_8);

    /* Outport: '<Root>/SendCANR_IMPACTCommand_FD16' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     */

tmpRead_9 = SendCANR_IMPACTCommand_FD16_CT4B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_IMPACTCommand_FD16_SendCANR_IMPACTCommand_FD16        (tmpRead_9);

    /* Outport: '<Root>/SendCANR_IMPACTCommand_FD16Vld' incorporates:
     *  Logic: '<S14>/Logical Operator'
     */
    
        Rte_Write_SendCANR_IMPACTCommand_FD16Vld_SendCANR_IMPACTCommand_FD16Vld
        (true);

    /* Outport: '<Root>/SendCANR_IMPACTConfirm_FD16' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     */

tmpRead_a = SendCANR_IMPACTConfirm_FD16_CT4B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_IMPACTConfirm_FD16_SendCANR_IMPACTConfirm_FD16        (tmpRead_a);

    /* Outport: '<Root>/SendCANR_IMPACTConfirm_FD16Vld' incorporates:
     *  Logic: '<S15>/Logical Operator'
     */
    
        Rte_Write_SendCANR_IMPACTConfirm_FD16Vld_SendCANR_IMPACTConfirm_FD16Vld
        (true);

    /* SignalConversion generated from: '<S2>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' incorporates:
     *  Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
     */
    Rte_Read_VeTMIR_b_PsvPmpClnt_TmpIn_FA_Value
        (&rtb_TmpSignalConversionAtVeTMIR);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD16' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion'
     */

tmpRead_b = SendCANR_T4_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_T4_Sensor_Temp_FD16_SendCANR_T4_Sensor_Temp_FD16        (tmpRead_b);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD16Vld' incorporates:
     *  Logic: '<S16>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T4_Sensor_Temp_FD16Vld_SendCANR_T4_Sensor_Temp_FD16Vld
        (!tmpRead_c);

    /* Outport: '<Root>/SendCANR_T7_CoolntTmpVldty_FD16' incorporates:
     *  DataTypeConversion: '<S17>/Data Type Conversion'
     */
    

rtb_TmpSignalConversionAtVeTMIR = SendCANR_T7_CoolntTmpVldty_FD16_CT4B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_T7_CoolntTmpVldty_FD16_SendCANR_T7_CoolntTmpVldty_FD16        (rtb_TmpSignalConversionAtVeTMIR);

    /* Outport: '<Root>/SendCANR_T7_CoolntTmpVldty_FD16Vld' incorporates:
     *  Logic: '<S17>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T7_CoolntTmpVldty_FD16Vld_SendCANR_T7_CoolntTmpVldty_FD16Vld
        (true);

    /* Outport: '<Root>/SendCANR_T7_Sensor_Temp_FD16' incorporates:
     *  DataTypeConversion: '<S18>/Data Type Conversion'
     */

tmpRead_d = SendCANR_T7_Sensor_Temp_FD16_CT4B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_T7_Sensor_Temp_FD16_SendCANR_T7_Sensor_Temp_FD16        (tmpRead_d);

    /* Outport: '<Root>/SendCANR_T7_Sensor_Temp_FD16Vld' incorporates:
     *  Logic: '<S18>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T7_Sensor_Temp_FD16Vld_SendCANR_T7_Sensor_Temp_FD16Vld
        (!rtb_TmpSignalConversionAtVeTMIR);

    /* Outport: '<Root>/SendCANR_RELSD_TgtTrq_FD16' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion'
     */
    Rte_Write_SendCANR_RELSD_TgtTrq_FD16_SendCANR_RELSD_TgtTrq_FD16
        (tmpRead_e);

    /* Outport: '<Root>/SendCANR_RELSD_TgtTrq_FD16Vld' incorporates:
     *  Logic: '<S19>/Logical Operator'
     */
    Rte_Write_SendCANR_RELSD_TgtTrq_FD16Vld_SendCANR_RELSD_TgtTrq_FD16Vld
        (true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CT4B_FUNC_CODE) CT4B_FUNC_ac_Init
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
