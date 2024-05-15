/*
 * File: RTMR_ac.c
 *
 * Code generated for Simulink model 'RTMR_ac'.
 *
 * Model version                  : 9.173
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:54:21 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RTMR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* Named constants for Chart: '<S229>/ROLMtrA_Procedure' */
#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_IDLE                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7 || Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ROLCompletedbyDMPI  ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ROLFailed           ((uint8)3U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ROLRoutineActive    ((uint8)4U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ROLRoutineRequested ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ROLRoutineStarts    ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ReqDisableMtrA      ((uint8)3U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ReqDisableMtrA_OITR ((uint8)4U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ReqEngSpdCntrl      ((uint8)5U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ReqROLTestToDMPI    ((uint8)6U)
#endif

/* Named constants for Chart: '<S230>/ROLMtrB_Procedure' */
#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ROLRoutineActive_MtrB ((uint8)4U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ReqDisableMtrB_OITR ((uint8)3U)
#endif

#if Rte_SysCon_Variant_RTMR_7
#define RTMR_ac_IN_ReqROLTestToDMPI_c  ((uint8)4U)
#endif

/* Named constants for Chart: '<S228>/ROL_Procedure' */
#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_3
#define RTMR_ac_IN_ABORTED             ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RTMR_1
#define RTMR_ac_IN_COMPLETED           ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RTMR_1
#define RTMR_ac_IN_IDLE_c              ((uint8)3U)
#endif

#if Rte_SysCon_Variant_RTMR_1
#define RTMR_ac_IN_ROLCompletedbyMCP   ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RTMR_1
#define RTMR_ac_IN_ROLRequested        ((uint8)4U)
#endif

#if Rte_SysCon_Variant_RTMR_1
#define RTMR_ac_IN_RUNNING             ((uint8)5U)
#endif

#if Rte_SysCon_Variant_RTMR_1
#define RTMR_ac_IN_ReqDisableMtrB      ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RTMR_1
#define RTMR_ac_IN_ReqROLTest          ((uint8)3U)
#endif

#if Rte_SysCon_Variant_RTMR_1
#define RTMR_ac_IN_ReqStartEngine      ((uint8)4U)
#endif

/* Named constants for Chart: '<S187>/GPFRequestRoutine' */
#if Rte_SysCon_Variant_RTMR_3
#define RTMR_ac_IN_START               ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RTMR_3 || Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_STOP                ((uint8)3U)
#endif

/* Named constants for Chart: '<S41>/WED_ToothAbutment_Routine' */
#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_ACTIVE              ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_COMPLETE            ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_FAIL                ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_NOT_ACTIVE          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_WEDCloseRequest     ((uint8)2U)
#endif

#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_WEDClosed           ((uint8)3U)
#endif

#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_WEDFirstClosingRequest ((uint8)1U)
#endif

#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_WEDOpen             ((uint8)4U)
#endif

#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_WEDOpenRequest      ((uint8)5U)
#endif

#if Rte_SysCon_Variant_RTMR_8
#define RTMR_ac_IN_WaitTimeBeforeTAResults ((uint8)3U)
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_RTMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(uint8, RTMR_VAR_INIT) KaRTMR_i_SelectMtrInvrtrSts = 0U;/* Referenced by: '<S1004>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_7

static volatile CONST(uint16, RTMR_VAR_INIT) KeRTMR_Cnt_ROLTimeOut = 360U;/* Referenced by:
                                                                      * '<S235>/Calib'
                                                                      * '<S250>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(uint8, RTMR_VAR_INIT) KeRTMR_Cnt_WED_MaxNumOfClosures =
    10U;                     /* Referenced by: '<S982>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_L_ToothAbutLwrLim = 0.1F;
                            /* Referenced by: '<S1032>/KeVLDR_U_SysVltLwrLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_L_ToothAbutUprLim = 3.0F;
                            /* Referenced by: '<S1033>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_M_MtrBTrqThrToOpenK0 =
    40.0F;                             /* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT)
    KeRTMR_P_BattLTMinLim_Thrsh4EarlyTermin = 0.0F;/* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_Pct_BattSOCMaxLimit = 75.0F;/* Referenced by: '<S599>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_Pct_BattSOCMinLimit = 35.0F;/* Referenced by:
                                                                      * '<S600>/Calib'
                                                                      * '<S455>/Calib'
                                                                      * '<S924>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RTMR_3

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_Pct_MaxAccPdlPos_GPF =
    10.0F;                             /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_Pct_SOC_BattChrg_LSP =
    73.0F;                             /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_Pct_SOC_BattChrg_RSP =
    79.0F;                             /* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_BattChrgMaxAllowedTemp =
    45.0F;                             /* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_BattChrgSampTime = 0.025F;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_BattTempMaxLimit = 82.2F;/* Referenced by:
                                                                      * '<S617>/Calib'
                                                                      * '<S458>/Calib'
                                                                      * '<S927>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_BattTempMinLimit = 21.1F;/* Referenced by:
                                                                      * '<S618>/Calib'
                                                                      * '<S459>/Calib'
                                                                      * '<S928>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RTMR_1

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_EngCoolantTemp_ROL_LL =
    20.0F;                             /* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_MtrAInvrtrTempMaxLimit =
    93.3F;                             /* Referenced by: '<S623>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_MtrAInvrtrTempMinLimit =
    21.1F;                             /* Referenced by: '<S624>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_MtrATempMaxLimit = 93.3F;/* Referenced by: '<S605>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_MtrATempMinLimit = 21.1F;/* Referenced by: '<S606>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_MtrBInvrtrTempMaxLimit =
    93.3F;                             /* Referenced by: '<S629>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_MtrBInvrtrTempMinLimit =
    21.1F;                             /* Referenced by: '<S630>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_MtrBTempMaxLimit = 93.3F;/* Referenced by: '<S611>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_MtrBTempMinLimit = 21.1F;/* Referenced by: '<S612>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_TransOilTempMaxLimit =
    82.2F;                             /* Referenced by: '<S593>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_TransOilTempMinLimit =
    21.1F;                             /* Referenced by: '<S594>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_TransOilTemp_ROL_LL =
    25.0F;                             /* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_T_TransOilTemp_ROL_UL =
    100.0F;                            /* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_U_BattChrgMaxModVolt =
    10.0F;                             /* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_U_BattChrgMaxPackVolt =
    360.0F;                            /* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_U_SysVltLwrLim = 9.0F;
                            /* Referenced by: '<S1005>/KeVLDR_U_SysVltLwrLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_U_SysVltUprLim = 16.0F;
                            /* Referenced by: '<S1006>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_AE_ClutchLrnEnabled = 0;/* Referenced by: '<S791>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_AE_OrvdClutchLrnEnabled =
    0;                                 /* Referenced by: '<S792>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(boolean, RTMR_VAR_INIT)
    KeRTMR_b_BattLTMinLim4EarlyTermin_Enbl = 1;/* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_ClutchLrnSpdEnb = 0;/* Referenced by: '<S775>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_EnablEOLClutchLrn = 0;/* Referenced by: '<S793>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_EnblInhbtStrtStp_Chk = 0;/* Referenced by:
                                                                      * '<S472>/Calib'
                                                                      * '<S848>/Calib'
                                                                      * '<S937>/Calib'
                                                                      */

#endif

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_ForceEngineStartStopEnbl =
    1;                                 /* Referenced by: '<S218>/Calib' */
static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_HybTransCmndStEnbl = 1;/* Referenced by: '<S219>/Calib' */

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_ILE_ClutchLrnEnabled = 0;/* Referenced by: '<S794>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_ILE_OrvdClutchLrnEnabled =
    0;                                 /* Referenced by: '<S795>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_K0_ClutchLrnEnabled = 0;/* Referenced by: '<S796>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_K0_OrvdClutchLrnEnabled =
    0;                                 /* Referenced by: '<S797>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_MinSpdEOL_Enable = 1;/* Referenced by: '<S783>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_MinSpdNoLrn_Enable = 0;/* Referenced by: '<S785>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_MinSpdSerAE_Enable = 1;/* Referenced by: '<S777>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_MinSpdSerILE_Enable = 1;/* Referenced by: '<S779>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_MinSpdSerK0_Enable = 1;/* Referenced by: '<S781>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_7

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_OvrCheckMtrBDsbl = 0;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_OvrdEnablEOLClutchLrn = 0;/* Referenced by: '<S798>/Calib' */

#endif

static volatile CONST(boolean, RTMR_VAR_INIT)
    KeRTMR_b_OvrdForceEngineStartStopEnbl = 0;/* Referenced by: '<S220>/Calib' */
static volatile CONST(boolean, RTMR_VAR_INIT)
    KeRTMR_b_OvrdForceEngineStartStopState = 0;/* Referenced by: '<S221>/Calib' */
static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_OvrdHybTransCmndSt = 0;/* Referenced by: '<S222>/Calib' */
static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_OvrdHybTransCmndStEnbl =
    0;                                 /* Referenced by: '<S223>/Calib' */

#if Rte_SysCon_Variant_RTMR_5

static volatile CONST(boolean, RTMR_VAR_INIT) KeRTMR_b_SlctEngStrtStChk = 1;/* Referenced by: '<S525>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_dT_BattChrgMaxTempRate =
    5.0F;                              /* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(TeTRGR_e_TransRangeState, RTMR_VAR_INIT)
    KeRTMR_e_DsrdTransRngSt_AE_ILE = CeTRGR_e_TransRangeDrive;/* Referenced by: '<S850>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(TeTRGR_e_TransRangeState, RTMR_VAR_INIT)
    KeRTMR_e_DsrdTransRngSt_EOL = CeTRGR_e_TransRangeDrive;/* Referenced by: '<S940>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static volatile CONST(TeTRGR_e_TransRangeState, RTMR_VAR_INIT)
    KeRTMR_e_DsrdTransRngSt_ElecOnly = CeTRGR_e_TransRangeDrive4;/* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(TeTRGR_e_TransRangeState, RTMR_VAR_INIT)
    KeRTMR_e_DsrdTransRngSt_K0 = CeTRGR_e_TransRangePark;/* Referenced by: '<S941>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(TeOHSR_e_RngSel, RTMR_VAR_INIT) KeRTMR_e_EOLRngStOvrrd =
    CeOHSR_e_RngSel_N;                 /* Referenced by: '<S759>/Calib' */

#endif

static volatile CONST(TeHSER_e_RngSt, RTMR_VAR_INIT) KeRTMR_e_ElecOnlyRngStOvrrd
    = CeHSER_e_Neutral;                /* Referenced by: '<S399>/Calib' */
static volatile CONST(TeESSR_e_EngStartStopSt, RTMR_VAR_INIT)
    KeRTMR_e_EngStartStInvalid1 = CeESSR_e_SpinUp12vStrtSt;/* Referenced by: '<S29>/Calib' */
static volatile CONST(TeESSR_e_EngStartStopSt, RTMR_VAR_INIT)
    KeRTMR_e_EngStartStInvalid2 = CeESSR_e_SpinUpBumpStrtSt;/* Referenced by: '<S30>/Calib' */
static volatile CONST(TeESSR_e_EngStartStopSt, RTMR_VAR_INIT)
    KeRTMR_e_EngStartStInvalid3 = CeESSR_e_AchEngIdle12vStrtSt;/* Referenced by: '<S31>/Calib' */
static volatile CONST(TeESSR_e_EngStartStopSt, RTMR_VAR_INIT)
    KeRTMR_e_EngStartStInvalid4 = CeESSR_e_AchEngIdleBumpStrtSt;/* Referenced by: '<S32>/Calib' */
static volatile CONST(TeESSR_e_EngStartStopSt, RTMR_VAR_INIT)
    KeRTMR_e_EngStopStInvalid1 = CeESSR_e_ImmedStopSt;/* Referenced by: '<S33>/Calib' */
static volatile CONST(TeESSR_e_EngStartStopSt, RTMR_VAR_INIT)
    KeRTMR_e_EngStopStInvalid2 = CeESSR_e_CoastDownSt;/* Referenced by: '<S34>/Calib' */
static volatile CONST(TeSTRR_e_AutoStopStartOvrrd, RTMR_VAR_INIT)
    KeRTMR_e_ForceEngineStartStopState = CeSTRR_e_NoOvrrd;/* Referenced by: '<S224>/Calib' */
static volatile CONST(TeOHSR_e_RngSel, RTMR_VAR_INIT) KeRTMR_e_HybTransCmndSt =
    CeOHSR_e_RngSel_M2;                /* Referenced by: '<S225>/Calib' */
static volatile CONST(TeHSER_e_RngSt, RTMR_VAR_INIT) KeRTMR_e_RngStCompare =
    CeHSER_e_Neutral;                  /* Referenced by: '<S400>/Calib' */
static volatile CONST(TeHSER_e_RngSt, RTMR_VAR_INIT) KeRTMR_e_RngStDefault =
    CeHSER_e_M2;                       /* Referenced by: '<S401>/Calib' */
static volatile CONST(TeOHSR_e_RngSel, RTMR_VAR_INIT) KeRTMR_e_RngStDefault_EOL =
    CeOHSR_e_RngSel_M2;                /* Referenced by:
                                        * '<S978>/Calib'
                                        * '<S760>/Calib'
                                        */

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(TeOHSR_e_RngSel, RTMR_VAR_INIT) KeRTMR_e_SerAE_RngStOvrrd =
    CeOHSR_e_RngSel_M2;                /* Referenced by: '<S761>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(TeOHSR_e_RngSel, RTMR_VAR_INIT) KeRTMR_e_SerILE_RngStOvrrd
    = CeOHSR_e_RngSel_M2;              /* Referenced by: '<S762>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(TeOHSR_e_RngSel, RTMR_VAR_INIT) KeRTMR_e_SerK0RngStOvrrd =
    CeOHSR_e_RngSel_N;                 /* Referenced by: '<S763>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MaxEngSpeed_ROL = 1300.0F;/* Referenced by:
                                                                      * '<S285>/Calib'
                                                                      * '<S241>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MaxTransInSpd_EOL = 50.0F;/* Referenced by: '<S953>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MaxTransInSpd_ElecOnly =
    50.0F;                             /* Referenced by: '<S520>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MaxTransOutSpd_ElecOnly =
    200.0F;                            /* Referenced by:
                                        * '<S526>/Calib'
                                        * '<S514>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MinEngSpeed_ROL = 750.0F;/* Referenced by:
                                                                      * '<S286>/Calib'
                                                                      * '<S242>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MinSpdEOL = 950.0F;/* Referenced by: '<S784>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MinSpdNoLrn = 0.0F;/* Referenced by: '<S786>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MinSpdSerAE = 950.0F;/* Referenced by: '<S778>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MinSpdSerILE = 950.0F;/* Referenced by: '<S780>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MinSpdSerK0 = 950.0F;/* Referenced by: '<S782>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_MinTransOutSpd_ElecOnly =
    50.0F;                             /* Referenced by:
                                        * '<S527>/Calib'
                                        * '<S510>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_NoSwitchSpd_G1ToG2 =
    800.0F;                            /* Referenced by: '<S648>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_NoSwitchSpd_G2ToM2 =
    1200.0F;                           /* Referenced by: '<S649>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_NoSwitchSpd_G3ToG4 =
    2000.0F;                           /* Referenced by: '<S650>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_NoSwitchSpd_M1ToG1 =
    400.0F;                            /* Referenced by: '<S651>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_NoSwitchSpd_M2ToG3 =
    1600.0F;                           /* Referenced by: '<S652>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_OutSpd_BattChrg_LSP =
    325.0F;                            /* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_n_OutSpd_BattChrg_RSP =
    162.0F;                            /* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT)
    KeRTMR_t_BattChrgMaxModTemp_FilterTimeConst = 0.1F;/* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_BattChrg_EngStrtTimeDelay
    = 1.0F;                            /* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_BattChrg_MaxTimeAllowed =
    900.0F;                            /* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_3

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_GPFRegenTestDelay = 1.0F;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_3

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_GPFRuotEnblDelay = 0.0F;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_MaxTimeAllowed_EOL =
    60.0F;                             /* Referenced by: '<S902>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT)
    KeRTMR_t_MaxTimeAllowed_EOLClutch_EngStop = 10.0F;/* Referenced by: '<S958>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_MaxTimeAllowed_ElecOnly =
    20.0F;                             /* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static volatile CONST(float32, RTMR_VAR_INIT)
    KeRTMR_t_MaxTimeAllowed_ElecOnly_EngStop = 10.0F;/* Referenced by: '<S531>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_MaxTimeAllowed_K0 = 60.0F;/* Referenced by: '<S903>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_MaxTimeAllowed_RngTst =
    60.0F;                             /* Referenced by: '<S567>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_MaxTimeAllowed_SerAE =
    420.0F;                            /* Referenced by: '<S828>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_MaxTimeAllowed_SerILE =
    30.0F;                             /* Referenced by: '<S829>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT)
    KeRTMR_t_MaxTimeAllowed_Ser_EngStrt = 10.0F;/* Referenced by: '<S866>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_MaxWaitTiAftROLStrt =
    10.0F;                             /* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_3 || Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6 || Rte_SysCon_Variant_RTMR_7 || Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_MedTED = 0.02F;/* Referenced by:
                                                                      * '<S983>/Calib'
                                                                      * '<S198>/Calib'
                                                                      * '<S69>/Calib'
                                                                      * '<S278>/Calib'
                                                                      * '<S422>/Calib'
                                                                      * '<S568>/Calib'
                                                                      * '<S287>/Calib'
                                                                      * '<S805>/Calib'
                                                                      * '<S814>/Calib'
                                                                      * '<S888>/Calib'
                                                                      * '<S145>/Calib'
                                                                      * '<S243>/Calib'
                                                                      * '<S532>/Calib'
                                                                      * '<S673>/Calib'
                                                                      * '<S681>/Calib'
                                                                      * '<S689>/Calib'
                                                                      * '<S697>/Calib'
                                                                      * '<S705>/Calib'
                                                                      * '<S713>/Calib'
                                                                      * '<S867>/Calib'
                                                                      * '<S959>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RTMR_4

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_MinTimeRequired_RngTst =
    0.4F;                              /* Referenced by:
                                        * '<S674>/Calib'
                                        * '<S682>/Calib'
                                        * '<S690>/Calib'
                                        * '<S698>/Calib'
                                        * '<S706>/Calib'
                                        * '<S714>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_RTMR_1

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_ROLPreCondTrnOffDly =
    2.0F;                              /* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_TiDebounceSetROL = 3.0F;/* Referenced by:
                                                                      * '<S288>/Calib'
                                                                      * '<S244>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_WED_ClosingTimeout = 2.0F;
                             /* Referenced by: '<S984>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_WED_FirstClosingTimeout =
    2.0F;                    /* Referenced by: '<S985>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_WED_OpeningTimeout = 2.0F;
                             /* Referenced by: '<S986>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_WED_RoutineTimeout =
    10.0F;                   /* Referenced by: '<S987>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_WED_WaitTimeBeforeClosing
    = 0.0F;                  /* Referenced by: '<S988>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_WED_WaitTimeBeforeOpening
    = 0.0F;                  /* Referenced by: '<S989>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_WED_WaitTimeFirstClosing =
    0.5F;                    /* Referenced by: '<S990>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_WED_WaitTimeFirstOpening =
    0.5F;                    /* Referenced by: '<S991>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_WED_WaitTimeTAResult =
    0.2F;                    /* Referenced by: '<S992>/KeVLDR_U_SysVltUprLim' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_t_delayNoClutchLrn = 0.075F;/* Referenced by: '<S806>/Calib' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_v_MaxVehSpdClutchLrn = 2.0F;/* Referenced by:
                                                                      * '<S854>/Calib'
                                                                      * '<S946>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_RTMR_3

static volatile CONST(float32, RTMR_VAR_INIT) KeRTMR_v_MaxVhlSpd_GPF = 10.0F;/* Referenced by: '<S214>/Calib' */

#endif

static volatile CONST(uint8, RTMR_VAR_INIT)
    KeRTMR_y_ReslvrOfsLrnMCPFaultStatusDflt = 0U;/* Referenced by: '<S18>/Calib' */

#if Rte_SysCon_Variant_RTMR_8

static volatile CONST(uint8, RTMR_VAR_INIT) KeRTMR_y_SelectPreCondsTOCheck = 63U;
                            /* Referenced by: '<S1007>/KeVLDR_U_SysVltUprLim' */

#endif

static volatile CONST(float32, RTMR_VAR_INIT) KtRTMR_n_NiMin_BattRpdChrg[4] =
{
    1200.0F, 1000.0F, 800.0F, 650.0F
} ;                                    /* Referenced by:
                                        * '<S186>/Vector'
                                        * '<S70>/Vector'
                                        */

static volatile CONST(float32, RTMR_VAR_INIT) KxRTMR_n_NiMin_BattRpdChrg[4] =
{
    -20.0F, -15.0F, -10.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S186>/Vector'
                                        * '<S70>/Vector'
                                        */

#define STOP_SEC_CALIB_UNSPECIFIED_RTMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_RTMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, RTMR_VAR_INIT) AeRTMR_b_ElectricOnlyTest_Enabled;/* '<Root>/DSM_30' */
static VAR(TeRTMR_e_WEDToothAbutResults, RTMR_VAR_INIT)
    AeRTMR_e_WED_ToothAbutResult;      /* '<Root>/DSM_31' */
static VAR(uint8, RTMR_VAR_INIT) AeRTMR_y_ElecOnlyTestResult_PID;/* '<Root>/DSM_5' */
static VAR(uint8, RTMR_VAR_INIT) AeRTMR_y_ElecOnlyTestStatus_PID;/* '<Root>/DSM_6' */

#if Rte_SysCon_Variant_RTMR_1

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_CheckPreConditions;/* '<S260>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_DisableMtrB;/* '<S256>/Logical4' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_EnableEngStop;/* '<S883>/Merge' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_EnableEngineStart;/* '<S809>/Merge' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_EnblROLTest;/* '<S257>/Logical3' */

#endif

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_ForceAutoStopStartEnbl;/* '<S42>/Merge2' */

#if Rte_SysCon_Variant_RTMR_7

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_ForceAutoStopStartEnbl_MtrA;/* '<S229>/ROLMtrA_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_7

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_ForceAutoStopStartEnbl_MtrB;/* '<S230>/ROLMtrB_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_ForceAutoStopStartEnbl_ROL;/* '<S228>/ROL_Procedure' */

#endif

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_HCP_InPlantMode;/* '<S732>/Logical2' */

#if Rte_SysCon_Variant_RTMR_7

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_HybTransCmndStEnbl_MtrA;/* '<S229>/ROLMtrA_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_HybTransCmndStEnbl_ROL;/* '<S228>/ROL_Procedure' */

#endif

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_InPlantMode;/* '<S39>/Logical2' */

#if Rte_SysCon_Variant_RTMR_1

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_InvrtrChngSts;/* '<S258>/Logical9' */

#endif

#if Rte_SysCon_Variant_RTMR_7

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_MtrAInvrtrChngSts;/* '<S231>/Logical9' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_MtrBHighTrq;/* '<S259>/Logical7' */

#endif

#if Rte_SysCon_Variant_RTMR_7

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_MtrBInvrtrChngSts;/* '<S247>/Logical9' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_ROLTimeOutFlg;/* '<S282>/AND' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static VAR(boolean, RTMR_VAR_INIT) VeRTMC_b_WEDTAOpeningCmd;/* '<S41>/WED_ToothAbutment_Routine' */

#endif

static VAR(TeSTRR_e_AutoStopStartOvrrd, RTMR_VAR_INIT)
    VeRTMC_e_ForceAutoStopStartSt;     /* '<S42>/Merge3' */

#if Rte_SysCon_Variant_RTMR_7

static VAR(TeSTRR_e_AutoStopStartOvrrd, RTMR_VAR_INIT)
    VeRTMC_e_ForceAutoStopStartSt_MtrA;/* '<S229>/ROLMtrA_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_7

static VAR(TeSTRR_e_AutoStopStartOvrrd, RTMR_VAR_INIT)
    VeRTMC_e_ForceAutoStopStartSt_MtrB;/* '<S230>/ROLMtrB_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static VAR(TeSTRR_e_AutoStopStartOvrrd, RTMR_VAR_INIT)
    VeRTMC_e_ForceAutoStopStartSt_ROL; /* '<S228>/ROL_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_7

static VAR(TeOHSR_e_RngSel, RTMR_VAR_INIT) VeRTMC_e_HybTransCmndSt_MtrA;/* '<S229>/ROLMtrA_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static VAR(TeOHSR_e_RngSel, RTMR_VAR_INIT) VeRTMC_e_HybTransCmndSt_ROL;/* '<S228>/ROL_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static VAR(uint8, RTMR_VAR_INIT) VeRTMR_Cnt_WEDClosingCount;/* '<S41>/WED_ToothAbutment_Routine' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_AE_ILE_LrnEnbl;/* '<S739>/Merge' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_BattChrgPrmtr_Changed;/* '<S140>/Logical7' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_BattChrgStrt_delayed;/* '<S78>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_BattChrg_NotTimeOut;/* '<S148>/Greater_Than1' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_EOLClutchLrn_EnblDly1;/* '<S742>/AND' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_EOLCondOK;/* '<S911>/Logical' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_EarlyTermination;/* '<S97>/Merge' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElecOnlyTestConditionsOK;/* '<S509>/Logical2' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElecOnlyTestConditionsOK_Reset;/* '<S506>/Logical3' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElecOnlyTestEnblDlyd1;/* '<S39>/Unit Delay1' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElecOnlyTestEnblDlyd2;/* '<S392>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElecOnlyTestEnblDlyd3;/* '<S416>/AND' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElecOnlyTestEnblDlyd4;/* '<S432>/AND' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElecOnlyTestEnbl_Dlyd6;/* '<S529>/AND' */

#endif

#if Rte_SysCon_Variant_RTMR_5

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElectricOnlyLatchedOn;/* '<S518>/Logical9' */

#endif

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElectricOnlyLatchedOn_DS;/* '<Root>/DSM_9' */

#if Rte_SysCon_Variant_RTMR_5

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_ElectricOnlyTransNoAchvd;/* '<S518>/Logical7' */

#endif

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_EngStartStInvalid_DS;/* '<Root>/DSM_2' */
static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_EngStopStInvalid_DS;/* '<Root>/DSM_8' */
static VAR(uint8, RTMR_VAR_INIT) VeRTMR_b_GPFRegenRequestFlag;/* '<Root>/DSM_1' */
static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_HybTransCmndStEnbl_ClutchLrn;/* synthesized block */

#if Rte_SysCon_Variant_RTMR_2

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_PassAbortionCheck;/* '<S90>/Merge' */

#endif

#if Rte_SysCon_Variant_RTMR_2

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_PassCompleteCheck;/* '<S81>/Merge2' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_SerAE_ILECondOK;/* '<S837>/Logical' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_SerClutchLrn_EnblDly1;/* '<S743>/AND' */

#endif

static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_StartStopEnbl_ClutchLrn;/* synthesized block */
static VAR(boolean, RTMR_VAR_INIT) VeRTMR_b_WED_RequestFlag;/* '<Root>/DSM_32' */

#if Rte_SysCon_Variant_RTMR_2

static VAR(float32, RTMR_VAR_INIT) VeRTMR_dT_BattChrgTempChangeRate;/* '<S98>/Switch1' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(TeRTMR_e_ClutchLrnType, RTMR_VAR_INIT) VeRTMR_e_ClutchLrnType_DS;/* '<Root>/DSM_22' */

#endif

static VAR(TeOHSR_e_RngSel, RTMR_VAR_INIT) VeRTMR_e_HybTransCmndSt_ClutchLrn;/* synthesized block */

#if Rte_SysCon_Variant_RTMR_7

static VAR(TeRTMR_e_ROLStatus, RTMR_VAR_INIT) VeRTMR_e_ROLMtrAStatus;/* '<S229>/ROLMtrA_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_7

static VAR(TeRTMR_e_ROLStatus, RTMR_VAR_INIT) VeRTMR_e_ROLMtrBStatus;/* '<S230>/ROLMtrB_Procedure' */

#endif

#if Rte_SysCon_Variant_RTMR_1

static VAR(TeRTMR_e_ROLStatus, RTMR_VAR_INIT) VeRTMR_e_ROLStatus;/* '<S228>/ROL_Procedure' */

#endif

static VAR(TeSTRR_e_AutoStopStartOvrrd, RTMR_VAR_INIT)
    VeRTMR_e_StartStopState_ClutchLrn; /* synthesized block */

#if Rte_SysCon_Variant_RTMR_8

static VAR(uint8, RTMR_VAR_INIT) VeRTMR_i_WEDTAStatus;/* '<S41>/WED_ToothAbutment_Routine' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(float32, RTMR_VAR_INIT) VeRTMR_t_MaxTmAllowed_EOL;/* '<S890>/Switch' */

#endif

#if Rte_SysCon_Variant_RTMR_6

static VAR(float32, RTMR_VAR_INIT) VeRTMR_t_MaxTmAllowed_Ser;/* '<S816>/Switch' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static VAR(float32, RTMR_VAR_INIT) VeRTMR_t_RoutActvTime;/* '<S41>/WED_ToothAbutment_Routine' */

#endif

#if Rte_SysCon_Variant_RTMR_8

static VAR(float32, RTMR_VAR_INIT) VeRTMR_t_WaitTime;/* '<S41>/WED_ToothAbutment_Routine' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_RTMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_RTMR
#include "MemMap.h"

CONST(ConstB_RTMR_ac_T, RTMR_VAR_INIT) RTMR_ac_ConstB =
{
    CeSTRR_e_NoOvrrd,                  /* '<S1088>/Constant' */

#if !Rte_SysCon_Variant_RTMR_6

    CeSTRR_e_NoOvrrd,                  /* '<S977>/Constant' */

#endif

#if !Rte_SysCon_Variant_RTMR_5

    CeSTRR_e_NoOvrrd,                  /* '<S403>/Constant' */

#endif

    CeRTMR_e_WED_Not_Active,           /* '<S1084>/Const13' */
    CeRTMR_e_ROLNotActive,             /* '<S1084>/Const8' */
    CeRTMR_e_GPFRegenSts_Stopped,      /* '<S1084>/Const5' */
    CeRTMR_e_Clutch_NoLrn,             /* '<S1086>/Constant' */
    CeRTMR_e_BattRapidChrgDisable,     /* '<S1087>/Constant' */
    CeOHSR_e_RngSel_N,                 /* '<S1085>/Constant' */
    CeDFIB_e_Init                      /* '<S1089>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_RTMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_RTMR
#include "MemMap.h"

VAR(B_RTMR_ac_T, RTMR_VAR_INIT) RTMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_RTMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_RTMR
#include "MemMap.h"

VAR(DW_RTMR_ac_T, RTMR_VAR_INIT) RTMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_RTMR
#include "MemMap.h"
#if Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Electric_Only(P2VAR(boolean,
    AUTOMATIC, RTMR_VAR_INIT) rty_ForceEngineStartStopEnbl, P2VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC, RTMR_VAR_INIT)
    rty_ForceEngineStartStopState);

#endif

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_In_Plant(P2VAR(boolean, AUTOMATIC,
    RTMR_VAR_INIT) rty_ForceEngineStartStopEnbl, P2VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC, RTMR_VAR_INIT)
    rty_ForceEngineStartStopState);

#if Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_In_Field(P2VAR(boolean, AUTOMATIC,
    RTMR_VAR_INIT) rty_ForceEngineStartStopEnbl, P2VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC, RTMR_VAR_INIT)
    rty_ForceEngineStartStopState);

#endif

#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Do_Nothing_j(P2VAR(boolean, AUTOMATIC,
    RTMR_VAR_INIT) rty_BattRapidChrgCmnd, P2VAR(float32, AUTOMATIC,
    RTMR_VAR_INIT) rty_BattRapidChrgPwrDsrd);

#endif

#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Terminate2(P2VAR(boolean, AUTOMATIC,
    RTMR_VAR_INIT) rty_EarlyTerminationFlag, P2VAR(uint8, AUTOMATIC,
    RTMR_VAR_INIT) rtd_NeRTMR_y_BattChrgCndtnCheck_PID);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Complete(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Do_Nothing(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_h(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_f(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID1(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_j(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_ho(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_f4(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_e(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_p(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_b(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_k(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID8(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Aborted(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_i(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_EngStp_TimeOutPID(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Enabled(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Perform_Test(void);

#endif

#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out_PID(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Complete_i(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out_l(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_DoNothing(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_fx(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID1_h(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID2(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID3(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID5(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID6(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID7(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID8_g(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID10(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID9(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID11(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID12(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID13(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID14(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID15(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Condition_Not_Satisfied(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforG1(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforG2(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforG3(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforG4(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforM1(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforM2(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Condition_Satisfied(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_Transmission_Range_Test_Not_Enabled(void);

#endif

#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Reset_PIDs(void);

#endif

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_RstEOMPIDs(void);

#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_status_PID(void);

#endif

#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_out(void);

#endif

#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_RstPwrOfst_TrgChrg(void);

#endif

#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_RstSts_InitPIDs(void);

#endif

#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_status_PID_h(void);

#endif

#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_Sts_InitPIDs(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Complete_g(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out_m(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Do_Nothing_e(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Aborted_c(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Enabled_f(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Perform_Test_j(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Complete_k(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out_i(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Do_Nothing_e0(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Aborted_m(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Enabled_p(void);

#endif

#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Perform_Test_c(void);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_RTMR_8

static void RTMR_ac_enter_internal_ACTIVE(const boolean *Logical2);

#endif

/* Output and update for action system: '<S406>/Complete' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Complete(void)
{
    /* DataStoreWrite: '<S417>/Data Store Write1' */
    AeRTMR_y_ElecOnlyTestStatus_PID = 32U;

    /* VariantMerge generated from: '<S39>/Variant Source2' incorporates:
     *  Constant: '<S417>/FALSE_Constant'
     *  SignalConversion generated from: '<S417>/EnableEngineStop'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv = false;
}

#endif

/* Output and update for action system: '<S406>/Time_Out' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out(void)
{
    /* DataStoreWrite: '<S427>/Data Store Write1' */
    AeRTMR_y_ElecOnlyTestStatus_PID = 16U;

    /* SignalConversion generated from: '<S427>/EnableEngineStop' incorporates:
     *  Constant: '<S427>/FALSE_Constant'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv = false;
}

#endif

/* Output and update for action system: '<S406>/Do_Nothing' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Do_Nothing(void)
{
    /* SignalConversion generated from: '<S418>/EnableEngineStop' incorporates:
     *  Constant: '<S418>/FALSE_Constant'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv = false;
}

#endif

/* Output and update for enable system: '<S440>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID(void)
{
    boolean tmpRead;

    /* Inport: '<Root>/VeSTRR_b_BackupStrtEngOn' */
    (void)Rte_Read_VeSTRR_b_BackupStrtEngOn_Value(&tmpRead);

    /* Outputs for Enabled SubSystem: '<S440>/Set_PID' incorporates:
     *  EnablePort: '<S453>/Enable'
     */
    if (tmpRead)
    {
        /* DataStoreWrite: '<S453>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S453>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S454>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID |= (uint8)64;
    }

    /* End of Outputs for SubSystem: '<S440>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S441>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_h(void)
{
    /* Outputs for Enabled SubSystem: '<S441>/Set_PID' incorporates:
     *  EnablePort: '<S456>/Enable'
     */
    if (RTMR_ac_B.Comparison3_m)
    {
        /* DataStoreWrite: '<S456>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S456>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S457>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID |= (uint8)4;
    }

    /* End of Outputs for SubSystem: '<S441>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S442>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_f(void)
{
    /* Outputs for Enabled SubSystem: '<S442>/Set_PID' incorporates:
     *  EnablePort: '<S460>/Enable'
     */
    if (RTMR_ac_B.Comparison8_j)
    {
        /* DataStoreWrite: '<S460>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S460>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S462>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID |= (uint8)16;
    }

    /* End of Outputs for SubSystem: '<S442>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S442>/Set_PID1' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID1(void)
{
    /* Outputs for Enabled SubSystem: '<S442>/Set_PID1' incorporates:
     *  EnablePort: '<S461>/Enable'
     */
    if (RTMR_ac_B.Comparison9_k)
    {
        /* DataStoreWrite: '<S461>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S461>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S463>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID |= (uint8)8;
    }

    /* End of Outputs for SubSystem: '<S442>/Set_PID1' */
}

#endif

/* Output and update for enable system: '<S443>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_j(void)
{
    boolean tmpRead;

    /* Inport: '<Root>/VeSTRR_b_BumpStrtEngOn' */
    (void)Rte_Read_VeSTRR_b_BumpStrtEngOn_Value(&tmpRead);

    /* Outputs for Enabled SubSystem: '<S443>/Set_PID' incorporates:
     *  EnablePort: '<S464>/Enable'
     */
    if (tmpRead)
    {
        /* DataStoreWrite: '<S464>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S464>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S465>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID = (uint8)(((uint16)
            RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID) | ((uint16)128));
    }

    /* End of Outputs for SubSystem: '<S443>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S445>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_ho(void)
{
    /* Outputs for Enabled SubSystem: '<S445>/Set_PID' incorporates:
     *  EnablePort: '<S466>/Enable'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeSTRR_b_HardChkEng)
    {
        /* DataStoreWrite: '<S466>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S466>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S467>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID |= (uint8)8;
    }

    /* End of Outputs for SubSystem: '<S445>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S446>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_f4(void)
{
    /* Outputs for Enabled SubSystem: '<S446>/Set_PID' incorporates:
     *  EnablePort: '<S468>/Enable'
     */
    if (RTMR_ac_B.Logical2_d)
    {
        /* DataStoreWrite: '<S468>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S468>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S469>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID = (uint8)(((uint16)
            RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID) | ((uint16)128));
    }

    /* End of Outputs for SubSystem: '<S446>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S447>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_e(void)
{
    /* Outputs for Enabled SubSystem: '<S447>/Set_PID' incorporates:
     *  EnablePort: '<S473>/Enable'
     */
    if (RTMR_ac_B.Logical1_p)
    {
        /* DataStoreWrite: '<S473>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S473>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S474>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID |= (uint8)64;
    }

    /* End of Outputs for SubSystem: '<S447>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S450>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_p(void)
{
    /* Outputs for Enabled SubSystem: '<S450>/Set_PID' incorporates:
     *  EnablePort: '<S500>/Enable'
     */
    if (RTMR_ac_B.Comparison1_l)
    {
        /* DataStoreWrite: '<S500>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S500>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S501>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID |= (uint8)1;
    }

    /* End of Outputs for SubSystem: '<S450>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S451>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_b(void)
{
    /* Outputs for Enabled SubSystem: '<S451>/Set_PID' incorporates:
     *  EnablePort: '<S502>/Enable'
     */
    if (RTMR_ac_B.Comparison4_a)
    {
        /* DataStoreWrite: '<S502>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S502>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S503>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID |= (uint8)16;
    }

    /* End of Outputs for SubSystem: '<S451>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S452>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_k(void)
{
    /* Outputs for Enabled SubSystem: '<S452>/Set_PID' incorporates:
     *  EnablePort: '<S504>/Enable'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeOHSR_b_ServEngOff)
    {
        /* DataStoreWrite: '<S504>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S504>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S505>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID |= (uint8)2;
    }

    /* End of Outputs for SubSystem: '<S452>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S508>/Set_PID8' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID8(void)
{
    /* Outputs for Enabled SubSystem: '<S508>/Set_PID8' incorporates:
     *  EnablePort: '<S511>/Enable'
     */
    if (RTMR_ac_B.Logical1_l)
    {
        /* DataStoreWrite: '<S511>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S511>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S513>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID |= (uint8)2;
    }

    /* End of Outputs for SubSystem: '<S508>/Set_PID8' */
}

#endif

/* Output and update for action system: '<S426>/Test_Aborted' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Aborted(void)
{
    /* DataStoreWrite: '<S435>/Data Store Write1' */
    AeRTMR_y_ElecOnlyTestStatus_PID = 8U;

    /* SignalConversion generated from: '<S435>/EnableEngineStop' incorporates:
     *  Constant: '<S435>/FALSE_Constant'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv = false;
}

#endif

/* Output and update for enable system: '<S536>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_i(void)
{
    /* Outputs for Enabled SubSystem: '<S536>/Set_PID' incorporates:
     *  EnablePort: '<S539>/Enable'
     */
    if (RTMR_ac_B.Comparison1_c)
    {
        /* DataStoreWrite: '<S539>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S539>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S540>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID |= (uint8)32;
    }

    /* End of Outputs for SubSystem: '<S536>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S522>/EngStp_TimeOutPID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_EngStp_TimeOutPID(void)
{
    /* Outputs for Enabled SubSystem: '<S522>/EngStp_TimeOutPID' incorporates:
     *  EnablePort: '<S530>/Enable'
     */
    if (RTMR_ac_B.Switch_a)
    {
        /* RelationalOperator: '<S530>/Comparison1' incorporates:
         *  Constant: '<S537>/Constant'
         *  SignalConversion generated from: '<S12>/VeENGR_e_EngStrtStpOvrrd'
         */
        RTMR_ac_B.Comparison1_c = (((uint32)
            RTMR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp) ==
            CeSTRR_e_OvrrdEngOn);

        /* Outputs for Enabled SubSystem: '<S536>/Set_PID' */
        RTMR_ac_Set_PID_i();

        /* End of Outputs for SubSystem: '<S536>/Set_PID' */

        /* S-Function (fcgen): '<S530>/FunctionCallGenerator' incorporates:
         *  SubSystem: '<S530>/SetEngStpTmOut'
         */
        /* DataStoreWrite: '<S538>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S538>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S541>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID |= (uint8)32;

        /* End of Outputs for S-Function (fcgen): '<S530>/FunctionCallGenerator' */
    }

    /* End of Outputs for SubSystem: '<S522>/EngStp_TimeOutPID' */
}

#endif

/* Output and update for action system: '<S426>/Test_Enabled' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Enabled(void)
{
    TeESSR_e_EngStartStopSt tmp;
    boolean rtb_Comparison1;
    boolean rtb_OR1;

    /* DataStoreWrite: '<S519>/Data Store Write1' incorporates:
     *  DataStoreRead: '<S519>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S545>/FixPt Bitwise Operator1'
     */
    RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID |= (uint8)4;

    /* RelationalOperator: '<S517>/Comparison1' incorporates:
     *  Constant: '<S520>/Calib'
     */
    rtb_Comparison1 = (RTMR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed >
                       KeRTMR_n_MaxTransInSpd_ElecOnly);

    /* Logic: '<S518>/Logical9' incorporates:
     *  Constant: '<S527>/Calib'
     *  DataStoreRead: '<S518>/Data Store Read'
     *  DataStoreRead: '<S518>/Data Store Read2'
     *  Logic: '<S518>/Logical1'
     *  Logic: '<S518>/Logical2'
     *  Logic: '<S518>/Logical4'
     *  RelationalOperator: '<S518>/Comparison2'
     */
    VeRTMR_b_ElectricOnlyLatchedOn = ((((!VeRTMR_b_EngStopStInvalid_DS) &&
        (!rtb_Comparison1)) &&
        (RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp <
         KeRTMR_n_MinTransOutSpd_ElecOnly)) ||
        (VeRTMR_b_ElectricOnlyLatchedOn_DS));

    /* DataStoreWrite: '<S518>/Data Store Write' */
    VeRTMR_b_ElectricOnlyLatchedOn_DS = VeRTMR_b_ElectricOnlyLatchedOn;

    /* If: '<S518>/If' incorporates:
     *  DataStoreRead: '<S518>/Data Store Read2'
     *  Logic: '<S518>/Logical6'
     */
    if (rtb_Comparison1 || (VeRTMR_b_EngStopStInvalid_DS))
    {
        /* Outputs for IfAction SubSystem: '<S518>/Engine_Not_Stopped' incorporates:
         *  ActionPort: '<S522>/Action_Port'
         */
        /* Logic: '<S529>/AND' */
        VeRTMR_b_ElecOnlyTestEnbl_Dlyd6 = VeRTMR_b_ElecOnlyTestEnblDlyd4;

        /* Logic: '<S522>/Logical' incorporates:
         *  DataStoreRead: '<S534>/Data Store Read'
         *  DataTypeConversion: '<S534>/Data Type Conversion2'
         *  Logic: '<S534>/Logical3'
         *  S-Function (sfix_bitop): '<S534>/Bitwise_Logical_Operator1'
         */
        rtb_Comparison1 = (((((uint32)
                              RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID) &
                             32U) == 0U) && (VeRTMR_b_ElecOnlyTestEnbl_Dlyd6));

        /* Outputs for Atomic SubSystem: '<S522>/Timer_Reset_Enabled' */
        /* Outputs for Atomic SubSystem: '<S535>/EdgeRising' */
        /* Logic: '<S542>/OR1' incorporates:
         *  UnitDelay: '<S542>/Unit Delay'
         */
        rtb_OR1 = !RTMR_ac_DW.UnitDelay_DSTATE_mo;

        /* Update for UnitDelay: '<S542>/Unit Delay' */
        RTMR_ac_DW.UnitDelay_DSTATE_mo = rtb_Comparison1;

        /* Switch: '<S535>/Switch1' incorporates:
         *  Logic: '<S542>/AND'
         *  Switch: '<S535>/Switch2'
         */
        if (rtb_Comparison1 && rtb_OR1)
        {
            /* Switch: '<S535>/Switch1' incorporates:
             *  Constant: '<S531>/Calib'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_a4 =
                KeRTMR_t_MaxTimeAllowed_ElecOnly_EngStop;
        }
        else
        {
            if (rtb_Comparison1)
            {
                /* Switch: '<S535>/Switch2' incorporates:
                 *  Constant: '<S532>/Calib'
                 *  Constant: '<S535>/Constant_Value4'
                 *  MinMax: '<S535>/Maximum'
                 *  Sum: '<S535>/Subtraction'
                 *  Switch: '<S535>/Switch1'
                 *  UnitDelay: '<S535>/Unit Delay'
                 */
                RTMR_ac_DW.UnitDelay_DSTATE_a4 = fmaxf
                    (RTMR_ac_DW.UnitDelay_DSTATE_a4 - KeRTMR_t_MedTED, 0.0F);
            }
        }

        /* End of Switch: '<S535>/Switch1' */
        /* End of Outputs for SubSystem: '<S535>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S522>/Timer_Reset_Enabled' */

        /* Switch: '<S522>/Switch' incorporates:
         *  Constant: '<S522>/FALSE_Constant'
         *  Constant: '<S535>/Constant_Value2'
         *  Logic: '<S522>/Logical1'
         *  Logic: '<S522>/Logical2'
         *  RelationalOperator: '<S535>/Greater_Than1'
         */
        if (VeRTMR_b_ElecOnlyTestEnbl_Dlyd6)
        {
            /* Outputs for Atomic SubSystem: '<S522>/Timer_Reset_Enabled' */
            RTMR_ac_B.Switch_a = ((VeRTMR_b_ElecOnlyTestEnbl_Dlyd6) &&
                                  (RTMR_ac_DW.UnitDelay_DSTATE_a4 <= 0.0F));

            /* End of Outputs for SubSystem: '<S522>/Timer_Reset_Enabled' */
        }
        else
        {
            RTMR_ac_B.Switch_a = false;
        }

        /* End of Switch: '<S522>/Switch' */

        /* Outputs for Enabled SubSystem: '<S522>/EngStp_TimeOutPID' */
        RTMR_ac_EngStp_TimeOutPID();

        /* End of Outputs for SubSystem: '<S522>/EngStp_TimeOutPID' */
        /* End of Outputs for SubSystem: '<S518>/Engine_Not_Stopped' */
    }

    /* End of If: '<S518>/If' */

    /* Switch: '<S518>/Switch' incorporates:
     *  Constant: '<S523>/Constant'
     *  Constant: '<S524>/Constant'
     *  Constant: '<S525>/Calib'
     */
    if (KeRTMR_b_SlctEngStrtStChk)
    {
        tmp = CeESSR_e_EngRunning;
    }
    else
    {
        tmp = CeESSR_e_EngOff;
    }

    /* End of Switch: '<S518>/Switch' */

    /* Logic: '<S518>/Logical7' incorporates:
     *  Constant: '<S526>/Calib'
     *  DataStoreRead: '<S518>/Data Store Read1'
     *  Logic: '<S518>/Logical5'
     *  RelationalOperator: '<S518>/Comparison3'
     *  RelationalOperator: '<S518>/Comparison4'
     *  SignalConversion generated from: '<S12>/VeESSR_e_EngStartStopSt'
     */
    VeRTMR_b_ElectricOnlyTransNoAchvd =
        (((RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp >
           KeRTMR_n_MaxTransOutSpd_ElecOnly) &&
          (RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt == tmp)) &&
         (!VeRTMR_b_EngStartStInvalid_DS));

    /* If: '<S518>/If1' incorporates:
     *  Logic: '<S518>/Logical3'
     */
    if ((VeRTMR_b_ElectricOnlyLatchedOn) && (VeRTMR_b_ElectricOnlyTransNoAchvd))
    {
        /* Outputs for IfAction SubSystem: '<S518>/Test_Complete' incorporates:
         *  ActionPort: '<S528>/Action_Port'
         */
        /* DataStoreWrite: '<S528>/Data Store Write1' incorporates:
         *  DataStoreRead: '<S528>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S543>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S543>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S543>/FixPt Bitwise Operator5'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID = (uint8)(~((uint8)
            (((uint8)(~RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID)) |
             ((uint8)4))));

        /* DataStoreWrite: '<S528>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S528>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S544>/FixPt Bitwise Operator1'
         */
        AeRTMR_y_ElecOnlyTestResult_PID = (uint8)
            (AeRTMR_y_ElecOnlyTestResult_PID | ((uint8)1));

        /* End of Outputs for SubSystem: '<S518>/Test_Complete' */
    }

    /* End of If: '<S518>/If1' */

    /* SignalConversion generated from: '<S436>/EnableEngineStop' incorporates:
     *  Constant: '<S519>/TRUE_Constant'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv = true;
}

#endif

/* Output and update for action system: '<S406>/Perform_Test' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Perform_Test(void)
{
    /* Switch: '<S449>/Switch1' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read3'
     *  DataStoreRead: '<S449>/Data Store Read4'
     *  DataStoreWrite: '<S449>/Data Store Write1'
     *  RelationalOperator: '<S449>/Comparison1'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S476>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S476>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S476>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S488>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 128U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 2U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 2U);
    }

    /* End of Switch: '<S449>/Switch1' */

    /* Switch: '<S449>/Switch10' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read19'
     *  DataStoreRead: '<S449>/Data Store Read20'
     *  DataStoreWrite: '<S449>/Data Store Write10'
     *  RelationalOperator: '<S449>/Comparison9'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator9'
     *  S-Function (sfix_bitop): '<S486>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S486>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S486>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S498>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 2048U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 512U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 512U);
    }

    /* End of Switch: '<S449>/Switch10' */

    /* Switch: '<S449>/Switch11' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read21'
     *  DataStoreRead: '<S449>/Data Store Read22'
     *  DataStoreWrite: '<S449>/Data Store Write11'
     *  RelationalOperator: '<S449>/Comparison10'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S477>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S477>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S477>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S489>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 4096U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 1024U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 1024U);
    }

    /* End of Switch: '<S449>/Switch11' */

    /* Switch: '<S449>/Switch12' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read23'
     *  DataStoreRead: '<S449>/Data Store Read24'
     *  DataStoreWrite: '<S449>/Data Store Write12'
     *  RelationalOperator: '<S449>/Comparison11'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S478>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S478>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S478>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S490>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 8192U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 2048U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 2048U);
    }

    /* End of Switch: '<S449>/Switch12' */

    /* Switch: '<S449>/Switch2' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read5'
     *  DataStoreRead: '<S449>/Data Store Read6'
     *  DataStoreWrite: '<S449>/Data Store Write2'
     *  RelationalOperator: '<S449>/Comparison2'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S479>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S479>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S479>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S491>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 64U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 4U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 4U);
    }

    /* End of Switch: '<S449>/Switch2' */

    /* Switch: '<S449>/Switch4' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read7'
     *  DataStoreRead: '<S449>/Data Store Read8'
     *  DataStoreWrite: '<S449>/Data Store Write3'
     *  RelationalOperator: '<S449>/Comparison3'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S480>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S480>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S480>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S492>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 32U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 8U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 8U);
    }

    /* End of Switch: '<S449>/Switch4' */

    /* Switch: '<S449>/Switch5' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read10'
     *  DataStoreRead: '<S449>/Data Store Read9'
     *  DataStoreWrite: '<S449>/Data Store Write4'
     *  RelationalOperator: '<S449>/Comparison4'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S481>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S481>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S481>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S493>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 16U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 16U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 16U);
    }

    /* End of Switch: '<S449>/Switch5' */

    /* Switch: '<S449>/Switch6' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read11'
     *  DataStoreRead: '<S449>/Data Store Read12'
     *  DataStoreWrite: '<S449>/Data Store Write5'
     *  RelationalOperator: '<S449>/Comparison5'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S482>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S482>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S482>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S494>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 8U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 32U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 32U);
    }

    /* End of Switch: '<S449>/Switch6' */

    /* Switch: '<S449>/Switch7' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read13'
     *  DataStoreRead: '<S449>/Data Store Read14'
     *  DataStoreWrite: '<S449>/Data Store Write6'
     *  RelationalOperator: '<S449>/Comparison6'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S483>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S483>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S483>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S495>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 4U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 64U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 64U);
    }

    /* End of Switch: '<S449>/Switch7' */

    /* Switch: '<S449>/Switch8' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read15'
     *  DataStoreRead: '<S449>/Data Store Read16'
     *  DataStoreWrite: '<S449>/Data Store Write7'
     *  RelationalOperator: '<S449>/Comparison7'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S484>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S484>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S484>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S496>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 2U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 128U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 128U);
    }

    /* End of Switch: '<S449>/Switch8' */

    /* Switch: '<S449>/Switch9' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read17'
     *  DataStoreRead: '<S449>/Data Store Read18'
     *  DataStoreWrite: '<S449>/Data Store Write8'
     *  RelationalOperator: '<S449>/Comparison8'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S485>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S485>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S485>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S497>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 1024U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 256U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 256U);
    }

    /* End of Switch: '<S449>/Switch9' */

    /* Switch: '<S449>/Switch3' incorporates:
     *  DataStoreRead: '<S449>/Data Store Read1'
     *  DataStoreRead: '<S449>/Data Store Read2'
     *  DataStoreWrite: '<S449>/Data Store Write9'
     *  RelationalOperator: '<S449>/Comparison'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S475>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S475>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S475>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S487>/FixPt Bitwise Operator1'
     */
    if ((RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR & 256U) > 0U)
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn |= 1U;
    }
    else
    {
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn =
            ~((~RTMR_ac_DW.BeRTMR_g_BSGRestartRsn) | 1U);
    }

    /* End of Switch: '<S449>/Switch3' */

    /* Logic: '<S446>/Logical2' */
    RTMR_ac_B.Logical2_d = !VeRTMC_b_InPlantMode;

    /* Outputs for Enabled SubSystem: '<S446>/Set_PID' */
    RTMR_ac_Set_PID_f4();

    /* End of Outputs for SubSystem: '<S446>/Set_PID' */

    /* RelationalOperator: '<S450>/Comparison1' incorporates:
     *  Constant: '<S499>/Calib'
     *  SignalConversion generated from: '<S12>/VeTRGR_e_VldtdTransRngSt'
     */
    RTMR_ac_B.Comparison1_l =
        (RTMR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans !=
         KeRTMR_e_DsrdTransRngSt_ElecOnly);

    /* Outputs for Enabled SubSystem: '<S450>/Set_PID' */
    RTMR_ac_Set_PID_p();

    /* End of Outputs for SubSystem: '<S450>/Set_PID' */

    /* RelationalOperator: '<S441>/Comparison3' incorporates:
     *  Constant: '<S455>/Calib'
     */
    RTMR_ac_B.Comparison3_m =
        (RTMR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa <
         KeRTMR_Pct_BattSOCMinLimit);

    /* Outputs for Enabled SubSystem: '<S441>/Set_PID' */
    RTMR_ac_Set_PID_h();

    /* End of Outputs for SubSystem: '<S441>/Set_PID' */

    /* RelationalOperator: '<S442>/Comparison8' incorporates:
     *  Constant: '<S458>/Calib'
     */
    RTMR_ac_B.Comparison8_j =
        (RTMR_ac_B.TmpSignalConversionAtVeBPCR_T_BatModTmpO >
         KeRTMR_T_BattTempMaxLimit);

    /* Outputs for Enabled SubSystem: '<S442>/Set_PID' */
    RTMR_ac_Set_PID_f();

    /* End of Outputs for SubSystem: '<S442>/Set_PID' */

    /* RelationalOperator: '<S442>/Comparison9' incorporates:
     *  Constant: '<S459>/Calib'
     */
    RTMR_ac_B.Comparison9_k =
        (RTMR_ac_B.TmpSignalConversionAtVeBPCR_T_BatModTmpO <
         KeRTMR_T_BattTempMinLimit);

    /* Outputs for Enabled SubSystem: '<S442>/Set_PID1' */
    RTMR_ac_Set_PID1();

    /* End of Outputs for SubSystem: '<S442>/Set_PID1' */

    /* Outputs for Enabled SubSystem: '<S445>/Set_PID' */
    RTMR_ac_Set_PID_ho();

    /* End of Outputs for SubSystem: '<S445>/Set_PID' */

    /* Logic: '<S447>/Logical1' incorporates:
     *  Constant: '<S470>/Constant'
     *  Constant: '<S471>/Constant'
     *  Constant: '<S472>/Calib'
     *  Logic: '<S447>/Logical3'
     *  RelationalOperator: '<S447>/Comparison2'
     *  RelationalOperator: '<S447>/Comparison4'
     */
    RTMR_ac_B.Logical1_p = ((((((uint32)
        RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
        CeESSR_e_EngRunning) || (((uint32)
        RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
        CeESSR_e_PrepForStopSt)) && (KeRTMR_b_EnblInhbtStrtStp_Chk)) &&
                            (RTMR_ac_B.Comparison1));

    /* Outputs for Enabled SubSystem: '<S447>/Set_PID' */
    RTMR_ac_Set_PID_e();

    /* End of Outputs for SubSystem: '<S447>/Set_PID' */

    /* RelationalOperator: '<S438>/Comparison4' incorporates:
     *  Constant: '<S444>/Constant'
     *  SignalConversion generated from: '<S12>/VeSRAR_e_EngStrtStpOvrrd'
     */
    RTMR_ac_B.Comparison4_a = (((uint32)
        RTMR_ac_B.TmpSignalConversionAtVeSRAR_e_EngStrtStp) ==
        CeSTRR_e_OvrrdEngOn);

    /* Outputs for Enabled SubSystem: '<S451>/Set_PID' */
    RTMR_ac_Set_PID_b();

    /* End of Outputs for SubSystem: '<S451>/Set_PID' */

    /* Outputs for Enabled SubSystem: '<S440>/Set_PID' */
    RTMR_ac_Set_PID();

    /* End of Outputs for SubSystem: '<S440>/Set_PID' */

    /* Outputs for Enabled SubSystem: '<S443>/Set_PID' */
    RTMR_ac_Set_PID_j();

    /* End of Outputs for SubSystem: '<S443>/Set_PID' */

    /* Outputs for Enabled SubSystem: '<S452>/Set_PID' */
    RTMR_ac_Set_PID_k();

    /* End of Outputs for SubSystem: '<S452>/Set_PID' */

    /* Logic: '<S432>/AND' */
    VeRTMR_b_ElecOnlyTestEnblDlyd4 = VeRTMR_b_ElecOnlyTestEnblDlyd3;

    /* Logic: '<S506>/Logical3' incorporates:
     *  Switch: '<S506>/Switch'
     *  UnitDelay: '<S506>/Unit Delay'
     */
    VeRTMR_b_ElecOnlyTestConditionsOK_Reset = ((!VeRTMR_b_ElecOnlyTestEnblDlyd4)
        || (!VeRTMR_b_ElecOnlyTestConditionsOK));

    /* Outputs for Atomic SubSystem: '<S508>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S512>/OR1' incorporates:
     *  Constant: '<S510>/Calib'
     *  Logic: '<S512>/NOT'
     *  Logic: '<S512>/OR'
     *  RelationalOperator: '<S508>/Comparison4'
     *  UnitDelay: '<S512>/Unit Delay'
     */
    RTMR_ac_DW.UnitDelay_DSTATE_kp =
        ((RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp <
          KeRTMR_n_MinTransOutSpd_ElecOnly) ||
         ((!VeRTMR_b_ElecOnlyTestConditionsOK_Reset) &&
          (RTMR_ac_DW.UnitDelay_DSTATE_kp)));

    /* End of Outputs for SubSystem: '<S508>/Signal_Latch_On_With_Reset' */

    /* Logic: '<S508>/Logical1' */
    RTMR_ac_B.Logical1_l = !RTMR_ac_DW.UnitDelay_DSTATE_kp;

    /* Outputs for Enabled SubSystem: '<S508>/Set_PID8' */
    RTMR_ac_Set_PID8();

    /* End of Outputs for SubSystem: '<S508>/Set_PID8' */

    /* Logic: '<S509>/Logical2' incorporates:
     *  Constant: '<S509>/Constant_Value'
     *  Constant: '<S509>/Constant_Value2'
     *  Constant: '<S514>/Calib'
     *  DataStoreRead: '<S509>/Data Store Read1'
     *  DataStoreRead: '<S509>/Data Store Read3'
     *  DataTypeConversion: '<S509>/Data Type Conversion1'
     *  DataTypeConversion: '<S509>/Data Type Conversion2'
     *  DataTypeConversion: '<S509>/Data Type Conversion3'
     *  Logic: '<S509>/Logical1'
     *  Logic: '<S509>/Logical4'
     *  Logic: '<S509>/Logical5'
     *  RelationalOperator: '<S509>/Comparison2'
     *  RelationalOperator: '<S509>/Comparison3'
     *  S-Function (sfix_bitop): '<S509>/Bitwise Operator'
     *  S-Function (sfix_bitop): '<S509>/Bitwise_Logical_Operator'
     *  S-Function (sfix_bitop): '<S509>/Bitwise_Logical_Operator1'
     *  Sum: '<S509>/Sum'
     */
    VeRTMR_b_ElecOnlyTestConditionsOK = ((((((RTMR_ac_DW.UnitDelay_DSTATE_kp) &&
        (RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp <
         (KeRTMR_n_MaxTransOutSpd_ElecOnly + 200.0F))) && (((sint32)
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID) == 0)) && ((((uint32)
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID) & 1U) == 0U)) &&
        ((((uint32)RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID) & 8U) == 0U))
        && ((((uint32)RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID) & 16U) ==
            0U));

    /* If: '<S426>/Test_Conditions' */
    if (!VeRTMR_b_ElecOnlyTestConditionsOK)
    {
        /* Outputs for IfAction SubSystem: '<S426>/Test_Aborted' incorporates:
         *  ActionPort: '<S435>/Action_Port'
         */
        RTMR_ac_Test_Aborted();

        /* End of Outputs for SubSystem: '<S426>/Test_Aborted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S426>/Test_Enabled' incorporates:
         *  ActionPort: '<S436>/Action_Port'
         */
        RTMR_ac_Test_Enabled();

        /* End of Outputs for SubSystem: '<S426>/Test_Enabled' */
    }

    /* End of If: '<S426>/Test_Conditions' */
}

#endif

/* Output and update for enable system: '<S406>/Time_Out_PID' */
#if Rte_SysCon_Variant_RTMR_5

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out_PID(void)
{
    /* Outputs for Enabled SubSystem: '<S406>/Time_Out_PID' incorporates:
     *  EnablePort: '<S428>/Enable'
     */
    if (RTMR_ac_B.Logical1_a)
    {
        /* If: '<S428>/If' incorporates:
         *  Constant: '<S428>/Constant_Value'
         *  DataStoreRead: '<S428>/Data Store Read2'
         *  DataStoreRead: '<S428>/Data Store Read3'
         *  Logic: '<S428>/Logical'
         *  RelationalOperator: '<S428>/Comparison1'
         *  RelationalOperator: '<S428>/Comparison4'
         */
        if ((((sint32)RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID) == 0) &&
                (((sint32)RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID) == 0))
        {
            /* Outputs for IfAction SubSystem: '<S428>/Vehicle_Not_Launched_Time_Out' incorporates:
             *  ActionPort: '<S549>/Action_Port'
             */
            /* DataStoreWrite: '<S549>/Data Store Write9' incorporates:
             *  DataStoreRead: '<S549>/Data Store Read1'
             *  S-Function (sfix_bitop): '<S551>/FixPt Bitwise Operator1'
             */
            RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID |= (uint8)4;

            /* DataStoreWrite: '<S549>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S549>/Data Store Read2'
             *  S-Function (sfix_bitop): '<S552>/FixPt Bitwise Operator1'
             */
            RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID |= (uint8)1;

            /* End of Outputs for SubSystem: '<S428>/Vehicle_Not_Launched_Time_Out' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S428>/Time_Out' incorporates:
             *  ActionPort: '<S548>/Action_Port'
             */
            /* DataStoreWrite: '<S548>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S548>/Data Store Read2'
             *  S-Function (sfix_bitop): '<S550>/FixPt Bitwise Operator1'
             */
            RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID |= (uint8)1;

            /* End of Outputs for SubSystem: '<S428>/Time_Out' */
        }

        /* End of If: '<S428>/If' */
    }

    /* End of Outputs for SubSystem: '<S406>/Time_Out_PID' */
}

#endif

/*
 * Output and update for action system:
 *    '<S404>/Electric_Only'
 *    '<S735>/EOL_SerK0_ClutchLrn'
 */
#if Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Electric_Only(P2VAR(boolean,
    AUTOMATIC, RTMR_VAR_INIT) rty_ForceEngineStartStopEnbl, P2VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC, RTMR_VAR_INIT)
    rty_ForceEngineStartStopState)
{
    /* SignalConversion generated from: '<S408>/ForceEngineStartStopEnbl' incorporates:
     *  Constant: '<S408>/TRUE_Constant'
     */
    *rty_ForceEngineStartStopEnbl = true;

    /* SignalConversion generated from: '<S408>/ForceEngineStartStopState' incorporates:
     *  Constant: '<S413>/Constant'
     */
    *rty_ForceEngineStartStopState = CeSTRR_e_OvrrdEngOff;
}

#endif

/*
 * Output and update for action system:
 *    '<S404>/In_Plant'
 *    '<S42>/Disable_auto_stop'
 *    '<S735>/SerAE_ILE_ClutchLrn'
 */
static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_In_Plant(P2VAR(boolean, AUTOMATIC,
    RTMR_VAR_INIT) rty_ForceEngineStartStopEnbl, P2VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC, RTMR_VAR_INIT)
    rty_ForceEngineStartStopState)
{
    /* SignalConversion generated from: '<S411>/ForceEngineStartStopEnbl' incorporates:
     *  Constant: '<S411>/TRUE_Constant'
     */
    *rty_ForceEngineStartStopEnbl = true;

    /* SignalConversion generated from: '<S411>/ForceEngineStartStopState' incorporates:
     *  Constant: '<S415>/Constant'
     */
    *rty_ForceEngineStartStopState = CeSTRR_e_OvrrdEngOn;
}

/*
 * Output and update for action system:
 *    '<S404>/In_Field'
 *    '<S735>/In_Field'
 */
#if Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_In_Field(P2VAR(boolean, AUTOMATIC,
    RTMR_VAR_INIT) rty_ForceEngineStartStopEnbl, P2VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC, RTMR_VAR_INIT)
    rty_ForceEngineStartStopState)
{
    /* SignalConversion generated from: '<S410>/ForceEngineStartStopEnbl' incorporates:
     *  Constant: '<S410>/FALSE_Constant2'
     */
    *rty_ForceEngineStartStopEnbl = false;

    /* SignalConversion generated from: '<S410>/ForceEngineStartStopState' incorporates:
     *  Constant: '<S414>/Constant'
     */
    *rty_ForceEngineStartStopState = CeSTRR_e_NoOvrrd;
}

#endif

/* Output and update for action system: '<S559>/Complete' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Complete_i(void)
{
    /* DataStoreWrite: '<S563>/Data Store Write1' */
    RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID = 32U;

    /* VariantMerge generated from: '<S39>/Variant Source' incorporates:
     *  Constant: '<S576>/Constant'
     *  SignalConversion generated from: '<S563>/HybTransCmndSt'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Neutral;
}

#endif

/* Output and update for action system: '<S559>/Time_Out' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out_l(void)
{
    /* DataStoreWrite: '<S574>/Data Store Write1' */
    RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID = 16U;

    /* SignalConversion generated from: '<S574>/HybTransCmndSt' incorporates:
     *  Constant: '<S723>/Constant'
     *  VariantMerge generated from: '<S39>/Variant Source'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Neutral;
}

#endif

/* Output and update for action system: '<S559>/DoNothing' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_DoNothing(void)
{
    /* SignalConversion generated from: '<S564>/HybTransCmndSt' incorporates:
     *  Constant: '<S578>/Constant'
     *  VariantMerge generated from: '<S39>/Variant Source'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Neutral;
}

#endif

/* Output and update for enable system: '<S584>/Set_PID' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID_fx(void)
{
    /* Outputs for Enabled SubSystem: '<S584>/Set_PID' incorporates:
     *  EnablePort: '<S595>/Enable'
     */
    if (RTMR_ac_B.Comparison)
    {
        /* DataStoreWrite: '<S595>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S595>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S597>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID |= (uint8)32;
    }

    /* End of Outputs for SubSystem: '<S584>/Set_PID' */
}

#endif

/* Output and update for enable system: '<S584>/Set_PID1' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID1_h(void)
{
    /* Outputs for Enabled SubSystem: '<S584>/Set_PID1' incorporates:
     *  EnablePort: '<S596>/Enable'
     */
    if (RTMR_ac_B.Comparison2)
    {
        /* DataStoreWrite: '<S596>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S596>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S598>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID |= (uint8)16;
    }

    /* End of Outputs for SubSystem: '<S584>/Set_PID1' */
}

#endif

/* Output and update for enable system: '<S585>/Set_PID2' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID2(void)
{
    /* Outputs for Enabled SubSystem: '<S585>/Set_PID2' incorporates:
     *  EnablePort: '<S601>/Enable'
     */
    if (RTMR_ac_B.Comparison1_d)
    {
        /* DataStoreWrite: '<S601>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S601>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S603>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID |= (uint8)8;
    }

    /* End of Outputs for SubSystem: '<S585>/Set_PID2' */
}

#endif

/* Output and update for enable system: '<S585>/Set_PID3' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID3(void)
{
    /* Outputs for Enabled SubSystem: '<S585>/Set_PID3' incorporates:
     *  EnablePort: '<S602>/Enable'
     */
    if (RTMR_ac_B.Comparison3)
    {
        /* DataStoreWrite: '<S602>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S602>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S604>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID |= (uint8)4;
    }

    /* End of Outputs for SubSystem: '<S585>/Set_PID3' */
}

#endif

/* Output and update for enable system: '<S586>/Set_PID5' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID5(void)
{
    /* Outputs for Enabled SubSystem: '<S586>/Set_PID5' incorporates:
     *  EnablePort: '<S607>/Enable'
     */
    if (RTMR_ac_B.Comparison4)
    {
        /* DataStoreWrite: '<S607>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S607>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S609>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID = (uint8)(((uint16)
            RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID) | ((uint16)128));
    }

    /* End of Outputs for SubSystem: '<S586>/Set_PID5' */
}

#endif

/* Output and update for enable system: '<S586>/Set_PID6' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID6(void)
{
    /* Outputs for Enabled SubSystem: '<S586>/Set_PID6' incorporates:
     *  EnablePort: '<S608>/Enable'
     */
    if (RTMR_ac_B.Comparison5)
    {
        /* DataStoreWrite: '<S608>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S608>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S610>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID |= (uint8)64;
    }

    /* End of Outputs for SubSystem: '<S586>/Set_PID6' */
}

#endif

/* Output and update for enable system: '<S587>/Set_PID7' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID7(void)
{
    /* Outputs for Enabled SubSystem: '<S587>/Set_PID7' incorporates:
     *  EnablePort: '<S613>/Enable'
     */
    if (RTMR_ac_B.Comparison6)
    {
        /* DataStoreWrite: '<S613>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S613>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S615>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID |= (uint8)32;
    }

    /* End of Outputs for SubSystem: '<S587>/Set_PID7' */
}

#endif

/* Output and update for enable system: '<S587>/Set_PID8' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID8_g(void)
{
    /* Outputs for Enabled SubSystem: '<S587>/Set_PID8' incorporates:
     *  EnablePort: '<S614>/Enable'
     */
    if (RTMR_ac_B.Comparison7)
    {
        /* DataStoreWrite: '<S614>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S614>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S616>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID |= (uint8)16;
    }

    /* End of Outputs for SubSystem: '<S587>/Set_PID8' */
}

#endif

/* Output and update for enable system: '<S588>/Set_PID10' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID10(void)
{
    /* Outputs for Enabled SubSystem: '<S588>/Set_PID10' incorporates:
     *  EnablePort: '<S619>/Enable'
     */
    if (RTMR_ac_B.Comparison9)
    {
        /* DataStoreWrite: '<S619>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S619>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S621>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID |= (uint8)64;
    }

    /* End of Outputs for SubSystem: '<S588>/Set_PID10' */
}

#endif

/* Output and update for enable system: '<S588>/Set_PID9' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID9(void)
{
    /* Outputs for Enabled SubSystem: '<S588>/Set_PID9' incorporates:
     *  EnablePort: '<S620>/Enable'
     */
    if (RTMR_ac_B.Comparison8_o)
    {
        /* DataStoreWrite: '<S620>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S620>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S622>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID = (uint8)(((uint16)
            RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID) | ((uint16)128));
    }

    /* End of Outputs for SubSystem: '<S588>/Set_PID9' */
}

#endif

/* Output and update for enable system: '<S589>/Set_PID11' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID11(void)
{
    /* Outputs for Enabled SubSystem: '<S589>/Set_PID11' incorporates:
     *  EnablePort: '<S625>/Enable'
     */
    if (RTMR_ac_B.Comparison11)
    {
        /* DataStoreWrite: '<S625>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S625>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S627>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID |= (uint8)4;
    }

    /* End of Outputs for SubSystem: '<S589>/Set_PID11' */
}

#endif

/* Output and update for enable system: '<S589>/Set_PID12' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID12(void)
{
    /* Outputs for Enabled SubSystem: '<S589>/Set_PID12' incorporates:
     *  EnablePort: '<S626>/Enable'
     */
    if (RTMR_ac_B.Comparison10)
    {
        /* DataStoreWrite: '<S626>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S626>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S628>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID |= (uint8)8;
    }

    /* End of Outputs for SubSystem: '<S589>/Set_PID12' */
}

#endif

/* Output and update for enable system: '<S590>/Set_PID13' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID13(void)
{
    /* Outputs for Enabled SubSystem: '<S590>/Set_PID13' incorporates:
     *  EnablePort: '<S631>/Enable'
     */
    if (RTMR_ac_B.Comparison13)
    {
        /* DataStoreWrite: '<S631>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S631>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S633>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID |= (uint8)1;
    }

    /* End of Outputs for SubSystem: '<S590>/Set_PID13' */
}

#endif

/* Output and update for enable system: '<S590>/Set_PID14' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID14(void)
{
    /* Outputs for Enabled SubSystem: '<S590>/Set_PID14' incorporates:
     *  EnablePort: '<S632>/Enable'
     */
    if (RTMR_ac_B.Comparison12)
    {
        /* DataStoreWrite: '<S632>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S632>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S634>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID |= (uint8)2;
    }

    /* End of Outputs for SubSystem: '<S590>/Set_PID14' */
}

#endif

/* Output and update for enable system: '<S592>/Set_PID15' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_PID15(void)
{
    /* Outputs for Enabled SubSystem: '<S592>/Set_PID15' incorporates:
     *  EnablePort: '<S635>/Enable'
     */
    if (RTMR_ac_B.Comparison17)
    {
        /* DataStoreWrite: '<S635>/Data Store Write1' incorporates:
         *  DataStoreRead: '<S635>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S636>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID |= (uint8)2;
    }

    /* End of Outputs for SubSystem: '<S592>/Set_PID15' */
}

#endif

/* Output and update for action system: '<S570>/Test_Condition_Not_Satisfied' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Condition_Not_Satisfied(void)
{
    /* DataStoreWrite: '<S581>/Data Store Write1' */
    RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID = 8U;

    /* SignalConversion generated from: '<S581>/HybTransCmndSt' incorporates:
     *  Constant: '<S637>/Constant'
     *  VariantMerge generated from: '<S39>/Variant Source'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Neutral;
}

#endif

/* Output and update for enable system: '<S667>/SetPIDforG1' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforG1(void)
{
    /* Outputs for Enabled SubSystem: '<S667>/SetPIDforG1' incorporates:
     *  EnablePort: '<S676>/Enable'
     */
    if (RTMR_ac_B.Logical)
    {
        /* S-Function (fcgen): '<S676>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S676>/Subsystem'
         */
        /* DataStoreWrite: '<S678>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S678>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S679>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S679>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S679>/FixPt Bitwise Operator5'
         */
        RTMR_ac_DW.NeRTMR_y_RngTestResult_PID = (uint8)(~((uint8)(((uint8)
            (~RTMR_ac_DW.NeRTMR_y_RngTestResult_PID)) | ((uint8)4))));

        /* End of Outputs for S-Function (fcgen): '<S676>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S667>/SetPIDforG1' */
}

#endif

/* Output and update for enable system: '<S668>/SetPIDforG2' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforG2(void)
{
    /* Outputs for Enabled SubSystem: '<S668>/SetPIDforG2' incorporates:
     *  EnablePort: '<S684>/Enable'
     */
    if (RTMR_ac_B.Logical_c)
    {
        /* S-Function (fcgen): '<S684>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S684>/Subsystem'
         */
        /* DataStoreWrite: '<S686>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S686>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S687>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S687>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S687>/FixPt Bitwise Operator5'
         */
        RTMR_ac_DW.NeRTMR_y_RngTestResult_PID = (uint8)(~((uint8)(((uint8)
            (~RTMR_ac_DW.NeRTMR_y_RngTestResult_PID)) | ((uint8)8))));

        /* End of Outputs for S-Function (fcgen): '<S684>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S668>/SetPIDforG2' */
}

#endif

/* Output and update for enable system: '<S669>/SetPIDforG3' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforG3(void)
{
    /* Outputs for Enabled SubSystem: '<S669>/SetPIDforG3' incorporates:
     *  EnablePort: '<S692>/Enable'
     */
    if (RTMR_ac_B.Logical_h)
    {
        /* S-Function (fcgen): '<S692>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S692>/Subsystem'
         */
        /* DataStoreWrite: '<S694>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S694>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S695>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S695>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S695>/FixPt Bitwise Operator5'
         */
        RTMR_ac_DW.NeRTMR_y_RngTestResult_PID = (uint8)(~((uint8)(((uint8)
            (~RTMR_ac_DW.NeRTMR_y_RngTestResult_PID)) | ((uint8)16))));

        /* End of Outputs for S-Function (fcgen): '<S692>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S669>/SetPIDforG3' */
}

#endif

/* Output and update for enable system: '<S670>/SetPIDforG4' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforG4(void)
{
    /* Outputs for Enabled SubSystem: '<S670>/SetPIDforG4' incorporates:
     *  EnablePort: '<S700>/Enable'
     */
    if (RTMR_ac_B.Logical_k)
    {
        /* S-Function (fcgen): '<S700>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S700>/Subsystem'
         */
        /* DataStoreWrite: '<S702>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S702>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S703>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S703>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S703>/FixPt Bitwise Operator5'
         */
        RTMR_ac_DW.NeRTMR_y_RngTestResult_PID = (uint8)(~((uint8)(((uint8)
            (~RTMR_ac_DW.NeRTMR_y_RngTestResult_PID)) | ((uint8)32))));

        /* End of Outputs for S-Function (fcgen): '<S700>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S670>/SetPIDforG4' */
}

#endif

/* Output and update for enable system: '<S671>/SetPIDforM1' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforM1(void)
{
    /* Outputs for Enabled SubSystem: '<S671>/SetPIDforM1' incorporates:
     *  EnablePort: '<S708>/Enable'
     */
    if (RTMR_ac_B.Logical_hy)
    {
        /* S-Function (fcgen): '<S708>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S708>/Subsystem'
         */
        /* DataStoreWrite: '<S710>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S710>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S711>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S711>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S711>/FixPt Bitwise Operator5'
         */
        RTMR_ac_DW.NeRTMR_y_RngTestResult_PID = (uint8)(~((uint8)(((uint8)
            (~RTMR_ac_DW.NeRTMR_y_RngTestResult_PID)) | ((uint8)1))));

        /* End of Outputs for S-Function (fcgen): '<S708>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S671>/SetPIDforM1' */
}

#endif

/* Output and update for enable system: '<S672>/SetPIDforM2' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_SetPIDforM2(void)
{
    /* Outputs for Enabled SubSystem: '<S672>/SetPIDforM2' incorporates:
     *  EnablePort: '<S716>/Enable'
     */
    if (RTMR_ac_B.Logical_hr)
    {
        /* S-Function (fcgen): '<S716>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S716>/Subsystem'
         */
        /* DataStoreWrite: '<S718>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S718>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S719>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S719>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S719>/FixPt Bitwise Operator5'
         */
        RTMR_ac_DW.NeRTMR_y_RngTestResult_PID = (uint8)(~((uint8)(((uint8)
            (~RTMR_ac_DW.NeRTMR_y_RngTestResult_PID)) | ((uint8)2))));

        /* End of Outputs for S-Function (fcgen): '<S716>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S672>/SetPIDforM2' */
}

#endif

/* Output and update for action system: '<S570>/Test_Condition_Satisfied' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Condition_Satisfied(void)
{
    boolean rtb_AND_p4;
    boolean rtb_Comparison2_ed;

    /* Outputs for Atomic SubSystem: '<S582>/GenTransRngCmd' */
    /* If: '<S639>/If' incorporates:
     *  Constant: '<S648>/Calib'
     *  Constant: '<S649>/Calib'
     *  Constant: '<S650>/Calib'
     *  Constant: '<S651>/Calib'
     *  Constant: '<S652>/Calib'
     *  RelationalOperator: '<S639>/Comparison'
     *  RelationalOperator: '<S639>/Comparison1'
     *  RelationalOperator: '<S639>/Comparison2'
     *  RelationalOperator: '<S639>/Comparison3'
     *  RelationalOperator: '<S639>/Comparison4'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp >
            KeRTMR_n_NoSwitchSpd_G3ToG4)
    {
        /* Outputs for IfAction SubSystem: '<S639>/If_Action_Subsystem3' incorporates:
         *  ActionPort: '<S644>/Action_Port'
         */
        /* SignalConversion generated from: '<S644>/Out2' incorporates:
         *  Constant: '<S656>/Constant'
         *  VariantMerge generated from: '<S39>/Variant Source'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Gr4;

        /* End of Outputs for SubSystem: '<S639>/If_Action_Subsystem3' */
    }
    else if (RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp >
             KeRTMR_n_NoSwitchSpd_M2ToG3)
    {
        /* Outputs for IfAction SubSystem: '<S639>/If_Action_Subsystem2' incorporates:
         *  ActionPort: '<S643>/Action_Port'
         */
        /* SignalConversion generated from: '<S643>/Out2' incorporates:
         *  Constant: '<S655>/Constant'
         *  VariantMerge generated from: '<S39>/Variant Source'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Gr3;

        /* End of Outputs for SubSystem: '<S639>/If_Action_Subsystem2' */
    }
    else if (RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp >
             KeRTMR_n_NoSwitchSpd_G2ToM2)
    {
        /* Outputs for IfAction SubSystem: '<S639>/If_M2' incorporates:
         *  ActionPort: '<S647>/Action_Port'
         */
        /* SignalConversion generated from: '<S647>/Out2' incorporates:
         *  Constant: '<S659>/Constant'
         *  VariantMerge generated from: '<S39>/Variant Source'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Mode2;

        /* End of Outputs for SubSystem: '<S639>/If_M2' */
    }
    else if (RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp >
             KeRTMR_n_NoSwitchSpd_G1ToG2)
    {
        /* Outputs for IfAction SubSystem: '<S639>/If_Action_Subsystem1' incorporates:
         *  ActionPort: '<S642>/Action_Port'
         */
        /* SignalConversion generated from: '<S642>/Out2' incorporates:
         *  Constant: '<S654>/Constant'
         *  VariantMerge generated from: '<S39>/Variant Source'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Gr2;

        /* End of Outputs for SubSystem: '<S639>/If_Action_Subsystem1' */
    }
    else if (RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp >
             KeRTMR_n_NoSwitchSpd_M1ToG1)
    {
        /* Outputs for IfAction SubSystem: '<S639>/If_G1' incorporates:
         *  ActionPort: '<S645>/Action_Port'
         */
        /* SignalConversion generated from: '<S645>/Out2' incorporates:
         *  Constant: '<S657>/Constant'
         *  VariantMerge generated from: '<S39>/Variant Source'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Gr1;

        /* End of Outputs for SubSystem: '<S639>/If_G1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S639>/If_M1' incorporates:
         *  ActionPort: '<S646>/Action_Port'
         */
        /* SignalConversion generated from: '<S646>/Out2' incorporates:
         *  Constant: '<S658>/Constant'
         *  VariantMerge generated from: '<S39>/Variant Source'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Mode1;

        /* End of Outputs for SubSystem: '<S639>/If_M1' */
    }

    /* End of If: '<S639>/If' */
    /* End of Outputs for SubSystem: '<S582>/GenTransRngCmd' */

    /* RelationalOperator: '<S641>/Comparison2' incorporates:
     *  Constant: '<S661>/Constant'
     */
    rtb_Comparison2_ed = (((uint32)
                           RTMR_ac_B.TmpSignalConversionAtVeHSER_e_RngEqnSelO) ==
                          CeHSER_e_UseG1Eqn);

    /* Outputs for Atomic SubSystem: '<S667>/Timer_Reset_Trigger_Enabled' */
    /* Outputs for Atomic SubSystem: '<S677>/EdgeRising' */
    /* Logic: '<S680>/AND' incorporates:
     *  Logic: '<S680>/OR1'
     *  UnitDelay: '<S680>/Unit Delay'
     */
    rtb_AND_p4 = (rtb_Comparison2_ed && (!RTMR_ac_DW.UnitDelay_DSTATE_f4));

    /* Update for UnitDelay: '<S680>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_f4 = rtb_Comparison2_ed;

    /* End of Outputs for SubSystem: '<S677>/EdgeRising' */

    /* Switch: '<S677>/Switch1' incorporates:
     *  Constant: '<S677>/Constant_Value3'
     *  Logic: '<S677>/AND1'
     *  RelationalOperator: '<S677>/Greater_Than2'
     *  Switch: '<S677>/Switch2'
     *  UnitDelay: '<S677>/Unit Delay'
     */
    if (rtb_AND_p4 && (RTMR_ac_DW.UnitDelay_DSTATE_p <= 0.0F))
    {
        /* Switch: '<S677>/Switch1' incorporates:
         *  Constant: '<S674>/Calib'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_p = KeRTMR_t_MinTimeRequired_RngTst;
    }
    else
    {
        if (rtb_Comparison2_ed)
        {
            /* Switch: '<S677>/Switch2' incorporates:
             *  Constant: '<S673>/Calib'
             *  Constant: '<S677>/Constant_Value4'
             *  MinMax: '<S677>/Maximum'
             *  Sum: '<S677>/Subtraction'
             *  Switch: '<S677>/Switch1'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_p = fmaxf(RTMR_ac_DW.UnitDelay_DSTATE_p
                - KeRTMR_t_MedTED, 0.0F);
        }
    }

    /* End of Switch: '<S677>/Switch1' */

    /* Logic: '<S667>/Logical' incorporates:
     *  Constant: '<S677>/Constant_Value2'
     *  Logic: '<S667>/Logical2'
     *  RelationalOperator: '<S677>/Greater_Than1'
     */
    RTMR_ac_B.Logical = (rtb_Comparison2_ed && (RTMR_ac_DW.UnitDelay_DSTATE_p <=
                          0.0F));

    /* End of Outputs for SubSystem: '<S667>/Timer_Reset_Trigger_Enabled' */

    /* Outputs for Enabled SubSystem: '<S667>/SetPIDforG1' */
    RTMR_ac_SetPIDforG1();

    /* End of Outputs for SubSystem: '<S667>/SetPIDforG1' */

    /* RelationalOperator: '<S641>/Comparison3' incorporates:
     *  Constant: '<S662>/Constant'
     */
    rtb_Comparison2_ed = (((uint32)
                           RTMR_ac_B.TmpSignalConversionAtVeHSER_e_RngEqnSelO) ==
                          CeHSER_e_UseG2Eqn);

    /* Outputs for Atomic SubSystem: '<S668>/Timer_Reset_Trigger_Enabled' */
    /* Outputs for Atomic SubSystem: '<S685>/EdgeRising' */
    /* Logic: '<S688>/AND' incorporates:
     *  Logic: '<S688>/OR1'
     *  UnitDelay: '<S688>/Unit Delay'
     */
    rtb_AND_p4 = (rtb_Comparison2_ed && (!RTMR_ac_DW.UnitDelay_DSTATE_bf));

    /* Update for UnitDelay: '<S688>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_bf = rtb_Comparison2_ed;

    /* End of Outputs for SubSystem: '<S685>/EdgeRising' */

    /* Switch: '<S685>/Switch1' incorporates:
     *  Constant: '<S685>/Constant_Value3'
     *  Logic: '<S685>/AND1'
     *  RelationalOperator: '<S685>/Greater_Than2'
     *  Switch: '<S685>/Switch2'
     *  UnitDelay: '<S685>/Unit Delay'
     */
    if (rtb_AND_p4 && (RTMR_ac_DW.UnitDelay_DSTATE_ex <= 0.0F))
    {
        /* Switch: '<S685>/Switch1' incorporates:
         *  Constant: '<S682>/Calib'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_ex = KeRTMR_t_MinTimeRequired_RngTst;
    }
    else
    {
        if (rtb_Comparison2_ed)
        {
            /* Switch: '<S685>/Switch2' incorporates:
             *  Constant: '<S681>/Calib'
             *  Constant: '<S685>/Constant_Value4'
             *  MinMax: '<S685>/Maximum'
             *  Sum: '<S685>/Subtraction'
             *  Switch: '<S685>/Switch1'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_ex = fmaxf
                (RTMR_ac_DW.UnitDelay_DSTATE_ex - KeRTMR_t_MedTED, 0.0F);
        }
    }

    /* End of Switch: '<S685>/Switch1' */

    /* Logic: '<S668>/Logical' incorporates:
     *  Constant: '<S685>/Constant_Value2'
     *  Logic: '<S668>/Logical2'
     *  RelationalOperator: '<S685>/Greater_Than1'
     */
    RTMR_ac_B.Logical_c = (rtb_Comparison2_ed && (RTMR_ac_DW.UnitDelay_DSTATE_ex
                            <= 0.0F));

    /* End of Outputs for SubSystem: '<S668>/Timer_Reset_Trigger_Enabled' */

    /* Outputs for Enabled SubSystem: '<S668>/SetPIDforG2' */
    RTMR_ac_SetPIDforG2();

    /* End of Outputs for SubSystem: '<S668>/SetPIDforG2' */

    /* RelationalOperator: '<S641>/Comparison5' incorporates:
     *  Constant: '<S663>/Constant'
     */
    rtb_Comparison2_ed = (((uint32)
                           RTMR_ac_B.TmpSignalConversionAtVeHSER_e_RngEqnSelO) ==
                          CeHSER_e_UseG3Eqn);

    /* Outputs for Atomic SubSystem: '<S669>/Timer_Reset_Trigger_Enabled' */
    /* Outputs for Atomic SubSystem: '<S693>/EdgeRising' */
    /* Logic: '<S696>/AND' incorporates:
     *  Logic: '<S696>/OR1'
     *  UnitDelay: '<S696>/Unit Delay'
     */
    rtb_AND_p4 = (rtb_Comparison2_ed && (!RTMR_ac_DW.UnitDelay_DSTATE_n2));

    /* Update for UnitDelay: '<S696>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_n2 = rtb_Comparison2_ed;

    /* End of Outputs for SubSystem: '<S693>/EdgeRising' */

    /* Switch: '<S693>/Switch1' incorporates:
     *  Constant: '<S693>/Constant_Value3'
     *  Logic: '<S693>/AND1'
     *  RelationalOperator: '<S693>/Greater_Than2'
     *  Switch: '<S693>/Switch2'
     *  UnitDelay: '<S693>/Unit Delay'
     */
    if (rtb_AND_p4 && (RTMR_ac_DW.UnitDelay_DSTATE_h <= 0.0F))
    {
        /* Switch: '<S693>/Switch1' incorporates:
         *  Constant: '<S690>/Calib'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_h = KeRTMR_t_MinTimeRequired_RngTst;
    }
    else
    {
        if (rtb_Comparison2_ed)
        {
            /* Switch: '<S693>/Switch2' incorporates:
             *  Constant: '<S689>/Calib'
             *  Constant: '<S693>/Constant_Value4'
             *  MinMax: '<S693>/Maximum'
             *  Sum: '<S693>/Subtraction'
             *  Switch: '<S693>/Switch1'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_h = fmaxf(RTMR_ac_DW.UnitDelay_DSTATE_h
                - KeRTMR_t_MedTED, 0.0F);
        }
    }

    /* End of Switch: '<S693>/Switch1' */

    /* Logic: '<S669>/Logical' incorporates:
     *  Constant: '<S693>/Constant_Value2'
     *  Logic: '<S669>/Logical2'
     *  RelationalOperator: '<S693>/Greater_Than1'
     */
    RTMR_ac_B.Logical_h = (rtb_Comparison2_ed && (RTMR_ac_DW.UnitDelay_DSTATE_h <=
                            0.0F));

    /* End of Outputs for SubSystem: '<S669>/Timer_Reset_Trigger_Enabled' */

    /* Outputs for Enabled SubSystem: '<S669>/SetPIDforG3' */
    RTMR_ac_SetPIDforG3();

    /* End of Outputs for SubSystem: '<S669>/SetPIDforG3' */

    /* RelationalOperator: '<S641>/Comparison6' incorporates:
     *  Constant: '<S664>/Constant'
     */
    rtb_Comparison2_ed = (((uint32)
                           RTMR_ac_B.TmpSignalConversionAtVeHSER_e_RngEqnSelO) ==
                          CeHSER_e_UseG4Eqn);

    /* Outputs for Atomic SubSystem: '<S670>/Timer_Reset_Trigger_Enabled' */
    /* Outputs for Atomic SubSystem: '<S701>/EdgeRising' */
    /* Logic: '<S704>/AND' incorporates:
     *  Logic: '<S704>/OR1'
     *  UnitDelay: '<S704>/Unit Delay'
     */
    rtb_AND_p4 = (rtb_Comparison2_ed && (!RTMR_ac_DW.UnitDelay_DSTATE_hg));

    /* Update for UnitDelay: '<S704>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_hg = rtb_Comparison2_ed;

    /* End of Outputs for SubSystem: '<S701>/EdgeRising' */

    /* Switch: '<S701>/Switch1' incorporates:
     *  Constant: '<S701>/Constant_Value3'
     *  Logic: '<S701>/AND1'
     *  RelationalOperator: '<S701>/Greater_Than2'
     *  Switch: '<S701>/Switch2'
     *  UnitDelay: '<S701>/Unit Delay'
     */
    if (rtb_AND_p4 && (RTMR_ac_DW.UnitDelay_DSTATE_k1 <= 0.0F))
    {
        /* Switch: '<S701>/Switch1' incorporates:
         *  Constant: '<S698>/Calib'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_k1 = KeRTMR_t_MinTimeRequired_RngTst;
    }
    else
    {
        if (rtb_Comparison2_ed)
        {
            /* Switch: '<S701>/Switch2' incorporates:
             *  Constant: '<S697>/Calib'
             *  Constant: '<S701>/Constant_Value4'
             *  MinMax: '<S701>/Maximum'
             *  Sum: '<S701>/Subtraction'
             *  Switch: '<S701>/Switch1'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_k1 = fmaxf
                (RTMR_ac_DW.UnitDelay_DSTATE_k1 - KeRTMR_t_MedTED, 0.0F);
        }
    }

    /* End of Switch: '<S701>/Switch1' */

    /* Logic: '<S670>/Logical' incorporates:
     *  Constant: '<S701>/Constant_Value2'
     *  Logic: '<S670>/Logical2'
     *  RelationalOperator: '<S701>/Greater_Than1'
     */
    RTMR_ac_B.Logical_k = (rtb_Comparison2_ed && (RTMR_ac_DW.UnitDelay_DSTATE_k1
                            <= 0.0F));

    /* End of Outputs for SubSystem: '<S670>/Timer_Reset_Trigger_Enabled' */

    /* Outputs for Enabled SubSystem: '<S670>/SetPIDforG4' */
    RTMR_ac_SetPIDforG4();

    /* End of Outputs for SubSystem: '<S670>/SetPIDforG4' */

    /* RelationalOperator: '<S641>/Comparison4' incorporates:
     *  Constant: '<S665>/Constant'
     */
    rtb_Comparison2_ed = (((uint32)
                           RTMR_ac_B.TmpSignalConversionAtVeHSER_e_RngEqnSelO) ==
                          CeHSER_e_UseM1Eqn);

    /* Outputs for Atomic SubSystem: '<S671>/Timer_Reset_Trigger_Enabled' */
    /* Outputs for Atomic SubSystem: '<S709>/EdgeRising' */
    /* Logic: '<S712>/AND' incorporates:
     *  Logic: '<S712>/OR1'
     *  UnitDelay: '<S712>/Unit Delay'
     */
    rtb_AND_p4 = (rtb_Comparison2_ed && (!RTMR_ac_DW.UnitDelay_DSTATE_mx));

    /* Update for UnitDelay: '<S712>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_mx = rtb_Comparison2_ed;

    /* End of Outputs for SubSystem: '<S709>/EdgeRising' */

    /* Switch: '<S709>/Switch1' incorporates:
     *  Constant: '<S709>/Constant_Value3'
     *  Logic: '<S709>/AND1'
     *  RelationalOperator: '<S709>/Greater_Than2'
     *  Switch: '<S709>/Switch2'
     *  UnitDelay: '<S709>/Unit Delay'
     */
    if (rtb_AND_p4 && (RTMR_ac_DW.UnitDelay_DSTATE_lj <= 0.0F))
    {
        /* Switch: '<S709>/Switch1' incorporates:
         *  Constant: '<S706>/Calib'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_lj = KeRTMR_t_MinTimeRequired_RngTst;
    }
    else
    {
        if (rtb_Comparison2_ed)
        {
            /* Switch: '<S709>/Switch2' incorporates:
             *  Constant: '<S705>/Calib'
             *  Constant: '<S709>/Constant_Value4'
             *  MinMax: '<S709>/Maximum'
             *  Sum: '<S709>/Subtraction'
             *  Switch: '<S709>/Switch1'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_lj = fmaxf
                (RTMR_ac_DW.UnitDelay_DSTATE_lj - KeRTMR_t_MedTED, 0.0F);
        }
    }

    /* End of Switch: '<S709>/Switch1' */

    /* Logic: '<S671>/Logical' incorporates:
     *  Constant: '<S709>/Constant_Value2'
     *  Logic: '<S671>/Logical2'
     *  RelationalOperator: '<S709>/Greater_Than1'
     */
    RTMR_ac_B.Logical_hy = (rtb_Comparison2_ed &&
                            (RTMR_ac_DW.UnitDelay_DSTATE_lj <= 0.0F));

    /* End of Outputs for SubSystem: '<S671>/Timer_Reset_Trigger_Enabled' */

    /* Outputs for Enabled SubSystem: '<S671>/SetPIDforM1' */
    RTMR_ac_SetPIDforM1();

    /* End of Outputs for SubSystem: '<S671>/SetPIDforM1' */

    /* RelationalOperator: '<S641>/Comparison1' incorporates:
     *  Constant: '<S660>/Constant'
     */
    rtb_Comparison2_ed = (((uint32)
                           RTMR_ac_B.TmpSignalConversionAtVeHSER_e_RngEqnSelO) ==
                          CeHSER_e_UseM2Eqn);

    /* Outputs for Atomic SubSystem: '<S672>/Timer_Reset_Trigger_Enabled' */
    /* Outputs for Atomic SubSystem: '<S717>/EdgeRising' */
    /* Logic: '<S720>/AND' incorporates:
     *  Logic: '<S720>/OR1'
     *  UnitDelay: '<S720>/Unit Delay'
     */
    rtb_AND_p4 = (rtb_Comparison2_ed && (!RTMR_ac_DW.UnitDelay_DSTATE_b5));

    /* Update for UnitDelay: '<S720>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_b5 = rtb_Comparison2_ed;

    /* End of Outputs for SubSystem: '<S717>/EdgeRising' */

    /* Switch: '<S717>/Switch1' incorporates:
     *  Constant: '<S717>/Constant_Value3'
     *  Logic: '<S717>/AND1'
     *  RelationalOperator: '<S717>/Greater_Than2'
     *  Switch: '<S717>/Switch2'
     *  UnitDelay: '<S717>/Unit Delay'
     */
    if (rtb_AND_p4 && (RTMR_ac_DW.UnitDelay_DSTATE_i <= 0.0F))
    {
        /* Switch: '<S717>/Switch1' incorporates:
         *  Constant: '<S714>/Calib'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_i = KeRTMR_t_MinTimeRequired_RngTst;
    }
    else
    {
        if (rtb_Comparison2_ed)
        {
            /* Switch: '<S717>/Switch2' incorporates:
             *  Constant: '<S713>/Calib'
             *  Constant: '<S717>/Constant_Value4'
             *  MinMax: '<S717>/Maximum'
             *  Sum: '<S717>/Subtraction'
             *  Switch: '<S717>/Switch1'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_i = fmaxf(RTMR_ac_DW.UnitDelay_DSTATE_i
                - KeRTMR_t_MedTED, 0.0F);
        }
    }

    /* End of Switch: '<S717>/Switch1' */

    /* Logic: '<S672>/Logical' incorporates:
     *  Constant: '<S717>/Constant_Value2'
     *  Logic: '<S672>/Logical2'
     *  RelationalOperator: '<S717>/Greater_Than1'
     */
    RTMR_ac_B.Logical_hr = (rtb_Comparison2_ed && (RTMR_ac_DW.UnitDelay_DSTATE_i
        <= 0.0F));

    /* End of Outputs for SubSystem: '<S672>/Timer_Reset_Trigger_Enabled' */

    /* Outputs for Enabled SubSystem: '<S672>/SetPIDforM2' */
    RTMR_ac_SetPIDforM2();

    /* End of Outputs for SubSystem: '<S672>/SetPIDforM2' */
}

#endif

/* Output and update for action system: '<S393>/Transmission_Range_Test_Not_Enabled' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_Transmission_Range_Test_Not_Enabled(void)
{
    uint8 rtb_DataStoreRead_d;

    /* SignalConversion generated from: '<S560>/HybTransCmndSt' incorporates:
     *  Constant: '<S726>/Constant'
     *  VariantMerge generated from: '<S39>/Variant Source'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Neutral;

    /* DataStoreRead: '<S560>/Data Store Read' */
    rtb_DataStoreRead_d = RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID;

    /* Outputs for Enabled SubSystem: '<S560>/Subsystem' incorporates:
     *  EnablePort: '<S728>/Enable'
     */
    /* Logic: '<S560>/Logical' incorporates:
     *  DataStoreRead: '<S560>/Data Store Read'
     *  RelationalOperator: '<S560>/Comparison1'
     *  RelationalOperator: '<S560>/Comparison4'
     *  UnitDelay: '<S560>/Unit Delay1'
     */
    if ((((sint32)RTMR_ac_DW.UnitDelay1_DSTATE_j) == 4) && (4 == ((sint32)
            RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID)))
    {
        /* DataStoreWrite: '<S728>/Data Store Write1' incorporates:
         *  Constant: '<S728>/Constant_Value2'
         */
        RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID = 0U;
    }

    /* End of Logic: '<S560>/Logical' */
    /* End of Outputs for SubSystem: '<S560>/Subsystem' */

    /* Update for UnitDelay: '<S560>/Unit Delay1' */
    RTMR_ac_DW.UnitDelay1_DSTATE_j = rtb_DataStoreRead_d;
}

#endif

/* Output and update for enable system: '<S393>/Reset_PIDs' */
#if Rte_SysCon_Variant_RTMR_4

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Reset_PIDs(void)
{
    /* Outputs for Enabled SubSystem: '<S393>/Reset_PIDs' incorporates:
     *  EnablePort: '<S558>/Enable'
     */
    if (RTMR_ac_B.AND_k)
    {
        /* S-Function (fcgen): '<S558>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S558>/Reset_PIDs'
         */
        /* DataStoreWrite: '<S561>/Data Store Write20' incorporates:
         *  Constant: '<S561>/Constant_Value'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID = 0U;

        /* DataStoreWrite: '<S561>/Data Store Write21' incorporates:
         *  Constant: '<S561>/Constant_Value'
         */
        RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID = 0U;

        /* DataStoreWrite: '<S561>/Data Store Write22' incorporates:
         *  Constant: '<S561>/Constant_Value1'
         */
        RTMR_ac_DW.NeRTMR_y_RngTestResult_PID = 63U;

        /* DataStoreWrite: '<S561>/Data Store Write1' */
        RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID = 4U;

        /* End of Outputs for S-Function (fcgen): '<S558>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S393>/Reset_PIDs' */
}

#endif

/* Output and update for enable system: '<S39>/RstEOMPIDs' */
static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_RstEOMPIDs(void)
{
    /* Outputs for Enabled SubSystem: '<S39>/RstEOMPIDs' incorporates:
     *  EnablePort: '<S394>/Enable'
     */
    if (RTMR_ac_B.AND_f)
    {
        /* S-Function (fcgen): '<S394>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S394>/Reset_PIDs'
         */
        /* DataStoreWrite: '<S729>/Data Store Write1' incorporates:
         *  Constant: '<S729>/Constant_Value'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID = 0U;

        /* DataStoreWrite: '<S729>/Data Store Write3' incorporates:
         *  Constant: '<S729>/Constant_Value1'
         */
        RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID = 0U;

        /* DataStoreWrite: '<S729>/Data Store Write2' incorporates:
         *  Constant: '<S729>/Constant_Value2'
         */
        AeRTMR_y_ElecOnlyTestResult_PID = 0U;

        /* DataStoreWrite: '<S729>/Data Store Write4' */
        AeRTMR_y_ElecOnlyTestStatus_PID = 4U;

        /* DataStoreWrite: '<S729>/Data Store Write7' incorporates:
         *  Constant: '<S729>/Constant_Value4'
         */
        RTMR_ac_DW.BeRTMR_g_BSGRestartRsn = 0U;

        /* DataStoreWrite: '<S729>/Data Store Write' incorporates:
         *  Constant: '<S729>/FALSE_Constant'
         */
        VeRTMR_b_EngStopStInvalid_DS = false;

        /* DataStoreWrite: '<S729>/Data Store Write5' incorporates:
         *  Constant: '<S729>/FALSE_Constant1'
         */
        VeRTMR_b_EngStartStInvalid_DS = false;

        /* DataStoreWrite: '<S729>/Data Store Write6' incorporates:
         *  Constant: '<S729>/FALSE_Constant2'
         */
        VeRTMR_b_ElectricOnlyLatchedOn_DS = false;

        /* End of Outputs for S-Function (fcgen): '<S394>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S39>/RstEOMPIDs' */
}

/* Output and update for enable system: '<S59>/Set_status_PID' */
#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_status_PID(void)
{
    /* Outputs for Enabled SubSystem: '<S59>/Set_status_PID' incorporates:
     *  EnablePort: '<S182>/Enable'
     */
    if (RTMR_ac_B.AND_g)
    {
        /* S-Function (fcgen): '<S182>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S182>/Set_status_PID'
         */
        /* DataStoreWrite: '<S183>/Data Store Write22' incorporates:
         *  Constant: '<S184>/Constant'
         */
        RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID =
            CeRTMR_e_BattChrgStatus_Terminated;

        /* End of Outputs for S-Function (fcgen): '<S182>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S59>/Set_status_PID' */
}

#endif

/*
 * Output and update for action system:
 *    '<S43>/Do_Nothing'
 *    '<S57>/BattChargeNotEnabled'
 */
#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Do_Nothing_j(P2VAR(boolean, AUTOMATIC,
    RTMR_VAR_INIT) rty_BattRapidChrgCmnd, P2VAR(float32, AUTOMATIC,
    RTMR_VAR_INIT) rty_BattRapidChrgPwrDsrd)
{
    /* SignalConversion generated from: '<S53>/BattRapidChrgCmnd' incorporates:
     *  Constant: '<S53>/FALSE_Constant'
     */
    *rty_BattRapidChrgCmnd = false;

    /* SignalConversion generated from: '<S53>/BattRapidChrgPwrDsrd' incorporates:
     *  Constant: '<S53>/Constant_Value'
     */
    *rty_BattRapidChrgPwrDsrd = 0.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S97>/Terminate2'
 *    '<S97>/Terminate4'
 */
#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Terminate2(P2VAR(boolean, AUTOMATIC,
    RTMR_VAR_INIT) rty_EarlyTerminationFlag, P2VAR(uint8, AUTOMATIC,
    RTMR_VAR_INIT) rtd_NeRTMR_y_BattChrgCndtnCheck_PID)
{
    /* DataStoreWrite: '<S111>/Data Store Write9' incorporates:
     *  S-Function (sfix_bitop): '<S117>/FixPt Bitwise Operator1'
     */
    *rtd_NeRTMR_y_BattChrgCndtnCheck_PID |= (uint8)2;

    /* SignalConversion generated from: '<S111>/EarlyTerminationFlag' incorporates:
     *  Constant: '<S111>/TRUE_Constant'
     */
    *rty_EarlyTerminationFlag = true;
}

#endif

/* Output and update for enable system: '<S131>/Time_out' */
#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_out(void)
{
    /* Outputs for Enabled SubSystem: '<S131>/Time_out' incorporates:
     *  EnablePort: '<S147>/Enable'
     */
    if (RTMR_ac_B.AND_b)
    {
        /* S-Function (fcgen): '<S147>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S147>/RstOffst_TrgAmount'
         */
        /* DataStoreWrite: '<S149>/Data Store Write9' incorporates:
         *  DataStoreRead: '<S149>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S150>/FixPt Bitwise Operator1'
         */
        RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID |= (uint8)16;

        /* DataStoreWrite: '<S149>/Data Store Write22' incorporates:
         *  Constant: '<S151>/Constant'
         */
        RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID = CeRTMR_e_BattChrgStatus_Aborted;

        /* End of Outputs for S-Function (fcgen): '<S147>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S131>/Time_out' */
}

#endif

/* Output and update for enable system: '<S137>/RstPwrOfst_TrgChrg' */
#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_RstPwrOfst_TrgChrg(void)
{
    /* Outputs for Enabled SubSystem: '<S137>/RstPwrOfst_TrgChrg' incorporates:
     *  EnablePort: '<S171>/Enable'
     */
    if (RTMR_ac_B.AND_h)
    {
        /* S-Function (fcgen): '<S171>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S171>/RstPwrOff_TrgChrg'
         */
        /* DataStoreWrite: '<S173>/Data Store Write2' */
        RTMR_ac_DW.NeRTMR_It_BattChrgTarget_PID =
            RTMR_ac_B.TmpSignalConversionAtVeRTMR_It_BattChrgT;

        /* DataStoreWrite: '<S173>/Data Store Write3' */
        RTMR_ac_DW.NeRTMR_P_BattChrgPwrOffset_PID = RTMR_ac_B.Product;

        /* End of Outputs for S-Function (fcgen): '<S171>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S137>/RstPwrOfst_TrgChrg' */
}

#endif

/* Output and update for enable system: '<S137>/RstSts_InitPIDs' */
#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_RstSts_InitPIDs(void)
{
    /* Outputs for Enabled SubSystem: '<S137>/RstSts_InitPIDs' incorporates:
     *  EnablePort: '<S172>/Enable'
     */
    if (RTMR_ac_B.AND_d)
    {
        /* S-Function (fcgen): '<S172>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S172>/RstSts_InitPIDs'
         */
        /* DataStoreWrite: '<S174>/Data Store Write1' */
        RTMR_ac_DW.NeRTMR_It_BattChrgInitDiff_PID = RTMR_ac_B.Sum1;

        /* DataStoreWrite: '<S174>/Data Store Write2' */
        RTMR_ac_DW.NeRTMR_It_BattChrgTarget_PID =
            RTMR_ac_B.TmpSignalConversionAtVeRTMR_It_BattChrgT;

        /* DataStoreWrite: '<S174>/Data Store Write3' */
        RTMR_ac_DW.NeRTMR_P_BattChrgPwrOffset_PID = RTMR_ac_B.Product;

        /* DataStoreWrite: '<S174>/Data Store Write5' incorporates:
         *  Constant: '<S174>/Constant_Value1'
         */
        RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID = 0U;

        /* DataStoreWrite: '<S174>/Data Store Write4' incorporates:
         *  Constant: '<S174>/Constant_Value9'
         */
        RTMR_ac_DW.NeRTMR_It_BattChargedAmnt_PID = 0.0F;

        /* DataStoreWrite: '<S174>/Data Store Write22' incorporates:
         *  Constant: '<S175>/Constant'
         */
        RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID =
            CeRTMR_e_BattChrgStatus_InProgress;

        /* End of Outputs for S-Function (fcgen): '<S172>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S137>/RstSts_InitPIDs' */
}

#endif

/* Output and update for enable system: '<S136>/Set_status_PID' */
#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_status_PID_h(void)
{
    /* Outputs for Enabled SubSystem: '<S136>/Set_status_PID' incorporates:
     *  EnablePort: '<S164>/Enable'
     */
    if (RTMR_ac_B.AND_o)
    {
        /* S-Function (fcgen): '<S164>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S164>/Set_status_PID'
         */
        /* DataStoreWrite: '<S165>/Data Store Write22' incorporates:
         *  Constant: '<S166>/Constant'
         */
        RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID = CeRTMR_e_BattChrgStatus_StandBy;

        /* End of Outputs for S-Function (fcgen): '<S164>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S136>/Set_status_PID' */
}

#endif

/* Output and update for enable system: '<S135>/Set_Sts_InitPIDs' */
#if Rte_SysCon_Variant_RTMR_2

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Set_Sts_InitPIDs(void)
{
    /* Outputs for Enabled SubSystem: '<S135>/Set_Sts_InitPIDs' incorporates:
     *  EnablePort: '<S159>/Enable'
     */
    if (RTMR_ac_B.Logical1_f)
    {
        /* S-Function (fcgen): '<S159>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S159>/RstSts_InitPIDs'
         */
        /* DataStoreWrite: '<S160>/Data Store Write2' */
        RTMR_ac_DW.NeRTMR_It_BattChrgTarget_PID =
            RTMR_ac_B.TmpSignalConversionAtVeRTMR_It_BattChrgT;

        /* DataStoreWrite: '<S160>/Data Store Write3' */
        RTMR_ac_DW.NeRTMR_P_BattChrgPwrOffset_PID = RTMR_ac_B.Product;

        /* DataStoreWrite: '<S160>/Data Store Write22' incorporates:
         *  Constant: '<S161>/Constant'
         */
        RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID =
            CeRTMR_e_BattChrgStatus_InProgress;

        /* End of Outputs for S-Function (fcgen): '<S159>/Function_Call_Generator' */
    }

    /* End of Outputs for SubSystem: '<S135>/Set_Sts_InitPIDs' */
}

#endif

/* Output and update for action system: '<S809>/Complete' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Complete_g(void)
{
    /* Merge: '<S809>/Merge' incorporates:
     *  Constant: '<S810>/FALSE_Constant'
     *  SignalConversion generated from: '<S810>/EnableEngineStart'
     */
    VeRTMC_b_EnableEngineStart = false;
}

#endif

/* Output and update for action system: '<S809>/Time_Out' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out_m(void)
{
    /* DataStoreWrite: '<S821>/Data Store Write4' */
    RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 16U;

    /* SignalConversion generated from: '<S821>/EnableEngineStart' incorporates:
     *  Constant: '<S821>/FALSE_Constant'
     */
    VeRTMC_b_EnableEngineStart = false;
}

#endif

/* Output and update for action system: '<S809>/Do_Nothing' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Do_Nothing_e(void)
{
    /* SignalConversion generated from: '<S811>/EnableEngineStart' incorporates:
     *  Constant: '<S811>/FALSE_Constant'
     */
    VeRTMC_b_EnableEngineStart = false;
}

#endif

/* Output and update for action system: '<S819>/Test_Aborted' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Aborted_c(void)
{
    /* DataStoreWrite: '<S833>/Data Store Write4' */
    RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 8U;

    /* SignalConversion generated from: '<S833>/EnableEngineStart' incorporates:
     *  Constant: '<S833>/FALSE_Constant'
     */
    VeRTMC_b_EnableEngineStart = false;
}

#endif

/* Output and update for action system: '<S819>/Test_Enabled' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Enabled_f(void)
{
    boolean rtb_Logical_gb;
    boolean rtb_OR1;

    /* SignalConversion generated from: '<S834>/EnableEngineStart' incorporates:
     *  Constant: '<S834>/TRUE_Constant'
     */
    VeRTMC_b_EnableEngineStart = true;

    /* If: '<S857>/If' incorporates:
     *  Constant: '<S860>/Constant'
     *  Constant: '<S861>/Constant'
     *  RelationalOperator: '<S857>/Comparison1'
     *  RelationalOperator: '<S857>/Comparison2'
     */
    if (CeESSR_e_EngRunning == ((uint32)
                                RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt))
    {
        /* Outputs for IfAction SubSystem: '<S857>/Engine_Running' incorporates:
         *  ActionPort: '<S859>/Action_Port'
         */
        /* Switch: '<S859>/Switch1' incorporates:
         *  DataStoreRead: '<S859>/Data Store Read'
         *  DataStoreRead: '<S859>/Data Store Read1'
         *  DataStoreWrite: '<S859>/Data Store Write1'
         *  DataStoreWrite: '<S859>/Data Store Write2'
         *  S-Function (sfix_bitop): '<S871>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S871>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S871>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S873>/FixPt Bitwise Operator1'
         *  Switch: '<S859>/Switch2'
         */
        if (VeRTMR_b_SerClutchLrn_EnblDly1)
        {
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)1;
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 4U;
        }
        else
        {
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID = (uint8)(~((uint8)
                (((uint8)(~RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID)) |
                 ((uint8)1))));
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 32U;
        }

        /* End of Switch: '<S859>/Switch1' */

        /* Switch: '<S859>/Switch3' incorporates:
         *  DataStoreRead: '<S859>/Data Store Read2'
         *  DataStoreRead: '<S859>/Data Store Read3'
         *  DataStoreWrite: '<S859>/Data Store Write3'
         *  Logic: '<S859>/Logical2'
         *  S-Function (sfix_bitop): '<S872>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S872>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S872>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S874>/FixPt Bitwise Operator1'
         */
        if (!VeRTMR_b_SerClutchLrn_EnblDly1)
        {
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)2;
        }
        else
        {
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID = (uint8)(~((uint8)
                (((uint8)(~RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID)) |
                 ((uint8)2))));
        }

        /* End of Switch: '<S859>/Switch3' */
        /* End of Outputs for SubSystem: '<S857>/Engine_Running' */
    }
    else
    {
        if (((uint32)RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
                CeESSR_e_EngOff)
        {
            /* Outputs for IfAction SubSystem: '<S857>/Engine_Not_Running' incorporates:
             *  ActionPort: '<S858>/Action_Port'
             */
            /* Logic: '<S858>/Logical' incorporates:
             *  Constant: '<S858>/Constant_Value'
             *  DataStoreRead: '<S858>/Data Store Read5'
             *  Logic: '<S858>/Logical6'
             *  RelationalOperator: '<S858>/Comparison'
             *  S-Function (sfix_bitop): '<S858>/Bitwise_Logical_Operator1'
             */
            rtb_Logical_gb = (((((sint32)
                                 RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck3_PID)
                                & 2) <= 0) && (VeRTMR_b_SerClutchLrn_EnblDly1));

            /* Outputs for Atomic SubSystem: '<S858>/Timer_Reset_Enabled' */
            /* Outputs for Atomic SubSystem: '<S869>/EdgeRising' */
            /* Logic: '<S870>/OR1' incorporates:
             *  UnitDelay: '<S870>/Unit Delay'
             */
            rtb_OR1 = !RTMR_ac_DW.UnitDelay_DSTATE_d0;

            /* Update for UnitDelay: '<S870>/Unit Delay' */
            RTMR_ac_DW.UnitDelay_DSTATE_d0 = rtb_Logical_gb;

            /* Switch: '<S869>/Switch1' incorporates:
             *  Logic: '<S870>/AND'
             *  Switch: '<S869>/Switch2'
             */
            if (rtb_Logical_gb && rtb_OR1)
            {
                /* Switch: '<S869>/Switch1' incorporates:
                 *  Constant: '<S866>/Calib'
                 */
                RTMR_ac_DW.UnitDelay_DSTATE_o =
                    KeRTMR_t_MaxTimeAllowed_Ser_EngStrt;
            }
            else
            {
                if (rtb_Logical_gb)
                {
                    /* Switch: '<S869>/Switch2' incorporates:
                     *  Constant: '<S867>/Calib'
                     *  Constant: '<S869>/Constant_Value4'
                     *  MinMax: '<S869>/Maximum'
                     *  Sum: '<S869>/Subtraction'
                     *  Switch: '<S869>/Switch1'
                     *  UnitDelay: '<S869>/Unit Delay'
                     */
                    RTMR_ac_DW.UnitDelay_DSTATE_o = fmaxf
                        (RTMR_ac_DW.UnitDelay_DSTATE_o - KeRTMR_t_MedTED, 0.0F);
                }
            }

            /* End of Switch: '<S869>/Switch1' */
            /* End of Outputs for SubSystem: '<S869>/EdgeRising' */
            /* End of Outputs for SubSystem: '<S858>/Timer_Reset_Enabled' */

            /* Switch: '<S858>/Switch' */
            if (VeRTMR_b_SerClutchLrn_EnblDly1)
            {
                /* Outputs for Atomic SubSystem: '<S858>/Timer_Reset_Enabled' */
                /* Switch: '<S858>/Switch' incorporates:
                 *  Constant: '<S869>/Constant_Value2'
                 *  Logic: '<S858>/Logical1'
                 *  Logic: '<S858>/Logical2'
                 *  RelationalOperator: '<S869>/Greater_Than1'
                 */
                rtb_Logical_gb = ((VeRTMR_b_SerClutchLrn_EnblDly1) &&
                                  (RTMR_ac_DW.UnitDelay_DSTATE_o <= 0.0F));

                /* End of Outputs for SubSystem: '<S858>/Timer_Reset_Enabled' */
            }
            else
            {
                /* Switch: '<S858>/Switch' incorporates:
                 *  Constant: '<S858>/FALSE_Constant'
                 */
                rtb_Logical_gb = false;
            }

            /* End of Switch: '<S858>/Switch' */

            /* RelationalOperator: '<S858>/Comparison1' incorporates:
             *  Constant: '<S865>/Constant'
             *  SignalConversion generated from: '<S12>/VeENGR_e_EngStrtStpOvrrd'
             */
            rtb_OR1 = (((uint32)
                        RTMR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp) ==
                       CeSTRR_e_OvrrdEngOff);

            /* Switch: '<S858>/Switch1' incorporates:
             *  DataStoreRead: '<S858>/Data Store Read'
             *  DataStoreRead: '<S858>/Data Store Read4'
             *  DataStoreWrite: '<S858>/Data Store Write1'
             *  Logic: '<S858>/Logical3'
             *  Logic: '<S858>/Logical4'
             *  Logic: '<S858>/Logical5'
             *  RelationalOperator: '<S858>/Comparison2'
             *  S-Function (sfix_bitop): '<S862>/FixPt Bitwise Operator1'
             */
            if ((rtb_Logical_gb && rtb_OR1) || (rtb_OR1 && (4 == ((sint32)
                    RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID))))
            {
                RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)64;
            }

            /* End of Switch: '<S858>/Switch1' */

            /* Switch: '<S858>/Switch2' incorporates:
             *  DataStoreRead: '<S858>/Data Store Read2'
             *  DataStoreWrite: '<S858>/Data Store Write2'
             *  S-Function (sfix_bitop): '<S863>/FixPt Bitwise Operator1'
             */
            if (rtb_Logical_gb)
            {
                RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck3_PID |= (uint8)2;
            }

            /* End of Switch: '<S858>/Switch2' */
            /* End of Outputs for SubSystem: '<S857>/Engine_Not_Running' */
        }
    }

    /* End of If: '<S857>/If' */
}

#endif

/* Output and update for action system: '<S809>/Perform_Test' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Perform_Test_j(void)
{
    /* Switch: '<S841>/Switch' incorporates:
     *  Constant: '<S850>/Calib'
     *  DataStoreRead: '<S841>/Data Store Read'
     *  DataStoreWrite: '<S841>/Data Store Write1'
     *  RelationalOperator: '<S841>/Comparison1'
     *  S-Function (sfix_bitop): '<S849>/FixPt Bitwise Operator1'
     *  SignalConversion generated from: '<S12>/VeTRGR_e_VldtdTransRngSt'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans !=
            KeRTMR_e_DsrdTransRngSt_AE_ILE)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)1;
    }

    /* End of Switch: '<S841>/Switch' */

    /* Switch: '<S839>/Switch' incorporates:
     *  Constant: '<S847>/Constant'
     *  Constant: '<S848>/Calib'
     *  DataStoreRead: '<S839>/Data Store Read'
     *  DataStoreWrite: '<S839>/Data Store Write1'
     *  Logic: '<S839>/Logical1'
     *  RelationalOperator: '<S839>/Comparison2'
     *  S-Function (sfix_bitop): '<S846>/FixPt Bitwise Operator1'
     *  SignalConversion generated from: '<S12>/VeESSR_e_EngStartStopSt'
     */
    if (((((uint32)RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
            CeESSR_e_EngOff) && (KeRTMR_b_EnblInhbtStrtStp_Chk)) &&
            (RTMR_ac_B.Comparison1))
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID = (uint8)(((uint16)
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID) | ((uint16)128));
    }

    /* End of Switch: '<S839>/Switch' */

    /* Switch: '<S842>/Switch1' incorporates:
     *  Constant: '<S852>/Constant'
     *  DataStoreRead: '<S842>/Data Store Read2'
     *  DataStoreWrite: '<S842>/Data Store Write2'
     *  RelationalOperator: '<S842>/Comparison1'
     *  S-Function (sfix_bitop): '<S851>/FixPt Bitwise Operator1'
     *  SignalConversion generated from: '<S12>/VeSRAR_e_EngStrtStpOvrrd'
     */
    if (((uint32)RTMR_ac_B.TmpSignalConversionAtVeSRAR_e_EngStrtStp) ==
            CeSTRR_e_OvrrdEngOff)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID = (uint8)(((uint16)
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID) | ((uint16)128));
    }

    /* End of Switch: '<S842>/Switch1' */

    /* Switch: '<S838>/Switch' incorporates:
     *  Constant: '<S845>/Constant'
     *  DataStoreRead: '<S838>/Data Store Read'
     *  DataStoreWrite: '<S838>/Data Store Write1'
     *  RelationalOperator: '<S838>/Comparison4'
     *  S-Function (sfix_bitop): '<S844>/FixPt Bitwise Operator1'
     *  SignalConversion generated from: '<S12>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    if (((uint32)RTMR_ac_B.TmpSignalConversionAtVeBRKR_e_BrkPedalDs) ==
            CeBRKR_e_BrkNotApplied)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)2;
    }

    /* End of Switch: '<S838>/Switch' */

    /* Switch: '<S843>/Switch' incorporates:
     *  Abs: '<S843>/Abs'
     *  Constant: '<S854>/Calib'
     *  DataStoreRead: '<S843>/Data Store Read'
     *  DataStoreWrite: '<S843>/Data Store Write1'
     *  RelationalOperator: '<S843>/Comparison4'
     *  S-Function (sfix_bitop): '<S853>/FixPt Bitwise Operator1'
     */
    if (fabsf(RTMR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdSign) >
            KeRTMR_v_MaxVehSpdClutchLrn)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)4;
    }

    /* End of Switch: '<S843>/Switch' */

    /* Logic: '<S837>/Logical' incorporates:
     *  Constant: '<S837>/Constant_Value'
     *  Constant: '<S837>/Constant_Value1'
     *  DataStoreRead: '<S837>/Data Store Read1'
     *  DataStoreRead: '<S837>/Data Store Read2'
     *  DataStoreRead: '<S837>/Data Store Read3'
     *  RelationalOperator: '<S837>/Comparison1'
     *  RelationalOperator: '<S837>/Comparison2'
     *  RelationalOperator: '<S837>/Comparison4'
     *  S-Function (sfix_bitop): '<S837>/Bitwise_Logical_Operator1'
     */
    VeRTMR_b_SerAE_ILECondOK = (((((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID) == 0) && (0 == ((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck3_PID))) && ((((uint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID) & 252U) == 0U));

    /* If: '<S819>/Test_Conditions' */
    if (!VeRTMR_b_SerAE_ILECondOK)
    {
        /* Outputs for IfAction SubSystem: '<S819>/Test_Aborted' incorporates:
         *  ActionPort: '<S833>/Action_Port'
         */
        RTMR_ac_Test_Aborted_c();

        /* End of Outputs for SubSystem: '<S819>/Test_Aborted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S819>/Test_Enabled' incorporates:
         *  ActionPort: '<S834>/Action_Port'
         */
        RTMR_ac_Test_Enabled_f();

        /* End of Outputs for SubSystem: '<S819>/Test_Enabled' */
    }

    /* End of If: '<S819>/Test_Conditions' */
}

#endif

/* Output and update for action system: '<S883>/Complete' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Complete_k(void)
{
    /* Merge: '<S883>/Merge' incorporates:
     *  Constant: '<S884>/FALSE_Constant'
     *  SignalConversion generated from: '<S884>/EnableEngineStop'
     */
    VeRTMC_b_EnableEngStop = false;
}

#endif

/* Output and update for action system: '<S883>/Time_Out' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Time_Out_i(void)
{
    /* DataStoreWrite: '<S895>/Data Store Write4' */
    RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 16U;

    /* SignalConversion generated from: '<S895>/EnableEngineStop' incorporates:
     *  Constant: '<S895>/FALSE_Constant'
     */
    VeRTMC_b_EnableEngStop = false;
}

#endif

/* Output and update for action system: '<S883>/Do_Nothing' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Do_Nothing_e0(void)
{
    /* SignalConversion generated from: '<S885>/EnableEngineStop' incorporates:
     *  Constant: '<S885>/FALSE_Constant'
     */
    VeRTMC_b_EnableEngStop = false;
}

#endif

/* Output and update for action system: '<S893>/Test_Aborted' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Aborted_m(void)
{
    /* DataStoreWrite: '<S907>/Data Store Write4' */
    RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 8U;

    /* SignalConversion generated from: '<S907>/EnableEngineStop' incorporates:
     *  Constant: '<S907>/FALSE_Constant'
     */
    VeRTMC_b_EnableEngStop = false;
}

#endif

/* Output and update for action system: '<S893>/Test_Enabled' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Test_Enabled_p(void)
{
    boolean rtb_Logical_i;
    boolean rtb_OR1;

    /* SignalConversion generated from: '<S908>/EnableEngineStop' incorporates:
     *  Constant: '<S908>/TRUE_Constant'
     */
    VeRTMC_b_EnableEngStop = true;

    /* If: '<S949>/If' incorporates:
     *  Constant: '<S952>/Constant'
     *  Constant: '<S953>/Calib'
     *  RelationalOperator: '<S949>/Comparison1'
     *  RelationalOperator: '<S949>/Comparison2'
     *  SignalConversion generated from: '<S12>/VeESSR_e_EngStartStopSt'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed >
            KeRTMR_n_MaxTransInSpd_EOL)
    {
        /* Outputs for IfAction SubSystem: '<S949>/Engine_Not_Stopped' incorporates:
         *  ActionPort: '<S950>/Action_Port'
         */
        /* Logic: '<S950>/Logical' incorporates:
         *  Constant: '<S950>/Constant_Value'
         *  DataStoreRead: '<S950>/Data Store Read5'
         *  Logic: '<S950>/Logical6'
         *  RelationalOperator: '<S950>/Comparison'
         *  S-Function (sfix_bitop): '<S950>/Bitwise_Logical_Operator1'
         */
        rtb_Logical_i = (((((sint32)
                            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID) &
                           64) <= 0) && (VeRTMR_b_EOLClutchLrn_EnblDly1));

        /* Outputs for Atomic SubSystem: '<S950>/Timer_Reset_Enabled' */
        /* Outputs for Atomic SubSystem: '<S961>/EdgeRising' */
        /* Logic: '<S962>/OR1' incorporates:
         *  UnitDelay: '<S962>/Unit Delay'
         */
        rtb_OR1 = !RTMR_ac_DW.UnitDelay_DSTATE_kn;

        /* Update for UnitDelay: '<S962>/Unit Delay' */
        RTMR_ac_DW.UnitDelay_DSTATE_kn = rtb_Logical_i;

        /* Switch: '<S961>/Switch1' incorporates:
         *  Logic: '<S962>/AND'
         *  Switch: '<S961>/Switch2'
         */
        if (rtb_Logical_i && rtb_OR1)
        {
            /* Switch: '<S961>/Switch1' incorporates:
             *  Constant: '<S958>/Calib'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_f =
                KeRTMR_t_MaxTimeAllowed_EOLClutch_EngStop;
        }
        else
        {
            if (rtb_Logical_i)
            {
                /* Switch: '<S961>/Switch2' incorporates:
                 *  Constant: '<S959>/Calib'
                 *  Constant: '<S961>/Constant_Value4'
                 *  MinMax: '<S961>/Maximum'
                 *  Sum: '<S961>/Subtraction'
                 *  Switch: '<S961>/Switch1'
                 *  UnitDelay: '<S961>/Unit Delay'
                 */
                RTMR_ac_DW.UnitDelay_DSTATE_f = fmaxf
                    (RTMR_ac_DW.UnitDelay_DSTATE_f - KeRTMR_t_MedTED, 0.0F);
            }
        }

        /* End of Switch: '<S961>/Switch1' */
        /* End of Outputs for SubSystem: '<S961>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S950>/Timer_Reset_Enabled' */

        /* Switch: '<S950>/Switch' */
        if (VeRTMR_b_EOLClutchLrn_EnblDly1)
        {
            /* Outputs for Atomic SubSystem: '<S950>/Timer_Reset_Enabled' */
            /* Switch: '<S950>/Switch' incorporates:
             *  Constant: '<S961>/Constant_Value2'
             *  Logic: '<S950>/Logical1'
             *  Logic: '<S950>/Logical2'
             *  RelationalOperator: '<S961>/Greater_Than1'
             */
            rtb_Logical_i = ((VeRTMR_b_EOLClutchLrn_EnblDly1) &&
                             (RTMR_ac_DW.UnitDelay_DSTATE_f <= 0.0F));

            /* End of Outputs for SubSystem: '<S950>/Timer_Reset_Enabled' */
        }
        else
        {
            /* Switch: '<S950>/Switch' incorporates:
             *  Constant: '<S950>/FALSE_Constant'
             */
            rtb_Logical_i = false;
        }

        /* End of Switch: '<S950>/Switch' */

        /* RelationalOperator: '<S950>/Comparison1' incorporates:
         *  Constant: '<S957>/Constant'
         *  SignalConversion generated from: '<S12>/VeENGR_e_EngStrtStpOvrrd'
         */
        rtb_OR1 = (((uint32)RTMR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp) ==
                   CeSTRR_e_OvrrdEngOn);

        /* Switch: '<S950>/Switch1' incorporates:
         *  DataStoreRead: '<S950>/Data Store Read'
         *  DataStoreRead: '<S950>/Data Store Read4'
         *  DataStoreWrite: '<S950>/Data Store Write1'
         *  Logic: '<S950>/Logical3'
         *  Logic: '<S950>/Logical4'
         *  Logic: '<S950>/Logical5'
         *  RelationalOperator: '<S950>/Comparison2'
         *  S-Function (sfix_bitop): '<S954>/FixPt Bitwise Operator1'
         */
        if ((rtb_Logical_i && rtb_OR1) || (rtb_OR1 && (4 == ((sint32)
                RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID))))
        {
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)16;
        }

        /* End of Switch: '<S950>/Switch1' */

        /* Switch: '<S950>/Switch2' incorporates:
         *  DataStoreRead: '<S950>/Data Store Read2'
         *  DataStoreWrite: '<S950>/Data Store Write2'
         *  S-Function (sfix_bitop): '<S955>/FixPt Bitwise Operator1'
         */
        if (rtb_Logical_i)
        {
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)64;
        }

        /* End of Switch: '<S950>/Switch2' */
        /* End of Outputs for SubSystem: '<S949>/Engine_Not_Stopped' */
    }
    else
    {
        if (((uint32)RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
                CeESSR_e_EngOff)
        {
            /* Outputs for IfAction SubSystem: '<S949>/Engine_Stopped' incorporates:
             *  ActionPort: '<S951>/Action_Port'
             */
            /* Switch: '<S951>/Switch1' incorporates:
             *  DataStoreRead: '<S951>/Data Store Read'
             *  DataStoreRead: '<S951>/Data Store Read1'
             *  DataStoreWrite: '<S951>/Data Store Write1'
             *  DataStoreWrite: '<S951>/Data Store Write2'
             *  S-Function (sfix_bitop): '<S963>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S963>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S963>/FixPt Bitwise Operator5'
             *  S-Function (sfix_bitop): '<S965>/FixPt Bitwise Operator1'
             *  Switch: '<S951>/Switch2'
             */
            if (VeRTMR_b_EOLClutchLrn_EnblDly1)
            {
                RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)1;
                RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 4U;
            }
            else
            {
                RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID = (uint8)
                    (~((uint8)(((uint8)
                                (~RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID))
                               | ((uint8)1))));
                RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 32U;
            }

            /* End of Switch: '<S951>/Switch1' */

            /* Switch: '<S951>/Switch3' incorporates:
             *  DataStoreRead: '<S951>/Data Store Read2'
             *  DataStoreRead: '<S951>/Data Store Read3'
             *  DataStoreWrite: '<S951>/Data Store Write3'
             *  Logic: '<S951>/Logical2'
             *  S-Function (sfix_bitop): '<S964>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S964>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S964>/FixPt Bitwise Operator5'
             *  S-Function (sfix_bitop): '<S966>/FixPt Bitwise Operator1'
             */
            if (!VeRTMR_b_EOLClutchLrn_EnblDly1)
            {
                RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)2;
            }
            else
            {
                RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID = (uint8)
                    (~((uint8)(((uint8)
                                (~RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID))
                               | ((uint8)2))));
            }

            /* End of Switch: '<S951>/Switch3' */
            /* End of Outputs for SubSystem: '<S949>/Engine_Stopped' */
        }
    }

    /* End of If: '<S949>/If' */
}

#endif

/* Output and update for action system: '<S883>/Perform_Test' */
#if Rte_SysCon_Variant_RTMR_6

static FUNC(void, RTMR_CODE_LOCAL) RTMR_ac_Perform_Test_c(void)
{
    TeTRGR_e_TransRangeState tmp;

    /* Switch: '<S916>/Switch' incorporates:
     *  Constant: '<S933>/Constant'
     *  DataStoreRead: '<S916>/Data Store Read'
     *  DataStoreWrite: '<S916>/Data Store Write1'
     *  Logic: '<S916>/Logical'
     *  Logic: '<S916>/Logical2'
     *  RelationalOperator: '<S916>/Comparison4'
     *  S-Function (sfix_bitop): '<S932>/FixPt Bitwise Operator1'
     */
    if ((!VeRTMC_b_HCP_InPlantMode) && (((uint32)VeRTMR_e_ClutchLrnType_DS) ==
            CeRTMR_e_Clutch_EOL))
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck3_PID |= (uint8)1;
    }

    /* End of Switch: '<S916>/Switch' */

    /* Switch: '<S919>/Switch1' incorporates:
     *  Constant: '<S939>/Constant'
     *  Constant: '<S940>/Calib'
     *  Constant: '<S941>/Calib'
     *  RelationalOperator: '<S919>/Comparison4'
     */
    if (((uint32)VeRTMR_e_ClutchLrnType_DS) == CeRTMR_e_Clutch_EOL)
    {
        tmp = KeRTMR_e_DsrdTransRngSt_EOL;
    }
    else
    {
        tmp = KeRTMR_e_DsrdTransRngSt_K0;
    }

    /* End of Switch: '<S919>/Switch1' */

    /* Switch: '<S919>/Switch' incorporates:
     *  DataStoreRead: '<S919>/Data Store Read'
     *  DataStoreWrite: '<S919>/Data Store Write1'
     *  RelationalOperator: '<S919>/Comparison1'
     *  S-Function (sfix_bitop): '<S938>/FixPt Bitwise Operator1'
     *  SignalConversion generated from: '<S12>/VeTRGR_e_VldtdTransRngSt'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans != tmp)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)1;
    }

    /* End of Switch: '<S919>/Switch' */

    /* Switch: '<S912>/Switch' incorporates:
     *  Constant: '<S924>/Calib'
     *  DataStoreRead: '<S912>/Data Store Read'
     *  DataStoreWrite: '<S912>/Data Store Write1'
     *  RelationalOperator: '<S912>/Comparison3'
     *  S-Function (sfix_bitop): '<S923>/FixPt Bitwise Operator1'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa <
            KeRTMR_Pct_BattSOCMinLimit)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)8;
    }

    /* End of Switch: '<S912>/Switch' */

    /* Switch: '<S913>/Switch' incorporates:
     *  Constant: '<S927>/Calib'
     *  DataStoreRead: '<S913>/Data Store Read'
     *  DataStoreWrite: '<S913>/Data Store Write1'
     *  RelationalOperator: '<S913>/Comparison8'
     *  S-Function (sfix_bitop): '<S925>/FixPt Bitwise Operator1'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeBPCR_T_BatModTmpO >
            KeRTMR_T_BattTempMaxLimit)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)16;
    }

    /* End of Switch: '<S913>/Switch' */

    /* Switch: '<S913>/Switch1' incorporates:
     *  Constant: '<S928>/Calib'
     *  DataStoreRead: '<S913>/Data Store Read2'
     *  DataStoreWrite: '<S913>/Data Store Write2'
     *  RelationalOperator: '<S913>/Comparison9'
     *  S-Function (sfix_bitop): '<S926>/FixPt Bitwise Operator1'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeBPCR_T_BatModTmpO <
            KeRTMR_T_BattTempMinLimit)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)32;
    }

    /* End of Switch: '<S913>/Switch1' */

    /* Switch: '<S915>/Switch' incorporates:
     *  DataStoreRead: '<S915>/Data Store Read'
     *  DataStoreWrite: '<S915>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S931>/FixPt Bitwise Operator1'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeSTRR_b_HardChkEng)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)8;
    }

    /* End of Switch: '<S915>/Switch' */

    /* Switch: '<S917>/Switch' incorporates:
     *  Constant: '<S935>/Constant'
     *  Constant: '<S936>/Constant'
     *  Constant: '<S937>/Calib'
     *  DataStoreRead: '<S917>/Data Store Read'
     *  DataStoreWrite: '<S917>/Data Store Write1'
     *  Logic: '<S917>/Logical1'
     *  Logic: '<S917>/Logical3'
     *  RelationalOperator: '<S917>/Comparison2'
     *  RelationalOperator: '<S917>/Comparison4'
     *  S-Function (sfix_bitop): '<S934>/FixPt Bitwise Operator1'
     */
    if ((((((uint32)RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
            CeESSR_e_EngRunning) || (((uint32)
            RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
            CeESSR_e_PrepForStopSt)) && (KeRTMR_b_EnblInhbtStrtStp_Chk)) &&
            (RTMR_ac_B.Comparison1))
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID = (uint8)(((uint16)
            RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID) | ((uint16)128));
    }

    /* End of Switch: '<S917>/Switch' */

    /* Switch: '<S920>/Switch' incorporates:
     *  Constant: '<S943>/Constant'
     *  DataStoreRead: '<S920>/Data Store Read'
     *  DataStoreWrite: '<S920>/Data Store Write1'
     *  RelationalOperator: '<S920>/Comparison4'
     *  S-Function (sfix_bitop): '<S942>/FixPt Bitwise Operator1'
     *  SignalConversion generated from: '<S12>/VeSRAR_e_EngStrtStpOvrrd'
     */
    if (((uint32)RTMR_ac_B.TmpSignalConversionAtVeSRAR_e_EngStrtStp) ==
            CeSTRR_e_OvrrdEngOn)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)32;
    }

    /* End of Switch: '<S920>/Switch' */

    /* Switch: '<S914>/Switch' incorporates:
     *  Constant: '<S930>/Constant'
     *  DataStoreRead: '<S914>/Data Store Read'
     *  DataStoreWrite: '<S914>/Data Store Write1'
     *  RelationalOperator: '<S914>/Comparison4'
     *  S-Function (sfix_bitop): '<S929>/FixPt Bitwise Operator1'
     *  SignalConversion generated from: '<S12>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    if (((uint32)RTMR_ac_B.TmpSignalConversionAtVeBRKR_e_BrkPedalDs) ==
            CeBRKR_e_BrkNotApplied)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)2;
    }

    /* End of Switch: '<S914>/Switch' */

    /* Switch: '<S922>/Switch' incorporates:
     *  Abs: '<S922>/Abs'
     *  Constant: '<S946>/Calib'
     *  DataStoreRead: '<S922>/Data Store Read'
     *  DataStoreWrite: '<S922>/Data Store Write1'
     *  RelationalOperator: '<S922>/Comparison4'
     *  S-Function (sfix_bitop): '<S945>/FixPt Bitwise Operator1'
     */
    if (fabsf(RTMR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdSign) >
            KeRTMR_v_MaxVehSpdClutchLrn)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID |= (uint8)4;
    }

    /* End of Switch: '<S922>/Switch' */

    /* Switch: '<S921>/Switch1' incorporates:
     *  DataStoreRead: '<S921>/Data Store Read'
     *  DataStoreWrite: '<S921>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S944>/FixPt Bitwise Operator1'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeOHSR_b_ServEngOff)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck3_PID |= (uint8)4;
    }

    /* End of Switch: '<S921>/Switch1' */

    /* Logic: '<S911>/Logical' incorporates:
     *  Constant: '<S911>/Constant_Value'
     *  Constant: '<S911>/Constant_Value1'
     *  DataStoreRead: '<S911>/Data Store Read1'
     *  DataStoreRead: '<S911>/Data Store Read2'
     *  DataStoreRead: '<S911>/Data Store Read3'
     *  RelationalOperator: '<S911>/Comparison1'
     *  RelationalOperator: '<S911>/Comparison2'
     *  RelationalOperator: '<S911>/Comparison4'
     *  S-Function (sfix_bitop): '<S911>/Bitwise_Logical_Operator1'
     */
    VeRTMR_b_EOLCondOK = (((((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID) == 0) && (0 == ((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck3_PID))) && ((((uint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID) & 252U) == 0U));

    /* If: '<S893>/Test_Conditions' */
    if (!VeRTMR_b_EOLCondOK)
    {
        /* Outputs for IfAction SubSystem: '<S893>/Test_Aborted' incorporates:
         *  ActionPort: '<S907>/Action_Port'
         */
        RTMR_ac_Test_Aborted_m();

        /* End of Outputs for SubSystem: '<S893>/Test_Aborted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S893>/Test_Enabled' incorporates:
         *  ActionPort: '<S908>/Action_Port'
         */
        RTMR_ac_Test_Enabled_p();

        /* End of Outputs for SubSystem: '<S893>/Test_Enabled' */
    }

    /* End of If: '<S893>/Test_Conditions' */
}

#endif

/* Function for Chart: '<S41>/WED_ToothAbutment_Routine' */
#if Rte_SysCon_Variant_RTMR_8

static void RTMR_ac_enter_internal_ACTIVE(const boolean *Logical2)
{
    /* Entry Internal 'ACTIVE': '<S995>:3' */
    /* Entry Internal 'RoutineProcedure': '<S995>:211' */
    /* Transition: '<S995>:10' */
    if (*Logical2)
    {
        /* Transition: '<S995>:12' */
        RTMR_ac_DW.is_RoutineProcedure = RTMR_ac_IN_WEDFirstClosingRequest;

        /* Entry 'WEDFirstClosingRequest': '<S995>:9' */
        /*  Go Home Strategy in case WED are open. */
        VeRTMC_b_WEDTAOpeningCmd = false;
        VeRTMR_i_WEDTAStatus = 1U;
        VeRTMR_t_WaitTime = 0.0F;
    }
    else
    {
        /* Transition: '<S995>:14' */
        RTMR_ac_DW.is_RoutineProcedure = RTMR_ac_IN_WEDOpenRequest;

        /* Entry 'WEDOpenRequest': '<S995>:16' */
        VeRTMC_b_WEDTAOpeningCmd = true;
        VeRTMR_i_WEDTAStatus = 2U;
        VeRTMR_t_WaitTime = 0.0F;
    }

    /* Entry 'RoutineTimeOut': '<S995>:212' */
    VeRTMR_t_RoutActvTime = 0.0F;
}

#endif

/* Model step function for TID1 */
FUNC(void, RTMR_CODE) RTMR_MedTEB(void) /* Explicit Task: MedTEB */
{
    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR_e_EngSta;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/RTMR_MedTEB'
     */
    /* SignalConversion generated from: '<S11>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngSta);

    /* S-Function (fcgen): '<S11>/FcnCallGen' incorporates:
     *  SubSystem: '<S11>/EngStartStopSt_Chk'
     */
    /* DataStoreWrite: '<S28>/Data Store Write' incorporates:
     *  Constant: '<S33>/Calib'
     *  Constant: '<S34>/Calib'
     *  DataStoreRead: '<S28>/Data Store Read'
     *  Logic: '<S28>/Logical2'
     *  Logic: '<S28>/Logical3'
     *  RelationalOperator: '<S28>/Comparison1'
     *  RelationalOperator: '<S28>/Comparison4'
     */
    VeRTMR_b_EngStopStInvalid_DS = (((rtb_TmpSignalConversionAtVeESSR_e_EngSta ==
        KeRTMR_e_EngStopStInvalid1) || (rtb_TmpSignalConversionAtVeESSR_e_EngSta
        == KeRTMR_e_EngStopStInvalid2)) || (VeRTMR_b_EngStopStInvalid_DS));

    /* DataStoreWrite: '<S28>/Data Store Write1' incorporates:
     *  Constant: '<S29>/Calib'
     *  Constant: '<S30>/Calib'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S32>/Calib'
     *  DataStoreRead: '<S28>/Data Store Read1'
     *  Logic: '<S28>/Logical1'
     *  Logic: '<S28>/Logical4'
     *  RelationalOperator: '<S28>/Comparison2'
     *  RelationalOperator: '<S28>/Comparison3'
     *  RelationalOperator: '<S28>/Comparison5'
     *  RelationalOperator: '<S28>/Comparison6'
     */
    VeRTMR_b_EngStartStInvalid_DS =
        (((((rtb_TmpSignalConversionAtVeESSR_e_EngSta ==
             KeRTMR_e_EngStartStInvalid1) ||
            (rtb_TmpSignalConversionAtVeESSR_e_EngSta ==
             KeRTMR_e_EngStartStInvalid2)) ||
           (rtb_TmpSignalConversionAtVeESSR_e_EngSta ==
            KeRTMR_e_EngStartStInvalid3)) ||
          (rtb_TmpSignalConversionAtVeESSR_e_EngSta ==
           KeRTMR_e_EngStartStInvalid4)) || (VeRTMR_b_EngStartStInvalid_DS));

    /* End of Outputs for S-Function (fcgen): '<S11>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, RTMR_CODE) RTMR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_RTMR_2

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_RTMR_2

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_RTMR_2

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_RTMR_2

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_RTMR_2

    float32 tmpRead_3;

#endif

    TeHSER_e_InhibitStartStop tmpRead_4;

#if !Rte_SysCon_Variant_RTMR_7 && Rte_SysCon_Variant_RTMR_1

    float32 tmpRead_5;

#endif

#if !Rte_SysCon_Variant_RTMR_7 && Rte_SysCon_Variant_RTMR_1

    TeHPMR_e_HybSysState tmpRead_6;

#endif

#if !Rte_SysCon_Variant_RTMR_7 && Rte_SysCon_Variant_RTMR_1

    TeHCCR_e_ClutchStatus tmpRead_7;

#endif

#if Rte_SysCon_Variant_RTMR_3

    float32 tmpRead_8;

#endif

#if Rte_SysCon_Variant_RTMR_3

    TePMDR_e_PowerMode tmpRead_9;

#endif

#if Rte_SysCon_Variant_RTMR_7

    TeENGR_e_ETRQ_Mode tmpRead_a;

#endif

#if Rte_SysCon_Variant_RTMR_8

    TeADAR_e_ActuationStatus tmpRead_b;

#endif

#if Rte_SysCon_Variant_RTMR_8

    TePMDR_e_PowerMode tmpRead_c;

#endif

#if Rte_SysCon_Variant_RTMR_8

    TePLTR_e_EPBHoldSts tmpRead_d;

#endif

#if Rte_SysCon_Variant_RTMR_8

    TeHVTR_e_HV_BatCntctrStat tmpRead_e;

#endif

#if Rte_SysCon_Variant_RTMR_8

    uint8 tmpRead_f;

#endif

#if Rte_SysCon_Variant_RTMR_8

    boolean tmpRead_g;

#endif

#if Rte_SysCon_Variant_RTMR_8

    boolean tmpRead_h;

#endif

#if Rte_SysCon_Variant_RTMR_8

    TeINVR_e_MtrInvrtrSt tmpRead_i;

#endif

#if Rte_SysCon_Variant_RTMR_3 || Rte_SysCon_Variant_RTMR_6

    boolean rtb_TmpSignalConversionAtVeRTMR_b_EOLClu;

#endif

#if Rte_SysCon_Variant_RTMR_3 || Rte_SysCon_Variant_RTMR_6 || Rte_SysCon_Variant_RTMR_8

    boolean rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu;

#endif

#if Rte_SysCon_Variant_RTMR_6

    boolean rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl;

#endif

#if Rte_SysCon_Variant_RTMR_6

    boolean rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu;

#endif

    boolean rtb_TmpSignalConversionAtROLRoutine_MtrA;
    boolean rtb_TmpSignalConversionAtVeRTMR_b_Electr;
    boolean rtb_TmpSignalConversionAtVeRTMR_b_EnaRes;

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_6 || Rte_SysCon_Variant_RTMR_7

    boolean rtb_TmpSignalConversionAtROLRoutine_MtrB;

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_8

    uint8 rtb_TmpSignalConversionAtVeRTMR_y_Reslvr;

#endif

#if Rte_SysCon_Variant_RTMR_3 || Rte_SysCon_Variant_RTMR_8

    boolean rtb_TmpSignalConversionAtVeRTMR_b_GPFReg;

#endif

    sint16 rtb_Switch1_ge;
    boolean rtb_Comparison1;
    boolean rtb_Comparison4_bu;
    boolean rtb_TmpSignalConversionAtVePLTR_b_InFiel;
    boolean rtb_UnitDelay1_p;

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_7

    boolean rtb_TmpSignalConversionAtVeRTMR_b_BattCh;

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_6 || Rte_SysCon_Variant_RTMR_7

    boolean rtb_Logical4_ov;

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_8

    boolean rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

#endif

#if Rte_SysCon_Variant_RTMR_2 || (!Rte_SysCon_Variant_RTMR_7 && Rte_SysCon_Variant_RTMR_1)

    boolean rtb_Logical1_dk;

#endif

    boolean rtb_Logical4_k3;

#if Rte_SysCon_Variant_RTMR_2

    float32 rtb_Switch1_jm;

#endif

#if !Rte_SysCon_Variant_RTMR_2

    float32 rtb_Vector;

#endif

    boolean rtb_VM_Conditional_Signal_WED_HybTransCm;
    boolean rtb_VeRTMC_b_DsblMtrB;
    boolean rtb_VeRTMC_b_DsblMtrB_d;
    boolean rtb_VeRTMC_b_DsblMtr_OITR;
    boolean rtb_VeRTMC_b_DsblMtr_OITR_f;
    boolean rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrA;
    boolean rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrB;
    boolean rtb_VeRTMC_b_ForceAutoStopStartEnbl_ROL;
    boolean rtb_VeRTMC_b_HybTransCmndStEnbl_MtrA;
    boolean rtb_VeRTMC_b_HybTransCmndStEnbl_ROL;

#if Rte_SysCon_Variant_RTMR_8

    float32 rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy;

#endif

#if Rte_SysCon_Variant_RTMR_8

    float32 rtb_TmpSignalConversionAtVeADAR_L_LftTAP;

#endif

#if Rte_SysCon_Variant_RTMR_8

    float32 rtb_TmpSignalConversionAtVeADAR_L_RtTAPo;

#endif

#if Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5

    boolean rtb_Comparison_a2;

#endif

#if Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5

    boolean rtb_Logical2_fr;

#endif

#if Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5

    boolean rtb_Logical_e;

#endif

#if Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_4

    boolean rtb_TmpSignalConversionAtVeRTMR_b_HybTra;

#endif

#if Rte_SysCon_Variant_RTMR_8

    uint16 rtb_Switch1_oo;

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_6 || Rte_SysCon_Variant_RTMR_7

    boolean rtb_Comparison4_jkp;

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_4

    float32 rtb_TmpSignalConversionAtVeTFTR_T_TransO;

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7

    float32 rtb_TmpSignalConversionAtVeMTQR_M_MtrB_e;

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7

    float32 rtb_TmpSignalConversionAtVeMTQR_M_MtrB_j;

#endif

#if Rte_SysCon_Variant_RTMR_6

    float32 rtb_TmpSignalConversionAtVeTISR_n_TransM;

#endif

#if Rte_SysCon_Variant_RTMR_4

    boolean rtb_OR1;

#endif

#if Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_4

    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;

#endif

#if Rte_SysCon_Variant_RTMR_4

    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrB_T;

#endif

#if Rte_SysCon_Variant_RTMR_4

    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrA_I;

#endif

#if Rte_SysCon_Variant_RTMR_4

    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrB_I;

#endif

#if Rte_SysCon_Variant_RTMR_2

    float32 rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat;

#endif

#if !Rte_SysCon_Variant_RTMR_7 && Rte_SysCon_Variant_RTMR_1

    uint8 rtb_Switch1_p;

#endif

#if Rte_SysCon_Variant_RTMR_2 || (!Rte_SysCon_Variant_RTMR_7 && Rte_SysCon_Variant_RTMR_1)

    boolean rtb_OR1_nz;

#endif

#if Rte_SysCon_Variant_RTMR_2

    TeRTMR_e_BattChrgCmnd rtb_TmpSignalConversionAtVeRTMR_e_BattCh;

#endif

#if Rte_SysCon_Variant_RTMR_7 || Rte_SysCon_Variant_RTMR_8

    TeINVR_e_MtrInvrtrSt rtb_TmpSignalConversionAtVeINVR_e_MtrA_I;

#endif

#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7 || Rte_SysCon_Variant_RTMR_8

    TeINVR_e_MtrInvrtrSt rtb_TmpSignalConversionAtVeINVR_e_MtrB_I;

#endif

    TeOHSR_e_RngSel rtb_VM_Conditional_Signal_WED_HybTrans_p;
    TeOHSR_e_RngSel rtb_VeRTMC_e_HybTransCmndSt_MtrA;
    TeOHSR_e_RngSel rtb_VeRTMC_e_HybTransCmndSt_ROL;
    TeSTRR_e_AutoStopStartOvrrd rtb_VeRTMC_e_ForceAutoStopStartSt_MtrA;
    TeSTRR_e_AutoStopStartOvrrd rtb_VeRTMC_e_ForceAutoStopStartSt_MtrB;
    TeSTRR_e_AutoStopStartOvrrd rtb_VeRTMC_e_ForceAutoStopStartSt_ROL;

#if Rte_SysCon_Variant_RTMR_8

    TeADAR_e_ActuationStatus rtb_TmpSignalConversionAtVeADAR_e_LeftAc;

#endif

#if Rte_SysCon_Variant_RTMR_8

    TeADIR_e_WEDExtToolCmd rtb_TmpSignalConversionAtVeADIR_e_WEDExt;

#endif

#if Rte_SysCon_Variant_RTMR_7

    float32 rtb_TmpSignalConversionAtVeMTQR_M_MtrA_d;

#endif

#if Rte_SysCon_Variant_RTMR_7

    float32 rtb_TmpSignalConversionAtVeMTQR_M_MtrA_e;

#endif

#if Rte_SysCon_Variant_RTMR_7

    float32 rtb_TmpSignalConversionAtVeMTQR_M_MtrB_M;

#endif

#if Rte_SysCon_Variant_RTMR_7

    float32 rtb_TmpSignalConversionAtVeMTQR_M_MtrB_a;

#endif

#if Rte_SysCon_Variant_RTMR_7

    float32 rtb_TmpSignalConversionAtVeMTQR_M_MtrA_M;

#endif

#if Rte_SysCon_Variant_RTMR_7

    float32 rtb_TmpSignalConversionAtVeMTQR_M_MtrA_h;

#endif

#if Rte_SysCon_Variant_RTMR_8

    boolean Comparison8;

#endif

#if Rte_SysCon_Variant_RTMR_8

    TeINVR_e_MtrInvrtrSt rtb_TmpSignalConversionAtVeINVR[3];

#endif

#if Rte_SysCon_Variant_RTMR_8

    sint32 tmp;

#endif

#if Rte_SysCon_Variant_RTMR_2

    TeRTMR_e_BattChrgStatus tmp_0;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/RTMR_MedTED'
     */
    /* DataStoreWrite: '<S12>/DSW_StatusByte_DM_B_PstnNotLrnd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DM_B_PstnNotLrnd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DM_B_PstnNotLrnd_Value
        (&RTMR_ac_DW.StatusByte_DM_B_PstnNotLrnd);

    /* SignalConversion generated from: '<S12>/VeINVR_e_MtrA_InvrtrSt' */
#if Rte_SysCon_Variant_RTMR_7 || Rte_SysCon_Variant_RTMR_8

    /* SignalConversion generated from: '<S12>/VeINVR_e_MtrA_InvrtrSt' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value
        (&rtb_TmpSignalConversionAtVeINVR_e_MtrA_I);

#endif

    /* End of SignalConversion generated from: '<S12>/VeINVR_e_MtrA_InvrtrSt' */

    /* SignalConversion generated from: '<S12>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_3 || Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6 || Rte_SysCon_Variant_RTMR_8

    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans);

#endif

    /* End of SignalConversion generated from: '<S12>/VeTRGR_e_VldtdTransRngSt' */

    /* SignalConversion generated from: '<S12>/VeHPMR_b_PropSysActv' */
#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_8

    /* SignalConversion generated from: '<S12>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

#endif

    /* End of SignalConversion generated from: '<S12>/VeHPMR_b_PropSysActv' */

    /* SignalConversion generated from: '<S12>/VeADAR_e_LeftActuationStatus' incorporates:
     *  SignalConversion generated from: '<S12>/VeADAR_L_LftTAPos'
     *  SignalConversion generated from: '<S12>/VeADAR_L_RtTAPos'
     *  SignalConversion generated from: '<S12>/VeADIR_e_WEDExtToolCmd'
     *  SignalConversion generated from: '<S12>/VePMDR_U_BF1_SysVolt'
     */
#if Rte_SysCon_Variant_RTMR_8

    /* SignalConversion generated from: '<S12>/VeADAR_e_LeftActuationStatus' incorporates:
     *  Inport: '<Root>/VeADAR_e_LeftActuationStatus'
     */
    (void)Rte_Read_VeADAR_e_LeftActuationStatus_Value
        (&rtb_TmpSignalConversionAtVeADAR_e_LeftAc);

    /* SignalConversion generated from: '<S12>/VePMDR_U_BF1_SysVolt' incorporates:
     *  Inport: '<Root>/VePMDR_U_BF1_SysVolt'
     */
    (void)Rte_Read_VePMDR_U_BF1_SysVolt_Value
        (&rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy);

    /* SignalConversion generated from: '<S12>/VeADAR_L_LftTAPos' incorporates:
     *  Inport: '<Root>/VeADAR_L_LftTAPos'
     */
    (void)Rte_Read_VeADAR_L_LftTAPos_Value
        (&rtb_TmpSignalConversionAtVeADAR_L_LftTAP);

    /* SignalConversion generated from: '<S12>/VeADAR_L_RtTAPos' incorporates:
     *  Inport: '<Root>/VeADAR_L_RtTAPos'
     */
    (void)Rte_Read_VeADAR_L_RtTAPos_Value
        (&rtb_TmpSignalConversionAtVeADAR_L_RtTAPo);

    /* SignalConversion generated from: '<S12>/VeADIR_e_WEDExtToolCmd' incorporates:
     *  Inport: '<Root>/VeADIR_e_WEDExtToolCmd'
     */
    (void)Rte_Read_VeADIR_e_WEDExtToolCmd_Value
        (&rtb_TmpSignalConversionAtVeADIR_e_WEDExt);

#endif

    /* End of SignalConversion generated from: '<S12>/VeADAR_e_LeftActuationStatus' */

    /* SignalConversion generated from: '<S12>/VeINVR_e_MtrB_InvrtrSt' */
#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7 || Rte_SysCon_Variant_RTMR_8

    /* SignalConversion generated from: '<S12>/VeINVR_e_MtrB_InvrtrSt' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value
        (&rtb_TmpSignalConversionAtVeINVR_e_MtrB_I);

#endif

    /* End of SignalConversion generated from: '<S12>/VeINVR_e_MtrB_InvrtrSt' */

    /* SignalConversion generated from: '<S12>/VeRTMR_b_EOLClutchLrn_Enabled_read' incorporates:
     *  SignalConversion generated from: '<S12>/VeRTMR_b_AE_ClutchLrnEnabled_read'
     *  SignalConversion generated from: '<S12>/VeRTMR_b_ILE_ClutchLrnEnabled_read'
     *  SignalConversion generated from: '<S12>/VeRTMR_b_K0_ClutchLrnEnabled_read'
     */
#if Rte_SysCon_Variant_RTMR_6

    /* SignalConversion generated from: '<S12>/VeRTMR_b_EOLClutchLrn_Enabled_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EOLClu =
        Rte_IrvRead_RTMR_MedTED_VeRTMR_b_EOLClutchLrn_Enabled_write_IRV();

    /* SignalConversion generated from: '<S12>/VeRTMR_b_AE_ClutchLrnEnabled_read' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu =
        Rte_IrvRead_RTMR_MedTED_VeRTMR_b_AE_ClutchLrnEnabled_write_IRV();

    /* SignalConversion generated from: '<S12>/VeRTMR_b_ILE_ClutchLrnEnabled_read' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl =
        Rte_IrvRead_RTMR_MedTED_VeRTMR_b_ILE_ClutchLrnEnabled_write_IRV();

    /* SignalConversion generated from: '<S12>/VeRTMR_b_K0_ClutchLrnEnabled_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu =
        Rte_IrvRead_RTMR_MedTED_VeRTMR_b_K0_ClutchLrnEnabled_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VeRTMR_b_EOLClutchLrn_Enabled_read' */

    /* SignalConversion generated from: '<S12>/VePLTR_b_InFieldMode' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value
        (&rtb_TmpSignalConversionAtVePLTR_b_InFiel);

    /* SignalConversion generated from: '<S12>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
#if Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

    (void)Rte_Read_VeBPCR_T_BatModTmp_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeBPCR_T_BatModTmpO);

#endif

    /* End of SignalConversion generated from: '<S12>/VeBPCR_T_BatModTmp' */

    /* SignalConversion generated from: '<S12>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
#if Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa);

#endif

    /* End of SignalConversion generated from: '<S12>/VeBPCR_Pct_HV_BatPackSOC_Arb' */

    /* SignalConversion generated from: '<S12>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
#if Rte_SysCon_Variant_RTMR_6

    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeBRKR_e_BrkPedalDs);

#endif

    /* End of SignalConversion generated from: '<S12>/VeBRKR_e_BrkPedalDscrtInpt' */

    /* SignalConversion generated from: '<S12>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
#if Rte_SysCon_Variant_RTMR_3 || Rte_SysCon_Variant_RTMR_6

    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdSign);

#endif

    /* End of SignalConversion generated from: '<S12>/VeCSVR_v_VehSpdSigned' */

    /* SignalConversion generated from: '<S12>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6 || Rte_SysCon_Variant_RTMR_7

    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed);

#endif

    /* End of SignalConversion generated from: '<S12>/VeTISR_n_InputSpeed' */

    /* SignalConversion generated from: '<S12>/VeSTRR_b_HardChkEngOn' incorporates:
     *  Inport: '<Root>/VeSTRR_b_HardChkEngOn'
     */
#if Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

    (void)Rte_Read_VeSTRR_b_HardChkEngOn_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeSTRR_b_HardChkEng);

#endif

    /* End of SignalConversion generated from: '<S12>/VeSTRR_b_HardChkEngOn' */

    /* SignalConversion generated from: '<S12>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_3 || Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6 || Rte_SysCon_Variant_RTMR_7

    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt);

#endif

    /* End of SignalConversion generated from: '<S12>/VeESSR_e_EngStartStopSt' */

    /* SignalConversion generated from: '<S12>/VeSRAR_e_EngStrtStpOvrrd' incorporates:
     *  Inport: '<Root>/VeENGR_e_EngStrtStpOvrrd'
     *  Inport: '<Root>/VeSRAR_e_EngStrtStpOvrrd'
     *  SignalConversion generated from: '<S12>/VeENGR_e_EngStrtStpOvrrd'
     */
#if Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

    (void)Rte_Read_VeSRAR_e_EngStrtStpOvrrd_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeSRAR_e_EngStrtStp);
    (void)Rte_Read_VeENGR_e_EngStrtStpOvrrd_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp);

#endif

    /* End of SignalConversion generated from: '<S12>/VeSRAR_e_EngStrtStpOvrrd' */

    /* SignalConversion generated from: '<S12>/VeTISR_n_TransMinInputSpd' */
#if Rte_SysCon_Variant_RTMR_6

    /* SignalConversion generated from: '<S12>/VeTISR_n_TransMinInputSpd' incorporates:
     *  Inport: '<Root>/VeTISR_n_TransMinInputSpd'
     */
    (void)Rte_Read_VeTISR_n_TransMinInputSpd_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_TransM);

#endif

    /* End of SignalConversion generated from: '<S12>/VeTISR_n_TransMinInputSpd' */

    /* SignalConversion generated from: '<S12>/VeOHSR_b_ServEngOff_StgcInhb' incorporates:
     *  Inport: '<Root>/VeOHSR_b_ServEngOff_StgcInhb'
     */
#if Rte_SysCon_Variant_RTMR_5 || Rte_SysCon_Variant_RTMR_6

    (void)Rte_Read_VeOHSR_b_ServEngOff_StgcInhb_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeOHSR_b_ServEngOff);

#endif

    /* End of SignalConversion generated from: '<S12>/VeOHSR_b_ServEngOff_StgcInhb' */

    /* SignalConversion generated from: '<S12>/VeRTMR_b_HybTransCmndStEnbl_In' */
#if Rte_SysCon_Variant_RTMR_4

    /* SignalConversion generated from: '<S12>/VeRTMR_b_HybTransCmndStEnbl_In' incorporates:
     *  Inport: '<Root>/VeRTMR_b_HybTransCmndStEnbl_In'
     */
    (void)Rte_Read_VeRTMR_b_HybTransCmndStEnbl_In_Value
        (&rtb_TmpSignalConversionAtVeRTMR_b_HybTra);

#endif

    /* End of SignalConversion generated from: '<S12>/VeRTMR_b_HybTransCmndStEnbl_In' */

    /* SignalConversion generated from: '<S12>/VeRTMR_b_ElectricOnlyTest_Enabled_read' incorporates:
     *  Merge: '<Root>/Merge_2_Irv'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_Electr =
        Rte_IrvRead_RTMR_MedTED_Init_ElectricOnlyTest_Enabled_write_IRV();

    /* SignalConversion generated from: '<S12>/VeCSVR_n_TransOutSpdSgndFltrd' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
#if Rte_SysCon_Variant_RTMR_2 || Rte_SysCon_Variant_RTMR_4 || Rte_SysCon_Variant_RTMR_5

    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp);

#endif

    /* End of SignalConversion generated from: '<S12>/VeCSVR_n_TransOutSpdSgndFltrd' */

    /* SignalConversion generated from: '<S12>/VeTFTR_T_TransOilTemp' */
#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_4

    /* SignalConversion generated from: '<S12>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value
        (&rtb_TmpSignalConversionAtVeTFTR_T_TransO);

#endif

    /* End of SignalConversion generated from: '<S12>/VeTFTR_T_TransOilTemp' */

    /* SignalConversion generated from: '<S12>/VeINVR_T_MtrA_Temp' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     *  SignalConversion generated from: '<S12>/VeHSER_e_RngEqnSel'
     *  SignalConversion generated from: '<S12>/VeINVR_T_MtrA_InvrtrTemp'
     *  SignalConversion generated from: '<S12>/VeINVR_T_MtrB_InvrtrTemp'
     *  SignalConversion generated from: '<S12>/VeINVR_T_MtrB_Temp'
     */
#if Rte_SysCon_Variant_RTMR_4

    /* SignalConversion generated from: '<S12>/VeINVR_T_MtrA_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrA_T);

    /* SignalConversion generated from: '<S12>/VeINVR_T_MtrB_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrB_T);

    /* SignalConversion generated from: '<S12>/VeINVR_T_MtrA_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrA_I);

    /* SignalConversion generated from: '<S12>/VeINVR_T_MtrB_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrB_I);
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeHSER_e_RngEqnSelO);

#endif

    /* End of SignalConversion generated from: '<S12>/VeINVR_T_MtrA_Temp' */

    /* SignalConversion generated from: '<S12>/VeSTRR_g_AStpInhbtRsn2' incorporates:
     *  Inport: '<Root>/VeSTRR_g_AStpInhbtRsn2'
     */
#if Rte_SysCon_Variant_RTMR_5

    (void)Rte_Read_VeSTRR_g_AStpInhbtRsn2_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeSTRR_g_AStpInhbtR);

#endif

    /* End of SignalConversion generated from: '<S12>/VeSTRR_g_AStpInhbtRsn2' */

    /* SignalConversion generated from: '<S12>/VeRTMR_b_EnaReslvrOfsLrnRtn_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EnaRes =
        Rte_IrvRead_RTMR_MedTED_VeRTMR_b_EnaReslvrOfsLrnRtn_write_IRV();

    /* SignalConversion generated from: '<S12>/ROLRoutine_MtrA_Request' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    rtb_TmpSignalConversionAtROLRoutine_MtrA =
        Rte_IrvRead_RTMR_MedTED_VeRTMR_b_MCPA_ROL_Request_write_IRV();

    /* SignalConversion generated from: '<S12>/ROLRoutine_MtrB_Request' incorporates:
     *  SignalConversion generated from: '<S12>/VeMTQR_M_MtrA_MaxTorq_HTDR_ST'
     *  SignalConversion generated from: '<S12>/VeMTQR_M_MtrA_MaxTorq_LT'
     *  SignalConversion generated from: '<S12>/VeMTQR_M_MtrA_MinTorq_HTDR_ST'
     *  SignalConversion generated from: '<S12>/VeMTQR_M_MtrA_MinTorq_LT'
     *  SignalConversion generated from: '<S12>/VeMTQR_M_MtrB_MaxTorq_ST'
     *  SignalConversion generated from: '<S12>/VeMTQR_M_MtrB_MinTorq_ST'
     */
#if Rte_SysCon_Variant_RTMR_7

    /* SignalConversion generated from: '<S12>/ROLRoutine_MtrB_Request' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    rtb_TmpSignalConversionAtROLRoutine_MtrB =
        Rte_IrvRead_RTMR_MedTED_VeRTMR_b_MCPB_ROL_Request_write_IRV();

    /* SignalConversion generated from: '<S12>/VeMTQR_M_MtrA_MaxTorq_LT' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrA_MaxTorq_LT'
     */
    (void)Rte_Read_VeMTQR_M_MtrA_MaxTorq_LT_Value
        (&rtb_TmpSignalConversionAtVeMTQR_M_MtrA_M);

    /* SignalConversion generated from: '<S12>/VeMTQR_M_MtrA_MinTorq_LT' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrA_MinTorq_LT'
     */
    (void)Rte_Read_VeMTQR_M_MtrA_MinTorq_LT_Value
        (&rtb_TmpSignalConversionAtVeMTQR_M_MtrA_h);

    /* SignalConversion generated from: '<S12>/VeMTQR_M_MtrB_MaxTorq_ST' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrB_MaxTorq_ST'
     */
    (void)Rte_Read_VeMTQR_M_MtrB_MaxTorq_ST_Value
        (&rtb_TmpSignalConversionAtVeMTQR_M_MtrB_M);

    /* SignalConversion generated from: '<S12>/VeMTQR_M_MtrB_MinTorq_ST' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrB_MinTorq_ST'
     */
    (void)Rte_Read_VeMTQR_M_MtrB_MinTorq_ST_Value
        (&rtb_TmpSignalConversionAtVeMTQR_M_MtrB_a);

    /* SignalConversion generated from: '<S12>/VeMTQR_M_MtrA_MaxTorq_HTDR_ST' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrA_MaxTorq_HTDR_ST'
     */
    (void)Rte_Read_VeMTQR_M_MtrA_MaxTorq_HTDR_ST_Value
        (&rtb_TmpSignalConversionAtVeMTQR_M_MtrA_d);

    /* SignalConversion generated from: '<S12>/VeMTQR_M_MtrA_MinTorq_HTDR_ST' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrA_MinTorq_HTDR_ST'
     */
    (void)Rte_Read_VeMTQR_M_MtrA_MinTorq_HTDR_ST_Value
        (&rtb_TmpSignalConversionAtVeMTQR_M_MtrA_e);

#endif

    /* End of SignalConversion generated from: '<S12>/ROLRoutine_MtrB_Request' */

    /* SignalConversion generated from: '<S12>/VeMTQR_M_MtrB_MaxTorq_LT' incorporates:
     *  SignalConversion generated from: '<S12>/VeMTQR_M_MtrB_MinTorq_LT'
     */
#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7

    /* SignalConversion generated from: '<S12>/VeMTQR_M_MtrB_MaxTorq_LT' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrB_MaxTorq_LT'
     */
    (void)Rte_Read_VeMTQR_M_MtrB_MaxTorq_LT_Value
        (&rtb_TmpSignalConversionAtVeMTQR_M_MtrB_j);

    /* SignalConversion generated from: '<S12>/VeMTQR_M_MtrB_MinTorq_LT' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrB_MinTorq_LT'
     */
    (void)Rte_Read_VeMTQR_M_MtrB_MinTorq_LT_Value
        (&rtb_TmpSignalConversionAtVeMTQR_M_MtrB_e);

#endif

    /* End of SignalConversion generated from: '<S12>/VeMTQR_M_MtrB_MaxTorq_LT' */

    /* SignalConversion generated from: '<S12>/VeRTMR_y_ReslvrOfsLrnMCPFaultStatus_read' */
#if Rte_SysCon_Variant_RTMR_1

    /* SignalConversion generated from: '<S12>/VeRTMR_y_ReslvrOfsLrnMCPFaultStatus_read' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    rtb_TmpSignalConversionAtVeRTMR_y_Reslvr =
        Rte_IrvRead_RTMR_MedTED_VeRTMR_y_ReslvrOfsLrnMCPFaultStatus_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VeRTMR_y_ReslvrOfsLrnMCPFaultStatus_read' */

    /* SignalConversion generated from: '<S12>/VeRTMR_b_GPFRegenRequest_read' */
#if Rte_SysCon_Variant_RTMR_3

    /* SignalConversion generated from: '<S12>/VeRTMR_b_GPFRegenRequest_read' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_GPFReg =
        Rte_IrvRead_RTMR_MedTED_VeRTMR_b_GPFRegenRequest_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VeRTMR_b_GPFRegenRequest_read' */

    /* SignalConversion generated from: '<S12>/VeRTMR_b_BattChargeCmndEnabled' incorporates:
     *  Inport: '<Root>/VeRTMR_It_BattChrgTargetAmpHr'
     *  SignalConversion generated from: '<S12>/VeBPCR_T_HV_BatModTempMax'
     *  SignalConversion generated from: '<S12>/VeRTMR_It_BattChrgTargetAmpHr'
     *  SignalConversion generated from: '<S12>/VeRTMR_e_BattChargeCmnd'
     */
#if Rte_SysCon_Variant_RTMR_2

    /* SignalConversion generated from: '<S12>/VeRTMR_b_BattChargeCmndEnabled' incorporates:
     *  Inport: '<Root>/VeRTMR_b_BattChargeCmndEnabled'
     */
    (void)Rte_Read_VeRTMR_b_BattChargeCmndEnabled_Value
        (&rtb_TmpSignalConversionAtVeRTMR_b_BattCh);

    /* SignalConversion generated from: '<S12>/VeRTMR_e_BattChargeCmnd' incorporates:
     *  Inport: '<Root>/VeRTMR_e_BattChargeCmnd'
     */
    (void)Rte_Read_VeRTMR_e_BattChargeCmnd_Value
        (&rtb_TmpSignalConversionAtVeRTMR_e_BattCh);
    (void)Rte_Read_VeRTMR_It_BattChrgTargetAmpHr_Value
        (&RTMR_ac_B.TmpSignalConversionAtVeRTMR_It_BattChrgT);

    /* SignalConversion generated from: '<S12>/VeBPCR_T_HV_BatModTempMax' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempMax'
     *  Inport: '<Root>/VeRTMR_It_BattChrgTargetAmpHr'
     */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMax_Value
        (&rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat);

#endif

    /* End of SignalConversion generated from: '<S12>/VeRTMR_b_BattChargeCmndEnabled' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeHSER_e_InhibitStartStop' */
    (void)Rte_Read_VeHSER_e_InhibitStartStop_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/RTMR_MedTED'
     */
    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/Rolls_Test'
     */
    /* Outputs for Atomic SubSystem: '<S39>/EdgeRising1' */
    /* Logic: '<S389>/AND' incorporates:
     *  Logic: '<S389>/OR1'
     *  UnitDelay: '<S389>/Unit Delay'
     */
    RTMR_ac_B.AND_f = (rtb_TmpSignalConversionAtVeRTMR_b_Electr &&
                       (!RTMR_ac_DW.UnitDelay_DSTATE_lu));

    /* Update for UnitDelay: '<S389>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_lu = rtb_TmpSignalConversionAtVeRTMR_b_Electr;

    /* End of Outputs for SubSystem: '<S39>/EdgeRising1' */

    /* Outputs for Enabled SubSystem: '<S39>/RstEOMPIDs' */
    RTMR_ac_RstEOMPIDs();

    /* End of Outputs for SubSystem: '<S39>/RstEOMPIDs' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TCM_ClutchLearn'
     */
    /* Logic: '<S39>/Logical2' incorporates:
     *  Logic: '<S732>/Logical2'
     */
    VeRTMC_b_InPlantMode = !rtb_TmpSignalConversionAtVePLTR_b_InFiel;

    /* RelationalOperator: '<S39>/Comparison1' incorporates:
     *  Constant: '<S390>/Constant'
     *  Inport: '<Root>/VeHSER_e_InhibitStartStop'
     */
    RTMR_ac_B.Comparison1 = (((uint32)tmpRead_4) != CeHSER_e_NoInhibit);

    /* RelationalOperator: '<S387>/Comparison1' incorporates:
     *  DataStoreRead: '<S387>/Data Store Read1'
     */
    rtb_Comparison1 = (((sint32)RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID) == 4);

    /* RelationalOperator: '<S387>/Comparison4' incorporates:
     *  DataStoreRead: '<S387>/Data Store Read'
     */
    rtb_Comparison4_bu = (((sint32)AeRTMR_y_ElecOnlyTestStatus_PID) == 4);

    /* If: '<S393>/Check_CPID_Command' incorporates:
     *  Constant: '<S575>/Constant_Value2'
     *  DataStoreRead: '<S559>/Data Store Read1'
     *  Logic: '<S559>/Logical1'
     *  Logic: '<S559>/Logical2'
     *  RelationalOperator: '<S559>/Comparison1'
     *  RelationalOperator: '<S575>/Greater_Than1'
     *  SignalConversion generated from: '<S39>/Variant Source'
     *  UnitDelay: '<S393>/Unit Delay'
     *  UnitDelay: '<S393>/Unit Delay1'
     *  UnitDelay: '<S575>/Unit Delay'
     */
#if Rte_SysCon_Variant_RTMR_4

    /* UnitDelay: '<S393>/Unit Delay1' */
    rtb_UnitDelay1_p = RTMR_ac_DW.UnitDelay1_DSTATE_b;
    if (RTMR_ac_DW.UnitDelay1_DSTATE_b)
    {
        /* Outputs for IfAction SubSystem: '<S393>/Transmission_Range_Test_Enabled' incorporates:
         *  ActionPort: '<S559>/Action_Port'
         */
        /* RelationalOperator: '<S572>/Comparison' incorporates:
         *  Constant: '<S572>/Constant_Value'
         *  DataStoreRead: '<S572>/Data Store Read7'
         *  S-Function (sfix_bitop): '<S572>/Bitwise_Logical_Operator'
         */
        rtb_Comparison_a2 = ((((sint32)RTMR_ac_DW.NeRTMR_y_RngTestResult_PID) &
                              63) > 0);

        /* Logic: '<S573>/Logical2' incorporates:
         *  DataStoreRead: '<S573>/Data Store Read7'
         *  DataTypeConversion: '<S573>/Data Type Conversion'
         *  S-Function (sfix_bitop): '<S573>/Bitwise_Logical_Operator'
         */
        rtb_Logical2_fr = ((((uint32)RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID)
                            & 1U) == 0U);

        /* Logic: '<S559>/Logical' incorporates:
         *  UnitDelay: '<S393>/Unit Delay'
         */
        rtb_Logical_e = (((RTMR_ac_DW.UnitDelay_DSTATE_my) && rtb_Comparison_a2)
                         && rtb_Logical2_fr);

        /* Outputs for Atomic SubSystem: '<S559>/Timer_Reset_Enabled' */
        /* Outputs for Atomic SubSystem: '<S575>/EdgeRising' */
        /* Logic: '<S725>/OR1' incorporates:
         *  UnitDelay: '<S725>/Unit Delay'
         */
        rtb_OR1 = !RTMR_ac_DW.UnitDelay_DSTATE_fm;

        /* Update for UnitDelay: '<S725>/Unit Delay' */
        RTMR_ac_DW.UnitDelay_DSTATE_fm = rtb_Logical_e;

        /* Switch: '<S575>/Switch1' incorporates:
         *  Constant: '<S567>/Calib'
         *  Logic: '<S725>/AND'
         *  Switch: '<S575>/Switch2'
         *  UnitDelay: '<S575>/Unit Delay'
         */
        if (rtb_Logical_e && rtb_OR1)
        {
            RTMR_ac_DW.UnitDelay_DSTATE_l5 = KeRTMR_t_MaxTimeAllowed_RngTst;
        }
        else
        {
            if (rtb_Logical_e)
            {
                /* UnitDelay: '<S575>/Unit Delay' incorporates:
                 *  Constant: '<S568>/Calib'
                 *  Constant: '<S575>/Constant_Value4'
                 *  MinMax: '<S575>/Maximum'
                 *  Sum: '<S575>/Subtraction'
                 *  Switch: '<S575>/Switch2'
                 */
                RTMR_ac_DW.UnitDelay_DSTATE_l5 = fmaxf
                    (RTMR_ac_DW.UnitDelay_DSTATE_l5 - KeRTMR_t_MedTED, 0.0F);
            }
        }

        /* End of Switch: '<S575>/Switch1' */
        /* End of Outputs for SubSystem: '<S575>/EdgeRising' */

        /* Outputs for Enabled SubSystem: '<S559>/Set_PID' incorporates:
         *  EnablePort: '<S571>/Enable'
         */
        if (((((sint32)RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID) == 4) &&
                (RTMR_ac_DW.UnitDelay_DSTATE_l5 <= 0.0F)) &&
                (RTMR_ac_DW.UnitDelay_DSTATE_my))
        {
            /* S-Function (fcgen): '<S571>/Function_Call_Generator' incorporates:
             *  SubSystem: '<S571>/Set_TimeOut_PID'
             */
            /* DataStoreWrite: '<S721>/Data Store Write9' incorporates:
             *  DataStoreRead: '<S721>/Data Store Read1'
             *  S-Function (sfix_bitop): '<S722>/FixPt Bitwise Operator1'
             */
            RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID |= (uint8)1;

            /* End of Outputs for S-Function (fcgen): '<S571>/Function_Call_Generator' */
        }

        /* End of Outputs for SubSystem: '<S559>/Set_PID' */
        /* End of Outputs for SubSystem: '<S559>/Timer_Reset_Enabled' */

        /* If: '<S559>/Test_conditions' incorporates:
         *  Constant: '<S575>/Constant_Value2'
         *  DataStoreRead: '<S559>/Data Store Read'
         *  DataStoreRead: '<S559>/Data Store Read1'
         *  Logic: '<S559>/Logical1'
         *  Logic: '<S559>/Logical2'
         *  RelationalOperator: '<S559>/Comparison1'
         *  RelationalOperator: '<S559>/Comparison4'
         *  RelationalOperator: '<S575>/Greater_Than1'
         *  UnitDelay: '<S393>/Unit Delay'
         *  UnitDelay: '<S575>/Unit Delay'
         */
        if (!rtb_Comparison_a2)
        {
            /* Outputs for IfAction SubSystem: '<S559>/Complete' incorporates:
             *  ActionPort: '<S563>/Action_Port'
             */
            RTMR_ac_Complete_i();

            /* End of Outputs for SubSystem: '<S559>/Complete' */
        }
        else if (!rtb_Logical2_fr)
        {
            /* Outputs for IfAction SubSystem: '<S559>/Time_Out' incorporates:
             *  ActionPort: '<S574>/Action_Port'
             */
            RTMR_ac_Time_Out_l();

            /* End of Outputs for SubSystem: '<S559>/Time_Out' */
        }
        else if (((sint32)RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID) != 4)
        {
            /* Outputs for IfAction SubSystem: '<S559>/DoNothing' incorporates:
             *  ActionPort: '<S564>/Action_Port'
             */
            RTMR_ac_DoNothing();

            /* End of Outputs for SubSystem: '<S559>/DoNothing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S559>/Perform_Test' incorporates:
             *  ActionPort: '<S570>/Action_Port'
             */
            /* Outputs for Atomic SubSystem: '<S570>/ChkRngTstCndtns' */
            /* RelationalOperator: '<S591>/Comparison15' incorporates:
             *  Constant: '<S591>/Constant_Value'
             *  DataStoreRead: '<S591>/Data Store Read1'
             */
            rtb_Comparison_a2 = (((sint32)
                                  RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID) ==
                                 0);

            /* RelationalOperator: '<S591>/Comparison16' incorporates:
             *  Constant: '<S591>/Constant_Value1'
             *  DataStoreRead: '<S591>/Data Store Read2'
             */
            rtb_Logical2_fr = (((sint32)
                                RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID) == 0);

            /* RelationalOperator: '<S584>/Comparison' incorporates:
             *  Constant: '<S593>/Calib'
             */
            RTMR_ac_B.Comparison = (rtb_TmpSignalConversionAtVeTFTR_T_TransO >
                                    KeRTMR_T_TransOilTempMaxLimit);

            /* Outputs for Enabled SubSystem: '<S584>/Set_PID' */
            RTMR_ac_Set_PID_fx();

            /* End of Outputs for SubSystem: '<S584>/Set_PID' */

            /* RelationalOperator: '<S584>/Comparison2' incorporates:
             *  Constant: '<S594>/Calib'
             */
            RTMR_ac_B.Comparison2 = (rtb_TmpSignalConversionAtVeTFTR_T_TransO <
                KeRTMR_T_TransOilTempMinLimit);

            /* Outputs for Enabled SubSystem: '<S584>/Set_PID1' */
            RTMR_ac_Set_PID1_h();

            /* End of Outputs for SubSystem: '<S584>/Set_PID1' */

            /* RelationalOperator: '<S585>/Comparison1' incorporates:
             *  Constant: '<S599>/Calib'
             */
            RTMR_ac_B.Comparison1_d =
                (RTMR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa >
                 KeRTMR_Pct_BattSOCMaxLimit);

            /* Outputs for Enabled SubSystem: '<S585>/Set_PID2' */
            RTMR_ac_Set_PID2();

            /* End of Outputs for SubSystem: '<S585>/Set_PID2' */

            /* RelationalOperator: '<S585>/Comparison3' incorporates:
             *  Constant: '<S600>/Calib'
             */
            RTMR_ac_B.Comparison3 =
                (RTMR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa <
                 KeRTMR_Pct_BattSOCMinLimit);

            /* Outputs for Enabled SubSystem: '<S585>/Set_PID3' */
            RTMR_ac_Set_PID3();

            /* End of Outputs for SubSystem: '<S585>/Set_PID3' */

            /* RelationalOperator: '<S586>/Comparison4' incorporates:
             *  Constant: '<S605>/Calib'
             */
            RTMR_ac_B.Comparison4 = (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T >
                KeRTMR_T_MtrATempMaxLimit);

            /* Outputs for Enabled SubSystem: '<S586>/Set_PID5' */
            RTMR_ac_Set_PID5();

            /* End of Outputs for SubSystem: '<S586>/Set_PID5' */

            /* RelationalOperator: '<S586>/Comparison5' incorporates:
             *  Constant: '<S606>/Calib'
             */
            RTMR_ac_B.Comparison5 = (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T <
                KeRTMR_T_MtrATempMinLimit);

            /* Outputs for Enabled SubSystem: '<S586>/Set_PID6' */
            RTMR_ac_Set_PID6();

            /* End of Outputs for SubSystem: '<S586>/Set_PID6' */

            /* RelationalOperator: '<S587>/Comparison6' incorporates:
             *  Constant: '<S611>/Calib'
             */
            RTMR_ac_B.Comparison6 = (rtb_TmpSignalConversionAtVeINVR_T_MtrB_T >
                KeRTMR_T_MtrBTempMaxLimit);

            /* Outputs for Enabled SubSystem: '<S587>/Set_PID7' */
            RTMR_ac_Set_PID7();

            /* End of Outputs for SubSystem: '<S587>/Set_PID7' */

            /* RelationalOperator: '<S587>/Comparison7' incorporates:
             *  Constant: '<S612>/Calib'
             */
            RTMR_ac_B.Comparison7 = (rtb_TmpSignalConversionAtVeINVR_T_MtrB_T <
                KeRTMR_T_MtrBTempMinLimit);

            /* Outputs for Enabled SubSystem: '<S587>/Set_PID8' */
            RTMR_ac_Set_PID8_g();

            /* End of Outputs for SubSystem: '<S587>/Set_PID8' */

            /* RelationalOperator: '<S588>/Comparison9' incorporates:
             *  Constant: '<S618>/Calib'
             */
            RTMR_ac_B.Comparison9 =
                (RTMR_ac_B.TmpSignalConversionAtVeBPCR_T_BatModTmpO <
                 KeRTMR_T_BattTempMinLimit);

            /* Outputs for Enabled SubSystem: '<S588>/Set_PID10' */
            RTMR_ac_Set_PID10();

            /* End of Outputs for SubSystem: '<S588>/Set_PID10' */

            /* RelationalOperator: '<S588>/Comparison8' incorporates:
             *  Constant: '<S617>/Calib'
             */
            RTMR_ac_B.Comparison8_o =
                (RTMR_ac_B.TmpSignalConversionAtVeBPCR_T_BatModTmpO >
                 KeRTMR_T_BattTempMaxLimit);

            /* Outputs for Enabled SubSystem: '<S588>/Set_PID9' */
            RTMR_ac_Set_PID9();

            /* End of Outputs for SubSystem: '<S588>/Set_PID9' */

            /* RelationalOperator: '<S589>/Comparison11' incorporates:
             *  Constant: '<S624>/Calib'
             */
            RTMR_ac_B.Comparison11 = (rtb_TmpSignalConversionAtVeINVR_T_MtrA_I <
                KeRTMR_T_MtrAInvrtrTempMinLimit);

            /* Outputs for Enabled SubSystem: '<S589>/Set_PID11' */
            RTMR_ac_Set_PID11();

            /* End of Outputs for SubSystem: '<S589>/Set_PID11' */

            /* RelationalOperator: '<S589>/Comparison10' incorporates:
             *  Constant: '<S623>/Calib'
             */
            RTMR_ac_B.Comparison10 = (rtb_TmpSignalConversionAtVeINVR_T_MtrA_I >
                KeRTMR_T_MtrAInvrtrTempMaxLimit);

            /* Outputs for Enabled SubSystem: '<S589>/Set_PID12' */
            RTMR_ac_Set_PID12();

            /* End of Outputs for SubSystem: '<S589>/Set_PID12' */

            /* RelationalOperator: '<S590>/Comparison13' incorporates:
             *  Constant: '<S630>/Calib'
             */
            RTMR_ac_B.Comparison13 = (rtb_TmpSignalConversionAtVeINVR_T_MtrB_I <
                KeRTMR_T_MtrBInvrtrTempMinLimit);

            /* Outputs for Enabled SubSystem: '<S590>/Set_PID13' */
            RTMR_ac_Set_PID13();

            /* End of Outputs for SubSystem: '<S590>/Set_PID13' */

            /* RelationalOperator: '<S590>/Comparison12' incorporates:
             *  Constant: '<S629>/Calib'
             */
            RTMR_ac_B.Comparison12 = (rtb_TmpSignalConversionAtVeINVR_T_MtrB_I >
                KeRTMR_T_MtrBInvrtrTempMaxLimit);

            /* Outputs for Enabled SubSystem: '<S590>/Set_PID14' */
            RTMR_ac_Set_PID14();

            /* End of Outputs for SubSystem: '<S590>/Set_PID14' */

            /* RelationalOperator: '<S592>/Comparison17' */
            RTMR_ac_B.Comparison17 = !VeRTMC_b_InPlantMode;

            /* Outputs for Enabled SubSystem: '<S592>/Set_PID15' */
            RTMR_ac_Set_PID15();

            /* End of Outputs for SubSystem: '<S592>/Set_PID15' */

            /* If: '<S570>/Test_conditions' incorporates:
             *  Logic: '<S591>/Logical1'
             */
            if ((!rtb_Comparison_a2) || (!rtb_Logical2_fr))
            {
                /* Outputs for IfAction SubSystem: '<S570>/Test_Condition_Not_Satisfied' incorporates:
                 *  ActionPort: '<S581>/Action_Port'
                 */
                RTMR_ac_Test_Condition_Not_Satisfied();

                /* End of Outputs for SubSystem: '<S570>/Test_Condition_Not_Satisfied' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S570>/Test_Condition_Satisfied' incorporates:
                 *  ActionPort: '<S582>/Action_Port'
                 */
                RTMR_ac_Test_Condition_Satisfied();

                /* End of Outputs for SubSystem: '<S570>/Test_Condition_Satisfied' */
            }

            /* End of If: '<S570>/Test_conditions' */
            /* End of Outputs for SubSystem: '<S570>/ChkRngTstCndtns' */
            /* End of Outputs for SubSystem: '<S559>/Perform_Test' */
        }

        /* End of If: '<S559>/Test_conditions' */
        /* End of Outputs for SubSystem: '<S393>/Transmission_Range_Test_Enabled' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S393>/Transmission_Range_Test_Not_Enabled' incorporates:
         *  ActionPort: '<S560>/Action_Port'
         */
        RTMR_Transmission_Range_Test_Not_Enabled();

        /* End of Outputs for SubSystem: '<S393>/Transmission_Range_Test_Not_Enabled' */
    }

#else

    /* SignalConversion generated from: '<S39>/Variant Source' incorporates:
     *  Constant: '<S731>/Constant'
     *  VariantMerge generated from: '<S39>/Variant Source'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeOHSR_e_Neutral;

#endif

    /* End of If: '<S393>/Check_CPID_Command' */

    /* UnitDelay: '<S556>/Unit Delay' incorporates:
     *  Logic: '<S387>/Logical1'
     */
    rtb_Comparison1 = (rtb_Comparison1 || rtb_Comparison4_bu);

    /* Switch: '<S387>/Switch1' */
    if (rtb_Comparison1)
    {
        /* Switch: '<S387>/Switch2' */
        if (rtb_Comparison4_bu)
        {
            /* Switch: '<S387>/Switch1' incorporates:
             *  Constant: '<S399>/Calib'
             *  DataTypeConversion: '<S387>/Data Type Conversion1'
             *  Switch: '<S387>/Switch2'
             */
            rtb_Switch1_ge = (sint16)KeRTMR_e_ElecOnlyRngStOvrrd;
        }
        else
        {
            /* Switch: '<S387>/Switch1' incorporates:
             *  DataTypeConversion: '<S387>/Data Type Conversion'
             *  Switch: '<S387>/Switch2'
             *  VariantMerge generated from: '<S39>/Variant Source'
             */
            rtb_Switch1_ge = (sint16)
                RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk;
        }

        /* End of Switch: '<S387>/Switch2' */
    }
    else
    {
        /* Switch: '<S387>/Switch1' incorporates:
         *  Constant: '<S401>/Calib'
         *  DataTypeConversion: '<S387>/Data Type Conversion2'
         */
        rtb_Switch1_ge = (sint16)KeRTMR_e_RngStDefault;
    }

    /* End of Switch: '<S387>/Switch1' */

    /* If: '<S392>/Check_CPID_Command' incorporates:
     *  Constant: '<S409>/Constant'
     *  If: '<S404>/If'
     *  Logic: '<S407>/Logical'
     *  RelationalOperator: '<S404>/Comparison4'
     *  RelationalOperator: '<S407>/Comparison1'
     *  SignalConversion generated from: '<S12>/VeSRAR_e_EngStrtStpOvrrd'
     *  UnitDelay: '<S392>/Unit Delay'
     *  UnitDelay: '<S39>/Unit Delay1'
     *  UnitDelay: '<S407>/Unit Delay'
     */
#if Rte_SysCon_Variant_RTMR_5

    /* UnitDelay: '<S39>/Unit Delay1' */
    VeRTMR_b_ElecOnlyTestEnblDlyd1 = RTMR_ac_DW.UnitDelay1_DSTATE_a;

    /* UnitDelay: '<S392>/Unit Delay' */
    VeRTMR_b_ElecOnlyTestEnblDlyd2 = RTMR_ac_DW.UnitDelay_DSTATE_nk;
    if (VeRTMR_b_ElecOnlyTestEnblDlyd1)
    {
        /* Outputs for IfAction SubSystem: '<S392>/Test_Enabled' incorporates:
         *  ActionPort: '<S406>/Action_Port'
         */
        /* Logic: '<S425>/Logical3' incorporates:
         *  DataStoreRead: '<S425>/Data Store Read'
         *  DataTypeConversion: '<S425>/Data Type Conversion2'
         *  S-Function (sfix_bitop): '<S425>/Bitwise_Logical_Operator1'
         */
        rtb_Comparison4_bu = ((((uint32)
                                RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID)
                               & 1U) == 0U);

        /* Logic: '<S424>/Logical1' incorporates:
         *  DataStoreRead: '<S424>/Data Store Read1'
         *  DataStoreRead: '<S424>/Data Store Read2'
         *  DataTypeConversion: '<S424>/Data Type Conversion2'
         *  Logic: '<S424>/Logical3'
         *  RelationalOperator: '<S424>/Comparison1'
         *  S-Function (sfix_bitop): '<S424>/Bitwise_Logical_Operator1'
         */
        rtb_Comparison_a2 = (((((uint32)AeRTMR_y_ElecOnlyTestResult_PID) & 1U) ==
                              0U) && (((sint32)AeRTMR_y_ElecOnlyTestStatus_PID)
                              != 32));

        /* Logic: '<S406>/Logical5' */
        rtb_Logical2_fr = ((rtb_Comparison4_bu && rtb_Comparison_a2) &&
                           (VeRTMR_b_ElecOnlyTestEnblDlyd2));

        /* Outputs for Atomic SubSystem: '<S406>/Timer_Reset_Enabled' */
        /* Outputs for Atomic SubSystem: '<S429>/EdgeRising' */
        /* Logic: '<S553>/OR1' incorporates:
         *  UnitDelay: '<S553>/Unit Delay'
         */
        rtb_Logical_e = !RTMR_ac_DW.UnitDelay_DSTATE_he;

        /* Update for UnitDelay: '<S553>/Unit Delay' */
        RTMR_ac_DW.UnitDelay_DSTATE_he = rtb_Logical2_fr;

        /* Switch: '<S429>/Switch1' incorporates:
         *  Constant: '<S421>/Calib'
         *  Logic: '<S553>/AND'
         *  Switch: '<S429>/Switch2'
         *  UnitDelay: '<S429>/Unit Delay'
         */
        if (rtb_Logical2_fr && rtb_Logical_e)
        {
            RTMR_ac_DW.UnitDelay_DSTATE_ae = KeRTMR_t_MaxTimeAllowed_ElecOnly;
        }
        else
        {
            if (rtb_Logical2_fr)
            {
                /* UnitDelay: '<S429>/Unit Delay' incorporates:
                 *  Constant: '<S422>/Calib'
                 *  Constant: '<S429>/Constant_Value4'
                 *  MinMax: '<S429>/Maximum'
                 *  Sum: '<S429>/Subtraction'
                 *  Switch: '<S429>/Switch2'
                 */
                RTMR_ac_DW.UnitDelay_DSTATE_ae = fmaxf
                    (RTMR_ac_DW.UnitDelay_DSTATE_ae - KeRTMR_t_MedTED, 0.0F);
            }
        }

        /* End of Switch: '<S429>/Switch1' */
        /* End of Outputs for SubSystem: '<S429>/EdgeRising' */

        /* Logic: '<S406>/Logical1' incorporates:
         *  Constant: '<S429>/Constant_Value2'
         *  DataStoreRead: '<S406>/Data Store Read1'
         *  Logic: '<S406>/Logical2'
         *  RelationalOperator: '<S406>/Comparison1'
         *  RelationalOperator: '<S429>/Greater_Than1'
         *  UnitDelay: '<S429>/Unit Delay'
         */
        RTMR_ac_B.Logical1_a = (((RTMR_ac_DW.UnitDelay_DSTATE_ae <= 0.0F) &&
            (VeRTMR_b_ElecOnlyTestEnblDlyd2)) && (((sint32)
            AeRTMR_y_ElecOnlyTestStatus_PID) == 4));

        /* End of Outputs for SubSystem: '<S406>/Timer_Reset_Enabled' */

        /* Outputs for Enabled SubSystem: '<S406>/Time_Out_PID' */
        RTMR_ac_Time_Out_PID();

        /* End of Outputs for SubSystem: '<S406>/Time_Out_PID' */

        /* Logic: '<S416>/AND' */
        VeRTMR_b_ElecOnlyTestEnblDlyd3 = VeRTMR_b_ElecOnlyTestEnblDlyd2;

        /* If: '<S406>/Test_Conditions' incorporates:
         *  DataStoreRead: '<S406>/Data Store Read'
         *  RelationalOperator: '<S406>/Comparison4'
         */
        if (!rtb_Comparison_a2)
        {
            /* Outputs for IfAction SubSystem: '<S406>/Complete' incorporates:
             *  ActionPort: '<S417>/Action_Port'
             */
            RTMR_ac_Complete();

            /* End of Outputs for SubSystem: '<S406>/Complete' */
        }
        else if (!rtb_Comparison4_bu)
        {
            /* Outputs for IfAction SubSystem: '<S406>/Time_Out' incorporates:
             *  ActionPort: '<S427>/Action_Port'
             */
            RTMR_ac_Time_Out();

            /* End of Outputs for SubSystem: '<S406>/Time_Out' */
        }
        else if (((sint32)AeRTMR_y_ElecOnlyTestStatus_PID) != 4)
        {
            /* Outputs for IfAction SubSystem: '<S406>/Do_Nothing' incorporates:
             *  ActionPort: '<S418>/Action_Port'
             */
            RTMR_ac_Do_Nothing();

            /* End of Outputs for SubSystem: '<S406>/Do_Nothing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S406>/Perform_Test' incorporates:
             *  ActionPort: '<S426>/Action_Port'
             */
            RTMR_ac_Perform_Test();

            /* End of Outputs for SubSystem: '<S406>/Perform_Test' */
        }

        /* End of If: '<S406>/Test_Conditions' */
        /* End of Outputs for SubSystem: '<S392>/Test_Enabled' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S392>/Test_Not_Enabled' incorporates:
         *  ActionPort: '<S407>/Action_Port'
         */
        /* SignalConversion generated from: '<S407>/EnableEngineStop' incorporates:
         *  Constant: '<S407>/FALSE_Constant'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv = false;

        /* RelationalOperator: '<S407>/Comparison4' incorporates:
         *  UnitDelay: '<S407>/Unit Delay'
         */
        rtb_Comparison4_bu = (((sint32)RTMR_ac_DW.UnitDelay_DSTATE_bc) == 4);

        /* DataStoreRead: '<S407>/Data Store Read' incorporates:
         *  UnitDelay: '<S407>/Unit Delay'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_bc = AeRTMR_y_ElecOnlyTestStatus_PID;

        /* Outputs for Enabled SubSystem: '<S407>/UpTstSts_PID' incorporates:
         *  EnablePort: '<S555>/Enable'
         */
        if (rtb_Comparison4_bu && (4 == ((sint32)RTMR_ac_DW.UnitDelay_DSTATE_bc)))
        {
            /* DataStoreWrite: '<S555>/Data Store Write1' incorporates:
             *  Constant: '<S555>/Constant_Value2'
             */
            AeRTMR_y_ElecOnlyTestStatus_PID = 0U;
        }

        /* End of Outputs for SubSystem: '<S407>/UpTstSts_PID' */
        /* End of Outputs for SubSystem: '<S392>/Test_Not_Enabled' */
    }

    if ((VeRTMC_b_InPlantMode) &&
            (RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv))
    {
        /* Outputs for IfAction SubSystem: '<S404>/Electric_Only' incorporates:
         *  ActionPort: '<S408>/Action_Port'
         */
        RTMR_ac_Electric_Only
            (&RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv,
             &RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_p);

        /* End of Outputs for SubSystem: '<S404>/Electric_Only' */
    }
    else if ((VeRTMC_b_InPlantMode) && (((uint32)
               RTMR_ac_B.TmpSignalConversionAtVeSRAR_e_EngStrtStp) !=
              CeSTRR_e_OvrrdEngOff))
    {
        /* Outputs for IfAction SubSystem: '<S404>/In_Plant' incorporates:
         *  ActionPort: '<S411>/Action_Port'
         */
        RTMR_ac_In_Plant(&RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv,
                         &RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_p);

        /* End of Outputs for SubSystem: '<S404>/In_Plant' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S404>/In_Field' incorporates:
         *  ActionPort: '<S410>/Action_Port'
         */
        RTMR_ac_In_Field(&RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv,
                         &RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_p);

        /* End of Outputs for SubSystem: '<S404>/In_Field' */
    }

#endif

    /* End of If: '<S392>/Check_CPID_Command' */

    /* Update for UnitDelay: '<S393>/Unit Delay1' incorporates:
     *  UnitDelay: '<S393>/Unit Delay'
     */
#if Rte_SysCon_Variant_RTMR_4

    /* Outputs for Enabled SubSystem: '<S393>/Reset_PIDs' */
    /* Outputs for Atomic SubSystem: '<S393>/EdgeRising' */
    /* Logic: '<S556>/AND' incorporates:
     *  Logic: '<S556>/OR1'
     *  UnitDelay: '<S556>/Unit Delay'
     */
    RTMR_ac_B.AND_k = (rtb_TmpSignalConversionAtVeRTMR_b_HybTra &&
                       (!RTMR_ac_DW.UnitDelay_DSTATE_or));

    /* Update for UnitDelay: '<S556>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_or = rtb_TmpSignalConversionAtVeRTMR_b_HybTra;
    RTMR_ac_Reset_PIDs();
    RTMR_ac_DW.UnitDelay1_DSTATE_b = rtb_TmpSignalConversionAtVeRTMR_b_HybTra;
    RTMR_ac_DW.UnitDelay_DSTATE_my = rtb_UnitDelay1_p;

    /* End of Outputs for SubSystem: '<S393>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S393>/Reset_PIDs' */
#endif

    /* End of Update for UnitDelay: '<S393>/Unit Delay1' */

    /* SignalConversion generated from: '<S39>/Variant Source2' incorporates:
     *  SignalConversion generated from: '<S39>/Variant Source3'
     *  UnitDelay: '<S392>/Unit Delay'
     *  UnitDelay: '<S39>/Unit Delay1'
     */
#if !Rte_SysCon_Variant_RTMR_5

    RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv = false;

    /* VariantMerge generated from: '<S39>/Variant Source3' incorporates:
     *  Constant: '<S403>/Constant'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_p =
        RTMR_ac_ConstB.Constant_a;

#else

    /* Update for UnitDelay: '<S39>/Unit Delay1' */
    RTMR_ac_DW.UnitDelay1_DSTATE_a = rtb_TmpSignalConversionAtVeRTMR_b_Electr;

    /* Update for UnitDelay: '<S392>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_nk = VeRTMR_b_ElecOnlyTestEnblDlyd1;

#endif

    /* End of SignalConversion generated from: '<S39>/Variant Source2' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/Forced_Battery_Charging'
     */
    /* If: '<S43>/If2' incorporates:
     *  Constant: '<S55>/Constant'
     *  Inport: '<Root>/VeESMR_I_AccumChrgCurr'
     *  Inport: '<Root>/VeESMR_I_AccumDschrgCurr'
     *  Inport: '<Root>/VeRTMR_P_BattChrgMaxPwrCmnd'
     *  Logic: '<S43>/Logical'
     *  Logic: '<S43>/Logical2'
     *  Logic: '<S43>/Logical3'
     *  Logic: '<S43>/Logical4'
     *  Logic: '<S43>/Logical5'
     *  RelationalOperator: '<S43>/Comparison1'
     *  RelationalOperator: '<S43>/Comparison4'
     *  SignalConversion generated from: '<S35>/Variant Source3'
     * */
#if Rte_SysCon_Variant_RTMR_2

    /* Logic: '<S43>/Logical4' incorporates:
     *  Constant: '<S56>/Constant'
     */
    rtb_Logical4_ov = (rtb_TmpSignalConversionAtVeRTMR_b_BattCh && (((uint32)
                         rtb_TmpSignalConversionAtVeRTMR_e_BattCh) ==
                        CeRTMR_e_BattChrgCmnd_Terminate));
    if (rtb_Logical4_ov)
    {
        /* Outputs for IfAction SubSystem: '<S43>/Terminate' incorporates:
         *  ActionPort: '<S59>/Action_Port'
         */
        /* Logic: '<S54>/Logical1' incorporates:
         *  Constant: '<S59>/FALSE_Constant'
         *  SignalConversion generated from: '<S59>/EnableBattCharge'
         */
        rtb_Logical1_dk = false;

        /* Switch: '<S54>/Switch1' incorporates:
         *  Constant: '<S59>/Constant_Value'
         *  SignalConversion generated from: '<S59>/BattRapidChrgPwrDsrd'
         */
        rtb_Switch1_jm = 0.0F;

        /* Outputs for Atomic SubSystem: '<S59>/EdgeRising' */
        /* Logic: '<S180>/AND' incorporates:
         *  Logic: '<S180>/OR1'
         *  UnitDelay: '<S180>/Unit Delay'
         *  UnitDelay: '<S43>/Unit Delay3'
         */
        RTMR_ac_B.AND_g = ((RTMR_ac_DW.UnitDelay3_DSTATE) &&
                           (!RTMR_ac_DW.UnitDelay_DSTATE_bh));

        /* Update for UnitDelay: '<S180>/Unit Delay' incorporates:
         *  UnitDelay: '<S43>/Unit Delay3'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_bh = RTMR_ac_DW.UnitDelay3_DSTATE;

        /* End of Outputs for SubSystem: '<S59>/EdgeRising' */

        /* Outputs for Enabled SubSystem: '<S59>/Set_status_PID' */
        RTMR_ac_Set_status_PID();

        /* End of Outputs for SubSystem: '<S59>/Set_status_PID' */
        /* End of Outputs for SubSystem: '<S43>/Terminate' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S43>/Follow_Command_or_Keep_Charging' incorporates:
         *  ActionPort: '<S57>/Action_Port'
         */
        /* Outputs for IfAction SubSystem: '<S78>/Resume' incorporates:
         *  ActionPort: '<S135>/Action_Port'
         */
        /* Outputs for IfAction SubSystem: '<S78>/Start' incorporates:
         *  ActionPort: '<S137>/Action_Port'
         */
        /* If: '<S139>/If' incorporates:
         *  DataStoreRead: '<S43>/Data Store Read'
         *  RelationalOperator: '<S135>/Comparison4'
         *  RelationalOperator: '<S135>/Comparison8'
         *  RelationalOperator: '<S137>/Comparison4'
         *  RelationalOperator: '<S138>/Comparison6'
         */
        tmp_0 = RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID;

        /* End of Outputs for SubSystem: '<S78>/Start' */
        /* End of Outputs for SubSystem: '<S78>/Resume' */

        /* Logic: '<S138>/Logical6' */
        rtb_UnitDelay1_p = !rtb_TmpSignalConversionAtVeRTMR_b_BattCh;

        /* End of Outputs for SubSystem: '<S43>/Follow_Command_or_Keep_Charging' */
        if ((!rtb_TmpSignalConversionAtVeHPMR_b_PropSy) || ((((uint32)tmp_0) !=
                CeRTMR_e_BattChrgStatus_InProgress) && rtb_UnitDelay1_p))
        {
            /* Outputs for IfAction SubSystem: '<S43>/Do_Nothing' incorporates:
             *  ActionPort: '<S53>/Action_Port'
             */
            RTMR_ac_Do_Nothing_j(&rtb_Logical1_dk, &rtb_Switch1_jm);

            /* End of Outputs for SubSystem: '<S43>/Do_Nothing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S43>/Follow_Command_or_Keep_Charging' incorporates:
             *  ActionPort: '<S57>/Action_Port'
             */
            /* Logic: '<S138>/Logical2' incorporates:
             *  Constant: '<S176>/Constant'
             *  RelationalOperator: '<S138>/Comparison1'
             */
            rtb_TmpSignalConversionAtVeRTMR_b_HybTra =
                (rtb_TmpSignalConversionAtVeRTMR_b_BattCh && (((uint32)
                   rtb_TmpSignalConversionAtVeRTMR_e_BattCh) ==
                  CeRTMR_e_BattChrgCmnd_Start));

            /* Outputs for Atomic SubSystem: '<S131>/Timer_Retrigger_Reset_Trigger_Enabled' */
            /* Outputs for Atomic SubSystem: '<S148>/EdgeRising' */
            /* Logic: '<S152>/OR1' incorporates:
             *  UnitDelay: '<S152>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeRTMR_b_Electr =
                !RTMR_ac_DW.UnitDelay_DSTATE_gl;

            /* Update for UnitDelay: '<S152>/Unit Delay' */
            RTMR_ac_DW.UnitDelay_DSTATE_gl =
                rtb_TmpSignalConversionAtVeRTMR_b_HybTra;

            /* Switch: '<S148>/Switch1' incorporates:
             *  Constant: '<S144>/Calib'
             *  Constant: '<S145>/Calib'
             *  Constant: '<S148>/Constant_Value4'
             *  DataStoreRead: '<S148>/Data Store Read1'
             *  DataStoreWrite: '<S148>/Data Store Write1'
             *  Logic: '<S152>/AND'
             *  MinMax: '<S148>/Maximum'
             *  Sum: '<S148>/Subtraction'
             */
            if (rtb_TmpSignalConversionAtVeRTMR_b_HybTra &&
                    rtb_TmpSignalConversionAtVeRTMR_b_Electr)
            {
                RTMR_ac_DW.NeRTMR_t_BattChrgTimer_PID =
                    KeRTMR_t_BattChrg_MaxTimeAllowed;
            }
            else
            {
                RTMR_ac_DW.NeRTMR_t_BattChrgTimer_PID = fmaxf
                    (RTMR_ac_DW.NeRTMR_t_BattChrgTimer_PID - KeRTMR_t_MedTED,
                     0.0F);
            }

            /* End of Switch: '<S148>/Switch1' */
            /* End of Outputs for SubSystem: '<S148>/EdgeRising' */
            /* End of Outputs for SubSystem: '<S131>/Timer_Retrigger_Reset_Trigger_Enabled' */
            /* End of Outputs for SubSystem: '<S43>/Follow_Command_or_Keep_Charging' */
            (void)Rte_Read_VeRTMR_P_BattChrgMaxPwrCmnd_Value(&tmpRead_1);
            (void)Rte_Read_VeESMR_I_AccumDschrgCurr_Value(&tmpRead_0);
            (void)Rte_Read_VeESMR_I_AccumChrgCurr_Value(&tmpRead);

            /* Outputs for IfAction SubSystem: '<S43>/Follow_Command_or_Keep_Charging' incorporates:
             *  ActionPort: '<S57>/Action_Port'
             */
            /* Outputs for Atomic SubSystem: '<S131>/Timer_Retrigger_Reset_Trigger_Enabled' */
            /* RelationalOperator: '<S148>/Greater_Than1' incorporates:
             *  Constant: '<S148>/Constant_Value2'
             *  DataStoreWrite: '<S148>/Data Store Write1'
             *  Inport: '<Root>/VeESMR_I_AccumChrgCurr'
             *  Inport: '<Root>/VeESMR_I_AccumDschrgCurr'
             *  Inport: '<Root>/VeRTMR_P_BattChrgMaxPwrCmnd'
             */
            VeRTMR_b_BattChrg_NotTimeOut =
                (RTMR_ac_DW.NeRTMR_t_BattChrgTimer_PID > 0.0F);

            /* End of Outputs for SubSystem: '<S131>/Timer_Retrigger_Reset_Trigger_Enabled' */

            /* Logic: '<S138>/Logical3' incorporates:
             *  Constant: '<S177>/Constant'
             *  RelationalOperator: '<S138>/Comparison2'
             */
            rtb_TmpSignalConversionAtVeRTMR_b_Electr =
                (rtb_TmpSignalConversionAtVeRTMR_b_BattCh && (((uint32)
                   rtb_TmpSignalConversionAtVeRTMR_e_BattCh) ==
                  CeRTMR_e_BattChrgCmnd_StandBy));

            /* Logic: '<S138>/Logical4' incorporates:
             *  Constant: '<S178>/Constant'
             *  RelationalOperator: '<S138>/Comparison3'
             */
            rtb_TmpSignalConversionAtVeRTMR_b_BattCh =
                (rtb_TmpSignalConversionAtVeRTMR_b_BattCh && (((uint32)
                   rtb_TmpSignalConversionAtVeRTMR_e_BattCh) ==
                  CeRTMR_e_BattChrgCmnd_Resume));

            /* UnitDelay: '<S78>/Unit Delay' */
            VeRTMR_b_BattChrgStrt_delayed = RTMR_ac_DW.UnitDelay_DSTATE_ho;

            /* Sum: '<S76>/Sum1' */
            RTMR_ac_B.Sum1 = tmpRead - tmpRead_0;

            /* Product: '<S141>/Product' incorporates:
             *  Constant: '<S141>/Constant_Value'
             */
            RTMR_ac_B.Product = tmpRead_1 * 0.001F;

            /* RelationalOperator: '<S140>/Comparison4' incorporates:
             *  UnitDelay: '<S140>/Unit Delay6'
             */
            rtb_Comparison4_bu =
                (RTMR_ac_B.TmpSignalConversionAtVeRTMR_It_BattChrgT !=
                 RTMR_ac_DW.UnitDelay6_DSTATE);

            /* UnitDelay: '<S140>/Unit Delay4' incorporates:
             *  UnitDelay: '<S140>/Unit Delay6'
             */
            RTMR_ac_DW.UnitDelay6_DSTATE = RTMR_ac_DW.UnitDelay4_DSTATE;

            /* Logic: '<S140>/Logical7' incorporates:
             *  RelationalOperator: '<S140>/Comparison7'
             *  UnitDelay: '<S140>/Unit Delay6'
             */
            VeRTMR_b_BattChrgPrmtr_Changed = (rtb_Comparison4_bu ||
                (RTMR_ac_B.Product != RTMR_ac_DW.UnitDelay6_DSTATE));

            /* If: '<S139>/If' */
            if (rtb_TmpSignalConversionAtVeRTMR_b_HybTra)
            {
                /* Outputs for IfAction SubSystem: '<S78>/Start' incorporates:
                 *  ActionPort: '<S137>/Action_Port'
                 */
                /* UnitDelay: '<S143>/Unit Delay' incorporates:
                 *  Constant: '<S169>/Constant'
                 *  RelationalOperator: '<S137>/Comparison4'
                 *  Switch: '<S137>/Switch'
                 */
                rtb_UnitDelay1_p = (((uint32)tmp_0) ==
                                    CeRTMR_e_BattChrgStatus_InProgress);

                /* Outputs for Atomic SubSystem: '<S137>/EdgeRising1' */
                /* Logic: '<S168>/AND' incorporates:
                 *  Logic: '<S168>/OR1'
                 *  UnitDelay: '<S168>/Unit Delay'
                 */
                RTMR_ac_B.AND_h = ((VeRTMR_b_BattChrgPrmtr_Changed) &&
                                   (!RTMR_ac_DW.UnitDelay_DSTATE_cd));

                /* Update for UnitDelay: '<S168>/Unit Delay' */
                RTMR_ac_DW.UnitDelay_DSTATE_cd = VeRTMR_b_BattChrgPrmtr_Changed;

                /* End of Outputs for SubSystem: '<S137>/EdgeRising1' */

                /* Outputs for Enabled SubSystem: '<S137>/RstPwrOfst_TrgChrg' */
                RTMR_ac_RstPwrOfst_TrgChrg();

                /* End of Outputs for SubSystem: '<S137>/RstPwrOfst_TrgChrg' */

                /* Outputs for Atomic SubSystem: '<S137>/EdgeRising' */
                /* Logic: '<S167>/AND' incorporates:
                 *  Logic: '<S167>/OR1'
                 *  UnitDelay: '<S167>/Unit Delay'
                 */
                RTMR_ac_B.AND_d = ((VeRTMR_b_BattChrgStrt_delayed) &&
                                   (!RTMR_ac_DW.UnitDelay_DSTATE_pv));

                /* Update for UnitDelay: '<S167>/Unit Delay' */
                RTMR_ac_DW.UnitDelay_DSTATE_pv = VeRTMR_b_BattChrgStrt_delayed;

                /* End of Outputs for SubSystem: '<S137>/EdgeRising' */

                /* Outputs for Enabled SubSystem: '<S137>/RstSts_InitPIDs' */
                RTMR_ac_RstSts_InitPIDs();

                /* End of Outputs for SubSystem: '<S137>/RstSts_InitPIDs' */
                /* End of Outputs for SubSystem: '<S78>/Start' */
            }
            else if (rtb_TmpSignalConversionAtVeRTMR_b_Electr)
            {
                /* Outputs for IfAction SubSystem: '<S78>/StandBy' incorporates:
                 *  ActionPort: '<S136>/Action_Port'
                 */
                /* UnitDelay: '<S143>/Unit Delay' incorporates:
                 *  Constant: '<S136>/FALSE_Constant'
                 *  SignalConversion generated from: '<S136>/EnableBattCharge'
                 */
                rtb_UnitDelay1_p = false;

                /* Outputs for Atomic SubSystem: '<S136>/EdgeRising' */
                /* Logic: '<S162>/AND' incorporates:
                 *  Logic: '<S162>/OR1'
                 *  UnitDelay: '<S162>/Unit Delay'
                 *  UnitDelay: '<S78>/Unit Delay1'
                 */
                RTMR_ac_B.AND_o = ((RTMR_ac_DW.UnitDelay1_DSTATE_m) &&
                                   (!RTMR_ac_DW.UnitDelay_DSTATE_ob));

                /* Update for UnitDelay: '<S162>/Unit Delay' incorporates:
                 *  UnitDelay: '<S78>/Unit Delay1'
                 */
                RTMR_ac_DW.UnitDelay_DSTATE_ob = RTMR_ac_DW.UnitDelay1_DSTATE_m;

                /* End of Outputs for SubSystem: '<S136>/EdgeRising' */

                /* Outputs for Enabled SubSystem: '<S136>/Set_status_PID' */
                RTMR_ac_Set_status_PID_h();

                /* End of Outputs for SubSystem: '<S136>/Set_status_PID' */
                /* End of Outputs for SubSystem: '<S78>/StandBy' */
            }
            else if (rtb_TmpSignalConversionAtVeRTMR_b_BattCh)
            {
                /* Outputs for IfAction SubSystem: '<S78>/Resume' incorporates:
                 *  ActionPort: '<S135>/Action_Port'
                 */
                /* Logic: '<S135>/Logical3' incorporates:
                 *  Constant: '<S155>/Constant'
                 *  Constant: '<S156>/Constant'
                 *  Logic: '<S135>/Logical2'
                 *  RelationalOperator: '<S135>/Comparison4'
                 *  RelationalOperator: '<S135>/Comparison8'
                 */
                rtb_UnitDelay1_p = ((((uint32)tmp_0) ==
                                     CeRTMR_e_BattChrgStatus_StandBy) &&
                                    (((uint32)tmp_0) !=
                                     CeRTMR_e_BattChrgStatus_Complete));

                /* Outputs for Atomic SubSystem: '<S135>/EdgeRising1' */
                /* Logic: '<S153>/AND' incorporates:
                 *  Logic: '<S153>/OR1'
                 *  UnitDelay: '<S153>/Unit Delay'
                 *  UnitDelay: '<S78>/Unit Delay2'
                 */
                rtb_Comparison4_bu = ((RTMR_ac_DW.UnitDelay2_DSTATE) &&
                                      (!RTMR_ac_DW.UnitDelay_DSTATE_m2));

                /* Update for UnitDelay: '<S153>/Unit Delay' incorporates:
                 *  UnitDelay: '<S78>/Unit Delay2'
                 */
                RTMR_ac_DW.UnitDelay_DSTATE_m2 = RTMR_ac_DW.UnitDelay2_DSTATE;

                /* End of Outputs for SubSystem: '<S135>/EdgeRising1' */

                /* Outputs for Atomic SubSystem: '<S135>/EdgeRising2' */
                /* UnitDelay: '<S154>/Unit Delay' */
                rtb_Comparison_a2 = RTMR_ac_DW.UnitDelay_DSTATE_cx;

                /* Update for UnitDelay: '<S154>/Unit Delay' */
                RTMR_ac_DW.UnitDelay_DSTATE_cx = VeRTMR_b_BattChrgPrmtr_Changed;

                /* Logic: '<S135>/Logical1' incorporates:
                 *  Logic: '<S135>/Logical4'
                 *  Logic: '<S154>/AND'
                 *  Logic: '<S154>/OR1'
                 */
                RTMR_ac_B.Logical1_f = (rtb_UnitDelay1_p && (rtb_Comparison4_bu ||
                    ((VeRTMR_b_BattChrgPrmtr_Changed) && (!rtb_Comparison_a2))));

                /* End of Outputs for SubSystem: '<S135>/EdgeRising2' */

                /* Outputs for Enabled SubSystem: '<S135>/Set_Sts_InitPIDs' */
                RTMR_ac_Set_Sts_InitPIDs();

                /* End of Outputs for SubSystem: '<S135>/Set_Sts_InitPIDs' */
                /* End of Outputs for SubSystem: '<S78>/Resume' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S78>/Do_nothing' incorporates:
                 *  ActionPort: '<S132>/Action_Port'
                 */
                /* Outputs for IfAction SubSystem: '<S78>/Keep_charging' incorporates:
                 *  ActionPort: '<S133>/Action_Port'
                 */
                /* UnitDelay: '<S143>/Unit Delay' incorporates:
                 *  Constant: '<S179>/Constant'
                 *  Logic: '<S138>/Logical1'
                 *  RelationalOperator: '<S138>/Comparison6'
                 *  SignalConversion generated from: '<S132>/EnableBattCharge'
                 *  SignalConversion generated from: '<S133>/EnableBattCharge'
                 */
                rtb_UnitDelay1_p = (rtb_UnitDelay1_p && (((uint32)tmp_0) ==
                                     CeRTMR_e_BattChrgStatus_InProgress));

                /* End of Outputs for SubSystem: '<S78>/Keep_charging' */
                /* End of Outputs for SubSystem: '<S78>/Do_nothing' */
            }

            /* If: '<S57>/If1' incorporates:
             *  Logic: '<S142>/Logical'
             */
            if ((VeRTMR_b_BattChrg_NotTimeOut) && rtb_UnitDelay1_p)
            {
                /* Outputs for IfAction SubSystem: '<S57>/BattChargeEnabled' incorporates:
                 *  ActionPort: '<S74>/Action_Port'
                 */
                /* Sum: '<S81>/Sum1' incorporates:
                 *  DataStoreRead: '<S81>/Data Store Read2'
                 */
                rtb_TmpSignalConversionAtVeINVR_T_MtrA_T = RTMR_ac_B.Sum1 -
                    RTMR_ac_DW.NeRTMR_It_BattChrgInitDiff_PID;

                /* If: '<S81>/If' incorporates:
                 *  DataStoreRead: '<S81>/Data Store Read1'
                 *  RelationalOperator: '<S81>/Comparison2'
                 */
                if (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T <
                        RTMR_ac_DW.NeRTMR_It_BattChrgTarget_PID)
                {
                    /* Outputs for IfAction SubSystem: '<S81>/RequireCharge' incorporates:
                     *  ActionPort: '<S85>/Action_Port'
                     */
                    /* DataStoreWrite: '<S85>/Data Store Write' */
                    RTMR_ac_DW.NeRTMR_It_BattChargedAmnt_PID =
                        rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;

                    /* Merge: '<S81>/Merge2' incorporates:
                     *  Constant: '<S85>/TRUE_Constant'
                     *  SignalConversion generated from: '<S85>/PassCompleteCheckFlag'
                     */
                    VeRTMR_b_PassCompleteCheck = true;

                    /* End of Outputs for SubSystem: '<S81>/RequireCharge' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S81>/TerminateCharge' incorporates:
                     *  ActionPort: '<S86>/Action_Port'
                     */
                    /* Merge: '<S81>/Merge2' incorporates:
                     *  Constant: '<S86>/FALSE_Constant'
                     *  SignalConversion generated from: '<S86>/PassCompleteCheckFlag'
                     */
                    VeRTMR_b_PassCompleteCheck = false;

                    /* End of Outputs for SubSystem: '<S81>/TerminateCharge' */
                }

                /* End of If: '<S81>/If' */

                /* If: '<S74>/If' incorporates:
                 *  Inport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA'
                 */
                if (VeRTMR_b_PassCompleteCheck)
                {
                    (void)Rte_Read_VeBPCR_b_HV_BatModTempMaxFA_Value
                        (&rtb_Logical1_dk);

                    /* Outputs for IfAction SubSystem: '<S74>/RequireCharge' incorporates:
                     *  ActionPort: '<S82>/Action_Port'
                     */
                    /* If: '<S90>/If' incorporates:
                     *  Constant: '<S126>/Calib'
                     *  Inport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA'
                     *  RelationalOperator: '<S90>/Comparison'
                     *  RelationalOperator: '<S90>/Comparison1'
                     */
                    if (rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat >
                            KeRTMR_T_BattChrgMaxAllowedTemp)
                    {
                        /* Outputs for IfAction SubSystem: '<S90>/Abort' incorporates:
                         *  ActionPort: '<S124>/Action_Port'
                         */
                        /* DataStoreWrite: '<S124>/Data Store Write9' incorporates:
                         *  DataStoreRead: '<S124>/Data Store Read1'
                         *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator1'
                         */
                        RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID |= (uint8)1;

                        /* Merge: '<S90>/Merge' incorporates:
                         *  Constant: '<S124>/FALSE_Constant'
                         *  SignalConversion generated from: '<S124>/PassAbortionCheckFlag'
                         */
                        VeRTMR_b_PassAbortionCheck = false;

                        /* End of Outputs for SubSystem: '<S90>/Abort' */
                    }
                    else if (rtb_Logical1_dk)
                    {
                        /* Outputs for IfAction SubSystem: '<S90>/Abort1' incorporates:
                         *  ActionPort: '<S125>/Action_Port'
                         */
                        /* DataStoreWrite: '<S125>/Data Store Write9' incorporates:
                         *  DataStoreRead: '<S125>/Data Store Read1'
                         *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator1'
                         */
                        RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID |= (uint8)2;

                        /* Merge: '<S90>/Merge' incorporates:
                         *  Constant: '<S125>/FALSE_Constant'
                         *  SignalConversion generated from: '<S125>/PassAbortionCheckFlag'
                         */
                        VeRTMR_b_PassAbortionCheck = false;

                        /* End of Outputs for SubSystem: '<S90>/Abort1' */
                    }
                    else
                    {
                        /* Outputs for IfAction SubSystem: '<S90>/NotAbort' incorporates:
                         *  ActionPort: '<S128>/Action_Port'
                         */
                        /* Merge: '<S90>/Merge' incorporates:
                         *  Constant: '<S128>/TRUE_Constant'
                         *  SignalConversion generated from: '<S128>/PassAbortionCheckFlag'
                         */
                        VeRTMR_b_PassAbortionCheck = true;

                        /* End of Outputs for SubSystem: '<S90>/NotAbort' */
                    }

                    /* End of If: '<S90>/If' */

                    /* Outputs for IfAction SubSystem: '<S82>/NotAbort' incorporates:
                     *  ActionPort: '<S89>/Action_Port'
                     */
                    /* If: '<S82>/If1' incorporates:
                     *  Inport: '<Root>/VeBPCR_U_HV_BatModVoltMax'
                     *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
                     *  Inport: '<Root>/VeBPCR_b_HV_BatModVoltMaxFA'
                     *  Inport: '<Root>/VeBPCR_b_HV_BatVoltFA'
                     *  Inport: '<Root>/VeESMR_P_BattLTMinLim'
                     *  Switch: '<S98>/Switch1'
                     */
                    if (!VeRTMR_b_PassAbortionCheck)
                    {
                        /* Outputs for IfAction SubSystem: '<S82>/Abort' incorporates:
                         *  ActionPort: '<S87>/Action_Port'
                         */
                        /* DataStoreWrite: '<S87>/Data Store Write22' incorporates:
                         *  Constant: '<S91>/Constant'
                         */
                        RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID =
                            CeRTMR_e_BattChrgStatus_Aborted;

                        /* Logic: '<S54>/Logical1' incorporates:
                         *  Constant: '<S87>/FALSE_Constant'
                         *  SignalConversion generated from: '<S87>/BattRapidChrgCmnd'
                         */
                        rtb_Logical1_dk = false;

                        /* Switch: '<S54>/Switch1' incorporates:
                         *  Constant: '<S87>/Constant_Value'
                         *  SignalConversion generated from: '<S87>/BattRapidChrgPwrDsrd'
                         */
                        rtb_Switch1_jm = 0.0F;

                        /* End of Outputs for SubSystem: '<S82>/Abort' */
                    }
                    else
                    {
                        /* Switch: '<S98>/Switch1' incorporates:
                         *  Constant: '<S96>/Constant_Value'
                         */
                        VeRTMR_dT_BattChrgTempChangeRate = 0.0F;
                        (void)Rte_Read_VeESMR_P_BattLTMinLim_Value
                            (&rtb_Switch1_jm);
                        (void)Rte_Read_VeBPCR_b_HV_BatModVoltMaxFA_Value
                            (&rtb_Logical4_k3);
                        (void)Rte_Read_VeBPCR_U_HV_BatModVoltMax_Value
                            (&tmpRead_3);
                        (void)Rte_Read_VeBPCR_b_HV_BatVoltFA_Value(&rtb_OR1_nz);
                        (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value(&tmpRead_2);

                        /* If: '<S97>/If' incorporates:
                         *  Constant: '<S100>/Calib'
                         *  Constant: '<S104>/Calib'
                         *  Constant: '<S105>/Calib'
                         *  Constant: '<S106>/Calib'
                         *  Constant: '<S107>/Calib'
                         *  Inport: '<Root>/VeBPCR_U_HV_BatModVoltMax'
                         *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
                         *  Inport: '<Root>/VeBPCR_b_HV_BatModVoltMaxFA'
                         *  Inport: '<Root>/VeBPCR_b_HV_BatVoltFA'
                         *  Inport: '<Root>/VeESMR_P_BattLTMinLim'
                         *  Logic: '<S97>/Logical'
                         *  RelationalOperator: '<S96>/Comparison5'
                         *  RelationalOperator: '<S97>/Comparison1'
                         *  RelationalOperator: '<S97>/Comparison2'
                         *  RelationalOperator: '<S97>/Comparison3'
                         *  RelationalOperator: '<S97>/Comparison4'
                         *  RelationalOperator: '<S97>/Comparison6'
                         */
                        if (VeRTMR_dT_BattChrgTempChangeRate >
                                KeRTMR_dT_BattChrgMaxTempRate)
                        {
                            /* Outputs for IfAction SubSystem: '<S97>/Terminate' incorporates:
                             *  ActionPort: '<S109>/Action_Port'
                             */
                            /* DataStoreWrite: '<S109>/Data Store Write9' incorporates:
                             *  DataStoreRead: '<S109>/Data Store Read1'
                             *  S-Function (sfix_bitop): '<S115>/FixPt Bitwise Operator1'
                             */
                            RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID |= (uint8)
                                4;

                            /* Merge: '<S97>/Merge' incorporates:
                             *  Constant: '<S109>/TRUE_Constant'
                             *  SignalConversion generated from: '<S109>/EarlyTerminationFlag'
                             */
                            VeRTMR_b_EarlyTermination = true;

                            /* End of Outputs for SubSystem: '<S97>/Terminate' */
                        }
                        else if (tmpRead_2 > KeRTMR_U_BattChrgMaxPackVolt)
                        {
                            /* Outputs for IfAction SubSystem: '<S97>/Terminate1' incorporates:
                             *  ActionPort: '<S110>/Action_Port'
                             */
                            /* DataStoreWrite: '<S110>/Data Store Write9' incorporates:
                             *  DataStoreRead: '<S110>/Data Store Read1'
                             *  S-Function (sfix_bitop): '<S116>/FixPt Bitwise Operator1'
                             */
                            RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID |= (uint8)
                                8;

                            /* Merge: '<S97>/Merge' incorporates:
                             *  Constant: '<S110>/TRUE_Constant'
                             *  SignalConversion generated from: '<S110>/EarlyTerminationFlag'
                             */
                            VeRTMR_b_EarlyTermination = true;

                            /* End of Outputs for SubSystem: '<S97>/Terminate1' */
                        }
                        else if (rtb_OR1_nz)
                        {
                            /* Outputs for IfAction SubSystem: '<S97>/Terminate2' incorporates:
                             *  ActionPort: '<S111>/Action_Port'
                             */
                            RTMR_ac_Terminate2((&(VeRTMR_b_EarlyTermination)),
                                               &RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID);

                            /* End of Outputs for SubSystem: '<S97>/Terminate2' */
                        }
                        else if (tmpRead_3 > KeRTMR_U_BattChrgMaxModVolt)
                        {
                            /* Outputs for IfAction SubSystem: '<S97>/Terminate3' incorporates:
                             *  ActionPort: '<S112>/Action_Port'
                             */
                            /* DataStoreWrite: '<S112>/Data Store Write9' incorporates:
                             *  DataStoreRead: '<S112>/Data Store Read1'
                             *  S-Function (sfix_bitop): '<S118>/FixPt Bitwise Operator1'
                             */
                            RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID |= (uint8)
                                32;

                            /* Merge: '<S97>/Merge' incorporates:
                             *  Constant: '<S112>/TRUE_Constant'
                             *  SignalConversion generated from: '<S112>/EarlyTerminationFlag'
                             */
                            VeRTMR_b_EarlyTermination = true;

                            /* End of Outputs for SubSystem: '<S97>/Terminate3' */
                        }
                        else if (rtb_Logical4_k3)
                        {
                            /* Outputs for IfAction SubSystem: '<S97>/Terminate4' incorporates:
                             *  ActionPort: '<S113>/Action_Port'
                             */
                            RTMR_ac_Terminate2((&(VeRTMR_b_EarlyTermination)),
                                               &RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID);

                            /* End of Outputs for SubSystem: '<S97>/Terminate4' */
                        }
                        else if ((rtb_Switch1_jm >
                                  KeRTMR_P_BattLTMinLim_Thrsh4EarlyTermin) &&
                                 (KeRTMR_b_BattLTMinLim4EarlyTermin_Enbl))
                        {
                            /* Outputs for IfAction SubSystem: '<S97>/Terminate5' incorporates:
                             *  ActionPort: '<S114>/Action_Port'
                             */
                            /* DataStoreWrite: '<S114>/Data Store Write9' incorporates:
                             *  DataStoreRead: '<S114>/Data Store Read1'
                             *  S-Function (sfix_bitop): '<S120>/FixPt Bitwise Operator1'
                             */
                            RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID = (uint8)
                                (((uint16)
                                  RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID) |
                                 ((uint16)128));

                            /* Merge: '<S97>/Merge' incorporates:
                             *  Constant: '<S114>/TRUE_Constant'
                             *  SignalConversion generated from: '<S114>/EarlyTerminationFlag'
                             */
                            VeRTMR_b_EarlyTermination = true;

                            /* End of Outputs for SubSystem: '<S97>/Terminate5' */
                        }
                        else
                        {
                            /* Outputs for IfAction SubSystem: '<S97>/NotTerminate' incorporates:
                             *  ActionPort: '<S108>/Action_Port'
                             */
                            /* Merge: '<S97>/Merge' incorporates:
                             *  Constant: '<S108>/FALSE_Constant'
                             *  SignalConversion generated from: '<S108>/EarlyTerminationFlag'
                             */
                            VeRTMR_b_EarlyTermination = false;

                            /* End of Outputs for SubSystem: '<S97>/NotTerminate' */
                        }

                        /* End of If: '<S97>/If' */

                        /* If: '<S94>/If' */
                        if (VeRTMR_b_EarlyTermination)
                        {
                            /* Outputs for IfAction SubSystem: '<S94>/EarlyTermination' incorporates:
                             *  ActionPort: '<S122>/Action_Port'
                             */
                            /* DataStoreWrite: '<S122>/Data Store Write22' incorporates:
                             *  Constant: '<S123>/Constant'
                             */
                            RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID =
                                CeRTMR_e_BattChrgStatus_Aborted;

                            /* Logic: '<S54>/Logical1' incorporates:
                             *  Constant: '<S122>/FALSE_Constant'
                             *  SignalConversion generated from: '<S122>/BattRapidChrgCmnd'
                             */
                            rtb_Logical1_dk = false;

                            /* Switch: '<S54>/Switch1' incorporates:
                             *  Constant: '<S122>/Constant_Value'
                             *  SignalConversion generated from: '<S122>/BattRapidChrgPwrDsrd'
                             */
                            rtb_Switch1_jm = 0.0F;

                            /* End of Outputs for SubSystem: '<S94>/EarlyTermination' */
                        }
                        else
                        {
                            /* Outputs for IfAction SubSystem: '<S94>/Charge' incorporates:
                             *  ActionPort: '<S121>/Action_Port'
                             */
                            /* Logic: '<S54>/Logical1' incorporates:
                             *  Constant: '<S121>/TRUE_Constant'
                             *  SignalConversion generated from: '<S121>/BattRapidChrgCmnd'
                             */
                            rtb_Logical1_dk = true;

                            /* Switch: '<S54>/Switch1' incorporates:
                             *  Constant: '<S121>/Constant_Value1'
                             *  DataStoreRead: '<S121>/Data Store Read'
                             *  MinMax: '<S121>/MinMax'
                             *  Product: '<S121>/Product1'
                             */
                            rtb_Switch1_jm = fminf
                                (-RTMR_ac_DW.NeRTMR_P_BattChrgPwrOffset_PID,
                                 0.0F);

                            /* End of Outputs for SubSystem: '<S94>/Charge' */
                        }

                        /* End of If: '<S94>/If' */
                    }

                    /* End of If: '<S82>/If1' */
                    /* End of Outputs for SubSystem: '<S82>/NotAbort' */
                    /* End of Outputs for SubSystem: '<S74>/RequireCharge' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S74>/CompleteCharge' incorporates:
                     *  ActionPort: '<S79>/Action_Port'
                     */
                    /* DataStoreWrite: '<S79>/Data Store Write22' incorporates:
                     *  Constant: '<S83>/Constant'
                     */
                    RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID =
                        CeRTMR_e_BattChrgStatus_Complete;

                    /* Logic: '<S54>/Logical1' incorporates:
                     *  Constant: '<S79>/FALSE_Constant'
                     *  SignalConversion generated from: '<S79>/BattRapidChrgCmnd'
                     */
                    rtb_Logical1_dk = false;

                    /* Switch: '<S54>/Switch1' incorporates:
                     *  Constant: '<S79>/Constant_Value'
                     *  SignalConversion generated from: '<S79>/BattRapidChrgPwrDsrd'
                     */
                    rtb_Switch1_jm = 0.0F;

                    /* End of Outputs for SubSystem: '<S74>/CompleteCharge' */
                }

                /* End of If: '<S74>/If' */
                /* End of Outputs for SubSystem: '<S57>/BattChargeEnabled' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S57>/BattChargeNotEnabled' incorporates:
                 *  ActionPort: '<S75>/Action_Port'
                 */
                RTMR_ac_Do_Nothing_j(&rtb_Logical1_dk, &rtb_Switch1_jm);

                /* End of Outputs for SubSystem: '<S57>/BattChargeNotEnabled' */
            }

            /* End of If: '<S57>/If1' */

            /* Outputs for Atomic SubSystem: '<S131>/EdgeFalling' */
            /* Logic: '<S143>/AND' incorporates:
             *  Logic: '<S143>/OR1'
             *  UnitDelay: '<S143>/Unit Delay'
             */
            RTMR_ac_B.AND_b = ((!VeRTMR_b_BattChrg_NotTimeOut) &&
                               (RTMR_ac_DW.UnitDelay_DSTATE_d3));

            /* Update for UnitDelay: '<S143>/Unit Delay' */
            RTMR_ac_DW.UnitDelay_DSTATE_d3 = VeRTMR_b_BattChrg_NotTimeOut;

            /* End of Outputs for SubSystem: '<S131>/EdgeFalling' */

            /* Outputs for Enabled SubSystem: '<S131>/Time_out' */
            RTMR_ac_Time_out();

            /* End of Outputs for SubSystem: '<S131>/Time_out' */

            /* Update for UnitDelay: '<S78>/Unit Delay' */
            RTMR_ac_DW.UnitDelay_DSTATE_ho =
                rtb_TmpSignalConversionAtVeRTMR_b_HybTra;

            /* Update for UnitDelay: '<S140>/Unit Delay6' */
            RTMR_ac_DW.UnitDelay6_DSTATE =
                RTMR_ac_B.TmpSignalConversionAtVeRTMR_It_BattChrgT;

            /* Update for UnitDelay: '<S140>/Unit Delay4' */
            RTMR_ac_DW.UnitDelay4_DSTATE = RTMR_ac_B.Product;

            /* Update for UnitDelay: '<S78>/Unit Delay1' */
            RTMR_ac_DW.UnitDelay1_DSTATE_m =
                rtb_TmpSignalConversionAtVeRTMR_b_Electr;

            /* Update for UnitDelay: '<S78>/Unit Delay2' */
            RTMR_ac_DW.UnitDelay2_DSTATE =
                rtb_TmpSignalConversionAtVeRTMR_b_BattCh;

            /* End of Outputs for SubSystem: '<S43>/Follow_Command_or_Keep_Charging' */
        }
    }

    /* Logic: '<S54>/Logical4' incorporates:
     *  Constant: '<S55>/Constant'
     *  Inport: '<Root>/VeESMR_I_AccumChrgCurr'
     *  Inport: '<Root>/VeESMR_I_AccumDschrgCurr'
     *  Inport: '<Root>/VeRTMR_P_BattChrgMaxPwrCmnd'
     */
    rtb_Logical4_k3 = rtb_Logical1_dk;

#else

    /* Outputs for Atomic SubSystem: '<S35>/RoutineStub' */
    /* Lookup_n-D: '<S186>/Vector' incorporates:
     *  Constant: '<S45>/Constant_Value1'
     */
    rtb_Vector = look1_iflf_binlca_16a(0.0F, ((const float32 *)
        &(KxRTMR_n_NiMin_BattRpdChrg[0])), ((const float32 *)
        &(KtRTMR_n_NiMin_BattRpdChrg[0])), 3U);

    /* Logic: '<S54>/Logical4' incorporates:
     *  Constant: '<S45>/FALSE_Constant2'
     *  SignalConversion generated from: '<S35>/Variant Source3'
     */
    rtb_Logical4_k3 = false;

    /* End of Outputs for SubSystem: '<S35>/RoutineStub' */
#endif

    /* End of If: '<S43>/If2' */

    /* If: '<S42>/If1' */
    if (RTMR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv)
    {
        /* Outputs for IfAction SubSystem: '<S42>/Pass' incorporates:
         *  ActionPort: '<S49>/Action_Port'
         */
        /* Merge: '<S42>/Merge2' incorporates:
         *  Constant: '<S49>/TRUE_Constant'
         *  SignalConversion generated from: '<S49>/ForceEngineStartStopEnbl'
         */
        VeRTMC_b_ForceAutoStopStartEnbl = true;

        /* Merge: '<S42>/Merge3' incorporates:
         *  DataTypeConversion: '<S52>/DataTypeConversion'
         *  VariantMerge generated from: '<S39>/Variant Source3'
         */
        VeRTMC_e_ForceAutoStopStartSt =
            RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_p;

        /* End of Outputs for SubSystem: '<S42>/Pass' */
    }
    else if (rtb_Logical4_k3)
    {
        /* Outputs for IfAction SubSystem: '<S42>/Disable_auto_stop' incorporates:
         *  ActionPort: '<S46>/Action_Port'
         */
        RTMR_ac_In_Plant((&(VeRTMC_b_ForceAutoStopStartEnbl)),
                         (&(VeRTMC_e_ForceAutoStopStartSt)));

        /* End of Outputs for SubSystem: '<S42>/Disable_auto_stop' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S42>/No_control' incorporates:
         *  ActionPort: '<S48>/Action_Port'
         */
        /* Merge: '<S42>/Merge2' incorporates:
         *  Constant: '<S48>/FALSE_Constant2'
         *  SignalConversion generated from: '<S48>/ForceEngineStartStopEnbl'
         */
        VeRTMC_b_ForceAutoStopStartEnbl = false;

        /* Merge: '<S42>/Merge3' incorporates:
         *  Constant: '<S51>/Constant'
         *  SignalConversion generated from: '<S48>/ForceEngineStartStopState'
         */
        VeRTMC_e_ForceAutoStopStartSt = CeSTRR_e_NoOvrrd;

        /* End of Outputs for SubSystem: '<S42>/No_control' */
    }

    /* End of If: '<S42>/If1' */

    /* Abs: '<S54>/Abs' incorporates:
     *  Gain: '<S58>/Gain'
     *  Inport: '<Root>/VeESSR_b_InputTorqOverride'
     *  Logic: '<S54>/Logical1'
     *  Logic: '<S54>/Logical2'
     *  Logic: '<S54>/Logical3'
     *  Logic: '<S54>/Logical4'
     *  Lookup_n-D: '<S70>/Vector'
     *  SignalConversion generated from: '<S35>/Variant Source1'
     *  SignalConversion generated from: '<S35>/Variant Source2'
     *  SignalConversion generated from: '<S35>/Variant Source'
     *  Switch: '<S54>/Switch'
     *  Switch: '<S54>/Switch1'
     *  UnitDelay: '<S43>/Unit Delay3'
     */
#if Rte_SysCon_Variant_RTMR_2

    /* Outputs for Atomic SubSystem: '<S54>/Timer_Reset_Trigger_Enabled' */
    /* Outputs for Atomic SubSystem: '<S54>/Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S54>/Hysteresis' */
    /* Abs: '<S54>/Abs' */
    rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat = fabsf
        (RTMR_ac_B.TmpSignalConversionAtVeCSVR_n_TransOutSp);

    /* Switch: '<S62>/Switch1' incorporates:
     *  Constant: '<S62>/Constant_Value'
     *  Constant: '<S66>/Calib'
     *  Constant: '<S67>/Calib'
     *  RelationalOperator: '<S62>/Greater_Than'
     *  RelationalOperator: '<S62>/Greater_Than1'
     *  UnitDelay: '<S62>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat > KeRTMR_n_OutSpd_BattChrg_RSP)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_ie = true;
    }
    else
    {
        RTMR_ac_DW.UnitDelay_DSTATE_ie =
            ((rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat >=
              KeRTMR_n_OutSpd_BattChrg_LSP) && (RTMR_ac_DW.UnitDelay_DSTATE_ie));
    }

    /* End of Switch: '<S62>/Switch1' */

    /* Switch: '<S63>/Switch1' incorporates:
     *  Constant: '<S63>/Constant_Value'
     *  Constant: '<S64>/Calib'
     *  Constant: '<S65>/Calib'
     *  RelationalOperator: '<S63>/Greater_Than'
     *  RelationalOperator: '<S63>/Greater_Than1'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    if (RTMR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa >
            KeRTMR_Pct_SOC_BattChrg_RSP)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_gw = true;
    }
    else
    {
        RTMR_ac_DW.UnitDelay_DSTATE_gw =
            ((RTMR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa >=
              KeRTMR_Pct_SOC_BattChrg_LSP) && (RTMR_ac_DW.UnitDelay_DSTATE_gw));
    }

    /* End of Switch: '<S63>/Switch1' */
    (void)Rte_Read_VeESSR_b_InputTorqOverride_Value(&rtb_Comparison4_jkp);
    rtb_Comparison4_jkp = (rtb_Logical1_dk && (!rtb_Comparison4_jkp));

    /* Outputs for Atomic SubSystem: '<S72>/EdgeRising' */
    /* Logic: '<S73>/AND' incorporates:
     *  Inport: '<Root>/VeESSR_b_InputTorqOverride'
     *  Logic: '<S73>/OR1'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_BattCh = (rtb_Comparison4_jkp &&
        (!RTMR_ac_DW.UnitDelay_DSTATE_by));

    /* Update for UnitDelay: '<S73>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_by = rtb_Comparison4_jkp;

    /* End of Outputs for SubSystem: '<S72>/EdgeRising' */

    /* Switch: '<S72>/Switch1' incorporates:
     *  Constant: '<S68>/Calib'
     *  Constant: '<S69>/Calib'
     *  Constant: '<S72>/Constant_Value3'
     *  Constant: '<S72>/Constant_Value4'
     *  Logic: '<S72>/AND1'
     *  MinMax: '<S72>/Maximum'
     *  RelationalOperator: '<S72>/Greater_Than2'
     *  Sum: '<S72>/Subtraction'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeRTMR_b_BattCh &&
            (RTMR_ac_DW.UnitDelay_DSTATE_oo <= 0.0F))
    {
        RTMR_ac_DW.UnitDelay_DSTATE_oo = KeRTMR_t_BattChrg_EngStrtTimeDelay;
    }
    else
    {
        RTMR_ac_DW.UnitDelay_DSTATE_oo = fmaxf(RTMR_ac_DW.UnitDelay_DSTATE_oo -
            KeRTMR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S72>/Switch1' */

    /* Logic: '<S54>/Logical1' incorporates:
     *  Constant: '<S72>/Constant_Value2'
     *  RelationalOperator: '<S72>/Greater_Than1'
     *  UnitDelay: '<S62>/Unit Delay'
     *  UnitDelay: '<S63>/Unit Delay'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    rtb_Logical1_dk = (rtb_Comparison4_jkp && (((RTMR_ac_DW.UnitDelay_DSTATE_oo <=
                          0.0F) && (!RTMR_ac_DW.UnitDelay_DSTATE_ie)) &&
                        (!RTMR_ac_DW.UnitDelay_DSTATE_gw)));
    if (rtb_Logical1_dk)
    {
        /* VariantMerge generated from: '<S35>/Variant Source' incorporates:
         *  Constant: '<S60>/Constant'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_hy =
            CeRTMR_e_BattRapidChrgEnable;
    }
    else
    {
        /* Switch: '<S54>/Switch1' incorporates:
         *  Constant: '<S54>/Constant_Value3'
         */
        rtb_Switch1_jm = 0.0F;

        /* VariantMerge generated from: '<S35>/Variant Source' incorporates:
         *  Constant: '<S61>/Constant'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_hy =
            CeRTMR_e_BattRapidChrgDisable;
    }

    /* VariantMerge generated from: '<S35>/Variant Source2' incorporates:
     *  Switch: '<S54>/Switch1'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_i = look1_iflf_binlca_16a
        (rtb_Switch1_jm, ((const float32 *)&(KxRTMR_n_NiMin_BattRpdChrg[0])), ((
           const float32 *)&(KtRTMR_n_NiMin_BattRpdChrg[0])), 3U);

    /* VariantMerge generated from: '<S35>/Variant Source1' */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g = rtb_Switch1_jm;
    RTMR_ac_DW.UnitDelay3_DSTATE = rtb_Logical4_ov;

    /* End of Outputs for SubSystem: '<S54>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S54>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S54>/Timer_Reset_Trigger_Enabled' */
#else

    /* VariantMerge generated from: '<S35>/Variant Source1' incorporates:
     *  Constant: '<S45>/Constant_Value3'
     *  SignalConversion generated from: '<S35>/Variant Source1'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g = 0.0F;

    /* VariantMerge generated from: '<S35>/Variant Source2' incorporates:
     *  SignalConversion generated from: '<S35>/Variant Source2'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_i = rtb_Vector;

    /* VariantMerge generated from: '<S35>/Variant Source' incorporates:
     *  Constant: '<S185>/Constant'
     *  SignalConversion generated from: '<S35>/Variant Source'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_hy =
        CeRTMR_e_BattRapidChrgDisable;

#endif

    /* End of Abs: '<S54>/Abs' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/ROL'
     */
#if Rte_SysCon_Variant_RTMR_1 || Rte_SysCon_Variant_RTMR_7

    /* Outputs for Atomic SubSystem: '<S38>/Variant_Subsystem' */
#if Rte_SysCon_Variant_RTMR_7

    /* Outputs for Atomic SubSystem: '<S226>/ROL_KMHEV' */
    /* RelationalOperator: '<S231>/Comparison4' incorporates:
     *  Constant: '<S239>/Constant'
     *  SignalConversion generated from: '<S12>/VeINVR_e_MtrA_InvrtrSt'
     */
    rtb_Comparison4_jkp = (((uint32)rtb_TmpSignalConversionAtVeINVR_e_MtrA_I) ==
                           CeINVR_e_NormalPowerStageOffHvRqd);

    /* Outputs for Atomic SubSystem: '<S231>/EdgeRising1' */
    /* Logic: '<S238>/OR1' incorporates:
     *  UnitDelay: '<S238>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_BattCh = !RTMR_ac_DW.UnitDelay_DSTATE_hb;

    /* Update for UnitDelay: '<S238>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_hb = rtb_TmpSignalConversionAtROLRoutine_MtrA;

    /* Logic: '<S238>/AND' incorporates:
     *  Chart: '<S229>/ROLMtrA_Procedure'
     */
    rtb_Logical4_ov = !rtb_TmpSignalConversionAtROLRoutine_MtrA;

    /* Outputs for Atomic SubSystem: '<S231>/Signal_Latch_On_With_Reset1' */
    /* Logic: '<S240>/OR1' incorporates:
     *  Logic: '<S238>/AND'
     *  Logic: '<S240>/NOT'
     *  Logic: '<S240>/OR'
     *  UnitDelay: '<S240>/Unit Delay'
     */
    RTMR_ac_DW.UnitDelay_DSTATE_pj = (rtb_Comparison4_jkp || ((rtb_Logical4_ov ||
        (!rtb_TmpSignalConversionAtVeRTMR_b_BattCh)) &&
        (RTMR_ac_DW.UnitDelay_DSTATE_pj)));

    /* End of Outputs for SubSystem: '<S231>/Signal_Latch_On_With_Reset1' */
    /* End of Outputs for SubSystem: '<S231>/EdgeRising1' */

    /* Logic: '<S231>/Logical9' incorporates:
     *  Logic: '<S231>/Logical1'
     */
    VeRTMC_b_MtrAInvrtrChngSts = ((RTMR_ac_DW.UnitDelay_DSTATE_pj) &&
        (!rtb_Comparison4_jkp));

    /* Outputs for Atomic SubSystem: '<S229>/EdgeRising' */
    /* Logic: '<S233>/OR1' incorporates:
     *  UnitDelay: '<S233>/Unit Delay'
     */
    rtb_Comparison4_jkp = !RTMR_ac_DW.UnitDelay_DSTATE_n;

    /* Update for UnitDelay: '<S233>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_n = rtb_TmpSignalConversionAtROLRoutine_MtrA;

    /* Outputs for Atomic SubSystem: '<S229>/Count_Down_Reset_Enabled' */
    /* Switch: '<S232>/Switch1' incorporates:
     *  Constant: '<S232>/Constant Value'
     *  Constant: '<S235>/Calib'
     *  Logic: '<S232>/AND'
     *  Logic: '<S233>/AND'
     *  RelationalOperator: '<S232>/Greater  Than'
     *  Switch: '<S232>/Switch2'
     *  UnitDelay: '<S232>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtROLRoutine_MtrA && rtb_Comparison4_jkp)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_m = KeRTMR_Cnt_ROLTimeOut;
    }
    else
    {
        if (rtb_TmpSignalConversionAtROLRoutine_MtrA && (((sint32)
                RTMR_ac_DW.UnitDelay_DSTATE_m) > 0))
        {
            /* UnitDelay: '<S232>/Unit Delay' incorporates:
             *  Constant: '<S232>/Constant Value1'
             *  Sum: '<S232>/Subtraction'
             *  Switch: '<S232>/Switch2'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_m = (uint16)((sint32)(((sint32)
                RTMR_ac_DW.UnitDelay_DSTATE_m) - 1));
        }
    }

    /* End of Switch: '<S232>/Switch1' */
    /* End of Outputs for SubSystem: '<S229>/Count_Down_Reset_Enabled' */
    /* End of Outputs for SubSystem: '<S229>/EdgeRising' */

    /* Logic: '<S234>/Logical9' incorporates:
     *  Constant: '<S241>/Calib'
     *  Constant: '<S242>/Calib'
     *  RelationalOperator: '<S234>/Comparison10'
     *  RelationalOperator: '<S234>/Comparison5'
     */
    rtb_Comparison4_jkp = ((RTMR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed <=
                            KeRTMR_n_MaxEngSpeed_ROL) &&
                           (RTMR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed >=
                            KeRTMR_n_MinEngSpeed_ROL));

    /* Outputs for Atomic SubSystem: '<S234>/Turn_On_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S245>/EdgeRising' */
    /* Logic: '<S246>/AND' incorporates:
     *  Logic: '<S246>/OR1'
     *  UnitDelay: '<S246>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_BattCh = (rtb_Comparison4_jkp &&
        (!RTMR_ac_DW.UnitDelay_DSTATE_kg));

    /* Update for UnitDelay: '<S246>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_kg = rtb_Comparison4_jkp;

    /* End of Outputs for SubSystem: '<S245>/EdgeRising' */

    /* Switch: '<S245>/Switch1' incorporates:
     *  Constant: '<S243>/Calib'
     *  Constant: '<S244>/Calib'
     *  Constant: '<S245>/Constant_Value1'
     *  Logic: '<S245>/OR'
     *  Logic: '<S245>/OR1'
     *  MinMax: '<S245>/Minimum'
     *  Sum: '<S245>/Summation'
     *  UnitDelay: '<S245>/Unit Delay'
     */
    if ((!rtb_Comparison4_jkp) || rtb_TmpSignalConversionAtVeRTMR_b_BattCh)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_oi = 0.0F;
    }
    else
    {
        RTMR_ac_DW.UnitDelay_DSTATE_oi = fminf(KeRTMR_t_TiDebounceSetROL,
            KeRTMR_t_MedTED + RTMR_ac_DW.UnitDelay_DSTATE_oi);
    }

    /* End of Switch: '<S245>/Switch1' */
    /* End of Outputs for SubSystem: '<S234>/Turn_On_Delay_Time' */

    /* Chart: '<S229>/ROLMtrA_Procedure' incorporates:
     *  Constant: '<S232>/Constant Value2'
     *  Constant: '<S236>/Calib'
     *  Constant: '<S244>/Calib'
     *  Inport: '<Root>/VeENGR_e_ETRQ_Mode'
     *  Logic: '<S245>/AND'
     *  RelationalOperator: '<S232>/Greater  Than1'
     *  RelationalOperator: '<S245>/Greater_Than'
     *  SignalConversion generated from: '<S12>/VeESSR_e_EngStartStopSt'
     *  UnitDelay: '<S232>/Unit Delay'
     *  UnitDelay: '<S245>/Unit Delay'
     */
    /* Gateway: RTMR_MedTED/ROL/Variant_Subsystem/ROL_KMHEV/ROL_MtrA_KMHEV/ROLMtrA_Procedure */
    /* During: RTMR_MedTED/ROL/Variant_Subsystem/ROL_KMHEV/ROL_MtrA_KMHEV/ROLMtrA_Procedure */
    if (((uint32)RTMR_ac_DW.is_active_c11_RTMR_ac) == 0U)
    {
        /* Entry: RTMR_MedTED/ROL/Variant_Subsystem/ROL_KMHEV/ROL_MtrA_KMHEV/ROLMtrA_Procedure */
        RTMR_ac_DW.is_active_c11_RTMR_ac = 1U;

        /* Entry Internal: RTMR_MedTED/ROL/Variant_Subsystem/ROL_KMHEV/ROL_MtrA_KMHEV/ROLMtrA_Procedure */
        /* Transition: '<S237>:91' */
        RTMR_ac_DW.is_c11_RTMR_ac = RTMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S237>:90' */
        VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_Inactive;
        VeRTMC_b_HybTransCmndStEnbl_MtrA = false;
        VeRTMC_e_HybTransCmndSt_MtrA = CeOHSR_e_RngSel_N;
        VeRTMC_b_ForceAutoStopStartEnbl_MtrA = false;
        VeRTMC_e_ForceAutoStopStartSt_MtrA = CeSTRR_e_NoOvrrd;
        RTMR_ac_B.VeRTMC_b_DsblMtr_OITR_h = false;
        RTMR_ac_B.VeRTMC_b_DsblEngCL_ICSR = false;
        RTMR_ac_B.VeRTMC_b_DsblMtrA_o = false;
        RTMR_ac_B.VeRTMC_b_DsblMtrB_f = false;
        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrA = false;
    }
    else
    {
        switch (RTMR_ac_DW.is_c11_RTMR_ac)
        {
          case RTMR_ac_IN_IDLE:
            VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_Inactive;
            VeRTMC_b_HybTransCmndStEnbl_MtrA = false;
            VeRTMC_e_HybTransCmndSt_MtrA = CeOHSR_e_RngSel_N;
            VeRTMC_b_ForceAutoStopStartEnbl_MtrA = false;
            VeRTMC_e_ForceAutoStopStartSt_MtrA = CeSTRR_e_NoOvrrd;
            RTMR_ac_B.VeRTMC_b_DsblMtr_OITR_h = false;
            RTMR_ac_B.VeRTMC_b_DsblEngCL_ICSR = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrA_o = false;
            RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrA = false;

            /* During 'IDLE': '<S237>:90' */
            if (rtb_TmpSignalConversionAtROLRoutine_MtrA)
            {
                /* Transition: '<S237>:93' */
                RTMR_ac_DW.is_c11_RTMR_ac = RTMR_ac_IN_ROLRoutineActive;

                /* Entry 'ROLRoutineActive': '<S237>:92' */
                /* Entry Internal 'ROLRoutineActive': '<S237>:92' */
                /* Transition: '<S237>:95' */
                RTMR_ac_DW.is_ROLRoutineActive = RTMR_ac_IN_ROLRoutineRequested;

                /* Entry 'ROLRoutineRequested': '<S237>:133' */
                VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_Requested;
            }
            break;

          case RTMR_ac_IN_ROLCompletedbyDMPI:
            VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_Complete;
            VeRTMC_b_HybTransCmndStEnbl_MtrA = false;
            VeRTMC_e_HybTransCmndSt_MtrA = CeOHSR_e_RngSel_N;
            VeRTMC_b_ForceAutoStopStartEnbl_MtrA = false;
            VeRTMC_e_ForceAutoStopStartSt_MtrA = CeSTRR_e_NoOvrrd;
            RTMR_ac_B.VeRTMC_b_DsblMtr_OITR_h = false;
            RTMR_ac_B.VeRTMC_b_DsblEngCL_ICSR = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrA_o = false;
            RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrA = false;

            /* During 'ROLCompletedbyDMPI': '<S237>:106' */
            break;

          case RTMR_ac_IN_ROLFailed:
            VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_Aborted;
            VeRTMC_b_HybTransCmndStEnbl_MtrA = false;
            VeRTMC_e_HybTransCmndSt_MtrA = CeOHSR_e_RngSel_N;
            VeRTMC_b_ForceAutoStopStartEnbl_MtrA = false;
            VeRTMC_e_ForceAutoStopStartSt_MtrA = CeSTRR_e_NoOvrrd;
            RTMR_ac_B.VeRTMC_b_DsblMtr_OITR_h = false;
            RTMR_ac_B.VeRTMC_b_DsblEngCL_ICSR = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrA_o = false;
            RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrA = false;

            /* During 'ROLFailed': '<S237>:109' */
            break;

          default:
            /* Outputs for Atomic SubSystem: '<S229>/Count_Down_Reset_Enabled' */
            /* During 'ROLRoutineActive': '<S237>:92' */
            if (rtb_Logical4_ov || (((sint32)RTMR_ac_DW.UnitDelay_DSTATE_m) <= 0))
            {
                /* Transition: '<S237>:110' */
                /* Exit Internal 'ROLRoutineActive': '<S237>:92' */
                RTMR_ac_DW.is_ROLRoutineActive = RTMR_ac_IN_NO_ACTIVE_CHILD;
                RTMR_ac_DW.is_c11_RTMR_ac = RTMR_ac_IN_ROLFailed;

                /* Entry 'ROLFailed': '<S237>:109' */
                VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_Aborted;
                VeRTMC_b_HybTransCmndStEnbl_MtrA = false;
                VeRTMC_e_HybTransCmndSt_MtrA = CeOHSR_e_RngSel_N;
                VeRTMC_b_ForceAutoStopStartEnbl_MtrA = false;
                VeRTMC_e_ForceAutoStopStartSt_MtrA = CeSTRR_e_NoOvrrd;
                RTMR_ac_B.VeRTMC_b_DsblMtr_OITR_h = false;
                RTMR_ac_B.VeRTMC_b_DsblEngCL_ICSR = false;
                RTMR_ac_B.VeRTMC_b_DsblMtrA_o = false;
                RTMR_ac_B.VeRTMC_b_DsblMtrB_f = false;
                RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrA = false;
            }
            else
            {
                switch (RTMR_ac_DW.is_ROLRoutineActive)
                {
                  case RTMR_ac_IN_ROLRoutineRequested:
                    /* During 'ROLRoutineRequested': '<S237>:133' */
                    /* Transition: '<S237>:135' */
                    RTMR_ac_DW.is_ROLRoutineActive = RTMR_ac_IN_ROLRoutineStarts;

                    /* Entry 'ROLRoutineStarts': '<S237>:94' */
                    VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_StartEng;
                    VeRTMC_b_HybTransCmndStEnbl_MtrA = true;
                    VeRTMC_e_HybTransCmndSt_MtrA = CeOHSR_e_RngSel_M2;
                    VeRTMC_b_ForceAutoStopStartEnbl_MtrA = true;
                    VeRTMC_e_ForceAutoStopStartSt_MtrA = CeSTRR_e_OvrrdEngOn;
                    break;

                  case RTMR_ac_IN_ROLRoutineStarts:
                    VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_StartEng;
                    VeRTMC_b_HybTransCmndStEnbl_MtrA = true;
                    VeRTMC_e_HybTransCmndSt_MtrA = CeOHSR_e_RngSel_M2;
                    VeRTMC_b_ForceAutoStopStartEnbl_MtrA = true;
                    VeRTMC_e_ForceAutoStopStartSt_MtrA = CeSTRR_e_OvrrdEngOn;

                    /* During 'ROLRoutineStarts': '<S237>:94' */
                    if (((uint32)
                            RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
                        CeESSR_e_EngRunning)
                    {
                        /* Transition: '<S237>:100' */
                        RTMR_ac_DW.is_ROLRoutineActive =
                            RTMR_ac_IN_ReqDisableMtrA_OITR;

                        /* Entry 'ReqDisableMtrA_OITR': '<S237>:96' */
                        VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_DsblMtr_OITR;
                        RTMR_ac_B.VeRTMC_b_DsblMtr_OITR_h = true;
                    }
                    break;

                  case RTMR_ac_IN_ReqDisableMtrA:
                    VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_DsblMtr;
                    RTMR_ac_B.VeRTMC_b_DsblMtrA_o = true;

                    /* During 'ReqDisableMtrA': '<S237>:98' */
                    if (((rtb_TmpSignalConversionAtVeMTQR_M_MtrA_d <= 0.5F) &&
                            (rtb_TmpSignalConversionAtVeMTQR_M_MtrA_e >= -0.5F))
                        && (((rtb_TmpSignalConversionAtVeMTQR_M_MtrB_M <= 0.5F) &&
                             (rtb_TmpSignalConversionAtVeMTQR_M_MtrB_a >= -0.5F))
                            || (KeRTMR_b_OvrCheckMtrBDsbl)))
                    {
                        /* Transition: '<S237>:103' */
                        RTMR_ac_DW.is_ROLRoutineActive =
                            RTMR_ac_IN_ReqROLTestToDMPI;

                        /* Entry 'ReqROLTestToDMPI': '<S237>:99' */
                        VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_ROLInProg;
                        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrA = true;
                    }
                    break;

                  case RTMR_ac_IN_ReqDisableMtrA_OITR:
                    VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_DsblMtr_OITR;
                    RTMR_ac_B.VeRTMC_b_DsblMtr_OITR_h = true;

                    /* During 'ReqDisableMtrA_OITR': '<S237>:96' */
                    if (((rtb_TmpSignalConversionAtVeMTQR_M_MtrA_M <= 0.5F) &&
                            (rtb_TmpSignalConversionAtVeMTQR_M_MtrA_h >= -0.5F))
                        && (((rtb_TmpSignalConversionAtVeMTQR_M_MtrB_j <= 0.5F) &&
                             (rtb_TmpSignalConversionAtVeMTQR_M_MtrB_e >= -0.5F))
                            || (KeRTMR_b_OvrCheckMtrBDsbl)))
                    {
                        /* Transition: '<S237>:101' */
                        RTMR_ac_DW.is_ROLRoutineActive =
                            RTMR_ac_IN_ReqEngSpdCntrl;

                        /* Entry 'ReqEngSpdCntrl': '<S237>:97' */
                        VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_DsblEngCL;
                        RTMR_ac_B.VeRTMC_b_DsblEngCL_ICSR = true;
                    }
                    break;

                  case RTMR_ac_IN_ReqEngSpdCntrl:
                    VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_DsblEngCL;
                    RTMR_ac_B.VeRTMC_b_DsblEngCL_ICSR = true;

                    /* During 'ReqEngSpdCntrl': '<S237>:97' */
                    (void)Rte_Read_VeENGR_e_ETRQ_Mode_Value(&tmpRead_a);

                    /* Outputs for Atomic SubSystem: '<S234>/Turn_On_Delay_Time' */
                    if ((rtb_Comparison4_jkp && (RTMR_ac_DW.UnitDelay_DSTATE_oi >=
                          KeRTMR_t_TiDebounceSetROL)) && (((uint32)tmpRead_a) ==
                         CeENGR_e_Idle))
                    {
                        /* Transition: '<S237>:102' */
                        RTMR_ac_DW.is_ROLRoutineActive =
                            RTMR_ac_IN_ReqDisableMtrA;

                        /* Entry 'ReqDisableMtrA': '<S237>:98' */
                        VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_DsblMtr;
                        RTMR_ac_B.VeRTMC_b_DsblMtrA_o = true;
                        RTMR_ac_B.VeRTMC_b_DsblMtrB_f =
                            ((!KeRTMR_b_OvrCheckMtrBDsbl) ||
                             (RTMR_ac_B.VeRTMC_b_DsblMtrB_f));
                    }

                    /* End of Outputs for SubSystem: '<S234>/Turn_On_Delay_Time' */
                    break;

                  default:
                    VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_ROLInProg;
                    RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrA = true;

                    /* During 'ReqROLTestToDMPI': '<S237>:99' */
                    if (VeRTMC_b_MtrAInvrtrChngSts)
                    {
                        /* Transition: '<S237>:104' */
                        RTMR_ac_DW.is_ROLRoutineActive =
                            RTMR_ac_IN_NO_ACTIVE_CHILD;
                        RTMR_ac_DW.is_c11_RTMR_ac =
                            RTMR_ac_IN_ROLCompletedbyDMPI;

                        /* Entry 'ROLCompletedbyDMPI': '<S237>:106' */
                        VeRTMR_e_ROLMtrAStatus = CeRTMR_e_ROLStatus_Complete;
                        VeRTMC_b_HybTransCmndStEnbl_MtrA = false;
                        VeRTMC_e_HybTransCmndSt_MtrA = CeOHSR_e_RngSel_N;
                        VeRTMC_b_ForceAutoStopStartEnbl_MtrA = false;
                        VeRTMC_e_ForceAutoStopStartSt_MtrA = CeSTRR_e_NoOvrrd;
                        RTMR_ac_B.VeRTMC_b_DsblMtr_OITR_h = false;
                        RTMR_ac_B.VeRTMC_b_DsblEngCL_ICSR = false;
                        RTMR_ac_B.VeRTMC_b_DsblMtrA_o = false;
                        RTMR_ac_B.VeRTMC_b_DsblMtrB_f = false;
                        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrA = false;
                    }
                    break;
                }
            }

            /* End of Outputs for SubSystem: '<S229>/Count_Down_Reset_Enabled' */
            break;
        }
    }

    /* RelationalOperator: '<S247>/Comparison4' incorporates:
     *  Constant: '<S253>/Constant'
     *  SignalConversion generated from: '<S12>/VeINVR_e_MtrB_InvrtrSt'
     */
    rtb_Comparison4_jkp = (((uint32)rtb_TmpSignalConversionAtVeINVR_e_MtrB_I) ==
                           CeINVR_e_NormalPowerStageOffHvRqd);

    /* Outputs for Atomic SubSystem: '<S247>/EdgeRising1' */
    /* Logic: '<S252>/OR1' incorporates:
     *  UnitDelay: '<S252>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_BattCh = !RTMR_ac_DW.UnitDelay_DSTATE_pw;

    /* Update for UnitDelay: '<S252>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_pw = rtb_TmpSignalConversionAtROLRoutine_MtrB;

    /* Logic: '<S252>/AND' incorporates:
     *  Chart: '<S230>/ROLMtrB_Procedure'
     */
    rtb_Logical4_ov = !rtb_TmpSignalConversionAtROLRoutine_MtrB;

    /* Outputs for Atomic SubSystem: '<S247>/Signal_Latch_On_With_Reset1' */
    /* Logic: '<S254>/OR1' incorporates:
     *  Logic: '<S252>/AND'
     *  Logic: '<S254>/NOT'
     *  Logic: '<S254>/OR'
     *  UnitDelay: '<S254>/Unit Delay'
     */
    RTMR_ac_DW.UnitDelay_DSTATE_if = (rtb_Comparison4_jkp || ((rtb_Logical4_ov ||
        (!rtb_TmpSignalConversionAtVeRTMR_b_BattCh)) &&
        (RTMR_ac_DW.UnitDelay_DSTATE_if)));

    /* End of Outputs for SubSystem: '<S247>/Signal_Latch_On_With_Reset1' */
    /* End of Outputs for SubSystem: '<S247>/EdgeRising1' */

    /* Logic: '<S247>/Logical9' incorporates:
     *  Logic: '<S247>/Logical1'
     */
    VeRTMC_b_MtrBInvrtrChngSts = ((RTMR_ac_DW.UnitDelay_DSTATE_if) &&
        (!rtb_Comparison4_jkp));

    /* Outputs for Atomic SubSystem: '<S230>/EdgeRising' */
    /* Logic: '<S249>/OR1' incorporates:
     *  UnitDelay: '<S249>/Unit Delay'
     */
    rtb_Comparison4_jkp = !RTMR_ac_DW.UnitDelay_DSTATE_a3;

    /* Update for UnitDelay: '<S249>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_a3 = rtb_TmpSignalConversionAtROLRoutine_MtrB;

    /* Outputs for Atomic SubSystem: '<S230>/Count_Down_Reset_Enabled' */
    /* Switch: '<S248>/Switch1' incorporates:
     *  Constant: '<S248>/Constant Value'
     *  Constant: '<S250>/Calib'
     *  Logic: '<S248>/AND'
     *  Logic: '<S249>/AND'
     *  RelationalOperator: '<S248>/Greater  Than'
     *  Switch: '<S248>/Switch2'
     *  UnitDelay: '<S248>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtROLRoutine_MtrB && rtb_Comparison4_jkp)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_gv = KeRTMR_Cnt_ROLTimeOut;
    }
    else
    {
        if (rtb_TmpSignalConversionAtROLRoutine_MtrB && (((sint32)
                RTMR_ac_DW.UnitDelay_DSTATE_gv) > 0))
        {
            /* UnitDelay: '<S248>/Unit Delay' incorporates:
             *  Constant: '<S248>/Constant Value1'
             *  Sum: '<S248>/Subtraction'
             *  Switch: '<S248>/Switch2'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_gv = (uint16)((sint32)(((sint32)
                RTMR_ac_DW.UnitDelay_DSTATE_gv) - 1));
        }
    }

    /* End of Switch: '<S248>/Switch1' */
    /* End of Outputs for SubSystem: '<S230>/Count_Down_Reset_Enabled' */
    /* End of Outputs for SubSystem: '<S230>/EdgeRising' */

    /* Chart: '<S230>/ROLMtrB_Procedure' incorporates:
     *  Constant: '<S248>/Constant Value2'
     *  RelationalOperator: '<S248>/Greater  Than1'
     *  SignalConversion generated from: '<S12>/VeESSR_e_EngStartStopSt'
     *  UnitDelay: '<S248>/Unit Delay'
     */
    /* Gateway: RTMR_MedTED/ROL/Variant_Subsystem/ROL_KMHEV/ROL_MtrB_KMHEV/ROLMtrB_Procedure */
    /* During: RTMR_MedTED/ROL/Variant_Subsystem/ROL_KMHEV/ROL_MtrB_KMHEV/ROLMtrB_Procedure */
    if (((uint32)RTMR_ac_DW.is_active_c12_RTMR_ac) == 0U)
    {
        /* Entry: RTMR_MedTED/ROL/Variant_Subsystem/ROL_KMHEV/ROL_MtrB_KMHEV/ROLMtrB_Procedure */
        RTMR_ac_DW.is_active_c12_RTMR_ac = 1U;

        /* Entry Internal: RTMR_MedTED/ROL/Variant_Subsystem/ROL_KMHEV/ROL_MtrB_KMHEV/ROLMtrB_Procedure */
        /* Transition: '<S251>:91' */
        RTMR_ac_DW.is_c12_RTMR_ac = RTMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S251>:90' */
        VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_Inactive;
        VeRTMC_b_ForceAutoStopStartEnbl_MtrB = false;
        VeRTMC_e_ForceAutoStopStartSt_MtrB = CeSTRR_e_NoOvrrd;
        RTMR_ac_B.VeRTMC_b_DsblMtr_OITR = false;
        RTMR_ac_B.VeRTMC_b_DsblMtrA = false;
        RTMR_ac_B.VeRTMC_b_DsblMtrB_p = false;
        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrB = false;
    }
    else
    {
        switch (RTMR_ac_DW.is_c12_RTMR_ac)
        {
          case RTMR_ac_IN_IDLE:
            VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_Inactive;
            VeRTMC_b_ForceAutoStopStartEnbl_MtrB = false;
            VeRTMC_e_ForceAutoStopStartSt_MtrB = CeSTRR_e_NoOvrrd;
            RTMR_ac_B.VeRTMC_b_DsblMtr_OITR = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrA = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrB_p = false;
            RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrB = false;

            /* During 'IDLE': '<S251>:90' */
            if (rtb_TmpSignalConversionAtROLRoutine_MtrB)
            {
                /* Transition: '<S251>:93' */
                RTMR_ac_DW.is_c12_RTMR_ac = RTMR_ac_IN_ROLRoutineActive_MtrB;

                /* Entry 'ROLRoutineActive_MtrB': '<S251>:92' */
                /* Entry Internal 'ROLRoutineActive_MtrB': '<S251>:92' */
                /* Transition: '<S251>:95' */
                RTMR_ac_DW.is_ROLRoutineActive_MtrB =
                    RTMR_ac_IN_ROLRoutineRequested;

                /* Entry 'ROLRoutineRequested': '<S251>:124' */
                VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_Requested;
            }
            break;

          case RTMR_ac_IN_ROLCompletedbyDMPI:
            VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_Complete;
            VeRTMC_b_ForceAutoStopStartEnbl_MtrB = false;
            VeRTMC_e_ForceAutoStopStartSt_MtrB = CeSTRR_e_NoOvrrd;
            RTMR_ac_B.VeRTMC_b_DsblMtr_OITR = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrA = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrB_p = false;
            RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrB = false;

            /* During 'ROLCompletedbyDMPI': '<S251>:106' */
            break;

          case RTMR_ac_IN_ROLFailed:
            VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_Aborted;
            VeRTMC_b_ForceAutoStopStartEnbl_MtrB = false;
            VeRTMC_e_ForceAutoStopStartSt_MtrB = CeSTRR_e_NoOvrrd;
            RTMR_ac_B.VeRTMC_b_DsblMtr_OITR = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrA = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrB_p = false;
            RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrB = false;

            /* During 'ROLFailed': '<S251>:109' */
            break;

          default:
            /* Outputs for Atomic SubSystem: '<S230>/Count_Down_Reset_Enabled' */
            /* During 'ROLRoutineActive_MtrB': '<S251>:92' */
            if (rtb_Logical4_ov || (((sint32)RTMR_ac_DW.UnitDelay_DSTATE_gv) <=
                                    0))
            {
                /* Transition: '<S251>:110' */
                /* Exit Internal 'ROLRoutineActive_MtrB': '<S251>:92' */
                RTMR_ac_DW.is_ROLRoutineActive_MtrB = RTMR_ac_IN_NO_ACTIVE_CHILD;
                RTMR_ac_DW.is_c12_RTMR_ac = RTMR_ac_IN_ROLFailed;

                /* Entry 'ROLFailed': '<S251>:109' */
                VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_Aborted;
                VeRTMC_b_ForceAutoStopStartEnbl_MtrB = false;
                VeRTMC_e_ForceAutoStopStartSt_MtrB = CeSTRR_e_NoOvrrd;
                RTMR_ac_B.VeRTMC_b_DsblMtr_OITR = false;
                RTMR_ac_B.VeRTMC_b_DsblMtrA = false;
                RTMR_ac_B.VeRTMC_b_DsblMtrB_p = false;
                RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrB = false;
            }
            else
            {
                switch (RTMR_ac_DW.is_ROLRoutineActive_MtrB)
                {
                  case RTMR_ac_IN_ROLRoutineRequested:
                    /* During 'ROLRoutineRequested': '<S251>:124' */
                    /* Transition: '<S251>:126' */
                    RTMR_ac_DW.is_ROLRoutineActive_MtrB =
                        RTMR_ac_IN_ROLRoutineStarts;

                    /* Entry 'ROLRoutineStarts': '<S251>:94' */
                    VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_StopEng;
                    VeRTMC_b_ForceAutoStopStartEnbl_MtrB = true;
                    VeRTMC_e_ForceAutoStopStartSt_MtrB = CeSTRR_e_OvrrdEngOff;
                    break;

                  case RTMR_ac_IN_ROLRoutineStarts:
                    VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_StopEng;
                    VeRTMC_b_ForceAutoStopStartEnbl_MtrB = true;
                    VeRTMC_e_ForceAutoStopStartSt_MtrB = CeSTRR_e_OvrrdEngOff;

                    /* During 'ROLRoutineStarts': '<S251>:94' */
                    if (((uint32)
                            RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
                        CeESSR_e_EngOff)
                    {
                        /* Transition: '<S251>:100' */
                        RTMR_ac_DW.is_ROLRoutineActive_MtrB =
                            RTMR_ac_IN_ReqDisableMtrB_OITR;

                        /* Entry 'ReqDisableMtrB_OITR': '<S251>:96' */
                        VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_DsblMtr;
                        RTMR_ac_B.VeRTMC_b_DsblMtr_OITR = true;
                        RTMR_ac_B.VeRTMC_b_DsblMtrA = true;
                        RTMR_ac_B.VeRTMC_b_DsblMtrB_p = true;
                    }
                    break;

                  case RTMR_ac_IN_ReqDisableMtrB_OITR:
                    VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_DsblMtr;
                    RTMR_ac_B.VeRTMC_b_DsblMtr_OITR = true;
                    RTMR_ac_B.VeRTMC_b_DsblMtrA = true;
                    RTMR_ac_B.VeRTMC_b_DsblMtrB_p = true;

                    /* During 'ReqDisableMtrB_OITR': '<S251>:96' */
                    if ((((((((rtb_TmpSignalConversionAtVeMTQR_M_MtrA_M <= 0.5F)
                              && (rtb_TmpSignalConversionAtVeMTQR_M_MtrA_h >=
                                  -0.5F)) &&
                             (rtb_TmpSignalConversionAtVeMTQR_M_MtrB_j <= 0.5F))
                            && (rtb_TmpSignalConversionAtVeMTQR_M_MtrB_e >=
                                -0.5F)) &&
                            (rtb_TmpSignalConversionAtVeMTQR_M_MtrA_d <= 0.5F)) &&
                          (rtb_TmpSignalConversionAtVeMTQR_M_MtrA_e >= -0.5F)) &&
                         (rtb_TmpSignalConversionAtVeMTQR_M_MtrB_M <= 0.5F)) &&
                            (rtb_TmpSignalConversionAtVeMTQR_M_MtrB_a >= -0.5F))
                    {
                        /* Transition: '<S251>:101' */
                        RTMR_ac_DW.is_ROLRoutineActive_MtrB =
                            RTMR_ac_IN_ReqROLTestToDMPI_c;

                        /* Entry 'ReqROLTestToDMPI': '<S251>:97' */
                        VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_ROLInProg;
                        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrB = true;
                    }
                    break;

                  default:
                    VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_ROLInProg;
                    RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrB = true;

                    /* During 'ReqROLTestToDMPI': '<S251>:97' */
                    if (VeRTMC_b_MtrBInvrtrChngSts)
                    {
                        /* Transition: '<S251>:102' */
                        RTMR_ac_DW.is_ROLRoutineActive_MtrB =
                            RTMR_ac_IN_NO_ACTIVE_CHILD;
                        RTMR_ac_DW.is_c12_RTMR_ac =
                            RTMR_ac_IN_ROLCompletedbyDMPI;

                        /* Entry 'ROLCompletedbyDMPI': '<S251>:106' */
                        VeRTMR_e_ROLMtrBStatus = CeRTMR_e_ROLStatus_Complete;
                        VeRTMC_b_ForceAutoStopStartEnbl_MtrB = false;
                        VeRTMC_e_ForceAutoStopStartSt_MtrB = CeSTRR_e_NoOvrrd;
                        RTMR_ac_B.VeRTMC_b_DsblMtr_OITR = false;
                        RTMR_ac_B.VeRTMC_b_DsblMtrA = false;
                        RTMR_ac_B.VeRTMC_b_DsblMtrB_p = false;
                        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrB = false;
                    }
                    break;
                }
            }

            /* End of Outputs for SubSystem: '<S230>/Count_Down_Reset_Enabled' */
            break;
        }
    }

    /* End of Outputs for SubSystem: '<S226>/ROL_KMHEV' */
#elif Rte_SysCon_Variant_RTMR_1

    /* Outputs for Atomic SubSystem: '<S226>/ROL_PxPy' */
    /* RelationalOperator: '<S260>/Comparison5' incorporates:
     *  Constant: '<S301>/Calib'
     */
    rtb_TmpSignalConversionAtROLRoutine_MtrB =
        (rtb_TmpSignalConversionAtVeTFTR_T_TransO > KeRTMR_T_TransOilTemp_ROL_UL);

    /* RelationalOperator: '<S260>/Comparison3' incorporates:
     *  Constant: '<S300>/Calib'
     */
    rtb_Logical4_ov = (rtb_TmpSignalConversionAtVeTFTR_T_TransO <
                       KeRTMR_T_TransOilTemp_ROL_LL);

    /* Switch: '<S295>/Switch1' */
    if (rtb_Logical4_ov)
    {
        /* Switch: '<S295>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S303>/FixPt Bitwise Operator1'
         *  Switch: '<S295>/Switch'
         */
        rtb_Switch1_p = (uint8)((rtb_TmpSignalConversionAtROLRoutine_MtrB ?
            ((uint8)1) : ((uint8)0)) | ((uint8)2));
    }
    else
    {
        /* Switch: '<S295>/Switch1' incorporates:
         *  Switch: '<S295>/Switch'
         */
        rtb_Switch1_p = rtb_TmpSignalConversionAtROLRoutine_MtrB ? ((uint8)1) :
            ((uint8)0);
    }

    /* End of Switch: '<S295>/Switch1' */

    /* Inport: '<Root>/VeENGR_T_EngCoolantTemp' */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value(&tmpRead_5);

    /* RelationalOperator: '<S260>/Comparison6' incorporates:
     *  Constant: '<S299>/Calib'
     */
    rtb_Comparison4_jkp = (tmpRead_5 < KeRTMR_T_EngCoolantTemp_ROL_LL);

    /* Switch: '<S295>/Switch2' */
    if (rtb_Comparison4_jkp)
    {
        /* Switch: '<S295>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S305>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_p |= (uint8)4;
    }

    /* End of Switch: '<S295>/Switch2' */

    /* Logic: '<S260>/Logical1' incorporates:
     *  Constant: '<S296>/Constant'
     *  Constant: '<S297>/Constant'
     *  RelationalOperator: '<S260>/Comparison1'
     *  RelationalOperator: '<S260>/Comparison2'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_BattCh = ((((uint32)
        RTMR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans) ==
        CeTRGR_e_TransRangePark) || (((uint32)
        RTMR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans) ==
        CeTRGR_e_TransRangeNeutral));

    /* Switch: '<S295>/Switch3' incorporates:
     *  Logic: '<S260>/Logical8'
     */
    if (!rtb_TmpSignalConversionAtVeRTMR_b_BattCh)
    {
        /* Switch: '<S295>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S306>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_p |= (uint8)8;
    }

    /* End of Switch: '<S295>/Switch3' */

    /* Inport: '<Root>/VeHPMR_e_HybSysSt' */
    (void)Rte_Read_VeHPMR_e_HybSysSt_Value(&tmpRead_6);

    /* UnitDelay: '<S385>/Unit Delay' incorporates:
     *  Constant: '<S298>/Constant'
     *  Inport: '<Root>/VeHPMR_e_HybSysSt'
     *  RelationalOperator: '<S260>/Comparison7'
     */
    rtb_Logical4_k3 = (((uint32)tmpRead_6) != CeHPMR_e_OPERATIONAL);

    /* Switch: '<S295>/Switch4' */
    if (rtb_Logical4_k3)
    {
        /* Switch: '<S295>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S307>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_p |= (uint8)16;
    }

    /* End of Switch: '<S295>/Switch4' */

    /* Switch: '<S295>/Switch12' incorporates:
     *  Logic: '<S260>/Logical2'
     */
    if (!rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
    {
        /* Switch: '<S295>/Switch6' incorporates:
         *  DataStoreWrite: '<S260>/Data Store Write'
         *  S-Function (sfix_bitop): '<S304>/FixPt Bitwise Operator1'
         *  Switch: '<S295>/Switch5'
         */
        RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID = (uint8)(rtb_Switch1_p |
            ((uint8)32));
    }
    else
    {
        /* Switch: '<S295>/Switch6' incorporates:
         *  DataStoreWrite: '<S260>/Data Store Write'
         *  Switch: '<S295>/Switch5'
         */
        RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID = rtb_Switch1_p;
    }

    /* End of Switch: '<S295>/Switch12' */

    /* Inport: '<Root>/VeTRNR_e_C2Stat' */
    (void)Rte_Read_VeTRNR_e_C2Stat_Value(&tmpRead_7);

    /* Logic: '<S260>/Logical Operator' incorporates:
     *  Logic: '<S260>/Logical3'
     *  Logic: '<S260>/Logical4'
     *  Logic: '<S260>/Logical5'
     *  Logic: '<S260>/Logical6'
     */
    VeRTMC_b_CheckPreConditions =
        ((((((!rtb_TmpSignalConversionAtROLRoutine_MtrB) && (!rtb_Logical4_ov)) &&
            (!rtb_Comparison4_jkp)) && rtb_TmpSignalConversionAtVeRTMR_b_BattCh)
          && (!rtb_Logical4_k3)) && rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* DataStoreWrite: '<S228>/Data Store Write3' */
    RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID =
        rtb_TmpSignalConversionAtVeRTMR_y_Reslvr;

    /* RelationalOperator: '<S268>/Relational Operator' incorporates:
     *  Constant: '<S268>/Constant'
     *  DataStoreRead: '<S268>/StatusByte_DM_B_PstnNotLrnd'
     *  S-Function (sfix_bitop): '<S268>/Bitwise Operator7'
     */
    RTMR_ac_B.AND_m = ((((sint32)RTMR_ac_DW.StatusByte_DM_B_PstnNotLrnd) & 1) >
                       0);

    /* RelationalOperator: '<S256>/Comparison1' incorporates:
     *  Constant: '<S283>/Constant'
     *  SignalConversion generated from: '<S12>/VeESSR_e_EngStartStopSt'
     */
    rtb_TmpSignalConversionAtROLRoutine_MtrB = (((uint32)
        RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
        CeESSR_e_EngRunning);

    /* RelationalOperator: '<S256>/Comparison6' incorporates:
     *  Constant: '<S284>/Constant'
     *  Inport: '<Root>/VeTRNR_e_C2Stat'
     */
    rtb_Logical4_ov = (((uint32)tmpRead_7) == CeHCCR_e_ClLocked);

    /* Logic: '<S256>/Logical4' */
    VeRTMC_b_DisableMtrB = (rtb_TmpSignalConversionAtROLRoutine_MtrB &&
                            rtb_Logical4_ov);

    /* Logic: '<S257>/Logical5' incorporates:
     *  Constant: '<S257>/Constant Value1'
     *  Constant: '<S257>/Constant Value3'
     *  RelationalOperator: '<S257>/Comparison1'
     *  RelationalOperator: '<S257>/Comparison8'
     */
    rtb_Comparison4_jkp = ((rtb_TmpSignalConversionAtVeMTQR_M_MtrB_j <= 0.5F) &&
                           (rtb_TmpSignalConversionAtVeMTQR_M_MtrB_e >= -0.5F));

    /* Logic: '<S257>/Logical9' incorporates:
     *  Constant: '<S285>/Calib'
     *  Constant: '<S286>/Calib'
     *  RelationalOperator: '<S257>/Comparison10'
     *  RelationalOperator: '<S257>/Comparison5'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_BattCh =
        ((RTMR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed <=
          KeRTMR_n_MaxEngSpeed_ROL) &&
         (RTMR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed >=
          KeRTMR_n_MinEngSpeed_ROL));

    /* Outputs for Atomic SubSystem: '<S257>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S289>/EdgeRising' */
    /* Logic: '<S290>/AND' incorporates:
     *  Logic: '<S290>/OR1'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_Logical1_dk = (rtb_TmpSignalConversionAtVeRTMR_b_BattCh &&
                       (!RTMR_ac_DW.UnitDelay_DSTATE_j));

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeRTMR_b_BattCh;

    /* End of Outputs for SubSystem: '<S289>/EdgeRising' */

    /* Switch: '<S289>/Switch1' incorporates:
     *  Constant: '<S287>/Calib'
     *  Constant: '<S288>/Calib'
     *  Constant: '<S289>/Constant Value1'
     *  Logic: '<S289>/OR'
     *  Logic: '<S289>/OR1'
     *  MinMax: '<S289>/Minimum'
     *  Sum: '<S289>/Summation'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeRTMR_b_BattCh) || rtb_Logical1_dk)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }
    else
    {
        RTMR_ac_DW.UnitDelay_DSTATE_g = fminf(KeRTMR_t_TiDebounceSetROL,
            KeRTMR_t_MedTED + RTMR_ac_DW.UnitDelay_DSTATE_g);
    }

    /* End of Switch: '<S289>/Switch1' */

    /* Logic: '<S289>/AND' incorporates:
     *  Constant: '<S288>/Calib'
     *  RelationalOperator: '<S289>/Greater  Than'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_BattCh =
        (rtb_TmpSignalConversionAtVeRTMR_b_BattCh &&
         (RTMR_ac_DW.UnitDelay_DSTATE_g >= KeRTMR_t_TiDebounceSetROL));

    /* End of Outputs for SubSystem: '<S257>/Turn On Delay Time' */

    /* Logic: '<S257>/Logical3' */
    VeRTMC_b_EnblROLTest = (rtb_Comparison4_jkp &&
                            rtb_TmpSignalConversionAtVeRTMR_b_BattCh);

    /* RelationalOperator: '<S258>/Comparison4' incorporates:
     *  Constant: '<S292>/Constant'
     *  SignalConversion generated from: '<S12>/VeINVR_e_MtrB_InvrtrSt'
     */
    rtb_Logical4_k3 = (((uint32)rtb_TmpSignalConversionAtVeINVR_e_MtrB_I) ==
                       CeINVR_e_NormalPowerStageOffHvRqd);

    /* Outputs for Atomic SubSystem: '<S258>/EdgeRising1' */
    /* Logic: '<S291>/OR1' incorporates:
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_OR1_nz = !RTMR_ac_DW.UnitDelay_DSTATE_mj;

    /* Update for UnitDelay: '<S291>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_mj = rtb_TmpSignalConversionAtVeRTMR_b_EnaRes;

    /* Outputs for IfAction SubSystem: '<S228>/If Action Subsystem' incorporates:
     *  ActionPort: '<S269>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S228>/Turn On Delay Time1' */
    /* If: '<S228>/If' incorporates:
     *  Logic: '<S269>/Logical1'
     *  Logic: '<S282>/OR1'
     *  Logic: '<S291>/AND'
     */
    rtb_Logical1_dk = !rtb_TmpSignalConversionAtVeRTMR_b_EnaRes;

    /* End of Outputs for SubSystem: '<S228>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S228>/If Action Subsystem' */

    /* Outputs for Atomic SubSystem: '<S258>/Signal Latch On With Reset1' */
    /* Logic: '<S293>/OR1' incorporates:
     *  Logic: '<S291>/AND'
     *  Logic: '<S293>/NOT'
     *  Logic: '<S293>/OR'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    RTMR_ac_DW.UnitDelay_DSTATE_fr = (rtb_Logical4_k3 || ((rtb_Logical1_dk ||
        (!rtb_OR1_nz)) && (RTMR_ac_DW.UnitDelay_DSTATE_fr)));

    /* End of Outputs for SubSystem: '<S258>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S258>/EdgeRising1' */

    /* Logic: '<S258>/Logical9' incorporates:
     *  Logic: '<S258>/Logical1'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    VeRTMC_b_InvrtrChngSts = ((RTMR_ac_DW.UnitDelay_DSTATE_fr) &&
        (!rtb_Logical4_k3));

    /* Logic: '<S259>/Logical7' incorporates:
     *  Constant: '<S294>/Calib'
     *  Gain: '<S259>/Gain'
     *  RelationalOperator: '<S259>/Comparison2'
     *  RelationalOperator: '<S259>/Comparison9'
     */
    VeRTMC_b_MtrBHighTrq = ((rtb_TmpSignalConversionAtVeMTQR_M_MtrB_j >=
        KeRTMR_M_MtrBTrqThrToOpenK0) &&
                            (rtb_TmpSignalConversionAtVeMTQR_M_MtrB_e <=
        (-KeRTMR_M_MtrBTrqThrToOpenK0)));

    /* Outputs for Atomic SubSystem: '<S228>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S281>/EdgeFalling1' */
    /* UnitDelay: '<S385>/Unit Delay' incorporates:
     *  UnitDelay: '<S384>/Unit Delay'
     */
    rtb_Logical4_k3 = RTMR_ac_DW.UnitDelay_DSTATE_fh;

    /* Update for UnitDelay: '<S384>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_fh = VeRTMC_b_CheckPreConditions;

    /* Switch: '<S281>/Switch' incorporates:
     *  Constant: '<S278>/Calib'
     *  Constant: '<S279>/Calib'
     *  Constant: '<S281>/Constant Value1'
     *  Logic: '<S384>/AND'
     *  Logic: '<S384>/OR1'
     *  MinMax: '<S281>/Minimum'
     *  Sum: '<S281>/Summation'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    if ((!VeRTMC_b_CheckPreConditions) && rtb_Logical4_k3)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_b = KeRTMR_t_ROLPreCondTrnOffDly;
    }
    else
    {
        RTMR_ac_DW.UnitDelay_DSTATE_b = fmaxf(RTMR_ac_DW.UnitDelay_DSTATE_b -
            KeRTMR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S281>/Switch' */
    /* End of Outputs for SubSystem: '<S281>/EdgeFalling1' */

    /* Logic: '<S281>/AND' incorporates:
     *  Constant: '<S281>/Constant Value2'
     *  RelationalOperator: '<S281>/Greater  Than'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    rtb_Logical4_k3 = ((VeRTMC_b_CheckPreConditions) ||
                       (RTMR_ac_DW.UnitDelay_DSTATE_b > 0.0F));

    /* End of Outputs for SubSystem: '<S228>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S228>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S282>/EdgeRising' */
    /* Logic: '<S385>/AND' incorporates:
     *  Logic: '<S385>/OR1'
     *  UnitDelay: '<S385>/Unit Delay'
     */
    rtb_OR1_nz = (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes &&
                  (!RTMR_ac_DW.UnitDelay_DSTATE_b2));

    /* Update for UnitDelay: '<S385>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_b2 = rtb_TmpSignalConversionAtVeRTMR_b_EnaRes;

    /* End of Outputs for SubSystem: '<S282>/EdgeRising' */

    /* Switch: '<S282>/Switch1' incorporates:
     *  Constant: '<S277>/Calib'
     *  Constant: '<S278>/Calib'
     *  Constant: '<S282>/Constant Value1'
     *  Logic: '<S282>/OR'
     *  MinMax: '<S282>/Minimum'
     *  Sum: '<S282>/Summation'
     *  UnitDelay: '<S282>/Unit Delay'
     */
    if (rtb_Logical1_dk || rtb_OR1_nz)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        RTMR_ac_DW.UnitDelay_DSTATE_k = fminf(KeRTMR_t_MaxWaitTiAftROLStrt,
            KeRTMR_t_MedTED + RTMR_ac_DW.UnitDelay_DSTATE_k);
    }

    /* End of Switch: '<S282>/Switch1' */

    /* Logic: '<S282>/AND' incorporates:
     *  Constant: '<S277>/Calib'
     *  RelationalOperator: '<S282>/Greater  Than'
     *  UnitDelay: '<S282>/Unit Delay'
     */
    VeRTMC_b_ROLTimeOutFlg = (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes &&
        (RTMR_ac_DW.UnitDelay_DSTATE_k >= KeRTMR_t_MaxWaitTiAftROLStrt));

    /* End of Outputs for SubSystem: '<S228>/Turn On Delay Time1' */

    /* Chart: '<S228>/ROL_Procedure' */
    /* Gateway: RTMR_MedTED/ROL/Variant_Subsystem/ROL_PxPy/ROL_Procedure */
    /* During: RTMR_MedTED/ROL/Variant_Subsystem/ROL_PxPy/ROL_Procedure */
    if (((uint32)RTMR_ac_DW.is_active_c13_RTMR_ac) == 0U)
    {
        /* Entry: RTMR_MedTED/ROL/Variant_Subsystem/ROL_PxPy/ROL_Procedure */
        RTMR_ac_DW.is_active_c13_RTMR_ac = 1U;

        /* Entry Internal: RTMR_MedTED/ROL/Variant_Subsystem/ROL_PxPy/ROL_Procedure */
        /* Transition: '<S280>:67' */
        RTMR_ac_DW.is_c13_RTMR_ac = RTMR_ac_IN_IDLE_c;

        /* RelationalOperator: '<S228>/Comparison1' */
        /* Entry 'IDLE': '<S280>:55' */
        VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_Inactive;
        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = false;
        RTMR_ac_B.VeRTMC_b_DsblMtrB = false;
        VeRTMC_b_HybTransCmndStEnbl_ROL = false;
        VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_N;
        VeRTMC_b_ForceAutoStopStartEnbl_ROL = false;
        VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_NoOvrrd;
        RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID = 0U;
    }
    else
    {
        switch (RTMR_ac_DW.is_c13_RTMR_ac)
        {
          case RTMR_ac_IN_ABORTED:
            /* RelationalOperator: '<S228>/Comparison1' */
            VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_Aborted;
            RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrB = false;
            VeRTMC_b_HybTransCmndStEnbl_ROL = false;
            VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_N;
            VeRTMC_b_ForceAutoStopStartEnbl_ROL = false;
            VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_NoOvrrd;

            /* During 'ABORTED': '<S280>:72' */
            break;

          case RTMR_ac_IN_COMPLETED:
            /* RelationalOperator: '<S228>/Comparison1' */
            VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_Complete;
            RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrB = false;
            VeRTMC_b_HybTransCmndStEnbl_ROL = false;
            VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_N;
            VeRTMC_b_ForceAutoStopStartEnbl_ROL = false;
            VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_NoOvrrd;

            /* During 'COMPLETED': '<S280>:46' */
            break;

          case RTMR_ac_IN_IDLE_c:
            /* RelationalOperator: '<S228>/Comparison1' */
            VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_Inactive;
            RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = false;
            RTMR_ac_B.VeRTMC_b_DsblMtrB = false;
            VeRTMC_b_HybTransCmndStEnbl_ROL = false;
            VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_N;
            VeRTMC_b_ForceAutoStopStartEnbl_ROL = false;
            VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_NoOvrrd;

            /* During 'IDLE': '<S280>:55' */
            if (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes)
            {
                /* Transition: '<S280>:68' */
                RTMR_ac_DW.is_c13_RTMR_ac = RTMR_ac_IN_ROLRequested;

                /* RelationalOperator: '<S228>/Comparison1' */
                /* Entry 'ROLRequested': '<S280>:70' */
                VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_Requested;
            }
            break;

          case RTMR_ac_IN_ROLRequested:
            /* RelationalOperator: '<S228>/Comparison1' */
            VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_Requested;

            /* During 'ROLRequested': '<S280>:70' */
            if (rtb_Logical4_k3)
            {
                /* Transition: '<S280>:71' */
                RTMR_ac_DW.is_c13_RTMR_ac = RTMR_ac_IN_RUNNING;

                /* Entry 'RUNNING': '<S280>:4' */
                /* Entry Internal 'RUNNING': '<S280>:4' */
                /* Transition: '<S280>:66' */
                RTMR_ac_DW.is_RUNNING = RTMR_ac_IN_ReqStartEngine;

                /* RelationalOperator: '<S228>/Comparison1' */
                /* Entry 'ReqStartEngine': '<S280>:43' */
                VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_StartEng;
                VeRTMC_b_HybTransCmndStEnbl_ROL = true;
                VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_M2;
                VeRTMC_b_ForceAutoStopStartEnbl_ROL = true;
                VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_OvrrdEngOn;
            }
            else
            {
                if (VeRTMC_b_ROLTimeOutFlg)
                {
                    /* Transition: '<S280>:85' */
                    RTMR_ac_DW.is_c13_RTMR_ac = RTMR_ac_IN_ABORTED;

                    /* RelationalOperator: '<S228>/Comparison1' */
                    /* Entry 'ABORTED': '<S280>:72' */
                    VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_Aborted;
                    RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = false;
                    RTMR_ac_B.VeRTMC_b_DsblMtrB = false;
                    VeRTMC_b_HybTransCmndStEnbl_ROL = false;
                    VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_N;
                    VeRTMC_b_ForceAutoStopStartEnbl_ROL = false;
                    VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_NoOvrrd;
                    RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID =
                        RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID;
                }
            }
            break;

          default:
            /* During 'RUNNING': '<S280>:4' */
            if ((VeRTMC_b_ROLTimeOutFlg) || (!rtb_Logical4_k3))
            {
                /* Transition: '<S280>:75' */
                /* Exit Internal 'RUNNING': '<S280>:4' */
                RTMR_ac_DW.is_RUNNING = RTMR_ac_IN_NO_ACTIVE_CHILD;
                RTMR_ac_DW.is_c13_RTMR_ac = RTMR_ac_IN_ABORTED;

                /* RelationalOperator: '<S228>/Comparison1' */
                /* Entry 'ABORTED': '<S280>:72' */
                VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_Aborted;
                RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = false;
                RTMR_ac_B.VeRTMC_b_DsblMtrB = false;
                VeRTMC_b_HybTransCmndStEnbl_ROL = false;
                VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_N;
                VeRTMC_b_ForceAutoStopStartEnbl_ROL = false;
                VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_NoOvrrd;
                RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID =
                    RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID;
            }
            else
            {
                switch (RTMR_ac_DW.is_RUNNING)
                {
                  case RTMR_ac_IN_ROLCompletedbyMCP:
                    /* RelationalOperator: '<S228>/Comparison1' */
                    VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_CompletebyMCP;
                    RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = false;
                    RTMR_ac_B.VeRTMC_b_DsblMtrB = false;

                    /* During 'ROLCompletedbyMCP': '<S280>:73' */
                    if (VeRTMC_b_MtrBHighTrq)
                    {
                        /* Transition: '<S280>:74' */
                        RTMR_ac_DW.is_RUNNING = RTMR_ac_IN_NO_ACTIVE_CHILD;
                        RTMR_ac_DW.is_c13_RTMR_ac = RTMR_ac_IN_COMPLETED;

                        /* RelationalOperator: '<S228>/Comparison1' */
                        /* Entry 'COMPLETED': '<S280>:46' */
                        VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_Complete;
                        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = false;
                        RTMR_ac_B.VeRTMC_b_DsblMtrB = false;
                        VeRTMC_b_HybTransCmndStEnbl_ROL = false;
                        VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_N;
                        VeRTMC_b_ForceAutoStopStartEnbl_ROL = false;
                        VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_NoOvrrd;
                    }
                    break;

                  case RTMR_ac_IN_ReqDisableMtrB:
                    /* RelationalOperator: '<S228>/Comparison1' */
                    VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_DsblMtrB;
                    RTMR_ac_B.VeRTMC_b_DsblMtrB = true;

                    /* During 'ReqDisableMtrB': '<S280>:9' */
                    if (VeRTMC_b_EnblROLTest)
                    {
                        /* Transition: '<S280>:47' */
                        RTMR_ac_DW.is_RUNNING = RTMR_ac_IN_ReqROLTest;

                        /* RelationalOperator: '<S228>/Comparison1' */
                        /* Entry 'ReqROLTest': '<S280>:45' */
                        VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_ROLInProg;
                        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = true;
                    }
                    break;

                  case RTMR_ac_IN_ReqROLTest:
                    /* RelationalOperator: '<S228>/Comparison1' */
                    VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_ROLInProg;
                    RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = true;

                    /* During 'ReqROLTest': '<S280>:45' */
                    if (VeRTMC_b_InvrtrChngSts)
                    {
                        /* Transition: '<S280>:48' */
                        RTMR_ac_DW.is_RUNNING = RTMR_ac_IN_ROLCompletedbyMCP;

                        /* RelationalOperator: '<S228>/Comparison1' */
                        /* Entry 'ROLCompletedbyMCP': '<S280>:73' */
                        VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_CompletebyMCP;
                        RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn = false;
                        RTMR_ac_B.VeRTMC_b_DsblMtrB = false;
                    }
                    break;

                  default:
                    /* RelationalOperator: '<S228>/Comparison1' */
                    VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_StartEng;
                    VeRTMC_b_HybTransCmndStEnbl_ROL = true;
                    VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_M2;
                    VeRTMC_b_ForceAutoStopStartEnbl_ROL = true;
                    VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_OvrrdEngOn;

                    /* During 'ReqStartEngine': '<S280>:43' */
                    if (VeRTMC_b_DisableMtrB)
                    {
                        /* Transition: '<S280>:44' */
                        RTMR_ac_DW.is_RUNNING = RTMR_ac_IN_ReqDisableMtrB;

                        /* RelationalOperator: '<S228>/Comparison1' */
                        /* Entry 'ReqDisableMtrB': '<S280>:9' */
                        VeRTMR_e_ROLStatus = CeRTMR_e_ROLStatus_DsblMtrB;
                        RTMR_ac_B.VeRTMC_b_DsblMtrB = true;
                    }
                    break;
                }
            }
            break;
        }
    }

    /* End of Chart: '<S228>/ROL_Procedure' */

    /* If: '<S228>/If' incorporates:
     *  Constant: '<S261>/Constant'
     *  Constant: '<S262>/Constant'
     *  Constant: '<S263>/Constant'
     *  Constant: '<S264>/Constant'
     *  Constant: '<S265>/Constant'
     *  Constant: '<S266>/Constant'
     *  Constant: '<S267>/Constant'
     *  RelationalOperator: '<S228>/Comparison1'
     *  RelationalOperator: '<S228>/Comparison2'
     *  RelationalOperator: '<S228>/Comparison3'
     *  RelationalOperator: '<S228>/Comparison4'
     *  RelationalOperator: '<S228>/Comparison5'
     *  RelationalOperator: '<S228>/Comparison6'
     *  RelationalOperator: '<S228>/Comparison7'
     */
    if (((uint32)VeRTMR_e_ROLStatus) == CeRTMR_e_ROLStatus_Inactive)
    {
        /* Outputs for IfAction SubSystem: '<S228>/If Action Subsystem' incorporates:
         *  ActionPort: '<S269>/Action Port'
         */
        /* Switch: '<S310>/Switch6' incorporates:
         *  DataStoreWrite: '<S269>/Data Store Write'
         */
        RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = rtb_Logical1_dk ?
            ((uint8)1) : ((uint8)0);

        /* Switch: '<S269>/Switch' */
        if (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes)
        {
            /* Merge: '<S228>/Merge' incorporates:
             *  Constant: '<S312>/Constant'
             */
            RTMR_ac_B.Merge = CeRTMR_e_InProgress;
        }
        else
        {
            /* Merge: '<S228>/Merge' incorporates:
             *  Constant: '<S311>/Constant'
             */
            RTMR_ac_B.Merge = CeRTMR_e_ROLNotActive;
        }

        /* End of Switch: '<S269>/Switch' */
        /* End of Outputs for SubSystem: '<S228>/If Action Subsystem' */
    }
    else if (((uint32)VeRTMR_e_ROLStatus) == CeRTMR_e_ROLStatus_Requested)
    {
        /* Outputs for IfAction SubSystem: '<S228>/If Action Subsystem6' incorporates:
         *  ActionPort: '<S275>/Action Port'
         */
        /* Switch: '<S372>/Switch1' incorporates:
         *  Logic: '<S275>/Logical2'
         */
        if (!VeRTMC_b_CheckPreConditions)
        {
            /* Switch: '<S372>/Switch6' incorporates:
             *  DataStoreWrite: '<S275>/Data Store Write'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 2U;
        }
        else
        {
            /* Switch: '<S372>/Switch6' incorporates:
             *  DataStoreWrite: '<S275>/Data Store Write'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 0U;
        }

        /* End of Switch: '<S372>/Switch1' */

        /* Merge: '<S228>/Merge' incorporates:
         *  Constant: '<S373>/Constant'
         *  SignalConversion generated from: '<S275>/ROLRuotineResult'
         */
        RTMR_ac_B.Merge = CeRTMR_e_InProgress;

        /* End of Outputs for SubSystem: '<S228>/If Action Subsystem6' */
    }
    else if (((uint32)VeRTMR_e_ROLStatus) == CeRTMR_e_ROLStatus_StartEng)
    {
        /* Outputs for IfAction SubSystem: '<S228>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S274>/Action Port'
         */
        /* Switch: '<S362>/Switch3' incorporates:
         *  Logic: '<S274>/Logical1'
         *  Logic: '<S274>/Logical2'
         *  Switch: '<S362>/Switch2'
         */
        if (!rtb_Logical4_ov)
        {
            /* Switch: '<S362>/Switch2' incorporates:
             *  Logic: '<S274>/Logical1'
             */
            if (!rtb_TmpSignalConversionAtROLRoutine_MtrB)
            {
                rtb_TmpSignalConversionAtVeRTMR_y_Reslvr = 4U;
            }
            else
            {
                rtb_TmpSignalConversionAtVeRTMR_y_Reslvr = 0U;
            }

            /* Switch: '<S362>/Switch6' incorporates:
             *  DataStoreWrite: '<S274>/Data Store Write'
             *  S-Function (sfix_bitop): '<S368>/FixPt Bitwise Operator1'
             *  Switch: '<S362>/Switch5'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = (uint8)
                (rtb_TmpSignalConversionAtVeRTMR_y_Reslvr | ((uint8)8));
        }
        else if (!rtb_TmpSignalConversionAtROLRoutine_MtrB)
        {
            /* Switch: '<S362>/Switch2' incorporates:
             *  DataStoreWrite: '<S274>/Data Store Write'
             *  Switch: '<S362>/Switch5'
             *  Switch: '<S362>/Switch6'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 4U;
        }
        else
        {
            /* Switch: '<S362>/Switch6' incorporates:
             *  DataStoreWrite: '<S274>/Data Store Write'
             *  Switch: '<S362>/Switch2'
             *  Switch: '<S362>/Switch5'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 0U;
        }

        /* End of Switch: '<S362>/Switch3' */

        /* Merge: '<S228>/Merge' incorporates:
         *  Constant: '<S363>/Constant'
         *  SignalConversion generated from: '<S274>/ROLRuotineResult'
         */
        RTMR_ac_B.Merge = CeRTMR_e_InProgress;

        /* End of Outputs for SubSystem: '<S228>/If Action Subsystem5' */
    }
    else if (((uint32)VeRTMR_e_ROLStatus) == CeRTMR_e_ROLStatus_DsblMtrB)
    {
        /* Outputs for IfAction SubSystem: '<S228>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S270>/Action Port'
         */
        /* Switch: '<S321>/Switch12' incorporates:
         *  Logic: '<S270>/Logical1'
         *  Logic: '<S270>/Logical2'
         *  Switch: '<S321>/Switch4'
         */
        if (!rtb_TmpSignalConversionAtVeRTMR_b_BattCh)
        {
            /* Switch: '<S321>/Switch4' incorporates:
             *  Logic: '<S270>/Logical1'
             */
            if (!rtb_Comparison4_jkp)
            {
                rtb_TmpSignalConversionAtVeRTMR_y_Reslvr = 16U;
            }
            else
            {
                rtb_TmpSignalConversionAtVeRTMR_y_Reslvr = 0U;
            }

            /* Switch: '<S321>/Switch6' incorporates:
             *  DataStoreWrite: '<S270>/Data Store Write'
             *  S-Function (sfix_bitop): '<S325>/FixPt Bitwise Operator1'
             *  Switch: '<S321>/Switch5'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = (uint8)
                (rtb_TmpSignalConversionAtVeRTMR_y_Reslvr | ((uint8)32));
        }
        else if (!rtb_Comparison4_jkp)
        {
            /* Switch: '<S321>/Switch4' incorporates:
             *  DataStoreWrite: '<S270>/Data Store Write'
             *  Switch: '<S321>/Switch5'
             *  Switch: '<S321>/Switch6'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 16U;
        }
        else
        {
            /* Switch: '<S321>/Switch6' incorporates:
             *  DataStoreWrite: '<S270>/Data Store Write'
             *  Switch: '<S321>/Switch4'
             *  Switch: '<S321>/Switch5'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 0U;
        }

        /* End of Switch: '<S321>/Switch12' */

        /* Merge: '<S228>/Merge' incorporates:
         *  Constant: '<S322>/Constant'
         *  SignalConversion generated from: '<S270>/ROLRuotineResult'
         */
        RTMR_ac_B.Merge = CeRTMR_e_InProgress;

        /* End of Outputs for SubSystem: '<S228>/If Action Subsystem1' */
    }
    else if (((uint32)VeRTMR_e_ROLStatus) == CeRTMR_e_ROLStatus_ROLInProg)
    {
        /* Outputs for IfAction SubSystem: '<S228>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S271>/Action Port'
         */
        /* Switch: '<S331>/Switch5' incorporates:
         *  Logic: '<S271>/Logical1'
         */
        if (!VeRTMC_b_InvrtrChngSts)
        {
            /* Switch: '<S331>/Switch6' incorporates:
             *  DataStoreWrite: '<S271>/Data Store Write2'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 64U;
        }
        else
        {
            /* Switch: '<S331>/Switch6' incorporates:
             *  DataStoreWrite: '<S271>/Data Store Write2'
             */
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 0U;
        }

        /* End of Switch: '<S331>/Switch5' */

        /* Merge: '<S228>/Merge' incorporates:
         *  Constant: '<S332>/Constant'
         *  SignalConversion generated from: '<S271>/ROLRuotineResult'
         */
        RTMR_ac_B.Merge = CeRTMR_e_InProgress;

        /* End of Outputs for SubSystem: '<S228>/If Action Subsystem2' */
    }
    else if (((uint32)VeRTMR_e_ROLStatus) == CeRTMR_e_ROLStatus_CompletebyMCP)
    {
        /* Outputs for IfAction SubSystem: '<S228>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S273>/Action Port'
         */
        /* Switch: '<S352>/Switch6' incorporates:
         *  DataStoreWrite: '<S273>/Data Store Write'
         *  Logic: '<S273>/Logical1'
         */
        if (!VeRTMC_b_MtrBHighTrq)
        {
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 128U;
        }
        else
        {
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 0U;
        }

        /* End of Switch: '<S352>/Switch6' */

        /* Merge: '<S228>/Merge' incorporates:
         *  Constant: '<S353>/Constant'
         *  SignalConversion generated from: '<S273>/ROLRuotineResult'
         */
        RTMR_ac_B.Merge = CeRTMR_e_InProgress;

        /* End of Outputs for SubSystem: '<S228>/If Action Subsystem4' */
    }
    else if (((uint32)VeRTMR_e_ROLStatus) == CeRTMR_e_ROLStatus_Aborted)
    {
        /* Outputs for IfAction SubSystem: '<S228>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S272>/Action Port'
         */
        /* Switch: '<S341>/Switch1' incorporates:
         *  DataStoreRead: '<S272>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S272>/Bitwise Operator7'
         */
        if ((((sint32)RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID) & 2) >=
                1)
        {
            /* Switch: '<S341>/Switch1' incorporates:
             *  S-Function (sfix_bitop): '<S272>/Bitwise Operator6'
             *  S-Function (sfix_bitop): '<S345>/FixPt Bitwise Operator1'
             *  Switch: '<S341>/Switch'
             */
            rtb_TmpSignalConversionAtVeRTMR_y_Reslvr = (uint8)((((((sint32)
                RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID) & 1) >= 1) ? 1
                : 0) | ((uint8)2));
        }
        else
        {
            /* Switch: '<S341>/Switch1' incorporates:
             *  S-Function (sfix_bitop): '<S272>/Bitwise Operator6'
             *  Switch: '<S341>/Switch'
             */
            rtb_TmpSignalConversionAtVeRTMR_y_Reslvr = (uint8)(((((sint32)
                RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID) & 1) >= 1) ? 1
                : 0);
        }

        /* End of Switch: '<S341>/Switch1' */

        /* Switch: '<S341>/Switch2' incorporates:
         *  DataStoreRead: '<S272>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S272>/Bitwise Operator8'
         */
        if ((((sint32)RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID) & 4) >=
                1)
        {
            /* Switch: '<S341>/Switch2' incorporates:
             *  S-Function (sfix_bitop): '<S347>/FixPt Bitwise Operator1'
             */
            rtb_TmpSignalConversionAtVeRTMR_y_Reslvr |= (uint8)4;
        }

        /* End of Switch: '<S341>/Switch2' */

        /* Switch: '<S341>/Switch3' incorporates:
         *  DataStoreRead: '<S272>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S272>/Bitwise Operator9'
         */
        if ((((sint32)RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID) & 8) >=
                1)
        {
            /* Switch: '<S341>/Switch3' incorporates:
             *  S-Function (sfix_bitop): '<S348>/FixPt Bitwise Operator1'
             */
            rtb_TmpSignalConversionAtVeRTMR_y_Reslvr |= (uint8)8;
        }

        /* End of Switch: '<S341>/Switch3' */

        /* Switch: '<S341>/Switch4' incorporates:
         *  DataStoreRead: '<S272>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S272>/Bitwise Operator10'
         */
        if ((((sint32)RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID) & 16) >=
            1)
        {
            /* Switch: '<S341>/Switch4' incorporates:
             *  S-Function (sfix_bitop): '<S349>/FixPt Bitwise Operator1'
             */
            rtb_TmpSignalConversionAtVeRTMR_y_Reslvr |= (uint8)16;
        }

        /* End of Switch: '<S341>/Switch4' */

        /* Switch: '<S341>/Switch12' incorporates:
         *  DataStoreRead: '<S272>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S272>/Bitwise Operator11'
         */
        if ((((sint32)RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID) & 32) >=
            1)
        {
            /* Switch: '<S341>/Switch12' incorporates:
             *  S-Function (sfix_bitop): '<S346>/FixPt Bitwise Operator1'
             */
            rtb_TmpSignalConversionAtVeRTMR_y_Reslvr |= (uint8)32;
        }

        /* End of Switch: '<S341>/Switch12' */

        /* Switch: '<S341>/Switch6' incorporates:
         *  Constant: '<S272>/Constant Value'
         *  DataStoreRead: '<S272>/Data Store Read2'
         *  DataStoreWrite: '<S272>/Data Store Write3'
         *  Logic: '<S272>/Logical1'
         *  Logic: '<S272>/Logical4'
         *  RelationalOperator: '<S272>/Comparison'
         *  S-Function (sfix_bitop): '<S272>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S351>/FixPt Bitwise Operator1'
         *  Switch: '<S341>/Switch5'
         */
        if ((VeRTMC_b_ROLTimeOutFlg) && ((((sint32)
                RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID) & 63) <= 0))
        {
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID = (uint8)(((uint16)
                rtb_TmpSignalConversionAtVeRTMR_y_Reslvr) | ((uint16)128));
        }
        else
        {
            RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID =
                rtb_TmpSignalConversionAtVeRTMR_y_Reslvr;
        }

        /* End of Switch: '<S341>/Switch6' */

        /* Switch: '<S272>/Switch' */
        if (RTMR_ac_B.AND_m)
        {
            /* Merge: '<S228>/Merge' incorporates:
             *  Constant: '<S342>/Constant'
             */
            RTMR_ac_B.Merge = CeRTMR_e_Failed;
        }
        else
        {
            /* Merge: '<S228>/Merge' incorporates:
             *  Constant: '<S343>/Constant'
             */
            RTMR_ac_B.Merge = CeRTMR_e_Passed;
        }

        /* End of Switch: '<S272>/Switch' */
        /* End of Outputs for SubSystem: '<S228>/If Action Subsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S228>/If Action Subsystem9' incorporates:
         *  ActionPort: '<S276>/Action Port'
         */
        /* DataStoreWrite: '<S276>/Data Store Write1' incorporates:
         *  Constant: '<S276>/Constant Value1'
         */
        RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID = 0U;

        /* DataStoreWrite: '<S276>/Data Store Write' incorporates:
         *  Constant: '<S276>/Constant Value4'
         */
        RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID = 0U;

        /* Switch: '<S276>/Switch' */
        if (RTMR_ac_B.AND_m)
        {
            /* Merge: '<S228>/Merge' incorporates:
             *  Constant: '<S382>/Constant'
             */
            RTMR_ac_B.Merge = CeRTMR_e_Failed;
        }
        else
        {
            /* Merge: '<S228>/Merge' incorporates:
             *  Constant: '<S383>/Constant'
             */
            RTMR_ac_B.Merge = CeRTMR_e_Passed;
        }

        /* End of Switch: '<S276>/Switch' */
        /* End of Outputs for SubSystem: '<S228>/If Action Subsystem9' */
    }

    /* End of Outputs for SubSystem: '<S226>/ROL_PxPy' */
#endif

    /* End of Outputs for SubSystem: '<S38>/Variant_Subsystem' */
#endif

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TCM_ClutchLearn'
     */
    /* If: '<S735>/If' incorporates:
     *  Constant: '<S771>/Constant'
     *  Constant: '<S772>/Constant'
     *  Constant: '<S773>/Constant'
     *  Constant: '<S774>/Constant'
     *  Constant: '<S785>/Calib'
     *  Constant: '<S791>/Calib'
     *  Constant: '<S792>/Calib'
     *  Constant: '<S793>/Calib'
     *  Constant: '<S794>/Calib'
     *  Constant: '<S795>/Calib'
     *  Constant: '<S796>/Calib'
     *  Constant: '<S797>/Calib'
     *  Constant: '<S798>/Calib'
     *  Constant: '<S807>/Constant_Value3'
     *  If: '<S732>/If'
     *  If: '<S738>/If'
     *  If: '<S739>/If'
     *  Logic: '<S732>/Logical1'
     *  Logic: '<S732>/Logical2'
     *  Logic: '<S736>/Logical'
     *  Logic: '<S736>/Logical1'
     *  Logic: '<S736>/Logical2'
     *  Logic: '<S736>/Logical3'
     *  Logic: '<S736>/Logical4'
     *  Logic: '<S736>/Logical5'
     *  Logic: '<S736>/Logical6'
     *  Logic: '<S736>/Logical7'
     *  Logic: '<S738>/Logical6'
     *  Logic: '<S738>/Logical7'
     *  RelationalOperator: '<S736>/Comparison1'
     *  RelationalOperator: '<S736>/Comparison2'
     *  RelationalOperator: '<S736>/Comparison3'
     *  RelationalOperator: '<S736>/Comparison4'
     *  RelationalOperator: '<S736>/Comparison5'
     *  RelationalOperator: '<S736>/Comparison6'
     *  RelationalOperator: '<S738>/Comparison1'
     *  RelationalOperator: '<S738>/Comparison2'
     *  RelationalOperator: '<S738>/Comparison3'
     *  RelationalOperator: '<S738>/Comparison4'
     *  RelationalOperator: '<S738>/Comparison5'
     *  RelationalOperator: '<S738>/Comparison7'
     *  RelationalOperator: '<S807>/Greater_Than2'
     *  SignalConversion generated from: '<S40>/Variant Source1'
     *  SignalConversion generated from: '<S40>/Variant Source2'
     *  SignalConversion generated from: '<S40>/Variant Source3'
     *  SignalConversion generated from: '<S40>/Variant Source4'
     *  SignalConversion generated from: '<S40>/Variant Source5'
     *  SignalConversion generated from: '<S40>/Variant Source6'
     *  SignalConversion generated from: '<S40>/Variant Source7'
     *  Switch: '<S736>/Switch'
     *  Switch: '<S736>/Switch1'
     *  Switch: '<S736>/Switch2'
     *  Switch: '<S736>/Switch3'
     *  Switch: '<S736>/Switch4'
     *  Switch: '<S736>/Switch5'
     *  Switch: '<S739>/Switch'
     *  Switch: '<S739>/Switch1'
     *  Switch: '<S739>/Switch2'
     *  Switch: '<S739>/Switch3'
     *  Switch: '<S776>/Switch5'
     *  Switch: '<S807>/Switch1'
     *  UnitDelay: '<S807>/Unit Delay'
     * */
#if Rte_SysCon_Variant_RTMR_6

    /* Outputs for Atomic SubSystem: '<S740>/Test_Enabled' */
    /* Outputs for Atomic SubSystem: '<S732>/Turn_On_Delay_Sample1' */
    /* Outputs for Atomic SubSystem: '<S741>/Test_Enabled' */
    /* Outputs for Atomic SubSystem: '<S732>/Turn_On_Delay_Sample' */
    /* Outputs for Atomic SubSystem: '<S732>/EdgeRising' */
    if (KeRTMR_b_OvrdEnablEOLClutchLrn)
    {
        rtb_TmpSignalConversionAtVeRTMR_b_EOLClu = KeRTMR_b_EnablEOLClutchLrn;
    }

    if (rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
    {
        /* Outputs for IfAction SubSystem: '<S739>/EOL_ClutchLrn' incorporates:
         *  ActionPort: '<S788>/Action_Port'
         */
        /* RelationalOperator: '<S890>/Comparison4' incorporates:
         *  Constant: '<S801>/Constant'
         *  DataStoreWrite: '<S788>/Data Store Write'
         */
        VeRTMR_e_ClutchLrnType_DS = CeRTMR_e_Clutch_EOL;

        /* Merge: '<S739>/Merge1' incorporates:
         *  Constant: '<S788>/TRUE_Constant'
         *  SignalConversion generated from: '<S788>/OutputParameter'
         */
        RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl = true;

        /* End of Outputs for SubSystem: '<S739>/EOL_ClutchLrn' */
    }
    else
    {
        if (KeRTMR_b_AE_OrvdClutchLrnEnabled)
        {
            rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu =
                KeRTMR_b_AE_ClutchLrnEnabled;
        }

        if (rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu)
        {
            /* Outputs for IfAction SubSystem: '<S739>/AE_ClutchLrn' incorporates:
             *  ActionPort: '<S787>/Action_Port'
             */
            /* RelationalOperator: '<S890>/Comparison4' incorporates:
             *  Constant: '<S800>/Constant'
             *  DataStoreWrite: '<S787>/Data Store Write'
             */
            VeRTMR_e_ClutchLrnType_DS = CeRTMR_e_Clutch_SerAE;

            /* Merge: '<S739>/Merge' incorporates:
             *  Constant: '<S787>/TRUE_Constant'
             *  SignalConversion generated from: '<S787>/OutputParameter'
             */
            VeRTMR_b_AE_ILE_LrnEnbl = true;

            /* End of Outputs for SubSystem: '<S739>/AE_ClutchLrn' */
        }
        else
        {
            if (KeRTMR_b_ILE_OrvdClutchLrnEnabled)
            {
                rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl =
                    KeRTMR_b_ILE_ClutchLrnEnabled;
            }

            if (rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl)
            {
                /* Outputs for IfAction SubSystem: '<S739>/ILE_ClutchLrn' incorporates:
                 *  ActionPort: '<S789>/Action_Port'
                 */
                /* RelationalOperator: '<S890>/Comparison4' incorporates:
                 *  Constant: '<S802>/Constant'
                 *  DataStoreWrite: '<S789>/Data Store Write'
                 */
                VeRTMR_e_ClutchLrnType_DS = CeRTMR_e_Clutch_SerILE;

                /* Merge: '<S739>/Merge' incorporates:
                 *  Constant: '<S789>/TRUE_Constant'
                 *  SignalConversion generated from: '<S789>/OutputParameter'
                 */
                VeRTMR_b_AE_ILE_LrnEnbl = true;

                /* End of Outputs for SubSystem: '<S739>/ILE_ClutchLrn' */
            }
            else
            {
                if (KeRTMR_b_K0_OrvdClutchLrnEnabled)
                {
                    rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu =
                        KeRTMR_b_K0_ClutchLrnEnabled;
                }

                if (rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu)
                {
                    /* Outputs for IfAction SubSystem: '<S739>/K0_ClutchLrn' incorporates:
                     *  ActionPort: '<S790>/Action_Port'
                     */
                    /* RelationalOperator: '<S890>/Comparison4' incorporates:
                     *  Constant: '<S803>/Constant'
                     *  DataStoreWrite: '<S790>/Data Store Write'
                     */
                    VeRTMR_e_ClutchLrnType_DS = CeRTMR_e_Clutch_SerK0;

                    /* Merge: '<S739>/Merge1' incorporates:
                     *  Constant: '<S790>/TRUE_Constant'
                     *  SignalConversion generated from: '<S790>/OutputParameter'
                     */
                    RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl = true;

                    /* End of Outputs for SubSystem: '<S739>/K0_ClutchLrn' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S739>/NO_ClutchLrn' incorporates:
                     *  ActionPort: '<S799>/Action_Port'
                     */
                    /* Outputs for Atomic SubSystem: '<S799>/Timer_Reset_Enabled' */
                    if (RTMR_ac_DW.UnitDelay_DSTATE_ap <= 0.0F)
                    {
                        /* Switch: '<S807>/Switch1' incorporates:
                         *  Constant: '<S806>/Calib'
                         *  UnitDelay: '<S807>/Unit Delay'
                         */
                        RTMR_ac_DW.UnitDelay_DSTATE_ap =
                            KeRTMR_t_delayNoClutchLrn;
                    }
                    else
                    {
                        /* Switch: '<S807>/Switch1' incorporates:
                         *  Constant: '<S805>/Calib'
                         *  Constant: '<S807>/Constant_Value4'
                         *  MinMax: '<S807>/Maximum'
                         *  Sum: '<S807>/Subtraction'
                         *  UnitDelay: '<S807>/Unit Delay'
                         */
                        RTMR_ac_DW.UnitDelay_DSTATE_ap = fmaxf
                            (RTMR_ac_DW.UnitDelay_DSTATE_ap - KeRTMR_t_MedTED,
                             0.0F);
                    }

                    /* Switch: '<S799>/Switch' incorporates:
                     *  Constant: '<S807>/Constant_Value2'
                     *  RelationalOperator: '<S807>/Greater_Than1'
                     *  UnitDelay: '<S807>/Unit Delay'
                     */
                    if (RTMR_ac_DW.UnitDelay_DSTATE_ap <= 0.0F)
                    {
                        /* RelationalOperator: '<S890>/Comparison4' incorporates:
                         *  Constant: '<S804>/Constant'
                         *  DataStoreWrite: '<S799>/Data Store Write'
                         *  Switch: '<S799>/Switch'
                         */
                        VeRTMR_e_ClutchLrnType_DS = CeRTMR_e_Clutch_NoLrn;
                    }

                    /* End of Switch: '<S799>/Switch' */
                    /* End of Outputs for SubSystem: '<S799>/Timer_Reset_Enabled' */

                    /* Merge: '<S739>/Merge' incorporates:
                     *  Constant: '<S799>/FALSE_Constant'
                     *  SignalConversion generated from: '<S799>/OutputParameter'
                     */
                    VeRTMR_b_AE_ILE_LrnEnbl = false;

                    /* Merge: '<S739>/Merge1' incorporates:
                     *  Constant: '<S799>/FALSE_Constant1'
                     *  SignalConversion generated from: '<S799>/OutputParameter1'
                     */
                    RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl = false;

                    /* End of Outputs for SubSystem: '<S739>/NO_ClutchLrn' */
                }
            }
        }
    }

    /* Logic: '<S732>/Logical1' incorporates:
     *  Constant: '<S791>/Calib'
     *  Constant: '<S792>/Calib'
     *  Constant: '<S793>/Calib'
     *  Constant: '<S794>/Calib'
     *  Constant: '<S795>/Calib'
     *  Constant: '<S796>/Calib'
     *  Constant: '<S797>/Calib'
     *  Constant: '<S798>/Calib'
     *  Constant: '<S807>/Constant_Value3'
     *  RelationalOperator: '<S807>/Greater_Than2'
     *  Switch: '<S807>/Switch1'
     *  UnitDelay: '<S807>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EOLClu =
        ((RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl) || (VeRTMR_b_AE_ILE_LrnEnbl));

    /* Logic: '<S737>/AND' incorporates:
     *  Logic: '<S737>/OR1'
     *  UnitDelay: '<S737>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu =
        (rtb_TmpSignalConversionAtVeRTMR_b_EOLClu &&
         (!RTMR_ac_DW.UnitDelay_DSTATE_px));

    /* Update for UnitDelay: '<S737>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_px = rtb_TmpSignalConversionAtVeRTMR_b_EOLClu;
    if (rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu)
    {
        /* Outputs for IfAction SubSystem: '<S732>/Clear_Conditions_PIDs' incorporates:
         *  ActionPort: '<S734>/Action_Port'
         */
        /* DataStoreWrite: '<S734>/Data Store Write1' incorporates:
         *  Constant: '<S734>/Constant_Value'
         */
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID = 0U;

        /* DataStoreWrite: '<S734>/Data Store Write2' incorporates:
         *  Constant: '<S734>/Constant_Value'
         */
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID = 0U;

        /* DataStoreWrite: '<S734>/Data Store Write3' incorporates:
         *  Constant: '<S734>/Constant_Value'
         */
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck3_PID = 0U;

        /* DataStoreWrite: '<S734>/Data Store Write4' */
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 2U;

        /* End of Outputs for SubSystem: '<S732>/Clear_Conditions_PIDs' */
    }

    VeRTMC_b_HCP_InPlantMode = VeRTMC_b_InPlantMode;

    /* Outputs for Atomic SubSystem: '<S742>/EdgeRising' */
    /* Logic: '<S974>/AND' incorporates:
     *  Logic: '<S974>/OR1'
     *  UnitDelay: '<S974>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EOLClu =
        ((RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl) && (!RTMR_ac_DW.UnitDelay_DSTATE_fn));

    /* Update for UnitDelay: '<S974>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_fn = RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl;

    /* End of Outputs for SubSystem: '<S742>/EdgeRising' */

    /* Switch: '<S742>/Switch1' incorporates:
     *  Constant: '<S742>/Constant_Value'
     *  Constant: '<S742>/Constant_Value1'
     *  Logic: '<S742>/OR'
     *  Logic: '<S742>/OR1'
     *  MinMax: '<S742>/Minimum'
     *  Sum: '<S742>/Summation'
     *  UnitDelay: '<S742>/Unit Delay'
     */
    if ((!RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl) ||
            rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_d = 0U;
    }
    else if (1 < ((sint32)((uint16)(((uint32)RTMR_ac_DW.UnitDelay_DSTATE_d) + 1U))))
    {
        /* MinMax: '<S742>/Minimum' */
        RTMR_ac_DW.UnitDelay_DSTATE_d = 1U;
    }
    else
    {
        /* MinMax: '<S742>/Minimum' incorporates:
         *  Constant: '<S742>/Constant_Value'
         *  Sum: '<S742>/Summation'
         *  UnitDelay: '<S742>/Unit Delay'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_d = (uint16)(((uint32)
            RTMR_ac_DW.UnitDelay_DSTATE_d) + 1U);
    }

    /* End of Switch: '<S742>/Switch1' */

    /* Logic: '<S742>/AND' incorporates:
     *  Constant: '<S732>/Constant_Value'
     *  RelationalOperator: '<S742>/Greater_Than'
     *  UnitDelay: '<S742>/Unit Delay'
     */
    VeRTMR_b_EOLClutchLrn_EnblDly1 = ((RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl) &&
        (((sint32)RTMR_ac_DW.UnitDelay_DSTATE_d) >= 1));

    /* RelationalOperator: '<S736>/Comparison1' incorporates:
     *  Constant: '<S892>/Constant_Value'
     *  DataStoreRead: '<S892>/Data Store Read'
     *  Logic: '<S892>/Logical3'
     *  RelationalOperator: '<S892>/Comparison'
     *  S-Function (sfix_bitop): '<S892>/Bitwise_Logical_Operator1'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EOLClu = ((((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID) & 4) <= 0);

    /* RelationalOperator: '<S736>/Comparison4' incorporates:
     *  DataStoreRead: '<S891>/Data Store Read2'
     *  RelationalOperator: '<S891>/Comparison1'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu = (((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID) != 32);

    /* Logic: '<S736>/Logical1' incorporates:
     *  DataStoreRead: '<S883>/Data Store Read1'
     *  RelationalOperator: '<S883>/Comparison1'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl = (((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID) == 4);

    /* Logic: '<S883>/Logical5' */
    rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu =
        ((rtb_TmpSignalConversionAtVeRTMR_b_EOLClu &&
          rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu) &&
         rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl);

    /* Switch: '<S890>/Switch' incorporates:
     *  Constant: '<S901>/Constant'
     *  RelationalOperator: '<S890>/Comparison4'
     */
    if (((uint32)VeRTMR_e_ClutchLrnType_DS) == CeRTMR_e_Clutch_EOL)
    {
        /* Switch: '<S890>/Switch' incorporates:
         *  Constant: '<S902>/Calib'
         */
        VeRTMR_t_MaxTmAllowed_EOL = KeRTMR_t_MaxTimeAllowed_EOL;
    }
    else
    {
        /* Switch: '<S890>/Switch' incorporates:
         *  Constant: '<S903>/Calib'
         */
        VeRTMR_t_MaxTmAllowed_EOL = KeRTMR_t_MaxTimeAllowed_K0;
    }

    /* End of Switch: '<S890>/Switch' */

    /* Outputs for Atomic SubSystem: '<S883>/Timer_Reset_Enabled' */
    /* Outputs for Atomic SubSystem: '<S896>/EdgeRising' */
    /* Logic: '<S973>/OR1' incorporates:
     *  UnitDelay: '<S973>/Unit Delay'
     */
    rtb_TmpSignalConversionAtROLRoutine_MtrB = !RTMR_ac_DW.UnitDelay_DSTATE_aj;

    /* Update for UnitDelay: '<S973>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_aj = rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu;

    /* Switch: '<S896>/Switch1' incorporates:
     *  Logic: '<S973>/AND'
     *  Switch: '<S896>/Switch2'
     *  UnitDelay: '<S896>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu &&
            rtb_TmpSignalConversionAtROLRoutine_MtrB)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_a = VeRTMR_t_MaxTmAllowed_EOL;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu)
        {
            /* UnitDelay: '<S896>/Unit Delay' incorporates:
             *  Constant: '<S888>/Calib'
             *  Constant: '<S896>/Constant_Value4'
             *  MinMax: '<S896>/Maximum'
             *  Sum: '<S896>/Subtraction'
             *  Switch: '<S896>/Switch2'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_a = fmaxf(RTMR_ac_DW.UnitDelay_DSTATE_a
                - KeRTMR_t_MedTED, 0.0F);
        }
    }

    /* End of Switch: '<S896>/Switch1' */
    /* End of Outputs for SubSystem: '<S896>/EdgeRising' */

    /* Logic: '<S736>/Logical1' incorporates:
     *  Constant: '<S896>/Constant_Value2'
     *  Logic: '<S883>/Logical1'
     *  Logic: '<S883>/Logical2'
     *  RelationalOperator: '<S896>/Greater_Than1'
     *  UnitDelay: '<S896>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl = (((RTMR_ac_DW.UnitDelay_DSTATE_a <=
        0.0F) && (VeRTMR_b_EOLClutchLrn_EnblDly1)) &&
        rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl);

    /* End of Outputs for SubSystem: '<S883>/Timer_Reset_Enabled' */

    /* Switch: '<S894>/Switch' incorporates:
     *  DataStoreRead: '<S894>/Data Store Read1'
     *  DataStoreWrite: '<S894>/Data Store Write1'
     *  DataStoreWrite: '<S894>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S970>/FixPt Bitwise Operator1'
     *  Switch: '<S894>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)4;
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 16U;
    }

    /* End of Switch: '<S894>/Switch' */

    /* If: '<S883>/Test_Conditions' incorporates:
     *  Constant: '<S897>/Constant'
     *  Constant: '<S898>/Constant'
     *  DataStoreRead: '<S887>/Data Store Read'
     *  Logic: '<S887>/Logical1'
     *  Logic: '<S887>/Logical3'
     *  Logic: '<S887>/Logical4'
     *  RelationalOperator: '<S887>/Comparison2'
     *  RelationalOperator: '<S887>/Comparison3'
     *  RelationalOperator: '<S887>/Comparison4'
     *  RelationalOperator: '<S887>/Comparison5'
     */
    if (!rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu)
    {
        /* Outputs for IfAction SubSystem: '<S883>/Complete' incorporates:
         *  ActionPort: '<S884>/Action_Port'
         */
        RTMR_ac_Complete_k();

        /* End of Outputs for SubSystem: '<S883>/Complete' */
    }
    else if (!rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
    {
        /* Outputs for IfAction SubSystem: '<S883>/Time_Out' incorporates:
         *  ActionPort: '<S895>/Action_Port'
         */
        RTMR_ac_Time_Out_i();

        /* End of Outputs for SubSystem: '<S883>/Time_Out' */
    }
    else if (((((sint32)RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID) != 4) &&
              (((sint32)RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID) != 2)) ||
             ((((uint32)VeRTMR_e_ClutchLrnType_DS) != CeRTMR_e_Clutch_EOL) &&
              (((uint32)VeRTMR_e_ClutchLrnType_DS) != CeRTMR_e_Clutch_SerK0)))
    {
        /* Outputs for IfAction SubSystem: '<S883>/Do_Nothing' incorporates:
         *  ActionPort: '<S885>/Action_Port'
         */
        RTMR_ac_Do_Nothing_e0();

        /* End of Outputs for SubSystem: '<S883>/Do_Nothing' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S883>/Perform_Test' incorporates:
         *  ActionPort: '<S893>/Action_Port'
         */
        RTMR_ac_Perform_Test_c();

        /* End of Outputs for SubSystem: '<S883>/Perform_Test' */
    }

    /* End of If: '<S883>/Test_Conditions' */

    /* Outputs for Atomic SubSystem: '<S743>/EdgeRising' */
    /* Logic: '<S975>/AND' incorporates:
     *  Logic: '<S975>/OR1'
     *  UnitDelay: '<S975>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EOLClu = ((VeRTMR_b_AE_ILE_LrnEnbl) &&
        (!RTMR_ac_DW.UnitDelay_DSTATE_b4));

    /* Update for UnitDelay: '<S975>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_b4 = VeRTMR_b_AE_ILE_LrnEnbl;

    /* End of Outputs for SubSystem: '<S743>/EdgeRising' */

    /* Switch: '<S743>/Switch1' incorporates:
     *  Constant: '<S743>/Constant_Value'
     *  Constant: '<S743>/Constant_Value1'
     *  Logic: '<S743>/OR'
     *  Logic: '<S743>/OR1'
     *  MinMax: '<S743>/Minimum'
     *  Sum: '<S743>/Summation'
     *  UnitDelay: '<S743>/Unit Delay'
     */
    if ((!VeRTMR_b_AE_ILE_LrnEnbl) || rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_oom = 0U;
    }
    else if (1 < ((sint32)((uint16)(((uint32)RTMR_ac_DW.UnitDelay_DSTATE_oom) +
                1U))))
    {
        /* MinMax: '<S743>/Minimum' */
        RTMR_ac_DW.UnitDelay_DSTATE_oom = 1U;
    }
    else
    {
        /* MinMax: '<S743>/Minimum' incorporates:
         *  Constant: '<S743>/Constant_Value'
         *  Sum: '<S743>/Summation'
         *  UnitDelay: '<S743>/Unit Delay'
         */
        RTMR_ac_DW.UnitDelay_DSTATE_oom = (uint16)(((uint32)
            RTMR_ac_DW.UnitDelay_DSTATE_oom) + 1U);
    }

    /* End of Switch: '<S743>/Switch1' */

    /* Logic: '<S743>/AND' incorporates:
     *  Constant: '<S732>/Constant_Value1'
     *  RelationalOperator: '<S743>/Greater_Than'
     *  UnitDelay: '<S743>/Unit Delay'
     */
    VeRTMR_b_SerClutchLrn_EnblDly1 = ((VeRTMR_b_AE_ILE_LrnEnbl) && (((sint32)
        RTMR_ac_DW.UnitDelay_DSTATE_oom) >= 1));

    /* RelationalOperator: '<S736>/Comparison1' incorporates:
     *  Constant: '<S818>/Constant_Value'
     *  DataStoreRead: '<S818>/Data Store Read'
     *  Logic: '<S818>/Logical3'
     *  RelationalOperator: '<S818>/Comparison'
     *  S-Function (sfix_bitop): '<S818>/Bitwise_Logical_Operator1'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EOLClu = ((((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID) & 4) <= 0);

    /* RelationalOperator: '<S736>/Comparison4' incorporates:
     *  DataStoreRead: '<S817>/Data Store Read2'
     *  RelationalOperator: '<S817>/Comparison1'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu = (((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID) != 32);

    /* Logic: '<S736>/Logical1' incorporates:
     *  DataStoreRead: '<S809>/Data Store Read1'
     *  RelationalOperator: '<S809>/Comparison1'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl = (((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID) == 4);

    /* Logic: '<S809>/Logical5' */
    rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu =
        ((rtb_TmpSignalConversionAtVeRTMR_b_EOLClu &&
          rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu) &&
         rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl);

    /* Switch: '<S816>/Switch' incorporates:
     *  Constant: '<S827>/Constant'
     *  RelationalOperator: '<S816>/Comparison4'
     */
    if (((uint32)VeRTMR_e_ClutchLrnType_DS) == CeRTMR_e_Clutch_SerAE)
    {
        /* Switch: '<S816>/Switch' incorporates:
         *  Constant: '<S828>/Calib'
         */
        VeRTMR_t_MaxTmAllowed_Ser = KeRTMR_t_MaxTimeAllowed_SerAE;
    }
    else
    {
        /* Switch: '<S816>/Switch' incorporates:
         *  Constant: '<S829>/Calib'
         */
        VeRTMR_t_MaxTmAllowed_Ser = KeRTMR_t_MaxTimeAllowed_SerILE;
    }

    /* End of Switch: '<S816>/Switch' */

    /* Outputs for Atomic SubSystem: '<S809>/Timer_Reset_Enabled' */
    /* Outputs for Atomic SubSystem: '<S822>/EdgeRising' */
    /* Logic: '<S881>/OR1' incorporates:
     *  UnitDelay: '<S881>/Unit Delay'
     */
    rtb_TmpSignalConversionAtROLRoutine_MtrB = !RTMR_ac_DW.UnitDelay_DSTATE_op;

    /* Update for UnitDelay: '<S881>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_op = rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu;

    /* Switch: '<S822>/Switch1' incorporates:
     *  Logic: '<S881>/AND'
     *  Switch: '<S822>/Switch2'
     *  UnitDelay: '<S822>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu &&
            rtb_TmpSignalConversionAtROLRoutine_MtrB)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_l = VeRTMR_t_MaxTmAllowed_Ser;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu)
        {
            /* UnitDelay: '<S822>/Unit Delay' incorporates:
             *  Constant: '<S814>/Calib'
             *  Constant: '<S822>/Constant_Value4'
             *  MinMax: '<S822>/Maximum'
             *  Sum: '<S822>/Subtraction'
             *  Switch: '<S822>/Switch2'
             */
            RTMR_ac_DW.UnitDelay_DSTATE_l = fmaxf(RTMR_ac_DW.UnitDelay_DSTATE_l
                - KeRTMR_t_MedTED, 0.0F);
        }
    }

    /* End of Switch: '<S822>/Switch1' */
    /* End of Outputs for SubSystem: '<S822>/EdgeRising' */

    /* Logic: '<S736>/Logical1' incorporates:
     *  Constant: '<S822>/Constant_Value2'
     *  Logic: '<S809>/Logical1'
     *  Logic: '<S809>/Logical2'
     *  RelationalOperator: '<S822>/Greater_Than1'
     *  UnitDelay: '<S822>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl = (((RTMR_ac_DW.UnitDelay_DSTATE_l <=
        0.0F) && (VeRTMR_b_SerClutchLrn_EnblDly1)) &&
        rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl);

    /* End of Outputs for SubSystem: '<S809>/Timer_Reset_Enabled' */

    /* Switch: '<S820>/Switch' incorporates:
     *  DataStoreRead: '<S820>/Data Store Read1'
     *  DataStoreWrite: '<S820>/Data Store Write1'
     *  DataStoreWrite: '<S820>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S878>/FixPt Bitwise Operator1'
     *  Switch: '<S820>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl)
    {
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID |= (uint8)4;
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID = 16U;
    }

    /* End of Switch: '<S820>/Switch' */

    /* If: '<S809>/Test_Conditions' incorporates:
     *  Constant: '<S823>/Constant'
     *  Constant: '<S824>/Constant'
     *  DataStoreRead: '<S813>/Data Store Read'
     *  Logic: '<S813>/Logical1'
     *  Logic: '<S813>/Logical3'
     *  Logic: '<S813>/Logical4'
     *  RelationalOperator: '<S813>/Comparison2'
     *  RelationalOperator: '<S813>/Comparison3'
     *  RelationalOperator: '<S813>/Comparison4'
     *  RelationalOperator: '<S813>/Comparison5'
     */
    if (!rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu)
    {
        /* Outputs for IfAction SubSystem: '<S809>/Complete' incorporates:
         *  ActionPort: '<S810>/Action_Port'
         */
        RTMR_ac_Complete_g();

        /* End of Outputs for SubSystem: '<S809>/Complete' */
    }
    else if (!rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
    {
        /* Outputs for IfAction SubSystem: '<S809>/Time_Out' incorporates:
         *  ActionPort: '<S821>/Action_Port'
         */
        RTMR_ac_Time_Out_m();

        /* End of Outputs for SubSystem: '<S809>/Time_Out' */
    }
    else if (((((sint32)RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID) != 4) &&
              (((sint32)RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID) != 2)) ||
             ((((uint32)VeRTMR_e_ClutchLrnType_DS) != CeRTMR_e_Clutch_SerAE) &&
              (((uint32)VeRTMR_e_ClutchLrnType_DS) != CeRTMR_e_Clutch_SerILE)))
    {
        /* Outputs for IfAction SubSystem: '<S809>/Do_Nothing' incorporates:
         *  ActionPort: '<S811>/Action_Port'
         */
        RTMR_ac_Do_Nothing_e();

        /* End of Outputs for SubSystem: '<S809>/Do_Nothing' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S809>/Perform_Test' incorporates:
         *  ActionPort: '<S819>/Action_Port'
         */
        RTMR_ac_Perform_Test_j();

        /* End of Outputs for SubSystem: '<S809>/Perform_Test' */
    }

    /* End of If: '<S809>/Test_Conditions' */
    if (VeRTMC_b_EnableEngStop)
    {
        /* Outputs for IfAction SubSystem: '<S735>/EOL_SerK0_ClutchLrn' incorporates:
         *  ActionPort: '<S745>/Action_Port'
         */
        RTMR_ac_Electric_Only((&(VeRTMR_b_StartStopEnbl_ClutchLrn)),
                              (&(VeRTMR_e_StartStopState_ClutchLrn)));

        /* End of Outputs for SubSystem: '<S735>/EOL_SerK0_ClutchLrn' */
    }
    else if (VeRTMC_b_EnableEngineStart)
    {
        /* Outputs for IfAction SubSystem: '<S735>/SerAE_ILE_ClutchLrn' incorporates:
         *  ActionPort: '<S748>/Action_Port'
         */
        RTMR_ac_In_Plant((&(VeRTMR_b_StartStopEnbl_ClutchLrn)),
                         (&(VeRTMR_e_StartStopState_ClutchLrn)));

        /* End of Outputs for SubSystem: '<S735>/SerAE_ILE_ClutchLrn' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S735>/In_Field' incorporates:
         *  ActionPort: '<S746>/Action_Port'
         */
        RTMR_ac_In_Field((&(VeRTMR_b_StartStopEnbl_ClutchLrn)),
                         (&(VeRTMR_e_StartStopState_ClutchLrn)));

        /* End of Outputs for SubSystem: '<S735>/In_Field' */
    }

    /* RelationalOperator: '<S736>/Comparison1' incorporates:
     *  Constant: '<S755>/Constant'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EOLClu = (CeRTMR_e_Clutch_EOL == ((uint32)
        VeRTMR_e_ClutchLrnType_DS));

    /* RelationalOperator: '<S736>/Comparison2' incorporates:
     *  Constant: '<S756>/Constant'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu = (((uint32)
        VeRTMR_e_ClutchLrnType_DS) == CeRTMR_e_Clutch_SerK0);

    /* RelationalOperator: '<S736>/Comparison3' incorporates:
     *  Constant: '<S757>/Constant'
     */
    rtb_TmpSignalConversionAtROLRoutine_MtrB = (CeRTMR_e_Clutch_SerAE ==
        ((uint32)VeRTMR_e_ClutchLrnType_DS));

    /* RelationalOperator: '<S736>/Comparison4' incorporates:
     *  DataStoreRead: '<S736>/Data Store Read'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu = (4 == ((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID));

    /* RelationalOperator: '<S736>/Comparison5' incorporates:
     *  Constant: '<S758>/Constant'
     */
    rtb_Logical4_ov = (((uint32)VeRTMR_e_ClutchLrnType_DS) ==
                       CeRTMR_e_Clutch_SerILE);

    /* Logic: '<S736>/Logical6' incorporates:
     *  DataStoreRead: '<S736>/Data Store Read'
     */
    rtb_Comparison4_jkp = (rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu || (((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID) == 2));

    /* Logic: '<S736>/Logical1' */
    rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl =
        (((rtb_TmpSignalConversionAtVeRTMR_b_EOLClu ||
           rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu) ||
          rtb_TmpSignalConversionAtROLRoutine_MtrB) || rtb_Logical4_ov);

    /* VariantMerge generated from: '<S40>/Variant Source2' */
    VeRTMR_b_HybTransCmndStEnbl_ClutchLrn = (rtb_Comparison4_jkp &&
        rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl);
    if (rtb_Comparison4_jkp && rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
    {
        /* VariantMerge generated from: '<S40>/Variant Source4' incorporates:
         *  Constant: '<S759>/Calib'
         */
        VeRTMR_e_HybTransCmndSt_ClutchLrn = KeRTMR_e_EOLRngStOvrrd;
    }
    else if (rtb_Comparison4_jkp && rtb_TmpSignalConversionAtVeRTMR_b_K0_Clu)
    {
        /* VariantMerge generated from: '<S40>/Variant Source4' incorporates:
         *  Constant: '<S763>/Calib'
         *  Switch: '<S736>/Switch3'
         */
        VeRTMR_e_HybTransCmndSt_ClutchLrn = KeRTMR_e_SerK0RngStOvrrd;
    }
    else if (rtb_Comparison4_jkp && rtb_TmpSignalConversionAtROLRoutine_MtrB)
    {
        /* VariantMerge generated from: '<S40>/Variant Source4' incorporates:
         *  Constant: '<S761>/Calib'
         *  Switch: '<S736>/Switch3'
         *  Switch: '<S736>/Switch4'
         */
        VeRTMR_e_HybTransCmndSt_ClutchLrn = KeRTMR_e_SerAE_RngStOvrrd;
    }
    else if (rtb_Comparison4_jkp && rtb_Logical4_ov)
    {
        /* VariantMerge generated from: '<S40>/Variant Source4' incorporates:
         *  Constant: '<S762>/Calib'
         *  Switch: '<S736>/Switch3'
         *  Switch: '<S736>/Switch4'
         *  Switch: '<S736>/Switch5'
         */
        VeRTMR_e_HybTransCmndSt_ClutchLrn = KeRTMR_e_SerILE_RngStOvrrd;
    }
    else
    {
        /* VariantMerge generated from: '<S40>/Variant Source4' incorporates:
         *  Constant: '<S760>/Calib'
         *  Switch: '<S736>/Switch3'
         *  Switch: '<S736>/Switch4'
         *  Switch: '<S736>/Switch5'
         */
        VeRTMR_e_HybTransCmndSt_ClutchLrn = KeRTMR_e_RngStDefault_EOL;
    }

    if (rtb_TmpSignalConversionAtVeRTMR_b_ILE_Cl &&
            rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu)
    {
        /* VariantMerge generated from: '<S40>/Variant Source5' incorporates:
         *  DataStoreRead: '<S736>/Data Store Read2'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_hn =
            VeRTMR_e_ClutchLrnType_DS;
    }
    else
    {
        /* VariantMerge generated from: '<S40>/Variant Source5' incorporates:
         *  Constant: '<S752>/Constant'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_hn =
            CeRTMR_e_Clutch_NoLrn;
    }

    /* Logic: '<S738>/Logical6' incorporates:
     *  Constant: '<S775>/Calib'
     *  DataStoreRead: '<S738>/Data Store Read'
     *  Logic: '<S736>/Logical3'
     *  Logic: '<S736>/Logical4'
     *  Logic: '<S736>/Logical5'
     *  Switch: '<S736>/Switch3'
     *  Switch: '<S736>/Switch4'
     *  Switch: '<S736>/Switch5'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EOLClu = (((4 == ((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID)) &&
        (KeRTMR_b_ClutchLrnSpdEnb)) || (2 == ((sint32)
        RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID)));
    if (CeRTMR_e_Clutch_SerILE == ((uint32)VeRTMR_e_ClutchLrnType_DS))
    {
        /* Outputs for IfAction SubSystem: '<S738>/ClutchLrnSer_ILE' incorporates:
         *  ActionPort: '<S766>/Action_Port'
         */
        /* Switch: '<S766>/Switch5' incorporates:
         *  Constant: '<S779>/Calib'
         *  Logic: '<S766>/Logical7'
         */
        if ((KeRTMR_b_MinSpdSerILE_Enable) &&
                rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
        {
            /* VariantMerge generated from: '<S40>/Variant Source7' incorporates:
             *  Constant: '<S780>/Calib'
             */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                KeRTMR_n_MinSpdSerILE;
        }
        else
        {
            /* VariantMerge generated from: '<S40>/Variant Source7' */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                rtb_TmpSignalConversionAtVeTISR_n_TransM;
        }

        /* End of Switch: '<S766>/Switch5' */
        /* End of Outputs for SubSystem: '<S738>/ClutchLrnSer_ILE' */
    }
    else if (CeRTMR_e_Clutch_SerK0 == ((uint32)VeRTMR_e_ClutchLrnType_DS))
    {
        /* Outputs for IfAction SubSystem: '<S738>/ClutchLrnSer_K0' incorporates:
         *  ActionPort: '<S767>/Action_Port'
         */
        /* Switch: '<S767>/Switch5' incorporates:
         *  Constant: '<S781>/Calib'
         *  Logic: '<S767>/Logical7'
         */
        if ((KeRTMR_b_MinSpdSerK0_Enable) &&
                rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
        {
            /* VariantMerge generated from: '<S40>/Variant Source7' incorporates:
             *  Constant: '<S782>/Calib'
             */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                KeRTMR_n_MinSpdSerK0;
        }
        else
        {
            /* VariantMerge generated from: '<S40>/Variant Source7' */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                rtb_TmpSignalConversionAtVeTISR_n_TransM;
        }

        /* End of Switch: '<S767>/Switch5' */
        /* End of Outputs for SubSystem: '<S738>/ClutchLrnSer_K0' */
    }
    else if (CeRTMR_e_Clutch_SerAE == ((uint32)VeRTMR_e_ClutchLrnType_DS))
    {
        /* Outputs for IfAction SubSystem: '<S738>/ClutchLrnSer_AE' incorporates:
         *  ActionPort: '<S765>/Action_Port'
         */
        /* Switch: '<S765>/Switch5' incorporates:
         *  Constant: '<S777>/Calib'
         *  Logic: '<S765>/Logical7'
         */
        if ((KeRTMR_b_MinSpdSerAE_Enable) &&
                rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
        {
            /* VariantMerge generated from: '<S40>/Variant Source7' incorporates:
             *  Constant: '<S778>/Calib'
             */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                KeRTMR_n_MinSpdSerAE;
        }
        else
        {
            /* VariantMerge generated from: '<S40>/Variant Source7' */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                rtb_TmpSignalConversionAtVeTISR_n_TransM;
        }

        /* End of Switch: '<S765>/Switch5' */
        /* End of Outputs for SubSystem: '<S738>/ClutchLrnSer_AE' */
    }
    else if (CeRTMR_e_Clutch_EOL == ((uint32)VeRTMR_e_ClutchLrnType_DS))
    {
        /* Outputs for IfAction SubSystem: '<S738>/ClutchLrn_EOL' incorporates:
         *  ActionPort: '<S768>/Action_Port'
         */
        /* Switch: '<S768>/Switch5' incorporates:
         *  Constant: '<S783>/Calib'
         *  Logic: '<S768>/Logical7'
         */
        if ((KeRTMR_b_MinSpdEOL_Enable) &&
                rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
        {
            /* VariantMerge generated from: '<S40>/Variant Source7' incorporates:
             *  Constant: '<S784>/Calib'
             */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                KeRTMR_n_MinSpdEOL;
        }
        else
        {
            /* VariantMerge generated from: '<S40>/Variant Source7' */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                rtb_TmpSignalConversionAtVeTISR_n_TransM;
        }

        /* End of Switch: '<S768>/Switch5' */
        /* End of Outputs for SubSystem: '<S738>/ClutchLrn_EOL' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S738>/NoClutchLrn' incorporates:
         *  ActionPort: '<S776>/Action_Port'
         */
        if (KeRTMR_b_MinSpdNoLrn_Enable)
        {
            /* Switch: '<S776>/Switch5' incorporates:
             *  Constant: '<S786>/Calib'
             *  VariantMerge generated from: '<S40>/Variant Source7'
             */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                KeRTMR_n_MinSpdNoLrn;
        }
        else
        {
            /* VariantMerge generated from: '<S40>/Variant Source7' incorporates:
             *  Switch: '<S776>/Switch5'
             */
            RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
                rtb_TmpSignalConversionAtVeTISR_n_TransM;
        }

        /* End of Outputs for SubSystem: '<S738>/NoClutchLrn' */
    }

    /* VariantMerge generated from: '<S40>/Variant Source6' incorporates:
     *  Constant: '<S771>/Constant'
     *  Constant: '<S772>/Constant'
     *  Constant: '<S773>/Constant'
     *  Constant: '<S774>/Constant'
     *  Constant: '<S785>/Calib'
     *  Switch: '<S776>/Switch5'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_j =
        RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl;

    /* End of Outputs for SubSystem: '<S732>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S732>/Turn_On_Delay_Sample' */
    /* End of Outputs for SubSystem: '<S741>/Test_Enabled' */
    /* End of Outputs for SubSystem: '<S732>/Turn_On_Delay_Sample1' */
    /* End of Outputs for SubSystem: '<S740>/Test_Enabled' */
#else

    /* VariantMerge generated from: '<S40>/Variant Source1' incorporates:
     *  Constant: '<S977>/Constant'
     *  SignalConversion generated from: '<S40>/Variant Source1'
     */
    VeRTMR_e_StartStopState_ClutchLrn = RTMR_ac_ConstB.Constant_o;

    /* VariantMerge generated from: '<S40>/Variant Source2' incorporates:
     *  Constant: '<S733>/FALSE_Constant1'
     *  SignalConversion generated from: '<S40>/Variant Source2'
     */
    VeRTMR_b_HybTransCmndStEnbl_ClutchLrn = false;

    /* VariantMerge generated from: '<S40>/Variant Source3' incorporates:
     *  SignalConversion generated from: '<S40>/Variant Source3'
     */
    VeRTMR_b_StartStopEnbl_ClutchLrn = false;

    /* VariantMerge generated from: '<S40>/Variant Source4' incorporates:
     *  Constant: '<S978>/Calib'
     *  SignalConversion generated from: '<S40>/Variant Source4'
     */
    VeRTMR_e_HybTransCmndSt_ClutchLrn = KeRTMR_e_RngStDefault_EOL;

    /* VariantMerge generated from: '<S40>/Variant Source5' incorporates:
     *  Constant: '<S976>/Constant'
     *  SignalConversion generated from: '<S40>/Variant Source5'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_hn = CeRTMR_e_Clutch_NoLrn;

    /* VariantMerge generated from: '<S40>/Variant Source6' incorporates:
     *  SignalConversion generated from: '<S40>/Variant Source6'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_j = false;

    /* VariantMerge generated from: '<S40>/Variant Source7' incorporates:
     *  SignalConversion generated from: '<S40>/Variant Source7'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_ = 0.0F;

#endif

    /* End of If: '<S735>/If' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/OvrdArbitration'
     */
    /* SignalConversion generated from: '<S37>/ForceEngineStartStopEnbl_ROLPxPy' */
#if Rte_SysCon_Variant_RTMR_1

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopEnbl_ROLPxPy' */
    rtb_VeRTMC_b_ForceAutoStopStartEnbl_ROL =
        VeRTMC_b_ForceAutoStopStartEnbl_ROL;

#else

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopEnbl_ROLPxPy' incorporates:
     *  SignalConversion generated from: '<S37>/ForceEngineStartStopEnbl_ROLPxPy'
     */
    rtb_VeRTMC_b_ForceAutoStopStartEnbl_ROL = false;

#endif

    /* End of SignalConversion generated from: '<S37>/ForceEngineStartStopEnbl_ROLPxPy' */

    /* SignalConversion generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrB' incorporates:
     *  SignalConversion generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrA'
     */
#if Rte_SysCon_Variant_RTMR_7

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrB' */
    rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrB =
        VeRTMC_b_ForceAutoStopStartEnbl_MtrB;

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrA' */
    rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrA =
        VeRTMC_b_ForceAutoStopStartEnbl_MtrA;

#else

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrB' incorporates:
     *  SignalConversion generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrB'
     */
    rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrB = false;

#endif

    /* End of SignalConversion generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrB' */

    /* SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrA'
     */
#if Rte_SysCon_Variant_RTMR_7

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopState_ROL_MtrA' */
    rtb_VeRTMC_e_ForceAutoStopStartSt_MtrA = VeRTMC_e_ForceAutoStopStartSt_MtrA;

#else

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/ForceEngineStartStopEnbl_ROL_MtrA'
     */
    rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrA = false;

#endif

    /* End of SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROL_MtrA' */

    /* SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROL_MtrB' incorporates:
     *  SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROL_MtrA'
     */
#if Rte_SysCon_Variant_RTMR_7

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopState_ROL_MtrB' */
    rtb_VeRTMC_e_ForceAutoStopStartSt_MtrB = VeRTMC_e_ForceAutoStopStartSt_MtrB;

#else

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopState_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROL_MtrA'
     */
    rtb_VeRTMC_e_ForceAutoStopStartSt_MtrA = CeSTRR_e_NoOvrrd;

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopState_ROL_MtrB' incorporates:
     *  SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROL_MtrB'
     */
    rtb_VeRTMC_e_ForceAutoStopStartSt_MtrB = CeSTRR_e_NoOvrrd;

#endif

    /* End of SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROL_MtrB' */

    /* SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROLPxPy' incorporates:
     *  SignalConversion generated from: '<S37>/HybTransCmndSt_ROLPxPy'
     */
#if Rte_SysCon_Variant_RTMR_1

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopState_ROLPxPy' */
    rtb_VeRTMC_e_ForceAutoStopStartSt_ROL = VeRTMC_e_ForceAutoStopStartSt_ROL;

    /* VariantMerge generated from: '<S37>/HybTransCmndSt_ROLPxPy' */
    rtb_VeRTMC_e_HybTransCmndSt_ROL = VeRTMC_e_HybTransCmndSt_ROL;

#else

    /* VariantMerge generated from: '<S37>/ForceEngineStartStopState_ROLPxPy' incorporates:
     *  SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROLPxPy'
     */
    rtb_VeRTMC_e_ForceAutoStopStartSt_ROL = CeSTRR_e_NoOvrrd;

#endif

    /* End of SignalConversion generated from: '<S37>/ForceEngineStartStopState_ROLPxPy' */

    /* SignalConversion generated from: '<S37>/HybTransCmndStEnbl_ROLPxPy' incorporates:
     *  SignalConversion generated from: '<S37>/HybTransCmndSt_ROLPxPy'
     */
#if Rte_SysCon_Variant_RTMR_1

    /* VariantMerge generated from: '<S37>/HybTransCmndStEnbl_ROLPxPy' */
    rtb_VeRTMC_b_HybTransCmndStEnbl_ROL = VeRTMC_b_HybTransCmndStEnbl_ROL;

#else

    /* VariantMerge generated from: '<S37>/HybTransCmndSt_ROLPxPy' incorporates:
     *  SignalConversion generated from: '<S37>/HybTransCmndSt_ROLPxPy'
     */
    rtb_VeRTMC_e_HybTransCmndSt_ROL = CeOHSR_e_RngSel_N;

    /* VariantMerge generated from: '<S37>/HybTransCmndStEnbl_ROLPxPy' incorporates:
     *  SignalConversion generated from: '<S37>/HybTransCmndStEnbl_ROLPxPy'
     */
    rtb_VeRTMC_b_HybTransCmndStEnbl_ROL = false;

#endif

    /* End of SignalConversion generated from: '<S37>/HybTransCmndStEnbl_ROLPxPy' */

    /* SignalConversion generated from: '<S37>/HybTransCmndSt_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/HybTransCmndStEnbl_ROL_MtrA'
     * */
#if Rte_SysCon_Variant_RTMR_7

    /* VariantMerge generated from: '<S37>/HybTransCmndSt_ROL_MtrA' */
    rtb_VeRTMC_e_HybTransCmndSt_MtrA = VeRTMC_e_HybTransCmndSt_MtrA;

    /* VariantMerge generated from: '<S37>/HybTransCmndStEnbl_ROL_MtrA' */
    rtb_VeRTMC_b_HybTransCmndStEnbl_MtrA = VeRTMC_b_HybTransCmndStEnbl_MtrA;

#else

    /* VariantMerge generated from: '<S37>/HybTransCmndSt_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/HybTransCmndSt_ROL_MtrA'
     */
    rtb_VeRTMC_e_HybTransCmndSt_MtrA = CeOHSR_e_RngSel_N;

    /* VariantMerge generated from: '<S37>/HybTransCmndStEnbl_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/HybTransCmndStEnbl_ROL_MtrA'
     */
    rtb_VeRTMC_b_HybTransCmndStEnbl_MtrA = false;

#endif

    /* End of SignalConversion generated from: '<S37>/HybTransCmndSt_ROL_MtrA' */

    /* SignalConversion generated from: '<S37>/WED_HybTransCmndSt' incorporates:
     *  SignalConversion generated from: '<S37>/WED_HybTransCmndStEnbl'
     * */
#if Rte_SysCon_Variant_RTMR_8

    /* VariantMerge generated from: '<S37>/WED_HybTransCmndSt' incorporates:
     *  Merge: '<S993>/Merge'
     */
    rtb_VM_Conditional_Signal_WED_HybTrans_p = RTMR_ac_B.Merge_e;

    /* VariantMerge generated from: '<S37>/WED_HybTransCmndStEnbl' */
    rtb_VM_Conditional_Signal_WED_HybTransCm = RTMR_ac_B.Merge1;

#else

    /* VariantMerge generated from: '<S37>/WED_HybTransCmndSt' incorporates:
     *  SignalConversion generated from: '<S37>/WED_HybTransCmndSt'
     */
    rtb_VM_Conditional_Signal_WED_HybTrans_p = CeOHSR_e_RngSel_N;

    /* VariantMerge generated from: '<S37>/WED_HybTransCmndStEnbl' incorporates:
     *  SignalConversion generated from: '<S37>/WED_HybTransCmndStEnbl'
     */
    rtb_VM_Conditional_Signal_WED_HybTransCm = false;

#endif

    /* End of SignalConversion generated from: '<S37>/WED_HybTransCmndSt' */

    /* SignalConversion generated from: '<S37>/EnaReslvrOfsLrnRtn_PxPy' */
#if Rte_SysCon_Variant_RTMR_1

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrB' */
    rtb_VeRTMC_b_DsblMtr_OITR = RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn;

#else

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrB' incorporates:
     *  SignalConversion generated from: '<S37>/EnaReslvrOfsLrnRtn_PxPy'
     */
    rtb_VeRTMC_b_DsblMtr_OITR = false;

#endif

    /* End of SignalConversion generated from: '<S37>/EnaReslvrOfsLrnRtn_PxPy' */

    /* SignalConversion generated from: '<S37>/EnaReslvrOfsLrnRtn_MtrB' */
#if Rte_SysCon_Variant_RTMR_7

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' */
    rtb_VeRTMC_b_DsblMtr_OITR_f = RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrB;

#else

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/EnaReslvrOfsLrnRtn_MtrB'
     */
    rtb_VeRTMC_b_DsblMtr_OITR_f = false;

#endif

    /* End of SignalConversion generated from: '<S37>/EnaReslvrOfsLrnRtn_MtrB' */

    /* Switch: '<S37>/Switch18' */
    if (rtb_TmpSignalConversionAtROLRoutine_MtrA)
    {
        /* SignalConversion generated from: '<S12>/EnaReslvrOfsLrnRtn_ROL' incorporates:
         *  Outport: '<Root>/VeRTMR_b_EnaReslvrOfsLrnRtn'
         */
        (void)Rte_Write_VeRTMR_b_EnaReslvrOfsLrnRtn_Value
            (rtb_VeRTMC_b_DsblMtr_OITR);
    }
    else
    {
        /* SignalConversion generated from: '<S12>/EnaReslvrOfsLrnRtn_ROL' incorporates:
         *  Outport: '<Root>/VeRTMR_b_EnaReslvrOfsLrnRtn'
         */
        (void)Rte_Write_VeRTMR_b_EnaReslvrOfsLrnRtn_Value
            (rtb_VeRTMC_b_DsblMtr_OITR_f);
    }

    /* End of Switch: '<S37>/Switch18' */

    /* SignalConversion generated from: '<S37>/DsblMtrB_PxPy' */
#if Rte_SysCon_Variant_RTMR_1

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' */
    rtb_VeRTMC_b_DsblMtr_OITR_f = RTMR_ac_B.VeRTMC_b_DsblMtrB;

#else

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtrB_PxPy'
     */
    rtb_VeRTMC_b_DsblMtr_OITR_f = false;

#endif

    /* End of SignalConversion generated from: '<S37>/DsblMtrB_PxPy' */

    /* SignalConversion generated from: '<S37>/DsblMtrB_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtrB_ROL_MtrB'
     * */
#if Rte_SysCon_Variant_RTMR_7

    /* VariantMerge generated from: '<S37>/DsblMtrB_ROL_MtrA' */
    rtb_VeRTMC_b_DsblMtrB = RTMR_ac_B.VeRTMC_b_DsblMtrB_f;

    /* VariantMerge generated from: '<S37>/DsblMtrB_ROL_MtrB' */
    rtb_VeRTMC_b_DsblMtrB_d = RTMR_ac_B.VeRTMC_b_DsblMtrB_p;

#else

    /* VariantMerge generated from: '<S37>/DsblMtrB_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtrB_ROL_MtrA'
     */
    rtb_VeRTMC_b_DsblMtrB = false;

    /* VariantMerge generated from: '<S37>/DsblMtrB_ROL_MtrB' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtrB_ROL_MtrB'
     */
    rtb_VeRTMC_b_DsblMtrB_d = false;

#endif

    /* End of SignalConversion generated from: '<S37>/DsblMtrB_ROL_MtrA' */

    /* Switch: '<S37>/Switch19' incorporates:
     *  Switch: '<S37>/Switch20'
     */
    if (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes)
    {
        /* SignalConversion generated from: '<S12>/DsblMtrB_ROL' incorporates:
         *  Outport: '<Root>/VeRTMR_b_DsblMtrB'
         */
        (void)Rte_Write_VeRTMR_b_DsblMtrB_Value(rtb_VeRTMC_b_DsblMtr_OITR_f);
    }
    else if (rtb_TmpSignalConversionAtROLRoutine_MtrA)
    {
        /* SignalConversion generated from: '<S12>/DsblMtrB_ROL' incorporates:
         *  Outport: '<Root>/VeRTMR_b_DsblMtrB'
         *  Switch: '<S37>/Switch20'
         */
        (void)Rte_Write_VeRTMR_b_DsblMtrB_Value(rtb_VeRTMC_b_DsblMtrB);
    }
    else
    {
        /* SignalConversion generated from: '<S12>/DsblMtrB_ROL' incorporates:
         *  Outport: '<Root>/VeRTMR_b_DsblMtrB'
         *  Switch: '<S37>/Switch20'
         */
        (void)Rte_Write_VeRTMR_b_DsblMtrB_Value(rtb_VeRTMC_b_DsblMtrB_d);
    }

    /* End of Switch: '<S37>/Switch19' */

    /* SignalConversion generated from: '<S37>/DsblMtrA_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtrA_ROL_MtrB'
     * */
#if Rte_SysCon_Variant_RTMR_7

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' */
    rtb_VeRTMC_b_DsblMtr_OITR_f = RTMR_ac_B.VeRTMC_b_DsblMtrA_o;

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrB' */
    rtb_VeRTMC_b_DsblMtr_OITR = RTMR_ac_B.VeRTMC_b_DsblMtrA;

#else

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtrA_ROL_MtrA'
     */
    rtb_VeRTMC_b_DsblMtr_OITR_f = false;

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrB' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtrA_ROL_MtrB'
     */
    rtb_VeRTMC_b_DsblMtr_OITR = false;

#endif

    /* End of SignalConversion generated from: '<S37>/DsblMtrA_ROL_MtrA' */

    /* Switch: '<S37>/Switch21' */
    if (rtb_TmpSignalConversionAtROLRoutine_MtrA)
    {
        /* SignalConversion generated from: '<S12>/DsblMtrA_ROL' incorporates:
         *  Outport: '<Root>/VeRTMR_b_DsblMtrA'
         */
        (void)Rte_Write_VeRTMR_b_DsblMtrA_Value(rtb_VeRTMC_b_DsblMtr_OITR_f);
    }
    else
    {
        /* SignalConversion generated from: '<S12>/DsblMtrA_ROL' incorporates:
         *  Outport: '<Root>/VeRTMR_b_DsblMtrA'
         */
        (void)Rte_Write_VeRTMR_b_DsblMtrA_Value(rtb_VeRTMC_b_DsblMtr_OITR);
    }

    /* End of Switch: '<S37>/Switch21' */

    /* SignalConversion generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtr_OITR_ROL_MtrB'
     * */
#if Rte_SysCon_Variant_RTMR_7

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' */
    rtb_VeRTMC_b_DsblMtr_OITR_f = RTMR_ac_B.VeRTMC_b_DsblMtr_OITR_h;

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrB' */
    rtb_VeRTMC_b_DsblMtr_OITR = RTMR_ac_B.VeRTMC_b_DsblMtr_OITR;

#else

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtr_OITR_ROL_MtrA'
     */
    rtb_VeRTMC_b_DsblMtr_OITR_f = false;

    /* VariantMerge generated from: '<S37>/DsblMtr_OITR_ROL_MtrB' incorporates:
     *  SignalConversion generated from: '<S37>/DsblMtr_OITR_ROL_MtrB'
     */
    rtb_VeRTMC_b_DsblMtr_OITR = false;

#endif

    /* End of SignalConversion generated from: '<S37>/DsblMtr_OITR_ROL_MtrA' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/GPFRegen_Test'
     */
    /* RelationalOperator: '<S199>/Comparison2' incorporates:
     *  Chart: '<S187>/GPFRequestRoutine'
     *  Constant: '<S192>/Constant'
     *  Constant: '<S193>/Constant'
     *  Constant: '<S194>/Constant'
     *  DataTypeConversion: '<S190>/DataTypeConversion'
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  Logic: '<S199>/Logical Operator'
     *  RelationalOperator: '<S187>/Comparison1'
     *  RelationalOperator: '<S199>/Comparison1'
     *  RelationalOperator: '<S199>/Comparison3'
     *  RelationalOperator: '<S199>/Comparison4'
     *  RelationalOperator: '<S199>/Comparison8'
     *  SignalConversion generated from: '<S36>/Variant Source1'
     *  SignalConversion generated from: '<S36>/Variant Source2'
     *  SignalConversion generated from: '<S36>/Variant Source'
     *  Switch: '<S189>/Switch'
     *  Switch: '<S189>/Switch1'
     *  Switch: '<S189>/Switch12'
     *  Switch: '<S189>/Switch2'
     *  Switch: '<S189>/Switch3'
     *  Switch: '<S189>/Switch4'
     *  Switch: '<S189>/Switch6'
     * */
#if Rte_SysCon_Variant_RTMR_3

    /* Outputs for Atomic SubSystem: '<S187>/Turn_Off_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S187>/Turn_Off_Delay_Time1' */
    /* RelationalOperator: '<S199>/Comparison2' incorporates:
     *  Constant: '<S212>/Constant'
     *  SignalConversion generated from: '<S12>/VeESSR_e_EngStartStopSt'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EnaRes = (((uint32)
        RTMR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
        CeESSR_e_EngRunning);

    /* RelationalOperator: '<S199>/Comparison1' incorporates:
     *  Constant: '<S210>/Constant'
     *  SignalConversion generated from: '<S12>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_VeRTMC_b_DsblMtrB = (((uint32)
        RTMR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans) ==
        CeTRGR_e_TransRangePark);
    if (rtb_VeRTMC_b_DsblMtrB)
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S203>/FixPt Bitwise Operator1'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_ij = (uint8)
            ((rtb_TmpSignalConversionAtVeRTMR_b_EnaRes ? ((uint8)1) : ((uint8)0))
             | ((uint8)2));
    }
    else
    {
        /* Switch: '<S189>/Switch1' */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_ij =
            rtb_TmpSignalConversionAtVeRTMR_b_EnaRes ? ((uint8)1) : ((uint8)0);
    }

    /* RelationalOperator: '<S199>/Comparison3' incorporates:
     *  Constant: '<S214>/Calib'
     */
    rtb_VeRTMC_b_DsblMtrB_d =
        (RTMR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdSign <
         KeRTMR_v_MaxVhlSpd_GPF);
    if (rtb_VeRTMC_b_DsblMtrB_d)
    {
        /* Switch: '<S189>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S205>/FixPt Bitwise Operator1'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_ij |= (uint8)4;
    }

    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value(&tmpRead_8);

    /* RelationalOperator: '<S199>/Comparison8' incorporates:
     *  Constant: '<S213>/Calib'
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu = (tmpRead_8 <
        KeRTMR_Pct_MaxAccPdlPos_GPF);
    if (rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu)
    {
        /* Switch: '<S189>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S206>/FixPt Bitwise Operator1'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_ij |= (uint8)8;
    }

    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&tmpRead_9);

    /* UnitDelay: '<S215>/Unit Delay' incorporates:
     *  Constant: '<S211>/Constant'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EOLClu = (((uint32)tmpRead_9) !=
        CePMDR_e_PowerMode_Off);
    if (rtb_TmpSignalConversionAtVeRTMR_b_EOLClu)
    {
        /* Switch: '<S189>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S207>/FixPt Bitwise Operator1'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_ij |= (uint8)16;
    }

    if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* VariantMerge generated from: '<S36>/Variant Source2' incorporates:
         *  S-Function (sfix_bitop): '<S204>/FixPt Bitwise Operator1'
         *  Switch: '<S189>/Switch5'
         */
        RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_ij |= (uint8)32;
    }

    /* Logic: '<S199>/Logical Operator' */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel =
        (((((rtb_TmpSignalConversionAtVeRTMR_b_EnaRes && rtb_VeRTMC_b_DsblMtrB) &&
            rtb_VeRTMC_b_DsblMtrB_d) && rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu)
          && rtb_TmpSignalConversionAtVeRTMR_b_EOLClu) &&
         rtb_TmpSignalConversionAtVePLTR_b_InFiel);

    /* Outputs for Atomic SubSystem: '<S201>/EdgeFalling' */
    /* Logic: '<S216>/AND' incorporates:
     *  Logic: '<S216>/OR1'
     *  UnitDelay: '<S216>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EnaRes =
        ((!rtb_TmpSignalConversionAtVePLTR_b_InFiel) &&
         (RTMR_ac_DW.UnitDelay_DSTATE_lp));

    /* Update for UnitDelay: '<S216>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_lp = rtb_TmpSignalConversionAtVePLTR_b_InFiel;

    /* End of Outputs for SubSystem: '<S201>/EdgeFalling' */

    /* Switch: '<S201>/Switch' incorporates:
     *  Constant: '<S197>/Calib'
     *  Constant: '<S198>/Calib'
     *  Constant: '<S201>/Constant Value1'
     *  MinMax: '<S201>/Minimum'
     *  Sum: '<S201>/Summation'
     *  UnitDelay: '<S201>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes)
    {
        RTMR_ac_DW.UnitDelay_DSTATE = KeRTMR_t_GPFRuotEnblDelay;
    }
    else
    {
        RTMR_ac_DW.UnitDelay_DSTATE = fmaxf(RTMR_ac_DW.UnitDelay_DSTATE -
            KeRTMR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S201>/Switch' */

    /* Logic: '<S201>/AND' incorporates:
     *  Constant: '<S201>/Constant Value2'
     *  RelationalOperator: '<S201>/Greater  Than'
     *  UnitDelay: '<S201>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel =
        (rtb_TmpSignalConversionAtVePLTR_b_InFiel ||
         (RTMR_ac_DW.UnitDelay_DSTATE > 0.0F));

    /* Gateway: RTMR_MedTED/GPFRegen_Test/GPFRegen_Test/GPFRequestRoutine */
    /* During: RTMR_MedTED/GPFRegen_Test/GPFRegen_Test/GPFRequestRoutine */
    if (((uint32)RTMR_ac_DW.is_active_c19_RTMR_ac) == 0U)
    {
        /* Entry: RTMR_MedTED/GPFRegen_Test/GPFRegen_Test/GPFRequestRoutine */
        RTMR_ac_DW.is_active_c19_RTMR_ac = 1U;

        /* Entry Internal: RTMR_MedTED/GPFRegen_Test/GPFRegen_Test/GPFRequestRoutine */
        /* Transition: '<S195>:2' */
        RTMR_ac_DW.is_c19_RTMR_ac = RTMR_ac_IN_STOP;

        /* Entry 'STOP': '<S195>:1' */
        RTMR_ac_B.Status_b = CeRTMR_e_GPFRegenSts_Stopped;
    }
    else
    {
        switch (RTMR_ac_DW.is_c19_RTMR_ac)
        {
          case RTMR_ac_IN_ABORTED:
            /* During 'ABORTED': '<S195>:5' */
            if (!rtb_TmpSignalConversionAtVeRTMR_b_GPFReg)
            {
                /* Transition: '<S195>:21' */
                RTMR_ac_DW.is_c19_RTMR_ac = RTMR_ac_IN_STOP;

                /* Entry 'STOP': '<S195>:1' */
                RTMR_ac_B.Status_b = CeRTMR_e_GPFRegenSts_Stopped;
            }
            else
            {
                if (((rtb_TmpSignalConversionAtVePLTR_b_InFiel ? 1 : 0) &
                        ((sint32)VeRTMR_b_GPFRegenRequestFlag)) != 0)
                {
                    /* Transition: '<S195>:28' */
                    RTMR_ac_DW.is_c19_RTMR_ac = RTMR_ac_IN_START;

                    /* Entry 'START': '<S195>:6' */
                    RTMR_ac_B.Status_b = CeRTMR_e_GPFRegenSts_Start;
                }
            }
            break;

          case RTMR_ac_IN_START:
            /* During 'START': '<S195>:6' */
            if (!rtb_TmpSignalConversionAtVeRTMR_b_GPFReg)
            {
                /* Transition: '<S195>:19' */
                RTMR_ac_DW.is_c19_RTMR_ac = RTMR_ac_IN_STOP;

                /* Entry 'STOP': '<S195>:1' */
                RTMR_ac_B.Status_b = CeRTMR_e_GPFRegenSts_Stopped;
            }
            else
            {
                if (!rtb_TmpSignalConversionAtVePLTR_b_InFiel)
                {
                    /* Transition: '<S195>:27' */
                    RTMR_ac_DW.is_c19_RTMR_ac = RTMR_ac_IN_ABORTED;

                    /* Entry 'ABORTED': '<S195>:5' */
                    RTMR_ac_B.Status_b = CeRTMR_e_GPFRegenSts_Aborted;
                    VeRTMR_b_GPFRegenRequestFlag = 0U;
                }
            }
            break;

          default:
            /* During 'STOP': '<S195>:1' */
            if (((rtb_TmpSignalConversionAtVeRTMR_b_GPFReg ? 1 : 0) &
                    (rtb_TmpSignalConversionAtVePLTR_b_InFiel ? 1 : 0)) != 0)
            {
                /* Transition: '<S195>:18' */
                RTMR_ac_DW.is_c19_RTMR_ac = RTMR_ac_IN_START;

                /* Entry 'START': '<S195>:6' */
                RTMR_ac_B.Status_b = CeRTMR_e_GPFRegenSts_Start;
            }
            else
            {
                if (((rtb_TmpSignalConversionAtVeRTMR_b_GPFReg ? 1 : 0) &
                        ((sint32)((!rtb_TmpSignalConversionAtVePLTR_b_InFiel) ?
                                  1 : 0))) != 0)
                {
                    /* Transition: '<S195>:20' */
                    RTMR_ac_DW.is_c19_RTMR_ac = RTMR_ac_IN_ABORTED;

                    /* Entry 'ABORTED': '<S195>:5' */
                    RTMR_ac_B.Status_b = CeRTMR_e_GPFRegenSts_Aborted;
                    VeRTMR_b_GPFRegenRequestFlag = 0U;
                }
            }
            break;
        }
    }

    /* RelationalOperator: '<S187>/Comparison1' incorporates:
     *  Constant: '<S191>/Constant'
     *  Constant: '<S192>/Constant'
     *  Constant: '<S193>/Constant'
     *  Constant: '<S194>/Constant'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_GPFReg = (((uint32)RTMR_ac_B.Status_b) ==
        CeRTMR_e_GPFRegenSts_Start);

    /* VariantMerge generated from: '<S36>/Variant Source1' */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_gx = RTMR_ac_B.Status_b;

    /* Outputs for Atomic SubSystem: '<S200>/EdgeFalling' */
    /* Logic: '<S215>/AND' incorporates:
     *  Logic: '<S215>/OR1'
     *  UnitDelay: '<S215>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel =
        ((!rtb_TmpSignalConversionAtVeRTMR_b_GPFReg) &&
         (RTMR_ac_DW.UnitDelay_DSTATE_ge));

    /* Update for UnitDelay: '<S215>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_ge = rtb_TmpSignalConversionAtVeRTMR_b_GPFReg;

    /* End of Outputs for SubSystem: '<S200>/EdgeFalling' */

    /* Switch: '<S200>/Switch' incorporates:
     *  Constant: '<S196>/Calib'
     *  Constant: '<S198>/Calib'
     *  Constant: '<S200>/Constant Value1'
     *  MinMax: '<S200>/Minimum'
     *  Sum: '<S200>/Summation'
     *  UnitDelay: '<S200>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        RTMR_ac_DW.UnitDelay_DSTATE_e = KeRTMR_t_GPFRegenTestDelay;
    }
    else
    {
        RTMR_ac_DW.UnitDelay_DSTATE_e = fmaxf(RTMR_ac_DW.UnitDelay_DSTATE_e -
            KeRTMR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S200>/Switch' */

    /* Logic: '<S200>/AND' incorporates:
     *  Constant: '<S200>/Constant Value2'
     *  RelationalOperator: '<S200>/Greater  Than'
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu =
        (rtb_TmpSignalConversionAtVeRTMR_b_GPFReg ||
         (RTMR_ac_DW.UnitDelay_DSTATE_e > 0.0F));

    /* VariantMerge generated from: '<S36>/Variant Source' */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h =
        rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu;

    /* End of Outputs for SubSystem: '<S187>/Turn_Off_Delay_Time1' */
    /* End of Outputs for SubSystem: '<S187>/Turn_Off_Delay_Time' */
#else

    /* VariantMerge generated from: '<S36>/Variant Source1' incorporates:
     *  Constant: '<S217>/Constant'
     *  SignalConversion generated from: '<S36>/Variant Source1'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_gx =
        CeRTMR_e_GPFRegenSts_Stopped;

    /* VariantMerge generated from: '<S36>/Variant Source2' incorporates:
     *  Constant: '<S188>/Constant_Value'
     *  SignalConversion generated from: '<S36>/Variant Source2'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_ij = 0U;

    /* VariantMerge generated from: '<S36>/Variant Source' incorporates:
     *  Constant: '<S188>/FALSE_Constant2'
     *  SignalConversion generated from: '<S36>/Variant Source'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h = false;

#endif

    /* End of RelationalOperator: '<S199>/Comparison2' */
#if Rte_SysCon_Variant_RTMR_8

    /* Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrC_InvrtrSt_Value(&tmpRead_i);

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value(&tmpRead_e);

    /* Outputs for Function Call SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */
    /* RelationalOperator: '<S979>/Comparison3' incorporates:
     *  Constant: '<S1000>/Constant'
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = (((uint32)tmpRead_e) ==
        CeHVTR_e_Closed);

    /* SignalConversion generated from: '<S979>/Selector' */
    rtb_TmpSignalConversionAtVeINVR[0] =
        rtb_TmpSignalConversionAtVeINVR_e_MtrA_I;
    rtb_TmpSignalConversionAtVeINVR[1] =
        rtb_TmpSignalConversionAtVeINVR_e_MtrB_I;
    rtb_TmpSignalConversionAtVeINVR[2] = tmpRead_i;

    /* RelationalOperator: '<S979>/Comparison4' incorporates:
     *  Constant: '<S1001>/Constant'
     *  Constant: '<S1004>/Calib'
     *  Selector: '<S979>/Selector'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EnaRes = (((uint32)
        rtb_TmpSignalConversionAtVeINVR[KaRTMR_i_SelectMtrInvrtrSts]) ==
        CeINVR_e_NormalPowerStageOn);

    /* Switch: '<S996>/Switch1' */
    if (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes)
    {
        /* Switch: '<S996>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S1009>/FixPt Bitwise Operator1'
         *  Switch: '<S996>/Switch'
         */
        RTMR_ac_B.Switch6 = (uint8)((rtb_TmpSignalConversionAtVePLTR_b_InFiel ?
            ((uint8)1) : ((uint8)0)) | ((uint8)2));
    }
    else
    {
        /* Switch: '<S996>/Switch1' incorporates:
         *  Switch: '<S996>/Switch'
         */
        RTMR_ac_B.Switch6 = rtb_TmpSignalConversionAtVePLTR_b_InFiel ? ((uint8)1)
            : ((uint8)0);
    }

    /* End of Switch: '<S996>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */

    /* Inport: '<Root>/VePMDR_e_PowerModeRaw' */
    (void)Rte_Read_VePMDR_e_PowerModeRaw_Value(&tmpRead_c);

    /* Outputs for Function Call SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */
    /* RelationalOperator: '<S979>/Comparison5' incorporates:
     *  Constant: '<S1002>/Constant'
     *  Inport: '<Root>/VePMDR_e_PowerModeRaw'
     */
    rtb_VeRTMC_b_DsblMtrB = (((uint32)tmpRead_c) == CePMDR_e_PowerMode_Run);

    /* Switch: '<S996>/Switch2' */
    if (rtb_VeRTMC_b_DsblMtrB)
    {
        /* Switch: '<S996>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S1011>/FixPt Bitwise Operator1'
         */
        RTMR_ac_B.Switch6 |= (uint8)4;
    }

    /* End of Switch: '<S996>/Switch2' */

    /* RelationalOperator: '<S979>/Comparison2' incorporates:
     *  Constant: '<S999>/Constant'
     *  SignalConversion generated from: '<S12>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_VeRTMC_b_DsblMtrB_d = (((uint32)
        RTMR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans) ==
        CeTRGR_e_TransRangePark);

    /* Switch: '<S996>/Switch3' */
    if (rtb_VeRTMC_b_DsblMtrB_d)
    {
        /* Switch: '<S996>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S1012>/FixPt Bitwise Operator1'
         */
        RTMR_ac_B.Switch6 |= (uint8)8;
    }

    /* End of Switch: '<S996>/Switch3' */
    /* End of Outputs for SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */

    /* Inport: '<Root>/VePLTR_e_EPBHoldSts' */
    (void)Rte_Read_VePLTR_e_EPBHoldSts_Value(&tmpRead_d);

    /* Outputs for Function Call SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */
    /* RelationalOperator: '<S979>/Comparison6' incorporates:
     *  Constant: '<S1003>/Constant'
     *  Inport: '<Root>/VePLTR_e_EPBHoldSts'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu = (((uint32)tmpRead_d) ==
        CePLTR_e_EPBHoldSts_APPLIED);

    /* Switch: '<S996>/Switch4' */
    if (rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu)
    {
        /* Switch: '<S996>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S1013>/FixPt Bitwise Operator1'
         */
        RTMR_ac_B.Switch6 |= (uint8)16;
    }

    /* End of Switch: '<S996>/Switch4' */
    /* End of Outputs for SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */

    /* Inport: '<Root>/VeADIR_b_WEDFailuresTARoutine' */
    (void)Rte_Read_VeADIR_b_WEDFailuresTARoutine_Value(&Comparison8);

    /* Outputs for Function Call SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */
    /* UnitDelay: '<S1075>/Unit Delay' incorporates:
     *  Logic: '<S979>/Logical2'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_GPFReg = !Comparison8;

    /* Switch: '<S996>/Switch12' */
    if (rtb_TmpSignalConversionAtVeRTMR_b_GPFReg)
    {
        /* Switch: '<S996>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S1010>/FixPt Bitwise Operator1'
         */
        RTMR_ac_B.Switch6 |= (uint8)32;
    }

    /* End of Switch: '<S996>/Switch12' */

    /* RelationalOperator: '<S979>/Comparison8' incorporates:
     *  Constant: '<S1007>/KeVLDR_U_SysVltUprLim'
     *  S-Function (sfix_bitop): '<S979>/Bitwise Operator'
     */
    Comparison8 = ((RTMR_ac_B.Switch6 & KeRTMR_y_SelectPreCondsTOCheck) ==
                   KeRTMR_y_SelectPreCondsTOCheck);

    /* Switch: '<S997>/Switch1' incorporates:
     *  Logic: '<S979>/Logical9'
     */
    if (!rtb_TmpSignalConversionAtVeRTMR_b_EnaRes)
    {
        /* Switch: '<S997>/Switch1' incorporates:
         *  Logic: '<S979>/Logical10'
         *  S-Function (sfix_bitop): '<S1017>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_oo = (uint16)((sint32)(((sint32)
            ((!rtb_TmpSignalConversionAtVePLTR_b_InFiel) ? 1 : 0)) | ((uint8)2)));
    }
    else
    {
        /* Switch: '<S997>/Switch1' incorporates:
         *  Logic: '<S979>/Logical10'
         */
        rtb_Switch1_oo = (uint16)((!rtb_TmpSignalConversionAtVePLTR_b_InFiel) ?
            1 : 0);
    }

    /* End of Switch: '<S997>/Switch1' */

    /* Switch: '<S997>/Switch2' incorporates:
     *  Logic: '<S979>/Logical8'
     */
    if (!rtb_VeRTMC_b_DsblMtrB)
    {
        /* Switch: '<S997>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S1024>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_oo |= (uint16)4;
    }

    /* End of Switch: '<S997>/Switch2' */

    /* Switch: '<S997>/Switch3' incorporates:
     *  Logic: '<S979>/Logical7'
     */
    if (!rtb_VeRTMC_b_DsblMtrB_d)
    {
        /* Switch: '<S997>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S1025>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_oo |= (uint16)8;
    }

    /* End of Switch: '<S997>/Switch3' */

    /* Switch: '<S997>/Switch4' incorporates:
     *  Logic: '<S979>/Logical6'
     */
    if (!rtb_TmpSignalConversionAtVeRTMR_b_AE_Clu)
    {
        /* Switch: '<S997>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S1026>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_oo |= (uint16)16;
    }

    /* End of Switch: '<S997>/Switch4' */

    /* Switch: '<S997>/Switch12' incorporates:
     *  Logic: '<S979>/Logical5'
     */
    if (!rtb_TmpSignalConversionAtVeRTMR_b_GPFReg)
    {
        /* Switch: '<S997>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S1020>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_oo |= (uint16)32;
    }

    /* End of Switch: '<S997>/Switch12' */

    /* Outputs for Atomic SubSystem: '<S979>/EdgeBi' */
    /* RelationalOperator: '<S998>/Not Equal' incorporates:
     *  UnitDelay: '<S998>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EnaRes =
        (rtb_TmpSignalConversionAtVeHPMR_b_PropSy !=
         RTMR_ac_DW.UnitDelay_DSTATE_id);

    /* Update for UnitDelay: '<S998>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_id = rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

    /* End of Outputs for SubSystem: '<S979>/EdgeBi' */

    /* Switch: '<S997>/Switch6' */
    if (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes)
    {
        /* Switch: '<S997>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S1028>/FixPt Bitwise Operator1'
         *  Switch: '<S997>/Switch5'
         */
        rtb_Switch1_oo |= (uint16)128;
    }

    /* End of Switch: '<S997>/Switch6' */

    /* UnitDelay: '<S1075>/Unit Delay' incorporates:
     *  Constant: '<S1005>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S1006>/KeVLDR_U_SysVltUprLim'
     *  Logic: '<S979>/Logical1'
     *  Logic: '<S979>/Logical11'
     *  RelationalOperator: '<S979>/Comparison1'
     *  RelationalOperator: '<S979>/Comparison7'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_GPFReg =
        ((rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy >= KeRTMR_U_SysVltUprLim) ||
         (rtb_TmpSignalConversionAtVePMDR_U_BF1_Sy <= KeRTMR_U_SysVltLwrLim));

    /* Switch: '<S997>/Switch7' */
    if (rtb_TmpSignalConversionAtVeRTMR_b_GPFReg)
    {
        /* Switch: '<S997>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S1029>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_oo |= (uint16)256;
    }

    /* End of Switch: '<S997>/Switch7' */

    /* Logic: '<S980>/Logical Operator3' incorporates:
     *  Constant: '<S1032>/KeVLDR_U_SysVltLwrLim'
     *  Constant: '<S1033>/KeVLDR_U_SysVltUprLim'
     *  Logic: '<S980>/Logical Operator1'
     *  Logic: '<S980>/Logical Operator2'
     *  RelationalOperator: '<S980>/Comparison1'
     *  RelationalOperator: '<S980>/Comparison2'
     *  RelationalOperator: '<S980>/Comparison3'
     *  RelationalOperator: '<S980>/Comparison7'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
        (((rtb_TmpSignalConversionAtVeADAR_L_LftTAP <= KeRTMR_L_ToothAbutUprLim)
          && (rtb_TmpSignalConversionAtVeADAR_L_LftTAP >=
              KeRTMR_L_ToothAbutLwrLim)) &&
         ((rtb_TmpSignalConversionAtVeADAR_L_RtTAPo <= KeRTMR_L_ToothAbutUprLim)
          && (rtb_TmpSignalConversionAtVeADAR_L_RtTAPo >=
              KeRTMR_L_ToothAbutLwrLim)));

    /* Switch: '<S997>/Switch8' incorporates:
     *  Logic: '<S979>/Logical4'
     */
    if (!rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
    {
        /* Switch: '<S997>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S1030>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_oo |= (uint16)512;
    }

    /* End of Switch: '<S997>/Switch8' */

    /* Switch: '<S997>/Switch10' incorporates:
     *  UnitDelay: '<S41>/Unit Delay'
     */
    if (RTMR_ac_DW.UnitDelay_DSTATE_eb)
    {
        /* Switch: '<S997>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S1018>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_oo |= (uint16)1024;
    }

    /* End of Switch: '<S997>/Switch10' */
    /* End of Outputs for SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */

    /* Inport: '<Root>/VeADAR_e_RightActuationStatus' */
    (void)Rte_Read_VeADAR_e_RightActuationStatus_Value(&tmpRead_b);

    /* Outputs for Function Call SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */
    /* Logic: '<S979>/Logical12' incorporates:
     *  Chart: '<S41>/WED_ToothAbutment_Routine'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = !Comparison8;

    /* Logic: '<S979>/Logical3' incorporates:
     *  Logic: '<S979>/Logical12'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_GPFReg =
        ((rtb_TmpSignalConversionAtVePLTR_b_InFiel ||
          rtb_TmpSignalConversionAtVeRTMR_b_EnaRes) ||
         rtb_TmpSignalConversionAtVeRTMR_b_GPFReg);

    /* Logic: '<S981>/Logical1' incorporates:
     *  Constant: '<S1034>/Constant'
     *  Constant: '<S1037>/Constant'
     *  Inport: '<Root>/VeADAR_e_RightActuationStatus'
     *  RelationalOperator: '<S981>/Comparison1'
     *  RelationalOperator: '<S981>/Comparison6'
     */
    rtb_TmpSignalConversionAtVeRTMR_b_EnaRes = ((((uint32)
        rtb_TmpSignalConversionAtVeADAR_e_LeftAc) == CeADAR_e_SS_Closed) &&
        (((uint32)tmpRead_b) == CeADAR_e_SS_Closed));

    /* Logic: '<S981>/Logical2' incorporates:
     *  Constant: '<S1035>/Constant'
     *  RelationalOperator: '<S981>/Comparison3'
     */
    rtb_VeRTMC_b_DsblMtrB = (((uint32)rtb_TmpSignalConversionAtVeADAR_e_LeftAc) ==
        CeADAR_e_SS_Open);

    /* Chart: '<S41>/WED_ToothAbutment_Routine' incorporates:
     *  Constant: '<S982>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S983>/Calib'
     *  Constant: '<S984>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S985>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S986>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S987>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S988>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S989>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S990>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S991>/KeVLDR_U_SysVltUprLim'
     *  Constant: '<S992>/KeVLDR_U_SysVltUprLim'
     *  DataStoreRead: '<S41>/Data Store Read'
     *  Switch: '<S997>/Switch15'
     */
    /* Gateway: RTMR_MedTED/WED_ToothAbut_ExtToolCmd/WED_ToothAbutment_Routine */
    /* During: RTMR_MedTED/WED_ToothAbut_ExtToolCmd/WED_ToothAbutment_Routine */
    if (((uint32)RTMR_ac_DW.is_active_c16_RTMR_ac) == 0U)
    {
        /* Entry: RTMR_MedTED/WED_ToothAbut_ExtToolCmd/WED_ToothAbutment_Routine */
        RTMR_ac_DW.is_active_c16_RTMR_ac = 1U;

        /* Entry Internal: RTMR_MedTED/WED_ToothAbut_ExtToolCmd/WED_ToothAbutment_Routine */
        /* Transition: '<S995>:2' */
        RTMR_ac_DW.is_c16_RTMR_ac = RTMR_ac_IN_NOT_ACTIVE;

        /* RelationalOperator: '<S1051>/Comparison3' */
        /* Entry 'NOT_ACTIVE': '<S995>:1' */
        RTMR_ac_B.Status = CeRTMR_e_WED_Not_Active;
        VeRTMR_i_WEDTAStatus = 0U;
        RTMR_ac_B.FailureReasonsFreeze = 0U;
        VeRTMC_b_WEDTAOpeningCmd = false;
    }
    else
    {
        switch (RTMR_ac_DW.is_c16_RTMR_ac)
        {
          case RTMR_ac_IN_ACTIVE:
            /* RelationalOperator: '<S1051>/Comparison3' */
            RTMR_ac_B.Status = CeRTMR_e_WED_Active;

            /* During 'ACTIVE': '<S995>:3' */
            if ((rtb_TmpSignalConversionAtVeRTMR_b_GPFReg || (RTMR_ac_B.Timeout))
                || (VeRTMR_Cnt_WEDClosingCount >=
                    KeRTMR_Cnt_WED_MaxNumOfClosures))
            {
                /* Transition: '<S995>:48' */
                /* Exit Internal 'ACTIVE': '<S995>:3' */
                /* Exit Internal 'RoutineProcedure': '<S995>:211' */
                RTMR_ac_DW.is_RoutineProcedure = RTMR_ac_IN_NO_ACTIVE_CHILD;
                RTMR_ac_DW.is_c16_RTMR_ac = RTMR_ac_IN_STOP;

                /* Entry Internal 'STOP': '<S995>:227' */
                /* Transition: '<S995>:230' */
                if ((rtb_TmpSignalConversionAtVePLTR_b_InFiel ||
                        rtb_TmpSignalConversionAtVeRTMR_b_GPFReg) ||
                        (RTMR_ac_B.Timeout))
                {
                    /* Transition: '<S995>:236' */
                    RTMR_ac_B.FailureReasonsFreeze = (uint16)(rtb_Switch1_oo &
                        ((uint16)-513));

                    /*  Mask Bit9 - Tooth Abutment Out of Range in case of
                       Abort OR Timeout */
                    RTMR_ac_DW.is_STOP = RTMR_ac_IN_FAIL;

                    /* RelationalOperator: '<S1051>/Comparison3' incorporates:
                     *  Switch: '<S997>/Switch15'
                     */
                    /* Entry 'FAIL': '<S995>:233' */
                    RTMR_ac_B.Status = CeRTMR_e_WED_Fail;
                    VeRTMR_i_WEDTAStatus = 7U;
                    VeRTMR_b_WED_RequestFlag = false;
                }
                else
                {
                    /* Transition: '<S995>:238' */
                    RTMR_ac_DW.is_STOP = RTMR_ac_IN_WaitTimeBeforeTAResults;

                    /* Entry 'WaitTimeBeforeTAResults': '<S995>:235' */
                    VeRTMR_i_WEDTAStatus = 6U;
                    VeRTMR_t_WaitTime = 0.0F;
                }
            }
            else
            {
                /* During 'RoutineProcedure': '<S995>:211' */
                switch (RTMR_ac_DW.is_RoutineProcedure)
                {
                  case RTMR_ac_IN_WEDFirstClosingRequest:
                    VeRTMC_b_WEDTAOpeningCmd = false;
                    VeRTMR_i_WEDTAStatus = 1U;

                    /* During 'WEDFirstClosingRequest': '<S995>:9' */
                    if (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes &&
                            (VeRTMR_t_WaitTime >=
                             KeRTMR_t_WED_WaitTimeFirstOpening))
                    {
                        /* Transition: '<S995>:15' */
                        /*  Timer for End Stop Learning */
                        RTMR_ac_DW.FirstClosingDone = true;
                        RTMR_ac_DW.is_RoutineProcedure =
                            RTMR_ac_IN_WEDOpenRequest;

                        /* Entry 'WEDOpenRequest': '<S995>:16' */
                        VeRTMC_b_WEDTAOpeningCmd = true;
                        VeRTMR_i_WEDTAStatus = 2U;
                        VeRTMR_t_WaitTime = 0.0F;
                    }
                    else if (VeRTMR_t_WaitTime >=
                             KeRTMR_t_WED_FirstClosingTimeout)
                    {
                        /* Transition: '<S995>:81' */
                        RTMR_ac_B.Timeout = true;
                        RTMR_ac_DW.is_RoutineProcedure =
                            RTMR_ac_IN_WEDFirstClosingRequest;

                        /* Entry 'WEDFirstClosingRequest': '<S995>:9' */
                        /*  Go Home Strategy in case WED are open. */
                        VeRTMR_i_WEDTAStatus = 1U;
                        VeRTMR_t_WaitTime = 0.0F;
                    }
                    else
                    {
                        VeRTMR_t_WaitTime = VeRTMR_t_WaitTime + KeRTMR_t_MedTED;
                    }
                    break;

                  case RTMR_ac_IN_WEDCloseRequest:
                    VeRTMC_b_WEDTAOpeningCmd = false;
                    VeRTMR_i_WEDTAStatus = 4U;

                    /* During 'WEDCloseRequest': '<S995>:25' */
                    if (rtb_TmpSignalConversionAtVeRTMR_b_EnaRes)
                    {
                        /* Transition: '<S995>:28' */
                        tmp = ((sint32)VeRTMR_Cnt_WEDClosingCount) + 1;
                        if ((((sint32)VeRTMR_Cnt_WEDClosingCount) + 1) > 255)
                        {
                            tmp = 255;
                        }

                        VeRTMR_Cnt_WEDClosingCount = (uint8)tmp;
                        RTMR_ac_DW.is_RoutineProcedure = RTMR_ac_IN_WEDClosed;

                        /* Entry 'WEDClosed': '<S995>:207' */
                        VeRTMR_i_WEDTAStatus = 5U;
                        VeRTMR_t_WaitTime = 0.0F;
                    }
                    else if (VeRTMR_t_WaitTime >= KeRTMR_t_WED_ClosingTimeout)
                    {
                        /* Transition: '<S995>:43' */
                        RTMR_ac_B.Timeout = true;
                        RTMR_ac_DW.is_RoutineProcedure =
                            RTMR_ac_IN_WEDCloseRequest;

                        /* Entry 'WEDCloseRequest': '<S995>:25' */
                        VeRTMR_i_WEDTAStatus = 4U;
                        VeRTMR_t_WaitTime = 0.0F;
                    }
                    else
                    {
                        VeRTMR_t_WaitTime = VeRTMR_t_WaitTime + KeRTMR_t_MedTED;
                    }
                    break;

                  case RTMR_ac_IN_WEDClosed:
                    VeRTMR_i_WEDTAStatus = 5U;

                    /* During 'WEDClosed': '<S995>:207' */
                    /* Transition: '<S995>:262' */
                    if ((((RTMR_ac_DW.FirstClosingDone) || (((sint32)
                            VeRTMR_Cnt_WEDClosingCount) > 1)) &&
                            (VeRTMR_t_WaitTime >=
                             KeRTMR_t_WED_WaitTimeBeforeOpening)) ||
                            (VeRTMR_t_WaitTime >=
                             KeRTMR_t_WED_WaitTimeFirstClosing))
                    {
                        /* Transition: '<S995>:266' */
                        /* Transition: '<S995>:208' */
                        /* Transition: '<S995>:245' */
                        /*  Timer for End Stop Learning */
                        RTMR_ac_DW.is_RoutineProcedure =
                            RTMR_ac_IN_WEDOpenRequest;

                        /* Entry 'WEDOpenRequest': '<S995>:16' */
                        VeRTMC_b_WEDTAOpeningCmd = true;
                        VeRTMR_i_WEDTAStatus = 2U;
                        VeRTMR_t_WaitTime = 0.0F;
                    }
                    else
                    {
                        VeRTMR_t_WaitTime = VeRTMR_t_WaitTime + KeRTMR_t_MedTED;
                    }
                    break;

                  case RTMR_ac_IN_WEDOpen:
                    VeRTMR_i_WEDTAStatus = 3U;

                    /* During 'WEDOpen': '<S995>:205' */
                    /* Transition: '<S995>:257' */
                    if (((((sint32)VeRTMR_Cnt_WEDClosingCount) > 0) &&
                            (VeRTMR_t_WaitTime >=
                             KeRTMR_t_WED_WaitTimeBeforeClosing)) ||
                            (VeRTMR_t_WaitTime >=
                             KeRTMR_t_WED_WaitTimeFirstOpening))
                    {
                        /* Transition: '<S995>:260' */
                        /* Transition: '<S995>:244' */
                        /* Transition: '<S995>:206' */
                        /*  Timer for End Stop Learning */
                        RTMR_ac_DW.is_RoutineProcedure =
                            RTMR_ac_IN_WEDCloseRequest;

                        /* Entry 'WEDCloseRequest': '<S995>:25' */
                        VeRTMC_b_WEDTAOpeningCmd = false;
                        VeRTMR_i_WEDTAStatus = 4U;
                        VeRTMR_t_WaitTime = 0.0F;
                    }
                    else
                    {
                        VeRTMR_t_WaitTime = VeRTMR_t_WaitTime + KeRTMR_t_MedTED;
                    }
                    break;

                  default:
                    VeRTMC_b_WEDTAOpeningCmd = true;
                    VeRTMR_i_WEDTAStatus = 2U;

                    /* During 'WEDOpenRequest': '<S995>:16' */
                    if (rtb_VeRTMC_b_DsblMtrB)
                    {
                        /* Transition: '<S995>:21' */
                        RTMR_ac_DW.is_RoutineProcedure = RTMR_ac_IN_WEDOpen;

                        /* Entry 'WEDOpen': '<S995>:205' */
                        VeRTMR_i_WEDTAStatus = 3U;
                        VeRTMR_t_WaitTime = 0.0F;
                    }
                    else if (VeRTMR_t_WaitTime >= KeRTMR_t_WED_OpeningTimeout)
                    {
                        /* Transition: '<S995>:109' */
                        RTMR_ac_B.Timeout = true;
                        RTMR_ac_DW.is_RoutineProcedure =
                            RTMR_ac_IN_WEDOpenRequest;

                        /* Entry 'WEDOpenRequest': '<S995>:16' */
                        VeRTMR_i_WEDTAStatus = 2U;
                        VeRTMR_t_WaitTime = 0.0F;
                    }
                    else
                    {
                        VeRTMR_t_WaitTime = VeRTMR_t_WaitTime + KeRTMR_t_MedTED;
                    }
                    break;
                }

                /* During 'RoutineTimeOut': '<S995>:212' */
                /* Transition: '<S995>:225' */
                VeRTMR_t_RoutActvTime = VeRTMR_t_RoutActvTime + KeRTMR_t_MedTED;
                if (VeRTMR_t_RoutActvTime >= KeRTMR_t_WED_RoutineTimeout)
                {
                    /* Transition: '<S995>:217' */
                    RTMR_ac_B.Timeout = true;
                }
                else
                {
                    /* Transition: '<S995>:216' */
                }

                /* Transition: '<S995>:224' */
            }
            break;

          case RTMR_ac_IN_NOT_ACTIVE:
            /* RelationalOperator: '<S1051>/Comparison3' */
            RTMR_ac_B.Status = CeRTMR_e_WED_Not_Active;
            VeRTMR_i_WEDTAStatus = 0U;
            VeRTMC_b_WEDTAOpeningCmd = false;

            /* During 'NOT_ACTIVE': '<S995>:1' */
            if ((VeRTMR_b_WED_RequestFlag) &&
                    rtb_TmpSignalConversionAtVePLTR_b_InFiel)
            {
                /* Transition: '<S995>:47' */
                RTMR_ac_DW.is_c16_RTMR_ac = RTMR_ac_IN_STOP;

                /* Entry Internal 'STOP': '<S995>:227' */
                /* Transition: '<S995>:230' */
                /* Transition: '<S995>:236' */
                RTMR_ac_B.FailureReasonsFreeze = (uint16)(rtb_Switch1_oo &
                    ((uint16)-513));

                /*  Mask Bit9 - Tooth Abutment Out of Range in case of
                   Abort OR Timeout */
                RTMR_ac_DW.is_STOP = RTMR_ac_IN_FAIL;

                /* RelationalOperator: '<S1051>/Comparison3' incorporates:
                 *  Switch: '<S997>/Switch15'
                 */
                /* Entry 'FAIL': '<S995>:233' */
                RTMR_ac_B.Status = CeRTMR_e_WED_Fail;
                VeRTMR_i_WEDTAStatus = 7U;
                VeRTMR_b_WED_RequestFlag = false;
            }
            else
            {
                if ((VeRTMR_b_WED_RequestFlag) && Comparison8)
                {
                    /* Transition: '<S995>:4' */
                    RTMR_ac_DW.is_c16_RTMR_ac = RTMR_ac_IN_ACTIVE;

                    /* RelationalOperator: '<S1051>/Comparison3' */
                    /* Entry 'ACTIVE': '<S995>:3' */
                    RTMR_ac_B.Status = CeRTMR_e_WED_Active;
                    RTMR_ac_B.FailureReasonsFreeze = 0U;
                    VeRTMR_Cnt_WEDClosingCount = 0U;
                    RTMR_ac_B.Timeout = false;
                    RTMR_ac_DW.FirstClosingDone = false;
                    RTMR_ac_enter_internal_ACTIVE(&rtb_VeRTMC_b_DsblMtrB);
                }
            }
            break;

          default:
            /* During 'STOP': '<S995>:227' */
            if (((VeRTMR_b_WED_RequestFlag) && Comparison8) && (((sint32)
                    VeRTMR_i_WEDTAStatus) != 6))
            {
                /* Transition: '<S995>:106' */
                /*  New request can be accepted only if the result has been posted */
                /* Exit Internal 'STOP': '<S995>:227' */
                RTMR_ac_DW.is_STOP = RTMR_ac_IN_NO_ACTIVE_CHILD;
                RTMR_ac_DW.is_c16_RTMR_ac = RTMR_ac_IN_ACTIVE;

                /* RelationalOperator: '<S1051>/Comparison3' */
                /* Entry 'ACTIVE': '<S995>:3' */
                RTMR_ac_B.Status = CeRTMR_e_WED_Active;
                RTMR_ac_B.FailureReasonsFreeze = 0U;
                VeRTMR_Cnt_WEDClosingCount = 0U;
                RTMR_ac_B.Timeout = false;
                RTMR_ac_DW.FirstClosingDone = false;
                RTMR_ac_enter_internal_ACTIVE(&rtb_VeRTMC_b_DsblMtrB);
            }
            else if ((VeRTMR_b_WED_RequestFlag) &&
                     rtb_TmpSignalConversionAtVePLTR_b_InFiel)
            {
                /* Transition: '<S995>:229' */
                /* Exit Internal 'STOP': '<S995>:227' */
                /* Entry Internal 'STOP': '<S995>:227' */
                /* Transition: '<S995>:230' */
                /* Transition: '<S995>:236' */
                RTMR_ac_B.FailureReasonsFreeze = (uint16)(rtb_Switch1_oo &
                    ((uint16)-513));

                /*  Mask Bit9 - Tooth Abutment Out of Range in case of
                   Abort OR Timeout */
                RTMR_ac_DW.is_STOP = RTMR_ac_IN_FAIL;

                /* RelationalOperator: '<S1051>/Comparison3' incorporates:
                 *  Switch: '<S997>/Switch15'
                 */
                /* Entry 'FAIL': '<S995>:233' */
                RTMR_ac_B.Status = CeRTMR_e_WED_Fail;
                VeRTMR_i_WEDTAStatus = 7U;
                VeRTMR_b_WED_RequestFlag = false;
            }
            else
            {
                switch (RTMR_ac_DW.is_STOP)
                {
                  case RTMR_ac_IN_COMPLETE:
                    /* RelationalOperator: '<S1051>/Comparison3' */
                    RTMR_ac_B.Status = CeRTMR_e_WED_Complete;
                    VeRTMR_i_WEDTAStatus = 8U;

                    /* During 'COMPLETE': '<S995>:234' */
                    break;

                  case RTMR_ac_IN_FAIL:
                    /* RelationalOperator: '<S1051>/Comparison3' */
                    RTMR_ac_B.Status = CeRTMR_e_WED_Fail;
                    VeRTMR_i_WEDTAStatus = 7U;

                    /* During 'FAIL': '<S995>:233' */
                    break;

                  default:
                    VeRTMR_i_WEDTAStatus = 6U;

                    /* During 'WaitTimeBeforeTAResults': '<S995>:235' */
                    if (VeRTMR_t_WaitTime >= KeRTMR_t_WED_WaitTimeTAResult)
                    {
                        /* Transition: '<S995>:232' */
                        if (!rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
                        {
                            /* Transition: '<S995>:231' */
                            RTMR_ac_B.FailureReasonsFreeze = 512U;
                            RTMR_ac_DW.is_STOP = RTMR_ac_IN_FAIL;

                            /* RelationalOperator: '<S1051>/Comparison3' */
                            /* Entry 'FAIL': '<S995>:233' */
                            RTMR_ac_B.Status = CeRTMR_e_WED_Fail;
                            VeRTMR_i_WEDTAStatus = 7U;
                            VeRTMR_b_WED_RequestFlag = false;
                        }
                        else
                        {
                            /* Transition: '<S995>:242' */
                            RTMR_ac_DW.is_STOP = RTMR_ac_IN_COMPLETE;

                            /* RelationalOperator: '<S1051>/Comparison3' */
                            /* Entry 'COMPLETE': '<S995>:234' */
                            RTMR_ac_B.Status = CeRTMR_e_WED_Complete;
                            VeRTMR_i_WEDTAStatus = 8U;
                            VeRTMR_b_WED_RequestFlag = false;
                        }
                    }
                    else
                    {
                        VeRTMR_t_WaitTime = VeRTMR_t_WaitTime + KeRTMR_t_MedTED;
                    }
                    break;
                }
            }
            break;
        }
    }

    /* If: '<S1051>/If' incorporates:
     *  Constant: '<S1054>/Constant'
     *  Constant: '<S1055>/Constant'
     *  Constant: '<S1056>/Constant'
     *  Constant: '<S1057>/Constant'
     *  RelationalOperator: '<S1051>/Comparison1'
     *  RelationalOperator: '<S1051>/Comparison2'
     *  RelationalOperator: '<S1051>/Comparison3'
     *  RelationalOperator: '<S1051>/Comparison4'
     */
    if (((uint32)RTMR_ac_B.Status) == CeRTMR_e_WED_Not_Active)
    {
        /* Outputs for IfAction SubSystem: '<S1051>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1058>/Action Port'
         */
        /* Merge: '<S1051>/Merge2' incorporates:
         *  DataStoreRead: '<S1058>/Data Store Read1'
         */
        RTMR_ac_B.Merge2 = AeRTMR_e_WED_ToothAbutResult;

        /* If: '<S1058>/If' incorporates:
         *  Constant: '<S1062>/Constant'
         *  DataStoreRead: '<S1058>/Data Store Read'
         *  Logic: '<S1058>/Logical Operator'
         *  RelationalOperator: '<S1058>/Relational Operator2'
         */
        if ((((uint32)AeRTMR_e_WED_ToothAbutResult) == CeRTMR_e_WED_Passed) &&
                rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
        {
            /* Outputs for IfAction SubSystem: '<S1058>/Pass' incorporates:
             *  ActionPort: '<S1064>/Action Port'
             */
            /* RelationalOperator: '<S1052>/Relational Operator1' incorporates:
             *  Constant: '<S1066>/Constant'
             *  Merge: '<S1051>/Merge1'
             *  SignalConversion generated from: '<S1064>/FaultSts'
             */
            RTMR_ac_B.Merge1_b = CeDFIB_e_Pass;

            /* End of Outputs for SubSystem: '<S1058>/Pass' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1058>/Fail' incorporates:
             *  ActionPort: '<S1063>/Action Port'
             */
            /* RelationalOperator: '<S1052>/Relational Operator1' incorporates:
             *  Constant: '<S1065>/Constant'
             *  Merge: '<S1051>/Merge1'
             *  SignalConversion generated from: '<S1063>/FaultSts'
             */
            RTMR_ac_B.Merge1_b = CeDFIB_e_Fail;

            /* End of Outputs for SubSystem: '<S1058>/Fail' */
        }

        /* End of If: '<S1058>/If' */
        /* End of Outputs for SubSystem: '<S1051>/If Action Subsystem' */
    }
    else if (((uint32)RTMR_ac_B.Status) == CeRTMR_e_WED_Active)
    {
        /* Outputs for IfAction SubSystem: '<S1051>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1059>/Action Port'
         */
        /* Merge: '<S1051>/Merge2' incorporates:
         *  Constant: '<S1067>/Constant'
         *  SignalConversion generated from: '<S1059>/WEDToothAbutResults_2'
         */
        RTMR_ac_B.Merge2 = CeRTMR_e_WED_InProgress;

        /* End of Outputs for SubSystem: '<S1051>/If Action Subsystem1' */
    }
    else if (((uint32)RTMR_ac_B.Status) == CeRTMR_e_WED_Fail)
    {
        /* Outputs for IfAction SubSystem: '<S1051>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1060>/Action Port'
         */
        /* Merge: '<S1051>/Merge2' incorporates:
         *  Constant: '<S1069>/Constant'
         *  SignalConversion generated from: '<S1060>/WEDToothAbutResults_3'
         */
        RTMR_ac_B.Merge2 = CeRTMR_e_WED_Failed;

        /* RelationalOperator: '<S1052>/Relational Operator1' incorporates:
         *  Constant: '<S1068>/Constant'
         *  Merge: '<S1051>/Merge1'
         *  SignalConversion generated from: '<S1060>/FaultSts_3'
         */
        RTMR_ac_B.Merge1_b = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S1051>/If Action Subsystem2' */
    }
    else
    {
        if (((uint32)RTMR_ac_B.Status) == CeRTMR_e_WED_Complete)
        {
            /* Outputs for IfAction SubSystem: '<S1051>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S1061>/Action Port'
             */
            /* Merge: '<S1051>/Merge2' incorporates:
             *  Constant: '<S1071>/Constant'
             *  SignalConversion generated from: '<S1061>/WEDToothAbutResults_4'
             */
            RTMR_ac_B.Merge2 = CeRTMR_e_WED_Passed;

            /* RelationalOperator: '<S1052>/Relational Operator1' incorporates:
             *  Constant: '<S1070>/Constant'
             *  Merge: '<S1051>/Merge1'
             *  SignalConversion generated from: '<S1061>/FaultSts_4'
             */
            RTMR_ac_B.Merge1_b = CeDFIB_e_Pass;

            /* End of Outputs for SubSystem: '<S1051>/If Action Subsystem3' */
        }
    }

    /* End of If: '<S1051>/If' */

    /* DataStoreWrite: '<S1051>/Data Store Write' incorporates:
     *  Merge: '<S1051>/Merge2'
     */
    AeRTMR_e_WED_ToothAbutResult = RTMR_ac_B.Merge2;

    /* DataTypeConversion: '<S1050>/Data Type Conversion' incorporates:
     *  Merge: '<S1051>/Merge2'
     */
    rtb_TmpSignalConversionAtVeRTMR_y_Reslvr = (uint8)RTMR_ac_B.Merge2;

    /* Outputs for Enabled SubSystem: '<S1050>/Subsystem' incorporates:
     *  EnablePort: '<S1053>/Enable'
     */
    /* RelationalOperator: '<S1050>/Relational Operator' incorporates:
     *  UnitDelay: '<S1050>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeRTMR_y_Reslvr !=
            RTMR_ac_DW.UnitDelay_DSTATE_l3)
    {
        /* Outport: '<Root>/AeRTMR_e_WED_ToothAbutResult_Strimm_Out' incorporates:
         *  Inport: '<S1053>/AeRTMR_e_WED_ToothAbutResult_Out'
         *  Merge: '<S1051>/Merge2'
         */
        (void)
            Rte_Write_AeRTMR_e_WED_ToothAbutResult_AeRTMR_e_WED_ToothAbutResult
            (RTMR_ac_B.Merge2);
    }

    /* End of RelationalOperator: '<S1050>/Relational Operator' */
    /* End of Outputs for SubSystem: '<S1050>/Subsystem' */
    /* End of Outputs for SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&tmpRead_h);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_g);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_WHL_HubDisConMissCal' */
    (void)Rte_Read_VeDMAB_y_StatusByte_WHL_HubDisConMissCal_Value(&tmpRead_f);

    /* Outputs for Function Call SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */
    /* RelationalOperator: '<S1074>/Relational Operator3' incorporates:
     *  Constant: '<S1074>/Constant3'
     *  S-Function (sfix_bitop): '<S1074>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy = ((((uint32)tmpRead_f) & 64U) ==
        0U);

    /* Outputs for Atomic SubSystem: '<S1074>/EdgeFalling1' */
    /* Logic: '<S1075>/AND' incorporates:
     *  Logic: '<S1075>/OR1'
     *  UnitDelay: '<S1075>/Unit Delay'
     */
    Comparison8 = ((!rtb_TmpSignalConversionAtVeHPMR_b_PropSy) &&
                   (RTMR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S1075>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

    /* End of Outputs for SubSystem: '<S1074>/EdgeFalling1' */

    /* If: '<S1074>/If' incorporates:
     *  Constant: '<S1072>/Constant'
     *  Constant: '<S1073>/Constant'
     *  Logic: '<S1052>/Logical Operator'
     *  Logic: '<S1074>/Logical5'
     *  RelationalOperator: '<S1052>/Relational Operator'
     *  RelationalOperator: '<S1052>/Relational Operator1'
     */
    if (Comparison8 || (tmpRead_g || tmpRead_h))
    {
        /* Outputs for IfAction SubSystem: '<S1074>/Init' incorporates:
         *  ActionPort: '<S1077>/Action Port'
         */
        /* Merge: '<S1074>/Merge' incorporates:
         *  Constant: '<S1080>/Constant'
         *  SignalConversion generated from: '<S1077>/e_FaultStsInit'
         */
        RTMR_ac_B.Merge_p = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S1074>/Init' */
    }
    else if (((uint32)RTMR_ac_B.Merge1_b) == CeDFIB_e_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S1074>/Pass' incorporates:
         *  ActionPort: '<S1078>/Action Port'
         */
        /* Merge: '<S1074>/Merge' incorporates:
         *  Constant: '<S1081>/Constant'
         *  SignalConversion generated from: '<S1078>/e_FaultStsPass'
         */
        RTMR_ac_B.Merge_p = CeDFIB_e_Pass;

        /* End of Outputs for SubSystem: '<S1074>/Pass' */
    }
    else
    {
        if (((uint32)RTMR_ac_B.Merge1_b) == CeDFIB_e_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S1074>/Fail' incorporates:
             *  ActionPort: '<S1076>/Action Port'
             */
            /* Merge: '<S1074>/Merge' incorporates:
             *  Constant: '<S1079>/Constant'
             *  SignalConversion generated from: '<S1076>/e_FaultStsFail'
             */
            RTMR_ac_B.Merge_p = CeDFIB_e_Fail;

            /* End of Outputs for SubSystem: '<S1074>/Fail' */
        }
    }

    /* End of If: '<S1074>/If' */

    /* If: '<S993>/If' incorporates:
     *  Constant: '<S1040>/Constant'
     *  Constant: '<S1041>/Constant'
     *  Constant: '<S1042>/Constant'
     *  Logic: '<S993>/Logical Operator'
     *  RelationalOperator: '<S993>/Relational Operator1'
     *  RelationalOperator: '<S993>/Relational Operator2'
     *  RelationalOperator: '<S993>/Relational Operator3'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeADIR_e_WEDExt) == CeADIR_e_Engage) ||
        (((uint32)rtb_TmpSignalConversionAtVeADIR_e_WEDExt) ==
            CeADIR_e_Disengage))
    {
        /* Outputs for IfAction SubSystem: '<S993>/DID_Cmd' incorporates:
         *  ActionPort: '<S1038>/Action Port'
         */
        /* Merge: '<S993>/Merge1' incorporates:
         *  Constant: '<S1038>/FALSE_Constant3'
         *  SignalConversion generated from: '<S1038>/WED_HybTransCmndStEnbl'
         */
        RTMR_ac_B.Merge1 = true;

        /* Switch: '<S1038>/Switch' incorporates:
         *  Constant: '<S1046>/Constant'
         *  RelationalOperator: '<S1038>/Relational Operator1'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeADIR_e_WEDExt) ==
                CeADIR_e_Disengage)
        {
            /* Merge: '<S993>/Merge' incorporates:
             *  Constant: '<S1045>/Constant'
             */
            RTMR_ac_B.Merge_e = CeOHSR_e_RngSel_N;
        }
        else
        {
            /* Merge: '<S993>/Merge' incorporates:
             *  Constant: '<S1044>/Constant'
             */
            RTMR_ac_B.Merge_e = CeOHSR_e_RngSel_G2;
        }

        /* End of Switch: '<S1038>/Switch' */
        /* End of Outputs for SubSystem: '<S993>/DID_Cmd' */
    }
    else if (((uint32)RTMR_ac_B.Status) == CeRTMR_e_WED_Active)
    {
        /* Outputs for IfAction SubSystem: '<S993>/ToothAbutmentCmd' incorporates:
         *  ActionPort: '<S1043>/Action Port'
         */
        /* Merge: '<S993>/Merge1' incorporates:
         *  Constant: '<S1043>/FALSE_Constant3'
         *  SignalConversion generated from: '<S1043>/WED_HybTransCmndStEnbl'
         */
        RTMR_ac_B.Merge1 = true;

        /* Switch: '<S1043>/Switch' */
        if (VeRTMC_b_WEDTAOpeningCmd)
        {
            /* Merge: '<S993>/Merge' incorporates:
             *  Constant: '<S1049>/Constant'
             */
            RTMR_ac_B.Merge_e = CeOHSR_e_RngSel_N;
        }
        else
        {
            /* Merge: '<S993>/Merge' incorporates:
             *  Constant: '<S1048>/Constant'
             */
            RTMR_ac_B.Merge_e = CeOHSR_e_RngSel_G2;
        }

        /* End of Switch: '<S1043>/Switch' */
        /* End of Outputs for SubSystem: '<S993>/ToothAbutmentCmd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S993>/Do_Nothing' incorporates:
         *  ActionPort: '<S1039>/Action Port'
         */
        /* Merge: '<S993>/Merge1' incorporates:
         *  Constant: '<S1039>/FALSE_Constant3'
         *  SignalConversion generated from: '<S1039>/WED_HybTransCmndStEnbl'
         */
        RTMR_ac_B.Merge1 = false;

        /* Merge: '<S993>/Merge' incorporates:
         *  Constant: '<S1047>/Constant'
         *  SignalConversion generated from: '<S1039>/WED_HybTransCmndSt'
         */
        RTMR_ac_B.Merge_e = CeOHSR_e_RngSel_N;

        /* End of Outputs for SubSystem: '<S993>/Do_Nothing' */
    }

    /* End of If: '<S993>/If' */

    /* Update for UnitDelay: '<S41>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_eb = RTMR_ac_B.Timeout;

    /* Update for UnitDelay: '<S1050>/Unit Delay' */
    RTMR_ac_DW.UnitDelay_DSTATE_l3 = rtb_TmpSignalConversionAtVeRTMR_y_Reslvr;

    /* End of Outputs for SubSystem: '<S12>/WED_ToothAbut_ExtToolCmd' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
#endif

    /* Outport: '<Root>/VeRTMR_e_BattRapidChrgCmnd' incorporates:
     *  SignalConversion generated from: '<S12>/BattRapidChrgCmnd'
     *  VariantMerge generated from: '<S35>/Variant Source'
     */
    (void)Rte_Write_VeRTMR_e_BattRapidChrgCmnd_Value
        (RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_hy);

    /* Outport: '<Root>/VeRTMR_P_BattRapidChrgPwrDsrd' incorporates:
     *  SignalConversion generated from: '<S12>/BattRapidChrgPwrDsrd'
     */
    (void)Rte_Write_VeRTMR_P_BattRapidChrgPwrDsrd_Value
        (RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Outport: '<Root>/VeRTMR_e_ClutchLrnType' incorporates:
     *  SignalConversion generated from: '<S12>/ClutchLrnType'
     *  VariantMerge generated from: '<S40>/Variant Source5'
     */
    (void)Rte_Write_VeRTMR_e_ClutchLrnType_Value
        (RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_hn);

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/OvrdArbitration'
     */
    /* Switch: '<S37>/Switch22' */
    if (rtb_TmpSignalConversionAtROLRoutine_MtrA)
    {
        /* Outport: '<Root>/VeRTMR_b_DsblMtr_OITR' incorporates:
         *  SignalConversion generated from: '<S12>/DsblMtr_OITR'
         */
        (void)Rte_Write_VeRTMR_b_DsblMtr_OITR_Value(rtb_VeRTMC_b_DsblMtr_OITR_f);
    }
    else
    {
        /* Outport: '<Root>/VeRTMR_b_DsblMtr_OITR' incorporates:
         *  SignalConversion generated from: '<S12>/DsblMtr_OITR'
         */
        (void)Rte_Write_VeRTMR_b_DsblMtr_OITR_Value(rtb_VeRTMC_b_DsblMtr_OITR);
    }

    /* End of Switch: '<S37>/Switch22' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_b_EOL_K0_LrnEnbl' incorporates:
     *  SignalConversion generated from: '<S12>/EOL_K0_LrnEnbl'
     */
    (void)Rte_Write_VeRTMR_b_EOL_K0_LrnEnbl_Value
        (RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_j);

    /* Outport: '<Root>/VeRTMR_b_GPFRegenTestEnbl' incorporates:
     *  SignalConversion generated from: '<S12>/GPFRegenTestEnbl'
     */
    (void)Rte_Write_VeRTMR_b_GPFRegenTestEnbl_Value
        (RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h);

    /* Outport: '<Root>/VeRTMR_e_GPFRegenTestSts' incorporates:
     *  SignalConversion generated from: '<S12>/GPFRegenTestStatus'
     *  VariantMerge generated from: '<S36>/Variant Source1'
     */
    (void)Rte_Write_VeRTMR_e_GPFRegenTestSts_Value
        (RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_gx);

    /* Outport: '<Root>/VeRTMR_y_GPFRegenTstCndtnCheck' incorporates:
     *  SignalConversion generated from: '<S12>/GPFRegenTstCndtnCheck'
     */
    (void)Rte_Write_VeRTMR_y_GPFRegenTstCndtnCheck_Value
        (RTMR_ac_B.VariantMerge_For_Variant_Source_Varia_ij);

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/Rolls_Test'
     */
    /* Outport: '<Root>/VeRTMR_b_InPlantMode' incorporates:
     *  Logic: '<S386>/AND'
     *  SignalConversion generated from: '<S12>/InPlantMode'
     */
    (void)Rte_Write_VeRTMR_b_InPlantMode_Value(VeRTMC_b_InPlantMode);

    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_n_NiMin_BattRapidChrg' incorporates:
     *  SignalConversion generated from: '<S12>/NiMin_BattRapidChrg'
     */
    (void)Rte_Write_VeRTMR_n_NiMin_BattRapidChrg_Value
        (RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_i);

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/OvrdArbitration'
     */
    /* Switch: '<S37>/Switch' incorporates:
     *  Constant: '<S218>/Calib'
     *  Constant: '<S220>/Calib'
     *  Switch: '<S37>/Switch1'
     *  Switch: '<S37>/Switch12'
     *  Switch: '<S37>/Switch13'
     *  Switch: '<S37>/Switch2'
     */
    if (KeRTMR_b_OvrdForceEngineStartStopEnbl)
    {
        rtb_UnitDelay1_p = KeRTMR_b_ForceEngineStartStopEnbl;
    }
    else if (rtb_VeRTMC_b_ForceAutoStopStartEnbl_ROL)
    {
        /* Switch: '<S37>/Switch1' */
        rtb_UnitDelay1_p = true;
    }
    else if (rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrB)
    {
        /* Switch: '<S37>/Switch12' incorporates:
         *  Switch: '<S37>/Switch1'
         */
        rtb_UnitDelay1_p = true;
    }
    else if (rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrA)
    {
        /* Switch: '<S37>/Switch13' incorporates:
         *  Switch: '<S37>/Switch1'
         *  Switch: '<S37>/Switch12'
         */
        rtb_UnitDelay1_p = true;
    }
    else
    {
        rtb_UnitDelay1_p = ((VeRTMR_b_StartStopEnbl_ClutchLrn) ||
                            (VeRTMC_b_ForceAutoStopStartEnbl));
    }

    /* End of Switch: '<S37>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_b_ForceAutoStopStartEnbl' incorporates:
     *  SignalConversion generated from: '<S12>/OvrdArbitration_ForceEngineStartStopEnbl'
     */
    (void)Rte_Write_VeRTMR_b_ForceAutoStopStartEnbl_Value(rtb_UnitDelay1_p);

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/OvrdArbitration'
     */
    /* Switch: '<S37>/Switch3' incorporates:
     *  Constant: '<S221>/Calib'
     *  Constant: '<S224>/Calib'
     *  Switch: '<S37>/Switch14'
     *  Switch: '<S37>/Switch15'
     *  Switch: '<S37>/Switch4'
     */
    if (KeRTMR_b_OvrdForceEngineStartStopState)
    {
        rtb_VeRTMC_e_ForceAutoStopStartSt_MtrA =
            KeRTMR_e_ForceEngineStartStopState;
    }
    else if (rtb_VeRTMC_b_ForceAutoStopStartEnbl_ROL)
    {
        /* Switch: '<S37>/Switch4' incorporates:
         *  VariantMerge generated from: '<S37>/ForceEngineStartStopState_ROLPxPy'
         */
        rtb_VeRTMC_e_ForceAutoStopStartSt_MtrA =
            rtb_VeRTMC_e_ForceAutoStopStartSt_ROL;
    }
    else if (rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrB)
    {
        /* Switch: '<S37>/Switch15' incorporates:
         *  Switch: '<S37>/Switch4'
         *  VariantMerge generated from: '<S37>/ForceEngineStartStopState_ROL_MtrB'
         */
        rtb_VeRTMC_e_ForceAutoStopStartSt_MtrA =
            rtb_VeRTMC_e_ForceAutoStopStartSt_MtrB;
    }
    else
    {
        if (!rtb_VeRTMC_b_ForceAutoStopStartEnbl_MtrA)
        {
            /* Switch: '<S37>/Switch5' incorporates:
             *  Merge: '<S42>/Merge3'
             *  Switch: '<S37>/Switch14'
             *  Switch: '<S37>/Switch15'
             *  Switch: '<S37>/Switch4'
             *  VariantMerge generated from: '<S40>/Variant Source1'
             */
            if (VeRTMR_b_StartStopEnbl_ClutchLrn)
            {
                rtb_VeRTMC_e_ForceAutoStopStartSt_MtrA =
                    VeRTMR_e_StartStopState_ClutchLrn;
            }
            else
            {
                rtb_VeRTMC_e_ForceAutoStopStartSt_MtrA =
                    VeRTMC_e_ForceAutoStopStartSt;
            }

            /* End of Switch: '<S37>/Switch5' */
        }
    }

    /* End of Switch: '<S37>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_e_ForceAutoStopStartSt' incorporates:
     *  SignalConversion generated from: '<S12>/OvrdArbitration_ForceEngineStartStopState'
     */
    (void)Rte_Write_VeRTMR_e_ForceAutoStopStartSt_Value
        (rtb_VeRTMC_e_ForceAutoStopStartSt_MtrA);

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/OvrdArbitration'
     */
    /* Switch: '<S37>/Switch9' incorporates:
     *  Constant: '<S222>/Calib'
     *  Constant: '<S225>/Calib'
     *  Switch: '<S37>/Switch10'
     *  Switch: '<S37>/Switch17'
     *  Switch: '<S37>/Switch24'
     */
    if (KeRTMR_b_OvrdHybTransCmndSt)
    {
        rtb_VM_Conditional_Signal_WED_HybTrans_p = KeRTMR_e_HybTransCmndSt;
    }
    else if (rtb_VeRTMC_b_HybTransCmndStEnbl_ROL)
    {
        /* Switch: '<S37>/Switch10' incorporates:
         *  VariantMerge generated from: '<S37>/HybTransCmndSt_ROLPxPy'
         */
        rtb_VM_Conditional_Signal_WED_HybTrans_p =
            rtb_VeRTMC_e_HybTransCmndSt_ROL;
    }
    else if (rtb_VeRTMC_b_HybTransCmndStEnbl_MtrA)
    {
        /* Switch: '<S37>/Switch17' incorporates:
         *  Switch: '<S37>/Switch10'
         *  VariantMerge generated from: '<S37>/HybTransCmndSt_ROL_MtrA'
         */
        rtb_VM_Conditional_Signal_WED_HybTrans_p =
            rtb_VeRTMC_e_HybTransCmndSt_MtrA;
    }
    else
    {
        if (!rtb_VM_Conditional_Signal_WED_HybTransCm)
        {
            /* Switch: '<S37>/Switch11' incorporates:
             *  DataTypeConversion: '<S396>/DataTypeConversion'
             *  Switch: '<S37>/Switch10'
             *  Switch: '<S37>/Switch17'
             *  Switch: '<S37>/Switch24'
             *  VariantMerge generated from: '<S40>/Variant Source4'
             */
            if (VeRTMR_b_HybTransCmndStEnbl_ClutchLrn)
            {
                rtb_VM_Conditional_Signal_WED_HybTrans_p =
                    VeRTMR_e_HybTransCmndSt_ClutchLrn;
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S12>/Rolls_Test' */
                rtb_VM_Conditional_Signal_WED_HybTrans_p = (TeOHSR_e_RngSel)
                    rtb_Switch1_ge;

                /* End of Outputs for SubSystem: '<S12>/Rolls_Test' */
            }

            /* End of Switch: '<S37>/Switch11' */
        }
    }

    /* End of Switch: '<S37>/Switch9' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_e_HybTransCmndSt' incorporates:
     *  SignalConversion generated from: '<S12>/OvrdArbitration_HybTransCmndSt'
     */
    (void)Rte_Write_VeRTMR_e_HybTransCmndSt_Value
        (rtb_VM_Conditional_Signal_WED_HybTrans_p);

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/OvrdArbitration'
     */
    /* Switch: '<S37>/Switch6' incorporates:
     *  Constant: '<S219>/Calib'
     *  Constant: '<S223>/Calib'
     *  Constant: '<S400>/Calib'
     *  DataTypeConversion: '<S387>/Data Type Conversion3'
     *  Logic: '<S387>/Logical2'
     *  RelationalOperator: '<S387>/Comparison2'
     *  Switch: '<S37>/Switch16'
     *  Switch: '<S37>/Switch23'
     *  Switch: '<S37>/Switch7'
     *  Switch: '<S37>/Switch8'
     */
    if (KeRTMR_b_OvrdHybTransCmndStEnbl)
    {
        rtb_UnitDelay1_p = KeRTMR_b_HybTransCmndStEnbl;
    }
    else if (rtb_VeRTMC_b_HybTransCmndStEnbl_ROL)
    {
        /* Switch: '<S37>/Switch7' */
        rtb_UnitDelay1_p = true;
    }
    else if (rtb_VeRTMC_b_HybTransCmndStEnbl_MtrA)
    {
        /* Switch: '<S37>/Switch16' incorporates:
         *  Switch: '<S37>/Switch7'
         */
        rtb_UnitDelay1_p = true;
    }
    else if (rtb_VM_Conditional_Signal_WED_HybTransCm)
    {
        /* Switch: '<S37>/Switch23' incorporates:
         *  Switch: '<S37>/Switch16'
         *  Switch: '<S37>/Switch7'
         */
        rtb_UnitDelay1_p = true;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S12>/Rolls_Test' */
        rtb_UnitDelay1_p = ((VeRTMR_b_HybTransCmndStEnbl_ClutchLrn) ||
                            (rtb_Comparison1 && (((sint32)KeRTMR_e_RngStCompare)
                              != ((sint32)rtb_Switch1_ge))));

        /* End of Outputs for SubSystem: '<S12>/Rolls_Test' */
    }

    /* End of Switch: '<S37>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_b_HybTransCmndStEnbl' incorporates:
     *  SignalConversion generated from: '<S12>/OvrdArbitration_HybTransCmndStEnbl'
     */
    (void)Rte_Write_VeRTMR_b_HybTransCmndStEnbl_Value(rtb_UnitDelay1_p);

    /* SignalConversion generated from: '<S12>/ROLRoutineResult_ROLPxPy' */
#if Rte_SysCon_Variant_RTMR_1

    /* Outport: '<Root>/VeRTMR_e_ROLRoutineResult' incorporates:
     *  Merge: '<S228>/Merge'
     */
    (void)Rte_Write_VeRTMR_e_ROLRoutineResult_Value(RTMR_ac_B.Merge);

#endif

    /* End of SignalConversion generated from: '<S12>/ROLRoutineResult_ROLPxPy' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/Rolls_Test'
     */
    /* Outport: '<Root>/VeRTMR_y_RWD3025_EOMTest' incorporates:
     *  DataStoreRead: '<S39>/Data Store Read1'
     *  DataStoreRead: '<S39>/Data Store Read3'
     *  S-Function (sfix_bitop): '<S39>/Bitwise AND'
     *  S-Function (sfix_bitop): '<S39>/Bitwise AND1'
     *  S-Function (sfix_bitop): '<S39>/Bitwise AND2'
     *  SignalConversion generated from: '<S12>/RWD3025_EOMTest'
     */
    (void)Rte_Write_VeRTMR_y_RWD3025_EOMTest_Value((uint8)
        ((AeRTMR_y_ElecOnlyTestResult_PID & ((uint8)1)) |
         (AeRTMR_y_ElecOnlyTestStatus_PID & ((uint8)62))));

    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_n_TransInputSpd' incorporates:
     *  SignalConversion generated from: '<S12>/TransInputSpd_ClutchLrn'
     */
    (void)Rte_Write_VeRTMR_n_TransInputSpd_Value
        (RTMR_ac_B.VariantMerge_For_Variant_Source_Variant_);

    /* SignalConversion generated from: '<S12>/VeRTMC_b_DsblEngCL_ICSR_ROLMtrA' incorporates:
     *  SignalConversion generated from: '<S12>/VeRTMC_b_EnaReslvrOfsLrnRtn_ROLMtrA'
     */
#if Rte_SysCon_Variant_RTMR_7

    /* Outport: '<Root>/VeRTMR_b_DsblEngCL_ICSR' */
    (void)Rte_Write_VeRTMR_b_DsblEngCL_ICSR_Value
        (RTMR_ac_B.VeRTMC_b_DsblEngCL_ICSR);

    /* Outport: '<Root>/VeRTMR_b_EnaReslvrOfsLrnRtn_MtrA' */
    (void)Rte_Write_VeRTMR_b_EnaReslvrOfsLrnRtn_MtrA_Value
        (RTMR_ac_B.VeRTMC_b_EnaReslvrOfsLrnRtn_MtrA);

#endif

    /* End of SignalConversion generated from: '<S12>/VeRTMC_b_DsblEngCL_ICSR_ROLMtrA' */

    /* SignalConversion generated from: '<S12>/VeRTMC_b_ROLFail_ROLPxPy' */
#if Rte_SysCon_Variant_RTMR_1

    /* Outport: '<Root>/VeRTMR_b_ROLFail' */
    (void)Rte_Write_VeRTMR_b_ROLFail_Value(RTMR_ac_B.AND_m);

#endif

    /* End of SignalConversion generated from: '<S12>/VeRTMC_b_ROLFail_ROLPxPy' */

    /* SignalConversion generated from: '<S12>/VeRTMR_d_WEDRoutineFailConds' incorporates:
     *  SignalConversion generated from: '<S12>/VeRTMR_e_FaultSts_WHL_HubDisConMissCal'
     *  SignalConversion generated from: '<S12>/VeRTMR_e_WEDLearningProcedure'
     *  SignalConversion generated from: '<S12>/VeRTMR_e_WED_ToothAbutResult'
     */
#if Rte_SysCon_Variant_RTMR_8

    /* Outport: '<Root>/VeRTMR_d_WEDRoutineFailConds' */
    (void)Rte_Write_VeRTMR_d_WEDRoutineFailConds_Value
        (RTMR_ac_B.FailureReasonsFreeze);

    /* Outport: '<Root>/VeRTMR_e_FaultSts_WHL_HubDisConMissCal' incorporates:
     *  Merge: '<S1074>/Merge'
     */
    (void)Rte_Write_VeRTMR_e_FaultSts_WHL_HubDisConMissCal_Value
        (RTMR_ac_B.Merge_p);

    /* Outport: '<Root>/VeRTMR_e_WEDLearningProcedure' */
    (void)Rte_Write_VeRTMR_e_WEDLearningProcedure_Value(RTMR_ac_B.Status);

    /* Outport: '<Root>/VeRTMR_e_WED_ToothAbutResult' incorporates:
     *  Merge: '<S1051>/Merge2'
     */
    (void)Rte_Write_VeRTMR_e_WED_ToothAbutResult_Value(RTMR_ac_B.Merge2);

#endif

    /* End of SignalConversion generated from: '<S12>/VeRTMR_d_WEDRoutineFailConds' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/Rolls_Test'
     */
    /* Outport: '<Root>/VeRTMR_g_BSGRestartRsn' incorporates:
     *  DataStoreRead: '<S39>/Data Store Read7'
     *  SignalConversion generated from: '<S12>/VeRTMR_g_BSGRestartRsn'
     */
    (void)Rte_Write_VeRTMR_g_BSGRestartRsn_Value
        (RTMR_ac_DW.BeRTMR_g_BSGRestartRsn);

    /* Outport: '<Root>/VeRTMR_y_ElecOnlyTstCndtnCheck1_PID' incorporates:
     *  DataStoreRead: '<S39>/Data Store Read4'
     *  SignalConversion generated from: '<S12>/VeRTMR_y_ElecOnlyTstCndtnCheck1_PID'
     */
    (void)Rte_Write_VeRTMR_y_ElecOnlyTstCndtnCheck1_PID_Value
        (RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID);

    /* Outport: '<Root>/VeRTMR_y_ElecOnlyTstCndtnCheck2_PID' incorporates:
     *  DataStoreRead: '<S39>/Data Store Read2'
     *  SignalConversion generated from: '<S12>/VeRTMR_y_ElecOnlyTstCndtnCheck2_PID'
     */
    (void)Rte_Write_VeRTMR_y_ElecOnlyTstCndtnCheck2_PID_Value
        (RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID);

    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* SignalConversion generated from: '<S12>/VeRTMR_y_WEDRoutinePreConds' */
#if Rte_SysCon_Variant_RTMR_8

    /* Outport: '<Root>/VeRTMR_y_WEDRoutinePreConds' */
    (void)Rte_Write_VeRTMR_y_WEDRoutinePreConds_Value(RTMR_ac_B.Switch6);

#endif

    /* End of SignalConversion generated from: '<S12>/VeRTMR_y_WEDRoutinePreConds' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, RTMR_CODE) DidWrite_RWD3025_HCPModEnblr_RTMR(void)
{
    uint8 BitwiseAND1;
    uint8 rtb_TmpSignalConversionAtVeDCAB_y_RWD302;
    boolean tmpRead;

    /* Inport: '<Root>/VeDCAB_b_RWD3025_ElectricOnlyTest_Enabled' */
    (void)Rte_Read_VeDCAB_b_RWD3025_ElectricOnlyTest_Enabled_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD3025_HCPModEnblr_RTMR' incorporates:
     *  SubSystem: '<Root>/RWD3025_HCPModEnblr_PLTR'
     */
    /* DataStoreWrite: '<S15>/Data Store Write3' incorporates:
     *  SignalConversion generated from: '<S15>/VeDCAB_b_RWD3025_ElectricOnlyTest_Enabled'
     */
    AeRTMR_b_ElectricOnlyTest_Enabled = tmpRead;

    /* SignalConversion generated from: '<S15>/VeDCAB_y_RWD3025_EOMTest' incorporates:
     *  Inport: '<Root>/VeDCAB_y_RWD3025_EOMTest'
     */
    (void)Rte_Read_VeDCAB_y_RWD3025_EOMTest_Value
        (&rtb_TmpSignalConversionAtVeDCAB_y_RWD302);

    /* S-Function (sfix_bitop): '<S15>/Bitwise AND1' */
    BitwiseAND1 = (uint8)(rtb_TmpSignalConversionAtVeDCAB_y_RWD302 & ((uint8)63));

    /* DataStoreWrite: '<S15>/Data Store Write1' */
    AeRTMR_y_ElecOnlyTestStatus_PID = BitwiseAND1;

    /* S-Function (sfix_bitop): '<S15>/Bitwise AND' */
    rtb_TmpSignalConversionAtVeDCAB_y_RWD302 &= (uint8)1;

    /* DataStoreWrite: '<S15>/Data Store Write2' */
    AeRTMR_y_ElecOnlyTestResult_PID = rtb_TmpSignalConversionAtVeDCAB_y_RWD302;

    /* Outport: '<Root>/AeRTMR_b_ElectricOnlyTest_Enabled_Strimm_Out' incorporates:
     *  SignalConversion generated from: '<S15>/AeRTMR_b_ElectricOnlyTest_Enabled_Out'
     *  SignalConversion generated from: '<S15>/VeDCAB_b_RWD3025_ElectricOnlyTest_Enabled'
     */
    (void)
        Rte_Write_AeRTMR_b_ElectricOnlyTest_Enabled_AeRTMR_b_ElectricOnlyTest_Enabled
        (tmpRead);

    /* Outport: '<Root>/VeRTMR_b_ElectricOnlyTest_Enabled' incorporates:
     *  SignalConversion generated from: '<S15>/VeRTMR_b_ElectricOnlyTest_Enabled'
     *  SignalConversion generated from: '<S15>/VeDCAB_b_RWD3025_ElectricOnlyTest_Enabled'
     */
    (void)Rte_Write_VeRTMR_b_ElectricOnlyTest_Enabled_Value(tmpRead);

    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  SignalConversion generated from: '<S15>/VeDCAB_b_RWD3025_ElectricOnlyTest_Enabled'
     *  SignalConversion generated from: '<S15>/VeRTMR_b_ElectricOnlyTest_Enabled_write'
     */
    Rte_IrvWrite_DidWrite_RWD3025_HCPModEnblr_RTMR_Init_ElectricOnlyTest_Enabled_write_IRV
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD3025_HCPModEnblr_RTMR' */

    /* Outport: '<Root>/AeRTMR_y_ElecOnlyTestResult_PID_Strimm_Out' */
    (void)
        Rte_Write_AeRTMR_y_ElecOnlyTestResult_PID_AeRTMR_y_ElecOnlyTestResult_PID
        (rtb_TmpSignalConversionAtVeDCAB_y_RWD302);

    /* Outport: '<Root>/AeRTMR_y_ElecOnlyTestStatus_PID_Strimm_Out' */
    (void)
        Rte_Write_AeRTMR_y_ElecOnlyTestStatus_PID_AeRTMR_y_ElecOnlyTestStatus_PID
        (BitwiseAND1);
}

/* Output function */
FUNC(void, RTMR_CODE) FsftRTMR_d_ReslvrOfsLrnMCPFaultStatus(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftRTMR_d_ReslvrOfsLrnMCPFaultStatus' */
    /* SignalConversion generated from: '<S1>/FsftRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt' incorporates:
     *  SignalConversion generated from: '<S1>/VeRTMR_y_ReslvrOfsLrnMCPFaultStatus_write'
     */
    /* Gateway: FsftRTMR_d_ReslvrOfsLrnMCPFaultStatus/FsftRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt */
    /* During: FsftRTMR_d_ReslvrOfsLrnMCPFaultStatus/FsftRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt */
    /* Entry Internal: FsftRTMR_d_ReslvrOfsLrnMCPFaultStatus/FsftRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt */
    /* Transition: '<S17>:2' */
#if Rte_SysCon_Variant_RTMR_1

    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S1>/FsftRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt'
     *  Constant: '<S18>/Calib'
     */
    Rte_IrvWrite_FsftRTMR_d_ReslvrOfsLrnMCPFaultStatus_VeRTMR_y_ReslvrOfsLrnMCPFaultStatus_write_IRV
        (KeRTMR_y_ReslvrOfsLrnMCPFaultStatusDflt);

#endif

    /* End of SignalConversion generated from: '<S1>/FsftRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftRTMR_d_ReslvrOfsLrnMCPFaultStatus' */
}

/* Output function */
FUNC(void, RTMR_CODE) PokeRTMR_b_AE_ClutchLrnEnabled(VAR(boolean, AUTOMATIC)
    LeRTMR_b_AE_ClutchLrnEnabled)
{

#if !Rte_SysCon_Variant_RTMR_6

    UNUSED_PARAMETER(LeRTMR_b_AE_ClutchLrnEnabled);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeRTMR_b_AE_ClutchLrnEnabled' */
    /* SignalConversion generated from: '<S2>/PokeRTMR_b_AE_ClutchLrnEnabledChrt' incorporates:
     *  SignalConversion generated from: '<S2>/VeRTMR_b_AE_ClutchLrnEnabled_write'
     */
    /* Gateway: PokeRTMR_b_AE_ClutchLrnEnabled/PokeRTMR_b_AE_ClutchLrnEnabledChrt */
    /* During: PokeRTMR_b_AE_ClutchLrnEnabled/PokeRTMR_b_AE_ClutchLrnEnabledChrt */
    /* Entry Internal: PokeRTMR_b_AE_ClutchLrnEnabled/PokeRTMR_b_AE_ClutchLrnEnabledChrt */
    /* Transition: '<S19>:2' */
#if Rte_SysCon_Variant_RTMR_6

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S2>/LeRTMR_b_AE_ClutchLrnEnabled'
     */
    Rte_IrvWrite_PokeRTMR_b_AE_ClutchLrnEnabled_VeRTMR_b_AE_ClutchLrnEnabled_write_IRV
        (LeRTMR_b_AE_ClutchLrnEnabled);

#endif

    /* End of SignalConversion generated from: '<S2>/PokeRTMR_b_AE_ClutchLrnEnabledChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeRTMR_b_AE_ClutchLrnEnabled' */
}

/* Output function */
FUNC(void, RTMR_CODE) PokeRTMR_b_EOLClutchLrn_Enabled(VAR(boolean, AUTOMATIC)
    LeRTMR_b_EOLClutchLrn_Enabled)
{

#if !Rte_SysCon_Variant_RTMR_6

    UNUSED_PARAMETER(LeRTMR_b_EOLClutchLrn_Enabled);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeRTMR_b_EOLClutchLrn_Enabled' */
    /* SignalConversion generated from: '<S3>/PokeRTMR_b_EOLClutchLrn_EnabledChrt' incorporates:
     *  SignalConversion generated from: '<S3>/VeRTMR_b_EOLClutchLrn_Enabled_write'
     */
    /* Gateway: PokeRTMR_b_EOLClutchLrn_Enabled/PokeRTMR_b_EOLClutchLrn_EnabledChrt */
    /* During: PokeRTMR_b_EOLClutchLrn_Enabled/PokeRTMR_b_EOLClutchLrn_EnabledChrt */
    /* Entry Internal: PokeRTMR_b_EOLClutchLrn_Enabled/PokeRTMR_b_EOLClutchLrn_EnabledChrt */
    /* Transition: '<S20>:2' */
#if Rte_SysCon_Variant_RTMR_6

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S3>/LeRTMR_b_EOLClutchLrn_Enabled'
     */
    Rte_IrvWrite_PokeRTMR_b_EOLClutchLrn_Enabled_VeRTMR_b_EOLClutchLrn_Enabled_write_IRV
        (LeRTMR_b_EOLClutchLrn_Enabled);

#endif

    /* End of SignalConversion generated from: '<S3>/PokeRTMR_b_EOLClutchLrn_EnabledChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeRTMR_b_EOLClutchLrn_Enabled' */
}

/* Output function */
FUNC(void, RTMR_CODE) PokeRTMR_b_EnaReslvrOfsLrnRtn(VAR(boolean, AUTOMATIC)
    LeRTMR_b_EnaReslvrOfsLrnRtn)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeRTMR_b_EnaReslvrOfsLrnRtn' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S4>/LeRTMR_b_EnaReslvrOfsLrnRtn'
     *  SignalConversion generated from: '<S4>/VeRTMR_b_EnaReslvrOfsLrnRtn_write'
     */
    /* Gateway: PokeRTMR_b_EnaReslvrOfsLrnRtn/PokeRTMR_b_EnaReslvrOfsLrnRtnChrt */
    /* During: PokeRTMR_b_EnaReslvrOfsLrnRtn/PokeRTMR_b_EnaReslvrOfsLrnRtnChrt */
    /* Entry Internal: PokeRTMR_b_EnaReslvrOfsLrnRtn/PokeRTMR_b_EnaReslvrOfsLrnRtnChrt */
    /* Transition: '<S21>:2' */
    Rte_IrvWrite_PokeRTMR_b_EnaReslvrOfsLrnRtn_VeRTMR_b_EnaReslvrOfsLrnRtn_write_IRV
        (LeRTMR_b_EnaReslvrOfsLrnRtn);

    /* End of Outputs for SubSystem: '<Root>/PokeRTMR_b_EnaReslvrOfsLrnRtn' */
}

/* Output function */
FUNC(void, RTMR_CODE) PokeRTMR_b_GPFRegenRequest(VAR(boolean, AUTOMATIC)
    LeRTMR_b_GPFRegenRequest)
{

#if !Rte_SysCon_Variant_RTMR_3

    UNUSED_PARAMETER(LeRTMR_b_GPFRegenRequest);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeRTMR_b_GPFRegenRequest' */
    /* Chart: '<S5>/PokeRTMR_b_GPFRegenRequestChrt' */
    /* Gateway: PokeRTMR_b_GPFRegenRequest/PokeRTMR_b_GPFRegenRequestChrt */
    /* During: PokeRTMR_b_GPFRegenRequest/PokeRTMR_b_GPFRegenRequestChrt */
    /* Entry Internal: PokeRTMR_b_GPFRegenRequest/PokeRTMR_b_GPFRegenRequestChrt */
    /* Transition: '<S22>:2' */
    VeRTMR_b_GPFRegenRequestFlag = 1U;

    /* SignalConversion generated from: '<S5>/PokeRTMR_b_GPFRegenRequestChrt' incorporates:
     *  SignalConversion generated from: '<S5>/VeRTMR_b_GPFRegenRequest_write'
     */
#if Rte_SysCon_Variant_RTMR_3

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S5>/LeRTMR_b_GPFRegenRequest'
     */
    Rte_IrvWrite_PokeRTMR_b_GPFRegenRequest_VeRTMR_b_GPFRegenRequest_write_IRV
        (LeRTMR_b_GPFRegenRequest);

#endif

    /* End of SignalConversion generated from: '<S5>/PokeRTMR_b_GPFRegenRequestChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeRTMR_b_GPFRegenRequest' */
}

/* Output function */
FUNC(void, RTMR_CODE) PokeRTMR_b_ILE_ClutchLrnEnabled(VAR(boolean, AUTOMATIC)
    LeRTMR_b_ILE_ClutchLrnEnabled)
{

#if !Rte_SysCon_Variant_RTMR_6

    UNUSED_PARAMETER(LeRTMR_b_ILE_ClutchLrnEnabled);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeRTMR_b_ILE_ClutchLrnEnabled' */
    /* SignalConversion generated from: '<S6>/PokeRTMR_b_ILE_ClutchLrnEnabledChrt' incorporates:
     *  SignalConversion generated from: '<S6>/VeRTMR_b_ILE_ClutchLrnEnabled_write'
     */
    /* Gateway: PokeRTMR_b_ILE_ClutchLrnEnabled/PokeRTMR_b_ILE_ClutchLrnEnabledChrt */
    /* During: PokeRTMR_b_ILE_ClutchLrnEnabled/PokeRTMR_b_ILE_ClutchLrnEnabledChrt */
    /* Entry Internal: PokeRTMR_b_ILE_ClutchLrnEnabled/PokeRTMR_b_ILE_ClutchLrnEnabledChrt */
    /* Transition: '<S23>:2' */
#if Rte_SysCon_Variant_RTMR_6

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S6>/LeRTMR_b_ILE_ClutchLrnEnabled'
     */
    Rte_IrvWrite_PokeRTMR_b_ILE_ClutchLrnEnabled_VeRTMR_b_ILE_ClutchLrnEnabled_write_IRV
        (LeRTMR_b_ILE_ClutchLrnEnabled);

#endif

    /* End of SignalConversion generated from: '<S6>/PokeRTMR_b_ILE_ClutchLrnEnabledChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeRTMR_b_ILE_ClutchLrnEnabled' */
}

/* Output function */
FUNC(void, RTMR_CODE) PokeRTMR_b_K0_ClutchLrnEnabled(VAR(boolean, AUTOMATIC)
    LeRTMR_b_K0_ClutchLrnEnabled)
{

#if !Rte_SysCon_Variant_RTMR_6

    UNUSED_PARAMETER(LeRTMR_b_K0_ClutchLrnEnabled);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeRTMR_b_K0_ClutchLrnEnabled' */
    /* SignalConversion generated from: '<S7>/PokeRTMR_b_K0_ClutchLrnEnabledChrt' incorporates:
     *  SignalConversion generated from: '<S7>/VeRTMR_b_K0_ClutchLrnEnabled_write'
     */
    /* Gateway: PokeRTMR_b_K0_ClutchLrnEnabled/PokeRTMR_b_K0_ClutchLrnEnabledChrt */
    /* During: PokeRTMR_b_K0_ClutchLrnEnabled/PokeRTMR_b_K0_ClutchLrnEnabledChrt */
    /* Entry Internal: PokeRTMR_b_K0_ClutchLrnEnabled/PokeRTMR_b_K0_ClutchLrnEnabledChrt */
    /* Transition: '<S24>:2' */
#if Rte_SysCon_Variant_RTMR_6

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S7>/LeRTMR_b_K0_ClutchLrnEnabled'
     */
    Rte_IrvWrite_PokeRTMR_b_K0_ClutchLrnEnabled_VeRTMR_b_K0_ClutchLrnEnabled_write_IRV
        (LeRTMR_b_K0_ClutchLrnEnabled);

#endif

    /* End of SignalConversion generated from: '<S7>/PokeRTMR_b_K0_ClutchLrnEnabledChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeRTMR_b_K0_ClutchLrnEnabled' */
}

/* Output function */
FUNC(void, RTMR_CODE) PokeRTMR_b_MCPA_ROL_Request(VAR(boolean, AUTOMATIC)
    LeRTMR_b_MCPA_ROL_Request)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeRTMR_b_MCPA_ROL_Request' */
    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S8>/LeRTMR_b_MCPA_ROL_Request'
     *  SignalConversion generated from: '<S8>/VeRTMR_b_MCPA_ROL_Request_write'
     */
    /* Gateway: PokeRTMR_b_MCPA_ROL_Request/PokeRTMR_b_MCPA_ROL_RequestChrt */
    /* During: PokeRTMR_b_MCPA_ROL_Request/PokeRTMR_b_MCPA_ROL_RequestChrt */
    /* Entry Internal: PokeRTMR_b_MCPA_ROL_Request/PokeRTMR_b_MCPA_ROL_RequestChrt */
    /* Transition: '<S25>:2' */
    Rte_IrvWrite_PokeRTMR_b_MCPA_ROL_Request_VeRTMR_b_MCPA_ROL_Request_write_IRV
        (LeRTMR_b_MCPA_ROL_Request);

    /* End of Outputs for SubSystem: '<Root>/PokeRTMR_b_MCPA_ROL_Request' */
}

/* Output function */
FUNC(void, RTMR_CODE) PokeRTMR_b_MCPB_ROL_Request(VAR(boolean, AUTOMATIC)
    LeRTMR_b_MCPB_ROL_Request)
{

#if !Rte_SysCon_Variant_RTMR_7

    UNUSED_PARAMETER(LeRTMR_b_MCPB_ROL_Request);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeRTMR_b_MCPB_ROL_Request' */
    /* SignalConversion generated from: '<S9>/PokeRTMR_b_MCPB_ROL_RequestChrt' incorporates:
     *  SignalConversion generated from: '<S9>/VeRTMR_b_MCPB_ROL_Request_write'
     */
    /* Gateway: PokeRTMR_b_MCPB_ROL_Request/PokeRTMR_b_MCPB_ROL_RequestChrt */
    /* During: PokeRTMR_b_MCPB_ROL_Request/PokeRTMR_b_MCPB_ROL_RequestChrt */
    /* Entry Internal: PokeRTMR_b_MCPB_ROL_Request/PokeRTMR_b_MCPB_ROL_RequestChrt */
    /* Transition: '<S26>:2' */
#if Rte_SysCon_Variant_RTMR_7

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S9>/LeRTMR_b_MCPB_ROL_Request'
     */
    Rte_IrvWrite_PokeRTMR_b_MCPB_ROL_Request_VeRTMR_b_MCPB_ROL_Request_write_IRV
        (LeRTMR_b_MCPB_ROL_Request);

#endif

    /* End of SignalConversion generated from: '<S9>/PokeRTMR_b_MCPB_ROL_RequestChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeRTMR_b_MCPB_ROL_Request' */
}

/* Output function */
FUNC(void, RTMR_CODE) PokeRTMR_d_ReslvrOfsLrnMCPFaultStatus(VAR(sint16,
    AUTOMATIC) LeRTMR_d_ReslvrOfsLrnMCPFaultStatus)
{

#if !Rte_SysCon_Variant_RTMR_1

    UNUSED_PARAMETER(LeRTMR_d_ReslvrOfsLrnMCPFaultStatus);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeRTMR_d_ReslvrOfsLrnMCPFaultStatus' */
    /* SignalConversion generated from: '<S10>/PokeRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt' incorporates:
     *  SignalConversion generated from: '<S10>/VeRTMR_y_ReslvrOfsLrnMCPFaultStatus_write'
     */
    /* Gateway: PokeRTMR_d_ReslvrOfsLrnMCPFaultStatus/PokeRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt */
    /* During: PokeRTMR_d_ReslvrOfsLrnMCPFaultStatus/PokeRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt */
    /* Entry Internal: PokeRTMR_d_ReslvrOfsLrnMCPFaultStatus/PokeRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt */
    /* Transition: '<S27>:2' */
#if Rte_SysCon_Variant_RTMR_1

    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S10>/PokeRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt'
     *  SignalConversion generated from: '<S10>/LeRTMR_d_ReslvrOfsLrnMCPFaultStatus'
     */
    Rte_IrvWrite_PokeRTMR_d_ReslvrOfsLrnMCPFaultStatus_VeRTMR_y_ReslvrOfsLrnMCPFaultStatus_write_IRV
        ((uint8)LeRTMR_d_ReslvrOfsLrnMCPFaultStatus);

#endif

    /* End of SignalConversion generated from: '<S10>/PokeRTMR_d_ReslvrOfsLrnMCPFaultStatusChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeRTMR_d_ReslvrOfsLrnMCPFaultStatus' */
}

/* Output function */
FUNC(void, RTMR_CODE) RTMR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/RTMR_PwrOff'
     */
    /* Outport: '<Root>/BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID_BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID
        (RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID);

    /* Outport: '<Root>/BeRTMR_g_BSGRestartRsn_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_g_BSGRestartRsn'
     */
    (void)Rte_Write_BeRTMR_g_BSGRestartRsn_BeRTMR_g_BSGRestartRsn
        (RTMR_ac_DW.BeRTMR_g_BSGRestartRsn);

    /* Outport: '<Root>/BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID_BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID
        (RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID);

    /* Outport: '<Root>/BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID_BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID
        (RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID);

    /* Outport: '<Root>/NeRTMR_y_RngTestStatus_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_y_RngTestStatus_PID'
     */
    (void)Rte_Write_NeRTMR_y_RngTestStatus_PID_NeRTMR_y_RngTestStatus_PID
        (RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID);

    /* Outport: '<Root>/BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID_BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID
        (RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID);

    /* Outport: '<Root>/BeRTMR_y_ClutchLrnTestStatus_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ClutchLrnTestStatus_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ClutchLrnTestStatus_PID_BeRTMR_y_ClutchLrnTestStatus_PID
        (RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID);

    /* Outport: '<Root>/BeRTMR_y_ClutchLrnTstCndtnCheck1_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ClutchLrnTstCndtnCheck1_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ClutchLrnTstCndtnCheck1_PID_BeRTMR_y_ClutchLrnTstCndtnCheck1_PID
        (RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID);

    /* Outport: '<Root>/BeRTMR_y_ClutchLrnTstCndtnCheck2_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ClutchLrnTstCndtnCheck2_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ClutchLrnTstCndtnCheck2_PID_BeRTMR_y_ClutchLrnTstCndtnCheck2_PID
        (RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID);

    /* Outport: '<Root>/NeRTMR_y_RngTstCndtnCheck1_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_y_RngTstCndtnCheck1_PID'
     */
    (void)
        Rte_Write_NeRTMR_y_RngTstCndtnCheck1_PID_NeRTMR_y_RngTstCndtnCheck1_PID
        (RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID);

    /* Outport: '<Root>/NeRTMR_y_RngTstCndtnCheck2_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_y_RngTstCndtnCheck2_PID'
     */
    (void)
        Rte_Write_NeRTMR_y_RngTstCndtnCheck2_PID_NeRTMR_y_RngTstCndtnCheck2_PID
        (RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID);

    /* Outport: '<Root>/BeRTMR_y_ClutchLrnTstCndtnCheck3_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ClutchLrnTstCndtnCheck3_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ClutchLrnTstCndtnCheck3_PID_BeRTMR_y_ClutchLrnTstCndtnCheck3_PID
        (RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck3_PID);

    /* Outport: '<Root>/NeRTMR_e_BattChrgStatus_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_e_BattChrgStatus_PID'
     */
    (void)Rte_Write_NeRTMR_e_BattChrgStatus_PID_NeRTMR_e_BattChrgStatus_PID
        (RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID);

    /* Outport: '<Root>/NeRTMR_It_BattChrgInitDiff_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_It_BattChrgInitDiff_PID'
     */
    (void)
        Rte_Write_NeRTMR_It_BattChrgInitDiff_PID_NeRTMR_It_BattChrgInitDiff_PID
        (RTMR_ac_DW.NeRTMR_It_BattChrgInitDiff_PID);

    /* Outport: '<Root>/NeRTMR_It_BattChrgTarget_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_It_BattChrgTarget_PID'
     */
    (void)Rte_Write_NeRTMR_It_BattChrgTarget_PID_NeRTMR_It_BattChrgTarget_PID
        (RTMR_ac_DW.NeRTMR_It_BattChrgTarget_PID);

    /* Outport: '<Root>/NeRTMR_P_BattChrgPwrOffset_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_P_BattChrgPwrOffset_PID'
     */
    (void)
        Rte_Write_NeRTMR_P_BattChrgPwrOffset_PID_NeRTMR_P_BattChrgPwrOffset_PID
        (RTMR_ac_DW.NeRTMR_P_BattChrgPwrOffset_PID);

    /* Outport: '<Root>/NeRTMR_It_BattChargedAmnt_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_It_BattChargedAmnt_PID'
     */
    (void)Rte_Write_NeRTMR_It_BattChargedAmnt_PID_NeRTMR_It_BattChargedAmnt_PID
        (RTMR_ac_DW.NeRTMR_It_BattChargedAmnt_PID);

    /* Outport: '<Root>/NeRTMR_y_RngTestResult_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_y_RngTestResult_PID'
     */
    (void)Rte_Write_NeRTMR_y_RngTestResult_PID_NeRTMR_y_RngTestResult_PID
        (RTMR_ac_DW.NeRTMR_y_RngTestResult_PID);

    /* Outport: '<Root>/BeRTMR_y_ElecOnlyTstCndtnCheck1_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ElecOnlyTstCndtnCheck1_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ElecOnlyTstCndtnCheck1_PID_BeRTMR_y_ElecOnlyTstCndtnCheck1_PID
        (RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID);

    /* Outport: '<Root>/BeRTMR_y_ElecOnlyTstCndtnCheck2_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/BeRTMR_y_ElecOnlyTstCndtnCheck2_PID'
     */
    (void)
        Rte_Write_BeRTMR_y_ElecOnlyTstCndtnCheck2_PID_BeRTMR_y_ElecOnlyTstCndtnCheck2_PID
        (RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID);

    /* Outport: '<Root>/NeRTMR_y_BattChrgCndtnCheck_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_y_BattChrgCndtnCheck_PID'
     */
    (void)
        Rte_Write_NeRTMR_y_BattChrgCndtnCheck_PID_NeRTMR_y_BattChrgCndtnCheck_PID
        (RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID);

    /* Outport: '<Root>/NeRTMR_t_BattChrgTimer_PID_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NeRTMR_t_BattChrgTimer_PID'
     */
    (void)Rte_Write_NeRTMR_t_BattChrgTimer_PID_NeRTMR_t_BattChrgTimer_PID
        (RTMR_ac_DW.NeRTMR_t_BattChrgTimer_PID);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, RTMR_CODE) RTMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/RTMR_PwrOn'
     */
    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/DSM_Init'
     */
    /* DataStoreWrite: '<S1082>/EeAADR_Cnt_AAD_PSACntrLastCal' incorporates:
     *  Inport: '<Root>/AeRTMR_e_WED_ToothAbutResult_Strimm_In'
     */
    (void)Rte_Read_AeRTMR_e_WED_ToothAbutResult_Rx_AeRTMR_e_WED_ToothAbutResult
        ((&(AeRTMR_e_WED_ToothAbutResult)));

    /* DataStoreWrite: '<S1082>/AeRTMR_b_ElectricOnlyTest_PID1' incorporates:
     *  Inport: '<Root>/AeRTMR_b_ElectricOnlyTest_Enabled_Strimm_In'
     */
    (void)
        Rte_Read_AeRTMR_b_ElectricOnlyTest_Enabled_Rx_AeRTMR_b_ElectricOnlyTest_Enabled
        ((&(AeRTMR_b_ElectricOnlyTest_Enabled)));

    /* DataStoreWrite: '<S1082>/NeRTMR_t_BattChrgTimer_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_t_BattChrgTimer_PID_PM_In'
     */
    (void)Rte_Read_NeRTMR_t_BattChrgTimer_PID_Rx_NeRTMR_t_BattChrgTimer_PID
        (&RTMR_ac_DW.NeRTMR_t_BattChrgTimer_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ElecOnlyTestStatus_PID' incorporates:
     *  Inport: '<Root>/AeRTMR_y_ElecOnlyTestStatus_PID_Strimm_In'
     */
    (void)
        Rte_Read_AeRTMR_y_ElecOnlyTestStatus_PID_Rx_AeRTMR_y_ElecOnlyTestStatus_PID
        ((&(AeRTMR_y_ElecOnlyTestStatus_PID)));

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ElecOnlyTestResult_PID' incorporates:
     *  Inport: '<Root>/AeRTMR_y_ElecOnlyTestResult_PID_Strimm_In'
     */
    (void)
        Rte_Read_AeRTMR_y_ElecOnlyTestResult_PID_Rx_AeRTMR_y_ElecOnlyTestResult_PID
        ((&(AeRTMR_y_ElecOnlyTestResult_PID)));

    /* DataStoreWrite: '<S1082>/NeRTMR_y_BattChrgCndtnCheck_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_y_BattChrgCndtnCheck_PID_PM_In'
     */
    (void)
        Rte_Read_NeRTMR_y_BattChrgCndtnCheck_PID_Rx_NeRTMR_y_BattChrgCndtnCheck_PID
        (&RTMR_ac_DW.NeRTMR_y_BattChrgCndtnCheck_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ElecOnlyTstCndtnCheck2_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ElecOnlyTstCndtnCheck2_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ElecOnlyTstCndtnCheck2_PID_Rx_BeRTMR_y_ElecOnlyTstCndtnCheck2_PID
        (&RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ElecOnlyTstCndtnCheck1_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ElecOnlyTstCndtnCheck1_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ElecOnlyTstCndtnCheck1_PID_Rx_BeRTMR_y_ElecOnlyTstCndtnCheck1_PID
        (&RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID);

    /* DataStoreWrite: '<S1082>/NeRTMR_y_RngTestResult_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_y_RngTestResult_PID_PM_In'
     */
    (void)Rte_Read_NeRTMR_y_RngTestResult_PID_Rx_NeRTMR_y_RngTestResult_PID
        (&RTMR_ac_DW.NeRTMR_y_RngTestResult_PID);

    /* DataStoreWrite: '<S1082>/NeRTMR_It_BattChargedAmnt_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_It_BattChargedAmnt_PID_PM_In'
     */
    (void)
        Rte_Read_NeRTMR_It_BattChargedAmnt_PID_Rx_NeRTMR_It_BattChargedAmnt_PID(
        &RTMR_ac_DW.NeRTMR_It_BattChargedAmnt_PID);

    /* DataStoreWrite: '<S1082>/NeRTMR_P_BattChrgPwrOffset_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_P_BattChrgPwrOffset_PID_PM_In'
     */
    (void)
        Rte_Read_NeRTMR_P_BattChrgPwrOffset_PID_Rx_NeRTMR_P_BattChrgPwrOffset_PID
        (&RTMR_ac_DW.NeRTMR_P_BattChrgPwrOffset_PID);

    /* DataStoreWrite: '<S1082>/NeRTMR_It_BattChrgTarget_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_It_BattChrgTarget_PID_PM_In'
     */
    (void)Rte_Read_NeRTMR_It_BattChrgTarget_PID_Rx_NeRTMR_It_BattChrgTarget_PID(
        &RTMR_ac_DW.NeRTMR_It_BattChrgTarget_PID);

    /* DataStoreWrite: '<S1082>/NeRTMR_It_BattChrgInitDiff_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_It_BattChrgInitDiff_PID_PM_In'
     */
    (void)
        Rte_Read_NeRTMR_It_BattChrgInitDiff_PID_Rx_NeRTMR_It_BattChrgInitDiff_PID
        (&RTMR_ac_DW.NeRTMR_It_BattChrgInitDiff_PID);

    /* DataStoreWrite: '<S1082>/NeRTMR_e_BattChrgStatus_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_e_BattChrgStatus_PID_PM_In'
     */
    (void)Rte_Read_NeRTMR_e_BattChrgStatus_PID_Rx_NeRTMR_e_BattChrgStatus_PID
        (&RTMR_ac_DW.NeRTMR_e_BattChrgStatus_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ClutchLrnTstCndtnCheck3_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ClutchLrnTstCndtnCheck3_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ClutchLrnTstCndtnCheck3_PID_Rx_BeRTMR_y_ClutchLrnTstCndtnCheck3_PID
        (&RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck3_PID);

    /* DataStoreWrite: '<S1082>/NeRTMR_y_RngTstCndtnCheck2_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_y_RngTstCndtnCheck2_PID_PM_In'
     */
    (void)
        Rte_Read_NeRTMR_y_RngTstCndtnCheck2_PID_Rx_NeRTMR_y_RngTstCndtnCheck2_PID
        (&RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck2_PID);

    /* DataStoreWrite: '<S1082>/NeRTMR_y_RngTstCndtnCheck1_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_y_RngTstCndtnCheck1_PID_PM_In'
     */
    (void)
        Rte_Read_NeRTMR_y_RngTstCndtnCheck1_PID_Rx_NeRTMR_y_RngTstCndtnCheck1_PID
        (&RTMR_ac_DW.NeRTMR_y_RngTstCndtnCheck1_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ClutchLrnTstCndtnCheck2_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ClutchLrnTstCndtnCheck2_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ClutchLrnTstCndtnCheck2_PID_Rx_BeRTMR_y_ClutchLrnTstCndtnCheck2_PID
        (&RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck2_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ClutchLrnTstCndtnCheck1_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ClutchLrnTstCndtnCheck1_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ClutchLrnTstCndtnCheck1_PID_Rx_BeRTMR_y_ClutchLrnTstCndtnCheck1_PID
        (&RTMR_ac_DW.BeRTMR_y_ClutchLrnTstCndtnCheck1_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ClutchLrnTestStatus_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ClutchLrnTestStatus_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ClutchLrnTestStatus_PID_Rx_BeRTMR_y_ClutchLrnTestStatus_PID
        (&RTMR_ac_DW.BeRTMR_y_ClutchLrnTestStatus_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID_Rx_BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID
        (&RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus5_PID);

    /* DataStoreWrite: '<S1082>/NeRTMR_y_RngTestStatus_PID' incorporates:
     *  Inport: '<Root>/NeRTMR_y_RngTestStatus_PID_PM_In'
     */
    (void)Rte_Read_NeRTMR_y_RngTestStatus_PID_Rx_NeRTMR_y_RngTestStatus_PID
        (&RTMR_ac_DW.NeRTMR_y_RngTestStatus_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID_Rx_BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID
        (&RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus3_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID_Rx_BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID
        (&RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnFaultStatus4_PID);

    /* DataStoreWrite: '<S1082>/BeRTMR_g_BSGRestartRsn' incorporates:
     *  Inport: '<Root>/BeRTMR_g_BSGRestartRsn_PM_In'
     */
    (void)Rte_Read_BeRTMR_g_BSGRestartRsn_Rx_BeRTMR_g_BSGRestartRsn
        (&RTMR_ac_DW.BeRTMR_g_BSGRestartRsn);

    /* DataStoreWrite: '<S1082>/BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID' incorporates:
     *  Inport: '<Root>/BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID_PM_In'
     */
    (void)
        Rte_Read_BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID_Rx_BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID
        (&RTMR_ac_DW.BeRTMR_y_ReslvrOfsLrnCndtnCheck3_PID);

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Init_Values'
     */
    /* SignalConversion generated from: '<S1083>/Init_InPlantMode' */
    RTMR_ac_B.LeRTMR_b_InitInPlantMode = false;

    /* SignalConversion generated from: '<S1083>/Init_HybTransCmndStEnbl' */
    RTMR_ac_B.LeRTMR_b_InitHybTransCmndStEnbl = false;

    /* SignalConversion generated from: '<S1083>/Init_HybTransCmndSt' incorporates:
     *  Constant: '<S1085>/Constant'
     */
    RTMR_ac_B.LeRTMR_e_InitHybTransCmndSt = RTMR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S1083>/Init_BattRapidChrgCmnd' incorporates:
     *  Constant: '<S1087>/Constant'
     */
    RTMR_ac_B.LeRTMR_e_InitBattRapidChrgCmnd = RTMR_ac_ConstB.Constant_ns;

    /* SignalConversion generated from: '<S1083>/Init_BattRapidChrgPwrDsrd' */
    RTMR_ac_B.LeRTMR_P_InitBattRapidChrgPwrDsrd = 0.0F;

    /* SignalConversion generated from: '<S1083>/Init_ForceEngineStartStopEnbl' */
    RTMR_ac_B.LeRTMR_b_InitForceEngineStartStopEnbl = false;

    /* SignalConversion generated from: '<S1083>/Init_ForceEngineStartStopState' incorporates:
     *  Constant: '<S1088>/Constant'
     */
    RTMR_ac_B.LeRTMR_e_InitForceEngineStartStopEnbl = RTMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1083>/Init_NiMin_BattRapidChrg' */
    RTMR_ac_B.LeRTMR_n_InitNiMin_BattRapidChrg = 0.0F;

    /* SignalConversion generated from: '<S1083>/Init_ROLFail' */
    RTMR_ac_B.OutportBufferForInit_ROLFail = false;

    /* SignalConversion generated from: '<S1083>/Init_ClutchLrnType' incorporates:
     *  Constant: '<S1086>/Constant'
     */
    RTMR_ac_B.LeRTMR_e_ClutchLrnType = RTMR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S1083>/Init_EnaReslvrOfsLrnRtn' */
    RTMR_ac_B.OutportBufferForInit_EnaReslvrOfsLrnRtn = false;

    /* SignalConversion generated from: '<S1083>/Init_EOLClutchLrn_Enabled' */
    RTMR_ac_B.OutportBufferForInit_EOLClutchLrn_Enable = false;

    /* SignalConversion generated from: '<S1083>/Init_AE_ClutchLrnEnabled' */
    RTMR_ac_B.OutportBufferForInit_AE_ClutchLrnEnabled = false;

    /* SignalConversion generated from: '<S1083>/Init_ILE_ClutchLrnEnabled' */
    RTMR_ac_B.OutportBufferForInit_ILE_ClutchLrnEnable = false;

    /* SignalConversion generated from: '<S1083>/Init_K0_ClutchLrnEnabled' */
    RTMR_ac_B.OutportBufferForInit_K0_ClutchLrnEnabled = false;

    /* SignalConversion generated from: '<S1083>/GPFRegen_Init' */
    RTMR_ac_B.OutportBufferForGPFRegen_Init = false;

    /* SignalConversion generated from: '<S1083>/MCPA_ROL_Request_Init' */
    RTMR_ac_B.OutportBufferForMCPA_ROL_Request_Init = false;

    /* SignalConversion generated from: '<S1083>/MCPB_ROL_Request_Init' */
    RTMR_ac_B.OutportBufferForMCPB_ROL_Request_Init = false;

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1084>/VeRTMR_b_DsblMtrB_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_b_DsblMtrB_Out_In = false;

    /* SignalConversion generated from: '<S1084>/VeRTMR_b_EnaReslvrOfsLrnRtn_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_b_EnaReslvrOfsLrn = false;

    /* SignalConversion generated from: '<S1084>/VeRTMR_b_EOL_K0_LrnEnbl_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_b_EOL_K0_LrnEnbl_ = false;

    /* SignalConversion generated from: '<S1084>/VeRTMR_b_GPFRegenTestEnbl_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_b_GPFRegenTestEnb = false;

    /* SignalConversion generated from: '<S1084>/VeRTMR_e_GPFRegenTestSts_Out_Init' incorporates:
     *  Constant: '<S1084>/Const5'
     */
    RTMR_ac_B.OutportBufferForVeRTMR_e_GPFRegenTestSts = RTMR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S1084>/VeRTMR_y_GPFRegenTstCndtnCheck_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_y_GPFRegenTstCndt = 0U;

    /* SignalConversion generated from: '<S1084>/VeRTMR_n_TransInputSpd_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_n_TransInputSpd_O = 0.0F;

    /* SignalConversion generated from: '<S1084>/VeRTMR_e_ROLRoutineResult_Out_Init' incorporates:
     *  Constant: '<S1084>/Const8'
     */
    RTMR_ac_B.OutportBufferForVeRTMR_e_ROLRoutineResul = RTMR_ac_ConstB.Const8;

    /* SignalConversion generated from: '<S1084>/VeRTMR_b_DsblMtrA_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_b_DsblMtrA_Out_In = false;

    /* SignalConversion generated from: '<S1084>/VeRTMR_b_DsblMtr_OITR_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_b_DsblMtr_OITR_Ou = false;

    /* SignalConversion generated from: '<S1084>/VeRTMR_b_DsblEngCL_ICSR_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_b_DsblEngCL_ICSR_ = false;

    /* SignalConversion generated from: '<S1084>/VeRTMR_b_EnaReslvrOfsLrnRtn_MtrA_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_b_EnaReslvrOfsL_p = false;

    /* SignalConversion generated from: '<S1084>/VeRTMR_e_WEDLearningProcedure_Out_Init' incorporates:
     *  Constant: '<S1084>/Const13'
     */
    RTMR_ac_B.OutportBufferForVeRTMR_e_WEDLearningProc = RTMR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S1084>/VeRTMR_y_WEDRoutinePreConds_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_y_WEDRoutinePreCo = 0U;

    /* SignalConversion generated from: '<S1084>/VeRTMR_d_WEDRoutineFailConds_Out_Init' */
    RTMR_ac_B.OutportBufferForVeRTMR_d_WEDRoutineFailC = 0U;

    /* SignalConversion generated from: '<S1084>/VeRTMR_e_FaultSts_WHL_HubDisConMissCal_Out_Init' incorporates:
     *  Constant: '<S1089>/Constant'
     */
    RTMR_ac_B.OutportBufferForVeRTMR_e_FaultSts_WHL_Hu =
        RTMR_ac_ConstB.Constant_m;

    /* End of Outputs for S-Function (fcgen): '<S14>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_e_BattRapidChrgCmnd' incorporates:
     *  SignalConversion generated from: '<S1083>/Init_BattRapidChrgCmnd'
     *  SignalConversion generated from: '<S14>/Init_BattRapidChrgCmnd'
     */
    (void)Rte_Write_VeRTMR_e_BattRapidChrgCmnd_Value
        (RTMR_ac_B.LeRTMR_e_InitBattRapidChrgCmnd);

    /* Outport: '<Root>/VeRTMR_P_BattRapidChrgPwrDsrd' incorporates:
     *  SignalConversion generated from: '<S14>/Init_BattRapidChrgPwrDsrd'
     */
    (void)Rte_Write_VeRTMR_P_BattRapidChrgPwrDsrd_Value
        (RTMR_ac_B.LeRTMR_P_InitBattRapidChrgPwrDsrd);

    /* Outport: '<Root>/VeRTMR_e_ClutchLrnType' incorporates:
     *  SignalConversion generated from: '<S1083>/Init_ClutchLrnType'
     *  SignalConversion generated from: '<S14>/Init_ClutchLrnType'
     */
    (void)Rte_Write_VeRTMR_e_ClutchLrnType_Value
        (RTMR_ac_B.LeRTMR_e_ClutchLrnType);

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Init_Values'
     */
    /* Outport: '<Root>/VeRTMR_b_ElectricOnlyTest_Enabled' incorporates:
     *  DataStoreRead: '<S1083>/Data Store Read'
     *  SignalConversion generated from: '<S14>/Init_ElectricOnlyTest_Enabled'
     */
    (void)Rte_Write_VeRTMR_b_ElectricOnlyTest_Enabled_Value
        (AeRTMR_b_ElectricOnlyTest_Enabled);

    /* End of Outputs for S-Function (fcgen): '<S14>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_b_ForceAutoStopStartEnbl' incorporates:
     *  SignalConversion generated from: '<S14>/Init_ForceEngineStartStopEnbl'
     */
    (void)Rte_Write_VeRTMR_b_ForceAutoStopStartEnbl_Value
        (RTMR_ac_B.LeRTMR_b_InitForceEngineStartStopEnbl);

    /* Outport: '<Root>/VeRTMR_e_ForceAutoStopStartSt' incorporates:
     *  SignalConversion generated from: '<S1083>/Init_ForceEngineStartStopState'
     *  SignalConversion generated from: '<S14>/Init_ForceEngineStartStopState'
     */
    (void)Rte_Write_VeRTMR_e_ForceAutoStopStartSt_Value
        (RTMR_ac_B.LeRTMR_e_InitForceEngineStartStopEnbl);

    /* Outport: '<Root>/VeRTMR_e_HybTransCmndSt' incorporates:
     *  SignalConversion generated from: '<S1083>/Init_HybTransCmndSt'
     *  SignalConversion generated from: '<S14>/Init_HybTransCmndSt'
     */
    (void)Rte_Write_VeRTMR_e_HybTransCmndSt_Value
        (RTMR_ac_B.LeRTMR_e_InitHybTransCmndSt);

    /* Outport: '<Root>/VeRTMR_b_HybTransCmndStEnbl' incorporates:
     *  SignalConversion generated from: '<S14>/Init_HybTransCmndStEnbl'
     */
    (void)Rte_Write_VeRTMR_b_HybTransCmndStEnbl_Value
        (RTMR_ac_B.LeRTMR_b_InitHybTransCmndStEnbl);

    /* Outport: '<Root>/VeRTMR_b_InPlantMode' incorporates:
     *  SignalConversion generated from: '<S14>/Init_InPlantMode'
     */
    (void)Rte_Write_VeRTMR_b_InPlantMode_Value
        (RTMR_ac_B.LeRTMR_b_InitInPlantMode);

    /* Outport: '<Root>/VeRTMR_n_NiMin_BattRapidChrg' incorporates:
     *  SignalConversion generated from: '<S14>/Init_NiMin_BattRapidChrg'
     */
    (void)Rte_Write_VeRTMR_n_NiMin_BattRapidChrg_Value
        (RTMR_ac_B.LeRTMR_n_InitNiMin_BattRapidChrg);

    /* Outport: '<Root>/VeRTMR_b_ROLFail' incorporates:
     *  SignalConversion generated from: '<S14>/Init_ROLFail'
     */
    (void)Rte_Write_VeRTMR_b_ROLFail_Value
        (RTMR_ac_B.OutportBufferForInit_ROLFail);

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Init_Values'
     */
    /* Outport: '<Root>/VeRTMR_e_WED_ToothAbutResult' incorporates:
     *  DataStoreRead: '<S1083>/Data Store Read1'
     *  SignalConversion generated from: '<S14>/Init_WED_ToothAbutResult_write'
     */
    (void)Rte_Write_VeRTMR_e_WED_ToothAbutResult_Value
        (AeRTMR_e_WED_ToothAbutResult);

    /* End of Outputs for S-Function (fcgen): '<S14>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_b_DsblEngCL_ICSR' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_b_DsblEngCL_ICSR_Out_Init'
     */
    (void)Rte_Write_VeRTMR_b_DsblEngCL_ICSR_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_b_DsblEngCL_ICSR_);

    /* Outport: '<Root>/VeRTMR_b_DsblMtrA' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_b_DsblMtrA_Out_Init'
     */
    (void)Rte_Write_VeRTMR_b_DsblMtrA_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_b_DsblMtrA_Out_In);

    /* Outport: '<Root>/VeRTMR_b_DsblMtrB' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_b_DsblMtrB_Out_Init'
     */
    (void)Rte_Write_VeRTMR_b_DsblMtrB_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_b_DsblMtrB_Out_In);

    /* Outport: '<Root>/VeRTMR_b_DsblMtr_OITR' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_b_DsblMtr_OITR_Out_Init'
     */
    (void)Rte_Write_VeRTMR_b_DsblMtr_OITR_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_b_DsblMtr_OITR_Ou);

    /* Outport: '<Root>/VeRTMR_b_EOL_K0_LrnEnbl' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_b_EOL_K0_LrnEnbl_Out_Init'
     */
    (void)Rte_Write_VeRTMR_b_EOL_K0_LrnEnbl_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_b_EOL_K0_LrnEnbl_);

    /* Outport: '<Root>/VeRTMR_b_EnaReslvrOfsLrnRtn_MtrA' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_b_EnaReslvrOfsLrnRtn_MtrA_Out_Init'
     */
    (void)Rte_Write_VeRTMR_b_EnaReslvrOfsLrnRtn_MtrA_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_b_EnaReslvrOfsL_p);

    /* Outport: '<Root>/VeRTMR_b_EnaReslvrOfsLrnRtn' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_b_EnaReslvrOfsLrnRtn_Out_Init'
     */
    (void)Rte_Write_VeRTMR_b_EnaReslvrOfsLrnRtn_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_b_EnaReslvrOfsLrn);

    /* Outport: '<Root>/VeRTMR_b_GPFRegenTestEnbl' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_b_GPFRegenTestEnbl_Out_Init'
     */
    (void)Rte_Write_VeRTMR_b_GPFRegenTestEnbl_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_b_GPFRegenTestEnb);

    /* Outport: '<Root>/VeRTMR_d_WEDRoutineFailConds' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_d_WEDRoutineFailConds_Out_Init'
     */
    (void)Rte_Write_VeRTMR_d_WEDRoutineFailConds_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_d_WEDRoutineFailC);

    /* Outport: '<Root>/VeRTMR_e_FaultSts_WHL_HubDisConMissCal' incorporates:
     *  SignalConversion generated from: '<S1084>/VeRTMR_e_FaultSts_WHL_HubDisConMissCal_Out_Init'
     *  SignalConversion generated from: '<S14>/VeRTMR_e_FaultSts_WHL_HubDisConMissCal_Out_Init'
     */
    (void)Rte_Write_VeRTMR_e_FaultSts_WHL_HubDisConMissCal_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_e_FaultSts_WHL_Hu);

    /* Outport: '<Root>/VeRTMR_e_GPFRegenTestSts' incorporates:
     *  SignalConversion generated from: '<S1084>/VeRTMR_e_GPFRegenTestSts_Out_Init'
     *  SignalConversion generated from: '<S14>/VeRTMR_e_GPFRegenTestSts_Out_Init'
     */
    (void)Rte_Write_VeRTMR_e_GPFRegenTestSts_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_e_GPFRegenTestSts);

    /* Outport: '<Root>/VeRTMR_e_ROLRoutineResult' incorporates:
     *  SignalConversion generated from: '<S1084>/VeRTMR_e_ROLRoutineResult_Out_Init'
     *  SignalConversion generated from: '<S14>/VeRTMR_e_ROLRoutineResult_Out_Init'
     */
    (void)Rte_Write_VeRTMR_e_ROLRoutineResult_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_e_ROLRoutineResul);

    /* Outport: '<Root>/VeRTMR_e_WEDLearningProcedure' incorporates:
     *  SignalConversion generated from: '<S1084>/VeRTMR_e_WEDLearningProcedure_Out_Init'
     *  SignalConversion generated from: '<S14>/VeRTMR_e_WEDLearningProcedure_Out_Init'
     */
    (void)Rte_Write_VeRTMR_e_WEDLearningProcedure_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_e_WEDLearningProc);

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Sub_Out_Init'
     */
    /* Outport: '<Root>/VeRTMR_g_BSGRestartRsn' incorporates:
     *  DataStoreRead: '<S1084>/Data Store Read1'
     *  SignalConversion generated from: '<S14>/VeRTMR_g_BSGRestartRsn_Out_Init'
     */
    (void)Rte_Write_VeRTMR_g_BSGRestartRsn_Value
        (RTMR_ac_DW.BeRTMR_g_BSGRestartRsn);

    /* End of Outputs for S-Function (fcgen): '<S14>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_n_TransInputSpd' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_n_TransInputSpd_Out_Init'
     */
    (void)Rte_Write_VeRTMR_n_TransInputSpd_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_n_TransInputSpd_O);

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Sub_Out_Init'
     */
    /* Outport: '<Root>/VeRTMR_y_ElecOnlyTstCndtnCheck1_PID' incorporates:
     *  DataStoreRead: '<S1084>/Data Store Read3'
     *  SignalConversion generated from: '<S14>/VeRTMR_y_ElecOnlyTstCndtnCheck1_Out_Init'
     */
    (void)Rte_Write_VeRTMR_y_ElecOnlyTstCndtnCheck1_PID_Value
        (RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck1_PID);

    /* Outport: '<Root>/VeRTMR_y_ElecOnlyTstCndtnCheck2_PID' incorporates:
     *  DataStoreRead: '<S1084>/Data Store Read5'
     *  SignalConversion generated from: '<S14>/VeRTMR_y_ElecOnlyTstCndtnCheck2_Out_Init'
     */
    (void)Rte_Write_VeRTMR_y_ElecOnlyTstCndtnCheck2_PID_Value
        (RTMR_ac_DW.BeRTMR_y_ElecOnlyTstCndtnCheck2_PID);

    /* End of Outputs for S-Function (fcgen): '<S14>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_y_GPFRegenTstCndtnCheck' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_y_GPFRegenTstCndtnCheck_Out_Init'
     */
    (void)Rte_Write_VeRTMR_y_GPFRegenTstCndtnCheck_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_y_GPFRegenTstCndt);

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Sub_Out_Init'
     */
    /* Outport: '<Root>/VeRTMR_y_RWD3025_EOMTest' incorporates:
     *  DataStoreRead: '<S1084>/Data Store Read2'
     *  DataStoreRead: '<S1084>/Data Store Read4'
     *  S-Function (sfix_bitop): '<S1084>/Bitwise AND3'
     *  S-Function (sfix_bitop): '<S1084>/Bitwise AND4'
     *  S-Function (sfix_bitop): '<S1084>/Bitwise AND5'
     *  SignalConversion generated from: '<S14>/VeRTMR_y_RWD3025_EOMTest_Out_Init'
     */
    (void)Rte_Write_VeRTMR_y_RWD3025_EOMTest_Value((uint8)
        ((AeRTMR_y_ElecOnlyTestResult_PID & ((uint8)1)) |
         (AeRTMR_y_ElecOnlyTestStatus_PID & ((uint8)62))));

    /* End of Outputs for S-Function (fcgen): '<S14>/FcnCallGen' */

    /* Outport: '<Root>/VeRTMR_y_WEDRoutinePreConds' incorporates:
     *  SignalConversion generated from: '<S14>/VeRTMR_y_WEDRoutinePreConds_Out_Init'
     */
    (void)Rte_Write_VeRTMR_y_WEDRoutinePreConds_Value
        (RTMR_ac_B.OutportBufferForVeRTMR_y_WEDRoutinePreCo);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S14>/GPFRegen_Init_write'
     * */
    Rte_IrvWrite_RTMR_PwrOn_VeRTMR_b_GPFRegenRequest_write_IRV
        (RTMR_ac_B.OutportBufferForGPFRegen_Init);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S14>/Init_AE_ClutchLrnEnabled_write'
     * */
    Rte_IrvWrite_RTMR_PwrOn_VeRTMR_b_AE_ClutchLrnEnabled_write_IRV
        (RTMR_ac_B.OutportBufferForInit_AE_ClutchLrnEnabled);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S14>/Init_EOLClutchLrn_Enabled_write'
     * */
    Rte_IrvWrite_RTMR_PwrOn_VeRTMR_b_EOLClutchLrn_Enabled_write_IRV
        (RTMR_ac_B.OutportBufferForInit_EOLClutchLrn_Enable);

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Init_Values'
     */
    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  DataStoreRead: '<S1083>/Data Store Read'
     *  SignalConversion generated from: '<S14>/Init_ElectricOnlyTest_Enabled_write'
     */
    Rte_IrvWrite_RTMR_PwrOn_Init_ElectricOnlyTest_Enabled_write_IRV
        (AeRTMR_b_ElectricOnlyTest_Enabled);

    /* End of Outputs for S-Function (fcgen): '<S14>/FcnCallGen' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S14>/Init_EnaReslvrOfsLrnRtn_write'
     * */
    Rte_IrvWrite_RTMR_PwrOn_VeRTMR_b_EnaReslvrOfsLrnRtn_write_IRV
        (RTMR_ac_B.OutportBufferForInit_EnaReslvrOfsLrnRtn);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S14>/Init_ILE_ClutchLrnEnabled_write'
     * */
    Rte_IrvWrite_RTMR_PwrOn_VeRTMR_b_ILE_ClutchLrnEnabled_write_IRV
        (RTMR_ac_B.OutportBufferForInit_ILE_ClutchLrnEnable);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S14>/Init_K0_ClutchLrnEnabled_write'
     * */
    Rte_IrvWrite_RTMR_PwrOn_VeRTMR_b_K0_ClutchLrnEnabled_write_IRV
        (RTMR_ac_B.OutportBufferForInit_K0_ClutchLrnEnabled);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S14>/MCPA_ROL_Request_Init'
     * */
    Rte_IrvWrite_RTMR_PwrOn_VeRTMR_b_MCPA_ROL_Request_write_IRV
        (RTMR_ac_B.OutportBufferForMCPA_ROL_Request_Init);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S14>/MCPB_ROL_Request_Init'
     * */
    Rte_IrvWrite_RTMR_PwrOn_VeRTMR_b_MCPB_ROL_Request_write_IRV
        (RTMR_ac_B.OutportBufferForMCPB_ROL_Request_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, RTMR_CODE) Routine_RC1336_ToothAbutmentLearning(void)
{
    TeDCAB_e_RoutineOpType tmpRead;

    /* Inport: '<Root>/VeDCAB_e_Routine_RC1336_ToothAbutmentLearning_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC1336_ToothAbutmentLearning_Op_Value
        (&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1336_ToothAbutmentLearning' incorporates:
     *  SubSystem: '<Root>/Runnable_WED_ToothAbutmentLearning'
     */
    /* RelationalOperator: '<S16>/Equal' incorporates:
     *  Constant: '<S1090>/Constant'
     *  DataStoreWrite: '<S16>/Data Store Write'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC1336_ToothAbutmentLearning_Op'
     */
    VeRTMR_b_WED_RequestFlag = (((uint32)tmpRead) == CeDCAB_e_Routine_Start);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1336_ToothAbutmentLearning' */
}

/* Model initialize function */
FUNC(void, RTMR_CODE) RTMR_ac_Init(void)
{
    /* Start for DataStoreMemory: '<Root>/DSM_31' */
    AeRTMR_e_WED_ToothAbutResult = CeRTMR_e_WED_Failed;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/RTMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Init_Values'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1083>/Init_HybTransCmndSt' incorporates:
     *  Constant: '<S1085>/Constant'
     */
    RTMR_ac_B.LeRTMR_e_InitHybTransCmndSt = RTMR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S1083>/Init_BattRapidChrgCmnd' incorporates:
     *  Constant: '<S1087>/Constant'
     */
    RTMR_ac_B.LeRTMR_e_InitBattRapidChrgCmnd = RTMR_ac_ConstB.Constant_ns;

    /* SystemInitialize for SignalConversion generated from: '<S1083>/Init_ForceEngineStartStopState' incorporates:
     *  Constant: '<S1088>/Constant'
     */
    RTMR_ac_B.LeRTMR_e_InitForceEngineStartStopEnbl = RTMR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1083>/Init_ClutchLrnType' incorporates:
     *  Constant: '<S1086>/Constant'
     */
    RTMR_ac_B.LeRTMR_e_ClutchLrnType = RTMR_ac_ConstB.Constant_n;

    /* SystemInitialize for S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1084>/VeRTMR_e_GPFRegenTestSts_Out_Init' incorporates:
     *  Constant: '<S1084>/Const5'
     */
    RTMR_ac_B.OutportBufferForVeRTMR_e_GPFRegenTestSts = RTMR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S1084>/VeRTMR_e_ROLRoutineResult_Out_Init' incorporates:
     *  Constant: '<S1084>/Const8'
     */
    RTMR_ac_B.OutportBufferForVeRTMR_e_ROLRoutineResul = RTMR_ac_ConstB.Const8;

    /* SystemInitialize for SignalConversion generated from: '<S1084>/VeRTMR_e_WEDLearningProcedure_Out_Init' incorporates:
     *  Constant: '<S1084>/Const13'
     */
    RTMR_ac_B.OutportBufferForVeRTMR_e_WEDLearningProc = RTMR_ac_ConstB.Const13;

    /* SystemInitialize for SignalConversion generated from: '<S1084>/VeRTMR_e_FaultSts_WHL_HubDisConMissCal_Out_Init' incorporates:
     *  Constant: '<S1089>/Constant'
     */
    RTMR_ac_B.OutportBufferForVeRTMR_e_FaultSts_WHL_Hu =
        RTMR_ac_ConstB.Constant_m;

    /* End of SystemInitialize for S-Function (fcgen): '<S14>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/RTMR_MedTED'
     */
    /* SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/Rolls_Test'
     */
    /* SystemInitialize for Merge: '<S404>/Merge' incorporates:
     *  Merge: '<S404>/Merge1'
     *  SignalConversion generated from: '<S39>/Variant Source2'
     *  SignalConversion generated from: '<S39>/Variant Source3'
     */
#if Rte_SysCon_Variant_RTMR_5

    /* SystemInitialize for VariantMerge generated from: '<S39>/Variant Source3' */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_p = CeSTRR_e_NoOvrrd;

#else

    /* SystemInitialize for VariantMerge generated from: '<S39>/Variant Source3' incorporates:
     *  Constant: '<S403>/Constant'
     *  SignalConversion generated from: '<S39>/Variant Source3'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_p =
        RTMR_ac_ConstB.Constant_a;

#endif

    /* End of SystemInitialize for Merge: '<S404>/Merge' */

    /* SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TCM_ClutchLearn'
     */
    /* SystemInitialize for Merge: '<S735>/Merge' incorporates:
     *  Merge: '<S735>/Merge1'
     *  Merge: '<S738>/Merge'
     *  Merge: '<S739>/Merge'
     *  Merge: '<S739>/Merge1'
     *  SignalConversion generated from: '<S40>/Variant Source1'
     *  SignalConversion generated from: '<S40>/Variant Source3'
     *  SignalConversion generated from: '<S40>/Variant Source6'
     *  SignalConversion generated from: '<S40>/Variant Source7'
     * */
#if Rte_SysCon_Variant_RTMR_6

    /* SystemInitialize for VariantMerge generated from: '<S40>/Variant Source1' */
    VeRTMR_e_StartStopState_ClutchLrn = CeSTRR_e_NoOvrrd;

    /* SystemInitialize for VariantMerge generated from: '<S40>/Variant Source6' */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_j =
        RTMR_ac_B.VeRTMR_b_EOL_K0LrnEnbl;

#else

    /* SystemInitialize for VariantMerge generated from: '<S40>/Variant Source1' incorporates:
     *  Constant: '<S977>/Constant'
     *  SignalConversion generated from: '<S40>/Variant Source1'
     */
    VeRTMR_e_StartStopState_ClutchLrn = RTMR_ac_ConstB.Constant_o;

    /* SystemInitialize for VariantMerge generated from: '<S40>/Variant Source6' incorporates:
     *  SignalConversion generated from: '<S40>/Variant Source6'
     */
    RTMR_ac_B.VariantMerge_For_Variant_Source_Varian_j = false;

#endif

    /* End of SystemInitialize for Merge: '<S735>/Merge' */
    /* End of SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VeRTMR_e_HybTransCmndSt' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeRTMR_e_HybTransCmndSt_Value(CeOHSR_e_RngSel_N);

    /* SystemInitialize for Outport: '<Root>/VeRTMR_e_BattRapidChrgCmnd' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    (void)Rte_Write_VeRTMR_e_BattRapidChrgCmnd_Value
        (CeRTMR_e_BattRapidChrgDisable);

    /* SystemInitialize for Outport: '<Root>/VeRTMR_e_ForceAutoStopStartSt' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    (void)Rte_Write_VeRTMR_e_ForceAutoStopStartSt_Value(CeSTRR_e_NoOvrrd);

    /* SystemInitialize for Outport: '<Root>/VeRTMR_e_ClutchLrnType' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeRTMR_e_ClutchLrnType_Value(CeRTMR_e_Clutch_NoLrn);

    /* SystemInitialize for Outport: '<Root>/VeRTMR_e_GPFRegenTestSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_16'
     */
    (void)Rte_Write_VeRTMR_e_GPFRegenTestSts_Value(CeRTMR_e_GPFRegenSts_Stopped);

    /* SystemInitialize for Outport: '<Root>/VeRTMR_e_ROLRoutineResult' incorporates:
     *  Merge: '<Root>/Merge_Outport_19'
     */
    (void)Rte_Write_VeRTMR_e_ROLRoutineResult_Value(CeRTMR_e_ROLNotActive);

    /* SystemInitialize for Outport: '<Root>/VeRTMR_e_WEDLearningProcedure' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    (void)Rte_Write_VeRTMR_e_WEDLearningProcedure_Value(CeRTMR_e_WED_Not_Active);

    /* SystemInitialize for Outport: '<Root>/VeRTMR_e_FaultSts_WHL_HubDisConMissCal' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    (void)Rte_Write_VeRTMR_e_FaultSts_WHL_HubDisConMissCal_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeRTMR_e_WED_ToothAbutResult' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    (void)Rte_Write_VeRTMR_e_WED_ToothAbutResult_Value(CeRTMR_e_WED_Passed);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
