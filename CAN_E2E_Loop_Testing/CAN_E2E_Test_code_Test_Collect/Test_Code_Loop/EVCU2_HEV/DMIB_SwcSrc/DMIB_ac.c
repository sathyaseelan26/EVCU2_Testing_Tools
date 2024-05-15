/*
 * File: DMIB_ac.c
 *
 * Code generated for Simulink model 'DMIB_ac'.
 *
 * Model version                  : 4.239
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:25:02 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DMIB_ac.h"

/* Named constants for Chart: '<S14>/AntiSpkFil' */
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence
#define DMIB_ac_IN_FILTERING           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence
#define DMIB_ac_IN_NORMAL              ((uint8)2U)
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
#define START_SEC_CALIB_UNSPECIFIED_DMIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_Cnt_PadLvrStsVoltSpikeThd =
    100.0F;        /* Referenced by: '<S95>/KeDMIB_Cnt_PadLvrStsVoltSpikeThd' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(uint16, DMIB_VAR_INIT) KeDMIB_Cnt_STBFailLimPadLvr = 1U;
                 /* Referenced by: '<S18>/KeTAIB_Cnt_STBFailLimHghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(uint16, DMIB_VAR_INIT) KeDMIB_Cnt_STBSmplLimPadLvr = 3U;
                 /* Referenced by: '<S19>/KeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(uint16, DMIB_VAR_INIT) KeDMIB_Cnt_STGFailLimPadLvr = 1U;
                 /* Referenced by: '<S38>/KeTAIB_Cnt_STGFailLimHghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(uint16, DMIB_VAR_INIT) KeDMIB_Cnt_STGSmplLimPadLvr = 3U;
                 /* Referenced by: '<S40>/KeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_U_PadLvrInit = 0.0F;
              /* Referenced by: '<S9>/KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_U_PadLvrLvlStBothPrs = 4.0F;
                            /* Referenced by: '<S77>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_U_PadLvrLvlStDownShift =
    3.0F;                   /* Referenced by: '<S78>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_U_PadLvrLvlStIdle = 1.0F;
                            /* Referenced by: '<S76>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_U_PadLvrLvlStTol = 0.2F;
                            /* Referenced by: '<S82>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_U_PadLvrLvlStUpShift = 2.0F;
                            /* Referenced by: '<S79>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_U_PadLvrStsVoltSpikeThd =
    5.0F;            /* Referenced by: '<S96>/KeDMIB_U_PadLvrStsVoltSpikeThd' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_U_STBCktHiFltLim_PadLvr =
    4.95F;    /* Referenced by: '<S21>/KeTAIB_U_STBCktHiFltLim_HghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_U_STGCktLowFltLim_PadLvr =
    0.05F;   /* Referenced by: '<S41>/KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(boolean, DMIB_VAR_INIT) KeDMIB_b_LtchEnblPadLvrSTB = 1;
              /* Referenced by: '<S20>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(boolean, DMIB_VAR_INIT) KeDMIB_b_LtchEnblPadLvrSTG = 1;
              /* Referenced by: '<S39>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(boolean, DMIB_VAR_INIT) KeDMIB_b_PadLvrStsBypEnbl = 0;
                          /* Referenced by: '<S62>/KeDMIB_b_PadLvrStsBypEnbl' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(boolean, DMIB_VAR_INIT) KeDMIB_b_PadLvrStsRcvryEnbl = 0;
                        /* Referenced by: '<S64>/KeDMIB_b_PadLvrStsRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(boolean, DMIB_VAR_INIT) KeDMIB_b_STBDiagEnbl_PadLvr = 1;
                 /* Referenced by: '<S22>/KeTAIB_b_STBDiagEnbl_HghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(boolean, DMIB_VAR_INIT) KeDMIB_b_STGDiagEnbl_PadLvr = 1;
                 /* Referenced by: '<S42>/KeTAIB_b_STGDiagEnbl_HghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(TeDMIR_e_PadLvrSts, DMIB_VAR_INIT) KeDMIB_e_PadLvrStsByp =
    CeDMIR_e_Init;            /* Referenced by: '<S63>/KeDMIB_e_PadLvrStsByp' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(TeDMIR_e_PadLvrSts, DMIB_VAR_INIT) KeDMIB_e_PadLvrStsRcvry
    = CeDMIR_e_Init;        /* Referenced by: '<S65>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_k_PadLvrStsVoltFiltGx =
    1.0F;              /* Referenced by: '<S97>/KeDMIB_k_PadLvrStsVoltFiltGx' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_t_PadLvrLvlStDebounce =
    0.05F;                  /* Referenced by: '<S80>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static volatile CONST(float32, DMIB_VAR_INIT) KeDMIB_t_PadLvrLvlStErrDeb = 5.0F;
                            /* Referenced by: '<S81>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_DMIB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static VAR(uint16, DMIB_VAR_INIT) VeDMIB_Cnt_STBFailPadLvr;/* '<S31>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static VAR(uint16, DMIB_VAR_INIT) VeDMIB_Cnt_STBSmplPadLvr;/* '<S32>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static VAR(uint16, DMIB_VAR_INIT) VeDMIB_Cnt_STGFailPadLvr;/* '<S51>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static VAR(uint16, DMIB_VAR_INIT) VeDMIB_Cnt_STGSmplPadLvr;/* '<S52>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static VAR(float32, DMIB_VAR_INIT) VeDMIB_U_PadLvrStsVolt;/* '<S101>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static VAR(float32, DMIB_VAR_INIT) VeDMIB_U_PadLvrStsVoltRaw;/* '<S14>/AntiSpkFil' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
#include "MemMap.h"

VAR(B_DMIB_ac_T, DMIB_VAR_INIT) DMIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
#include "MemMap.h"

VAR(DW_DMIB_ac_T, DMIB_VAR_INIT) DMIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
#include "MemMap.h"
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static FUNC(void, DMIB_CODE_LOCAL) DMIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static FUNC(void, DMIB_CODE_LOCAL) DMIB_ac_Init_n(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static FUNC(void, DMIB_CODE_LOCAL) DMIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static FUNC(void, DMIB_CODE_LOCAL) DMIB_ac_ClosedInterval(VAR(float32, AUTOMATIC)
    rtu_u, VAR(float32, AUTOMATIC) rtu_MN, VAR(float32, AUTOMATIC) rtu_MX, P2VAR
    (B_ClosedInterval_DMIB_ac_T, AUTOMATIC, DMIB_VAR_INIT) localB);

#endif

/*
 * Output and update for enable system:
 *    '<S23>/Fail'
 *    '<S43>/Fail'
 */
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static FUNC(void, DMIB_CODE_LOCAL) DMIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S23>/Fail' incorporates:
     *  EnablePort: '<S27>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S27>/FaultSts' incorporates:
         *  Constant: '<S33>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S23>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S23>/Init'
 *    '<S43>/Init'
 */
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static FUNC(void, DMIB_CODE_LOCAL) DMIB_ac_Init_n(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S23>/Init' incorporates:
     *  EnablePort: '<S28>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S28>/FaultSts' incorporates:
         *  Constant: '<S34>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S23>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S23>/Pass'
 *    '<S43>/Pass'
 */
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static FUNC(void, DMIB_CODE_LOCAL) DMIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S23>/Pass' incorporates:
     *  EnablePort: '<S29>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S29>/FaultSts' incorporates:
         *  Constant: '<S35>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S23>/Pass' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S61>/ClosedInterval'
 *    '<S61>/ClosedInterval1'
 *    '<S61>/ClosedInterval2'
 *    '<S61>/ClosedInterval3'
 */
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

static FUNC(void, DMIB_CODE_LOCAL) DMIB_ac_ClosedInterval(VAR(float32, AUTOMATIC)
    rtu_u, VAR(float32, AUTOMATIC) rtu_MN, VAR(float32, AUTOMATIC) rtu_MX, P2VAR
    (B_ClosedInterval_DMIB_ac_T, AUTOMATIC, DMIB_VAR_INIT) localB)
{
    /* Logic: '<S66>/Logical Operator' incorporates:
     *  RelationalOperator: '<S66>/Relatonal Operator'
     *  RelationalOperator: '<S66>/Relatonal Operator1'
     */
    localB->LogicalOperator = ((rtu_u >= rtu_MN) && (rtu_u <= rtu_MX));
}

#endif

/* Model step function for TID1 */
FUNC(void, DMIB_CODE) DMIB_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    IDTRAdcInpResData tmpRead;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_RelationalOperator3;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_Logical1;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_VeDMIB_b_PadLvrSTB_Failg;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_NOT4;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_AND_er;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_Logical1_m;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_i;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean rtb_AND_b;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    TeDMIR_e_PadLvrSts tmp;

#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    float32 tmp_0;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* SignalConversion generated from: '<S3>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Constant: '<S3>/Constant3'
     *  Constant: '<S76>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S77>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S78>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S79>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S82>/KeDMIB_e_PadLvrStsRcvry'
     *  Inport: '<Root>/VeADCR_U_PaddleShifter_VsADCR_e_CnvnRes'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  SignalConversion generated from: '<S3>/VeDMIB_e_PadLvrSTB_PassFail'
     *  SignalConversion generated from: '<S3>/VeDMIB_e_PadLvrSTG_PassFail'
     *  SignalConversion generated from: '<S3>/VeADFB_b_A2DFault'
     *  SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RgnCntrlSwCktHi'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RgnCntrlSwCktLo'
     *  Sum: '<S61>/Add'
     *  Sum: '<S61>/Add1'
     *  Sum: '<S61>/Add2'
     *  Sum: '<S61>/Add3'
     *  Sum: '<S61>/Add4'
     *  Sum: '<S61>/Add5'
     *  Sum: '<S61>/Add6'
     *  Sum: '<S61>/Add7'
     *  UnitDelay: '<S3>/Unit Delay'
     * */
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    /* Outputs for Atomic SubSystem: '<S3>/PaddleShifter' */
    /* SignalConversion generated from: '<S3>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* SignalConversion generated from: '<S3>/VeADFB_b_A2DFault' incorporates:
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     */
    (void)Rte_Read_VeADFB_b_A2DFault_Value
        (&rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RgnCntrlSwCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RgnCntrlSwCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RgnCntrlSwCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RgnCntrlSwCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RgnCntrlSwCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RgnCntrlSwCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_i);

    /* Outputs for Atomic SubSystem: '<S10>/PaddleShifter' */

    /* RelationalOperator: '<S23>/Relational Operator3' incorporates:
     *  Constant: '<S23>/Constant3'
     *  S-Function (sfix_bitop): '<S23>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_i) & 64U) == 0U);

    /* Logic: '<S15>/Logical Operator1' incorporates:
     *  Logic: '<S16>/Logical Operator1'
     */
    rtb_Logical1_m = !rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

    /* Logic: '<S23>/Logical1' incorporates:
     *  Constant: '<S20>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S22>/KeTAIB_b_STBDiagEnbl_HghRfrgtPSnsr'
     *  Constant: '<S23>/Constant1'
     *  Logic: '<S15>/Logical Operator'
     *  Logic: '<S15>/Logical Operator1'
     *  Logic: '<S23>/Logical Operator'
     *  Logic: '<S23>/Logical10'
     *  Logic: '<S23>/Logical12'
     *  RelationalOperator: '<S23>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S23>/Bitwise Operator3'
     */
    rtb_Logical1 = (((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                      (KeDMIB_b_STBDiagEnbl_PadLvr)) && rtb_Logical1_m) &&
                    ((!KeDMIB_b_LtchEnblPadLvrSTB) || (((((uint32)
                         rtb_TmpSignalConversionAtVeDMAB_y_Stat_i) & 1U) == 0U) ||
                      (!rtb_RelationalOperator3))));

    /* End of Outputs for SubSystem: '<S10>/PaddleShifter' */
    /* Gateway: SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_PaddleShifter_VsADCR_e_CnvnRes(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S10>/PaddleShifter' */
    /* Chart: '<S14>/AntiSpkFil' incorporates:
     *  Constant: '<S95>/KeDMIB_Cnt_PadLvrStsVoltSpikeThd'
     *  Constant: '<S96>/KeDMIB_U_PadLvrStsVoltSpikeThd'
     *  Inport: '<Root>/VeADCR_U_PaddleShifter_VsADCR_e_CnvnRes'
     */
    if (((uint32)DMIB_ac_DW.is_active_c14_DMIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/AntiSpkFil */
        DMIB_ac_DW.is_active_c14_DMIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S94>:8' */
        DMIB_ac_DW.is_c14_DMIB_ac = DMIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S94>:37' */
        DMIB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        VeDMIB_U_PadLvrStsVoltRaw = tmpRead.e_CnvnRes;
    }
    else if (((sint32)DMIB_ac_DW.is_c14_DMIB_ac) == 1)
    {
        /* During 'FILTERING': '<S94>:38' */
        if (DMIB_ac_B.Cnt >= KeDMIB_Cnt_PadLvrStsVoltSpikeThd)
        {
            /* Transition: '<S94>:40' */
            DMIB_ac_DW.is_c14_DMIB_ac = DMIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S94>:37' */
            DMIB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
            VeDMIB_U_PadLvrStsVoltRaw = tmpRead.e_CnvnRes;
        }
        else
        {
            DMIB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S94>:37' */
        tmp_0 = tmpRead.e_CnvnRes - DMIB_ac_B.InputRaw0;
        if ((tmp_0 > KeDMIB_U_PadLvrStsVoltSpikeThd) || (tmp_0 <
                (-KeDMIB_U_PadLvrStsVoltSpikeThd)))
        {
            /* Transition: '<S94>:39' */
            DMIB_ac_DW.is_c14_DMIB_ac = DMIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S94>:38' */
            DMIB_ac_B.Cnt = 0.0F;
        }
        else
        {
            VeDMIB_U_PadLvrStsVoltRaw = tmpRead.e_CnvnRes;
            DMIB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        }
    }

    /* End of Chart: '<S14>/AntiSpkFil' */
    /* End of Outputs for SubSystem: '<S10>/PaddleShifter' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_NOT4);

    /* Outputs for Atomic SubSystem: '<S10>/PaddleShifter' */
    /* RelationalOperator: '<S15>/Relational Operator3' incorporates:
     *  Constant: '<S21>/KeTAIB_U_STBCktHiFltLim_HghRfrgtPSnsr'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    rtb_VeDMIB_b_PadLvrSTB_Failg = (VeDMIB_U_PadLvrStsVoltRaw >
        KeDMIB_U_STBCktHiFltLim_PadLvr);

    /* Logic: '<S17>/NOT4' */
    rtb_NOT4 = (rtb_NOT4 || rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S23>/EdgeFalling1' */
    /* Logic: '<S25>/AND' incorporates:
     *  Logic: '<S25>/OR1'
     *  UnitDelay: '<S25>/Unit Delay'
     */
    rtb_AND_er = ((!rtb_RelationalOperator3) && (DMIB_ac_DW.UnitDelay_DSTATE_na));

    /* Update for UnitDelay: '<S25>/Unit Delay' */
    DMIB_ac_DW.UnitDelay_DSTATE_na = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S23>/EdgeFalling1' */

    /* Logic: '<S23>/Logical5' */
    rtb_RelationalOperator3 = (rtb_NOT4 || rtb_AND_er);

    /* Outputs for Atomic SubSystem: '<S24>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S24>/Counter Reset  Enabled ' */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Logic: '<S24>/Fail Counter Reset'
     *  Logic: '<S24>/NOT6'
     *  Switch: '<S31>/Switch2'
     *  Switch: '<S32>/Switch1'
     *  UnitDelay: '<S24>/Unit Delay'
     *  UnitDelay: '<S24>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3 || (DMIB_ac_DW.UnitDelay_DSTATE_bt)) ||
            (DMIB_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S31>/Switch1' incorporates:
         *  Constant: '<S31>/Constant Value2'
         */
        VeDMIB_Cnt_STBFailPadLvr = 0U;

        /* Switch: '<S32>/Switch1' incorporates:
         *  Constant: '<S32>/Constant Value2'
         */
        VeDMIB_Cnt_STBSmplPadLvr = 0U;
    }
    else
    {
        if (rtb_Logical1 && rtb_VeDMIB_b_PadLvrSTB_Failg)
        {
            /* Switch: '<S31>/Switch1' incorporates:
             *  Constant: '<S31>/Constant Value1'
             *  Sum: '<S31>/Subtraction'
             *  Switch: '<S31>/Switch2'
             *  UnitDelay: '<S31>/Unit Delay'
             */
            VeDMIB_Cnt_STBFailPadLvr = (uint16)(((uint32)
                VeDMIB_Cnt_STBFailPadLvr) + 1U);
        }

        /* Switch: '<S32>/Switch2' */
        if (rtb_Logical1)
        {
            /* Switch: '<S32>/Switch1' incorporates:
             *  Constant: '<S32>/Constant Value1'
             *  Sum: '<S32>/Subtraction'
             *  Switch: '<S32>/Switch2'
             *  UnitDelay: '<S32>/Unit Delay'
             */
            VeDMIB_Cnt_STBSmplPadLvr = (uint16)(((uint32)
                VeDMIB_Cnt_STBSmplPadLvr) + 1U);
        }

        /* End of Switch: '<S32>/Switch2' */
    }

    /* End of Switch: '<S31>/Switch1' */
    /* End of Outputs for SubSystem: '<S24>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S24>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S24>/Greater Than or Equal ' incorporates:
     *  Constant: '<S18>/KeTAIB_Cnt_STBFailLimHghRfrgtPSnsr'
     */
    DMIB_ac_DW.UnitDelay1_DSTATE = (VeDMIB_Cnt_STBFailPadLvr >=
        KeDMIB_Cnt_STBFailLimPadLvr);

    /* Logic: '<S24>/NOT5' incorporates:
     *  Constant: '<S19>/KeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr'
     *  Logic: '<S24>/NOT3'
     *  RelationalOperator: '<S24>/Less Than  or Equal'
     */
    rtb_Logical1 = ((VeDMIB_Cnt_STBSmplPadLvr >= KeDMIB_Cnt_STBSmplLimPadLvr) &&
                    (!DMIB_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S37>/Switch1' incorporates:
     *  Constant: '<S30>/Constant Value'
     *  DataStoreWrite: '<S15>/Data Store Write1'
     *  Switch: '<S36>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1)
        {
            /* MinMax: '<S30>/Minimum2' incorporates:
             *  DataStoreRead: '<S15>/Data Store Read1'
             *  Switch: '<S36>/Switch1'
             */
            if (VeDMIB_Cnt_STBFailPadLvr > DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTB_MFOP)
            {
                /* DataStoreWrite: '<S15>/Data Store Write1' incorporates:
                 *  Switch: '<S36>/Switch1'
                 */
                DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTB_MFOP = VeDMIB_Cnt_STBFailPadLvr;
            }

            /* End of MinMax: '<S30>/Minimum2' */
        }
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S23>/Fail' */
    DMIB_ac_Fail(DMIB_ac_DW.UnitDelay1_DSTATE, &DMIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S23>/Fail' */

    /* Outputs for Enabled SubSystem: '<S23>/Init' */
    DMIB_ac_Init_n(rtb_RelationalOperator3, &DMIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S23>/Init' */

    /* Outputs for Enabled SubSystem: '<S23>/Pass' */
    DMIB_ac_Pass(rtb_Logical1, &DMIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S23>/Pass' */

    /* RelationalOperator: '<S43>/Relational Operator3' incorporates:
     *  Constant: '<S43>/Constant3'
     *  S-Function (sfix_bitop): '<S43>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S43>/EdgeFalling1' */
    /* Logic: '<S43>/Logical Operator' incorporates:
     *  Logic: '<S45>/OR1'
     */
    rtb_AND_er = !rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S43>/EdgeFalling1' */

    /* Logic: '<S43>/Logical1' incorporates:
     *  Constant: '<S39>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S42>/KeTAIB_b_STGDiagEnbl_HghRfrgtPSnsr'
     *  Constant: '<S43>/Constant1'
     *  Logic: '<S16>/Logical Operator'
     *  Logic: '<S43>/Logical Operator'
     *  Logic: '<S43>/Logical10'
     *  Logic: '<S43>/Logical12'
     *  RelationalOperator: '<S43>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S43>/Bitwise Operator3'
     */
    rtb_Logical1_m = (((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                        (KeDMIB_b_STGDiagEnbl_PadLvr)) && rtb_Logical1_m) &&
                      ((!KeDMIB_b_LtchEnblPadLvrSTG) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U)
                        || rtb_AND_er)));

    /* RelationalOperator: '<S16>/Relational Operator1' incorporates:
     *  Constant: '<S41>/KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (VeDMIB_U_PadLvrStsVoltRaw <
        KeDMIB_U_STGCktLowFltLim_PadLvr);

    /* Outputs for Atomic SubSystem: '<S43>/EdgeFalling1' */
    /* Logic: '<S45>/AND' incorporates:
     *  UnitDelay: '<S45>/Unit Delay'
     */
    rtb_AND_er = (rtb_AND_er && (DMIB_ac_DW.UnitDelay_DSTATE_j4));

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    DMIB_ac_DW.UnitDelay_DSTATE_j4 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S43>/EdgeFalling1' */

    /* Logic: '<S43>/Logical5' */
    rtb_NOT4 = (rtb_NOT4 || rtb_AND_er);

    /* UnitDelay: '<S44>/Unit Delay1' incorporates:
     *  UnitDelay: '<S24>/Unit Delay'
     */
    DMIB_ac_DW.UnitDelay_DSTATE_bt = DMIB_ac_DW.UnitDelay1_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S44>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S44>/Counter Reset  Enabled ' */
    /* Switch: '<S51>/Switch1' incorporates:
     *  Logic: '<S44>/Fail Counter Reset'
     *  Logic: '<S44>/NOT6'
     *  Switch: '<S51>/Switch2'
     *  Switch: '<S52>/Switch1'
     *  UnitDelay: '<S24>/Unit Delay'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    if ((rtb_NOT4 || (DMIB_ac_DW.UnitDelay_DSTATE_np)) ||
            (DMIB_ac_DW.UnitDelay_DSTATE_bt))
    {
        /* Switch: '<S51>/Switch1' incorporates:
         *  Constant: '<S51>/Constant Value2'
         */
        VeDMIB_Cnt_STGFailPadLvr = 0U;

        /* Switch: '<S52>/Switch1' incorporates:
         *  Constant: '<S52>/Constant Value2'
         */
        VeDMIB_Cnt_STGSmplPadLvr = 0U;
    }
    else
    {
        if (rtb_Logical1_m && rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* Switch: '<S51>/Switch1' incorporates:
             *  Constant: '<S51>/Constant Value1'
             *  Sum: '<S51>/Subtraction'
             *  Switch: '<S51>/Switch2'
             *  UnitDelay: '<S51>/Unit Delay'
             */
            VeDMIB_Cnt_STGFailPadLvr = (uint16)(((uint32)
                VeDMIB_Cnt_STGFailPadLvr) + 1U);
        }

        /* Switch: '<S52>/Switch2' */
        if (rtb_Logical1_m)
        {
            /* Switch: '<S52>/Switch1' incorporates:
             *  Constant: '<S52>/Constant Value1'
             *  Sum: '<S52>/Subtraction'
             *  Switch: '<S52>/Switch2'
             *  UnitDelay: '<S52>/Unit Delay'
             */
            VeDMIB_Cnt_STGSmplPadLvr = (uint16)(((uint32)
                VeDMIB_Cnt_STGSmplPadLvr) + 1U);
        }

        /* End of Switch: '<S52>/Switch2' */
    }

    /* End of Switch: '<S51>/Switch1' */
    /* End of Outputs for SubSystem: '<S44>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S44>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S44>/Greater Than or Equal ' incorporates:
     *  Constant: '<S38>/KeTAIB_Cnt_STGFailLimHghRfrgtPSnsr'
     */
    DMIB_ac_DW.UnitDelay1_DSTATE_j = (VeDMIB_Cnt_STGFailPadLvr >=
        KeDMIB_Cnt_STGFailLimPadLvr);

    /* Logic: '<S44>/NOT5' incorporates:
     *  Constant: '<S40>/KeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr'
     *  Logic: '<S44>/NOT3'
     *  RelationalOperator: '<S44>/Less Than  or Equal'
     */
    DMIB_ac_DW.UnitDelay_DSTATE_np = ((VeDMIB_Cnt_STGSmplPadLvr >=
        KeDMIB_Cnt_STGSmplLimPadLvr) && (!DMIB_ac_DW.UnitDelay1_DSTATE_j));

    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S50>/Constant Value'
     *  DataStoreWrite: '<S16>/Data Store Write1'
     *  Switch: '<S56>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTG_MFOP = 0U;
    }
    else
    {
        if (DMIB_ac_DW.UnitDelay_DSTATE_np)
        {
            /* MinMax: '<S50>/Minimum2' incorporates:
             *  DataStoreRead: '<S16>/Data Store Read1'
             *  Switch: '<S56>/Switch1'
             */
            if (VeDMIB_Cnt_STGFailPadLvr > DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTG_MFOP)
            {
                /* DataStoreWrite: '<S16>/Data Store Write1' incorporates:
                 *  Switch: '<S56>/Switch1'
                 */
                DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTG_MFOP = VeDMIB_Cnt_STGFailPadLvr;
            }

            /* End of MinMax: '<S50>/Minimum2' */
        }
    }

    /* End of Switch: '<S57>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S43>/Fail' */
    DMIB_ac_Fail(DMIB_ac_DW.UnitDelay1_DSTATE_j, &DMIB_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S43>/Fail' */

    /* Outputs for Enabled SubSystem: '<S43>/Init' */
    DMIB_ac_Init_n(rtb_NOT4, &DMIB_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S43>/Init' */

    /* Outputs for Enabled SubSystem: '<S43>/Pass' */
    DMIB_ac_Pass(DMIB_ac_DW.UnitDelay_DSTATE_np, &DMIB_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S43>/Pass' */

    /* Logic: '<S12>/Logical Operator1' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S46>/Constant'
     *  Merge: '<S23>/Merge'
     *  Merge: '<S43>/Merge'
     *  RelationalOperator: '<S23>/Relational Operator'
     *  RelationalOperator: '<S43>/Relational Operator'
     */
    rtb_TmpSignalConversionAtVeADFB_b_A2DFau = (((((uint32)DMIB_ac_B.Merge_n) ==
        CeDFIB_e_Fail) || (((uint32)DMIB_ac_B.Merge) == CeDFIB_e_Fail)) ||
        rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S100>/Switch' incorporates:
     *  Selector: '<S99>/Selector_R'
     */
    if (DMIB_ac_DW.UnitDelay_DSTATE_h)
    {
        /* Assignment: '<S101>/Assignment_y' incorporates:
         *  Switch: '<S100>/Switch'
         */
        VeDMIB_U_PadLvrStsVolt = VeDMIB_U_PadLvrStsVoltRaw;
    }
    else
    {
        /* Assignment: '<S101>/Assignment_y' incorporates:
         *  Constant: '<S97>/KeDMIB_k_PadLvrStsVoltFiltGx'
         *  Product: '<S100>/Product'
         *  Selector: '<S99>/Selector_u'
         *  Selector: '<S99>/Selector_x'
         *  Sum: '<S100>/Difference'
         *  Sum: '<S100>/Sum'
         *  Switch: '<S100>/Switch'
         *  Switch: '<S100>/Switch_E'
         */
        VeDMIB_U_PadLvrStsVolt = ((VeDMIB_U_PadLvrStsVoltRaw -
            VeDMIB_U_PadLvrStsVolt) * KeDMIB_k_PadLvrStsVoltFiltGx) +
            VeDMIB_U_PadLvrStsVolt;
    }

    /* End of Switch: '<S100>/Switch' */

    /* Outputs for Atomic SubSystem: '<S61>/ClosedInterval' */
    DMIB_ac_ClosedInterval(VeDMIB_U_PadLvrStsVolt, KeDMIB_U_PadLvrLvlStIdle -
                           KeDMIB_U_PadLvrLvlStTol, KeDMIB_U_PadLvrLvlStIdle +
                           KeDMIB_U_PadLvrLvlStTol, &DMIB_ac_B.ClosedInterval);

    /* End of Outputs for SubSystem: '<S61>/ClosedInterval' */

    /* Outputs for Atomic SubSystem: '<S61>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S84>/EdgeRising' */
    /* UnitDelay: '<S93>/Unit Delay' incorporates:
     *  Constant: '<S76>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S82>/KeDMIB_e_PadLvrStsRcvry'
     *  Sum: '<S61>/Add'
     *  Sum: '<S61>/Add1'
     *  UnitDelay: '<S89>/Unit Delay'
     */
    rtb_RelationalOperator3 = DMIB_ac_DW.UnitDelay_DSTATE_fy;

    /* Update for UnitDelay: '<S89>/Unit Delay' */
    DMIB_ac_DW.UnitDelay_DSTATE_fy = DMIB_ac_B.ClosedInterval.LogicalOperator;

    /* Switch: '<S84>/Switch1' incorporates:
     *  Constant: '<S61>/Constant4'
     *  Constant: '<S80>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S84>/Constant Value1'
     *  Logic: '<S84>/OR'
     *  Logic: '<S84>/OR1'
     *  Logic: '<S89>/AND'
     *  Logic: '<S89>/OR1'
     *  MinMax: '<S84>/Minimum'
     *  Sum: '<S84>/Summation'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    if ((!DMIB_ac_B.ClosedInterval.LogicalOperator) ||
            ((DMIB_ac_B.ClosedInterval.LogicalOperator) &&
             (!rtb_RelationalOperator3)))
    {
        DMIB_ac_DW.UnitDelay_DSTATE_p = 0.0F;
    }
    else
    {
        DMIB_ac_DW.UnitDelay_DSTATE_p = fminf(KeDMIB_t_PadLvrLvlStDebounce,
            DMIB_ac_DW.UnitDelay_DSTATE_p + 0.0125F);
    }

    /* End of Switch: '<S84>/Switch1' */
    /* End of Outputs for SubSystem: '<S84>/EdgeRising' */

    /* Logic: '<S84>/AND' incorporates:
     *  Constant: '<S80>/KeDMIB_e_PadLvrStsRcvry'
     *  RelationalOperator: '<S84>/Greater  Than'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo =
        ((DMIB_ac_B.ClosedInterval.LogicalOperator) &&
         (DMIB_ac_DW.UnitDelay_DSTATE_p >= KeDMIB_t_PadLvrLvlStDebounce));

    /* End of Outputs for SubSystem: '<S61>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S61>/ClosedInterval1' */
    DMIB_ac_ClosedInterval(VeDMIB_U_PadLvrStsVolt, KeDMIB_U_PadLvrLvlStUpShift -
                           KeDMIB_U_PadLvrLvlStTol, KeDMIB_U_PadLvrLvlStUpShift
                           + KeDMIB_U_PadLvrLvlStTol, &DMIB_ac_B.ClosedInterval1);

    /* End of Outputs for SubSystem: '<S61>/ClosedInterval1' */

    /* Outputs for Atomic SubSystem: '<S61>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S85>/EdgeRising' */
    /* UnitDelay: '<S93>/Unit Delay' incorporates:
     *  Constant: '<S79>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S82>/KeDMIB_e_PadLvrStsRcvry'
     *  Sum: '<S61>/Add2'
     *  Sum: '<S61>/Add3'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    rtb_RelationalOperator3 = DMIB_ac_DW.UnitDelay_DSTATE_kk;

    /* Update for UnitDelay: '<S90>/Unit Delay' */
    DMIB_ac_DW.UnitDelay_DSTATE_kk = DMIB_ac_B.ClosedInterval1.LogicalOperator;

    /* Switch: '<S85>/Switch1' incorporates:
     *  Constant: '<S61>/Constant4'
     *  Constant: '<S80>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S85>/Constant Value1'
     *  Logic: '<S85>/OR'
     *  Logic: '<S85>/OR1'
     *  Logic: '<S90>/AND'
     *  Logic: '<S90>/OR1'
     *  MinMax: '<S85>/Minimum'
     *  Sum: '<S85>/Summation'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    if ((!DMIB_ac_B.ClosedInterval1.LogicalOperator) ||
            ((DMIB_ac_B.ClosedInterval1.LogicalOperator) &&
             (!rtb_RelationalOperator3)))
    {
        DMIB_ac_DW.UnitDelay_DSTATE_f = 0.0F;
    }
    else
    {
        DMIB_ac_DW.UnitDelay_DSTATE_f = fminf(KeDMIB_t_PadLvrLvlStDebounce,
            DMIB_ac_DW.UnitDelay_DSTATE_f + 0.0125F);
    }

    /* End of Switch: '<S85>/Switch1' */
    /* End of Outputs for SubSystem: '<S85>/EdgeRising' */

    /* Logic: '<S85>/AND' incorporates:
     *  Constant: '<S80>/KeDMIB_e_PadLvrStsRcvry'
     *  RelationalOperator: '<S85>/Greater  Than'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    rtb_NOT4 = ((DMIB_ac_B.ClosedInterval1.LogicalOperator) &&
                (DMIB_ac_DW.UnitDelay_DSTATE_f >= KeDMIB_t_PadLvrLvlStDebounce));

    /* End of Outputs for SubSystem: '<S61>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S61>/ClosedInterval2' */
    DMIB_ac_ClosedInterval(VeDMIB_U_PadLvrStsVolt, KeDMIB_U_PadLvrLvlStDownShift
                           - KeDMIB_U_PadLvrLvlStTol,
                           KeDMIB_U_PadLvrLvlStDownShift +
                           KeDMIB_U_PadLvrLvlStTol, &DMIB_ac_B.ClosedInterval2);

    /* End of Outputs for SubSystem: '<S61>/ClosedInterval2' */

    /* Outputs for Atomic SubSystem: '<S61>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S86>/EdgeRising' */
    /* UnitDelay: '<S93>/Unit Delay' incorporates:
     *  Constant: '<S78>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S82>/KeDMIB_e_PadLvrStsRcvry'
     *  Sum: '<S61>/Add4'
     *  Sum: '<S61>/Add5'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtb_RelationalOperator3 = DMIB_ac_DW.UnitDelay_DSTATE_kx;

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    DMIB_ac_DW.UnitDelay_DSTATE_kx = DMIB_ac_B.ClosedInterval2.LogicalOperator;

    /* Switch: '<S86>/Switch1' incorporates:
     *  Constant: '<S61>/Constant4'
     *  Constant: '<S80>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S86>/Constant Value1'
     *  Logic: '<S86>/OR'
     *  Logic: '<S86>/OR1'
     *  Logic: '<S91>/AND'
     *  Logic: '<S91>/OR1'
     *  MinMax: '<S86>/Minimum'
     *  Sum: '<S86>/Summation'
     *  UnitDelay: '<S86>/Unit Delay'
     */
    if ((!DMIB_ac_B.ClosedInterval2.LogicalOperator) ||
            ((DMIB_ac_B.ClosedInterval2.LogicalOperator) &&
             (!rtb_RelationalOperator3)))
    {
        DMIB_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        DMIB_ac_DW.UnitDelay_DSTATE_k = fminf(KeDMIB_t_PadLvrLvlStDebounce,
            DMIB_ac_DW.UnitDelay_DSTATE_k + 0.0125F);
    }

    /* End of Switch: '<S86>/Switch1' */
    /* End of Outputs for SubSystem: '<S86>/EdgeRising' */

    /* Logic: '<S86>/AND' incorporates:
     *  Constant: '<S80>/KeDMIB_e_PadLvrStsRcvry'
     *  RelationalOperator: '<S86>/Greater  Than'
     *  UnitDelay: '<S86>/Unit Delay'
     */
    rtb_Logical1_m = ((DMIB_ac_B.ClosedInterval2.LogicalOperator) &&
                      (DMIB_ac_DW.UnitDelay_DSTATE_k >=
                       KeDMIB_t_PadLvrLvlStDebounce));

    /* End of Outputs for SubSystem: '<S61>/Turn On Delay Time2' */

    /* Outputs for Atomic SubSystem: '<S61>/ClosedInterval3' */
    DMIB_ac_ClosedInterval(VeDMIB_U_PadLvrStsVolt, KeDMIB_U_PadLvrLvlStBothPrs -
                           KeDMIB_U_PadLvrLvlStTol, KeDMIB_U_PadLvrLvlStBothPrs
                           + KeDMIB_U_PadLvrLvlStTol, &DMIB_ac_B.ClosedInterval3);

    /* End of Outputs for SubSystem: '<S61>/ClosedInterval3' */

    /* Outputs for Atomic SubSystem: '<S61>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S87>/EdgeRising' */
    /* UnitDelay: '<S93>/Unit Delay' incorporates:
     *  Constant: '<S77>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S82>/KeDMIB_e_PadLvrStsRcvry'
     *  Sum: '<S61>/Add6'
     *  Sum: '<S61>/Add7'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtb_RelationalOperator3 = DMIB_ac_DW.UnitDelay_DSTATE_g;

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    DMIB_ac_DW.UnitDelay_DSTATE_g = DMIB_ac_B.ClosedInterval3.LogicalOperator;

    /* Switch: '<S87>/Switch1' incorporates:
     *  Constant: '<S61>/Constant4'
     *  Constant: '<S80>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S87>/Constant Value1'
     *  Logic: '<S87>/OR'
     *  Logic: '<S87>/OR1'
     *  Logic: '<S92>/AND'
     *  Logic: '<S92>/OR1'
     *  MinMax: '<S87>/Minimum'
     *  Sum: '<S87>/Summation'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    if ((!DMIB_ac_B.ClosedInterval3.LogicalOperator) ||
            ((DMIB_ac_B.ClosedInterval3.LogicalOperator) &&
             (!rtb_RelationalOperator3)))
    {
        DMIB_ac_DW.UnitDelay_DSTATE_j = 0.0F;
    }
    else
    {
        DMIB_ac_DW.UnitDelay_DSTATE_j = fminf(KeDMIB_t_PadLvrLvlStDebounce,
            DMIB_ac_DW.UnitDelay_DSTATE_j + 0.0125F);
    }

    /* End of Switch: '<S87>/Switch1' */
    /* End of Outputs for SubSystem: '<S87>/EdgeRising' */

    /* Logic: '<S87>/AND' incorporates:
     *  Constant: '<S80>/KeDMIB_e_PadLvrStsRcvry'
     *  RelationalOperator: '<S87>/Greater  Than'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    rtb_RelationalOperator3 = ((DMIB_ac_B.ClosedInterval3.LogicalOperator) &&
        (DMIB_ac_DW.UnitDelay_DSTATE_j >= KeDMIB_t_PadLvrLvlStDebounce));

    /* End of Outputs for SubSystem: '<S61>/Turn On Delay Time3' */

    /* Logic: '<S61>/Logical1' incorporates:
     *  Logic: '<S61>/Logical'
     */
    rtb_AND_er = ((((!rtb_TmpSignalConversionAtVeDFIR_b_PostCo) && (!rtb_NOT4)) &&
                   (!rtb_Logical1_m)) && (!rtb_RelationalOperator3));

    /* Outputs for Atomic SubSystem: '<S61>/Turn On Delay Time4' */
    /* Outputs for Atomic SubSystem: '<S88>/EdgeRising' */
    /* Logic: '<S93>/AND' incorporates:
     *  Logic: '<S93>/OR1'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    rtb_AND_b = (rtb_AND_er && (!DMIB_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S93>/Unit Delay' */
    DMIB_ac_DW.UnitDelay_DSTATE_c = rtb_AND_er;

    /* End of Outputs for SubSystem: '<S88>/EdgeRising' */

    /* Switch: '<S88>/Switch1' incorporates:
     *  Constant: '<S61>/Constant4'
     *  Constant: '<S81>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S88>/Constant Value1'
     *  Logic: '<S88>/OR'
     *  Logic: '<S88>/OR1'
     *  MinMax: '<S88>/Minimum'
     *  Sum: '<S88>/Summation'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    if ((!rtb_AND_er) || rtb_AND_b)
    {
        DMIB_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        DMIB_ac_DW.UnitDelay_DSTATE = fminf(KeDMIB_t_PadLvrLvlStErrDeb,
            DMIB_ac_DW.UnitDelay_DSTATE + 0.0125F);
    }

    /* End of Switch: '<S88>/Switch1' */
    /* End of Outputs for SubSystem: '<S61>/Turn On Delay Time4' */

    /* Switch: '<S75>/Switch1' incorporates:
     *  Constant: '<S70>/Constant'
     *  Switch: '<S75>/Switch2'
     *  Switch: '<S75>/Switch3'
     *  Switch: '<S75>/Switch4'
     *  UnitDelay: '<S75>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        DMIB_ac_DW.UnitDelay_DSTATE_nn = CeDMIR_e_Idle;
    }
    else if (rtb_NOT4)
    {
        /* Switch: '<S75>/Switch2' incorporates:
         *  Constant: '<S71>/Constant'
         *  Switch: '<S75>/Switch1'
         *  UnitDelay: '<S75>/Unit Delay'
         */
        DMIB_ac_DW.UnitDelay_DSTATE_nn = CeDMIR_e_UpShift;
    }
    else if (rtb_Logical1_m)
    {
        /* Switch: '<S75>/Switch3' incorporates:
         *  Constant: '<S72>/Constant'
         *  Switch: '<S75>/Switch1'
         *  Switch: '<S75>/Switch2'
         *  UnitDelay: '<S75>/Unit Delay'
         */
        DMIB_ac_DW.UnitDelay_DSTATE_nn = CeDMIR_e_DownShift;
    }
    else
    {
        if (rtb_RelationalOperator3)
        {
            /* Switch: '<S75>/Switch4' incorporates:
             *  Constant: '<S73>/Constant'
             *  Switch: '<S75>/Switch1'
             *  Switch: '<S75>/Switch2'
             *  Switch: '<S75>/Switch3'
             *  UnitDelay: '<S75>/Unit Delay'
             */
            DMIB_ac_DW.UnitDelay_DSTATE_nn = CeDMIR_e_BothPrs;
        }
    }

    /* End of Switch: '<S75>/Switch1' */

    /* Switch: '<S60>/Switch' incorporates:
     *  Logic: '<S12>/Logical Operator'
     *  Logic: '<S13>/Logical Operator1'
     */
    if (((!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
            (!rtb_VeDMIB_b_PadLvrSTB_Failg)) &&
            (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau))
    {
        /* Outputs for Atomic SubSystem: '<S61>/Turn On Delay Time4' */
        /* Switch: '<S83>/Switch' incorporates:
         *  Constant: '<S74>/Constant'
         *  Constant: '<S81>/KeDMIB_e_PadLvrStsRcvry'
         *  Logic: '<S88>/AND'
         *  RelationalOperator: '<S88>/Greater  Than'
         *  Switch: '<S60>/Switch'
         *  Switch: '<S75>/Switch1'
         *  UnitDelay: '<S13>/Unit Delay1'
         *  UnitDelay: '<S75>/Unit Delay'
         *  UnitDelay: '<S88>/Unit Delay'
         */
        if (rtb_AND_er && (DMIB_ac_DW.UnitDelay_DSTATE >=
                           KeDMIB_t_PadLvrLvlStErrDeb))
        {
            DMIB_ac_DW.UnitDelay1_DSTATE_je = CeDMIR_e_Error;
        }
        else
        {
            DMIB_ac_DW.UnitDelay1_DSTATE_je = DMIB_ac_DW.UnitDelay_DSTATE_nn;
        }

        /* End of Switch: '<S83>/Switch' */
        /* End of Outputs for SubSystem: '<S61>/Turn On Delay Time4' */
    }

    /* End of Switch: '<S60>/Switch' */

    /* Switch: '<S58>/Switch' incorporates:
     *  Constant: '<S62>/KeDMIB_b_PadLvrStsBypEnbl'
     *  Constant: '<S63>/KeDMIB_e_PadLvrStsByp'
     *  Constant: '<S64>/KeDMIB_b_PadLvrStsRcvryEnbl'
     *  Logic: '<S59>/Logical Operator'
     *  Switch: '<S59>/Switch'
     *  Switch: '<S60>/Switch'
     *  UnitDelay: '<S13>/Unit Delay1'
     */
    if (KeDMIB_b_PadLvrStsBypEnbl)
    {
        tmp = KeDMIB_e_PadLvrStsByp;
    }
    else if ((KeDMIB_b_PadLvrStsRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Switch: '<S59>/Switch' incorporates:
         *  Constant: '<S65>/KeDMIB_e_PadLvrStsRcvry'
         */
        tmp = KeDMIB_e_PadLvrStsRcvry;
    }
    else
    {
        tmp = DMIB_ac_DW.UnitDelay1_DSTATE_je;
    }

    /* End of Switch: '<S58>/Switch' */

    /* Outport: '<Root>/VeDMIB_e_PadLvrSts' incorporates:
     *  SignalConversion: '<S11>/Signal Conversion'
     */
    (void)Rte_Write_VeDMIB_e_PadLvrSts_Value(tmp);

    /* Outport: '<Root>/VeDMIB_b_PadLvrFA' incorporates:
     *  SignalConversion: '<S11>/Signal Conversion1'
     */
    (void)Rte_Write_VeDMIB_b_PadLvrFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Outport: '<Root>/VeDMIB_U_PadLvr' incorporates:
     *  SignalConversion: '<S11>/Signal Conversion2'
     */
    (void)Rte_Write_VeDMIB_U_PadLvr_Value(VeDMIB_U_PadLvrStsVolt);

    /* Update for UnitDelay: '<S24>/Unit Delay' */
    DMIB_ac_DW.UnitDelay_DSTATE_bt = rtb_Logical1;

    /* End of Outputs for SubSystem: '<S10>/PaddleShifter' */

    /* Outport: '<Root>/VeDMIB_e_FaultSts_RgnCntrlSwCktHi' incorporates:
     *  Merge: '<S23>/Merge'
     */
    (void)Rte_Write_VeDMIB_e_FaultSts_RgnCntrlSwCktHi_Value(DMIB_ac_B.Merge);

    /* Outport: '<Root>/VeDMIB_e_FaultSts_RgnCntrlSwCktLo' incorporates:
     *  Merge: '<S43>/Merge'
     */
    (void)Rte_Write_VeDMIB_e_FaultSts_RgnCntrlSwCktLo_Value(DMIB_ac_B.Merge_n);
    DMIB_ac_DW.UnitDelay_DSTATE_h = false;

    /* End of Outputs for SubSystem: '<S3>/PaddleShifter' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, DMIB_CODE) DMIB_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ADIB_PwrOff'
     */
    /* Outport: '<Root>/NeDMIB_Cnt_PadLvrSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)Rte_Write_NeDMIB_Cnt_PadLvrSTG_MFOP_NeDMIB_Cnt_PadLvrSTG_MFOP
        (DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTG_MFOP);

    /* Outport: '<Root>/NeDMIB_Cnt_PadLvrSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)Rte_Write_NeDMIB_Cnt_PadLvrSTB_MFOP_NeDMIB_Cnt_PadLvrSTB_MFOP
        (DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTB_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Model initialize function */
FUNC(void, DMIB_CODE) DMIB_ac_Init(void)
{
    /* Outputs for Atomic SubSystem: '<Root>/Init' */
    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    /* Outputs for Atomic SubSystem: '<S2>/PaddleShifter_Init' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* SystemInitialize for Atomic SubSystem: '<S3>/PaddleShifter' */
    DMIB_ac_DW.UnitDelay_DSTATE_h = true;

    /* Outputs for Atomic SubSystem: '<S4>/PaddleShifter_Init' */
    /* DataStoreWrite: '<S5>/NeCDMR_Cnt_BCIMInternal_MSOF' incorporates:
     *  Inport: '<Root>/NeDMIB_Cnt_PadLvrSTB_MFOP_PM_In'
     */
    (void)Rte_Read_NeDMIB_Cnt_PadLvrSTB_MFOP_Rx_NeDMIB_Cnt_PadLvrSTB_MFOP
        (&DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTB_MFOP);

    /* DataStoreWrite: '<S5>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeDMIB_Cnt_PadLvrSTG_MFOP_PM_In'
     */
    (void)Rte_Read_NeDMIB_Cnt_PadLvrSTG_MFOP_Rx_NeDMIB_Cnt_PadLvrSTG_MFOP
        (&DMIB_ac_DW.NeDMIB_Cnt_PadLvrSTG_MFOP);

    /* Outport: '<Root>/VeDMIB_e_PadLvrSts' incorporates:
     *  Constant: '<S6>/Constant'
     *  SignalConversion: '<S5>/Signal Conversion1'
     */
    (void)Rte_Write_VeDMIB_e_PadLvrSts_Value(CeDMIR_e_Init);

    /* Outport: '<Root>/VeDMIB_U_PadLvr' incorporates:
     *  Constant: '<S9>/KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr'
     */
    (void)Rte_Write_VeDMIB_U_PadLvr_Value(KeDMIB_U_PadLvrInit);

    /* Outport: '<Root>/VeDMIB_e_FaultSts_RgnCntrlSwCktLo' incorporates:
     *  Constant: '<S8>/Constant'
     */
    (void)Rte_Write_VeDMIB_e_FaultSts_RgnCntrlSwCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeDMIB_e_FaultSts_RgnCntrlSwCktHi' incorporates:
     *  Constant: '<S7>/Constant'
     */
    (void)Rte_Write_VeDMIB_e_FaultSts_RgnCntrlSwCktHi_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S4>/PaddleShifter_Init' */
    /* End of Outputs for SubSystem: '<S2>/PaddleShifter_Init' */
#endif

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
    /* End of SystemInitialize for SubSystem: '<S3>/PaddleShifter' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
