/*
 * File: TTIR_ac.c
 *
 * Code generated for Simulink model 'TTIR_ac'.
 *
 * Model version                  : 9.120
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:54:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TTIR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TTIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, TTIR_VAR_INIT) HeTTIR_t_dTA = 0.0125F;/* Referenced by: '<S87>/Calib' */
static volatile CONST(uint16, TTIR_VAR_INIT) KeTTIR_M_ClthStrRsrvEngNegOfst =
    100U;                              /* Referenced by: '<S108>/Calib' */
static volatile CONST(uint16, TTIR_VAR_INIT) KeTTIR_M_ClthStrRsrvEngPosOfst =
    100U;                              /* Referenced by: '<S109>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_ClthStrRsrvTrqDflt = 0.0F;/* Referenced by:
                                                                      * '<S1>/FsftTTIR_M_ClthStrRsrvTrqChrt'
                                                                      * '<S20>/PokeTTIR_M_ClthStrRsrvTrqChrt'
                                                                      */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_HASTrqK0Dflt = 546.0F;/* Referenced by:
                                                                      * '<S2>/FsftTTIR_M_HASTrqK0Chrt'
                                                                      * '<S21>/PokeTTIR_M_HASTrqK0Chrt'
                                                                      */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_HASTrqK0LeadDflt =
    1000.0F;                           /* Referenced by:
                                        * '<S3>/FsftTTIR_M_HASTrqK0LeadChrt'
                                        * '<S22>/PokeTTIR_M_HASTrqK0LeadChrt'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_HASTrqK0LeadManual =
    1000.0F;                           /* Referenced by: '<S88>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_HASTrqK0Lead_Init = 0.0F;/* Referenced by: '<S165>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_HASTrqK0_Init = 0.0F;/* Referenced by: '<S166>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_ILECreepTrqDflt = 0.0F;
                      /* Referenced by: '<S23>/PokeTTIR_M_ILECreepTorqueChrt' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_ILECreepTrq_Init = 0.0F;/* Referenced by: '<S167>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_K1TrqCapActDflt = 1000.0F;/* Referenced by:
                                                                      * '<S4>/FsftTTIR_M_K1TrqCapActChrt'
                                                                      * '<S24>/PokeTTIR_M_K1TrqCapActChrt'
                                                                      */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_K1TrqCapActManual =
    1000.0F;                           /* Referenced by: '<S89>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_K1TrqCapAct_Init = 0.0F;/* Referenced by: '<S168>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_K1TrqCapLeadDflt =
    1000.0F;                           /* Referenced by:
                                        * '<S5>/FsftTTIR_M_K1TrqCapLeadChrt'
                                        * '<S25>/PokeTTIR_M_K1TrqCapLeadChrt'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_K1TrqCapLeadManual =
    1000.0F;                           /* Referenced by: '<S90>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_K1TrqCapLead_Init = 0.0F;/* Referenced by: '<S169>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_MaxLmtAxleTrqDflt =
    1500.0F;                           /* Referenced by:
                                        * '<S6>/FsftTTIR_M_MaxLmtAxleTrqChrt'
                                        * '<S26>/PokeTTIR_M_MaxLmtAxleTrqChrt'
                                        * '<S111>/Calib'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_MaxLmtAxleTrq_Init = 0.0F;/* Referenced by: '<S170>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_MinLmtAxleTrqDflt =
    -1500.0F;                          /* Referenced by:
                                        * '<S7>/FsftTTIR_M_MinLmtAxleTrqChrt'
                                        * '<S27>/PokeTTIR_M_MinLmtAxleTrqChrt'
                                        * '<S112>/Calib'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_MinLmtAxleTrq_Init = 0.0F;/* Referenced by: '<S171>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_PumpTrqOnImpShaft = 0.0F;/* Referenced by:
                                                                      * '<S8>/FsftTTIR_M_PumpTrqOnImpShaftChrt'
                                                                      * '<S28>/PokeTTIR_M_PumpTrqOnImpShaftChrt'
                                                                      */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_PumpTrqOnImpShaft_Init =
    0.0F;                              /* Referenced by: '<S172>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_SumMaxTrqDsrdDflt =
    500.0F;                            /* Referenced by:
                                        * '<S9>/FsftTTIR_M_SumMaxTrqDsrdChrt'
                                        * '<S29>/PokeTTIR_M_SumMaxTrqDsrdChrt'
                                        * '<S113>/Calib'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_SumMaxTrqDsrd_Init =
    500.0F;                            /* Referenced by: '<S173>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_SumMinTrqDsrdDflt =
    500.0F;                            /* Referenced by:
                                        * '<S10>/FsftTTIR_M_SumMinTrqDsrdChrt'
                                        * '<S30>/PokeTTIR_M_SumMinTrqDsrdChrt'
                                        * '<S115>/Calib'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_SumMinTrqDsrd_Init =
    -500.0F;                           /* Referenced by: '<S174>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TCMSumTrqFastDflt =
    1546.0F;                           /* Referenced by:
                                        * '<S11>/FsftTTIR_M_TCMSumTrqReqFastChrt'
                                        * '<S31>/PokeTTIR_M_TCMSumTrqReqFastChrt'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TCMSumTrqFast_Init =
    1546.0F;                           /* Referenced by: '<S175>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TCMSumTrqSlowDflt =
    1546.0F;        /* Referenced by: '<S12>/FsftTTIR_M_TCMSumTrqReqSlowChrt' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TCMSumTrqSlwDflt =
    1546.0F;        /* Referenced by: '<S32>/PokeTTIR_M_TCMSumTrqReqSlowChrt' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TCMSumTrqSlw_Init =
    1546.0F;                           /* Referenced by: '<S176>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TransIntakeTorqDflt =
    1000.0F;                           /* Referenced by:
                                        * '<S13>/FsftTTIR_M_TransIntakeTorqChrt'
                                        * '<S33>/PokeTTIR_M_TransIntakeTorqChrt'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TransIntakeTorq_Init =
    0.0F;                              /* Referenced by: '<S177>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TransTrqReqRmpFailRate =
    0.5F;                              /* Referenced by: '<S121>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TransTrqReqRmpFailRateSlw
    = 0.5F;                            /* Referenced by: '<S143>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_TransTrqReqRmpRcvryRate =
    0.5F;                              /* Referenced by: '<S122>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT)
    KeTTIR_M_TransTrqReqRmpRcvryRateSlw = 0.5F;/* Referenced by: '<S144>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_M_WhlCreepTrqDflt = 0.0F;/* Referenced by:
                                                                      * '<S14>/FsftTTIR_M_WhlCreepTrqChrt'
                                                                      * '<S34>/PokeTTIR_M_WhlCreepTrqChrt'
                                                                      */
static volatile CONST(boolean, TTIR_VAR_INIT) KeTTIR_b_MaxLmtAxleTrqFA_Init = 0;/* Referenced by: '<S183>/Calib' */
static volatile CONST(boolean, TTIR_VAR_INIT) KeTTIR_b_MinLmtAxleTrqFA_Init = 0;/* Referenced by: '<S184>/Calib' */
static volatile CONST(boolean, TTIR_VAR_INIT) KeTTIR_b_OvrdHASTrqK0Lead = 0;/* Referenced by: '<S91>/Calib' */
static volatile CONST(boolean, TTIR_VAR_INIT) KeTTIR_b_OvrdK1TrqCapAct = 1;/* Referenced by: '<S92>/Calib' */
static volatile CONST(boolean, TTIR_VAR_INIT) KeTTIR_b_OvrdK1TrqCapLead = 1;/* Referenced by: '<S93>/Calib' */
static volatile CONST(boolean, TTIR_VAR_INIT) KeTTIR_b_SumMaxTrqDsrdFA_Init = 0;/* Referenced by: '<S185>/Calib' */
static volatile CONST(boolean, TTIR_VAR_INIT) KeTTIR_b_SumMinTrqDsrdFA_Init = 0;/* Referenced by: '<S186>/Calib' */
static volatile CONST(boolean, TTIR_VAR_INIT) KeTTIR_b_TCMSumTrqFastFA_Init = 0;/* Referenced by: '<S187>/Calib' */
static volatile CONST(boolean, TTIR_VAR_INIT) KeTTIR_b_TCMSumTrqSlwFA_Init = 0;/* Referenced by: '<S188>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_dM_TCM_TrqGradLim_Lo =
    -10.0F;                            /* Referenced by:
                                        * '<S18>/FsftTTIR_dM_TCM_TrqGradLim_LoChrt'
                                        * '<S38>/PokeTTIR_dM_TCM_TrqGradLim_LoChrt'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT)
    KeTTIR_dM_TCM_TrqGradLim_Lo_Axle_Init = -10.0F;/* Referenced by: '<S163>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_dM_TCM_TrqGradLim_Lo_Init =
    -10.0F;                            /* Referenced by:
                                        * '<S161>/Calib'
                                        * '<S190>/Calib'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_dM_TCM_TrqGradLim_Up =
    10.0F;                             /* Referenced by:
                                        * '<S19>/FsftTTIR_dM_TCM_TrqGradLim_UpChrt'
                                        * '<S39>/PokeTTIR_dM_TCM_TrqGradLim_UpChrt'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT)
    KeTTIR_dM_TCM_TrqGradLim_Up_Axle_Init = 10.0F;/* Referenced by: '<S164>/Calib' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_dM_TCM_TrqGradLim_Up_Init =
    10.0F;                             /* Referenced by:
                                        * '<S162>/Calib'
                                        * '<S191>/Calib'
                                        */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_dm_TrqLimGradientDflt =
    99999.0F;       /* Referenced by: '<S40>/PokeTTIR_dm_TorqLimGradientChrt' */
static volatile CONST(float32, TTIR_VAR_INIT) KeTTIR_dm_TrqLimGradient_Init =
    99999.0F;                          /* Referenced by: '<S192>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_TTIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, TTIR_VAR_INIT) VeTTIC_M_TransTrqReqFst_Clipped;/* '<S123>/Switch' */
static VAR(float32, TTIR_VAR_INIT) VeTTIC_M_TransTrqReq_Clipped;/* '<S145>/Switch' */
static VAR(TeTINR_e_TCM_TrqCntrlModeReq, TTIR_VAR_INIT)
    VeTTIC_e_TCMTrqCntrlMdFstSync;     /* '<S128>/Switch3' */
static VAR(float32, TTIR_VAR_INIT) VeTTIR_M_SumMaxTrqDesired;/* '<S105>/Switch1' */
static VAR(float32, TTIR_VAR_INIT) VeTTIR_M_SumMinTrqDesired;/* '<S106>/Switch1' */
static VAR(boolean, TTIR_VAR_INIT) VeTTIR_b_TransTorqueRatioFA;/* '<S107>/Switch2' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TTIR
#include "MemMap.h"

CONST(ConstB_TTIR_ac_T, TTIR_VAR_INIT) TTIR_ac_ConstB =
{
    CeTINR_e_None                      /* '<S160>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TTIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"

VAR(B_TTIR_ac_T, TTIR_VAR_INIT) TTIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"

VAR(DW_TTIR_ac_T, TTIR_VAR_INIT) TTIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTIR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, TTIR_CODE) TTIR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 rtb_Sum1_f;
    float32 rtb_Sum_j;
    float32 rtb_Switch3_g;
    float32 rtb_TmpSignalConversionAtVeESSR_M_EngStr;
    float32 rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
    float32 rtb_TmpSignalConversionAtVeTTIR_M_ClthSt;
    float32 rtb_TmpSignalConversionAtVeTTIR_M_MaxLmt;
    float32 rtb_TmpSignalConversionAtVeTTIR_M_MinLmt;
    float32 rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l;
    float32 rtb_TmpSignalConversionAtVeTTIR_M_TCMSum;
    float32 rtb_TmpSignalConversionAtVeTTIR_dM_TCM_T;
    float32 rtb_TmpSignalConversionAtVeTTIR_dM_TCM_c;
    float32 rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
    TeDTRR_e_SumFWIDFst tmpRead;
    TeTINR_e_TCM_TrqCntrlModeReq tmpRead_0;
    boolean UnitDelay_DSTATE_a_tmp;
    boolean UnitDelay_DSTATE_jh_tmp;
    boolean rtb_Comparison;
    boolean rtb_Comparison2_e;
    boolean rtb_Comparison2_gd;
    boolean rtb_Comparison2_l;
    boolean rtb_Comparison_a;
    boolean rtb_Comparison_b;
    boolean rtb_Comparison_k3;
    boolean rtb_Logical2_j;
    boolean rtb_Logical3;
    boolean rtb_Logical3_m;
    boolean rtb_Logical7_p;
    boolean rtb_Switch_g_tmp;
    boolean rtb_Switch_j;
    boolean rtb_TmpSignalConversionAtVeTINR_b_TCMTra;
    boolean rtb_TmpSignalConversionAtVeTTIR_b_SumMax;
    boolean rtb_TmpSignalConversionAtVeTTIR_b_SumMin;

    /* Inport: '<Root>/VeDTRR_e_SumFWIDSlw' */
    (void)Rte_Read_VeDTRR_e_SumFWIDSlw_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TTIR_MedTEB'
     */
    /* SignalConversion generated from: '<S41>/VeVTVR_M_LoadTorqFrontOpt_Raw' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFrontOpt_Raw'
     */
    (void)Rte_Read_VeVTVR_M_LoadTorqFrontOpt_Raw_Value
        (&rtb_TmpSignalConversionAtVeVTVR_M_LoadTo);

    /* SignalConversion generated from: '<S41>/VeTTIR_b_SumMaxTrqDsrdFA_read' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    rtb_TmpSignalConversionAtVeTTIR_b_SumMax =
        Rte_IrvRead_TTIR_MedTEB_VeTTIR_b_SumMaxTrqDsrdFA_write_IRV();

    /* SignalConversion generated from: '<S41>/VeTTIR_M_TCMSumTrqReqSlow_read' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    rtb_TmpSignalConversionAtVeTTIR_M_TCMSum =
        Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_TCMSumTrqReqSlow_write_IRV();

    /* SignalConversion generated from: '<S41>/VeTINR_e_TCMTrqCntrlMdFst' incorporates:
     *  Inport: '<Root>/VeTINR_e_TCMTrqCntrlMdFst'
     */
    (void)Rte_Read_VeTINR_e_TCMTrqCntrlMdFst_Value
        ((&(VeTTIC_e_TCMTrqCntrlMdFstSync)));

    /* SignalConversion generated from: '<S41>/VeTTIR_M_TCMSumTrqReqFast_read' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l =
        Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_TCMSumTrqReqFast_write_IRV();

    /* SignalConversion generated from: '<S41>/VeESSR_M_EngStrtTorq' incorporates:
     *  Inport: '<Root>/VeESSR_M_EngStrtTorq'
     */
    (void)Rte_Read_VeESSR_M_EngStrtTorq_Value
        (&rtb_TmpSignalConversionAtVeESSR_M_EngStr);

    /* SignalConversion generated from: '<S41>/VeTTIR_M_ClthStrRsrvTrq_read' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    rtb_TmpSignalConversionAtVeTTIR_M_ClthSt =
        Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_ClthStrRsrvTrq_write_IRV();

    /* SignalConversion generated from: '<S41>/VeTINR_r_TCMTransTrqRatio' incorporates:
     *  Inport: '<Root>/VeTINR_r_TCMTransTrqRatio'
     */
    (void)Rte_Read_VeTINR_r_TCMTransTrqRatio_Value
        (&rtb_TmpSignalConversionAtVeTINR_r_TCMTra);

    /* SignalConversion generated from: '<S41>/VeTINR_b_TCMTransTrqRatioFA' incorporates:
     *  Inport: '<Root>/VeTINR_b_TCMTransTrqRatioFA'
     */
    (void)Rte_Read_VeTINR_b_TCMTransTrqRatioFA_Value
        (&rtb_TmpSignalConversionAtVeTINR_b_TCMTra);

    /* SignalConversion generated from: '<S41>/VeTTIR_M_MaxLmtAxleTrq_read' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    rtb_TmpSignalConversionAtVeTTIR_M_MaxLmt =
        Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_MaxLmtAxleTrq_write_IRV();

    /* SignalConversion generated from: '<S41>/VeTTIR_b_SumMinTrqDsrdFA_read' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    rtb_TmpSignalConversionAtVeTTIR_b_SumMin =
        Rte_IrvRead_TTIR_MedTEB_VeTTIR_b_SumMinTrqDsrdFA_write_IRV();

    /* SignalConversion generated from: '<S41>/VeTTIR_M_MinLmtAxleTrq_read' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    rtb_TmpSignalConversionAtVeTTIR_M_MinLmt =
        Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_MinLmtAxleTrq_write_IRV();

    /* SignalConversion generated from: '<S41>/VeTTIR_dM_TCM_TrqGradLim_Lo_read' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    rtb_TmpSignalConversionAtVeTTIR_dM_TCM_T =
        Rte_IrvRead_TTIR_MedTEB_VeTTIR_dM_TCM_TrqGradLim_Lo_write_IRV();

    /* SignalConversion generated from: '<S41>/VeTTIR_dM_TCM_TrqGradLim_Up_read' incorporates:
     *  Merge: '<Root>/Merge_37'
     */
    rtb_TmpSignalConversionAtVeTTIR_dM_TCM_c =
        Rte_IrvRead_TTIR_MedTEB_VeTTIR_dM_TCM_TrqGradLim_Up_write_IRV();

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqFast'
     */
    /* Logic: '<S128>/Logical7' incorporates:
     *  Constant: '<S137>/Constant'
     *  Constant: '<S138>/Constant'
     *  RelationalOperator: '<S128>/Comparison3'
     *  RelationalOperator: '<S128>/Comparison5'
     */
    rtb_Logical7_p = ((((uint32)VeTTIC_e_TCMTrqCntrlMdFstSync) ==
                       CeTINR_e_TrqInc) || (((uint32)
                        VeTTIC_e_TCMTrqCntrlMdFstSync) == CeTINR_e_TrqDec));

    /* RelationalOperator: '<S128>/Comparison2' incorporates:
     *  Constant: '<S136>/Constant'
     *  Inport: '<Root>/VeDTRR_e_SumFWIDSlw'
     */
    rtb_Comparison2_gd = (((uint32)tmpRead) == CeDTRR_e_Trans);

    /* Outputs for Atomic SubSystem: '<S128>/Signal Latch On With Reset1' */
    /* Logic: '<S139>/OR1' incorporates:
     *  Logic: '<S128>/Logical9'
     *  Logic: '<S139>/NOT'
     *  Logic: '<S139>/OR'
     *  UnitDelay: '<S128>/Unit Delay'
     *  UnitDelay: '<S139>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE_h = ((!rtb_Comparison2_gd) ||
        ((!TTIR_ac_DW.UnitDelay_DSTATE_gv) && (TTIR_ac_DW.UnitDelay_DSTATE_h)));

    /* End of Outputs for SubSystem: '<S128>/Signal Latch On With Reset1' */

    /* Switch: '<S128>/Switch3' incorporates:
     *  UnitDelay: '<S139>/Unit Delay'
     */
    if (TTIR_ac_DW.UnitDelay_DSTATE_h)
    {
        /* Switch: '<S128>/Switch1' incorporates:
         *  Logic: '<S128>/Logical1'
         *  RelationalOperator: '<S128>/Comparison1'
         */
        if (rtb_Logical7_p && (TTIR_ac_DW.UnitDelay1_DSTATE_b !=
                               VeTTIC_e_TCMTrqCntrlMdFstSync))
        {
        }
        else
        {
            /* RelationalOperator: '<S128>/Comparison3' incorporates:
             *  Switch: '<S128>/Switch3'
             */
            VeTTIC_e_TCMTrqCntrlMdFstSync = TTIR_ac_DW.UnitDelay1_DSTATE_b;
        }

        /* End of Switch: '<S128>/Switch1' */
    }

    /* End of Switch: '<S128>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTINR_b_TCMTrqCntrlMdFstFA' */
    (void)Rte_Read_VeTINR_b_TCMTrqCntrlMdFstFA_Value(&rtb_Switch_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TTIR_MedTEB'
     */
    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqFast'
     */
    /* RelationalOperator: '<S127>/Comparison1' */
    rtb_Switch_g_tmp = !rtb_TmpSignalConversionAtVeTTIR_b_SumMax;

    /* Switch: '<S127>/Switch' incorporates:
     *  Logic: '<S127>/Logical1'
     *  Merge: '<Root>/Merge_19'
     *  RelationalOperator: '<S127>/Comparison2'
     *  SignalConversion generated from: '<S41>/VeTTIR_b_TCMSumTrqReqFastFA_read'
     */
    rtb_Switch_j = (((!rtb_Switch_j) &&
                     (!Rte_IrvRead_TTIR_MedTEB_VeTTIR_b_TCMSumTrqReqFastFA_write_IRV
                      ())) && rtb_Switch_g_tmp);

    /* Switch: '<S85>/Switch' incorporates:
     *  Constant: '<S119>/Constant'
     *  RelationalOperator: '<S85>/Comparison4'
     *  Switch: '<S128>/Switch3'
     */
    if (((uint32)VeTTIC_e_TCMTrqCntrlMdFstSync) == CeTINR_e_TrqInc)
    {
        /* Switch: '<S85>/Switch' */
        VeTTIC_M_TransTrqReqFst_Clipped =
            rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
    }
    else
    {
        /* Switch: '<S85>/Switch' incorporates:
         *  Constant: '<S85>/Constant Value'
         */
        VeTTIC_M_TransTrqReqFst_Clipped = -99999.0F;
    }

    /* End of Switch: '<S85>/Switch' */

    /* Outputs for Atomic SubSystem: '<S85>/Limiter' */
    /* Switch: '<S123>/Switch1' incorporates:
     *  Constant: '<S85>/Constant Value1'
     *  RelationalOperator: '<S123>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l)
    {
        /* Switch: '<S123>/Switch1' */
        rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l = 99999.0F;
    }

    /* End of Switch: '<S123>/Switch1' */

    /* Switch: '<S123>/Switch' incorporates:
     *  RelationalOperator: '<S123>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l >
            VeTTIC_M_TransTrqReqFst_Clipped)
    {
        /* Switch: '<S123>/Switch' */
        VeTTIC_M_TransTrqReqFst_Clipped =
            rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l;
    }

    /* End of Switch: '<S123>/Switch' */
    /* End of Outputs for SubSystem: '<S85>/Limiter' */

    /* Sum: '<S129>/Sum1' incorporates:
     *  Constant: '<S122>/Calib'
     *  UnitDelay: '<S120>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l = TTIR_ac_DW.UnitDelay1_DSTATE_c -
        KeTTIR_M_TransTrqReqRmpRcvryRate;

    /* RelationalOperator: '<S129>/Comparison' */
    rtb_Comparison_a = (rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l >
                        VeTTIC_M_TransTrqReqFst_Clipped);

    /* Sum: '<S129>/Sum' incorporates:
     *  Constant: '<S121>/Calib'
     *  UnitDelay: '<S120>/Unit Delay1'
     */
    rtb_Sum_j = KeTTIR_M_TransTrqReqRmpFailRate + TTIR_ac_DW.UnitDelay1_DSTATE_c;

    /* RelationalOperator: '<S129>/Comparison2' */
    rtb_Comparison2_l = (rtb_TmpSignalConversionAtVeVTVR_M_LoadTo < rtb_Sum_j);

    /* Logic: '<S120>/Logical4' incorporates:
     *  Logic: '<S120>/Logical6'
     *  Logic: '<S129>/Logical1'
     *  RelationalOperator: '<S120>/Comparison1'
     *  Switch: '<S120>/Switch'
     */
    rtb_Logical3 = !rtb_Switch_j;

    /* Logic: '<S120>/Logical2' incorporates:
     *  Logic: '<S120>/Logical7'
     *  UnitDelay: '<S120>/Unit Delay3'
     */
    rtb_Logical2_j = (rtb_Logical3 && (!TTIR_ac_DW.UnitDelay3_DSTATE_j));

    /* Logic: '<S120>/Logical3' incorporates:
     *  Logic: '<S120>/Logical5'
     *  UnitDelay: '<S120>/Unit Delay2'
     */
    rtb_Logical3_m = (rtb_Switch_j && (TTIR_ac_DW.UnitDelay2_DSTATE_d));

    /* Logic: '<S129>/Logical3' incorporates:
     *  Logic: '<S130>/Logical5'
     */
    UnitDelay_DSTATE_jh_tmp = !rtb_Logical3_m;

    /* Outputs for Atomic SubSystem: '<S129>/Signal Latch On With Reset' */
    /* Logic: '<S131>/OR1' incorporates:
     *  Logic: '<S129>/Logical3'
     *  Logic: '<S131>/NOT'
     *  Logic: '<S131>/OR'
     *  UnitDelay: '<S131>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE_jh = (rtb_Logical2_j || (((!rtb_Comparison2_l) &&
        UnitDelay_DSTATE_jh_tmp) && (TTIR_ac_DW.UnitDelay_DSTATE_jh)));

    /* End of Outputs for SubSystem: '<S129>/Signal Latch On With Reset' */

    /* Logic: '<S129>/Logical5' incorporates:
     *  Logic: '<S130>/Logical3'
     */
    UnitDelay_DSTATE_a_tmp = !rtb_Logical2_j;

    /* Outputs for Atomic SubSystem: '<S129>/Signal Latch On With Reset1' */
    /* Logic: '<S132>/OR1' incorporates:
     *  Logic: '<S129>/Logical4'
     *  Logic: '<S129>/Logical5'
     *  Logic: '<S132>/NOT'
     *  Logic: '<S132>/OR'
     *  UnitDelay: '<S132>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE_a = (rtb_Logical3_m || ((rtb_Comparison_a &&
        UnitDelay_DSTATE_a_tmp) && (TTIR_ac_DW.UnitDelay_DSTATE_a)));

    /* End of Outputs for SubSystem: '<S129>/Signal Latch On With Reset1' */

    /* Sum: '<S130>/Sum1' incorporates:
     *  Constant: '<S121>/Calib'
     *  UnitDelay: '<S120>/Unit Delay1'
     */
    rtb_Sum1_f = TTIR_ac_DW.UnitDelay1_DSTATE_c -
        KeTTIR_M_TransTrqReqRmpFailRate;

    /* RelationalOperator: '<S130>/Comparison' */
    rtb_Comparison_k3 = (rtb_Sum1_f > rtb_TmpSignalConversionAtVeVTVR_M_LoadTo);

    /* Sum: '<S130>/Sum' incorporates:
     *  Constant: '<S122>/Calib'
     *  UnitDelay: '<S120>/Unit Delay1'
     */
    TTIR_ac_DW.UnitDelay1_DSTATE_c += KeTTIR_M_TransTrqReqRmpRcvryRate;

    /* RelationalOperator: '<S130>/Comparison2' */
    rtb_Comparison2_e = (VeTTIC_M_TransTrqReqFst_Clipped <
                         TTIR_ac_DW.UnitDelay1_DSTATE_c);

    /* Outputs for Atomic SubSystem: '<S130>/Signal Latch On With Reset1' */
    /* Logic: '<S134>/OR1' incorporates:
     *  Logic: '<S130>/Logical4'
     *  Logic: '<S130>/Logical5'
     *  Logic: '<S134>/NOT'
     *  Logic: '<S134>/OR'
     *  UnitDelay: '<S134>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE_h4 = (rtb_Logical2_j || ((rtb_Comparison_k3 &&
        UnitDelay_DSTATE_jh_tmp) && (TTIR_ac_DW.UnitDelay_DSTATE_h4)));

    /* End of Outputs for SubSystem: '<S130>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S130>/Signal Latch On With Reset' */
    /* Logic: '<S133>/OR1' incorporates:
     *  Logic: '<S130>/Logical3'
     *  Logic: '<S133>/NOT'
     *  Logic: '<S133>/OR'
     *  UnitDelay: '<S133>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE_j = (rtb_Logical3_m || (((!rtb_Comparison2_e) &&
        UnitDelay_DSTATE_a_tmp) && (TTIR_ac_DW.UnitDelay_DSTATE_j)));

    /* End of Outputs for SubSystem: '<S130>/Signal Latch On With Reset' */

    /* Logic: '<S120>/Logical4' incorporates:
     *  UnitDelay: '<S120>/Unit Delay2'
     */
    TTIR_ac_DW.UnitDelay2_DSTATE_d = rtb_Logical3;

    /* Logic: '<S120>/Logical6' incorporates:
     *  UnitDelay: '<S120>/Unit Delay3'
     */
    TTIR_ac_DW.UnitDelay3_DSTATE_j = rtb_Logical3;

    /* Switch: '<S120>/Switch' incorporates:
     *  Logic: '<S130>/Logical2'
     *  Logic: '<S130>/Logical6'
     *  RelationalOperator: '<S120>/Comparison4'
     *  Switch: '<S130>/Switch4'
     *  Switch: '<S130>/Switch5'
     *  UnitDelay: '<S134>/Unit Delay'
     */
    if (VeTTIC_M_TransTrqReqFst_Clipped <=
            rtb_TmpSignalConversionAtVeVTVR_M_LoadTo)
    {
        /* Switch: '<S129>/Switch4' incorporates:
         *  Logic: '<S129>/Logical2'
         *  Switch: '<S129>/Switch5'
         *  UnitDelay: '<S131>/Unit Delay'
         *  UnitDelay: '<S132>/Unit Delay'
         */
        if (rtb_Logical3 || (TTIR_ac_DW.UnitDelay_DSTATE_jh))
        {
            /* Switch: '<S129>/Switch3' */
            if (TTIR_ac_DW.UnitDelay_DSTATE_jh)
            {
                /* Switch: '<S129>/Switch2' */
                if (rtb_Comparison2_l)
                {
                    /* UnitDelay: '<S120>/Unit Delay1' incorporates:
                     *  Switch: '<S129>/Switch3'
                     *  Switch: '<S129>/Switch4'
                     */
                    TTIR_ac_DW.UnitDelay1_DSTATE_c =
                        rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
                }
                else
                {
                    /* UnitDelay: '<S120>/Unit Delay1' incorporates:
                     *  Switch: '<S129>/Switch3'
                     *  Switch: '<S129>/Switch4'
                     */
                    TTIR_ac_DW.UnitDelay1_DSTATE_c = rtb_Sum_j;
                }

                /* End of Switch: '<S129>/Switch2' */
            }
            else
            {
                /* UnitDelay: '<S120>/Unit Delay1' incorporates:
                 *  Switch: '<S129>/Switch3'
                 *  Switch: '<S129>/Switch4'
                 */
                TTIR_ac_DW.UnitDelay1_DSTATE_c =
                    rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
            }

            /* End of Switch: '<S129>/Switch3' */
        }
        else if (TTIR_ac_DW.UnitDelay_DSTATE_a)
        {
            /* Switch: '<S129>/Switch1' incorporates:
             *  Switch: '<S129>/Switch5'
             */
            if (rtb_Comparison_a)
            {
                /* UnitDelay: '<S120>/Unit Delay1' incorporates:
                 *  Switch: '<S129>/Switch4'
                 *  Switch: '<S129>/Switch5'
                 */
                TTIR_ac_DW.UnitDelay1_DSTATE_c =
                    rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l;
            }
            else
            {
                /* UnitDelay: '<S120>/Unit Delay1' incorporates:
                 *  Switch: '<S129>/Switch4'
                 *  Switch: '<S129>/Switch5'
                 */
                TTIR_ac_DW.UnitDelay1_DSTATE_c = VeTTIC_M_TransTrqReqFst_Clipped;
            }

            /* End of Switch: '<S129>/Switch1' */
        }
        else
        {
            /* UnitDelay: '<S120>/Unit Delay1' incorporates:
             *  Switch: '<S129>/Switch4'
             *  Switch: '<S129>/Switch5'
             */
            TTIR_ac_DW.UnitDelay1_DSTATE_c = VeTTIC_M_TransTrqReqFst_Clipped;
        }

        /* End of Switch: '<S129>/Switch4' */
    }
    else if (rtb_Switch_j && (!TTIR_ac_DW.UnitDelay_DSTATE_h4))
    {
        /* Switch: '<S130>/Switch3' incorporates:
         *  Switch: '<S130>/Switch4'
         *  UnitDelay: '<S133>/Unit Delay'
         */
        if (TTIR_ac_DW.UnitDelay_DSTATE_j)
        {
            /* Switch: '<S130>/Switch2' */
            if (rtb_Comparison2_e)
            {
                /* UnitDelay: '<S120>/Unit Delay1' incorporates:
                 *  Switch: '<S130>/Switch3'
                 *  Switch: '<S130>/Switch4'
                 */
                TTIR_ac_DW.UnitDelay1_DSTATE_c = VeTTIC_M_TransTrqReqFst_Clipped;
            }

            /* End of Switch: '<S130>/Switch2' */
        }
        else
        {
            /* UnitDelay: '<S120>/Unit Delay1' incorporates:
             *  Switch: '<S130>/Switch3'
             *  Switch: '<S130>/Switch4'
             */
            TTIR_ac_DW.UnitDelay1_DSTATE_c = VeTTIC_M_TransTrqReqFst_Clipped;
        }

        /* End of Switch: '<S130>/Switch3' */
    }
    else if (TTIR_ac_DW.UnitDelay_DSTATE_h4)
    {
        /* Switch: '<S130>/Switch1' incorporates:
         *  Switch: '<S130>/Switch4'
         *  Switch: '<S130>/Switch5'
         */
        if (rtb_Comparison_k3)
        {
            /* UnitDelay: '<S120>/Unit Delay1' incorporates:
             *  Switch: '<S130>/Switch4'
             *  Switch: '<S130>/Switch5'
             */
            TTIR_ac_DW.UnitDelay1_DSTATE_c = rtb_Sum1_f;
        }
        else
        {
            /* UnitDelay: '<S120>/Unit Delay1' incorporates:
             *  Switch: '<S130>/Switch4'
             *  Switch: '<S130>/Switch5'
             */
            TTIR_ac_DW.UnitDelay1_DSTATE_c =
                rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
        }

        /* End of Switch: '<S130>/Switch1' */
    }
    else
    {
        /* UnitDelay: '<S120>/Unit Delay1' incorporates:
         *  Switch: '<S130>/Switch4'
         *  Switch: '<S130>/Switch5'
         */
        TTIR_ac_DW.UnitDelay1_DSTATE_c =
            rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
    }

    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTMMR_b_TSXRGrTLFFA' */
    (void)Rte_Read_VeTMMR_b_TSXRGrTLFFA_Value(&rtb_Comparison_b);

    /* Inport: '<Root>/VeTMMR_r_TSXRGrTLF' */
    (void)Rte_Read_VeTMMR_r_TSXRGrTLF_Value(&rtb_Switch3_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TTIR_MedTEB'
     */
    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqFast'
     */
    /* Logic: '<S128>/Logical8' incorporates:
     *  UnitDelay: '<S128>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE_gv = (rtb_Comparison2_gd && rtb_Logical7_p);

    /* Update for RelationalOperator: '<S128>/Comparison1' incorporates:
     *  Switch: '<S128>/Switch3'
     *  UnitDelay: '<S128>/Unit Delay1'
     */
    TTIR_ac_DW.UnitDelay1_DSTATE_b = VeTTIC_e_TCMTrqCntrlMdFstSync;

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_PassThrough'
     */
    /* Sum: '<S102>/Sum' incorporates:
     *  Constant: '<S109>/Calib'
     *  Gain: '<S102>/Gain'
     */
    rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l =
        rtb_TmpSignalConversionAtVeESSR_M_EngStr + ((float32)
        KeTTIR_M_ClthStrRsrvEngPosOfst);

    /* MinMax: '<S102>/MinMax1' incorporates:
     *  Constant: '<S102>/Constant Value'
     *  Constant: '<S108>/Calib'
     *  Gain: '<S102>/Gain1'
     *  Sum: '<S102>/Sum1'
     */
    rtb_TmpSignalConversionAtVeESSR_M_EngStr = fmaxf
        (rtb_TmpSignalConversionAtVeESSR_M_EngStr - ((float32)
          KeTTIR_M_ClthStrRsrvEngNegOfst), 0.0F);

    /* Outputs for Atomic SubSystem: '<S102>/Limiter' */
    /* Switch: '<S110>/Switch1' incorporates:
     *  RelationalOperator: '<S110>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l <
            rtb_TmpSignalConversionAtVeTTIR_M_ClthSt)
    {
        /* Switch: '<S104>/Switch1' */
        rtb_TmpSignalConversionAtVeTTIR_M_ClthSt =
            rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l;
    }

    /* End of Switch: '<S110>/Switch1' */
    /* End of Outputs for SubSystem: '<S102>/Limiter' */

    /* Switch: '<S107>/Switch2' incorporates:
     *  Logic: '<S107>/LogiclOperator'
     *  RelationalOperator: '<S107>/Comparison'
     *  RelationalOperator: '<S107>/Comparison2'
     */
    VeTTIR_b_TransTorqueRatioFA = (rtb_Comparison_b &&
        rtb_TmpSignalConversionAtVeTINR_b_TCMTra);

    /* Switch: '<S107>/Switch3' */
    if (!rtb_TmpSignalConversionAtVeTINR_b_TCMTra)
    {
        /* Switch: '<S107>/Switch3' */
        rtb_Switch3_g = rtb_TmpSignalConversionAtVeTINR_r_TCMTra;
    }

    /* End of Switch: '<S107>/Switch3' */

    /* Switch: '<S105>/Switch1' */
    if (rtb_TmpSignalConversionAtVeTTIR_b_SumMax)
    {
        /* Switch: '<S105>/Switch2' incorporates:
         *  Constant: '<S114>/Constant Value'
         *  Constant: '<S114>/Constant Value1'
         *  Constant: '<S114>/Constant Value2'
         *  Constant: '<S114>/Constant Value3'
         *  Logic: '<S114>/AND'
         *  RelationalOperator: '<S114>/Greater Than or Equal '
         *  RelationalOperator: '<S114>/Greater Than or Equal 1'
         *  RelationalOperator: '<S114>/Not Equal'
         *  RelationalOperator: '<S114>/Not Equal1'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S114>/Switch2'
         *  Switch: '<S114>/Switch3'
         */
        if (VeTTIR_b_TransTorqueRatioFA)
        {
            /* Switch: '<S105>/Switch1' incorporates:
             *  Constant: '<S113>/Calib'
             *  Switch: '<S105>/Switch2'
             */
            VeTTIR_M_SumMaxTrqDesired = KeTTIR_M_SumMaxTrqDsrdDflt;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S105>/Protected Division' */
            if ((rtb_TmpSignalConversionAtVeTTIR_M_MaxLmt != 0.0F) &&
                    (rtb_Switch3_g != 0.0F))
            {
                /* Switch: '<S105>/Switch1' incorporates:
                 *  Product: '<S114>/Division'
                 *  Switch: '<S114>/Switch1'
                 */
                VeTTIR_M_SumMaxTrqDesired =
                    rtb_TmpSignalConversionAtVeTTIR_M_MaxLmt / rtb_Switch3_g;
            }
            else if (rtb_TmpSignalConversionAtVeTTIR_M_MaxLmt > 0.0F)
            {
                /* Switch: '<S114>/Switch2' incorporates:
                 *  Constant: '<S114>/MAXFLOAT'
                 *  Switch: '<S105>/Switch1'
                 *  Switch: '<S114>/Switch1'
                 */
                VeTTIR_M_SumMaxTrqDesired = 3.402823466E+38F;
            }
            else if (rtb_TmpSignalConversionAtVeTTIR_M_MaxLmt < 0.0F)
            {
                /* Switch: '<S114>/Switch3' incorporates:
                 *  Constant: '<S114>/MINFLOAT'
                 *  Switch: '<S105>/Switch1'
                 *  Switch: '<S114>/Switch1'
                 *  Switch: '<S114>/Switch2'
                 */
                VeTTIR_M_SumMaxTrqDesired = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S105>/Switch1' incorporates:
                 *  Constant: '<S114>/Constant Value4'
                 *  Switch: '<S114>/Switch1'
                 *  Switch: '<S114>/Switch2'
                 *  Switch: '<S114>/Switch3'
                 */
                VeTTIR_M_SumMaxTrqDesired = 0.0F;
            }

            /* End of Outputs for SubSystem: '<S105>/Protected Division' */
        }

        /* End of Switch: '<S105>/Switch2' */
    }
    else
    {
        /* Switch: '<S105>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_2'
         *  SignalConversion generated from: '<S41>/VeTTIR_M_SumMaxTrqDsrd_read'
         */
        VeTTIR_M_SumMaxTrqDesired =
            Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_SumMaxTrqDsrd_write_IRV();
    }

    /* End of Switch: '<S105>/Switch1' */

    /* Switch: '<S106>/Switch1' */
    if (rtb_TmpSignalConversionAtVeTTIR_b_SumMin)
    {
        /* Switch: '<S106>/Switch2' incorporates:
         *  Constant: '<S116>/Constant Value'
         *  Constant: '<S116>/Constant Value1'
         *  Constant: '<S116>/Constant Value2'
         *  Constant: '<S116>/Constant Value3'
         *  Logic: '<S116>/AND'
         *  RelationalOperator: '<S116>/Greater Than or Equal '
         *  RelationalOperator: '<S116>/Greater Than or Equal 1'
         *  RelationalOperator: '<S116>/Not Equal'
         *  RelationalOperator: '<S116>/Not Equal1'
         *  Switch: '<S116>/Switch1'
         *  Switch: '<S116>/Switch2'
         *  Switch: '<S116>/Switch3'
         */
        if (VeTTIR_b_TransTorqueRatioFA)
        {
            /* Switch: '<S106>/Switch1' incorporates:
             *  Constant: '<S115>/Calib'
             *  Switch: '<S106>/Switch2'
             */
            VeTTIR_M_SumMinTrqDesired = KeTTIR_M_SumMinTrqDsrdDflt;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S106>/Protected Division' */
            if ((rtb_TmpSignalConversionAtVeTTIR_M_MinLmt != 0.0F) &&
                    (rtb_Switch3_g != 0.0F))
            {
                /* Switch: '<S106>/Switch1' incorporates:
                 *  Product: '<S116>/Division'
                 *  Switch: '<S116>/Switch1'
                 */
                VeTTIR_M_SumMinTrqDesired =
                    rtb_TmpSignalConversionAtVeTTIR_M_MinLmt / rtb_Switch3_g;
            }
            else if (rtb_TmpSignalConversionAtVeTTIR_M_MinLmt > 0.0F)
            {
                /* Switch: '<S116>/Switch2' incorporates:
                 *  Constant: '<S116>/MAXFLOAT'
                 *  Switch: '<S106>/Switch1'
                 *  Switch: '<S116>/Switch1'
                 */
                VeTTIR_M_SumMinTrqDesired = 3.402823466E+38F;
            }
            else if (rtb_TmpSignalConversionAtVeTTIR_M_MinLmt < 0.0F)
            {
                /* Switch: '<S116>/Switch3' incorporates:
                 *  Constant: '<S116>/MINFLOAT'
                 *  Switch: '<S106>/Switch1'
                 *  Switch: '<S116>/Switch1'
                 *  Switch: '<S116>/Switch2'
                 */
                VeTTIR_M_SumMinTrqDesired = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S106>/Switch1' incorporates:
                 *  Constant: '<S116>/Constant Value4'
                 *  Switch: '<S116>/Switch1'
                 *  Switch: '<S116>/Switch2'
                 *  Switch: '<S116>/Switch3'
                 */
                VeTTIR_M_SumMinTrqDesired = 0.0F;
            }

            /* End of Outputs for SubSystem: '<S106>/Protected Division' */
        }

        /* End of Switch: '<S106>/Switch2' */
    }
    else
    {
        /* Switch: '<S106>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_34'
         *  SignalConversion generated from: '<S41>/VeTTIR_M_SumMinTrqDsrd_read'
         */
        VeTTIR_M_SumMinTrqDesired =
            Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_SumMinTrqDsrd_write_IRV();
    }

    /* End of Switch: '<S106>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTINR_e_TCMTrqCntrlMdSlw' */
    (void)Rte_Read_VeTINR_e_TCMTrqCntrlMdSlw_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTINR_b_TCMTrqCntrlMdSlwFA' */
    (void)Rte_Read_VeTINR_b_TCMTrqCntrlMdSlwFA_Value(&rtb_Comparison);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TTIR_MedTEB'
     */
    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqSlow'
     */
    /* Switch: '<S149>/Switch' incorporates:
     *  Logic: '<S149>/Logical1'
     *  Merge: '<Root>/Merge_20'
     *  RelationalOperator: '<S149>/Comparison2'
     *  SignalConversion generated from: '<S41>/VeTTIR_b_TCMSumTrqReqSlowFA_read'
     */
    rtb_TmpSignalConversionAtVeTINR_b_TCMTra = (((!rtb_Comparison) &&
        (!Rte_IrvRead_TTIR_MedTEB_VeTTIR_b_TCMSumTrqReqSlowFA_write_IRV())) &&
        rtb_Switch_g_tmp);

    /* Switch: '<S86>/Switch' incorporates:
     *  Constant: '<S141>/Constant'
     *  Inport: '<Root>/VeTINR_e_TCMTrqCntrlMdSlw'
     *  RelationalOperator: '<S86>/Comparison4'
     */
    if (((uint32)tmpRead_0) == CeTINR_e_TrqInc)
    {
        /* Switch: '<S86>/Switch' */
        VeTTIC_M_TransTrqReq_Clipped = rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
    }
    else
    {
        /* Switch: '<S86>/Switch' incorporates:
         *  Constant: '<S86>/Constant Value'
         */
        VeTTIC_M_TransTrqReq_Clipped = -99999.0F;
    }

    /* End of Switch: '<S86>/Switch' */

    /* Outputs for Atomic SubSystem: '<S86>/Limiter' */
    /* Switch: '<S145>/Switch1' incorporates:
     *  Constant: '<S86>/Constant Value1'
     *  RelationalOperator: '<S145>/Relational Operator'
     */
    if (99999.0F < rtb_TmpSignalConversionAtVeTTIR_M_TCMSum)
    {
        /* Switch: '<S145>/Switch1' */
        rtb_TmpSignalConversionAtVeTTIR_M_TCMSum = 99999.0F;
    }

    /* End of Switch: '<S145>/Switch1' */

    /* Switch: '<S145>/Switch' incorporates:
     *  RelationalOperator: '<S145>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTTIR_M_TCMSum > VeTTIC_M_TransTrqReq_Clipped)
    {
        /* Switch: '<S145>/Switch' */
        VeTTIC_M_TransTrqReq_Clipped = rtb_TmpSignalConversionAtVeTTIR_M_TCMSum;
    }

    /* End of Switch: '<S145>/Switch' */
    /* End of Outputs for SubSystem: '<S86>/Limiter' */

    /* Sum: '<S150>/Sum1' incorporates:
     *  Constant: '<S144>/Calib'
     *  UnitDelay: '<S142>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeTTIR_M_TCMSum = TTIR_ac_DW.UnitDelay1_DSTATE -
        KeTTIR_M_TransTrqReqRmpRcvryRateSlw;

    /* RelationalOperator: '<S150>/Comparison' */
    rtb_Comparison = (rtb_TmpSignalConversionAtVeTTIR_M_TCMSum >
                      VeTTIC_M_TransTrqReq_Clipped);

    /* Sum: '<S150>/Sum' incorporates:
     *  Constant: '<S143>/Calib'
     *  UnitDelay: '<S142>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l =
        KeTTIR_M_TransTrqReqRmpFailRateSlw + TTIR_ac_DW.UnitDelay1_DSTATE;

    /* RelationalOperator: '<S150>/Comparison2' */
    rtb_Logical7_p = (rtb_TmpSignalConversionAtVeVTVR_M_LoadTo <
                      rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l);

    /* Logic: '<S142>/Logical4' incorporates:
     *  Logic: '<S142>/Logical6'
     *  Logic: '<S150>/Logical1'
     *  RelationalOperator: '<S142>/Comparison1'
     *  Switch: '<S142>/Switch'
     */
    rtb_Comparison2_gd = !rtb_TmpSignalConversionAtVeTINR_b_TCMTra;

    /* Logic: '<S142>/Logical2' incorporates:
     *  Logic: '<S142>/Logical7'
     *  UnitDelay: '<S142>/Unit Delay3'
     */
    rtb_Comparison2_l = (rtb_Comparison2_gd && (!TTIR_ac_DW.UnitDelay3_DSTATE));

    /* Logic: '<S142>/Logical3' incorporates:
     *  Logic: '<S142>/Logical5'
     *  UnitDelay: '<S142>/Unit Delay2'
     */
    rtb_Logical3 = (rtb_TmpSignalConversionAtVeTINR_b_TCMTra &&
                    (TTIR_ac_DW.UnitDelay2_DSTATE));

    /* Logic: '<S150>/Logical3' incorporates:
     *  Logic: '<S151>/Logical5'
     */
    rtb_Comparison_k3 = !rtb_Logical3;

    /* Outputs for Atomic SubSystem: '<S150>/Signal Latch On With Reset' */
    /* Logic: '<S152>/OR1' incorporates:
     *  Logic: '<S150>/Logical3'
     *  Logic: '<S152>/NOT'
     *  Logic: '<S152>/OR'
     *  UnitDelay: '<S152>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE_f = (rtb_Comparison2_l || (((!rtb_Logical7_p) &&
        rtb_Comparison_k3) && (TTIR_ac_DW.UnitDelay_DSTATE_f)));

    /* End of Outputs for SubSystem: '<S150>/Signal Latch On With Reset' */

    /* Logic: '<S150>/Logical5' incorporates:
     *  Logic: '<S151>/Logical3'
     */
    rtb_Comparison2_e = !rtb_Comparison2_l;

    /* Outputs for Atomic SubSystem: '<S150>/Signal Latch On With Reset1' */
    /* Logic: '<S153>/OR1' incorporates:
     *  Logic: '<S150>/Logical4'
     *  Logic: '<S150>/Logical5'
     *  Logic: '<S153>/NOT'
     *  Logic: '<S153>/OR'
     *  UnitDelay: '<S153>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE_l = (rtb_Logical3 || ((rtb_Comparison &&
        rtb_Comparison2_e) && (TTIR_ac_DW.UnitDelay_DSTATE_l)));

    /* End of Outputs for SubSystem: '<S150>/Signal Latch On With Reset1' */

    /* Sum: '<S151>/Sum1' incorporates:
     *  Constant: '<S143>/Calib'
     *  UnitDelay: '<S142>/Unit Delay1'
     */
    rtb_Sum_j = TTIR_ac_DW.UnitDelay1_DSTATE -
        KeTTIR_M_TransTrqReqRmpFailRateSlw;

    /* RelationalOperator: '<S151>/Comparison' */
    rtb_Comparison_b = (rtb_Sum_j > rtb_TmpSignalConversionAtVeVTVR_M_LoadTo);

    /* Sum: '<S151>/Sum' incorporates:
     *  Constant: '<S144>/Calib'
     *  UnitDelay: '<S142>/Unit Delay1'
     */
    TTIR_ac_DW.UnitDelay1_DSTATE += KeTTIR_M_TransTrqReqRmpRcvryRateSlw;

    /* RelationalOperator: '<S151>/Comparison2' */
    rtb_Comparison_a = (VeTTIC_M_TransTrqReq_Clipped <
                        TTIR_ac_DW.UnitDelay1_DSTATE);

    /* Outputs for Atomic SubSystem: '<S151>/Signal Latch On With Reset1' */
    /* Logic: '<S155>/OR1' incorporates:
     *  Logic: '<S151>/Logical4'
     *  Logic: '<S151>/Logical5'
     *  Logic: '<S155>/NOT'
     *  Logic: '<S155>/OR'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE = (rtb_Comparison2_l || ((rtb_Comparison_b &&
        rtb_Comparison_k3) && (TTIR_ac_DW.UnitDelay_DSTATE)));

    /* End of Outputs for SubSystem: '<S151>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S151>/Signal Latch On With Reset' */
    /* Logic: '<S154>/OR1' incorporates:
     *  Logic: '<S151>/Logical3'
     *  Logic: '<S154>/NOT'
     *  Logic: '<S154>/OR'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    TTIR_ac_DW.UnitDelay_DSTATE_g = (rtb_Logical3 || (((!rtb_Comparison_a) &&
        rtb_Comparison2_e) && (TTIR_ac_DW.UnitDelay_DSTATE_g)));

    /* End of Outputs for SubSystem: '<S151>/Signal Latch On With Reset' */

    /* Logic: '<S142>/Logical4' incorporates:
     *  UnitDelay: '<S142>/Unit Delay2'
     */
    TTIR_ac_DW.UnitDelay2_DSTATE = rtb_Comparison2_gd;

    /* Logic: '<S142>/Logical6' incorporates:
     *  UnitDelay: '<S142>/Unit Delay3'
     */
    TTIR_ac_DW.UnitDelay3_DSTATE = rtb_Comparison2_gd;

    /* Switch: '<S142>/Switch' incorporates:
     *  Logic: '<S151>/Logical2'
     *  Logic: '<S151>/Logical6'
     *  RelationalOperator: '<S142>/Comparison4'
     *  Switch: '<S151>/Switch4'
     *  Switch: '<S151>/Switch5'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    if (VeTTIC_M_TransTrqReq_Clipped <= rtb_TmpSignalConversionAtVeVTVR_M_LoadTo)
    {
        /* Switch: '<S150>/Switch4' incorporates:
         *  Logic: '<S150>/Logical2'
         *  Switch: '<S150>/Switch5'
         *  UnitDelay: '<S152>/Unit Delay'
         *  UnitDelay: '<S153>/Unit Delay'
         */
        if (rtb_Comparison2_gd || (TTIR_ac_DW.UnitDelay_DSTATE_f))
        {
            /* Switch: '<S150>/Switch3' */
            if (TTIR_ac_DW.UnitDelay_DSTATE_f)
            {
                /* Switch: '<S150>/Switch2' */
                if (rtb_Logical7_p)
                {
                    /* UnitDelay: '<S142>/Unit Delay1' incorporates:
                     *  Switch: '<S150>/Switch3'
                     *  Switch: '<S150>/Switch4'
                     */
                    TTIR_ac_DW.UnitDelay1_DSTATE =
                        rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
                }
                else
                {
                    /* UnitDelay: '<S142>/Unit Delay1' incorporates:
                     *  Switch: '<S150>/Switch3'
                     *  Switch: '<S150>/Switch4'
                     */
                    TTIR_ac_DW.UnitDelay1_DSTATE =
                        rtb_TmpSignalConversionAtVeTTIR_M_TCMS_l;
                }

                /* End of Switch: '<S150>/Switch2' */
            }
            else
            {
                /* UnitDelay: '<S142>/Unit Delay1' incorporates:
                 *  Switch: '<S150>/Switch3'
                 *  Switch: '<S150>/Switch4'
                 */
                TTIR_ac_DW.UnitDelay1_DSTATE =
                    rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
            }

            /* End of Switch: '<S150>/Switch3' */
        }
        else if (TTIR_ac_DW.UnitDelay_DSTATE_l)
        {
            /* Switch: '<S150>/Switch1' incorporates:
             *  Switch: '<S150>/Switch5'
             */
            if (rtb_Comparison)
            {
                /* UnitDelay: '<S142>/Unit Delay1' incorporates:
                 *  Switch: '<S150>/Switch4'
                 *  Switch: '<S150>/Switch5'
                 */
                TTIR_ac_DW.UnitDelay1_DSTATE =
                    rtb_TmpSignalConversionAtVeTTIR_M_TCMSum;
            }
            else
            {
                /* UnitDelay: '<S142>/Unit Delay1' incorporates:
                 *  Switch: '<S150>/Switch4'
                 *  Switch: '<S150>/Switch5'
                 */
                TTIR_ac_DW.UnitDelay1_DSTATE = VeTTIC_M_TransTrqReq_Clipped;
            }

            /* End of Switch: '<S150>/Switch1' */
        }
        else
        {
            /* UnitDelay: '<S142>/Unit Delay1' incorporates:
             *  Switch: '<S150>/Switch4'
             *  Switch: '<S150>/Switch5'
             */
            TTIR_ac_DW.UnitDelay1_DSTATE = VeTTIC_M_TransTrqReq_Clipped;
        }

        /* End of Switch: '<S150>/Switch4' */
    }
    else if (rtb_TmpSignalConversionAtVeTINR_b_TCMTra &&
             (!TTIR_ac_DW.UnitDelay_DSTATE))
    {
        /* Switch: '<S151>/Switch3' incorporates:
         *  Switch: '<S151>/Switch4'
         *  UnitDelay: '<S154>/Unit Delay'
         */
        if (TTIR_ac_DW.UnitDelay_DSTATE_g)
        {
            /* Switch: '<S151>/Switch2' */
            if (rtb_Comparison_a)
            {
                /* UnitDelay: '<S142>/Unit Delay1' incorporates:
                 *  Switch: '<S151>/Switch3'
                 *  Switch: '<S151>/Switch4'
                 */
                TTIR_ac_DW.UnitDelay1_DSTATE = VeTTIC_M_TransTrqReq_Clipped;
            }

            /* End of Switch: '<S151>/Switch2' */
        }
        else
        {
            /* UnitDelay: '<S142>/Unit Delay1' incorporates:
             *  Switch: '<S151>/Switch3'
             *  Switch: '<S151>/Switch4'
             */
            TTIR_ac_DW.UnitDelay1_DSTATE = VeTTIC_M_TransTrqReq_Clipped;
        }

        /* End of Switch: '<S151>/Switch3' */
    }
    else if (TTIR_ac_DW.UnitDelay_DSTATE)
    {
        /* Switch: '<S151>/Switch1' incorporates:
         *  Switch: '<S151>/Switch4'
         *  Switch: '<S151>/Switch5'
         */
        if (rtb_Comparison_b)
        {
            /* UnitDelay: '<S142>/Unit Delay1' incorporates:
             *  Switch: '<S151>/Switch4'
             *  Switch: '<S151>/Switch5'
             */
            TTIR_ac_DW.UnitDelay1_DSTATE = rtb_Sum_j;
        }
        else
        {
            /* UnitDelay: '<S142>/Unit Delay1' incorporates:
             *  Switch: '<S151>/Switch4'
             *  Switch: '<S151>/Switch5'
             */
            TTIR_ac_DW.UnitDelay1_DSTATE =
                rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
        }

        /* End of Switch: '<S151>/Switch1' */
    }
    else
    {
        /* UnitDelay: '<S142>/Unit Delay1' incorporates:
         *  Switch: '<S151>/Switch4'
         *  Switch: '<S151>/Switch5'
         */
        TTIR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
    }

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_GradientLimitConversion'
     */
    /* Switch: '<S83>/Switch1' incorporates:
     *  Merge: '<Root>/Merge_38'
     *  SignalConversion generated from: '<S41>/VeTTIR_b_TCM_TrqGradLimActive_read'
     *  Switch: '<S83>/Switch2'
     *  Switch: '<S83>/Switch3'
     *  Switch: '<S83>/Switch4'
     */
    if (Rte_IrvRead_TTIR_MedTEB_VeTTIR_b_TCM_TrqGradLimActive_write_IRV())
    {
        /* Switch: '<S83>/Switch1' incorporates:
         *  Constant: '<S87>/Calib'
         *  Product: '<S83>/Product1'
         */
        rtb_TmpSignalConversionAtVeVTVR_M_LoadTo =
            rtb_TmpSignalConversionAtVeTTIR_dM_TCM_T * HeTTIR_t_dTA;

        /* Switch: '<S83>/Switch2' incorporates:
         *  Constant: '<S87>/Calib'
         *  Product: '<S83>/Product2'
         */
        rtb_TmpSignalConversionAtVeTTIR_M_TCMSum =
            rtb_TmpSignalConversionAtVeTTIR_dM_TCM_c * HeTTIR_t_dTA;

        /* Switch: '<S83>/Switch3' incorporates:
         *  Product: '<S83>/Product3'
         */
        rtb_TmpSignalConversionAtVeTTIR_dM_TCM_T *=
            rtb_TmpSignalConversionAtVeTINR_r_TCMTra;

        /* Switch: '<S83>/Switch4' incorporates:
         *  Product: '<S83>/Product4'
         */
        rtb_TmpSignalConversionAtVeTINR_r_TCMTra *=
            rtb_TmpSignalConversionAtVeTTIR_dM_TCM_c;
    }
    else
    {
        /* Switch: '<S83>/Switch1' incorporates:
         *  Constant: '<S83>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeVTVR_M_LoadTo = -999999.0F;

        /* Switch: '<S83>/Switch2' incorporates:
         *  Constant: '<S83>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeTTIR_M_TCMSum = 999999.0F;

        /* Switch: '<S83>/Switch3' incorporates:
         *  Constant: '<S83>/Constant Value3'
         */
        rtb_TmpSignalConversionAtVeTTIR_dM_TCM_T = -999999.0F;

        /* Switch: '<S83>/Switch4' incorporates:
         *  Constant: '<S83>/Constant Value4'
         */
        rtb_TmpSignalConversionAtVeTINR_r_TCMTra = 999999.0F;
    }

    /* End of Switch: '<S83>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */

    /* Outport: '<Root>/VeTTIR_dM_TorqLimGradient' incorporates:
     *  Merge: '<Root>/Merge_9'
     *  SignalConversion generated from: '<S41>/COMM_dm_TorqLim_Gradient'
     *  SignalConversion generated from: '<S41>/VeTTIR_dm_TorqLimGradient_read'
     */
    (void)Rte_Write_VeTTIR_dM_TorqLimGradient_Value
        (Rte_IrvRead_TTIR_MedTEB_VeTTIR_dm_TorqLimGradient_write_IRV());

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_PassThrough'
     */
    /* Outputs for Atomic SubSystem: '<S102>/Limiter' */
    /* Switch: '<S110>/Switch' incorporates:
     *  RelationalOperator: '<S110>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTTIR_M_ClthSt >
            rtb_TmpSignalConversionAtVeESSR_M_EngStr)
    {
        /* Outport: '<Root>/VeTTIR_M_ClthStrRsrvTrq' incorporates:
         *  SignalConversion generated from: '<S41>/TTIC_M_ClthStrtRsrvTrq'
         */
        (void)Rte_Write_VeTTIR_M_ClthStrRsrvTrq_Value
            (rtb_TmpSignalConversionAtVeTTIR_M_ClthSt);
    }
    else
    {
        /* Outport: '<Root>/VeTTIR_M_ClthStrRsrvTrq' incorporates:
         *  SignalConversion generated from: '<S41>/TTIC_M_ClthStrtRsrvTrq'
         */
        (void)Rte_Write_VeTTIR_M_ClthStrRsrvTrq_Value
            (rtb_TmpSignalConversionAtVeESSR_M_EngStr);
    }

    /* End of Switch: '<S110>/Switch' */
    /* End of Outputs for SubSystem: '<S102>/Limiter' */

    /* Switch: '<S84>/Switch2' incorporates:
     *  Constant: '<S88>/Calib'
     *  Constant: '<S91>/Calib'
     *  Merge: '<Root>/Merge_6'
     *  SignalConversion generated from: '<S41>/VeTTIR_M_HASTrqK0Lead_read'
     */
    if (KeTTIR_b_OvrdHASTrqK0Lead)
    {
        rtb_TmpSignalConversionAtVeTTIR_M_ClthSt = KeTTIR_M_HASTrqK0LeadManual;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTTIR_M_ClthSt =
            Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_HASTrqK0Lead_write_IRV();
    }

    /* End of Switch: '<S84>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */

    /* Outport: '<Root>/VeTTIR_M_HASTrqK0Lead' incorporates:
     *  SignalConversion generated from: '<S41>/TTIC_M_HASTrqK0Lead'
     */
    (void)Rte_Write_VeTTIR_M_HASTrqK0Lead_Value
        (rtb_TmpSignalConversionAtVeTTIR_M_ClthSt);

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_PassThrough'
     */
    /* Switch: '<S84>/Switch' incorporates:
     *  Constant: '<S89>/Calib'
     *  Constant: '<S92>/Calib'
     *  Merge: '<Root>/Merge_4'
     *  SignalConversion generated from: '<S41>/VeTTIR_M_K1TrqCapAct_read'
     */
    if (KeTTIR_b_OvrdK1TrqCapAct)
    {
        rtb_TmpSignalConversionAtVeTTIR_M_ClthSt = KeTTIR_M_K1TrqCapActManual;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTTIR_M_ClthSt =
            Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_K1TrqCapAct_write_IRV();
    }

    /* End of Switch: '<S84>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */

    /* Outport: '<Root>/VeTTIR_M_K1TrqCapAct' incorporates:
     *  SignalConversion generated from: '<S41>/TTIC_M_K1TrqCapAct'
     */
    (void)Rte_Write_VeTTIR_M_K1TrqCapAct_Value
        (rtb_TmpSignalConversionAtVeTTIR_M_ClthSt);

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_PassThrough'
     */
    /* Switch: '<S84>/Switch1' incorporates:
     *  Constant: '<S90>/Calib'
     *  Constant: '<S93>/Calib'
     *  Merge: '<Root>/Merge_5'
     *  SignalConversion generated from: '<S41>/VeTTIR_M_K1TrqCapLead_read'
     */
    if (KeTTIR_b_OvrdK1TrqCapLead)
    {
        rtb_TmpSignalConversionAtVeTTIR_M_ClthSt = KeTTIR_M_K1TrqCapLeadManual;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTTIR_M_ClthSt =
            Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_K1TrqCapLead_write_IRV();
    }

    /* End of Switch: '<S84>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */

    /* Outport: '<Root>/VeTTIR_M_K1TrqCapLead' incorporates:
     *  SignalConversion generated from: '<S41>/TTIC_M_K1TrqCapLead'
     */
    (void)Rte_Write_VeTTIR_M_K1TrqCapLead_Value
        (rtb_TmpSignalConversionAtVeTTIR_M_ClthSt);

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_PassThrough'
     */
    /* Switch: '<S103>/Switch1' incorporates:
     *  Merge: '<Root>/Merge_10_Irv'
     *  SignalConversion generated from: '<S41>/VeTTIR_b_MaxLmtAxleTrqFA_read'
     */
    if (Rte_IrvRead_TTIR_MedTEB_VeTTIR_b_MaxLmtAxleTrqFA_write_IRV())
    {
        /* Switch: '<S103>/Switch2' incorporates:
         *  Constant: '<S111>/Calib'
         *  Logic: '<S103>/LogicalOperator'
         *  Product: '<S103>/Product'
         *  RelationalOperator: '<S103>/Comparison3'
         */
        if (rtb_Switch_g_tmp && (!VeTTIR_b_TransTorqueRatioFA))
        {
            rtb_TmpSignalConversionAtVeTTIR_M_MaxLmt = VeTTIR_M_SumMaxTrqDesired
                * rtb_Switch3_g;
        }
        else
        {
            rtb_TmpSignalConversionAtVeTTIR_M_MaxLmt =
                KeTTIR_M_MaxLmtAxleTrqDflt;
        }

        /* End of Switch: '<S103>/Switch2' */
    }

    /* End of Switch: '<S103>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */

    /* Outport: '<Root>/VeTTIR_M_MaxLmtAxleTrq' incorporates:
     *  SignalConversion generated from: '<S41>/TTIC_M_MaxLmtAxleTrq'
     */
    (void)Rte_Write_VeTTIR_M_MaxLmtAxleTrq_Value
        (rtb_TmpSignalConversionAtVeTTIR_M_MaxLmt);

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_PassThrough'
     */
    /* Switch: '<S104>/Switch1' incorporates:
     *  Merge: '<Root>/Merge_10_Irv1'
     *  SignalConversion generated from: '<S41>/VeTTIR_b_MinLmtAxleTrqFA_read'
     */
    if (Rte_IrvRead_TTIR_MedTEB_VeTTIR_b_MinLmtAxleTrqFA_write_IRV())
    {
        /* Switch: '<S104>/Switch2' incorporates:
         *  Constant: '<S112>/Calib'
         *  Logic: '<S104>/LogicalOperator'
         *  Product: '<S104>/Product'
         *  RelationalOperator: '<S104>/Comparison1'
         *  RelationalOperator: '<S104>/Comparison3'
         */
        if ((!rtb_TmpSignalConversionAtVeTTIR_b_SumMin) &&
                (!VeTTIR_b_TransTorqueRatioFA))
        {
            rtb_TmpSignalConversionAtVeTTIR_M_MinLmt = VeTTIR_M_SumMinTrqDesired
                * rtb_Switch3_g;
        }
        else
        {
            rtb_TmpSignalConversionAtVeTTIR_M_MinLmt =
                KeTTIR_M_MinLmtAxleTrqDflt;
        }

        /* End of Switch: '<S104>/Switch2' */
    }

    /* End of Switch: '<S104>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */

    /* Outport: '<Root>/VeTTIR_M_MinLmtAxleTrq' incorporates:
     *  SignalConversion generated from: '<S41>/TTIC_M_MinLmtAxleTrq'
     */
    (void)Rte_Write_VeTTIR_M_MinLmtAxleTrq_Value
        (rtb_TmpSignalConversionAtVeTTIR_M_MinLmt);

    /* Outport: '<Root>/VeTTIR_M_TransIntakeTorq' incorporates:
     *  Merge: '<Root>/Merge_7'
     *  SignalConversion generated from: '<S41>/TTIC_M_TransIntakeTorq'
     *  SignalConversion generated from: '<S41>/VeTTIR_M_TransIntakeTorq_read'
     */
    (void)Rte_Write_VeTTIR_M_TransIntakeTorq_Value
        (Rte_IrvRead_TTIR_MedTEB_VeTTIR_M_TransIntakeTorq_write_IRV());

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqFast'
     */
    /* Outport: '<Root>/VeTTIR_b_TransTrqReqFst_Pass' incorporates:
     *  Gain: '<S126>/Gain'
     *  SignalConversion generated from: '<S41>/TTIC_b_TransTrqReqFst_Pass'
     */
    (void)Rte_Write_VeTTIR_b_TransTrqReqFst_Pass_Value(rtb_Switch_j);

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqSlow'
     */
    /* Outport: '<Root>/VeTTIR_b_TransTrqReqSlw_Pass' incorporates:
     *  Gain: '<S148>/Gain'
     *  SignalConversion generated from: '<S41>/TTIC_b_TransTrqReqSlw_Pass'
     */
    (void)Rte_Write_VeTTIR_b_TransTrqReqSlw_Pass_Value
        (rtb_TmpSignalConversionAtVeTINR_b_TCMTra);

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqFast'
     */
    /* Outport: '<Root>/VeTTIR_e_TCMTrqCtrlMdFstDTRRSync' incorporates:
     *  DataTypeConversion: '<S118>/DataTypeConversion'
     *  SignalConversion generated from: '<S41>/TTIC_e_TCMTrqCntrlMdFstDTRRSync'
     *  Switch: '<S128>/Switch3'
     */
    (void)Rte_Write_VeTTIR_e_TCMTrqCtrlMdFstDTRRSync_Value
        (VeTTIC_e_TCMTrqCntrlMdFstSync);

    /* Outport: '<Root>/VeTTIR_M_TransTrqReqFst_Arb' incorporates:
     *  Gain: '<S124>/Gain'
     *  SignalConversion generated from: '<S41>/VeTTIC_M_TransTrqReqFst_Arb'
     *  UnitDelay: '<S120>/Unit Delay1'
     */
    (void)Rte_Write_VeTTIR_M_TransTrqReqFst_Arb_Value
        (TTIR_ac_DW.UnitDelay1_DSTATE_c);

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqSlow'
     */
    /* Outport: '<Root>/VeTTIR_M_TransTrqReqSlw_Arb' incorporates:
     *  Gain: '<S146>/Gain'
     *  SignalConversion generated from: '<S41>/VeTTIC_M_TransTrqReqSlw_Arb'
     *  UnitDelay: '<S142>/Unit Delay1'
     */
    (void)Rte_Write_VeTTIR_M_TransTrqReqSlw_Arb_Value
        (TTIR_ac_DW.UnitDelay1_DSTATE);

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqFast'
     */
    /* Outport: '<Root>/VeTTIR_b_TransTrqReqFst_RampActv' incorporates:
     *  Logic: '<S120>/Logical1'
     *  SignalConversion generated from: '<S41>/VeTTIC_b_TransTrqReqFst_RampActv'
     *  UnitDelay: '<S131>/Unit Delay'
     *  UnitDelay: '<S132>/Unit Delay'
     *  UnitDelay: '<S133>/Unit Delay'
     *  UnitDelay: '<S134>/Unit Delay'
     */
    (void)Rte_Write_VeTTIR_b_TransTrqReqFst_RampActv_Value
        ((((TTIR_ac_DW.UnitDelay_DSTATE_jh) || (TTIR_ac_DW.UnitDelay_DSTATE_a)) ||
          (TTIR_ac_DW.UnitDelay_DSTATE_j)) || (TTIR_ac_DW.UnitDelay_DSTATE_h4));

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_ProcessTCMSumTrqReqSlow'
     */
    /* Outport: '<Root>/VeTTIR_b_TransTrqReqSlw_RampActv' incorporates:
     *  Logic: '<S142>/Logical1'
     *  SignalConversion generated from: '<S41>/VeTTIC_b_TransTrqReq_RampActv'
     *  UnitDelay: '<S152>/Unit Delay'
     *  UnitDelay: '<S153>/Unit Delay'
     *  UnitDelay: '<S154>/Unit Delay'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    (void)Rte_Write_VeTTIR_b_TransTrqReqSlw_RampActv_Value
        ((((TTIR_ac_DW.UnitDelay_DSTATE_f) || (TTIR_ac_DW.UnitDelay_DSTATE_l)) ||
          (TTIR_ac_DW.UnitDelay_DSTATE_g)) || (TTIR_ac_DW.UnitDelay_DSTATE));

    /* S-Function (fcgen): '<S41>/FcnCallGen' incorporates:
     *  SubSystem: '<S41>/TTIC_PassThrough'
     */
    /* Outport: '<Root>/VeTTIR_M_SumMaxTorqDsrdRaw' incorporates:
     *  Gain: '<S94>/Gain'
     *  SignalConversion generated from: '<S41>/VeTTIR_M_SumMaxTrqDsrd'
     */
    (void)Rte_Write_VeTTIR_M_SumMaxTorqDsrdRaw_Value(VeTTIR_M_SumMaxTrqDesired);

    /* Outport: '<Root>/VeTTIR_b_SumMaxTrqDsrdFA' incorporates:
     *  Gain: '<S95>/Gain'
     *  SignalConversion generated from: '<S41>/VeTTIR_M_SumMaxTrqDsrdFA'
     */
    (void)Rte_Write_VeTTIR_b_SumMaxTrqDsrdFA_Value
        (rtb_TmpSignalConversionAtVeTTIR_b_SumMax);

    /* Outport: '<Root>/VeTTIR_M_SumMinTorqDsrdRaw' incorporates:
     *  Gain: '<S100>/Gain'
     *  SignalConversion generated from: '<S41>/VeTTIR_M_SumMinTrqDsrd'
     */
    (void)Rte_Write_VeTTIR_M_SumMinTorqDsrdRaw_Value(VeTTIR_M_SumMinTrqDesired);

    /* Outport: '<Root>/VeTTIR_b_SumMinTrqDsrdFA' incorporates:
     *  Gain: '<S99>/Gain'
     *  SignalConversion generated from: '<S41>/VeTTIR_M_SumMinTrqDsrdFA'
     */
    (void)Rte_Write_VeTTIR_b_SumMinTrqDsrdFA_Value
        (rtb_TmpSignalConversionAtVeTTIR_b_SumMin);

    /* End of Outputs for S-Function (fcgen): '<S41>/FcnCallGen' */

    /* Outport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Lo' incorporates:
     *  SignalConversion generated from: '<S41>/VeTTIR_dM_TCM_TrqGradLim_Lo'
     */
    (void)Rte_Write_VeTTIR_dM_TCM_TrqGradLim_Lo_Value
        (rtb_TmpSignalConversionAtVeVTVR_M_LoadTo);

    /* Outport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Lo_Axle' incorporates:
     *  SignalConversion generated from: '<S41>/VeTTIR_dM_TCM_TrqGradLim_Lo_Axle'
     */
    (void)Rte_Write_VeTTIR_dM_TCM_TrqGradLim_Lo_Axle_Value
        (rtb_TmpSignalConversionAtVeTTIR_dM_TCM_T);

    /* Outport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Up' incorporates:
     *  SignalConversion generated from: '<S41>/VeTTIR_dM_TCM_TrqGradLim_Up'
     */
    (void)Rte_Write_VeTTIR_dM_TCM_TrqGradLim_Up_Value
        (rtb_TmpSignalConversionAtVeTTIR_M_TCMSum);

    /* Outport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Up_Axle' incorporates:
     *  SignalConversion generated from: '<S41>/VeTTIR_dM_TCM_TrqGradLim_Up_Axle'
     */
    (void)Rte_Write_VeTTIR_dM_TCM_TrqGradLim_Up_Axle_Value
        (rtb_TmpSignalConversionAtVeTINR_r_TCMTra);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_ClthStrRsrvTrq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_ClthStrRsrvTrq' */
    /* Outport: '<Root>/VeTTIR_b_ClthStrRsrvTrqFA' incorporates:
     *  Chart: '<S1>/FsftTTIR_M_ClthStrRsrvTrqChrt'
     *  SignalConversion generated from: '<S1>/VeTTIR_b_ClthStrRsrvTrqFA'
     */
    /* Gateway: FsftTTIR_M_ClthStrRsrvTrq/FsftTTIR_M_ClthStrRsrvTrqChrt */
    /* During: FsftTTIR_M_ClthStrRsrvTrq/FsftTTIR_M_ClthStrRsrvTrqChrt */
    /* Entry Internal: FsftTTIR_M_ClthStrRsrvTrq/FsftTTIR_M_ClthStrRsrvTrqChrt */
    /* Transition: '<S43>:2' */
    (void)Rte_Write_VeTTIR_b_ClthStrRsrvTrqFA_Value(true);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  Chart: '<S1>/FsftTTIR_M_ClthStrRsrvTrqChrt'
     *  SignalConversion generated from: '<S1>/VeTTIR_M_ClthStrRsrvTrq_write'
     */
    Rte_IrvWrite_FsftTTIR_M_ClthStrRsrvTrq_VeTTIR_M_ClthStrRsrvTrq_write_IRV
        (KeTTIR_M_ClthStrRsrvTrqDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_ClthStrRsrvTrq' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_HASTrqK0(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_HASTrqK0' */
    /* Outport: '<Root>/VeTTIR_M_HASTrqK0' incorporates:
     *  Chart: '<S2>/FsftTTIR_M_HASTrqK0Chrt'
     *  SignalConversion generated from: '<S2>/VeTTIR_M_HASTrqK0'
     */
    /* Gateway: FsftTTIR_M_HASTrqK0/FsftTTIR_M_HASTrqK0Chrt */
    /* During: FsftTTIR_M_HASTrqK0/FsftTTIR_M_HASTrqK0Chrt */
    /* Entry Internal: FsftTTIR_M_HASTrqK0/FsftTTIR_M_HASTrqK0Chrt */
    /* Transition: '<S44>:2' */
    (void)Rte_Write_VeTTIR_M_HASTrqK0_Value(KeTTIR_M_HASTrqK0Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_HASTrqK0' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_HASTrqK0Lead(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_HASTrqK0Lead' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S3>/FsftTTIR_M_HASTrqK0LeadChrt'
     *  SignalConversion generated from: '<S3>/VeTTIR_M_HASTrqK0Lead_write'
     */
    /* Gateway: FsftTTIR_M_HASTrqK0Lead/FsftTTIR_M_HASTrqK0LeadChrt */
    /* During: FsftTTIR_M_HASTrqK0Lead/FsftTTIR_M_HASTrqK0LeadChrt */
    /* Entry Internal: FsftTTIR_M_HASTrqK0Lead/FsftTTIR_M_HASTrqK0LeadChrt */
    /* Transition: '<S45>:2' */
    Rte_IrvWrite_FsftTTIR_M_HASTrqK0Lead_VeTTIR_M_HASTrqK0Lead_write_IRV
        (KeTTIR_M_HASTrqK0LeadDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_HASTrqK0Lead' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_K1TrqCapAct(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_K1TrqCapAct' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S4>/FsftTTIR_M_K1TrqCapActChrt'
     *  SignalConversion generated from: '<S4>/VeTTIR_M_K1TrqCapAct_write'
     */
    /* Gateway: FsftTTIR_M_K1TrqCapAct/FsftTTIR_M_K1TrqCapActChrt */
    /* During: FsftTTIR_M_K1TrqCapAct/FsftTTIR_M_K1TrqCapActChrt */
    /* Entry Internal: FsftTTIR_M_K1TrqCapAct/FsftTTIR_M_K1TrqCapActChrt */
    /* Transition: '<S46>:2' */
    Rte_IrvWrite_FsftTTIR_M_K1TrqCapAct_VeTTIR_M_K1TrqCapAct_write_IRV
        (KeTTIR_M_K1TrqCapActDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_K1TrqCapAct' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_K1TrqCapLead(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_K1TrqCapLead' */
    /* Merge: '<Root>/Merge_5' incorporates:
     *  Chart: '<S5>/FsftTTIR_M_K1TrqCapLeadChrt'
     *  SignalConversion generated from: '<S5>/VeTTIR_M_K1TrqCapLead_write'
     */
    /* Gateway: FsftTTIR_M_K1TrqCapLead/FsftTTIR_M_K1TrqCapLeadChrt */
    /* During: FsftTTIR_M_K1TrqCapLead/FsftTTIR_M_K1TrqCapLeadChrt */
    /* Entry Internal: FsftTTIR_M_K1TrqCapLead/FsftTTIR_M_K1TrqCapLeadChrt */
    /* Transition: '<S47>:2' */
    Rte_IrvWrite_FsftTTIR_M_K1TrqCapLead_VeTTIR_M_K1TrqCapLead_write_IRV
        (KeTTIR_M_K1TrqCapLeadDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_K1TrqCapLead' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_MaxLmtAxleTrq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_MaxLmtAxleTrq' */
    /* Outport: '<Root>/VeTTIR_b_MaxLmtAxleTrqFA' incorporates:
     *  Chart: '<S6>/FsftTTIR_M_MaxLmtAxleTrqChrt'
     *  SignalConversion generated from: '<S6>/VeTTIR_b_MaxLmtAxleTrqFA'
     */
    /* Gateway: FsftTTIR_M_MaxLmtAxleTrq/FsftTTIR_M_MaxLmtAxleTrqChrt */
    /* During: FsftTTIR_M_MaxLmtAxleTrq/FsftTTIR_M_MaxLmtAxleTrqChrt */
    /* Entry Internal: FsftTTIR_M_MaxLmtAxleTrq/FsftTTIR_M_MaxLmtAxleTrqChrt */
    /* Transition: '<S48>:2' */
    (void)Rte_Write_VeTTIR_b_MaxLmtAxleTrqFA_Value(true);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S6>/FsftTTIR_M_MaxLmtAxleTrqChrt'
     *  SignalConversion generated from: '<S6>/VeTTIR_M_MaxLmtAxleTrq_write'
     */
    Rte_IrvWrite_FsftTTIR_M_MaxLmtAxleTrq_VeTTIR_M_MaxLmtAxleTrq_write_IRV
        (KeTTIR_M_MaxLmtAxleTrqDflt);

    /* Merge: '<Root>/Merge_10_Irv' incorporates:
     *  Chart: '<S6>/FsftTTIR_M_MaxLmtAxleTrqChrt'
     *  SignalConversion generated from: '<S6>/VeTTIR_b_MaxLmtAxleTrqFA_write'
     */
    Rte_IrvWrite_FsftTTIR_M_MaxLmtAxleTrq_VeTTIR_b_MaxLmtAxleTrqFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_MaxLmtAxleTrq' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_MinLmtAxleTrq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_MinLmtAxleTrq' */
    /* Outport: '<Root>/VeTTIR_b_MinLmtAxleTrqFA' incorporates:
     *  Chart: '<S7>/FsftTTIR_M_MinLmtAxleTrqChrt'
     *  SignalConversion generated from: '<S7>/VeTTIR_b_MinLmtAxleTrqFA'
     */
    /* Gateway: FsftTTIR_M_MinLmtAxleTrq/FsftTTIR_M_MinLmtAxleTrqChrt */
    /* During: FsftTTIR_M_MinLmtAxleTrq/FsftTTIR_M_MinLmtAxleTrqChrt */
    /* Entry Internal: FsftTTIR_M_MinLmtAxleTrq/FsftTTIR_M_MinLmtAxleTrqChrt */
    /* Transition: '<S49>:2' */
    (void)Rte_Write_VeTTIR_b_MinLmtAxleTrqFA_Value(true);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  Chart: '<S7>/FsftTTIR_M_MinLmtAxleTrqChrt'
     *  SignalConversion generated from: '<S7>/VeTTIR_M_MinLmtAxleTrq_write'
     */
    Rte_IrvWrite_FsftTTIR_M_MinLmtAxleTrq_VeTTIR_M_MinLmtAxleTrq_write_IRV
        (KeTTIR_M_MinLmtAxleTrqDflt);

    /* Merge: '<Root>/Merge_10_Irv1' incorporates:
     *  Chart: '<S7>/FsftTTIR_M_MinLmtAxleTrqChrt'
     *  SignalConversion generated from: '<S7>/VeTTIR_b_MinLmtAxleTrqFA_write'
     */
    Rte_IrvWrite_FsftTTIR_M_MinLmtAxleTrq_VeTTIR_b_MinLmtAxleTrqFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_MinLmtAxleTrq' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_PumpTrqOnImpShaft(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_PumpTrqOnImpShaft' */
    /* Outport: '<Root>/VeTTIR_M_PumpTrqOnImpShaft' incorporates:
     *  Chart: '<S8>/FsftTTIR_M_PumpTrqOnImpShaftChrt'
     *  SignalConversion generated from: '<S8>/VeTTIR_M_PumpTrqOnImpShaft'
     */
    /* Gateway: FsftTTIR_M_PumpTrqOnImpShaft/FsftTTIR_M_PumpTrqOnImpShaftChrt */
    /* During: FsftTTIR_M_PumpTrqOnImpShaft/FsftTTIR_M_PumpTrqOnImpShaftChrt */
    /* Entry Internal: FsftTTIR_M_PumpTrqOnImpShaft/FsftTTIR_M_PumpTrqOnImpShaftChrt */
    /* Transition: '<S50>:2' */
    (void)Rte_Write_VeTTIR_M_PumpTrqOnImpShaft_Value(KeTTIR_M_PumpTrqOnImpShaft);

    /* Outport: '<Root>/VeTTIR_b_PumpTrqOnImpShaft_FA' incorporates:
     *  Chart: '<S8>/FsftTTIR_M_PumpTrqOnImpShaftChrt'
     *  SignalConversion generated from: '<S8>/VeTTIR_b_PumpTrqOnImpShaft_FA'
     */
    (void)Rte_Write_VeTTIR_b_PumpTrqOnImpShaft_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_PumpTrqOnImpShaft' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_SumMaxTrqDsrd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_SumMaxTrqDsrd' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S9>/FsftTTIR_M_SumMaxTrqDsrdChrt'
     *  SignalConversion generated from: '<S9>/VeTTIR_M_SumMaxTrqDsrd_write'
     */
    /* Gateway: FsftTTIR_M_SumMaxTrqDsrd/FsftTTIR_M_SumMaxTrqDsrdChrt */
    /* During: FsftTTIR_M_SumMaxTrqDsrd/FsftTTIR_M_SumMaxTrqDsrdChrt */
    /* Entry Internal: FsftTTIR_M_SumMaxTrqDsrd/FsftTTIR_M_SumMaxTrqDsrdChrt */
    /* Transition: '<S51>:2' */
    Rte_IrvWrite_FsftTTIR_M_SumMaxTrqDsrd_VeTTIR_M_SumMaxTrqDsrd_write_IRV
        (KeTTIR_M_SumMaxTrqDsrdDflt);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S9>/FsftTTIR_M_SumMaxTrqDsrdChrt'
     *  SignalConversion generated from: '<S9>/VeTTIR_b_SumMaxTrqDsrdFA_write'
     */
    Rte_IrvWrite_FsftTTIR_M_SumMaxTrqDsrd_VeTTIR_b_SumMaxTrqDsrdFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_SumMaxTrqDsrd' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_SumMinTrqDsrd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_SumMinTrqDsrd' */
    /* Merge: '<Root>/Merge_34' incorporates:
     *  Chart: '<S10>/FsftTTIR_M_SumMinTrqDsrdChrt'
     *  SignalConversion generated from: '<S10>/VeTTIR_M_SumMinTrqDsrd_write'
     */
    /* Gateway: FsftTTIR_M_SumMinTrqDsrd/FsftTTIR_M_SumMinTrqDsrdChrt */
    /* During: FsftTTIR_M_SumMinTrqDsrd/FsftTTIR_M_SumMinTrqDsrdChrt */
    /* Entry Internal: FsftTTIR_M_SumMinTrqDsrd/FsftTTIR_M_SumMinTrqDsrdChrt */
    /* Transition: '<S52>:2' */
    Rte_IrvWrite_FsftTTIR_M_SumMinTrqDsrd_VeTTIR_M_SumMinTrqDsrd_write_IRV
        (KeTTIR_M_SumMinTrqDsrdDflt);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S10>/FsftTTIR_M_SumMinTrqDsrdChrt'
     *  SignalConversion generated from: '<S10>/VeTTIR_b_SumMinTrqDsrdFA_write'
     */
    Rte_IrvWrite_FsftTTIR_M_SumMinTrqDsrd_VeTTIR_b_SumMinTrqDsrdFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_SumMinTrqDsrd' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_TCMSumTrqReqFast(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_TCMSumTrqReqFast' */
    /* Merge: '<Root>/Merge_17' incorporates:
     *  Chart: '<S11>/FsftTTIR_M_TCMSumTrqReqFastChrt'
     *  SignalConversion generated from: '<S11>/VeTTIR_M_TCMSumTrqReqFast_write'
     */
    /* Gateway: FsftTTIR_M_TCMSumTrqReqFast/FsftTTIR_M_TCMSumTrqReqFastChrt */
    /* During: FsftTTIR_M_TCMSumTrqReqFast/FsftTTIR_M_TCMSumTrqReqFastChrt */
    /* Entry Internal: FsftTTIR_M_TCMSumTrqReqFast/FsftTTIR_M_TCMSumTrqReqFastChrt */
    /* Transition: '<S53>:2' */
    Rte_IrvWrite_FsftTTIR_M_TCMSumTrqReqFast_VeTTIR_M_TCMSumTrqReqFast_write_IRV
        (KeTTIR_M_TCMSumTrqFastDflt);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S11>/FsftTTIR_M_TCMSumTrqReqFastChrt'
     *  SignalConversion generated from: '<S11>/VeTTIR_b_TCMSumTrqReqFastFA_write'
     */
    Rte_IrvWrite_FsftTTIR_M_TCMSumTrqReqFast_VeTTIR_b_TCMSumTrqReqFastFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_TCMSumTrqReqFast' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_TCMSumTrqReqSlow(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_TCMSumTrqReqSlow' */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  Chart: '<S12>/FsftTTIR_M_TCMSumTrqReqSlowChrt'
     *  SignalConversion generated from: '<S12>/VeTTIR_M_TCMSumTrqReqSlow_write'
     */
    /* Gateway: FsftTTIR_M_TCMSumTrqReqSlow/FsftTTIR_M_TCMSumTrqReqSlowChrt */
    /* During: FsftTTIR_M_TCMSumTrqReqSlow/FsftTTIR_M_TCMSumTrqReqSlowChrt */
    /* Entry Internal: FsftTTIR_M_TCMSumTrqReqSlow/FsftTTIR_M_TCMSumTrqReqSlowChrt */
    /* Transition: '<S54>:2' */
    Rte_IrvWrite_FsftTTIR_M_TCMSumTrqReqSlow_VeTTIR_M_TCMSumTrqReqSlow_write_IRV
        (KeTTIR_M_TCMSumTrqSlowDflt);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  Chart: '<S12>/FsftTTIR_M_TCMSumTrqReqSlowChrt'
     *  SignalConversion generated from: '<S12>/VeTTIR_b_TCMSumTrqReqSlowFA_write'
     */
    Rte_IrvWrite_FsftTTIR_M_TCMSumTrqReqSlow_VeTTIR_b_TCMSumTrqReqSlowFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_TCMSumTrqReqSlow' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_TransIntakeTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_TransIntakeTorq' */
    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S13>/FsftTTIR_M_TransIntakeTorqChrt'
     *  SignalConversion generated from: '<S13>/VeTTIR_M_TransIntakeTorq_write'
     */
    /* Gateway: FsftTTIR_M_TransIntakeTorq/FsftTTIR_M_TransIntakeTorqChrt */
    /* During: FsftTTIR_M_TransIntakeTorq/FsftTTIR_M_TransIntakeTorqChrt */
    /* Entry Internal: FsftTTIR_M_TransIntakeTorq/FsftTTIR_M_TransIntakeTorqChrt */
    /* Transition: '<S55>:2' */
    Rte_IrvWrite_FsftTTIR_M_TransIntakeTorq_VeTTIR_M_TransIntakeTorq_write_IRV
        (KeTTIR_M_TransIntakeTorqDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_TransIntakeTorq' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_M_WhlCreepTrq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_M_WhlCreepTrq' */
    /* Outport: '<Root>/VeTTIR_M_WhlCreepTrq' incorporates:
     *  Chart: '<S14>/FsftTTIR_M_WhlCreepTrqChrt'
     *  SignalConversion generated from: '<S14>/VeTTIR_M_WhlCreepTrq'
     */
    /* Gateway: FsftTTIR_M_WhlCreepTrq/FsftTTIR_M_WhlCreepTrqChrt */
    /* During: FsftTTIR_M_WhlCreepTrq/FsftTTIR_M_WhlCreepTrqChrt */
    /* Entry Internal: FsftTTIR_M_WhlCreepTrq/FsftTTIR_M_WhlCreepTrqChrt */
    /* Transition: '<S56>:2' */
    (void)Rte_Write_VeTTIR_M_WhlCreepTrq_Value(KeTTIR_M_WhlCreepTrqDflt);

    /* Outport: '<Root>/VeTTIR_b_WhlCreepTrqFA' incorporates:
     *  Chart: '<S14>/FsftTTIR_M_WhlCreepTrqChrt'
     *  SignalConversion generated from: '<S14>/VeTTIR_b_WhlCreepTrqFA'
     */
    (void)Rte_Write_VeTTIR_b_WhlCreepTrqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_M_WhlCreepTrq' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_b_TCM_EngFSO_Allw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_b_TCM_EngFSO_Allw' */
    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Allw_FA' incorporates:
     *  Chart: '<S15>/FsftTTIR_b_TCM_EngFSO_AllwChrt'
     *  SignalConversion generated from: '<S15>/VeTTIR_b_TCM_EngFSO_Allw_FA'
     */
    /* Gateway: FsftTTIR_b_TCM_EngFSO_Allw/FsftTTIR_b_TCM_EngFSO_AllwChrt */
    /* During: FsftTTIR_b_TCM_EngFSO_Allw/FsftTTIR_b_TCM_EngFSO_AllwChrt */
    /* Entry Internal: FsftTTIR_b_TCM_EngFSO_Allw/FsftTTIR_b_TCM_EngFSO_AllwChrt */
    /* Transition: '<S57>:2' */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Allw_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_b_TCM_EngFSO_Allw' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_b_TCM_EngFSO_Rq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_b_TCM_EngFSO_Rq' */
    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Rq_FA' incorporates:
     *  Chart: '<S16>/FsftTTIR_b_TCM_EngFSO_RqChrt'
     *  SignalConversion generated from: '<S16>/VeTTIR_b_TCM_EngFSO_Rq_FA'
     */
    /* Gateway: FsftTTIR_b_TCM_EngFSO_Rq/FsftTTIR_b_TCM_EngFSO_RqChrt */
    /* During: FsftTTIR_b_TCM_EngFSO_Rq/FsftTTIR_b_TCM_EngFSO_RqChrt */
    /* Entry Internal: FsftTTIR_b_TCM_EngFSO_Rq/FsftTTIR_b_TCM_EngFSO_RqChrt */
    /* Transition: '<S58>:2' */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Rq_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_b_TCM_EngFSO_Rq' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_b_TCM_TrqGradLimActive(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_b_TCM_TrqGradLimActive' */
    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLimActive_FA' incorporates:
     *  Chart: '<S17>/FsftTTIR_b_TCM_TrqGradLimActiveChrt'
     *  SignalConversion generated from: '<S17>/VeTTIR_b_TCM_TrqGradLimActive_FA'
     */
    /* Gateway: FsftTTIR_b_TCM_TrqGradLimActive/FsftTTIR_b_TCM_TrqGradLimActiveChrt */
    /* During: FsftTTIR_b_TCM_TrqGradLimActive/FsftTTIR_b_TCM_TrqGradLimActiveChrt */
    /* Entry Internal: FsftTTIR_b_TCM_TrqGradLimActive/FsftTTIR_b_TCM_TrqGradLimActiveChrt */
    /* Transition: '<S59>:2' */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLimActive_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_b_TCM_TrqGradLimActive' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_dM_TCM_TrqGradLim_Lo(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_dM_TCM_TrqGradLim_Lo' */
    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLim_Lo_FA' incorporates:
     *  Chart: '<S18>/FsftTTIR_dM_TCM_TrqGradLim_LoChrt'
     *  SignalConversion generated from: '<S18>/VeTTIR_b_TCM_TrqGradLim_Lo_FA'
     */
    /* Gateway: FsftTTIR_dM_TCM_TrqGradLim_Lo/FsftTTIR_dM_TCM_TrqGradLim_LoChrt */
    /* During: FsftTTIR_dM_TCM_TrqGradLim_Lo/FsftTTIR_dM_TCM_TrqGradLim_LoChrt */
    /* Entry Internal: FsftTTIR_dM_TCM_TrqGradLim_Lo/FsftTTIR_dM_TCM_TrqGradLim_LoChrt */
    /* Transition: '<S60>:2' */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLim_Lo_FA_Value(true);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  Chart: '<S18>/FsftTTIR_dM_TCM_TrqGradLim_LoChrt'
     *  SignalConversion generated from: '<S18>/VeTTIR_dM_TCM_TrqGradLim_Lo_write'
     */
    Rte_IrvWrite_FsftTTIR_dM_TCM_TrqGradLim_Lo_VeTTIR_dM_TCM_TrqGradLim_Lo_write_IRV
        (KeTTIR_dM_TCM_TrqGradLim_Lo);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_dM_TCM_TrqGradLim_Lo' */
}

/* Output function */
FUNC(void, TTIR_CODE) FsftTTIR_dM_TCM_TrqGradLim_Up(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTTIR_dM_TCM_TrqGradLim_Up' */
    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLim_Up_FA' incorporates:
     *  Chart: '<S19>/FsftTTIR_dM_TCM_TrqGradLim_UpChrt'
     *  SignalConversion generated from: '<S19>/VeTTIR_b_TCM_TrqGradLim_Up_FA'
     */
    /* Gateway: FsftTTIR_dM_TCM_TrqGradLim_Up/FsftTTIR_dM_TCM_TrqGradLim_UpChrt */
    /* During: FsftTTIR_dM_TCM_TrqGradLim_Up/FsftTTIR_dM_TCM_TrqGradLim_UpChrt */
    /* Entry Internal: FsftTTIR_dM_TCM_TrqGradLim_Up/FsftTTIR_dM_TCM_TrqGradLim_UpChrt */
    /* Transition: '<S61>:2' */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLim_Up_FA_Value(true);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S19>/FsftTTIR_dM_TCM_TrqGradLim_UpChrt'
     *  SignalConversion generated from: '<S19>/VeTTIR_dM_TCM_TrqGradLim_Up_write'
     */
    Rte_IrvWrite_FsftTTIR_dM_TCM_TrqGradLim_Up_VeTTIR_dM_TCM_TrqGradLim_Up_write_IRV
        (KeTTIR_dM_TCM_TrqGradLim_Up);

    /* End of Outputs for SubSystem: '<Root>/FsftTTIR_dM_TCM_TrqGradLim_Up' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_ClthStrRsrvTrq(VAR(float32, AUTOMATIC)
    LeTTIR_M_ClthStrRsrvTrq, VAR(boolean, AUTOMATIC) LeTTIR_b_ClthStrRsrvTrqFA)
{
    boolean rtb_LeTTIR_b_ClthStrRsrvTrqFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_ClthStrRsrvTrq' */
    /* Chart: '<S20>/PokeTTIR_M_ClthStrRsrvTrqChrt' incorporates:
     *  SignalConversion generated from: '<S20>/LeTTIR_b_ClthStrRsrvTrqFA'
     */
    /* Gateway: PokeTTIR_M_ClthStrRsrvTrq/PokeTTIR_M_ClthStrRsrvTrqChrt */
    /* During: PokeTTIR_M_ClthStrRsrvTrq/PokeTTIR_M_ClthStrRsrvTrqChrt */
    /* Entry Internal: PokeTTIR_M_ClthStrRsrvTrq/PokeTTIR_M_ClthStrRsrvTrqChrt */
    /* Transition: '<S62>:2' */
    if (!LeTTIR_b_ClthStrRsrvTrqFA)
    {
        /* SignalConversion generated from: '<S20>/VeTTIR_M_ClthStrRsrvTrq_write' incorporates:
         *  Merge: '<Root>/Merge_16'
         *  SignalConversion generated from: '<S20>/LeTTIR_M_ClthStrRsrvTrq'
         */
        /* Transition: '<S62>:3' */
        /* Transition: '<S62>:15' */
        Rte_IrvWrite_PokeTTIR_M_ClthStrRsrvTrq_VeTTIR_M_ClthStrRsrvTrq_write_IRV
            (LeTTIR_M_ClthStrRsrvTrq);
        rtb_LeTTIR_b_ClthStrRsrvTrqFA_out_b = false;

        /* Transition: '<S62>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S20>/VeTTIR_M_ClthStrRsrvTrq_write' incorporates:
         *  Merge: '<Root>/Merge_16'
         */
        /* Transition: '<S62>:4' */
        Rte_IrvWrite_PokeTTIR_M_ClthStrRsrvTrq_VeTTIR_M_ClthStrRsrvTrq_write_IRV
            (KeTTIR_M_ClthStrRsrvTrqDflt);
        rtb_LeTTIR_b_ClthStrRsrvTrqFA_out_b = true;
    }

    /* End of Chart: '<S20>/PokeTTIR_M_ClthStrRsrvTrqChrt' */

    /* Outport: '<Root>/VeTTIR_b_ClthStrRsrvTrqFA' incorporates:
     *  SignalConversion generated from: '<S20>/VeTTIR_b_ClthStrRsrvTrqFA'
     */
    (void)Rte_Write_VeTTIR_b_ClthStrRsrvTrqFA_Value
        (rtb_LeTTIR_b_ClthStrRsrvTrqFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_ClthStrRsrvTrq' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_HASTrqK0(VAR(float32, AUTOMATIC)
    LeTTIR_M_HASTrqK0, VAR(boolean, AUTOMATIC) LeTTIR_b_HASTrqK0FA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_HASTrqK0' */
    /* Chart: '<S21>/PokeTTIR_M_HASTrqK0Chrt' incorporates:
     *  SignalConversion generated from: '<S21>/LeTTIR_b_HASTrqK0FA'
     */
    /* Gateway: PokeTTIR_M_HASTrqK0/PokeTTIR_M_HASTrqK0Chrt */
    /* During: PokeTTIR_M_HASTrqK0/PokeTTIR_M_HASTrqK0Chrt */
    /* Entry Internal: PokeTTIR_M_HASTrqK0/PokeTTIR_M_HASTrqK0Chrt */
    /* Transition: '<S63>:2' */
    if (!LeTTIR_b_HASTrqK0FA)
    {
        /* SignalConversion generated from: '<S21>/VeTTIR_M_HASTrqK0' incorporates:
         *  Outport: '<Root>/VeTTIR_M_HASTrqK0'
         *  SignalConversion generated from: '<S21>/LeTTIR_M_HASTrqK0'
         */
        /* Transition: '<S63>:3' */
        /* Transition: '<S63>:15' */
        (void)Rte_Write_VeTTIR_M_HASTrqK0_Value(LeTTIR_M_HASTrqK0);

        /* Transition: '<S63>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S21>/VeTTIR_M_HASTrqK0' incorporates:
         *  Outport: '<Root>/VeTTIR_M_HASTrqK0'
         */
        /* Transition: '<S63>:4' */
        (void)Rte_Write_VeTTIR_M_HASTrqK0_Value(KeTTIR_M_HASTrqK0Dflt);
    }

    /* End of Chart: '<S21>/PokeTTIR_M_HASTrqK0Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_HASTrqK0' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_HASTrqK0Lead(VAR(float32, AUTOMATIC)
    LeTTIR_M_HASTrqK0Lead, VAR(boolean, AUTOMATIC) LeTTIR_b_HASTrqK0LeadFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_HASTrqK0Lead' */
    /* Chart: '<S22>/PokeTTIR_M_HASTrqK0LeadChrt' incorporates:
     *  SignalConversion generated from: '<S22>/LeTTIR_b_HASTrqK0LeadFA'
     */
    /* Gateway: PokeTTIR_M_HASTrqK0Lead/PokeTTIR_M_HASTrqK0LeadChrt */
    /* During: PokeTTIR_M_HASTrqK0Lead/PokeTTIR_M_HASTrqK0LeadChrt */
    /* Entry Internal: PokeTTIR_M_HASTrqK0Lead/PokeTTIR_M_HASTrqK0LeadChrt */
    /* Transition: '<S64>:2' */
    if (!LeTTIR_b_HASTrqK0LeadFA)
    {
        /* SignalConversion generated from: '<S22>/VeTTIR_M_HASTrqK0Lead_write' incorporates:
         *  Merge: '<Root>/Merge_6'
         *  SignalConversion generated from: '<S22>/LeTTIR_M_HASTrqK0Lead'
         */
        /* Transition: '<S64>:3' */
        /* Transition: '<S64>:15' */
        Rte_IrvWrite_PokeTTIR_M_HASTrqK0Lead_VeTTIR_M_HASTrqK0Lead_write_IRV
            (LeTTIR_M_HASTrqK0Lead);

        /* Transition: '<S64>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S22>/VeTTIR_M_HASTrqK0Lead_write' incorporates:
         *  Merge: '<Root>/Merge_6'
         */
        /* Transition: '<S64>:4' */
        Rte_IrvWrite_PokeTTIR_M_HASTrqK0Lead_VeTTIR_M_HASTrqK0Lead_write_IRV
            (KeTTIR_M_HASTrqK0LeadDflt);
    }

    /* End of Chart: '<S22>/PokeTTIR_M_HASTrqK0LeadChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_HASTrqK0Lead' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_ILECreepTorque(VAR(float32, AUTOMATIC)
    LeTTIR_M_ILECreepTorque, VAR(boolean, AUTOMATIC) LeTTIR_b_ILECreepTorqueFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_ILECreepTorque' */
    /* Chart: '<S23>/PokeTTIR_M_ILECreepTorqueChrt' incorporates:
     *  SignalConversion generated from: '<S23>/LeTTIR_b_ILECreepTorqueFA'
     */
    /* Gateway: PokeTTIR_M_ILECreepTorque/PokeTTIR_M_ILECreepTorqueChrt */
    /* During: PokeTTIR_M_ILECreepTorque/PokeTTIR_M_ILECreepTorqueChrt */
    /* Entry Internal: PokeTTIR_M_ILECreepTorque/PokeTTIR_M_ILECreepTorqueChrt */
    /* Transition: '<S65>:2' */
    if (!LeTTIR_b_ILECreepTorqueFA)
    {
        /* SignalConversion generated from: '<S23>/VeTTIR_M_ILECreepTorque' incorporates:
         *  Outport: '<Root>/VeTTIR_M_ILECreepTrq'
         *  SignalConversion generated from: '<S23>/LeTTIR_M_ILECreepTorque'
         */
        /* Transition: '<S65>:3' */
        /* Transition: '<S65>:15' */
        (void)Rte_Write_VeTTIR_M_ILECreepTrq_Value(LeTTIR_M_ILECreepTorque);

        /* Transition: '<S65>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S23>/VeTTIR_M_ILECreepTorque' incorporates:
         *  Outport: '<Root>/VeTTIR_M_ILECreepTrq'
         */
        /* Transition: '<S65>:4' */
        (void)Rte_Write_VeTTIR_M_ILECreepTrq_Value(KeTTIR_M_ILECreepTrqDflt);
    }

    /* End of Chart: '<S23>/PokeTTIR_M_ILECreepTorqueChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_ILECreepTorque' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_K1TrqCapAct(VAR(float32, AUTOMATIC)
    LeTTIR_M_K1TrqCapAct, VAR(boolean, AUTOMATIC) LeTTIR_b_K1TrqCapActFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_K1TrqCapAct' */
    /* Chart: '<S24>/PokeTTIR_M_K1TrqCapActChrt' incorporates:
     *  SignalConversion generated from: '<S24>/LeTTIR_b_K1TrqCapActFA'
     */
    /* Gateway: PokeTTIR_M_K1TrqCapAct/PokeTTIR_M_K1TrqCapActChrt */
    /* During: PokeTTIR_M_K1TrqCapAct/PokeTTIR_M_K1TrqCapActChrt */
    /* Entry Internal: PokeTTIR_M_K1TrqCapAct/PokeTTIR_M_K1TrqCapActChrt */
    /* Transition: '<S66>:2' */
    if (!LeTTIR_b_K1TrqCapActFA)
    {
        /* SignalConversion generated from: '<S24>/VeTTIR_M_K1TrqCapAct_write' incorporates:
         *  Merge: '<Root>/Merge_4'
         *  SignalConversion generated from: '<S24>/LeTTIR_M_K1TrqCapAct'
         */
        /* Transition: '<S66>:3' */
        /* Transition: '<S66>:15' */
        Rte_IrvWrite_PokeTTIR_M_K1TrqCapAct_VeTTIR_M_K1TrqCapAct_write_IRV
            (LeTTIR_M_K1TrqCapAct);

        /* Transition: '<S66>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S24>/VeTTIR_M_K1TrqCapAct_write' incorporates:
         *  Merge: '<Root>/Merge_4'
         */
        /* Transition: '<S66>:4' */
        Rte_IrvWrite_PokeTTIR_M_K1TrqCapAct_VeTTIR_M_K1TrqCapAct_write_IRV
            (KeTTIR_M_K1TrqCapActDflt);
    }

    /* End of Chart: '<S24>/PokeTTIR_M_K1TrqCapActChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_K1TrqCapAct' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_K1TrqCapLead(VAR(float32, AUTOMATIC)
    LeTTIR_M_K1TrqCapLead, VAR(boolean, AUTOMATIC) LeTTIR_b_K1TrqCapLeadFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_K1TrqCapLead' */
    /* Chart: '<S25>/PokeTTIR_M_K1TrqCapLeadChrt' incorporates:
     *  SignalConversion generated from: '<S25>/LeTTIR_b_K1TrqCapLeadFA'
     */
    /* Gateway: PokeTTIR_M_K1TrqCapLead/PokeTTIR_M_K1TrqCapLeadChrt */
    /* During: PokeTTIR_M_K1TrqCapLead/PokeTTIR_M_K1TrqCapLeadChrt */
    /* Entry Internal: PokeTTIR_M_K1TrqCapLead/PokeTTIR_M_K1TrqCapLeadChrt */
    /* Transition: '<S67>:2' */
    if (!LeTTIR_b_K1TrqCapLeadFA)
    {
        /* SignalConversion generated from: '<S25>/VeTTIR_M_K1TrqCapLead_write' incorporates:
         *  Merge: '<Root>/Merge_5'
         *  SignalConversion generated from: '<S25>/LeTTIR_M_K1TrqCapLead'
         */
        /* Transition: '<S67>:3' */
        /* Transition: '<S67>:15' */
        Rte_IrvWrite_PokeTTIR_M_K1TrqCapLead_VeTTIR_M_K1TrqCapLead_write_IRV
            (LeTTIR_M_K1TrqCapLead);

        /* Transition: '<S67>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S25>/VeTTIR_M_K1TrqCapLead_write' incorporates:
         *  Merge: '<Root>/Merge_5'
         */
        /* Transition: '<S67>:4' */
        Rte_IrvWrite_PokeTTIR_M_K1TrqCapLead_VeTTIR_M_K1TrqCapLead_write_IRV
            (KeTTIR_M_K1TrqCapLeadDflt);
    }

    /* End of Chart: '<S25>/PokeTTIR_M_K1TrqCapLeadChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_K1TrqCapLead' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_MaxLmtAxleTrq(VAR(float32, AUTOMATIC)
    LeTTIR_M_MaxLmtAxleTrq, VAR(boolean, AUTOMATIC) LeTTIR_b_MaxLmtAxleTrqFA)
{
    boolean rtb_LeTTIR_b_MaxLmtAxleTrqFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_MaxLmtAxleTrq' */
    /* Chart: '<S26>/PokeTTIR_M_MaxLmtAxleTrqChrt' incorporates:
     *  SignalConversion generated from: '<S26>/LeTTIR_b_MaxLmtAxleTrqFA'
     */
    /* Gateway: PokeTTIR_M_MaxLmtAxleTrq/PokeTTIR_M_MaxLmtAxleTrqChrt */
    /* During: PokeTTIR_M_MaxLmtAxleTrq/PokeTTIR_M_MaxLmtAxleTrqChrt */
    /* Entry Internal: PokeTTIR_M_MaxLmtAxleTrq/PokeTTIR_M_MaxLmtAxleTrqChrt */
    /* Transition: '<S68>:2' */
    if (!LeTTIR_b_MaxLmtAxleTrqFA)
    {
        /* SignalConversion generated from: '<S26>/VeTTIR_M_MaxLmtAxleTrq_write' incorporates:
         *  Merge: '<Root>/Merge_8'
         *  SignalConversion generated from: '<S26>/LeTTIR_M_MaxLmtAxleTrq'
         */
        /* Transition: '<S68>:3' */
        /* Transition: '<S68>:15' */
        Rte_IrvWrite_PokeTTIR_M_MaxLmtAxleTrq_VeTTIR_M_MaxLmtAxleTrq_write_IRV
            (LeTTIR_M_MaxLmtAxleTrq);
        rtb_LeTTIR_b_MaxLmtAxleTrqFA_out = false;

        /* Transition: '<S68>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S26>/VeTTIR_M_MaxLmtAxleTrq_write' incorporates:
         *  Merge: '<Root>/Merge_8'
         */
        /* Transition: '<S68>:4' */
        Rte_IrvWrite_PokeTTIR_M_MaxLmtAxleTrq_VeTTIR_M_MaxLmtAxleTrq_write_IRV
            (KeTTIR_M_MaxLmtAxleTrqDflt);
        rtb_LeTTIR_b_MaxLmtAxleTrqFA_out = true;
    }

    /* End of Chart: '<S26>/PokeTTIR_M_MaxLmtAxleTrqChrt' */

    /* Outport: '<Root>/VeTTIR_b_MaxLmtAxleTrqFA' incorporates:
     *  SignalConversion generated from: '<S26>/VeTTIR_b_MaxLmtAxleTrqFA'
     */
    (void)Rte_Write_VeTTIR_b_MaxLmtAxleTrqFA_Value
        (rtb_LeTTIR_b_MaxLmtAxleTrqFA_out);

    /* Merge: '<Root>/Merge_10_Irv' incorporates:
     *  SignalConversion generated from: '<S26>/VeTTIR_b_MaxLmtAxleTrqFA_write'
     * */
    Rte_IrvWrite_PokeTTIR_M_MaxLmtAxleTrq_VeTTIR_b_MaxLmtAxleTrqFA_write_IRV
        (rtb_LeTTIR_b_MaxLmtAxleTrqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_MaxLmtAxleTrq' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_MinLmtAxleTrq(VAR(float32, AUTOMATIC)
    LeTTIR_M_MinLmtAxleTrq, VAR(boolean, AUTOMATIC) LeTTIR_b_MinLmtAxleTrqFA)
{
    boolean rtb_LeTTIR_b_MinLmtAxleTrqFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_MinLmtAxleTrq' */
    /* Chart: '<S27>/PokeTTIR_M_MinLmtAxleTrqChrt' incorporates:
     *  SignalConversion generated from: '<S27>/LeTTIR_b_MinLmtAxleTrqFA'
     */
    /* Gateway: PokeTTIR_M_MinLmtAxleTrq/PokeTTIR_M_MinLmtAxleTrqChrt */
    /* During: PokeTTIR_M_MinLmtAxleTrq/PokeTTIR_M_MinLmtAxleTrqChrt */
    /* Entry Internal: PokeTTIR_M_MinLmtAxleTrq/PokeTTIR_M_MinLmtAxleTrqChrt */
    /* Transition: '<S69>:2' */
    if (!LeTTIR_b_MinLmtAxleTrqFA)
    {
        /* SignalConversion generated from: '<S27>/VeTTIR_M_MinLmtAxleTrq_write' incorporates:
         *  Merge: '<Root>/Merge_11'
         *  SignalConversion generated from: '<S27>/LeTTIR_M_MinLmtAxleTrq'
         */
        /* Transition: '<S69>:3' */
        /* Transition: '<S69>:15' */
        Rte_IrvWrite_PokeTTIR_M_MinLmtAxleTrq_VeTTIR_M_MinLmtAxleTrq_write_IRV
            (LeTTIR_M_MinLmtAxleTrq);
        rtb_LeTTIR_b_MinLmtAxleTrqFA_out = false;

        /* Transition: '<S69>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S27>/VeTTIR_M_MinLmtAxleTrq_write' incorporates:
         *  Merge: '<Root>/Merge_11'
         */
        /* Transition: '<S69>:4' */
        Rte_IrvWrite_PokeTTIR_M_MinLmtAxleTrq_VeTTIR_M_MinLmtAxleTrq_write_IRV
            (KeTTIR_M_MinLmtAxleTrqDflt);
        rtb_LeTTIR_b_MinLmtAxleTrqFA_out = true;
    }

    /* End of Chart: '<S27>/PokeTTIR_M_MinLmtAxleTrqChrt' */

    /* Outport: '<Root>/VeTTIR_b_MinLmtAxleTrqFA' incorporates:
     *  SignalConversion generated from: '<S27>/VeTTIR_b_MinLmtAxleTrqFA'
     */
    (void)Rte_Write_VeTTIR_b_MinLmtAxleTrqFA_Value
        (rtb_LeTTIR_b_MinLmtAxleTrqFA_out);

    /* Merge: '<Root>/Merge_10_Irv1' incorporates:
     *  SignalConversion generated from: '<S27>/VeTTIR_b_MinLmtAxleTrqFA_write'
     * */
    Rte_IrvWrite_PokeTTIR_M_MinLmtAxleTrq_VeTTIR_b_MinLmtAxleTrqFA_write_IRV
        (rtb_LeTTIR_b_MinLmtAxleTrqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_MinLmtAxleTrq' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_PumpTrqOnImpShaft(VAR(float32, AUTOMATIC)
    LeTTIR_M_PumpTrqOnImpShaft, VAR(boolean, AUTOMATIC)
    LeTTIR_b_PumpTrqOnImpShaft_FA)
{
    boolean rtb_LeTTIR_b_PumpTrqOnImpShaft_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_PumpTrqOnImpShaft' */
    /* Chart: '<S28>/PokeTTIR_M_PumpTrqOnImpShaftChrt' incorporates:
     *  SignalConversion generated from: '<S28>/LeTTIR_b_TCM_TrqGradLim_Up_FA'
     */
    /* Gateway: PokeTTIR_M_PumpTrqOnImpShaft/PokeTTIR_M_PumpTrqOnImpShaftChrt */
    /* During: PokeTTIR_M_PumpTrqOnImpShaft/PokeTTIR_M_PumpTrqOnImpShaftChrt */
    /* Entry Internal: PokeTTIR_M_PumpTrqOnImpShaft/PokeTTIR_M_PumpTrqOnImpShaftChrt */
    /* Transition: '<S70>:2' */
    if (!LeTTIR_b_PumpTrqOnImpShaft_FA)
    {
        /* SignalConversion generated from: '<S28>/VeTTIR_M_PumpTrqOnImpShaft' incorporates:
         *  Outport: '<Root>/VeTTIR_M_PumpTrqOnImpShaft'
         *  SignalConversion generated from: '<S28>/LeTTIR_dM_TCM_TrqGradLim_Up'
         */
        /* Transition: '<S70>:3' */
        /* Transition: '<S70>:15' */
        (void)Rte_Write_VeTTIR_M_PumpTrqOnImpShaft_Value
            (LeTTIR_M_PumpTrqOnImpShaft);
        rtb_LeTTIR_b_PumpTrqOnImpShaft_FA_out = false;

        /* Transition: '<S70>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S28>/VeTTIR_M_PumpTrqOnImpShaft' incorporates:
         *  Outport: '<Root>/VeTTIR_M_PumpTrqOnImpShaft'
         */
        /* Transition: '<S70>:4' */
        (void)Rte_Write_VeTTIR_M_PumpTrqOnImpShaft_Value
            (KeTTIR_M_PumpTrqOnImpShaft);
        rtb_LeTTIR_b_PumpTrqOnImpShaft_FA_out = true;
    }

    /* End of Chart: '<S28>/PokeTTIR_M_PumpTrqOnImpShaftChrt' */

    /* Outport: '<Root>/VeTTIR_b_PumpTrqOnImpShaft_FA' incorporates:
     *  SignalConversion generated from: '<S28>/VeTTIR_b_PumpTrqOnImpShaft_FA'
     */
    (void)Rte_Write_VeTTIR_b_PumpTrqOnImpShaft_FA_Value
        (rtb_LeTTIR_b_PumpTrqOnImpShaft_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_PumpTrqOnImpShaft' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_SumMaxTrqDsrd(VAR(float32, AUTOMATIC)
    LeTTIR_M_SumMaxTrqDsrd, VAR(boolean, AUTOMATIC) LeTTIR_b_SumMaxTrqDsrdFA)
{
    boolean rtb_LeTTIR_b_SumMaxTrqDsrdFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_SumMaxTrqDsrd' */
    /* Chart: '<S29>/PokeTTIR_M_SumMaxTrqDsrdChrt' incorporates:
     *  SignalConversion generated from: '<S29>/LeTTIR_b_SumMaxTrqDsrdFA'
     */
    /* Gateway: PokeTTIR_M_SumMaxTrqDsrd/PokeTTIR_M_SumMaxTrqDsrdChrt */
    /* During: PokeTTIR_M_SumMaxTrqDsrd/PokeTTIR_M_SumMaxTrqDsrdChrt */
    /* Entry Internal: PokeTTIR_M_SumMaxTrqDsrd/PokeTTIR_M_SumMaxTrqDsrdChrt */
    /* Transition: '<S71>:2' */
    if (!LeTTIR_b_SumMaxTrqDsrdFA)
    {
        /* SignalConversion generated from: '<S29>/VeTTIR_M_SumMaxTrqDsrd_write' incorporates:
         *  Merge: '<Root>/Merge_2'
         *  SignalConversion generated from: '<S29>/LeTTIR_M_SumMaxTrqDsrd'
         */
        /* Transition: '<S71>:3' */
        /* Transition: '<S71>:15' */
        Rte_IrvWrite_PokeTTIR_M_SumMaxTrqDsrd_VeTTIR_M_SumMaxTrqDsrd_write_IRV
            (LeTTIR_M_SumMaxTrqDsrd);
        rtb_LeTTIR_b_SumMaxTrqDsrdFA_out = false;

        /* Transition: '<S71>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S29>/VeTTIR_M_SumMaxTrqDsrd_write' incorporates:
         *  Merge: '<Root>/Merge_2'
         */
        /* Transition: '<S71>:4' */
        Rte_IrvWrite_PokeTTIR_M_SumMaxTrqDsrd_VeTTIR_M_SumMaxTrqDsrd_write_IRV
            (KeTTIR_M_SumMaxTrqDsrdDflt);
        rtb_LeTTIR_b_SumMaxTrqDsrdFA_out = true;
    }

    /* End of Chart: '<S29>/PokeTTIR_M_SumMaxTrqDsrdChrt' */

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S29>/VeTTIR_b_SumMaxTrqDsrdFA_write'
     * */
    Rte_IrvWrite_PokeTTIR_M_SumMaxTrqDsrd_VeTTIR_b_SumMaxTrqDsrdFA_write_IRV
        (rtb_LeTTIR_b_SumMaxTrqDsrdFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_SumMaxTrqDsrd' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_SumMinTrqDsrd(VAR(float32, AUTOMATIC)
    LeTTIR_M_SumMinTrqDsrd, VAR(boolean, AUTOMATIC) LeTTIR_b_SumMinTrqDsrdFA)
{
    boolean rtb_LeTTIR_b_SumMinTrqDsrdFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_SumMinTrqDsrd' */
    /* Chart: '<S30>/PokeTTIR_M_SumMinTrqDsrdChrt' incorporates:
     *  SignalConversion generated from: '<S30>/LeTTIR_b_SumMaxTrqDsrdFA'
     */
    /* Gateway: PokeTTIR_M_SumMinTrqDsrd/PokeTTIR_M_SumMinTrqDsrdChrt */
    /* During: PokeTTIR_M_SumMinTrqDsrd/PokeTTIR_M_SumMinTrqDsrdChrt */
    /* Entry Internal: PokeTTIR_M_SumMinTrqDsrd/PokeTTIR_M_SumMinTrqDsrdChrt */
    /* Transition: '<S72>:2' */
    if (!LeTTIR_b_SumMinTrqDsrdFA)
    {
        /* SignalConversion generated from: '<S30>/VeTTIR_M_SumMinTrqDsrd_write' incorporates:
         *  Merge: '<Root>/Merge_34'
         *  SignalConversion generated from: '<S30>/LeTTIR_M_SumMaxTrqDsrd'
         */
        /* Transition: '<S72>:3' */
        /* Transition: '<S72>:15' */
        Rte_IrvWrite_PokeTTIR_M_SumMinTrqDsrd_VeTTIR_M_SumMinTrqDsrd_write_IRV
            (LeTTIR_M_SumMinTrqDsrd);
        rtb_LeTTIR_b_SumMinTrqDsrdFA_out = false;

        /* Transition: '<S72>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S30>/VeTTIR_M_SumMinTrqDsrd_write' incorporates:
         *  Merge: '<Root>/Merge_34'
         */
        /* Transition: '<S72>:4' */
        Rte_IrvWrite_PokeTTIR_M_SumMinTrqDsrd_VeTTIR_M_SumMinTrqDsrd_write_IRV
            (KeTTIR_M_SumMinTrqDsrdDflt);
        rtb_LeTTIR_b_SumMinTrqDsrdFA_out = true;
    }

    /* End of Chart: '<S30>/PokeTTIR_M_SumMinTrqDsrdChrt' */

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S30>/VeTTIR_b_SumMinTrqDsrdFA_write'
     * */
    Rte_IrvWrite_PokeTTIR_M_SumMinTrqDsrd_VeTTIR_b_SumMinTrqDsrdFA_write_IRV
        (rtb_LeTTIR_b_SumMinTrqDsrdFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_SumMinTrqDsrd' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_TCMSumTrqReqFast(VAR(float32, AUTOMATIC)
    LeTTIR_M_TCMSumTrqReqFast, VAR(boolean, AUTOMATIC)
    LeTTIR_b_TCMSumTrqReqFastFA)
{
    boolean rtb_LeTTIR_b_TCMSumTrqReqFastFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_TCMSumTrqReqFast' */
    /* Chart: '<S31>/PokeTTIR_M_TCMSumTrqReqFastChrt' incorporates:
     *  SignalConversion generated from: '<S31>/LeTTIR_b_TCMSumTrqReqFastFA'
     */
    /* Gateway: PokeTTIR_M_TCMSumTrqReqFast/PokeTTIR_M_TCMSumTrqReqFastChrt */
    /* During: PokeTTIR_M_TCMSumTrqReqFast/PokeTTIR_M_TCMSumTrqReqFastChrt */
    /* Entry Internal: PokeTTIR_M_TCMSumTrqReqFast/PokeTTIR_M_TCMSumTrqReqFastChrt */
    /* Transition: '<S73>:2' */
    if (!LeTTIR_b_TCMSumTrqReqFastFA)
    {
        /* SignalConversion generated from: '<S31>/VeTTIR_M_TCMSumTrqReqFast_write' incorporates:
         *  Merge: '<Root>/Merge_17'
         *  SignalConversion generated from: '<S31>/LeTTIR_M_TCMSumTrqReqFast'
         */
        /* Transition: '<S73>:3' */
        /* Transition: '<S73>:15' */
        Rte_IrvWrite_PokeTTIR_M_TCMSumTrqReqFast_VeTTIR_M_TCMSumTrqReqFast_write_IRV
            (LeTTIR_M_TCMSumTrqReqFast);
        rtb_LeTTIR_b_TCMSumTrqReqFastFA_out_p = false;

        /* Transition: '<S73>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S31>/VeTTIR_M_TCMSumTrqReqFast_write' incorporates:
         *  Merge: '<Root>/Merge_17'
         */
        /* Transition: '<S73>:4' */
        Rte_IrvWrite_PokeTTIR_M_TCMSumTrqReqFast_VeTTIR_M_TCMSumTrqReqFast_write_IRV
            (KeTTIR_M_TCMSumTrqFastDflt);
        rtb_LeTTIR_b_TCMSumTrqReqFastFA_out_p = true;
    }

    /* End of Chart: '<S31>/PokeTTIR_M_TCMSumTrqReqFastChrt' */

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S31>/VeTTIR_b_TCMSumTrqReqFastFA_write'
     * */
    Rte_IrvWrite_PokeTTIR_M_TCMSumTrqReqFast_VeTTIR_b_TCMSumTrqReqFastFA_write_IRV
        (rtb_LeTTIR_b_TCMSumTrqReqFastFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_TCMSumTrqReqFast' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_TCMSumTrqReqSlow(VAR(float32, AUTOMATIC)
    LeTTIR_M_TCMSumTrqReqSlow, VAR(boolean, AUTOMATIC)
    LeTTIR_b_TCMSumTrqReqSlowFA)
{
    boolean rtb_LeTTIR_b_TCMSumTrqReqSlowFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_TCMSumTrqReqSlow' */
    /* Chart: '<S32>/PokeTTIR_M_TCMSumTrqReqSlowChrt' incorporates:
     *  SignalConversion generated from: '<S32>/LeTTIR_b_TCMSumTrqReqSlowFA'
     */
    /* Gateway: PokeTTIR_M_TCMSumTrqReqSlow/PokeTTIR_M_TCMSumTrqReqSlowChrt */
    /* During: PokeTTIR_M_TCMSumTrqReqSlow/PokeTTIR_M_TCMSumTrqReqSlowChrt */
    /* Entry Internal: PokeTTIR_M_TCMSumTrqReqSlow/PokeTTIR_M_TCMSumTrqReqSlowChrt */
    /* Transition: '<S74>:2' */
    if (!LeTTIR_b_TCMSumTrqReqSlowFA)
    {
        /* SignalConversion generated from: '<S32>/VeTTIR_M_TCMSumTrqReqSlow_write' incorporates:
         *  Merge: '<Root>/Merge_18'
         *  SignalConversion generated from: '<S32>/LeTTIR_M_TCMSumTrqReqSlow'
         */
        /* Transition: '<S74>:3' */
        /* Transition: '<S74>:15' */
        Rte_IrvWrite_PokeTTIR_M_TCMSumTrqReqSlow_VeTTIR_M_TCMSumTrqReqSlow_write_IRV
            (LeTTIR_M_TCMSumTrqReqSlow);
        rtb_LeTTIR_b_TCMSumTrqReqSlowFA_out_l = false;

        /* Transition: '<S74>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S32>/VeTTIR_M_TCMSumTrqReqSlow_write' incorporates:
         *  Merge: '<Root>/Merge_18'
         */
        /* Transition: '<S74>:4' */
        Rte_IrvWrite_PokeTTIR_M_TCMSumTrqReqSlow_VeTTIR_M_TCMSumTrqReqSlow_write_IRV
            (KeTTIR_M_TCMSumTrqSlwDflt);
        rtb_LeTTIR_b_TCMSumTrqReqSlowFA_out_l = true;
    }

    /* End of Chart: '<S32>/PokeTTIR_M_TCMSumTrqReqSlowChrt' */

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S32>/VeTTIR_b_TCMSumTrqReqSlowFA_write'
     * */
    Rte_IrvWrite_PokeTTIR_M_TCMSumTrqReqSlow_VeTTIR_b_TCMSumTrqReqSlowFA_write_IRV
        (rtb_LeTTIR_b_TCMSumTrqReqSlowFA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_TCMSumTrqReqSlow' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_TransIntakeTorq(VAR(float32, AUTOMATIC)
    LeTTIR_M_TransIntakeTorq, VAR(boolean, AUTOMATIC) LeTTIR_b_TransIntakeTorqFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_TransIntakeTorq' */
    /* Chart: '<S33>/PokeTTIR_M_TransIntakeTorqChrt' incorporates:
     *  SignalConversion generated from: '<S33>/LeTTIR_b_TransIntakeTorqFA'
     */
    /* Gateway: PokeTTIR_M_TransIntakeTorq/PokeTTIR_M_TransIntakeTorqChrt */
    /* During: PokeTTIR_M_TransIntakeTorq/PokeTTIR_M_TransIntakeTorqChrt */
    /* Entry Internal: PokeTTIR_M_TransIntakeTorq/PokeTTIR_M_TransIntakeTorqChrt */
    /* Transition: '<S75>:2' */
    if (!LeTTIR_b_TransIntakeTorqFA)
    {
        /* SignalConversion generated from: '<S33>/VeTTIR_M_TransIntakeTorq_write' incorporates:
         *  Merge: '<Root>/Merge_7'
         *  SignalConversion generated from: '<S33>/LeTTIR_M_TransIntakeTorq'
         */
        /* Transition: '<S75>:3' */
        /* Transition: '<S75>:15' */
        Rte_IrvWrite_PokeTTIR_M_TransIntakeTorq_VeTTIR_M_TransIntakeTorq_write_IRV
            (LeTTIR_M_TransIntakeTorq);

        /* Transition: '<S75>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S33>/VeTTIR_M_TransIntakeTorq_write' incorporates:
         *  Merge: '<Root>/Merge_7'
         */
        /* Transition: '<S75>:4' */
        Rte_IrvWrite_PokeTTIR_M_TransIntakeTorq_VeTTIR_M_TransIntakeTorq_write_IRV
            (KeTTIR_M_TransIntakeTorqDflt);
    }

    /* End of Chart: '<S33>/PokeTTIR_M_TransIntakeTorqChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_TransIntakeTorq' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_M_WhlCreepTrq(VAR(float32, AUTOMATIC)
    LeTTIR_M_WhlCreepTrq, VAR(boolean, AUTOMATIC) LeTTIR_b_WhlCreepTrqFA)
{
    boolean rtb_LeTTIR_b_WhlCreepTrqFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_M_WhlCreepTrq' */
    /* Chart: '<S34>/PokeTTIR_M_WhlCreepTrqChrt' incorporates:
     *  SignalConversion generated from: '<S34>/LeTTIR_b_WhlCreepTrqFA'
     */
    /* Gateway: PokeTTIR_M_WhlCreepTrq/PokeTTIR_M_WhlCreepTrqChrt */
    /* During: PokeTTIR_M_WhlCreepTrq/PokeTTIR_M_WhlCreepTrqChrt */
    /* Entry Internal: PokeTTIR_M_WhlCreepTrq/PokeTTIR_M_WhlCreepTrqChrt */
    /* Transition: '<S76>:2' */
    if (!LeTTIR_b_WhlCreepTrqFA)
    {
        /* SignalConversion generated from: '<S34>/VeTTIR_M_WhlCreepTrq' incorporates:
         *  Outport: '<Root>/VeTTIR_M_WhlCreepTrq'
         *  SignalConversion generated from: '<S34>/LeTTIR_M_WhlCreepTrq'
         */
        /* Transition: '<S76>:3' */
        /* Transition: '<S76>:15' */
        (void)Rte_Write_VeTTIR_M_WhlCreepTrq_Value(LeTTIR_M_WhlCreepTrq);
        rtb_LeTTIR_b_WhlCreepTrqFA_out_b = false;

        /* Transition: '<S76>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S34>/VeTTIR_M_WhlCreepTrq' incorporates:
         *  Outport: '<Root>/VeTTIR_M_WhlCreepTrq'
         */
        /* Transition: '<S76>:4' */
        (void)Rte_Write_VeTTIR_M_WhlCreepTrq_Value(KeTTIR_M_WhlCreepTrqDflt);
        rtb_LeTTIR_b_WhlCreepTrqFA_out_b = true;
    }

    /* End of Chart: '<S34>/PokeTTIR_M_WhlCreepTrqChrt' */

    /* Outport: '<Root>/VeTTIR_b_WhlCreepTrqFA' incorporates:
     *  SignalConversion generated from: '<S34>/VeTTIR_b_WhlCreepTrqFA'
     */
    (void)Rte_Write_VeTTIR_b_WhlCreepTrqFA_Value
        (rtb_LeTTIR_b_WhlCreepTrqFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_M_WhlCreepTrq' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_b_TCM_EngFSO_Allw(VAR(boolean, AUTOMATIC)
    LeTTIR_b_TCM_EngFSO_Allw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_b_TCM_EngFSO_Allw' */
    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Allw' incorporates:
     *  SignalConversion generated from: '<S35>/VeTTIR_b_TCM_EngFSO_Allw'
     *  SignalConversion generated from: '<S35>/LeTTIR_dm_TorqLimGradient'
     */
    /* Gateway: PokeTTIR_b_TCM_EngFSO_Allw/PokeTTIR_b_TCM_EngFSO_AllwChrt */
    /* During: PokeTTIR_b_TCM_EngFSO_Allw/PokeTTIR_b_TCM_EngFSO_AllwChrt */
    /* Entry Internal: PokeTTIR_b_TCM_EngFSO_Allw/PokeTTIR_b_TCM_EngFSO_AllwChrt */
    /* Transition: '<S77>:2' */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Allw_Value(LeTTIR_b_TCM_EngFSO_Allw);

    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Allw_FA' incorporates:
     *  Chart: '<S35>/PokeTTIR_b_TCM_EngFSO_AllwChrt'
     *  SignalConversion generated from: '<S35>/VeTTIR_b_TCM_EngFSO_Allw_FA'
     */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Allw_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_b_TCM_EngFSO_Allw' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_b_TCM_EngFSO_Rq(VAR(boolean, AUTOMATIC)
    LeTTIR_b_TCM_EngFSO_Rq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_b_TCM_EngFSO_Rq' */
    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Rq' incorporates:
     *  SignalConversion generated from: '<S36>/VeTTIR_b_TCM_EngFSO_Rq'
     *  SignalConversion generated from: '<S36>/LeTTIR_b_TCM_EngFSO_Allw'
     */
    /* Gateway: PokeTTIR_b_TCM_EngFSO_Rq/PokeTTIR_b_TCM_EngFSO_RqChrt */
    /* During: PokeTTIR_b_TCM_EngFSO_Rq/PokeTTIR_b_TCM_EngFSO_RqChrt */
    /* Entry Internal: PokeTTIR_b_TCM_EngFSO_Rq/PokeTTIR_b_TCM_EngFSO_RqChrt */
    /* Transition: '<S78>:2' */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Rq_Value(LeTTIR_b_TCM_EngFSO_Rq);

    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Rq_FA' incorporates:
     *  Chart: '<S36>/PokeTTIR_b_TCM_EngFSO_RqChrt'
     *  SignalConversion generated from: '<S36>/VeTTIR_b_TCM_EngFSO_Rq_FA'
     */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Rq_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_b_TCM_EngFSO_Rq' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_b_TCM_TrqGradLimActive(VAR(boolean, AUTOMATIC)
    LeTTIR_b_TCM_TrqGradLimActive)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_b_TCM_TrqGradLimActive' */
    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLimActive' incorporates:
     *  SignalConversion generated from: '<S37>/VeTTIR_b_TCM_TrqGradLimActive'
     *  SignalConversion generated from: '<S37>/LeTTIR_b_TCM_EngFSO_Allw'
     */
    /* Gateway: PokeTTIR_b_TCM_TrqGradLimActive/PokeTTIR_b_TCM_TrqGradLimActiveChrt */
    /* During: PokeTTIR_b_TCM_TrqGradLimActive/PokeTTIR_b_TCM_TrqGradLimActiveChrt */
    /* Entry Internal: PokeTTIR_b_TCM_TrqGradLimActive/PokeTTIR_b_TCM_TrqGradLimActiveChrt */
    /* Transition: '<S79>:2' */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLimActive_Value
        (LeTTIR_b_TCM_TrqGradLimActive);

    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLimActive_FA' incorporates:
     *  Chart: '<S37>/PokeTTIR_b_TCM_TrqGradLimActiveChrt'
     *  SignalConversion generated from: '<S37>/VeTTIR_b_TCM_TrqGradLimActive_FA'
     */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLimActive_FA_Value(false);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S37>/LeTTIR_b_TCM_EngFSO_Allw'
     *  SignalConversion generated from: '<S37>/VeTTIR_b_TCM_TrqGradLimActive_write'
     */
    Rte_IrvWrite_PokeTTIR_b_TCM_TrqGradLimActive_VeTTIR_b_TCM_TrqGradLimActive_write_IRV
        (LeTTIR_b_TCM_TrqGradLimActive);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_b_TCM_TrqGradLimActive' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_dM_TCM_TrqGradLim_Lo(VAR(float32, AUTOMATIC)
    LeTTIR_dM_TCM_TrqGradLim_Lo, VAR(boolean, AUTOMATIC)
    LeTTIR_b_TCM_TrqGradLim_Lo_FA)
{
    boolean rtb_LeTTIR_b_TCM_TrqGradLim_Lo_FA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_dM_TCM_TrqGradLim_Lo' */
    /* Chart: '<S38>/PokeTTIR_dM_TCM_TrqGradLim_LoChrt' incorporates:
     *  SignalConversion generated from: '<S38>/LeTTIR_b_TCMSumTrqReqFastFA'
     */
    /* Gateway: PokeTTIR_dM_TCM_TrqGradLim_Lo/PokeTTIR_dM_TCM_TrqGradLim_LoChrt */
    /* During: PokeTTIR_dM_TCM_TrqGradLim_Lo/PokeTTIR_dM_TCM_TrqGradLim_LoChrt */
    /* Entry Internal: PokeTTIR_dM_TCM_TrqGradLim_Lo/PokeTTIR_dM_TCM_TrqGradLim_LoChrt */
    /* Transition: '<S80>:2' */
    if (!LeTTIR_b_TCM_TrqGradLim_Lo_FA)
    {
        /* SignalConversion generated from: '<S38>/VeTTIR_dM_TCM_TrqGradLim_Lo_write' incorporates:
         *  Merge: '<Root>/Merge_36'
         *  SignalConversion generated from: '<S38>/LeTTIR_M_TCMSumTrqReqFast'
         */
        /* Transition: '<S80>:3' */
        /* Transition: '<S80>:15' */
        Rte_IrvWrite_PokeTTIR_dM_TCM_TrqGradLim_Lo_VeTTIR_dM_TCM_TrqGradLim_Lo_write_IRV
            (LeTTIR_dM_TCM_TrqGradLim_Lo);
        rtb_LeTTIR_b_TCM_TrqGradLim_Lo_FA_out_d = false;

        /* Transition: '<S80>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S38>/VeTTIR_dM_TCM_TrqGradLim_Lo_write' incorporates:
         *  Merge: '<Root>/Merge_36'
         */
        /* Transition: '<S80>:4' */
        Rte_IrvWrite_PokeTTIR_dM_TCM_TrqGradLim_Lo_VeTTIR_dM_TCM_TrqGradLim_Lo_write_IRV
            (KeTTIR_dM_TCM_TrqGradLim_Lo);
        rtb_LeTTIR_b_TCM_TrqGradLim_Lo_FA_out_d = true;
    }

    /* End of Chart: '<S38>/PokeTTIR_dM_TCM_TrqGradLim_LoChrt' */

    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLim_Lo_FA' incorporates:
     *  SignalConversion generated from: '<S38>/VeTTIR_b_TCM_TrqGradLim_Lo_FA'
     */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLim_Lo_FA_Value
        (rtb_LeTTIR_b_TCM_TrqGradLim_Lo_FA_out_d);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_dM_TCM_TrqGradLim_Lo' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_dM_TCM_TrqGradLim_Up(VAR(float32, AUTOMATIC)
    LeTTIR_dM_TCM_TrqGradLim_Up, VAR(boolean, AUTOMATIC)
    LeTTIR_b_TCM_TrqGradLim_Up_FA)
{
    boolean rtb_LeTTIR_b_TCM_TrqGradLim_Up_FA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_dM_TCM_TrqGradLim_Up' */
    /* Chart: '<S39>/PokeTTIR_dM_TCM_TrqGradLim_UpChrt' incorporates:
     *  SignalConversion generated from: '<S39>/LeTTIR_b_TCM_TrqGradLim_Lo_FA'
     */
    /* Gateway: PokeTTIR_dM_TCM_TrqGradLim_Up/PokeTTIR_dM_TCM_TrqGradLim_UpChrt */
    /* During: PokeTTIR_dM_TCM_TrqGradLim_Up/PokeTTIR_dM_TCM_TrqGradLim_UpChrt */
    /* Entry Internal: PokeTTIR_dM_TCM_TrqGradLim_Up/PokeTTIR_dM_TCM_TrqGradLim_UpChrt */
    /* Transition: '<S81>:2' */
    if (!LeTTIR_b_TCM_TrqGradLim_Up_FA)
    {
        /* SignalConversion generated from: '<S39>/VeTTIR_dM_TCM_TrqGradLim_Up_write' incorporates:
         *  Merge: '<Root>/Merge_37'
         *  SignalConversion generated from: '<S39>/LeTTIR_dM_TCM_TrqGradLim_Lo'
         */
        /* Transition: '<S81>:3' */
        /* Transition: '<S81>:15' */
        Rte_IrvWrite_PokeTTIR_dM_TCM_TrqGradLim_Up_VeTTIR_dM_TCM_TrqGradLim_Up_write_IRV
            (LeTTIR_dM_TCM_TrqGradLim_Up);
        rtb_LeTTIR_b_TCM_TrqGradLim_Up_FA_out_h = false;

        /* Transition: '<S81>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S39>/VeTTIR_dM_TCM_TrqGradLim_Up_write' incorporates:
         *  Merge: '<Root>/Merge_37'
         */
        /* Transition: '<S81>:4' */
        Rte_IrvWrite_PokeTTIR_dM_TCM_TrqGradLim_Up_VeTTIR_dM_TCM_TrqGradLim_Up_write_IRV
            (KeTTIR_dM_TCM_TrqGradLim_Up);
        rtb_LeTTIR_b_TCM_TrqGradLim_Up_FA_out_h = true;
    }

    /* End of Chart: '<S39>/PokeTTIR_dM_TCM_TrqGradLim_UpChrt' */

    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLim_Up_FA' incorporates:
     *  SignalConversion generated from: '<S39>/VeTTIR_b_TCM_TrqGradLim_Up_FA'
     */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLim_Up_FA_Value
        (rtb_LeTTIR_b_TCM_TrqGradLim_Up_FA_out_h);

    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_dM_TCM_TrqGradLim_Up' */
}

/* Output function */
FUNC(void, TTIR_CODE) PokeTTIR_dm_TorqLimGradient(VAR(float32, AUTOMATIC)
    LeTTIR_dm_TorqLimGradient, VAR(boolean, AUTOMATIC)
    LeTTIR_b_TorqLimGradientFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTTIR_dm_TorqLimGradient' */
    /* Chart: '<S40>/PokeTTIR_dm_TorqLimGradientChrt' incorporates:
     *  SignalConversion generated from: '<S40>/LeTTIR_b_TorqLimGradientFA'
     */
    /* Gateway: PokeTTIR_dm_TorqLimGradient/PokeTTIR_dm_TorqLimGradientChrt */
    /* During: PokeTTIR_dm_TorqLimGradient/PokeTTIR_dm_TorqLimGradientChrt */
    /* Entry Internal: PokeTTIR_dm_TorqLimGradient/PokeTTIR_dm_TorqLimGradientChrt */
    /* Transition: '<S82>:2' */
    if (!LeTTIR_b_TorqLimGradientFA)
    {
        /* SignalConversion generated from: '<S40>/VeTTIR_dm_TorqLimGradient_write' incorporates:
         *  Merge: '<Root>/Merge_9'
         *  SignalConversion generated from: '<S40>/LeTTIR_dm_TorqLimGradient'
         */
        /* Transition: '<S82>:3' */
        /* Transition: '<S82>:15' */
        Rte_IrvWrite_PokeTTIR_dm_TorqLimGradient_VeTTIR_dm_TorqLimGradient_write_IRV
            (LeTTIR_dm_TorqLimGradient);

        /* Transition: '<S82>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S40>/VeTTIR_dm_TorqLimGradient_write' incorporates:
         *  Merge: '<Root>/Merge_9'
         */
        /* Transition: '<S82>:4' */
        Rte_IrvWrite_PokeTTIR_dm_TorqLimGradient_VeTTIR_dm_TorqLimGradient_write_IRV
            (KeTTIR_dm_TrqLimGradientDflt);
    }

    /* End of Chart: '<S40>/PokeTTIR_dm_TorqLimGradientChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTTIR_dm_TorqLimGradient' */
}

/* Output function */
FUNC(void, TTIR_CODE) TTIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TTIR_PwrOn'
     */
    /* S-Function (fcgen): '<S42>/FcnCallGen' incorporates:
     *  SubSystem: '<S42>/Initialize_TTII_Comm_Inputs'
     */
    /* SignalConversion generated from: '<S158>/Comm_dm_TrqLimGradient_Init' incorporates:
     *  Constant: '<S192>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_dm_TrqLimGradient_I =
        KeTTIR_dm_TrqLimGradient_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_ILECreepTrq_Init' incorporates:
     *  Constant: '<S167>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_ILECreepTrq_Init =
        KeTTIR_M_ILECreepTrq_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_SumMaxTrqDsrd_Init' incorporates:
     *  Constant: '<S173>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_SumMaxTrqDsrd_Ini =
        KeTTIR_M_SumMaxTrqDsrd_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_SumMinTrqDsrd_Init' incorporates:
     *  Constant: '<S174>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_SumMinTrqDsrd_Ini =
        KeTTIR_M_SumMinTrqDsrd_Init;

    /* SignalConversion generated from: '<S158>/Comm_b_SumMaxTrqDsrdFA_Init' incorporates:
     *  Constant: '<S185>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_SumMaxTrqDsrdFA_I =
        KeTTIR_b_SumMaxTrqDsrdFA_Init;

    /* SignalConversion generated from: '<S158>/Comm_b_SumMinTrqDsrdFA_Init' incorporates:
     *  Constant: '<S186>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_SumMinTrqDsrdFA_I =
        KeTTIR_b_SumMinTrqDsrdFA_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_TCMSumTrqReqFast_Init' incorporates:
     *  Constant: '<S175>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_TCMSumTrqReqFast_ =
        KeTTIR_M_TCMSumTrqFast_Init;

    /* SignalConversion generated from: '<S158>/Comm_b_TCMSumTrqReqFastFA_Init' incorporates:
     *  Constant: '<S187>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_TCMSumTrqReqFastF =
        KeTTIR_b_TCMSumTrqFastFA_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_TCMSumTrqReqSlow_Init' incorporates:
     *  Constant: '<S176>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_TCMSumTrqReqSlow_ =
        KeTTIR_M_TCMSumTrqSlw_Init;

    /* SignalConversion generated from: '<S158>/Comm_b_TCMSumTrqReqSlowFA_Init' incorporates:
     *  Constant: '<S188>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_TCMSumTrqReqSlowF =
        KeTTIR_b_TCMSumTrqSlwFA_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_HASTrqK0_Init' incorporates:
     *  Constant: '<S166>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_HASTrqK0_Init = KeTTIR_M_HASTrqK0_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_K1TrqCapAct_Init' incorporates:
     *  Constant: '<S168>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_K1TrqCapAct_Init =
        KeTTIR_M_K1TrqCapAct_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_K1TrqCapLead_Init' incorporates:
     *  Constant: '<S169>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_K1TrqCapLead_Init =
        KeTTIR_M_K1TrqCapLead_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_HASTrqK0Lead_Init' incorporates:
     *  Constant: '<S165>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_HASTrqK0Lead_Init =
        KeTTIR_M_HASTrqK0Lead_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_TransIntakeTorq_Init' incorporates:
     *  Constant: '<S177>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_TransIntakeTorq_I =
        KeTTIR_M_TransIntakeTorq_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_MaxLmtAxleTrq_Init' incorporates:
     *  Constant: '<S170>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_MaxLmtAxleTrq_Ini =
        KeTTIR_M_MaxLmtAxleTrq_Init;

    /* SignalConversion generated from: '<S158>/Comm_b_MaxLmtAxleTrqFA_Init' incorporates:
     *  Constant: '<S183>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_MaxLmtAxleTrqFA_I =
        KeTTIR_b_MaxLmtAxleTrqFA_Init;

    /* SignalConversion generated from: '<S158>/Comm_M_MinLmtAxleTrq_Init' incorporates:
     *  Constant: '<S171>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_MinLmtAxleTrq_Ini =
        KeTTIR_M_MinLmtAxleTrq_Init;

    /* SignalConversion generated from: '<S158>/Comm_b_MinLmtAxleTrqFA_Init' incorporates:
     *  Constant: '<S184>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_MinLmtAxleTrqFA_I =
        KeTTIR_b_MinLmtAxleTrqFA_Init;

    /* SignalConversion generated from: '<S158>/COMM_M_WhlCreepTrq_Init' */
    TTIR_ac_B.OutportBufferForCOMM_M_WhlCreepTrq_Init = 0.0F;

    /* SignalConversion generated from: '<S158>/COMM_b_WhlCreepTrqFA_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_WhlCreepTrqFA_Ini = false;

    /* SignalConversion generated from: '<S158>/COMM_M_ClthStrRsrvTrq_Init' */
    TTIR_ac_B.OutportBufferForCOMM_M_ClthStrRsrvTrq_In = 0.0F;

    /* SignalConversion generated from: '<S158>/COMM_b_ClthStrRsrvTrqFA_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_ClthStrRsrvTrqFA_ = false;

    /* SignalConversion generated from: '<S158>/COMM_b_TCM_EngFSO_Allw_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_TCM_EngFSO_Allw_I = false;

    /* SignalConversion generated from: '<S158>/COMM_b_TCM_EngFSO_AllwFA_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_TCM_EngFSO_AllwFA = false;

    /* SignalConversion generated from: '<S158>/COMM_b_TCM_EngFSO_Rq_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_TCM_EngFSO_Rq_Ini = false;

    /* SignalConversion generated from: '<S158>/COMM_b_TCM_EngFSO_RqFA_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_TCM_EngFSO_RqFA_I = false;

    /* SignalConversion generated from: '<S158>/COMM_dM_TCM_TrqGradLim_Lo_write_Init' incorporates:
     *  Constant: '<S190>/Calib'
     */
    TTIR_ac_B.OutportBufferForCOMM_dM_TCM_TrqGradLim_L =
        KeTTIR_dM_TCM_TrqGradLim_Lo_Init;

    /* SignalConversion generated from: '<S158>/COMM_b_TCM_TrqGradLim_Lo_FA_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLim_Lo = false;

    /* SignalConversion generated from: '<S158>/COMM_dM_TCM_TrqGradLim_Up_write_Init' incorporates:
     *  Constant: '<S191>/Calib'
     */
    TTIR_ac_B.OutportBufferForCOMM_dM_TCM_TrqGradLim_U =
        KeTTIR_dM_TCM_TrqGradLim_Up_Init;

    /* SignalConversion generated from: '<S158>/COMM_b_TCM_TrqGradLim_Up_FA_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLim_Up = false;

    /* SignalConversion generated from: '<S158>/COMM_b_TCM_TrqGradLimActive_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLimAct = false;

    /* SignalConversion generated from: '<S158>/COMM_b_TCM_TrqGradLimActive_write_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLimA_h = false;

    /* SignalConversion generated from: '<S158>/COMM_b_TCM_TrqGradLimActive_FA_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLimA_g = false;

    /* SignalConversion generated from: '<S158>/COMM_M_PumpTrqOnImpShaft_Init' incorporates:
     *  Constant: '<S172>/Calib'
     */
    TTIR_ac_B.OutportBufferForCOMM_M_PumpTrqOnImpShaft =
        KeTTIR_M_PumpTrqOnImpShaft_Init;

    /* SignalConversion generated from: '<S158>/COMM_b_PumpTrqOnImpShaft_FA_Init' */
    TTIR_ac_B.OutportBufferForCOMM_b_PumpTrqOnImpShaft = false;

    /* S-Function (fcgen): '<S42>/FcnCallGen' incorporates:
     *  SubSystem: '<S42>/InitTTII_Output'
     */
    /* SignalConversion generated from: '<S157>/TTIR_M_TransTrqReqFst_Arb' */
    TTIR_ac_B.OutportBufferForTTIR_M_TransTrqReqFst_Ar = 0.0F;

    /* SignalConversion generated from: '<S157>/TTIR_b_TransTrqReqFst_RampActv' */
    TTIR_ac_B.OutportBufferForTTIR_b_TransTrqReqFst_Ra = false;

    /* SignalConversion generated from: '<S157>/TTIR_M_TransTrqReqSlw_Arb' */
    TTIR_ac_B.OutportBufferForTTIR_M_TransTrqReqSlw_Ar = 0.0F;

    /* SignalConversion generated from: '<S157>/TTIR_b_TransTrqReqSlw_RampActv' */
    TTIR_ac_B.OutportBufferForTTIR_b_TransTrqReqSlw_Ra = false;

    /* SignalConversion generated from: '<S157>/TTIC_M_TransIntakeTorq' */
    TTIR_ac_B.OutportBufferForTTIC_M_TransIntakeTorq = 0.0F;

    /* SignalConversion generated from: '<S157>/TTIR_b_TransTrqReqSlw_Pass' */
    TTIR_ac_B.OutportBufferForTTIR_b_TransTrqReqSlw_Pa = false;

    /* SignalConversion generated from: '<S157>/TTIR_e_TCMTrqCtrlMdFstDTRRSync' incorporates:
     *  Constant: '<S160>/Constant'
     */
    TTIR_ac_B.OutportBufferForTTIR_e_TCMTrqCtrlMdFstDT = TTIR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S157>/TCM_TrqGradLim_Lo_out_Init' incorporates:
     *  Constant: '<S161>/Calib'
     */
    TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Lo_out_In =
        KeTTIR_dM_TCM_TrqGradLim_Lo_Init;

    /* SignalConversion generated from: '<S157>/TCM_TrqGradLim_Up_out_Init' incorporates:
     *  Constant: '<S162>/Calib'
     */
    TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Up_out_In =
        KeTTIR_dM_TCM_TrqGradLim_Up_Init;

    /* SignalConversion generated from: '<S157>/TCM_TrqGradLim_Lo_Axle_out_Init' incorporates:
     *  Constant: '<S163>/Calib'
     */
    TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Lo_Axle_o =
        KeTTIR_dM_TCM_TrqGradLim_Lo_Axle_Init;

    /* SignalConversion generated from: '<S157>/TCM_TrqGradLim_Up_Axle_out_Init' incorporates:
     *  Constant: '<S164>/Calib'
     */
    TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Up_Axle_o =
        KeTTIR_dM_TCM_TrqGradLim_Up_Axle_Init;

    /* S-Function (fcgen): '<S42>/FcnCallGen' incorporates:
     *  SubSystem: '<S42>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S159>/VeTTIR_dM_TorqLimGradient_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_dM_TorqLimGradien = 0.0F;

    /* SignalConversion generated from: '<S159>/VeTTIR_b_TransTrqReqFst_Pass_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_b_TransTrqReqFst_ = false;

    /* SignalConversion generated from: '<S159>/VeTTIR_M_MaxLmtAxleTrq_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_M_MaxLmtAxleTrq_O = 0.0F;

    /* SignalConversion generated from: '<S159>/VeTTIR_M_MinLmtAxleTrq_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_M_MinLmtAxleTrq_O = 0.0F;

    /* SignalConversion generated from: '<S159>/VeTTIR_M_ClthStrRsrvTrq_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_M_ClthStrRsrvTrq_ = 0.0F;

    /* SignalConversion generated from: '<S159>/VeTTIR_M_SumMaxTorqDsrdRaw_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_M_SumMaxTorqDsrdR = 0.0F;

    /* SignalConversion generated from: '<S159>/VeTTIR_b_SumMaxTrqDsrdFA_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_b_SumMaxTrqDsrdFA = false;

    /* SignalConversion generated from: '<S159>/VeTTIR_M_K1TrqCapAct_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_M_K1TrqCapAct_Out = 0.0F;

    /* SignalConversion generated from: '<S159>/VeTTIR_M_K1TrqCapLead_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_M_K1TrqCapLead_Ou = 0.0F;

    /* SignalConversion generated from: '<S159>/VeTTIR_M_HASTrqK0Lead_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_M_HASTrqK0Lead_Ou = 0.0F;

    /* SignalConversion generated from: '<S159>/VeTTIR_M_SumMinTorqDsrdRaw_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_M_SumMinTorqDsrdR = 0.0F;

    /* SignalConversion generated from: '<S159>/VeTTIR_b_SumMinTrqDsrdFA_Out_Init' */
    TTIR_ac_B.OutportBufferForVeTTIR_b_SumMinTrqDsrdFA = false;

    /* End of Outputs for S-Function (fcgen): '<S42>/FcnCallGen' */

    /* Outport: '<Root>/VeTTIR_M_PumpTrqOnImpShaft' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_M_PumpTrqOnImpShaft_Init'
     */
    (void)Rte_Write_VeTTIR_M_PumpTrqOnImpShaft_Value
        (TTIR_ac_B.OutportBufferForCOMM_M_PumpTrqOnImpShaft);

    /* Outport: '<Root>/VeTTIR_M_WhlCreepTrq' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_M_WhlCreepTrq_Init'
     */
    (void)Rte_Write_VeTTIR_M_WhlCreepTrq_Value
        (TTIR_ac_B.OutportBufferForCOMM_M_WhlCreepTrq_Init);

    /* Outport: '<Root>/VeTTIR_b_ClthStrRsrvTrqFA' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_ClthStrRsrvTrqFA_Init'
     */
    (void)Rte_Write_VeTTIR_b_ClthStrRsrvTrqFA_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_ClthStrRsrvTrqFA_);

    /* Outport: '<Root>/VeTTIR_b_PumpTrqOnImpShaft_FA' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_PumpTrqOnImpShaft_FA_Init'
     */
    (void)Rte_Write_VeTTIR_b_PumpTrqOnImpShaft_FA_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_PumpTrqOnImpShaft);

    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Allw_FA' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_TCM_EngFSO_AllwFA_Init'
     */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Allw_FA_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_TCM_EngFSO_AllwFA);

    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Allw' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_TCM_EngFSO_Allw_Init'
     */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Allw_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_TCM_EngFSO_Allw_I);

    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Rq_FA' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_TCM_EngFSO_RqFA_Init'
     */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Rq_FA_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_TCM_EngFSO_RqFA_I);

    /* Outport: '<Root>/VeTTIR_b_TCM_EngFSO_Rq' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_TCM_EngFSO_Rq_Init'
     */
    (void)Rte_Write_VeTTIR_b_TCM_EngFSO_Rq_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_TCM_EngFSO_Rq_Ini);

    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLimActive_FA' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_TCM_TrqGradLimActive_FA_Init'
     */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLimActive_FA_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLimA_g);

    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLimActive' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_TCM_TrqGradLimActive_Init'
     */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLimActive_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLimAct);

    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLim_Lo_FA' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_TCM_TrqGradLim_Lo_FA_Init'
     */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLim_Lo_FA_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLim_Lo);

    /* Outport: '<Root>/VeTTIR_b_TCM_TrqGradLim_Up_FA' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_TCM_TrqGradLim_Up_FA_Init'
     */
    (void)Rte_Write_VeTTIR_b_TCM_TrqGradLim_Up_FA_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLim_Up);

    /* Outport: '<Root>/VeTTIR_b_WhlCreepTrqFA' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_WhlCreepTrqFA_Init'
     */
    (void)Rte_Write_VeTTIR_b_WhlCreepTrqFA_Value
        (TTIR_ac_B.OutportBufferForCOMM_b_WhlCreepTrqFA_Ini);

    /* Outport: '<Root>/VeTTIR_M_HASTrqK0' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_HASTrqK0_Init'
     */
    (void)Rte_Write_VeTTIR_M_HASTrqK0_Value
        (TTIR_ac_B.OutportBufferForComm_M_HASTrqK0_Init);

    /* Outport: '<Root>/VeTTIR_M_ILECreepTrq' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_ILECreepTrq_Init'
     */
    (void)Rte_Write_VeTTIR_M_ILECreepTrq_Value
        (TTIR_ac_B.OutportBufferForComm_M_ILECreepTrq_Init);

    /* Outport: '<Root>/VeTTIR_b_MaxLmtAxleTrqFA' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_b_MaxLmtAxleTrqFA_Init'
     */
    (void)Rte_Write_VeTTIR_b_MaxLmtAxleTrqFA_Value
        (TTIR_ac_B.OutportBufferForComm_b_MaxLmtAxleTrqFA_I);

    /* Outport: '<Root>/VeTTIR_b_MinLmtAxleTrqFA' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_b_MinLmtAxleTrqFA_Init'
     */
    (void)Rte_Write_VeTTIR_b_MinLmtAxleTrqFA_Value
        (TTIR_ac_B.OutportBufferForComm_b_MinLmtAxleTrqFA_I);

    /* Outport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Lo_Axle' incorporates:
     *  SignalConversion generated from: '<S42>/TCM_TrqGradLim_Lo_Axle_out_Init'
     */
    (void)Rte_Write_VeTTIR_dM_TCM_TrqGradLim_Lo_Axle_Value
        (TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Lo_Axle_o);

    /* Outport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Lo' incorporates:
     *  SignalConversion generated from: '<S42>/TCM_TrqGradLim_Lo_out_Init'
     */
    (void)Rte_Write_VeTTIR_dM_TCM_TrqGradLim_Lo_Value
        (TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Lo_out_In);

    /* Outport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Up_Axle' incorporates:
     *  SignalConversion generated from: '<S42>/TCM_TrqGradLim_Up_Axle_out_Init'
     */
    (void)Rte_Write_VeTTIR_dM_TCM_TrqGradLim_Up_Axle_Value
        (TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Up_Axle_o);

    /* Outport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Up' incorporates:
     *  SignalConversion generated from: '<S42>/TCM_TrqGradLim_Up_out_Init'
     */
    (void)Rte_Write_VeTTIR_dM_TCM_TrqGradLim_Up_Value
        (TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Up_out_In);

    /* Outport: '<Root>/VeTTIR_M_TransIntakeTorq' incorporates:
     *  SignalConversion generated from: '<S42>/TTIC_M_TransIntakeTorq'
     */
    (void)Rte_Write_VeTTIR_M_TransIntakeTorq_Value
        (TTIR_ac_B.OutportBufferForTTIC_M_TransIntakeTorq);

    /* Outport: '<Root>/VeTTIR_M_TransTrqReqFst_Arb' incorporates:
     *  SignalConversion generated from: '<S42>/TTIR_M_TransTrqReqFst_Arb'
     */
    (void)Rte_Write_VeTTIR_M_TransTrqReqFst_Arb_Value
        (TTIR_ac_B.OutportBufferForTTIR_M_TransTrqReqFst_Ar);

    /* Outport: '<Root>/VeTTIR_M_TransTrqReqSlw_Arb' incorporates:
     *  SignalConversion generated from: '<S42>/TTIR_M_TransTrqReqSlw_Arb'
     */
    (void)Rte_Write_VeTTIR_M_TransTrqReqSlw_Arb_Value
        (TTIR_ac_B.OutportBufferForTTIR_M_TransTrqReqSlw_Ar);

    /* Outport: '<Root>/VeTTIR_b_TransTrqReqFst_RampActv' incorporates:
     *  SignalConversion generated from: '<S42>/TTIR_b_TransTrqReqFst_RampActv'
     */
    (void)Rte_Write_VeTTIR_b_TransTrqReqFst_RampActv_Value
        (TTIR_ac_B.OutportBufferForTTIR_b_TransTrqReqFst_Ra);

    /* Outport: '<Root>/VeTTIR_b_TransTrqReqSlw_Pass' incorporates:
     *  SignalConversion generated from: '<S42>/TTIR_b_TransTrqReqSlw_Pass'
     */
    (void)Rte_Write_VeTTIR_b_TransTrqReqSlw_Pass_Value
        (TTIR_ac_B.OutportBufferForTTIR_b_TransTrqReqSlw_Pa);

    /* Outport: '<Root>/VeTTIR_b_TransTrqReqSlw_RampActv' incorporates:
     *  SignalConversion generated from: '<S42>/TTIR_b_TransTrqReqSlw_RampActv'
     */
    (void)Rte_Write_VeTTIR_b_TransTrqReqSlw_RampActv_Value
        (TTIR_ac_B.OutportBufferForTTIR_b_TransTrqReqSlw_Ra);

    /* Outport: '<Root>/VeTTIR_e_TCMTrqCtrlMdFstDTRRSync' incorporates:
     *  SignalConversion generated from: '<S157>/TTIR_e_TCMTrqCtrlMdFstDTRRSync'
     *  SignalConversion generated from: '<S42>/TTIR_e_TCMTrqCtrlMdFstDTRRSync'
     */
    (void)Rte_Write_VeTTIR_e_TCMTrqCtrlMdFstDTRRSync_Value
        (TTIR_ac_B.OutportBufferForTTIR_e_TCMTrqCtrlMdFstDT);

    /* Outport: '<Root>/VeTTIR_M_ClthStrRsrvTrq' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_M_ClthStrRsrvTrq_Out_Init'
     */
    (void)Rte_Write_VeTTIR_M_ClthStrRsrvTrq_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_M_ClthStrRsrvTrq_);

    /* Outport: '<Root>/VeTTIR_M_HASTrqK0Lead' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_M_HASTrqK0Lead_Out_Init'
     */
    (void)Rte_Write_VeTTIR_M_HASTrqK0Lead_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_M_HASTrqK0Lead_Ou);

    /* Outport: '<Root>/VeTTIR_M_K1TrqCapAct' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_M_K1TrqCapAct_Out_Init'
     */
    (void)Rte_Write_VeTTIR_M_K1TrqCapAct_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_M_K1TrqCapAct_Out);

    /* Outport: '<Root>/VeTTIR_M_K1TrqCapLead' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_M_K1TrqCapLead_Out_Init'
     */
    (void)Rte_Write_VeTTIR_M_K1TrqCapLead_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_M_K1TrqCapLead_Ou);

    /* Outport: '<Root>/VeTTIR_M_MaxLmtAxleTrq' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_M_MaxLmtAxleTrq_Out_Init'
     */
    (void)Rte_Write_VeTTIR_M_MaxLmtAxleTrq_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_M_MaxLmtAxleTrq_O);

    /* Outport: '<Root>/VeTTIR_M_MinLmtAxleTrq' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_M_MinLmtAxleTrq_Out_Init'
     */
    (void)Rte_Write_VeTTIR_M_MinLmtAxleTrq_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_M_MinLmtAxleTrq_O);

    /* Outport: '<Root>/VeTTIR_M_SumMaxTorqDsrdRaw' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_M_SumMaxTorqDsrdRaw_Out_Init'
     */
    (void)Rte_Write_VeTTIR_M_SumMaxTorqDsrdRaw_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_M_SumMaxTorqDsrdR);

    /* Outport: '<Root>/VeTTIR_M_SumMinTorqDsrdRaw' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_M_SumMinTorqDsrdRaw_Out_Init'
     */
    (void)Rte_Write_VeTTIR_M_SumMinTorqDsrdRaw_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_M_SumMinTorqDsrdR);

    /* Outport: '<Root>/VeTTIR_b_SumMaxTrqDsrdFA' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_b_SumMaxTrqDsrdFA_Out_Init'
     */
    (void)Rte_Write_VeTTIR_b_SumMaxTrqDsrdFA_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_b_SumMaxTrqDsrdFA);

    /* Outport: '<Root>/VeTTIR_b_SumMinTrqDsrdFA' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_b_SumMinTrqDsrdFA_Out_Init'
     */
    (void)Rte_Write_VeTTIR_b_SumMinTrqDsrdFA_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_b_SumMinTrqDsrdFA);

    /* Outport: '<Root>/VeTTIR_b_TransTrqReqFst_Pass' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_b_TransTrqReqFst_Pass_Out_Init'
     */
    (void)Rte_Write_VeTTIR_b_TransTrqReqFst_Pass_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_b_TransTrqReqFst_);

    /* Outport: '<Root>/VeTTIR_dM_TorqLimGradient' incorporates:
     *  SignalConversion generated from: '<S42>/VeTTIR_dM_TorqLimGradient_Out_Init'
     */
    (void)Rte_Write_VeTTIR_dM_TorqLimGradient_Value
        (TTIR_ac_B.OutportBufferForVeTTIR_dM_TorqLimGradien);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_M_ClthStrRsrvTrq_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_ClthStrRsrvTrq_write_IRV
        (TTIR_ac_B.OutportBufferForCOMM_M_ClthStrRsrvTrq_In);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_b_TCM_TrqGradLimActive_write_Init'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_b_TCM_TrqGradLimActive_write_IRV
        (TTIR_ac_B.OutportBufferForCOMM_b_TCM_TrqGradLimA_h);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_dM_TCM_TrqGradLim_Lo_write_Init'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_dM_TCM_TrqGradLim_Lo_write_IRV
        (TTIR_ac_B.OutportBufferForCOMM_dM_TCM_TrqGradLim_L);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S42>/COMM_dM_TCM_TrqGradLim_Up_write_Init'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_dM_TCM_TrqGradLim_Up_write_IRV
        (TTIR_ac_B.OutportBufferForCOMM_dM_TCM_TrqGradLim_U);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_HASTrqK0Lead_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_HASTrqK0Lead_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_HASTrqK0Lead_Init);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_K1TrqCapAct_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_K1TrqCapAct_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_K1TrqCapAct_Init);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_K1TrqCapLead_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_K1TrqCapLead_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_K1TrqCapLead_Init);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_MaxLmtAxleTrq_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_MaxLmtAxleTrq_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_MaxLmtAxleTrq_Ini);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_MinLmtAxleTrq_Init'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_MinLmtAxleTrq_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_MinLmtAxleTrq_Ini);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_SumMaxTrqDsrd_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_SumMaxTrqDsrd_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_SumMaxTrqDsrd_Ini);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_SumMinTrqDsrd_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_SumMinTrqDsrd_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_SumMinTrqDsrd_Ini);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_TCMSumTrqReqFast_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_TCMSumTrqReqFast_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_TCMSumTrqReqFast_);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_TCMSumTrqReqSlow_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_TCMSumTrqReqSlow_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_TCMSumTrqReqSlow_);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_M_TransIntakeTorq_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_M_TransIntakeTorq_write_IRV
        (TTIR_ac_B.OutportBufferForComm_M_TransIntakeTorq_I);

    /* Merge: '<Root>/Merge_10_Irv' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_b_MaxLmtAxleTrqFA_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_b_MaxLmtAxleTrqFA_write_IRV
        (TTIR_ac_B.OutportBufferForComm_b_MaxLmtAxleTrqFA_I);

    /* Merge: '<Root>/Merge_10_Irv1' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_b_MinLmtAxleTrqFA_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_b_MinLmtAxleTrqFA_write_IRV
        (TTIR_ac_B.OutportBufferForComm_b_MinLmtAxleTrqFA_I);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_b_SumMaxTrqDsrdFA_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_b_SumMaxTrqDsrdFA_write_IRV
        (TTIR_ac_B.OutportBufferForComm_b_SumMaxTrqDsrdFA_I);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_b_SumMinTrqDsrdFA_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_b_SumMinTrqDsrdFA_write_IRV
        (TTIR_ac_B.OutportBufferForComm_b_SumMinTrqDsrdFA_I);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_b_TCMSumTrqReqFastFA_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_b_TCMSumTrqReqFastFA_write_IRV
        (TTIR_ac_B.OutportBufferForComm_b_TCMSumTrqReqFastF);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_b_TCMSumTrqReqSlowFA_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_b_TCMSumTrqReqSlowFA_write_IRV
        (TTIR_ac_B.OutportBufferForComm_b_TCMSumTrqReqSlowF);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S42>/Comm_dm_TrqLimGradient_Init_write'
     * */
    Rte_IrvWrite_TTIR_PwrOn_VeTTIR_dm_TorqLimGradient_write_IRV
        (TTIR_ac_B.OutportBufferForComm_dm_TrqLimGradient_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TTIR_CODE) TTIR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TTIR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S42>/FcnCallGen' incorporates:
     *  SubSystem: '<S42>/Initialize_TTII_Comm_Inputs'
     */
    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_dm_TrqLimGradient_Init' incorporates:
     *  Constant: '<S192>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_dm_TrqLimGradient_I =
        KeTTIR_dm_TrqLimGradient_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_ILECreepTrq_Init' incorporates:
     *  Constant: '<S167>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_ILECreepTrq_Init =
        KeTTIR_M_ILECreepTrq_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_SumMaxTrqDsrd_Init' incorporates:
     *  Constant: '<S173>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_SumMaxTrqDsrd_Ini =
        KeTTIR_M_SumMaxTrqDsrd_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_SumMinTrqDsrd_Init' incorporates:
     *  Constant: '<S174>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_SumMinTrqDsrd_Ini =
        KeTTIR_M_SumMinTrqDsrd_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_b_SumMaxTrqDsrdFA_Init' incorporates:
     *  Constant: '<S185>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_SumMaxTrqDsrdFA_I =
        KeTTIR_b_SumMaxTrqDsrdFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_b_SumMinTrqDsrdFA_Init' incorporates:
     *  Constant: '<S186>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_SumMinTrqDsrdFA_I =
        KeTTIR_b_SumMinTrqDsrdFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_TCMSumTrqReqFast_Init' incorporates:
     *  Constant: '<S175>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_TCMSumTrqReqFast_ =
        KeTTIR_M_TCMSumTrqFast_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_b_TCMSumTrqReqFastFA_Init' incorporates:
     *  Constant: '<S187>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_TCMSumTrqReqFastF =
        KeTTIR_b_TCMSumTrqFastFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_TCMSumTrqReqSlow_Init' incorporates:
     *  Constant: '<S176>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_TCMSumTrqReqSlow_ =
        KeTTIR_M_TCMSumTrqSlw_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_b_TCMSumTrqReqSlowFA_Init' incorporates:
     *  Constant: '<S188>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_TCMSumTrqReqSlowF =
        KeTTIR_b_TCMSumTrqSlwFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_HASTrqK0_Init' incorporates:
     *  Constant: '<S166>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_HASTrqK0_Init = KeTTIR_M_HASTrqK0_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_K1TrqCapAct_Init' incorporates:
     *  Constant: '<S168>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_K1TrqCapAct_Init =
        KeTTIR_M_K1TrqCapAct_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_K1TrqCapLead_Init' incorporates:
     *  Constant: '<S169>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_K1TrqCapLead_Init =
        KeTTIR_M_K1TrqCapLead_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_HASTrqK0Lead_Init' incorporates:
     *  Constant: '<S165>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_HASTrqK0Lead_Init =
        KeTTIR_M_HASTrqK0Lead_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_TransIntakeTorq_Init' incorporates:
     *  Constant: '<S177>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_TransIntakeTorq_I =
        KeTTIR_M_TransIntakeTorq_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_MaxLmtAxleTrq_Init' incorporates:
     *  Constant: '<S170>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_MaxLmtAxleTrq_Ini =
        KeTTIR_M_MaxLmtAxleTrq_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_b_MaxLmtAxleTrqFA_Init' incorporates:
     *  Constant: '<S183>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_MaxLmtAxleTrqFA_I =
        KeTTIR_b_MaxLmtAxleTrqFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_M_MinLmtAxleTrq_Init' incorporates:
     *  Constant: '<S171>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_M_MinLmtAxleTrq_Ini =
        KeTTIR_M_MinLmtAxleTrq_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/Comm_b_MinLmtAxleTrqFA_Init' incorporates:
     *  Constant: '<S184>/Calib'
     */
    TTIR_ac_B.OutportBufferForComm_b_MinLmtAxleTrqFA_I =
        KeTTIR_b_MinLmtAxleTrqFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/COMM_dM_TCM_TrqGradLim_Lo_write_Init' incorporates:
     *  Constant: '<S190>/Calib'
     */
    TTIR_ac_B.OutportBufferForCOMM_dM_TCM_TrqGradLim_L =
        KeTTIR_dM_TCM_TrqGradLim_Lo_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/COMM_dM_TCM_TrqGradLim_Up_write_Init' incorporates:
     *  Constant: '<S191>/Calib'
     */
    TTIR_ac_B.OutportBufferForCOMM_dM_TCM_TrqGradLim_U =
        KeTTIR_dM_TCM_TrqGradLim_Up_Init;

    /* SystemInitialize for SignalConversion generated from: '<S158>/COMM_M_PumpTrqOnImpShaft_Init' incorporates:
     *  Constant: '<S172>/Calib'
     */
    TTIR_ac_B.OutportBufferForCOMM_M_PumpTrqOnImpShaft =
        KeTTIR_M_PumpTrqOnImpShaft_Init;

    /* SystemInitialize for S-Function (fcgen): '<S42>/FcnCallGen' incorporates:
     *  SubSystem: '<S42>/InitTTII_Output'
     */
    /* SystemInitialize for SignalConversion generated from: '<S157>/TTIR_e_TCMTrqCtrlMdFstDTRRSync' incorporates:
     *  Constant: '<S160>/Constant'
     */
    TTIR_ac_B.OutportBufferForTTIR_e_TCMTrqCtrlMdFstDT = TTIR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S157>/TCM_TrqGradLim_Lo_out_Init' incorporates:
     *  Constant: '<S161>/Calib'
     */
    TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Lo_out_In =
        KeTTIR_dM_TCM_TrqGradLim_Lo_Init;

    /* SystemInitialize for SignalConversion generated from: '<S157>/TCM_TrqGradLim_Up_out_Init' incorporates:
     *  Constant: '<S162>/Calib'
     */
    TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Up_out_In =
        KeTTIR_dM_TCM_TrqGradLim_Up_Init;

    /* SystemInitialize for SignalConversion generated from: '<S157>/TCM_TrqGradLim_Lo_Axle_out_Init' incorporates:
     *  Constant: '<S163>/Calib'
     */
    TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Lo_Axle_o =
        KeTTIR_dM_TCM_TrqGradLim_Lo_Axle_Init;

    /* SystemInitialize for SignalConversion generated from: '<S157>/TCM_TrqGradLim_Up_Axle_out_Init' incorporates:
     *  Constant: '<S164>/Calib'
     */
    TTIR_ac_B.OutportBufferForTCM_TrqGradLim_Up_Axle_o =
        KeTTIR_dM_TCM_TrqGradLim_Up_Axle_Init;

    /* End of SystemInitialize for S-Function (fcgen): '<S42>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeTTIR_e_TCMTrqCtrlMdFstDTRRSync' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    (void)Rte_Write_VeTTIR_e_TCMTrqCtrlMdFstDTRRSync_Value(CeTINR_e_None);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
