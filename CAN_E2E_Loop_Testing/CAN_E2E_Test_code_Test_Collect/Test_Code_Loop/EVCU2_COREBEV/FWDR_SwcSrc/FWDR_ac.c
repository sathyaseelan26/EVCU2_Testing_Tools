/*
 * File: FWDR_ac.c
 *
 * Code generated for Simulink model 'FWDR_ac'.
 *
 * Model version                  : 9.38
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:43:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FWDR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_FWDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TeFWDR_e_TrnsfrCaseRange, FWDR_VAR_INIT)
    KaFWDR_e_TcaseStat[8] =
{
    CeFWDR_e_TfrCas4HI, CeFWDR_e_TfrCasNeutral, CeFWDR_e_TfrCas4Low,
    CeFWDR_e_TfrCasSNA, CeFWDR_e_TfrCasSNA, CeFWDR_e_TfrCasSNA,
    CeFWDR_e_TfrCasSNA, CeFWDR_e_TfrCasSNA
};                                     /* Referenced by: '<S102>/Calib' */

static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_M_FricTrqClutch_INIT = 0.0F;/* Referenced by: '<S72>/Calib' */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_M_MtrBMaxTorqThreshold =
    50.0F;                             /* Referenced by: '<S49>/Calib' */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_M_MtrBMinTorqThreshold =
    10.0F;                             /* Referenced by: '<S50>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_CCMFailStsInitVal = 0;/* Referenced by: '<S73>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_OnlyDTCMforTCR = 0;/* Referenced by: '<S32>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_OnlyTCMforTCR = 1;/* Referenced by: '<S33>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_OvrdAxleRatio = 0;/* Referenced by: '<S34>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_OvrdHIRatio = 0;/* Referenced by: '<S44>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_OvrdLowRatio = 0;/* Referenced by: '<S42>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_OvrdTCaseStat = 0;/* Referenced by: '<S35>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_SpdSyncAvailOvrdEnbl = 1;/* Referenced by: '<S51>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_SpdSyncAvailOvrdVal = 1;/* Referenced by: '<S52>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_TCase_StatFA_Default = 1;/* Referenced by: '<S36>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_TcaseStatFAOvrdVal = 0;/* Referenced by: '<S74>/Calib' */
static volatile CONST(boolean, FWDR_VAR_INIT) KeFWDR_b_TcaseStatValEnbl = 1;/* Referenced by: '<S75>/Calib' */
static volatile CONST(TeFWDR_e_PTU_State, FWDR_VAR_INIT) KeFWDR_e_PTU_State_INIT
    = CeFWDR_e_PTU_4High;              /* Referenced by: '<S76>/Calib' */
static volatile CONST(TeFWDR_e_RDU_State, FWDR_VAR_INIT) KeFWDR_e_RDU_State_INIT
    = CeFWDR_e_RDU_High;               /* Referenced by: '<S77>/Calib' */
static volatile CONST(TeFWDR_e_SpeedSyncReq, FWDR_VAR_INIT)
    KeFWDR_e_SpeedSyncReq_INIT = CeFWDR_e_SSR_HighSync;/* Referenced by: '<S78>/Calib' */
static volatile CONST(TeFWDR_e_Switch_Rq, FWDR_VAR_INIT) KeFWDR_e_Sw1ReqInitVal =
    CeFWDR_e_NotPSD;                   /* Referenced by: '<S79>/Calib' */
static volatile CONST(TeFWDR_e_TCase_TrgtRngState, FWDR_VAR_INIT)
    KeFWDR_e_TCASE_TargetRangeState_INIT = CeFWDR_e_TRS_High;/* Referenced by: '<S80>/Calib' */
static volatile CONST(TeFWDR_e_Tcase_Srv_Rq, FWDR_VAR_INIT)
    KeFWDR_e_TcaseSrvRdOvrdVal = CeFWDR_e_OFF;/* Referenced by: '<S81>/Calib' */
static volatile CONST(TeFWDR_e_TrnsfrCaseRange, FWDR_VAR_INIT)
    KeFWDR_e_TcaseStatDTCMOvrdVal = CeFWDR_e_TfrCas4HI;/* Referenced by: '<S82>/Calib' */
static volatile CONST(TeFWDR_e_TrnsfrCaseRange, FWDR_VAR_INIT)
    KeFWDR_e_TcaseStatOvrdVal = CeFWDR_e_TfrCas4HI;/* Referenced by:
                                                    * '<S37>/Calib'
                                                    * '<S67>/Calib'
                                                    * '<S83>/Calib'
                                                    */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_n_MinWhlSpdForTcase = 5.0F;/* Referenced by: '<S60>/Calib' */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_n_SpdOffsetLSP = 5.0F;/* Referenced by: '<S53>/Calib' */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_n_SpdOffsetRSP = 10.0F;/* Referenced by: '<S54>/Calib' */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_r_AxleRatioOvrdVal = 3.45F;/* Referenced by:
                                                                      * '<S38>/Calib'
                                                                      * '<S68>/Calib'
                                                                      */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_r_AxleRatioScalingVal =
    1000.0F;                           /* Referenced by: '<S55>/Calib' */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_r_HIRatioOvrdVal = 1.0F;/* Referenced by:
                                                                      * '<S69>/Calib'
                                                                      * '<S45>/Calib'
                                                                      */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_r_LowRatioHighThres = 4.0F;/* Referenced by: '<S61>/Calib' */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_r_LowRatioLowThres = 1.8F;/* Referenced by: '<S62>/Calib' */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_r_LowRatioOvrdVal = 1.0F;/* Referenced by:
                                                                      * '<S70>/Calib'
                                                                      * '<S43>/Calib'
                                                                      */
static volatile CONST(float32, FWDR_VAR_INIT) KeFWDR_r_TCLowRatioScalingVal =
    1000.0F;                           /* Referenced by: '<S56>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_FWDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, FWDR_VAR_INIT) VeFWDR_b_CalcdTCaseRatioLow;/* '<S57>/Logical Operator' */
static VAR(float32, FWDR_VAR_INIT) VeFWDR_r_EffectiveHiRatio;/* '<S25>/Switch' */
static VAR(float32, FWDR_VAR_INIT) VeFWDR_r_EffectiveLowRatio;/* '<S24>/Switch' */
static VAR(float32, FWDR_VAR_INIT) VeFWDR_r_TransSpdByWhlSpd;/* '<S63>/Switch1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_FWDR
#include "MemMap.h"

CONST(ConstB_FWDR_ac_T, FWDR_VAR_INIT) FWDR_ac_ConstB =
{
    0.0F,                              /* '<S66>/Const1' */
    0.0F,                              /* '<S66>/Const3' */
    0.0F,                              /* '<S66>/Const8' */
    0,                                 /* '<S66>/Const5' */
    0,                                 /* '<S66>/Const7' */
    0,                                 /* '<S66>/Const9' */
    0,                                 /* '<S65>/FALSE Constant' */
    0,                                 /* '<S65>/FALSE Constant1' */
    0,                                 /* '<S65>/FALSE Constant2' */
    0,                                 /* '<S65>/FALSE Constant3' */
    0,                                 /* '<S65>/FALSE Constant4' */
    0,                                 /* '<S65>/FALSE Constant5' */
    0,                                 /* '<S65>/FALSE Constant6' */
    0,                                 /* '<S65>/FALSE Constant7' */
    CeFWDR_e_ShiftINProg               /* '<S66>/Const4' */
};

#define STOP_SEC_CONST_UNSPECIFIED_FWDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"

VAR(B_FWDR_ac_T, FWDR_VAR_INIT) FWDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"

VAR(DW_FWDR_ac_T, FWDR_VAR_INIT) FWDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FWDR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, FWDR_CODE) FWDR_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 VeFWDR_r_Axle_Ratio;
    float32 rtb_Product;
    float32 rtb_TmpSignalConversionAtMtrB_MaxSpeedOu;
    float32 rtb_TmpSignalConversionAtNxProfileSmooth;
    float32 rtb_TmpSignalConversionAtVeCSVR_n_PrimWh;
    float32 rtb_TmpSignalConversionAtVeCSVR_n_TransO;
    float32 rtb_TmpSignalConversionAtVeFWDR_r_Tcase_;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    TeFWDR_e_TrnsfrCaseRange rtb_Switch1_p;
    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR_e_TCASE_;
    boolean Switch;
    boolean rtb_TmpSignalConversionAtVeFWDR_b_TCASE_;
    boolean tmp;
    boolean tmp_0;

    /* Inport: '<Root>/VePRXR_r_Axle_Ratio' */
    (void)Rte_Read_VePRXR_r_Axle_Ratio_Value(&VeFWDR_r_Axle_Ratio);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/FWDR_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/VeFWDR_r_Tcase_HI_Ratio_read' incorporates:
     *  Inport: '<Root>/VePRXR_r_TCaseHiRatio'
     */
    (void)Rte_Read_VePRXR_r_TCaseHiRatio_Value
        (&rtb_TmpSignalConversionAtVeFWDR_r_Tcase_);

    /* SignalConversion generated from: '<S1>/VeCSVR_n_PrimWhlSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_n_PrimWhlSpdSigned'
     */
    (void)Rte_Read_VeCSVR_n_PrimWhlSpdSigned_Value
        (&rtb_TmpSignalConversionAtVeCSVR_n_PrimWh);

    /* SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndRaw' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndRaw'
     */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndRaw_Value
        (&rtb_TmpSignalConversionAtVeCSVR_n_TransO);

    /* SignalConversion generated from: '<S1>/VeFWDR_e_TCASE_STAT_read' incorporates:
     *  Merge: '<Root>/Merge_4_Irv'
     */
    rtb_TmpSignalConversionAtVeFWDR_e_TCASE_ =
        Rte_IrvRead_FWDR_FastTEF_VeFWDI_e_Tcase_Stat_DTCM_init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeFWDR_b_TCASE_STATFA_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtVeFWDR_b_TCASE_ =
        Rte_IrvRead_FWDR_FastTEF_VeFWDI_b_Tcase_Stat_DTCMFA_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/MtrB_MaxSpeed' incorporates:
     *  Inport: '<Root>/VeHSCR_n_Max_MtrB_Spd'
     */
    (void)Rte_Read_VeHSCR_n_Max_MtrB_Spd_Value
        (&rtb_TmpSignalConversionAtMtrB_MaxSpeedOu);

    /* SignalConversion generated from: '<S1>/NxProfileSmoothDelay' incorporates:
     *  Inport: '<Root>/VeHSER_n_NxProfSmthDly'
     */
    (void)Rte_Read_VeHSER_n_NxProfSmthDly_Value
        (&rtb_TmpSignalConversionAtNxProfileSmooth);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/FWDR_CalcRatio'
     */
    /* Product: '<S40>/Product2' incorporates:
     *  Constant: '<S55>/Calib'
     *  DataStoreWrite: '<S23>/Data Store Write3'
     */
    FWDR_ac_DW.BeFWDR_r_Axle_Ratio = VeFWDR_r_Axle_Ratio /
        KeFWDR_r_AxleRatioScalingVal;

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S34>/Calib'
     */
    if (KeFWDR_b_OvrdAxleRatio)
    {
        /* Switch: '<S23>/Switch1' incorporates:
         *  Constant: '<S38>/Calib'
         */
        VeFWDR_r_Axle_Ratio = KeFWDR_r_AxleRatioOvrdVal;
    }
    else
    {
        /* Switch: '<S23>/Switch1' incorporates:
         *  DataStoreWrite: '<S23>/Data Store Write3'
         */
        VeFWDR_r_Axle_Ratio = FWDR_ac_DW.BeFWDR_r_Axle_Ratio;
    }

    /* End of Switch: '<S23>/Switch1' */

    /* Product: '<S41>/Product' */
    rtb_Product = VeFWDR_r_Axle_Ratio * rtb_TmpSignalConversionAtVeCSVR_n_PrimWh;

    /* Outputs for Atomic SubSystem: '<S41>/Protected Division' */
    /* Switch: '<S63>/Switch1' incorporates:
     *  Constant: '<S63>/Constant Value'
     *  Constant: '<S63>/Constant Value1'
     *  Constant: '<S63>/Constant Value2'
     *  Constant: '<S63>/Constant Value3'
     *  Logic: '<S63>/AND'
     *  RelationalOperator: '<S63>/Greater Than or Equal '
     *  RelationalOperator: '<S63>/Greater Than or Equal 1'
     *  RelationalOperator: '<S63>/Not Equal'
     *  RelationalOperator: '<S63>/Not Equal1'
     *  Switch: '<S63>/Switch2'
     *  Switch: '<S63>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeCSVR_n_TransO != 0.0F) && (rtb_Product !=
            0.0F))
    {
        /* Switch: '<S63>/Switch1' incorporates:
         *  Product: '<S63>/Division'
         */
        VeFWDR_r_TransSpdByWhlSpd = rtb_TmpSignalConversionAtVeCSVR_n_TransO /
            rtb_Product;
    }
    else if (rtb_TmpSignalConversionAtVeCSVR_n_TransO > 0.0F)
    {
        /* Switch: '<S63>/Switch2' incorporates:
         *  Constant: '<S63>/MAXFLOAT'
         *  Switch: '<S63>/Switch1'
         */
        VeFWDR_r_TransSpdByWhlSpd = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeCSVR_n_TransO < 0.0F)
    {
        /* Switch: '<S63>/Switch3' incorporates:
         *  Constant: '<S63>/MINFLOAT'
         *  Switch: '<S63>/Switch1'
         *  Switch: '<S63>/Switch2'
         */
        VeFWDR_r_TransSpdByWhlSpd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S63>/Switch1' incorporates:
         *  Constant: '<S63>/Constant Value4'
         *  Switch: '<S63>/Switch2'
         *  Switch: '<S63>/Switch3'
         */
        VeFWDR_r_TransSpdByWhlSpd = 0.0F;
    }

    /* End of Switch: '<S63>/Switch1' */
    /* End of Outputs for SubSystem: '<S41>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S41>/ClosedInterval' */
    /* Logic: '<S57>/Logical Operator' incorporates:
     *  Constant: '<S61>/Calib'
     *  Constant: '<S62>/Calib'
     *  RelationalOperator: '<S57>/Relatonal Operator'
     *  RelationalOperator: '<S57>/Relatonal Operator1'
     */
    VeFWDR_b_CalcdTCaseRatioLow = ((VeFWDR_r_TransSpdByWhlSpd >=
        KeFWDR_r_LowRatioLowThres) && (VeFWDR_r_TransSpdByWhlSpd <=
        KeFWDR_r_LowRatioHighThres));

    /* End of Outputs for SubSystem: '<S41>/ClosedInterval' */

    /* Switch: '<S41>/Switch3' incorporates:
     *  Constant: '<S60>/Calib'
     *  RelationalOperator: '<S41>/Comparison'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_n_PrimWh > KeFWDR_n_MinWhlSpdForTcase)
    {
        /* Switch: '<S41>/Switch2' incorporates:
         *  Constant: '<S58>/Constant'
         *  Constant: '<S59>/Constant'
         *  Switch: '<S41>/Switch3'
         *  UnitDelay: '<S41>/Unit Delay'
         */
        if (VeFWDR_b_CalcdTCaseRatioLow)
        {
            FWDR_ac_DW.UnitDelay_DSTATE_j = CeFWDR_e_TfrCas4Low;
        }
        else
        {
            FWDR_ac_DW.UnitDelay_DSTATE_j = CeFWDR_e_TfrCas4HI;
        }

        /* End of Switch: '<S41>/Switch2' */
    }

    /* End of Switch: '<S41>/Switch3' */

    /* Logic: '<S23>/Logical3' incorporates:
     *  Constant: '<S32>/Calib'
     *  Logic: '<S23>/Logical7'
     *  Merge: '<Root>/Merge_2'
     *  SignalConversion generated from: '<S1>/VeFWDR_b_TcaseRange_StatFA_read'
     */
    tmp = !KeFWDR_b_OnlyDTCMforTCR;
    tmp_0 = !Rte_IrvRead_FWDR_FastTEF_VeFWDI_b_Tcase_StatFA_init_write_IRV();

    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S33>/Calib'
     *  Logic: '<S23>/Logical3'
     *  Logic: '<S23>/Logical4'
     *  Logic: '<S23>/Logical5'
     *  Logic: '<S23>/Logical6'
     *  Switch: '<S30>/Switch2'
     */
    if (tmp && tmp_0)
    {
        /* Switch: '<S30>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S1>/VeFWDR_e_TcaseRange_Stat_read'
         */
        rtb_Switch1_p =
            Rte_IrvRead_FWDR_FastTEF_VeFWDI_e_Tcase_Stat_init_write_IRV();
    }
    else if ((!KeFWDR_b_OnlyTCMforTCR) &&
             (!rtb_TmpSignalConversionAtVeFWDR_b_TCASE_))
    {
        /* Switch: '<S30>/Switch2' incorporates:
         *  SignalConversion generated from: '<S1>/VeFWDR_e_TCASE_STAT_read'
         *  Switch: '<S30>/Switch1'
         */
        rtb_Switch1_p = rtb_TmpSignalConversionAtVeFWDR_e_TCASE_;
    }
    else
    {
        /* Switch: '<S30>/Switch1' incorporates:
         *  Switch: '<S30>/Switch2'
         *  Switch: '<S41>/Switch3'
         *  UnitDelay: '<S41>/Unit Delay'
         */
        rtb_Switch1_p = FWDR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S30>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VePRXR_r_TCaseLoRatio' */
    (void)Rte_Read_VePRXR_r_TCaseLoRatio_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/FWDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/FWDR_CalcRatio'
     */
    /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
     *  DataStoreWrite: '<S23>/Data Store Write'
     *  Switch: '<S30>/Switch1'
     */
    FWDR_ac_DW.BeFWDR_e_Tcase_Stat = (sint16)rtb_Switch1_p;

    /* Product: '<S40>/Product1' incorporates:
     *  Constant: '<S56>/Calib'
     *  DataStoreWrite: '<S23>/Data Store Write1'
     */
    FWDR_ac_DW.BeFWDR_r_Tcase_Low_Ratio = tmpRead_2 /
        KeFWDR_r_TCLowRatioScalingVal;

    /* DataStoreWrite: '<S23>/Data Store Write2' */
    FWDR_ac_DW.BeFWDR_r_Tcase_Hi_Ratio =
        rtb_TmpSignalConversionAtVeFWDR_r_Tcase_;

    /* Switch: '<S23>/Switch2' incorporates:
     *  Constant: '<S35>/Calib'
     */
    if (KeFWDR_b_OvrdTCaseStat)
    {
        /* Switch: '<S23>/Switch2' incorporates:
         *  Constant: '<S37>/Calib'
         */
        rtb_Switch1_p = KeFWDR_e_TcaseStatOvrdVal;
    }

    /* End of Switch: '<S23>/Switch2' */

    /* If: '<S23>/If' incorporates:
     *  Constant: '<S28>/Constant'
     *  Constant: '<S44>/Calib'
     *  RelationalOperator: '<S23>/Comparison4'
     *  Switch: '<S23>/Switch2'
     *  Switch: '<S25>/Switch'
     */
    if (rtb_Switch1_p == CeFWDR_e_TfrCas4Low)
    {
        /* Outputs for IfAction SubSystem: '<S23>/Calc4LowRatio' incorporates:
         *  ActionPort: '<S24>/Action Port'
         */
        /* Switch: '<S24>/Switch' incorporates:
         *  Constant: '<S42>/Calib'
         */
        if (KeFWDR_b_OvrdLowRatio)
        {
            /* Switch: '<S24>/Switch' incorporates:
             *  Constant: '<S43>/Calib'
             */
            VeFWDR_r_EffectiveLowRatio = KeFWDR_r_LowRatioOvrdVal;
        }
        else
        {
            /* Switch: '<S24>/Switch' incorporates:
             *  DataStoreWrite: '<S23>/Data Store Write1'
             */
            VeFWDR_r_EffectiveLowRatio = FWDR_ac_DW.BeFWDR_r_Tcase_Low_Ratio;
        }

        /* End of Switch: '<S24>/Switch' */

        /* SignalConversion generated from: '<S1>/VeFWDR_r_TCaseRatio' incorporates:
         *  Outport: '<Root>/VeFWDR_r_TCaseRatio'
         *  SignalConversion: '<S24>/Signal Conversion'
         */
        (void)Rte_Write_VeFWDR_r_TCaseRatio_Value(VeFWDR_r_EffectiveLowRatio);

        /* End of Outputs for SubSystem: '<S23>/Calc4LowRatio' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S23>/CalcHighRatio' incorporates:
         *  ActionPort: '<S25>/Action Port'
         */
        if (KeFWDR_b_OvrdHIRatio)
        {
            /* Switch: '<S25>/Switch' incorporates:
             *  Constant: '<S45>/Calib'
             */
            VeFWDR_r_EffectiveHiRatio = KeFWDR_r_HIRatioOvrdVal;
        }
        else
        {
            /* Switch: '<S25>/Switch' */
            VeFWDR_r_EffectiveHiRatio = rtb_TmpSignalConversionAtVeFWDR_r_Tcase_;
        }

        /* SignalConversion generated from: '<S1>/VeFWDR_r_TCaseRatio' incorporates:
         *  Outport: '<Root>/VeFWDR_r_TCaseRatio'
         *  SignalConversion: '<S25>/Signal Conversion'
         */
        (void)Rte_Write_VeFWDR_r_TCaseRatio_Value(VeFWDR_r_EffectiveHiRatio);

        /* End of Outputs for SubSystem: '<S23>/CalcHighRatio' */
    }

    /* End of If: '<S23>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd' */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/FWDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/FWDR_CalcRatio'
     */
    /* Outputs for Atomic SubSystem: '<S39>/Hysteresis' */
    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S48>/Constant Value'
     *  Constant: '<S53>/Calib'
     *  Constant: '<S54>/Calib'
     *  RelationalOperator: '<S48>/Greater  Than'
     *  RelationalOperator: '<S48>/Greater  Than1'
     *  Sum: '<S39>/Sum'
     *  Sum: '<S39>/Sum1'
     *  Switch: '<S48>/Switch2'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtMtrB_MaxSpeedOu >
            (rtb_TmpSignalConversionAtNxProfileSmooth + KeFWDR_n_SpdOffsetRSP))
    {
        FWDR_ac_DW.UnitDelay_DSTATE = true;
    }
    else
    {
        if (rtb_TmpSignalConversionAtMtrB_MaxSpeedOu <
                (rtb_TmpSignalConversionAtNxProfileSmooth +
                 KeFWDR_n_SpdOffsetLSP))
        {
            /* Switch: '<S48>/Switch2' incorporates:
             *  Constant: '<S48>/Constant Value1'
             *  UnitDelay: '<S48>/Unit Delay'
             */
            FWDR_ac_DW.UnitDelay_DSTATE = false;
        }
    }

    /* End of Switch: '<S48>/Switch1' */
    /* End of Outputs for SubSystem: '<S39>/Hysteresis' */

    /* Switch: '<S39>/Switch' incorporates:
     *  Constant: '<S51>/Calib'
     *  Inport: '<Root>/VeMTQR_M_MtrB_MaxTorq_LT'
     *  Inport: '<Root>/VeMTQR_M_MtrB_MinTorq_LT'
     *  Inport: '<Root>/VeSRAR_b_Disable_TCaseSpeedSync'
     */
    if (KeFWDR_b_SpdSyncAvailOvrdEnbl)
    {
        /* Switch: '<S39>/Switch' incorporates:
         *  Constant: '<S52>/Calib'
         */
        Switch = KeFWDR_b_SpdSyncAvailOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeSRAR_b_Disable_TCaseSpeedSync_Value(&Switch);
        (void)Rte_Read_VeMTQR_M_MtrB_MinTorq_LT_Value(&tmpRead_1);
        (void)Rte_Read_VeMTQR_M_MtrB_MaxTorq_LT_Value(&tmpRead_0);

        /* Switch: '<S39>/Switch' incorporates:
         *  Constant: '<S49>/Calib'
         *  Constant: '<S50>/Calib'
         *  Inport: '<Root>/VeMTQR_M_MtrB_MaxTorq_LT'
         *  Inport: '<Root>/VeMTQR_M_MtrB_MinTorq_LT'
         *  Inport: '<Root>/VeSRAR_b_Disable_TCaseSpeedSync'
         *  Logic: '<S39>/Logical Operator'
         *  Logic: '<S39>/Logical Operator1'
         *  Logic: '<S39>/Logical Operator2'
         *  Logic: '<S39>/Logical Operator3'
         *  RelationalOperator: '<S39>/Relational Operator'
         *  RelationalOperator: '<S39>/Relational Operator1'
         *  UnitDelay: '<S48>/Unit Delay'
         */
        Switch = ((((tmpRead_0 < KeFWDR_M_MtrBMaxTorqThreshold) || (tmpRead_1 >
                     KeFWDR_M_MtrBMinTorqThreshold)) ||
                   (!FWDR_ac_DW.UnitDelay_DSTATE)) || Switch);
    }

    /* End of Switch: '<S39>/Switch' */

    /* Outport: '<Root>/VeFWDR_n_FDTransOutSpdSgndFltrd' incorporates:
     *  Product: '<S41>/Product1'
     *  SignalConversion generated from: '<S1>/FDTransOutSpdSgndFltrd'
     */
    (void)Rte_Write_VeFWDR_n_FDTransOutSpdSgndFltrd_Value(tmpRead *
        VeFWDR_r_Axle_Ratio);

    /* Outport: '<Root>/VeFWDR_b_4HIPTActv' incorporates:
     *  Constant: '<S46>/Constant'
     *  Constant: '<S47>/Constant'
     *  Logic: '<S29>/Logical'
     *  Merge: '<Root>/Merge_24'
     *  RelationalOperator: '<S29>/Comparison1'
     *  RelationalOperator: '<S29>/Comparison2'
     *  SignalConversion generated from: '<S1>/VeFWDR_b_4HIPTActv'
     *  SignalConversion generated from: '<S1>/VeFWDR_e_TCASE_SRV_RQ_read'
     *  SignalConversion generated from: '<S1>/VeFWDR_e_TCASE_STAT_read'
     */
    (void)Rte_Write_VeFWDR_b_4HIPTActv_Value
        ((rtb_TmpSignalConversionAtVeFWDR_e_TCASE_ == CeFWDR_e_TfrCasPT) &&
         (Rte_IrvRead_FWDR_FastTEF_VeFWDI_e_Tcase_Srv_Rq_init_write_IRV() ==
          CeFWDR_e_OFF));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeFWDR_b_SpeedSyncAvail' incorporates:
     *  SignalConversion generated from: '<S1>/VeFWDR_b_SpeedSyncAvail'
     */
    (void)Rte_Write_VeFWDR_b_SpeedSyncAvail_Value(Switch);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/FWDR_CalcRatio'
     */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S33>/Calib'
     *  Constant: '<S36>/Calib'
     *  Logic: '<S23>/Logical10'
     *  Logic: '<S23>/Logical7'
     *  Logic: '<S23>/Logical8'
     *  Logic: '<S23>/Logical9'
     *  Switch: '<S31>/Switch2'
     */
    if (tmp && tmp_0)
    {
        tmp = false;
    }
    else if ((!KeFWDR_b_OnlyTCMforTCR) &&
             (!rtb_TmpSignalConversionAtVeFWDR_b_TCASE_))
    {
        /* Switch: '<S31>/Switch2' */
        tmp = false;
    }
    else
    {
        tmp = KeFWDR_b_TCase_StatFA_Default;
    }

    /* End of Switch: '<S31>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeFWDR_b_Tcase_StatFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeFWDR_b_Tcase_StatFA'
     */
    (void)Rte_Write_VeFWDR_b_Tcase_StatFA_Value(tmp);

    /* Outport: '<Root>/VeFWDR_e_Tcase_Stat' incorporates:
     *  SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat'
     *  Switch: '<S23>/Switch2'
     */
    (void)Rte_Write_VeFWDR_e_Tcase_Stat_Value(rtb_Switch1_p);

    /* Outport: '<Root>/VeFWDR_r_Axle_Ratio' incorporates:
     *  SignalConversion generated from: '<S1>/VeFWDR_r_Axle_Ratio'
     */
    (void)Rte_Write_VeFWDR_r_Axle_Ratio_Value(VeFWDR_r_Axle_Ratio);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, FWDR_CODE) FsftFWDR_b_FricTrqClutch(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftFWDR_b_FricTrqClutch' */
    /* Outport: '<Root>/VeFWDR_b_FricTrqClutch_FA' incorporates:
     *  Chart: '<S4>/FsftFWDR_b_FricTrqClutchChrt'
     *  SignalConversion generated from: '<S4>/VeFWDR_b_FricTrqClutchFA'
     */
    /* Gateway: FsftFWDR_b_FricTrqClutch/FsftFWDR_b_FricTrqClutchChrt */
    /* During: FsftFWDR_b_FricTrqClutch/FsftFWDR_b_FricTrqClutchChrt */
    /* Entry Internal: FsftFWDR_b_FricTrqClutch/FsftFWDR_b_FricTrqClutchChrt */
    /* Transition: '<S84>:2' */
    (void)Rte_Write_VeFWDR_b_FricTrqClutch_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftFWDR_b_FricTrqClutch' */
}

/* Output function */
FUNC(void, FWDR_CODE) FsftFWDR_e_PTU_State(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftFWDR_e_PTU_State' */
    /* Outport: '<Root>/VeFWDR_b_PTU_State_FA' incorporates:
     *  Chart: '<S5>/FsftFWDR_e_PTU_StateChrt'
     *  SignalConversion generated from: '<S5>/VeFWDR_b_PTU_StateFA'
     */
    /* Gateway: FsftFWDR_e_PTU_State/FsftFWDR_e_PTU_StateChrt */
    /* During: FsftFWDR_e_PTU_State/FsftFWDR_e_PTU_StateChrt */
    /* Entry Internal: FsftFWDR_e_PTU_State/FsftFWDR_e_PTU_StateChrt */
    /* Transition: '<S85>:2' */
    (void)Rte_Write_VeFWDR_b_PTU_State_FA_Value(true);

    /* Outport: '<Root>/VeFWDR_e_PTU_State' incorporates:
     *  Chart: '<S5>/FsftFWDR_e_PTU_StateChrt'
     *  SignalConversion generated from: '<S5>/VeFWDR_e_PTU_State'
     */
    (void)Rte_Write_VeFWDR_e_PTU_State_Value(CeFWDR_e_PTU_SNA);

    /* End of Outputs for SubSystem: '<Root>/FsftFWDR_e_PTU_State' */
}

/* Output function */
FUNC(void, FWDR_CODE) FsftFWDR_e_RDU_State(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftFWDR_e_RDU_State' */
    /* Outport: '<Root>/VeFWDR_b_RDU_State_FA' incorporates:
     *  Chart: '<S6>/FsftFWDR_e_RDU_StateChrt'
     *  SignalConversion generated from: '<S6>/VeFWDR_b_RDU_StateFA'
     */
    /* Gateway: FsftFWDR_e_RDU_State/FsftFWDR_e_RDU_StateChrt */
    /* During: FsftFWDR_e_RDU_State/FsftFWDR_e_RDU_StateChrt */
    /* Entry Internal: FsftFWDR_e_RDU_State/FsftFWDR_e_RDU_StateChrt */
    /* Transition: '<S86>:2' */
    (void)Rte_Write_VeFWDR_b_RDU_State_FA_Value(true);

    /* Outport: '<Root>/VeFWDR_e_RDU_State' incorporates:
     *  Chart: '<S6>/FsftFWDR_e_RDU_StateChrt'
     *  SignalConversion generated from: '<S6>/VeFWDR_e_RDU_State'
     */
    (void)Rte_Write_VeFWDR_e_RDU_State_Value(CeFWDR_e_RDU_SNA);

    /* End of Outputs for SubSystem: '<Root>/FsftFWDR_e_RDU_State' */
}

/* Output function */
FUNC(void, FWDR_CODE) FsftFWDR_e_SpeedSyncReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftFWDR_e_SpeedSyncReq' */
    /* Outport: '<Root>/VeFWDR_b_SpeedSyncReq_FA' incorporates:
     *  Chart: '<S7>/FsftFWDR_e_SpeedSyncReqChrt'
     *  SignalConversion generated from: '<S7>/VeFWDR_b_SpeedSyncReqFA'
     */
    /* Gateway: FsftFWDR_e_SpeedSyncReq/FsftFWDR_e_SpeedSyncReqChrt */
    /* During: FsftFWDR_e_SpeedSyncReq/FsftFWDR_e_SpeedSyncReqChrt */
    /* Entry Internal: FsftFWDR_e_SpeedSyncReq/FsftFWDR_e_SpeedSyncReqChrt */
    /* Transition: '<S87>:2' */
    (void)Rte_Write_VeFWDR_b_SpeedSyncReq_FA_Value(true);

    /* Outport: '<Root>/VeFWDR_e_SpeedSyncReq' incorporates:
     *  Chart: '<S7>/FsftFWDR_e_SpeedSyncReqChrt'
     *  SignalConversion generated from: '<S7>/VeFWDR_e_SpeedSyncReq'
     */
    (void)Rte_Write_VeFWDR_e_SpeedSyncReq_Value(CeFWDR_e_SSR_SNA);

    /* End of Outputs for SubSystem: '<Root>/FsftFWDR_e_SpeedSyncReq' */
}

/* Output function */
FUNC(void, FWDR_CODE) FsftFWDR_e_Sw1Req(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftFWDR_e_Sw1Req' */
    /* Outport: '<Root>/VeFWDR_b_Sw1ReqFA' incorporates:
     *  Chart: '<S8>/FsftFWDR_e_Sw1ReqChrt'
     *  SignalConversion generated from: '<S8>/VeFWDR_b_Sw1ReqFA'
     */
    /* Gateway: FsftFWDR_e_Sw1Req/FsftFWDR_e_Sw1ReqChrt */
    /* During: FsftFWDR_e_Sw1Req/FsftFWDR_e_Sw1ReqChrt */
    /* Entry Internal: FsftFWDR_e_Sw1Req/FsftFWDR_e_Sw1ReqChrt */
    /* Transition: '<S88>:2' */
    (void)Rte_Write_VeFWDR_b_Sw1ReqFA_Value(true);

    /* Outport: '<Root>/VeFWDR_e_Sw1Req' incorporates:
     *  Chart: '<S8>/FsftFWDR_e_Sw1ReqChrt'
     *  SignalConversion generated from: '<S8>/VeFWDR_e_Sw1Req'
     */
    (void)Rte_Write_VeFWDR_e_Sw1Req_Value(CeFWDR_e_SwReqSNA);

    /* End of Outputs for SubSystem: '<Root>/FsftFWDR_e_Sw1Req' */
}

/* Output function */
FUNC(void, FWDR_CODE) FsftFWDR_e_TCASE_SRV_RQ(void)
{
    /* local block i/o variables */
    boolean rtb_LeFWDR_b_TCASE_SRV_RQFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/FsftFWDR_e_TCASE_SRV_RQ' */
    /* Chart: '<S9>/FsftFWDR_e_TCASE_SRV_RQChrt' */
    /* Gateway: FsftFWDR_e_TCASE_SRV_RQ/FsftFWDR_e_TCASE_SRV_RQChrt */
    /* During: FsftFWDR_e_TCASE_SRV_RQ/FsftFWDR_e_TCASE_SRV_RQChrt */
    /* Entry Internal: FsftFWDR_e_TCASE_SRV_RQ/FsftFWDR_e_TCASE_SRV_RQChrt */
    /* Transition: '<S89>:2' */
    rtb_LeFWDR_b_TCASE_SRV_RQFA_out_a = true;

    /* Merge: '<Root>/Merge_24' incorporates:
     *  Chart: '<S9>/FsftFWDR_e_TCASE_SRV_RQChrt'
     *  SignalConversion generated from: '<S9>/VeFWDR_e_TCASE_SRV_RQ_write'
     */
    Rte_IrvWrite_FsftFWDR_e_TCASE_SRV_RQ_VeFWDI_e_Tcase_Srv_Rq_init_write_IRV
        (CeFWDR_e_SrvRqSNA);

    /* End of Outputs for SubSystem: '<Root>/FsftFWDR_e_TCASE_SRV_RQ' */
}

/* Output function */
FUNC(void, FWDR_CODE) FsftFWDR_e_TCASE_STAT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftFWDR_e_TCASE_STAT' */
    /* Outport: '<Root>/VeFWDR_e_Tcase_Stat_DTCM' incorporates:
     *  Chart: '<S10>/FsftFWDR_e_TCASE_STATChrt'
     *  SignalConversion generated from: '<S10>/VeFWDR_e_TCASE_STAT'
     */
    /* Gateway: FsftFWDR_e_TCASE_STAT/FsftFWDR_e_TCASE_STATChrt */
    /* During: FsftFWDR_e_TCASE_STAT/FsftFWDR_e_TCASE_STATChrt */
    /* Entry Internal: FsftFWDR_e_TCASE_STAT/FsftFWDR_e_TCASE_STATChrt */
    /* Transition: '<S90>:2' */
    (void)Rte_Write_VeFWDR_e_Tcase_Stat_DTCM_Value(CeFWDR_e_TfrCasSNA);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S10>/FsftFWDR_e_TCASE_STATChrt'
     *  SignalConversion generated from: '<S10>/VeFWDR_b_TCASE_STATFA_write'
     */
    Rte_IrvWrite_FsftFWDR_e_TCASE_STAT_VeFWDI_b_Tcase_Stat_DTCMFA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  Chart: '<S10>/FsftFWDR_e_TCASE_STATChrt'
     *  SignalConversion generated from: '<S10>/VeFWDR_e_TCASE_STAT_write'
     */
    Rte_IrvWrite_FsftFWDR_e_TCASE_STAT_VeFWDI_e_Tcase_Stat_DTCM_init_write_IRV
        (CeFWDR_e_TfrCasSNA);

    /* End of Outputs for SubSystem: '<Root>/FsftFWDR_e_TCASE_STAT' */
}

/* Output function */
FUNC(void, FWDR_CODE) FsftFWDR_e_TCASE_TargetRangeState(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftFWDR_e_TCASE_TargetRangeState' */
    /* Outport: '<Root>/VeFWDR_b_TCASE_TargetRangeState_FA' incorporates:
     *  Chart: '<S11>/FsftFWDR_e_TCASE_TargetRangeStateChrt'
     *  SignalConversion generated from: '<S11>/VeFWDR_b_TCASE_TargetRangeStateFA'
     */
    /* Gateway: FsftFWDR_e_TCASE_TargetRangeState/FsftFWDR_e_TCASE_TargetRangeStateChrt */
    /* During: FsftFWDR_e_TCASE_TargetRangeState/FsftFWDR_e_TCASE_TargetRangeStateChrt */
    /* Entry Internal: FsftFWDR_e_TCASE_TargetRangeState/FsftFWDR_e_TCASE_TargetRangeStateChrt */
    /* Transition: '<S91>:2' */
    (void)Rte_Write_VeFWDR_b_TCASE_TargetRangeState_FA_Value(true);

    /* Outport: '<Root>/VeFWDR_e_TCASE_TargetRangeState' incorporates:
     *  Chart: '<S11>/FsftFWDR_e_TCASE_TargetRangeStateChrt'
     *  SignalConversion generated from: '<S11>/VeFWDR_e_TCASE_TargetRangeState'
     */
    (void)Rte_Write_VeFWDR_e_TCASE_TargetRangeState_Value(CeFWDR_e_TRS_SNA);

    /* End of Outputs for SubSystem: '<Root>/FsftFWDR_e_TCASE_TargetRangeState' */
}

/* Output function */
FUNC(void, FWDR_CODE) FsftFWDR_e_TcaseRange_Stat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftFWDR_e_TcaseRange_Stat' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S12>/FsftFWDR_e_TcaseRange_StatChrt'
     *  SignalConversion generated from: '<S12>/VeFWDR_b_TcaseRange_StatFA_write'
     */
    /* Gateway: FsftFWDR_e_TcaseRange_Stat/FsftFWDR_e_TcaseRange_StatChrt */
    /* During: FsftFWDR_e_TcaseRange_Stat/FsftFWDR_e_TcaseRange_StatChrt */
    /* Entry Internal: FsftFWDR_e_TcaseRange_Stat/FsftFWDR_e_TcaseRange_StatChrt */
    /* Transition: '<S92>:2' */
    Rte_IrvWrite_FsftFWDR_e_TcaseRange_Stat_VeFWDI_b_Tcase_StatFA_init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftFWDR_e_TcaseRange_Stat' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_M_FricTrqClutch(VAR(float32, AUTOMATIC)
    LeFWDR_M_FricTrqClutch, VAR(boolean, AUTOMATIC) LeFWDR_b_FricTrqClutchFA)
{
    boolean rtb_LeFWDR_b_FricTrqClutchFA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_M_FricTrqClutch' */
    /* Chart: '<S13>/PokeFWDR_M_FricTrqClutchChrt' incorporates:
     *  SignalConversion generated from: '<S13>/LeFWDR_M_FricTrqClutch'
     *  SignalConversion generated from: '<S13>/LeFWDR_b_FricTrqClutchFA'
     */
    /* Gateway: PokeFWDR_M_FricTrqClutch/PokeFWDR_M_FricTrqClutchChrt */
    /* During: PokeFWDR_M_FricTrqClutch/PokeFWDR_M_FricTrqClutchChrt */
    /* Entry Internal: PokeFWDR_M_FricTrqClutch/PokeFWDR_M_FricTrqClutchChrt */
    /* Transition: '<S93>:2' */
    if (!LeFWDR_b_FricTrqClutchFA)
    {
        /* Transition: '<S93>:3' */
        /* Transition: '<S93>:15' */
        FWDR_ac_B.LeFWDR_M_FricTrqClutch_out = LeFWDR_M_FricTrqClutch;
        rtb_LeFWDR_b_FricTrqClutchFA_out_g = false;

        /* Transition: '<S93>:18' */
    }
    else
    {
        /* Transition: '<S93>:4' */
        rtb_LeFWDR_b_FricTrqClutchFA_out_g = true;
    }

    /* End of Chart: '<S13>/PokeFWDR_M_FricTrqClutchChrt' */

    /* Outport: '<Root>/VeFWDR_M_FricTrqClutch' incorporates:
     *  SignalConversion generated from: '<S13>/VeFWDR_M_FricTrqClutch'
     */
    (void)Rte_Write_VeFWDR_M_FricTrqClutch_Value
        (FWDR_ac_B.LeFWDR_M_FricTrqClutch_out);

    /* Outport: '<Root>/VeFWDR_b_FricTrqClutch_FA' incorporates:
     *  SignalConversion generated from: '<S13>/VeFWDR_b_FricTrqClutchFA'
     */
    (void)Rte_Write_VeFWDR_b_FricTrqClutch_FA_Value
        (rtb_LeFWDR_b_FricTrqClutchFA_out_g);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_M_FricTrqClutch' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_b_CCMFailSts(VAR(boolean, AUTOMATIC)
    LeFWDR_b_CCMFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_b_CCMFailSts' */
    /* Outport: '<Root>/VeFWDR_b_CCMFailSts' incorporates:
     *  SignalConversion generated from: '<S14>/VeFWDR_b_CCMFailSts'
     *  SignalConversion generated from: '<S14>/LeFWDR_b_CCMFailSts'
     */
    /* Gateway: PokeFWDR_b_CCMFailSts/PokeFWDR_b_CCMFailStsChrt */
    /* During: PokeFWDR_b_CCMFailSts/PokeFWDR_b_CCMFailStsChrt */
    /* Entry Internal: PokeFWDR_b_CCMFailSts/PokeFWDR_b_CCMFailStsChrt */
    /* Transition: '<S94>:2' */
    (void)Rte_Write_VeFWDR_b_CCMFailSts_Value(LeFWDR_b_CCMFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_b_CCMFailSts' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_e_PTU_State(VAR(TeFWDR_e_PTU_State, AUTOMATIC)
    LeFWDR_e_PTU_State, VAR(boolean, AUTOMATIC) LeFWDR_b_PTU_StateFA)
{
    TeFWDR_e_PTU_State rtb_LeFWDR_e_PTU_State_out_e;
    boolean rtb_LeFWDR_b_PTU_StateFA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_e_PTU_State' */
    /* Chart: '<S15>/PokeFWDR_e_PTU_StateChrt' incorporates:
     *  SignalConversion generated from: '<S15>/LeFWDR_b_PTU_StateFA'
     *  SignalConversion generated from: '<S15>/LeFWDR_e_PTU_State'
     */
    /* Gateway: PokeFWDR_e_PTU_State/PokeFWDR_e_PTU_StateChrt */
    /* During: PokeFWDR_e_PTU_State/PokeFWDR_e_PTU_StateChrt */
    /* Entry Internal: PokeFWDR_e_PTU_State/PokeFWDR_e_PTU_StateChrt */
    /* Transition: '<S95>:2' */
    if (!LeFWDR_b_PTU_StateFA)
    {
        /* Transition: '<S95>:3' */
        /* Transition: '<S95>:15' */
        rtb_LeFWDR_e_PTU_State_out_e = LeFWDR_e_PTU_State;
        rtb_LeFWDR_b_PTU_StateFA_out_c = false;

        /* Transition: '<S95>:18' */
    }
    else
    {
        /* Transition: '<S95>:4' */
        rtb_LeFWDR_e_PTU_State_out_e = CeFWDR_e_PTU_SNA;
        rtb_LeFWDR_b_PTU_StateFA_out_c = true;
    }

    /* End of Chart: '<S15>/PokeFWDR_e_PTU_StateChrt' */

    /* Outport: '<Root>/VeFWDR_b_PTU_State_FA' incorporates:
     *  SignalConversion generated from: '<S15>/VeFWDR_b_PTU_StateFA'
     */
    (void)Rte_Write_VeFWDR_b_PTU_State_FA_Value(rtb_LeFWDR_b_PTU_StateFA_out_c);

    /* Outport: '<Root>/VeFWDR_e_PTU_State' incorporates:
     *  SignalConversion generated from: '<S15>/VeFWDR_e_PTU_State'
     */
    (void)Rte_Write_VeFWDR_e_PTU_State_Value(rtb_LeFWDR_e_PTU_State_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_e_PTU_State' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_e_RDU_State(VAR(TeFWDR_e_RDU_State, AUTOMATIC)
    LeFWDR_e_RDU_State, VAR(boolean, AUTOMATIC) LeFWDR_b_RDU_StateFA)
{
    TeFWDR_e_RDU_State rtb_LeFWDR_e_RDU_State_out;
    boolean rtb_LeFWDR_b_RDU_StateFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_e_RDU_State' */
    /* Chart: '<S16>/PokeFWDR_e_RDU_StateChrt' incorporates:
     *  SignalConversion generated from: '<S16>/LeFWDR_b_RDU_StateFA'
     *  SignalConversion generated from: '<S16>/LeFWDR_e_RDU_State'
     */
    /* Gateway: PokeFWDR_e_RDU_State/PokeFWDR_e_RDU_StateChrt */
    /* During: PokeFWDR_e_RDU_State/PokeFWDR_e_RDU_StateChrt */
    /* Entry Internal: PokeFWDR_e_RDU_State/PokeFWDR_e_RDU_StateChrt */
    /* Transition: '<S96>:2' */
    if (!LeFWDR_b_RDU_StateFA)
    {
        /* Transition: '<S96>:3' */
        /* Transition: '<S96>:15' */
        rtb_LeFWDR_e_RDU_State_out = LeFWDR_e_RDU_State;
        rtb_LeFWDR_b_RDU_StateFA_out = false;

        /* Transition: '<S96>:18' */
    }
    else
    {
        /* Transition: '<S96>:4' */
        rtb_LeFWDR_e_RDU_State_out = CeFWDR_e_RDU_SNA;
        rtb_LeFWDR_b_RDU_StateFA_out = true;
    }

    /* End of Chart: '<S16>/PokeFWDR_e_RDU_StateChrt' */

    /* Outport: '<Root>/VeFWDR_b_RDU_State_FA' incorporates:
     *  SignalConversion generated from: '<S16>/VeFWDR_b_RDU_StateFA'
     */
    (void)Rte_Write_VeFWDR_b_RDU_State_FA_Value(rtb_LeFWDR_b_RDU_StateFA_out);

    /* Outport: '<Root>/VeFWDR_e_RDU_State' incorporates:
     *  SignalConversion generated from: '<S16>/VeFWDR_e_RDU_State'
     */
    (void)Rte_Write_VeFWDR_e_RDU_State_Value(rtb_LeFWDR_e_RDU_State_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_e_RDU_State' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_e_SpeedSyncReq(VAR(TeFWDR_e_SpeedSyncReq,
    AUTOMATIC) LeFWDR_e_SpeedSyncReq, VAR(boolean, AUTOMATIC)
    LeFWDR_b_SpeedSyncReqFA)
{
    TeFWDR_e_SpeedSyncReq rtb_LeFWDR_e_SpeedSyncReq_out;
    boolean rtb_LeFWDR_b_SpeedSyncReqFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_e_SpeedSyncReq' */
    /* Chart: '<S17>/PokeFWDR_e_SpeedSyncReqChrt' incorporates:
     *  SignalConversion generated from: '<S17>/LeFWDR_b_SpeedSyncReqFA'
     *  SignalConversion generated from: '<S17>/LeFWDR_e_SpeedSyncReq'
     */
    /* Gateway: PokeFWDR_e_SpeedSyncReq/PokeFWDR_e_SpeedSyncReqChrt */
    /* During: PokeFWDR_e_SpeedSyncReq/PokeFWDR_e_SpeedSyncReqChrt */
    /* Entry Internal: PokeFWDR_e_SpeedSyncReq/PokeFWDR_e_SpeedSyncReqChrt */
    /* Transition: '<S97>:2' */
    if (!LeFWDR_b_SpeedSyncReqFA)
    {
        /* Transition: '<S97>:3' */
        /* Transition: '<S97>:15' */
        rtb_LeFWDR_e_SpeedSyncReq_out = LeFWDR_e_SpeedSyncReq;
        rtb_LeFWDR_b_SpeedSyncReqFA_out = false;

        /* Transition: '<S97>:18' */
    }
    else
    {
        /* Transition: '<S97>:4' */
        rtb_LeFWDR_e_SpeedSyncReq_out = CeFWDR_e_SSR_SNA;
        rtb_LeFWDR_b_SpeedSyncReqFA_out = true;
    }

    /* End of Chart: '<S17>/PokeFWDR_e_SpeedSyncReqChrt' */

    /* Outport: '<Root>/VeFWDR_b_SpeedSyncReq_FA' incorporates:
     *  SignalConversion generated from: '<S17>/VeFWDR_b_SpeedSyncReqFA'
     */
    (void)Rte_Write_VeFWDR_b_SpeedSyncReq_FA_Value
        (rtb_LeFWDR_b_SpeedSyncReqFA_out);

    /* Outport: '<Root>/VeFWDR_e_SpeedSyncReq' incorporates:
     *  SignalConversion generated from: '<S17>/VeFWDR_e_SpeedSyncReq'
     */
    (void)Rte_Write_VeFWDR_e_SpeedSyncReq_Value(rtb_LeFWDR_e_SpeedSyncReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_e_SpeedSyncReq' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_e_Sw1Req(VAR(TeFWDR_e_Switch_Rq, AUTOMATIC)
    LeFWDR_e_Sw1Req, VAR(boolean, AUTOMATIC) LeFWDR_b_Sw1ReqFA)
{
    TeFWDR_e_Switch_Rq rtb_LeFWDR_e_Sw1Req_out;
    boolean rtb_LeFWDR_b_Sw1ReqFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_e_Sw1Req' */
    /* Chart: '<S18>/PokeFWDR_e_Sw1ReqChrt' incorporates:
     *  SignalConversion generated from: '<S18>/LeFWDR_b_Sw1ReqFA'
     *  SignalConversion generated from: '<S18>/LeFWDR_e_Sw1Req'
     */
    /* Gateway: PokeFWDR_e_Sw1Req/PokeFWDR_e_Sw1ReqChrt */
    /* During: PokeFWDR_e_Sw1Req/PokeFWDR_e_Sw1ReqChrt */
    /* Entry Internal: PokeFWDR_e_Sw1Req/PokeFWDR_e_Sw1ReqChrt */
    /* Transition: '<S98>:2' */
    if (!LeFWDR_b_Sw1ReqFA)
    {
        /* Transition: '<S98>:3' */
        /* Transition: '<S98>:15' */
        rtb_LeFWDR_e_Sw1Req_out = LeFWDR_e_Sw1Req;
        rtb_LeFWDR_b_Sw1ReqFA_out = false;

        /* Transition: '<S98>:18' */
    }
    else
    {
        /* Transition: '<S98>:4' */
        rtb_LeFWDR_e_Sw1Req_out = CeFWDR_e_SwReqSNA;
        rtb_LeFWDR_b_Sw1ReqFA_out = true;
    }

    /* End of Chart: '<S18>/PokeFWDR_e_Sw1ReqChrt' */

    /* Outport: '<Root>/VeFWDR_b_Sw1ReqFA' incorporates:
     *  SignalConversion generated from: '<S18>/VeFWDR_b_Sw1ReqFA'
     */
    (void)Rte_Write_VeFWDR_b_Sw1ReqFA_Value(rtb_LeFWDR_b_Sw1ReqFA_out);

    /* Outport: '<Root>/VeFWDR_e_Sw1Req' incorporates:
     *  SignalConversion generated from: '<S18>/VeFWDR_e_Sw1Req'
     */
    (void)Rte_Write_VeFWDR_e_Sw1Req_Value(rtb_LeFWDR_e_Sw1Req_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_e_Sw1Req' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_e_TCASE_SRV_RQ(VAR(TeFWDR_e_Tcase_Srv_Rq,
    AUTOMATIC) LeFWDR_e_TCASE_SRV_RQ, VAR(boolean, AUTOMATIC)
    LeFWDR_b_TCASE_SRV_RQFA)
{
    /* local block i/o variables */
    boolean rtb_LeFWDR_b_TCASE_SRV_RQFA_out;
    TeFWDR_e_Tcase_Srv_Rq rtb_LeFWDR_e_TCASE_SRV_RQ_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_e_TCASE_SRV_RQ' */
    /* Chart: '<S19>/PokeFWDR_e_TCASE_SRV_RQChrt' incorporates:
     *  SignalConversion generated from: '<S19>/LeFWDR_b_TCASE_SRV_RQFA'
     *  SignalConversion generated from: '<S19>/LeFWDR_e_TCASE_SRV_RQ'
     */
    /* Gateway: PokeFWDR_e_TCASE_SRV_RQ/PokeFWDR_e_TCASE_SRV_RQChrt */
    /* During: PokeFWDR_e_TCASE_SRV_RQ/PokeFWDR_e_TCASE_SRV_RQChrt */
    /* Entry Internal: PokeFWDR_e_TCASE_SRV_RQ/PokeFWDR_e_TCASE_SRV_RQChrt */
    /* Transition: '<S99>:2' */
    if (!LeFWDR_b_TCASE_SRV_RQFA)
    {
        /* Transition: '<S99>:3' */
        /* Transition: '<S99>:15' */
        rtb_LeFWDR_e_TCASE_SRV_RQ_out = LeFWDR_e_TCASE_SRV_RQ;
        rtb_LeFWDR_b_TCASE_SRV_RQFA_out = false;

        /* Transition: '<S99>:18' */
    }
    else
    {
        /* Transition: '<S99>:4' */
        rtb_LeFWDR_e_TCASE_SRV_RQ_out = CeFWDR_e_SrvRqSNA;
        rtb_LeFWDR_b_TCASE_SRV_RQFA_out = true;
    }

    /* End of Chart: '<S19>/PokeFWDR_e_TCASE_SRV_RQChrt' */

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S19>/VeFWDR_e_TCASE_SRV_RQ_write'
     * */
    Rte_IrvWrite_PokeFWDR_e_TCASE_SRV_RQ_VeFWDI_e_Tcase_Srv_Rq_init_write_IRV
        (rtb_LeFWDR_e_TCASE_SRV_RQ_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_e_TCASE_SRV_RQ' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_e_TCASE_STAT(VAR(TeFWDR_e_TrnsfrCaseRange,
    AUTOMATIC) LeFWDR_e_TCASE_STAT, VAR(boolean, AUTOMATIC)
    LeFWDR_b_TCASE_STATFA)
{
    TeFWDR_e_TrnsfrCaseRange rtb_LeFWDR_e_TCASE_STAT_out;
    boolean rtb_LeFWDR_b_TCASE_STATFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_e_TCASE_STAT' */
    /* Chart: '<S20>/PokeFWDR_e_TCASE_STATChrt' incorporates:
     *  SignalConversion generated from: '<S20>/LeFWDR_b_TCASE_STATFA'
     *  SignalConversion generated from: '<S20>/LeFWDR_e_TCASE_STAT'
     */
    /* Gateway: PokeFWDR_e_TCASE_STAT/PokeFWDR_e_TCASE_STATChrt */
    /* During: PokeFWDR_e_TCASE_STAT/PokeFWDR_e_TCASE_STATChrt */
    /* Entry Internal: PokeFWDR_e_TCASE_STAT/PokeFWDR_e_TCASE_STATChrt */
    /* Transition: '<S100>:2' */
    if (!LeFWDR_b_TCASE_STATFA)
    {
        /* Transition: '<S100>:3' */
        /* Transition: '<S100>:15' */
        rtb_LeFWDR_e_TCASE_STAT_out = LeFWDR_e_TCASE_STAT;
        rtb_LeFWDR_b_TCASE_STATFA_out = false;

        /* Transition: '<S100>:18' */
    }
    else
    {
        /* Transition: '<S100>:4' */
        rtb_LeFWDR_e_TCASE_STAT_out = CeFWDR_e_TfrCasSNA;
        rtb_LeFWDR_b_TCASE_STATFA_out = true;
    }

    /* End of Chart: '<S20>/PokeFWDR_e_TCASE_STATChrt' */

    /* Outport: '<Root>/VeFWDR_e_Tcase_Stat_DTCM' incorporates:
     *  SignalConversion generated from: '<S20>/VeFWDR_e_TCASE_STAT'
     */
    (void)Rte_Write_VeFWDR_e_Tcase_Stat_DTCM_Value(rtb_LeFWDR_e_TCASE_STAT_out);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S20>/VeFWDR_b_TCASE_STATFA_write'
     * */
    Rte_IrvWrite_PokeFWDR_e_TCASE_STAT_VeFWDI_b_Tcase_Stat_DTCMFA_Init_write_IRV
        (rtb_LeFWDR_b_TCASE_STATFA_out);

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  SignalConversion generated from: '<S20>/VeFWDR_e_TCASE_STAT_write'
     * */
    Rte_IrvWrite_PokeFWDR_e_TCASE_STAT_VeFWDI_e_Tcase_Stat_DTCM_init_write_IRV
        (rtb_LeFWDR_e_TCASE_STAT_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_e_TCASE_STAT' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_e_TCASE_TargetRangeState(VAR
    (TeFWDR_e_TCase_TrgtRngState, AUTOMATIC) LeFWDR_e_TCASE_TargetRangeState,
    VAR(boolean, AUTOMATIC) LeFWDR_b_TCASE_TargetRangeStateFA)
{
    TeFWDR_e_TCase_TrgtRngState rtb_LeFWDR_e_TCASE_TargetRangeState_out;
    boolean rtb_LeFWDR_b_TCASE_TargetRangeStateFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_e_TCASE_TargetRangeState' */
    /* Chart: '<S21>/PokeFWDR_e_TCASE_TargetRangeStateChrt' incorporates:
     *  SignalConversion generated from: '<S21>/LeFWDR_b_TCASE_TargetRangeStateFA'
     *  SignalConversion generated from: '<S21>/LeFWDR_e_TCASE_TargetRangeState'
     */
    /* Gateway: PokeFWDR_e_TCASE_TargetRangeState/PokeFWDR_e_TCASE_TargetRangeStateChrt */
    /* During: PokeFWDR_e_TCASE_TargetRangeState/PokeFWDR_e_TCASE_TargetRangeStateChrt */
    /* Entry Internal: PokeFWDR_e_TCASE_TargetRangeState/PokeFWDR_e_TCASE_TargetRangeStateChrt */
    /* Transition: '<S101>:2' */
    if (!LeFWDR_b_TCASE_TargetRangeStateFA)
    {
        /* Transition: '<S101>:3' */
        /* Transition: '<S101>:15' */
        rtb_LeFWDR_e_TCASE_TargetRangeState_out =
            LeFWDR_e_TCASE_TargetRangeState;
        rtb_LeFWDR_b_TCASE_TargetRangeStateFA_ou = false;

        /* Transition: '<S101>:18' */
    }
    else
    {
        /* Transition: '<S101>:4' */
        rtb_LeFWDR_e_TCASE_TargetRangeState_out = CeFWDR_e_TRS_SNA;
        rtb_LeFWDR_b_TCASE_TargetRangeStateFA_ou = true;
    }

    /* End of Chart: '<S21>/PokeFWDR_e_TCASE_TargetRangeStateChrt' */

    /* Outport: '<Root>/VeFWDR_b_TCASE_TargetRangeState_FA' incorporates:
     *  SignalConversion generated from: '<S21>/VeFWDR_b_TCASE_TargetRangeStateFA'
     */
    (void)Rte_Write_VeFWDR_b_TCASE_TargetRangeState_FA_Value
        (rtb_LeFWDR_b_TCASE_TargetRangeStateFA_ou);

    /* Outport: '<Root>/VeFWDR_e_TCASE_TargetRangeState' incorporates:
     *  SignalConversion generated from: '<S21>/VeFWDR_e_TCASE_TargetRangeState'
     */
    (void)Rte_Write_VeFWDR_e_TCASE_TargetRangeState_Value
        (rtb_LeFWDR_e_TCASE_TargetRangeState_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_e_TCASE_TargetRangeState' */
}

/* Output function */
FUNC(void, FWDR_CODE) PokeFWDR_e_TcaseRange_Stat(VAR(sint16, AUTOMATIC)
    LeFWDR_e_TcaseRange_Stat, VAR(boolean, AUTOMATIC) LeFWDR_b_TcaseRange_StatFA)
{
    boolean rtb_LeFWDR_b_TcaseRange_StatFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeFWDR_e_TcaseRange_Stat' */
    /* Chart: '<S22>/PokeFWDR_e_TcaseRange_StatChrt' incorporates:
     *  Constant: '<S102>/Calib'
     *  SignalConversion generated from: '<S22>/LeFWDR_b_TcaseRange_StatFA'
     *  SignalConversion generated from: '<S22>/LeFWDR_e_TcaseRange_Stat'
     */
    /* Gateway: PokeFWDR_e_TcaseRange_Stat/PokeFWDR_e_TcaseRange_StatChrt */
    /* During: PokeFWDR_e_TcaseRange_Stat/PokeFWDR_e_TcaseRange_StatChrt */
    /* Entry Internal: PokeFWDR_e_TcaseRange_Stat/PokeFWDR_e_TcaseRange_StatChrt */
    /* Transition: '<S103>:2' */
    if (!LeFWDR_b_TcaseRange_StatFA)
    {
        /* Transition: '<S103>:3' */
        /* Transition: '<S103>:15' */
        FWDR_ac_B.LeFWDR_e_TcaseRange_Stat_out = KaFWDR_e_TcaseStat
            [(LeFWDR_e_TcaseRange_Stat)];
        rtb_LeFWDR_b_TcaseRange_StatFA_out = false;

        /* Transition: '<S103>:18' */
    }
    else
    {
        /* Transition: '<S103>:4' */
        rtb_LeFWDR_b_TcaseRange_StatFA_out = true;
    }

    /* End of Chart: '<S22>/PokeFWDR_e_TcaseRange_StatChrt' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S22>/VeFWDR_b_TcaseRange_StatFA_write'
     * */
    Rte_IrvWrite_PokeFWDR_e_TcaseRange_Stat_VeFWDI_b_Tcase_StatFA_init_write_IRV
        (rtb_LeFWDR_b_TcaseRange_StatFA_out);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S22>/VeFWDR_e_TcaseRange_Stat_write'
     * */
    Rte_IrvWrite_PokeFWDR_e_TcaseRange_Stat_VeFWDI_e_Tcase_Stat_init_write_IRV
        (FWDR_ac_B.LeFWDR_e_TcaseRange_Stat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeFWDR_e_TcaseRange_Stat' */
}

/* Output function */
FUNC(void, FWDR_CODE) FWDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/FWDR_PwrOff'
     */
    /* Outport: '<Root>/BeFWDR_e_Tcase_Stat_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/BeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Write_BeFWDR_e_Tcase_Stat_BeFWDR_e_Tcase_Stat
        (FWDR_ac_DW.BeFWDR_e_Tcase_Stat);

    /* Outport: '<Root>/BeFWDR_r_Tcase_Hi_Ratio_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/BeFWDR_r_Tcase_Hi_Ratio'
     */
    (void)Rte_Write_BeFWDR_r_Tcase_Hi_Ratio_BeFWDR_r_Tcase_Hi_Ratio
        (FWDR_ac_DW.BeFWDR_r_Tcase_Hi_Ratio);

    /* Outport: '<Root>/BeFWDR_r_Tcase_Low_Ratio_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/BeFWDR_r_Tcase_Low_Ratio'
     */
    (void)Rte_Write_BeFWDR_r_Tcase_Low_Ratio_BeFWDR_r_Tcase_Low_Ratio
        (FWDR_ac_DW.BeFWDR_r_Tcase_Low_Ratio);

    /* Outport: '<Root>/BeFWDR_r_Axle_Ratio_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/BeFWDR_r_Axle_Ratio'
     */
    (void)Rte_Write_BeFWDR_r_Axle_Ratio_BeFWDR_r_Axle_Ratio
        (FWDR_ac_DW.BeFWDR_r_Axle_Ratio);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, FWDR_CODE) FWDR_PwrOn(void)
{
    float32 rtb_TmpSignalConversionAtBeFWDR_r_Axle_R;
    float32 rtb_TmpSignalConversionAtBeFWDR_r_Tcas_g;
    float32 rtb_TmpSignalConversionAtBeFWDR_r_Tcase_;
    sint16 rtb_TmpSignalConversionAtBeFWDR_e_Tcase_;
    TeFWDR_e_TrnsfrCaseRange tmp;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/FWDR_PwrOn'
     */
    /* SignalConversion generated from: '<S3>/BeFWDR_e_Tcase_Stat_PM_In' incorporates:
     *  Inport: '<Root>/BeFWDR_e_Tcase_Stat_PM_In'
     */
    (void)Rte_Read_BeFWDR_e_Tcase_Stat_Rx_BeFWDR_e_Tcase_Stat
        (&rtb_TmpSignalConversionAtBeFWDR_e_Tcase_);

    /* SignalConversion generated from: '<S3>/BeFWDR_r_Tcase_Hi_Ratio_PM_In' incorporates:
     *  Inport: '<Root>/BeFWDR_r_Tcase_Hi_Ratio_PM_In'
     */
    (void)Rte_Read_BeFWDR_r_Tcase_Hi_Ratio_Rx_BeFWDR_r_Tcase_Hi_Ratio
        (&rtb_TmpSignalConversionAtBeFWDR_r_Tcase_);

    /* SignalConversion generated from: '<S3>/BeFWDR_r_Tcase_Low_Ratio_PM_In' incorporates:
     *  Inport: '<Root>/BeFWDR_r_Tcase_Low_Ratio_PM_In'
     */
    (void)Rte_Read_BeFWDR_r_Tcase_Low_Ratio_Rx_BeFWDR_r_Tcase_Low_Ratio
        (&rtb_TmpSignalConversionAtBeFWDR_r_Tcas_g);

    /* SignalConversion generated from: '<S3>/BeFWDR_r_Axle_Ratio_PM_In' incorporates:
     *  Inport: '<Root>/BeFWDR_r_Axle_Ratio_PM_In'
     */
    (void)Rte_Read_BeFWDR_r_Axle_Ratio_Rx_BeFWDR_r_Axle_Ratio
        (&rtb_TmpSignalConversionAtBeFWDR_r_Axle_R);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* Switch: '<S64>/Switch1' incorporates:
     *  Constant: '<S64>/Const1'
     *  Constant: '<S67>/Calib'
     *  DataStoreWrite: '<S64>/BeFWDR_e_Tcase_Stat'
     *  DataTypeConversion: '<S64>/Data Type Conversion'
     *  RelationalOperator: '<S64>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtBeFWDR_e_Tcase_ > (-9))
    {
        FWDR_ac_DW.BeFWDR_e_Tcase_Stat =
            rtb_TmpSignalConversionAtBeFWDR_e_Tcase_;
    }
    else
    {
        FWDR_ac_DW.BeFWDR_e_Tcase_Stat = (sint16)KeFWDR_e_TcaseStatOvrdVal;
    }

    /* End of Switch: '<S64>/Switch1' */

    /* Switch: '<S64>/Switch2' incorporates:
     *  Constant: '<S64>/Const2'
     *  Constant: '<S69>/Calib'
     *  DataStoreWrite: '<S64>/BeFWDR_r_Tcase_Hi_Ratio'
     *  RelationalOperator: '<S64>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtBeFWDR_r_Tcase_ > (-9.0F))
    {
        FWDR_ac_DW.BeFWDR_r_Tcase_Hi_Ratio =
            rtb_TmpSignalConversionAtBeFWDR_r_Tcase_;
    }
    else
    {
        FWDR_ac_DW.BeFWDR_r_Tcase_Hi_Ratio = KeFWDR_r_HIRatioOvrdVal;
    }

    /* End of Switch: '<S64>/Switch2' */

    /* Switch: '<S64>/Switch3' incorporates:
     *  Constant: '<S64>/Const3'
     *  Constant: '<S70>/Calib'
     *  DataStoreWrite: '<S64>/BeFWDR_r_Tcase_Low_Ratio'
     *  RelationalOperator: '<S64>/Relational Operator2'
     */
    if (rtb_TmpSignalConversionAtBeFWDR_r_Tcas_g > (-9.0F))
    {
        FWDR_ac_DW.BeFWDR_r_Tcase_Low_Ratio =
            rtb_TmpSignalConversionAtBeFWDR_r_Tcas_g;
    }
    else
    {
        FWDR_ac_DW.BeFWDR_r_Tcase_Low_Ratio = KeFWDR_r_LowRatioOvrdVal;
    }

    /* End of Switch: '<S64>/Switch3' */

    /* Switch: '<S64>/Switch4' incorporates:
     *  Constant: '<S64>/Const4'
     *  Constant: '<S68>/Calib'
     *  DataStoreWrite: '<S64>/BeFWDR_r_Axle_Ratio'
     *  RelationalOperator: '<S64>/Relational Operator3'
     */
    if (rtb_TmpSignalConversionAtBeFWDR_r_Axle_R > (-9.0F))
    {
        FWDR_ac_DW.BeFWDR_r_Axle_Ratio =
            rtb_TmpSignalConversionAtBeFWDR_r_Axle_R;
    }
    else
    {
        FWDR_ac_DW.BeFWDR_r_Axle_Ratio = KeFWDR_r_AxleRatioOvrdVal;
    }

    /* End of Switch: '<S64>/Switch4' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/InitValue'
     */
    /* SignalConversion generated from: '<S65>/VeFWDI_b_Tcase_StatFA_init' incorporates:
     *  Constant: '<S74>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_b_Tcase_StatFA_in =
        KeFWDR_b_TcaseStatFAOvrdVal;

    /* SignalConversion generated from: '<S65>/VeFWDI_e_Tcase_Stat_DTCM_init' incorporates:
     *  Constant: '<S82>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_e_Tcase_Stat_DTCM =
        KeFWDR_e_TcaseStatDTCMOvrdVal;

    /* SignalConversion generated from: '<S65>/VeFWDI_e_Tcase_Srv_Rq_init' incorporates:
     *  Constant: '<S81>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_e_Tcase_Srv_Rq_in =
        KeFWDR_e_TcaseSrvRdOvrdVal;

    /* SignalConversion generated from: '<S65>/VeFWDI_b_Tcase_Stat_DTCMFA_Init' */
    FWDR_ac_B.OutportBufferForVeFWDI_b_Tcase_Stat_DTCM =
        FWDR_ac_ConstB.FALSEConstant;

    /* SignalConversion generated from: '<S65>/VeFWDI_b_Tcase_Srv_RqFA_init' */
    FWDR_ac_B.OutportBufferForVeFWDI_b_Tcase_Srv_RqFA_ =
        FWDR_ac_ConstB.FALSEConstant1;

    /* SignalConversion generated from: '<S65>/VeFWDI_b_CCMFailSts_Init' incorporates:
     *  Constant: '<S73>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_b_CCMFailSts_Init =
        KeFWDR_b_CCMFailStsInitVal;

    /* SignalConversion generated from: '<S65>/VeFWDI_e_Sw1Req_Init' incorporates:
     *  Constant: '<S79>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_e_Sw1Req_Init = KeFWDR_e_Sw1ReqInitVal;

    /* SignalConversion generated from: '<S65>/VeFWDI_b_Sw1ReqFA_Init' */
    FWDR_ac_B.OutportBufferForVeFWDI_b_Sw1ReqFA_Init =
        FWDR_ac_ConstB.FALSEConstant2;

    /* SignalConversion generated from: '<S65>/TCASE_TargetRangeState_INIT' incorporates:
     *  Constant: '<S80>/Calib'
     */
    FWDR_ac_B.OutportBufferForTCASE_TargetRangeState_I =
        KeFWDR_e_TCASE_TargetRangeState_INIT;

    /* SignalConversion generated from: '<S65>/TCASE_TargetRangeState_FA_INIT' */
    FWDR_ac_B.OutportBufferForTCASE_TargetRangeState_F =
        FWDR_ac_ConstB.FALSEConstant3;

    /* SignalConversion generated from: '<S65>/PTU_State_INIT' incorporates:
     *  Constant: '<S76>/Calib'
     */
    FWDR_ac_B.OutportBufferForPTU_State_INIT = KeFWDR_e_PTU_State_INIT;

    /* SignalConversion generated from: '<S65>/PTU_State_FA_INIT' */
    FWDR_ac_B.OutportBufferForPTU_State_FA_INIT = FWDR_ac_ConstB.FALSEConstant4;

    /* SignalConversion generated from: '<S65>/RDU_State_INIT' incorporates:
     *  Constant: '<S77>/Calib'
     */
    FWDR_ac_B.OutportBufferForRDU_State_INIT = KeFWDR_e_RDU_State_INIT;

    /* SignalConversion generated from: '<S65>/RDU_State_FA_INIT' */
    FWDR_ac_B.OutportBufferForRDU_State_FA_INIT = FWDR_ac_ConstB.FALSEConstant5;

    /* SignalConversion generated from: '<S65>/SpeedSyncReq_INIT' incorporates:
     *  Constant: '<S78>/Calib'
     */
    FWDR_ac_B.OutportBufferForSpeedSyncReq_INIT = KeFWDR_e_SpeedSyncReq_INIT;

    /* SignalConversion generated from: '<S65>/SpeedSyncReq_FA_INIT' */
    FWDR_ac_B.OutportBufferForSpeedSyncReq_FA_INIT =
        FWDR_ac_ConstB.FALSEConstant6;

    /* SignalConversion generated from: '<S65>/FricTrqClutch_INIT' incorporates:
     *  Constant: '<S72>/Calib'
     */
    FWDR_ac_B.OutportBufferForFricTrqClutch_INIT = KeFWDR_M_FricTrqClutch_INIT;

    /* SignalConversion generated from: '<S65>/FricTrqClutch_FA_INIT' */
    FWDR_ac_B.OutportBufferForFricTrqClutch_FA_INIT =
        FWDR_ac_ConstB.FALSEConstant7;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S66>/VeFWDR_r_TCaseRatio_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_r_TCaseRatio_Out_ = FWDR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S66>/VeFWDR_r_Axle_Ratio_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_r_Axle_Ratio_Out_ = FWDR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S66>/VeFWDR_e_Tcase_Stat_Out_Init' incorporates:
     *  Constant: '<S66>/Const4'
     */
    FWDR_ac_B.OutportBufferForVeFWDR_e_Tcase_Stat_Out_ = FWDR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S66>/VeFWDR_b_Tcase_StatFA_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_b_Tcase_StatFA_Ou = FWDR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S66>/VeFWDR_b_4HIPTActv_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_b_4HIPTActv_Out_I = FWDR_ac_ConstB.Const7;

    /* SignalConversion generated from: '<S66>/VeFWDR_n_FDTransOutSpdSgndFltrd_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_n_FDTransOutSpdSg = FWDR_ac_ConstB.Const8;

    /* SignalConversion generated from: '<S66>/VeFWDR_b_SpeedSyncAvail' */
    FWDR_ac_B.OutportBufferForVeFWDR_b_SpeedSyncAvail = FWDR_ac_ConstB.Const9;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeFWDR_b_FricTrqClutch_FA' incorporates:
     *  SignalConversion generated from: '<S3>/FricTrqClutch_FA_INIT'
     */
    (void)Rte_Write_VeFWDR_b_FricTrqClutch_FA_Value
        (FWDR_ac_B.OutportBufferForFricTrqClutch_FA_INIT);

    /* Outport: '<Root>/VeFWDR_M_FricTrqClutch' incorporates:
     *  SignalConversion generated from: '<S3>/FricTrqClutch_INIT'
     */
    (void)Rte_Write_VeFWDR_M_FricTrqClutch_Value
        (FWDR_ac_B.OutportBufferForFricTrqClutch_INIT);

    /* Outport: '<Root>/VeFWDR_b_PTU_State_FA' incorporates:
     *  SignalConversion generated from: '<S3>/PTU_State_FA_INIT'
     */
    (void)Rte_Write_VeFWDR_b_PTU_State_FA_Value
        (FWDR_ac_B.OutportBufferForPTU_State_FA_INIT);

    /* Outport: '<Root>/VeFWDR_e_PTU_State' incorporates:
     *  SignalConversion generated from: '<S3>/PTU_State_INIT'
     *  SignalConversion generated from: '<S65>/PTU_State_INIT'
     */
    (void)Rte_Write_VeFWDR_e_PTU_State_Value
        (FWDR_ac_B.OutportBufferForPTU_State_INIT);

    /* Outport: '<Root>/VeFWDR_b_RDU_State_FA' incorporates:
     *  SignalConversion generated from: '<S3>/RDU_State_FA_INIT'
     */
    (void)Rte_Write_VeFWDR_b_RDU_State_FA_Value
        (FWDR_ac_B.OutportBufferForRDU_State_FA_INIT);

    /* Outport: '<Root>/VeFWDR_e_RDU_State' incorporates:
     *  SignalConversion generated from: '<S3>/RDU_State_INIT'
     *  SignalConversion generated from: '<S65>/RDU_State_INIT'
     */
    (void)Rte_Write_VeFWDR_e_RDU_State_Value
        (FWDR_ac_B.OutportBufferForRDU_State_INIT);

    /* Outport: '<Root>/VeFWDR_b_SpeedSyncReq_FA' incorporates:
     *  SignalConversion generated from: '<S3>/SpeedSyncReq_FA_INIT'
     */
    (void)Rte_Write_VeFWDR_b_SpeedSyncReq_FA_Value
        (FWDR_ac_B.OutportBufferForSpeedSyncReq_FA_INIT);

    /* Outport: '<Root>/VeFWDR_e_SpeedSyncReq' incorporates:
     *  SignalConversion generated from: '<S3>/SpeedSyncReq_INIT'
     *  SignalConversion generated from: '<S65>/SpeedSyncReq_INIT'
     */
    (void)Rte_Write_VeFWDR_e_SpeedSyncReq_Value
        (FWDR_ac_B.OutportBufferForSpeedSyncReq_INIT);

    /* Outport: '<Root>/VeFWDR_b_TCASE_TargetRangeState_FA' incorporates:
     *  SignalConversion generated from: '<S3>/TCASE_TargetRangeState_FA_INIT'
     */
    (void)Rte_Write_VeFWDR_b_TCASE_TargetRangeState_FA_Value
        (FWDR_ac_B.OutportBufferForTCASE_TargetRangeState_F);

    /* Outport: '<Root>/VeFWDR_e_TCASE_TargetRangeState' incorporates:
     *  SignalConversion generated from: '<S3>/TCASE_TargetRangeState_INIT'
     *  SignalConversion generated from: '<S65>/TCASE_TargetRangeState_INIT'
     */
    (void)Rte_Write_VeFWDR_e_TCASE_TargetRangeState_Value
        (FWDR_ac_B.OutportBufferForTCASE_TargetRangeState_I);

    /* Outport: '<Root>/VeFWDR_b_CCMFailSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDI_b_CCMFailSts_Init'
     */
    (void)Rte_Write_VeFWDR_b_CCMFailSts_Value
        (FWDR_ac_B.OutportBufferForVeFWDI_b_CCMFailSts_Init);

    /* Outport: '<Root>/VeFWDR_b_Sw1ReqFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDI_b_Sw1ReqFA_Init'
     */
    (void)Rte_Write_VeFWDR_b_Sw1ReqFA_Value
        (FWDR_ac_B.OutportBufferForVeFWDI_b_Sw1ReqFA_Init);

    /* Outport: '<Root>/VeFWDR_e_Sw1Req' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDI_e_Sw1Req_Init'
     *  SignalConversion generated from: '<S65>/VeFWDI_e_Sw1Req_Init'
     */
    (void)Rte_Write_VeFWDR_e_Sw1Req_Value
        (FWDR_ac_B.OutportBufferForVeFWDI_e_Sw1Req_Init);

    /* Outport: '<Root>/VeFWDR_e_Tcase_Stat_DTCM' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDI_e_Tcase_Stat_DTCM_init'
     *  SignalConversion generated from: '<S65>/VeFWDI_e_Tcase_Stat_DTCM_init'
     */
    (void)Rte_Write_VeFWDR_e_Tcase_Stat_DTCM_Value
        (FWDR_ac_B.OutportBufferForVeFWDI_e_Tcase_Stat_DTCM);

    /* Outport: '<Root>/VeFWDR_b_4HIPTActv' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDR_b_4HIPTActv_Out_Init'
     */
    (void)Rte_Write_VeFWDR_b_4HIPTActv_Value
        (FWDR_ac_B.OutportBufferForVeFWDR_b_4HIPTActv_Out_I);

    /* Outport: '<Root>/VeFWDR_b_SpeedSyncAvail' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDR_b_SpeedSyncAvail'
     */
    (void)Rte_Write_VeFWDR_b_SpeedSyncAvail_Value
        (FWDR_ac_B.OutportBufferForVeFWDR_b_SpeedSyncAvail);

    /* Outport: '<Root>/VeFWDR_b_Tcase_StatFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDR_b_Tcase_StatFA_Out_Init'
     */
    (void)Rte_Write_VeFWDR_b_Tcase_StatFA_Value
        (FWDR_ac_B.OutportBufferForVeFWDR_b_Tcase_StatFA_Ou);

    /* Outport: '<Root>/VeFWDR_e_Tcase_Stat' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDR_e_Tcase_Stat_Out_Init'
     *  SignalConversion generated from: '<S66>/VeFWDR_e_Tcase_Stat_Out_Init'
     */
    (void)Rte_Write_VeFWDR_e_Tcase_Stat_Value
        (FWDR_ac_B.OutportBufferForVeFWDR_e_Tcase_Stat_Out_);

    /* Outport: '<Root>/VeFWDR_n_FDTransOutSpdSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDR_n_FDTransOutSpdSgndFltrd_Out_Init'
     */
    (void)Rte_Write_VeFWDR_n_FDTransOutSpdSgndFltrd_Value
        (FWDR_ac_B.OutportBufferForVeFWDR_n_FDTransOutSpdSg);

    /* Outport: '<Root>/VeFWDR_r_Axle_Ratio' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDR_r_Axle_Ratio_Out_Init'
     */
    (void)Rte_Write_VeFWDR_r_Axle_Ratio_Value
        (FWDR_ac_B.OutportBufferForVeFWDR_r_Axle_Ratio_Out_);

    /* Outport: '<Root>/VeFWDR_r_TCaseRatio' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDR_r_TCaseRatio_Out_Init'
     */
    (void)Rte_Write_VeFWDR_r_TCaseRatio_Value
        (FWDR_ac_B.OutportBufferForVeFWDR_r_TCaseRatio_Out_);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDI_b_Tcase_StatFA_init_write'
     * */
    Rte_IrvWrite_FWDR_PwrOn_VeFWDI_b_Tcase_StatFA_init_write_IRV
        (FWDR_ac_B.OutportBufferForVeFWDI_b_Tcase_StatFA_in);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDI_b_Tcase_Stat_DTCMFA_Init_write'
     * */
    Rte_IrvWrite_FWDR_PwrOn_VeFWDI_b_Tcase_Stat_DTCMFA_Init_write_IRV
        (FWDR_ac_B.OutportBufferForVeFWDI_b_Tcase_Stat_DTCM);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDI_e_Tcase_Srv_Rq_init_write'
     *  SignalConversion generated from: '<S65>/VeFWDI_e_Tcase_Srv_Rq_init'
     * */
    Rte_IrvWrite_FWDR_PwrOn_VeFWDI_e_Tcase_Srv_Rq_init_write_IRV
        (FWDR_ac_B.OutportBufferForVeFWDI_e_Tcase_Srv_Rq_in);

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDI_e_Tcase_Stat_DTCM_init_write'
     *  SignalConversion generated from: '<S65>/VeFWDI_e_Tcase_Stat_DTCM_init'
     * */
    Rte_IrvWrite_FWDR_PwrOn_VeFWDI_e_Tcase_Stat_DTCM_init_write_IRV
        (FWDR_ac_B.OutportBufferForVeFWDI_e_Tcase_Stat_DTCM);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/InitValue'
     */
    /* Switch: '<S65>/Switch' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S83>/Calib'
     *  DataStoreRead: '<S65>/Data Store Read'
     *  DataTypeConversion: '<S71>/DataTypeConversion'
     */
    if (KeFWDR_b_TcaseStatValEnbl)
    {
        tmp = KeFWDR_e_TcaseStatOvrdVal;
    }
    else
    {
        tmp = (TeFWDR_e_TrnsfrCaseRange)FWDR_ac_DW.BeFWDR_e_Tcase_Stat;
    }

    /* End of Switch: '<S65>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDI_e_Tcase_Stat_init_write'
     */
    Rte_IrvWrite_FWDR_PwrOn_VeFWDI_e_Tcase_Stat_init_write_IRV(tmp);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, FWDR_CODE) FWDR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        FWDR_ac_B.OutportBufferForRDU_State_INIT = CeFWDR_e_RDU_SNA;
        FWDR_ac_B.OutportBufferForPTU_State_INIT = CeFWDR_e_PTU_SNA;
    }

    /* Start for DataStoreMemory: '<Root>/DSM_1' */
    FWDR_ac_DW.BeFWDR_e_Tcase_Stat = (-10);

    /* Start for DataStoreMemory: '<Root>/DSM_2' */
    FWDR_ac_DW.BeFWDR_r_Tcase_Hi_Ratio = (-10.0F);

    /* Start for DataStoreMemory: '<Root>/DSM_3' */
    FWDR_ac_DW.BeFWDR_r_Tcase_Low_Ratio = (-10.0F);

    /* Start for DataStoreMemory: '<Root>/DSM_4' */
    FWDR_ac_DW.BeFWDR_r_Axle_Ratio = (-10.0F);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/FWDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/InitValue'
     */
    /* SystemInitialize for SignalConversion generated from: '<S65>/VeFWDI_b_Tcase_StatFA_init' incorporates:
     *  Constant: '<S74>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_b_Tcase_StatFA_in =
        KeFWDR_b_TcaseStatFAOvrdVal;

    /* SystemInitialize for SignalConversion generated from: '<S65>/VeFWDI_e_Tcase_Stat_DTCM_init' incorporates:
     *  Constant: '<S82>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_e_Tcase_Stat_DTCM =
        KeFWDR_e_TcaseStatDTCMOvrdVal;

    /* SystemInitialize for SignalConversion generated from: '<S65>/VeFWDI_e_Tcase_Srv_Rq_init' incorporates:
     *  Constant: '<S81>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_e_Tcase_Srv_Rq_in =
        KeFWDR_e_TcaseSrvRdOvrdVal;

    /* SystemInitialize for SignalConversion generated from: '<S65>/VeFWDI_b_Tcase_Stat_DTCMFA_Init' */
    FWDR_ac_B.OutportBufferForVeFWDI_b_Tcase_Stat_DTCM =
        FWDR_ac_ConstB.FALSEConstant;

    /* SystemInitialize for SignalConversion generated from: '<S65>/VeFWDI_b_Tcase_Srv_RqFA_init' */
    FWDR_ac_B.OutportBufferForVeFWDI_b_Tcase_Srv_RqFA_ =
        FWDR_ac_ConstB.FALSEConstant1;

    /* SystemInitialize for SignalConversion generated from: '<S65>/VeFWDI_b_CCMFailSts_Init' incorporates:
     *  Constant: '<S73>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_b_CCMFailSts_Init =
        KeFWDR_b_CCMFailStsInitVal;

    /* SystemInitialize for SignalConversion generated from: '<S65>/VeFWDI_e_Sw1Req_Init' incorporates:
     *  Constant: '<S79>/Calib'
     */
    FWDR_ac_B.OutportBufferForVeFWDI_e_Sw1Req_Init = KeFWDR_e_Sw1ReqInitVal;

    /* SystemInitialize for SignalConversion generated from: '<S65>/VeFWDI_b_Sw1ReqFA_Init' */
    FWDR_ac_B.OutportBufferForVeFWDI_b_Sw1ReqFA_Init =
        FWDR_ac_ConstB.FALSEConstant2;

    /* SystemInitialize for SignalConversion generated from: '<S65>/TCASE_TargetRangeState_INIT' incorporates:
     *  Constant: '<S80>/Calib'
     */
    FWDR_ac_B.OutportBufferForTCASE_TargetRangeState_I =
        KeFWDR_e_TCASE_TargetRangeState_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S65>/TCASE_TargetRangeState_FA_INIT' */
    FWDR_ac_B.OutportBufferForTCASE_TargetRangeState_F =
        FWDR_ac_ConstB.FALSEConstant3;

    /* SystemInitialize for SignalConversion generated from: '<S65>/PTU_State_INIT' incorporates:
     *  Constant: '<S76>/Calib'
     */
    FWDR_ac_B.OutportBufferForPTU_State_INIT = KeFWDR_e_PTU_State_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S65>/PTU_State_FA_INIT' */
    FWDR_ac_B.OutportBufferForPTU_State_FA_INIT = FWDR_ac_ConstB.FALSEConstant4;

    /* SystemInitialize for SignalConversion generated from: '<S65>/RDU_State_INIT' incorporates:
     *  Constant: '<S77>/Calib'
     */
    FWDR_ac_B.OutportBufferForRDU_State_INIT = KeFWDR_e_RDU_State_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S65>/RDU_State_FA_INIT' */
    FWDR_ac_B.OutportBufferForRDU_State_FA_INIT = FWDR_ac_ConstB.FALSEConstant5;

    /* SystemInitialize for SignalConversion generated from: '<S65>/SpeedSyncReq_INIT' incorporates:
     *  Constant: '<S78>/Calib'
     */
    FWDR_ac_B.OutportBufferForSpeedSyncReq_INIT = KeFWDR_e_SpeedSyncReq_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S65>/SpeedSyncReq_FA_INIT' */
    FWDR_ac_B.OutportBufferForSpeedSyncReq_FA_INIT =
        FWDR_ac_ConstB.FALSEConstant6;

    /* SystemInitialize for SignalConversion generated from: '<S65>/FricTrqClutch_INIT' incorporates:
     *  Constant: '<S72>/Calib'
     */
    FWDR_ac_B.OutportBufferForFricTrqClutch_INIT = KeFWDR_M_FricTrqClutch_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S65>/FricTrqClutch_FA_INIT' */
    FWDR_ac_B.OutportBufferForFricTrqClutch_FA_INIT =
        FWDR_ac_ConstB.FALSEConstant7;

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S66>/VeFWDR_r_TCaseRatio_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_r_TCaseRatio_Out_ = FWDR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S66>/VeFWDR_r_Axle_Ratio_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_r_Axle_Ratio_Out_ = FWDR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S66>/VeFWDR_e_Tcase_Stat_Out_Init' incorporates:
     *  Constant: '<S66>/Const4'
     */
    FWDR_ac_B.OutportBufferForVeFWDR_e_Tcase_Stat_Out_ = FWDR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S66>/VeFWDR_b_Tcase_StatFA_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_b_Tcase_StatFA_Ou = FWDR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S66>/VeFWDR_b_4HIPTActv_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_b_4HIPTActv_Out_I = FWDR_ac_ConstB.Const7;

    /* SystemInitialize for SignalConversion generated from: '<S66>/VeFWDR_n_FDTransOutSpdSgndFltrd_Out_Init' */
    FWDR_ac_B.OutportBufferForVeFWDR_n_FDTransOutSpdSg = FWDR_ac_ConstB.Const8;

    /* SystemInitialize for SignalConversion generated from: '<S66>/VeFWDR_b_SpeedSyncAvail' */
    FWDR_ac_B.OutportBufferForVeFWDR_b_SpeedSyncAvail = FWDR_ac_ConstB.Const9;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeFWDR_r_TCaseRatio' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeFWDR_r_TCaseRatio_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_r_Axle_Ratio' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeFWDR_r_Axle_Ratio_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    (void)Rte_Write_VeFWDR_e_Tcase_Stat_Value(CeFWDR_e_ShiftINProg);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_Tcase_StatFA' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VeFWDR_b_Tcase_StatFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_4HIPTActv' incorporates:
     *  Merge: '<Root>/Merge_Outport_7'
     */
    (void)Rte_Write_VeFWDR_b_4HIPTActv_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_e_Sw1Req' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeFWDR_e_Sw1Req_Value(CeFWDR_e_NotPSD);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_Sw1ReqFA' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeFWDR_b_Sw1ReqFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_e_Tcase_Stat_DTCM' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VeFWDR_e_Tcase_Stat_DTCM_Value(CeFWDR_e_ShiftINProg);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_CCMFailSts' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeFWDR_b_CCMFailSts_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_e_TCASE_TargetRangeState' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    (void)Rte_Write_VeFWDR_e_TCASE_TargetRangeState_Value(CeFWDR_e_TRS_High);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_TCASE_TargetRangeState_FA' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeFWDR_b_TCASE_TargetRangeState_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_e_PTU_State' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeFWDR_e_PTU_State_Value(CeFWDR_e_PTU_SNA);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_PTU_State_FA' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeFWDR_b_PTU_State_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_e_RDU_State' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeFWDR_e_RDU_State_Value(CeFWDR_e_RDU_SNA);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_RDU_State_FA' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    (void)Rte_Write_VeFWDR_b_RDU_State_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_e_SpeedSyncReq' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    (void)Rte_Write_VeFWDR_e_SpeedSyncReq_Value(CeFWDR_e_SSR_Inactive);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_SpeedSyncReq_FA' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeFWDR_b_SpeedSyncReq_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_M_FricTrqClutch' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    (void)Rte_Write_VeFWDR_M_FricTrqClutch_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_FricTrqClutch_FA' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    (void)Rte_Write_VeFWDR_b_FricTrqClutch_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_n_FDTransOutSpdSgndFltrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_22'
     */
    (void)Rte_Write_VeFWDR_n_FDTransOutSpdSgndFltrd_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeFWDR_b_SpeedSyncAvail' incorporates:
     *  Merge: '<Root>/Merge_Outport_8'
     */
    (void)Rte_Write_VeFWDR_b_SpeedSyncAvail_Value(false);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
