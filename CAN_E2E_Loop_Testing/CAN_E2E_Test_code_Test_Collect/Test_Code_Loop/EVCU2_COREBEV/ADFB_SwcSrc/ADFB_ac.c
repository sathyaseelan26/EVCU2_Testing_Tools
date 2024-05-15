/*
 * File: ADFB_ac.c
 *
 * Code generated for Simulink model 'ADFB_ac'.
 *
 * Model version                  : 1.75
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:04:06 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ADFB_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_ADFB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(uint16, ADFB_VAR_INIT) KeADFB_Cnt_FailLimA2DFault = 100U;/* Referenced by: '<S10>/Calib' */
static volatile CONST(uint16, ADFB_VAR_INIT) KeADFB_Cnt_SmplLimA2DFault = 150U;/* Referenced by: '<S11>/Calib' */
static volatile CONST(boolean, ADFB_VAR_INIT) KeADFB_b_DiagEnbl_A2DFault = 1;/* Referenced by: '<S12>/Calib' */
static volatile CONST(boolean, ADFB_VAR_INIT) KeADFB_b_LtchEnblA2DFault = 1;
              /* Referenced by: '<S13>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#define STOP_SEC_CALIB_UNSPECIFIED_ADFB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint16, ADFB_VAR_INIT) VeADFB_Cnt_FailLimA2DFault;/* '<S22>/Switch1' */
static VAR(uint16, ADFB_VAR_INIT) VeADFB_Cnt_SmplLimA2DFault;/* '<S23>/Switch1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
#include "MemMap.h"

VAR(B_ADFB_ac_T, ADFB_VAR_INIT) ADFB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
#include "MemMap.h"

VAR(DW_ADFB_ac_T, ADFB_VAR_INIT) ADFB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADFB
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, ADFB_CODE) ADFB_FastTEF(void) /* Explicit Task: FastTEF */
{
    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;
    boolean rtb_AND;
    boolean rtb_Logical1;
    boolean rtb_Logical5;
    boolean rtb_RelationalOperator3;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;
    boolean tmpRead;

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_Logical5);

    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value(&rtb_Logical1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */

    /* SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CM_AD_Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_AD_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_AD_Perf_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* RelationalOperator: '<S14>/Relational Operator3' incorporates:
     *  Constant: '<S14>/Constant3'
     *  S-Function (sfix_bitop): '<S14>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Logic: '<S14>/Logical1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S14>/Constant1'
     *  Logic: '<S14>/Logical Operator'
     *  Logic: '<S14>/Logical10'
     *  Logic: '<S14>/Logical12'
     *  Logic: '<S8>/Logical Operator'
     *  RelationalOperator: '<S14>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S14>/Bitwise Operator3'
     */
    rtb_Logical1 = ((rtb_Logical1 && (KeADFB_b_DiagEnbl_A2DFault)) &&
                    ((!KeADFB_b_LtchEnblA2DFault) || (((((uint32)
                         rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
                      (!rtb_RelationalOperator3))));

    /* Outputs for Atomic SubSystem: '<S14>/EdgeFalling1' */
    /* Logic: '<S16>/AND' incorporates:
     *  Logic: '<S16>/OR1'
     *  UnitDelay: '<S16>/Unit Delay'
     */
    rtb_AND = ((!rtb_RelationalOperator3) && (ADFB_ac_DW.UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S16>/Unit Delay' */
    ADFB_ac_DW.UnitDelay_DSTATE_k = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S14>/EdgeFalling1' */

    /* Logic: '<S14>/Logical5' incorporates:
     *  Logic: '<S9>/NOT4'
     */
    rtb_Logical5 = ((rtb_Logical5 || rtb_TmpSignalConversionAtVeDFIR_b_PostCo) ||
                    rtb_AND);

    /* Outputs for Atomic SubSystem: '<S15>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S15>/Counter Reset  Enabled ' */
    /* Switch: '<S22>/Switch1' incorporates:
     *  Inport: '<Root>/VeHWIO_b_A2DFaultDetectedFromLLD'
     *  Logic: '<S15>/Fail Counter Reset'
     *  Switch: '<S23>/Switch1'
     *  UnitDelay: '<S15>/Unit Delay'
     *  UnitDelay: '<S15>/Unit Delay1'
     */
    if ((rtb_Logical5 || (ADFB_ac_DW.UnitDelay_DSTATE_m)) ||
            (ADFB_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S22>/Switch1' incorporates:
         *  Constant: '<S22>/Constant Value2'
         */
        VeADFB_Cnt_FailLimA2DFault = 0U;

        /* Switch: '<S23>/Switch1' incorporates:
         *  Constant: '<S23>/Constant Value2'
         */
        VeADFB_Cnt_SmplLimA2DFault = 0U;
    }
    else
    {
        (void)Rte_Read_VeHWIO_b_A2DFaultDetectedFromLLD_Value(&tmpRead);

        /* Switch: '<S22>/Switch2' incorporates:
         *  Inport: '<Root>/VeHWIO_b_A2DFaultDetectedFromLLD'
         *  Logic: '<S15>/NOT6'
         */
        if (rtb_Logical1 && tmpRead)
        {
            /* Switch: '<S22>/Switch1' incorporates:
             *  Constant: '<S22>/Constant Value1'
             *  Sum: '<S22>/Subtraction'
             *  Switch: '<S22>/Switch2'
             *  UnitDelay: '<S22>/Unit Delay'
             */
            VeADFB_Cnt_FailLimA2DFault = (uint16)(((uint32)
                VeADFB_Cnt_FailLimA2DFault) + 1U);
        }

        /* End of Switch: '<S22>/Switch2' */

        /* Switch: '<S23>/Switch2' */
        if (rtb_Logical1)
        {
            /* Switch: '<S23>/Switch1' incorporates:
             *  Constant: '<S23>/Constant Value1'
             *  Sum: '<S23>/Subtraction'
             *  Switch: '<S23>/Switch2'
             *  UnitDelay: '<S23>/Unit Delay'
             */
            VeADFB_Cnt_SmplLimA2DFault = (uint16)(((uint32)
                VeADFB_Cnt_SmplLimA2DFault) + 1U);
        }

        /* End of Switch: '<S23>/Switch2' */
    }

    /* End of Switch: '<S22>/Switch1' */
    /* End of Outputs for SubSystem: '<S15>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S15>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S15>/Greater Than or Equal ' incorporates:
     *  Constant: '<S10>/Calib'
     */
    ADFB_ac_DW.UnitDelay1_DSTATE = (VeADFB_Cnt_FailLimA2DFault >=
        KeADFB_Cnt_FailLimA2DFault);

    /* Logic: '<S15>/NOT5' incorporates:
     *  Constant: '<S11>/Calib'
     *  Logic: '<S15>/NOT3'
     *  RelationalOperator: '<S15>/Less Than  or Equal'
     */
    ADFB_ac_DW.UnitDelay_DSTATE_m = ((VeADFB_Cnt_SmplLimA2DFault >=
        KeADFB_Cnt_SmplLimA2DFault) && (!ADFB_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S28>/Switch1' incorporates:
     *  Constant: '<S21>/Constant Value'
     *  DataStoreWrite: '<S8>/Data Store Write1'
     *  Switch: '<S27>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        ADFB_ac_DW.NeADFB_Cnt_A2DFault_MFOP = 0U;
    }
    else
    {
        if (ADFB_ac_DW.UnitDelay_DSTATE_m)
        {
            /* MinMax: '<S21>/Minimum2' incorporates:
             *  DataStoreRead: '<S8>/Data Store Read1'
             *  Switch: '<S27>/Switch1'
             */
            if (VeADFB_Cnt_FailLimA2DFault > ADFB_ac_DW.NeADFB_Cnt_A2DFault_MFOP)
            {
                /* DataStoreWrite: '<S8>/Data Store Write1' incorporates:
                 *  Switch: '<S27>/Switch1'
                 */
                ADFB_ac_DW.NeADFB_Cnt_A2DFault_MFOP = VeADFB_Cnt_FailLimA2DFault;
            }

            /* End of MinMax: '<S21>/Minimum2' */
        }
    }

    /* End of Switch: '<S28>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S14>/Fail' incorporates:
     *  EnablePort: '<S18>/Enable'
     */
    if (ADFB_ac_DW.UnitDelay1_DSTATE)
    {
        /* Merge: '<S14>/Merge' incorporates:
         *  Constant: '<S24>/Constant'
         *  SignalConversion generated from: '<S18>/FaultSts'
         */
        ADFB_ac_B.Merge_j = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S14>/Fail' */

    /* Outputs for Enabled SubSystem: '<S14>/Init' incorporates:
     *  EnablePort: '<S19>/Enable'
     */
    if (rtb_Logical5)
    {
        /* Merge: '<S14>/Merge' incorporates:
         *  Constant: '<S25>/Constant'
         *  SignalConversion generated from: '<S19>/FaultSts'
         */
        ADFB_ac_B.Merge_j = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S14>/Init' */

    /* Outputs for Enabled SubSystem: '<S14>/Pass' incorporates:
     *  EnablePort: '<S20>/Enable'
     */
    if (ADFB_ac_DW.UnitDelay_DSTATE_m)
    {
        /* Merge: '<S14>/Merge' incorporates:
         *  Constant: '<S26>/Constant'
         *  SignalConversion generated from: '<S20>/FaultSts'
         */
        ADFB_ac_B.Merge_j = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S14>/Pass' */

    /* Outport: '<Root>/VeADFB_b_A2DFault' incorporates:
     *  Constant: '<S17>/Constant'
     *  Merge: '<S14>/Merge'
     *  RelationalOperator: '<S14>/Relational Operator'
     */
    (void)Rte_Write_VeADFB_b_A2DFault_Value(((uint32)ADFB_ac_B.Merge_j) ==
        CeDFIB_e_Fail);

    /* Outport: '<Root>/VeADFB_e_FaultSts_CM_AD_Perf' incorporates:
     *  Merge: '<S14>/Merge'
     *  SignalConversion generated from: '<S3>/VeADFB_e_A2DFault_PassFail'
     */
    (void)Rte_Write_VeADFB_e_FaultSts_CM_AD_Perf_Value(ADFB_ac_B.Merge_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, ADFB_CODE) ADFB_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ADFB_PwrOff'
     */
    /* Outport: '<Root>/NeADFB_Cnt_A2DFault_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)Rte_Write_NeADFB_Cnt_A2DFault_MFOP_NeADFB_Cnt_A2DFault_MFOP
        (ADFB_ac_DW.NeADFB_Cnt_A2DFault_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Model initialize function */
FUNC(void, ADFB_CODE) ADFB_ac_Init(void)
{
    {
        uint16 tmpRead;

        /* Inport: '<Root>/NeADFB_Cnt_A2DFault_MFOP_PM_In' */
        (void)Rte_Read_NeADFB_Cnt_A2DFault_MFOP_Rx_NeADFB_Cnt_A2DFault_MFOP
            (&tmpRead);

        /* Outputs for Atomic SubSystem: '<Root>/Init' */
        /* DataStoreWrite: '<S4>/NeCDMR_Cnt_BCIMInternal_MFOP' */
        ADFB_ac_DW.NeADFB_Cnt_A2DFault_MFOP = tmpRead;

        /* Outport: '<Root>/VeADFB_e_FaultSts_CM_AD_Perf' incorporates:
         *  Constant: '<S5>/Constant'
         */
        (void)Rte_Write_VeADFB_e_FaultSts_CM_AD_Perf_Value(CeDFIB_e_Init);

        /* End of Outputs for SubSystem: '<Root>/Init' */
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
