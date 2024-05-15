/*
 * File: VCPR_ac.c
 *
 * Code generated for Simulink model 'VCPR_ac'.
 *
 * Model version                  : 9.20
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:56:38 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VCPR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_VCPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, VCPR_VAR_INIT) KeVCPR_M_TLFMax_NFdial = 0.0F;/* Referenced by: '<S3>/Calib' */
static volatile CONST(float32, VCPR_VAR_INIT)
    KeVCPR_M_TLFMax_xUnderShtOITR_NFdial = 99999.0F;/* Referenced by: '<S4>/Calib' */
static volatile CONST(float32, VCPR_VAR_INIT) KeVCPR_M_TLFMax_xUnderSht_NFdial =
    0.0F;                              /* Referenced by: '<S5>/Calib' */
static volatile CONST(float32, VCPR_VAR_INIT) KeVCPR_M_TLFMin_ECM_NFdial = 0.0F;/* Referenced by: '<S6>/Calib' */
static volatile CONST(float32, VCPR_VAR_INIT) KeVCPR_M_TLFMin_NFdial = 0.0F;/* Referenced by: '<S7>/Calib' */
static volatile CONST(float32, VCPR_VAR_INIT) KeVCPR_M_TLFMin_xUndersht_NFdial =
    0.0F;                              /* Referenced by: '<S8>/Calib' */
static volatile CONST(float32, VCPR_VAR_INIT) KeVCPR_M_UndrShtTrq_NFdial = 0.0F;/* Referenced by: '<S9>/Calib' */
static volatile CONST(float32, VCPR_VAR_INIT) KeVCPR_r_BlendRate_NFdial = 0.0F;/* Referenced by: '<S10>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_VCPR
#include "MemMap.h"

/* Model step function */
FUNC(void, VCPR_CODE) VCPR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VCPR_NF_PwrOn'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VCPI_NF'
     */
    /* Outport: '<Root>/VeVCPR_M_TLFMin' incorporates:
     *  Constant: '<S7>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMin'
     */
    (void)Rte_Write_VeVCPR_M_TLFMin_Value(KeVCPR_M_TLFMin_NFdial);

    /* Outport: '<Root>/VeVCPR_M_TLFMax' incorporates:
     *  Constant: '<S3>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMax'
     */
    (void)Rte_Write_VeVCPR_M_TLFMax_Value(KeVCPR_M_TLFMax_NFdial);

    /* Outport: '<Root>/VeVCPR_M_TLFMin_xUndrSht' incorporates:
     *  Constant: '<S8>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMin_xUndrSht'
     */
    (void)Rte_Write_VeVCPR_M_TLFMin_xUndrSht_Value
        (KeVCPR_M_TLFMin_xUndersht_NFdial);

    /* Outport: '<Root>/VeVCPR_r_TLFMinBlendRate' incorporates:
     *  Constant: '<S10>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_r_TLFMinBlendRate'
     */
    (void)Rte_Write_VeVCPR_r_TLFMinBlendRate_Value(KeVCPR_r_BlendRate_NFdial);

    /* Outport: '<Root>/VeVCPR_M_TLFMax_xUndrSht' incorporates:
     *  Constant: '<S5>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMax_xUndrSht'
     */
    (void)Rte_Write_VeVCPR_M_TLFMax_xUndrSht_Value
        (KeVCPR_M_TLFMax_xUnderSht_NFdial);

    /* Outport: '<Root>/VeVCPR_M_TLFMax_xUndrShtOITR' incorporates:
     *  Constant: '<S4>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMax_xUndrShtOITR'
     */
    (void)Rte_Write_VeVCPR_M_TLFMax_xUndrShtOITR_Value
        (KeVCPR_M_TLFMax_xUnderShtOITR_NFdial);

    /* Outport: '<Root>/VeVCPR_M_UndrShtTrq' incorporates:
     *  Constant: '<S9>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_UndrShtTrq'
     */
    (void)Rte_Write_VeVCPR_M_UndrShtTrq_Value(KeVCPR_M_UndrShtTrq_NFdial);

    /* Outport: '<Root>/VeVCPR_M_TLFMin_ECM' incorporates:
     *  Constant: '<S6>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMin_ECM'
     */
    (void)Rte_Write_VeVCPR_M_TLFMin_ECM_Value(KeVCPR_M_TLFMin_ECM_NFdial);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, VCPR_CODE) VCPR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VCPR_NF_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VCPI_NF'
     */
    /* SystemInitialize for Outport: '<Root>/VeVCPR_M_TLFMin' incorporates:
     *  Constant: '<S7>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMin'
     */
    (void)Rte_Write_VeVCPR_M_TLFMin_Value(KeVCPR_M_TLFMin_NFdial);

    /* SystemInitialize for Outport: '<Root>/VeVCPR_M_TLFMax' incorporates:
     *  Constant: '<S3>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMax'
     */
    (void)Rte_Write_VeVCPR_M_TLFMax_Value(KeVCPR_M_TLFMax_NFdial);

    /* SystemInitialize for Outport: '<Root>/VeVCPR_M_TLFMin_xUndrSht' incorporates:
     *  Constant: '<S8>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMin_xUndrSht'
     */
    (void)Rte_Write_VeVCPR_M_TLFMin_xUndrSht_Value
        (KeVCPR_M_TLFMin_xUndersht_NFdial);

    /* SystemInitialize for Outport: '<Root>/VeVCPR_r_TLFMinBlendRate' incorporates:
     *  Constant: '<S10>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_r_TLFMinBlendRate'
     */
    (void)Rte_Write_VeVCPR_r_TLFMinBlendRate_Value(KeVCPR_r_BlendRate_NFdial);

    /* SystemInitialize for Outport: '<Root>/VeVCPR_M_TLFMax_xUndrSht' incorporates:
     *  Constant: '<S5>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMax_xUndrSht'
     */
    (void)Rte_Write_VeVCPR_M_TLFMax_xUndrSht_Value
        (KeVCPR_M_TLFMax_xUnderSht_NFdial);

    /* SystemInitialize for Outport: '<Root>/VeVCPR_M_TLFMax_xUndrShtOITR' incorporates:
     *  Constant: '<S4>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMax_xUndrShtOITR'
     */
    (void)Rte_Write_VeVCPR_M_TLFMax_xUndrShtOITR_Value
        (KeVCPR_M_TLFMax_xUnderShtOITR_NFdial);

    /* SystemInitialize for Outport: '<Root>/VeVCPR_M_UndrShtTrq' incorporates:
     *  Constant: '<S9>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_UndrShtTrq'
     */
    (void)Rte_Write_VeVCPR_M_UndrShtTrq_Value(KeVCPR_M_UndrShtTrq_NFdial);

    /* SystemInitialize for Outport: '<Root>/VeVCPR_M_TLFMin_ECM' incorporates:
     *  Constant: '<S6>/Calib'
     *  SignalConversion generated from: '<S2>/VCPR_M_TLFMin_ECM'
     */
    (void)Rte_Write_VeVCPR_M_TLFMin_ECM_Value(KeVCPR_M_TLFMin_ECM_NFdial);

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
