/*
 * File: ABCR_ac.c
 *
 * Code generated for Simulink model 'ABCR_ac'.
 *
 * Model version                  : 9.17
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:03:21 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ABCR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_ABCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, ABCR_VAR_INIT) HeABCR_b_Enbl_FdBckCntrlFreeze = 1;/* Referenced by: '<S20>/Calib' */
static volatile CONST(boolean, ABCR_VAR_INIT) HeABCR_b_PwrFdBckCtrl_Enbld = 1;/* Referenced by: '<S15>/Calib' */
static volatile CONST(boolean, ABCR_VAR_INIT) HeABCR_b_UseMtrA = 1;/* Referenced by: '<S21>/Calib' */
static volatile CONST(boolean, ABCR_VAR_INIT) HeABCR_b_UseMtrB = 1;/* Referenced by: '<S22>/Calib' */
static volatile CONST(boolean, ABCR_VAR_INIT) HeABCR_b_UseMtrC = 0;/* Referenced by: '<S23>/Calib' */
static volatile CONST(float32, ABCR_VAR_INIT) HeABCR_t_dT = 0.01F;/* Referenced by:
                                                                   * '<S9>/Calib'
                                                                   * '<S24>/Calib'
                                                                   */
static volatile CONST(uint16, ABCR_VAR_INIT) KeABCR_Cnt_BattPwrCal_Delay = 0U;/* Referenced by: '<S25>/Calib' */
static volatile CONST(float32, ABCR_VAR_INIT) KeABCR_P_PwrFdBckCtrl_Max = 20.0F;/* Referenced by: '<S10>/Calib' */
static volatile CONST(float32, ABCR_VAR_INIT) KeABCR_P_PwrFdBckCtrl_Min = -20.0F;/* Referenced by: '<S11>/Calib' */
static volatile CONST(boolean, ABCR_VAR_INIT)
    KeABCR_b_BattPwrCal_Delay_Wash_Enable = 0;/* Referenced by: '<S26>/Calib' */
static volatile CONST(float32, ABCR_VAR_INIT)
    KeABCR_k_PwrFdBckCtrl_BatPwrFltCoeff = 0.08F;/* Referenced by: '<S27>/Calib' */
static volatile CONST(float32, ABCR_VAR_INIT) KeABCR_k_PwrFdBckCtrl_ErrFltCoeff =
    0.08F;                             /* Referenced by: '<S28>/Calib' */
static volatile CONST(float32, ABCR_VAR_INIT) KeABCR_r_PwrFdbckCtrl_EnblLD =
    -0.01F;                            /* Referenced by: '<S36>/Calib' */
static volatile CONST(float32, ABCR_VAR_INIT) KeABCR_r_PwrFdbckCtrl_EnblLU =
    0.01F;                             /* Referenced by: '<S37>/Calib' */
static volatile CONST(float32, ABCR_VAR_INIT) KeABCR_t_CntrlrResume_Delay = 0.5F;/* Referenced by: '<S29>/Calib' */
static volatile CONST(float32, ABCR_VAR_INIT) KtABCR_k_PwrFdBckCtrl_I_Gain[6] =
{
    3.0F, 3.0F, 1.5F, 0.1F, 0.1F, 0.0F
} ;                                    /* Referenced by: '<S12>/Vector' */

static volatile CONST(float32, ABCR_VAR_INIT) KxABCR_k_PwrFdBckCtrl_I_Gain[6] =
{
    0.0F, 1.0F, 5.0F, 10.0F, 15.0F, 20.0F
} ;                                    /* Referenced by: '<S12>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_ABCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, ABCR_VAR_INIT) VeABCC_P_BatPwrCalc_Error;/* '<S7>/Switch1' */
static VAR(float32, ABCR_VAR_INIT) VeABCC_P_HV_AccPwr_FdBck;/* '<S13>/Switch1' */
static VAR(boolean, ABCR_VAR_INIT) VeABCC_b_BatPwrCLEnbld;/* '<S6>/Logical' */
static VAR(float32, ABCR_VAR_INIT) VeABCC_r_CtrlEnabl_Sclr;/* '<S35>/Sum3' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ABCR
#include "MemMap.h"

CONST(ConstB_ABCR_ac_T, ABCR_VAR_INIT) ABCR_ac_ConstB =
{
    0.0F                               /* '<S40>/Constant Value6' */
};

#define STOP_SEC_CONST_UNSPECIFIED_ABCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"

VAR(B_ABCR_ac_T, ABCR_VAR_INIT) ABCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"

VAR(DW_ABCR_ac_T, ABCR_VAR_INIT) ABCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ABCR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, ABCR_CODE) ABCR_MedTEB(void) /* Explicit Task: MedTEB */
{
    sint32 i;
    float32 rtb_Sum;
    float32 rtb_Sum1;
    float32 rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    sint16 rtb_Gain1_f;
    sint16 rtb_Sum3_b;
    sint16 s33_iter;
    uint16 rtb_BitwiseLogicalOperator3;
    TeHTDR_e_SwitchMd tmpRead_7;
    TeHTDR_e_SwitchMd tmpRead_8;
    TeHTDR_e_SwitchMd tmpRead_9;
    boolean rtb_Logical6[3];
    boolean rtb_AND_h;
    boolean rtb_Logical8;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_a;
    boolean tmpRead_b;
    boolean tmpRead_c;

    /* Inport: '<Root>/VeHTDR_e_MtrC_MdCmnd' */
    (void)Rte_Read_VeHTDR_e_MtrC_MdCmnd_Value(&tmpRead_9);

    /* Inport: '<Root>/VeHTDR_e_MtrB_MdCmnd' */
    (void)Rte_Read_VeHTDR_e_MtrB_MdCmnd_Value(&tmpRead_8);

    /* Inport: '<Root>/VeHTDR_e_MtrA_MdCmnd' */
    (void)Rte_Read_VeHTDR_e_MtrA_MdCmnd_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ABCR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeHVTR_P_HV_AccPwr' incorporates:
     *  Inport: '<Root>/VeHVTR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeHVTR_P_HV_AccPwr_Value
        (&rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ABCC_Power_Feedback_Control'
     */
    /* Logic: '<S7>/Logical6' incorporates:
     *  Constant: '<S19>/Constant'
     *  Constant: '<S21>/Calib'
     *  Constant: '<S22>/Calib'
     *  Constant: '<S23>/Calib'
     *  RelationalOperator: '<S7>/Comparison5'
     */
    rtb_Logical6[0] = ((tmpRead_7 != CeHTDR_e_TorqCntrl) && (HeABCR_b_UseMtrA));
    rtb_Logical6[1] = ((tmpRead_8 != CeHTDR_e_TorqCntrl) && (HeABCR_b_UseMtrB));
    rtb_Logical6[2] = ((tmpRead_9 != CeHTDR_e_TorqCntrl) && (HeABCR_b_UseMtrC));

    /* Logic: '<S7>/Logical7' */
    rtb_Logical8 = rtb_Logical6[0];
    for (i = 0; i < 2; i++)
    {
        rtb_Logical8 = (rtb_Logical8 || (rtb_Logical6[i + 1]));
    }

    /* Logic: '<S7>/Logical8' incorporates:
     *  Constant: '<S20>/Calib'
     *  Logic: '<S7>/Logical7'
     */
    rtb_Logical8 = (rtb_Logical8 && (HeABCR_b_Enbl_FdBckCntrlFreeze));

    /* Outputs for Atomic SubSystem: '<S7>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S30>/EdgeFalling1' */
    /* Logic: '<S34>/AND' incorporates:
     *  Logic: '<S34>/OR1'
     *  UnitDelay: '<S34>/Unit Delay'
     */
    rtb_AND_h = ((!rtb_Logical8) && (ABCR_ac_DW.UnitDelay_DSTATE_g));

    /* Update for UnitDelay: '<S34>/Unit Delay' */
    ABCR_ac_DW.UnitDelay_DSTATE_g = rtb_Logical8;

    /* End of Outputs for SubSystem: '<S30>/EdgeFalling1' */

    /* Switch: '<S30>/Switch' incorporates:
     *  Constant: '<S24>/Calib'
     *  Constant: '<S29>/Calib'
     *  Constant: '<S30>/Constant Value1'
     *  MinMax: '<S30>/Minimum'
     *  Sum: '<S30>/Summation'
     *  UnitDelay: '<S30>/Unit Delay'
     */
    if (rtb_AND_h)
    {
        ABCR_ac_DW.UnitDelay_DSTATE_k = KeABCR_t_CntrlrResume_Delay;
    }
    else
    {
        ABCR_ac_DW.UnitDelay_DSTATE_k = fmaxf(ABCR_ac_DW.UnitDelay_DSTATE_k -
            HeABCR_t_dT, 0.0F);
    }

    /* End of Switch: '<S30>/Switch' */
    /* End of Outputs for SubSystem: '<S7>/Turn Off Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeFCPR_P_FCPS_ActPwr' */
    (void)Rte_Read_VeFCPR_P_FCPS_ActPwr_Value(&rtb_Sum);

    /* Inport: '<Root>/VeHVTR_P_HV_BatPwr' */
    (void)Rte_Read_VeHVTR_P_HV_BatPwr_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ABCR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ABCC_Power_Feedback_Control'
     */
    /* Sum: '<S7>/Sum' */
    rtb_Sum += tmpRead;

    /* Outputs for Atomic SubSystem: '<S7>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S7>/FALSE Constant'
     *  Constant: '<S7>/TRUE Constant'
     *  Switch: '<S17>/Switch2'
     *  UnitDelay: '<S17>/Unit Delay'
     */
    if (false)
    {
        ABCR_ac_DW.UnitDelay_DSTATE_h = rtb_Sum;
    }
    else
    {
        if (true)
        {
            /* UnitDelay: '<S17>/Unit Delay' incorporates:
             *  Constant: '<S27>/Calib'
             *  Product: '<S17>/Multiplication'
             *  Sum: '<S17>/Subtraction'
             *  Sum: '<S17>/Summation'
             *  Switch: '<S17>/Switch2'
             */
            ABCR_ac_DW.UnitDelay_DSTATE_h += (rtb_Sum -
                ABCR_ac_DW.UnitDelay_DSTATE_h) *
                KeABCR_k_PwrFdBckCtrl_BatPwrFltCoeff;
        }
    }

    /* End of Switch: '<S17>/Switch1' */
    /* End of Outputs for SubSystem: '<S7>/Digital Lowpass Reset Enabled' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeHTDR_P_MtrCElecPwrCalcTot' */
    (void)Rte_Read_VeHTDR_P_MtrCElecPwrCalcTot_Value(&rtb_Sum1);

    /* Inport: '<Root>/VeHTDR_P_MtrBElecPwrCalcTot' */
    (void)Rte_Read_VeHTDR_P_MtrBElecPwrCalcTot_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHTDR_P_MtrAElecPwrCalcTot' */
    (void)Rte_Read_VeHTDR_P_MtrAElecPwrCalcTot_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ABCR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ABCC_Power_Feedback_Control'
     */
    /* Sum: '<S16>/Sum3' incorporates:
     *  Constant: '<S16>/Constant Value2'
     *  UnitDelay: '<S16>/Unit Delay1'
     */
    ABCR_ac_DW.UnitDelay1_DSTATE_j = (uint16)(((uint32)((uint16)1U)) + ((uint32)
        ABCR_ac_DW.UnitDelay1_DSTATE_j));

    /* Switch: '<S16>/Switch4' incorporates:
     *  Constant: '<S16>/Constant Value7'
     *  Constant: '<S16>/Constant Value8'
     *  RelationalOperator: '<S16>/Comparison3'
     *  UnitDelay: '<S16>/Unit Delay1'
     */
    if (ABCR_ac_DW.UnitDelay1_DSTATE_j > ((uint16)65535U))
    {
        ABCR_ac_DW.UnitDelay1_DSTATE_j = ((uint16)0U);
    }

    /* End of Switch: '<S16>/Switch4' */

    /* S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator3' incorporates:
     *  UnitDelay: '<S16>/Unit Delay1'
     */
    rtb_BitwiseLogicalOperator3 = (uint16)(ABCR_ac_DW.UnitDelay1_DSTATE_j &
        ((uint16)31U));

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S21>/Calib'
     *  Constant: '<S22>/Calib'
     *  Constant: '<S23>/Calib'
     *  Constant: '<S7>/Constant Value1'
     */
    if (!HeABCR_b_UseMtrA)
    {
        tmpRead_0 = 0.0F;
    }

    if (!HeABCR_b_UseMtrB)
    {
        tmpRead_1 = 0.0F;
    }

    if (!HeABCR_b_UseMtrC)
    {
        rtb_Sum1 = 0.0F;
    }

    /* End of Switch: '<S7>/Switch' */

    /* Sum: '<S7>/Sum1' */
    rtb_Sum1 = ((tmpRead_0 + tmpRead_1) + rtb_Sum1) +
        rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc;

    /* Outputs for Atomic SubSystem: '<S7>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S7>/FALSE Constant1'
     *  Constant: '<S7>/TRUE Constant1'
     *  Switch: '<S18>/Switch2'
     *  UnitDelay: '<S18>/Unit Delay'
     */
    if (false)
    {
        ABCR_ac_DW.UnitDelay_DSTATE_eo = rtb_Sum1;
    }
    else
    {
        if (true)
        {
            /* UnitDelay: '<S18>/Unit Delay' incorporates:
             *  Constant: '<S28>/Calib'
             *  Product: '<S18>/Multiplication'
             *  Sum: '<S18>/Subtraction'
             *  Sum: '<S18>/Summation'
             *  Switch: '<S18>/Switch2'
             */
            ABCR_ac_DW.UnitDelay_DSTATE_eo += (rtb_Sum1 -
                ABCR_ac_DW.UnitDelay_DSTATE_eo) *
                KeABCR_k_PwrFdBckCtrl_ErrFltCoeff;
        }
    }

    /* End of Switch: '<S18>/Switch1' */
    /* End of Outputs for SubSystem: '<S7>/Digital Lowpass Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S16>/Count Down  Reset Enabled' */
    /* Outputs for Enabled SubSystem: '<S16>/WashMemory' incorporates:
     *  EnablePort: '<S32>/Enable'
     */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S16>/TRUE Constant'
     *  Constant: '<S25>/Calib'
     *  Constant: '<S26>/Calib'
     *  Constant: '<S31>/Constant Value'
     *  Logic: '<S31>/AND'
     *  RelationalOperator: '<S31>/Greater  Than'
     *  Switch: '<S31>/Switch2'
     *  UnitDelay: '<S31>/Unit Delay'
     */
    if (KeABCR_b_BattPwrCal_Delay_Wash_Enable)
    {
        /* Gain: '<S32>/Gain1' incorporates:
         *  Constant: '<S16>/Constant Value6'
         *  Constant: '<S25>/Calib'
         *  Sum: '<S16>/Sum1'
         */
        rtb_Gain1_f = (sint16)((uint32)(((uint32)((uint16)(((uint32)
            KeABCR_Cnt_BattPwrCal_Delay) + ((uint32)((uint16)1U))))) * ((uint32)
            ((uint16)1U))));

        /* Sum: '<S32>/Sum3' incorporates:
         *  Constant: '<S32>/Constant Value3'
         *  Gain: '<S32>/Gain'
         */
        rtb_Sum3_b = (sint16)(((sint16)((uint32)(((uint32)((uint16)1U)) *
            ((uint32)rtb_BitwiseLogicalOperator3)))) + 1);

        /* Switch: '<S32>/Switch' incorporates:
         *  Constant: '<S32>/Constant Value2'
         *  RelationalOperator: '<S32>/Comparison'
         *  Sum: '<S32>/Sum1'
         */
        if (((sint16)(rtb_Sum3_b - rtb_Gain1_f)) <= 0)
        {
            /* Switch: '<S32>/Switch' incorporates:
             *  Constant: '<S32>/Constant Value1'
             *  Sum: '<S32>/Sum2'
             */
            rtb_Sum3_b += 32;
        }

        /* End of Switch: '<S32>/Switch' */

        /* Outputs for Iterator SubSystem: '<S32>/ForIterator_SubSys' incorporates:
         *  ForIterator: '<S33>/ForIterator'
         */
        if (rtb_Gain1_f > 32766)
        {
            rtb_Gain1_f = 32766;
        }
        else
        {
            if (rtb_Gain1_f < 0)
            {
                rtb_Gain1_f = 0;
            }
        }

        for (s33_iter = 1; s33_iter <= rtb_Gain1_f; s33_iter++)
        {
            /* Sum: '<S33>/Sum2' incorporates:
             *  Gain: '<S33>/Gain'
             *  Gain: '<S33>/Gain1'
             */
            i = ((sint32)((uint16)((sint32)(((sint32)1) * ((sint32)rtb_Sum3_b)))))
                - ((sint32)((uint16)((sint32)(((sint32)1) * ((sint32)s33_iter)))));
            if (i < 0)
            {
                i = 0;
            }

            /* Assignment: '<S33>/Array Assignment' incorporates:
             *  S-Function (sfix_bitop): '<S33>/Bitwise Logical Operator'
             *  Sum: '<S33>/Sum2'
             *  UnitDelay: '<S18>/Unit Delay'
             */
            ABCR_ac_B.ArrayAssignment_m[i & ((sint32)((uint16)31U))] =
                ABCR_ac_DW.UnitDelay_DSTATE_eo;
        }

        /* End of Outputs for SubSystem: '<S32>/ForIterator_SubSys' */
        ABCR_ac_DW.UnitDelay_DSTATE_l = KeABCR_Cnt_BattPwrCal_Delay;
    }
    else
    {
        if ((true) && (ABCR_ac_DW.UnitDelay_DSTATE_l > ((uint16)0U)))
        {
            /* UnitDelay: '<S31>/Unit Delay' incorporates:
             *  Constant: '<S31>/Constant Value1'
             *  Sum: '<S31>/Subtraction'
             *  Switch: '<S31>/Switch2'
             */
            ABCR_ac_DW.UnitDelay_DSTATE_l -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S31>/Switch1' */
    /* End of Outputs for SubSystem: '<S16>/WashMemory' */
    /* End of Outputs for SubSystem: '<S16>/Count Down  Reset Enabled' */

    /* Assignment: '<S16>/Array Assignment' incorporates:
     *  UnitDelay: '<S18>/Unit Delay'
     */
    ABCR_ac_B.ArrayAssignment[rtb_BitwiseLogicalOperator3] =
        ABCR_ac_DW.UnitDelay_DSTATE_eo;

    /* Outputs for Atomic SubSystem: '<S7>/Turn Off Delay Time' */
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S16>/Constant Value1'
     *  Constant: '<S25>/Calib'
     *  Constant: '<S30>/Constant Value2'
     *  Constant: '<S31>/Constant Value2'
     *  Logic: '<S30>/AND'
     *  RelationalOperator: '<S16>/Comparison1'
     *  RelationalOperator: '<S30>/Greater  Than'
     *  RelationalOperator: '<S31>/Greater  Than1'
     *  Switch: '<S16>/Switch1'
     *  Switch: '<S16>/Switch2'
     *  UnitDelay: '<S30>/Unit Delay'
     *  UnitDelay: '<S31>/Unit Delay'
     */
    if (rtb_Logical8 || (ABCR_ac_DW.UnitDelay_DSTATE_k > 0.0F))
    {
        /* Switch: '<S7>/Switch1' incorporates:
         *  Constant: '<S7>/Constant Value'
         */
        VeABCC_P_BatPwrCalc_Error = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S16>/Count Down  Reset Enabled' */
        if (ABCR_ac_DW.UnitDelay_DSTATE_l > ((uint16)0U))
        {
            /* Switch: '<S16>/Switch1' */
            memcpy(&ABCR_ac_DW.UnitDelay_DSTATE[0],
                   &ABCR_ac_B.ArrayAssignment_m[0], (sizeof(float32)) << 5U);
        }
        else
        {
            if (KeABCR_Cnt_BattPwrCal_Delay < ((uint16)1U))
            {
                /* Switch: '<S16>/Switch1' incorporates:
                 *  Switch: '<S16>/Switch2'
                 *  UnitDelay: '<S16>/Unit Delay'
                 */
                memcpy(&ABCR_ac_DW.UnitDelay_DSTATE[0],
                       &ABCR_ac_B.ArrayAssignment[0], (sizeof(float32)) << 5U);
            }
        }

        /* End of Outputs for SubSystem: '<S16>/Count Down  Reset Enabled' */

        /* Switch: '<S7>/Switch1' incorporates:
         *  Constant: '<S16>/Constant Value1'
         *  Constant: '<S25>/Calib'
         *  RelationalOperator: '<S16>/Comparison1'
         *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator2'
         *  Selector: '<S16>/Selector'
         *  Sum: '<S16>/Sum2'
         *  Sum: '<S7>/Sum3'
         *  Switch: '<S16>/Switch1'
         *  Switch: '<S16>/Switch2'
         *  UnitDelay: '<S17>/Unit Delay'
         *  UnitDelay: '<S7>/Unit Delay2'
         */
        VeABCC_P_BatPwrCalc_Error = (ABCR_ac_DW.UnitDelay_DSTATE_h -
            ABCR_ac_DW.UnitDelay_DSTATE[((uint16)(rtb_BitwiseLogicalOperator3 -
            KeABCR_Cnt_BattPwrCal_Delay)) & ((uint16)31U)]) -
            ABCR_ac_DW.UnitDelay2_DSTATE;
    }

    /* End of Switch: '<S7>/Switch1' */
    /* End of Outputs for SubSystem: '<S7>/Turn Off Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeFCPR_b_FCPS_Curr_FA' */
    (void)Rte_Read_VeFCPR_b_FCPS_Curr_FA_Value(&tmpRead_c);

    /* Inport: '<Root>/VeFCPR_b_FCPS_Volt_FA' */
    (void)Rte_Read_VeFCPR_b_FCPS_Volt_FA_Value(&tmpRead_b);

    /* Inport: '<Root>/VeMSPR_b_MtrC_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrC_SpdFA_Value(&tmpRead_a);

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&tmpRead_6);

    /* Inport: '<Root>/VeMSPR_b_MtrB_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&tmpRead_5);

    /* Inport: '<Root>/VeMSPR_b_MtrA_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&tmpRead_4);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCurrFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatCurrFA_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHVTR_b_HV_VoltFA' */
    (void)Rte_Read_VeHVTR_b_HV_VoltFA_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ABCR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ABCC_Power_Feedback_Control'
     */
    /* Logic: '<S6>/Logical' incorporates:
     *  Constant: '<S15>/Calib'
     *  Logic: '<S6>/Logical1'
     *  Logic: '<S6>/Logical10'
     *  Logic: '<S6>/Logical11'
     *  Logic: '<S6>/Logical2'
     *  Logic: '<S6>/Logical3'
     *  Logic: '<S6>/Logical4'
     *  Logic: '<S6>/Logical9'
     */
    VeABCC_b_BatPwrCLEnbld = (((((((((HeABCR_b_PwrFdBckCtrl_Enbld) &&
        (!tmpRead_2)) && (!tmpRead_3)) && (!tmpRead_4)) && (!tmpRead_5)) &&
        (!tmpRead_a)) && (!tmpRead_b)) && (!tmpRead_c)) && tmpRead_6);

    /* Outputs for Atomic SubSystem: '<S4>/PIControl' */
    /* Switch: '<S13>/Switch' incorporates:
     *  Logic: '<S4>/Logical5'
     */
    if (!VeABCC_b_BatPwrCLEnbld)
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Constant: '<S4>/Constant Value1'
         */
        rtb_Sum1 = 0.0F;
    }
    else
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Abs: '<S4>/Abs'
         *  Constant: '<S9>/Calib'
         *  Lookup_n-D: '<S12>/Vector'
         *  Product: '<S13>/Multiplication1'
         *  Sum: '<S13>/Sum//Sub'
         *  UnitDelay: '<S13>/Unit Delay'
         */
        rtb_Sum1 = ((VeABCC_P_BatPwrCalc_Error * look1_iflf_binlca_16a(fabsf
                      (VeABCC_P_BatPwrCalc_Error), ((const float32 *)
                       &(KxABCR_k_PwrFdBckCtrl_I_Gain[0])), ((const float32 *)
                       &(KtABCR_k_PwrFdBckCtrl_I_Gain[0])), 5U)) * HeABCR_t_dT)
            + ABCR_ac_DW.UnitDelay_DSTATE_m;
    }

    /* End of Switch: '<S13>/Switch' */

    /* Outputs for Atomic SubSystem: '<S13>/integral_term' */
    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S10>/Calib'
     *  RelationalOperator: '<S14>/Relational Operator'
     */
    if (KeABCR_P_PwrFdBckCtrl_Max < rtb_Sum1)
    {
        /* Switch: '<S39>/Switch1' */
        rtb_Sum1 = KeABCR_P_PwrFdBckCtrl_Max;
    }

    /* End of Switch: '<S14>/Switch1' */

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S11>/Calib'
     *  RelationalOperator: '<S14>/Relational Operator1'
     *  UnitDelay: '<S13>/Unit Delay'
     */
    if (rtb_Sum1 > KeABCR_P_PwrFdBckCtrl_Min)
    {
        ABCR_ac_DW.UnitDelay_DSTATE_m = rtb_Sum1;
    }
    else
    {
        ABCR_ac_DW.UnitDelay_DSTATE_m = KeABCR_P_PwrFdBckCtrl_Min;
    }

    /* End of Switch: '<S14>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/integral_term' */

    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S8>/Constant Value'
     *  Constant: '<S8>/Constant Value1'
     *  Switch: '<S8>/Switch'
     */
    if (VeABCC_b_BatPwrCLEnbld)
    {
        /* Switch: '<S13>/Switch1' incorporates:
         *  Constant: '<S4>/Constant Value2'
         *  Product: '<S13>/proportional_term'
         *  Sum: '<S13>/Sum//Sub1'
         *  UnitDelay: '<S13>/Unit Delay'
         */
        VeABCC_P_HV_AccPwr_FdBck = (VeABCC_P_BatPwrCalc_Error * 0.0F) +
            ABCR_ac_DW.UnitDelay_DSTATE_m;
        rtb_Sum1 = 1.0F;
    }
    else
    {
        rtb_Sum1 = 0.0F;
    }

    /* End of Switch: '<S13>/Switch1' */
    /* End of Outputs for SubSystem: '<S4>/PIControl' */

    /* Outputs for Atomic SubSystem: '<S8>/GradientLimiter' */
    /* Sum: '<S35>/Sum2' */
    rtb_Sum1 -= VeABCC_r_CtrlEnabl_Sclr;

    /* Outputs for Atomic SubSystem: '<S35>/Limiter' */
    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S37>/Calib'
     *  RelationalOperator: '<S39>/Relational Operator'
     */
    if (KeABCR_r_PwrFdbckCtrl_EnblLU < rtb_Sum1)
    {
        /* Switch: '<S39>/Switch1' */
        rtb_Sum1 = KeABCR_r_PwrFdbckCtrl_EnblLU;
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Switch: '<S39>/Switch' incorporates:
     *  Constant: '<S36>/Calib'
     *  RelationalOperator: '<S39>/Relational Operator1'
     */
    if (rtb_Sum1 <= KeABCR_r_PwrFdbckCtrl_EnblLD)
    {
        rtb_Sum1 = KeABCR_r_PwrFdbckCtrl_EnblLD;
    }

    /* End of Switch: '<S39>/Switch' */
    /* End of Outputs for SubSystem: '<S35>/Limiter' */

    /* Sum: '<S35>/Sum3' */
    VeABCC_r_CtrlEnabl_Sclr = rtb_Sum1 + VeABCC_r_CtrlEnabl_Sclr;

    /* End of Outputs for SubSystem: '<S8>/GradientLimiter' */

    /* Update for UnitDelay: '<S16>/Unit Delay' */
    memcpy(&ABCR_ac_DW.UnitDelay_DSTATE[0], &ABCR_ac_B.ArrayAssignment[0],
           (sizeof(float32)) << 5U);

    /* Update for UnitDelay: '<S7>/Unit Delay2' */
    ABCR_ac_DW.UnitDelay2_DSTATE = VeABCC_P_HV_AccPwr_FdBck;

    /* Outport: '<Root>/VeABCR_P_HV_AccPwr' incorporates:
     *  Product: '<S5>/Product'
     *  SignalConversion generated from: '<S1>/HV_AccPwr'
     *  Sum: '<S5>/Sum2'
     */
    (void)Rte_Write_VeABCR_P_HV_AccPwr_Value
        (rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc + (VeABCC_P_HV_AccPwr_FdBck *
          VeABCC_r_CtrlEnabl_Sclr));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, ABCR_CODE) ABCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ABCR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ABCO_Output_Initialization'
     */
    /* SignalConversion generated from: '<S40>/LeHVTR_P_HV_AccPwr' */
    ABCR_ac_B.LeHVTR_P_HV_AccPwr = ABCR_ac_ConstB.LeHVTR_P_HV_AccPwr;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeABCR_P_HV_AccPwr' incorporates:
     *  SignalConversion generated from: '<S2>/LeHVTR_P_HV_AccPwr'
     */
    (void)Rte_Write_VeABCR_P_HV_AccPwr_Value(ABCR_ac_B.LeHVTR_P_HV_AccPwr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ABCR_CODE) ABCR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ABCR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ABCO_Output_Initialization'
     */
    /* SystemInitialize for SignalConversion generated from: '<S40>/LeHVTR_P_HV_AccPwr' */
    ABCR_ac_B.LeHVTR_P_HV_AccPwr = ABCR_ac_ConstB.LeHVTR_P_HV_AccPwr;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeABCR_P_HV_AccPwr' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeABCR_P_HV_AccPwr_Value(0.0F);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
