/*
 * File: PMIB_ac.c
 *
 * Code generated for Simulink model 'PMIB_ac'.
 *
 * Model version                  : 4.374
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:14:48 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PMIB_ac.h"

/* Named constants for Chart: '<S12>/AntiSpkFil' */
#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence
#define PMIB_ac_IN_FILTERING           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence
#define PMIB_ac_IN_NORMAL              ((uint8)2U)
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PMIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(uint16, PMIB_VAR_INIT)
    KePMIB_Cnt_EleclOilPmpSpdFb_PrdSpikeThd = 2U;
            /* Referenced by: '<S44>/KePMIB_Cnt_EleclOilPmpSpdFb_PrdSpikeThd' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(uint16, PMIB_VAR_INIT) KePMIB_Cnt_FailLimEleclOilPmpSpdFb =
    1U;               /* Referenced by: '<S15>/KeTAIB_Cnt_FailLimRadFanErrM0' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(uint16, PMIB_VAR_INIT) KePMIB_Cnt_SmplLimEleclOilPmpSpdFb =
    250U;             /* Referenced by: '<S16>/KeTAIB_Cnt_SmplLimRadFanErrM0' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(boolean, PMIB_VAR_INIT) KePMIB_b_DiagEnblSpeedFdbk = 1;
                       /* Referenced by: '<S19>/KeTAIB_b_DiagEnblRadFanErrM0' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(boolean, PMIB_VAR_INIT) KePMIB_b_EleclOilPmp_SpdFdBypEnbl =
    0;            /* Referenced by: '<S39>/KePMIB_b_EleclOilPmp_SpdFdBypEnbl' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(boolean, PMIB_VAR_INIT)
    KePMIB_b_EleclOilPmp_SpdFdRcvryEnbl = 0;
                /* Referenced by: '<S41>/KePMIB_b_EleclOilPmp_SpdFdRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(boolean, PMIB_VAR_INIT) KePMIB_b_LtchEnblEleclOilPmpSpdFb =
    1;        /* Referenced by: '<S18>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(float32, PMIB_VAR_INIT) KePMIB_f_EleclOilPmp_SpdFbRcvry =
    0.0F;           /* Referenced by: '<S42>/KePMIB_f_EleclOilPmp_SpdFbRcvry' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(float32, PMIB_VAR_INIT) KePMIB_f_EleclOilPmp_SpdFdByp =
    0.0F;             /* Referenced by: '<S40>/KePMIB_f_EleclOilPmp_SpdFdByp' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(float32, PMIB_VAR_INIT) KePMIB_f_EleclOilPmp_SpdFdInit =
    0.8F;             /* Referenced by: '<S7>/KePMIB_f_EleclOilPmp_SpdFdInit' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(float32, PMIB_VAR_INIT)
    KePMIB_f_LowFltLim_EleclOilPmpSpdFb = 4.0F;
                       /* Referenced by: '<S17>/KeTAIB_b_DiagEnblRadFanErrM0' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(float32, PMIB_VAR_INIT)
    KePMIB_k_EleclOilPmpSpdFb_PrdFiltGx = 0.8F;
                /* Referenced by: '<S45>/KePMIB_k_EleclOilPmpSpdFb_PrdFiltGx' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static volatile CONST(float32, PMIB_VAR_INIT)
    KePMIB_t_EleclOilPmpSpdFb_PrdSpikeThd = 2.0F;
              /* Referenced by: '<S46>/KePMIB_t_EleclOilPmpSpdFb_PrdSpikeThd' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_PMIB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static VAR(uint16, PMIB_VAR_INIT) VePMIB_Cnt_EleclOilPmpSpdFbFail;/* '<S28>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static VAR(uint16, PMIB_VAR_INIT) VePMIB_Cnt_EleclOilPmpSpdFbSmpl;/* '<S29>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static VAR(float32, PMIB_VAR_INIT) VePMIB_Pct_EOPSpeedFdbk_DC;/* '<S9>/Gain1' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static VAR(boolean, PMIB_VAR_INIT) VePMIB_b_EOPSpeedFdbk_EnbldSts;/* '<S9>/Gain2' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static VAR(boolean, PMIB_VAR_INIT) VePMIB_b_EOPSpeedFdbk_IsPinHi;/* '<S9>/Gain3' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static VAR(float32, PMIB_VAR_INIT) VePMIB_t_EOPSpeedFdbk_PW;/* '<S9>/Gain' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static VAR(float32, PMIB_VAR_INIT) VePMIB_t_EleclOilPmpSpdFbIn_Prd;/* '<S12>/Gain3' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static VAR(float32, PMIB_VAR_INIT) VePMIB_t_EleclOilPmpSpdFb_Prd;/* '<S50>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

static VAR(float32, PMIB_VAR_INIT) VePMIB_t_EleclOilPmpSpdFb_PrdAftAntiSpikeFilt;/* '<S12>/AntiSpkFil' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
#include "MemMap.h"

VAR(B_PMIB_ac_T, PMIB_VAR_INIT) PMIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
#include "MemMap.h"

VAR(DW_PMIB_ac_T, PMIB_VAR_INIT) PMIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMIB
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, PMIB_CODE) PMIB_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean rtb_RelationalOperator3;

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean rtb_Logical1;

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    float32 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean rtb_OR;

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    boolean rtb_AND_e;

#endif

#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Constant: '<S3>/Constant3'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  Inport: '<Root>/VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts'
     *  Inport: '<Root>/VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_t_PwmInp_Prd'
     *  SignalConversion generated from: '<S3>/VePMIB_b_EleclOilPmpSpdFb_FA'
     *  SignalConversion generated from: '<S3>/VePMIB_e_EleclOilPmpSpdFb_PassFail'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck'
     *  UnitDelay: '<S3>/Unit Delay'
     * */
#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    /* Outputs for Atomic SubSystem: '<S3>/EleclOilPmpSpdFb' */
    /* SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);
    (void)Rte_Read_VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_t_PwmInp_Prd
        ((&(VePMIB_t_EleclOilPmpSpdFbIn_Prd)));
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value(&rtb_Logical1);

    /* Outputs for Atomic SubSystem: '<S8>/EleclOilPmpSpdFb' */

    /* RelationalOperator: '<S20>/Relational Operator3' incorporates:
     *  Constant: '<S20>/Constant3'
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  Inport: '<Root>/VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_t_PwmInp_Prd'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Logic: '<S20>/Logical1' incorporates:
     *  Constant: '<S18>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S19>/KeTAIB_b_DiagEnblRadFanErrM0'
     *  Constant: '<S20>/Constant1'
     *  Logic: '<S13>/Logical Operator'
     *  Logic: '<S20>/Logical Operator'
     *  Logic: '<S20>/Logical10'
     *  Logic: '<S20>/Logical12'
     *  RelationalOperator: '<S20>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S20>/Bitwise Operator3'
     */
    rtb_Logical1 = ((rtb_Logical1 && (KePMIB_b_DiagEnblSpeedFdbk)) &&
                    ((!KePMIB_b_LtchEnblEleclOilPmpSpdFb) || (((((uint32)
                         rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
                      (!rtb_RelationalOperator3))));

    /* Chart: '<S12>/AntiSpkFil' incorporates:
     *  Constant: '<S44>/KePMIB_Cnt_EleclOilPmpSpdFb_PrdSpikeThd'
     *  Constant: '<S46>/KePMIB_t_EleclOilPmpSpdFb_PrdSpikeThd'
     */
    /* Gateway: SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/AntiSpkFil */
    if (((uint32)PMIB_ac_DW.is_active_c4_PMIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/AntiSpkFil */
        PMIB_ac_DW.is_active_c4_PMIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/EleclOilPmpSpdFb/EleclOilPmpSpdFb/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S43>:8' */
        PMIB_ac_DW.is_c4_PMIB_ac = PMIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S43>:37' */
        PMIB_ac_B.InputRaw0 = VePMIB_t_EleclOilPmpSpdFbIn_Prd;
        VePMIB_t_EleclOilPmpSpdFb_PrdAftAntiSpikeFilt =
            VePMIB_t_EleclOilPmpSpdFbIn_Prd;
    }
    else if (((sint32)PMIB_ac_DW.is_c4_PMIB_ac) == 1)
    {
        /* During 'FILTERING': '<S43>:38' */
        if (PMIB_ac_B.Cnt >= ((float32)KePMIB_Cnt_EleclOilPmpSpdFb_PrdSpikeThd))
        {
            /* Transition: '<S43>:40' */
            PMIB_ac_DW.is_c4_PMIB_ac = PMIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S43>:37' */
            PMIB_ac_B.InputRaw0 = VePMIB_t_EleclOilPmpSpdFbIn_Prd;
            VePMIB_t_EleclOilPmpSpdFb_PrdAftAntiSpikeFilt =
                VePMIB_t_EleclOilPmpSpdFbIn_Prd;
        }
        else
        {
            PMIB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S43>:37' */
        rtb_Switch1 = VePMIB_t_EleclOilPmpSpdFbIn_Prd - PMIB_ac_B.InputRaw0;
        if ((rtb_Switch1 > KePMIB_t_EleclOilPmpSpdFb_PrdSpikeThd) ||
                (rtb_Switch1 < (-KePMIB_t_EleclOilPmpSpdFb_PrdSpikeThd)))
        {
            /* Transition: '<S43>:39' */
            PMIB_ac_DW.is_c4_PMIB_ac = PMIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S43>:38' */
            PMIB_ac_B.Cnt = 0.0F;
        }
        else
        {
            VePMIB_t_EleclOilPmpSpdFb_PrdAftAntiSpikeFilt =
                VePMIB_t_EleclOilPmpSpdFbIn_Prd;
            PMIB_ac_B.InputRaw0 = VePMIB_t_EleclOilPmpSpdFbIn_Prd;
        }
    }

    /* End of Chart: '<S12>/AntiSpkFil' */

    /* Switch: '<S49>/Switch' incorporates:
     *  Selector: '<S48>/Selector_R'
     */
    if (PMIB_ac_DW.UnitDelay_DSTATE_k)
    {
        /* Assignment: '<S50>/Assignment_y' incorporates:
         *  Switch: '<S35>/Switch'
         */
        VePMIB_t_EleclOilPmpSpdFb_Prd =
            VePMIB_t_EleclOilPmpSpdFb_PrdAftAntiSpikeFilt;
    }
    else
    {
        /* Assignment: '<S50>/Assignment_y' incorporates:
         *  Constant: '<S45>/KePMIB_k_EleclOilPmpSpdFb_PrdFiltGx'
         *  Product: '<S49>/Product'
         *  Selector: '<S48>/Selector_u'
         *  Selector: '<S48>/Selector_x'
         *  Sum: '<S49>/Difference'
         *  Sum: '<S49>/Sum'
         *  Switch: '<S35>/Switch'
         *  Switch: '<S49>/Switch_E'
         */
        VePMIB_t_EleclOilPmpSpdFb_Prd =
            ((VePMIB_t_EleclOilPmpSpdFb_PrdAftAntiSpikeFilt -
              VePMIB_t_EleclOilPmpSpdFb_Prd) *
             KePMIB_k_EleclOilPmpSpdFb_PrdFiltGx) +
            VePMIB_t_EleclOilPmpSpdFb_Prd;
    }

    /* End of Switch: '<S49>/Switch' */

    /* Outputs for Atomic SubSystem: '<S11>/Protected Division' */
    /* Switch: '<S36>/Switch1' incorporates:
     *  Constant: '<S36>/Constant Value1'
     *  RelationalOperator: '<S36>/Not Equal1'
     */
    if (VePMIB_t_EleclOilPmpSpdFb_Prd != 0.0F)
    {
        /* Switch: '<S36>/Switch1' incorporates:
         *  Constant: '<S11>/Constant'
         *  Product: '<S36>/Division'
         */
        rtb_Switch1 = 1.0F / VePMIB_t_EleclOilPmpSpdFb_Prd;
    }
    else
    {
        /* Switch: '<S36>/Switch1' */
        rtb_Switch1 = 3.402823466E+38F;
    }

    /* End of Switch: '<S36>/Switch1' */
    /* End of Outputs for SubSystem: '<S11>/Protected Division' */
    /* End of Outputs for SubSystem: '<S8>/EleclOilPmpSpdFb' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead);
    (void)Rte_Read_VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts(&rtb_OR);

    /* Outputs for Atomic SubSystem: '<S8>/EleclOilPmpSpdFb' */
    /* Logic: '<S13>/OR' incorporates:
     *  Constant: '<S17>/KeTAIB_b_DiagEnblRadFanErrM0'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts'
     *  RelationalOperator: '<S13>/Relational Operator1'
     */
    rtb_OR = (rtb_OR || (rtb_Switch1 < KePMIB_f_LowFltLim_EleclOilPmpSpdFb));

    /* Outputs for Atomic SubSystem: '<S20>/EdgeFalling1' */
    /* Logic: '<S22>/AND' incorporates:
     *  Logic: '<S22>/OR1'
     *  UnitDelay: '<S22>/Unit Delay'
     */
    rtb_AND_e = ((!rtb_RelationalOperator3) && (PMIB_ac_DW.UnitDelay_DSTATE_lh));

    /* Update for UnitDelay: '<S22>/Unit Delay' */
    PMIB_ac_DW.UnitDelay_DSTATE_lh = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S20>/EdgeFalling1' */

    /* Logic: '<S20>/Logical5' incorporates:
     *  Logic: '<S14>/NOT4'
     */
    rtb_RelationalOperator3 = ((tmpRead ||
        rtb_TmpSignalConversionAtVeDFIR_b_PostCo) || rtb_AND_e);

    /* Outputs for Atomic SubSystem: '<S21>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S21>/Counter Reset  Enabled ' */
    /* Switch: '<S28>/Switch1' incorporates:
     *  Logic: '<S21>/Fail Counter Reset'
     *  Logic: '<S21>/NOT6'
     *  Switch: '<S28>/Switch2'
     *  Switch: '<S29>/Switch1'
     *  UnitDelay: '<S21>/Unit Delay'
     *  UnitDelay: '<S21>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3 || (PMIB_ac_DW.UnitDelay_DSTATE_l)) ||
            (PMIB_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S28>/Switch1' incorporates:
         *  Constant: '<S28>/Constant Value2'
         */
        VePMIB_Cnt_EleclOilPmpSpdFbFail = 0U;

        /* Switch: '<S29>/Switch1' incorporates:
         *  Constant: '<S29>/Constant Value2'
         */
        VePMIB_Cnt_EleclOilPmpSpdFbSmpl = 0U;
    }
    else
    {
        if (rtb_Logical1 && rtb_OR)
        {
            /* Switch: '<S28>/Switch1' incorporates:
             *  Constant: '<S28>/Constant Value1'
             *  Sum: '<S28>/Subtraction'
             *  Switch: '<S28>/Switch2'
             *  UnitDelay: '<S28>/Unit Delay'
             */
            VePMIB_Cnt_EleclOilPmpSpdFbFail = (uint16)(((uint32)
                VePMIB_Cnt_EleclOilPmpSpdFbFail) + 1U);
        }

        /* Switch: '<S29>/Switch2' */
        if (rtb_Logical1)
        {
            /* Switch: '<S29>/Switch1' incorporates:
             *  Constant: '<S29>/Constant Value1'
             *  Sum: '<S29>/Subtraction'
             *  Switch: '<S29>/Switch2'
             *  UnitDelay: '<S29>/Unit Delay'
             */
            VePMIB_Cnt_EleclOilPmpSpdFbSmpl = (uint16)(((uint32)
                VePMIB_Cnt_EleclOilPmpSpdFbSmpl) + 1U);
        }

        /* End of Switch: '<S29>/Switch2' */
    }

    /* End of Switch: '<S28>/Switch1' */
    /* End of Outputs for SubSystem: '<S21>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S21>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S21>/Greater Than or Equal ' incorporates:
     *  Constant: '<S15>/KeTAIB_Cnt_FailLimRadFanErrM0'
     */
    PMIB_ac_DW.UnitDelay1_DSTATE = (VePMIB_Cnt_EleclOilPmpSpdFbFail >=
        KePMIB_Cnt_FailLimEleclOilPmpSpdFb);

    /* Logic: '<S21>/NOT5' incorporates:
     *  Constant: '<S16>/KeTAIB_Cnt_SmplLimRadFanErrM0'
     *  Logic: '<S21>/NOT3'
     *  RelationalOperator: '<S21>/Less Than  or Equal'
     */
    PMIB_ac_DW.UnitDelay_DSTATE_l = ((VePMIB_Cnt_EleclOilPmpSpdFbSmpl >=
        KePMIB_Cnt_SmplLimEleclOilPmpSpdFb) && (!PMIB_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S34>/Switch1' incorporates:
     *  Constant: '<S27>/Constant Value'
     *  DataStoreWrite: '<S13>/Data Store Write1'
     *  Switch: '<S33>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMIB_ac_DW.NePMIB_Cnt_EleclOilPmpSpdFb_MFOP = 0U;
    }
    else
    {
        if (PMIB_ac_DW.UnitDelay_DSTATE_l)
        {
            /* MinMax: '<S27>/Minimum2' incorporates:
             *  DataStoreRead: '<S13>/Data Store Read1'
             *  Switch: '<S33>/Switch1'
             */
            if (VePMIB_Cnt_EleclOilPmpSpdFbFail >
                    PMIB_ac_DW.NePMIB_Cnt_EleclOilPmpSpdFb_MFOP)
            {
                /* DataStoreWrite: '<S13>/Data Store Write1' incorporates:
                 *  Switch: '<S33>/Switch1'
                 */
                PMIB_ac_DW.NePMIB_Cnt_EleclOilPmpSpdFb_MFOP =
                    VePMIB_Cnt_EleclOilPmpSpdFbFail;
            }

            /* End of MinMax: '<S27>/Minimum2' */
        }
    }

    /* End of Switch: '<S34>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S20>/Fail' incorporates:
     *  EnablePort: '<S24>/Enable'
     */
    if (PMIB_ac_DW.UnitDelay1_DSTATE)
    {
        /* Merge: '<S20>/Merge' incorporates:
         *  Constant: '<S30>/Constant'
         *  SignalConversion generated from: '<S24>/FaultSts'
         */
        PMIB_ac_B.Merge = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S20>/Fail' */

    /* Outputs for Enabled SubSystem: '<S20>/Init' incorporates:
     *  EnablePort: '<S25>/Enable'
     */
    if (rtb_RelationalOperator3)
    {
        /* Merge: '<S20>/Merge' incorporates:
         *  Constant: '<S31>/Constant'
         *  SignalConversion generated from: '<S25>/FaultSts'
         */
        PMIB_ac_B.Merge = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S20>/Init' */

    /* Outputs for Enabled SubSystem: '<S20>/Pass' incorporates:
     *  EnablePort: '<S26>/Enable'
     */
    if (PMIB_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Merge: '<S20>/Merge' incorporates:
         *  Constant: '<S32>/Constant'
         *  SignalConversion generated from: '<S26>/FaultSts'
         */
        PMIB_ac_B.Merge = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S20>/Pass' */

    /* RelationalOperator: '<S20>/Relational Operator' incorporates:
     *  Constant: '<S23>/Constant'
     *  Merge: '<S20>/Merge'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = (((uint32)PMIB_ac_B.Merge) ==
        CeDFIB_e_Fail);

    /* Switch: '<S38>/Switch' incorporates:
     *  Logic: '<S11>/Logical Operator'
     */
    if (rtb_OR || rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Switch: '<S38>/Switch' incorporates:
         *  UnitDelay: '<S11>/VePMIB_f_EleclOilPmp_SpdFdInit'
         */
        rtb_Switch1 = PMIB_ac_DW.VePMIB_f_EleclOilPmp_SpdFdInit_DSTATE;
    }

    /* End of Switch: '<S38>/Switch' */
    /* End of Outputs for SubSystem: '<S8>/EleclOilPmpSpdFb' */

    /* Gain: '<S9>/Gain3' incorporates:
     *  Inport: '<Root>/VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_b_IsPinHi'
     */
    (void)Rte_Read_VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_b_IsPinHi
        ((&(VePMIB_b_EOPSpeedFdbk_IsPinHi)));

    /* Gain: '<S9>/Gain2' incorporates:
     *  Inport: '<Root>/VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_b_PwmInp_EnbldSts'
     */
    (void)Rte_Read_VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_b_PwmInp_EnbldSts
        ((&(VePMIB_b_EOPSpeedFdbk_EnbldSts)));

    /* Gain: '<S9>/Gain' incorporates:
     *  Inport: '<Root>/VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_t_PwmInp_PW'
     */
    (void)Rte_Read_VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_t_PwmInp_PW
        ((&(VePMIB_t_EOPSpeedFdbk_PW)));

    /* Gain: '<S9>/Gain1' incorporates:
     *  Inport: '<Root>/VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_Pct_PwmInp_DC'
     */
    (void)Rte_Read_VeDIOR_h_ParkPawlEop_PWM_Inp_VeDIOR_Pct_PwmInp_DC
        ((&(VePMIB_Pct_EOPSpeedFdbk_DC)));

    /* Outputs for Atomic SubSystem: '<S8>/EleclOilPmpSpdFb' */
    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S39>/KePMIB_b_EleclOilPmp_SpdFdBypEnbl'
     *  Constant: '<S41>/KePMIB_b_EleclOilPmp_SpdFdRcvryEnbl'
     *  Logic: '<S37>/Logical Operator'
     *  Switch: '<S37>/Switch'
     */
    if (KePMIB_b_EleclOilPmp_SpdFdBypEnbl)
    {
        /* Outport: '<Root>/VePMIB_f_EOP_SpeedFdbk' incorporates:
         *  Constant: '<S40>/KePMIB_f_EleclOilPmp_SpdFdByp'
         *  SignalConversion: '<S9>/Signal Conversion'
         */
        (void)Rte_Write_VePMIB_f_EOP_SpeedFdbk_Value
            (KePMIB_f_EleclOilPmp_SpdFdByp);
    }
    else if ((KePMIB_b_EleclOilPmp_SpdFdRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VePMIB_f_EOP_SpeedFdbk' incorporates:
         *  Constant: '<S42>/KePMIB_f_EleclOilPmp_SpdFbRcvry'
         *  SignalConversion: '<S9>/Signal Conversion'
         *  Switch: '<S37>/Switch'
         */
        (void)Rte_Write_VePMIB_f_EOP_SpeedFdbk_Value
            (KePMIB_f_EleclOilPmp_SpdFbRcvry);
    }
    else
    {
        /* Outport: '<Root>/VePMIB_f_EOP_SpeedFdbk' incorporates:
         *  SignalConversion: '<S9>/Signal Conversion'
         *  Switch: '<S37>/Switch'
         */
        (void)Rte_Write_VePMIB_f_EOP_SpeedFdbk_Value(rtb_Switch1);
    }

    /* End of Switch: '<S35>/Switch' */

    /* Update for UnitDelay: '<S11>/VePMIB_f_EleclOilPmp_SpdFdInit' */
    PMIB_ac_DW.VePMIB_f_EleclOilPmp_SpdFdInit_DSTATE = rtb_Switch1;

    /* End of Outputs for SubSystem: '<S8>/EleclOilPmpSpdFb' */

    /* Outport: '<Root>/VePMIB_b_EOP_SpeedFdbkFA' */
    (void)Rte_Write_VePMIB_b_EOP_SpeedFdbkFA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outport: '<Root>/VePMIB_e_FaultSts_Aux_TF_Pmp_CM_Fdbck' incorporates:
     *  Merge: '<S20>/Merge'
     */
    (void)Rte_Write_VePMIB_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_Value(PMIB_ac_B.Merge);
    PMIB_ac_DW.UnitDelay_DSTATE_k = false;

    /* End of Outputs for SubSystem: '<S3>/EleclOilPmpSpdFb' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, PMIB_CODE) PMIB_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ADIB_PwrOff'
     */
    /* Outport: '<Root>/NePMIB_Cnt_EleclOilPmpSpdFb_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)
        Rte_Write_NePMIB_Cnt_EleclOilPmpSpdFb_MFOP_NePMIB_Cnt_EleclOilPmpSpdFb_MFOP
        (PMIB_ac_DW.NePMIB_Cnt_EleclOilPmpSpdFb_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Model initialize function */
FUNC(void, PMIB_CODE) PMIB_ac_Init(void)
{
    /* Outputs for Atomic SubSystem: '<Root>/Init' */
    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
#if Rte_SysCon_Variant_PMIB_EOPSPDFB_Presence

    /* Outputs for Atomic SubSystem: '<S2>/EleclOilPmp_Init' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* SystemInitialize for Atomic SubSystem: '<S3>/EleclOilPmpSpdFb' */
    PMIB_ac_DW.UnitDelay_DSTATE_k = true;

    /* Outputs for Atomic SubSystem: '<S4>/EleclOilPmp_Init' */
    /* DataStoreWrite: '<S5>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NePMIB_Cnt_EleclOilPmpSpdFb_MFOP_PM_In'
     */
    (void)
        Rte_Read_NePMIB_Cnt_EleclOilPmpSpdFb_MFOP_Rx_NePMIB_Cnt_EleclOilPmpSpdFb_MFOP
        (&PMIB_ac_DW.NePMIB_Cnt_EleclOilPmpSpdFb_MFOP);

    /* StateWriter: '<S5>/State Writer' incorporates:
     *  Constant: '<S7>/KePMIB_f_EleclOilPmp_SpdFdInit'
     */
    PMIB_ac_DW.VePMIB_f_EleclOilPmp_SpdFdInit_DSTATE =
        KePMIB_f_EleclOilPmp_SpdFdInit;

    /* Outport: '<Root>/VePMIB_f_EOP_SpeedFdbk' incorporates:
     *  Constant: '<S7>/KePMIB_f_EleclOilPmp_SpdFdInit'
     *  SignalConversion: '<S5>/Signal Conversion1'
     */
    (void)Rte_Write_VePMIB_f_EOP_SpeedFdbk_Value(KePMIB_f_EleclOilPmp_SpdFdInit);

    /* Outport: '<Root>/VePMIB_e_FaultSts_Aux_TF_Pmp_CM_Fdbck' incorporates:
     *  Constant: '<S6>/Constant'
     */
    (void)Rte_Write_VePMIB_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S4>/EleclOilPmp_Init' */
    /* End of Outputs for SubSystem: '<S2>/EleclOilPmp_Init' */
#endif

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
    /* End of SystemInitialize for SubSystem: '<S3>/EleclOilPmpSpdFb' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
