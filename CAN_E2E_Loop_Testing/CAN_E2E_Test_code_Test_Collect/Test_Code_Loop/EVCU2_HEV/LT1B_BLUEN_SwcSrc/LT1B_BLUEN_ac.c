/*
 * File: LT1B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'LT1B_BLUEN_ac'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:49:25 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LT1B_BLUEN_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, LT1B_BLUEN_CODE) LT1B_BLUEN_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 tmpRead_3;
    TePMPR_e_FTSNA tmpRead;
    TeTMIR_e_ECM_LTP_FanAftRunRq tmpRead_1;
    boolean tmpRead_0;
    boolean tmpRead_2;

    /* Inport: '<Root>/VePMPR_Pct_LT_ActPmp_Cmd' */
    (void)Rte_Read_VePMPR_Pct_LT_ActPmp_Cmd_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMPR_b_LT_ActvPump_PostRunCmd_FA' */
    (void)Rte_Read_VePMPR_b_LT_ActvPump_PostRunCmd_FA_Value(&tmpRead_2);

    /* Inport: '<Root>/VePMPR_e_LT_ActvPmp_PostRunCmd' */
    (void)Rte_Read_VePMPR_e_LT_ActvPmp_PostRunCmd_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMPR_b_LT_ActPmp_FL_SAFE_ACTVT_FA' */
    (void)Rte_Read_VePMPR_b_LT_ActPmp_FL_SAFE_ACTVT_FA_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMPR_e_LTActPmp_FL_SAFE_ACTVT' */
    (void)Rte_Read_VePMPR_e_LTActPmp_FL_SAFE_ACTVT_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_BCP_FL_SAFE_ACTVT' incorporates:
     *  DataTypeConversion: '<S4>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LTActPmp_FL_SAFE_ACTVT'
     */
    (void)Rte_Write_SendLINR_BCP_FL_SAFE_ACTVT_SendLINR_BCP_FL_SAFE_ACTVT((uint8)
        tmpRead);

    /* Outport: '<Root>/SendLINR_BCP_FL_SAFE_ACTVT_Vld' incorporates:
     *  Logic: '<S4>/Logical Operator'
     */
    (void)
        Rte_Write_SendLINR_BCP_FL_SAFE_ACTVT_Vld_SendLINR_BCP_FL_SAFE_ACTVT_Vld(
        !tmpRead_0);

    /* Outport: '<Root>/SendLINR_BCP_POST_RUN_REQ' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     *  Inport: '<Root>/VePMPR_e_LT_ActvPmp_PostRunCmd'
     */
    (void)Rte_Write_SendLINR_BCP_POST_RUN_REQ_SendLINR_BCP_POST_RUN_REQ((uint8)
        tmpRead_1);

    /* Outport: '<Root>/SendLINR_BCP_POST_RUN_REQ_Vld' incorporates:
     *  Logic: '<S5>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_BCP_POST_RUN_REQ_Vld_SendLINR_BCP_POST_RUN_REQ_Vld(
        !tmpRead_2);

    /* Outport: '<Root>/SendLINR_BCP_RPM_REQ' incorporates:
     *  DataTypeConversion: '<S6>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_BCP_RPM_REQ_SendLINR_BCP_RPM_REQ(tmpRead_3);

    /* Outport: '<Root>/SendLINR_BCP_RPM_REQ_Vld' incorporates:
     *  Logic: '<S6>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_BCP_RPM_REQ_Vld_SendLINR_BCP_RPM_REQ_Vld(true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, LT1B_BLUEN_CODE) LT1B_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
