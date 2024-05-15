/*
 * File: PITR_ac.c
 *
 * Code generated for Simulink model 'PITR_ac'.
 *
 * Model version                  : 9.30
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 17:53:13 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PITR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PITR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TeIMOR_e_ECMStatCANC, PITR_VAR_INIT)
    KePITR_e_ECMImmoStatCanC_Dflt = CeIMOR_e_ECMcSNA;/* Referenced by:
                                                      * '<S1>/FsftPITR_e_ECMImmoStatCanCChrt'
                                                      * '<S5>/PokePITR_e_ECMImmoStatCanCChrt'
                                                      */
static volatile CONST(TeIMOR_e_ECMStatCANePT, PITR_VAR_INIT)
    KePITR_e_ECMImmoStatePT_Dflt = CeIMOR_e_ECMeSNA;/* Referenced by:
                                                     * '<S2>/FsftPITR_e_ECMImmoStatePTChrt'
                                                     * '<S6>/PokePITR_e_ECMImmoStatePTChrt'
                                                     */

#define STOP_SEC_CALIB_UNSPECIFIED_PITR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PITR
#include "MemMap.h"

CONST(ConstB_PITR_ac_T, PITR_VAR_INIT) PITR_ac_ConstB =
{
    CeIMOR_e_ECMeIS,                   /* '<S10>/Const3' */
    CeIMOR_e_ECMcIS                    /* '<S10>/Const1' */
};

#define STOP_SEC_CONST_UNSPECIFIED_PITR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PITR
#include "MemMap.h"

VAR(B_PITR_ac_T, PITR_VAR_INIT) PITR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PITR
#include "MemMap.h"

/* Model step function */
FUNC(void, PITR_CODE) FsftPITR_e_ECMImmoStatCanC(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPITR_e_ECMImmoStatCanC' */
    /* Outport: '<Root>/VePITR_b_ECMImmoStatCanC_FA' incorporates:
     *  Chart: '<S1>/FsftPITR_e_ECMImmoStatCanCChrt'
     *  SignalConversion generated from: '<S1>/VePITR_b_ECMImmoStatCanCFA'
     */
    /* Gateway: FsftPITR_e_ECMImmoStatCanC/FsftPITR_e_ECMImmoStatCanCChrt */
    /* During: FsftPITR_e_ECMImmoStatCanC/FsftPITR_e_ECMImmoStatCanCChrt */
    /* Entry Internal: FsftPITR_e_ECMImmoStatCanC/FsftPITR_e_ECMImmoStatCanCChrt */
    /* Transition: '<S7>:2' */
    (void)Rte_Write_VePITR_b_ECMImmoStatCanC_FA_Value(true);

    /* Outport: '<Root>/VePITR_e_ECMImmoStatCanC' incorporates:
     *  Chart: '<S1>/FsftPITR_e_ECMImmoStatCanCChrt'
     *  SignalConversion generated from: '<S1>/VePITR_e_ECMImmoStatCanC'
     */
    (void)Rte_Write_VePITR_e_ECMImmoStatCanC_Value(KePITR_e_ECMImmoStatCanC_Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftPITR_e_ECMImmoStatCanC' */
}

/* Model step function */
FUNC(void, PITR_CODE) FsftPITR_e_ECMImmoStatePT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPITR_e_ECMImmoStatePT' */
    /* Outport: '<Root>/VePITR_b_ECMImmoStatePT_FA' incorporates:
     *  Chart: '<S2>/FsftPITR_e_ECMImmoStatePTChrt'
     *  SignalConversion generated from: '<S2>/VePITR_b_ECMImmoStatePTFA'
     */
    /* Gateway: FsftPITR_e_ECMImmoStatePT/FsftPITR_e_ECMImmoStatePTChrt */
    /* During: FsftPITR_e_ECMImmoStatePT/FsftPITR_e_ECMImmoStatePTChrt */
    /* Entry Internal: FsftPITR_e_ECMImmoStatePT/FsftPITR_e_ECMImmoStatePTChrt */
    /* Transition: '<S8>:2' */
    (void)Rte_Write_VePITR_b_ECMImmoStatePT_FA_Value(true);

    /* Outport: '<Root>/VePITR_e_ECMImmoStatePT' incorporates:
     *  Chart: '<S2>/FsftPITR_e_ECMImmoStatePTChrt'
     *  SignalConversion generated from: '<S2>/VePITR_e_ECMImmoStatePT'
     */
    (void)Rte_Write_VePITR_e_ECMImmoStatePT_Value(KePITR_e_ECMImmoStatePT_Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftPITR_e_ECMImmoStatePT' */
}

/* Model step function */
FUNC(void, PITR_CODE) PokePITR_b_ECMReset(VAR(boolean, AUTOMATIC)
    LePITR_b_ECMReset)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePITR_b_ECMReset' */
    /* Outport: '<Root>/VePITR_b_ECMReset' incorporates:
     *  SignalConversion generated from: '<S4>/VePITR_b_ECMReset'
     *  SignalConversion generated from: '<S4>/LePITR_b_ECMReset'
     */
    /* Gateway: PokePITR_b_ECMReset/PokePITR_b_ECMResetChrt */
    /* During: PokePITR_b_ECMReset/PokePITR_b_ECMResetChrt */
    /* Entry Internal: PokePITR_b_ECMReset/PokePITR_b_ECMResetChrt */
    /* Transition: '<S11>:2' */
    (void)Rte_Write_VePITR_b_ECMReset_Value(LePITR_b_ECMReset);

    /* End of Outputs for SubSystem: '<Root>/PokePITR_b_ECMReset' */
}

/* Model step function */
FUNC(void, PITR_CODE) PokePITR_e_ECMImmoStatCanC(VAR(TeIMOR_e_ECMStatCANC,
    AUTOMATIC) LePITR_e_ECMImmoStatCanC, VAR(boolean, AUTOMATIC)
    LePITR_b_ECMImmoStatCanCFA)
{
    boolean rtb_LePITR_b_ECMImmoStatCanCFA_out_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokePITR_e_ECMImmoStatCanC' */
    /* Chart: '<S5>/PokePITR_e_ECMImmoStatCanCChrt' incorporates:
     *  SignalConversion generated from: '<S5>/LePITR_b_ECMImmoStatCanCFA'
     */
    /* Gateway: PokePITR_e_ECMImmoStatCanC/PokePITR_e_ECMImmoStatCanCChrt */
    /* During: PokePITR_e_ECMImmoStatCanC/PokePITR_e_ECMImmoStatCanCChrt */
    /* Entry Internal: PokePITR_e_ECMImmoStatCanC/PokePITR_e_ECMImmoStatCanCChrt */
    /* Transition: '<S12>:2' */
    if (!LePITR_b_ECMImmoStatCanCFA)
    {
        /* SignalConversion generated from: '<S5>/VePITR_e_ECMImmoStatCanC' incorporates:
         *  Outport: '<Root>/VePITR_e_ECMImmoStatCanC'
         *  SignalConversion generated from: '<S5>/LePITR_e_ECMImmoStatCanC'
         */
        /* Transition: '<S12>:3' */
        /* Transition: '<S12>:15' */
        (void)Rte_Write_VePITR_e_ECMImmoStatCanC_Value(LePITR_e_ECMImmoStatCanC);
        rtb_LePITR_b_ECMImmoStatCanCFA_out_j = false;

        /* Transition: '<S12>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S5>/VePITR_e_ECMImmoStatCanC' incorporates:
         *  Outport: '<Root>/VePITR_e_ECMImmoStatCanC'
         */
        /* Transition: '<S12>:4' */
        (void)Rte_Write_VePITR_e_ECMImmoStatCanC_Value
            (KePITR_e_ECMImmoStatCanC_Dflt);
        rtb_LePITR_b_ECMImmoStatCanCFA_out_j = true;
    }

    /* End of Chart: '<S5>/PokePITR_e_ECMImmoStatCanCChrt' */

    /* Outport: '<Root>/VePITR_b_ECMImmoStatCanC_FA' incorporates:
     *  SignalConversion generated from: '<S5>/VePITR_b_ECMImmoStatCanCFA'
     */
    (void)Rte_Write_VePITR_b_ECMImmoStatCanC_FA_Value
        (rtb_LePITR_b_ECMImmoStatCanCFA_out_j);

    /* End of Outputs for SubSystem: '<Root>/PokePITR_e_ECMImmoStatCanC' */
}

/* Model step function */
FUNC(void, PITR_CODE) PokePITR_e_ECMImmoStatePT(VAR(TeIMOR_e_ECMStatCANePT,
    AUTOMATIC) LePITR_e_ECMImmoStatePT, VAR(boolean, AUTOMATIC)
    LePITR_b_ECMImmoStatePTFA)
{
    boolean rtb_LePITR_b_ECMImmoStatePTFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokePITR_e_ECMImmoStatePT' */
    /* Chart: '<S6>/PokePITR_e_ECMImmoStatePTChrt' incorporates:
     *  SignalConversion generated from: '<S6>/LePITR_b_ECMImmoStatePTFA'
     */
    /* Gateway: PokePITR_e_ECMImmoStatePT/PokePITR_e_ECMImmoStatePTChrt */
    /* During: PokePITR_e_ECMImmoStatePT/PokePITR_e_ECMImmoStatePTChrt */
    /* Entry Internal: PokePITR_e_ECMImmoStatePT/PokePITR_e_ECMImmoStatePTChrt */
    /* Transition: '<S13>:2' */
    if (!LePITR_b_ECMImmoStatePTFA)
    {
        /* SignalConversion generated from: '<S6>/VePITR_e_ECMImmoStatePT' incorporates:
         *  Outport: '<Root>/VePITR_e_ECMImmoStatePT'
         *  SignalConversion generated from: '<S6>/LePITR_e_ECMImmoStatePT'
         */
        /* Transition: '<S13>:3' */
        /* Transition: '<S13>:15' */
        (void)Rte_Write_VePITR_e_ECMImmoStatePT_Value(LePITR_e_ECMImmoStatePT);
        rtb_LePITR_b_ECMImmoStatePTFA_out_b = false;

        /* Transition: '<S13>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S6>/VePITR_e_ECMImmoStatePT' incorporates:
         *  Outport: '<Root>/VePITR_e_ECMImmoStatePT'
         */
        /* Transition: '<S13>:4' */
        (void)Rte_Write_VePITR_e_ECMImmoStatePT_Value
            (KePITR_e_ECMImmoStatePT_Dflt);
        rtb_LePITR_b_ECMImmoStatePTFA_out_b = true;
    }

    /* End of Chart: '<S6>/PokePITR_e_ECMImmoStatePTChrt' */

    /* Outport: '<Root>/VePITR_b_ECMImmoStatePT_FA' incorporates:
     *  SignalConversion generated from: '<S6>/VePITR_b_ECMImmoStatePTFA'
     */
    (void)Rte_Write_VePITR_b_ECMImmoStatePT_FA_Value
        (rtb_LePITR_b_ECMImmoStatePTFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokePITR_e_ECMImmoStatePT' */
}

/* Model step function */
FUNC(void, PITR_CODE) PITR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PITR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ImmoPokes__InitBlock'
     */
    /* SignalConversion generated from: '<S9>/ECMReset_Init' */
    PITR_ac_B.OutportBufferForECMReset_Init = false;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S10>/VePITR_e_ECMImmoStatCanC_Out_Init' incorporates:
     *  Constant: '<S10>/Const1'
     */
    PITR_ac_B.OutportBufferForVePITR_e_ECMImmoStatCanC = PITR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S10>/VePITR_b_ECMImmoStatCanC_FA_Out_Init' */
    PITR_ac_B.OutportBufferForVePITR_b_ECMImmoStatCanC = false;

    /* SignalConversion generated from: '<S10>/VePITR_e_ECMImmoStatePT_Out_Init' incorporates:
     *  Constant: '<S10>/Const3'
     */
    PITR_ac_B.OutportBufferForVePITR_e_ECMImmoStatePT_ = PITR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S10>/VePITR_b_ECMImmoStatePT_FA_Out_Init' */
    PITR_ac_B.OutportBufferForVePITR_b_ECMImmoStatePT_ = false;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VePITR_b_ECMReset' incorporates:
     *  SignalConversion generated from: '<S3>/ECMReset_Init'
     */
    (void)Rte_Write_VePITR_b_ECMReset_Value
        (PITR_ac_B.OutportBufferForECMReset_Init);

    /* Outport: '<Root>/VePITR_b_ECMImmoStatCanC_FA' incorporates:
     *  SignalConversion generated from: '<S3>/VePITR_b_ECMImmoStatCanC_FA_Out_Init'
     */
    (void)Rte_Write_VePITR_b_ECMImmoStatCanC_FA_Value
        (PITR_ac_B.OutportBufferForVePITR_b_ECMImmoStatCanC);

    /* Outport: '<Root>/VePITR_b_ECMImmoStatePT_FA' incorporates:
     *  SignalConversion generated from: '<S3>/VePITR_b_ECMImmoStatePT_FA_Out_Init'
     */
    (void)Rte_Write_VePITR_b_ECMImmoStatePT_FA_Value
        (PITR_ac_B.OutportBufferForVePITR_b_ECMImmoStatePT_);

    /* Outport: '<Root>/VePITR_e_ECMImmoStatCanC' incorporates:
     *  SignalConversion generated from: '<S10>/VePITR_e_ECMImmoStatCanC_Out_Init'
     *  SignalConversion generated from: '<S3>/VePITR_e_ECMImmoStatCanC_Out_Init'
     */
    (void)Rte_Write_VePITR_e_ECMImmoStatCanC_Value
        (PITR_ac_B.OutportBufferForVePITR_e_ECMImmoStatCanC);

    /* Outport: '<Root>/VePITR_e_ECMImmoStatePT' incorporates:
     *  SignalConversion generated from: '<S10>/VePITR_e_ECMImmoStatePT_Out_Init'
     *  SignalConversion generated from: '<S3>/VePITR_e_ECMImmoStatePT_Out_Init'
     */
    (void)Rte_Write_VePITR_e_ECMImmoStatePT_Value
        (PITR_ac_B.OutportBufferForVePITR_e_ECMImmoStatePT_);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, PITR_CODE) PITR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PITR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S10>/VePITR_e_ECMImmoStatCanC_Out_Init' incorporates:
     *  Constant: '<S10>/Const1'
     */
    PITR_ac_B.OutportBufferForVePITR_e_ECMImmoStatCanC = PITR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S10>/VePITR_e_ECMImmoStatePT_Out_Init' incorporates:
     *  Constant: '<S10>/Const3'
     */
    PITR_ac_B.OutportBufferForVePITR_e_ECMImmoStatePT_ = PITR_ac_ConstB.Const3;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VePITR_e_ECMImmoStatCanC' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VePITR_e_ECMImmoStatCanC_Value(CeIMOR_e_ECMcIS);

    /* SystemInitialize for Outport: '<Root>/VePITR_e_ECMImmoStatePT' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VePITR_e_ECMImmoStatePT_Value(CeIMOR_e_ECMeIS);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
