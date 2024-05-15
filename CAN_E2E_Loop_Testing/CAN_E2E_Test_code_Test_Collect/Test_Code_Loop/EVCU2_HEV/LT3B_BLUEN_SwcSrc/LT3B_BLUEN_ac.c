/*
 * File: LT3B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'LT3B_BLUEN_ac'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:49:49 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LT3B_BLUEN_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, LT3B_BLUEN_CODE) LT3B_BLUEN_FastTEF(void) /* Explicit Task: FastTEF */
{
    TeFSCR_e_AGS_PosRq tmpRead_1;
    boolean tmpRead;
    boolean tmpRead_0;

    /* Inport: '<Root>/VeFSCR_e_AGS_PosReq' */
    (void)Rte_Read_VeFSCR_e_AGS_PosReq_Value(&tmpRead_1);

    /* Inport: '<Root>/VeFSCR_b_AGS_CalReq' */
    (void)Rte_Read_VeFSCR_b_AGS_CalReq_Value(&tmpRead_0);

    /* Inport: '<Root>/VeFSCR_b_AGS_BoostReq' */
    (void)Rte_Read_VeFSCR_b_AGS_BoostReq_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendLINR_AGS_BoostRq' incorporates:
     *  DataTypeConversion: '<S4>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_AGS_BoostRq_SendLINR_AGS_BoostRq(tmpRead);

    /* Outport: '<Root>/SendLINR_AGS_BoostRqVld' incorporates:
     *  Logic: '<S4>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AGS_BoostRqVld_SendLINR_AGS_BoostRqVld(true);

    /* Outport: '<Root>/SendLINR_AGS_CalRq' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     */
    (void)Rte_Write_SendLINR_AGS_CalRq_SendLINR_AGS_CalRq(tmpRead_0);

    /* Outport: '<Root>/SendLINR_AGS_CalRqVld' incorporates:
     *  Logic: '<S5>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AGS_CalRqVld_SendLINR_AGS_CalRqVld(true);

    /* Outport: '<Root>/SendLINR_AGS_PosRq' incorporates:
     *  DataTypeConversion: '<S6>/Data Type Conversion'
     *  Inport: '<Root>/VeFSCR_e_AGS_PosReq'
     */
    (void)Rte_Write_SendLINR_AGS_PosRq_SendLINR_AGS_PosRq((uint8)tmpRead_1);

    /* Outport: '<Root>/SendLINR_AGS_PosRqVld' incorporates:
     *  Logic: '<S6>/Logical Operator'
     */
    (void)Rte_Write_SendLINR_AGS_PosRqVld_SendLINR_AGS_PosRqVld(true);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, LT3B_BLUEN_CODE) LT3B_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
