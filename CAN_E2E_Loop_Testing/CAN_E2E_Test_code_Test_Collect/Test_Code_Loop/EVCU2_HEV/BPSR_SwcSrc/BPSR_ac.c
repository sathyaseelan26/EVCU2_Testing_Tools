/*
 * File: BPSR_ac.c
 *
 * Code generated for Simulink model 'BPSR_ac'.
 *
 * Model version                  : 9.59
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:09:22 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BPSR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_BPSR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) HeBPSD_t_MedTEB = 0.01F;/* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(sint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkApplTestFltCtrIMax =
    5;                                 /* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(sint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkApplTestFltCtrInc = 1;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(sint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkNotAppOutRngCntrInc =
    1;                                 /* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(sint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkNotAppOutRngMaxCntr =
    5;                                 /* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkNotAppRngDebSamples =
    25U;                               /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkPdlLvlOneFailLmt =
    30U;                               /* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkPdlLvlOneSmplLmt =
    50U;                               /* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkPdlMstrFailLmt = 30U;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkPdlMstrSmplLmt = 50U;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint16, BPSR_VAR_INIT) KeBPSD_Cnt_BrkPdlSenVoltRngDebnc =
    10U;                               /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint8, BPSR_VAR_INIT) KeBPSD_Cnt_BrkPdlSensorSWMaxSample =
    5U;                                /* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint8, BPSR_VAR_INIT) KeBPSD_Cnt_LrnRestMaxFailCntr = 3U;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint8, BPSR_VAR_INIT) KeBPSD_Cnt_LrnRestMaxFailCntrInc =
    1U;                                /* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint8, BPSR_VAR_INIT) KeBPSD_Cnt_LrnRestMaxIndxCnt = 2U;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint8, BPSR_VAR_INIT) KeBPSD_Cnt_LrnRestMinCnts = 2U;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint8, BPSR_VAR_INIT) KeBPSD_Cnt_LrnRestPosMaxCnts = 20U;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_BrkAppDeltaHi = 0.2F;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_BrkAppDeltaLo = 0.2F;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_BrkNotAppDeltaHi = 0.2F;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_BrkNotAppDeltaLo = 0.2F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_BrkPdlSensorHH = 4.35F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_BrkPdlSensorLL = 0.5F;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_LrnRestMaxDelta = 0.1F;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_LrnRestPosHi = 1.0F;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_LrnRestPosLo = 0.6F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_U_LrndBrkPdlSW1Pos = 1.3F;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_BrkApplModeSelect = 0;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_BrkPdlPosSnsrCktHiEnblDTC
    = 0;                               /* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_BrkPdlPosSnsrCktLoEnblDTC
    = 0;                               /* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_BrkPdlPosSnsrPerfEnblDTC =
    0;                                 /* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_DiagSystemReenable = 0;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_PostCodeClrDiagDsbl = 0;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_SenLv1HiFailFlgEnblOvrr =
    0;                                 /* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_SenLv1HiFailFlgOverride =
    0;                                 /* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_SenLv1LoFailFlgEnblOvrr =
    0;                                 /* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_SenLv1LoFailFlgOverride =
    0;                                 /* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_SenMstrFailFlgEnable = 0;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_SenMstrFailFlgEnblOvrr =
    0;                                 /* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSD_b_SenMstrFailFlgOverride =
    0;                                 /* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSD_t_LrnRestWindTime = 0.2F;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSI_U_InitLrndBrkPdlRestPos =
    0.72F;                             /* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(uint16, BPSR_VAR_INIT) KeBPSR_Cnt_BrkStsNotApplDebSamples =
    50U;                               /* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSR_Pct_AccelPdlPosThresh =
    20.0F;                             /* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSR_T_AmbTempHi = 40.0F;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSR_T_AmbTempLo = 10.0F;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSR_U_BrakePdlDeltVoltOvrr =
    0.0F;                              /* Referenced by: '<S21>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSR_U_BrakePedal_VoltRaw_Dflt =
    0.0F;                              /* Referenced by:
                                        * '<S4>/FsftBPSR_U_BrakePedal_VoltRawChrt'
                                        * '<S6>/PokeBPSR_U_BrakePedal_VoltRawChrt'
                                        */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSR_U_CalBrkPdlRestPos = 0.8F;/* Referenced by: '<S22>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSR_a_VehAccelThresh = 0.4F;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSR_b_BrakePdlDeltVoltEnblOvrr =
    0;                                 /* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSR_b_BrakeSrcInputSelect = 0;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT)
    KeBPSR_b_BrkPdlPosSnsrCktHi_LtchEnbl = 0;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT)
    KeBPSR_b_BrkPdlPosSnsrCktLo_LtchEnbl = 0;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT)
    KeBPSR_b_BrkPdlPosSnsrPerf_LtchEnbl = 0;/* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSR_b_UseBrkSW = 0;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSR_b_UseCalBrkPdlRestPos = 0;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(boolean, BPSR_VAR_INIT) KeBPSR_b_UseQickLrnRestPos = 0;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSR_k_BrkPdlSensorFiltCnst =
    0.8F;                              /* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KeBPSR_v_VehSpdThresh = 15.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KtBPSR_Pct_SenTransferFunc[7] =
{
    0.0F, 0.2F, 0.4F, 0.6F, 0.8F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S28>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KtBPSR_U_BrkSWRngLimit[7] =
{
    0.7F, 1.0F, 2.0F, 3.0F, 4.0F, 4.3F, 4.3F
} ;                                    /* Referenced by: '<S29>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KtBPSR_U_VolTransferFunc[7] =
{
    0.0F, 0.9F, 1.7F, 2.7F, 3.6F, 4.4F, 5.0F
} ;                                    /* Referenced by: '<S13>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KtBPSR_k_BrkSWFiltCnst[7] =
{
    0.0F, 0.01F, 0.03F, 0.05F, 0.1F, 0.2F, 0.3F
} ;                                    /* Referenced by: '<S30>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KtBPSR_k_BrkVoltFltCoeff[72] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.001F, 0.001F, 0.05F, 0.08F, 0.1F,
    0.15F, 0.2F, 0.4F, 0.7F, 0.001F, 0.001F, 0.05F, 0.08F, 0.1F, 0.15F, 0.2F,
    0.4F, 0.7F, 0.001F, 0.001F, 0.05F, 0.08F, 0.1F, 0.15F, 0.2F, 0.4F, 0.7F
} ;                                    /* Referenced by: '<S31>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KxBPSR_Pct_SenTransferFunc[7] =
{
    0.0F, 0.9F, 1.7F, 2.7F, 3.6F, 4.4F, 5.0F
} ;                                    /* Referenced by: '<S28>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KxBPSR_U_BrkSWRngLimit[7] =
{
    0.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S29>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KxBPSR_U_VolTransferFunc[7] =
{
    0.0F, 5.0F, 8.0F, 12.0F, 15.0F, 18.0F, 20.0F
} ;                                    /* Referenced by: '<S13>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KxBPSR_k_BrkSWFiltCnst[7] =
{
    0.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S30>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KxBPSR_k_BrkVoltFltCoeff[9] =
{
    0.0F, 11.0F, 22.0F, 31.0F, 42.0F, 51.0F, 62.0F, 71.0F, 82.0F
} ;                                    /* Referenced by: '<S31>/Vector' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static volatile CONST(float32, BPSR_VAR_INIT) KyBPSR_k_BrkVoltFltCoeff[8] =
{
    -1.0F, -0.8F, -0.1F, -0.01F, -0.001F, -0.0001F, 0.0F, 0.1F
} ;                                    /* Referenced by: '<S31>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_BPSR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, BPSR_VAR_INIT) EeBPSR_U_LrndBrkPdlRestPos;/* '<Root>/DSM_1' */

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VaBPSD_U_BrkApplTestArray[10];/* '<S70>/BrakeAppliedTestChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VaBPSD_U_LrnRestPosArray[20];/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VaBPSD_U_LrnRestPosAvgArray[20];/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSC_U_BrakePdlDeltVolt;/* '<S10>/MinMax1' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSC_U_BrakePdlDeltVoltFilt;/* '<S10>/Switch4' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSC_U_BrkPdlDeltVoltReq;/* '<S10>/Switch' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSC_U_BrkSWSimVolt;/* '<S10>/Product1' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSC_b_BrkPedalSW;/* '<S10>/Merge' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSC_b_BrkStsNotApp;/* '<S48>/AND' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSC_b_BrkStsNotAppImd;/* '<S15>/Logical1' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(TeBPSR_e_BrakeStatus, BPSR_VAR_INIT) VeBPSC_e_BrakeStatus;/* '<S15>/Merge' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSC_v_UnsgndVehicleSpeed;/* '<S32>/Switch' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(sint16, BPSR_VAR_INIT) VeBPSD_Cnt_BrkApplTestArrayIndex;/* '<S70>/BrakeAppliedTestChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(sint16, BPSR_VAR_INIT) VeBPSD_Cnt_BrkNotAppFailCntr;/* '<S90>/Switch' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(sint16, BPSR_VAR_INIT) VeBPSD_Cnt_LrnRestPosArrayIndex;/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(sint16, BPSR_VAR_INIT) VeBPSD_Cnt_LrnRestPosAvgArrayIndex;/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(sint16, BPSR_VAR_INIT) VeBPSD_Cnt_LrnRestPosFailCntr;/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(uint16, BPSR_VAR_INIT) VeBPSD_Cnt_SenVoltRngCheck;/* '<S177>/Switch' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSD_U_BrkApplTestArraySum;/* '<S70>/BrakeAppliedTestChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSD_U_BrkApplTestAvg;/* '<S70>/BrakeAppliedTestChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSD_U_LrnRestPosAvg;/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSD_U_LrndBrkPdlRestPos;/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkApplTestFailed;/* '<S70>/BrakeAppliedTestChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(sint16, BPSR_VAR_INIT) VeBPSD_b_BrkApplTestFailedCntr;/* '<S70>/BrakeAppliedTestChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkNotAppFail;/* '<S91>/OR2' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkNotAppIntRange;/* '<S51>/Logical2' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkNotAppOutRng;/* '<S51>/Logical4' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkPdlPosFltLV1;/* '<S113>/Logical13' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkPdlPosFltLV1CktHi;/* '<S121>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkPdlPosFltLV1CktLo;/* '<S120>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkPdlSenPerfFailPcode;/* '<S98>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkPdlSenShortHi;/* '<S114>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkPdlSenShortLo;/* '<S115>/Switch2' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_BrkSensorLowLvFault;/* '<S11>/Merge' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_LrnRestPosAttempt;/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_LrnRestPosComplete;/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSD_b_LrnRestPosFailed;/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSD_t_LrnRestPosWindTimer;/* '<S162>/LearnRestPosChart' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSI_U_LrndBrkPdlRestPos_Init;/* '<S183>/Switch' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(float32, BPSR_VAR_INIT) VeBPSR_U_BrkDeltVoltShape;/* '<S16>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPSR_1

static VAR(boolean, BPSR_VAR_INIT) VeBPSR_b_BrkPedalFA;/* '<S9>/Switch1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BPSR
#include "MemMap.h"

CONST(ConstB_BPSR_ac_T, BPSR_VAR_INIT) BPSR_ac_ConstB =
{

#if Rte_SysCon_Variant_BPSR_1

    0.0F,                              /* '<S183>/Constant Value4' */

#define CONSTB_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    0.0F,                              /* '<S183>/Constant Value1' */

#define CONSTB_BPSR_AC_T_VARIANT_EXISTS
#endif

    0.0F,                              /* '<S181>/Constant Value' */
    0.0F,                              /* '<S181>/Constant Value4' */

#if Rte_SysCon_Variant_BPSR_1

    0,                                 /* '<S183>/FALSEConstant1' */

#endif

#if Rte_SysCon_Variant_BPSR_1

    0,                                 /* '<S183>/FALSEConstant5' */

#endif

#if Rte_SysCon_Variant_BPSR_1

    0,                                 /* '<S183>/FALSEConstant2' */

#endif

    0,                                 /* '<S181>/FALSE Constant' */
    CeDFIB_e_Init,                     /* '<S186>/Constant' */
    CeDFIB_e_Init,                     /* '<S187>/Constant' */
    CeDFIB_e_Init                      /* '<S188>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_BPSR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BPSR
#include "MemMap.h"

CONST(ConstP_BPSR_ac_T, BPSR_VAR_INIT) BPSR_ac_ConstP =
{

#if Rte_SysCon_Variant_BPSR_1

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S31>/Vector'
     */
    {
        8U, 7U
    },

#endif

#ifndef CONSTP_BPSR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_BPSR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"

VAR(B_BPSR_ac_T, BPSR_VAR_INIT) BPSR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"

VAR(DW_BPSR_ac_T, BPSR_VAR_INIT) BPSR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"
#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_IfActionSubsystem(VAR(sint16,
    AUTOMATIC) rtu_Inc, P2VAR(sint16, AUTOMATIC, BPSR_VAR_INIT) rty_Out);

#endif

#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPSR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_Init_d(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPSR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPSR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) WriteToEeBPSR_U_LrndBrkPdlRestPos_Quick(VAR
    (float32, AUTOMATIC) rtu_LrndBrkPdlRestPos);

#endif

#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_Case1(VAR(TeBPSR_e_BrakeStatus,
    AUTOMATIC) rtu_In1, P2VAR(TeBPSR_e_BrakeStatus, AUTOMATIC, BPSR_VAR_INIT)
    rty_Out1);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_BPSR_1

static float32 BPSR_ac_CalcAvg(sint16 CntC, float32 ArrayC[20]);

#endif

/*
 * Output and update for action system:
 *    '<S51>/If Action Subsystem'
 *    '<S51>/If Action Subsystem2'
 *    '<S51>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_IfActionSubsystem(VAR(sint16,
    AUTOMATIC) rtu_Inc, P2VAR(sint16, AUTOMATIC, BPSR_VAR_INIT) rty_Out)
{
    /* Inport: '<S82>/Inc' */
    *rty_Out = rtu_Inc;
}

#endif

/*
 * Output and update for enable system:
 *    '<S98>/Fail'
 *    '<S120>/Fail'
 *    '<S121>/Fail'
 */
#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPSR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S98>/Fail' incorporates:
     *  EnablePort: '<S102>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S102>/FaultSts' incorporates:
         *  Constant: '<S108>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S98>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S98>/Init'
 *    '<S120>/Init'
 *    '<S121>/Init'
 */
#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_Init_d(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPSR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S98>/Init' incorporates:
     *  EnablePort: '<S103>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S103>/FaultSts' incorporates:
         *  Constant: '<S109>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S98>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S98>/Pass'
 *    '<S120>/Pass'
 *    '<S121>/Pass'
 */
#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPSR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S98>/Pass' incorporates:
     *  EnablePort: '<S104>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S104>/FaultSts' incorporates:
         *  Constant: '<S110>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S98>/Pass' */
}

#endif

/*
 * Output and update for action system:
 *    '<S66>/WriteToEeBPSR_U_LrndBrkPdlRestPos_Quick'
 *    '<S66>/WriteToEeBPSR_U_LrndBrkPdlRestPos'
 */
#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) WriteToEeBPSR_U_LrndBrkPdlRestPos_Quick(VAR
    (float32, AUTOMATIC) rtu_LrndBrkPdlRestPos)
{
    /* DataStoreWrite: '<S164>/Data Store Write' */
    EeBPSR_U_LrndBrkPdlRestPos = rtu_LrndBrkPdlRestPos;
}

#endif

/*
 * Output and update for action system:
 *    '<S15>/Case1'
 *    '<S15>/Case2'
 *    '<S15>/Case3'
 *    '<S15>/Case4'
 */
#if Rte_SysCon_Variant_BPSR_1

static FUNC(void, BPSR_CODE_LOCAL) BPSR_ac_Case1(VAR(TeBPSR_e_BrakeStatus,
    AUTOMATIC) rtu_In1, P2VAR(TeBPSR_e_BrakeStatus, AUTOMATIC, BPSR_VAR_INIT)
    rty_Out1)
{
    /* Inport: '<S34>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/* Function for Chart: '<S162>/LearnRestPosChart' */
#if Rte_SysCon_Variant_BPSR_1

static float32 BPSR_ac_CalcAvg(sint16 CntC, float32 ArrayC[20])
{
    sint32 tmp;
    float32 Averag;
    float32 SumC;
    sint16 Temp;

    /* Graphical Function 'CalcAvg': '<S175>:223' */
    /* Transition: '<S175>:244' */
    Temp = CntC;
    tmp = ((sint32)CntC) - 1;
    if ((CntC - 1) < -32768)
    {
        tmp = -32768;
    }

    CntC = (sint16)tmp;
    SumC = ArrayC[0];
    if (((sint16)tmp) == 0)
    {
        /* Transition: '<S175>:239' */
        /* Transition: '<S175>:240' */
        Averag = ArrayC[0];

        /* Transition: '<S175>:241' */
    }
    else
    {
        /* Transition: '<S175>:242' */
        while (CntC > 0)
        {
            /* Transition: '<S175>:234' */
            /* Transition: '<S175>:237' */
            SumC += ArrayC[CntC];
            ArrayC[CntC] = 0.0F;

            /* Transition: '<S175>:236' */
            CntC--;
        }

        /* Transition: '<S175>:235' */
        Averag = SumC / ((float32)Temp);
    }

    /* Transition: '<S175>:303' */
    return Averag;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_BPSR_1

FUNC(void, BPSR_CODE) BPSR_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_BPSR_1

    sint16 rtb_Switch1_ca;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_Logical4_n;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_Logical5_d;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_GreaterThanorEqual;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_NOT5;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_Logical5_f;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_GreaterThanorEqual_l;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_NOT5_f;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_Logical5_e;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_GreaterThanorEqual_h;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_NOT5_p;

#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_NOT4;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_TmpSignalConversionAtVeBRKR_b_BrkPed;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_Logical2_g;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_UnitDelay_gv;

#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 rtb_TmpSignalConversionAtVePLTR_T_EstAmb;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_RelationalOperator3_a;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_Logical1_aa;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_AND_p;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_Logical1_d2;

#endif

#if Rte_SysCon_Variant_BPSR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_UnitDelay_ce;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_OR1_nl;

#endif

#if Rte_SysCon_Variant_BPSR_1

    sint16 rtb_Add;

#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_AND;

#endif

#if Rte_SysCon_Variant_BPSR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_j;

#endif

#if Rte_SysCon_Variant_BPSR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_f;

#endif

#if Rte_SysCon_Variant_BPSR_1

    TeBRKR_e_BrkPdl_Stat rtb_TmpSignalConversionAtVeBRKR_e_BrkPed;

#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 SignalConversion;

#endif

#if Rte_SysCon_Variant_BPSR_1

    sint32 tmp;

#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 tmp_0[20];

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_BPSR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* Outputs for Function Call SubSystem: '<Root>/BPSR_MedTEB' */
    /* SignalConversion generated from: '<S1>/VeBRKR_b_BrkPedalDscrtInptFA' incorporates:
     *  Inport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
     */
    (void)Rte_Read_VeBRKR_b_BrkPedalDscrtInptFA_Value
        (&rtb_TmpSignalConversionAtVeBRKR_b_BrkPed);

    /* SignalConversion generated from: '<S1>/VeBPSR_b_ECU_A2D_Failure_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2 =
        Rte_IrvRead_BPSR_MedTEB_VeBPSI_b_BrkPdlSensA2DFailure_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_BrkPdlPosSnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BrkPdlPosSnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BrkPdlPosSnsrCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_BrkPdlPosSnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BrkPdlPosSnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BrkPdlPosSnsrCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_f);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_BrkPdlPosSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BrkPdlPosSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BrkPdlPosSnsrPerf_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_j);

    /* SignalConversion generated from: '<S1>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        (&rtb_TmpSignalConversionAtVeBRKR_e_BrkPed);

    /* SignalConversion generated from: '<S1>/VePLTR_T_EstAmbAirTemp' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&rtb_TmpSignalConversionAtVePLTR_T_EstAmb);

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BPSI'
     */
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S12>/Calib'
     *  Switch: '<S9>/Switch1'
     */
    if (KeBPSR_b_BrakeSrcInputSelect)
    {
        /* Switch: '<S9>/Switch' incorporates:
         *  Merge: '<Root>/Merge_4'
         *  SignalConversion generated from: '<S1>/VeBPSR_U_BrakePedal_VoltRaw_read'
         */
        BPSR_ac_B.Switch =
            Rte_IrvRead_BPSR_MedTEB_VeBPSI_U_BrakePedalVoltRaw_Init_write_IRV();

        /* Switch: '<S9>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_5'
         *  SignalConversion generated from: '<S1>/VeBPSR_b_BrakePedal_VoltRawFA_read'
         */
        VeBPSR_b_BrkPedalFA =
            Rte_IrvRead_BPSR_MedTEB_VeBPSI_b_BrakePedalVoltRawFA_Init_write_IRV();
    }
    else
    {
        /* Switch: '<S9>/Switch' incorporates:
         *  Lookup_n-D: '<S13>/Vector'
         *  Merge: '<Root>/Merge_2'
         *  SignalConversion generated from: '<S1>/VeBPSR_pct_BrakePedalPct_read'
         */
        BPSR_ac_B.Switch = look1_iflf_binlca_16a
            (Rte_IrvRead_BPSR_MedTEB_VeBPSI_Pct_BrakePedalPct_Init_write_IRV(),
             ((const float32 *)&(KxBPSR_U_VolTransferFunc[0])), ((const float32 *)
              &(KtBPSR_U_VolTransferFunc[0])), 6U);

        /* Switch: '<S9>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_3'
         *  SignalConversion generated from: '<S1>/VeBPSR_b_BrakePedalPctFA_read'
         */
        VeBPSR_b_BrkPedalFA =
            Rte_IrvRead_BPSR_MedTEB_VeBPSI_b_BrkPedalPctFA_Init_write_IRV();
    }

    /* End of Switch: '<S9>/Switch' */

    /* SignalConversion: '<S9>/Signal Conversion' */
    SignalConversion = BPSR_ac_B.Switch;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BrkPdlSnsrPrcssng'
     */

    /* Logic: '<S52>/Logical8' */
    rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2 =
        (rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2 || (VeBPSR_b_BrkPedalFA));

    /* Logic: '<S68>/NOT4' incorporates:
     *  Constant: '<S63>/Calib'
     *  Constant: '<S64>/Calib'
     */
    rtb_NOT4 = ((KeBPSD_b_DiagSystemReenable) || (KeBPSD_b_PostCodeClrDiagDsbl));

    /* Outputs for Enabled SubSystem: '<S11>/BrkPdlPosSensLV1' incorporates:
     *  EnablePort: '<S54>/Enable'
     */
    /* Constant: '<S65>/Calib' */
    if (KeBPSD_b_SenMstrFailFlgEnable)
    {
        /* RelationalOperator: '<S120>/Relational Operator3' incorporates:
         *  Constant: '<S120>/Constant3'
         *  S-Function (sfix_bitop): '<S120>/Bitwise Operator2'
         */
        rtb_RelationalOperator3_a = ((rtb_TmpSignalConversionAtVeDMAB_y_Stat_j &
            ((uint8)64U)) == ((uint8)0U));

        /* Logic: '<S115>/Logical11' incorporates:
         *  Logic: '<S114>/Logical1'
         */
        rtb_Logical1_d2 = !rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2;

        /* Logic: '<S120>/Logical1' incorporates:
         *  Constant: '<S119>/Calib'
         *  Constant: '<S120>/Constant1'
         *  Constant: '<S125>/Calib'
         *  Logic: '<S115>/Logical11'
         *  Logic: '<S115>/Logical2'
         *  Logic: '<S120>/Logical Operator'
         *  Logic: '<S120>/Logical10'
         *  Logic: '<S120>/Logical12'
         *  RelationalOperator: '<S120>/Relational Operator1'
         *  S-Function (sfix_bitop): '<S120>/Bitwise Operator3'
         */
        rtb_Logical1_aa = ((rtb_Logical1_d2 &&
                            (KeBPSD_b_BrkPdlPosSnsrCktLoEnblDTC)) &&
                           ((!KeBPSR_b_BrkPdlPosSnsrCktLo_LtchEnbl) ||
                            (((rtb_TmpSignalConversionAtVeDMAB_y_Stat_j &
                               ((uint8)1U)) == ((uint8)0U)) ||
                             (!rtb_RelationalOperator3_a))));

        /* Switch: '<S115>/Switch2' incorporates:
         *  Constant: '<S126>/Calib'
         */
        if (KeBPSD_b_SenLv1LoFailFlgEnblOvrr)
        {
            /* Switch: '<S115>/Switch2' incorporates:
             *  Constant: '<S127>/Calib'
             */
            VeBPSD_b_BrkPdlSenShortLo = KeBPSD_b_SenLv1LoFailFlgOverride;
        }
        else
        {
            /* Switch: '<S115>/Switch2' incorporates:
             *  Constant: '<S61>/Calib'
             *  RelationalOperator: '<S115>/ShortLow'
             */
            VeBPSD_b_BrkPdlSenShortLo = (BPSR_ac_B.Switch <
                KeBPSD_U_BrkPdlSensorLL);
        }

        /* End of Switch: '<S115>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S120>/EdgeFalling1' */
        /* Logic: '<S129>/AND' incorporates:
         *  Logic: '<S129>/OR1'
         *  UnitDelay: '<S129>/Unit Delay'
         */
        rtb_AND_p = ((!rtb_RelationalOperator3_a) &&
                     (BPSR_ac_DW.UnitDelay_DSTATE_fg));

        /* Update for UnitDelay: '<S129>/Unit Delay' */
        BPSR_ac_DW.UnitDelay_DSTATE_fg = rtb_RelationalOperator3_a;

        /* End of Outputs for SubSystem: '<S120>/EdgeFalling1' */

        /* Logic: '<S120>/Logical5' */
        rtb_Logical5_f = (rtb_NOT4 || rtb_AND_p);

        /* Outputs for Atomic SubSystem: '<S128>/Counter Reset  Enabled 1' */
        /* Outputs for Atomic SubSystem: '<S128>/Counter Reset  Enabled ' */
        /* Switch: '<S135>/Switch1' incorporates:
         *  Constant: '<S135>/Constant Value2'
         *  Constant: '<S136>/Constant Value2'
         *  Logic: '<S128>/Fail Counter Reset'
         *  Logic: '<S128>/NOT6'
         *  Switch: '<S135>/Switch2'
         *  Switch: '<S136>/Switch1'
         *  UnitDelay: '<S128>/Unit Delay'
         *  UnitDelay: '<S128>/Unit Delay1'
         *  UnitDelay: '<S135>/Unit Delay'
         *  UnitDelay: '<S136>/Unit Delay'
         */
        if ((rtb_Logical5_f || (BPSR_ac_DW.UnitDelay_DSTATE_ec)) ||
                (BPSR_ac_DW.UnitDelay1_DSTATE_m))
        {
            BPSR_ac_DW.UnitDelay_DSTATE_ii = ((uint16)0U);
            BPSR_ac_DW.UnitDelay_DSTATE_j = ((uint16)0U);
        }
        else
        {
            if (rtb_Logical1_aa && (VeBPSD_b_BrkPdlSenShortLo))
            {
                /* UnitDelay: '<S135>/Unit Delay' incorporates:
                 *  Constant: '<S135>/Constant Value1'
                 *  Sum: '<S135>/Subtraction'
                 *  Switch: '<S135>/Switch2'
                 */
                BPSR_ac_DW.UnitDelay_DSTATE_ii = (uint16)(((uint32)((uint16)1U))
                    + ((uint32)BPSR_ac_DW.UnitDelay_DSTATE_ii));
            }

            /* Switch: '<S136>/Switch2' */
            if (rtb_Logical1_aa)
            {
                /* UnitDelay: '<S136>/Unit Delay' incorporates:
                 *  Constant: '<S136>/Constant Value1'
                 *  Sum: '<S136>/Subtraction'
                 *  Switch: '<S136>/Switch2'
                 */
                BPSR_ac_DW.UnitDelay_DSTATE_j = (uint16)(((uint32)((uint16)1U))
                    + ((uint32)BPSR_ac_DW.UnitDelay_DSTATE_j));
            }

            /* End of Switch: '<S136>/Switch2' */
        }

        /* End of Switch: '<S135>/Switch1' */
        /* End of Outputs for SubSystem: '<S128>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S128>/Counter Reset  Enabled 1' */

        /* RelationalOperator: '<S128>/Greater Than or Equal ' incorporates:
         *  Constant: '<S116>/Calib'
         *  UnitDelay: '<S135>/Unit Delay'
         */
        rtb_GreaterThanorEqual_l = (BPSR_ac_DW.UnitDelay_DSTATE_ii >=
            KeBPSD_Cnt_BrkPdlLvlOneFailLmt);

        /* Logic: '<S128>/NOT5' incorporates:
         *  Constant: '<S117>/Calib'
         *  Logic: '<S128>/NOT3'
         *  RelationalOperator: '<S128>/Less Than  or Equal'
         *  UnitDelay: '<S136>/Unit Delay'
         */
        rtb_NOT5_f = ((BPSR_ac_DW.UnitDelay_DSTATE_j >=
                       KeBPSD_Cnt_BrkPdlLvlOneSmplLmt) &&
                      (!rtb_GreaterThanorEqual_l));

        /* Switch: '<S141>/Switch1' incorporates:
         *  Constant: '<S134>/Constant Value'
         *  Constant: '<S64>/Calib'
         *  DataStoreWrite: '<S54>/Data Store Write1'
         *  Switch: '<S140>/Switch1'
         */
        if (KeBPSD_b_PostCodeClrDiagDsbl)
        {
            BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP = ((uint16)0U);
        }
        else
        {
            if (rtb_NOT5_f)
            {
                /* MinMax: '<S134>/Minimum2' incorporates:
                 *  DataStoreRead: '<S54>/Data Store Read3'
                 *  Switch: '<S140>/Switch1'
                 *  UnitDelay: '<S135>/Unit Delay'
                 */
                if (BPSR_ac_DW.UnitDelay_DSTATE_ii >
                        BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP)
                {
                    /* DataStoreWrite: '<S54>/Data Store Write1' incorporates:
                     *  Switch: '<S140>/Switch1'
                     */
                    BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP =
                        BPSR_ac_DW.UnitDelay_DSTATE_ii;
                }

                /* End of MinMax: '<S134>/Minimum2' */
            }
        }

        /* End of Switch: '<S141>/Switch1' */

        /* RelationalOperator: '<S121>/Relational Operator3' incorporates:
         *  Constant: '<S121>/Constant3'
         *  S-Function (sfix_bitop): '<S121>/Bitwise Operator2'
         */
        rtb_Logical1_aa = ((rtb_TmpSignalConversionAtVeDMAB_y_Stat_f & ((uint8)
                             64U)) == ((uint8)0U));

        /* Outputs for Atomic SubSystem: '<S121>/EdgeFalling1' */
        /* Logic: '<S121>/Logical Operator' incorporates:
         *  Logic: '<S143>/OR1'
         */
        rtb_RelationalOperator3_a = !rtb_Logical1_aa;

        /* End of Outputs for SubSystem: '<S121>/EdgeFalling1' */

        /* Logic: '<S121>/Logical1' incorporates:
         *  Constant: '<S118>/Calib'
         *  Constant: '<S121>/Constant1'
         *  Constant: '<S122>/Calib'
         *  Logic: '<S114>/Logical3'
         *  Logic: '<S121>/Logical Operator'
         *  Logic: '<S121>/Logical10'
         *  Logic: '<S121>/Logical12'
         *  RelationalOperator: '<S121>/Relational Operator1'
         *  S-Function (sfix_bitop): '<S121>/Bitwise Operator3'
         */
        rtb_Logical1_d2 = ((rtb_Logical1_d2 &&
                            (KeBPSD_b_BrkPdlPosSnsrCktHiEnblDTC)) &&
                           ((!KeBPSR_b_BrkPdlPosSnsrCktHi_LtchEnbl) ||
                            (((rtb_TmpSignalConversionAtVeDMAB_y_Stat_f &
                               ((uint8)1U)) == ((uint8)0U)) ||
                             rtb_RelationalOperator3_a)));

        /* Switch: '<S114>/Switch1' incorporates:
         *  Constant: '<S123>/Calib'
         */
        if (KeBPSD_b_SenLv1HiFailFlgEnblOvrr)
        {
            /* Switch: '<S114>/Switch1' incorporates:
             *  Constant: '<S124>/Calib'
             */
            VeBPSD_b_BrkPdlSenShortHi = KeBPSD_b_SenLv1HiFailFlgOverride;
        }
        else
        {
            /* Switch: '<S114>/Switch1' incorporates:
             *  Constant: '<S60>/Calib'
             *  RelationalOperator: '<S114>/ShortHi'
             */
            VeBPSD_b_BrkPdlSenShortHi = (BPSR_ac_B.Switch >
                KeBPSD_U_BrkPdlSensorHH);
        }

        /* End of Switch: '<S114>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S121>/EdgeFalling1' */
        /* Logic: '<S143>/AND' incorporates:
         *  UnitDelay: '<S143>/Unit Delay'
         */
        rtb_RelationalOperator3_a = (rtb_RelationalOperator3_a &&
            (BPSR_ac_DW.UnitDelay_DSTATE_cx));

        /* Update for UnitDelay: '<S143>/Unit Delay' */
        BPSR_ac_DW.UnitDelay_DSTATE_cx = rtb_Logical1_aa;

        /* End of Outputs for SubSystem: '<S121>/EdgeFalling1' */

        /* Logic: '<S121>/Logical5' */
        rtb_Logical5_e = (rtb_NOT4 || rtb_RelationalOperator3_a);

        /* Outputs for Atomic SubSystem: '<S142>/Counter Reset  Enabled 1' */
        /* Outputs for Atomic SubSystem: '<S142>/Counter Reset  Enabled ' */
        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S149>/Constant Value2'
         *  Constant: '<S150>/Constant Value2'
         *  Logic: '<S142>/Fail Counter Reset'
         *  Logic: '<S142>/NOT6'
         *  Switch: '<S149>/Switch2'
         *  Switch: '<S150>/Switch1'
         *  UnitDelay: '<S142>/Unit Delay'
         *  UnitDelay: '<S142>/Unit Delay1'
         *  UnitDelay: '<S149>/Unit Delay'
         *  UnitDelay: '<S150>/Unit Delay'
         */
        if ((rtb_Logical5_e || (BPSR_ac_DW.UnitDelay_DSTATE_be)) ||
                (BPSR_ac_DW.UnitDelay1_DSTATE_f))
        {
            BPSR_ac_DW.UnitDelay_DSTATE_l = ((uint16)0U);
            BPSR_ac_DW.UnitDelay_DSTATE_c = ((uint16)0U);
        }
        else
        {
            if (rtb_Logical1_d2 && (VeBPSD_b_BrkPdlSenShortHi))
            {
                /* UnitDelay: '<S149>/Unit Delay' incorporates:
                 *  Constant: '<S149>/Constant Value1'
                 *  Sum: '<S149>/Subtraction'
                 *  Switch: '<S149>/Switch2'
                 */
                BPSR_ac_DW.UnitDelay_DSTATE_l = (uint16)(((uint32)((uint16)1U))
                    + ((uint32)BPSR_ac_DW.UnitDelay_DSTATE_l));
            }

            /* Switch: '<S150>/Switch2' */
            if (rtb_Logical1_d2)
            {
                /* UnitDelay: '<S150>/Unit Delay' incorporates:
                 *  Constant: '<S150>/Constant Value1'
                 *  Sum: '<S150>/Subtraction'
                 *  Switch: '<S150>/Switch2'
                 */
                BPSR_ac_DW.UnitDelay_DSTATE_c = (uint16)(((uint32)((uint16)1U))
                    + ((uint32)BPSR_ac_DW.UnitDelay_DSTATE_c));
            }

            /* End of Switch: '<S150>/Switch2' */
        }

        /* End of Switch: '<S149>/Switch1' */
        /* End of Outputs for SubSystem: '<S142>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S142>/Counter Reset  Enabled 1' */

        /* RelationalOperator: '<S142>/Greater Than or Equal ' incorporates:
         *  Constant: '<S116>/Calib'
         *  UnitDelay: '<S149>/Unit Delay'
         */
        rtb_GreaterThanorEqual_h = (BPSR_ac_DW.UnitDelay_DSTATE_l >=
            KeBPSD_Cnt_BrkPdlLvlOneFailLmt);

        /* Logic: '<S142>/NOT5' incorporates:
         *  Constant: '<S117>/Calib'
         *  Logic: '<S142>/NOT3'
         *  RelationalOperator: '<S142>/Less Than  or Equal'
         *  UnitDelay: '<S150>/Unit Delay'
         */
        rtb_NOT5_p = ((BPSR_ac_DW.UnitDelay_DSTATE_c >=
                       KeBPSD_Cnt_BrkPdlLvlOneSmplLmt) &&
                      (!rtb_GreaterThanorEqual_h));

        /* Switch: '<S155>/Switch1' incorporates:
         *  Constant: '<S148>/Constant Value'
         *  Constant: '<S64>/Calib'
         *  DataStoreWrite: '<S54>/Data Store Write2'
         *  Switch: '<S154>/Switch1'
         */
        if (KeBPSD_b_PostCodeClrDiagDsbl)
        {
            BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP = ((uint16)0U);
        }
        else
        {
            if (rtb_NOT5_p)
            {
                /* MinMax: '<S148>/Minimum2' incorporates:
                 *  DataStoreRead: '<S54>/Data Store Read1'
                 *  Switch: '<S154>/Switch1'
                 *  UnitDelay: '<S149>/Unit Delay'
                 */
                if (BPSR_ac_DW.UnitDelay_DSTATE_l >
                        BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP)
                {
                    /* DataStoreWrite: '<S54>/Data Store Write2' incorporates:
                     *  Switch: '<S154>/Switch1'
                     */
                    BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP =
                        BPSR_ac_DW.UnitDelay_DSTATE_l;
                }

                /* End of MinMax: '<S148>/Minimum2' */
            }
        }

        /* End of Switch: '<S155>/Switch1' */

        /* Outputs for Enabled SubSystem: '<S121>/Pass' */
        BPSR_ac_Pass(rtb_NOT5_p, &BPSR_ac_B.Merge_h);

        /* End of Outputs for SubSystem: '<S121>/Pass' */

        /* Outputs for Enabled SubSystem: '<S121>/Fail' */
        BPSR_ac_Fail(rtb_GreaterThanorEqual_h, &BPSR_ac_B.Merge_h);

        /* End of Outputs for SubSystem: '<S121>/Fail' */

        /* Outputs for Enabled SubSystem: '<S121>/Init' */
        BPSR_ac_Init_d(rtb_Logical5_e, &BPSR_ac_B.Merge_h);

        /* End of Outputs for SubSystem: '<S121>/Init' */

        /* RelationalOperator: '<S121>/Relational Operator' incorporates:
         *  Constant: '<S144>/Constant'
         *  Merge: '<S121>/Merge'
         */
        VeBPSD_b_BrkPdlPosFltLV1CktHi = (BPSR_ac_B.Merge_h == CeDFIB_e_Fail);

        /* Outputs for Enabled SubSystem: '<S120>/Pass' */
        BPSR_ac_Pass(rtb_NOT5_f, &BPSR_ac_B.Merge_j);

        /* End of Outputs for SubSystem: '<S120>/Pass' */

        /* Outputs for Enabled SubSystem: '<S120>/Fail' */
        BPSR_ac_Fail(rtb_GreaterThanorEqual_l, &BPSR_ac_B.Merge_j);

        /* End of Outputs for SubSystem: '<S120>/Fail' */

        /* Outputs for Enabled SubSystem: '<S120>/Init' */
        BPSR_ac_Init_d(rtb_Logical5_f, &BPSR_ac_B.Merge_j);

        /* End of Outputs for SubSystem: '<S120>/Init' */

        /* RelationalOperator: '<S120>/Relational Operator' incorporates:
         *  Merge: '<S120>/Merge'
         */
        VeBPSD_b_BrkPdlPosFltLV1CktLo = (BPSR_ac_B.Merge_j == CeDFIB_e_Fail);

        /* Logic: '<S113>/Logical13' */
        VeBPSD_b_BrkPdlPosFltLV1 = ((VeBPSD_b_BrkPdlPosFltLV1CktHi) ||
            (VeBPSD_b_BrkPdlPosFltLV1CktLo));

        /* Update for UnitDelay: '<S128>/Unit Delay' */
        BPSR_ac_DW.UnitDelay_DSTATE_ec = rtb_NOT5_f;

        /* Update for UnitDelay: '<S128>/Unit Delay1' */
        BPSR_ac_DW.UnitDelay1_DSTATE_m = rtb_GreaterThanorEqual_l;

        /* Update for UnitDelay: '<S142>/Unit Delay' */
        BPSR_ac_DW.UnitDelay_DSTATE_be = rtb_NOT5_p;

        /* Update for UnitDelay: '<S142>/Unit Delay1' */
        BPSR_ac_DW.UnitDelay1_DSTATE_f = rtb_GreaterThanorEqual_h;
    }

    /* End of Outputs for SubSystem: '<S11>/BrkPdlPosSensLV1' */

    /* RelationalOperator: '<S98>/Relational Operator3' incorporates:
     *  Constant: '<S98>/Constant3'
     *  S-Function (sfix_bitop): '<S98>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_a = ((rtb_TmpSignalConversionAtVeDMAB_y_Status &
        ((uint8)64U)) == ((uint8)0U));

    /* Outputs for Atomic SubSystem: '<S98>/EdgeFalling1' */
    /* Logic: '<S98>/Logical Operator' incorporates:
     *  Logic: '<S100>/OR1'
     */
    rtb_AND_p = !rtb_RelationalOperator3_a;

    /* End of Outputs for SubSystem: '<S98>/EdgeFalling1' */

    /* Logic: '<S98>/Logical1' incorporates:
     *  Constant: '<S65>/Calib'
     *  Constant: '<S96>/Calib'
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Constant1'
     *  Logic: '<S53>/Logical11'
     *  Logic: '<S53>/Logical13'
     *  Logic: '<S53>/Logical6'
     *  Logic: '<S98>/Logical Operator'
     *  Logic: '<S98>/Logical10'
     *  Logic: '<S98>/Logical12'
     *  RelationalOperator: '<S98>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S98>/Bitwise Operator3'
     */
    rtb_Logical1_aa = (((((!VeBPSD_b_BrkPdlPosFltLV1) &&
                          (!rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2)) &&
                         (KeBPSD_b_BrkPdlPosSnsrPerfEnblDTC)) &&
                        (KeBPSD_b_SenMstrFailFlgEnable)) &&
                       ((!KeBPSR_b_BrkPdlPosSnsrPerf_LtchEnbl) ||
                        (((rtb_TmpSignalConversionAtVeDMAB_y_Status & ((uint8)1U))
                          == ((uint8)0U)) || rtb_AND_p)));

    /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S57>/Enable'
     */
    /* Outputs for Enabled SubSystem: '<S11>/SenVoltageCheck' incorporates:
     *  EnablePort: '<S69>/Enable'
     */
    /* Constant: '<S65>/Calib' */
    if (KeBPSD_b_SenMstrFailFlgEnable)
    {
        /* Merge: '<S11>/Merge' incorporates:
         *  Constant: '<S57>/TRUEConstant1'
         *  Constant: '<S57>/TRUEConstant2'
         *  Logic: '<S57>/Logical1'
         *  RelationalOperator: '<S57>/Comparison1'
         *  RelationalOperator: '<S57>/Comparison2'
         */
        VeBPSD_b_BrkSensorLowLvFault = ((VeBPSD_b_BrkPdlPosFltLV1 == true) ||
            (rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2 == true));
    }
    else
    {
        /* Logic: '<S69>/Logical1' incorporates:
         *  Constant: '<S60>/Calib'
         *  Constant: '<S61>/Calib'
         *  RelationalOperator: '<S69>/ShortHi'
         *  RelationalOperator: '<S69>/ShortLow'
         */
        rtb_Logical1_d2 = ((BPSR_ac_B.Switch > KeBPSD_U_BrkPdlSensorHH) ||
                           (BPSR_ac_B.Switch < KeBPSD_U_BrkPdlSensorLL));

        /* Outputs for Atomic SubSystem: '<S69>/Counter Reset  Enabled ' */
        /* Switch: '<S177>/Switch' incorporates:
         *  Logic: '<S69>/Logical3'
         *  Logic: '<S69>/Logical5'
         *  Logic: '<S69>/Logical6'
         *  Switch: '<S177>/Switch2'
         *  UnitDelay: '<S69>/Unit Delay'
         */
        if ((BPSR_ac_DW.UnitDelay_DSTATE_ia) && (!rtb_Logical1_d2))
        {
            /* Switch: '<S177>/Switch' incorporates:
             *  Constant: '<S177>/Constant Value2'
             */
            VeBPSD_Cnt_SenVoltRngCheck = ((uint16)0U);
        }
        else
        {
            if ((BPSR_ac_DW.UnitDelay_DSTATE_ia) && rtb_Logical1_d2)
            {
                /* Switch: '<S177>/Switch' incorporates:
                 *  Constant: '<S177>/Constant Value1'
                 *  Sum: '<S177>/Subtraction'
                 *  Switch: '<S177>/Switch2'
                 *  UnitDelay: '<S177>/Unit Delay'
                 */
                VeBPSD_Cnt_SenVoltRngCheck = (uint16)(((uint32)((uint16)1U)) +
                    ((uint32)VeBPSD_Cnt_SenVoltRngCheck));
            }
        }

        /* End of Switch: '<S177>/Switch' */
        /* End of Outputs for SubSystem: '<S69>/Counter Reset  Enabled ' */

        /* Outputs for Atomic SubSystem: '<S69>/Signal Latch On' */
        /* Logic: '<S180>/OR2' incorporates:
         *  Constant: '<S178>/Calib'
         *  Logic: '<S69>/Logical2'
         *  RelationalOperator: '<S69>/gt'
         *  UnitDelay: '<S180>/Unit Delay'
         */
        BPSR_ac_DW.UnitDelay_DSTATE_d =
            ((rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2 ||
              (VeBPSD_Cnt_SenVoltRngCheck > KeBPSD_Cnt_BrkPdlSenVoltRngDebnc)) ||
             (BPSR_ac_DW.UnitDelay_DSTATE_d));

        /* End of Outputs for SubSystem: '<S69>/Signal Latch On' */

        /* Logic: '<S69>/Logical4' incorporates:
         *  UnitDelay: '<S180>/Unit Delay'
         *  UnitDelay: '<S69>/Unit Delay'
         */
        BPSR_ac_DW.UnitDelay_DSTATE_ia = !BPSR_ac_DW.UnitDelay_DSTATE_d;

        /* Merge: '<S11>/Merge' incorporates:
         *  Gain: '<S179>/Gain'
         *  UnitDelay: '<S180>/Unit Delay'
         */
        VeBPSD_b_BrkSensorLowLvFault = ((true) && (BPSR_ac_DW.UnitDelay_DSTATE_d));
    }

    /* End of Outputs for SubSystem: '<S11>/SenVoltageCheck' */
    /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem' */

    /* Outputs for Enabled SubSystem: '<S66>/LrnRstPstnSlw' incorporates:
     *  EnablePort: '<S162>/Enable'
     */
    /* Logic: '<S66>/Logical2' */
    if (!BPSR_ac_B.OutportBufferForUseQickLrnRestPos)
    {
        /* Chart: '<S162>/LearnRestPosChart' incorporates:
         *  Constant: '<S161>/Constant'
         *  Constant: '<S162>/Constant Value1'
         *  Constant: '<S162>/Constant Value2'
         *  Constant: '<S165>/Calib'
         *  Constant: '<S166>/Calib'
         *  Constant: '<S167>/Calib'
         *  Constant: '<S168>/Calib'
         *  Constant: '<S170>/Calib'
         *  Constant: '<S172>/Calib'
         *  Constant: '<S173>/Calib'
         *  Constant: '<S174>/Calib'
         *  Constant: '<S66>/FALSEConstant3'
         *  Logic: '<S162>/Logical1'
         *  Logic: '<S162>/Logical5'
         *  Logic: '<S66>/Logical5'
         *  Merge: '<S15>/Merge'
         *  RelationalOperator: '<S162>/Comparison1'
         *  RelationalOperator: '<S162>/Comparison10'
         *  RelationalOperator: '<S66>/Comparison10'
         *  RelationalOperator: '<S66>/Comparison7'
         */
        /* Gateway: BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/LearnRestPosChart */
        /* During: BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/LearnRestPosChart */
        /* Entry Internal: BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/LearnRestPosChart */
        /* Transition: '<S175>:67' */
        if ((((((sint32)KeBPSD_Cnt_LrnRestPosMaxCnts) > 0) &&
                (((VeBPSC_e_BrakeStatus == CeBPSR_e_BrkNotApplied) && (false ==
                 VeBPSD_b_BrkSensorLowLvFault)) &&
                 ((KeBPSD_Cnt_LrnRestMaxIndxCnt > ((uint8)0U)) &&
                  (KeBPSD_Cnt_LrnRestPosMaxCnts > ((uint8)0U))))) &&
                (!VeBPSD_b_LrnRestPosFailed)) && (!VeBPSD_b_LrnRestPosComplete))
        {
            /* Transition: '<S175>:2' */
            /* Transition: '<S175>:180' */
            if (!VeBPSD_b_LrnRestPosAttempt)
            {
                /* Transition: '<S175>:181' */
                /* Transition: '<S175>:106' */
                VeBPSD_t_LrnRestPosWindTimer = VeBPSD_t_LrnRestPosWindTimer +
                    HeBPSD_t_MedTEB;
                guard1 = false;
                guard2 = false;
                if (VeBPSD_t_LrnRestPosWindTimer >= KeBPSD_t_LrnRestWindTime)
                {
                    /* Transition: '<S175>:108' */
                    /* Transition: '<S175>:129' */
                    if (((sint32)VeBPSD_Cnt_LrnRestPosArrayIndex) < ((sint32)
                            KeBPSD_Cnt_LrnRestMinCnts))
                    {
                        /* Transition: '<S175>:131' */
                        /* Transition: '<S175>:134' */
                        tmp = ((sint32)VeBPSD_Cnt_LrnRestPosFailCntr) + ((sint32)
                            KeBPSD_Cnt_LrnRestMaxFailCntrInc);
                        if (tmp > 32767)
                        {
                            tmp = 32767;
                        }

                        VeBPSD_Cnt_LrnRestPosFailCntr = (sint16)tmp;
                        if (((sint32)VeBPSD_Cnt_LrnRestPosFailCntr) >= ((sint32)
                                KeBPSD_Cnt_LrnRestMaxFailCntr))
                        {
                            /* Transition: '<S175>:150' */
                            /* Transition: '<S175>:152' */
                            VeBPSD_b_LrnRestPosFailed = true;

                            /* Transition: '<S175>:155' */
                        }
                        else
                        {
                            /* Transition: '<S175>:154' */
                            VeBPSD_t_LrnRestPosWindTimer = 0.0F;
                        }

                        /* Transition: '<S175>:301' */
                        /* Transition: '<S175>:300' */
                        /* Transition: '<S175>:289' */
                        /* Transition: '<S175>:285' */
                        guard1 = true;
                    }
                    else
                    {
                        /* Transition: '<S175>:305' */
                        guard2 = true;
                    }
                }
                else
                {
                    /* Transition: '<S175>:116' */
                    if ((BPSR_ac_B.Switch >= KeBPSD_U_LrnRestPosLo) &&
                            (BPSR_ac_B.Switch <= KeBPSD_U_LrnRestPosHi))
                    {
                        /* Transition: '<S175>:119' */
                        /* Transition: '<S175>:121' */
                        VaBPSD_U_LrnRestPosArray
                            [(VeBPSD_Cnt_LrnRestPosArrayIndex)] =
                            BPSR_ac_B.Switch;
                        tmp = ((sint32)VeBPSD_Cnt_LrnRestPosArrayIndex) + 1;
                        if ((VeBPSD_Cnt_LrnRestPosArrayIndex + 1) > 32767)
                        {
                            tmp = 32767;
                        }

                        VeBPSD_Cnt_LrnRestPosArrayIndex = (sint16)tmp;

                        /* Transition: '<S175>:123' */
                    }
                    else
                    {
                        /* Transition: '<S175>:125' */
                    }

                    /* Transition: '<S175>:126' */
                    if (((sint32)VeBPSD_Cnt_LrnRestPosArrayIndex) == ((sint32)
                            KeBPSD_Cnt_LrnRestPosMaxCnts))
                    {
                        /* Transition: '<S175>:112' */
                        guard2 = true;
                    }
                    else
                    {
                        /* Transition: '<S175>:83' */
                    }
                }

                if (guard2)
                {
                    /* Transition: '<S175>:85' */
                    memcpy(&tmp_0[0], (&(VaBPSD_U_LrnRestPosArray[0])), 20U *
                           (sizeof(float32)));
                    VeBPSD_U_LrnRestPosAvg = BPSR_ac_CalcAvg
                        (VeBPSD_Cnt_LrnRestPosArrayIndex, tmp_0);
                    VeBPSD_t_LrnRestPosWindTimer = 0.0F;
                    VeBPSD_Cnt_LrnRestPosArrayIndex = 0;

                    /* Transition: '<S175>:197' */
                    if (fabsf(VeBPSD_U_LrnRestPosAvg -
                              EeBPSR_U_LrndBrkPdlRestPos) >
                            KeBPSD_U_LrnRestMaxDelta)
                    {
                        /* Transition: '<S175>:258' */
                        /* Transition: '<S175>:256' */
                        tmp = ((sint32)VeBPSD_Cnt_LrnRestPosFailCntr) + ((sint32)
                            KeBPSD_Cnt_LrnRestMaxFailCntrInc);
                        if (tmp > 32767)
                        {
                            tmp = 32767;
                        }

                        VeBPSD_Cnt_LrnRestPosFailCntr = (sint16)tmp;
                        if (((sint32)VeBPSD_Cnt_LrnRestPosFailCntr) >= ((sint32)
                                KeBPSD_Cnt_LrnRestMaxFailCntr))
                        {
                            /* Transition: '<S175>:255' */
                            /* Transition: '<S175>:254' */
                            VeBPSD_b_LrnRestPosFailed = true;

                            /* Transition: '<S175>:252' */
                        }
                        else
                        {
                            /* Transition: '<S175>:253' */
                            VeBPSD_t_LrnRestPosWindTimer = 0.0F;
                        }

                        /* Transition: '<S175>:288' */
                        /* Transition: '<S175>:289' */
                        /* Transition: '<S175>:285' */
                        guard1 = true;
                    }
                    else
                    {
                        /* Transition: '<S175>:314' */
                        if (VeBPSD_Cnt_LrnRestPosFailCntr <= 0)
                        {
                            /* Transition: '<S175>:313' */
                            /* Transition: '<S175>:312' */
                            VeBPSD_Cnt_LrnRestPosFailCntr = 0;

                            /* Transition: '<S175>:311' */
                        }
                        else
                        {
                            /* Transition: '<S175>:310' */
                            tmp = ((sint32)VeBPSD_Cnt_LrnRestPosFailCntr) - 1;
                            if ((VeBPSD_Cnt_LrnRestPosFailCntr - 1) < -32768)
                            {
                                tmp = -32768;
                            }

                            VeBPSD_Cnt_LrnRestPosFailCntr = (sint16)tmp;
                        }

                        /* Transition: '<S175>:280' */
                        VaBPSD_U_LrnRestPosAvgArray
                            [(VeBPSD_Cnt_LrnRestPosAvgArrayIndex)] =
                            VeBPSD_U_LrnRestPosAvg;
                        tmp = ((sint32)VeBPSD_Cnt_LrnRestPosAvgArrayIndex) + 1;
                        if ((VeBPSD_Cnt_LrnRestPosAvgArrayIndex + 1) > 32767)
                        {
                            tmp = 32767;
                        }

                        VeBPSD_Cnt_LrnRestPosAvgArrayIndex = (sint16)tmp;
                        if (((sint32)VeBPSD_Cnt_LrnRestPosAvgArrayIndex) ==
                                ((sint32)KeBPSD_Cnt_LrnRestMaxIndxCnt))
                        {
                            /* Transition: '<S175>:263' */
                            /* Transition: '<S175>:265' */
                            memcpy(&tmp_0[0], (&(VaBPSD_U_LrnRestPosAvgArray[0])),
                                   20U * (sizeof(float32)));
                            VeBPSD_U_LrndBrkPdlRestPos = BPSR_ac_CalcAvg
                                (VeBPSD_Cnt_LrnRestPosAvgArrayIndex, tmp_0);
                            VeBPSD_b_LrnRestPosComplete = true;
                            VeBPSD_Cnt_LrnRestPosAvgArrayIndex = 0;

                            /* Transition: '<S175>:285' */
                            guard1 = true;
                        }
                        else
                        {
                            /* Transition: '<S175>:283' */
                            guard1 = true;
                        }
                    }
                }

                if (guard1)
                {
                    /* Transition: '<S175>:291' */
                    VeBPSD_Cnt_LrnRestPosArrayIndex = 0;
                    VeBPSD_b_LrnRestPosAttempt = true;

                    /* Transition: '<S175>:319' */
                }

                /* Transition: '<S175>:186' */
            }
            else
            {
                /* Transition: '<S175>:185' */
            }

            /* Transition: '<S175>:187' */
        }
        else
        {
            /* Transition: '<S175>:65' */
            VeBPSD_t_LrnRestPosWindTimer = 0.0F;
            VeBPSD_Cnt_LrnRestPosArrayIndex = 0;
            VeBPSD_b_LrnRestPosAttempt = false;
        }

        /* End of Chart: '<S162>/LearnRestPosChart' */
    }

    /* End of Logic: '<S66>/Logical2' */
    /* End of Outputs for SubSystem: '<S66>/LrnRstPstnSlw' */

    /* Logic: '<S66>/Logical6' incorporates:
     *  Constant: '<S66>/FALSEConstant1'
     *  Logic: '<S66>/Logical1'
     *  Logic: '<S66>/Logical12'
     *  Logic: '<S66>/Logical14'
     *  Logic: '<S66>/Logical3'
     *  Logic: '<S66>/Logical7'
     *  RelationalOperator: '<S66>/Comparison2'
     */
    rtb_Logical1_d2 = ((((VeBPSC_b_BrkPedalSW) &&
                         (!rtb_TmpSignalConversionAtVeBRKR_b_BrkPed)) && (false ==
                         VeBPSD_b_BrkSensorLowLvFault)) &&
                       ((BPSR_ac_B.OutportBufferForUseQickLrnRestPos) ||
                        ((VeBPSD_b_LrnRestPosFailed) ||
                         (!VeBPSD_b_LrnRestPosComplete))));

    /* Logic: '<S66>/Logical13' */
    rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2 = (rtb_Logical1_d2 ||
        (VeBPSD_b_LrnRestPosComplete));

    /* Logic: '<S67>/Logical2' incorporates:
     *  Constant: '<S176>/Constant'
     *  Constant: '<S65>/Calib'
     *  Constant: '<S67>/FALSEConstant1'
     *  Constant: '<S67>/FALSEConstant2'
     *  Merge: '<S15>/Merge'
     *  RelationalOperator: '<S67>/Comparison4'
     *  RelationalOperator: '<S67>/Comparison8'
     *  RelationalOperator: '<S67>/Comparison9'
     */
    rtb_Logical2_g = (((((false == VeBPSD_b_LrnRestPosFailed) &&
                         rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2) && (false ==
                         VeBPSD_b_BrkSensorLowLvFault)) && (VeBPSC_e_BrakeStatus
                        == CeBPSR_e_BrkNotApplied)) &&
                      (KeBPSD_b_SenMstrFailFlgEnable));

    /* UnitDelay: '<S160>/Unit Delay' incorporates:
     *  Constant: '<S88>/Calib'
     *  Constant: '<S89>/Calib'
     *  DataStoreRead: '<S11>/Data Store Read1'
     *  Logic: '<S51>/Logical'
     *  RelationalOperator: '<S51>/Hi'
     *  RelationalOperator: '<S51>/Low'
     *  Sum: '<S51>/Sum'
     *  Sum: '<S51>/Sum1'
     */
    rtb_UnitDelay_gv = ((BPSR_ac_B.Switch > (EeBPSR_U_LrndBrkPdlRestPos -
                          KeBPSD_U_BrkNotAppDeltaLo)) && (BPSR_ac_B.Switch <
                         (EeBPSR_U_LrndBrkPdlRestPos + KeBPSD_U_BrkNotAppDeltaHi)));

    /* Logic: '<S51>/Logical4' incorporates:
     *  Logic: '<S51>/Logical3'
     */
    VeBPSD_b_BrkNotAppOutRng = (rtb_Logical2_g && (!rtb_UnitDelay_gv));

    /* Outputs for Atomic SubSystem: '<S51>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S92>/EdgeRising' */
    /* UnitDelay: '<S91>/Unit Delay' incorporates:
     *  UnitDelay: '<S94>/Unit Delay'
     */
    rtb_UnitDelay_ce = BPSR_ac_DW.UnitDelay_DSTATE_jj;

    /* Update for UnitDelay: '<S94>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_jj = VeBPSD_b_BrkNotAppOutRng;

    /* Switch: '<S92>/Switch1' incorporates:
     *  Logic: '<S92>/OR'
     *  Logic: '<S92>/OR1'
     *  Logic: '<S94>/AND'
     *  Logic: '<S94>/OR1'
     */
    if ((!VeBPSD_b_BrkNotAppOutRng) || ((VeBPSD_b_BrkNotAppOutRng) &&
            (!rtb_UnitDelay_ce)))
    {
        /* Sum: '<S92>/Summation' incorporates:
         *  Constant: '<S92>/Constant Value1'
         *  UnitDelay: '<S92>/Unit Delay'
         */
        BPSR_ac_DW.UnitDelay_DSTATE_a = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S92>/Summation' incorporates:
         *  Constant: '<S92>/Constant Value'
         *  UnitDelay: '<S92>/Unit Delay'
         */
        BPSR_ac_DW.UnitDelay_DSTATE_a = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPSR_ac_DW.UnitDelay_DSTATE_a));

        /* MinMax: '<S92>/Minimum' incorporates:
         *  Constant: '<S87>/Calib'
         */
        if (KeBPSD_Cnt_BrkNotAppRngDebSamples < BPSR_ac_DW.UnitDelay_DSTATE_a)
        {
            /* Sum: '<S92>/Summation' */
            BPSR_ac_DW.UnitDelay_DSTATE_a = KeBPSD_Cnt_BrkNotAppRngDebSamples;
        }

        /* End of MinMax: '<S92>/Minimum' */
    }

    /* End of Switch: '<S92>/Switch1' */
    /* End of Outputs for SubSystem: '<S92>/EdgeRising' */

    /* Logic: '<S92>/AND' incorporates:
     *  Constant: '<S87>/Calib'
     *  RelationalOperator: '<S92>/Greater  Than'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtb_UnitDelay_ce = ((VeBPSD_b_BrkNotAppOutRng) &&
                        (BPSR_ac_DW.UnitDelay_DSTATE_a >=
                         KeBPSD_Cnt_BrkNotAppRngDebSamples));

    /* End of Outputs for SubSystem: '<S51>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S51>/EdgeRising' */
    /* Logic: '<S80>/OR1' incorporates:
     *  UnitDelay: '<S80>/Unit Delay'
     */
    rtb_OR1_nl = !BPSR_ac_DW.UnitDelay_DSTATE_l4;

    /* Update for UnitDelay: '<S80>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_l4 = rtb_UnitDelay_ce;

    /* End of Outputs for SubSystem: '<S51>/EdgeRising' */

    /* Logic: '<S51>/Logical2' */
    VeBPSD_b_BrkNotAppIntRange = (rtb_UnitDelay_gv && rtb_Logical2_g);

    /* Outputs for Atomic SubSystem: '<S51>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S93>/EdgeRising' */
    /* UnitDelay: '<S160>/Unit Delay' incorporates:
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_UnitDelay_gv = BPSR_ac_DW.UnitDelay_DSTATE_dl;

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_dl = VeBPSD_b_BrkNotAppIntRange;

    /* Switch: '<S93>/Switch1' incorporates:
     *  Logic: '<S93>/OR'
     *  Logic: '<S93>/OR1'
     *  Logic: '<S95>/AND'
     *  Logic: '<S95>/OR1'
     */
    if ((!VeBPSD_b_BrkNotAppIntRange) || ((VeBPSD_b_BrkNotAppIntRange) &&
            (!rtb_UnitDelay_gv)))
    {
        /* Sum: '<S93>/Summation' incorporates:
         *  Constant: '<S93>/Constant Value1'
         *  UnitDelay: '<S93>/Unit Delay'
         */
        BPSR_ac_DW.UnitDelay_DSTATE_g = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S93>/Summation' incorporates:
         *  Constant: '<S93>/Constant Value'
         *  UnitDelay: '<S93>/Unit Delay'
         */
        BPSR_ac_DW.UnitDelay_DSTATE_g = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPSR_ac_DW.UnitDelay_DSTATE_g));

        /* MinMax: '<S93>/Minimum' incorporates:
         *  Constant: '<S87>/Calib'
         */
        if (KeBPSD_Cnt_BrkNotAppRngDebSamples < BPSR_ac_DW.UnitDelay_DSTATE_g)
        {
            /* Sum: '<S93>/Summation' */
            BPSR_ac_DW.UnitDelay_DSTATE_g = KeBPSD_Cnt_BrkNotAppRngDebSamples;
        }

        /* End of MinMax: '<S93>/Minimum' */
    }

    /* End of Switch: '<S93>/Switch1' */
    /* End of Outputs for SubSystem: '<S93>/EdgeRising' */

    /* Logic: '<S93>/AND' incorporates:
     *  Constant: '<S87>/Calib'
     *  RelationalOperator: '<S93>/Greater  Than'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    rtb_UnitDelay_gv = ((VeBPSD_b_BrkNotAppIntRange) &&
                        (BPSR_ac_DW.UnitDelay_DSTATE_g >=
                         KeBPSD_Cnt_BrkNotAppRngDebSamples));

    /* End of Outputs for SubSystem: '<S51>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S51>/EdgeRising1' */
    /* Logic: '<S81>/OR1' incorporates:
     *  UnitDelay: '<S81>/Unit Delay'
     */
    rtb_Logical2_g = !BPSR_ac_DW.UnitDelay_DSTATE_ct;

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_ct = rtb_UnitDelay_gv;

    /* End of Outputs for SubSystem: '<S51>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S51>/EdgeRising' */
    /* If: '<S51>/If' incorporates:
     *  Constant: '<S51>/Dec'
     *  Constant: '<S51>/NoAction'
     *  Constant: '<S85>/Calib'
     *  Logic: '<S80>/AND'
     *  Logic: '<S81>/AND'
     */
    if (rtb_UnitDelay_ce && rtb_OR1_nl)
    {
        /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
         *  ActionPort: '<S82>/Action Port'
         */
        BPSR_ac_IfActionSubsystem(KeBPSD_Cnt_BrkNotAppOutRngCntrInc,
            &rtb_Switch1_ca);

        /* End of Outputs for SubSystem: '<S51>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S51>/EdgeRising1' */
        if (rtb_UnitDelay_gv && rtb_Logical2_g)
        {
            /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S84>/Action Port'
             */
            BPSR_ac_IfActionSubsystem(-1, &rtb_Switch1_ca);

            /* End of Outputs for SubSystem: '<S51>/If Action Subsystem2' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S83>/Action Port'
             */
            BPSR_ac_IfActionSubsystem(0, &rtb_Switch1_ca);

            /* End of Outputs for SubSystem: '<S51>/If Action Subsystem1' */
        }

        /* End of Outputs for SubSystem: '<S51>/EdgeRising1' */
    }

    /* End of If: '<S51>/If' */
    /* End of Outputs for SubSystem: '<S51>/EdgeRising' */

    /* Sum: '<S51>/Add' */
    rtb_Add = (sint16)(rtb_Switch1_ca + VeBPSD_Cnt_BrkNotAppFailCntr);

    /* Outputs for Atomic SubSystem: '<S51>/Limiter2' */
    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S90>/Relational Operator'
     */
    if (KeBPSD_Cnt_BrkNotAppOutRngMaxCntr < rtb_Add)
    {
        /* Switch: '<S90>/Switch1' */
        rtb_Switch1_ca = KeBPSD_Cnt_BrkNotAppOutRngMaxCntr;
    }
    else
    {
        /* Switch: '<S90>/Switch1' */
        rtb_Switch1_ca = rtb_Add;
    }

    /* End of Switch: '<S90>/Switch1' */

    /* Switch: '<S90>/Switch' incorporates:
     *  Constant: '<S51>/Constant Value1'
     *  RelationalOperator: '<S90>/Relational Operator1'
     */
    if (rtb_Switch1_ca > 0)
    {
        /* Switch: '<S90>/Switch' */
        VeBPSD_Cnt_BrkNotAppFailCntr = rtb_Switch1_ca;
    }
    else
    {
        /* Switch: '<S90>/Switch' */
        VeBPSD_Cnt_BrkNotAppFailCntr = 0;
    }

    /* End of Switch: '<S90>/Switch' */
    /* End of Outputs for SubSystem: '<S51>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S51>/Signal Latch On' */
    /* Logic: '<S91>/OR2' incorporates:
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S51>/Comparison2'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    VeBPSD_b_BrkNotAppFail = ((VeBPSD_Cnt_BrkNotAppFailCntr >=
        KeBPSD_Cnt_BrkNotAppOutRngMaxCntr) || (BPSR_ac_DW.UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_k = VeBPSD_b_BrkNotAppFail;

    /* End of Outputs for SubSystem: '<S51>/Signal Latch On' */

    /* Logic: '<S56>/Logical4' incorporates:
     *  Constant: '<S56>/FALSEConstant4'
     *  Constant: '<S56>/FALSEConstant6'
     *  Constant: '<S65>/Calib'
     *  RelationalOperator: '<S56>/Comparison11'
     *  RelationalOperator: '<S56>/Comparison6'
     */
    rtb_Logical4_n = (((KeBPSD_b_SenMstrFailFlgEnable) &&
                       (rtb_TmpSignalConversionAtVeBRKR_b_BrkPed == false)) &&
                      (VeBPSD_b_BrkSensorLowLvFault == false));

    /* Outputs for Enabled SubSystem: '<S11>/BrakeAppliedCheck' incorporates:
     *  EnablePort: '<S50>/Enable'
     */
    if (rtb_Logical4_n)
    {
        /* Switch: '<S50>/Switch' incorporates:
         *  Constant: '<S73>/Calib'
         *  Logic: '<S72>/AND'
         *  Logic: '<S72>/OR1'
         *  RelationalOperator: '<S71>/Not Equal'
         *  UnitDelay: '<S71>/Unit Delay'
         *  UnitDelay: '<S72>/Unit Delay'
         */
        if (KeBPSD_b_BrkApplModeSelect)
        {
            /* Outputs for Atomic SubSystem: '<S50>/EdgeBi' */
            rtb_UnitDelay_ce = (VeBPSC_b_BrkPedalSW !=
                                BPSR_ac_DW.UnitDelay_DSTATE_kw);

            /* End of Outputs for SubSystem: '<S50>/EdgeBi' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S50>/EdgeRising' */
            rtb_UnitDelay_ce = ((VeBPSC_b_BrkPedalSW) &&
                                (!BPSR_ac_DW.UnitDelay_DSTATE_ib));

            /* End of Outputs for SubSystem: '<S50>/EdgeRising' */
        }

        /* End of Switch: '<S50>/Switch' */

        /* Outputs for Enabled SubSystem: '<S50>/BrakeAppliedTest' incorporates:
         *  EnablePort: '<S70>/Enable'
         */
        if (rtb_UnitDelay_ce)
        {
            /* Chart: '<S70>/BrakeAppliedTestChart' incorporates:
             *  Constant: '<S62>/Calib'
             *  Constant: '<S75>/Calib'
             *  Constant: '<S76>/Calib'
             *  Constant: '<S77>/Calib'
             *  Constant: '<S78>/Calib'
             *  Constant: '<S79>/Calib'
             *  Sum: '<S70>/Sum'
             *  Sum: '<S70>/Sum1'
             */
            /* Gateway: BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest/BrakeAppliedTestChart */
            /* During: BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest/BrakeAppliedTestChart */
            /* Entry Internal: BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest/BrakeAppliedTestChart */
            /* Transition: '<S74>:67' */
            if (((sint32)KeBPSD_Cnt_BrkPdlSensorSWMaxSample) > 0)
            {
                /* Transition: '<S74>:2' */
                /* Transition: '<S74>:4' */
                VaBPSD_U_BrkApplTestArray[(VeBPSD_Cnt_BrkApplTestArrayIndex)] =
                    BPSR_ac_B.Switch;
                tmp = ((sint32)VeBPSD_Cnt_BrkApplTestArrayIndex) + 1;
                if ((VeBPSD_Cnt_BrkApplTestArrayIndex + 1) > 32767)
                {
                    tmp = 32767;
                }

                VeBPSD_Cnt_BrkApplTestArrayIndex = (sint16)tmp;
                if (((sint32)VeBPSD_Cnt_BrkApplTestArrayIndex) == ((sint32)
                        KeBPSD_Cnt_BrkPdlSensorSWMaxSample))
                {
                    /* Transition: '<S74>:7' */
                    /* Transition: '<S74>:13' */
                    tmp = ((sint32)VeBPSD_Cnt_BrkApplTestArrayIndex) - 1;
                    if ((VeBPSD_Cnt_BrkApplTestArrayIndex - 1) < -32768)
                    {
                        tmp = -32768;
                    }

                    VeBPSD_Cnt_BrkApplTestArrayIndex = (sint16)tmp;
                    while (VeBPSD_Cnt_BrkApplTestArrayIndex > 0)
                    {
                        /* Transition: '<S74>:17' */
                        /* Transition: '<S74>:21' */
                        VeBPSD_U_BrkApplTestArraySum =
                            VeBPSD_U_BrkApplTestArraySum +
                            VaBPSD_U_BrkApplTestArray
                            [(VeBPSD_Cnt_BrkApplTestArrayIndex)];
                        VaBPSD_U_BrkApplTestArray
                            [(VeBPSD_Cnt_BrkApplTestArrayIndex)] = 0.0F;

                        /* Transition: '<S74>:20' */
                        tmp = ((sint32)VeBPSD_Cnt_BrkApplTestArrayIndex) - 1;
                        if ((VeBPSD_Cnt_BrkApplTestArrayIndex - 1) < -32768)
                        {
                            tmp = -32768;
                        }

                        VeBPSD_Cnt_BrkApplTestArrayIndex = (sint16)tmp;
                    }

                    /* Transition: '<S74>:19' */
                    VeBPSD_U_BrkApplTestArraySum = VeBPSD_U_BrkApplTestArraySum
                        + VaBPSD_U_BrkApplTestArray
                        [(VeBPSD_Cnt_BrkApplTestArrayIndex)];
                    VaBPSD_U_BrkApplTestArray[(VeBPSD_Cnt_BrkApplTestArrayIndex)]
                        = 0.0F;
                    VeBPSD_U_BrkApplTestArraySum = VeBPSD_U_BrkApplTestArraySum /
                        ((float32)KeBPSD_Cnt_BrkPdlSensorSWMaxSample);
                    VeBPSD_U_BrkApplTestAvg = VeBPSD_U_BrkApplTestArraySum;
                    VeBPSD_U_BrkApplTestArraySum = 0.0F;
                    VeBPSD_Cnt_BrkApplTestArrayIndex = 0;
                    if ((VeBPSD_U_BrkApplTestAvg >= (KeBPSD_U_LrndBrkPdlSW1Pos -
                          KeBPSD_U_BrkAppDeltaLo)) && (VeBPSD_U_BrkApplTestAvg <=
                         (KeBPSD_U_LrndBrkPdlSW1Pos + KeBPSD_U_BrkAppDeltaHi)))
                    {
                        /* Transition: '<S74>:36' */
                        if (VeBPSD_b_BrkApplTestFailedCntr != 0)
                        {
                            /* Transition: '<S74>:49' */
                            /* Transition: '<S74>:50' */
                            tmp = ((sint32)VeBPSD_b_BrkApplTestFailedCntr) - 1;
                            if ((VeBPSD_b_BrkApplTestFailedCntr - 1) < -32768)
                            {
                                tmp = -32768;
                            }

                            VeBPSD_b_BrkApplTestFailedCntr = (sint16)tmp;
                        }
                        else
                        {
                            /* Transition: '<S74>:38' */
                        }

                        /* Transition: '<S74>:41' */
                    }
                    else
                    {
                        /* Transition: '<S74>:40' */
                        tmp = ((sint32)VeBPSD_b_BrkApplTestFailedCntr) +
                            ((sint32)KeBPSD_Cnt_BrkApplTestFltCtrInc);
                        if (tmp > 32767)
                        {
                            tmp = 32767;
                        }
                        else
                        {
                            if (tmp < -32768)
                            {
                                tmp = -32768;
                            }
                        }

                        VeBPSD_b_BrkApplTestFailedCntr = (sint16)tmp;
                    }

                    /* Transition: '<S74>:42' */
                    if (VeBPSD_b_BrkApplTestFailedCntr >=
                            KeBPSD_Cnt_BrkApplTestFltCtrIMax)
                    {
                        /* Transition: '<S74>:53' */
                        /* Transition: '<S74>:55' */
                        VeBPSD_b_BrkApplTestFailed = true;

                        /* Transition: '<S74>:56' */
                    }
                    else
                    {
                        /* Transition: '<S74>:57' */
                    }

                    /* Transition: '<S74>:58' */
                }
                else
                {
                    /* Transition: '<S74>:15' */
                }
            }
            else
            {
                /* Transition: '<S74>:65' */
                /* Transition: '<S74>:66' */
            }

            /* End of Chart: '<S70>/BrakeAppliedTestChart' */
            /* Transition: '<S74>:31' */
        }

        /* End of Outputs for SubSystem: '<S50>/BrakeAppliedTest' */
    }

    /* End of Outputs for SubSystem: '<S11>/BrakeAppliedCheck' */

    /* Outputs for Atomic SubSystem: '<S98>/EdgeFalling1' */
    /* Logic: '<S100>/AND' incorporates:
     *  UnitDelay: '<S100>/Unit Delay'
     */
    rtb_AND_p = (rtb_AND_p && (BPSR_ac_DW.UnitDelay_DSTATE_pe));

    /* Update for UnitDelay: '<S100>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_pe = rtb_RelationalOperator3_a;

    /* End of Outputs for SubSystem: '<S98>/EdgeFalling1' */

    /* Logic: '<S98>/Logical5' */
    rtb_Logical5_d = (rtb_NOT4 || rtb_AND_p);

    /* Outputs for Atomic SubSystem: '<S99>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S99>/Counter Reset  Enabled ' */
    /* Switch: '<S106>/Switch1' incorporates:
     *  Constant: '<S106>/Constant Value2'
     *  Constant: '<S107>/Constant Value2'
     *  Logic: '<S53>/Logical7'
     *  Logic: '<S99>/Fail Counter Reset'
     *  Logic: '<S99>/NOT6'
     *  Switch: '<S106>/Switch2'
     *  Switch: '<S107>/Switch1'
     *  UnitDelay: '<S106>/Unit Delay'
     *  UnitDelay: '<S107>/Unit Delay'
     *  UnitDelay: '<S99>/Unit Delay'
     *  UnitDelay: '<S99>/Unit Delay1'
     */
    if ((rtb_Logical5_d || (BPSR_ac_DW.UnitDelay_DSTATE_ay)) ||
            (BPSR_ac_DW.UnitDelay1_DSTATE))
    {
        BPSR_ac_DW.UnitDelay_DSTATE_e = ((uint16)0U);
        BPSR_ac_DW.UnitDelay_DSTATE_b2 = ((uint16)0U);
    }
    else
    {
        if (rtb_Logical1_aa && (((VeBPSD_b_BrkNotAppFail) ||
                                 (VeBPSD_b_LrnRestPosFailed)) ||
                                (VeBPSD_b_BrkApplTestFailed)))
        {
            /* UnitDelay: '<S106>/Unit Delay' incorporates:
             *  Constant: '<S106>/Constant Value1'
             *  Sum: '<S106>/Subtraction'
             *  Switch: '<S106>/Switch2'
             */
            BPSR_ac_DW.UnitDelay_DSTATE_e = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)BPSR_ac_DW.UnitDelay_DSTATE_e));
        }

        /* Switch: '<S107>/Switch2' */
        if (rtb_Logical1_aa)
        {
            /* UnitDelay: '<S107>/Unit Delay' incorporates:
             *  Constant: '<S107>/Constant Value1'
             *  Sum: '<S107>/Subtraction'
             *  Switch: '<S107>/Switch2'
             */
            BPSR_ac_DW.UnitDelay_DSTATE_b2 = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)BPSR_ac_DW.UnitDelay_DSTATE_b2));
        }

        /* End of Switch: '<S107>/Switch2' */
    }

    /* End of Switch: '<S106>/Switch1' */
    /* End of Outputs for SubSystem: '<S99>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S99>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S99>/Greater Than or Equal ' incorporates:
     *  Constant: '<S58>/Calib'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    rtb_GreaterThanorEqual = (BPSR_ac_DW.UnitDelay_DSTATE_e >=
        KeBPSD_Cnt_BrkPdlMstrFailLmt);

    /* Logic: '<S99>/NOT5' incorporates:
     *  Constant: '<S59>/Calib'
     *  Logic: '<S99>/NOT3'
     *  RelationalOperator: '<S99>/Less Than  or Equal'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    rtb_NOT5 = ((BPSR_ac_DW.UnitDelay_DSTATE_b2 >= KeBPSD_Cnt_BrkPdlMstrSmplLmt)
                && (!rtb_GreaterThanorEqual));

    /* Switch: '<S112>/Switch1' incorporates:
     *  Constant: '<S105>/Constant Value'
     *  Constant: '<S64>/Calib'
     *  DataStoreWrite: '<S53>/Data Store Write1'
     *  Switch: '<S111>/Switch1'
     */
    if (KeBPSD_b_PostCodeClrDiagDsbl)
    {
        BPSR_ac_DW.NeBPSD_Cnt_BrkPdlSnsPerf_MFOP = ((uint16)0U);
    }
    else
    {
        if (rtb_NOT5)
        {
            /* MinMax: '<S105>/Minimum2' incorporates:
             *  DataStoreRead: '<S53>/Data Store Read3'
             *  Switch: '<S111>/Switch1'
             *  UnitDelay: '<S106>/Unit Delay'
             */
            if (BPSR_ac_DW.UnitDelay_DSTATE_e >
                    BPSR_ac_DW.NeBPSD_Cnt_BrkPdlSnsPerf_MFOP)
            {
                /* DataStoreWrite: '<S53>/Data Store Write1' incorporates:
                 *  Switch: '<S111>/Switch1'
                 */
                BPSR_ac_DW.NeBPSD_Cnt_BrkPdlSnsPerf_MFOP =
                    BPSR_ac_DW.UnitDelay_DSTATE_e;
            }

            /* End of MinMax: '<S105>/Minimum2' */
        }
    }

    /* End of Switch: '<S112>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S98>/Fail' */
    BPSR_ac_Fail(rtb_GreaterThanorEqual, &BPSR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S98>/Fail' */

    /* Outputs for Enabled SubSystem: '<S98>/Init' */
    BPSR_ac_Init_d(rtb_Logical5_d, &BPSR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S98>/Init' */

    /* Outputs for Enabled SubSystem: '<S98>/Pass' */
    BPSR_ac_Pass(rtb_NOT5, &BPSR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S98>/Pass' */

    /* RelationalOperator: '<S98>/Relational Operator' incorporates:
     *  Constant: '<S101>/Constant'
     *  Merge: '<S98>/Merge'
     */
    VeBPSD_b_BrkPdlSenPerfFailPcode = (BPSR_ac_B.Merge == CeDFIB_e_Fail);

    /* Switch: '<S55>/Switch1' incorporates:
     *  Constant: '<S156>/Calib'
     *  Constant: '<S65>/Calib'
     *  Switch: '<S55>/Switch2'
     */
    if (KeBPSD_b_SenMstrFailFlgEnblOvrr)
    {
        /* Switch: '<S55>/Switch1' incorporates:
         *  Constant: '<S157>/Calib'
         */
        rtb_NOT4 = KeBPSD_b_SenMstrFailFlgOverride;
    }
    else if (KeBPSD_b_SenMstrFailFlgEnable)
    {
        /* Switch: '<S55>/Switch2' incorporates:
         *  Logic: '<S55>/Logical3'
         *  Switch: '<S55>/Switch1'
         */
        rtb_NOT4 = ((VeBPSD_b_BrkSensorLowLvFault) ||
                    (VeBPSD_b_BrkPdlSenPerfFailPcode));
    }
    else
    {
        /* Switch: '<S55>/Switch1' incorporates:
         *  Switch: '<S55>/Switch2'
         */
        rtb_NOT4 = VeBPSD_b_BrkSensorLowLvFault;
    }

    /* End of Switch: '<S55>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S66>/EdgeRising1' */
    /* Logic: '<S159>/OR1' incorporates:
     *  UnitDelay: '<S159>/Unit Delay'
     */
    rtb_Logical1_aa = !BPSR_ac_DW.UnitDelay_DSTATE_bv;

    /* Update for UnitDelay: '<S159>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_bv = rtb_Logical1_d2;

    /* End of Outputs for SubSystem: '<S66>/EdgeRising1' */

    /* Logic: '<S66>/Logical10' incorporates:
     *  Logic: '<S66>/Logical11'
     *  Logic: '<S66>/Logical8'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    rtb_RelationalOperator3_a = (((!BPSR_ac_B.OutportBufferForUseQickLrnRestPos)
        && (VeBPSD_b_LrnRestPosComplete)) && (!BPSR_ac_DW.UnitDelay_DSTATE_gh));

    /* Outputs for Atomic SubSystem: '<S66>/EdgeRising2' */
    /* Logic: '<S160>/OR1' incorporates:
     *  UnitDelay: '<S160>/Unit Delay'
     */
    rtb_AND_p = !BPSR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S160>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_p = rtb_RelationalOperator3_a;

    /* End of Outputs for SubSystem: '<S66>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S66>/EdgeRising1' */
    /* If: '<S66>/If' incorporates:
     *  Logic: '<S159>/AND'
     *  Logic: '<S160>/AND'
     */
    if (rtb_Logical1_d2 && rtb_Logical1_aa)
    {
        /* Outputs for IfAction SubSystem: '<S66>/WriteToEeBPSR_U_LrndBrkPdlRestPos_Quick' incorporates:
         *  ActionPort: '<S164>/Action Port'
         */
        WriteToEeBPSR_U_LrndBrkPdlRestPos_Quick(BPSR_ac_B.Switch);

        /* End of Outputs for SubSystem: '<S66>/WriteToEeBPSR_U_LrndBrkPdlRestPos_Quick' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S66>/EdgeRising2' */
        if (rtb_RelationalOperator3_a && rtb_AND_p)
        {
            /* Outputs for IfAction SubSystem: '<S66>/WriteToEeBPSR_U_LrndBrkPdlRestPos' incorporates:
             *  ActionPort: '<S163>/Action Port'
             */
            WriteToEeBPSR_U_LrndBrkPdlRestPos_Quick(VeBPSD_U_LrndBrkPdlRestPos);

            /* End of Outputs for SubSystem: '<S66>/WriteToEeBPSR_U_LrndBrkPdlRestPos' */
        }

        /* End of Outputs for SubSystem: '<S66>/EdgeRising2' */
    }

    /* End of If: '<S66>/If' */
    /* End of Outputs for SubSystem: '<S66>/EdgeRising1' */

    /* Update for Enabled SubSystem: '<S11>/BrakeAppliedCheck' incorporates:
     *  EnablePort: '<S50>/Enable'
     */
    if (rtb_Logical4_n)
    {
        /* Update for Atomic SubSystem: '<S50>/EdgeBi' */
        /* Update for UnitDelay: '<S71>/Unit Delay' */
        BPSR_ac_DW.UnitDelay_DSTATE_kw = VeBPSC_b_BrkPedalSW;

        /* End of Update for SubSystem: '<S50>/EdgeBi' */

        /* Update for Atomic SubSystem: '<S50>/EdgeRising' */
        /* Update for UnitDelay: '<S72>/Unit Delay' */
        BPSR_ac_DW.UnitDelay_DSTATE_ib = VeBPSC_b_BrkPedalSW;

        /* End of Update for SubSystem: '<S50>/EdgeRising' */
    }

    /* End of Update for SubSystem: '<S11>/BrakeAppliedCheck' */

    /* Update for UnitDelay: '<S99>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_ay = rtb_NOT5;

    /* Update for UnitDelay: '<S99>/Unit Delay1' */
    BPSR_ac_DW.UnitDelay1_DSTATE = rtb_GreaterThanorEqual;

    /* Update for UnitDelay: '<S66>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_gh = VeBPSD_b_LrnRestPosFailed;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BrakeVoltSelectANDPedalPercentage'
     */
    /* Outputs for Enabled SubSystem: '<S10>/Applied' incorporates:
     *  EnablePort: '<S14>/Enable'
     */
    /* RelationalOperator: '<S10>/Comparison12' incorporates:
     *  Constant: '<S20>/Constant'
     */
    if (rtb_TmpSignalConversionAtVeBRKR_e_BrkPed == CeBRKR_e_BrkApplied)
    {
        /* Merge: '<S10>/Merge' incorporates:
         *  Constant: '<S14>/TRUE Constant'
         *  SignalConversion generated from: '<S14>/Out'
         */
        VeBPSC_b_BrkPedalSW = true;
    }

    /* End of RelationalOperator: '<S10>/Comparison12' */
    /* End of Outputs for SubSystem: '<S10>/Applied' */

    /* Outputs for Enabled SubSystem: '<S10>/NotApplied' incorporates:
     *  EnablePort: '<S33>/Enable'
     */
    /* RelationalOperator: '<S10>/Comparison13' incorporates:
     *  Constant: '<S19>/Constant'
     */
    if (CeBRKR_e_BrkNotApplied == rtb_TmpSignalConversionAtVeBRKR_e_BrkPed)
    {
        /* Merge: '<S10>/Merge' incorporates:
         *  Constant: '<S33>/FALSE Constant'
         *  SignalConversion generated from: '<S33>/Out'
         */
        VeBPSC_b_BrkPedalSW = false;
    }

    /* End of RelationalOperator: '<S10>/Comparison13' */
    /* End of Outputs for SubSystem: '<S10>/NotApplied' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/BPSR_MedTEB' */

    /* Inport: '<Root>/VeCSVR_a_VehAccel' */
    (void)Rte_Read_VeCSVR_a_VehAccel_Value(&tmpRead_1);

    /* Inport: '<Root>/VeAPSR_b_AccelPedalEffPositionFA' */
    (void)Rte_Read_VeAPSR_b_AccelPedalEffPositionFA_Value(&rtb_AND);

    /* Inport: '<Root>/VeAATR_b_EstAmbAirTempFA' */
    (void)Rte_Read_VeAATR_b_EstAmbAirTempFA_Value(&tmpRead_0);

    /* Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition' */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/BPSR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BrakeVoltSelectANDPedalPercentage'
     */
    /* Outputs for Atomic SubSystem: '<S10>/Limiter1' */
    /* Switch: '<S32>/Switch1' incorporates:
     *  Constant: '<S10>/Constant Value6'
     *  RelationalOperator: '<S32>/Relational Operator'
     */
    if (1024.0F < rtb_TmpSignalConversionAtVeCSVR_v_VehSpd)
    {
        /* Switch: '<S10>/Switch6' */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = 1024.0F;
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Switch: '<S32>/Switch' incorporates:
     *  Constant: '<S10>/Constant Value7'
     *  RelationalOperator: '<S32>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd > 0.0F)
    {
        /* Switch: '<S32>/Switch' */
        VeBPSC_v_UnsgndVehicleSpeed = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    }
    else
    {
        /* Switch: '<S32>/Switch' */
        VeBPSC_v_UnsgndVehicleSpeed = 0.0F;
    }

    /* End of Switch: '<S32>/Switch' */
    /* End of Outputs for SubSystem: '<S10>/Limiter1' */

    /* Logic: '<S15>/Logical1' incorporates:
     *  Constant: '<S15>/FALSEConstant'
     *  Constant: '<S43>/Calib'
     *  Constant: '<S44>/Calib'
     *  Constant: '<S45>/Calib'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S47>/Calib'
     *  Logic: '<S15>/Logical'
     *  Logic: '<S15>/Logical3'
     *  Logic: '<S15>/Logical5'
     *  Logic: '<S15>/Logical6'
     *  Logic: '<S15>/Logical7'
     *  RelationalOperator: '<S15>/Comparison1'
     *  RelationalOperator: '<S15>/Comparison2'
     *  RelationalOperator: '<S15>/Comparison3'
     *  RelationalOperator: '<S15>/Comparison4'
     *  RelationalOperator: '<S15>/Comparison5'
     *  RelationalOperator: '<S15>/Comparison6'
     */
    VeBPSC_b_BrkStsNotAppImd = ((((((VeBPSC_b_BrkPedalSW == false) &&
        (((rtb_TmpSignalConversionAtVePLTR_T_EstAmb > KeBPSR_T_AmbTempLo) &&
          (rtb_TmpSignalConversionAtVePLTR_T_EstAmb < KeBPSR_T_AmbTempHi)) &&
         (!tmpRead_0))) && (VeBPSC_v_UnsgndVehicleSpeed > KeBPSR_v_VehSpdThresh))
        && ((!rtb_AND) && (tmpRead > KeBPSR_Pct_AccelPdlPosThresh))) &&
        (tmpRead_1 > KeBPSR_a_VehAccelThresh)) &&
        (!rtb_TmpSignalConversionAtVeBRKR_b_BrkPed));

    /* Outputs for Atomic SubSystem: '<S15>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S48>/EdgeRising' */
    /* Logic: '<S49>/AND' incorporates:
     *  Logic: '<S49>/OR1'
     *  UnitDelay: '<S49>/Unit Delay'
     */
    rtb_AND = ((VeBPSC_b_BrkStsNotAppImd) && (!BPSR_ac_DW.UnitDelay_DSTATE_ls));

    /* Update for UnitDelay: '<S49>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE_ls = VeBPSC_b_BrkStsNotAppImd;

    /* End of Outputs for SubSystem: '<S48>/EdgeRising' */

    /* Switch: '<S48>/Switch1' incorporates:
     *  Logic: '<S48>/OR'
     *  Logic: '<S48>/OR1'
     */
    if ((!VeBPSC_b_BrkStsNotAppImd) || rtb_AND)
    {
        /* Sum: '<S48>/Summation' incorporates:
         *  Constant: '<S48>/Constant Value1'
         *  UnitDelay: '<S48>/Unit Delay'
         */
        BPSR_ac_DW.UnitDelay_DSTATE_i = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S48>/Summation' incorporates:
         *  Constant: '<S48>/Constant Value'
         *  UnitDelay: '<S48>/Unit Delay'
         */
        BPSR_ac_DW.UnitDelay_DSTATE_i = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPSR_ac_DW.UnitDelay_DSTATE_i));

        /* MinMax: '<S48>/Minimum' incorporates:
         *  Constant: '<S42>/Calib'
         */
        if (KeBPSR_Cnt_BrkStsNotApplDebSamples < BPSR_ac_DW.UnitDelay_DSTATE_i)
        {
            /* Sum: '<S48>/Summation' */
            BPSR_ac_DW.UnitDelay_DSTATE_i = KeBPSR_Cnt_BrkStsNotApplDebSamples;
        }

        /* End of MinMax: '<S48>/Minimum' */
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Logic: '<S48>/AND' incorporates:
     *  Constant: '<S42>/Calib'
     *  RelationalOperator: '<S48>/Greater  Than'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    VeBPSC_b_BrkStsNotApp = ((VeBPSC_b_BrkStsNotAppImd) &&
        (BPSR_ac_DW.UnitDelay_DSTATE_i >= KeBPSR_Cnt_BrkStsNotApplDebSamples));

    /* End of Outputs for SubSystem: '<S15>/Turn On Delay Sample' */

    /* If: '<S15>/If' incorporates:
     *  Constant: '<S15>/TRUEConstant'
     *  Constant: '<S15>/TRUEConstant1'
     *  Constant: '<S38>/Constant'
     *  Constant: '<S39>/Constant'
     *  Constant: '<S40>/Constant'
     *  Constant: '<S41>/Constant'
     *  Logic: '<S15>/Logical2'
     *  Logic: '<S15>/Logical4'
     *  RelationalOperator: '<S15>/Comparison7'
     *  RelationalOperator: '<S15>/Comparison8'
     */
    if (rtb_TmpSignalConversionAtVeBRKR_b_BrkPed == true)
    {
        /* Outputs for IfAction SubSystem: '<S15>/Case1' incorporates:
         *  ActionPort: '<S34>/Action Port'
         */
        BPSR_ac_Case1(CeBPSR_e_BrkSW1Fault, (&(VeBPSC_e_BrakeStatus)));

        /* End of Outputs for SubSystem: '<S15>/Case1' */
    }
    else if ((VeBPSC_b_BrkPedalSW == true) &&
             (!rtb_TmpSignalConversionAtVeBRKR_b_BrkPed))
    {
        /* Outputs for IfAction SubSystem: '<S15>/Case2' incorporates:
         *  ActionPort: '<S35>/Action Port'
         */
        BPSR_ac_Case1(CeBPSR_e_BrkApplied, (&(VeBPSC_e_BrakeStatus)));

        /* End of Outputs for SubSystem: '<S15>/Case2' */
    }
    else if (VeBPSC_b_BrkStsNotApp)
    {
        /* Outputs for IfAction SubSystem: '<S15>/Case3' incorporates:
         *  ActionPort: '<S36>/Action Port'
         */
        BPSR_ac_Case1(CeBPSR_e_BrkNotApplied, (&(VeBPSC_e_BrakeStatus)));

        /* End of Outputs for SubSystem: '<S15>/Case3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S15>/Case4' incorporates:
         *  ActionPort: '<S37>/Action Port'
         */
        BPSR_ac_Case1(CeBPSR_e_UnKnown, (&(VeBPSC_e_BrakeStatus)));

        /* End of Outputs for SubSystem: '<S15>/Case4' */
    }

    /* End of If: '<S15>/If' */

    /* Switch: '<S10>/Switch5' incorporates:
     *  Constant: '<S25>/Calib'
     */
    if (KeBPSR_b_UseCalBrkPdlRestPos)
    {
        /* Switch: '<S10>/Switch6' incorporates:
         *  Constant: '<S22>/Calib'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = KeBPSR_U_CalBrkPdlRestPos;
    }
    else
    {
        /* Switch: '<S10>/Switch6' incorporates:
         *  DataStoreRead: '<S10>/Data Store Read'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = EeBPSR_U_LrndBrkPdlRestPos;
    }

    /* End of Switch: '<S10>/Switch5' */

    /* Switch: '<S10>/Switch6' incorporates:
     *  Constant: '<S26>/Calib'
     */
    if (KeBPSR_b_UseQickLrnRestPos)
    {
        /* Switch: '<S10>/Switch6' incorporates:
         *  Product: '<S10>/Product2'
         *  Sum: '<S10>/Sum2'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd =
            rtb_TmpSignalConversionAtVeBPSR_b_ECU_A2 ? (BPSR_ac_B.Switch -
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd) : 0.0F;
    }
    else
    {
        /* Switch: '<S10>/Switch6' incorporates:
         *  Sum: '<S10>/Sum2'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = BPSR_ac_B.Switch -
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    }

    /* End of Switch: '<S10>/Switch6' */

    /* MinMax: '<S10>/MinMax1' incorporates:
     *  Constant: '<S10>/Constant Value8'
     */
    VeBPSC_U_BrakePdlDeltVolt = fmaxf(0.0F,
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* Outputs for Atomic SubSystem: '<S10>/Digital Lowpass Reset Enabled2' */
    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S10>/Constant Value9'
     *  Constant: '<S10>/FALSEConstant7'
     *  Constant: '<S10>/TRUEConstant3'
     *  Switch: '<S18>/Switch2'
     *  UnitDelay: '<S18>/Unit Delay'
     */
    if (false)
    {
        BPSR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
    }
    else
    {
        if (true)
        {
            /* UnitDelay: '<S18>/Unit Delay' incorporates:
             *  Constant: '<S27>/Calib'
             *  Product: '<S18>/Multiplication'
             *  Sum: '<S18>/Subtraction'
             *  Sum: '<S18>/Summation'
             *  Switch: '<S18>/Switch2'
             */
            BPSR_ac_DW.UnitDelay_DSTATE_f += (VeBPSC_U_BrakePdlDeltVolt -
                BPSR_ac_DW.UnitDelay_DSTATE_f) * KeBPSR_k_BrkPdlSensorFiltCnst;
        }
    }

    /* End of Switch: '<S18>/Switch1' */
    /* End of Outputs for SubSystem: '<S10>/Digital Lowpass Reset Enabled2' */

    /* Switch: '<S10>/Switch4' incorporates:
     *  Constant: '<S23>/Calib'
     *  Switch: '<S10>/Switch3'
     */
    if (KeBPSR_b_BrakePdlDeltVoltEnblOvrr)
    {
        /* Switch: '<S10>/Switch4' incorporates:
         *  Constant: '<S21>/Calib'
         */
        VeBPSC_U_BrakePdlDeltVoltFilt = KeBPSR_U_BrakePdlDeltVoltOvrr;
    }
    else if (rtb_NOT4)
    {
        /* Switch: '<S10>/Switch3' incorporates:
         *  Constant: '<S10>/Constant Value3'
         *  Switch: '<S10>/Switch4'
         */
        VeBPSC_U_BrakePdlDeltVoltFilt = 0.0F;
    }
    else
    {
        /* Switch: '<S10>/Switch4' incorporates:
         *  Switch: '<S10>/Switch3'
         *  UnitDelay: '<S18>/Unit Delay'
         */
        VeBPSC_U_BrakePdlDeltVoltFilt = BPSR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S10>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S10>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S16>/Switch1' incorporates:
     *  Constant: '<S10>/Constant Value1'
     *  Constant: '<S10>/Constant Value11'
     *  Switch: '<S16>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S16>/Switch1' incorporates:
         *  Constant: '<S10>/Constant Value2'
         */
        VeBPSR_U_BrkDeltVoltShape = 0.0F;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S16>/Switch1' incorporates:
             *  Lookup_n-D: '<S31>/Vector'
             *  Product: '<S16>/Multiplication'
             *  Sum: '<S10>/Sum1'
             *  Sum: '<S16>/Subtraction'
             *  Sum: '<S16>/Summation'
             *  Switch: '<S16>/Switch2'
             *  Switch: '<S32>/Switch'
             *  UnitDelay: '<S10>/Unit Delay'
             *  UnitDelay: '<S16>/Unit Delay'
             */
            VeBPSR_U_BrkDeltVoltShape = (look2_iflf_binlca_16a
                (VeBPSC_v_UnsgndVehicleSpeed, VeBPSC_U_BrakePdlDeltVoltFilt -
                 BPSR_ac_DW.UnitDelay_DSTATE, ((const float32 *)
                &(KxBPSR_k_BrkVoltFltCoeff[0])), ((const float32 *)
                &(KyBPSR_k_BrkVoltFltCoeff[0])), ((const float32 *)
                &(KtBPSR_k_BrkVoltFltCoeff[0])), (const uint32*)
                 BPSR_ac_ConstP.Vector_maxIndex, 9U) *
                (VeBPSC_U_BrakePdlDeltVoltFilt - VeBPSR_U_BrkDeltVoltShape)) +
                VeBPSR_U_BrkDeltVoltShape;
        }
    }

    /* End of Switch: '<S16>/Switch1' */
    /* End of Outputs for SubSystem: '<S10>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S10>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S10>/Constant Value4'
     *  Constant: '<S10>/Constant Value5'
     *  Logic: '<S10>/Logical2'
     *  Switch: '<S17>/Switch2'
     *  UnitDelay: '<S17>/Unit Delay'
     */
    if (!VeBPSC_b_BrkPedalSW)
    {
        BPSR_ac_DW.UnitDelay_DSTATE_o = 0.0F;
    }
    else
    {
        if (true)
        {
            /* Lookup_n-D: '<S30>/Vector' incorporates:
             *  Product: '<S10>/Product'
             *  Switch: '<S17>/Switch2'
             */
            rtb_TmpSignalConversionAtVePLTR_T_EstAmb = VeBPSC_b_BrkPedalSW ?
                VeBPSC_v_UnsgndVehicleSpeed : 0.0F;

            /* Lookup_n-D: '<S29>/Vector' incorporates:
             *  Lookup_n-D: '<S30>/Vector'
             *  Switch: '<S17>/Switch2'
             */
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVePLTR_T_EstAmb, ((const float32 *)
                  &(KxBPSR_U_BrkSWRngLimit[0])), ((const float32 *)
                  &(KtBPSR_U_BrkSWRngLimit[0])), 6U);

            /* Lookup_n-D: '<S30>/Vector' incorporates:
             *  Switch: '<S17>/Switch2'
             */
            rtb_TmpSignalConversionAtVePLTR_T_EstAmb = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVePLTR_T_EstAmb, ((const float32 *)
                  &(KxBPSR_k_BrkSWFiltCnst[0])), ((const float32 *)
                  &(KtBPSR_k_BrkSWFiltCnst[0])), 6U);

            /* UnitDelay: '<S17>/Unit Delay' incorporates:
             *  Product: '<S17>/Multiplication'
             *  Sum: '<S17>/Subtraction'
             *  Sum: '<S17>/Summation'
             *  Switch: '<S17>/Switch2'
             */
            BPSR_ac_DW.UnitDelay_DSTATE_o +=
                (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd -
                 BPSR_ac_DW.UnitDelay_DSTATE_o) *
                rtb_TmpSignalConversionAtVePLTR_T_EstAmb;
        }
    }

    /* End of Switch: '<S17>/Switch1' */
    /* End of Outputs for SubSystem: '<S10>/Digital Lowpass Reset Enabled1' */

    /* Product: '<S10>/Product1' incorporates:
     *  UnitDelay: '<S17>/Unit Delay'
     */
    VeBPSC_U_BrkSWSimVolt = VeBPSC_b_BrkPedalSW ? BPSR_ac_DW.UnitDelay_DSTATE_o :
        0.0F;

    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S24>/Calib'
     *  Switch: '<S10>/Switch1'
     */
    if (KeBPSR_b_UseBrkSW)
    {
        /* Switch: '<S10>/Switch2' incorporates:
         *  Logic: '<S10>/Logical1'
         */
        if (!rtb_TmpSignalConversionAtVeBRKR_b_BrkPed)
        {
            /* Switch: '<S10>/Switch' */
            VeBPSC_U_BrkPdlDeltVoltReq = VeBPSC_U_BrkSWSimVolt;
        }
        else
        {
            /* Switch: '<S10>/Switch' incorporates:
             *  Constant: '<S10>/Constant Value'
             */
            VeBPSC_U_BrkPdlDeltVoltReq = 0.0F;
        }
    }
    else if (rtb_NOT4)
    {
        /* Switch: '<S10>/Switch2' incorporates:
         *  Logic: '<S10>/Logical1'
         */
        if (!rtb_TmpSignalConversionAtVeBRKR_b_BrkPed)
        {
            /* Switch: '<S10>/Switch1' incorporates:
             *  Switch: '<S10>/Switch'
             */
            VeBPSC_U_BrkPdlDeltVoltReq = VeBPSC_U_BrkSWSimVolt;
        }
        else
        {
            /* Switch: '<S10>/Switch1' incorporates:
             *  Constant: '<S10>/Constant Value'
             *  Switch: '<S10>/Switch'
             */
            VeBPSC_U_BrkPdlDeltVoltReq = 0.0F;
        }
    }
    else
    {
        /* Switch: '<S10>/Switch' incorporates:
         *  Switch: '<S10>/Switch1'
         */
        VeBPSC_U_BrkPdlDeltVoltReq = VeBPSR_U_BrkDeltVoltShape;
    }

    /* End of Switch: '<S10>/Switch' */

    /* SignalConversion generated from: '<S10>/UseQickLrnRestPos' incorporates:
     *  Constant: '<S26>/Calib'
     */
    BPSR_ac_B.OutportBufferForUseQickLrnRestPos = KeBPSR_b_UseQickLrnRestPos;

    /* Update for UnitDelay: '<S10>/Unit Delay' */
    BPSR_ac_DW.UnitDelay_DSTATE = VeBPSR_U_BrkDeltVoltShape;

    /* Outport: '<Root>/VeBPSR_Pct_BrakePedalPct' incorporates:
     *  Lookup_n-D: '<S28>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPSC_Pct_BrakePedalPct'
     *  Switch: '<S10>/Switch'
     */
    (void)Rte_Write_VeBPSR_Pct_BrakePedalPct_Value(look1_iflf_binlca_16a
        (VeBPSC_U_BrkPdlDeltVoltReq, ((const float32 *)
        &(KxBPSR_Pct_SenTransferFunc[0])), ((const float32 *)
        &(KtBPSR_Pct_SenTransferFunc[0])), 6U));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBPSR_b_BrkPdlSensorFail' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPSD_b_BrkPdlSensorFail_out'
     */
    (void)Rte_Write_VeBPSR_b_BrkPdlSensorFail_Value(rtb_NOT4);

    /* Outport: '<Root>/VeBPSR_U_BrakePedalVoltRaw' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPSI_U_BrakePedalVolt'
     */
    (void)Rte_Write_VeBPSR_U_BrakePedalVoltRaw_Value(SignalConversion);

    /* Outport: '<Root>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi' incorporates:
     *  Merge: '<S121>/Merge'
     *  SignalConversion generated from: '<S1>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi'
     */
    (void)Rte_Write_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi_Value(BPSR_ac_B.Merge_h);

    /* Outport: '<Root>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo' incorporates:
     *  Merge: '<S120>/Merge'
     *  SignalConversion generated from: '<S1>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo'
     */
    (void)Rte_Write_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo_Value(BPSR_ac_B.Merge_j);

    /* Outport: '<Root>/VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf' incorporates:
     *  Merge: '<S98>/Merge'
     *  SignalConversion generated from: '<S1>/VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf'
     */
    (void)Rte_Write_VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf_Value(BPSR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<Root>/BPSR_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BPSR_1

FUNC(void, BPSR_CODE) FsftBPSR_U_BrakePedal_VoltRaw(void)
{

#if Rte_SysCon_Variant_BPSR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftBPSR_U_BrakePedal_VoltRaw' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S4>/FsftBPSR_U_BrakePedal_VoltRawChrt'
     *  SignalConversion generated from: '<S4>/VeBPSR_U_BrakePedal_VoltRaw_write'
     */
    /* Gateway: FsftBPSR_U_BrakePedal_VoltRaw/FsftBPSR_U_BrakePedal_VoltRawChrt */
    /* During: FsftBPSR_U_BrakePedal_VoltRaw/FsftBPSR_U_BrakePedal_VoltRawChrt */
    /* Entry Internal: FsftBPSR_U_BrakePedal_VoltRaw/FsftBPSR_U_BrakePedal_VoltRawChrt */
    /* Transition: '<S189>:2' */
    Rte_IrvWrite_FsftBPSR_U_BrakePedal_VoltRaw_VeBPSI_U_BrakePedalVoltRaw_Init_write_IRV
        (KeBPSR_U_BrakePedal_VoltRaw_Dflt);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  Chart: '<S4>/FsftBPSR_U_BrakePedal_VoltRawChrt'
     *  SignalConversion generated from: '<S4>/VeBPSR_b_BrakePedal_VoltRawFA_write'
     */
    Rte_IrvWrite_FsftBPSR_U_BrakePedal_VoltRaw_VeBPSI_b_BrakePedalVoltRawFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPSR_U_BrakePedal_VoltRaw' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BPSR_1

FUNC(void, BPSR_CODE) FsftBPSR_pct_BrakePedalPct(void)
{

#if Rte_SysCon_Variant_BPSR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftBPSR_pct_BrakePedalPct' */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S5>/FsftBPSR_pct_BrakePedalPctChrt'
     *  SignalConversion generated from: '<S5>/VeBPSR_b_BrakePedalPctFA_write'
     */
    /* Gateway: FsftBPSR_pct_BrakePedalPct/FsftBPSR_pct_BrakePedalPctChrt */
    /* During: FsftBPSR_pct_BrakePedalPct/FsftBPSR_pct_BrakePedalPctChrt */
    /* Entry Internal: FsftBPSR_pct_BrakePedalPct/FsftBPSR_pct_BrakePedalPctChrt */
    /* Transition: '<S190>:2' */
    Rte_IrvWrite_FsftBPSR_pct_BrakePedalPct_VeBPSI_b_BrkPedalPctFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPSR_pct_BrakePedalPct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BPSR_1

FUNC(void, BPSR_CODE) PokeBPSR_U_BrakePedal_VoltRaw(VAR(float32, AUTOMATIC)
    LeBPSR_U_BrakePedal_VoltRaw, VAR(boolean, AUTOMATIC)
    LeBPSR_b_BrakePedal_VoltRawFA)
{

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_LeBPSR_b_BrakePedal_VoltRawFA_out_h;

#endif

#if !Rte_SysCon_Variant_BPSR_1

    UNUSED_PARAMETER(LeBPSR_U_BrakePedal_VoltRaw);

#endif

#if !Rte_SysCon_Variant_BPSR_1

    UNUSED_PARAMETER(LeBPSR_b_BrakePedal_VoltRawFA);

#endif

#if Rte_SysCon_Variant_BPSR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPSR_U_BrakePedal_VoltRaw' */
    /* Chart: '<S6>/PokeBPSR_U_BrakePedal_VoltRawChrt' incorporates:
     *  SignalConversion generated from: '<S6>/LeBPSR_b_BrakePedal_VoltRawFA'
     */
    /* Gateway: PokeBPSR_U_BrakePedal_VoltRaw/PokeBPSR_U_BrakePedal_VoltRawChrt */
    /* During: PokeBPSR_U_BrakePedal_VoltRaw/PokeBPSR_U_BrakePedal_VoltRawChrt */
    /* Entry Internal: PokeBPSR_U_BrakePedal_VoltRaw/PokeBPSR_U_BrakePedal_VoltRawChrt */
    /* Transition: '<S191>:2' */
    if (!LeBPSR_b_BrakePedal_VoltRawFA)
    {
        /* SignalConversion generated from: '<S6>/VeBPSR_U_BrakePedal_VoltRaw_write' incorporates:
         *  Merge: '<Root>/Merge_4'
         *  SignalConversion generated from: '<S6>/LeBPSR_U_BrakePedal_VoltRaw'
         */
        /* Transition: '<S191>:3' */
        /* Transition: '<S191>:15' */
        Rte_IrvWrite_PokeBPSR_U_BrakePedal_VoltRaw_VeBPSI_U_BrakePedalVoltRaw_Init_write_IRV
            (LeBPSR_U_BrakePedal_VoltRaw);
        rtb_LeBPSR_b_BrakePedal_VoltRawFA_out_h = false;

        /* Transition: '<S191>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S6>/VeBPSR_U_BrakePedal_VoltRaw_write' incorporates:
         *  Merge: '<Root>/Merge_4'
         */
        /* Transition: '<S191>:4' */
        Rte_IrvWrite_PokeBPSR_U_BrakePedal_VoltRaw_VeBPSI_U_BrakePedalVoltRaw_Init_write_IRV
            (KeBPSR_U_BrakePedal_VoltRaw_Dflt);
        rtb_LeBPSR_b_BrakePedal_VoltRawFA_out_h = true;
    }

    /* End of Chart: '<S6>/PokeBPSR_U_BrakePedal_VoltRawChrt' */

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S6>/VeBPSR_b_BrakePedal_VoltRawFA_write'
     * */
    Rte_IrvWrite_PokeBPSR_U_BrakePedal_VoltRaw_VeBPSI_b_BrakePedalVoltRawFA_Init_write_IRV
        (rtb_LeBPSR_b_BrakePedal_VoltRawFA_out_h);

    /* End of Outputs for SubSystem: '<Root>/PokeBPSR_U_BrakePedal_VoltRaw' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BPSR_1

FUNC(void, BPSR_CODE) PokeBPSR_b_ECU_A2D_Failure(VAR(boolean, AUTOMATIC)
    LeBPSR_b_ECU_A2D_Failure)
{

#if !Rte_SysCon_Variant_BPSR_1

    UNUSED_PARAMETER(LeBPSR_b_ECU_A2D_Failure);

#endif

#if Rte_SysCon_Variant_BPSR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPSR_b_ECU_A2D_Failure' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S7>/LeBPSR_b_ECU_A2D_Failure'
     *  SignalConversion generated from: '<S7>/VeBPSR_b_ECU_A2D_Failure_write'
     */
    /* Gateway: PokeBPSR_b_ECU_A2D_Failure/PokeBPSR_b_ECU_A2D_FailureChrt */
    /* During: PokeBPSR_b_ECU_A2D_Failure/PokeBPSR_b_ECU_A2D_FailureChrt */
    /* Entry Internal: PokeBPSR_b_ECU_A2D_Failure/PokeBPSR_b_ECU_A2D_FailureChrt */
    /* Transition: '<S192>:2' */
    Rte_IrvWrite_PokeBPSR_b_ECU_A2D_Failure_VeBPSI_b_BrkPdlSensA2DFailure_Init_write_IRV
        (LeBPSR_b_ECU_A2D_Failure);

    /* End of Outputs for SubSystem: '<Root>/PokeBPSR_b_ECU_A2D_Failure' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BPSR_1

FUNC(void, BPSR_CODE) PokeBPSR_pct_BrakePedalPct(VAR(float32, AUTOMATIC)
    LeBPSR_pct_BrakePedalPct, VAR(boolean, AUTOMATIC) LeBPSR_b_BrakePedalPctFA)
{

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_LeBPSR_b_BrakePedalPctFA_out_p;

#endif

#if !Rte_SysCon_Variant_BPSR_1

    UNUSED_PARAMETER(LeBPSR_pct_BrakePedalPct);

#endif

#if !Rte_SysCon_Variant_BPSR_1

    UNUSED_PARAMETER(LeBPSR_b_BrakePedalPctFA);

#endif

#if Rte_SysCon_Variant_BPSR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPSR_pct_BrakePedalPct' */
    /* Chart: '<S8>/PokeBPSR_pct_BrakePedalPctChrt' incorporates:
     *  SignalConversion generated from: '<S8>/LeBPSR_b_BrakePedalPctFA'
     *  SignalConversion generated from: '<S8>/LeBPSR_pct_BrakePedalPct'
     */
    /* Gateway: PokeBPSR_pct_BrakePedalPct/PokeBPSR_pct_BrakePedalPctChrt */
    /* During: PokeBPSR_pct_BrakePedalPct/PokeBPSR_pct_BrakePedalPctChrt */
    /* Entry Internal: PokeBPSR_pct_BrakePedalPct/PokeBPSR_pct_BrakePedalPctChrt */
    /* Transition: '<S193>:2' */
    if (!LeBPSR_b_BrakePedalPctFA)
    {
        /* Transition: '<S193>:3' */
        /* Transition: '<S193>:15' */
        BPSR_ac_B.LeBPSR_pct_BrakePedalPct_out = LeBPSR_pct_BrakePedalPct;
        rtb_LeBPSR_b_BrakePedalPctFA_out_p = false;

        /* Transition: '<S193>:18' */
    }
    else
    {
        /* Transition: '<S193>:4' */
        rtb_LeBPSR_b_BrakePedalPctFA_out_p = true;
    }

    /* End of Chart: '<S8>/PokeBPSR_pct_BrakePedalPctChrt' */

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S8>/VeBPSR_b_BrakePedalPctFA_write'
     * */
    Rte_IrvWrite_PokeBPSR_pct_BrakePedalPct_VeBPSI_b_BrkPedalPctFA_Init_write_IRV
        (rtb_LeBPSR_b_BrakePedalPctFA_out_p);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S8>/VeBPSR_pct_BrakePedalPct_write'
     * */
    Rte_IrvWrite_PokeBPSR_pct_BrakePedalPct_VeBPSI_Pct_BrakePedalPct_Init_write_IRV
        (BPSR_ac_B.LeBPSR_pct_BrakePedalPct_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPSR_pct_BrakePedalPct' */
#endif

}

#endif

/* Output function */
FUNC(void, BPSR_CODE) BPSR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/BPSR_PwrOff'
     */
    /* Outport: '<Root>/EeBPSR_U_LrndBrkPdlRestPos_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeBPSR_U_LrndBrkPdlRestPos'
     */
    (void)Rte_Write_EeBPSR_U_LrndBrkPdlRestPos_EeBPSR_U_LrndBrkPdlRestPos
        (EeBPSR_U_LrndBrkPdlRestPos);

    /* Outport: '<Root>/NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP'
     */
    (void)
        Rte_Write_NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP_NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP
        (BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP);

    /* Outport: '<Root>/NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP'
     */
    (void)
        Rte_Write_NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP_NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP
        (BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP);

    /* Outport: '<Root>/NeBPSD_Cnt_BrkPdlSnsPerf_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBPSD_Cnt_BrkPdlSnsPerf_MFOP'
     */
    (void)Rte_Write_NeBPSD_Cnt_BrkPdlSnsPerf_MFOP_NeBPSD_Cnt_BrkPdlSnsPerf_MFOP
        (BPSR_ac_DW.NeBPSD_Cnt_BrkPdlSnsPerf_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, BPSR_CODE) BPSR_PwrOn(void)
{

#if Rte_SysCon_Variant_BPSR_1

    float32 rtb_OutportBufferForVeBPSI_Pct_BrakePeda;

#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 rtb_OutportBufferForVeBPSI_U_BrakePedalV;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_OutportBufferForVeBPSI_b_BrakePedalV;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_OutportBufferForVeBPSI_b_BrkPdlSensA;

#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean rtb_OutportBufferForVeBPSI_b_BrkPedalPct;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BPSR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S182>/NeBPSD_Cnt_BrkPdlSnsPerf_MFOP' incorporates:
     *  Inport: '<Root>/NeBPSD_Cnt_BrkPdlSnsPerf_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeBPSD_Cnt_BrkPdlSnsPerf_MFOP_Rx_NeBPSD_Cnt_BrkPdlSnsPerf_MFOP(
        &BPSR_ac_DW.NeBPSD_Cnt_BrkPdlSnsPerf_MFOP);

    /* DataStoreWrite: '<S182>/NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP' incorporates:
     *  Inport: '<Root>/NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP_Rx_NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP
        (&BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP);

    /* DataStoreWrite: '<S182>/NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP' incorporates:
     *  Inport: '<Root>/NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP_Rx_NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP
        (&BPSR_ac_DW.NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP);

    /* DataStoreWrite: '<S182>/EeBPSR_U_LrndBrkPdlRestPos' incorporates:
     *  Inport: '<Root>/EeBPSR_U_LrndBrkPdlRestPos_PM_In'
     */
    (void)Rte_Read_EeBPSR_U_LrndBrkPdlRestPos_Rx_EeBPSR_U_LrndBrkPdlRestPos
        ((&(EeBPSR_U_LrndBrkPdlRestPos)));

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/BPSO_Init'
     */
    /* SignalConversion generated from: '<S181>/VeBPSO_Pct_BrakePedalPct' */
    BPSR_ac_B.OutportBufferForVeBPSO_Pct_BrakePedalPct =
        BPSR_ac_ConstB.ConstantValue;

    /* SignalConversion generated from: '<S181>/VeBPSO_U_BrakePedalVoltRaw' */
    BPSR_ac_B.OutportBufferForVeBPSO_U_BrakePedalVoltR =
        BPSR_ac_ConstB.ConstantValue4_o;

    /* SignalConversion generated from: '<S181>/VeBPSR_b_BrkPdlSensorFail_Stub' */
    BPSR_ac_B.OutportBufferForVeBPSR_b_BrkPdlSensorFai =
        BPSR_ac_ConstB.FALSEConstant;

#if Rte_SysCon_Variant_BPSR_1

    /* Outputs for Function Call SubSystem: '<S3>/Init_BPSI' */
    /* Switch: '<S183>/Switch' incorporates:
     *  Constant: '<S183>/Constant Value'
     *  DataStoreRead: '<S183>/Data Store Read'
     *  RelationalOperator: '<S183>/Comparison1'
     */
    if (12.0F >= EeBPSR_U_LrndBrkPdlRestPos)
    {
        /* Switch: '<S183>/Switch' incorporates:
         *  Constant: '<S185>/Calib'
         */
        VeBPSI_U_LrndBrkPdlRestPos_Init = KeBPSI_U_InitLrndBrkPdlRestPos;
    }
    else
    {
        /* Switch: '<S183>/Switch' incorporates:
         *  DataStoreRead: '<S183>/Data Store Read1'
         */
        VeBPSI_U_LrndBrkPdlRestPos_Init = EeBPSR_U_LrndBrkPdlRestPos;
    }

    /* End of Switch: '<S183>/Switch' */

    /* DataStoreWrite: '<S183>/Data Store Write' */
    EeBPSR_U_LrndBrkPdlRestPos = VeBPSI_U_LrndBrkPdlRestPos_Init;

    /* SignalConversion generated from: '<S183>/VeBPSI_b_BrkPdlSensA2DFailure_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_b_BrkPdlSensA2DFa =
        BPSR_ac_ConstB.FALSEConstant1;

    /* SignalConversion generated from: '<S183>/VeBPSI_U_BrakePedalVoltRaw_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_U_BrakePedalVoltR =
        BPSR_ac_ConstB.ConstantValue4;

    /* SignalConversion generated from: '<S183>/VeBPSI_b_BrakePedalVoltRawFA_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_b_BrakePedalVoltR =
        BPSR_ac_ConstB.FALSEConstant5;

    /* SignalConversion generated from: '<S183>/VeBPSI_Pct_BrakePedalPct_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_Pct_BrakePedalPct =
        BPSR_ac_ConstB.ConstantValue1;

    /* SignalConversion generated from: '<S183>/VeBPSI_b_BrkPedalPctFA_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_b_BrkPedalPctFA_I =
        BPSR_ac_ConstB.FALSEConstant2;

    /* End of Outputs for SubSystem: '<S3>/Init_BPSI' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S184>/VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf' incorporates:
     *  Constant: '<S186>/Constant'
     */
    BPSR_ac_B.OutportBufferForVeBPSR_e_FaultSts_BrkPdl = BPSR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S184>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi' incorporates:
     *  Constant: '<S187>/Constant'
     */
    BPSR_ac_B.OutportBufferForVeBPSR_e_FaultSts_BrkP_d =
        BPSR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S184>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo' incorporates:
     *  Constant: '<S188>/Constant'
     */
    BPSR_ac_B.OutportBufferForVeBPSR_e_FaultSts_BrkP_i =
        BPSR_ac_ConstB.Constant_f;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi' incorporates:
     *  SignalConversion generated from: '<S184>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi'
     *  SignalConversion generated from: '<S3>/R_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi'
     */
    (void)Rte_Write_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi_Value
        (BPSR_ac_B.OutportBufferForVeBPSR_e_FaultSts_BrkP_d);

    /* Outport: '<Root>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo' incorporates:
     *  SignalConversion generated from: '<S184>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo'
     *  SignalConversion generated from: '<S3>/R_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo'
     */
    (void)Rte_Write_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo_Value
        (BPSR_ac_B.OutportBufferForVeBPSR_e_FaultSts_BrkP_i);

    /* Outport: '<Root>/VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S184>/VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf'
     */
    (void)Rte_Write_VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf_Value
        (BPSR_ac_B.OutportBufferForVeBPSR_e_FaultSts_BrkPdl);

    /* SignalConversion generated from: '<S3>/VeBPSI_Pct_BrakePedalPct_Init_write' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPSI_U_BrakePedalVoltRaw_Init_write'
     *  SignalConversion generated from: '<S3>/VeBPSI_b_BrakePedalVoltRawFA_Init_write'
     *  SignalConversion generated from: '<S3>/VeBPSI_b_BrkPdlSensA2DFailure_Init_write'
     *  SignalConversion generated from: '<S3>/VeBPSI_b_BrkPedalPctFA_Init_write'
     */
#if Rte_SysCon_Variant_BPSR_1

    /* SignalConversion generated from: '<S3>/VeBPSI_Pct_BrakePedalPct_Init_write' */
    rtb_OutportBufferForVeBPSI_Pct_BrakePeda =
        BPSR_ac_B.OutportBufferForVeBPSI_Pct_BrakePedalPct;

    /* SignalConversion generated from: '<S3>/VeBPSI_U_BrakePedalVoltRaw_Init_write' */
    rtb_OutportBufferForVeBPSI_U_BrakePedalV =
        BPSR_ac_B.OutportBufferForVeBPSI_U_BrakePedalVoltR;

    /* SignalConversion generated from: '<S3>/VeBPSI_b_BrakePedalVoltRawFA_Init_write' */
    rtb_OutportBufferForVeBPSI_b_BrakePedalV =
        BPSR_ac_B.OutportBufferForVeBPSI_b_BrakePedalVoltR;

    /* SignalConversion generated from: '<S3>/VeBPSI_b_BrkPdlSensA2DFailure_Init_write' */
    rtb_OutportBufferForVeBPSI_b_BrkPdlSensA =
        BPSR_ac_B.OutportBufferForVeBPSI_b_BrkPdlSensA2DFa;

    /* SignalConversion generated from: '<S3>/VeBPSI_b_BrkPedalPctFA_Init_write' */
    rtb_OutportBufferForVeBPSI_b_BrkPedalPct =
        BPSR_ac_B.OutportBufferForVeBPSI_b_BrkPedalPctFA_I;

#endif

    /* End of SignalConversion generated from: '<S3>/VeBPSI_Pct_BrakePedalPct_Init_write' */

    /* Outport: '<Root>/VeBPSR_Pct_BrakePedalPct' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPSO_Pct_BrakePedalPct'
     */
    (void)Rte_Write_VeBPSR_Pct_BrakePedalPct_Value
        (BPSR_ac_B.OutportBufferForVeBPSO_Pct_BrakePedalPct);

    /* Outport: '<Root>/VeBPSR_U_BrakePedalVoltRaw' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPSO_U_BrakePedalVoltRaw'
     */
    (void)Rte_Write_VeBPSR_U_BrakePedalVoltRaw_Value
        (BPSR_ac_B.OutportBufferForVeBPSO_U_BrakePedalVoltR);

    /* Outport: '<Root>/VeBPSR_b_BrkPdlSensorFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPSR_b_BrkPdlSensorFail_Stub'
     */
    (void)Rte_Write_VeBPSR_b_BrkPdlSensorFail_Value
        (BPSR_ac_B.OutportBufferForVeBPSR_b_BrkPdlSensorFai);

    /* SignalConversion generated from: '<S3>/VeBPSI_Pct_BrakePedalPct_Init_write' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPSI_U_BrakePedalVoltRaw_Init_write'
     *  SignalConversion generated from: '<S3>/VeBPSI_b_BrakePedalVoltRawFA_Init_write'
     *  SignalConversion generated from: '<S3>/VeBPSI_b_BrkPdlSensA2DFailure_Init_write'
     *  SignalConversion generated from: '<S3>/VeBPSI_b_BrkPedalPctFA_Init_write'
     */
#if Rte_SysCon_Variant_BPSR_1

    /* Merge: '<Root>/Merge_2' */
    Rte_IrvWrite_BPSR_PwrOn_VeBPSI_Pct_BrakePedalPct_Init_write_IRV
        (rtb_OutportBufferForVeBPSI_Pct_BrakePeda);

    /* Merge: '<Root>/Merge_4' */
    Rte_IrvWrite_BPSR_PwrOn_VeBPSI_U_BrakePedalVoltRaw_Init_write_IRV
        (rtb_OutportBufferForVeBPSI_U_BrakePedalV);

    /* Merge: '<Root>/Merge_5' */
    Rte_IrvWrite_BPSR_PwrOn_VeBPSI_b_BrakePedalVoltRawFA_Init_write_IRV
        (rtb_OutportBufferForVeBPSI_b_BrakePedalV);

    /* Merge: '<Root>/Merge_1' */
    Rte_IrvWrite_BPSR_PwrOn_VeBPSI_b_BrkPdlSensA2DFailure_Init_write_IRV
        (rtb_OutportBufferForVeBPSI_b_BrkPdlSensA);

    /* Merge: '<Root>/Merge_3' */
    Rte_IrvWrite_BPSR_PwrOn_VeBPSI_b_BrkPedalPctFA_Init_write_IRV
        (rtb_OutportBufferForVeBPSI_b_BrkPedalPct);

#endif

    /* End of SignalConversion generated from: '<S3>/VeBPSI_Pct_BrakePedalPct_Init_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, BPSR_CODE) BPSR_ac_Init(void)
{
    /* Start for DataStoreMemory: '<Root>/DSM_1' */
    EeBPSR_U_LrndBrkPdlRestPos = 20.0F;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BPSR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/BPSO_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S181>/VeBPSO_Pct_BrakePedalPct' */
    BPSR_ac_B.OutportBufferForVeBPSO_Pct_BrakePedalPct =
        BPSR_ac_ConstB.ConstantValue;

    /* SystemInitialize for SignalConversion generated from: '<S181>/VeBPSO_U_BrakePedalVoltRaw' */
    BPSR_ac_B.OutportBufferForVeBPSO_U_BrakePedalVoltR =
        BPSR_ac_ConstB.ConstantValue4_o;

    /* SystemInitialize for SignalConversion generated from: '<S181>/VeBPSR_b_BrkPdlSensorFail_Stub' */
    BPSR_ac_B.OutportBufferForVeBPSR_b_BrkPdlSensorFai =
        BPSR_ac_ConstB.FALSEConstant;

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S184>/VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf' incorporates:
     *  Constant: '<S186>/Constant'
     */
    BPSR_ac_B.OutportBufferForVeBPSR_e_FaultSts_BrkPdl = BPSR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S184>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi' incorporates:
     *  Constant: '<S187>/Constant'
     */
    BPSR_ac_B.OutportBufferForVeBPSR_e_FaultSts_BrkP_d =
        BPSR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S184>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo' incorporates:
     *  Constant: '<S188>/Constant'
     */
    BPSR_ac_B.OutportBufferForVeBPSR_e_FaultSts_BrkP_i =
        BPSR_ac_ConstB.Constant_f;

#if Rte_SysCon_Variant_BPSR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeBPSR_pct_BrakePedalPct' */
    /* SystemInitialize for Function Call SubSystem: '<S3>/Init_BPSI' */
    /* SystemInitialize for SignalConversion generated from: '<S183>/VeBPSI_b_BrkPdlSensA2DFailure_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_b_BrkPdlSensA2DFa =
        BPSR_ac_ConstB.FALSEConstant1;

    /* SystemInitialize for SignalConversion generated from: '<S183>/VeBPSI_U_BrakePedalVoltRaw_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_U_BrakePedalVoltR =
        BPSR_ac_ConstB.ConstantValue4;

    /* SystemInitialize for SignalConversion generated from: '<S183>/VeBPSI_b_BrakePedalVoltRawFA_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_b_BrakePedalVoltR =
        BPSR_ac_ConstB.FALSEConstant5;

    /* SystemInitialize for SignalConversion generated from: '<S183>/VeBPSI_Pct_BrakePedalPct_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_Pct_BrakePedalPct =
        BPSR_ac_ConstB.ConstantValue1;

    /* SystemInitialize for SignalConversion generated from: '<S183>/VeBPSI_b_BrkPedalPctFA_Init' */
    BPSR_ac_B.OutportBufferForVeBPSI_b_BrkPedalPctFA_I =
        BPSR_ac_ConstB.FALSEConstant2;

    /* End of SystemInitialize for SubSystem: '<S3>/Init_BPSI' */

    /* SystemInitialize for Function Call SubSystem: '<Root>/BPSR_MedTEB' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BrkPdlSnsrPrcssng'
     */

    /* SystemInitialize for Merge: '<S98>/Merge' */
    BPSR_ac_B.Merge = CeDFIB_e_Init;

    /* SystemInitialize for Enabled SubSystem: '<S11>/BrkPdlPosSensLV1' */
    /* SystemInitialize for Merge: '<S120>/Merge' */
    BPSR_ac_B.Merge_j = CeDFIB_e_Init;

    /* SystemInitialize for Merge: '<S121>/Merge' */
    BPSR_ac_B.Merge_h = CeDFIB_e_Init;

    /* End of SystemInitialize for SubSystem: '<S11>/BrkPdlPosSensLV1' */

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BrakeVoltSelectANDPedalPercentage'
     */
    /* SystemInitialize for Merge: '<S15>/Merge' */
    VeBPSC_e_BrakeStatus = CeBPSR_e_UnKnown;

    /* SystemInitialize for Merge: '<S10>/Merge' */
    VeBPSC_b_BrkPedalSW = false;

    /* SystemInitialize for SignalConversion generated from: '<S10>/UseQickLrnRestPos' incorporates:
     *  Constant: '<S26>/Calib'
     */
    BPSR_ac_B.OutportBufferForUseQickLrnRestPos = KeBPSR_b_UseQickLrnRestPos;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/BPSR_MedTEB' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeBPSR_pct_BrakePedalPct' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeBPSR_Pct_BrakePedalPct' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeBPSR_Pct_BrakePedalPct_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPSR_U_BrakePedalVoltRaw' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeBPSR_U_BrakePedalVoltRaw_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPSR_b_BrkPdlSensorFail' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeBPSR_b_BrkPdlSensorFail_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf'
     */
    (void)Rte_Write_VeBPSR_e_FaultSts_BrkPdlPosSnsrPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi' incorporates:
     *  Merge: '<Root>/M_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi'
     */
    (void)Rte_Write_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo' incorporates:
     *  Merge: '<Root>/M_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo'
     */
    (void)Rte_Write_VeBPSR_e_FaultSts_BrkPdlPosSnsrCktLo_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
