/*
 * File: CT3B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'CT3B_BLUEN_ac'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:46:42 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CT3B_BLUEN_ac.h"



float32 SendCANR_Motor1_RPM_CT3B_BLUEN_ac_Test_1;
float32 SendCANR_Motor2_RPM_CT3B_BLUEN_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, CT3B_BLUEN_CODE) CT3B_BLUEN_FastTEF /* Explicit Task: FastTEF */
{
    float32 tmpRead;
    float32 tmpRead_0;

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_0);

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_Motor1_RPM' incorporates:
     *  DataTypeConversion: '<S4>/Data Type Conversion'
     */

tmpRead = SendCANR_Motor1_RPM_CT3B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_Motor1_RPM_SendCANR_Motor1_RPM(tmpRead);

    /* Outport: '<Root>/SendCANR_Motor1_RPM_Vld' incorporates:
     *  Logic: '<S4>/Logical Operator'
     */
    Rte_Write_SendCANR_Motor1_RPM_Vld_SendCANR_Motor1_RPM_Vld(true);

    /* Outport: '<Root>/SendCANR_Motor2_RPM' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     */

tmpRead_0 = SendCANR_Motor2_RPM_CT3B_BLUEN_ac_Test_1;
    Rte_Write_SendCANR_Motor2_RPM_SendCANR_Motor2_RPM(tmpRead_0);

    /* Outport: '<Root>/SendCANR_Motor2_RPM_Vld' incorporates:
     *  Logic: '<S5>/Logical Operator'
     */
    Rte_Write_SendCANR_Motor2_RPM_Vld_SendCANR_Motor2_RPM_Vld(true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CT3B_BLUEN_CODE) CT3B_BLUEN_ac_Init
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
