/*
 * File: COMR_ac.c
 *
 * Code generated for Simulink model 'COMR_ac'.
 *
 * Model version                  : 9.27
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:15:49 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "COMR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_COMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, COMR_VAR_INIT) KeCOMR_b_Random3 = 0;/* Referenced by: '<S7>/Calib' */
static volatile CONST(boolean, COMR_VAR_INIT) KeCOMR_b_ShftMdSts = 1;/* Referenced by: '<S5>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_COMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_COMR
#include "MemMap.h"

VAR(B_COMR_ac_T, COMR_VAR_INIT) COMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_COMR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, COMR_CODE) COMR_SlowTEF(void) /* Explicit Task: SlowTEF */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/COMR_SlowTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/COMR_RandomMap'
     */
    /* SignalConversion generated from: '<S6>/VeCOMR_b_Random3' incorporates:
     *  Constant: '<S7>/Calib'
     */
    COMR_ac_B.VeCOMR_b_Random3_Fn = KeCOMR_b_Random3;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCOMR_b_Random3' incorporates:
     *  SignalConversion generated from: '<S2>/VeCOMR_b_Random3'
     */
    (void)Rte_Write_VeCOMR_b_Random3_Value(COMR_ac_B.VeCOMR_b_Random3_Fn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/* Output function */
FUNC(void, COMR_CODE) COMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/COMR_PwrOn'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Init_COMI'
     */
    /* Outport: '<Root>/VeCOMR_b_ShftMdSts' incorporates:
     *  Constant: '<S5>/Calib'
     *  SignalConversion generated from: '<S3>/VeCOMR_b_ShtfMdSts'
     */
    (void)Rte_Write_VeCOMR_b_ShftMdSts_Value(KeCOMR_b_ShftMdSts);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S4>/VeCOMR_b_Random3_Out_Init' */
    COMR_ac_B.VeCOMR_b_Random3_Out_Init = false;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCOMR_b_Random3' incorporates:
     *  SignalConversion generated from: '<S1>/VeCOMR_b_Random3_Out_Init'
     */
    (void)Rte_Write_VeCOMR_b_Random3_Value(COMR_ac_B.VeCOMR_b_Random3_Out_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, COMR_CODE) COMR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/COMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Init_COMI'
     */
    /* SystemInitialize for Outport: '<Root>/VeCOMR_b_ShftMdSts' incorporates:
     *  Constant: '<S5>/Calib'
     *  SignalConversion generated from: '<S3>/VeCOMR_b_ShtfMdSts'
     */
    (void)Rte_Write_VeCOMR_b_ShftMdSts_Value(KeCOMR_b_ShftMdSts);

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/COMR_SlowTEF'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/COMR_RandomMap'
     */
    /* SystemInitialize for SignalConversion generated from: '<S6>/VeCOMR_b_Random3' incorporates:
     *  Constant: '<S7>/Calib'
     */
    COMR_ac_B.VeCOMR_b_Random3_Fn = KeCOMR_b_Random3;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
