/*
 * File: HMIR_ac.c
 *
 * Code generated for Simulink model 'HMIR_ac'.
 *
 * Model version                  : 9.236
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:47:55 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HMIR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* Named constants for Chart: '<S375>/AC_Compressor' */
#define HMIR_ac_IN_FastFiltering       ((uint8)1U)
#define HMIR_ac_IN_Init                ((uint8)2U)
#define HMIR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#define HMIR_ac_IN_SlowFiltering       ((uint8)3U)

/* Named constants for Chart: '<S22>/Trans_Warning_Messages' */
#define HMIR_ac_IN_Bit0                ((uint8)1U)
#define HMIR_ac_IN_Bit1                ((uint8)2U)
#define HMIR_ac_IN_Bit10               ((uint8)3U)
#define HMIR_ac_IN_Bit11               ((uint8)4U)
#define HMIR_ac_IN_Bit12               ((uint8)5U)
#define HMIR_ac_IN_Bit13               ((uint8)6U)
#define HMIR_ac_IN_Bit14               ((uint8)7U)
#define HMIR_ac_IN_Bit15               ((uint8)8U)
#define HMIR_ac_IN_Bit16               ((uint8)9U)
#define HMIR_ac_IN_Bit17               ((uint8)10U)
#define HMIR_ac_IN_Bit2                ((uint8)11U)
#define HMIR_ac_IN_Bit3                ((uint8)12U)
#define HMIR_ac_IN_Bit4                ((uint8)13U)
#define HMIR_ac_IN_Bit5                ((uint8)14U)
#define HMIR_ac_IN_Bit6                ((uint8)15U)
#define HMIR_ac_IN_Bit7                ((uint8)16U)
#define HMIR_ac_IN_Bit8                ((uint8)17U)
#define HMIR_ac_IN_Bit9                ((uint8)18U)
#define HMIR_ac_IN_MsgInit             ((uint8)19U)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_HMIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, HMIR_VAR_INIT) HeHMIR_b_Pop9_Enbl_VF_M182 = 0;/* Referenced by: '<S623>/Calib' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(boolean, HMIR_VAR_INIT) KaHMIR_b_SugSpdDrvMdEnbl[13] =
{
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S787>/Calib' */

#endif

static volatile CONST(sint16, HMIR_VAR_INIT) KaHMIR_e_DriveMdRemapping[13] =
{
    0, 1, 8, 4, 2, 4, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S362>/Calib' */

static volatile CONST(sint16, HMIR_VAR_INIT) KaHMIR_e_TerrainHMIRqRemap[32] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 31
} ;                                    /* Referenced by: '<S182>/Calib' */

static volatile CONST(sint16, HMIR_VAR_INIT) KaHMIR_e_TerrainMdDesStatRemap[32] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 31
} ;                                    /* Referenced by: '<S180>/Calib' */

static volatile CONST(sint16, HMIR_VAR_INIT) KaHMIR_e_TerrainModeStatRemap[32] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 31
} ;                                    /* Referenced by: '<S181>/Calib' */

static volatile CONST(TeHMIR_e_VldtdTransRngSt_ShifterPOS, HMIR_VAR_INIT)
    KaHMIR_e_VldtdTransRngSt_ShifterPOS[30] =
{
    CeHMIR_e_ShifterPosBlank, CeHMIR_e_ShifterPosPark,
    CeHMIR_e_ShifterPosReverse, CeHMIR_e_ShifterPosNeutral,
    CeHMIR_e_ShifterPosDrive, CeHMIR_e_ShifterPosL, CeHMIR_e_ShifterPosD2,
    CeHMIR_e_ShifterPosD3, CeHMIR_e_ShifterPosD4, CeHMIR_e_ShifterPosD5,
    CeHMIR_e_ShifterPosDrive, CeHMIR_e_ShifterPosDrive, CeHMIR_e_ShifterPosDrive,
    CeHMIR_e_ShifterPosDrive, CeHMIR_e_ShifterPosDrive, CeHMIR_e_ShifterPosDrive,
    CeHMIR_e_ShifterPosDrive, CeHMIR_e_ShifterPosNoSelection,
    CeHMIR_e_ShifterPosNoSelection, CeHMIR_e_ShifterPosNoSelection,
    CeHMIR_e_ShifterPosNoSelection, CeHMIR_e_ShifterPosNoSelection,
    CeHMIR_e_ShifterPosNoSelection, CeHMIR_e_ShifterPosNoSelection,
    CeHMIR_e_ShifterPosNoSelection, CeHMIR_e_ShifterPosNoSelection,
    CeHMIR_e_ShifterPosNoSelection, CeHMIR_e_ShifterPosNoSelection,
    CeHMIR_e_ShifterPosNoSelection, CeHMIR_e_ShifterPosSNA
};                                     /* Referenced by: '<S351>/Calib' */

static volatile CONST(TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW, HMIR_VAR_INIT)
    KaHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW[30] =
{
    CeHMIR_e_ShifterPosNotCoded_CUSW, CeHMIR_e_ShifterPosNotCoded_CUSW,
    CeHMIR_e_ShifterPosReverse_CUSW, CeHMIR_e_ShifterPosNeutral_CUSW,
    CeHMIR_e_ShifterPosONE_CUSW, CeHMIR_e_ShifterPosONE_CUSW,
    CeHMIR_e_ShifterPosTWO_CUSW, CeHMIR_e_ShifterPosTHREE_CUSW,
    CeHMIR_e_ShifterPosFOUR_CUSW, CeHMIR_e_ShifterPosFIVE_CUSW,
    CeHMIR_e_ShifterPosSIX_CUSW, CeHMIR_e_ShifterPosSEVEN_CUSW,
    CeHMIR_e_ShifterPosEIGHT_CUSW, CeHMIR_e_ShifterPosNINE_CUSW,
    CeHMIR_e_ShifterPosNotCoded_CUSW, CeHMIR_e_ShifterPosNotCoded_CUSW,
    CeHMIR_e_ShifterPosNotCoded_CUSW, CeHMIR_e_ShifterPosNotCoded_CUSW,
    CeHMIR_e_ShifterPosNotCoded_CUSW, CeHMIR_e_ShifterPosNotCoded_CUSW,
    CeHMIR_e_ShifterPosNotCoded_CUSW, CeHMIR_e_ShifterPosNotCoded_CUSW,
    CeHMIR_e_ShifterPosNotCoded_CUSW, CeHMIR_e_ShifterPosNotCoded_CUSW,
    CeHMIR_e_ShifterPosNotCoded_CUSW, CeHMIR_e_ShifterPosNotCoded_CUSW,
    CeHMIR_e_ShifterPosNotCoded_CUSW, CeHMIR_e_ShifterPosNotCoded_CUSW,
    CeHMIR_e_ShifterPosNotCoded_CUSW, CeHMIR_e_ShifterPosNotCoded_CUSW
};                                     /* Referenced by: '<S352>/Calib' */

static volatile CONST(TeHMIR_e_TransWarn2Msgs, HMIR_VAR_INIT) KaHMIR_e_Warn[14] =
{
    CeHMIR_e_Warn2_5, CeHMIR_e_Warn2_6, CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_None,
    CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_None,
    CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_4, CeHMIR_e_Warn2_12,
    CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_None,
    CeHMIR_e_Warn2_None
};                           /* Referenced by: '<S22>/Trans_Warning_Messages' */

static volatile CONST(TeHMIR_e_TransWarn2Msgs, HMIR_VAR_INIT) KaHMIR_e_Warn2[18]
    =
{
    CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_9,
    CeHMIR_e_Warn2_10, CeHMIR_e_Warn2_11, CeHMIR_e_Warn2_14, CeHMIR_e_Warn2_12,
    CeHMIR_e_Warn2_13, CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_None,
    CeHMIR_e_Warn2_22, CeHMIR_e_Warn2_23, CeHMIR_e_Warn2_68, CeHMIR_e_Warn2_None,
    CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_None, CeHMIR_e_Warn2_None,
    CeHMIR_e_Warn2_17
};                           /* Referenced by: '<S22>/Trans_Warning_Messages' */

static volatile CONST(sint16, HMIR_VAR_INIT) KaHMIR_e_eBoostStsRemap[6] =
{
    0, 1, 2, 3, 4, 5
} ;                                    /* Referenced by: '<S925>/Calib' */

static volatile CONST(sint16, HMIR_VAR_INIT) KaHMIR_e_eBoostWarnRemap[29] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1
} ;                                    /* Referenced by: '<S926>/Calib' */

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_EngStallReattmpAllwd =
    5U;                                /* Referenced by: '<S624>/Calib' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_FrontWiperMoveSts = 5U;/* Referenced by: '<S788>/Calib' */

#endif

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_HEVOnReqECM_OffDebounce =
    0U;                                /* Referenced by: '<S328>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_HEVOnReqECM_OnDebounce =
    0U;                                /* Referenced by: '<S329>/Calib' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_HVBatteryShutOff = 50U;/* Referenced by: '<S765>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_HV_IsolFailed_Dbnc = 5U;/* Referenced by: '<S330>/Calib' */

#endif

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_MaxP1SpdLmtRaw_Dbnc = 5U;/* Referenced by: '<S663>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_MaxP2SpdLmtRaw_Dbnc = 5U;/* Referenced by: '<S664>/Calib' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_MsgCntrLimit = 19U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PerfLmtd_StpSfly_Dbnc =
    5U;                                /* Referenced by: '<S625>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT)
    KeHMIR_Cnt_PopUp_P1fFailedUseBumpStartHMI = 5U;/* Referenced by: '<S626>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg10 = 5U;/* Referenced by: '<S627>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg11 = 5U;/* Referenced by: '<S628>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg13 = 5U;/* Referenced by: '<S629>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg14 = 5U;/* Referenced by: '<S630>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg15 = 5U;/* Referenced by: '<S631>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg16 = 5U;/* Referenced by: '<S632>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg5 = 5U;/* Referenced by: '<S633>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg6 = 5U;/* Referenced by: '<S634>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg8 = 5U;/* Referenced by: '<S635>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_PopupMsg9 = 5U;/* Referenced by: '<S636>/Calib' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal0 = 1U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal1 = 2U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal10 = 11U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal11 = 12U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal12 = 13U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal13 = 14U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal14 = 15U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal15 = 16U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal16 = 17U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal17 = 18U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal2 = 8U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal3 = 9U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal4 = 10U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal5 = 7U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal6 = 5U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal7 = 4U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal8 = 6U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint8, HMIR_VAR_INIT) KeHMIR_Cnt_PriorityCal9 = 3U;
                             /* Referenced by: '<S22>/Trans_Warning_Messages' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Cnt_TerrainHMIRqDbnc = 200U;/* Referenced by: '<S70>/Calib' */

#if Rte_SysCon_Variant_HMIR_1

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_M_Trq_Derate_LSP = 0.0F;/* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_1

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_M_Trq_Derate_RSP = 0.0F;/* Referenced by: '<S438>/Calib' */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_Bat_NormalizationConst =
    1.0F;                              /* Referenced by: '<S545>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_Eng_NormalizationConst =
    1.0F;                              /* Referenced by: '<S569>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_HVACPwrUsageV_Threshld =
    127.0F;                            /* Referenced by: '<S580>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_HVAC_NormalizationConst =
    1.0F;                              /* Referenced by: '<S581>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_MaxBatPwr = 130.0F;/* Referenced by: '<S546>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_MaxEngPwr = 150.0F;/* Referenced by: '<S570>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_MinBatPwr = -125.0F;/* Referenced by: '<S547>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_MtrA_NormalizationConst =
    1.0F;                              /* Referenced by: '<S597>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_MtrB_NormalizationConst =
    1.0F;                              /* Referenced by: '<S598>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_Mtr_NormalizationConst =
    1.0F;                              /* Referenced by: '<S599>/Calib' */

#if Rte_SysCon_Variant_HMIR_6

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_P_Regen_NormalizationConst =
    1.0F;                              /* Referenced by: '<S775>/Calib' */

#endif

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Pct_BatSocLowPopMsg2 = 15U;/* Referenced by: '<S637>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_Pct_BatteryLowPerf1 = 30.0F;/* Referenced by: '<S762>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_Pct_BatteryLowPerf2 = 70.0F;/* Referenced by: '<S763>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_Pct_CSUpperThreshold =
    28.0F;                             /* Referenced by:
                                        * '<S279>/Calib'
                                        * '<S879>/Calib'
                                        */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Pct_SOCDiffActualAboveTarget
    = 0U;                              /* Referenced by: '<S280>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_Pct_SOCDiffActualBelowTarget
    = 0U;                              /* Referenced by: '<S281>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_Pct_SOCDispChargComplt =
    100.0F;                            /* Referenced by:
                                        * '<S298>/Calib'
                                        * '<S300>/Calib'
                                        */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_Pct_SOCDispChargComplt80 =
    80.0F;                             /* Referenced by: '<S299>/Calib' */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_Pct_SOCDispCharging = 99.0F;/* Referenced by: '<S282>/Calib' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_Pct_SocTelltale1 = 30.0F;/* Referenced by: '<S902>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_Pct_SocTelltale2 = 70.0F;/* Referenced by: '<S903>/Calib' */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_Pct_ValetMdMaxAccelPdl =
    99.0F;                             /* Referenced by: '<S69>/Calib' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_T_MCPA_InvrtrTempThrs =
    120.0F;                            /* Referenced by:
                                        * '<S897>/Calib'
                                        * '<S916>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_T_MCPA_WindingTempThrs =
    120.0F;                            /* Referenced by:
                                        * '<S898>/Calib'
                                        * '<S917>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_T_MCPB_InvrtrTempThrs =
    120.0F;                            /* Referenced by:
                                        * '<S899>/Calib'
                                        * '<S918>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_T_MCPB_WindingTempThrs =
    120.0F;                            /* Referenced by:
                                        * '<S900>/Calib'
                                        * '<S919>/Calib'
                                        */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_T_MaxTempDifferenceClng =
    30.0F;                             /* Referenced by: '<S582>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_T_MaxTempDifferenceHtng =
    30.0F;                             /* Referenced by: '<S583>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_AAT_SnsrCktHi_En = 1;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_AAT_SnsrCktLo_En = 1;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_AAT_SnsrPerf_En = 1;/* Referenced by: '<S227>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_AC_CompFactorReset = 0;
                                     /* Referenced by: '<S375>/AC_Compressor' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_AC_CompFactorSet = 1;
                                     /* Referenced by: '<S375>/AC_Compressor' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_APMThermalRunawayEn = 0;/* Referenced by: '<S389>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_APMstModeRqEn = 1;/* Referenced by: '<S388>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_APPSnsr1MinStpPerf_En = 1;/* Referenced by: '<S228>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_BPCMHEVRqEnbl = 1;/* Referenced by: '<S331>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_BatChaCouTemSenACirRan_En
    = 1;                               /* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_BatChaCouTemSnsrCkt_En =
    1;                                 /* Referenced by: '<S230>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_BatIsolStatFailedEnabl =
    1;                                 /* Referenced by: '<S332>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_BattChrgCouTempSnsrBCktPerf_En = 1;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_BattChrgCouTempSnsrBCkt_En = 1;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_BattChrgCouTempSnsrCCktPerf_En = 1;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_BattChrgCouTempSnsrCCkt_En = 1;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_BattCoolPmpOveSpd_En = 1;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_CM_Perf_En = 1;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_CT_SnsrCktHi_En = 1;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_CT_SnsrCktLo_En = 1;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_CT_SnsrPerf_En = 1;/* Referenced by: '<S239>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_ChinaMarket = 0;/* Referenced by: '<S387>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_ClntTempTooHigh_En = 1;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_CtrlValCCktPerf_En = 1;/* Referenced by: '<S241>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_DM_A_I_PU_OvrTemp_Ovrd =
    1;                                 /* Referenced by: '<S400>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_DM_A_I_PV_OvrTemp_Ovrd =
    1;                                 /* Referenced by: '<S401>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_DM_A_I_PW_OvrTemp_Ovrd =
    1;                                 /* Referenced by: '<S402>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_DM_B_I_PU_OvrTemp_Ovrd =
    1;                                 /* Referenced by: '<S403>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_DM_B_I_PV_OvrTemp_Ovrd =
    1;                                 /* Referenced by: '<S404>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_DM_B_I_PW_OvrTemp_Ovrd =
    1;                                 /* Referenced by: '<S405>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_ECMHEVRqEnbl = 1;/* Referenced by: '<S333>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_EngHoodSwCktHi_En = 1;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_EngHoodSwCktLo_En = 1;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_EngHoodSwCktRngPerf_En =
    1;                                 /* Referenced by: '<S244>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_EngStrtStpEngShtDwnIntmEnbl = 1;/* Referenced by: '<S638>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_Fan1CntrlCktHi_En = 1;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_Fan1CntrlCktLo_En = 1;/* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_Fan1CntrlCkt_En = 1;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_HB_PSC_CtrlValBCktPerf_En
    = 1;                               /* Referenced by: '<S248>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_HVC_HtrFactorReset = 0;/* Referenced by: '<S375>/HVC_Htr' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_HVC_HtrFactorSet = 1;/* Referenced by: '<S375>/HVC_Htr' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_IgnSwRunCrnkPstnCktLo_En =
    1;                                 /* Referenced by: '<S249>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_InplantmodeActv = 1;/* Referenced by: '<S334>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_LngAcclSnsrBsdEffDsply =
    0;                                 /* Referenced by: '<S561>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_LostCommHB_PSCCooCtrlVlvB_En = 1;/* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_LostCommHB_PSCCooCtrlVlvC_En = 1;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_LostCommMtrElectCoolPmpA_En = 1;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_LostCommMtrElectCoolPmpB_En = 1;/* Referenced by: '<S253>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_MtrA_Invrtr_OverTemp_Ovrd
    = 1;                               /* Referenced by: '<S406>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_MtrA_OverTemp_Ovrd = 1;/* Referenced by: '<S407>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_MtrB_Invrtr_OverTemp_Ovrd
    = 1;                               /* Referenced by: '<S408>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_MtrB_OverTemp_Ovrd = 1;/* Referenced by: '<S409>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_MtrElect_CT2_SnsrBCktHi_En = 1;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_MtrElect_CT2_SnsrBCktLo_En = 1;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_MtrElect_CT_SnsrBPerf_En =
    1;                                 /* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_MtrElect_CT_SnsrCktHi_En =
    1;                                 /* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_MtrElect_CT_SnsrCktLo_En =
    1;                                 /* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_MtrElect_CT_SnsrPerf_En =
    1;                                 /* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_MtrElect_CooPumBOvrSpd_En
    = 1;                               /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_MtrElect_CoolPmpATempSnsrPerf_En = 1;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_MtrElect_CoolPmpBTempSnsrPerf_En = 1;/* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_MtrElect_CoolPumAOvrSpd_En = 1;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT)
    KeHMIR_b_MtrElect_CoolPumBCtrlPerf_En = 1;/* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_OffRdMdEnbl = 1;/* Referenced by: '<S789>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_OptmSugSpdEnbl = 1;/* Referenced by: '<S790>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_PIM_ContMod_En = 1;/* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_PwrElecPmpPerf_En = 1;/* Referenced by: '<S266>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_PwrtrnIsolStatFailedEnabl
    = 1;                               /* Referenced by: '<S335>/Calib' */

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_RadFanDiagErrM0_En = 1;/* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_RadFanDiagErrM1_En = 1;/* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_RadFanDiagErrM2_En = 1;/* Referenced by: '<S269>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_ServiceHybSys_init = 0;/* Referenced by: '<S885>/Calib' */
static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_TempEngShtDwnEnbl = 1;/* Referenced by: '<S639>/Calib' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_TurtleMd3Enbl = 1;/* Referenced by: '<S791>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_TurtleMd4Enbl = 1;/* Referenced by: '<S792>/Calib' */

#endif

static volatile CONST(boolean, HMIR_VAR_INIT) KeHMIR_b_UseEngClnt_Temp = 0;/* Referenced by: '<S584>/Calib' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_dv_SugSpdRTLD = -5.0F;/* Referenced by: '<S793>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_dv_SugSpdRTLU = 5.0F;/* Referenced by: '<S794>/Calib' */

#endif

static volatile CONST(sint16, HMIR_VAR_INIT) KeHMIR_e_ShftProg = 252;/* Referenced by: '<S20>/Calib' */
static volatile CONST(TeTRGR_e_TransRangeState, HMIR_VAR_INIT)
    KeHMIR_e_ShifterInPark = CeTRGR_e_TransRangePark;/* Referenced by: '<S353>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_AC_CompLPFConst = 0.1F;
                                     /* Referenced by: '<S375>/AC_Compressor' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_Bat_FltrCnst = 0.4F;/* Referenced by: '<S548>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_CoachingGaugeFltrCnst =
    0.2F;                              /* Referenced by: '<S562>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_Eng_FltrCnst = 0.4F;/* Referenced by: '<S571>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_EstSOCDispFiltrCoef =
    1.0F;                              /* Referenced by: '<S302>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_HVACPwr_UnitConv = 1.0F;/* Referenced by: '<S585>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT)
    KeHMIR_k_HVAC_CompPwrUsage_UnitConv = 1.0F;/* Referenced by: '<S586>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT)
    KeHMIR_k_HVAC_HVC_HtrPwrUsage_UnitConv = 1000.0F;/* Referenced by: '<S587>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_HVC_HtrLPFConst = 0.1F;/* Referenced by: '<S375>/HVC_Htr' */

#if Rte_SysCon_Variant_HMIR_1 || Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_MtrA_Drtng_Factor_Th1 =
    0.5F;                              /* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_1 || Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_MtrA_Drtng_Factor_Th3 =
    0.3F;                              /* Referenced by: '<S411>/Calib' */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_MtrA_FltrCnst = 0.4F;/* Referenced by: '<S600>/Calib' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_MtrB_Drtng_Factor_Th1 =
    0.5F;                              /* Referenced by: '<S412>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_MtrB_Drtng_Factor_Th3 =
    0.3F;                              /* Referenced by: '<S413>/Calib' */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_MtrB_FltrCnst = 0.4F;/* Referenced by: '<S601>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_Mtr_FltrCnst = 0.4F;/* Referenced by: '<S602>/Calib' */

#if Rte_SysCon_Variant_HMIR_6

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_RgnMtrFltrCnst = 0.4F;/* Referenced by: '<S776>/Calib' */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_k_SOCDispFiltrCoef = 1.0F;/* Referenced by:
                                                                      * '<S283>/Calib'
                                                                      * '<S880>/Calib'
                                                                      */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_AStrtFailed_Dbnc = 0U;/* Referenced by: '<S640>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_BattCondPlugin_Rq_Dbnc =
    0U;                                /* Referenced by: '<S641>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_BattSOCPlugin_Rq_Dbnc = 0U;/* Referenced by: '<S642>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_CreepTorqMode_Dbnc = 0U;/* Referenced by: '<S643>/Calib' */

#if Rte_SysCon_Variant_HMIR_1

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_DerateOverHeated_Dbnc = 0U;/* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_1

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_DerateOverSpeed_Dbnc = 0U;/* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_1 || Rte_SysCon_Variant_HMIR_5

static volatile CONST(uint16, HMIR_VAR_INIT)
    KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc = 5U;/* Referenced by: '<S414>/Calib' */

#endif

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_DrvNotAllwdTPChck_Dbnc =
    5U;                                /* Referenced by: '<S644>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_EngDsbldToIC_Dbnc = 0U;/* Referenced by: '<S645>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_EngNegSpdFltDtct_Dbnc = 0U;/* Referenced by: '<S646>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_EngStrtStpEngShtDwn_Dbnc =
    0U;                                /* Referenced by: '<S647>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_EngSysLowFuel_Dbnc = 0U;/* Referenced by: '<S648>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_GSISt_Enabl_Hold = 0U;/* Referenced by: '<S756>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_GSISt_Hold = 0U;/* Referenced by: '<S753>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_GSIStatus_Dbnc = 5U;/* Referenced by: '<S751>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_HVAC_TurnedOff_Dbnc = 0U;/* Referenced by: '<S649>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_HVOverVoltFailure_Dbnc =
    0U;                                /* Referenced by: '<S650>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_HV_BatModVoltMin_Dbnc = 0U;/* Referenced by: '<S651>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_HybPwrtrnRdcdPerfCmnd_Dbnc
    = 0U;                              /* Referenced by: '<S652>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_LeaveKeyInRun_Dbnc = 0U;/* Referenced by: '<S653>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_LowVoltSysFld_Dbnc = 0U;/* Referenced by: '<S654>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_n_MaxP1SpdLmtRawThd =
    500.0F;                            /* Referenced by: '<S661>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_n_MaxP2SpdLmtRawThd =
    130.0F;                            /* Referenced by: '<S662>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_PwrLimON_Dbnc = 0U;/* Referenced by: '<S655>/Calib' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(sint16, HMIR_VAR_INIT) KeHMIR_n_RPMth1 = 5000;/* Referenced by: '<S920>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(sint16, HMIR_VAR_INIT) KeHMIR_n_RPMth2 = 1000;/* Referenced by: '<S921>/Calib' */

#endif

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_ReducedPerfMode2_Dbnc = 0U;/* Referenced by: '<S656>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT)
    KeHMIR_n_RmtStrtAbort_StrtVhclRq_Dbnc = 0U;/* Referenced by: '<S657>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT)
    KeHMIR_n_StrtVhclToMaintain12Vlt_Dbnc = 0U;/* Referenced by: '<S658>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_Veh_Spd_Lmtd_Dbnc = 5U;/* Referenced by: '<S659>/Calib' */
static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_n_limitInputTrq_Dbnc = 0U;/* Referenced by: '<S660>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_t_100msTask = 0.1F;/* Referenced by:
                                                                      * '<S549>/Calib'
                                                                      * '<S563>/Calib'
                                                                      * '<S572>/Calib'
                                                                      * '<S588>/Calib'
                                                                      * '<S603>/Calib'
                                                                      * '<S611>/Calib'
                                                                      * '<S777>/Calib'
                                                                      */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_t_25msTask = 0.025F;/* Referenced by:
                                                                      * '<S161>/Calib'
                                                                      * '<S168>/Calib'
                                                                      */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_t_4_sec = 4.0F;/* Referenced by: '<S314>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_t_50_dT = 0.05F;/* Referenced by:
                                                                      * '<S315>/Calib'
                                                                      * '<S336>/Calib'
                                                                      */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_t_AC_CompSlowFltrTimer =
    1.0F;                            /* Referenced by: '<S375>/AC_Compressor' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_t_HVC_HtrSlowFltrTimer =
    1.0F;                              /* Referenced by: '<S375>/HVC_Htr' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_t_HevLmpMinTime = 15.0F;/* Referenced by: '<S337>/Calib' */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_t_SampleRate = 0.1F;/* Referenced by:
                                                                      * '<S375>/AC_Compressor'
                                                                      * '<S375>/HVC_Htr'
                                                                      */
static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_t_TranWarnDly_When0 =
    0.325F;                            /* Referenced by:
                                        * '<S162>/Calib'
                                        * '<S169>/Calib'
                                        */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_DispSpdLimOfs = 5.0F;/* Referenced by: '<S795>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_DispSpdLimStsThr = 5.0F;/* Referenced by: '<S796>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_MaxDiffAllwd = 5.0F;/* Referenced by: '<S797>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_SugSpdLmtDltDwn = 5.0F;/* Referenced by: '<S798>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_SugSpdLmtDltUp = 5.0F;/* Referenced by: '<S799>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_SugSpdLmtLowDltDwn = 5.0F;/* Referenced by: '<S800>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_SugSpdLmtLowDltUp = 5.0F;/* Referenced by: '<S801>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_SugSpdOptDltDwn = 5.0F;/* Referenced by: '<S802>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_SugSpdOptDltUp = 5.0F;/* Referenced by: '<S803>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_SugSpdWMOfs = 5.0F;/* Referenced by: '<S804>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_TurtleMdSpdLimOfs = 5.0F;/* Referenced by: '<S805>/Calib' */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KeHMIR_v_ValetMdMaxSpd = 5.0F;/* Referenced by: '<S68>/Calib' */

#if Rte_SysCon_Variant_HMIR_1 || Rte_SysCon_Variant_HMIR_5

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_y_DerateRsnMtrA = 0U;/* Referenced by:
                                                                      * '<S441>/Calib'
                                                                      * '<S504>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_y_DerateRsnMtrB = 0U;/* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_1

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_y_DerateRsnOverHeated =
    29744U;                            /* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_1

static volatile CONST(uint16, HMIR_VAR_INIT) KeHMIR_y_DerateRsnOverSpeed = 128U;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_Cf_SpdOptmSug[7] =
{
    90.0F, 75.0F, 70.0F, 65.0F, 60.0F, 55.0F, 50.0F
} ;                                    /* Referenced by: '<S806>/Vector' */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_Cnt_TargetSOC_BlendInRate
    [11] =
{
    0.001F, 0.001F, 0.001F, 0.005F, 0.01F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F
} ;                                    /* Referenced by: '<S293>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_Cnt_TargetSOC_BlendOutRate
    [11] =
{
    -0.001F, -0.001F, -0.001F, -0.005F, -0.01F, -0.1F, -0.1F, -0.1F, -0.1F,
    -0.1F, -0.1F
} ;                                    /* Referenced by: '<S294>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_P_MaxAxlePwr[10] =
{
    0.0F, 350.0F, 325.0F, 300.0F, 250.0F, 175.0F, 150.0F, 80.0F, 50.0F, 25.0F
} ;                                    /* Referenced by: '<S612>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_P_MaxRegenPwr[10] =
{
    0.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F, 60.0F, 40.0F, 25.0F
} ;                                    /* Referenced by: '<S613>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_Pct_SOCDisp[11] =
{
    1.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S284>/Vector'
                                        * '<S303>/Vector'
                                        * '<S881>/Vector'
                                        */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_Pct_TargetSOCDisp[11] =
{
    1.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S285>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_a_MaxAccel[10] =
{
    6.502F, 6.502F, 6.502F, 6.502F, 6.502F, 6.502F, 6.502F, 6.502F, 6.502F,
    6.502F
} ;                                    /* Referenced by: '<S564>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_a_MaxDecel[10] =
{
    -6.502F, -6.502F, -6.502F, -6.502F, -6.502F, -6.502F, -6.502F, -6.502F,
    -6.502F, -6.502F
} ;                                    /* Referenced by: '<S565>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_k_AC_CompFltrCnst[11] =
{
    1.0F, 0.9F, 0.8F, 0.7F, 0.6F, 0.5F, 0.4F, 0.3F, 0.2F, 0.1F, 0.0F
} ;                                    /* Referenced by: '<S589>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_k_CoachingGaugeFltrCnst[7] =
{
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F
} ;                                    /* Referenced by: '<S566>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_k_HVC_HtrFltrCnst[11] =
{
    1.0F, 0.9F, 0.8F, 0.7F, 0.6F, 0.5F, 0.4F, 0.3F, 0.2F, 0.1F, 0.0F
} ;                                    /* Referenced by: '<S590>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_k_PwrPercent_FltrCnst[7] =
{
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F
} ;                                    /* Referenced by: '<S614>/Vector' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_v_SpdMaxSug[13] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 80.0F, 80.0F, 80.0F, 95.0F, 95.0F, 95.0F, 115.0F,
    115.0F, 115.0F
} ;                                    /* Referenced by: '<S807>/Vector' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_v_SpdMinSug[13] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 65.0F, 65.0F, 65.0F, 80.0F, 80.0F, 80.0F, 100.0F,
    100.0F, 100.0F
} ;                                    /* Referenced by: '<S808>/Vector' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KtHMIR_v_SpdThdSug[13] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 65.0F, 65.0F, 65.0F, 80.0F, 80.0F, 80.0F, 100.0F,
    100.0F, 100.0F
} ;                                    /* Referenced by: '<S809>/Vector' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_Cf_SpdOptmSug[7] =
{
    0.0F, 50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F
} ;                                    /* Referenced by: '<S806>/Vector' */

#endif

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_Cnt_TargetSOC_BlendInRate
    [11] =
{
    -5.0F, -4.0F, -3.0F, -2.0F, -1.0F, 0.0F, 0.5F, 1.0F, 1.5F, 2.0F, 2.5F
} ;                                    /* Referenced by: '<S293>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_Cnt_TargetSOC_BlendOutRate
    [11] =
{
    -5.0F, -4.0F, -3.0F, -2.0F, -1.0F, 0.0F, 0.5F, 1.0F, 1.5F, 2.0F, 2.5F
} ;                                    /* Referenced by: '<S294>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_P_MaxAxlePwr[10] =
{
    0.0F, 10.0F, 20.0F, 40.0F, 55.0F, 70.0F, 75.0F, 80.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S612>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_P_MaxRegenPwr[10] =
{
    0.0F, 10.0F, 20.0F, 40.0F, 55.0F, 70.0F, 75.0F, 80.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S613>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_Pct_SOCDisp[11] =
{
    28.0F, 30.0F, 40.0F, 47.0F, 53.0F, 57.0F, 60.0F, 63.0F, 67.0F, 74.0F, 91.2F
} ;                                    /* Referenced by:
                                        * '<S284>/Vector'
                                        * '<S303>/Vector'
                                        * '<S881>/Vector'
                                        */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_Pct_TargetSOCDisp[11] =
{
    28.0F, 30.0F, 40.0F, 47.0F, 53.0F, 57.0F, 60.0F, 63.0F, 67.0F, 74.0F, 91.2F
} ;                                    /* Referenced by: '<S285>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_a_MaxAccel[10] =
{
    0.0F, 1.0F, 11.0F, 48.0F, 64.0F, 80.0F, 97.0F, 112.0F, 128.0F, 168.0F
} ;                                    /* Referenced by: '<S564>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_a_MaxDecel[10] =
{
    0.0F, 1.0F, 11.0F, 48.0F, 64.0F, 80.0F, 97.0F, 112.0F, 128.0F, 168.0F
} ;                                    /* Referenced by: '<S565>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_k_AC_CompFltrCnst[11] =
{
    0.0F, 0.15F, 0.2F, 0.25F, 0.4F, 0.55F, 0.6F, 0.7F, 0.8F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S589>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_k_CoachingGaugeFltrCnst[7] =
{
    0.0F, 1.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S566>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_k_HVC_HtrFltrCnst[11] =
{
    0.0F, 0.15F, 0.2F, 0.25F, 0.4F, 0.5F, 0.55F, 0.7F, 0.8F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S590>/Vector' */

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_k_PwrPercent_FltrCnst[7] =
{
    0.0F, 1.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S614>/Vector' */

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_v_SpdMaxSug[13] =
{
    0.0F, 1.0F, 50.0F, 69.0F, 70.0F, 80.0F, 89.0F, 90.0F, 100.0F, 109.0F, 110.0F,
    120.0F, 130.0F
} ;                                    /* Referenced by: '<S807>/Vector' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_v_SpdMinSug[13] =
{
    0.0F, 1.0F, 50.0F, 69.0F, 70.0F, 80.0F, 89.0F, 90.0F, 100.0F, 109.0F, 110.0F,
    120.0F, 130.0F
} ;                                    /* Referenced by: '<S808>/Vector' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static volatile CONST(float32, HMIR_VAR_INIT) KxHMIR_v_SpdThdSug[13] =
{
    0.0F, 1.0F, 50.0F, 69.0F, 70.0F, 80.0F, 89.0F, 90.0F, 100.0F, 109.0F, 110.0F,
    120.0F, 130.0F
} ;                                    /* Referenced by: '<S809>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_HMIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HMIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(TeHMIR_e_HEV_LMP, HMIR_VAR_INIT) EeHMIR_e_HEV_LMP_RQ;/* '<Root>/DSM_1' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Cnt_ActualTargetDiff;/* '<S187>/Surrrrrbtract' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Cnt_BlendInRate;/* '<S293>/Vector' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Cnt_BlendOutRate;/* '<S294>/Vector' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Cnt_EnableValue;/* '<S296>/Sum3' */
static VAR(uint8, HMIR_VAR_INIT) VeHMIC_Cnt_Msg_Cntr;/* '<S154>/Gain' */

#if Rte_SysCon_Variant_HMIR_1

static VAR(float32, HMIR_VAR_INIT) VeHMIC_M_FinalDriverTorqueRqst;/* '<S416>/Sum' */

#endif

static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_BatPwrUsageDisp;/* '<S552>/Switch1' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_EngPwrUsageDisp;/* '<S575>/Switch1' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_HVACPwrUsageDisp;/* '<S375>/Switch4' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_MtrAPwrRaw;/* '<S376>/Product4' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_MtrAPwrUsageDisp;/* '<S376>/Divide1' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_MtrBPwrRaw;/* '<S376>/Product5' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_MtrBPwrUsageDisp;/* '<S376>/Divide2' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_MtrPwrRaw;/* '<S376>/Sum' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_MtrPwrUsageDisp;/* '<S376>/Divide' */

#if Rte_SysCon_Variant_HMIR_6

static VAR(float32, HMIR_VAR_INIT) VeHMIC_P_RegenPowerRaw;/* '<S773>/Switch' */

#endif

static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_AccelPortion;/* '<S372>/Product' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_ActualSOC;/* '<S187>/Switch1' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_ActualSOCFilt;/* '<S284>/Vector' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_ActualSOCFiltdSatd;
                              /* '<S187>/SigConvForSigProp_Variant_Source1_0' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_CoachDisp;/* '<S372>/Switch3' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_DecelPortion;/* '<S372>/Product1' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_DispSOC;/* '<S270>/Add1' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_EstSOCFilt;/* '<S303>/Vector' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_OutputPwrDisp;/* '<S377>/Switch1' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_TargetSOC;/* '<S187>/Switch5' */
static VAR(float32, HMIR_VAR_INIT) VeHMIC_Pct_TargetSOC_Diff;/* '<S187>/Switch6' */

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIC_T_HVBattTempDisp;/* '<S770>/Gain' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIC_T_MaxCmfrtZnHVBattDisp;/* '<S766>/Gain' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIC_T_MaxDrtngZnHVBattDisp;/* '<S768>/Gain' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIC_T_MinCmfrtZnHVBattDisp;/* '<S767>/Gain' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIC_T_MinDrtngZnHVBattDisp;/* '<S769>/Gain' */

#endif

static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_ActualGreater;/* '<S187>/Relational Operator5' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_ActualLower;/* '<S187>/Relational Operator3' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_BatPwrUsageDispV;/* '<S553>/Gain' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_CoachDispV;/* '<S372>/Logical1' */

#if Rte_SysCon_Variant_HMIR_5

static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_CondTrue_MtrTemp_IgbtTemp;/* '<S896>/OR8' */

#endif

#if Rte_SysCon_Variant_HMIR_2

static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_CondTrue_SvsLmpM182;/* '<S310>/OR8' */

#endif

static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_ConditionTrueForEsave;/* '<S187>/Logical Operator' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_ConditionTrueThreshold;/* '<S187>/Comparison1' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_DTC_Service_Lamp_M182;/* synthesized block */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_DriveReady;/* '<S367>/Logical' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_DrvAway_Alrt_VDCM;/* '<S153>/Comparison18' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_DrvAway_Inhbt_VDCM;/* '<S153>/Comparison19' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_ESaveMode;/* '<S187>/Relational Operator4' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_HEV_EVT_MD;/* '<S374>/Switch' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_HVACPwrUsageDIspV;/* '<S375>/Comparison' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_InitSOCIsLow;/* '<S876>/Logical2' */

#if Rte_SysCon_Variant_HMIR_2

static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_KeyCycle;/* '<S310>/Logical4' */

#endif

static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_MiL_OnRq_BPCM;/* '<S368>/Switch2' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_MtrAPwrUsageDispV;/* '<S376>/Logical2' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_MtrBPwrUsageDispV;/* '<S376>/Logical3' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_MtrPwrUsageDispV;/* '<S376>/Logical1' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_OutputPwrDispV;/* '<S377>/Logical1' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_PopUp_P1fFailedUseBumpStartHMI;/* '<S685>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg1;/* '<S378>/Logical Operator' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg10;/* '<S681>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg11;/* '<S686>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg13;/* '<S684>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg14;/* '<S691>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg15;/* '<S692>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg16;/* '<S693>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg2;/* '<S378>/Logical Operator2' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg3;/* '<S700>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg4;/* '<S378>/Logical Operator4' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg5;/* '<S676>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg6;/* '<S678>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg7;/* '<S667>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg8;/* '<S683>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Popup_Msg9;/* '<S378>/Logical Operator3' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_Reduced_Mtr_Capability;/* '<S369>/Logical Operator5' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_RollingWarning;/* '<S153>/Comparison6' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_ShifterInPark;/* '<S190>/Comparison1' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_ThrmlRnAway_Lmp;/* '<S368>/Switch1' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_TransWarn2Msg_0;/* '<S155>/Comparison3' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_TransWarn2Msg_0_Dbnc;/* '<S163>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_TransWarn2Msg_Not0;/* '<S155>/Comparison2' */
static VAR(TeHMIR_e_TransWarn2Msgs, HMIR_VAR_INIT)
    VeHMIC_b_TransWarn2Msg_Not0_Cont;  /* '<S155>/Switch2' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_TransWarnMsg_0;/* '<S156>/Comparison3' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_TransWarnMsg_0_Dbnc;/* '<S170>/AND' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_TransWarnMsg_Not0;/* '<S156>/Comparison2' */
static VAR(TeHMIR_e_TransWarn2Msgs, HMIR_VAR_INIT)
    VeHMIC_b_TransWarnMsg_Not0_Cont;   /* '<S156>/Switch2' */

#if Rte_SysCon_Variant_HMIR_6

static VAR(boolean, HMIR_VAR_INIT) VeHMIC_b_TrueConditionForRegen;/* '<S773>/Logical Operator' */

#endif

static VAR(uint16, HMIR_VAR_INIT) VeHMIC_e_GSISt_Dbncd;/* '<S757>/Switch' */
static VAR(TeHMIR_e_GSI_Stat, HMIR_VAR_INIT) VeHMIC_e_GSIStat;/* '<S380>/Switch4' */
static VAR(TeHMIR_e_HEV_LMP, HMIR_VAR_INIT) VeHMIC_e_HEV_LMP_RQ;/* '<S310>/Switch5' */
static VAR(TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW, HMIR_VAR_INIT)
    VeHMIC_e_ShifterPOS_K8;            /* '<S190>/Selector1' */
static VAR(TeHMIR_e_TransWarn2Msgs, HMIR_VAR_INIT) VeHMIC_e_TransWarn2Msg;/* '<S22>/Trans_Warning_Messages' */
static VAR(TeHMIR_e_TransWarn2Msgs, HMIR_VAR_INIT) VeHMIC_e_TransWarn2Msg_Cont;/* '<S155>/Switch3' */
static VAR(TeHMIR_e_TransWarn2Msgs, HMIR_VAR_INIT) VeHMIC_e_TransWarnMsg;/* '<S22>/Trans_Warning_Messages' */
static VAR(TeHMIR_e_TransWarn2Msgs, HMIR_VAR_INIT) VeHMIC_e_TransWarnMsg_Cont;/* '<S156>/Switch3' */

#if Rte_SysCon_Variant_HMIR_5

static VAR(boolean, HMIR_VAR_INIT) VeHMIR_b_DerateReasonMtrA;/* '<S417>/Comparison16' */

#endif

#if Rte_SysCon_Variant_HMIR_1

static VAR(boolean, HMIR_VAR_INIT) VeHMIR_b_DerateReasonMtrA_VF;/* '<S416>/Comparison16' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(boolean, HMIR_VAR_INIT) VeHMIR_b_DerateReasonMtrB;/* '<S417>/Comparison33' */

#endif

static VAR(boolean, HMIR_VAR_INIT) VeHMIR_b_ResetTimer;/* '<S310>/OR' */
static VAR(boolean, HMIR_VAR_INIT) VeHMIR_b_TimerOut;/* '<S340>/Greater  Than1' */

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_LmtLowMinSugSpd;/* '<S780>/Sum10' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_LmtLowThdSugSpd;/* '<S780>/Sum9' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_LmtMaxSugSpd;/* '<S780>/Sum5' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_LmtMinSugSpd;/* '<S780>/Sum6' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_MaxSugSpd;/* '<S807>/Vector' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_MaxSugSpdHMI;/* '<S784>/Sum3' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_MinSugSpd;/* '<S808>/Vector' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_MinSugSpdHMI;/* '<S785>/Sum3' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_OptMaxSugSpd;/* '<S780>/Sum12' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_OptMinSugSpd;/* '<S780>/Sum13' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_OptThdSugSpd;/* '<S806>/Vector' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_ThdSugSpd;/* '<S809>/Vector' */

#endif

#if Rte_SysCon_Variant_HMIR_5

static VAR(float32, HMIR_VAR_INIT) VeHMIR_v_ThdSugSpdHMI;/* '<S786>/Sum3' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HMIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HMIR
#include "MemMap.h"

CONST(ConstB_HMIR_ac_T, HMIR_VAR_INIT) HMIR_ac_ConstB =
{
    0.0F,                              /* '<S875>/Const12' */
    0.0F,                              /* '<S875>/Const13' */
    0.0F,                              /* '<S875>/Const15' */
    0.0F,                              /* '<S875>/Const18' */
    0.0F,                              /* '<S875>/Const20' */
    0.0F,                              /* '<S875>/Const21' */
    0.0F,                              /* '<S875>/Const36' */
    0.0F,                              /* '<S875>/Const37' */
    0.0F,                              /* '<S875>/Const38' */
    0.0F,                              /* '<S875>/Const44' */
    0.0F,                              /* '<S875>/Const47' */
    0.0F,                              /* '<S875>/Const48' */
    0.0F,                              /* '<S875>/Const49' */
    0.0F,                              /* '<S875>/Const50' */
    0.0F,                              /* '<S875>/Const51' */
    0.0F,                              /* '<S875>/Const71' */
    0.0F,                              /* '<S875>/Const72' */
    0.0F,                              /* '<S875>/Const73' */
    0U,                                /* '<S875>/Const77' */
    0U,                                /* '<S380>/DTCBlk87' */
    0U,                                /* '<S741>/DTCBlk84' */

#if Rte_SysCon_Variant_HMIR_5

    1U,                                /* '<S509>/FixPt Bitwise Operator1' */

#endif

#if Rte_SysCon_Variant_HMIR_5

    1U,                                /* '<S525>/FixPt Bitwise Operator1' */

#endif

#if Rte_SysCon_Variant_HMIR_1

    1U,                                /* '<S449>/FixPt Bitwise Operator1' */

#endif

    0,                                 /* '<S875>/Const25' */
    0,                                 /* '<S875>/Const29' */
    0,                                 /* '<S875>/Const1' */
    0,                                 /* '<S875>/Const2' */
    0,                                 /* '<S875>/Const3' */
    0,                                 /* '<S875>/Const6' */
    0,                                 /* '<S875>/Const7' */
    0,                                 /* '<S875>/Const8' */
    0,                                 /* '<S875>/Const9' */
    0,                                 /* '<S875>/Const10' */
    0,                                 /* '<S875>/Const11' */
    0,                                 /* '<S875>/Const14' */
    0,                                 /* '<S875>/Const16' */
    0,                                 /* '<S875>/Const17' */
    0,                                 /* '<S875>/Const19' */
    0,                                 /* '<S875>/Const22' */
    0,                                 /* '<S875>/Const23' */
    0,                                 /* '<S875>/Const24' */
    0,                                 /* '<S875>/Const26' */
    0,                                 /* '<S875>/Const28' */
    0,                                 /* '<S875>/Const31' */
    0,                                 /* '<S875>/Const32' */
    0,                                 /* '<S875>/Const34' */
    0,                                 /* '<S875>/Const35' */
    0,                                 /* '<S875>/Const39' */
    0,                                 /* '<S875>/Const40' */
    0,                                 /* '<S875>/Const41' */
    0,                                 /* '<S875>/Const42' */
    0,                                 /* '<S875>/Const43' */
    0,                                 /* '<S875>/Const45' */
    0,                                 /* '<S875>/Const46' */
    0,                                 /* '<S875>/Const54' */
    0,                                 /* '<S875>/Const55' */
    0,                                 /* '<S875>/Const56' */
    0,                                 /* '<S875>/Const57' */
    0,                                 /* '<S875>/Const58' */
    0,                                 /* '<S875>/Const59' */
    0,                                 /* '<S875>/Const60' */
    0,                                 /* '<S875>/Const63' */
    0,                                 /* '<S875>/Const65' */
    0,                                 /* '<S875>/Const66' */
    0,                                 /* '<S875>/Const67' */
    0,                                 /* '<S875>/Const68' */
    0,                                 /* '<S875>/Const69' */
    0,                                 /* '<S875>/Const70' */
    0,                                 /* '<S875>/Const74' */
    0,                                 /* '<S875>/Const75' */
    0,                                 /* '<S875>/Const76' */
    0,                                 /* '<S875>/Const78' */

#if Rte_SysCon_Variant_HMIR_5

    0,                                 /* '<S873>/FALSE Constant' */

#endif

    0,                                 /* '<S874>/FALSE Constant15' */
    0,                                 /* '<S874>/FALSE Constant1' */
    0,                                 /* '<S874>/FALSE Constant2' */
    0,                                 /* '<S874>/FALSE Constant3' */
    0,                                 /* '<S187>/FALSE Constant1' */
    CeHMIR_e_ShifterPosNotCoded_CUSW,  /* '<S875>/Const27' */
    CeHMIR_e_ShifterPosBlank,          /* '<S882>/Constant' */
    CeHMIR_e_Not_Available,            /* '<S875>/Const53' */
    CeHMIR_e_Not_Availabl,             /* '<S875>/Const52' */
    CeHMIR_e_Warn2_None,               /* '<S875>/Const4' */
    CeHMIR_e_Warn2_None,               /* '<S875>/Const5' */
    CeHMIR_e_Warn2_None,               /* '<S886>/Constant' */
    CeHMIR_e_AutoStat,                 /* '<S889>/Constant' */
    CeHMIR_e_Auto,                     /* '<S888>/Constant' */
    CeHMIR_e_No_Request,               /* '<S887>/Constant' */
    CeHMIR_e_Not_Active,               /* '<S875>/Const64' */
    CeHMIR_e_Not_Active,               /* '<S884>/Constant' */
    CeHMIR_e_None,                     /* '<S875>/Const33' */
    CeEBMR_e_None,                     /* '<S875>/Const62' */
    CeEBMR_e_eBoostOFF,                /* '<S875>/Const61' */
    CeDMIR_e_NoDrvMdSt                 /* '<S875>/Const30' */
};

#define STOP_SEC_CONST_UNSPECIFIED_HMIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HMIR
#include "MemMap.h"

VAR(B_HMIR_ac_T, HMIR_VAR_INIT) HMIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HMIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HMIR
#include "MemMap.h"

VAR(DW_HMIR_ac_T, HMIR_VAR_INIT) HMIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HMIR
#include "MemMap.h"

static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_Multi_Indicators_Init(void);
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_Multi_Indicators_Reset(void);
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_Multi_Indicators(void);
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_ShifterPos_Disp(void);
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_HMIC_100ms_Reserve_Init(void);
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_HMIC_100ms_Reserve_Reset(void);
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_HMIC_100ms_Reserve(void);

/* System initialize for atomic system: '<S184>/Multi_Indicators' */
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_Multi_Indicators_Init(void)
{
    /* InitializeConditions for UnitDelay: '<S304>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_l = 0.0F;

    /* InitializeConditions for UnitDelay: '<S310>/Unit Delay' */
#if Rte_SysCon_Variant_HMIR_2

    /* SystemInitialize for Atomic SubSystem: '<S310>/Signal Latch On With Reset1' */
    /* SystemInitialize for Atomic SubSystem: '<S310>/Signal Latch On With Reset' */
    HMIR_ac_DW.UnitDelay_DSTATE_di = CePMDR_e_PowerMode_Off;

    /* InitializeConditions for UnitDelay: '<S338>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_pv = false;

    /* InitializeConditions for UnitDelay: '<S339>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m3 = false;

    /* End of SystemInitialize for SubSystem: '<S310>/Signal Latch On With Reset' */
    /* End of SystemInitialize for SubSystem: '<S310>/Signal Latch On With Reset1' */
#endif

    /* End of InitializeConditions for UnitDelay: '<S310>/Unit Delay' */

    /* SystemInitialize for Atomic SubSystem: '<S310>/Timer Retrigger Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S340>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_kt = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S310>/Timer Retrigger Reset Enabled' */

    /* SystemInitialize for Atomic SubSystem: '<S310>/Turn Off Delay Sample' */
    /* InitializeConditions for UnitDelay: '<S341>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_bgf = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S341>/EdgeFalling1' */
    /* InitializeConditions for UnitDelay: '<S346>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_i5 = false;

    /* End of SystemInitialize for SubSystem: '<S341>/EdgeFalling1' */
    /* End of SystemInitialize for SubSystem: '<S310>/Turn Off Delay Sample' */

    /* SystemInitialize for Atomic SubSystem: '<S310>/Turn On Delay Sample' */
    /* InitializeConditions for Sum: '<S342>/Summation' incorporates:
     *  UnitDelay: '<S342>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_aw = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S342>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S347>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_lo = false;

    /* End of SystemInitialize for SubSystem: '<S342>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S310>/Turn On Delay Sample' */
#if Rte_SysCon_Variant_HMIR_2

    /* SystemInitialize for Atomic SubSystem: '<S310>/Turn On Delay Sample1' */
    /* InitializeConditions for Sum: '<S343>/Summation' incorporates:
     *  UnitDelay: '<S343>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_jt = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S343>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S348>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_er = false;

    /* End of SystemInitialize for SubSystem: '<S343>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S310>/Turn On Delay Sample1' */
#endif

    /* SystemInitialize for Atomic SubSystem: '<S304>/Stop Watch Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S316>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_b = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S304>/Stop Watch Reset Enabled' */
}

/* System reset for atomic system: '<S184>/Multi_Indicators' */
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_Multi_Indicators_Reset(void)
{
    /* InitializeConditions for UnitDelay: '<S304>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_l = 0.0F;

    /* SystemReset for Atomic SubSystem: '<S310>/Turn On Delay Sample' */
    /* InitializeConditions for Sum: '<S342>/Summation' incorporates:
     *  UnitDelay: '<S342>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_aw = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S342>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S347>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_lo = false;

    /* End of SystemReset for SubSystem: '<S342>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S310>/Turn On Delay Sample' */

    /* SystemReset for Atomic SubSystem: '<S310>/Turn Off Delay Sample' */
    /* InitializeConditions for UnitDelay: '<S341>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_bgf = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S341>/EdgeFalling1' */
    /* InitializeConditions for UnitDelay: '<S346>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_i5 = false;

    /* End of SystemReset for SubSystem: '<S341>/EdgeFalling1' */
    /* End of SystemReset for SubSystem: '<S310>/Turn Off Delay Sample' */

    /* SystemReset for Atomic SubSystem: '<S310>/Timer Retrigger Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S340>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_kt = 0.0F;

    /* End of SystemReset for SubSystem: '<S310>/Timer Retrigger Reset Enabled' */

    /* InitializeConditions for UnitDelay: '<S310>/Unit Delay' */
#if Rte_SysCon_Variant_HMIR_2

    /* SystemReset for Atomic SubSystem: '<S310>/Signal Latch On With Reset1' */
    /* SystemReset for Atomic SubSystem: '<S310>/Signal Latch On With Reset' */
    /* SystemReset for Atomic SubSystem: '<S310>/Turn On Delay Sample1' */
    HMIR_ac_DW.UnitDelay_DSTATE_di = CePMDR_e_PowerMode_Off;

    /* InitializeConditions for Sum: '<S343>/Summation' incorporates:
     *  UnitDelay: '<S343>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_jt = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S343>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S348>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_er = false;

    /* End of SystemReset for SubSystem: '<S343>/EdgeRising' */

    /* InitializeConditions for UnitDelay: '<S338>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_pv = false;

    /* InitializeConditions for UnitDelay: '<S339>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m3 = false;

    /* End of SystemReset for SubSystem: '<S310>/Turn On Delay Sample1' */
    /* End of SystemReset for SubSystem: '<S310>/Signal Latch On With Reset' */
    /* End of SystemReset for SubSystem: '<S310>/Signal Latch On With Reset1' */
#endif

    /* End of InitializeConditions for UnitDelay: '<S310>/Unit Delay' */

    /* SystemReset for Atomic SubSystem: '<S304>/Stop Watch Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S316>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_b = 0.0F;

    /* End of SystemReset for SubSystem: '<S304>/Stop Watch Reset Enabled' */
}

/* Output and update for atomic system: '<S184>/Multi_Indicators' */
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_Multi_Indicators(void)
{
    sint32 tmp;
    TeBRDR_e_BatCltLvlLo tmp_1;
    TeHMIR_e_PwrtrnHV_IsolStat tmp_0;
    TeHVTR_e_HV_IsolStat rtb_OR5_tmp;
    TeINVR_e_MtrInvrtrSt tmpRead;
    TeINVR_e_MtrInvrtrSt tmpRead_0;
    TePMDR_e_PowerMode rtb_AND_tmp;
    boolean rtb_AND;
    boolean rtb_AND_av;
    boolean rtb_AND_fq;
    boolean rtb_AND_hn;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;

    /* RelationalOperator: '<S304>/Less Than  or Equal2' incorporates:
     *  RelationalOperator: '<S304>/Less Than  or Equal1'
     *  RelationalOperator: '<S304>/Less Than  or Equal4'
     *  RelationalOperator: '<S310>/Comparison7'
     *  SignalConversion generated from: '<S4>/VePMDR_e_PMM_PowerMode'
     */
    rtb_AND_tmp = HMIR_ac_B.TmpSignalConversionAtVePMDR_e_PMM_PowerM;

    /* Logic: '<S304>/AND' incorporates:
     *  Constant: '<S311>/Constant'
     *  Constant: '<S312>/Constant'
     *  Constant: '<S314>/Calib'
     *  Logic: '<S304>/AND1'
     *  RelationalOperator: '<S304>/Less Than  or Equal'
     *  RelationalOperator: '<S304>/Less Than  or Equal1'
     *  RelationalOperator: '<S304>/Less Than  or Equal2'
     *  UnitDelay: '<S304>/Unit Delay'
     */
    rtb_AND = ((HMIR_ac_DW.UnitDelay_DSTATE_l <= KeHMIR_t_4_sec) &&
               ((rtb_AND_tmp == CePMDR_e_PowerMode_Run) || (rtb_AND_tmp ==
                 CePMDR_e_PowerMode_Crank)));

    /* Outputs for Atomic SubSystem: '<S310>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising' */
    /* Logic: '<S347>/AND' incorporates:
     *  Logic: '<S347>/OR1'
     *  UnitDelay: '<S347>/Unit Delay'
     */
    rtb_AND_av = ((HMIR_ac_B.TmpSignalConversionAtVeENGR_b_CondOkForC) &&
                  (!HMIR_ac_DW.UnitDelay_DSTATE_lo));

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_lo =
        HMIR_ac_B.TmpSignalConversionAtVeENGR_b_CondOkForC;

    /* End of Outputs for SubSystem: '<S342>/EdgeRising' */

    /* Switch: '<S342>/Switch1' incorporates:
     *  Logic: '<S342>/OR'
     *  Logic: '<S342>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeENGR_b_CondOkForC) || rtb_AND_av)
    {
        /* Sum: '<S342>/Summation' incorporates:
         *  Constant: '<S342>/Constant Value1'
         *  Switch: '<S342>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_aw = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S342>/Summation' incorporates:
         *  Constant: '<S342>/Constant Value'
         *  UnitDelay: '<S342>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_aw = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_aw));

        /* MinMax: '<S342>/Minimum' incorporates:
         *  Constant: '<S329>/Calib'
         */
        if (KeHMIR_Cnt_HEVOnReqECM_OnDebounce < HMIR_ac_DW.UnitDelay_DSTATE_aw)
        {
            /* Sum: '<S342>/Summation' incorporates:
             *  Switch: '<S342>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_aw = KeHMIR_Cnt_HEVOnReqECM_OnDebounce;
        }

        /* End of MinMax: '<S342>/Minimum' */
    }

    /* End of Switch: '<S342>/Switch1' */

    /* Logic: '<S342>/AND' incorporates:
     *  Constant: '<S329>/Calib'
     *  RelationalOperator: '<S342>/Greater  Than'
     */
    rtb_AND_av = ((HMIR_ac_B.TmpSignalConversionAtVeENGR_b_CondOkForC) &&
                  (HMIR_ac_DW.UnitDelay_DSTATE_aw >=
                   KeHMIR_Cnt_HEVOnReqECM_OnDebounce));

    /* End of Outputs for SubSystem: '<S310>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S310>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S341>/EdgeFalling1' */
    /* Logic: '<S346>/AND' incorporates:
     *  Logic: '<S346>/OR1'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    rtb_AND_fq = ((!rtb_AND_av) && (HMIR_ac_DW.UnitDelay_DSTATE_i5));

    /* Update for UnitDelay: '<S346>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_i5 = rtb_AND_av;

    /* End of Outputs for SubSystem: '<S341>/EdgeFalling1' */

    /* Switch: '<S341>/Switch' */
    if (rtb_AND_fq)
    {
        /* Switch: '<S341>/Switch' incorporates:
         *  Constant: '<S328>/Calib'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_bgf = KeHMIR_Cnt_HEVOnReqECM_OffDebounce;
    }
    else
    {
        /* Sum: '<S341>/Summation' incorporates:
         *  Constant: '<S341>/Constant Value'
         *  UnitDelay: '<S341>/Unit Delay'
         */
        tmp = ((sint32)HMIR_ac_DW.UnitDelay_DSTATE_bgf) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S341>/Minimum' incorporates:
         *  Constant: '<S341>/Constant Value1'
         *  Sum: '<S341>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            /* Switch: '<S341>/Switch' */
            HMIR_ac_DW.UnitDelay_DSTATE_bgf = (uint16)tmp;
        }
        else
        {
            /* Switch: '<S341>/Switch' */
            HMIR_ac_DW.UnitDelay_DSTATE_bgf = ((uint16)0U);
        }

        /* End of MinMax: '<S341>/Minimum' */
    }

    /* End of Switch: '<S341>/Switch' */

    /* Logic: '<S310>/OR' incorporates:
     *  Constant: '<S331>/Calib'
     *  Constant: '<S333>/Calib'
     *  Constant: '<S341>/Constant Value2'
     *  Logic: '<S310>/OR2'
     *  Logic: '<S310>/OR4'
     *  Logic: '<S341>/AND'
     *  RelationalOperator: '<S341>/Greater  Than'
     */
    VeHMIR_b_ResetTimer = (((HMIR_ac_B.TmpSignalConversionAtVeDFIR_b_NonEmisMal)
                            ||
                            ((HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_HEVOnRqB_o)
        && (KeHMIR_b_BPCMHEVRqEnbl))) || ((rtb_AND_av ||
        (HMIR_ac_DW.UnitDelay_DSTATE_bgf > ((uint16)0U))) &&
                            (KeHMIR_b_ECMHEVRqEnbl)));

    /* End of Outputs for SubSystem: '<S310>/Turn Off Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S310>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S310>/TRUE Constant'
     *  Switch: '<S340>/Switch2'
     */
    if (VeHMIR_b_ResetTimer)
    {
        /* Switch: '<S340>/Switch1' incorporates:
         *  Constant: '<S337>/Calib'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_kt = KeHMIR_t_HevLmpMinTime;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S340>/Switch2' incorporates:
             *  Constant: '<S336>/Calib'
             *  Constant: '<S340>/Constant Value4'
             *  MinMax: '<S340>/Maximum'
             *  Sum: '<S340>/Subtraction'
             *  Switch: '<S340>/Switch1'
             *  UnitDelay: '<S340>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_kt = fmaxf
                (HMIR_ac_DW.UnitDelay_DSTATE_kt - KeHMIR_t_50_dT, 0.0F);
        }
    }

    /* End of Switch: '<S340>/Switch1' */
    /* End of Outputs for SubSystem: '<S310>/Timer Retrigger Reset Enabled' */

    /* Inport: '<S189>/OBC_SvsLmp' incorporates:
     *  Inport: '<Root>/VeIDCR_b_EVSer_On_OBCM'
     */
    (void)Rte_Read_VeIDCR_b_EVSer_On_OBCM_Value(&HMIR_ac_B.OBC_SvsLmp);

    /* Outputs for Atomic SubSystem: '<S310>/Timer Retrigger Reset Enabled' */
    /* RelationalOperator: '<S340>/Greater  Than1' incorporates:
     *  Constant: '<S340>/Constant Value2'
     */
    VeHMIR_b_TimerOut = (HMIR_ac_DW.UnitDelay_DSTATE_kt > 0.0F);

    /* End of Outputs for SubSystem: '<S310>/Timer Retrigger Reset Enabled' */

    /* RelationalOperator: '<S310>/Comparison4' incorporates:
     *  RelationalOperator: '<S189>/Comparison4'
     *  SignalConversion generated from: '<S4>/VeBPCR_e_HV_BatIsolStat'
     */
    rtb_OR5_tmp = HMIR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatIsol;

    /* Logic: '<S310>/OR5' incorporates:
     *  Constant: '<S317>/Constant'
     *  Constant: '<S332>/Calib'
     *  RelationalOperator: '<S310>/Comparison4'
     */
    rtb_AND_av = ((rtb_OR5_tmp == CeHVTR_e_IsolFailed) &&
                  (KeHMIR_b_BatIsolStatFailedEnabl));

    /* RelationalOperator: '<S310>/Comparison7' incorporates:
     *  Logic: '<S310>/Logical4'
     *  Logic: '<S310>/OR8'
     *  RelationalOperator: '<S310>/Comparison3'
     *  RelationalOperator: '<S310>/Comparison8'
     *  SignalConversion generated from: '<S310>/Variant Source1'
     *  UnitDelay: '<S310>/Unit Delay'
     * */
#if Rte_SysCon_Variant_HMIR_2

    /* Outputs for Atomic SubSystem: '<S310>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S310>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S310>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S343>/EdgeRising' */
    /* Logic: '<S348>/AND' incorporates:
     *  Logic: '<S348>/OR1'
     *  UnitDelay: '<S348>/Unit Delay'
     */
    rtb_AND_hn = (rtb_AND_av && (!HMIR_ac_DW.UnitDelay_DSTATE_er));

    /* Update for UnitDelay: '<S348>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_er = rtb_AND_av;

    /* End of Outputs for SubSystem: '<S343>/EdgeRising' */

    /* Switch: '<S343>/Switch1' incorporates:
     *  Logic: '<S343>/OR'
     *  Logic: '<S343>/OR1'
     */
    if ((!rtb_AND_av) || rtb_AND_hn)
    {
        /* Sum: '<S343>/Summation' incorporates:
         *  Constant: '<S343>/Constant Value1'
         *  Switch: '<S343>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_jt = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S343>/Summation' incorporates:
         *  Constant: '<S343>/Constant Value'
         *  UnitDelay: '<S343>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_jt = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_jt));

        /* MinMax: '<S343>/Minimum' incorporates:
         *  Constant: '<S330>/Calib'
         */
        if (KeHMIR_Cnt_HV_IsolFailed_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_jt)
        {
            /* Sum: '<S343>/Summation' incorporates:
             *  Switch: '<S343>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_jt = KeHMIR_Cnt_HV_IsolFailed_Dbnc;
        }

        /* End of MinMax: '<S343>/Minimum' */
    }

    /* End of Switch: '<S343>/Switch1' */

    /* Logic: '<S310>/Logical4' incorporates:
     *  Constant: '<S325>/Constant'
     */
    VeHMIC_b_KeyCycle = ((rtb_AND_tmp != CePMDR_e_PowerMode_Off) &&
                         (HMIR_ac_DW.UnitDelay_DSTATE_di ==
                          CePMDR_e_PowerMode_Off));

    /* Logic: '<S338>/NOT' incorporates:
     *  Logic: '<S339>/NOT'
     */
    rtb_AND_hn = !VeHMIC_b_KeyCycle;

    /* Logic: '<S338>/OR1' incorporates:
     *  Constant: '<S330>/Calib'
     *  Logic: '<S338>/NOT'
     *  Logic: '<S338>/OR'
     *  Logic: '<S343>/AND'
     *  RelationalOperator: '<S343>/Greater  Than'
     *  UnitDelay: '<S338>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_pv = ((rtb_AND_av &&
        (HMIR_ac_DW.UnitDelay_DSTATE_jt >= KeHMIR_Cnt_HV_IsolFailed_Dbnc)) ||
        (rtb_AND_hn && (HMIR_ac_DW.UnitDelay_DSTATE_pv)));

    /* Logic: '<S339>/OR1' incorporates:
     *  Constant: '<S327>/Constant'
     *  Logic: '<S339>/OR'
     *  SignalConversion generated from: '<S4>/VeHVTR_e_HV_IntrlkStat'
     *  UnitDelay: '<S339>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_m3 =
        ((HMIR_ac_B.TmpSignalConversionAtVeHVTR_e_HV_IntrlkS ==
          CeHVTR_e_IntrlkFailed) || (rtb_AND_hn &&
          (HMIR_ac_DW.UnitDelay_DSTATE_m3)));

    /* Logic: '<S310>/OR8' */
    VeHMIC_b_CondTrue_SvsLmpM182 =
        ((((((HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_MCPA_Servi) ||
             (HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_MCPB_Servi)) ||
            (HMIR_ac_B.OBC_SvsLmp)) || (HMIR_ac_DW.UnitDelay_DSTATE_pv)) ||
          (HMIR_ac_DW.UnitDelay_DSTATE_m3)) || (VeHMIC_b_DTC_Service_Lamp_M182));

    /* VariantMerge generated from: '<S310>/Variant Source1' */
    rtb_AND_hn = VeHMIC_b_CondTrue_SvsLmpM182;

    /* End of Outputs for SubSystem: '<S310>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S310>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S310>/Signal Latch On With Reset1' */
#else

    /* VariantMerge generated from: '<S310>/Variant Source1' incorporates:
     *  Constant: '<S310>/Constant'
     *  SignalConversion generated from: '<S310>/Variant Source1'
     */
    rtb_AND_hn = false;

#endif

    /* Inport: '<Root>/VeVSDR_b_WEDLeftWheelFA' */
    (void)Rte_Read_VeVSDR_b_WEDLeftWheelFA_Value(&tmpRead_4);

    /* Inport: '<Root>/VeVSDR_b_WEDRightWheelFA' */
    (void)Rte_Read_VeVSDR_b_WEDRightWheelFA_Value(&tmpRead_3);

    /* Inport: '<Root>/VeADIR_b_BSM_WEDModeReqFA' */
    (void)Rte_Read_VeADIR_b_BSM_WEDModeReqFA_Value(&tmpRead_2);

    /* Inport: '<Root>/VeADIR_b_WEDSystemFailure' */
    (void)Rte_Read_VeADIR_b_WEDSystemFailure_Value(&tmpRead_1);

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_0);

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead);

    /* RelationalOperator: '<S310>/Comparison1' incorporates:
     *  RelationalOperator: '<S189>/Comparison1'
     *  SignalConversion generated from: '<S4>/VeBPCR_e_PwrtrnHV_IsolStat'
     */
    tmp_0 = HMIR_ac_B.TmpSignalConversionAtVeBPCR_e_PwrtrnHV_I;

    /* RelationalOperator: '<S310>/Comparison2' incorporates:
     *  RelationalOperator: '<S189>/Comparison2'
     *  SignalConversion generated from: '<S4>/VeTHMR_e_HV_Bat_CltLvlLo'
     */
    tmp_1 = HMIR_ac_B.TmpSignalConversionAtVeTHMR_e_HV_Bat_Clt;

    /* Switch: '<S310>/Switch5' incorporates:
     *  Constant: '<S319>/Constant'
     *  Constant: '<S320>/Constant'
     *  Constant: '<S323>/Constant'
     *  Constant: '<S334>/Calib'
     *  Constant: '<S335>/Calib'
     *  Constant: '<S344>/Constant1'
     *  Constant: '<S344>/Constant2'
     *  Constant: '<S345>/Constant1'
     *  Constant: '<S345>/Constant2'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     *  Logic: '<S310>/OR1'
     *  Logic: '<S310>/OR3'
     *  Logic: '<S310>/OR6'
     *  Logic: '<S310>/OR7'
     *  Logic: '<S344>/Logical Operator'
     *  Logic: '<S345>/Logical Operator'
     *  RelationalOperator: '<S310>/Comparison1'
     *  RelationalOperator: '<S310>/Comparison2'
     *  RelationalOperator: '<S310>/Comparison5'
     *  RelationalOperator: '<S310>/Comparison9'
     *  RelationalOperator: '<S344>/Relational Operator1'
     *  RelationalOperator: '<S344>/Relational Operator2'
     *  RelationalOperator: '<S345>/Relational Operator1'
     *  RelationalOperator: '<S345>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S344>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S344>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S345>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S345>/Bitwise Operator2'
     *  Switch: '<S310>/Switch3'
     */
    if (((((((((((((((((HMIR_ac_B.TmpSignalConversionAtVeDMAB_y_StatusByte &
                        ((uint8)1U)) != ((uint8)0U)) &&
                      ((HMIR_ac_B.TmpSignalConversionAtVeDMAB_y_StatusByte &
                        ((uint8)64U)) == ((uint8)0U))) ||
                     (((HMIR_ac_B.TmpSignalConversionAtVeDMAB_y_StatusBy_d &
                        ((uint8)1U)) != ((uint8)0U)) &&
                      ((HMIR_ac_B.TmpSignalConversionAtVeDMAB_y_StatusBy_d &
                        ((uint8)64U)) == ((uint8)0U)))) ||
                    (HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_P1_MIL_Req)) ||
                   rtb_AND) || (VeHMIR_b_TimerOut)) || (rtb_AND_av || ((tmp_0 ==
                    CeHMIR_e_IsolFailed) && (KeHMIR_b_PwrtrnIsolStatFailedEnabl))))
                || (tmp_1 == CeBRDR_e_BatCltLvlLo)) || rtb_AND_hn) || (tmpRead ==
               CeINVR_e_InverterFaulted)) || (tmpRead_0 ==
              CeINVR_e_InverterFaulted)) || tmpRead_1) || tmpRead_2) ||
            tmpRead_3) || tmpRead_4) ||
            (HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_MCPC_Servi))
    {
        /* Switch: '<S310>/Switch5' incorporates:
         *  Constant: '<S318>/Constant'
         */
        VeHMIC_e_HEV_LMP_RQ = CeHMIR_e_HEV_LMP_ON;
    }
    else if ((HMIR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod) &&
             (KeHMIR_b_InplantmodeActv))
    {
        /* Switch: '<S310>/Switch3' incorporates:
         *  Constant: '<S322>/Constant'
         *  Switch: '<S310>/Switch5'
         */
        VeHMIC_e_HEV_LMP_RQ = CeHMIR_e_HEV_LMP_BLINK;
    }
    else
    {
        /* Switch: '<S310>/Switch5' incorporates:
         *  Constant: '<S321>/Constant'
         *  Switch: '<S310>/Switch3'
         */
        VeHMIC_e_HEV_LMP_RQ = CeHMIR_e_HEV_LMP_OFF;
    }

    /* End of Switch: '<S310>/Switch5' */

    /* DataStoreWrite: '<S310>/Data Store Write' incorporates:
     *  Switch: '<S310>/Switch5'
     */
#if Rte_SysCon_Variant_HMIR_2

    EeHMIR_e_HEV_LMP_RQ = VeHMIC_e_HEV_LMP_RQ;

#endif

    /* End of DataStoreWrite: '<S310>/Data Store Write' */

    /* Outputs for Atomic SubSystem: '<S304>/Stop Watch Reset Enabled' */
    /* Switch: '<S316>/Switch' incorporates:
     *  Constant: '<S313>/Constant'
     *  RelationalOperator: '<S304>/Less Than  or Equal4'
     *  Switch: '<S316>/Switch2'
     */
    if (rtb_AND_tmp == CePMDR_e_PowerMode_Off)
    {
        /* Switch: '<S316>/Switch' incorporates:
         *  Constant: '<S316>/Constant Value2'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_b = 0.0F;
    }
    else
    {
        if (rtb_AND)
        {
            /* Switch: '<S316>/Switch2' incorporates:
             *  Constant: '<S315>/Calib'
             *  Sum: '<S316>/Subtraction'
             *  Switch: '<S316>/Switch'
             *  UnitDelay: '<S316>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_b += KeHMIR_t_50_dT;
        }
    }

    /* End of Switch: '<S316>/Switch' */
    /* End of Outputs for SubSystem: '<S304>/Stop Watch Reset Enabled' */

    /* Logic: '<S189>/Logical1' incorporates:
     *  Constant: '<S309>/Constant'
     *  RelationalOperator: '<S189>/Comparison1'
     *  RelationalOperator: '<S189>/Comparison3'
     *  RelationalOperator: '<S189>/Comparison4'
     *  SignalConversion generated from: '<S4>/VeHVTR_e_HV_IntrlkStat'
     */
    HMIR_ac_B.Logical1 =
        ((((((HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_HEVOnRqB_o) ||
             (rtb_OR5_tmp == CeHVTR_e_IsolFailed)) || (tmp_0 ==
             CeHMIR_e_IsolFailed)) ||
           (HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_MCPA_Servi)) ||
          (HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_MCPB_Servi)) ||
         (HMIR_ac_B.TmpSignalConversionAtVeHVTR_e_HV_IntrlkS ==
          CeHVTR_e_IntrlkFailed));

    /* Logic: '<S189>/Logical2' incorporates:
     *  RelationalOperator: '<S189>/Comparison2'
     */
    HMIR_ac_B.Logical2 =
        (((((((HMIR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod) || rtb_AND) ||
             (HMIR_ac_B.TmpSignalConversionAtVeDFIR_b_NonEmisMal)) || (tmp_1 ==
             CeBRDR_e_BatCltLvlLo)) ||
           (HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_MCPC_Servi)) ||
          (VeHMIC_b_DTC_Service_Lamp_M182)) ||
         (HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_P1_MIL_Req));

    /* Update for UnitDelay: '<S304>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_l = HMIR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S310>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S4>/VePMDR_e_PMM_PowerMode'
     */
#if Rte_SysCon_Variant_HMIR_2

    HMIR_ac_DW.UnitDelay_DSTATE_di =
        HMIR_ac_B.TmpSignalConversionAtVePMDR_e_PMM_PowerM;

#endif

    /* End of Update for UnitDelay: '<S310>/Unit Delay' */
}

/* Output and update for atomic system: '<S184>/ShifterPos_Disp' */
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_ShifterPos_Disp(void)
{
    TeTRGR_e_TransRangeState tmpRead;

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead);

    /* RelationalOperator: '<S190>/Comparison1' incorporates:
     *  Constant: '<S353>/Calib'
     */
    VeHMIC_b_ShifterInPark = (tmpRead == KeHMIR_e_ShifterInPark);

    /* Selector: '<S190>/Selector' incorporates:
     *  Constant: '<S351>/Calib'
     *  DataTypeConversion: '<S350>/DataTypeConversion'
     */
    HMIR_ac_B.VeHMIC_e_ShifterPOS = KaHMIR_e_VldtdTransRngSt_ShifterPOS[(tmpRead)];

    /* Selector: '<S190>/Selector1' incorporates:
     *  Constant: '<S352>/Calib'
     */
    VeHMIC_e_ShifterPOS_K8 = KaHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW[(tmpRead)];
}

/* System initialize for atomic system: '<S365>/HMIC_100ms_Reserve' */
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_HMIC_100ms_Reserve_Init(void)
{
    /* InitializeConditions for UnitDelay: '<S372>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE = 0.0F;

    /* InitializeConditions for UnitDelay: '<S559>/Unit Delay1' */
    HMIR_ac_DW.UnitDelay1_DSTATE = 0.0F;

    /* InitializeConditions for UnitDelay: '<S559>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m = 0.0F;

    /* InitializeConditions for UnitDelay: '<S377>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_h = 0.0F;

    /* InitializeConditions for UnitDelay: '<S741>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mr = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S745>/Unit Delay1' */
    HMIR_ac_DW.UnitDelay1_DSTATE_b = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S754>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_j2 = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S755>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ch = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S746>/Unit Delay1' */
    HMIR_ac_DW.UnitDelay1_DSTATE_g = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S757>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_cc = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S758>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_e = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S370>/Variant Subsystem' */
#if Rte_SysCon_Variant_HMIR_1

    /* SystemInitialize for Atomic SubSystem: '<S415>/Subsystem' */
    /* SystemInitialize for Atomic SubSystem: '<S416>/Hysteresis' */
    /* InitializeConditions for UnitDelay: '<S436>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_bc = false;

    /* End of SystemInitialize for SubSystem: '<S416>/Hysteresis' */

    /* SystemInitialize for Atomic SubSystem: '<S416>/Turn On Delay Sample' */
    /* InitializeConditions for Sum: '<S444>/Summation' incorporates:
     *  UnitDelay: '<S444>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_dw = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S444>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S465>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ml = false;

    /* End of SystemInitialize for SubSystem: '<S444>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S416>/Turn On Delay Sample' */

    /* SystemInitialize for Atomic SubSystem: '<S416>/Turn On Delay Sample1' */
    /* InitializeConditions for Sum: '<S445>/Summation' incorporates:
     *  UnitDelay: '<S445>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ne = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S445>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S466>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_nq = false;

    /* End of SystemInitialize for SubSystem: '<S445>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S416>/Turn On Delay Sample1' */

    /* SystemInitialize for Atomic SubSystem: '<S416>/Turn On Delay Sample2' */
    /* InitializeConditions for Sum: '<S446>/Summation' incorporates:
     *  UnitDelay: '<S446>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_a3 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S446>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S467>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_a2a = false;

    /* End of SystemInitialize for SubSystem: '<S446>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S416>/Turn On Delay Sample2' */

    /* SystemInitialize for Atomic SubSystem: '<S416>/Turn On Delay Sample3' */
    /* InitializeConditions for Sum: '<S447>/Summation' incorporates:
     *  UnitDelay: '<S447>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_bd = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S447>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S468>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_e2 = false;

    /* End of SystemInitialize for SubSystem: '<S447>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S416>/Turn On Delay Sample3' */

    /* SystemInitialize for Atomic SubSystem: '<S416>/Turn On Delay Sample4' */
    /* InitializeConditions for Sum: '<S448>/Summation' incorporates:
     *  UnitDelay: '<S448>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gx = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S448>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S469>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_js = false;

    /* End of SystemInitialize for SubSystem: '<S448>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S416>/Turn On Delay Sample4' */
    /* End of SystemInitialize for SubSystem: '<S415>/Subsystem' */
#elif Rte_SysCon_Variant_HMIR_5

    /* SystemInitialize for Atomic SubSystem: '<S415>/Subsystem1' */
    /* SystemInitialize for Atomic SubSystem: '<S417>/Turn On Delay Sample1' */
    /* InitializeConditions for Sum: '<S506>/Summation' incorporates:
     *  UnitDelay: '<S506>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_o3 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S506>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S541>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_iq = false;

    /* End of SystemInitialize for SubSystem: '<S506>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S417>/Turn On Delay Sample1' */

    /* SystemInitialize for Atomic SubSystem: '<S417>/Turn On Delay Sample2' */
    /* InitializeConditions for Sum: '<S507>/Summation' incorporates:
     *  UnitDelay: '<S507>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_g10 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S507>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S542>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_bgr = false;

    /* End of SystemInitialize for SubSystem: '<S507>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S417>/Turn On Delay Sample2' */

    /* SystemInitialize for Atomic SubSystem: '<S417>/Turn On Delay Sample3' */
    /* InitializeConditions for Sum: '<S508>/Summation' incorporates:
     *  UnitDelay: '<S508>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_op = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S508>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S543>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_d5 = false;

    /* End of SystemInitialize for SubSystem: '<S508>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S417>/Turn On Delay Sample3' */
    /* End of SystemInitialize for SubSystem: '<S415>/Subsystem1' */
#endif

    /* End of SystemInitialize for SubSystem: '<S370>/Variant Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample' */
    /* InitializeConditions for Sum: '<S665>/Summation' incorporates:
     *  UnitDelay: '<S665>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ecg = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S665>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S703>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_lf = false;

    /* End of SystemInitialize for SubSystem: '<S665>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample11' */
    /* InitializeConditions for Sum: '<S668>/Summation' incorporates:
     *  UnitDelay: '<S668>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_hp = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S668>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S706>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_fv = false;

    /* End of SystemInitialize for SubSystem: '<S668>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample11' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample12' */
    /* InitializeConditions for Sum: '<S669>/Summation' incorporates:
     *  UnitDelay: '<S669>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_iv = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S669>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S707>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ad = false;

    /* End of SystemInitialize for SubSystem: '<S669>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample12' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample13' */
    /* InitializeConditions for Sum: '<S670>/Summation' incorporates:
     *  UnitDelay: '<S670>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gi0 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S670>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S708>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jiq = false;

    /* End of SystemInitialize for SubSystem: '<S670>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample13' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample14' */
    /* InitializeConditions for Sum: '<S671>/Summation' incorporates:
     *  UnitDelay: '<S671>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_lx = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S671>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S709>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_d2 = false;

    /* End of SystemInitialize for SubSystem: '<S671>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample14' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample15' */
    /* InitializeConditions for Sum: '<S672>/Summation' incorporates:
     *  UnitDelay: '<S672>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gi = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S672>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S710>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_i2 = false;

    /* End of SystemInitialize for SubSystem: '<S672>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample15' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample16' */
    /* InitializeConditions for Sum: '<S673>/Summation' incorporates:
     *  UnitDelay: '<S673>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_chf = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S673>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S711>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_i3 = false;

    /* End of SystemInitialize for SubSystem: '<S673>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample16' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample17' */
    /* InitializeConditions for Sum: '<S674>/Summation' incorporates:
     *  UnitDelay: '<S674>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_co = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S674>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S712>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_a2w = false;

    /* End of SystemInitialize for SubSystem: '<S674>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample17' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample18' */
    /* InitializeConditions for Sum: '<S675>/Summation' incorporates:
     *  UnitDelay: '<S675>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ed = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S675>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S713>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gb = false;

    /* End of SystemInitialize for SubSystem: '<S675>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample18' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample21' */
    /* InitializeConditions for Sum: '<S679>/Summation' incorporates:
     *  UnitDelay: '<S679>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_cf = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S679>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S717>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gtr = false;

    /* End of SystemInitialize for SubSystem: '<S679>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample21' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample29' */
    /* InitializeConditions for Sum: '<S687>/Summation' incorporates:
     *  UnitDelay: '<S687>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_hq = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S687>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S725>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_p1 = false;

    /* End of SystemInitialize for SubSystem: '<S687>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample29' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample3' */
    /* InitializeConditions for Sum: '<S688>/Summation' incorporates:
     *  UnitDelay: '<S688>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_o5 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S688>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S726>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_at = false;

    /* End of SystemInitialize for SubSystem: '<S688>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample3' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample36' */
    /* InitializeConditions for Sum: '<S695>/Summation' incorporates:
     *  UnitDelay: '<S695>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_o = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S695>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S733>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_fp = false;

    /* End of SystemInitialize for SubSystem: '<S695>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample36' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample37' */
    /* InitializeConditions for Sum: '<S696>/Summation' incorporates:
     *  UnitDelay: '<S696>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_eo = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S696>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S734>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_cp = false;

    /* End of SystemInitialize for SubSystem: '<S696>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample37' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample4' */
    /* InitializeConditions for Sum: '<S697>/Summation' incorporates:
     *  UnitDelay: '<S697>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ep = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S697>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S735>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jc = false;

    /* End of SystemInitialize for SubSystem: '<S697>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample4' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample5' */
    /* InitializeConditions for Sum: '<S698>/Summation' incorporates:
     *  UnitDelay: '<S698>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_i = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S698>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S736>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_pa = false;

    /* End of SystemInitialize for SubSystem: '<S698>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample5' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample6' */
    /* InitializeConditions for Sum: '<S699>/Summation' incorporates:
     *  UnitDelay: '<S699>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_d0 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S699>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S737>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_py = false;

    /* End of SystemInitialize for SubSystem: '<S699>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample6' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample1' */
    /* InitializeConditions for Sum: '<S666>/Summation' incorporates:
     *  UnitDelay: '<S666>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_l3 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S666>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S704>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_md = false;

    /* End of SystemInitialize for SubSystem: '<S666>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample1' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample2' */
    /* InitializeConditions for Sum: '<S677>/Summation' incorporates:
     *  UnitDelay: '<S677>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_nj = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S677>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S715>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jp = false;

    /* End of SystemInitialize for SubSystem: '<S677>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample2' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample24' */
    /* InitializeConditions for Sum: '<S682>/Summation' incorporates:
     *  UnitDelay: '<S682>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_nd = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S682>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S720>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_fw = false;

    /* End of SystemInitialize for SubSystem: '<S682>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample24' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample31' */
    /* InitializeConditions for Sum: '<S690>/Summation' incorporates:
     *  UnitDelay: '<S690>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_lz = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S690>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S728>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_cl = false;

    /* End of SystemInitialize for SubSystem: '<S690>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample31' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample7' */
    /* InitializeConditions for Sum: '<S700>/Summation' incorporates:
     *  UnitDelay: '<S700>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gf = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S700>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S738>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_eds = false;

    /* End of SystemInitialize for SubSystem: '<S700>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample7' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample8' */
    /* InitializeConditions for Sum: '<S701>/Summation' incorporates:
     *  UnitDelay: '<S701>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ki = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S701>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S739>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gt = false;

    /* End of SystemInitialize for SubSystem: '<S701>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample8' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample9' */
    /* InitializeConditions for Sum: '<S702>/Summation' incorporates:
     *  UnitDelay: '<S702>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ec = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S702>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S740>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m0 = false;

    /* End of SystemInitialize for SubSystem: '<S702>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample9' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample19' */
    /* InitializeConditions for Sum: '<S676>/Summation' incorporates:
     *  UnitDelay: '<S676>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_k5 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S676>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S714>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_o2 = false;

    /* End of SystemInitialize for SubSystem: '<S676>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample19' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample20' */
    /* InitializeConditions for Sum: '<S678>/Summation' incorporates:
     *  UnitDelay: '<S678>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_kd = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S678>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S716>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mc = false;

    /* End of SystemInitialize for SubSystem: '<S678>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample20' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample10' */
    /* InitializeConditions for Sum: '<S667>/Summation' incorporates:
     *  UnitDelay: '<S667>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_bf = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S667>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S705>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ll = false;

    /* End of SystemInitialize for SubSystem: '<S667>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample10' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample25' */
    /* InitializeConditions for Sum: '<S683>/Summation' incorporates:
     *  UnitDelay: '<S683>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gj = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S683>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S721>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m5 = false;

    /* End of SystemInitialize for SubSystem: '<S683>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample25' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample22' */
    /* InitializeConditions for Sum: '<S680>/Summation' incorporates:
     *  UnitDelay: '<S680>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_bw = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S680>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S718>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_moq = false;

    /* End of SystemInitialize for SubSystem: '<S680>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample22' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample30' */
    /* InitializeConditions for Sum: '<S689>/Summation' incorporates:
     *  UnitDelay: '<S689>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_pf = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S689>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S727>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mz = false;

    /* End of SystemInitialize for SubSystem: '<S689>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample30' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample35' */
    /* InitializeConditions for Sum: '<S694>/Summation' incorporates:
     *  UnitDelay: '<S694>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_k0 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S694>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S732>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gy = false;

    /* End of SystemInitialize for SubSystem: '<S694>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample35' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample23' */
    /* InitializeConditions for Sum: '<S681>/Summation' incorporates:
     *  UnitDelay: '<S681>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_n3 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S681>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S719>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mhl = false;

    /* End of SystemInitialize for SubSystem: '<S681>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample23' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample26' */
    /* InitializeConditions for Sum: '<S684>/Summation' incorporates:
     *  UnitDelay: '<S684>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_mo = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S684>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S722>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mh = false;

    /* End of SystemInitialize for SubSystem: '<S684>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample26' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample27' */
    /* InitializeConditions for Sum: '<S685>/Summation' incorporates:
     *  UnitDelay: '<S685>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_me = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S685>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S723>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jr = false;

    /* End of SystemInitialize for SubSystem: '<S685>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample27' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample28' */
    /* InitializeConditions for Sum: '<S686>/Summation' incorporates:
     *  UnitDelay: '<S686>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_cq = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S686>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S724>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jx = false;

    /* End of SystemInitialize for SubSystem: '<S686>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample28' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample32' */
    /* InitializeConditions for Sum: '<S691>/Summation' incorporates:
     *  UnitDelay: '<S691>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_kx = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S691>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S729>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_a2 = false;

    /* End of SystemInitialize for SubSystem: '<S691>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample32' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample33' */
    /* InitializeConditions for Sum: '<S692>/Summation' incorporates:
     *  UnitDelay: '<S692>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_la = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S692>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S730>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_nh = false;

    /* End of SystemInitialize for SubSystem: '<S692>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample33' */

    /* SystemInitialize for Atomic SubSystem: '<S378>/Turn On Delay Sample34' */
    /* InitializeConditions for Sum: '<S693>/Summation' incorporates:
     *  UnitDelay: '<S693>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_a = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S693>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S731>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_iy = false;

    /* End of SystemInitialize for SubSystem: '<S693>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S378>/Turn On Delay Sample34' */

    /* SystemInitialize for Atomic SubSystem: '<S372>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S567>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_n2 = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S372>/LowpassT Reset Enabled' */

    /* SystemInitialize for Atomic SubSystem: '<S376>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S604>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_hu = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S376>/LowpassT Reset Enabled' */

    /* SystemInitialize for Atomic SubSystem: '<S376>/LowpassT Reset Enabled1' */
    /* InitializeConditions for UnitDelay: '<S605>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_p = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S376>/LowpassT Reset Enabled1' */

    /* SystemInitialize for Atomic SubSystem: '<S376>/LowpassT Reset Enabled2' */
    /* InitializeConditions for UnitDelay: '<S606>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_n = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S376>/LowpassT Reset Enabled2' */

    /* SystemInitialize for Atomic SubSystem: '<S377>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S616>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_g1 = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S377>/LowpassT Reset Enabled' */
#if Rte_SysCon_Variant_HMIR_6

    /* SystemInitialize for Atomic SubSystem: '<S367>/Regen_Pwr' */
    /* SystemInitialize for Atomic SubSystem: '<S383>/Regen_Pwr' */
    /* SystemInitialize for Atomic SubSystem: '<S773>/LowpassT Reset Enabled1' */
    /* InitializeConditions for UnitDelay: '<S778>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jn = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S773>/LowpassT Reset Enabled1' */
    /* End of SystemInitialize for SubSystem: '<S383>/Regen_Pwr' */
    /* End of SystemInitialize for SubSystem: '<S367>/Regen_Pwr' */
#endif

    /* SystemInitialize for Atomic SubSystem: '<S373>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S574>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ji = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S373>/LowpassT Reset Enabled' */

    /* SystemInitialize for Atomic SubSystem: '<S371>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S551>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_k = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S371>/LowpassT Reset Enabled' */

    /* SystemInitialize for Atomic SubSystem: '<S375>/LowpassT Reset Enabled1' */
    /* InitializeConditions for UnitDelay: '<S591>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_c = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S375>/LowpassT Reset Enabled1' */

    /* SystemInitialize for Atomic SubSystem: '<S375>/LowpassT Reset Enabled2' */
    /* InitializeConditions for UnitDelay: '<S592>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_d = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S375>/LowpassT Reset Enabled2' */

    /* SystemInitialize for Atomic SubSystem: '<S741>/Count Down  Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S749>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_bg = ((uint16)0U);

    /* End of SystemInitialize for SubSystem: '<S741>/Count Down  Reset Enabled' */
#if Rte_SysCon_Variant_HMIR_5

    /* SystemInitialize for Atomic SubSystem: '<S367>/Variant Subsystem' */
    /* SystemInitialize for Atomic SubSystem: '<S367>/M182' */
    /* SystemInitialize for Atomic SubSystem: '<S382>/M182' */
    /* SystemInitialize for Atomic SubSystem: '<S764>/Turn On Delay Sample15' */
    /* InitializeConditions for Sum: '<S771>/Summation' incorporates:
     *  UnitDelay: '<S771>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_fc = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S771>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S772>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_kf = false;

    /* End of SystemInitialize for SubSystem: '<S771>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S764>/Turn On Delay Sample15' */
    /* End of SystemInitialize for SubSystem: '<S382>/M182' */

    /* SystemInitialize for Atomic SubSystem: '<S384>/Suggested_Speed' */
    /* SystemInitialize for Atomic SubSystem: '<S780>/GradientLimiter' */
    /* InitializeConditions for UnitDelay: '<S784>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_j = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S780>/GradientLimiter' */

    /* SystemInitialize for Atomic SubSystem: '<S780>/GradientLimiter1' */
    /* InitializeConditions for UnitDelay: '<S785>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_f = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S780>/GradientLimiter1' */

    /* SystemInitialize for Atomic SubSystem: '<S780>/GradientLimiter2' */
    /* InitializeConditions for UnitDelay: '<S786>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_g = 0.0F;

    /* End of SystemInitialize for SubSystem: '<S780>/GradientLimiter2' */

    /* SystemInitialize for Atomic SubSystem: '<S780>/Turn On Delay Sample15' */
    /* InitializeConditions for Sum: '<S813>/Summation' incorporates:
     *  UnitDelay: '<S813>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_f3 = ((uint16)0U);

    /* SystemInitialize for Atomic SubSystem: '<S813>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S817>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_oy = false;

    /* End of SystemInitialize for SubSystem: '<S813>/EdgeRising' */
    /* End of SystemInitialize for SubSystem: '<S780>/Turn On Delay Sample15' */
    /* End of SystemInitialize for SubSystem: '<S384>/Suggested_Speed' */
    /* End of SystemInitialize for SubSystem: '<S367>/M182' */
    /* End of SystemInitialize for SubSystem: '<S367>/Variant Subsystem' */
#endif

    /* SystemInitialize for Atomic SubSystem: '<S381>/Hysteresis' */
    /* InitializeConditions for UnitDelay: '<S761>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mu = false;

    /* End of SystemInitialize for SubSystem: '<S381>/Hysteresis' */
}

/* System reset for atomic system: '<S365>/HMIC_100ms_Reserve' */
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_HMIC_100ms_Reserve_Reset(void)
{
    /* InitializeConditions for UnitDelay: '<S372>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE = 0.0F;

    /* InitializeConditions for UnitDelay: '<S559>/Unit Delay1' */
    HMIR_ac_DW.UnitDelay1_DSTATE = 0.0F;

    /* InitializeConditions for UnitDelay: '<S559>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m = 0.0F;

    /* InitializeConditions for UnitDelay: '<S377>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_h = 0.0F;

    /* InitializeConditions for UnitDelay: '<S741>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mr = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S745>/Unit Delay1' */
    HMIR_ac_DW.UnitDelay1_DSTATE_b = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S754>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_j2 = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S755>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ch = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S746>/Unit Delay1' */
    HMIR_ac_DW.UnitDelay1_DSTATE_g = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S757>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_cc = ((uint16)0U);

    /* InitializeConditions for UnitDelay: '<S758>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_e = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S370>/Variant Subsystem' */
#if Rte_SysCon_Variant_HMIR_1

    /* SystemReset for Atomic SubSystem: '<S415>/Subsystem' */
    /* SystemReset for Atomic SubSystem: '<S416>/Hysteresis' */
    /* InitializeConditions for UnitDelay: '<S436>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_bc = false;

    /* End of SystemReset for SubSystem: '<S416>/Hysteresis' */

    /* SystemReset for Atomic SubSystem: '<S416>/Turn On Delay Sample' */
    /* InitializeConditions for Sum: '<S444>/Summation' incorporates:
     *  UnitDelay: '<S444>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_dw = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S444>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S465>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ml = false;

    /* End of SystemReset for SubSystem: '<S444>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S416>/Turn On Delay Sample' */

    /* SystemReset for Atomic SubSystem: '<S416>/Turn On Delay Sample1' */
    /* InitializeConditions for Sum: '<S445>/Summation' incorporates:
     *  UnitDelay: '<S445>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ne = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S445>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S466>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_nq = false;

    /* End of SystemReset for SubSystem: '<S445>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S416>/Turn On Delay Sample1' */

    /* SystemReset for Atomic SubSystem: '<S416>/Turn On Delay Sample2' */
    /* InitializeConditions for Sum: '<S446>/Summation' incorporates:
     *  UnitDelay: '<S446>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_a3 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S446>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S467>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_a2a = false;

    /* End of SystemReset for SubSystem: '<S446>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S416>/Turn On Delay Sample2' */

    /* SystemReset for Atomic SubSystem: '<S416>/Turn On Delay Sample3' */
    /* InitializeConditions for Sum: '<S447>/Summation' incorporates:
     *  UnitDelay: '<S447>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_bd = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S447>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S468>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_e2 = false;

    /* End of SystemReset for SubSystem: '<S447>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S416>/Turn On Delay Sample3' */

    /* SystemReset for Atomic SubSystem: '<S416>/Turn On Delay Sample4' */
    /* InitializeConditions for Sum: '<S448>/Summation' incorporates:
     *  UnitDelay: '<S448>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gx = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S448>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S469>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_js = false;

    /* End of SystemReset for SubSystem: '<S448>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S416>/Turn On Delay Sample4' */
    /* End of SystemReset for SubSystem: '<S415>/Subsystem' */
#elif Rte_SysCon_Variant_HMIR_5

    /* SystemReset for Atomic SubSystem: '<S415>/Subsystem1' */
    /* SystemReset for Atomic SubSystem: '<S417>/Turn On Delay Sample1' */
    /* InitializeConditions for Sum: '<S506>/Summation' incorporates:
     *  UnitDelay: '<S506>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_o3 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S506>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S541>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_iq = false;

    /* End of SystemReset for SubSystem: '<S506>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S417>/Turn On Delay Sample1' */

    /* SystemReset for Atomic SubSystem: '<S417>/Turn On Delay Sample2' */
    /* InitializeConditions for Sum: '<S507>/Summation' incorporates:
     *  UnitDelay: '<S507>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_g10 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S507>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S542>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_bgr = false;

    /* End of SystemReset for SubSystem: '<S507>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S417>/Turn On Delay Sample2' */

    /* SystemReset for Atomic SubSystem: '<S417>/Turn On Delay Sample3' */
    /* InitializeConditions for Sum: '<S508>/Summation' incorporates:
     *  UnitDelay: '<S508>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_op = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S508>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S543>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_d5 = false;

    /* End of SystemReset for SubSystem: '<S508>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S417>/Turn On Delay Sample3' */
    /* End of SystemReset for SubSystem: '<S415>/Subsystem1' */
#endif

    /* End of SystemReset for SubSystem: '<S370>/Variant Subsystem' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample6' */
    /* InitializeConditions for Sum: '<S699>/Summation' incorporates:
     *  UnitDelay: '<S699>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_d0 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S699>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S737>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_py = false;

    /* End of SystemReset for SubSystem: '<S699>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample6' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample5' */
    /* InitializeConditions for Sum: '<S698>/Summation' incorporates:
     *  UnitDelay: '<S698>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_i = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S698>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S736>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_pa = false;

    /* End of SystemReset for SubSystem: '<S698>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample5' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample4' */
    /* InitializeConditions for Sum: '<S697>/Summation' incorporates:
     *  UnitDelay: '<S697>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ep = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S697>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S735>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jc = false;

    /* End of SystemReset for SubSystem: '<S697>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample4' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample3' */
    /* InitializeConditions for Sum: '<S688>/Summation' incorporates:
     *  UnitDelay: '<S688>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_o5 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S688>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S726>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_at = false;

    /* End of SystemReset for SubSystem: '<S688>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample3' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample11' */
    /* InitializeConditions for Sum: '<S668>/Summation' incorporates:
     *  UnitDelay: '<S668>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_hp = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S668>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S706>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_fv = false;

    /* End of SystemReset for SubSystem: '<S668>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample11' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample12' */
    /* InitializeConditions for Sum: '<S669>/Summation' incorporates:
     *  UnitDelay: '<S669>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_iv = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S669>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S707>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ad = false;

    /* End of SystemReset for SubSystem: '<S669>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample12' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample13' */
    /* InitializeConditions for Sum: '<S670>/Summation' incorporates:
     *  UnitDelay: '<S670>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gi0 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S670>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S708>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jiq = false;

    /* End of SystemReset for SubSystem: '<S670>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample13' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample14' */
    /* InitializeConditions for Sum: '<S671>/Summation' incorporates:
     *  UnitDelay: '<S671>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_lx = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S671>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S709>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_d2 = false;

    /* End of SystemReset for SubSystem: '<S671>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample14' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample18' */
    /* InitializeConditions for Sum: '<S675>/Summation' incorporates:
     *  UnitDelay: '<S675>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ed = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S675>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S713>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gb = false;

    /* End of SystemReset for SubSystem: '<S675>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample18' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample15' */
    /* InitializeConditions for Sum: '<S672>/Summation' incorporates:
     *  UnitDelay: '<S672>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gi = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S672>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S710>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_i2 = false;

    /* End of SystemReset for SubSystem: '<S672>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample15' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample16' */
    /* InitializeConditions for Sum: '<S673>/Summation' incorporates:
     *  UnitDelay: '<S673>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_chf = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S673>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S711>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_i3 = false;

    /* End of SystemReset for SubSystem: '<S673>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample16' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample17' */
    /* InitializeConditions for Sum: '<S674>/Summation' incorporates:
     *  UnitDelay: '<S674>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_co = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S674>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S712>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_a2w = false;

    /* End of SystemReset for SubSystem: '<S674>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample17' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample21' */
    /* InitializeConditions for Sum: '<S679>/Summation' incorporates:
     *  UnitDelay: '<S679>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_cf = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S679>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S717>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gtr = false;

    /* End of SystemReset for SubSystem: '<S679>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample21' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample29' */
    /* InitializeConditions for Sum: '<S687>/Summation' incorporates:
     *  UnitDelay: '<S687>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_hq = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S687>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S725>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_p1 = false;

    /* End of SystemReset for SubSystem: '<S687>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample29' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample36' */
    /* InitializeConditions for Sum: '<S695>/Summation' incorporates:
     *  UnitDelay: '<S695>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_o = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S695>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S733>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_fp = false;

    /* End of SystemReset for SubSystem: '<S695>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample36' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample' */
    /* InitializeConditions for Sum: '<S665>/Summation' incorporates:
     *  UnitDelay: '<S665>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ecg = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S665>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S703>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_lf = false;

    /* End of SystemReset for SubSystem: '<S665>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample37' */
    /* InitializeConditions for Sum: '<S696>/Summation' incorporates:
     *  UnitDelay: '<S696>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_eo = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S696>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S734>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_cp = false;

    /* End of SystemReset for SubSystem: '<S696>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample37' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample24' */
    /* InitializeConditions for Sum: '<S682>/Summation' incorporates:
     *  UnitDelay: '<S682>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_nd = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S682>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S720>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_fw = false;

    /* End of SystemReset for SubSystem: '<S682>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample24' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample2' */
    /* InitializeConditions for Sum: '<S677>/Summation' incorporates:
     *  UnitDelay: '<S677>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_nj = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S677>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S715>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jp = false;

    /* End of SystemReset for SubSystem: '<S677>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample2' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample1' */
    /* InitializeConditions for Sum: '<S666>/Summation' incorporates:
     *  UnitDelay: '<S666>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_l3 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S666>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S704>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_md = false;

    /* End of SystemReset for SubSystem: '<S666>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample1' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample31' */
    /* InitializeConditions for Sum: '<S690>/Summation' incorporates:
     *  UnitDelay: '<S690>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_lz = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S690>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S728>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_cl = false;

    /* End of SystemReset for SubSystem: '<S690>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample31' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample7' */
    /* InitializeConditions for Sum: '<S700>/Summation' incorporates:
     *  UnitDelay: '<S700>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gf = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S700>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S738>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_eds = false;

    /* End of SystemReset for SubSystem: '<S700>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample7' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample8' */
    /* InitializeConditions for Sum: '<S701>/Summation' incorporates:
     *  UnitDelay: '<S701>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ki = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S701>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S739>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gt = false;

    /* End of SystemReset for SubSystem: '<S701>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample8' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample9' */
    /* InitializeConditions for Sum: '<S702>/Summation' incorporates:
     *  UnitDelay: '<S702>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_ec = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S702>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S740>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m0 = false;

    /* End of SystemReset for SubSystem: '<S702>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample9' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample19' */
    /* InitializeConditions for Sum: '<S676>/Summation' incorporates:
     *  UnitDelay: '<S676>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_k5 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S676>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S714>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_o2 = false;

    /* End of SystemReset for SubSystem: '<S676>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample19' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample20' */
    /* InitializeConditions for Sum: '<S678>/Summation' incorporates:
     *  UnitDelay: '<S678>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_kd = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S678>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S716>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mc = false;

    /* End of SystemReset for SubSystem: '<S678>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample20' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample10' */
    /* InitializeConditions for Sum: '<S667>/Summation' incorporates:
     *  UnitDelay: '<S667>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_bf = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S667>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S705>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ll = false;

    /* End of SystemReset for SubSystem: '<S667>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample10' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample25' */
    /* InitializeConditions for Sum: '<S683>/Summation' incorporates:
     *  UnitDelay: '<S683>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gj = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S683>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S721>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m5 = false;

    /* End of SystemReset for SubSystem: '<S683>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample25' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample22' */
    /* InitializeConditions for Sum: '<S680>/Summation' incorporates:
     *  UnitDelay: '<S680>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_bw = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S680>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S718>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_moq = false;

    /* End of SystemReset for SubSystem: '<S680>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample22' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample35' */
    /* InitializeConditions for Sum: '<S694>/Summation' incorporates:
     *  UnitDelay: '<S694>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_k0 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S694>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S732>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gy = false;

    /* End of SystemReset for SubSystem: '<S694>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample35' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample30' */
    /* InitializeConditions for Sum: '<S689>/Summation' incorporates:
     *  UnitDelay: '<S689>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_pf = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S689>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S727>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mz = false;

    /* End of SystemReset for SubSystem: '<S689>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample30' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample23' */
    /* InitializeConditions for Sum: '<S681>/Summation' incorporates:
     *  UnitDelay: '<S681>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_n3 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S681>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S719>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mhl = false;

    /* End of SystemReset for SubSystem: '<S681>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample23' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample26' */
    /* InitializeConditions for Sum: '<S684>/Summation' incorporates:
     *  UnitDelay: '<S684>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_mo = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S684>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S722>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mh = false;

    /* End of SystemReset for SubSystem: '<S684>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample26' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample27' */
    /* InitializeConditions for Sum: '<S685>/Summation' incorporates:
     *  UnitDelay: '<S685>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_me = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S685>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S723>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jr = false;

    /* End of SystemReset for SubSystem: '<S685>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample27' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample28' */
    /* InitializeConditions for Sum: '<S686>/Summation' incorporates:
     *  UnitDelay: '<S686>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_cq = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S686>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S724>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jx = false;

    /* End of SystemReset for SubSystem: '<S686>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample28' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample32' */
    /* InitializeConditions for Sum: '<S691>/Summation' incorporates:
     *  UnitDelay: '<S691>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_kx = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S691>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S729>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_a2 = false;

    /* End of SystemReset for SubSystem: '<S691>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample32' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample33' */
    /* InitializeConditions for Sum: '<S692>/Summation' incorporates:
     *  UnitDelay: '<S692>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_la = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S692>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S730>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_nh = false;

    /* End of SystemReset for SubSystem: '<S692>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample33' */

    /* SystemReset for Atomic SubSystem: '<S378>/Turn On Delay Sample34' */
    /* InitializeConditions for Sum: '<S693>/Summation' incorporates:
     *  UnitDelay: '<S693>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_a = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S693>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S731>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_iy = false;

    /* End of SystemReset for SubSystem: '<S693>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S378>/Turn On Delay Sample34' */

    /* SystemReset for Atomic SubSystem: '<S372>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S567>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_n2 = 0.0F;

    /* End of SystemReset for SubSystem: '<S372>/LowpassT Reset Enabled' */

    /* SystemReset for Atomic SubSystem: '<S376>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S604>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_hu = 0.0F;

    /* End of SystemReset for SubSystem: '<S376>/LowpassT Reset Enabled' */

    /* SystemReset for Atomic SubSystem: '<S376>/LowpassT Reset Enabled1' */
    /* InitializeConditions for UnitDelay: '<S605>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_p = 0.0F;

    /* End of SystemReset for SubSystem: '<S376>/LowpassT Reset Enabled1' */

    /* SystemReset for Atomic SubSystem: '<S376>/LowpassT Reset Enabled2' */
    /* InitializeConditions for UnitDelay: '<S606>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_n = 0.0F;

    /* End of SystemReset for SubSystem: '<S376>/LowpassT Reset Enabled2' */

    /* SystemReset for Atomic SubSystem: '<S377>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S616>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_g1 = 0.0F;

    /* End of SystemReset for SubSystem: '<S377>/LowpassT Reset Enabled' */
#if Rte_SysCon_Variant_HMIR_6

    /* SystemReset for Atomic SubSystem: '<S367>/Regen_Pwr' */
    /* SystemReset for Atomic SubSystem: '<S383>/Regen_Pwr' */
    /* SystemReset for Atomic SubSystem: '<S773>/LowpassT Reset Enabled1' */
    /* InitializeConditions for UnitDelay: '<S778>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jn = 0.0F;

    /* End of SystemReset for SubSystem: '<S773>/LowpassT Reset Enabled1' */
    /* End of SystemReset for SubSystem: '<S383>/Regen_Pwr' */
    /* End of SystemReset for SubSystem: '<S367>/Regen_Pwr' */
#endif

    /* SystemReset for Atomic SubSystem: '<S373>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S574>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ji = 0.0F;

    /* End of SystemReset for SubSystem: '<S373>/LowpassT Reset Enabled' */

    /* SystemReset for Atomic SubSystem: '<S371>/LowpassT Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S551>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_k = 0.0F;

    /* End of SystemReset for SubSystem: '<S371>/LowpassT Reset Enabled' */

    /* SystemReset for Chart: '<S375>/AC_Compressor' */
    HMIR_ac_DW.is_active_c2_HMIR_ac = 0U;
    HMIR_ac_DW.is_c2_HMIR_ac = HMIR_ac_IN_NO_ACTIVE_CHILD;
    HMIR_ac_DW.AC_CompReqONTimer = 0.0F;
    HMIR_ac_B.VeHMIR_k_AC_CompLPFConst = 0.0F;
    HMIR_ac_B.VeHMIR_b_AC_CompFactor = false;

    /* SystemReset for Atomic SubSystem: '<S375>/LowpassT Reset Enabled1' */
    /* InitializeConditions for UnitDelay: '<S591>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_c = 0.0F;

    /* End of SystemReset for SubSystem: '<S375>/LowpassT Reset Enabled1' */

    /* SystemReset for Chart: '<S375>/HVC_Htr' */
    HMIR_ac_DW.is_active_c3_HMIR_ac = 0U;
    HMIR_ac_DW.is_c3_HMIR_ac = HMIR_ac_IN_NO_ACTIVE_CHILD;
    HMIR_ac_DW.HVC_HtrReqONTimer = 0.0F;
    HMIR_ac_B.VeHMIR_k_HVC_HtrLPFConst = 0.0F;
    HMIR_ac_B.VeHMIR_b_HVC_HtrFactor = false;

    /* SystemReset for Atomic SubSystem: '<S375>/LowpassT Reset Enabled2' */
    /* InitializeConditions for UnitDelay: '<S592>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_d = 0.0F;

    /* End of SystemReset for SubSystem: '<S375>/LowpassT Reset Enabled2' */

    /* SystemReset for Atomic SubSystem: '<S741>/Count Down  Reset Enabled' */
    /* InitializeConditions for UnitDelay: '<S749>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_bg = ((uint16)0U);

    /* End of SystemReset for SubSystem: '<S741>/Count Down  Reset Enabled' */
#if Rte_SysCon_Variant_HMIR_5

    /* SystemReset for Atomic SubSystem: '<S367>/Variant Subsystem' */
    /* SystemReset for Atomic SubSystem: '<S367>/M182' */
    /* SystemReset for Atomic SubSystem: '<S382>/M182' */
    /* SystemReset for Atomic SubSystem: '<S764>/Turn On Delay Sample15' */
    /* InitializeConditions for Sum: '<S771>/Summation' incorporates:
     *  UnitDelay: '<S771>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_fc = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S771>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S772>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_kf = false;

    /* End of SystemReset for SubSystem: '<S771>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S764>/Turn On Delay Sample15' */
    /* End of SystemReset for SubSystem: '<S382>/M182' */

    /* SystemReset for Atomic SubSystem: '<S384>/Suggested_Speed' */
    /* SystemReset for Atomic SubSystem: '<S780>/Turn On Delay Sample15' */
    /* InitializeConditions for Sum: '<S813>/Summation' incorporates:
     *  UnitDelay: '<S813>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_f3 = ((uint16)0U);

    /* SystemReset for Atomic SubSystem: '<S813>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S817>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_oy = false;

    /* End of SystemReset for SubSystem: '<S813>/EdgeRising' */
    /* End of SystemReset for SubSystem: '<S780>/Turn On Delay Sample15' */

    /* SystemReset for Atomic SubSystem: '<S780>/GradientLimiter' */
    /* InitializeConditions for UnitDelay: '<S784>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_j = 0.0F;

    /* End of SystemReset for SubSystem: '<S780>/GradientLimiter' */

    /* SystemReset for Atomic SubSystem: '<S780>/GradientLimiter1' */
    /* InitializeConditions for UnitDelay: '<S785>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_f = 0.0F;

    /* End of SystemReset for SubSystem: '<S780>/GradientLimiter1' */

    /* SystemReset for Atomic SubSystem: '<S780>/GradientLimiter2' */
    /* InitializeConditions for UnitDelay: '<S786>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_g = 0.0F;

    /* End of SystemReset for SubSystem: '<S780>/GradientLimiter2' */
    /* End of SystemReset for SubSystem: '<S384>/Suggested_Speed' */
    /* End of SystemReset for SubSystem: '<S367>/M182' */
    /* End of SystemReset for SubSystem: '<S367>/Variant Subsystem' */
#endif

    /* SystemReset for Atomic SubSystem: '<S381>/Hysteresis' */
    /* InitializeConditions for UnitDelay: '<S761>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mu = false;

    /* End of SystemReset for SubSystem: '<S381>/Hysteresis' */
}

/* Output and update for atomic system: '<S365>/HMIC_100ms_Reserve' */
static FUNC(void, HMIR_CODE_LOCAL) HMIR_ac_HMIC_100ms_Reserve(void)
{
    float32 tmpRead;
    float32 tmpRead_2;
    float32 tmpRead_3;
    float32 tmpRead_5;
    float32 tmpRead_6;
    float32 tmpRead_7;
    float32 tmpRead_8;
    float32 tmpRead_a;
    float32 tmpRead_g;
    float32 tmpRead_h;
    float32 tmpRead_i;
    TeBRKR_e_BrkPdl_Stat tmpRead_p;
    TeESSR_e_HybEngSysActv tmpRead_1;
    TeHVTR_e_HVOverVoltFailure tmpRead_k;
    TeOBCR_e_ChargingLevel tmpRead_4;
    TeOHSR_e_OptGear_SG tmpRead_n;
    TeTRNR_e_TCMGearStat tmpRead_o;
    boolean tmpRead_0;
    boolean tmpRead_9;
    boolean tmpRead_b;
    boolean tmpRead_c;
    boolean tmpRead_d;
    boolean tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_j;
    boolean tmpRead_l;
    boolean tmpRead_m;
    boolean tmpRead_q;

#if Rte_SysCon_Variant_HMIR_6

    float32 tmpRead_r;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 tmpRead_s;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 tmpRead_t;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 tmpRead_u;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 tmpRead_v;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 tmpRead_w;

#endif

#if Rte_SysCon_Variant_HMIR_1

    float32 tmpRead_x;

#endif

#if Rte_SysCon_Variant_HMIR_5

    boolean tmpRead_y;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 tmpRead_z;

#endif

    float32 rtb_Add1;
    float32 rtb_Add3;
    float32 rtb_Product;
    float32 rtb_Product1_a;
    float32 rtb_Product2;
    float32 rtb_Switch1_np;
    float32 tmpRead_10;
    uint16 rtb_Switch1_bj;
    uint16 rtb_Switch1_mn;
    TeBPCR_e_ThrmlRnawy_WarnSts tmpRead_13;
    TeGENR_e_APM_OperMode tmpRead_12;
    TeINVR_e_MtrInvrtrSt tmpRead_14;
    TeINVR_e_MtrInvrtrSt tmpRead_15;
    boolean rtb_AND;
    boolean rtb_AND_a;
    boolean rtb_AND_b0;
    boolean rtb_Comparison17_f;
    boolean rtb_Comparison18_a;
    boolean rtb_LessThanorEqual4_g;
    boolean rtb_Logical;
    boolean rtb_Logical1_d;
    boolean rtb_Logical3_n;
    boolean rtb_LogicalOperator2_h;
    boolean rtb_LogicalOperator5;
    boolean rtb_UnitDelay_ka;
    boolean tmpRead_11;

#if Rte_SysCon_Variant_HMIR_5

    float32 rtb_Switch2_h4[3];

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 rtb_Switch1_jq[3];

#endif

    float32 rtb_Product1;
    float32 rtb_Product3_c;
    float32 rtb_Subtraction_ah;
    float32 rtb_Switch_hi;
    float32 rtb_Vector_j;

#if Rte_SysCon_Variant_HMIR_5

    sint32 i;

#endif

#if Rte_SysCon_Variant_HMIR_1 || Rte_SysCon_Variant_HMIR_5

    TeINVR_e_DerateReason tmp;

#endif

#if !Rte_SysCon_Variant_HMIR_1 && Rte_SysCon_Variant_HMIR_5

    TeINVR_e_DerateReason tmp_0;

#endif

    TeHMIR_e_VldtdTransRngSt_ShifterPOS tmp_1;

#if Rte_SysCon_Variant_HMIR_5

    TeDMDR_e_TurtleMdSts tmp_2;

#endif

#if Rte_SysCon_Variant_HMIR_5

    TeDMDR_e_DrvMd tmp_3;

#endif

    /* Inport: '<Root>/VeESSR_e_HybEngSysActv' */
    (void)Rte_Read_VeESSR_e_HybEngSysActv_Value(&tmpRead_1);

    /* Switch: '<S374>/Switch' incorporates:
     *  Constant: '<S576>/Constant'
     *  Inport: '<Root>/VeESSR_e_HybEngSysActv'
     *  RelationalOperator: '<S374>/Relational Operator'
     */
    if (tmpRead_1 == CeESSR_e_HybEngEnabledOn)
    {
        /* Switch: '<S374>/Switch' incorporates:
         *  Constant: '<S374>/Constant Value'
         */
        VeHMIC_b_HEV_EVT_MD = false;
    }
    else
    {
        /* Switch: '<S374>/Switch' incorporates:
         *  Constant: '<S374>/Constant Value1'
         */
        VeHMIC_b_HEV_EVT_MD = true;
    }

    /* End of Switch: '<S374>/Switch' */

    /* Logic: '<S369>/Logical Operator5' incorporates:
     *  Constant: '<S390>/Constant1'
     *  Constant: '<S390>/Constant2'
     *  Constant: '<S391>/Constant1'
     *  Constant: '<S391>/Constant2'
     *  Constant: '<S392>/Constant1'
     *  Constant: '<S392>/Constant2'
     *  Constant: '<S393>/Constant1'
     *  Constant: '<S393>/Constant2'
     *  Constant: '<S394>/Constant1'
     *  Constant: '<S394>/Constant2'
     *  Constant: '<S395>/Constant1'
     *  Constant: '<S395>/Constant2'
     *  Constant: '<S396>/Constant1'
     *  Constant: '<S396>/Constant2'
     *  Constant: '<S397>/Constant1'
     *  Constant: '<S397>/Constant2'
     *  Constant: '<S398>/Constant1'
     *  Constant: '<S398>/Constant2'
     *  Constant: '<S399>/Constant1'
     *  Constant: '<S399>/Constant2'
     *  Constant: '<S400>/Calib'
     *  Constant: '<S401>/Calib'
     *  Constant: '<S402>/Calib'
     *  Constant: '<S403>/Calib'
     *  Constant: '<S404>/Calib'
     *  Constant: '<S405>/Calib'
     *  Constant: '<S406>/Calib'
     *  Constant: '<S407>/Calib'
     *  Constant: '<S408>/Calib'
     *  Constant: '<S409>/Calib'
     *  DataStoreRead: '<S390>/StatusByte_DM_A_I_PU_Ovrtemp'
     *  DataStoreRead: '<S391>/StatusByte_DM_A_I_PV_Ovrtemp'
     *  DataStoreRead: '<S392>/StatusByte_DM_A_I_PW_Ovrtemp'
     *  DataStoreRead: '<S393>/StatusByte_DM_B_I_PU_Ovrtemp'
     *  DataStoreRead: '<S394>/StatusByte_DM_B_I_PV_Ovrtemp'
     *  DataStoreRead: '<S395>/StatusByte_DM_B_I_PW_Ovrtemp'
     *  DataStoreRead: '<S396>/StatusByte_DrvMtrA_InvrtrOvrtemp'
     *  DataStoreRead: '<S397>/StatusByte_DrvMtrA_Ovrtemp'
     *  DataStoreRead: '<S398>/StatusByte_DrvMtrB_InvrtrOvrtemp'
     *  DataStoreRead: '<S399>/StatusByte_DrvMtrB_Ovrtemp'
     *  Logic: '<S369>/Logical1'
     *  Logic: '<S369>/Logical10'
     *  Logic: '<S369>/Logical11'
     *  Logic: '<S369>/Logical12'
     *  Logic: '<S369>/Logical3'
     *  Logic: '<S369>/Logical4'
     *  Logic: '<S369>/Logical5'
     *  Logic: '<S369>/Logical6'
     *  Logic: '<S369>/Logical7'
     *  Logic: '<S369>/Logical9'
     *  Logic: '<S390>/Logical Operator'
     *  Logic: '<S391>/Logical Operator'
     *  Logic: '<S392>/Logical Operator'
     *  Logic: '<S393>/Logical Operator'
     *  Logic: '<S394>/Logical Operator'
     *  Logic: '<S395>/Logical Operator'
     *  Logic: '<S396>/Logical Operator'
     *  Logic: '<S397>/Logical Operator'
     *  Logic: '<S398>/Logical Operator'
     *  Logic: '<S399>/Logical Operator'
     *  RelationalOperator: '<S390>/Relational Operator1'
     *  RelationalOperator: '<S390>/Relational Operator2'
     *  RelationalOperator: '<S391>/Relational Operator1'
     *  RelationalOperator: '<S391>/Relational Operator2'
     *  RelationalOperator: '<S392>/Relational Operator1'
     *  RelationalOperator: '<S392>/Relational Operator2'
     *  RelationalOperator: '<S393>/Relational Operator1'
     *  RelationalOperator: '<S393>/Relational Operator2'
     *  RelationalOperator: '<S394>/Relational Operator1'
     *  RelationalOperator: '<S394>/Relational Operator2'
     *  RelationalOperator: '<S395>/Relational Operator1'
     *  RelationalOperator: '<S395>/Relational Operator2'
     *  RelationalOperator: '<S396>/Relational Operator1'
     *  RelationalOperator: '<S396>/Relational Operator2'
     *  RelationalOperator: '<S397>/Relational Operator1'
     *  RelationalOperator: '<S397>/Relational Operator2'
     *  RelationalOperator: '<S398>/Relational Operator1'
     *  RelationalOperator: '<S398>/Relational Operator2'
     *  RelationalOperator: '<S399>/Relational Operator1'
     *  RelationalOperator: '<S399>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S390>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S390>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S392>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S392>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S393>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S393>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S394>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S394>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S395>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S395>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S396>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S396>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S397>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S397>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S398>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S398>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S399>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S399>/Bitwise Operator2'
     */
    VeHMIC_b_Reduced_Mtr_Capability = (((((((((((KeHMIR_b_MtrA_OverTemp_Ovrd) &&
        (((HMIR_ac_DW.StatusByte_DrvMtrA_Ovrtemp & ((uint8)1U)) != ((uint8)0U)) &&
         ((HMIR_ac_DW.StatusByte_DrvMtrA_Ovrtemp & ((uint8)64U)) == ((uint8)0U))))
        || ((KeHMIR_b_MtrB_OverTemp_Ovrd) &&
            (((HMIR_ac_DW.StatusByte_DrvMtrB_Ovrtemp & ((uint8)1U)) != ((uint8)
        0U)) && ((HMIR_ac_DW.StatusByte_DrvMtrB_Ovrtemp & ((uint8)64U)) ==
                 ((uint8)0U))))) || ((KeHMIR_b_DM_A_I_PU_OvrTemp_Ovrd) &&
        (((HMIR_ac_DW.StatusByte_DM_A_I_PU_Ovrtemp & ((uint8)1U)) != ((uint8)0U))
         && ((HMIR_ac_DW.StatusByte_DM_A_I_PU_Ovrtemp & ((uint8)64U)) == ((uint8)
        0U))))) || ((KeHMIR_b_DM_B_I_PU_OvrTemp_Ovrd) &&
                    (((HMIR_ac_DW.StatusByte_DM_B_I_PU_Ovrtemp & ((uint8)1U)) !=
                      ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_DM_B_I_PU_Ovrtemp
        & ((uint8)64U)) == ((uint8)0U))))) || ((KeHMIR_b_DM_A_I_PV_OvrTemp_Ovrd)
        && (((HMIR_ac_DW.StatusByte_DM_A_I_PV_Ovrtemp & ((uint8)1U)) != ((uint8)
        0U)) && ((HMIR_ac_DW.StatusByte_DM_A_I_PV_Ovrtemp & ((uint8)64U)) ==
                 ((uint8)0U))))) || ((KeHMIR_b_DM_B_I_PV_OvrTemp_Ovrd) &&
        (((HMIR_ac_DW.StatusByte_DM_B_I_PV_Ovrtemp & ((uint8)1U)) != ((uint8)0U))
         && ((HMIR_ac_DW.StatusByte_DM_B_I_PV_Ovrtemp & ((uint8)64U)) == ((uint8)
        0U))))) || ((KeHMIR_b_DM_A_I_PW_OvrTemp_Ovrd) &&
                    (((HMIR_ac_DW.StatusByte_DM_A_I_PW_Ovrtemp & ((uint8)1U)) !=
                      ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_DM_A_I_PW_Ovrtemp
        & ((uint8)64U)) == ((uint8)0U))))) || ((KeHMIR_b_DM_B_I_PW_OvrTemp_Ovrd)
        && (((HMIR_ac_DW.StatusByte_DM_B_I_PW_Ovrtemp & ((uint8)1U)) != ((uint8)
        0U)) && ((HMIR_ac_DW.StatusByte_DM_B_I_PW_Ovrtemp & ((uint8)64U)) ==
                 ((uint8)0U))))) || ((KeHMIR_b_MtrA_Invrtr_OverTemp_Ovrd) &&
        (((HMIR_ac_DW.StatusByte_DrvMtrA_InvrtrOvrtemp & ((uint8)1U)) != ((uint8)
        0U)) && ((HMIR_ac_DW.StatusByte_DrvMtrA_InvrtrOvrtemp & ((uint8)64U)) ==
                 ((uint8)0U))))) || ((KeHMIR_b_MtrB_Invrtr_OverTemp_Ovrd) &&
        (((HMIR_ac_DW.StatusByte_DrvMtrB_InvrtrOvrtemp & ((uint8)1U)) != ((uint8)
        0U)) && ((HMIR_ac_DW.StatusByte_DrvMtrB_InvrtrOvrtemp & ((uint8)64U)) ==
                 ((uint8)0U)))));

    /* Outputs for Atomic SubSystem: '<S370>/Variant Subsystem' */
#if Rte_SysCon_Variant_HMIR_1

    /* Outputs for Atomic SubSystem: '<S415>/Subsystem' */
    /* RelationalOperator: '<S416>/Comparison1' incorporates:
     *  RelationalOperator: '<S416>/Comparison'
     *  RelationalOperator: '<S416>/Comparison10'
     *  RelationalOperator: '<S416>/Comparison11'
     *  RelationalOperator: '<S416>/Comparison12'
     *  RelationalOperator: '<S416>/Comparison13'
     *  RelationalOperator: '<S416>/Comparison14'
     *  RelationalOperator: '<S416>/Comparison15'
     *  RelationalOperator: '<S416>/Comparison2'
     *  RelationalOperator: '<S416>/Comparison3'
     *  RelationalOperator: '<S416>/Comparison4'
     *  RelationalOperator: '<S416>/Comparison5'
     *  RelationalOperator: '<S416>/Comparison6'
     *  RelationalOperator: '<S416>/Comparison7'
     *  RelationalOperator: '<S416>/Comparison8'
     *  RelationalOperator: '<S416>/Comparison9'
     *  SignalConversion generated from: '<S5>/VeINVR_e_MtrA_DrtRsn'
     */
    tmp = HMIR_ac_B.TmpSignalConversionAtVeINVR_e_MtrA_DrtRs;

    /* Switch: '<S419>/Switch1' incorporates:
     *  Constant: '<S420>/Constant'
     *  Constant: '<S428>/Constant'
     *  RelationalOperator: '<S416>/Comparison'
     *  RelationalOperator: '<S416>/Comparison1'
     *  Switch: '<S419>/Switch'
     */
    if (tmp == CeINVR_e_DerateReason2)
    {
        /* Switch: '<S419>/Switch' incorporates:
         *  Constant: '<S419>/Constant Value'
         *  Constant: '<S428>/Constant'
         *  RelationalOperator: '<S416>/Comparison'
         */
        if (tmp == CeINVR_e_DerateReason1)
        {
            rtb_Switch1_bj = HMIR_ac_ConstB.FixPtBitwiseOperator1_g5;
        }
        else
        {
            rtb_Switch1_bj = ((uint16)0U);
        }

        /* Switch: '<S419>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S450>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn = (uint16)(rtb_Switch1_bj | ((uint16)2U));
    }
    else if (tmp == CeINVR_e_DerateReason1)
    {
        /* Switch: '<S419>/Switch' incorporates:
         *  Switch: '<S419>/Switch1'
         */
        rtb_Switch1_mn = HMIR_ac_ConstB.FixPtBitwiseOperator1_g5;
    }
    else
    {
        /* Switch: '<S419>/Switch1' incorporates:
         *  Constant: '<S419>/Constant Value'
         *  Switch: '<S419>/Switch'
         */
        rtb_Switch1_mn = ((uint16)0U);
    }

    /* End of Switch: '<S419>/Switch1' */

    /* Switch: '<S419>/Switch2' incorporates:
     *  Constant: '<S430>/Constant'
     *  RelationalOperator: '<S416>/Comparison2'
     */
    if (tmp == CeINVR_e_DerateReason3)
    {
        /* Switch: '<S419>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S457>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)4U);
    }

    /* End of Switch: '<S419>/Switch2' */

    /* Switch: '<S419>/Switch3' incorporates:
     *  Constant: '<S429>/Constant'
     *  RelationalOperator: '<S416>/Comparison3'
     */
    if (tmp == CeINVR_e_DerateReason4)
    {
        /* Switch: '<S419>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S458>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)8U);
    }

    /* End of Switch: '<S419>/Switch3' */

    /* Switch: '<S419>/Switch4' incorporates:
     *  Constant: '<S431>/Constant'
     *  RelationalOperator: '<S416>/Comparison4'
     */
    if (tmp == CeINVR_e_DerateReason5)
    {
        /* Switch: '<S419>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S459>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)16U);
    }

    /* End of Switch: '<S419>/Switch4' */

    /* Switch: '<S419>/Switch12' incorporates:
     *  Constant: '<S432>/Constant'
     *  RelationalOperator: '<S416>/Comparison5'
     */
    if (tmp == CeINVR_e_DerateReason6)
    {
        /* Switch: '<S419>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S453>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)32U);
    }

    /* End of Switch: '<S419>/Switch12' */

    /* Switch: '<S419>/Switch5' incorporates:
     *  Constant: '<S433>/Constant'
     *  RelationalOperator: '<S416>/Comparison6'
     */
    if (tmp == CeINVR_e_DerateReason7)
    {
        /* Switch: '<S419>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S460>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)64U);
    }

    /* End of Switch: '<S419>/Switch5' */

    /* Switch: '<S419>/Switch6' incorporates:
     *  Constant: '<S434>/Constant'
     *  RelationalOperator: '<S416>/Comparison7'
     */
    if (tmp == CeINVR_e_DerateReason8)
    {
        /* Switch: '<S419>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S461>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)128U);
    }

    /* End of Switch: '<S419>/Switch6' */

    /* Switch: '<S419>/Switch7' incorporates:
     *  Constant: '<S435>/Constant'
     *  RelationalOperator: '<S416>/Comparison8'
     */
    if (tmp == CeINVR_e_DerateReason9)
    {
        /* Switch: '<S419>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S462>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)256U);
    }

    /* End of Switch: '<S419>/Switch7' */

    /* Switch: '<S419>/Switch8' incorporates:
     *  Constant: '<S421>/Constant'
     *  RelationalOperator: '<S416>/Comparison9'
     */
    if (tmp == CeINVR_e_DerateReason10)
    {
        /* Switch: '<S419>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S463>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)512U);
    }

    /* End of Switch: '<S419>/Switch8' */

    /* Switch: '<S419>/Switch10' incorporates:
     *  Constant: '<S422>/Constant'
     *  RelationalOperator: '<S416>/Comparison10'
     */
    if (tmp == CeINVR_e_DerateReason11)
    {
        /* Switch: '<S419>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S451>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)1024U);
    }

    /* End of Switch: '<S419>/Switch10' */

    /* Switch: '<S419>/Switch11' incorporates:
     *  Constant: '<S423>/Constant'
     *  RelationalOperator: '<S416>/Comparison11'
     */
    if (tmp == CeINVR_e_DerateReason12)
    {
        /* Switch: '<S419>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S452>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)2048U);
    }

    /* End of Switch: '<S419>/Switch11' */

    /* Switch: '<S419>/Switch13' incorporates:
     *  Constant: '<S424>/Constant'
     *  RelationalOperator: '<S416>/Comparison12'
     */
    if (tmp == CeINVR_e_DerateReason13)
    {
        /* Switch: '<S419>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S454>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)4096U);
    }

    /* End of Switch: '<S419>/Switch13' */

    /* Switch: '<S419>/Switch9' incorporates:
     *  Constant: '<S425>/Constant'
     *  RelationalOperator: '<S416>/Comparison13'
     */
    if (tmp == CeINVR_e_DerateReason14)
    {
        /* Switch: '<S419>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)8192U);
    }

    /* End of Switch: '<S419>/Switch9' */

    /* Switch: '<S419>/Switch14' incorporates:
     *  Constant: '<S426>/Constant'
     *  RelationalOperator: '<S416>/Comparison14'
     */
    if (tmp == CeINVR_e_DerateReason15)
    {
        /* Switch: '<S419>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S455>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)16384U);
    }

    /* End of Switch: '<S419>/Switch14' */

    /* Switch: '<S419>/Switch15' incorporates:
     *  Constant: '<S427>/Constant'
     *  RelationalOperator: '<S416>/Comparison15'
     */
    if (tmp == CeINVR_e_DerateReason16)
    {
        /* Switch: '<S419>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S456>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)32768U);
    }

    /* End of Switch: '<S419>/Switch15' */

    /* Inport: '<Root>/VeHTDR_M_OutTorqMaxHH' */
    (void)Rte_Read_VeHTDR_M_OutTorqMaxHH_Value(&rtb_Product1_a);

    /* Inport: '<Root>/VeDTRR_M_DrvrIntndedAxleTrq' */
    (void)Rte_Read_VeDTRR_M_DrvrIntndedAxleTrq_Value(&tmpRead_x);

    /* RelationalOperator: '<S416>/Comparison16' incorporates:
     *  Constant: '<S416>/Constant Value10'
     *  Constant: '<S441>/Calib'
     *  S-Function (sfix_bitop): '<S416>/Bitwise Logical Operator1'
     */
    VeHMIR_b_DerateReasonMtrA_VF = (((uint32)((sint32)(((sint32)rtb_Switch1_mn)
        & ((sint32)KeHMIR_y_DerateRsnMtrA)))) > ((uint32)((uint8)0U)));

    /* RelationalOperator: '<S416>/Comparison17' incorporates:
     *  Constant: '<S416>/Constant Value1'
     *  Constant: '<S443>/Calib'
     *  S-Function (sfix_bitop): '<S416>/Bitwise Logical Operator2'
     */
    rtb_Comparison17_f = (((uint32)((sint32)(((sint32)rtb_Switch1_mn) & ((sint32)
        KeHMIR_y_DerateRsnOverSpeed)))) > ((uint32)((uint8)0U)));

    /* RelationalOperator: '<S416>/Comparison18' incorporates:
     *  Constant: '<S416>/Constant Value2'
     *  Constant: '<S442>/Calib'
     *  S-Function (sfix_bitop): '<S416>/Bitwise Logical Operator3'
     */
    rtb_Comparison18_a = (((uint32)((sint32)(((sint32)rtb_Switch1_mn) & ((sint32)
        KeHMIR_y_DerateRsnOverHeated)))) > ((uint32)((uint8)0U)));

    /* Sum: '<S416>/Sum' */
    VeHMIC_M_FinalDriverTorqueRqst = tmpRead_x - rtb_Product1_a;

    /* Outputs for Atomic SubSystem: '<S416>/Hysteresis' */
    /* Switch: '<S436>/Switch1' incorporates:
     *  Constant: '<S437>/Calib'
     *  Constant: '<S438>/Calib'
     *  RelationalOperator: '<S436>/Greater  Than'
     *  RelationalOperator: '<S436>/Greater  Than1'
     *  Switch: '<S436>/Switch2'
     */
    if (VeHMIC_M_FinalDriverTorqueRqst > KeHMIR_M_Trq_Derate_RSP)
    {
        /* Switch: '<S436>/Switch1' incorporates:
         *  Constant: '<S436>/Constant Value'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_bc = true;
    }
    else
    {
        if (VeHMIC_M_FinalDriverTorqueRqst < KeHMIR_M_Trq_Derate_LSP)
        {
            /* Switch: '<S436>/Switch2' incorporates:
             *  Constant: '<S436>/Constant Value1'
             *  Switch: '<S436>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_bc = false;
        }
    }

    /* End of Switch: '<S436>/Switch1' */
    /* End of Outputs for SubSystem: '<S416>/Hysteresis' */

    /* RelationalOperator: '<S416>/Less Than  or Equal4' incorporates:
     *  Constant: '<S411>/Calib'
     */
    rtb_LessThanorEqual4_g = (HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrADrtngF
        < KeHMIR_k_MtrA_Drtng_Factor_Th3);

    /* Logic: '<S416>/Logical Operator2' incorporates:
     *  Constant: '<S410>/Calib'
     *  Constant: '<S411>/Calib'
     *  Logic: '<S416>/Logical Operator1'
     *  RelationalOperator: '<S416>/Less Than  or Equal2'
     *  RelationalOperator: '<S416>/Less Than  or Equal5'
     */
    rtb_LogicalOperator2_h =
        (((HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrADrtngF <
           KeHMIR_k_MtrA_Drtng_Factor_Th1) &&
          (HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrADrtngF >
           KeHMIR_k_MtrA_Drtng_Factor_Th3)) || (HMIR_ac_DW.UnitDelay_DSTATE_bc));

    /* Outputs for Atomic SubSystem: '<S416>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S444>/EdgeRising' */
    /* Logic: '<S465>/AND' incorporates:
     *  Logic: '<S465>/OR1'
     *  UnitDelay: '<S465>/Unit Delay'
     */
    rtb_AND_a = (rtb_Comparison17_f && (!HMIR_ac_DW.UnitDelay_DSTATE_ml));

    /* Update for UnitDelay: '<S465>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ml = rtb_Comparison17_f;

    /* End of Outputs for SubSystem: '<S444>/EdgeRising' */

    /* Switch: '<S444>/Switch1' incorporates:
     *  Logic: '<S444>/OR'
     *  Logic: '<S444>/OR1'
     */
    if ((!rtb_Comparison17_f) || rtb_AND_a)
    {
        /* Sum: '<S444>/Summation' incorporates:
         *  Constant: '<S444>/Constant Value1'
         *  Switch: '<S444>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_dw = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S444>/Summation' incorporates:
         *  Constant: '<S444>/Constant Value'
         *  UnitDelay: '<S444>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_dw = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_dw));

        /* MinMax: '<S444>/Minimum' incorporates:
         *  Constant: '<S440>/Calib'
         */
        if (KeHMIR_n_DerateOverSpeed_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_dw)
        {
            /* Sum: '<S444>/Summation' incorporates:
             *  Switch: '<S444>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_dw = KeHMIR_n_DerateOverSpeed_Dbnc;
        }

        /* End of MinMax: '<S444>/Minimum' */
    }

    /* End of Switch: '<S444>/Switch1' */

    /* Logic: '<S444>/AND' incorporates:
     *  Constant: '<S440>/Calib'
     *  RelationalOperator: '<S444>/Greater  Than'
     */
    HMIR_ac_B.AND_dk = (rtb_Comparison17_f && (HMIR_ac_DW.UnitDelay_DSTATE_dw >=
                         KeHMIR_n_DerateOverSpeed_Dbnc));

    /* End of Outputs for SubSystem: '<S416>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S416>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S445>/EdgeRising' */
    /* Logic: '<S466>/AND' incorporates:
     *  Logic: '<S466>/OR1'
     *  UnitDelay: '<S466>/Unit Delay'
     */
    rtb_Comparison17_f = (rtb_LogicalOperator2_h &&
                          (!HMIR_ac_DW.UnitDelay_DSTATE_nq));

    /* Update for UnitDelay: '<S466>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_nq = rtb_LogicalOperator2_h;

    /* End of Outputs for SubSystem: '<S445>/EdgeRising' */

    /* Switch: '<S445>/Switch1' incorporates:
     *  Logic: '<S445>/OR'
     *  Logic: '<S445>/OR1'
     */
    if ((!rtb_LogicalOperator2_h) || rtb_Comparison17_f)
    {
        /* Sum: '<S445>/Summation' incorporates:
         *  Constant: '<S445>/Constant Value1'
         *  Switch: '<S445>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ne = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S445>/Summation' incorporates:
         *  Constant: '<S445>/Constant Value'
         *  UnitDelay: '<S445>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ne = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_ne));

        /* MinMax: '<S445>/Minimum' incorporates:
         *  Constant: '<S414>/Calib'
         */
        if (KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc <
                HMIR_ac_DW.UnitDelay_DSTATE_ne)
        {
            /* Sum: '<S445>/Summation' incorporates:
             *  Switch: '<S445>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_ne =
                KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc;
        }

        /* End of MinMax: '<S445>/Minimum' */
    }

    /* End of Switch: '<S445>/Switch1' */

    /* VariantMerge generated from: '<S415>/DeratingFactor_Pop1' incorporates:
     *  Constant: '<S414>/Calib'
     *  Logic: '<S445>/AND'
     *  RelationalOperator: '<S445>/Greater  Than'
     */
    rtb_LogicalOperator2_h = (rtb_LogicalOperator2_h &&
        (HMIR_ac_DW.UnitDelay_DSTATE_ne >= KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc));

    /* End of Outputs for SubSystem: '<S416>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S416>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S446>/EdgeRising' */
    /* Logic: '<S467>/AND' incorporates:
     *  Logic: '<S467>/OR1'
     *  UnitDelay: '<S467>/Unit Delay'
     */
    rtb_Comparison17_f = ((VeHMIR_b_DerateReasonMtrA_VF) &&
                          (!HMIR_ac_DW.UnitDelay_DSTATE_a2a));

    /* Update for UnitDelay: '<S467>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_a2a = VeHMIR_b_DerateReasonMtrA_VF;

    /* End of Outputs for SubSystem: '<S446>/EdgeRising' */

    /* Switch: '<S446>/Switch1' incorporates:
     *  Logic: '<S446>/OR'
     *  Logic: '<S446>/OR1'
     */
    if ((!VeHMIR_b_DerateReasonMtrA_VF) || rtb_Comparison17_f)
    {
        /* Sum: '<S446>/Summation' incorporates:
         *  Constant: '<S446>/Constant Value1'
         *  Switch: '<S446>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_a3 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S446>/Summation' incorporates:
         *  Constant: '<S446>/Constant Value'
         *  UnitDelay: '<S446>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_a3 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_a3));

        /* MinMax: '<S446>/Minimum' incorporates:
         *  Constant: '<S414>/Calib'
         */
        if (KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc <
                HMIR_ac_DW.UnitDelay_DSTATE_a3)
        {
            /* Sum: '<S446>/Summation' incorporates:
             *  Switch: '<S446>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_a3 =
                KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc;
        }

        /* End of MinMax: '<S446>/Minimum' */
    }

    /* End of Switch: '<S446>/Switch1' */

    /* VariantMerge generated from: '<S415>/DerateReasons_Pop1' incorporates:
     *  Constant: '<S414>/Calib'
     *  Logic: '<S446>/AND'
     *  RelationalOperator: '<S446>/Greater  Than'
     */
    rtb_Comparison17_f = ((VeHMIR_b_DerateReasonMtrA_VF) &&
                          (HMIR_ac_DW.UnitDelay_DSTATE_a3 >=
                           KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc));

    /* End of Outputs for SubSystem: '<S416>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S416>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S447>/EdgeRising' */
    /* Logic: '<S468>/AND' incorporates:
     *  Logic: '<S468>/OR1'
     *  UnitDelay: '<S468>/Unit Delay'
     */
    rtb_AND_a = (rtb_LessThanorEqual4_g && (!HMIR_ac_DW.UnitDelay_DSTATE_e2));

    /* Update for UnitDelay: '<S468>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_e2 = rtb_LessThanorEqual4_g;

    /* End of Outputs for SubSystem: '<S447>/EdgeRising' */

    /* Switch: '<S447>/Switch1' incorporates:
     *  Logic: '<S447>/OR'
     *  Logic: '<S447>/OR1'
     */
    if ((!rtb_LessThanorEqual4_g) || rtb_AND_a)
    {
        /* Sum: '<S447>/Summation' incorporates:
         *  Constant: '<S447>/Constant Value1'
         *  Switch: '<S447>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_bd = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S447>/Summation' incorporates:
         *  Constant: '<S447>/Constant Value'
         *  UnitDelay: '<S447>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_bd = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_bd));

        /* MinMax: '<S447>/Minimum' incorporates:
         *  Constant: '<S414>/Calib'
         */
        if (KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc <
                HMIR_ac_DW.UnitDelay_DSTATE_bd)
        {
            /* Sum: '<S447>/Summation' incorporates:
             *  Switch: '<S447>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_bd =
                KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc;
        }

        /* End of MinMax: '<S447>/Minimum' */
    }

    /* End of Switch: '<S447>/Switch1' */

    /* VariantMerge generated from: '<S415>/DeratingFactor_Pop9' incorporates:
     *  Constant: '<S414>/Calib'
     *  Logic: '<S447>/AND'
     *  RelationalOperator: '<S447>/Greater  Than'
     */
    rtb_LessThanorEqual4_g = (rtb_LessThanorEqual4_g &&
        (HMIR_ac_DW.UnitDelay_DSTATE_bd >= KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc));

    /* End of Outputs for SubSystem: '<S416>/Turn On Delay Sample3' */

    /* Outputs for Atomic SubSystem: '<S416>/Turn On Delay Sample4' */
    /* Outputs for Atomic SubSystem: '<S448>/EdgeRising' */
    /* Logic: '<S469>/AND' incorporates:
     *  Logic: '<S469>/OR1'
     *  UnitDelay: '<S469>/Unit Delay'
     */
    rtb_AND_a = (rtb_Comparison18_a && (!HMIR_ac_DW.UnitDelay_DSTATE_js));

    /* Update for UnitDelay: '<S469>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_js = rtb_Comparison18_a;

    /* End of Outputs for SubSystem: '<S448>/EdgeRising' */

    /* Switch: '<S448>/Switch1' incorporates:
     *  Logic: '<S448>/OR'
     *  Logic: '<S448>/OR1'
     */
    if ((!rtb_Comparison18_a) || rtb_AND_a)
    {
        /* Sum: '<S448>/Summation' incorporates:
         *  Constant: '<S448>/Constant Value1'
         *  Switch: '<S448>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gx = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S448>/Summation' incorporates:
         *  Constant: '<S448>/Constant Value'
         *  UnitDelay: '<S448>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gx = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_gx));

        /* MinMax: '<S448>/Minimum' incorporates:
         *  Constant: '<S439>/Calib'
         */
        if (KeHMIR_n_DerateOverHeated_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_gx)
        {
            /* Sum: '<S448>/Summation' incorporates:
             *  Switch: '<S448>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_gx = KeHMIR_n_DerateOverHeated_Dbnc;
        }

        /* End of MinMax: '<S448>/Minimum' */
    }

    /* End of Switch: '<S448>/Switch1' */

    /* Logic: '<S448>/AND' incorporates:
     *  Constant: '<S439>/Calib'
     *  RelationalOperator: '<S448>/Greater  Than'
     */
    HMIR_ac_B.AND_dh = (rtb_Comparison18_a && (HMIR_ac_DW.UnitDelay_DSTATE_gx >=
                         KeHMIR_n_DerateOverHeated_Dbnc));

    /* End of Outputs for SubSystem: '<S416>/Turn On Delay Sample4' */
    /* End of Outputs for SubSystem: '<S415>/Subsystem' */
#elif Rte_SysCon_Variant_HMIR_5

    /* Outputs for Atomic SubSystem: '<S415>/Subsystem1' */
    /* RelationalOperator: '<S417>/Comparison1' incorporates:
     *  RelationalOperator: '<S417>/Comparison'
     *  RelationalOperator: '<S417>/Comparison10'
     *  RelationalOperator: '<S417>/Comparison11'
     *  RelationalOperator: '<S417>/Comparison12'
     *  RelationalOperator: '<S417>/Comparison13'
     *  RelationalOperator: '<S417>/Comparison14'
     *  RelationalOperator: '<S417>/Comparison15'
     *  RelationalOperator: '<S417>/Comparison2'
     *  RelationalOperator: '<S417>/Comparison3'
     *  RelationalOperator: '<S417>/Comparison4'
     *  RelationalOperator: '<S417>/Comparison5'
     *  RelationalOperator: '<S417>/Comparison6'
     *  RelationalOperator: '<S417>/Comparison7'
     *  RelationalOperator: '<S417>/Comparison8'
     *  RelationalOperator: '<S417>/Comparison9'
     *  SignalConversion generated from: '<S5>/VeINVR_e_MtrA_DrtRsn'
     */
    tmp = HMIR_ac_B.TmpSignalConversionAtVeINVR_e_MtrA_DrtRs;

    /* Switch: '<S470>/Switch1' incorporates:
     *  Constant: '<S472>/Constant'
     *  Constant: '<S483>/Constant'
     *  RelationalOperator: '<S417>/Comparison'
     *  RelationalOperator: '<S417>/Comparison1'
     *  Switch: '<S470>/Switch'
     */
    if (tmp == CeINVR_e_DerateReason2)
    {
        /* Switch: '<S470>/Switch' incorporates:
         *  Constant: '<S470>/Constant Value'
         *  Constant: '<S483>/Constant'
         *  RelationalOperator: '<S417>/Comparison'
         */
        if (tmp == CeINVR_e_DerateReason1)
        {
            rtb_Switch1_bj = HMIR_ac_ConstB.FixPtBitwiseOperator1;
        }
        else
        {
            rtb_Switch1_bj = ((uint16)0U);
        }

        /* Switch: '<S470>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S510>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn = (uint16)(rtb_Switch1_bj | ((uint16)2U));
    }
    else if (tmp == CeINVR_e_DerateReason1)
    {
        /* Switch: '<S470>/Switch' incorporates:
         *  Switch: '<S470>/Switch1'
         */
        rtb_Switch1_mn = HMIR_ac_ConstB.FixPtBitwiseOperator1;
    }
    else
    {
        /* Switch: '<S470>/Switch1' incorporates:
         *  Constant: '<S470>/Constant Value'
         *  Switch: '<S470>/Switch'
         */
        rtb_Switch1_mn = ((uint16)0U);
    }

    /* End of Switch: '<S470>/Switch1' */

    /* Switch: '<S470>/Switch2' incorporates:
     *  Constant: '<S498>/Constant'
     *  RelationalOperator: '<S417>/Comparison2'
     */
    if (tmp == CeINVR_e_DerateReason3)
    {
        /* Switch: '<S470>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S517>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)4U);
    }

    /* End of Switch: '<S470>/Switch2' */

    /* Switch: '<S470>/Switch3' incorporates:
     *  Constant: '<S494>/Constant'
     *  RelationalOperator: '<S417>/Comparison3'
     */
    if (tmp == CeINVR_e_DerateReason4)
    {
        /* Switch: '<S470>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S518>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)8U);
    }

    /* End of Switch: '<S470>/Switch3' */

    /* Switch: '<S470>/Switch4' incorporates:
     *  Constant: '<S499>/Constant'
     *  RelationalOperator: '<S417>/Comparison4'
     */
    if (tmp == CeINVR_e_DerateReason5)
    {
        /* Switch: '<S470>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)16U);
    }

    /* End of Switch: '<S470>/Switch4' */

    /* Switch: '<S470>/Switch12' incorporates:
     *  Constant: '<S500>/Constant'
     *  RelationalOperator: '<S417>/Comparison5'
     */
    if (tmp == CeINVR_e_DerateReason6)
    {
        /* Switch: '<S470>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S513>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)32U);
    }

    /* End of Switch: '<S470>/Switch12' */

    /* Switch: '<S470>/Switch5' incorporates:
     *  Constant: '<S501>/Constant'
     *  RelationalOperator: '<S417>/Comparison6'
     */
    if (tmp == CeINVR_e_DerateReason7)
    {
        /* Switch: '<S470>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S520>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)64U);
    }

    /* End of Switch: '<S470>/Switch5' */

    /* Switch: '<S470>/Switch6' incorporates:
     *  Constant: '<S502>/Constant'
     *  RelationalOperator: '<S417>/Comparison7'
     */
    if (tmp == CeINVR_e_DerateReason8)
    {
        /* Switch: '<S470>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S521>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)128U);
    }

    /* End of Switch: '<S470>/Switch6' */

    /* Switch: '<S470>/Switch7' incorporates:
     *  Constant: '<S503>/Constant'
     *  RelationalOperator: '<S417>/Comparison8'
     */
    if (tmp == CeINVR_e_DerateReason9)
    {
        /* Switch: '<S470>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S522>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)256U);
    }

    /* End of Switch: '<S470>/Switch7' */

    /* Switch: '<S470>/Switch8' incorporates:
     *  Constant: '<S473>/Constant'
     *  RelationalOperator: '<S417>/Comparison9'
     */
    if (tmp == CeINVR_e_DerateReason10)
    {
        /* Switch: '<S470>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S523>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)512U);
    }

    /* End of Switch: '<S470>/Switch8' */

    /* Switch: '<S470>/Switch10' incorporates:
     *  Constant: '<S474>/Constant'
     *  RelationalOperator: '<S417>/Comparison10'
     */
    if (tmp == CeINVR_e_DerateReason11)
    {
        /* Switch: '<S470>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S511>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)1024U);
    }

    /* End of Switch: '<S470>/Switch10' */

    /* Switch: '<S470>/Switch11' incorporates:
     *  Constant: '<S475>/Constant'
     *  RelationalOperator: '<S417>/Comparison11'
     */
    if (tmp == CeINVR_e_DerateReason12)
    {
        /* Switch: '<S470>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S512>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)2048U);
    }

    /* End of Switch: '<S470>/Switch11' */

    /* Switch: '<S470>/Switch13' incorporates:
     *  Constant: '<S476>/Constant'
     *  RelationalOperator: '<S417>/Comparison12'
     */
    if (tmp == CeINVR_e_DerateReason13)
    {
        /* Switch: '<S470>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S514>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)4096U);
    }

    /* End of Switch: '<S470>/Switch13' */

    /* Switch: '<S470>/Switch9' incorporates:
     *  Constant: '<S477>/Constant'
     *  RelationalOperator: '<S417>/Comparison13'
     */
    if (tmp == CeINVR_e_DerateReason14)
    {
        /* Switch: '<S470>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S524>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)8192U);
    }

    /* End of Switch: '<S470>/Switch9' */

    /* Switch: '<S470>/Switch14' incorporates:
     *  Constant: '<S478>/Constant'
     *  RelationalOperator: '<S417>/Comparison14'
     */
    if (tmp == CeINVR_e_DerateReason15)
    {
        /* Switch: '<S470>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S515>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_mn |= ((uint16)16384U);
    }

    /* End of Switch: '<S470>/Switch14' */

    /* RelationalOperator: '<S417>/Comparison18' incorporates:
     *  RelationalOperator: '<S417>/Comparison17'
     *  RelationalOperator: '<S417>/Comparison19'
     *  RelationalOperator: '<S417>/Comparison20'
     *  RelationalOperator: '<S417>/Comparison21'
     *  RelationalOperator: '<S417>/Comparison22'
     *  RelationalOperator: '<S417>/Comparison23'
     *  RelationalOperator: '<S417>/Comparison24'
     *  RelationalOperator: '<S417>/Comparison25'
     *  RelationalOperator: '<S417>/Comparison26'
     *  RelationalOperator: '<S417>/Comparison27'
     *  RelationalOperator: '<S417>/Comparison28'
     *  RelationalOperator: '<S417>/Comparison29'
     *  RelationalOperator: '<S417>/Comparison30'
     *  RelationalOperator: '<S417>/Comparison31'
     *  RelationalOperator: '<S417>/Comparison32'
     *  SignalConversion generated from: '<S5>/VeINVR_e_MtrB_DrtRsn'
     */
    tmp_0 = HMIR_ac_B.TmpSignalConversionAtVeINVR_e_MtrB_DrtRs;

    /* Switch: '<S471>/Switch1' incorporates:
     *  Constant: '<S472>/Constant'
     *  Constant: '<S489>/Constant'
     *  RelationalOperator: '<S417>/Comparison1'
     *  RelationalOperator: '<S417>/Comparison17'
     *  RelationalOperator: '<S417>/Comparison18'
     *  Switch: '<S471>/Switch'
     */
    if (tmp_0 == CeINVR_e_DerateReason2)
    {
        /* Switch: '<S471>/Switch' incorporates:
         *  Constant: '<S471>/Constant Value'
         *  Constant: '<S489>/Constant'
         *  RelationalOperator: '<S417>/Comparison17'
         */
        if (tmp_0 == CeINVR_e_DerateReason1)
        {
            rtb_Switch1_bj = HMIR_ac_ConstB.FixPtBitwiseOperator1_g;
        }
        else
        {
            rtb_Switch1_bj = ((uint16)0U);
        }

        /* Switch: '<S471>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S526>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)2U);
    }
    else if (tmp_0 == CeINVR_e_DerateReason1)
    {
        /* Switch: '<S471>/Switch' incorporates:
         *  Switch: '<S471>/Switch1'
         */
        rtb_Switch1_bj = HMIR_ac_ConstB.FixPtBitwiseOperator1_g;
    }
    else
    {
        /* Switch: '<S471>/Switch1' incorporates:
         *  Constant: '<S471>/Constant Value'
         *  Switch: '<S471>/Switch'
         */
        rtb_Switch1_bj = ((uint16)0U);
    }

    /* End of Switch: '<S471>/Switch1' */

    /* Switch: '<S471>/Switch2' incorporates:
     *  RelationalOperator: '<S417>/Comparison25'
     */
    if (tmp_0 == CeINVR_e_DerateReason3)
    {
        /* Switch: '<S471>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S533>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)4U);
    }

    /* End of Switch: '<S471>/Switch2' */

    /* Switch: '<S471>/Switch3' incorporates:
     *  RelationalOperator: '<S417>/Comparison26'
     */
    if (tmp_0 == CeINVR_e_DerateReason4)
    {
        /* Switch: '<S471>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S534>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)8U);
    }

    /* End of Switch: '<S471>/Switch3' */

    /* Switch: '<S471>/Switch4' incorporates:
     *  RelationalOperator: '<S417>/Comparison27'
     */
    if (tmp_0 == CeINVR_e_DerateReason5)
    {
        /* Switch: '<S471>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S535>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)16U);
    }

    /* End of Switch: '<S471>/Switch4' */

    /* Switch: '<S471>/Switch12' incorporates:
     *  RelationalOperator: '<S417>/Comparison28'
     */
    if (tmp_0 == CeINVR_e_DerateReason6)
    {
        /* Switch: '<S471>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S529>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)32U);
    }

    /* End of Switch: '<S471>/Switch12' */

    /* Switch: '<S471>/Switch5' incorporates:
     *  RelationalOperator: '<S417>/Comparison29'
     */
    if (tmp_0 == CeINVR_e_DerateReason7)
    {
        /* Switch: '<S471>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S536>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)64U);
    }

    /* End of Switch: '<S471>/Switch5' */

    /* Switch: '<S471>/Switch6' incorporates:
     *  RelationalOperator: '<S417>/Comparison30'
     */
    if (tmp_0 == CeINVR_e_DerateReason8)
    {
        /* Switch: '<S471>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S537>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)128U);
    }

    /* End of Switch: '<S471>/Switch6' */

    /* Switch: '<S471>/Switch7' incorporates:
     *  RelationalOperator: '<S417>/Comparison31'
     */
    if (tmp_0 == CeINVR_e_DerateReason9)
    {
        /* Switch: '<S471>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S538>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)256U);
    }

    /* End of Switch: '<S471>/Switch7' */

    /* Switch: '<S471>/Switch8' incorporates:
     *  RelationalOperator: '<S417>/Comparison32'
     */
    if (tmp_0 == CeINVR_e_DerateReason10)
    {
        /* Switch: '<S471>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S539>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)512U);
    }

    /* End of Switch: '<S471>/Switch8' */

    /* Switch: '<S471>/Switch10' incorporates:
     *  RelationalOperator: '<S417>/Comparison19'
     */
    if (tmp_0 == CeINVR_e_DerateReason11)
    {
        /* Switch: '<S471>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S527>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)1024U);
    }

    /* End of Switch: '<S471>/Switch10' */

    /* Switch: '<S471>/Switch11' incorporates:
     *  RelationalOperator: '<S417>/Comparison20'
     */
    if (tmp_0 == CeINVR_e_DerateReason12)
    {
        /* Switch: '<S471>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S528>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)2048U);
    }

    /* End of Switch: '<S471>/Switch11' */

    /* Switch: '<S471>/Switch13' incorporates:
     *  RelationalOperator: '<S417>/Comparison21'
     */
    if (tmp_0 == CeINVR_e_DerateReason13)
    {
        /* Switch: '<S471>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S530>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)4096U);
    }

    /* End of Switch: '<S471>/Switch13' */

    /* Switch: '<S471>/Switch9' incorporates:
     *  RelationalOperator: '<S417>/Comparison22'
     */
    if (tmp_0 == CeINVR_e_DerateReason14)
    {
        /* Switch: '<S471>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S540>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)8192U);
    }

    /* End of Switch: '<S471>/Switch9' */

    /* Switch: '<S471>/Switch14' incorporates:
     *  RelationalOperator: '<S417>/Comparison23'
     */
    if (tmp_0 == CeINVR_e_DerateReason15)
    {
        /* Switch: '<S471>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S531>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_bj |= ((uint16)16384U);
    }

    /* End of Switch: '<S471>/Switch14' */

    /* Switch: '<S470>/Switch15' incorporates:
     *  Constant: '<S479>/Constant'
     *  RelationalOperator: '<S417>/Comparison15'
     *  S-Function (sfix_bitop): '<S417>/Bitwise Logical Operator2'
     *  S-Function (sfix_bitop): '<S516>/FixPt Bitwise Operator1'
     */
    if (tmp == CeINVR_e_DerateReason16)
    {
        rtb_Switch1_mn |= ((uint16)32768U);
    }

    /* End of Switch: '<S470>/Switch15' */

    /* RelationalOperator: '<S417>/Comparison16' incorporates:
     *  Constant: '<S417>/Constant Value10'
     *  Constant: '<S504>/Calib'
     *  S-Function (sfix_bitop): '<S417>/Bitwise Logical Operator1'
     */
    VeHMIR_b_DerateReasonMtrA = (((uint32)((sint32)(((sint32)rtb_Switch1_mn) &
        ((sint32)KeHMIR_y_DerateRsnMtrA)))) > ((uint32)((uint8)0U)));

    /* Switch: '<S471>/Switch15' incorporates:
     *  Constant: '<S479>/Constant'
     *  RelationalOperator: '<S417>/Comparison15'
     *  RelationalOperator: '<S417>/Comparison24'
     *  S-Function (sfix_bitop): '<S532>/FixPt Bitwise Operator1'
     */
    if (tmp_0 == CeINVR_e_DerateReason16)
    {
        rtb_Switch1_bj |= ((uint16)32768U);
    }

    /* End of Switch: '<S471>/Switch15' */

    /* RelationalOperator: '<S417>/Comparison33' incorporates:
     *  Constant: '<S417>/Constant Value1'
     *  Constant: '<S505>/Calib'
     *  S-Function (sfix_bitop): '<S417>/Bitwise Logical Operator2'
     */
    VeHMIR_b_DerateReasonMtrB = (((uint32)((sint32)(((sint32)rtb_Switch1_bj) &
        ((sint32)KeHMIR_y_DerateRsnMtrB)))) > ((uint32)((uint8)0U)));

    /* Logic: '<S417>/Logical Operator2' incorporates:
     *  Constant: '<S410>/Calib'
     *  Constant: '<S411>/Calib'
     *  Constant: '<S412>/Calib'
     *  Constant: '<S413>/Calib'
     *  Logic: '<S417>/Logical Operator1'
     *  Logic: '<S417>/Logical Operator3'
     *  RelationalOperator: '<S417>/Less Than  or Equal1'
     *  RelationalOperator: '<S417>/Less Than  or Equal3'
     *  RelationalOperator: '<S417>/Less Than  or Equal6'
     *  RelationalOperator: '<S417>/Less Than  or Equal7'
     */
    rtb_LogicalOperator2_h =
        (((HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrADrtngF <
           KeHMIR_k_MtrA_Drtng_Factor_Th1) &&
          (HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrADrtngF >
           KeHMIR_k_MtrA_Drtng_Factor_Th3)) ||
         ((HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrBDrtngF <
           KeHMIR_k_MtrB_Drtng_Factor_Th1) &&
          (HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrBDrtngF >
           KeHMIR_k_MtrB_Drtng_Factor_Th3)));

    /* Logic: '<S417>/Logical Operator4' */
    rtb_Comparison17_f = ((VeHMIR_b_DerateReasonMtrA) ||
                          (VeHMIR_b_DerateReasonMtrB));

    /* Logic: '<S417>/Logical Operator6' incorporates:
     *  Constant: '<S411>/Calib'
     *  Constant: '<S413>/Calib'
     *  RelationalOperator: '<S417>/Less Than  or Equal4'
     *  RelationalOperator: '<S417>/Less Than  or Equal5'
     */
    rtb_LessThanorEqual4_g =
        ((HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrADrtngF <
          KeHMIR_k_MtrA_Drtng_Factor_Th3) ||
         (HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrBDrtngF <
          KeHMIR_k_MtrB_Drtng_Factor_Th3));

    /* Outputs for Atomic SubSystem: '<S417>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S506>/EdgeRising' */
    /* Logic: '<S541>/AND' incorporates:
     *  Logic: '<S541>/OR1'
     *  UnitDelay: '<S541>/Unit Delay'
     */
    rtb_Comparison18_a = (rtb_LogicalOperator2_h &&
                          (!HMIR_ac_DW.UnitDelay_DSTATE_iq));

    /* Update for UnitDelay: '<S541>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_iq = rtb_LogicalOperator2_h;

    /* End of Outputs for SubSystem: '<S506>/EdgeRising' */

    /* Switch: '<S506>/Switch1' incorporates:
     *  Logic: '<S506>/OR'
     *  Logic: '<S506>/OR1'
     */
    if ((!rtb_LogicalOperator2_h) || rtb_Comparison18_a)
    {
        /* Sum: '<S506>/Summation' incorporates:
         *  Constant: '<S506>/Constant Value1'
         *  Switch: '<S506>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_o3 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S506>/Summation' incorporates:
         *  Constant: '<S506>/Constant Value'
         *  UnitDelay: '<S506>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_o3 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_o3));

        /* MinMax: '<S506>/Minimum' incorporates:
         *  Constant: '<S414>/Calib'
         */
        if (KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc <
                HMIR_ac_DW.UnitDelay_DSTATE_o3)
        {
            /* Sum: '<S506>/Summation' incorporates:
             *  Switch: '<S506>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_o3 =
                KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc;
        }

        /* End of MinMax: '<S506>/Minimum' */
    }

    /* End of Switch: '<S506>/Switch1' */

    /* VariantMerge generated from: '<S415>/DeratingFactor_Pop1' incorporates:
     *  Constant: '<S414>/Calib'
     *  Logic: '<S506>/AND'
     *  RelationalOperator: '<S506>/Greater  Than'
     */
    rtb_LogicalOperator2_h = (rtb_LogicalOperator2_h &&
        (HMIR_ac_DW.UnitDelay_DSTATE_o3 >= KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc));

    /* End of Outputs for SubSystem: '<S417>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S417>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S507>/EdgeRising' */
    /* Logic: '<S542>/AND' incorporates:
     *  Logic: '<S542>/OR1'
     *  UnitDelay: '<S542>/Unit Delay'
     */
    rtb_Comparison18_a = (rtb_Comparison17_f &&
                          (!HMIR_ac_DW.UnitDelay_DSTATE_bgr));

    /* Update for UnitDelay: '<S542>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_bgr = rtb_Comparison17_f;

    /* End of Outputs for SubSystem: '<S507>/EdgeRising' */

    /* Switch: '<S507>/Switch1' incorporates:
     *  Logic: '<S507>/OR'
     *  Logic: '<S507>/OR1'
     */
    if ((!rtb_Comparison17_f) || rtb_Comparison18_a)
    {
        /* Sum: '<S507>/Summation' incorporates:
         *  Constant: '<S507>/Constant Value1'
         *  Switch: '<S507>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_g10 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S507>/Summation' incorporates:
         *  Constant: '<S507>/Constant Value'
         *  UnitDelay: '<S507>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_g10 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_g10));

        /* MinMax: '<S507>/Minimum' incorporates:
         *  Constant: '<S414>/Calib'
         */
        if (KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc <
                HMIR_ac_DW.UnitDelay_DSTATE_g10)
        {
            /* Sum: '<S507>/Summation' incorporates:
             *  Switch: '<S507>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_g10 =
                KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc;
        }

        /* End of MinMax: '<S507>/Minimum' */
    }

    /* End of Switch: '<S507>/Switch1' */

    /* VariantMerge generated from: '<S415>/DerateReasons_Pop1' incorporates:
     *  Constant: '<S414>/Calib'
     *  Logic: '<S507>/AND'
     *  RelationalOperator: '<S507>/Greater  Than'
     */
    rtb_Comparison17_f = (rtb_Comparison17_f && (HMIR_ac_DW.UnitDelay_DSTATE_g10
                           >= KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc));

    /* End of Outputs for SubSystem: '<S417>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S417>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S508>/EdgeRising' */
    /* Logic: '<S543>/AND' incorporates:
     *  Logic: '<S543>/OR1'
     *  UnitDelay: '<S543>/Unit Delay'
     */
    rtb_Comparison18_a = (rtb_LessThanorEqual4_g &&
                          (!HMIR_ac_DW.UnitDelay_DSTATE_d5));

    /* Update for UnitDelay: '<S543>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_d5 = rtb_LessThanorEqual4_g;

    /* End of Outputs for SubSystem: '<S508>/EdgeRising' */

    /* Switch: '<S508>/Switch1' incorporates:
     *  Logic: '<S508>/OR'
     *  Logic: '<S508>/OR1'
     */
    if ((!rtb_LessThanorEqual4_g) || rtb_Comparison18_a)
    {
        /* Sum: '<S508>/Summation' incorporates:
         *  Constant: '<S508>/Constant Value1'
         *  Switch: '<S508>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_op = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S508>/Summation' incorporates:
         *  Constant: '<S508>/Constant Value'
         *  UnitDelay: '<S508>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_op = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_op));

        /* MinMax: '<S508>/Minimum' incorporates:
         *  Constant: '<S414>/Calib'
         */
        if (KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc <
                HMIR_ac_DW.UnitDelay_DSTATE_op)
        {
            /* Sum: '<S508>/Summation' incorporates:
             *  Switch: '<S508>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_op =
                KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc;
        }

        /* End of MinMax: '<S508>/Minimum' */
    }

    /* End of Switch: '<S508>/Switch1' */

    /* VariantMerge generated from: '<S415>/DeratingFactor_Pop9' incorporates:
     *  Constant: '<S414>/Calib'
     *  Logic: '<S508>/AND'
     *  RelationalOperator: '<S508>/Greater  Than'
     */
    rtb_LessThanorEqual4_g = (rtb_LessThanorEqual4_g &&
        (HMIR_ac_DW.UnitDelay_DSTATE_op >= KeHMIR_n_Derate_Propulsion_Lmtd_Dbnc));

    /* End of Outputs for SubSystem: '<S417>/Turn On Delay Sample3' */
    /* End of Outputs for SubSystem: '<S415>/Subsystem1' */
#else

    /* Outputs for Atomic SubSystem: '<S415>/Subsystem2' */
    /* VariantMerge generated from: '<S415>/DeratingFactor_Pop1' incorporates:
     *  Constant: '<S418>/FALSE Constant1'
     */
    rtb_LogicalOperator2_h = false;

    /* VariantMerge generated from: '<S415>/DeratingFactor_Pop9' incorporates:
     *  Constant: '<S418>/FALSE Constant2'
     */
    rtb_LessThanorEqual4_g = false;

    /* VariantMerge generated from: '<S415>/DerateReasons_Pop1' incorporates:
     *  Constant: '<S418>/FALSE Constant4'
     */
    rtb_Comparison17_f = false;

    /* End of Outputs for SubSystem: '<S415>/Subsystem2' */
#endif

    /* End of Outputs for SubSystem: '<S370>/Variant Subsystem' */

    /* Inport: '<Root>/VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly' */
    (void)Rte_Read_VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly_Value
        (&rtb_UnitDelay_ka);

    /* Inport: '<Root>/VeSRAR_b_EngStrtStpEngShtDwnIntm' */
    (void)Rte_Read_VeSRAR_b_EngStrtStpEngShtDwnIntm_Value(&rtb_Logical);

    /* Inport: '<Root>/VePWDR_e_HVOverVoltFailure' */
    (void)Rte_Read_VePWDR_e_HVOverVoltFailure_Value(&tmpRead_k);

    /* RelationalOperator: '<S378>/Less Than  or Equal2' incorporates:
     *  Constant: '<S622>/Constant'
     *  Inport: '<Root>/VePWDR_e_HVOverVoltFailure'
     */
    rtb_Comparison18_a = (tmpRead_k == CeHVTR_e_HVOverVoltFailureLimVehicleSpd);

    /* UnitDelay: '<S740>/Unit Delay' incorporates:
     *  Logic: '<S378>/Logical2'
     */
    rtb_UnitDelay_ka = !rtb_UnitDelay_ka;

    /* Logic: '<S378>/Logical' incorporates:
     *  Constant: '<S638>/Calib'
     */
    rtb_Logical = (((KeHMIR_b_EngStrtStpEngShtDwnIntmEnbl) && rtb_Logical) &&
                   rtb_UnitDelay_ka);

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample6' */
    /* Outputs for Atomic SubSystem: '<S699>/EdgeRising' */
    /* Logic: '<S737>/AND' incorporates:
     *  Logic: '<S737>/OR1'
     *  UnitDelay: '<S737>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeGENR_b_LowVoltSys) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_py));

    /* Update for UnitDelay: '<S737>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_py =
        HMIR_ac_B.TmpSignalConversionAtVeGENR_b_LowVoltSys;

    /* End of Outputs for SubSystem: '<S699>/EdgeRising' */

    /* Switch: '<S699>/Switch1' incorporates:
     *  Logic: '<S699>/OR'
     *  Logic: '<S699>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeGENR_b_LowVoltSys) || rtb_AND_a)
    {
        /* Sum: '<S699>/Summation' incorporates:
         *  Constant: '<S699>/Constant Value1'
         *  Switch: '<S699>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_d0 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S699>/Summation' incorporates:
         *  Constant: '<S699>/Constant Value'
         *  UnitDelay: '<S699>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_d0 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_d0));

        /* MinMax: '<S699>/Minimum' incorporates:
         *  Constant: '<S654>/Calib'
         */
        if (KeHMIR_n_LowVoltSysFld_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_d0)
        {
            /* Sum: '<S699>/Summation' incorporates:
             *  Switch: '<S699>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_d0 = KeHMIR_n_LowVoltSysFld_Dbnc;
        }

        /* End of MinMax: '<S699>/Minimum' */
    }

    /* End of Switch: '<S699>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample6' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample5' */
    /* Outputs for Atomic SubSystem: '<S698>/EdgeRising' */
    /* Logic: '<S736>/AND' incorporates:
     *  Logic: '<S736>/OR1'
     *  UnitDelay: '<S736>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_HybPwrtrnR) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_pa));

    /* Update for UnitDelay: '<S736>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_pa =
        HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_HybPwrtrnR;

    /* End of Outputs for SubSystem: '<S698>/EdgeRising' */

    /* Switch: '<S698>/Switch1' incorporates:
     *  Logic: '<S698>/OR'
     *  Logic: '<S698>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_HybPwrtrnR) || rtb_AND_a)
    {
        /* Sum: '<S698>/Summation' incorporates:
         *  Constant: '<S698>/Constant Value1'
         *  Switch: '<S698>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_i = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S698>/Summation' incorporates:
         *  Constant: '<S698>/Constant Value'
         *  UnitDelay: '<S698>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_i = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_i));

        /* MinMax: '<S698>/Minimum' incorporates:
         *  Constant: '<S652>/Calib'
         */
        if (KeHMIR_n_HybPwrtrnRdcdPerfCmnd_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_i)
        {
            /* Sum: '<S698>/Summation' incorporates:
             *  Switch: '<S698>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_i = KeHMIR_n_HybPwrtrnRdcdPerfCmnd_Dbnc;
        }

        /* End of MinMax: '<S698>/Minimum' */
    }

    /* End of Switch: '<S698>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample5' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample4' */
    /* Outputs for Atomic SubSystem: '<S697>/EdgeRising' */
    /* Logic: '<S735>/AND' incorporates:
     *  Logic: '<S735>/OR1'
     *  UnitDelay: '<S735>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeIMOR_b_EngDsbldTo) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_jc));

    /* Update for UnitDelay: '<S735>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jc =
        HMIR_ac_B.TmpSignalConversionAtVeIMOR_b_EngDsbldTo;

    /* End of Outputs for SubSystem: '<S697>/EdgeRising' */

    /* Switch: '<S697>/Switch1' incorporates:
     *  Logic: '<S697>/OR'
     *  Logic: '<S697>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeIMOR_b_EngDsbldTo) || rtb_AND_a)
    {
        /* Sum: '<S697>/Summation' incorporates:
         *  Constant: '<S697>/Constant Value1'
         *  Switch: '<S697>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ep = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S697>/Summation' incorporates:
         *  Constant: '<S697>/Constant Value'
         *  UnitDelay: '<S697>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ep = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_ep));

        /* MinMax: '<S697>/Minimum' incorporates:
         *  Constant: '<S645>/Calib'
         */
        if (KeHMIR_n_EngDsbldToIC_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_ep)
        {
            /* Sum: '<S697>/Summation' incorporates:
             *  Switch: '<S697>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_ep = KeHMIR_n_EngDsbldToIC_Dbnc;
        }

        /* End of MinMax: '<S697>/Minimum' */
    }

    /* End of Switch: '<S697>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample4' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S688>/EdgeRising' */
    /* Logic: '<S726>/AND' incorporates:
     *  Logic: '<S726>/OR1'
     *  UnitDelay: '<S726>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeENGR_b_EngSysLowF) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_at));

    /* Update for UnitDelay: '<S726>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_at =
        HMIR_ac_B.TmpSignalConversionAtVeENGR_b_EngSysLowF;

    /* End of Outputs for SubSystem: '<S688>/EdgeRising' */

    /* Switch: '<S688>/Switch1' incorporates:
     *  Logic: '<S688>/OR'
     *  Logic: '<S688>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeENGR_b_EngSysLowF) || rtb_AND_a)
    {
        /* Sum: '<S688>/Summation' incorporates:
         *  Constant: '<S688>/Constant Value1'
         *  Switch: '<S688>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_o5 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S688>/Summation' incorporates:
         *  Constant: '<S688>/Constant Value'
         *  UnitDelay: '<S688>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_o5 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_o5));

        /* MinMax: '<S688>/Minimum' incorporates:
         *  Constant: '<S648>/Calib'
         */
        if (KeHMIR_n_EngSysLowFuel_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_o5)
        {
            /* Sum: '<S688>/Summation' incorporates:
             *  Switch: '<S688>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_o5 = KeHMIR_n_EngSysLowFuel_Dbnc;
        }

        /* End of MinMax: '<S688>/Minimum' */
    }

    /* End of Switch: '<S688>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample3' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample11' */
    /* Outputs for Atomic SubSystem: '<S668>/EdgeRising' */
    /* Logic: '<S706>/AND' incorporates:
     *  Logic: '<S706>/OR1'
     *  UnitDelay: '<S706>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeESSR_b_AStrtFaile) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_fv));

    /* Update for UnitDelay: '<S706>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_fv =
        HMIR_ac_B.TmpSignalConversionAtVeESSR_b_AStrtFaile;

    /* End of Outputs for SubSystem: '<S668>/EdgeRising' */

    /* Switch: '<S668>/Switch1' incorporates:
     *  Logic: '<S668>/OR'
     *  Logic: '<S668>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeESSR_b_AStrtFaile) || rtb_AND_a)
    {
        /* Sum: '<S668>/Summation' incorporates:
         *  Constant: '<S668>/Constant Value1'
         *  Switch: '<S668>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_hp = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S668>/Summation' incorporates:
         *  Constant: '<S668>/Constant Value'
         *  UnitDelay: '<S668>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_hp = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_hp));

        /* MinMax: '<S668>/Minimum' incorporates:
         *  Constant: '<S640>/Calib'
         */
        if (KeHMIR_n_AStrtFailed_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_hp)
        {
            /* Sum: '<S668>/Summation' incorporates:
             *  Switch: '<S668>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_hp = KeHMIR_n_AStrtFailed_Dbnc;
        }

        /* End of MinMax: '<S668>/Minimum' */
    }

    /* End of Switch: '<S668>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample11' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample12' */
    /* Outputs for Atomic SubSystem: '<S669>/EdgeRising' */
    /* Logic: '<S707>/AND' incorporates:
     *  Logic: '<S707>/OR1'
     *  UnitDelay: '<S707>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_PwrLimONOu) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_ad));

    /* Update for UnitDelay: '<S707>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ad =
        HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_PwrLimONOu;

    /* End of Outputs for SubSystem: '<S669>/EdgeRising' */

    /* Switch: '<S669>/Switch1' incorporates:
     *  Logic: '<S669>/OR'
     *  Logic: '<S669>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_PwrLimONOu) || rtb_AND_a)
    {
        /* Sum: '<S669>/Summation' incorporates:
         *  Constant: '<S669>/Constant Value1'
         *  Switch: '<S669>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_iv = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S669>/Summation' incorporates:
         *  Constant: '<S669>/Constant Value'
         *  UnitDelay: '<S669>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_iv = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_iv));

        /* MinMax: '<S669>/Minimum' incorporates:
         *  Constant: '<S655>/Calib'
         */
        if (KeHMIR_n_PwrLimON_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_iv)
        {
            /* Sum: '<S669>/Summation' incorporates:
             *  Switch: '<S669>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_iv = KeHMIR_n_PwrLimON_Dbnc;
        }

        /* End of MinMax: '<S669>/Minimum' */
    }

    /* End of Switch: '<S669>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample12' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample13' */
    /* Outputs for Atomic SubSystem: '<S670>/EdgeRising' */
    /* Logic: '<S708>/AND' incorporates:
     *  Logic: '<S708>/OR1'
     *  UnitDelay: '<S708>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeESPR_b_EngNegSpdF) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_jiq));

    /* Update for UnitDelay: '<S708>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jiq =
        HMIR_ac_B.TmpSignalConversionAtVeESPR_b_EngNegSpdF;

    /* End of Outputs for SubSystem: '<S670>/EdgeRising' */

    /* Switch: '<S670>/Switch1' incorporates:
     *  Logic: '<S670>/OR'
     *  Logic: '<S670>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeESPR_b_EngNegSpdF) || rtb_AND_a)
    {
        /* Sum: '<S670>/Summation' incorporates:
         *  Constant: '<S670>/Constant Value1'
         *  Switch: '<S670>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gi0 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S670>/Summation' incorporates:
         *  Constant: '<S670>/Constant Value'
         *  UnitDelay: '<S670>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gi0 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_gi0));

        /* MinMax: '<S670>/Minimum' incorporates:
         *  Constant: '<S646>/Calib'
         */
        if (KeHMIR_n_EngNegSpdFltDtct_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_gi0)
        {
            /* Sum: '<S670>/Summation' incorporates:
             *  Switch: '<S670>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_gi0 = KeHMIR_n_EngNegSpdFltDtct_Dbnc;
        }

        /* End of MinMax: '<S670>/Minimum' */
    }

    /* End of Switch: '<S670>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample13' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample14' */
    /* Outputs for Atomic SubSystem: '<S671>/EdgeRising' */
    /* Logic: '<S709>/AND' incorporates:
     *  Logic: '<S709>/OR1'
     *  UnitDelay: '<S709>/Unit Delay'
     */
    rtb_AND_a = (rtb_Comparison18_a && (!HMIR_ac_DW.UnitDelay_DSTATE_d2));

    /* Update for UnitDelay: '<S709>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_d2 = rtb_Comparison18_a;

    /* End of Outputs for SubSystem: '<S671>/EdgeRising' */

    /* Switch: '<S671>/Switch1' incorporates:
     *  Logic: '<S671>/OR'
     *  Logic: '<S671>/OR1'
     */
    if ((!rtb_Comparison18_a) || rtb_AND_a)
    {
        /* Sum: '<S671>/Summation' incorporates:
         *  Constant: '<S671>/Constant Value1'
         *  Switch: '<S671>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_lx = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S671>/Summation' incorporates:
         *  Constant: '<S671>/Constant Value'
         *  UnitDelay: '<S671>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_lx = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_lx));

        /* MinMax: '<S671>/Minimum' incorporates:
         *  Constant: '<S650>/Calib'
         */
        if (KeHMIR_n_HVOverVoltFailure_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_lx)
        {
            /* Sum: '<S671>/Summation' incorporates:
             *  Switch: '<S671>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_lx = KeHMIR_n_HVOverVoltFailure_Dbnc;
        }

        /* End of MinMax: '<S671>/Minimum' */
    }

    /* End of Switch: '<S671>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample14' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample18' */
    /* Outputs for Atomic SubSystem: '<S675>/EdgeRising' */
    /* Logic: '<S713>/AND' incorporates:
     *  Logic: '<S713>/OR1'
     *  UnitDelay: '<S713>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_CreepTorqM) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_gb));

    /* Update for UnitDelay: '<S713>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gb =
        HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_CreepTorqM;

    /* End of Outputs for SubSystem: '<S675>/EdgeRising' */

    /* Switch: '<S675>/Switch1' incorporates:
     *  Logic: '<S675>/OR'
     *  Logic: '<S675>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_CreepTorqM) || rtb_AND_a)
    {
        /* Sum: '<S675>/Summation' incorporates:
         *  Constant: '<S675>/Constant Value1'
         *  Switch: '<S675>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ed = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S675>/Summation' incorporates:
         *  Constant: '<S675>/Constant Value'
         *  UnitDelay: '<S675>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ed = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_ed));

        /* MinMax: '<S675>/Minimum' incorporates:
         *  Constant: '<S643>/Calib'
         */
        if (KeHMIR_n_CreepTorqMode_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_ed)
        {
            /* Sum: '<S675>/Summation' incorporates:
             *  Switch: '<S675>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_ed = KeHMIR_n_CreepTorqMode_Dbnc;
        }

        /* End of MinMax: '<S675>/Minimum' */
    }

    /* End of Switch: '<S675>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample18' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample15' */
    /* Outputs for Atomic SubSystem: '<S672>/EdgeRising' */
    /* Logic: '<S710>/AND' incorporates:
     *  Logic: '<S710>/OR1'
     *  UnitDelay: '<S710>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_ReducedPer) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_i2));

    /* Update for UnitDelay: '<S710>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_i2 =
        HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_ReducedPer;

    /* End of Outputs for SubSystem: '<S672>/EdgeRising' */

    /* Switch: '<S672>/Switch1' incorporates:
     *  Logic: '<S672>/OR'
     *  Logic: '<S672>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_ReducedPer) || rtb_AND_a)
    {
        /* Sum: '<S672>/Summation' incorporates:
         *  Constant: '<S672>/Constant Value1'
         *  Switch: '<S672>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gi = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S672>/Summation' incorporates:
         *  Constant: '<S672>/Constant Value'
         *  UnitDelay: '<S672>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gi = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_gi));

        /* MinMax: '<S672>/Minimum' incorporates:
         *  Constant: '<S656>/Calib'
         */
        if (KeHMIR_n_ReducedPerfMode2_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_gi)
        {
            /* Sum: '<S672>/Summation' incorporates:
             *  Switch: '<S672>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_gi = KeHMIR_n_ReducedPerfMode2_Dbnc;
        }

        /* End of MinMax: '<S672>/Minimum' */
    }

    /* End of Switch: '<S672>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample15' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample16' */
    /* Outputs for Atomic SubSystem: '<S673>/EdgeRising' */
    /* Logic: '<S711>/AND' incorporates:
     *  Logic: '<S711>/OR1'
     *  UnitDelay: '<S711>/Unit Delay'
     */
    rtb_AND_a = ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_limitInput) &&
                 (!HMIR_ac_DW.UnitDelay_DSTATE_i3));

    /* Update for UnitDelay: '<S711>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_i3 =
        HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_limitInput;

    /* End of Outputs for SubSystem: '<S673>/EdgeRising' */

    /* Switch: '<S673>/Switch1' incorporates:
     *  Logic: '<S673>/OR'
     *  Logic: '<S673>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_limitInput) || rtb_AND_a)
    {
        /* Sum: '<S673>/Summation' incorporates:
         *  Constant: '<S673>/Constant Value1'
         *  Switch: '<S673>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_chf = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S673>/Summation' incorporates:
         *  Constant: '<S673>/Constant Value'
         *  UnitDelay: '<S673>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_chf = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_chf));

        /* MinMax: '<S673>/Minimum' incorporates:
         *  Constant: '<S660>/Calib'
         */
        if (KeHMIR_n_limitInputTrq_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_chf)
        {
            /* Sum: '<S673>/Summation' incorporates:
             *  Switch: '<S673>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_chf = KeHMIR_n_limitInputTrq_Dbnc;
        }

        /* End of MinMax: '<S673>/Minimum' */
    }

    /* End of Switch: '<S673>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample16' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample17' */
    /* Outputs for Atomic SubSystem: '<S674>/EdgeRising' */
    /* Logic: '<S712>/AND' incorporates:
     *  Logic: '<S712>/OR1'
     *  UnitDelay: '<S712>/Unit Delay'
     */
    rtb_AND_a = (rtb_Logical && (!HMIR_ac_DW.UnitDelay_DSTATE_a2w));

    /* Update for UnitDelay: '<S712>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_a2w = rtb_Logical;

    /* End of Outputs for SubSystem: '<S674>/EdgeRising' */

    /* Switch: '<S674>/Switch1' incorporates:
     *  Logic: '<S674>/OR'
     *  Logic: '<S674>/OR1'
     */
    if ((!rtb_Logical) || rtb_AND_a)
    {
        /* Sum: '<S674>/Summation' incorporates:
         *  Constant: '<S674>/Constant Value1'
         *  Switch: '<S674>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_co = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S674>/Summation' incorporates:
         *  Constant: '<S674>/Constant Value'
         *  UnitDelay: '<S674>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_co = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_co));

        /* MinMax: '<S674>/Minimum' incorporates:
         *  Constant: '<S647>/Calib'
         */
        if (KeHMIR_n_EngStrtStpEngShtDwn_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_co)
        {
            /* Sum: '<S674>/Summation' incorporates:
             *  Switch: '<S674>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_co = KeHMIR_n_EngStrtStpEngShtDwn_Dbnc;
        }

        /* End of MinMax: '<S674>/Minimum' */
    }

    /* End of Switch: '<S674>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample17' */

    /* Inport: '<Root>/VeSRAR_b_TempEngShtDwnEnbl' */
    (void)Rte_Read_VeSRAR_b_TempEngShtDwnEnbl_Value(&rtb_Logical1_d);

    /* Logic: '<S378>/Logical1' incorporates:
     *  Constant: '<S639>/Calib'
     */
    rtb_Logical1_d = (((KeHMIR_b_TempEngShtDwnEnbl) && rtb_Logical1_d) &&
                      rtb_UnitDelay_ka);

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample21' */
    /* Outputs for Atomic SubSystem: '<S679>/EdgeRising' */
    /* Logic: '<S717>/AND' incorporates:
     *  Logic: '<S717>/OR1'
     *  UnitDelay: '<S717>/Unit Delay'
     */
    rtb_UnitDelay_ka = (rtb_Logical1_d && (!HMIR_ac_DW.UnitDelay_DSTATE_gtr));

    /* Update for UnitDelay: '<S717>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gtr = rtb_Logical1_d;

    /* End of Outputs for SubSystem: '<S679>/EdgeRising' */

    /* Switch: '<S679>/Switch1' incorporates:
     *  Logic: '<S679>/OR'
     *  Logic: '<S679>/OR1'
     */
    if ((!rtb_Logical1_d) || rtb_UnitDelay_ka)
    {
        /* Sum: '<S679>/Summation' incorporates:
         *  Constant: '<S679>/Constant Value1'
         *  Switch: '<S679>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_cf = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S679>/Summation' incorporates:
         *  Constant: '<S679>/Constant Value'
         *  UnitDelay: '<S679>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_cf = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_cf));

        /* MinMax: '<S679>/Minimum' incorporates:
         *  Constant: '<S647>/Calib'
         */
        if (KeHMIR_n_EngStrtStpEngShtDwn_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_cf)
        {
            /* Sum: '<S679>/Summation' incorporates:
             *  Switch: '<S679>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_cf = KeHMIR_n_EngStrtStpEngShtDwn_Dbnc;
        }

        /* End of MinMax: '<S679>/Minimum' */
    }

    /* End of Switch: '<S679>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample21' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample29' */
    /* Outputs for Atomic SubSystem: '<S687>/EdgeRising' */
    /* Logic: '<S725>/AND' incorporates:
     *  Logic: '<S725>/OR1'
     *  UnitDelay: '<S725>/Unit Delay'
     */
    rtb_UnitDelay_ka = ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Veh_Spd_Lm) &&
                        (!HMIR_ac_DW.UnitDelay_DSTATE_p1));

    /* Update for UnitDelay: '<S725>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_p1 =
        HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Veh_Spd_Lm;

    /* End of Outputs for SubSystem: '<S687>/EdgeRising' */

    /* Switch: '<S687>/Switch1' incorporates:
     *  Logic: '<S687>/OR'
     *  Logic: '<S687>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Veh_Spd_Lm) ||
            rtb_UnitDelay_ka)
    {
        /* Sum: '<S687>/Summation' incorporates:
         *  Constant: '<S687>/Constant Value1'
         *  Switch: '<S687>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_hq = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S687>/Summation' incorporates:
         *  Constant: '<S687>/Constant Value'
         *  UnitDelay: '<S687>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_hq = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_hq));

        /* MinMax: '<S687>/Minimum' incorporates:
         *  Constant: '<S659>/Calib'
         */
        if (KeHMIR_n_Veh_Spd_Lmtd_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_hq)
        {
            /* Sum: '<S687>/Summation' incorporates:
             *  Switch: '<S687>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_hq = KeHMIR_n_Veh_Spd_Lmtd_Dbnc;
        }

        /* End of MinMax: '<S687>/Minimum' */
    }

    /* End of Switch: '<S687>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample29' */

    /* Inport: '<Root>/VeESSR_b_EngStallReattmpAllwd' */
    (void)Rte_Read_VeESSR_b_EngStallReattmpAllwd_Value(&rtb_Logical3_n);

    /* Logic: '<S378>/Logical3' */
    rtb_Logical3_n = !rtb_Logical3_n;

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample36' */
    /* Outputs for Atomic SubSystem: '<S695>/EdgeRising' */
    /* Logic: '<S733>/AND' incorporates:
     *  Logic: '<S733>/OR1'
     *  UnitDelay: '<S733>/Unit Delay'
     */
    rtb_UnitDelay_ka = (rtb_Logical3_n && (!HMIR_ac_DW.UnitDelay_DSTATE_fp));

    /* Update for UnitDelay: '<S733>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_fp = rtb_Logical3_n;

    /* End of Outputs for SubSystem: '<S695>/EdgeRising' */

    /* Switch: '<S695>/Switch1' incorporates:
     *  Logic: '<S695>/OR'
     *  Logic: '<S695>/OR1'
     */
    if ((!rtb_Logical3_n) || rtb_UnitDelay_ka)
    {
        /* Sum: '<S695>/Summation' incorporates:
         *  Constant: '<S695>/Constant Value1'
         *  Switch: '<S695>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_o = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S695>/Summation' incorporates:
         *  Constant: '<S695>/Constant Value'
         *  UnitDelay: '<S695>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_o = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_o));

        /* MinMax: '<S695>/Minimum' incorporates:
         *  Constant: '<S624>/Calib'
         */
        if (KeHMIR_Cnt_EngStallReattmpAllwd < HMIR_ac_DW.UnitDelay_DSTATE_o)
        {
            /* Sum: '<S695>/Summation' incorporates:
             *  Switch: '<S695>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_o = KeHMIR_Cnt_EngStallReattmpAllwd;
        }

        /* End of MinMax: '<S695>/Minimum' */
    }

    /* End of Switch: '<S695>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample36' */

    /* Inport: '<Root>/VeMSPR_n_MaxP1SpdLmtRaw' */
    (void)Rte_Read_VeMSPR_n_MaxP1SpdLmtRaw_Value(&rtb_Product2);

    /* RelationalOperator: '<S378>/Relational Operator5' incorporates:
     *  Constant: '<S661>/Calib'
     */
    rtb_UnitDelay_ka = (rtb_Product2 < KeHMIR_n_MaxP1SpdLmtRawThd);

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S665>/EdgeRising' */
    /* Logic: '<S703>/AND' incorporates:
     *  Logic: '<S703>/OR1'
     *  UnitDelay: '<S703>/Unit Delay'
     */
    rtb_AND_a = (rtb_UnitDelay_ka && (!HMIR_ac_DW.UnitDelay_DSTATE_lf));

    /* Update for UnitDelay: '<S703>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_lf = rtb_UnitDelay_ka;

    /* End of Outputs for SubSystem: '<S665>/EdgeRising' */

    /* Switch: '<S665>/Switch1' incorporates:
     *  Logic: '<S665>/OR'
     *  Logic: '<S665>/OR1'
     */
    if ((!rtb_UnitDelay_ka) || rtb_AND_a)
    {
        /* Sum: '<S665>/Summation' incorporates:
         *  Constant: '<S665>/Constant Value1'
         *  Switch: '<S665>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ecg = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S665>/Summation' incorporates:
         *  Constant: '<S665>/Constant Value'
         *  UnitDelay: '<S665>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ecg = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_ecg));

        /* MinMax: '<S665>/Minimum' incorporates:
         *  Constant: '<S663>/Calib'
         */
        if (KeHMIR_Cnt_MaxP1SpdLmtRaw_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_ecg)
        {
            /* Sum: '<S665>/Summation' incorporates:
             *  Switch: '<S665>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_ecg = KeHMIR_Cnt_MaxP1SpdLmtRaw_Dbnc;
        }

        /* End of MinMax: '<S665>/Minimum' */
    }

    /* End of Switch: '<S665>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample' */

    /* Inport: '<Root>/VeMSPR_n_MaxP2SpdLmtRaw' */
    (void)Rte_Read_VeMSPR_n_MaxP2SpdLmtRaw_Value(&tmpRead_10);

    /* RelationalOperator: '<S378>/Relational Operator6' incorporates:
     *  Constant: '<S662>/Calib'
     */
    rtb_AND_a = (tmpRead_10 < KeHMIR_n_MaxP2SpdLmtRawThd);

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample37' */
    /* Outputs for Atomic SubSystem: '<S696>/EdgeRising' */
    /* Logic: '<S734>/AND' incorporates:
     *  Logic: '<S734>/OR1'
     *  UnitDelay: '<S734>/Unit Delay'
     */
    rtb_AND = (rtb_AND_a && (!HMIR_ac_DW.UnitDelay_DSTATE_cp));

    /* Update for UnitDelay: '<S734>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_cp = rtb_AND_a;

    /* End of Outputs for SubSystem: '<S696>/EdgeRising' */

    /* Switch: '<S696>/Switch1' incorporates:
     *  Logic: '<S696>/OR'
     *  Logic: '<S696>/OR1'
     */
    if ((!rtb_AND_a) || rtb_AND)
    {
        /* Sum: '<S696>/Summation' incorporates:
         *  Constant: '<S696>/Constant Value1'
         *  Switch: '<S696>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_eo = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S696>/Summation' incorporates:
         *  Constant: '<S696>/Constant Value'
         *  UnitDelay: '<S696>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_eo = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_eo));

        /* MinMax: '<S696>/Minimum' incorporates:
         *  Constant: '<S664>/Calib'
         */
        if (KeHMIR_Cnt_MaxP2SpdLmtRaw_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_eo)
        {
            /* Sum: '<S696>/Summation' incorporates:
             *  Switch: '<S696>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_eo = KeHMIR_Cnt_MaxP2SpdLmtRaw_Dbnc;
        }

        /* End of MinMax: '<S696>/Minimum' */
    }

    /* End of Switch: '<S696>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample6' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample5' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample4' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample11' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample12' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample13' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample14' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample18' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample15' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample16' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample17' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample21' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample29' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample36' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample' */
    /* Logic: '<S378>/Logical Operator' incorporates:
     *  Constant: '<S624>/Calib'
     *  Constant: '<S640>/Calib'
     *  Constant: '<S643>/Calib'
     *  Constant: '<S645>/Calib'
     *  Constant: '<S646>/Calib'
     *  Constant: '<S647>/Calib'
     *  Constant: '<S648>/Calib'
     *  Constant: '<S650>/Calib'
     *  Constant: '<S652>/Calib'
     *  Constant: '<S654>/Calib'
     *  Constant: '<S655>/Calib'
     *  Constant: '<S656>/Calib'
     *  Constant: '<S659>/Calib'
     *  Constant: '<S660>/Calib'
     *  Constant: '<S663>/Calib'
     *  Constant: '<S664>/Calib'
     *  Logic: '<S665>/AND'
     *  Logic: '<S668>/AND'
     *  Logic: '<S669>/AND'
     *  Logic: '<S670>/AND'
     *  Logic: '<S671>/AND'
     *  Logic: '<S672>/AND'
     *  Logic: '<S673>/AND'
     *  Logic: '<S674>/AND'
     *  Logic: '<S675>/AND'
     *  Logic: '<S679>/AND'
     *  Logic: '<S687>/AND'
     *  Logic: '<S688>/AND'
     *  Logic: '<S695>/AND'
     *  Logic: '<S696>/AND'
     *  Logic: '<S697>/AND'
     *  Logic: '<S698>/AND'
     *  Logic: '<S699>/AND'
     *  RelationalOperator: '<S665>/Greater  Than'
     *  RelationalOperator: '<S668>/Greater  Than'
     *  RelationalOperator: '<S669>/Greater  Than'
     *  RelationalOperator: '<S670>/Greater  Than'
     *  RelationalOperator: '<S671>/Greater  Than'
     *  RelationalOperator: '<S672>/Greater  Than'
     *  RelationalOperator: '<S673>/Greater  Than'
     *  RelationalOperator: '<S674>/Greater  Than'
     *  RelationalOperator: '<S675>/Greater  Than'
     *  RelationalOperator: '<S679>/Greater  Than'
     *  RelationalOperator: '<S687>/Greater  Than'
     *  RelationalOperator: '<S688>/Greater  Than'
     *  RelationalOperator: '<S695>/Greater  Than'
     *  RelationalOperator: '<S696>/Greater  Than'
     *  RelationalOperator: '<S697>/Greater  Than'
     *  RelationalOperator: '<S698>/Greater  Than'
     *  RelationalOperator: '<S699>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg1 =
        (((((((((((((((((((((HMIR_ac_B.TmpSignalConversionAtVeGENR_b_LowVoltSys)
        && (HMIR_ac_DW.UnitDelay_DSTATE_d0 >= KeHMIR_n_LowVoltSysFld_Dbnc)) ||
                           ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_HybPwrtrnR)
        && (HMIR_ac_DW.UnitDelay_DSTATE_i >= KeHMIR_n_HybPwrtrnRdcdPerfCmnd_Dbnc)))
                          ||
                          ((HMIR_ac_B.TmpSignalConversionAtVeIMOR_b_EngDsbldTo) &&
                           (HMIR_ac_DW.UnitDelay_DSTATE_ep >=
        KeHMIR_n_EngDsbldToIC_Dbnc))) ||
                         ((HMIR_ac_B.TmpSignalConversionAtVeENGR_b_EngSysLowF) &&
                          (HMIR_ac_DW.UnitDelay_DSTATE_o5 >=
                           KeHMIR_n_EngSysLowFuel_Dbnc))) ||
                        ((HMIR_ac_B.TmpSignalConversionAtVeESSR_b_AStrtFaile) &&
                         (HMIR_ac_DW.UnitDelay_DSTATE_hp >=
                          KeHMIR_n_AStrtFailed_Dbnc))) ||
                       ((HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_PwrLimONOu) &&
                        (HMIR_ac_DW.UnitDelay_DSTATE_iv >=
                         KeHMIR_n_PwrLimON_Dbnc))) ||
                      ((HMIR_ac_B.TmpSignalConversionAtVeESPR_b_EngNegSpdF) &&
                       (HMIR_ac_DW.UnitDelay_DSTATE_gi0 >=
                        KeHMIR_n_EngNegSpdFltDtct_Dbnc))) || (rtb_Comparison18_a
                      && (HMIR_ac_DW.UnitDelay_DSTATE_lx >=
                          KeHMIR_n_HVOverVoltFailure_Dbnc))) ||
                    ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_CreepTorqM) &&
                     (HMIR_ac_DW.UnitDelay_DSTATE_ed >=
                      KeHMIR_n_CreepTorqMode_Dbnc))) ||
                   ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_ReducedPer) &&
                    (HMIR_ac_DW.UnitDelay_DSTATE_gi >=
                     KeHMIR_n_ReducedPerfMode2_Dbnc))) ||
                  ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_limitInput) &&
                   (HMIR_ac_DW.UnitDelay_DSTATE_chf >=
                    KeHMIR_n_limitInputTrq_Dbnc))) || (rtb_Logical &&
                  (HMIR_ac_DW.UnitDelay_DSTATE_co >=
                   KeHMIR_n_EngStrtStpEngShtDwn_Dbnc))) || (rtb_Logical1_d &&
                 (HMIR_ac_DW.UnitDelay_DSTATE_cf >=
                  KeHMIR_n_EngStrtStpEngShtDwn_Dbnc))) ||
               (VeHMIC_b_Reduced_Mtr_Capability)) ||
              ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Veh_Spd_Lm) &&
               (HMIR_ac_DW.UnitDelay_DSTATE_hq >= KeHMIR_n_Veh_Spd_Lmtd_Dbnc))) ||
             rtb_LogicalOperator2_h) || rtb_Comparison17_f) || (rtb_Logical3_n &&
            (HMIR_ac_DW.UnitDelay_DSTATE_o >= KeHMIR_Cnt_EngStallReattmpAllwd)))
          || (rtb_UnitDelay_ka && (HMIR_ac_DW.UnitDelay_DSTATE_ecg >=
            KeHMIR_Cnt_MaxP1SpdLmtRaw_Dbnc))) || (rtb_AND_a &&
          (HMIR_ac_DW.UnitDelay_DSTATE_eo >= KeHMIR_Cnt_MaxP2SpdLmtRaw_Dbnc)));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample36' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample29' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample21' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample17' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample16' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample15' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample18' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample14' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample13' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample12' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample11' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample3' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample4' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample5' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample6' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample37' */

    /* RelationalOperator: '<S378>/Relational Operator3' incorporates:
     *  Constant: '<S637>/Calib'
     */
    rtb_LogicalOperator2_h = (HMIR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa
        < ((float32)KeHMIR_Pct_BatSocLowPopMsg2));

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample24' */
    /* Outputs for Atomic SubSystem: '<S682>/EdgeRising' */
    /* Logic: '<S720>/AND' incorporates:
     *  Logic: '<S720>/OR1'
     *  UnitDelay: '<S720>/Unit Delay'
     */
    rtb_Logical3_n = (rtb_LogicalOperator2_h && (!HMIR_ac_DW.UnitDelay_DSTATE_fw));

    /* Update for UnitDelay: '<S720>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_fw = rtb_LogicalOperator2_h;

    /* End of Outputs for SubSystem: '<S682>/EdgeRising' */

    /* Switch: '<S682>/Switch1' incorporates:
     *  Logic: '<S682>/OR'
     *  Logic: '<S682>/OR1'
     */
    if ((!rtb_LogicalOperator2_h) || rtb_Logical3_n)
    {
        /* Sum: '<S682>/Summation' incorporates:
         *  Constant: '<S682>/Constant Value1'
         *  Switch: '<S682>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_nd = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S682>/Summation' incorporates:
         *  Constant: '<S682>/Constant Value'
         *  UnitDelay: '<S682>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_nd = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_nd));

        /* MinMax: '<S682>/Minimum' incorporates:
         *  Constant: '<S642>/Calib'
         */
        if (KeHMIR_n_BattSOCPlugin_Rq_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_nd)
        {
            /* Sum: '<S682>/Summation' incorporates:
             *  Switch: '<S682>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_nd = KeHMIR_n_BattSOCPlugin_Rq_Dbnc;
        }

        /* End of MinMax: '<S682>/Minimum' */
    }

    /* End of Switch: '<S682>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample24' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S677>/EdgeRising' */
    /* Logic: '<S715>/AND' incorporates:
     *  Logic: '<S715>/OR1'
     *  UnitDelay: '<S715>/Unit Delay'
     */
    rtb_Logical3_n = ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_BattCondPl) &&
                      (!HMIR_ac_DW.UnitDelay_DSTATE_jp));

    /* Update for UnitDelay: '<S715>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jp =
        HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_BattCondPl;

    /* End of Outputs for SubSystem: '<S677>/EdgeRising' */

    /* Switch: '<S677>/Switch1' incorporates:
     *  Logic: '<S677>/OR'
     *  Logic: '<S677>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_BattCondPl) || rtb_Logical3_n)
    {
        /* Sum: '<S677>/Summation' incorporates:
         *  Constant: '<S677>/Constant Value1'
         *  Switch: '<S677>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_nj = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S677>/Summation' incorporates:
         *  Constant: '<S677>/Constant Value'
         *  UnitDelay: '<S677>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_nj = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_nj));

        /* MinMax: '<S677>/Minimum' incorporates:
         *  Constant: '<S641>/Calib'
         */
        if (KeHMIR_n_BattCondPlugin_Rq_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_nj)
        {
            /* Sum: '<S677>/Summation' incorporates:
             *  Switch: '<S677>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_nj = KeHMIR_n_BattCondPlugin_Rq_Dbnc;
        }

        /* End of MinMax: '<S677>/Minimum' */
    }

    /* End of Switch: '<S677>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample2' */

    /* Inport: '<Root>/VeBPCR_U_CellVoltLowThrsh' */
    (void)Rte_Read_VeBPCR_U_CellVoltLowThrsh_Value(&tmpRead_3);

    /* Inport: '<Root>/VeBPCR_U_HV_BatModVoltMin' */
    (void)Rte_Read_VeBPCR_U_HV_BatModVoltMin_Value(&tmpRead_2);

    /* RelationalOperator: '<S378>/Relational Operator2' */
    rtb_Logical3_n = (tmpRead_2 < tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S666>/EdgeRising' */
    /* Logic: '<S704>/AND' incorporates:
     *  Logic: '<S704>/OR1'
     *  UnitDelay: '<S704>/Unit Delay'
     */
    rtb_Comparison17_f = (rtb_Logical3_n && (!HMIR_ac_DW.UnitDelay_DSTATE_md));

    /* Update for UnitDelay: '<S704>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_md = rtb_Logical3_n;

    /* End of Outputs for SubSystem: '<S666>/EdgeRising' */

    /* Switch: '<S666>/Switch1' incorporates:
     *  Logic: '<S666>/OR'
     *  Logic: '<S666>/OR1'
     */
    if ((!rtb_Logical3_n) || rtb_Comparison17_f)
    {
        /* Sum: '<S666>/Summation' incorporates:
         *  Constant: '<S666>/Constant Value1'
         *  Switch: '<S666>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_l3 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S666>/Summation' incorporates:
         *  Constant: '<S666>/Constant Value'
         *  UnitDelay: '<S666>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_l3 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_l3));

        /* MinMax: '<S666>/Minimum' incorporates:
         *  Constant: '<S651>/Calib'
         */
        if (KeHMIR_n_HV_BatModVoltMin_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_l3)
        {
            /* Sum: '<S666>/Summation' incorporates:
             *  Switch: '<S666>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_l3 = KeHMIR_n_HV_BatModVoltMin_Dbnc;
        }

        /* End of MinMax: '<S666>/Minimum' */
    }

    /* End of Switch: '<S666>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample31' */
    /* Outputs for Atomic SubSystem: '<S690>/EdgeRising' */
    /* Logic: '<S728>/AND' incorporates:
     *  Logic: '<S728>/OR1'
     *  UnitDelay: '<S728>/Unit Delay'
     */
    rtb_Comparison17_f = ((HMIR_ac_B.TmpSignalConversionAtVeSSDR_b_DrvNotAllw) &&
                          (!HMIR_ac_DW.UnitDelay_DSTATE_cl));

    /* Update for UnitDelay: '<S728>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_cl =
        HMIR_ac_B.TmpSignalConversionAtVeSSDR_b_DrvNotAllw;

    /* End of Outputs for SubSystem: '<S690>/EdgeRising' */

    /* Switch: '<S690>/Switch1' incorporates:
     *  Logic: '<S690>/OR'
     *  Logic: '<S690>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSSDR_b_DrvNotAllw) ||
            rtb_Comparison17_f)
    {
        /* Sum: '<S690>/Summation' incorporates:
         *  Constant: '<S690>/Constant Value1'
         *  Switch: '<S690>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_lz = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S690>/Summation' incorporates:
         *  Constant: '<S690>/Constant Value'
         *  UnitDelay: '<S690>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_lz = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_lz));

        /* MinMax: '<S690>/Minimum' incorporates:
         *  Constant: '<S644>/Calib'
         */
        if (KeHMIR_n_DrvNotAllwdTPChck_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_lz)
        {
            /* Sum: '<S690>/Summation' incorporates:
             *  Switch: '<S690>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_lz = KeHMIR_n_DrvNotAllwdTPChck_Dbnc;
        }

        /* End of MinMax: '<S690>/Minimum' */
    }

    /* End of Switch: '<S690>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample31' */

    /* Inport: '<Root>/VeOBCR_e_ChargingLevel' */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&tmpRead_4);

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample24' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample31' */
    /* Logic: '<S378>/Logical Operator2' incorporates:
     *  Constant: '<S621>/Constant'
     *  Constant: '<S641>/Calib'
     *  Constant: '<S642>/Calib'
     *  Constant: '<S644>/Calib'
     *  Constant: '<S651>/Calib'
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     *  Logic: '<S378>/Logical Operator1'
     *  Logic: '<S666>/AND'
     *  Logic: '<S677>/AND'
     *  Logic: '<S682>/AND'
     *  Logic: '<S690>/AND'
     *  RelationalOperator: '<S378>/Relational Operator1'
     *  RelationalOperator: '<S666>/Greater  Than'
     *  RelationalOperator: '<S677>/Greater  Than'
     *  RelationalOperator: '<S682>/Greater  Than'
     *  RelationalOperator: '<S690>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg2 = (((((rtb_LogicalOperator2_h &&
        (HMIR_ac_DW.UnitDelay_DSTATE_nd >= KeHMIR_n_BattSOCPlugin_Rq_Dbnc)) ||
        ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_BattCondPl) &&
         (HMIR_ac_DW.UnitDelay_DSTATE_nj >= KeHMIR_n_BattCondPlugin_Rq_Dbnc))) ||
        (rtb_Logical3_n && (HMIR_ac_DW.UnitDelay_DSTATE_l3 >=
                            KeHMIR_n_HV_BatModVoltMin_Dbnc))) ||
                            ((HMIR_ac_B.TmpSignalConversionAtVeSSDR_b_DrvNotAllw)
        && (HMIR_ac_DW.UnitDelay_DSTATE_lz >= KeHMIR_n_DrvNotAllwdTPChck_Dbnc)))
                           && (tmpRead_4 == CeOBCR_e_ChargingLvlDefault));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample31' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample2' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample24' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample7' */
    /* Outputs for Atomic SubSystem: '<S700>/EdgeRising' */
    /* Logic: '<S738>/AND' incorporates:
     *  Logic: '<S738>/OR1'
     *  UnitDelay: '<S738>/Unit Delay'
     */
    rtb_LogicalOperator2_h =
        ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_RmtStrtAbo) &&
         (!HMIR_ac_DW.UnitDelay_DSTATE_eds));

    /* Update for UnitDelay: '<S738>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_eds =
        HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_RmtStrtAbo;

    /* End of Outputs for SubSystem: '<S700>/EdgeRising' */

    /* Switch: '<S700>/Switch1' incorporates:
     *  Logic: '<S700>/OR'
     *  Logic: '<S700>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_RmtStrtAbo) ||
            rtb_LogicalOperator2_h)
    {
        /* Sum: '<S700>/Summation' incorporates:
         *  Constant: '<S700>/Constant Value1'
         *  Switch: '<S700>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gf = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S700>/Summation' incorporates:
         *  Constant: '<S700>/Constant Value'
         *  UnitDelay: '<S700>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gf = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_gf));

        /* MinMax: '<S700>/Minimum' incorporates:
         *  Constant: '<S657>/Calib'
         */
        if (KeHMIR_n_RmtStrtAbort_StrtVhclRq_Dbnc <
                HMIR_ac_DW.UnitDelay_DSTATE_gf)
        {
            /* Sum: '<S700>/Summation' incorporates:
             *  Switch: '<S700>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_gf =
                KeHMIR_n_RmtStrtAbort_StrtVhclRq_Dbnc;
        }

        /* End of MinMax: '<S700>/Minimum' */
    }

    /* End of Switch: '<S700>/Switch1' */

    /* Logic: '<S700>/AND' incorporates:
     *  Constant: '<S657>/Calib'
     *  RelationalOperator: '<S700>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg3 = ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_RmtStrtAbo) &&
                           (HMIR_ac_DW.UnitDelay_DSTATE_gf >=
                            KeHMIR_n_RmtStrtAbort_StrtVhclRq_Dbnc));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample7' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample8' */
    /* Outputs for Atomic SubSystem: '<S701>/EdgeRising' */
    /* Logic: '<S739>/AND' incorporates:
     *  Logic: '<S739>/OR1'
     *  UnitDelay: '<S739>/Unit Delay'
     */
    rtb_LogicalOperator2_h =
        ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_StartVhcl_) &&
         (!HMIR_ac_DW.UnitDelay_DSTATE_gt));

    /* Update for UnitDelay: '<S739>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gt =
        HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_StartVhcl_;

    /* End of Outputs for SubSystem: '<S701>/EdgeRising' */

    /* Switch: '<S701>/Switch1' incorporates:
     *  Logic: '<S701>/OR'
     *  Logic: '<S701>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_StartVhcl_) ||
            rtb_LogicalOperator2_h)
    {
        /* Sum: '<S701>/Summation' incorporates:
         *  Constant: '<S701>/Constant Value1'
         *  Switch: '<S701>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ki = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S701>/Summation' incorporates:
         *  Constant: '<S701>/Constant Value'
         *  UnitDelay: '<S701>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ki = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_ki));

        /* MinMax: '<S701>/Minimum' incorporates:
         *  Constant: '<S658>/Calib'
         */
        if (KeHMIR_n_StrtVhclToMaintain12Vlt_Dbnc <
                HMIR_ac_DW.UnitDelay_DSTATE_ki)
        {
            /* Sum: '<S701>/Summation' incorporates:
             *  Switch: '<S701>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_ki =
                KeHMIR_n_StrtVhclToMaintain12Vlt_Dbnc;
        }

        /* End of MinMax: '<S701>/Minimum' */
    }

    /* End of Switch: '<S701>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample8' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample9' */
    /* Outputs for Atomic SubSystem: '<S702>/EdgeRising' */
    /* Logic: '<S740>/AND' incorporates:
     *  Logic: '<S740>/OR1'
     *  UnitDelay: '<S740>/Unit Delay'
     */
    rtb_LogicalOperator2_h =
        ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_HVAC_turne) &&
         (!HMIR_ac_DW.UnitDelay_DSTATE_m0));

    /* Update for UnitDelay: '<S740>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m0 =
        HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_HVAC_turne;

    /* End of Outputs for SubSystem: '<S702>/EdgeRising' */

    /* Switch: '<S702>/Switch1' incorporates:
     *  Logic: '<S702>/OR'
     *  Logic: '<S702>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_HVAC_turne) ||
            rtb_LogicalOperator2_h)
    {
        /* Sum: '<S702>/Summation' incorporates:
         *  Constant: '<S702>/Constant Value1'
         *  Switch: '<S702>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ec = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S702>/Summation' incorporates:
         *  Constant: '<S702>/Constant Value'
         *  UnitDelay: '<S702>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ec = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_ec));

        /* MinMax: '<S702>/Minimum' incorporates:
         *  Constant: '<S649>/Calib'
         */
        if (KeHMIR_n_HVAC_TurnedOff_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_ec)
        {
            /* Sum: '<S702>/Summation' incorporates:
             *  Switch: '<S702>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_ec = KeHMIR_n_HVAC_TurnedOff_Dbnc;
        }

        /* End of MinMax: '<S702>/Minimum' */
    }

    /* End of Switch: '<S702>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample8' */
    /* Logic: '<S378>/Logical Operator4' incorporates:
     *  Constant: '<S649>/Calib'
     *  Constant: '<S658>/Calib'
     *  Logic: '<S701>/AND'
     *  Logic: '<S702>/AND'
     *  RelationalOperator: '<S701>/Greater  Than'
     *  RelationalOperator: '<S702>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg4 = (((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_StartVhcl_)
                            && (HMIR_ac_DW.UnitDelay_DSTATE_ki >=
        KeHMIR_n_StrtVhclToMaintain12Vlt_Dbnc)) ||
                           ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_HVAC_turne)
                            && (HMIR_ac_DW.UnitDelay_DSTATE_ec >=
        KeHMIR_n_HVAC_TurnedOff_Dbnc)));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample8' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample9' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample19' */
    /* Outputs for Atomic SubSystem: '<S676>/EdgeRising' */
    /* Logic: '<S714>/AND' incorporates:
     *  Logic: '<S714>/OR1'
     *  UnitDelay: '<S714>/Unit Delay'
     */
    rtb_LogicalOperator2_h =
        ((HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG5O) &&
         (!HMIR_ac_DW.UnitDelay_DSTATE_o2));

    /* Update for UnitDelay: '<S714>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_o2 =
        HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG5O;

    /* End of Outputs for SubSystem: '<S676>/EdgeRising' */

    /* Switch: '<S676>/Switch1' incorporates:
     *  Logic: '<S676>/OR'
     *  Logic: '<S676>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG5O) ||
            rtb_LogicalOperator2_h)
    {
        /* Sum: '<S676>/Summation' incorporates:
         *  Constant: '<S676>/Constant Value1'
         *  Switch: '<S676>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_k5 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S676>/Summation' incorporates:
         *  Constant: '<S676>/Constant Value'
         *  UnitDelay: '<S676>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_k5 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_k5));

        /* MinMax: '<S676>/Minimum' incorporates:
         *  Constant: '<S633>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg5 < HMIR_ac_DW.UnitDelay_DSTATE_k5)
        {
            /* Sum: '<S676>/Summation' incorporates:
             *  Switch: '<S676>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_k5 = KeHMIR_Cnt_PopupMsg5;
        }

        /* End of MinMax: '<S676>/Minimum' */
    }

    /* End of Switch: '<S676>/Switch1' */

    /* Logic: '<S676>/AND' incorporates:
     *  Constant: '<S633>/Calib'
     *  RelationalOperator: '<S676>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg5 = ((HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG5O) &&
                           (HMIR_ac_DW.UnitDelay_DSTATE_k5 >=
                            KeHMIR_Cnt_PopupMsg5));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample19' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample20' */
    /* Outputs for Atomic SubSystem: '<S678>/EdgeRising' */
    /* Logic: '<S716>/AND' incorporates:
     *  Logic: '<S716>/OR1'
     *  UnitDelay: '<S716>/Unit Delay'
     */
    rtb_LogicalOperator2_h =
        ((HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG6O) &&
         (!HMIR_ac_DW.UnitDelay_DSTATE_mc));

    /* Update for UnitDelay: '<S716>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mc =
        HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG6O;

    /* End of Outputs for SubSystem: '<S678>/EdgeRising' */

    /* Switch: '<S678>/Switch1' incorporates:
     *  Logic: '<S678>/OR'
     *  Logic: '<S678>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG6O) ||
            rtb_LogicalOperator2_h)
    {
        /* Sum: '<S678>/Summation' incorporates:
         *  Constant: '<S678>/Constant Value1'
         *  Switch: '<S678>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_kd = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S678>/Summation' incorporates:
         *  Constant: '<S678>/Constant Value'
         *  UnitDelay: '<S678>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_kd = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_kd));

        /* MinMax: '<S678>/Minimum' incorporates:
         *  Constant: '<S634>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg6 < HMIR_ac_DW.UnitDelay_DSTATE_kd)
        {
            /* Sum: '<S678>/Summation' incorporates:
             *  Switch: '<S678>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_kd = KeHMIR_Cnt_PopupMsg6;
        }

        /* End of MinMax: '<S678>/Minimum' */
    }

    /* End of Switch: '<S678>/Switch1' */

    /* Logic: '<S678>/AND' incorporates:
     *  Constant: '<S634>/Calib'
     *  RelationalOperator: '<S678>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg6 = ((HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG6O) &&
                           (HMIR_ac_DW.UnitDelay_DSTATE_kd >=
                            KeHMIR_Cnt_PopupMsg6));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample20' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample10' */
    /* Outputs for Atomic SubSystem: '<S667>/EdgeRising' */
    /* Logic: '<S705>/AND' incorporates:
     *  Logic: '<S705>/OR1'
     *  UnitDelay: '<S705>/Unit Delay'
     */
    rtb_LogicalOperator2_h =
        ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_LeaveKeyIn) &&
         (!HMIR_ac_DW.UnitDelay_DSTATE_ll));

    /* Update for UnitDelay: '<S705>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_ll =
        HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_LeaveKeyIn;

    /* End of Outputs for SubSystem: '<S667>/EdgeRising' */

    /* Switch: '<S667>/Switch1' incorporates:
     *  Logic: '<S667>/OR'
     *  Logic: '<S667>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_LeaveKeyIn) ||
            rtb_LogicalOperator2_h)
    {
        /* Sum: '<S667>/Summation' incorporates:
         *  Constant: '<S667>/Constant Value1'
         *  Switch: '<S667>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_bf = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S667>/Summation' incorporates:
         *  Constant: '<S667>/Constant Value'
         *  UnitDelay: '<S667>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_bf = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_bf));

        /* MinMax: '<S667>/Minimum' incorporates:
         *  Constant: '<S653>/Calib'
         */
        if (KeHMIR_n_LeaveKeyInRun_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_bf)
        {
            /* Sum: '<S667>/Summation' incorporates:
             *  Switch: '<S667>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_bf = KeHMIR_n_LeaveKeyInRun_Dbnc;
        }

        /* End of MinMax: '<S667>/Minimum' */
    }

    /* End of Switch: '<S667>/Switch1' */

    /* Logic: '<S667>/AND' incorporates:
     *  Constant: '<S653>/Calib'
     *  RelationalOperator: '<S667>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg7 = ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_LeaveKeyIn) &&
                           (HMIR_ac_DW.UnitDelay_DSTATE_bf >=
                            KeHMIR_n_LeaveKeyInRun_Dbnc));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample10' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample25' */
    /* Outputs for Atomic SubSystem: '<S683>/EdgeRising' */
    /* Logic: '<S721>/AND' incorporates:
     *  Logic: '<S721>/OR1'
     *  UnitDelay: '<S721>/Unit Delay'
     */
    rtb_LogicalOperator2_h =
        ((HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG8O) &&
         (!HMIR_ac_DW.UnitDelay_DSTATE_m5));

    /* Update for UnitDelay: '<S721>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m5 =
        HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG8O;

    /* End of Outputs for SubSystem: '<S683>/EdgeRising' */

    /* Switch: '<S683>/Switch1' incorporates:
     *  Logic: '<S683>/OR'
     *  Logic: '<S683>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG8O) ||
            rtb_LogicalOperator2_h)
    {
        /* Sum: '<S683>/Summation' incorporates:
         *  Constant: '<S683>/Constant Value1'
         *  Switch: '<S683>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gj = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S683>/Summation' incorporates:
         *  Constant: '<S683>/Constant Value'
         *  UnitDelay: '<S683>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_gj = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_gj));

        /* MinMax: '<S683>/Minimum' incorporates:
         *  Constant: '<S635>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg8 < HMIR_ac_DW.UnitDelay_DSTATE_gj)
        {
            /* Sum: '<S683>/Summation' incorporates:
             *  Switch: '<S683>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_gj = KeHMIR_Cnt_PopupMsg8;
        }

        /* End of MinMax: '<S683>/Minimum' */
    }

    /* End of Switch: '<S683>/Switch1' */

    /* Logic: '<S683>/AND' incorporates:
     *  Constant: '<S635>/Calib'
     *  RelationalOperator: '<S683>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg8 = ((HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG8O) &&
                           (HMIR_ac_DW.UnitDelay_DSTATE_gj >=
                            KeHMIR_Cnt_PopupMsg8));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample25' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample22' */
    /* Outputs for Atomic SubSystem: '<S680>/EdgeRising' */
    /* Logic: '<S718>/AND' incorporates:
     *  Logic: '<S718>/OR1'
     *  UnitDelay: '<S718>/Unit Delay'
     */
    rtb_LogicalOperator2_h =
        ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_VehShutoff) &&
         (!HMIR_ac_DW.UnitDelay_DSTATE_moq));

    /* Update for UnitDelay: '<S718>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_moq =
        HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_VehShutoff;

    /* End of Outputs for SubSystem: '<S680>/EdgeRising' */

    /* Switch: '<S680>/Switch1' incorporates:
     *  Logic: '<S680>/OR'
     *  Logic: '<S680>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_VehShutoff) ||
            rtb_LogicalOperator2_h)
    {
        /* Sum: '<S680>/Summation' incorporates:
         *  Constant: '<S680>/Constant Value1'
         *  Switch: '<S680>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_bw = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S680>/Summation' incorporates:
         *  Constant: '<S680>/Constant Value'
         *  UnitDelay: '<S680>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_bw = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_bw));

        /* MinMax: '<S680>/Minimum' incorporates:
         *  Constant: '<S636>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg9 < HMIR_ac_DW.UnitDelay_DSTATE_bw)
        {
            /* Sum: '<S680>/Summation' incorporates:
             *  Switch: '<S680>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_bw = KeHMIR_Cnt_PopupMsg9;
        }

        /* End of MinMax: '<S680>/Minimum' */
    }

    /* End of Switch: '<S680>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample22' */

    /* Inport: '<Root>/VeSRAR_b_Popup_Msg9' */
    (void)Rte_Read_VeSRAR_b_Popup_Msg9_Value(&rtb_LogicalOperator5);

    /* Logic: '<S378>/Logical Operator5' incorporates:
     *  Constant: '<S623>/Calib'
     */
    rtb_LogicalOperator5 = ((HeHMIR_b_Pop9_Enbl_VF_M182) && rtb_LogicalOperator5);

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample35' */
    /* Outputs for Atomic SubSystem: '<S694>/EdgeRising' */
    /* Logic: '<S732>/AND' incorporates:
     *  Logic: '<S732>/OR1'
     *  UnitDelay: '<S732>/Unit Delay'
     */
    rtb_LogicalOperator2_h = (rtb_LogicalOperator5 &&
        (!HMIR_ac_DW.UnitDelay_DSTATE_gy));

    /* Update for UnitDelay: '<S732>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_gy = rtb_LogicalOperator5;

    /* End of Outputs for SubSystem: '<S694>/EdgeRising' */

    /* Switch: '<S694>/Switch1' incorporates:
     *  Logic: '<S694>/OR'
     *  Logic: '<S694>/OR1'
     */
    if ((!rtb_LogicalOperator5) || rtb_LogicalOperator2_h)
    {
        /* Sum: '<S694>/Summation' incorporates:
         *  Constant: '<S694>/Constant Value1'
         *  Switch: '<S694>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_k0 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S694>/Summation' incorporates:
         *  Constant: '<S694>/Constant Value'
         *  UnitDelay: '<S694>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_k0 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_k0));

        /* MinMax: '<S694>/Minimum' incorporates:
         *  Constant: '<S636>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg9 < HMIR_ac_DW.UnitDelay_DSTATE_k0)
        {
            /* Sum: '<S694>/Summation' incorporates:
             *  Switch: '<S694>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_k0 = KeHMIR_Cnt_PopupMsg9;
        }

        /* End of MinMax: '<S694>/Minimum' */
    }

    /* End of Switch: '<S694>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample35' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample30' */
    /* Outputs for Atomic SubSystem: '<S689>/EdgeRising' */
    /* Logic: '<S727>/AND' incorporates:
     *  Logic: '<S727>/OR1'
     *  UnitDelay: '<S727>/Unit Delay'
     */
    rtb_LogicalOperator2_h =
        ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_PerfLmtd_S) &&
         (!HMIR_ac_DW.UnitDelay_DSTATE_mz));

    /* Update for UnitDelay: '<S727>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mz =
        HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_PerfLmtd_S;

    /* End of Outputs for SubSystem: '<S689>/EdgeRising' */

    /* Switch: '<S689>/Switch1' incorporates:
     *  Logic: '<S689>/OR'
     *  Logic: '<S689>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_PerfLmtd_S) ||
            rtb_LogicalOperator2_h)
    {
        /* Sum: '<S689>/Summation' incorporates:
         *  Constant: '<S689>/Constant Value1'
         *  Switch: '<S689>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_pf = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S689>/Summation' incorporates:
         *  Constant: '<S689>/Constant Value'
         *  UnitDelay: '<S689>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_pf = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_pf));

        /* MinMax: '<S689>/Minimum' incorporates:
         *  Constant: '<S625>/Calib'
         */
        if (KeHMIR_Cnt_PerfLmtd_StpSfly_Dbnc < HMIR_ac_DW.UnitDelay_DSTATE_pf)
        {
            /* Sum: '<S689>/Summation' incorporates:
             *  Switch: '<S689>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_pf = KeHMIR_Cnt_PerfLmtd_StpSfly_Dbnc;
        }

        /* End of MinMax: '<S689>/Minimum' */
    }

    /* End of Switch: '<S689>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample30' */

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_15);

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_14);

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample22' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample35' */
    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample30' */
    /* Logic: '<S378>/Logical Operator3' incorporates:
     *  Constant: '<S619>/Constant'
     *  Constant: '<S625>/Calib'
     *  Constant: '<S636>/Calib'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     *  Logic: '<S680>/AND'
     *  Logic: '<S689>/AND'
     *  Logic: '<S694>/AND'
     *  RelationalOperator: '<S378>/Relational Operator'
     *  RelationalOperator: '<S378>/Relational Operator4'
     *  RelationalOperator: '<S680>/Greater  Than'
     *  RelationalOperator: '<S689>/Greater  Than'
     *  RelationalOperator: '<S694>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg9 =
        (((((((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_VehShutoff) &&
              (HMIR_ac_DW.UnitDelay_DSTATE_bw >= KeHMIR_Cnt_PopupMsg9)) ||
             (rtb_LogicalOperator5 && (HMIR_ac_DW.UnitDelay_DSTATE_k0 >=
               KeHMIR_Cnt_PopupMsg9))) ||
            ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_PerfLmtd_S) &&
             (HMIR_ac_DW.UnitDelay_DSTATE_pf >= KeHMIR_Cnt_PerfLmtd_StpSfly_Dbnc)))
           || rtb_LessThanorEqual4_g) || (tmpRead_14 == CeINVR_e_InverterFaulted))
         || (tmpRead_15 == CeINVR_e_InverterFaulted));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample30' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample35' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample22' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample23' */
    /* Outputs for Atomic SubSystem: '<S681>/EdgeRising' */
    /* Logic: '<S719>/AND' incorporates:
     *  Logic: '<S719>/OR1'
     *  UnitDelay: '<S719>/Unit Delay'
     */
    rtb_LogicalOperator5 = ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_DisblFunc_)
                            && (!HMIR_ac_DW.UnitDelay_DSTATE_mhl));

    /* Update for UnitDelay: '<S719>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mhl =
        HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_DisblFunc_;

    /* End of Outputs for SubSystem: '<S681>/EdgeRising' */

    /* Switch: '<S681>/Switch1' incorporates:
     *  Logic: '<S681>/OR'
     *  Logic: '<S681>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_DisblFunc_) ||
            rtb_LogicalOperator5)
    {
        /* Sum: '<S681>/Summation' incorporates:
         *  Constant: '<S681>/Constant Value1'
         *  Switch: '<S681>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_n3 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S681>/Summation' incorporates:
         *  Constant: '<S681>/Constant Value'
         *  UnitDelay: '<S681>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_n3 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_n3));

        /* MinMax: '<S681>/Minimum' incorporates:
         *  Constant: '<S627>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg10 < HMIR_ac_DW.UnitDelay_DSTATE_n3)
        {
            /* Sum: '<S681>/Summation' incorporates:
             *  Switch: '<S681>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_n3 = KeHMIR_Cnt_PopupMsg10;
        }

        /* End of MinMax: '<S681>/Minimum' */
    }

    /* End of Switch: '<S681>/Switch1' */

    /* Logic: '<S681>/AND' incorporates:
     *  Constant: '<S627>/Calib'
     *  RelationalOperator: '<S681>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg10 = ((HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_DisblFunc_)
                            && (HMIR_ac_DW.UnitDelay_DSTATE_n3 >=
        KeHMIR_Cnt_PopupMsg10));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample23' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample26' */
    /* Outputs for Atomic SubSystem: '<S684>/EdgeRising' */
    /* Logic: '<S722>/AND' incorporates:
     *  Logic: '<S722>/OR1'
     *  UnitDelay: '<S722>/Unit Delay'
     */
    rtb_LogicalOperator5 = ((HMIR_ac_B.TmpSignalConversionAtVeCDMR_b_ChrgPortUL)
                            && (!HMIR_ac_DW.UnitDelay_DSTATE_mh));

    /* Update for UnitDelay: '<S722>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mh =
        HMIR_ac_B.TmpSignalConversionAtVeCDMR_b_ChrgPortUL;

    /* End of Outputs for SubSystem: '<S684>/EdgeRising' */

    /* Switch: '<S684>/Switch1' incorporates:
     *  Logic: '<S684>/OR'
     *  Logic: '<S684>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeCDMR_b_ChrgPortUL) ||
            rtb_LogicalOperator5)
    {
        /* Sum: '<S684>/Summation' incorporates:
         *  Constant: '<S684>/Constant Value1'
         *  Switch: '<S684>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_mo = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S684>/Summation' incorporates:
         *  Constant: '<S684>/Constant Value'
         *  UnitDelay: '<S684>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_mo = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_mo));

        /* MinMax: '<S684>/Minimum' incorporates:
         *  Constant: '<S629>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg13 < HMIR_ac_DW.UnitDelay_DSTATE_mo)
        {
            /* Sum: '<S684>/Summation' incorporates:
             *  Switch: '<S684>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_mo = KeHMIR_Cnt_PopupMsg13;
        }

        /* End of MinMax: '<S684>/Minimum' */
    }

    /* End of Switch: '<S684>/Switch1' */

    /* Logic: '<S684>/AND' incorporates:
     *  Constant: '<S629>/Calib'
     *  RelationalOperator: '<S684>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg13 = ((HMIR_ac_B.TmpSignalConversionAtVeCDMR_b_ChrgPortUL)
                            && (HMIR_ac_DW.UnitDelay_DSTATE_mo >=
        KeHMIR_Cnt_PopupMsg13));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample26' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample27' */
    /* Outputs for Atomic SubSystem: '<S685>/EdgeRising' */
    /* Logic: '<S723>/AND' incorporates:
     *  Logic: '<S723>/OR1'
     *  UnitDelay: '<S723>/Unit Delay'
     */
    rtb_LogicalOperator5 = ((HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_BumpStrtIn)
                            && (!HMIR_ac_DW.UnitDelay_DSTATE_jr));

    /* Update for UnitDelay: '<S723>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jr =
        HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_BumpStrtIn;

    /* End of Outputs for SubSystem: '<S685>/EdgeRising' */

    /* Switch: '<S685>/Switch1' incorporates:
     *  Logic: '<S685>/OR'
     *  Logic: '<S685>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_BumpStrtIn) ||
            rtb_LogicalOperator5)
    {
        /* Sum: '<S685>/Summation' incorporates:
         *  Constant: '<S685>/Constant Value1'
         *  Switch: '<S685>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_me = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S685>/Summation' incorporates:
         *  Constant: '<S685>/Constant Value'
         *  UnitDelay: '<S685>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_me = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_me));

        /* MinMax: '<S685>/Minimum' incorporates:
         *  Constant: '<S626>/Calib'
         */
        if (KeHMIR_Cnt_PopUp_P1fFailedUseBumpStartHMI <
                HMIR_ac_DW.UnitDelay_DSTATE_me)
        {
            /* Sum: '<S685>/Summation' incorporates:
             *  Switch: '<S685>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_me =
                KeHMIR_Cnt_PopUp_P1fFailedUseBumpStartHMI;
        }

        /* End of MinMax: '<S685>/Minimum' */
    }

    /* End of Switch: '<S685>/Switch1' */

    /* Logic: '<S685>/AND' incorporates:
     *  Constant: '<S626>/Calib'
     *  RelationalOperator: '<S685>/Greater  Than'
     */
    VeHMIC_b_PopUp_P1fFailedUseBumpStartHMI =
        ((HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_BumpStrtIn) &&
         (HMIR_ac_DW.UnitDelay_DSTATE_me >=
          KeHMIR_Cnt_PopUp_P1fFailedUseBumpStartHMI));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample27' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample28' */
    /* Outputs for Atomic SubSystem: '<S686>/EdgeRising' */
    /* Logic: '<S724>/AND' incorporates:
     *  Logic: '<S724>/OR1'
     *  UnitDelay: '<S724>/Unit Delay'
     */
    rtb_LogicalOperator5 = ((HMIR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortDo)
                            && (!HMIR_ac_DW.UnitDelay_DSTATE_jx));

    /* Update for UnitDelay: '<S724>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_jx =
        HMIR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortDo;

    /* End of Outputs for SubSystem: '<S686>/EdgeRising' */

    /* Switch: '<S686>/Switch1' incorporates:
     *  Logic: '<S686>/OR'
     *  Logic: '<S686>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortDo) ||
            rtb_LogicalOperator5)
    {
        /* Sum: '<S686>/Summation' incorporates:
         *  Constant: '<S686>/Constant Value1'
         *  Switch: '<S686>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_cq = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S686>/Summation' incorporates:
         *  Constant: '<S686>/Constant Value'
         *  UnitDelay: '<S686>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_cq = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_cq));

        /* MinMax: '<S686>/Minimum' incorporates:
         *  Constant: '<S628>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg11 < HMIR_ac_DW.UnitDelay_DSTATE_cq)
        {
            /* Sum: '<S686>/Summation' incorporates:
             *  Switch: '<S686>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_cq = KeHMIR_Cnt_PopupMsg11;
        }

        /* End of MinMax: '<S686>/Minimum' */
    }

    /* End of Switch: '<S686>/Switch1' */

    /* Logic: '<S686>/AND' incorporates:
     *  Constant: '<S628>/Calib'
     *  RelationalOperator: '<S686>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg11 = ((HMIR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortDo)
                            && (HMIR_ac_DW.UnitDelay_DSTATE_cq >=
        KeHMIR_Cnt_PopupMsg11));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample28' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample32' */
    /* Outputs for Atomic SubSystem: '<S691>/EdgeRising' */
    /* Logic: '<S729>/AND' incorporates:
     *  Logic: '<S729>/OR1'
     *  UnitDelay: '<S729>/Unit Delay'
     */
    rtb_LogicalOperator5 = ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Msg1)
                            && (!HMIR_ac_DW.UnitDelay_DSTATE_a2));

    /* Update for UnitDelay: '<S729>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_a2 =
        HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Msg1;

    /* End of Outputs for SubSystem: '<S691>/EdgeRising' */

    /* Switch: '<S691>/Switch1' incorporates:
     *  Logic: '<S691>/OR'
     *  Logic: '<S691>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Msg1) ||
            rtb_LogicalOperator5)
    {
        /* Sum: '<S691>/Summation' incorporates:
         *  Constant: '<S691>/Constant Value1'
         *  Switch: '<S691>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_kx = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S691>/Summation' incorporates:
         *  Constant: '<S691>/Constant Value'
         *  UnitDelay: '<S691>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_kx = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_kx));

        /* MinMax: '<S691>/Minimum' incorporates:
         *  Constant: '<S630>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg14 < HMIR_ac_DW.UnitDelay_DSTATE_kx)
        {
            /* Sum: '<S691>/Summation' incorporates:
             *  Switch: '<S691>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_kx = KeHMIR_Cnt_PopupMsg14;
        }

        /* End of MinMax: '<S691>/Minimum' */
    }

    /* End of Switch: '<S691>/Switch1' */

    /* Logic: '<S691>/AND' incorporates:
     *  Constant: '<S630>/Calib'
     *  RelationalOperator: '<S691>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg14 = ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Msg1)
                            && (HMIR_ac_DW.UnitDelay_DSTATE_kx >=
        KeHMIR_Cnt_PopupMsg14));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample32' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample33' */
    /* Outputs for Atomic SubSystem: '<S692>/EdgeRising' */
    /* Logic: '<S730>/AND' incorporates:
     *  Logic: '<S730>/OR1'
     *  UnitDelay: '<S730>/Unit Delay'
     */
    rtb_LogicalOperator5 = ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Ms_m)
                            && (!HMIR_ac_DW.UnitDelay_DSTATE_nh));

    /* Update for UnitDelay: '<S730>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_nh =
        HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Ms_m;

    /* End of Outputs for SubSystem: '<S692>/EdgeRising' */

    /* Switch: '<S692>/Switch1' incorporates:
     *  Logic: '<S692>/OR'
     *  Logic: '<S692>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Ms_m) ||
            rtb_LogicalOperator5)
    {
        /* Sum: '<S692>/Summation' incorporates:
         *  Constant: '<S692>/Constant Value1'
         *  Switch: '<S692>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_la = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S692>/Summation' incorporates:
         *  Constant: '<S692>/Constant Value'
         *  UnitDelay: '<S692>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_la = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_la));

        /* MinMax: '<S692>/Minimum' incorporates:
         *  Constant: '<S631>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg15 < HMIR_ac_DW.UnitDelay_DSTATE_la)
        {
            /* Sum: '<S692>/Summation' incorporates:
             *  Switch: '<S692>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_la = KeHMIR_Cnt_PopupMsg15;
        }

        /* End of MinMax: '<S692>/Minimum' */
    }

    /* End of Switch: '<S692>/Switch1' */

    /* Logic: '<S692>/AND' incorporates:
     *  Constant: '<S631>/Calib'
     *  RelationalOperator: '<S692>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg15 = ((HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Ms_m)
                            && (HMIR_ac_DW.UnitDelay_DSTATE_la >=
        KeHMIR_Cnt_PopupMsg15));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample33' */

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample34' */
    /* Outputs for Atomic SubSystem: '<S693>/EdgeRising' */
    /* Logic: '<S731>/AND' incorporates:
     *  Logic: '<S731>/OR1'
     *  UnitDelay: '<S731>/Unit Delay'
     */
    rtb_LogicalOperator5 = ((HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_P2p5HMIMsg)
                            && (!HMIR_ac_DW.UnitDelay_DSTATE_iy));

    /* Update for UnitDelay: '<S731>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_iy =
        HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_P2p5HMIMsg;

    /* End of Outputs for SubSystem: '<S693>/EdgeRising' */

    /* Switch: '<S693>/Switch1' incorporates:
     *  Logic: '<S693>/OR'
     *  Logic: '<S693>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_P2p5HMIMsg) ||
            rtb_LogicalOperator5)
    {
        /* Sum: '<S693>/Summation' incorporates:
         *  Constant: '<S693>/Constant Value1'
         *  Switch: '<S693>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_a = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S693>/Summation' incorporates:
         *  Constant: '<S693>/Constant Value'
         *  UnitDelay: '<S693>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_a = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_a));

        /* MinMax: '<S693>/Minimum' incorporates:
         *  Constant: '<S632>/Calib'
         */
        if (KeHMIR_Cnt_PopupMsg16 < HMIR_ac_DW.UnitDelay_DSTATE_a)
        {
            /* Sum: '<S693>/Summation' incorporates:
             *  Switch: '<S693>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_a = KeHMIR_Cnt_PopupMsg16;
        }

        /* End of MinMax: '<S693>/Minimum' */
    }

    /* End of Switch: '<S693>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample34' */

    /* Inport: '<Root>/VePLTR_b_LongAccelFA' */
    (void)Rte_Read_VePLTR_b_LongAccelFA_Value(&tmpRead_9);

    /* Outputs for Atomic SubSystem: '<S378>/Turn On Delay Sample34' */
    /* Logic: '<S693>/AND' incorporates:
     *  Constant: '<S632>/Calib'
     *  RelationalOperator: '<S693>/Greater  Than'
     */
    VeHMIC_b_Popup_Msg16 = ((HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_P2p5HMIMsg)
                            && (HMIR_ac_DW.UnitDelay_DSTATE_a >=
        KeHMIR_Cnt_PopupMsg16));

    /* End of Outputs for SubSystem: '<S378>/Turn On Delay Sample34' */

    /* Product: '<S375>/Product1' incorporates:
     *  Constant: '<S559>/Constant Value1'
     *  Constant: '<S563>/Calib'
     *  Product: '<S559>/Multiplication3'
     */
    rtb_Product1_a = KeHMIR_t_100msTask / 2.0F;

    /* Product: '<S372>/Product2' incorporates:
     *  Constant: '<S372>/Constant4'
     */
    rtb_Product2 = 0.2777F * HMIR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdOutp;

    /* Product: '<S559>/Multiplication2' incorporates:
     *  Constant: '<S562>/Calib'
     *  Product: '<S559>/Multiplication4'
     *  Sum: '<S559>/Summation'
     *  Sum: '<S559>/Summation1'
     *  Sum: '<S559>/Summation2'
     *  UnitDelay: '<S559>/Unit Delay'
     *  UnitDelay: '<S559>/Unit Delay1'
     */
    HMIR_ac_DW.UnitDelay1_DSTATE = ((rtb_Product2 - ((rtb_Product1_a -
        KeHMIR_k_CoachingGaugeFltrCnst) * HMIR_ac_DW.UnitDelay1_DSTATE)) -
        HMIR_ac_DW.UnitDelay_DSTATE_m) / (rtb_Product1_a +
        KeHMIR_k_CoachingGaugeFltrCnst);

    /* Switch: '<S372>/Switch1' incorporates:
     *  Constant: '<S561>/Calib'
     *  Inport: '<Root>/VePLTR_a_LongAccel'
     *  Inport: '<Root>/VePLTR_a_LongAccelOffset'
     *  Logic: '<S372>/Logical'
     *  Logic: '<S372>/Logical2'
     */
    if ((!tmpRead_9) && (KeHMIR_b_LngAcclSnsrBsdEffDsply))
    {
        (void)Rte_Read_VePLTR_a_LongAccelOffset_Value(&rtb_Switch1_np);
        (void)Rte_Read_VePLTR_a_LongAccel_Value(&tmpRead_a);

        /* Switch: '<S372>/Switch1' incorporates:
         *  Inport: '<Root>/VePLTR_a_LongAccel'
         *  Inport: '<Root>/VePLTR_a_LongAccelOffset'
         *  Sum: '<S372>/Sum1'
         */
        rtb_Switch1_np = tmpRead_a - rtb_Switch1_np;
    }
    else
    {
        /* Switch: '<S372>/Switch1' */
        rtb_Switch1_np = HMIR_ac_DW.UnitDelay1_DSTATE;
    }

    /* End of Switch: '<S372>/Switch1' */

    /* Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value(&tmpRead_p);

    /* Inport: '<Root>/VeATRR_M_ToReqPrdctd_Tact' */
    (void)Rte_Read_VeATRR_M_ToReqPrdctd_Tact_Value(&rtb_Subtraction_ah);

    /* Switch: '<S372>/Switch4' incorporates:
     *  Constant: '<S372>/Constant2'
     *  Constant: '<S554>/Constant'
     *  RelationalOperator: '<S554>/Compare'
     */
    if (rtb_Subtraction_ah > 0.0F)
    {
        rtb_Product1_a = rtb_Switch1_np;
    }
    else
    {
        rtb_Product1_a = 0.0F;
    }

    /* End of Switch: '<S372>/Switch4' */

    /* Product: '<S372>/Product' incorporates:
     *  Lookup_n-D: '<S564>/Vector'
     *  SignalConversion generated from: '<S5>/VeCSVR_v_VehSpd'
     */
    VeHMIC_Pct_AccelPortion = rtb_Product1_a * look1_iflf_binlca_16a
        (HMIR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdOutp, ((const float32 *)
          &(KxHMIR_a_MaxAccel[0])), ((const float32 *)&(KtHMIR_a_MaxAccel[0])),
         9U);

    /* Switch: '<S372>/Switch5' incorporates:
     *  Constant: '<S372>/Constant3'
     *  Constant: '<S558>/Constant'
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     *  RelationalOperator: '<S372>/Comparison'
     */
    if (tmpRead_p == CeBRKR_e_BrkApplied)
    {
        rtb_Product1_a = rtb_Switch1_np;
    }
    else
    {
        rtb_Product1_a = 0.0F;
    }

    /* End of Switch: '<S372>/Switch5' */

    /* Product: '<S372>/Product1' incorporates:
     *  Lookup_n-D: '<S565>/Vector'
     *  SignalConversion generated from: '<S5>/VeCSVR_v_VehSpd'
     */
    VeHMIC_Pct_DecelPortion = rtb_Product1_a * look1_iflf_binlca_16a
        (HMIR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdOutp, ((const float32 *)
          &(KxHMIR_a_MaxDecel[0])), ((const float32 *)&(KtHMIR_a_MaxDecel[0])),
         9U);

    /* Outputs for Atomic SubSystem: '<S372>/LowpassT Reset Enabled' */
    /* Switch: '<S567>/Switch' incorporates:
     *  Constant: '<S372>/FALSE Constant'
     *  Constant: '<S372>/TRUE Constant'
     *  Switch: '<S567>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S567>/Switch' incorporates:
         *  Constant: '<S372>/Conversion to KW1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_n2 = 0.0F;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S372>/Switch2' incorporates:
             *  Constant: '<S555>/Constant'
             *  RelationalOperator: '<S555>/Compare'
             *  Switch: '<S567>/Switch2'
             */
            if (rtb_Switch1_np > 0.0F)
            {
                /* Lookup_n-D: '<S566>/Vector' */
                rtb_Product1_a = VeHMIC_Pct_AccelPortion;
            }
            else
            {
                /* Lookup_n-D: '<S566>/Vector' */
                rtb_Product1_a = VeHMIC_Pct_DecelPortion;
            }

            /* End of Switch: '<S372>/Switch2' */

            /* Sum: '<S567>/Subtraction' incorporates:
             *  Switch: '<S567>/Switch2'
             *  UnitDelay: '<S567>/Unit Delay'
             */
            rtb_Subtraction_ah = rtb_Product1_a - HMIR_ac_DW.UnitDelay_DSTATE_n2;

            /* Lookup_n-D: '<S566>/Vector' incorporates:
             *  Abs: '<S372>/Abs'
             *  Sum: '<S372>/Sum2'
             *  Switch: '<S567>/Switch2'
             *  UnitDelay: '<S372>/Unit Delay'
             */
            rtb_Product1_a = HMIR_ac_DW.UnitDelay_DSTATE - rtb_Product1_a;
            rtb_Product1_a = fabsf(rtb_Product1_a);
            rtb_Product1_a = look1_iflf_binlca_16a(rtb_Product1_a, ((const
                float32 *)&(KxHMIR_k_CoachingGaugeFltrCnst[0])), ((const float32
                *)&(KtHMIR_k_CoachingGaugeFltrCnst[0])), 6U);

            /* Switch: '<S567>/Switch' incorporates:
             *  Constant: '<S563>/Calib'
             *  MinMax: '<S567>/Maximum'
             *  Product: '<S567>/Multiplication'
             *  Product: '<S567>/Multiplication1'
             *  Sum: '<S567>/Summation'
             *  Switch: '<S567>/Switch2'
             *  UnitDelay: '<S567>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_n2 += (1.0F / fmaxf(rtb_Product1_a,
                KeHMIR_t_100msTask)) * (KeHMIR_t_100msTask * rtb_Subtraction_ah);
        }
    }

    /* End of Switch: '<S567>/Switch' */
    /* End of Outputs for SubSystem: '<S372>/LowpassT Reset Enabled' */

    /* Inport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA' */
    (void)Rte_Read_VeBRKR_b_BrkPedalDscrtInptFA_Value(&tmpRead_c);

    /* Inport: '<Root>/VeCSVR_b_VehSpdFA' */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value(&tmpRead_b);

    /* Inport: '<Root>/VeINVR_I_MtrB_DC_Crnt' */
    (void)Rte_Read_VeINVR_I_MtrB_DC_Crnt_Value(&tmpRead_8);

    /* Inport: '<Root>/VeINVR_U_MtrB_DC_Volt' */
    (void)Rte_Read_VeINVR_U_MtrB_DC_Volt_Value(&tmpRead_7);

    /* Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt' */
    (void)Rte_Read_VeINVR_I_MtrA_DC_Crnt_Value(&tmpRead_6);

    /* Inport: '<Root>/VeINVR_U_MtrA_DC_Volt' */
    (void)Rte_Read_VeINVR_U_MtrA_DC_Volt_Value(&tmpRead_5);

    /* Outputs for Atomic SubSystem: '<S367>/Regen_Pwr' */
    /* Outputs for Atomic SubSystem: '<S383>/Regen_Pwr' */
    /* RelationalOperator: '<S372>/Comparison2' incorporates:
     *  RelationalOperator: '<S372>/Comparison1'
     *  RelationalOperator: '<S377>/Comparison1'
     *  RelationalOperator: '<S377>/Comparison2'
     *  RelationalOperator: '<S773>/Comparison2'
     *  SignalConversion generated from: '<S5>/VeHMIC_e_ShifterPOS_50ms_read'
     */
    tmp_1 = HMIR_ac_B.TmpSignalConversionAtVeHMIC_e_ShifterPOS;

    /* End of Outputs for SubSystem: '<S383>/Regen_Pwr' */
    /* End of Outputs for SubSystem: '<S367>/Regen_Pwr' */

    /* Switch: '<S372>/Switch3' incorporates:
     *  Constant: '<S556>/Constant'
     *  Constant: '<S557>/Constant'
     *  Logic: '<S372>/Logical3'
     *  Logic: '<S372>/Logical4'
     *  RelationalOperator: '<S372>/Comparison1'
     *  RelationalOperator: '<S372>/Comparison2'
     */
    if ((HMIR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct) && ((tmp_1 ==
            CeHMIR_e_ShifterPosDrive) || (tmp_1 == CeHMIR_e_ShifterPosL)))
    {
        /* Switch: '<S372>/Switch3' */
        VeHMIC_Pct_CoachDisp = HMIR_ac_DW.UnitDelay_DSTATE_n2;
    }
    else
    {
        /* Switch: '<S372>/Switch3' incorporates:
         *  Constant: '<S372>/Constant1'
         */
        VeHMIC_Pct_CoachDisp = 0.0F;
    }

    /* End of Switch: '<S372>/Switch3' */

    /* Logic: '<S372>/Logical1' */
    VeHMIC_b_CoachDispV = ((tmpRead_b || tmpRead_c) ||
                           (HMIR_ac_B.TmpSignalConversionAtVeDTRR_b_DrvrIntnde));

    /* Product: '<S376>/Product4' incorporates:
     *  Constant: '<S376>/Conversion to KW2'
     *  Product: '<S376>/Product2'
     */
    VeHMIC_P_MtrAPwrRaw = (tmpRead_5 * tmpRead_6) * 0.001F;

    /* Product: '<S376>/Product5' incorporates:
     *  Constant: '<S376>/Conversion to KW4'
     *  Product: '<S376>/Product3'
     */
    VeHMIC_P_MtrBPwrRaw = (tmpRead_7 * tmpRead_8) * 0.001F;

    /* Sum: '<S376>/Sum' */
    VeHMIC_P_MtrPwrRaw = VeHMIC_P_MtrAPwrRaw + VeHMIC_P_MtrBPwrRaw;

    /* Outputs for Atomic SubSystem: '<S376>/LowpassT Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S376>/LowpassT Reset Enabled' */
    /* Switch: '<S604>/Switch' incorporates:
     *  Constant: '<S376>/FALSE Constant'
     *  Constant: '<S376>/TRUE Constant'
     *  Switch: '<S604>/Switch2'
     *  Switch: '<S605>/Switch'
     */
    if (false)
    {
        /* Switch: '<S604>/Switch' incorporates:
         *  Constant: '<S376>/Conversion to KW1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_hu = 0.0F;

        /* Switch: '<S605>/Switch' incorporates:
         *  Constant: '<S376>/Conversion to KW3'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S604>/Switch' incorporates:
             *  Constant: '<S602>/Calib'
             *  Constant: '<S603>/Calib'
             *  MinMax: '<S604>/Maximum'
             *  Product: '<S604>/Multiplication'
             *  Product: '<S604>/Multiplication1'
             *  Sum: '<S604>/Subtraction'
             *  Sum: '<S604>/Summation'
             *  Switch: '<S604>/Switch2'
             *  UnitDelay: '<S604>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_hu += ((VeHMIC_P_MtrPwrRaw -
                HMIR_ac_DW.UnitDelay_DSTATE_hu) * KeHMIR_t_100msTask) * (1.0F /
                fmaxf(KeHMIR_k_Mtr_FltrCnst, KeHMIR_t_100msTask));
        }

        /* Switch: '<S605>/Switch2' incorporates:
         *  Constant: '<S376>/TRUE Constant1'
         */
        if (true)
        {
            /* Switch: '<S605>/Switch' incorporates:
             *  Constant: '<S600>/Calib'
             *  Constant: '<S603>/Calib'
             *  MinMax: '<S605>/Maximum'
             *  Product: '<S605>/Multiplication'
             *  Product: '<S605>/Multiplication1'
             *  Sum: '<S605>/Subtraction'
             *  Sum: '<S605>/Summation'
             *  Switch: '<S605>/Switch2'
             *  UnitDelay: '<S605>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_p += ((VeHMIC_P_MtrAPwrRaw -
                HMIR_ac_DW.UnitDelay_DSTATE_p) * KeHMIR_t_100msTask) * (1.0F /
                fmaxf(KeHMIR_k_MtrA_FltrCnst, KeHMIR_t_100msTask));
        }

        /* End of Switch: '<S605>/Switch2' */
    }

    /* End of Switch: '<S604>/Switch' */
    /* End of Outputs for SubSystem: '<S376>/LowpassT Reset Enabled' */
    /* End of Outputs for SubSystem: '<S376>/LowpassT Reset Enabled1' */

    /* Product: '<S376>/Divide' incorporates:
     *  Constant: '<S599>/Calib'
     */
    VeHMIC_P_MtrPwrUsageDisp = HMIR_ac_DW.UnitDelay_DSTATE_hu /
        KeHMIR_P_Mtr_NormalizationConst;

    /* Product: '<S376>/Divide1' incorporates:
     *  Constant: '<S597>/Calib'
     */
    VeHMIC_P_MtrAPwrUsageDisp = HMIR_ac_DW.UnitDelay_DSTATE_p /
        KeHMIR_P_MtrA_NormalizationConst;

    /* Outputs for Atomic SubSystem: '<S376>/LowpassT Reset Enabled2' */
    /* Switch: '<S606>/Switch' incorporates:
     *  Constant: '<S376>/FALSE Constant2'
     *  Constant: '<S376>/TRUE Constant2'
     *  Switch: '<S606>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S606>/Switch' incorporates:
         *  Constant: '<S376>/Conversion to KW5'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S606>/Switch' incorporates:
             *  Constant: '<S601>/Calib'
             *  Constant: '<S603>/Calib'
             *  MinMax: '<S606>/Maximum'
             *  Product: '<S606>/Multiplication'
             *  Product: '<S606>/Multiplication1'
             *  Sum: '<S606>/Subtraction'
             *  Sum: '<S606>/Summation'
             *  Switch: '<S606>/Switch2'
             *  UnitDelay: '<S606>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_n += ((VeHMIC_P_MtrBPwrRaw -
                HMIR_ac_DW.UnitDelay_DSTATE_n) * KeHMIR_t_100msTask) * (1.0F /
                fmaxf(KeHMIR_k_MtrB_FltrCnst, KeHMIR_t_100msTask));
        }
    }

    /* End of Switch: '<S606>/Switch' */
    /* End of Outputs for SubSystem: '<S376>/LowpassT Reset Enabled2' */

    /* Product: '<S376>/Divide2' incorporates:
     *  Constant: '<S598>/Calib'
     */
    VeHMIC_P_MtrBPwrUsageDisp = HMIR_ac_DW.UnitDelay_DSTATE_n /
        KeHMIR_P_MtrB_NormalizationConst;

    /* Logic: '<S376>/Logical1' incorporates:
     *  Logic: '<S376>/Logical2'
     */
    tmpRead_9 = ((HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrB_DC_Vo) ||
                 (HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrA_DC_Vo));

    /* Logic: '<S376>/Logical1' */
    VeHMIC_b_MtrPwrUsageDispV = ((tmpRead_9 ||
        (HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrB_DC_Cr)) ||
        (HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrA_DC_Cr));

    /* Logic: '<S376>/Logical2' */
    VeHMIC_b_MtrAPwrUsageDispV = tmpRead_9;

    /* Logic: '<S376>/Logical3' */
    VeHMIC_b_MtrBPwrUsageDispV =
        ((HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrB_DC_Cr) ||
         (HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrA_DC_Cr));

    /* Outputs for Atomic SubSystem: '<S377>/LowpassT Reset Enabled' */
    /* Switch: '<S616>/Switch' incorporates:
     *  Constant: '<S377>/FALSE Constant'
     *  Constant: '<S377>/TRUE Constant'
     *  Inport: '<Root>/VeAXLR_M_ActualOutputTorque'
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     *  Switch: '<S616>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S616>/Switch' incorporates:
         *  Constant: '<S377>/Conversion to KW1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_g1 = 0.0F;
    }
    else
    {
        if (true)
        {
            (void)Rte_Read_VeAXLR_M_ActualOutputTorque_Value(&rtb_Product1);
            (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value(&rtb_Vector_j);

            /* Lookup_n-D: '<S614>/Vector' incorporates:
             *  Constant: '<S377>/Conversion Factor1'
             *  Inport: '<Root>/VeAXLR_M_ActualOutputTorque'
             *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
             *  Product: '<S377>/Product2'
             *  Switch: '<S616>/Switch2'
             */
            rtb_Vector_j = (rtb_Product1 * rtb_Vector_j) * 0.0001047F;

            /* Product: '<S377>/Product1' incorporates:
             *  Constant: '<S377>/Conversion Factor2'
             *  Switch: '<S616>/Switch2'
             */
            rtb_Product1 = rtb_Vector_j * 100.0F;

            /* Switch: '<S377>/Switch3' incorporates:
             *  Constant: '<S607>/Constant'
             *  RelationalOperator: '<S607>/Compare'
             *  Switch: '<S616>/Switch2'
             */
            if (rtb_Vector_j > 0.0F)
            {
                /* Switch: '<S377>/Switch3' incorporates:
                 *  Lookup_n-D: '<S612>/Vector'
                 *  SignalConversion generated from: '<S5>/VeCSVR_v_VehSpd'
                 */
                rtb_Vector_j = look1_iflf_binlca_16a
                    (HMIR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdOutp, ((const
                       float32 *)&(KxHMIR_P_MaxAxlePwr[0])), ((const float32 *)
                      &(KtHMIR_P_MaxAxlePwr[0])), 9U);
            }
            else
            {
                /* Switch: '<S377>/Switch3' incorporates:
                 *  Lookup_n-D: '<S613>/Vector'
                 *  SignalConversion generated from: '<S5>/VeCSVR_v_VehSpd'
                 */
                rtb_Vector_j = look1_iflf_binlca_16a
                    (HMIR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdOutp, ((const
                       float32 *)&(KxHMIR_P_MaxRegenPwr[0])), ((const float32 *)
                      &(KtHMIR_P_MaxRegenPwr[0])), 9U);
            }

            /* End of Switch: '<S377>/Switch3' */

            /* Outputs for Atomic SubSystem: '<S377>/Protected Division' */
            /* Switch: '<S617>/Switch1' incorporates:
             *  Constant: '<S617>/Constant Value'
             *  Constant: '<S617>/Constant Value1'
             *  Constant: '<S617>/Constant Value2'
             *  Constant: '<S617>/Constant Value3'
             *  Logic: '<S617>/AND'
             *  RelationalOperator: '<S617>/Greater Than or Equal '
             *  RelationalOperator: '<S617>/Greater Than or Equal 1'
             *  RelationalOperator: '<S617>/Not Equal'
             *  RelationalOperator: '<S617>/Not Equal1'
             *  Switch: '<S616>/Switch2'
             *  Switch: '<S617>/Switch2'
             *  Switch: '<S617>/Switch3'
             */
            if ((rtb_Product1 != 0.0F) && (rtb_Vector_j != 0.0F))
            {
                /* Switch: '<S617>/Switch1' incorporates:
                 *  Product: '<S617>/Division'
                 */
                rtb_Product1 /= rtb_Vector_j;
            }
            else if (rtb_Product1 > 0.0F)
            {
                /* Switch: '<S617>/Switch2' incorporates:
                 *  Constant: '<S617>/MAXFLOAT'
                 *  Switch: '<S617>/Switch1'
                 */
                rtb_Product1 = 3.402823466E+38F;
            }
            else if (rtb_Product1 < 0.0F)
            {
                /* Switch: '<S617>/Switch3' incorporates:
                 *  Constant: '<S617>/MINFLOAT'
                 *  Switch: '<S617>/Switch1'
                 *  Switch: '<S617>/Switch2'
                 */
                rtb_Product1 = (-3.402823466E+38F);
            }
            else
            {
                /* Switch: '<S617>/Switch1' incorporates:
                 *  Constant: '<S617>/Constant Value4'
                 *  Switch: '<S617>/Switch2'
                 *  Switch: '<S617>/Switch3'
                 */
                rtb_Product1 = 0.0F;
            }

            /* End of Switch: '<S617>/Switch1' */
            /* End of Outputs for SubSystem: '<S377>/Protected Division' */

            /* Switch: '<S616>/Switch' incorporates:
             *  Abs: '<S377>/Abs'
             *  Constant: '<S611>/Calib'
             *  Lookup_n-D: '<S614>/Vector'
             *  MinMax: '<S616>/Maximum'
             *  Product: '<S616>/Multiplication'
             *  Product: '<S616>/Multiplication1'
             *  Sum: '<S377>/Sum1'
             *  Sum: '<S616>/Subtraction'
             *  Sum: '<S616>/Summation'
             *  Switch: '<S616>/Switch2'
             *  UnitDelay: '<S377>/Unit Delay'
             *  UnitDelay: '<S616>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_g1 += (1.0F / fmaxf
                (look1_iflf_binlca_16a(fabsf(HMIR_ac_DW.UnitDelay_DSTATE_h -
                rtb_Product1), ((const float32 *)&(KxHMIR_k_PwrPercent_FltrCnst
                [0])), ((const float32 *)&(KtHMIR_k_PwrPercent_FltrCnst[0])), 6U),
                 KeHMIR_t_100msTask)) * ((rtb_Product1 -
                HMIR_ac_DW.UnitDelay_DSTATE_g1) * KeHMIR_t_100msTask);
        }
    }

    /* End of Switch: '<S616>/Switch' */
    /* End of Outputs for SubSystem: '<S377>/LowpassT Reset Enabled' */

    /* Switch: '<S377>/Switch1' incorporates:
     *  Logic: '<S377>/Logical'
     *  Logic: '<S377>/Logical2'
     *  RelationalOperator: '<S377>/Comparison1'
     *  RelationalOperator: '<S377>/Comparison2'
     */
    if ((HMIR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct) && ((tmp_1 ==
            CeHMIR_e_ShifterPosDrive) || (tmp_1 == CeHMIR_e_ShifterPosL)))
    {
        /* Outputs for Atomic SubSystem: '<S377>/Limiter' */
        /* Switch: '<S615>/Switch1' incorporates:
         *  Constant: '<S377>/Constant Value2'
         *  RelationalOperator: '<S615>/Relational Operator'
         */
        if (100.0F < HMIR_ac_DW.UnitDelay_DSTATE_g1)
        {
            /* Switch: '<S615>/Switch1' */
            rtb_Product1 = 100.0F;
        }
        else
        {
            /* Switch: '<S615>/Switch1' */
            rtb_Product1 = HMIR_ac_DW.UnitDelay_DSTATE_g1;
        }

        /* End of Switch: '<S615>/Switch1' */

        /* Switch: '<S615>/Switch' incorporates:
         *  Constant: '<S377>/Constant Value1'
         *  RelationalOperator: '<S615>/Relational Operator1'
         */
        if (rtb_Product1 > (-100.0F))
        {
            /* Switch: '<S377>/Switch1' */
            VeHMIC_Pct_OutputPwrDisp = rtb_Product1;
        }
        else
        {
            /* Switch: '<S377>/Switch1' */
            VeHMIC_Pct_OutputPwrDisp = -100.0F;
        }

        /* End of Switch: '<S615>/Switch' */
        /* End of Outputs for SubSystem: '<S377>/Limiter' */
    }
    else
    {
        /* Switch: '<S377>/Switch1' incorporates:
         *  Constant: '<S377>/Conversion to KW2'
         */
        VeHMIC_Pct_OutputPwrDisp = 0.0F;
    }

    /* End of Switch: '<S377>/Switch1' */

    /* Inport: '<Root>/VeSSDR_b_DrvAllwd' */
    (void)Rte_Read_VeSSDR_b_DrvAllwd_Value(&tmpRead_j);

    /* Inport: '<Root>/VeVSDR_b_PrimNoFA' */
    (void)Rte_Read_VeVSDR_b_PrimNoFA_Value(&tmpRead_d);

    /* Inport: '<Root>/VeAXLR_b_ActualAxleTrqFA' */
    (void)Rte_Read_VeAXLR_b_ActualAxleTrqFA_Value(&tmpRead_0);

    /* Logic: '<S377>/Logical1' */
    VeHMIC_b_OutputPwrDispV = (tmpRead_0 || tmpRead_d);

    /* Logic: '<S367>/Logical' */
    VeHMIC_b_DriveReady = (tmpRead_j &&
                           (HMIR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct));

#if Rte_SysCon_Variant_HMIR_6

    /* Outputs for Atomic SubSystem: '<S367>/Regen_Pwr' */
    /* Inport: '<Root>/VeDTRR_M_DrvrIntndedAxleTrqRaw' */
    (void)Rte_Read_VeDTRR_M_DrvrIntndedAxleTrqRaw_Value(&tmpRead_r);

    /* Outputs for Atomic SubSystem: '<S383>/Regen_Pwr' */
    /* Logic: '<S773>/Logical Operator' incorporates:
     *  Constant: '<S773>/Constant Value2'
     *  Constant: '<S773>/Constant Value3'
     *  RelationalOperator: '<S773>/Comparison1'
     *  RelationalOperator: '<S773>/Comparison2'
     *  RelationalOperator: '<S773>/Comparison3'
     */
    VeHMIC_b_TrueConditionForRegen = (((VeHMIC_P_MtrBPwrRaw < 0.0F) &&
        (tmpRead_r <= 0.0F)) && (tmp_1 == CeHMIR_e_ShifterPosDrive));

    /* Switch: '<S773>/Switch' */
    if (VeHMIC_b_TrueConditionForRegen)
    {
        /* Switch: '<S773>/Switch' */
        VeHMIC_P_RegenPowerRaw = VeHMIC_P_MtrBPwrRaw;
    }
    else
    {
        /* Switch: '<S773>/Switch' incorporates:
         *  Constant: '<S773>/Constant Value1'
         */
        VeHMIC_P_RegenPowerRaw = 0.0F;
    }

    /* End of Switch: '<S773>/Switch' */

    /* Outputs for Atomic SubSystem: '<S773>/LowpassT Reset Enabled1' */
    /* Switch: '<S778>/Switch' incorporates:
     *  Constant: '<S773>/FALSE Constant1'
     *  Constant: '<S773>/TRUE Constant1'
     *  Switch: '<S778>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S778>/Switch' incorporates:
         *  Constant: '<S773>/Constant Value'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_jn = 0.0F;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S778>/Switch' incorporates:
             *  Constant: '<S776>/Calib'
             *  Constant: '<S777>/Calib'
             *  MinMax: '<S778>/Maximum'
             *  Product: '<S778>/Multiplication'
             *  Product: '<S778>/Multiplication1'
             *  Sum: '<S778>/Subtraction'
             *  Sum: '<S778>/Summation'
             *  Switch: '<S778>/Switch2'
             *  UnitDelay: '<S778>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_jn += ((VeHMIC_P_RegenPowerRaw -
                HMIR_ac_DW.UnitDelay_DSTATE_jn) * KeHMIR_t_100msTask) * (1.0F /
                fmaxf(KeHMIR_k_RgnMtrFltrCnst, KeHMIR_t_100msTask));
        }
    }

    /* End of Switch: '<S778>/Switch' */
    /* End of Outputs for SubSystem: '<S773>/LowpassT Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S773>/Protected Division1' */
    /* Switch: '<S779>/Switch1' incorporates:
     *  Constant: '<S775>/Calib'
     *  Constant: '<S779>/Constant Value'
     *  Constant: '<S779>/Constant Value1'
     *  Constant: '<S779>/Constant Value2'
     *  Constant: '<S779>/Constant Value3'
     *  Logic: '<S779>/AND'
     *  RelationalOperator: '<S779>/Greater Than or Equal '
     *  RelationalOperator: '<S779>/Greater Than or Equal 1'
     *  RelationalOperator: '<S779>/Not Equal'
     *  RelationalOperator: '<S779>/Not Equal1'
     *  Switch: '<S779>/Switch2'
     *  Switch: '<S779>/Switch3'
     */
    if ((HMIR_ac_DW.UnitDelay_DSTATE_jn != 0.0F) &&
            (KeHMIR_P_Regen_NormalizationConst != 0.0F))
    {
        /* Switch: '<S779>/Switch1' incorporates:
         *  Product: '<S779>/Division'
         */
        HMIR_ac_B.Switch1_j = HMIR_ac_DW.UnitDelay_DSTATE_jn /
            KeHMIR_P_Regen_NormalizationConst;
    }
    else if (HMIR_ac_DW.UnitDelay_DSTATE_jn > 0.0F)
    {
        /* Switch: '<S779>/Switch2' incorporates:
         *  Constant: '<S779>/MAXFLOAT'
         *  Switch: '<S779>/Switch1'
         */
        HMIR_ac_B.Switch1_j = 3.402823466E+38F;
    }
    else if (HMIR_ac_DW.UnitDelay_DSTATE_jn < 0.0F)
    {
        /* Switch: '<S779>/Switch3' incorporates:
         *  Constant: '<S779>/MINFLOAT'
         *  Switch: '<S779>/Switch1'
         *  Switch: '<S779>/Switch2'
         */
        HMIR_ac_B.Switch1_j = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S779>/Switch1' incorporates:
         *  Constant: '<S779>/Constant Value4'
         *  Switch: '<S779>/Switch2'
         *  Switch: '<S779>/Switch3'
         */
        HMIR_ac_B.Switch1_j = 0.0F;
    }

    /* End of Switch: '<S779>/Switch1' */
    /* End of Outputs for SubSystem: '<S773>/Protected Division1' */

    /* Logic: '<S773>/Logical3' */
    HMIR_ac_B.Logical3 = (((HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrB_DC_Vo) ||
                           (HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrB_DC_Cr))
                          || (HMIR_ac_B.TmpSignalConversionAtVeDTRR_b_DrvrIntnde));

    /* End of Outputs for SubSystem: '<S383>/Regen_Pwr' */
    /* End of Outputs for SubSystem: '<S367>/Regen_Pwr' */
#endif

    /* Outputs for Atomic SubSystem: '<S373>/LowpassT Reset Enabled' */
    /* Switch: '<S574>/Switch' incorporates:
     *  Constant: '<S373>/FALSE Constant'
     *  Constant: '<S373>/TRUE Constant'
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     *  Inport: '<Root>/VeETQR_M_EngTrqActual'
     *  Switch: '<S574>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S574>/Switch' incorporates:
         *  Constant: '<S373>/Conversion to KW1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ji = 0.0F;
    }
    else
    {
        if (true)
        {
            (void)Rte_Read_VeESPR_n_EngineSpeed_Value(&rtb_Product3_c);
            (void)Rte_Read_VeETQR_M_EngTrqActual_Value(&tmpRead);

            /* Product: '<S373>/Product3' incorporates:
             *  Constant: '<S373>/Conversion Factor1'
             *  Inport: '<Root>/VeESPR_n_EngineSpeed'
             *  Inport: '<Root>/VeETQR_M_EngTrqActual'
             *  Switch: '<S574>/Switch2'
             */
            rtb_Product3_c = (tmpRead * rtb_Product3_c) * 0.0001047F;

            /* Outputs for Atomic SubSystem: '<S373>/Limiter' */
            /* Switch: '<S573>/Switch1' incorporates:
             *  Constant: '<S570>/Calib'
             *  RelationalOperator: '<S573>/Relational Operator'
             *  Switch: '<S574>/Switch2'
             */
            if (KeHMIR_P_MaxEngPwr < rtb_Product3_c)
            {
                /* Switch: '<S573>/Switch1' */
                rtb_Product3_c = KeHMIR_P_MaxEngPwr;
            }

            /* End of Switch: '<S573>/Switch1' */

            /* Switch: '<S573>/Switch' incorporates:
             *  Constant: '<S373>/Constant Value3'
             *  RelationalOperator: '<S573>/Relational Operator1'
             *  Switch: '<S574>/Switch2'
             */
            if (rtb_Product3_c <= 0.0F)
            {
                rtb_Product3_c = 0.0F;
            }

            /* End of Switch: '<S573>/Switch' */
            /* End of Outputs for SubSystem: '<S373>/Limiter' */

            /* Switch: '<S574>/Switch' incorporates:
             *  Constant: '<S571>/Calib'
             *  Constant: '<S572>/Calib'
             *  MinMax: '<S574>/Maximum'
             *  Product: '<S574>/Multiplication'
             *  Product: '<S574>/Multiplication1'
             *  Sum: '<S574>/Subtraction'
             *  Sum: '<S574>/Summation'
             *  Switch: '<S574>/Switch2'
             *  UnitDelay: '<S574>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_ji += ((rtb_Product3_c -
                HMIR_ac_DW.UnitDelay_DSTATE_ji) * KeHMIR_t_100msTask) * (1.0F /
                fmaxf(KeHMIR_k_Eng_FltrCnst, KeHMIR_t_100msTask));
        }
    }

    /* End of Switch: '<S574>/Switch' */
    /* End of Outputs for SubSystem: '<S373>/LowpassT Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S373>/Protected Division' */
    /* Switch: '<S575>/Switch1' incorporates:
     *  Constant: '<S569>/Calib'
     *  Constant: '<S575>/Constant Value'
     *  Constant: '<S575>/Constant Value1'
     *  Constant: '<S575>/Constant Value2'
     *  Constant: '<S575>/Constant Value3'
     *  Logic: '<S575>/AND'
     *  RelationalOperator: '<S575>/Greater Than or Equal '
     *  RelationalOperator: '<S575>/Greater Than or Equal 1'
     *  RelationalOperator: '<S575>/Not Equal'
     *  RelationalOperator: '<S575>/Not Equal1'
     *  Switch: '<S575>/Switch2'
     *  Switch: '<S575>/Switch3'
     */
    if ((HMIR_ac_DW.UnitDelay_DSTATE_ji != 0.0F) &&
            (KeHMIR_P_Eng_NormalizationConst != 0.0F))
    {
        /* Switch: '<S575>/Switch1' incorporates:
         *  Product: '<S575>/Division'
         */
        VeHMIC_P_EngPwrUsageDisp = HMIR_ac_DW.UnitDelay_DSTATE_ji /
            KeHMIR_P_Eng_NormalizationConst;
    }
    else if (HMIR_ac_DW.UnitDelay_DSTATE_ji > 0.0F)
    {
        /* Switch: '<S575>/Switch2' incorporates:
         *  Constant: '<S575>/MAXFLOAT'
         *  Switch: '<S575>/Switch1'
         */
        VeHMIC_P_EngPwrUsageDisp = 3.402823466E+38F;
    }
    else if (HMIR_ac_DW.UnitDelay_DSTATE_ji < 0.0F)
    {
        /* Switch: '<S575>/Switch3' incorporates:
         *  Constant: '<S575>/MINFLOAT'
         *  Switch: '<S575>/Switch1'
         *  Switch: '<S575>/Switch2'
         */
        VeHMIC_P_EngPwrUsageDisp = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S575>/Switch1' incorporates:
         *  Constant: '<S575>/Constant Value4'
         *  Switch: '<S575>/Switch2'
         *  Switch: '<S575>/Switch3'
         */
        VeHMIC_P_EngPwrUsageDisp = 0.0F;
    }

    /* End of Switch: '<S575>/Switch1' */
    /* End of Outputs for SubSystem: '<S373>/Protected Division' */

    /* Inport: '<S367>/EngTrqActual_FA' incorporates:
     *  Inport: '<Root>/VeETQR_b_EngTrqActual_FA'
     */
    (void)Rte_Read_VeETQR_b_EngTrqActual_FA_Value(&HMIR_ac_B.EngTrqActual_FA);

    /* Outputs for Atomic SubSystem: '<S371>/LowpassT Reset Enabled' */
    /* Switch: '<S551>/Switch' incorporates:
     *  Constant: '<S371>/FALSE Constant'
     *  Constant: '<S371>/TRUE Constant'
     *  Switch: '<S551>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S551>/Switch' incorporates:
         *  Constant: '<S371>/Conversion to KW1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        if (true)
        {
            /* Outputs for Atomic SubSystem: '<S371>/Limiter' */
            /* Switch: '<S550>/Switch1' incorporates:
             *  Constant: '<S546>/Calib'
             *  RelationalOperator: '<S550>/Relational Operator'
             *  Switch: '<S551>/Switch2'
             */
            if (KeHMIR_P_MaxBatPwr <
                    HMIR_ac_B.TmpSignalConversionAtVeHVTR_P_HV_BatPwrO)
            {
                /* Switch: '<S550>/Switch1' */
                rtb_Product3_c = KeHMIR_P_MaxBatPwr;
            }
            else
            {
                /* Switch: '<S550>/Switch1' */
                rtb_Product3_c =
                    HMIR_ac_B.TmpSignalConversionAtVeHVTR_P_HV_BatPwrO;
            }

            /* End of Switch: '<S550>/Switch1' */

            /* Switch: '<S550>/Switch' incorporates:
             *  Constant: '<S547>/Calib'
             *  RelationalOperator: '<S550>/Relational Operator1'
             *  Switch: '<S551>/Switch2'
             */
            if (rtb_Product3_c <= KeHMIR_P_MinBatPwr)
            {
                rtb_Product3_c = KeHMIR_P_MinBatPwr;
            }

            /* End of Switch: '<S550>/Switch' */
            /* End of Outputs for SubSystem: '<S371>/Limiter' */

            /* Switch: '<S551>/Switch' incorporates:
             *  Constant: '<S548>/Calib'
             *  Constant: '<S549>/Calib'
             *  MinMax: '<S551>/Maximum'
             *  Product: '<S551>/Multiplication'
             *  Product: '<S551>/Multiplication1'
             *  Sum: '<S551>/Subtraction'
             *  Sum: '<S551>/Summation'
             *  Switch: '<S551>/Switch2'
             *  UnitDelay: '<S551>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_k += ((rtb_Product3_c -
                HMIR_ac_DW.UnitDelay_DSTATE_k) * KeHMIR_t_100msTask) * (1.0F /
                fmaxf(KeHMIR_k_Bat_FltrCnst, KeHMIR_t_100msTask));
        }
    }

    /* End of Switch: '<S551>/Switch' */
    /* End of Outputs for SubSystem: '<S371>/LowpassT Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S371>/Protected Division' */
    /* Switch: '<S552>/Switch1' incorporates:
     *  Constant: '<S545>/Calib'
     *  Constant: '<S552>/Constant Value'
     *  Constant: '<S552>/Constant Value1'
     *  Constant: '<S552>/Constant Value2'
     *  Constant: '<S552>/Constant Value3'
     *  Logic: '<S552>/AND'
     *  RelationalOperator: '<S552>/Greater Than or Equal '
     *  RelationalOperator: '<S552>/Greater Than or Equal 1'
     *  RelationalOperator: '<S552>/Not Equal'
     *  RelationalOperator: '<S552>/Not Equal1'
     *  Switch: '<S552>/Switch2'
     *  Switch: '<S552>/Switch3'
     */
    if ((HMIR_ac_DW.UnitDelay_DSTATE_k != 0.0F) &&
            (KeHMIR_P_Bat_NormalizationConst != 0.0F))
    {
        /* Switch: '<S552>/Switch1' incorporates:
         *  Product: '<S552>/Division'
         */
        VeHMIC_P_BatPwrUsageDisp = HMIR_ac_DW.UnitDelay_DSTATE_k /
            KeHMIR_P_Bat_NormalizationConst;
    }
    else if (HMIR_ac_DW.UnitDelay_DSTATE_k > 0.0F)
    {
        /* Switch: '<S552>/Switch2' incorporates:
         *  Constant: '<S552>/MAXFLOAT'
         *  Switch: '<S552>/Switch1'
         */
        VeHMIC_P_BatPwrUsageDisp = 3.402823466E+38F;
    }
    else if (HMIR_ac_DW.UnitDelay_DSTATE_k < 0.0F)
    {
        /* Switch: '<S552>/Switch3' incorporates:
         *  Constant: '<S552>/MINFLOAT'
         *  Switch: '<S552>/Switch1'
         *  Switch: '<S552>/Switch2'
         */
        VeHMIC_P_BatPwrUsageDisp = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S552>/Switch1' incorporates:
         *  Constant: '<S552>/Constant Value4'
         *  Switch: '<S552>/Switch2'
         *  Switch: '<S552>/Switch3'
         */
        VeHMIC_P_BatPwrUsageDisp = 0.0F;
    }

    /* End of Switch: '<S552>/Switch1' */
    /* End of Outputs for SubSystem: '<S371>/Protected Division' */

    /* Inport: '<Root>/VeHVTR_b_HV_BatPwrFA' */
    (void)Rte_Read_VeHVTR_b_HV_BatPwrFA_Value(&tmpRead_m);

    /* Inport: '<Root>/VeTAIR_T_FtEvapTmp_Tgt' */
    (void)Rte_Read_VeTAIR_T_FtEvapTmp_Tgt_Value(&rtb_Add1);

    /* Inport: '<Root>/VeTAIR_T_FtEvapTmp' */
    (void)Rte_Read_VeTAIR_T_FtEvapTmp_Value(&tmpRead_g);

    /* Gain: '<S553>/Gain' */
    VeHMIC_b_BatPwrUsageDispV = ((true) && tmpRead_m);

    /* Sum: '<S375>/Add1' */
    rtb_Add1 = tmpRead_g - rtb_Add1;

    /* Outputs for Atomic SubSystem: '<S375>/Protected Division' */
    /* Switch: '<S593>/Switch1' incorporates:
     *  Constant: '<S582>/Calib'
     *  Constant: '<S593>/Constant Value'
     *  Constant: '<S593>/Constant Value1'
     *  Constant: '<S593>/Constant Value2'
     *  Constant: '<S593>/Constant Value3'
     *  Logic: '<S593>/AND'
     *  RelationalOperator: '<S593>/Greater Than or Equal '
     *  RelationalOperator: '<S593>/Greater Than or Equal 1'
     *  RelationalOperator: '<S593>/Not Equal'
     *  RelationalOperator: '<S593>/Not Equal1'
     *  Switch: '<S593>/Switch2'
     *  Switch: '<S593>/Switch3'
     */
    if ((rtb_Add1 != 0.0F) && (KeHMIR_T_MaxTempDifferenceClng != 0.0F))
    {
        /* Switch: '<S593>/Switch1' incorporates:
         *  Product: '<S593>/Division'
         */
        rtb_Add1 /= KeHMIR_T_MaxTempDifferenceClng;
    }
    else if (rtb_Add1 > 0.0F)
    {
        /* Switch: '<S593>/Switch2' incorporates:
         *  Constant: '<S593>/MAXFLOAT'
         *  Switch: '<S593>/Switch1'
         */
        rtb_Add1 = 3.402823466E+38F;
    }
    else if (rtb_Add1 < 0.0F)
    {
        /* Switch: '<S593>/Switch3' incorporates:
         *  Constant: '<S593>/MINFLOAT'
         *  Switch: '<S593>/Switch1'
         *  Switch: '<S593>/Switch2'
         */
        rtb_Add1 = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S593>/Switch1' incorporates:
         *  Constant: '<S593>/Constant Value4'
         *  Switch: '<S593>/Switch2'
         *  Switch: '<S593>/Switch3'
         */
        rtb_Add1 = 0.0F;
    }

    /* End of Switch: '<S593>/Switch1' */
    /* End of Outputs for SubSystem: '<S375>/Protected Division' */

    /* Chart: '<S375>/AC_Compressor' incorporates:
     *  Inport: '<Root>/VeTAIR_b_ACCompReq'
     *  Lookup_n-D: '<S589>/Vector'
     *  Switch: '<S593>/Switch1'
     */
    /* Gateway: HMIR_MedTEH/HMIC_100ms_Disp/HMIC_100ms_Reserve/Determine_HVAC_Power_Usage/AC_Compressor */
    /* During: HMIR_MedTEH/HMIC_100ms_Disp/HMIC_100ms_Reserve/Determine_HVAC_Power_Usage/AC_Compressor */
    if (((uint32)HMIR_ac_DW.is_active_c2_HMIR_ac) == 0U)
    {
        /* Entry: HMIR_MedTEH/HMIC_100ms_Disp/HMIC_100ms_Reserve/Determine_HVAC_Power_Usage/AC_Compressor */
        HMIR_ac_DW.is_active_c2_HMIR_ac = 1U;

        /* Entry Internal: HMIR_MedTEH/HMIC_100ms_Disp/HMIC_100ms_Reserve/Determine_HVAC_Power_Usage/AC_Compressor */
        /* Transition: '<S577>:4' */
        HMIR_ac_DW.is_c2_HMIR_ac = HMIR_ac_IN_Init;

        /* Entry 'Init': '<S577>:8' */
        HMIR_ac_B.VeHMIR_b_AC_CompFactor = KeHMIR_b_AC_CompFactorReset;
        HMIR_ac_DW.AC_CompReqONTimer = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeTAIR_b_ACCompReq_Value(&tmpRead_f);
        switch (HMIR_ac_DW.is_c2_HMIR_ac)
        {
          case HMIR_ac_IN_FastFiltering:
            HMIR_ac_B.VeHMIR_b_AC_CompFactor = KeHMIR_b_AC_CompFactorSet;

            /* During 'FastFiltering': '<S577>:9' */
            if (HMIR_ac_DW.AC_CompReqONTimer > KeHMIR_t_AC_CompSlowFltrTimer)
            {
                /* Transition: '<S577>:12' */
                HMIR_ac_DW.is_c2_HMIR_ac = HMIR_ac_IN_SlowFiltering;
            }
            else if (!tmpRead_f)
            {
                /* Transition: '<S577>:35' */
                /* Transition: '<S577>:42' */
                HMIR_ac_DW.is_c2_HMIR_ac = HMIR_ac_IN_Init;

                /* Entry 'Init': '<S577>:8' */
                HMIR_ac_B.VeHMIR_b_AC_CompFactor = KeHMIR_b_AC_CompFactorReset;
                HMIR_ac_DW.AC_CompReqONTimer = 0.0F;
            }
            else
            {
                HMIR_ac_DW.AC_CompReqONTimer += KeHMIR_t_SampleRate;
            }
            break;

          case HMIR_ac_IN_Init:
            HMIR_ac_B.VeHMIR_b_AC_CompFactor = KeHMIR_b_AC_CompFactorReset;

            /* During 'Init': '<S577>:8' */
            if (tmpRead_f)
            {
                /* Transition: '<S577>:10' */
                HMIR_ac_DW.is_c2_HMIR_ac = HMIR_ac_IN_FastFiltering;

                /* Entry 'FastFiltering': '<S577>:9' */
                HMIR_ac_B.VeHMIR_k_AC_CompLPFConst = KeHMIR_k_AC_CompLPFConst;
                HMIR_ac_B.VeHMIR_b_AC_CompFactor = KeHMIR_b_AC_CompFactorSet;
            }
            break;

          default:
            /* During 'SlowFiltering': '<S577>:11' */
            if (!tmpRead_f)
            {
                /* Transition: '<S577>:14' */
                /* Transition: '<S577>:42' */
                HMIR_ac_DW.is_c2_HMIR_ac = HMIR_ac_IN_Init;

                /* Entry 'Init': '<S577>:8' */
                HMIR_ac_B.VeHMIR_b_AC_CompFactor = KeHMIR_b_AC_CompFactorReset;
                HMIR_ac_DW.AC_CompReqONTimer = 0.0F;
            }
            else
            {
                HMIR_ac_B.VeHMIR_k_AC_CompLPFConst = look1_iflf_binlca_16a
                    (rtb_Add1, ((const float32 *)&(KxHMIR_k_AC_CompFltrCnst[0])),
                     ((const float32 *)&(KtHMIR_k_AC_CompFltrCnst[0])), 10U);
            }
            break;
        }
    }

    /* End of Chart: '<S375>/AC_Compressor' */

    /* Outputs for Atomic SubSystem: '<S375>/LowpassT Reset Enabled1' */
    /* Switch: '<S591>/Switch' incorporates:
     *  Constant: '<S375>/FALSE Constant1'
     *  Constant: '<S375>/TRUE Constant1'
     *  Inport: '<Root>/VeACCR_P_HVAC_CompPwrUsage'
     *  Switch: '<S591>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S591>/Switch' incorporates:
         *  Constant: '<S375>/Conversion to KW5'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        if (true)
        {
            (void)Rte_Read_VeACCR_P_HVAC_CompPwrUsage_Value(&rtb_Add3);

            /* Switch: '<S591>/Switch' incorporates:
             *  Constant: '<S586>/Calib'
             *  Constant: '<S588>/Calib'
             *  Inport: '<Root>/VeACCR_P_HVAC_CompPwrUsage'
             *  MinMax: '<S591>/Maximum'
             *  Product: '<S375>/Product3'
             *  Product: '<S591>/Multiplication'
             *  Product: '<S591>/Multiplication1'
             *  Sum: '<S591>/Subtraction'
             *  Sum: '<S591>/Summation'
             *  Switch: '<S591>/Switch2'
             *  UnitDelay: '<S591>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_c += (((rtb_Add3 *
                KeHMIR_k_HVAC_CompPwrUsage_UnitConv) -
                HMIR_ac_DW.UnitDelay_DSTATE_c) * KeHMIR_t_100msTask) * (1.0F /
                fmaxf(HMIR_ac_B.VeHMIR_k_AC_CompLPFConst, KeHMIR_t_100msTask));
        }
    }

    /* End of Switch: '<S591>/Switch' */
    /* End of Outputs for SubSystem: '<S375>/LowpassT Reset Enabled1' */

    /* Inport: '<Root>/VeENGR_T_EngCoolantTemp' */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value(&rtb_Switch_hi);

    /* Inport: '<Root>/VeTHMR_T_HtrCorClnt_TmpIn' */
    (void)Rte_Read_VeTHMR_T_HtrCorClnt_TmpIn_Value(&tmpRead_i);

    /* Inport: '<Root>/VeTAIR_T_HtrCoreTmp_Tgt' */
    (void)Rte_Read_VeTAIR_T_HtrCoreTmp_Tgt_Value(&tmpRead_h);

    /* Switch: '<S375>/Switch1' incorporates:
     *  Constant: '<S584>/Calib'
     */
    if (KeHMIR_b_UseEngClnt_Temp)
    {
        tmpRead_i = rtb_Switch_hi;
    }

    /* End of Switch: '<S375>/Switch1' */

    /* Sum: '<S375>/Add3' */
    rtb_Add3 = tmpRead_h - tmpRead_i;

    /* Outputs for Atomic SubSystem: '<S375>/Protected Division1' */
    /* Switch: '<S594>/Switch1' incorporates:
     *  Constant: '<S583>/Calib'
     *  Constant: '<S594>/Constant Value'
     *  Constant: '<S594>/Constant Value1'
     *  Constant: '<S594>/Constant Value2'
     *  Constant: '<S594>/Constant Value3'
     *  Logic: '<S594>/AND'
     *  RelationalOperator: '<S594>/Greater Than or Equal '
     *  RelationalOperator: '<S594>/Greater Than or Equal 1'
     *  RelationalOperator: '<S594>/Not Equal'
     *  RelationalOperator: '<S594>/Not Equal1'
     *  Switch: '<S594>/Switch2'
     *  Switch: '<S594>/Switch3'
     */
    if ((rtb_Add3 != 0.0F) && (KeHMIR_T_MaxTempDifferenceHtng != 0.0F))
    {
        /* Switch: '<S594>/Switch1' incorporates:
         *  Product: '<S594>/Division'
         */
        rtb_Add3 /= KeHMIR_T_MaxTempDifferenceHtng;
    }
    else if (rtb_Add3 > 0.0F)
    {
        /* Switch: '<S594>/Switch2' incorporates:
         *  Constant: '<S594>/MAXFLOAT'
         *  Switch: '<S594>/Switch1'
         */
        rtb_Add3 = 3.402823466E+38F;
    }
    else if (rtb_Add3 < 0.0F)
    {
        /* Switch: '<S594>/Switch3' incorporates:
         *  Constant: '<S594>/MINFLOAT'
         *  Switch: '<S594>/Switch1'
         *  Switch: '<S594>/Switch2'
         */
        rtb_Add3 = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S594>/Switch1' incorporates:
         *  Constant: '<S594>/Constant Value4'
         *  Switch: '<S594>/Switch2'
         *  Switch: '<S594>/Switch3'
         */
        rtb_Add3 = 0.0F;
    }

    /* End of Switch: '<S594>/Switch1' */
    /* End of Outputs for SubSystem: '<S375>/Protected Division1' */

    /* Chart: '<S375>/HVC_Htr' incorporates:
     *  Inport: '<Root>/VeHTRR_b_HVAC_HtrReq'
     *  Lookup_n-D: '<S590>/Vector'
     *  Switch: '<S594>/Switch1'
     */
    /* Gateway: HMIR_MedTEH/HMIC_100ms_Disp/HMIC_100ms_Reserve/Determine_HVAC_Power_Usage/HVC_Htr */
    /* During: HMIR_MedTEH/HMIC_100ms_Disp/HMIC_100ms_Reserve/Determine_HVAC_Power_Usage/HVC_Htr */
    if (((uint32)HMIR_ac_DW.is_active_c3_HMIR_ac) == 0U)
    {
        /* Entry: HMIR_MedTEH/HMIC_100ms_Disp/HMIC_100ms_Reserve/Determine_HVAC_Power_Usage/HVC_Htr */
        HMIR_ac_DW.is_active_c3_HMIR_ac = 1U;

        /* Entry Internal: HMIR_MedTEH/HMIC_100ms_Disp/HMIC_100ms_Reserve/Determine_HVAC_Power_Usage/HVC_Htr */
        /* Transition: '<S579>:4' */
        HMIR_ac_DW.is_c3_HMIR_ac = HMIR_ac_IN_Init;

        /* Entry 'Init': '<S579>:8' */
        HMIR_ac_B.VeHMIR_b_HVC_HtrFactor = KeHMIR_b_HVC_HtrFactorReset;
        HMIR_ac_DW.HVC_HtrReqONTimer = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeHTRR_b_HVAC_HtrReq_Value(&tmpRead_e);
        switch (HMIR_ac_DW.is_c3_HMIR_ac)
        {
          case HMIR_ac_IN_FastFiltering:
            HMIR_ac_B.VeHMIR_b_HVC_HtrFactor = KeHMIR_b_HVC_HtrFactorSet;

            /* During 'FastFiltering': '<S579>:9' */
            if (HMIR_ac_DW.HVC_HtrReqONTimer > KeHMIR_t_HVC_HtrSlowFltrTimer)
            {
                /* Transition: '<S579>:12' */
                HMIR_ac_DW.is_c3_HMIR_ac = HMIR_ac_IN_SlowFiltering;
            }
            else if (!tmpRead_e)
            {
                /* Transition: '<S579>:35' */
                /* Transition: '<S579>:32' */
                HMIR_ac_DW.is_c3_HMIR_ac = HMIR_ac_IN_Init;

                /* Entry 'Init': '<S579>:8' */
                HMIR_ac_B.VeHMIR_b_HVC_HtrFactor = KeHMIR_b_HVC_HtrFactorReset;
                HMIR_ac_DW.HVC_HtrReqONTimer = 0.0F;
            }
            else
            {
                HMIR_ac_DW.HVC_HtrReqONTimer += KeHMIR_t_SampleRate;
            }
            break;

          case HMIR_ac_IN_Init:
            HMIR_ac_B.VeHMIR_b_HVC_HtrFactor = KeHMIR_b_HVC_HtrFactorReset;

            /* During 'Init': '<S579>:8' */
            if (tmpRead_e)
            {
                /* Transition: '<S579>:10' */
                HMIR_ac_DW.is_c3_HMIR_ac = HMIR_ac_IN_FastFiltering;

                /* Entry 'FastFiltering': '<S579>:9' */
                HMIR_ac_B.VeHMIR_k_HVC_HtrLPFConst = KeHMIR_k_HVC_HtrLPFConst;
                HMIR_ac_B.VeHMIR_b_HVC_HtrFactor = KeHMIR_b_HVC_HtrFactorSet;
            }
            break;

          default:
            /* During 'SlowFiltering': '<S579>:11' */
            if (!tmpRead_e)
            {
                /* Transition: '<S579>:14' */
                /* Transition: '<S579>:32' */
                HMIR_ac_DW.is_c3_HMIR_ac = HMIR_ac_IN_Init;

                /* Entry 'Init': '<S579>:8' */
                HMIR_ac_B.VeHMIR_b_HVC_HtrFactor = KeHMIR_b_HVC_HtrFactorReset;
                HMIR_ac_DW.HVC_HtrReqONTimer = 0.0F;
            }
            else
            {
                HMIR_ac_B.VeHMIR_k_HVC_HtrLPFConst = look1_iflf_binlca_16a
                    (rtb_Add3, ((const float32 *)&(KxHMIR_k_HVC_HtrFltrCnst[0])),
                     ((const float32 *)&(KtHMIR_k_HVC_HtrFltrCnst[0])), 10U);
            }
            break;
        }
    }

    /* End of Chart: '<S375>/HVC_Htr' */

    /* Outputs for Atomic SubSystem: '<S375>/LowpassT Reset Enabled2' */
    /* Switch: '<S592>/Switch' incorporates:
     *  Constant: '<S375>/FALSE Constant2'
     *  Constant: '<S375>/TRUE Constant2'
     *  Inport: '<Root>/VeHTRR_P_HVAC_HtrPwr'
     *  Switch: '<S592>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S592>/Switch' incorporates:
         *  Constant: '<S375>/Conversion to KW2'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
    }
    else
    {
        if (true)
        {
            (void)Rte_Read_VeHTRR_P_HVAC_HtrPwr_Value(&rtb_Product);

            /* Switch: '<S592>/Switch' incorporates:
             *  Constant: '<S587>/Calib'
             *  Constant: '<S588>/Calib'
             *  Inport: '<Root>/VeHTRR_P_HVAC_HtrPwr'
             *  MinMax: '<S592>/Maximum'
             *  Product: '<S375>/Product4'
             *  Product: '<S592>/Multiplication'
             *  Product: '<S592>/Multiplication1'
             *  Sum: '<S592>/Subtraction'
             *  Sum: '<S592>/Summation'
             *  Switch: '<S592>/Switch2'
             *  UnitDelay: '<S592>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_d += (((rtb_Product *
                KeHMIR_k_HVAC_HVC_HtrPwrUsage_UnitConv) -
                HMIR_ac_DW.UnitDelay_DSTATE_d) * KeHMIR_t_100msTask) * (1.0F /
                fmaxf(HMIR_ac_B.VeHMIR_k_HVC_HtrLPFConst, KeHMIR_t_100msTask));
        }
    }

    /* End of Switch: '<S592>/Switch' */
    /* End of Outputs for SubSystem: '<S375>/LowpassT Reset Enabled2' */

    /* Product: '<S375>/Product' incorporates:
     *  Constant: '<S585>/Calib'
     *  Product: '<S375>/Product1'
     *  Product: '<S375>/Product2'
     *  Sum: '<S375>/Add'
     */
    rtb_Product = ((HMIR_ac_B.VeHMIR_b_AC_CompFactor ?
                    HMIR_ac_DW.UnitDelay_DSTATE_c : 0.0F) +
                   (HMIR_ac_B.VeHMIR_b_HVC_HtrFactor ?
                    HMIR_ac_DW.UnitDelay_DSTATE_d : 0.0F)) *
        KeHMIR_k_HVACPwr_UnitConv;

    /* Outputs for Atomic SubSystem: '<S375>/Protected Division2' */
    /* Switch: '<S595>/Switch1' incorporates:
     *  Constant: '<S581>/Calib'
     *  Constant: '<S595>/Constant Value'
     *  Constant: '<S595>/Constant Value1'
     *  Constant: '<S595>/Constant Value2'
     *  Constant: '<S595>/Constant Value3'
     *  Logic: '<S595>/AND'
     *  RelationalOperator: '<S595>/Greater Than or Equal '
     *  RelationalOperator: '<S595>/Greater Than or Equal 1'
     *  RelationalOperator: '<S595>/Not Equal'
     *  RelationalOperator: '<S595>/Not Equal1'
     *  Switch: '<S595>/Switch2'
     *  Switch: '<S595>/Switch3'
     */
    if ((rtb_Product != 0.0F) && (KeHMIR_P_HVAC_NormalizationConst != 0.0F))
    {
        /* Switch: '<S595>/Switch1' incorporates:
         *  Product: '<S595>/Division'
         */
        rtb_Product /= KeHMIR_P_HVAC_NormalizationConst;
    }
    else if (rtb_Product > 0.0F)
    {
        /* Switch: '<S595>/Switch2' incorporates:
         *  Constant: '<S595>/MAXFLOAT'
         *  Switch: '<S595>/Switch1'
         */
        rtb_Product = 3.402823466E+38F;
    }
    else if (rtb_Product < 0.0F)
    {
        /* Switch: '<S595>/Switch3' incorporates:
         *  Constant: '<S595>/MINFLOAT'
         *  Switch: '<S595>/Switch1'
         *  Switch: '<S595>/Switch2'
         */
        rtb_Product = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S595>/Switch1' incorporates:
         *  Constant: '<S595>/Constant Value4'
         *  Switch: '<S595>/Switch2'
         *  Switch: '<S595>/Switch3'
         */
        rtb_Product = 0.0F;
    }

    /* End of Switch: '<S595>/Switch1' */
    /* End of Outputs for SubSystem: '<S375>/Protected Division2' */

    /* Inport: '<Root>/VeTRNR_e_TargetGear' */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value(&tmpRead_o);

    /* Inport: '<Root>/VeOHSR_e_SGrDsrd_GSI' */
    (void)Rte_Read_VeOHSR_e_SGrDsrd_GSI_Value(&tmpRead_n);

    /* Inport: '<Root>/VeTHMR_b_HVAC_HeatReq' */
    (void)Rte_Read_VeTHMR_b_HVAC_HeatReq_Value(&tmpRead_l);

    /* RelationalOperator: '<S375>/Comparison' incorporates:
     *  Constant: '<S580>/Calib'
     */
    VeHMIC_b_HVACPwrUsageDIspV = (rtb_Product > KeHMIR_P_HVACPwrUsageV_Threshld);

    /* Switch: '<S375>/Switch4' incorporates:
     *  Logic: '<S375>/Logical Operator'
     */
    if ((rtb_Product != 0.0F) || tmpRead_l)
    {
        /* Switch: '<S375>/Switch4' */
        VeHMIC_P_HVACPwrUsageDisp = rtb_Product;
    }
    else
    {
        /* Switch: '<S375>/Switch4' incorporates:
         *  Constant: '<S375>/Conversion to KW1'
         */
        VeHMIC_P_HVACPwrUsageDisp = 0.0F;
    }

    /* End of Switch: '<S375>/Switch4' */

    /* Switch: '<S380>/Switch4' */
    if (HMIR_ac_B.TmpSignalConversionAtVeOHSR_b_EnaGSIOutp)
    {
        /* If: '<S380>/If' incorporates:
         *  DataTypeConversion: '<S380>/Data Type Conversion'
         *  DataTypeConversion: '<S380>/Data Type Conversion1'
         *  Inport: '<Root>/VeOHSR_e_SGrDsrd_GSI'
         *  Inport: '<Root>/VeTRNR_e_TargetGear'
         *  RelationalOperator: '<S380>/Comparison'
         *  RelationalOperator: '<S380>/Comparison2'
         */
        if (tmpRead_o < ((TeTRNR_e_TCMGearStat)tmpRead_n))
        {
            /* Outputs for IfAction SubSystem: '<S380>/Upshift' incorporates:
             *  ActionPort: '<S748>/Action Port'
             */
            /* Switch: '<S380>/Switch4' incorporates:
             *  Constant: '<S760>/Constant'
             *  SignalConversion generated from: '<S748>/HEV_EVT_MD1'
             */
            VeHMIC_e_GSIStat = CeHMIR_e_UpShift;

            /* End of Outputs for SubSystem: '<S380>/Upshift' */
        }
        else if (tmpRead_o > ((TeTRNR_e_TCMGearStat)tmpRead_n))
        {
            /* Outputs for IfAction SubSystem: '<S380>/Downshift' incorporates:
             *  ActionPort: '<S742>/Action Port'
             */
            /* Switch: '<S380>/Switch4' incorporates:
             *  Constant: '<S752>/Constant'
             *  SignalConversion generated from: '<S742>/HEV_EVT_MD1'
             */
            VeHMIC_e_GSIStat = CeHMIR_e_DownShift;

            /* End of Outputs for SubSystem: '<S380>/Downshift' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S380>/None' incorporates:
             *  ActionPort: '<S747>/Action Port'
             */
            /* Switch: '<S380>/Switch4' incorporates:
             *  Constant: '<S759>/Constant'
             *  SignalConversion generated from: '<S747>/HEV_EVT_MD1'
             */
            VeHMIC_e_GSIStat = CeHMIR_e_None;

            /* End of Outputs for SubSystem: '<S380>/None' */
        }

        /* End of If: '<S380>/If' */
    }
    else
    {
        /* Switch: '<S380>/Switch4' incorporates:
         *  Constant: '<S744>/Constant'
         */
        VeHMIC_e_GSIStat = CeHMIR_e_None;
    }

    /* End of Switch: '<S380>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S741>/Count Down  Reset Enabled' */
    /* Switch: '<S749>/Switch1' incorporates:
     *  Constant: '<S741>/TRUE Constant'
     *  Constant: '<S749>/Constant Value'
     *  DataTypeConversion: '<S741>/Data Type Conversion'
     *  Logic: '<S749>/AND'
     *  RelationalOperator: '<S741>/Comparison5'
     *  RelationalOperator: '<S749>/Greater  Than'
     *  Switch: '<S380>/Switch4'
     *  Switch: '<S749>/Switch2'
     *  UnitDelay: '<S741>/Unit Delay'
     *  UnitDelay: '<S749>/Unit Delay'
     */
    if (((uint16)VeHMIC_e_GSIStat) != HMIR_ac_DW.UnitDelay_DSTATE_mr)
    {
        /* Switch: '<S749>/Switch1' incorporates:
         *  Constant: '<S751>/Calib'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_bg = KeHMIR_n_GSIStatus_Dbnc;
    }
    else
    {
        if ((true) && (HMIR_ac_DW.UnitDelay_DSTATE_bg > ((uint16)0U)))
        {
            /* Switch: '<S749>/Switch2' incorporates:
             *  Constant: '<S749>/Constant Value1'
             *  Sum: '<S749>/Subtraction'
             *  Switch: '<S749>/Switch1'
             *  UnitDelay: '<S749>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_bg -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S749>/Switch1' */

    /* Switch: '<S741>/Switch' incorporates:
     *  Constant: '<S749>/Constant Value2'
     *  RelationalOperator: '<S749>/Greater  Than1'
     */
    if (HMIR_ac_DW.UnitDelay_DSTATE_bg > ((uint16)0U))
    {
        /* Switch: '<S741>/Switch' */
        rtb_Switch1_bj = HMIR_ac_ConstB.DTCBlk84;
    }
    else
    {
        /* Switch: '<S741>/Switch' incorporates:
         *  DataTypeConversion: '<S741>/Data Type Conversion'
         *  Switch: '<S380>/Switch4'
         */
        rtb_Switch1_bj = (uint16)VeHMIC_e_GSIStat;
    }

    /* End of Switch: '<S741>/Switch' */
    /* End of Outputs for SubSystem: '<S741>/Count Down  Reset Enabled' */

    /* Switch: '<S755>/Switch1' incorporates:
     *  Constant: '<S745>/TRUE Constant'
     *  Constant: '<S755>/Constant Value'
     *  Logic: '<S755>/AND'
     *  RelationalOperator: '<S745>/Comparison5'
     *  RelationalOperator: '<S755>/Greater  Than'
     *  Switch: '<S755>/Switch2'
     *  UnitDelay: '<S745>/Unit Delay1'
     *  UnitDelay: '<S755>/Unit Delay'
     */
    if (rtb_Switch1_bj != HMIR_ac_DW.UnitDelay1_DSTATE_b)
    {
        /* Switch: '<S755>/Switch1' incorporates:
         *  Constant: '<S753>/Calib'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_ch = KeHMIR_n_GSISt_Hold;
    }
    else
    {
        if ((true) && (HMIR_ac_DW.UnitDelay_DSTATE_ch > ((uint16)0U)))
        {
            /* Switch: '<S755>/Switch2' incorporates:
             *  Constant: '<S755>/Constant Value1'
             *  Sum: '<S755>/Subtraction'
             *  Switch: '<S755>/Switch1'
             *  UnitDelay: '<S755>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_ch -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S755>/Switch1' */

    /* Switch: '<S754>/Switch' incorporates:
     *  Constant: '<S755>/Constant Value2'
     *  RelationalOperator: '<S755>/Greater  Than1'
     */
    if (HMIR_ac_DW.UnitDelay_DSTATE_ch <= ((uint16)0U))
    {
        /* Switch: '<S754>/Switch' */
        HMIR_ac_DW.UnitDelay_DSTATE_j2 = rtb_Switch1_bj;
    }

    /* End of Switch: '<S754>/Switch' */

    /* Switch: '<S380>/Switch2' */
    if (HMIR_ac_B.TmpSignalConversionAtVeOHSR_b_EnaGSIOutp)
    {
        /* Switch: '<S380>/Switch2' */
        rtb_Switch1_mn = HMIR_ac_DW.UnitDelay_DSTATE_j2;
    }
    else
    {
        /* Switch: '<S380>/Switch2' */
        rtb_Switch1_mn = HMIR_ac_ConstB.DTCBlk87;
    }

    /* End of Switch: '<S380>/Switch2' */

    /* Switch: '<S758>/Switch1' incorporates:
     *  Constant: '<S746>/TRUE Constant'
     *  Constant: '<S758>/Constant Value'
     *  Logic: '<S758>/AND'
     *  RelationalOperator: '<S746>/Comparison5'
     *  RelationalOperator: '<S758>/Greater  Than'
     *  Switch: '<S758>/Switch2'
     *  UnitDelay: '<S746>/Unit Delay1'
     *  UnitDelay: '<S758>/Unit Delay'
     */
    if (rtb_Switch1_mn != HMIR_ac_DW.UnitDelay1_DSTATE_g)
    {
        /* Switch: '<S758>/Switch1' incorporates:
         *  Constant: '<S756>/Calib'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_e = KeHMIR_n_GSISt_Enabl_Hold;
    }
    else
    {
        if ((true) && (HMIR_ac_DW.UnitDelay_DSTATE_e > ((uint16)0U)))
        {
            /* Switch: '<S758>/Switch2' incorporates:
             *  Constant: '<S758>/Constant Value1'
             *  Sum: '<S758>/Subtraction'
             *  Switch: '<S758>/Switch1'
             *  UnitDelay: '<S758>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_e -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S758>/Switch1' */

    /* Switch: '<S757>/Switch' incorporates:
     *  Constant: '<S758>/Constant Value2'
     *  RelationalOperator: '<S758>/Greater  Than1'
     */
    if (HMIR_ac_DW.UnitDelay_DSTATE_e > ((uint16)0U))
    {
        /* Switch: '<S757>/Switch' incorporates:
         *  UnitDelay: '<S757>/Unit Delay'
         */
        VeHMIC_e_GSISt_Dbncd = HMIR_ac_DW.UnitDelay_DSTATE_cc;
    }
    else
    {
        /* Switch: '<S757>/Switch' */
        VeHMIC_e_GSISt_Dbncd = rtb_Switch1_mn;
    }

    /* End of Switch: '<S757>/Switch' */

    /* Switch: '<S368>/Switch1' incorporates:
     *  Constant: '<S387>/Calib'
     *  Inport: '<Root>/VeBPCR_b_MIL_OnRq_BPCM_Debounced'
     *  Inport: '<Root>/VeBPCR_b_ThrmlRnawyFlg'
     *  Inport: '<Root>/VeGENR_b_IDCMThrmlRunAway'
     *  Inport: '<Root>/VeIDCR_e_APM_ThermalRunaway'
     *  Inport: '<Root>/VeIDCR_e_stModeRqAPM'
     *  Switch: '<S368>/Switch2'
     */
    if (KeHMIR_b_ChinaMarket)
    {
        (void)Rte_Read_VeIDCR_e_APM_ThermalRunaway_Value(&tmpRead_13);
        (void)Rte_Read_VeIDCR_e_stModeRqAPM_Value(&tmpRead_12);
        (void)Rte_Read_VeGENR_b_IDCMThrmlRunAway_Value(&tmpRead_11);
        (void)Rte_Read_VeBPCR_b_ThrmlRnawyFlg_Value(&tmpRead_q);

        /* Switch: '<S368>/Switch1' incorporates:
         *  Constant: '<S385>/Constant'
         *  Constant: '<S386>/Constant'
         *  Constant: '<S388>/Calib'
         *  Constant: '<S389>/Calib'
         *  Inport: '<Root>/VeBPCR_b_ThrmlRnawyFlg'
         *  Inport: '<Root>/VeGENR_b_IDCMThrmlRunAway'
         *  Inport: '<Root>/VeIDCR_e_APM_ThermalRunaway'
         *  Inport: '<Root>/VeIDCR_e_stModeRqAPM'
         *  Logic: '<S368>/Logical Operator'
         *  Logic: '<S368>/Logical Operator2'
         *  Logic: '<S368>/Logical Operator3'
         *  RelationalOperator: '<S368>/Comparison3'
         *  RelationalOperator: '<S368>/Comparison4'
         */
        VeHMIC_b_ThrmlRnAway_Lmp = (((((tmpRead_12 ==
            CeGENR_e_APM_Critical_Fault) && (KeHMIR_b_APMstModeRqEn)) ||
            ((tmpRead_13 == CeBPCR_e_DetectThrmlRnawy) &&
             (KeHMIR_b_APMThermalRunawayEn))) || tmpRead_11) || tmpRead_q);
        (void)Rte_Read_VeBPCR_b_MIL_OnRq_BPCM_Debounced_Value(&rtb_AND_b0);

        /* Switch: '<S368>/Switch2' incorporates:
         *  Inport: '<Root>/VeBPCR_b_MIL_OnRq_BPCM_Debounced'
         *  Logic: '<S368>/Logical3'
         */
        VeHMIC_b_MiL_OnRq_BPCM = (rtb_AND_b0 ||
            (HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_HEVOnRqBPC));
    }
    else
    {
        /* Switch: '<S368>/Switch1' incorporates:
         *  Constant: '<S368>/Constant1'
         */
        VeHMIC_b_ThrmlRnAway_Lmp = false;

        /* Switch: '<S368>/Switch2' */
        VeHMIC_b_MiL_OnRq_BPCM =
            HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_HEVOnRqBPC;
    }

    /* End of Switch: '<S368>/Switch1' */
#if Rte_SysCon_Variant_HMIR_5

    /* Outputs for Atomic SubSystem: '<S367>/Variant Subsystem' */
    /* Outputs for Atomic SubSystem: '<S367>/M182' */
    /* Inport: '<Root>/VeBTRR_T_BattTmp_MinDerateZone' */
    (void)Rte_Read_VeBTRR_T_BattTmp_MinDerateZone_Value(&tmpRead_w);

    /* Inport: '<Root>/VeBTRR_T_BattTmp_MaxDerateZone' */
    (void)Rte_Read_VeBTRR_T_BattTmp_MaxDerateZone_Value(&tmpRead_v);

    /* Inport: '<Root>/VeBTRR_T_BattTmp_MinCmfrtZone' */
    (void)Rte_Read_VeBTRR_T_BattTmp_MinCmfrtZone_Value(&tmpRead_u);

    /* Inport: '<Root>/VeBTRR_T_BattTmp_MaxCmfrtZone' */
    (void)Rte_Read_VeBTRR_T_BattTmp_MaxCmfrtZone_Value(&tmpRead_t);

    /* Inport: '<Root>/VeBTRR_T_BattDisplayTemp' */
    (void)Rte_Read_VeBTRR_T_BattDisplayTemp_Value(&tmpRead_s);

    /* Outputs for Atomic SubSystem: '<S382>/M182' */
    /* Gain: '<S770>/Gain' */
    VeHMIC_T_HVBattTempDisp = 1.0F * tmpRead_s;

    /* Gain: '<S766>/Gain' */
    VeHMIC_T_MaxCmfrtZnHVBattDisp = 1.0F * tmpRead_t;

    /* Gain: '<S767>/Gain' */
    VeHMIC_T_MinCmfrtZnHVBattDisp = 1.0F * tmpRead_u;

    /* Gain: '<S768>/Gain' */
    VeHMIC_T_MaxDrtngZnHVBattDisp = 1.0F * tmpRead_v;

    /* Gain: '<S769>/Gain' */
    VeHMIC_T_MinDrtngZnHVBattDisp = 1.0F * tmpRead_w;

    /* Outputs for Atomic SubSystem: '<S764>/Turn On Delay Sample15' */
    /* Outputs for Atomic SubSystem: '<S771>/EdgeRising' */
    /* Logic: '<S772>/AND' incorporates:
     *  Logic: '<S772>/OR1'
     *  UnitDelay: '<S772>/Unit Delay'
     */
    rtb_AND_b0 = ((HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_BatShtOffF) &&
                  (!HMIR_ac_DW.UnitDelay_DSTATE_kf));

    /* Update for UnitDelay: '<S772>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_kf =
        HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_BatShtOffF;

    /* End of Outputs for SubSystem: '<S771>/EdgeRising' */

    /* Switch: '<S771>/Switch1' incorporates:
     *  Logic: '<S771>/OR'
     *  Logic: '<S771>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_BatShtOffF) || rtb_AND_b0)
    {
        /* Sum: '<S771>/Summation' incorporates:
         *  Constant: '<S771>/Constant Value1'
         *  Switch: '<S771>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_fc = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S771>/Summation' incorporates:
         *  Constant: '<S771>/Constant Value'
         *  UnitDelay: '<S771>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_fc = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_fc));

        /* MinMax: '<S771>/Minimum' incorporates:
         *  Constant: '<S765>/Calib'
         */
        if (KeHMIR_Cnt_HVBatteryShutOff < HMIR_ac_DW.UnitDelay_DSTATE_fc)
        {
            /* Sum: '<S771>/Summation' incorporates:
             *  Switch: '<S771>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_fc = KeHMIR_Cnt_HVBatteryShutOff;
        }

        /* End of MinMax: '<S771>/Minimum' */
    }

    /* End of Switch: '<S771>/Switch1' */

    /* Logic: '<S771>/AND' incorporates:
     *  Constant: '<S765>/Calib'
     *  RelationalOperator: '<S771>/Greater  Than'
     */
    HMIR_ac_B.AND_bd = ((HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_BatShtOffF) &&
                        (HMIR_ac_DW.UnitDelay_DSTATE_fc >=
                         KeHMIR_Cnt_HVBatteryShutOff));

    /* End of Outputs for SubSystem: '<S764>/Turn On Delay Sample15' */
    /* End of Outputs for SubSystem: '<S382>/M182' */

    /* Inport: '<Root>/VeHVTR_P_HV_AccPwr' */
    (void)Rte_Read_VeHVTR_P_HV_AccPwr_Value(&tmpRead_z);

    /* Outputs for Atomic SubSystem: '<S384>/Suggested_Speed' */
    /* Lookup_n-D: '<S806>/Vector' incorporates:
     *  Inport: '<Root>/VeHVTR_P_HV_AccPwr'
     */
    VeHMIR_v_OptThdSugSpd = look1_iflf_binlca_16a(tmpRead_z, ((const float32 *)
        &(KxHMIR_Cf_SpdOptmSug[0])), ((const float32 *)&(KtHMIR_Cf_SpdOptmSug[0])),
        6U);

    /* Sum: '<S780>/Sum1' incorporates:
     *  Constant: '<S795>/Calib'
     */
    rtb_Product = HMIR_ac_B.TmpSignalConversionAtVeASLR_v_TSRDispSpd -
        KeHMIR_v_DispSpdLimOfs;

    /* Sum: '<S780>/Sum9' incorporates:
     *  Constant: '<S799>/Calib'
     */
    VeHMIR_v_LmtLowThdSugSpd = rtb_Product - KeHMIR_v_SugSpdLmtDltUp;

    /* Sum: '<S780>/Sum10' incorporates:
     *  Constant: '<S798>/Calib'
     */
    VeHMIR_v_LmtLowMinSugSpd = rtb_Product - KeHMIR_v_SugSpdLmtDltDwn;

    /* Sum: '<S780>/Sum12' incorporates:
     *  Constant: '<S803>/Calib'
     */
    VeHMIR_v_OptMaxSugSpd = VeHMIR_v_OptThdSugSpd - KeHMIR_v_SugSpdOptDltUp;

    /* Sum: '<S780>/Sum13' incorporates:
     *  Constant: '<S802>/Calib'
     */
    VeHMIR_v_OptMinSugSpd = VeHMIR_v_OptThdSugSpd - KeHMIR_v_SugSpdOptDltDwn;

    /* Sum: '<S780>/Sum5' incorporates:
     *  Constant: '<S801>/Calib'
     */
    VeHMIR_v_LmtMaxSugSpd = rtb_Product - KeHMIR_v_SugSpdLmtLowDltUp;

    /* Sum: '<S780>/Sum6' incorporates:
     *  Constant: '<S800>/Calib'
     */
    VeHMIR_v_LmtMinSugSpd = rtb_Product - KeHMIR_v_SugSpdLmtLowDltDwn;

    /* Lookup_n-D: '<S807>/Vector' incorporates:
     *  Sum: '<S780>/Sum1'
     */
    VeHMIR_v_MaxSugSpd = look1_iflf_binlca_16a(rtb_Product, ((const float32 *)
        &(KxHMIR_v_SpdMaxSug[0])), ((const float32 *)&(KtHMIR_v_SpdMaxSug[0])),
        12U);

    /* Lookup_n-D: '<S808>/Vector' incorporates:
     *  Sum: '<S780>/Sum1'
     */
    VeHMIR_v_MinSugSpd = look1_iflf_binlca_16a(rtb_Product, ((const float32 *)
        &(KxHMIR_v_SpdMinSug[0])), ((const float32 *)&(KtHMIR_v_SpdMinSug[0])),
        12U);

    /* Lookup_n-D: '<S809>/Vector' incorporates:
     *  Sum: '<S780>/Sum1'
     */
    VeHMIR_v_ThdSugSpd = look1_iflf_binlca_16a(rtb_Product, ((const float32 *)
        &(KxHMIR_v_SpdThdSug[0])), ((const float32 *)&(KtHMIR_v_SpdThdSug[0])),
        12U);

    /* Switch: '<S780>/Switch2' incorporates:
     *  Constant: '<S790>/Calib'
     */
    if (KeHMIR_b_OptmSugSpdEnbl)
    {
        /* Switch: '<S780>/Switch4' incorporates:
         *  RelationalOperator: '<S780>/Comparison4'
         */
        if (VeHMIR_v_OptThdSugSpd <= rtb_Product)
        {
            /* Switch: '<S780>/Switch5' incorporates:
             *  Constant: '<S797>/Calib'
             *  RelationalOperator: '<S780>/Comparison8'
             *  Sum: '<S780>/Sum8'
             */
            if ((rtb_Product - VeHMIR_v_OptThdSugSpd) >= KeHMIR_v_MaxDiffAllwd)
            {
                /* Switch: '<S780>/Switch2' incorporates:
                 *  Switch: '<S780>/Switch4'
                 */
                rtb_Switch2_h4[0] = VeHMIR_v_LmtLowThdSugSpd;
                rtb_Switch2_h4[1] = VeHMIR_v_LmtLowMinSugSpd;
                rtb_Switch2_h4[2] = VeHMIR_v_LmtLowThdSugSpd;
            }
            else
            {
                /* Switch: '<S780>/Switch2' incorporates:
                 *  Switch: '<S780>/Switch4'
                 */
                rtb_Switch2_h4[0] = VeHMIR_v_OptMaxSugSpd;
                rtb_Switch2_h4[1] = VeHMIR_v_OptMinSugSpd;
                rtb_Switch2_h4[2] = VeHMIR_v_OptThdSugSpd;
            }

            /* End of Switch: '<S780>/Switch5' */
        }
        else
        {
            /* Switch: '<S780>/Switch2' incorporates:
             *  Switch: '<S780>/Switch4'
             */
            rtb_Switch2_h4[0] = VeHMIR_v_LmtMaxSugSpd;
            rtb_Switch2_h4[1] = VeHMIR_v_LmtMinSugSpd;
            rtb_Switch2_h4[2] = rtb_Product;
        }

        /* End of Switch: '<S780>/Switch4' */
    }
    else
    {
        /* Switch: '<S780>/Switch2' */
        rtb_Switch2_h4[0] = VeHMIR_v_MaxSugSpd;
        rtb_Switch2_h4[1] = VeHMIR_v_MinSugSpd;
        rtb_Switch2_h4[2] = VeHMIR_v_ThdSugSpd;
    }

    /* End of Switch: '<S780>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S780>/Turn On Delay Sample15' */
    /* Outputs for Atomic SubSystem: '<S813>/EdgeRising' */
    /* Logic: '<S817>/AND' incorporates:
     *  Logic: '<S817>/OR1'
     *  UnitDelay: '<S817>/Unit Delay'
     */
    rtb_AND_b0 = ((HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_FrontWiper) &&
                  (!HMIR_ac_DW.UnitDelay_DSTATE_oy));

    /* Update for UnitDelay: '<S817>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_oy =
        HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_FrontWiper;

    /* End of Outputs for SubSystem: '<S813>/EdgeRising' */

    /* Switch: '<S813>/Switch1' incorporates:
     *  Logic: '<S813>/OR'
     *  Logic: '<S813>/OR1'
     */
    if ((!HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_FrontWiper) || rtb_AND_b0)
    {
        /* Sum: '<S813>/Summation' incorporates:
         *  Constant: '<S813>/Constant Value1'
         *  Switch: '<S813>/Switch1'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_f3 = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S813>/Summation' incorporates:
         *  Constant: '<S813>/Constant Value'
         *  UnitDelay: '<S813>/Unit Delay'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_f3 = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)HMIR_ac_DW.UnitDelay_DSTATE_f3));

        /* MinMax: '<S813>/Minimum' incorporates:
         *  Constant: '<S788>/Calib'
         */
        if (KeHMIR_Cnt_FrontWiperMoveSts < HMIR_ac_DW.UnitDelay_DSTATE_f3)
        {
            /* Sum: '<S813>/Summation' incorporates:
             *  Switch: '<S813>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_f3 = KeHMIR_Cnt_FrontWiperMoveSts;
        }

        /* End of MinMax: '<S813>/Minimum' */
    }

    /* End of Switch: '<S813>/Switch1' */

    /* Switch: '<S780>/Switch1' incorporates:
     *  Constant: '<S788>/Calib'
     *  Logic: '<S813>/AND'
     *  RelationalOperator: '<S813>/Greater  Than'
     */
    if ((HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_FrontWiper) &&
            (HMIR_ac_DW.UnitDelay_DSTATE_f3 >= KeHMIR_Cnt_FrontWiperMoveSts))
    {
        /* Switch: '<S780>/Switch1' incorporates:
         *  Constant: '<S804>/Calib'
         *  Sum: '<S780>/Sum2'
         *  Sum: '<S780>/Sum3'
         *  Sum: '<S780>/Sum4'
         */
        rtb_Switch1_jq[0] = rtb_Switch2_h4[0] - KeHMIR_v_SugSpdWMOfs;
        rtb_Switch1_jq[1] = rtb_Switch2_h4[1] - KeHMIR_v_SugSpdWMOfs;
        rtb_Switch1_jq[2] = rtb_Switch2_h4[2] - KeHMIR_v_SugSpdWMOfs;
    }
    else
    {
        /* Switch: '<S780>/Switch1' */
        for (i = 0; i < 3; i++)
        {
            rtb_Switch1_jq[i] = rtb_Switch2_h4[i];
        }
    }

    /* End of Switch: '<S780>/Switch1' */
    /* End of Outputs for SubSystem: '<S780>/Turn On Delay Sample15' */

    /* RelationalOperator: '<S780>/Comparison9' incorporates:
     *  RelationalOperator: '<S780>/Comparison3'
     *  SignalConversion generated from: '<S5>/VeDMDR_e_TurtleMdSts'
     */
    tmp_2 = HMIR_ac_B.TmpSignalConversionAtVeDMDR_e_TurtleMdSt;

    /* RelationalOperator: '<S780>/Comparison10' incorporates:
     *  DataTypeConversion: '<S780>/Data Type Conversion'
     *  Selector: '<S780>/Selector'
     *  SignalConversion generated from: '<S5>/VeDMDR_e_DrvMdArb'
     */
    tmp_3 = HMIR_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;

    /* Switch: '<S780>/Switch6' incorporates:
     *  Constant: '<S781>/Constant'
     *  Constant: '<S782>/Constant'
     *  Constant: '<S783>/Constant'
     *  Constant: '<S789>/Calib'
     *  Constant: '<S791>/Calib'
     *  Constant: '<S792>/Calib'
     *  Logic: '<S780>/Logical4'
     *  Logic: '<S780>/Logical5'
     *  Logic: '<S780>/Logical6'
     *  Logic: '<S780>/Logical7'
     *  RelationalOperator: '<S780>/Comparison10'
     *  RelationalOperator: '<S780>/Comparison3'
     *  RelationalOperator: '<S780>/Comparison9'
     */
    if ((((tmp_3 == CeDMDR_e_OffRd) && (KeHMIR_b_OffRdMdEnbl)) || ((tmp_2 ==
            CeDMDR_e_Turtle_Mode4) && (KeHMIR_b_TurtleMd4Enbl))) || ((tmp_2 ==
            CeDMDR_e_Turtle_Mode3) && (KeHMIR_b_TurtleMd3Enbl)))
    {
        /* Outputs for Atomic SubSystem: '<S780>/Limiter3' */
        /* Switch: '<S810>/Switch1' incorporates:
         *  RelationalOperator: '<S810>/Relational Operator'
         */
        if (HMIR_ac_B.TmpSignalConversionAtVeASLR_v_DrvMdTurtl < rtb_Switch1_jq
                [0])
        {
            /* Switch: '<S812>/Switch1' */
            rtb_Add3 = HMIR_ac_B.TmpSignalConversionAtVeASLR_v_DrvMdTurtl;
        }
        else
        {
            /* Switch: '<S812>/Switch1' */
            rtb_Add3 = rtb_Switch1_jq[0];
        }

        /* End of Switch: '<S810>/Switch1' */

        /* Switch: '<S810>/Switch' incorporates:
         *  Constant: '<S780>/Constant Value7'
         *  RelationalOperator: '<S810>/Relational Operator1'
         */
        if (rtb_Add3 > 0.0F)
        {
            /* Switch: '<S810>/Switch' */
            rtb_Product = rtb_Add3;
        }
        else
        {
            /* Switch: '<S810>/Switch' */
            rtb_Product = 0.0F;
        }

        /* End of Switch: '<S810>/Switch' */
        /* End of Outputs for SubSystem: '<S780>/Limiter3' */

        /* Sum: '<S780>/Sum7' incorporates:
         *  Constant: '<S805>/Calib'
         */
        rtb_Add3 = HMIR_ac_B.TmpSignalConversionAtVeASLR_v_DrvMdTurtl -
            KeHMIR_v_TurtleMdSpdLimOfs;

        /* Outputs for Atomic SubSystem: '<S780>/Limiter4' */
        /* Switch: '<S811>/Switch1' incorporates:
         *  RelationalOperator: '<S811>/Relational Operator'
         */
        if (rtb_Add3 >= rtb_Switch1_jq[1])
        {
            /* Switch: '<S812>/Switch1' */
            rtb_Add3 = rtb_Switch1_jq[1];
        }

        /* End of Switch: '<S811>/Switch1' */

        /* Switch: '<S811>/Switch' incorporates:
         *  Constant: '<S780>/Constant Value8'
         *  RelationalOperator: '<S811>/Relational Operator1'
         */
        if (rtb_Add3 > 0.0F)
        {
            /* Switch: '<S811>/Switch' */
            rtb_Switch_hi = rtb_Add3;
        }
        else
        {
            /* Switch: '<S811>/Switch' */
            rtb_Switch_hi = 0.0F;
        }

        /* End of Switch: '<S811>/Switch' */
        /* End of Outputs for SubSystem: '<S780>/Limiter4' */

        /* Outputs for Atomic SubSystem: '<S780>/Limiter5' */
        /* Switch: '<S812>/Switch1' incorporates:
         *  RelationalOperator: '<S812>/Relational Operator'
         */
        if (HMIR_ac_B.TmpSignalConversionAtVeASLR_v_DrvMdTurtl < rtb_Switch1_jq
                [2])
        {
            /* Switch: '<S812>/Switch1' */
            rtb_Add3 = HMIR_ac_B.TmpSignalConversionAtVeASLR_v_DrvMdTurtl;
        }
        else
        {
            /* Switch: '<S812>/Switch1' */
            rtb_Add3 = rtb_Switch1_jq[2];
        }

        /* End of Switch: '<S812>/Switch1' */
        /* End of Outputs for SubSystem: '<S780>/Limiter5' */

        /* Switch: '<S780>/Switch6' */
        rtb_Switch1_jq[0] = rtb_Product;
        rtb_Switch1_jq[1] = rtb_Switch_hi;

        /* Outputs for Atomic SubSystem: '<S780>/Limiter5' */
        /* Switch: '<S812>/Switch' incorporates:
         *  Constant: '<S780>/Constant Value9'
         *  RelationalOperator: '<S812>/Relational Operator1'
         */
        if (rtb_Add3 > 0.0F)
        {
            /* Switch: '<S780>/Switch6' */
            rtb_Switch1_jq[2] = rtb_Add3;
        }
        else
        {
            /* Switch: '<S780>/Switch6' */
            rtb_Switch1_jq[2] = 0.0F;
        }

        /* End of Switch: '<S812>/Switch' */
        /* End of Outputs for SubSystem: '<S780>/Limiter5' */
    }

    /* End of Switch: '<S780>/Switch6' */
    /* End of Outputs for SubSystem: '<S384>/Suggested_Speed' */

    /* Inport: '<Root>/VeASLR_b_TSRReady' */
    (void)Rte_Read_VeASLR_b_TSRReady_Value(&tmpRead_y);

    /* Outputs for Atomic SubSystem: '<S384>/Suggested_Speed' */
    /* Outputs for Atomic SubSystem: '<S780>/GradientLimiter' */
    /* Sum: '<S784>/Sum2' incorporates:
     *  UnitDelay: '<S784>/Unit Delay'
     */
    rtb_Product = rtb_Switch1_jq[0] - HMIR_ac_DW.UnitDelay_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S784>/Limiter' */
    /* Switch: '<S814>/Switch1' incorporates:
     *  Constant: '<S794>/Calib'
     *  RelationalOperator: '<S814>/Relational Operator'
     */
    if (KeHMIR_dv_SugSpdRTLU < rtb_Product)
    {
        /* UnitDelay: '<S786>/Unit Delay' */
        rtb_Product = KeHMIR_dv_SugSpdRTLU;
    }

    /* End of Switch: '<S814>/Switch1' */

    /* Switch: '<S814>/Switch' incorporates:
     *  Constant: '<S793>/Calib'
     *  RelationalOperator: '<S814>/Relational Operator1'
     */
    if (rtb_Product <= KeHMIR_dv_SugSpdRTLD)
    {
        rtb_Product = KeHMIR_dv_SugSpdRTLD;
    }

    /* End of Switch: '<S814>/Switch' */
    /* End of Outputs for SubSystem: '<S784>/Limiter' */

    /* Sum: '<S784>/Sum3' incorporates:
     *  UnitDelay: '<S784>/Unit Delay'
     */
    VeHMIR_v_MaxSugSpdHMI = rtb_Product + HMIR_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S784>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_j = VeHMIR_v_MaxSugSpdHMI;

    /* End of Outputs for SubSystem: '<S780>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S780>/GradientLimiter1' */
    /* Sum: '<S785>/Sum2' incorporates:
     *  UnitDelay: '<S785>/Unit Delay'
     */
    rtb_Product = rtb_Switch1_jq[1] - HMIR_ac_DW.UnitDelay_DSTATE_f;

    /* Outputs for Atomic SubSystem: '<S785>/Limiter' */
    /* Switch: '<S815>/Switch1' incorporates:
     *  Constant: '<S794>/Calib'
     *  RelationalOperator: '<S815>/Relational Operator'
     */
    if (KeHMIR_dv_SugSpdRTLU < rtb_Product)
    {
        /* UnitDelay: '<S786>/Unit Delay' */
        rtb_Product = KeHMIR_dv_SugSpdRTLU;
    }

    /* End of Switch: '<S815>/Switch1' */

    /* Switch: '<S815>/Switch' incorporates:
     *  Constant: '<S793>/Calib'
     *  RelationalOperator: '<S815>/Relational Operator1'
     */
    if (rtb_Product <= KeHMIR_dv_SugSpdRTLD)
    {
        rtb_Product = KeHMIR_dv_SugSpdRTLD;
    }

    /* End of Switch: '<S815>/Switch' */
    /* End of Outputs for SubSystem: '<S785>/Limiter' */

    /* Sum: '<S785>/Sum3' incorporates:
     *  UnitDelay: '<S785>/Unit Delay'
     */
    VeHMIR_v_MinSugSpdHMI = rtb_Product + HMIR_ac_DW.UnitDelay_DSTATE_f;

    /* Update for UnitDelay: '<S785>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_f = VeHMIR_v_MinSugSpdHMI;

    /* End of Outputs for SubSystem: '<S780>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S780>/GradientLimiter2' */
    /* Sum: '<S786>/Sum2' incorporates:
     *  UnitDelay: '<S786>/Unit Delay'
     */
    rtb_Product = rtb_Switch1_jq[2] - HMIR_ac_DW.UnitDelay_DSTATE_g;

    /* Outputs for Atomic SubSystem: '<S786>/Limiter' */
    /* Switch: '<S816>/Switch1' incorporates:
     *  Constant: '<S794>/Calib'
     *  RelationalOperator: '<S816>/Relational Operator'
     */
    if (KeHMIR_dv_SugSpdRTLU < rtb_Product)
    {
        /* Switch: '<S816>/Switch1' */
        rtb_Product = KeHMIR_dv_SugSpdRTLU;
    }

    /* End of Switch: '<S816>/Switch1' */

    /* Switch: '<S816>/Switch' incorporates:
     *  Constant: '<S793>/Calib'
     *  RelationalOperator: '<S816>/Relational Operator1'
     */
    if (rtb_Product <= KeHMIR_dv_SugSpdRTLD)
    {
        rtb_Product = KeHMIR_dv_SugSpdRTLD;
    }

    /* End of Switch: '<S816>/Switch' */
    /* End of Outputs for SubSystem: '<S786>/Limiter' */

    /* Sum: '<S786>/Sum3' incorporates:
     *  UnitDelay: '<S786>/Unit Delay'
     */
    VeHMIR_v_ThdSugSpdHMI = rtb_Product + HMIR_ac_DW.UnitDelay_DSTATE_g;

    /* Update for UnitDelay: '<S786>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_g = VeHMIR_v_ThdSugSpdHMI;

    /* End of Outputs for SubSystem: '<S780>/GradientLimiter2' */

    /* Switch: '<S780>/Switch3' incorporates:
     *  Constant: '<S787>/Calib'
     *  Constant: '<S796>/Calib'
     *  Logic: '<S780>/Logical1'
     *  RelationalOperator: '<S780>/Comparison6'
     *  Selector: '<S780>/Selector'
     */
    if ((tmpRead_y && (HMIR_ac_B.TmpSignalConversionAtVeASLR_v_TSRDispSpd >
                       KeHMIR_v_DispSpdLimStsThr)) && (KaHMIR_b_SugSpdDrvMdEnbl
            [(tmp_3)]))
    {
        /* Switch: '<S780>/Switch3' */
        rtb_Switch2_h4[0] = VeHMIR_v_MaxSugSpdHMI;
        rtb_Switch2_h4[1] = VeHMIR_v_MinSugSpdHMI;
        rtb_Switch2_h4[2] = VeHMIR_v_ThdSugSpdHMI;
    }
    else
    {
        /* Switch: '<S780>/Switch3' incorporates:
         *  Constant: '<S780>/Constant Value'
         *  Constant: '<S780>/Constant Value1'
         *  Constant: '<S780>/Constant Value2'
         */
        rtb_Switch2_h4[0] = 315.0F;
        rtb_Switch2_h4[1] = 315.0F;
        rtb_Switch2_h4[2] = 315.0F;
    }

    /* End of Switch: '<S780>/Switch3' */

    /* Gain: '<S780>/Gain' */
    HMIR_ac_B.Gain_bx = 1.0F * rtb_Switch2_h4[0];

    /* Gain: '<S780>/Gain1' */
    HMIR_ac_B.Gain1 = 1.0F * rtb_Switch2_h4[1];

    /* Gain: '<S780>/Gain2' */
    HMIR_ac_B.Gain2 = 1.0F * rtb_Switch2_h4[2];

    /* End of Outputs for SubSystem: '<S384>/Suggested_Speed' */
    /* End of Outputs for SubSystem: '<S367>/M182' */
    /* End of Outputs for SubSystem: '<S367>/Variant Subsystem' */
#endif

    /* Outputs for Atomic SubSystem: '<S381>/Hysteresis' */
    /* Switch: '<S761>/Switch1' incorporates:
     *  Constant: '<S762>/Calib'
     *  Constant: '<S763>/Calib'
     *  RelationalOperator: '<S761>/Greater  Than'
     *  RelationalOperator: '<S761>/Greater  Than1'
     *  Switch: '<S761>/Switch2'
     */
    if (HMIR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa >
            KeHMIR_Pct_BatteryLowPerf2)
    {
        /* Switch: '<S761>/Switch1' incorporates:
         *  Constant: '<S761>/Constant Value'
         */
        HMIR_ac_DW.UnitDelay_DSTATE_mu = true;
    }
    else
    {
        if (HMIR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa <
                KeHMIR_Pct_BatteryLowPerf1)
        {
            /* Switch: '<S761>/Switch2' incorporates:
             *  Constant: '<S761>/Constant Value1'
             *  Switch: '<S761>/Switch1'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_mu = false;
        }
    }

    /* End of Switch: '<S761>/Switch1' */
    /* End of Outputs for SubSystem: '<S381>/Hysteresis' */

    /* Logic: '<S381>/OR8' */
    HMIR_ac_B.OR8_c = !HMIR_ac_DW.UnitDelay_DSTATE_mu;

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE = HMIR_ac_DW.UnitDelay_DSTATE_n2;

    /* Update for UnitDelay: '<S559>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_m = rtb_Product2;

    /* Update for UnitDelay: '<S377>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_h = HMIR_ac_DW.UnitDelay_DSTATE_g1;

    /* Update for UnitDelay: '<S741>/Unit Delay' incorporates:
     *  DataTypeConversion: '<S741>/Data Type Conversion'
     *  Switch: '<S380>/Switch4'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_mr = (uint16)VeHMIC_e_GSIStat;

    /* Update for UnitDelay: '<S745>/Unit Delay1' */
    HMIR_ac_DW.UnitDelay1_DSTATE_b = rtb_Switch1_bj;

    /* Update for UnitDelay: '<S746>/Unit Delay1' */
    HMIR_ac_DW.UnitDelay1_DSTATE_g = rtb_Switch1_mn;

    /* Update for UnitDelay: '<S757>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_cc = VeHMIC_e_GSISt_Dbncd;
}

/* Model step function for TID1 */
FUNC(void, HMIR_CODE) HMIR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    float32 tmpRead_1;
    uint32 rtb_TmpSignalConversionAtVeTRGR_g_Cluste;
    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR_e_Tcase_;
    TeHMIR_e_TerrainHMIRq rtb_Switch10_mn;
    TePRXR_e_AxleLockerPresence rtb_TmpSignalConversionAtAxleLockPrsntOu;
    TePRXR_e_HybridType rtb_TmpSignalConversionAtHybTypeConfigOu;
    TePRXR_e_TerrainSelectorModes rtb_TmpSignalConversionAtTerrainSelector;
    TeTIMR_e_TrrnMdReq rtb_TmpSignalConversionAtVeTIMR_e_Terrai;
    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtVeTIMR_e_ModeRe;
    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd;
    TeTMDR_e_TrrnMd tmpRead_0;
    uint8 rtb_TmpSignalConversionAtVehLineInfoOutp;
    boolean rtb_AND;
    boolean rtb_TmpSignalConversionAtCustomMdOutport;
    boolean rtb_TmpSignalConversionAtTrackMdOutport1;
    boolean rtb_TmpSignalConversionAtVeFWDR_b_Tcase_;
    boolean rtb_TmpSignalConversionAtVePLTR_b_SpeedU;
    boolean rtb_TmpSignalConversionAtVeTMDR_b_RockMd;
    boolean tmpRead;
    boolean tmpRead_2;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/HMIR_MedTED'
     */
    /* SignalConversion generated from: '<S3>/VeTMDR_e_TrrnMd' incorporates:
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     */
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value
        (&rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd);

    /* SignalConversion generated from: '<S3>/VeTRGR_g_ClusterWarnings' incorporates:
     *  Inport: '<Root>/VeTRGR_g_ClusterWarnings'
     */
    (void)Rte_Read_VeTRGR_g_ClusterWarnings_Value
        (&rtb_TmpSignalConversionAtVeTRGR_g_Cluste);

    /* SignalConversion generated from: '<S3>/VeTIMR_e_TerrainMdReq' incorporates:
     *  Inport: '<Root>/VeTIMR_e_TerrainMdReq'
     */
    (void)Rte_Read_VeTIMR_e_TerrainMdReq_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_Terrai);

    /* SignalConversion generated from: '<S3>/VeTIMR_e_ModeRequest' incorporates:
     *  Inport: '<Root>/VeTIMR_e_ModeRequest'
     */
    (void)Rte_Read_VeTIMR_e_ModeRequest_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_ModeRe);

    /* SignalConversion generated from: '<S3>/VehLineInfo' incorporates:
     *  Inport: '<Root>/VePRXR_y_VehicleLineConfiguration'
     */
    (void)Rte_Read_VePRXR_y_VehicleLineConfiguration_Value
        (&rtb_TmpSignalConversionAtVehLineInfoOutp);

    /* SignalConversion generated from: '<S3>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value
        (&rtb_TmpSignalConversionAtVeFWDR_e_Tcase_);

    /* SignalConversion generated from: '<S3>/HybTypeConfig' incorporates:
     *  Inport: '<Root>/VePRXR_e_ProxyHybridType'
     */
    (void)Rte_Read_VePRXR_e_ProxyHybridType_Value
        (&rtb_TmpSignalConversionAtHybTypeConfigOu);

    /* SignalConversion generated from: '<S3>/VeTMDR_b_RockMdFault' incorporates:
     *  Inport: '<Root>/VeTMDR_b_RockMdFault'
     */
    (void)Rte_Read_VeTMDR_b_RockMdFault_Value
        (&rtb_TmpSignalConversionAtVeTMDR_b_RockMd);

    /* SignalConversion generated from: '<S3>/VeFWDR_b_Tcase_StatFA' incorporates:
     *  Inport: '<Root>/VeFWDR_b_Tcase_StatFA'
     */
    (void)Rte_Read_VeFWDR_b_Tcase_StatFA_Value
        (&rtb_TmpSignalConversionAtVeFWDR_b_Tcase_);

    /* SignalConversion generated from: '<S3>/VePLTR_b_SpeedUnit' incorporates:
     *  Inport: '<Root>/VePLTR_b_SpeedUnit'
     */
    (void)Rte_Read_VePLTR_b_SpeedUnit_Value
        (&rtb_TmpSignalConversionAtVePLTR_b_SpeedU);

    /* SignalConversion generated from: '<S3>/CustomMd' incorporates:
     *  Inport: '<Root>/VePRXR_b_Proxi_Custom_Mode'
     */
    (void)Rte_Read_VePRXR_b_Proxi_Custom_Mode_Value
        (&rtb_TmpSignalConversionAtCustomMdOutport);

    /* SignalConversion generated from: '<S3>/TrackMd' incorporates:
     *  Inport: '<Root>/VePRXR_b_Proxi_Track_Mode'
     */
    (void)Rte_Read_VePRXR_b_Proxi_Track_Mode_Value
        (&rtb_TmpSignalConversionAtTrackMdOutport1);

    /* SignalConversion generated from: '<S3>/AxleLockPrsnt' incorporates:
     *  Inport: '<Root>/VePRXR_e_Axle_Locker_Presence'
     */
    (void)Rte_Read_VePRXR_e_Axle_Locker_Presence_Value
        (&rtb_TmpSignalConversionAtAxleLockPrsntOu);

    /* SignalConversion generated from: '<S3>/TerrainSelectorModes' incorporates:
     *  Inport: '<Root>/VePRXR_e_Terrain_Selector_Modes'
     */
    (void)Rte_Read_VePRXR_e_Terrain_Selector_Modes_Value
        (&rtb_TmpSignalConversionAtTerrainSelector);

    /* SignalConversion generated from: '<S3>/VeCSVR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/HMIC_25ms_Disp'
     */
    /* RelationalOperator: '<S153>/Comparison18' incorporates:
     *  Constant: '<S153>/Constant Value19'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator19'
     */
    VeHMIC_b_DrvAway_Alrt_VDCM = ((rtb_TmpSignalConversionAtVeTRGR_g_Cluste &
        262144U) > ((uint32)((uint8)0U)));

    /* RelationalOperator: '<S153>/Comparison19' incorporates:
     *  Constant: '<S153>/Constant Value20'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator20'
     */
    VeHMIC_b_DrvAway_Inhbt_VDCM = ((rtb_TmpSignalConversionAtVeTRGR_g_Cluste &
        524288U) > ((uint32)((uint8)0U)));

    /* RelationalOperator: '<S153>/Comparison6' incorporates:
     *  Constant: '<S153>/Constant Value6'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator1'
     */
    VeHMIC_b_RollingWarning = ((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 1024U)
        > ((uint32)((uint8)0U)));

    /* Chart: '<S22>/Trans_Warning_Messages' incorporates:
     *  Constant: '<S153>/Constant Value1'
     *  Constant: '<S153>/Constant Value10'
     *  Constant: '<S153>/Constant Value11'
     *  Constant: '<S153>/Constant Value12'
     *  Constant: '<S153>/Constant Value13'
     *  Constant: '<S153>/Constant Value14'
     *  Constant: '<S153>/Constant Value15'
     *  Constant: '<S153>/Constant Value16'
     *  Constant: '<S153>/Constant Value17'
     *  Constant: '<S153>/Constant Value18'
     *  Constant: '<S153>/Constant Value2'
     *  Constant: '<S153>/Constant Value3'
     *  Constant: '<S153>/Constant Value4'
     *  Constant: '<S153>/Constant Value5'
     *  Constant: '<S153>/Constant Value7'
     *  Constant: '<S153>/Constant Value8'
     *  Constant: '<S153>/Constant Value9'
     *  RelationalOperator: '<S153>/Comparison'
     *  RelationalOperator: '<S153>/Comparison1'
     *  RelationalOperator: '<S153>/Comparison10'
     *  RelationalOperator: '<S153>/Comparison11'
     *  RelationalOperator: '<S153>/Comparison12'
     *  RelationalOperator: '<S153>/Comparison13'
     *  RelationalOperator: '<S153>/Comparison14'
     *  RelationalOperator: '<S153>/Comparison15'
     *  RelationalOperator: '<S153>/Comparison16'
     *  RelationalOperator: '<S153>/Comparison17'
     *  RelationalOperator: '<S153>/Comparison2'
     *  RelationalOperator: '<S153>/Comparison3'
     *  RelationalOperator: '<S153>/Comparison4'
     *  RelationalOperator: '<S153>/Comparison5'
     *  RelationalOperator: '<S153>/Comparison7'
     *  RelationalOperator: '<S153>/Comparison8'
     *  RelationalOperator: '<S153>/Comparison9'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator10'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator11'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator12'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator13'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator14'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator15'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator16'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator17'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator18'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator6'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator8'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator9'
     */
    /* Gateway: HMIR_MedTED/HMIC_25ms_Disp/Trans_Warn_Messages/Trans_Warning_Messages */
    /* During: HMIR_MedTED/HMIC_25ms_Disp/Trans_Warn_Messages/Trans_Warning_Messages */
    if (((uint32)HMIR_ac_DW.is_active_c1_HMIR_ac) == 0U)
    {
        /* Entry: HMIR_MedTED/HMIC_25ms_Disp/Trans_Warn_Messages/Trans_Warning_Messages */
        HMIR_ac_DW.is_active_c1_HMIR_ac = 1U;

        /* Entry Internal: HMIR_MedTED/HMIC_25ms_Disp/Trans_Warn_Messages/Trans_Warning_Messages */
        /* Transition: '<S157>:37' */
        HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

        /* RelationalOperator: '<S156>/Comparison2' */
        /* Entry 'MsgInit': '<S157>:87' */
        VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
        VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
        HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
    }
    else
    {
        switch (HMIR_ac_DW.is_c1_HMIR_ac)
        {
          case HMIR_ac_IN_Bit0:
            /* During 'Bit0': '<S157>:7' */
            /* Transition: '<S157>:94' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit1:
            /* During 'Bit1': '<S157>:8' */
            /* Transition: '<S157>:95' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit10:
            /* During 'Bit10': '<S157>:117' */
            /* Transition: '<S157>:119' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit11:
            /* During 'Bit11': '<S157>:120' */
            /* Transition: '<S157>:122' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit12:
            /* During 'Bit12': '<S157>:159' */
            /* Transition: '<S157>:179' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit13:
            /* During 'Bit13': '<S157>:181' */
            /* Transition: '<S157>:184' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit14:
            /* During 'Bit14': '<S157>:189' */
            /* Transition: '<S157>:191' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit15:
            /* During 'Bit15': '<S157>:190' */
            /* Transition: '<S157>:193' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit16:
            /* During 'Bit16': '<S157>:199' */
            /* Transition: '<S157>:201' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit17:
            /* During 'Bit17': '<S157>:204' */
            /* Transition: '<S157>:207' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit2:
            /* During 'Bit2': '<S157>:61' */
            /* Transition: '<S157>:96' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit3:
            /* During 'Bit3': '<S157>:97' */
            /* Transition: '<S157>:99' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit4:
            /* During 'Bit4': '<S157>:100' */
            /* Transition: '<S157>:103' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit5:
            /* During 'Bit5': '<S157>:104' */
            /* Transition: '<S157>:106' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit6:
            /* During 'Bit6': '<S157>:107' */
            /* Transition: '<S157>:109' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit7:
            /* During 'Bit7': '<S157>:62' */
            /* Transition: '<S157>:112' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit8:
            /* During 'Bit8': '<S157>:64' */
            /* Transition: '<S157>:114' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          case HMIR_ac_IN_Bit9:
            /* During 'Bit9': '<S157>:65' */
            /* Transition: '<S157>:116' */
            HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

            /* RelationalOperator: '<S156>/Comparison2' */
            /* Entry 'MsgInit': '<S157>:87' */
            VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
            VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
            HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            break;

          default:
            /* During 'MsgInit': '<S157>:87' */
            if (HMIR_ac_B.VeHMIC_Cnt_MsgCntr >= KeHMIR_Cnt_MsgCntrLimit)
            {
                /* Transition: '<S157>:89' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_MsgInit;

                /* RelationalOperator: '<S156>/Comparison2' */
                /* Entry 'MsgInit': '<S157>:87' */
                VeHMIC_e_TransWarnMsg = CeHMIR_e_Warn2_None;
                VeHMIC_e_TransWarn2Msg = CeHMIR_e_Warn2_None;
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 1U) > ((uint32)
                       ((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal0))
            {
                /* Transition: '<S157>:91' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit0;

                /* RelationalOperator: '<S156>/Comparison2' */
                /* Entry 'Bit0': '<S157>:7' */
                VeHMIC_e_TransWarnMsg = KaHMIR_e_Warn[0];
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[0];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 2U) > ((uint32)
                       ((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal1))
            {
                /* Transition: '<S157>:92' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit1;

                /* RelationalOperator: '<S156>/Comparison2' */
                /* Entry 'Bit1': '<S157>:8' */
                VeHMIC_e_TransWarnMsg = KaHMIR_e_Warn[1];
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[1];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 4U) > ((uint32)
                       ((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal2))
            {
                /* Transition: '<S157>:93' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit2;

                /* Entry 'Bit2': '<S157>:61' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[2];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 8U) > ((uint32)
                       ((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal3))
            {
                /* Transition: '<S157>:98' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit3;

                /* Entry 'Bit3': '<S157>:97' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[3];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 16U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal4))
            {
                /* Transition: '<S157>:102' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit4;

                /* Entry 'Bit4': '<S157>:100' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[4];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 32U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal5))
            {
                /* Transition: '<S157>:105' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit5;

                /* Entry 'Bit5': '<S157>:104' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[5];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 2048U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal11))
            {
                /* Transition: '<S157>:121' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit11;

                /* Entry 'Bit11': '<S157>:120' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[11];
            }
            else if ((VeHMIC_b_RollingWarning) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal10))
            {
                /* Transition: '<S157>:118' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit10;

                /* Entry 'Bit10': '<S157>:117' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[10];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 512U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal9))
            {
                /* Transition: '<S157>:115' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit9;

                /* RelationalOperator: '<S156>/Comparison2' */
                /* Entry 'Bit9': '<S157>:65' */
                VeHMIC_e_TransWarnMsg = KaHMIR_e_Warn[9];
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[9];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 256U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal8))
            {
                /* Transition: '<S157>:113' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit8;

                /* RelationalOperator: '<S156>/Comparison2' */
                /* Entry 'Bit8': '<S157>:64' */
                VeHMIC_e_TransWarnMsg = KaHMIR_e_Warn[8];
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[8];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 128U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal7))
            {
                /* Transition: '<S157>:111' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit7;

                /* Entry 'Bit7': '<S157>:62' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[7];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 64U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal6))
            {
                /* Transition: '<S157>:110' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit6;

                /* Entry 'Bit6': '<S157>:107' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[6];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 4096U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal12))
            {
                /* Transition: '<S157>:178' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit12;

                /* Entry 'Bit12': '<S157>:159' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[12];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 8192U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal13))
            {
                /* Transition: '<S157>:183' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit13;

                /* Entry 'Bit13': '<S157>:181' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[13];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 16384U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal14))
            {
                /* Transition: '<S157>:192' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit14;

                /* Entry 'Bit14': '<S157>:189' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[14];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 32768U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal15))
            {
                /* Transition: '<S157>:194' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit15;

                /* Entry 'Bit15': '<S157>:190' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[15];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 65536U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal16))
            {
                /* Transition: '<S157>:200' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit16;

                /* Entry 'Bit16': '<S157>:199' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[16];
            }
            else if (((rtb_TmpSignalConversionAtVeTRGR_g_Cluste & 131072U) >
                      ((uint32)((uint8)0U))) && (HMIR_ac_B.VeHMIC_Cnt_MsgCntr ==
                      KeHMIR_Cnt_PriorityCal17))
            {
                /* Transition: '<S157>:206' */
                /* Exit 'MsgInit': '<S157>:87' */
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = 0U;
                HMIR_ac_DW.is_c1_HMIR_ac = HMIR_ac_IN_Bit17;

                /* Entry 'Bit17': '<S157>:204' */
                VeHMIC_e_TransWarn2Msg = KaHMIR_e_Warn2[17];
            }
            else
            {
                HMIR_ac_B.VeHMIC_Cnt_MsgCntr = (uint8)((sint32)(((sint32)
                    HMIR_ac_B.VeHMIC_Cnt_MsgCntr) + 1));
            }
            break;
        }
    }

    /* End of Chart: '<S22>/Trans_Warning_Messages' */

    /* Gain: '<S154>/Gain' */
    VeHMIC_Cnt_Msg_Cntr = (uint8)(((uint32)((uint8)1U)) * ((uint32)
        HMIR_ac_B.VeHMIC_Cnt_MsgCntr));

    /* RelationalOperator: '<S155>/Comparison2' incorporates:
     *  Constant: '<S159>/Constant'
     */
    VeHMIC_b_TransWarn2Msg_Not0 = (VeHMIC_e_TransWarn2Msg != CeHMIR_e_Warn2_None);

    /* RelationalOperator: '<S155>/Comparison3' */
    VeHMIC_b_TransWarn2Msg_0 = (VeHMIC_e_TransWarn2Msg == CeHMIR_e_Warn2_None);

    /* Switch: '<S155>/Switch2' */
    if (VeHMIC_b_TransWarn2Msg_Not0)
    {
        /* Switch: '<S155>/Switch2' */
        VeHMIC_b_TransWarn2Msg_Not0_Cont = VeHMIC_e_TransWarn2Msg;
    }
    else
    {
        /* Switch: '<S155>/Switch2' incorporates:
         *  UnitDelay: '<S155>/Unit Delay'
         */
        VeHMIC_b_TransWarn2Msg_Not0_Cont = HMIR_ac_DW.UnitDelay_DSTATE_hy;
    }

    /* End of Switch: '<S155>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S155>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S163>/EdgeRising' */
    /* Logic: '<S164>/AND' incorporates:
     *  Logic: '<S164>/OR1'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtb_AND = ((VeHMIC_b_TransWarn2Msg_0) && (!HMIR_ac_DW.UnitDelay_DSTATE_mtn));

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_mtn = VeHMIC_b_TransWarn2Msg_0;

    /* End of Outputs for SubSystem: '<S163>/EdgeRising' */

    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S161>/Calib'
     *  Constant: '<S162>/Calib'
     *  Constant: '<S163>/Constant Value1'
     *  Logic: '<S163>/OR'
     *  Logic: '<S163>/OR1'
     *  MinMax: '<S163>/Minimum'
     *  Sum: '<S163>/Summation'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    if ((!VeHMIC_b_TransWarn2Msg_0) || rtb_AND)
    {
        HMIR_ac_DW.UnitDelay_DSTATE_pu = 0.0F;
    }
    else
    {
        HMIR_ac_DW.UnitDelay_DSTATE_pu = fminf(KeHMIR_t_TranWarnDly_When0,
            KeHMIR_t_25msTask + HMIR_ac_DW.UnitDelay_DSTATE_pu);
    }

    /* End of Switch: '<S163>/Switch1' */

    /* Logic: '<S163>/AND' incorporates:
     *  Constant: '<S162>/Calib'
     *  RelationalOperator: '<S163>/Greater  Than'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    VeHMIC_b_TransWarn2Msg_0_Dbnc = ((VeHMIC_b_TransWarn2Msg_0) &&
        (HMIR_ac_DW.UnitDelay_DSTATE_pu >= KeHMIR_t_TranWarnDly_When0));

    /* End of Outputs for SubSystem: '<S155>/Turn On Delay Time' */

    /* Switch: '<S155>/Switch3' */
    if (VeHMIC_b_TransWarn2Msg_0_Dbnc)
    {
        /* Switch: '<S155>/Switch3' */
        VeHMIC_e_TransWarn2Msg_Cont = CeHMIR_e_Warn2_None;
    }
    else
    {
        /* Switch: '<S155>/Switch3' incorporates:
         *  Switch: '<S155>/Switch2'
         */
        VeHMIC_e_TransWarn2Msg_Cont = VeHMIC_b_TransWarn2Msg_Not0_Cont;
    }

    /* End of Switch: '<S155>/Switch3' */

    /* RelationalOperator: '<S156>/Comparison2' */
    VeHMIC_b_TransWarnMsg_Not0 = (VeHMIC_e_TransWarnMsg != CeHMIR_e_Warn2_None);

    /* RelationalOperator: '<S156>/Comparison3' */
    VeHMIC_b_TransWarnMsg_0 = (VeHMIC_e_TransWarnMsg == CeHMIR_e_Warn2_None);

    /* Outputs for Atomic SubSystem: '<S156>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S170>/EdgeRising' */
    /* Logic: '<S171>/AND' incorporates:
     *  Logic: '<S171>/OR1'
     *  UnitDelay: '<S171>/Unit Delay'
     */
    rtb_AND = ((VeHMIC_b_TransWarnMsg_0) && (!HMIR_ac_DW.UnitDelay_DSTATE_el));

    /* Update for UnitDelay: '<S171>/Unit Delay' */
    HMIR_ac_DW.UnitDelay_DSTATE_el = VeHMIC_b_TransWarnMsg_0;

    /* End of Outputs for SubSystem: '<S170>/EdgeRising' */

    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S168>/Calib'
     *  Constant: '<S169>/Calib'
     *  Constant: '<S170>/Constant Value1'
     *  Logic: '<S170>/OR'
     *  Logic: '<S170>/OR1'
     *  MinMax: '<S170>/Minimum'
     *  Sum: '<S170>/Summation'
     *  UnitDelay: '<S170>/Unit Delay'
     */
    if ((!VeHMIC_b_TransWarnMsg_0) || rtb_AND)
    {
        HMIR_ac_DW.UnitDelay_DSTATE_ky = 0.0F;
    }
    else
    {
        HMIR_ac_DW.UnitDelay_DSTATE_ky = fminf(KeHMIR_t_TranWarnDly_When0,
            KeHMIR_t_25msTask + HMIR_ac_DW.UnitDelay_DSTATE_ky);
    }

    /* End of Switch: '<S170>/Switch1' */

    /* Logic: '<S170>/AND' incorporates:
     *  Constant: '<S169>/Calib'
     *  RelationalOperator: '<S170>/Greater  Than'
     *  UnitDelay: '<S170>/Unit Delay'
     */
    VeHMIC_b_TransWarnMsg_0_Dbnc = ((VeHMIC_b_TransWarnMsg_0) &&
        (HMIR_ac_DW.UnitDelay_DSTATE_ky >= KeHMIR_t_TranWarnDly_When0));

    /* End of Outputs for SubSystem: '<S156>/Turn On Delay Time' */

    /* Switch: '<S156>/Switch2' */
    if (VeHMIC_b_TransWarnMsg_Not0)
    {
        /* Switch: '<S156>/Switch2' */
        VeHMIC_b_TransWarnMsg_Not0_Cont = VeHMIC_e_TransWarnMsg;
    }
    else
    {
        /* Switch: '<S156>/Switch2' incorporates:
         *  UnitDelay: '<S156>/Unit Delay'
         */
        VeHMIC_b_TransWarnMsg_Not0_Cont = HMIR_ac_DW.UnitDelay_DSTATE_gn;
    }

    /* End of Switch: '<S156>/Switch2' */

    /* Switch: '<S156>/Switch3' */
    if (VeHMIC_b_TransWarnMsg_0_Dbnc)
    {
        /* Switch: '<S156>/Switch3' incorporates:
         *  Constant: '<S167>/Constant'
         */
        VeHMIC_e_TransWarnMsg_Cont = CeHMIR_e_Warn2_None;
    }
    else
    {
        /* Switch: '<S156>/Switch3' incorporates:
         *  Switch: '<S156>/Switch2'
         */
        VeHMIC_e_TransWarnMsg_Cont = VeHMIC_b_TransWarnMsg_Not0_Cont;
    }

    /* End of Switch: '<S156>/Switch3' */

    /* SignalConversion generated from: '<S18>/VeHMIC_e_ShftProg' incorporates:
     *  Constant: '<S20>/Calib'
     */
    HMIR_ac_B.VeHMIC_e_ShftProg = KeHMIR_e_ShftProg;

    /* Switch: '<S21>/Switch10' incorporates:
     *  Constant: '<S21>/Constant'
     *  Constant: '<S36>/Constant'
     *  Logic: '<S21>/Logical Operator20'
     *  Logic: '<S21>/Logical Operator21'
     *  RelationalOperator: '<S21>/Relational Operator30'
     *  RelationalOperator: '<S21>/Relational Operator31'
     *  RelationalOperator: '<S21>/Relational Operator32'
     *  UnitDelay: '<S21>/Unit Delay1'
     */
    if (((HMIR_ac_DW.UnitDelay1_DSTATE_gh == CeTMDR_e_Tow) &&
            (rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd != CeTMDR_e_Tow)) &&
            (rtb_TmpSignalConversionAtVehLineInfoOutp == ((uint8)104U)))
    {
        /* Switch: '<S21>/Switch10' incorporates:
         *  Constant: '<S49>/Constant'
         */
        rtb_Switch10_mn = CeHMIR_e_Screen_11;
    }
    else
    {
        /* Logic: '<S21>/Logical Operator23' incorporates:
         *  Logic: '<S21>/Logical Operator25'
         *  Switch: '<S21>/Switch11'
         */
        rtb_AND = !rtb_TmpSignalConversionAtVeFWDR_b_Tcase_;

        /* Switch: '<S21>/Switch11' incorporates:
         *  Constant: '<S102>/Constant'
         *  Constant: '<S103>/Constant'
         *  Constant: '<S104>/Constant'
         *  Constant: '<S107>/Constant'
         *  Constant: '<S116>/Constant'
         *  Constant: '<S124>/Constant'
         *  Constant: '<S127>/Constant'
         *  Constant: '<S138>/Constant'
         *  Constant: '<S145>/Constant'
         *  Constant: '<S150>/Constant'
         *  Constant: '<S151>/Constant'
         *  Constant: '<S24>/Constant'
         *  Constant: '<S33>/Constant'
         *  Constant: '<S34>/Constant'
         *  Constant: '<S35>/Constant'
         *  Constant: '<S41>/Constant'
         *  Constant: '<S46>/Constant'
         *  Constant: '<S50>/Constant'
         *  Constant: '<S66>/Constant'
         *  Constant: '<S71>/Const11'
         *  Constant: '<S71>/Const2'
         *  Constant: '<S71>/Const5'
         *  Constant: '<S71>/Const8'
         *  Constant: '<S71>/Const9'
         *  Constant: '<S71>/Constant1'
         *  Constant: '<S71>/Constant10'
         *  Constant: '<S71>/Constant11'
         *  Constant: '<S71>/Constant2'
         *  Constant: '<S71>/Constant3'
         *  Constant: '<S71>/Constant4'
         *  Constant: '<S71>/Constant5'
         *  Constant: '<S71>/Constant6'
         *  Constant: '<S71>/Constant7'
         *  Constant: '<S71>/Constant8'
         *  Constant: '<S71>/Constant9'
         *  Constant: '<S72>/Constant'
         *  Constant: '<S74>/Constant'
         *  Constant: '<S77>/Constant'
         *  Constant: '<S83>/Constant'
         *  Constant: '<S95>/Constant'
         *  Constant: '<S96>/Constant'
         *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Logic: '<S21>/Logical Operator'
         *  Logic: '<S21>/Logical Operator1'
         *  Logic: '<S21>/Logical Operator2'
         *  Logic: '<S21>/Logical Operator22'
         *  Logic: '<S21>/Logical Operator23'
         *  Logic: '<S21>/Logical Operator24'
         *  Logic: '<S21>/Logical Operator26'
         *  Logic: '<S71>/Logical Operator1'
         *  Logic: '<S71>/Logical Operator11'
         *  Logic: '<S71>/Logical Operator12'
         *  Logic: '<S71>/Logical Operator13'
         *  Logic: '<S71>/Logical Operator16'
         *  Logic: '<S71>/Logical Operator17'
         *  Logic: '<S71>/Logical Operator2'
         *  Logic: '<S71>/Logical Operator20'
         *  Logic: '<S71>/Logical Operator21'
         *  Logic: '<S71>/Logical Operator22'
         *  Logic: '<S71>/Logical Operator23'
         *  Logic: '<S71>/Logical Operator24'
         *  Logic: '<S71>/Logical Operator25'
         *  Logic: '<S71>/Logical Operator26'
         *  Logic: '<S71>/Logical Operator27'
         *  Logic: '<S71>/Logical Operator28'
         *  Logic: '<S71>/Logical Operator29'
         *  Logic: '<S71>/Logical Operator3'
         *  Logic: '<S71>/Logical Operator30'
         *  Logic: '<S71>/Logical Operator4'
         *  Logic: '<S71>/Logical Operator5'
         *  Logic: '<S71>/Logical Operator6'
         *  Logic: '<S71>/Logical Operator7'
         *  Logic: '<S71>/Logical Operator9'
         *  RelationalOperator: '<S21>/Relational Operator'
         *  RelationalOperator: '<S21>/Relational Operator1'
         *  RelationalOperator: '<S21>/Relational Operator2'
         *  RelationalOperator: '<S21>/Relational Operator3'
         *  RelationalOperator: '<S21>/Relational Operator33'
         *  RelationalOperator: '<S21>/Relational Operator34'
         *  RelationalOperator: '<S21>/Relational Operator35'
         *  RelationalOperator: '<S21>/Relational Operator36'
         *  RelationalOperator: '<S21>/Relational Operator37'
         *  RelationalOperator: '<S21>/Relational Operator38'
         *  RelationalOperator: '<S21>/Relational Operator39'
         *  RelationalOperator: '<S21>/Relational Operator40'
         *  RelationalOperator: '<S71>/Relational Operator1'
         *  RelationalOperator: '<S71>/Relational Operator10'
         *  RelationalOperator: '<S71>/Relational Operator100'
         *  RelationalOperator: '<S71>/Relational Operator101'
         *  RelationalOperator: '<S71>/Relational Operator102'
         *  RelationalOperator: '<S71>/Relational Operator103'
         *  RelationalOperator: '<S71>/Relational Operator104'
         *  RelationalOperator: '<S71>/Relational Operator105'
         *  RelationalOperator: '<S71>/Relational Operator106'
         *  RelationalOperator: '<S71>/Relational Operator107'
         *  RelationalOperator: '<S71>/Relational Operator108'
         *  RelationalOperator: '<S71>/Relational Operator109'
         *  RelationalOperator: '<S71>/Relational Operator11'
         *  RelationalOperator: '<S71>/Relational Operator110'
         *  RelationalOperator: '<S71>/Relational Operator111'
         *  RelationalOperator: '<S71>/Relational Operator112'
         *  RelationalOperator: '<S71>/Relational Operator113'
         *  RelationalOperator: '<S71>/Relational Operator114'
         *  RelationalOperator: '<S71>/Relational Operator115'
         *  RelationalOperator: '<S71>/Relational Operator116'
         *  RelationalOperator: '<S71>/Relational Operator117'
         *  RelationalOperator: '<S71>/Relational Operator118'
         *  RelationalOperator: '<S71>/Relational Operator119'
         *  RelationalOperator: '<S71>/Relational Operator12'
         *  RelationalOperator: '<S71>/Relational Operator120'
         *  RelationalOperator: '<S71>/Relational Operator121'
         *  RelationalOperator: '<S71>/Relational Operator122'
         *  RelationalOperator: '<S71>/Relational Operator123'
         *  RelationalOperator: '<S71>/Relational Operator124'
         *  RelationalOperator: '<S71>/Relational Operator125'
         *  RelationalOperator: '<S71>/Relational Operator126'
         *  RelationalOperator: '<S71>/Relational Operator127'
         *  RelationalOperator: '<S71>/Relational Operator128'
         *  RelationalOperator: '<S71>/Relational Operator129'
         *  RelationalOperator: '<S71>/Relational Operator13'
         *  RelationalOperator: '<S71>/Relational Operator130'
         *  RelationalOperator: '<S71>/Relational Operator14'
         *  RelationalOperator: '<S71>/Relational Operator15'
         *  RelationalOperator: '<S71>/Relational Operator16'
         *  RelationalOperator: '<S71>/Relational Operator17'
         *  RelationalOperator: '<S71>/Relational Operator18'
         *  RelationalOperator: '<S71>/Relational Operator19'
         *  RelationalOperator: '<S71>/Relational Operator2'
         *  RelationalOperator: '<S71>/Relational Operator20'
         *  RelationalOperator: '<S71>/Relational Operator21'
         *  RelationalOperator: '<S71>/Relational Operator22'
         *  RelationalOperator: '<S71>/Relational Operator23'
         *  RelationalOperator: '<S71>/Relational Operator24'
         *  RelationalOperator: '<S71>/Relational Operator25'
         *  RelationalOperator: '<S71>/Relational Operator26'
         *  RelationalOperator: '<S71>/Relational Operator27'
         *  RelationalOperator: '<S71>/Relational Operator28'
         *  RelationalOperator: '<S71>/Relational Operator29'
         *  RelationalOperator: '<S71>/Relational Operator3'
         *  RelationalOperator: '<S71>/Relational Operator31'
         *  RelationalOperator: '<S71>/Relational Operator32'
         *  RelationalOperator: '<S71>/Relational Operator33'
         *  RelationalOperator: '<S71>/Relational Operator34'
         *  RelationalOperator: '<S71>/Relational Operator35'
         *  RelationalOperator: '<S71>/Relational Operator38'
         *  RelationalOperator: '<S71>/Relational Operator4'
         *  RelationalOperator: '<S71>/Relational Operator5'
         *  RelationalOperator: '<S71>/Relational Operator54'
         *  RelationalOperator: '<S71>/Relational Operator55'
         *  RelationalOperator: '<S71>/Relational Operator56'
         *  RelationalOperator: '<S71>/Relational Operator57'
         *  RelationalOperator: '<S71>/Relational Operator58'
         *  RelationalOperator: '<S71>/Relational Operator59'
         *  RelationalOperator: '<S71>/Relational Operator6'
         *  RelationalOperator: '<S71>/Relational Operator60'
         *  RelationalOperator: '<S71>/Relational Operator61'
         *  RelationalOperator: '<S71>/Relational Operator7'
         *  RelationalOperator: '<S71>/Relational Operator70'
         *  RelationalOperator: '<S71>/Relational Operator71'
         *  RelationalOperator: '<S71>/Relational Operator72'
         *  RelationalOperator: '<S71>/Relational Operator73'
         *  RelationalOperator: '<S71>/Relational Operator74'
         *  RelationalOperator: '<S71>/Relational Operator75'
         *  RelationalOperator: '<S71>/Relational Operator76'
         *  RelationalOperator: '<S71>/Relational Operator77'
         *  RelationalOperator: '<S71>/Relational Operator8'
         *  RelationalOperator: '<S71>/Relational Operator85'
         *  RelationalOperator: '<S71>/Relational Operator86'
         *  RelationalOperator: '<S71>/Relational Operator87'
         *  RelationalOperator: '<S71>/Relational Operator88'
         *  RelationalOperator: '<S71>/Relational Operator89'
         *  RelationalOperator: '<S71>/Relational Operator9'
         *  RelationalOperator: '<S71>/Relational Operator90'
         *  RelationalOperator: '<S71>/Relational Operator91'
         *  RelationalOperator: '<S71>/Relational Operator92'
         *  RelationalOperator: '<S71>/Relational Operator93'
         *  RelationalOperator: '<S71>/Relational Operator94'
         *  RelationalOperator: '<S71>/Relational Operator95'
         *  RelationalOperator: '<S71>/Relational Operator96'
         *  RelationalOperator: '<S71>/Relational Operator97'
         *  RelationalOperator: '<S71>/Relational Operator98'
         *  RelationalOperator: '<S71>/Relational Operator99'
         *  Switch: '<S21>/Switch1'
         *  Switch: '<S21>/Switch12'
         *  Switch: '<S21>/Switch13'
         *  UnitDelay: '<S21>/Unit Delay'
         *  UnitDelay: '<S21>/Unit Delay2'
         *  UnitDelay: '<S21>/Unit Delay3'
         */
        if (((((HMIR_ac_DW.UnitDelay2_DSTATE_g == CeFWDR_e_TfrCas4Low) &&
                (rtb_TmpSignalConversionAtVeFWDR_e_Tcase_ != CeFWDR_e_TfrCas4Low))
              && rtb_AND) && (rtb_TmpSignalConversionAtHybTypeConfigOu ==
                              CePRXR_e_HybEVeh)) &&
                (rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd == CeTMDR_e_Rock))
        {
            /* Switch: '<S21>/Switch10' incorporates:
             *  Constant: '<S51>/Constant'
             *  Switch: '<S21>/Switch11'
             */
            rtb_Switch10_mn = CeHMIR_e_Screen_2;
        }
        else if (((((HMIR_ac_DW.UnitDelay3_DSTATE != CeFWDR_e_TfrCas4Low) &&
                    (rtb_TmpSignalConversionAtVeFWDR_e_Tcase_ ==
                     CeFWDR_e_TfrCas4Low)) && rtb_AND) &&
                  (rtb_TmpSignalConversionAtHybTypeConfigOu == CePRXR_e_HybEVeh))
                 && (rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd == CeTMDR_e_Sport))
        {
            /* Switch: '<S21>/Switch10' incorporates:
             *  Constant: '<S53>/Constant'
             *  Switch: '<S21>/Switch12'
             */
            rtb_Switch10_mn = CeHMIR_e_Screen_6;
        }
        else if (((HMIR_ac_DW.UnitDelay_DSTATE_dc == CeTIMR_e_Not_Activated) &&
                  ((rtb_TmpSignalConversionAtVeTIMR_e_Terrai ==
                    CeTIMR_e_Up_Activated) ||
                   (rtb_TmpSignalConversionAtVeTIMR_e_Terrai ==
                    CeTIMR_e_Down_Activated))) &&
                 (rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd == CeTMDR_e_Valet))
        {
            /* Switch: '<S21>/Switch10' incorporates:
             *  Constant: '<S52>/Constant'
             *  Switch: '<S21>/Switch1'
             *  Switch: '<S21>/Switch12'
             */
            rtb_Switch10_mn = CeHMIR_e_Screen_12;
        }
        else if (((((((((((((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)
                              124U)) ||
                            ((rtb_TmpSignalConversionAtHybTypeConfigOu !=
                              CePRXR_e_RangeEPB) &&
                             (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                              CePRXR_e_BattEVeh))) ||
                           ((((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                 CeTMDR_e_Sport) &&
                                (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                 CeTMDR_e_Tow)) &&
                               (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                CeTMDR_e_Snow)) &&
                              (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                               CeTMDR_e_Auto)) &&
                             (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                              CeTMDR_e_MudSand)) &&
                            (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                             CeTMDR_e_Rock))) &&
                          (((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)
                              104U)) ||
                            (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                             CePRXR_e_RangeEPB)) ||
                           ((((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                 CeTMDR_e_Sport) &&
                                (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                 CeTMDR_e_Rock)) &&
                               (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                CeTMDR_e_Snow)) &&
                              (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                               CeTMDR_e_Auto)) &&
                             (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                              CeTMDR_e_MudSand)) &&
                            (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                             CeTMDR_e_Tow)))) &&
                         ((((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)
                              127U)) ||
                            (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                             CePRXR_e_BattEVeh)) ||
                           (rtb_TmpSignalConversionAtCustomMdOutport != false)) ||
                          (((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                               CeTMDR_e_Sport) &&
                              (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                               CeTMDR_e_Auto)) &&
                             (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                              CeTMDR_e_Snow)) &&
                            (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                             CeTMDR_e_ECO)) &&
                           (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                            CeTMDR_e_Valet)))) &&
                        (((((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)
                              127U)) ||
                            (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                             CePRXR_e_BattEVeh)) ||
                           (rtb_TmpSignalConversionAtCustomMdOutport != true)) ||
                          (rtb_TmpSignalConversionAtTrackMdOutport1 != false)) ||
                         ((((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                               CeTMDR_e_Sport) &&
                              (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                               CeTMDR_e_Custom)) &&
                             (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                              CeTMDR_e_Snow)) &&
                            (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                             CeTMDR_e_Auto)) &&
                           (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                            CeTMDR_e_ECO)) &&
                          (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                           CeTMDR_e_Valet)))) &&
                       (((((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)
                             127U)) || (rtb_TmpSignalConversionAtHybTypeConfigOu
                            != CePRXR_e_BattEVeh)) ||
                          (rtb_TmpSignalConversionAtCustomMdOutport != true)) ||
                         (rtb_TmpSignalConversionAtTrackMdOutport1 != true)) ||
                        (((((((((((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
            CeTMDR_e_Launch) && (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                CeTMDR_e_Auto)) && (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                CeTMDR_e_Snow)) && (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                    CeTMDR_e_Custom)) &&
                                 (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                  CeTMDR_e_Drag)) &&
                                (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                 CeTMDR_e_Track)) &&
                               (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                                CeTMDR_e_Sport)) &&
                              (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                               CeTMDR_e_ECO)) &&
                             (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                              CeTMDR_e_Valet)) &&
                            (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                             CeTMDR_e_Launch)) &&
                           (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                            CeTMDR_e_LineLock)) &&
                          (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                           CeTMDR_e_Donut)) &&
                         (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                          CeTMDR_e_Drift)))) &&
                      ((((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)
                           128U)) || (rtb_TmpSignalConversionAtHybTypeConfigOu
                          != CePRXR_e_BattEVeh)) ||
                        (rtb_TmpSignalConversionAtAxleLockPrsntOu !=
                         CePRXR_e_ALP_Absent)) ||
                       (((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                            CeTMDR_e_MudSand) &&
                           (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                            CeTMDR_e_Snow)) &&
                          (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                           CeTMDR_e_ECO)) &&
                         (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                          CeTMDR_e_Auto)) &&
                        (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                         CeTMDR_e_Sport)))) &&
                     ((((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)
                          128U)) || (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                         CePRXR_e_BattEVeh)) ||
                       (rtb_TmpSignalConversionAtAxleLockPrsntOu ==
                        CePRXR_e_ALP_Absent)) ||
                      (((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                           CeTMDR_e_MudSand) &&
                          (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                           CeTMDR_e_Snow)) &&
                         (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                          CeTMDR_e_Rock)) &&
                        (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                         CeTMDR_e_Auto)) &&
                       (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                        CeTMDR_e_Sport)))) &&
                    (((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)125U))
                      || (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                          CePRXR_e_BattEVeh)) ||
                     (((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                          CeTMDR_e_Sand) &&
                         (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                          CeTMDR_e_Snow)) &&
                        (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                         CeTMDR_e_ECO)) &&
                       (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                        CeTMDR_e_Auto)) &&
                      (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                       CeTMDR_e_Sport)))) &&
                   (((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)126U))
                     || (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                         CePRXR_e_BattEVeh)) ||
                    (((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                         CeTMDR_e_MudSand) &&
                        (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                         CeTMDR_e_Snow)) &&
                       (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe != CeTMDR_e_ECO))
                      && (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                          CeTMDR_e_Auto)) &&
                     (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe != CeTMDR_e_Sport))))
                  && ((((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)
                       126U)) || (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                                  CePRXR_e_HybEVeh)) ||
                       (rtb_TmpSignalConversionAtTerrainSelector !=
                        CePRXR_e_Four_Modes)) ||
                      ((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                          CeTMDR_e_MudSand) &&
                         (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                          CeTMDR_e_Snow)) &&
                        (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                         CeTMDR_e_Auto)) &&
                       (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                        CeTMDR_e_Sport)))) &&
                 ((((rtb_TmpSignalConversionAtVehLineInfoOutp != ((uint8)126U)) ||
                    (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                     CePRXR_e_HybEVeh)) ||
                   (rtb_TmpSignalConversionAtTerrainSelector !=
                    CePRXR_e_Five_Modes)) ||
                  (((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe != CeTMDR_e_Rock)
                      && (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                          CeTMDR_e_MudSand)) &&
                     (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe != CeTMDR_e_Snow))
                    && (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe !=
                        CeTMDR_e_Auto)) &&
                   (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe != CeTMDR_e_Sport))))
        {
            /* Switch: '<S21>/Switch10' incorporates:
             *  Constant: '<S55>/Constant'
             *  Switch: '<S21>/Switch1'
             *  Switch: '<S21>/Switch12'
             *  Switch: '<S21>/Switch13'
             */
            rtb_Switch10_mn = CeHMIR_e_No_Request;
        }
        else
        {
            (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value(&tmpRead_1);

            /* RelationalOperator: '<S21>/Relational Operator4' incorporates:
             *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
             *  Switch: '<S21>/Switch1'
             *  Switch: '<S21>/Switch12'
             *  Switch: '<S21>/Switch13'
             */
            rtb_TmpSignalConversionAtCustomMdOutport =
                (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe ==
                 rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd);

            /* Switch: '<S21>/Switch2' incorporates:
             *  Constant: '<S68>/Calib'
             *  Constant: '<S69>/Calib'
             *  Inport: '<Root>/VeSRAR_b_Inhibit_AWD_TerrainMode'
             *  Logic: '<S21>/Logical Operator3'
             *  Logic: '<S21>/Logical Operator4'
             *  Logic: '<S21>/Logical Operator5'
             *  RelationalOperator: '<S21>/Relational Operator5'
             *  RelationalOperator: '<S21>/Relational Operator6'
             *  RelationalOperator: '<S21>/Relational Operator7'
             *  Switch: '<S21>/Switch1'
             *  Switch: '<S21>/Switch12'
             *  Switch: '<S21>/Switch13'
             */
            if (rtb_TmpSignalConversionAtCustomMdOutport &&
                    ((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe == CeTMDR_e_Valet)
                     && ((rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >
                          KeHMIR_v_ValetMdMaxSpd) || (tmpRead_1 >
                    KeHMIR_Pct_ValetMdMaxAccelPdl))))
            {
                /* Switch: '<S21>/Switch10' incorporates:
                 *  Constant: '<S64>/Constant'
                 *  Switch: '<S21>/Switch13'
                 *  Switch: '<S21>/Switch2'
                 */
                rtb_Switch10_mn = CeHMIR_e_No_Request;
            }
            else
            {
                (void)Rte_Read_VeSRAR_b_Inhibit_AWD_TerrainMode_Value(&tmpRead_2);

                /* Switch: '<S21>/Switch3' incorporates:
                 *  Constant: '<S21>/Const1'
                 *  Constant: '<S21>/Const2'
                 *  Constant: '<S21>/Const3'
                 *  Inport: '<Root>/VeSRAR_b_Inhibit_AWD_TerrainMode'
                 *  Logic: '<S21>/Logical Operator10'
                 *  Logic: '<S21>/Logical Operator11'
                 *  Logic: '<S21>/Logical Operator12'
                 *  Logic: '<S21>/Logical Operator6'
                 *  Logic: '<S21>/Logical Operator7'
                 *  Logic: '<S21>/Logical Operator8'
                 *  Logic: '<S21>/Logical Operator9'
                 *  RelationalOperator: '<S21>/Relational Operator10'
                 *  RelationalOperator: '<S21>/Relational Operator11'
                 *  RelationalOperator: '<S21>/Relational Operator12'
                 *  RelationalOperator: '<S21>/Relational Operator13'
                 *  RelationalOperator: '<S21>/Relational Operator14'
                 *  RelationalOperator: '<S21>/Relational Operator15'
                 *  RelationalOperator: '<S21>/Relational Operator16'
                 *  RelationalOperator: '<S21>/Relational Operator17'
                 *  RelationalOperator: '<S21>/Relational Operator18'
                 *  RelationalOperator: '<S21>/Relational Operator41'
                 *  RelationalOperator: '<S21>/Relational Operator8'
                 *  RelationalOperator: '<S21>/Relational Operator9'
                 *  Switch: '<S21>/Switch4'
                 *  Switch: '<S21>/Switch5'
                 */
                if (rtb_TmpSignalConversionAtCustomMdOutport &&
                        ((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe ==
                            CeTMDR_e_Rock) ||
                           (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe ==
                            CeTMDR_e_Sand)) ||
                          (rtb_TmpSignalConversionAtVeTIMR_e_ModeRe ==
                           CeTMDR_e_MudSand)) && (tmpRead_2 == true)))
                {
                    /* Switch: '<S21>/Switch10' incorporates:
                     *  Constant: '<S65>/Constant'
                     *  Switch: '<S21>/Switch13'
                     *  Switch: '<S21>/Switch3'
                     */
                    rtb_Switch10_mn = CeHMIR_e_Screen_22;
                }
                else if (((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe ==
                           CeTMDR_e_Sport) &&
                          ((rtb_TmpSignalConversionAtVeFWDR_e_Tcase_ ==
                            CeFWDR_e_TfrCas4Low) &&
                           (rtb_TmpSignalConversionAtVeFWDR_b_Tcase_ == false)))
                         && (rtb_TmpSignalConversionAtHybTypeConfigOu ==
                             CePRXR_e_HybEVeh))
                {
                    /* Switch: '<S21>/Switch10' incorporates:
                     *  Constant: '<S28>/Constant'
                     *  Switch: '<S21>/Switch13'
                     *  Switch: '<S21>/Switch3'
                     *  Switch: '<S21>/Switch4'
                     */
                    rtb_Switch10_mn = CeHMIR_e_Screen_6;
                }
                else if (((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe ==
                           CeTMDR_e_Rock) &&
                          ((rtb_TmpSignalConversionAtVeFWDR_e_Tcase_ !=
                            CeFWDR_e_TfrCas4Low) &&
                           (rtb_TmpSignalConversionAtVeFWDR_b_Tcase_ == false)))
                         && (rtb_TmpSignalConversionAtHybTypeConfigOu ==
                             CePRXR_e_HybEVeh))
                {
                    /* Switch: '<S21>/Switch10' incorporates:
                     *  Constant: '<S32>/Constant'
                     *  Switch: '<S21>/Switch4'
                     *  Switch: '<S21>/Switch5'
                     */
                    rtb_Switch10_mn = CeHMIR_e_Screen_2;
                }
                else
                {
                    /* Logic: '<S21>/Logical Operator13' incorporates:
                     *  Constant: '<S21>/Constant1'
                     *  RelationalOperator: '<S21>/Relational Operator19'
                     *  RelationalOperator: '<S21>/Relational Operator20'
                     *  RelationalOperator: '<S21>/Relational Operator21'
                     *  Switch: '<S21>/Switch4'
                     *  Switch: '<S21>/Switch5'
                     */
                    rtb_TmpSignalConversionAtVeFWDR_b_Tcase_ =
                        ((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe ==
                            CeTMDR_e_Rock) &&
                           rtb_TmpSignalConversionAtVeTMDR_b_RockMd) &&
                          (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                           CePRXR_e_HybEVeh)) &&
                         (rtb_TmpSignalConversionAtVehLineInfoOutp == ((uint8)
                           124U)));

                    /* Switch: '<S21>/Switch6' incorporates:
                     *  Constant: '<S21>/Const4'
                     *  Constant: '<S21>/Const5'
                     *  Logic: '<S21>/Logical Operator14'
                     *  Logic: '<S21>/Logical Operator15'
                     *  RelationalOperator: '<S21>/Relational Operator22'
                     *  RelationalOperator: '<S21>/Relational Operator23'
                     *  Switch: '<S21>/Switch4'
                     *  Switch: '<S21>/Switch5'
                     *  Switch: '<S21>/Switch7'
                     */
                    if (rtb_TmpSignalConversionAtVeFWDR_b_Tcase_ &&
                            (rtb_TmpSignalConversionAtVePLTR_b_SpeedU == false))
                    {
                        /* Switch: '<S21>/Switch10' incorporates:
                         *  Constant: '<S37>/Constant'
                         *  Switch: '<S21>/Switch5'
                         *  Switch: '<S21>/Switch6'
                         */
                        rtb_Switch10_mn = CeHMIR_e_Screen_19;
                    }
                    else if (rtb_TmpSignalConversionAtVeFWDR_b_Tcase_ &&
                             (rtb_TmpSignalConversionAtVePLTR_b_SpeedU == true))
                    {
                        /* Switch: '<S21>/Switch10' incorporates:
                         *  Constant: '<S38>/Constant'
                         *  Switch: '<S21>/Switch5'
                         *  Switch: '<S21>/Switch7'
                         */
                        rtb_Switch10_mn = CeHMIR_e_Screen_18;
                    }
                    else
                    {
                        /* Logic: '<S21>/Logical Operator17' incorporates:
                         *  Constant: '<S21>/Constant2'
                         *  Constant: '<S21>/Constant3'
                         *  Logic: '<S21>/Logical Operator18'
                         *  RelationalOperator: '<S21>/Relational Operator25'
                         *  RelationalOperator: '<S21>/Relational Operator26'
                         *  RelationalOperator: '<S21>/Relational Operator27'
                         *  RelationalOperator: '<S21>/Relational Operator28'
                         *  Switch: '<S21>/Switch7'
                         */
                        rtb_TmpSignalConversionAtVeTMDR_b_RockMd =
                            ((((rtb_TmpSignalConversionAtVeTIMR_e_ModeRe ==
                                CeTMDR_e_Rock) &&
                               rtb_TmpSignalConversionAtVeTMDR_b_RockMd) &&
                              (rtb_TmpSignalConversionAtHybTypeConfigOu !=
                               CePRXR_e_HybEVeh)) &&
                             ((rtb_TmpSignalConversionAtVehLineInfoOutp ==
                               ((uint8)104U)) ||
                              (rtb_TmpSignalConversionAtVehLineInfoOutp ==
                               ((uint8)128U))));

                        /* Switch: '<S21>/Switch8' incorporates:
                         *  Constant: '<S21>/Const6'
                         *  Constant: '<S21>/Const7'
                         *  Logic: '<S21>/Logical Operator16'
                         *  Logic: '<S21>/Logical Operator19'
                         *  RelationalOperator: '<S21>/Relational Operator24'
                         *  RelationalOperator: '<S21>/Relational Operator29'
                         *  Switch: '<S21>/Switch7'
                         *  Switch: '<S21>/Switch9'
                         */
                        if (rtb_TmpSignalConversionAtVeTMDR_b_RockMd &&
                                (rtb_TmpSignalConversionAtVePLTR_b_SpeedU ==
                                 false))
                        {
                            /* Switch: '<S21>/Switch10' incorporates:
                             *  Constant: '<S39>/Constant'
                             *  Switch: '<S21>/Switch5'
                             *  Switch: '<S21>/Switch7'
                             *  Switch: '<S21>/Switch8'
                             */
                            rtb_Switch10_mn = CeHMIR_e_Screen_21;
                        }
                        else if (rtb_TmpSignalConversionAtVeTMDR_b_RockMd &&
                                 (rtb_TmpSignalConversionAtVePLTR_b_SpeedU ==
                                  true))
                        {
                            /* Switch: '<S21>/Switch9' incorporates:
                             *  Constant: '<S44>/Constant'
                             *  Switch: '<S21>/Switch10'
                             *  Switch: '<S21>/Switch5'
                             *  Switch: '<S21>/Switch7'
                             *  Switch: '<S21>/Switch8'
                             */
                            rtb_Switch10_mn = CeHMIR_e_Screen_20;
                        }
                        else
                        {
                            /* Switch: '<S21>/Switch10' incorporates:
                             *  Constant: '<S54>/Constant'
                             *  Switch: '<S21>/Switch5'
                             *  Switch: '<S21>/Switch7'
                             *  Switch: '<S21>/Switch8'
                             *  Switch: '<S21>/Switch9'
                             */
                            rtb_Switch10_mn = CeHMIR_e_No_Request;
                        }

                        /* End of Switch: '<S21>/Switch8' */
                    }

                    /* End of Switch: '<S21>/Switch6' */
                }

                /* End of Switch: '<S21>/Switch3' */
            }

            /* End of Switch: '<S21>/Switch2' */
        }
    }

    /* End of Switch: '<S21>/Switch10' */

    /* Outputs for Atomic SubSystem: '<S21>/Count Down Reset Enabled' */
    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S21>/Const8'
     *  Constant: '<S23>/Constant Value'
     *  Constant: '<S31>/Constant'
     *  Constant: '<S70>/Calib'
     *  Logic: '<S21>/Logical Operator27'
     *  Logic: '<S23>/AND'
     *  RelationalOperator: '<S21>/Relational Operator42'
     *  RelationalOperator: '<S21>/Relational Operator43'
     *  RelationalOperator: '<S23>/Greater  Than'
     *  Switch: '<S21>/Switch15'
     *  Switch: '<S23>/Switch2'
     *  UnitDelay: '<S23>/Unit Delay'
     */
    if ((HMIR_ac_DW.UnitDelay4_DSTATE != rtb_Switch10_mn) && (rtb_Switch10_mn !=
         CeHMIR_e_No_Request))
    {
        HMIR_ac_DW.UnitDelay_DSTATE_nz = KeHMIR_Cnt_TerrainHMIRqDbnc;
    }
    else
    {
        if ((true) && (HMIR_ac_DW.UnitDelay_DSTATE_nz > ((uint16)0U)))
        {
            /* UnitDelay: '<S23>/Unit Delay' incorporates:
             *  Constant: '<S23>/Constant Value1'
             *  Sum: '<S23>/Subtraction'
             *  Switch: '<S23>/Switch2'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_nz -= ((uint16)1U);
        }

        /* Switch: '<S21>/Switch14' incorporates:
         *  Constant: '<S23>/Constant Value2'
         *  RelationalOperator: '<S23>/Greater  Than1'
         *  UnitDelay: '<S23>/Unit Delay'
         */
        if (HMIR_ac_DW.UnitDelay_DSTATE_nz > ((uint16)0U))
        {
            /* Switch: '<S21>/Switch15' */
            rtb_Switch10_mn = HMIR_ac_DW.UnitDelay4_DSTATE;
        }
        else
        {
            /* Switch: '<S21>/Switch15' */
            rtb_Switch10_mn = CeHMIR_e_No_Request;
        }

        /* End of Switch: '<S21>/Switch14' */
    }

    /* End of Switch: '<S23>/Switch1' */
    /* End of Outputs for SubSystem: '<S21>/Count Down Reset Enabled' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTIMR_e_TrrnMdSt' */
    (void)Rte_Read_VeTIMR_e_TrrnMdSt_Value(&tmpRead_0);

    /* Inport: '<Root>/VeDTRR_b_DrvMdPwrLim' */
    (void)Rte_Read_VeDTRR_b_DrvMdPwrLim_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/HMIR_MedTED'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/HMIC_25ms_Disp'
     */
    /* Update for UnitDelay: '<S155>/Unit Delay' incorporates:
     *  Switch: '<S155>/Switch2'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_hy = VeHMIC_b_TransWarn2Msg_Not0_Cont;

    /* Update for UnitDelay: '<S156>/Unit Delay' incorporates:
     *  Switch: '<S156>/Switch2'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gn = VeHMIC_b_TransWarnMsg_Not0_Cont;

    /* Update for RelationalOperator: '<S21>/Relational Operator42' incorporates:
     *  Switch: '<S21>/Switch15'
     *  UnitDelay: '<S21>/Unit Delay4'
     */
    HMIR_ac_DW.UnitDelay4_DSTATE = rtb_Switch10_mn;

    /* Update for UnitDelay: '<S21>/Unit Delay1' incorporates:
     *  SignalConversion generated from: '<S3>/VeTMDR_e_TrrnMd'
     */
    HMIR_ac_DW.UnitDelay1_DSTATE_gh = rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd;

    /* Update for UnitDelay: '<S21>/Unit Delay2' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDR_e_Tcase_Stat'
     */
    HMIR_ac_DW.UnitDelay2_DSTATE_g = rtb_TmpSignalConversionAtVeFWDR_e_Tcase_;

    /* Update for UnitDelay: '<S21>/Unit Delay3' incorporates:
     *  SignalConversion generated from: '<S3>/VeFWDR_e_Tcase_Stat'
     */
    HMIR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtVeFWDR_e_Tcase_;

    /* Update for UnitDelay: '<S21>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S3>/VeTIMR_e_TerrainMdReq'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_dc = rtb_TmpSignalConversionAtVeTIMR_e_Terrai;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/HMIO_25msec_Outputs'
     */
    /* Outport: '<Root>/VeHMIR_b_DrvAwayAlt' incorporates:
     *  Logic: '<S172>/AND'
     *  SignalConversion generated from: '<S3>/VeHMIR_b_DrvAwayAlt'
     */
    (void)Rte_Write_VeHMIR_b_DrvAwayAlt_Value(VeHMIC_b_DrvAway_Alrt_VDCM);

    /* Outport: '<Root>/VeHMIR_b_DrvAwayIn' incorporates:
     *  Logic: '<S174>/AND'
     *  SignalConversion generated from: '<S3>/VeHMIR_b_DrvAwayIn'
     */
    (void)Rte_Write_VeHMIR_b_DrvAwayIn_Value(VeHMIC_b_DrvAway_Inhbt_VDCM);

    /* Outport: '<Root>/VeHMIR_b_GreyPowerAct' incorporates:
     *  Logic: '<S175>/AND'
     *  SignalConversion generated from: '<S3>/VeHMIR_b_GreyPowerAct'
     */
    (void)Rte_Write_VeHMIR_b_GreyPowerAct_Value(tmpRead);

    /* Outport: '<Root>/VeHMIR_b_RollWarn' incorporates:
     *  Logic: '<S173>/AND'
     *  SignalConversion generated from: '<S3>/VeHMIR_b_RollWarn'
     */
    (void)Rte_Write_VeHMIR_b_RollWarn_Value(VeHMIC_b_RollingWarning);

    /* Outport: '<Root>/VeHMIR_e_ShftProg' incorporates:
     *  Gain: '<S183>/Gain'
     *  SignalConversion generated from: '<S3>/VeHMIR_e_ShftProg'
     */
    (void)Rte_Write_VeHMIR_e_ShftProg_Value((sint16)(1 *
        HMIR_ac_B.VeHMIC_e_ShftProg));

    /* Outport: '<Root>/VeHMIR_e_TerrainHMIRq' incorporates:
     *  Constant: '<S182>/Calib'
     *  DataTypeConversion: '<S176>/DataTypeConversion'
     *  DataTypeConversion: '<S19>/Data Type Conversion2'
     *  Selector: '<S19>/Selector2'
     *  SignalConversion generated from: '<S3>/VeHMIR_e_TerrainHMIRq'
     *  Switch: '<S21>/Switch15'
     */
    (void)Rte_Write_VeHMIR_e_TerrainHMIRq_Value((TeHMIR_e_TerrainHMIRq)
        KaHMIR_e_TerrainHMIRqRemap[(rtb_Switch10_mn)]);

    /* Outport: '<Root>/VeHMIR_e_TerrainModeDesiredStat' incorporates:
     *  Constant: '<S180>/Calib'
     *  DataTypeConversion: '<S178>/DataTypeConversion'
     *  DataTypeConversion: '<S19>/Data Type Conversion'
     *  Inport: '<Root>/VeTIMR_e_TrrnMdSt'
     *  Selector: '<S19>/Selector'
     *  SignalConversion generated from: '<S3>/VeHMIR_e_TerrainModeDesiredStat'
     */
    (void)Rte_Write_VeHMIR_e_TerrainModeDesiredStat_Value
        ((TeHMIR_e_TerrainModeDesiredStat)KaHMIR_e_TerrainMdDesStatRemap
         [(tmpRead_0)]);

    /* Outport: '<Root>/VeHMIR_e_TerrainModeStat' incorporates:
     *  Constant: '<S181>/Calib'
     *  DataTypeConversion: '<S179>/DataTypeConversion'
     *  DataTypeConversion: '<S19>/Data Type Conversion1'
     *  Selector: '<S19>/Selector1'
     *  SignalConversion generated from: '<S3>/VeHMIR_e_TerrainModeStat'
     *  SignalConversion generated from: '<S3>/VeTMDR_e_TrrnMd'
     */
    (void)Rte_Write_VeHMIR_e_TerrainModeStat_Value((TeHMIR_e_TerrainModeStat)
        KaHMIR_e_TerrainModeStatRemap[(rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd)]);

    /* Outport: '<Root>/VeHMIR_e_TransWarn2' incorporates:
     *  DataTypeConversion: '<S177>/DataTypeConversion'
     *  SignalConversion generated from: '<S3>/VeHMIR_e_TransWarn2'
     *  Switch: '<S155>/Switch3'
     */
    (void)Rte_Write_VeHMIR_e_TransWarn2_Value(VeHMIC_e_TransWarn2Msg_Cont);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/HMIC_25ms_Disp'
     */
    /* Merge: '<Root>/VeHMIC_e_TransWarn_IRV_Merge' incorporates:
     *  SignalConversion: '<S156>/Signal Conversion'
     *  SignalConversion generated from: '<S3>/VeHMIC_e_TransWarn_write'
     *  Switch: '<S156>/Switch3'
     */
    Rte_IrvWrite_HMIR_MedTED_VeHMIC_e_TransWarn_write_IRV
        (VeHMIC_e_TransWarnMsg_Cont);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Model step function for TID2 */
FUNC(void, HMIR_CODE) HMIR_MedTEF(void) /* Explicit Task: MedTEF */
{
    float32 tmpRead_2;
    TeDMIR_e_DrvMdSt tmpRead_1;
    TeESSR_e_HybEngSysActv tmpRead;
    boolean tmpRead_0;

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_3;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_a;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_b;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_d;

#endif

#if Rte_SysCon_Variant_HMIR_2

    boolean tmpRead_e;

#endif

    float32 rtb_Sum2_g;
    float32 rtb_Switch1_ej;
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_d;
    float32 rtb_TmpSignalConversionAtVeDMDR_Pct_SOCT;
    uint16 tmpRead_h;
    TeBACR_e_HEVCharge_State tmpRead_g;
    TeDMDR_e_DrvMd rtb_TmpSignalConversionAtVeDMDR_e_DrvMdA;
    TeOBCR_e_ChargingSystemSts rtb_TmpSignalConversionAtVeOBCR_e_Chargi;
    TeVTXR_e_PowerPanelMd tmpRead_f;
    boolean rtb_AND;
    boolean rtb_OR1_pt;
    boolean rtb_TmpSignalConversionAtVeTHMR_b_HVAC_t;
    boolean rtb_TmpSignalConversionAtVeTHMR_b_StartV;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/HMIR_MedTEF'
     */
    /* DataStoreWrite: '<S4>/DSW_StatusByte_PwrElecPmpPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrElecPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrElecPmpPerf_Value
        (&HMIR_ac_DW.StatusByte_PwrElecPmpPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_PIM_ContMod' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PIM_ContMod'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PIM_ContMod_Value
        (&HMIR_ac_DW.StatusByte_PIM_ContMod);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_MtrElect_CoolPumBCtrlPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf_Value
        (&HMIR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_MtrElect_CoolPumAOvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd_Value
        (&HMIR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_MtrElect_CoolPmpBTempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPmpBTempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPmpBTempSnsrPerf_Value
        (&HMIR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf_Value
        (&HMIR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_MtrElect_CooPumBOvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CooPumBOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CooPumBOvrSpd_Value
        (&HMIR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_MtrElect_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf_Value
        (&HMIR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_MtrElect_CT_SnsrBPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrBPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrBPerf_Value
        (&HMIR_ac_DW.StatusByte_MtrElect_CT_SnsrBPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LostCommMtrElectCoolPmpB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpB_Value
        (&HMIR_ac_DW.StatusByte_LostCommMtrElectCoolPmpB);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LostCommMtrElectCoolPmpA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA_Value
        (&HMIR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LostCommHB_PSCCooCtrlVlvC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvC_Value
        (&HMIR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvC);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_LostCommHB_PSCCooCtrlVlvB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvB_Value
        (&HMIR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvB);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_IgnSwRunCrnkPstnCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktLo_Value
        (&HMIR_ac_DW.StatusByte_IgnSwRunCrnkPstnCktLo);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_HB_PSC_CtrlValCCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValCCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValCCktPerf_Value
        (&HMIR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_HB_PSC_CtrlValBCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValBCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValBCktPerf_Value
        (&HMIR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_EngHoodSwCktRngPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSwCktRngPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSwCktRngPerf_Value
        (&HMIR_ac_DW.StatusByte_EngHoodSwCktRngPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_EngHoodSwCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSwCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSwCktLo_Value
        (&HMIR_ac_DW.StatusByte_EngHoodSwCktLo);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_EngHoodSwCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSwCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSwCktHi_Value
        (&HMIR_ac_DW.StatusByte_EngHoodSwCktHi);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_ClntTempTooHigh' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ClntTempTooHigh'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ClntTempTooHigh_Value
        (&HMIR_ac_DW.StatusByte_ClntTempTooHigh);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrPerf_Value
        (&HMIR_ac_DW.StatusByte_CT_SnsrPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_BattCoolPmpOveSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpOveSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpOveSpd_Value
        (&HMIR_ac_DW.StatusByte_BattCoolPmpOveSpd);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_BattChrgCouTempSnsrCCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCkt_Value
        (&HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_BattChrgCouTempSnsrCCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCktPerf_Value
        (&HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_BattChrgCouTempSnsrBCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCkt_Value
        (&HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_BattChrgCouTempSnsrBCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCktPerf_Value
        (&HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_BatChaCouTemSnsrCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BatChaCouTemSnsrCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BatChaCouTemSnsrCkt_Value
        (&HMIR_ac_DW.StatusByte_BatChaCouTemSnsrCkt);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_BatChaCouTemSenACirRan' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BatChaCouTemSenACirRan'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BatChaCouTemSenACirRan_Value
        (&HMIR_ac_DW.StatusByte_BatChaCouTemSenACirRan);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_APP_Snsr1_MinStpPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr1_MinStpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr1_MinStpPerf_Value
        (&HMIR_ac_DW.StatusByte_APP_Snsr1_MinStpPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AAT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AAT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AAT_SnsrPerf_Value
        (&HMIR_ac_DW.StatusByte_AAT_SnsrPerf);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AAT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AAT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AAT_SnsrCktLo_Value
        (&HMIR_ac_DW.StatusByte_AAT_SnsrCktLo);

    /* DataStoreWrite: '<S4>/DSW_StatusByte_AAT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AAT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AAT_SnsrCktHi_Value
        (&HMIR_ac_DW.StatusByte_AAT_SnsrCktHi);

    /* SignalConversion generated from: '<S4>/VeDMDR_e_DrvMdArb' incorporates:
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value
        (&rtb_TmpSignalConversionAtVeDMDR_e_DrvMdA);

    /* SignalConversion generated from: '<S4>/VeDFIR_b_NonEmisMalfActv' incorporates:
     *  Inport: '<Root>/VeDFIR_b_NonEmisMalfActv'
     */
    (void)Rte_Read_VeDFIR_b_NonEmisMalfActv_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeDFIR_b_NonEmisMal);

    /* SignalConversion generated from: '<S4>/VeRTMR_b_InPlantMode' incorporates:
     *  Inport: '<Root>/VeRTMR_b_InPlantMode'
     */
    (void)Rte_Read_VeRTMR_b_InPlantMode_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod);

    /* SignalConversion generated from: '<S4>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&HMIR_ac_B.TmpSignalConversionAtVePMDR_e_PMM_PowerM);

    /* SignalConversion generated from: '<S4>/VeBPCR_b_HEVOnRqBPCM_Debounced' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HEVOnRqBPCM_Debounced'
     */
    (void)Rte_Read_VeBPCR_b_HEVOnRqBPCM_Debounced_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_HEVOnRqB_o);

    /* SignalConversion generated from: '<S4>/VeTHMR_b_HVAC_turnedOff' incorporates:
     *  Inport: '<Root>/VeTHMR_b_HVAC_turnedOff'
     */
    (void)Rte_Read_VeTHMR_b_HVAC_turnedOff_Value
        (&rtb_TmpSignalConversionAtVeTHMR_b_HVAC_t);

    /* SignalConversion generated from: '<S4>/VeTHMR_b_StartVhcl_ToMaintain12Vlt' incorporates:
     *  Inport: '<Root>/VeTHMR_b_StartVhcl_ToMaintain12Vlt'
     */
    (void)Rte_Read_VeTHMR_b_StartVhcl_ToMaintain12Vlt_Value
        (&rtb_TmpSignalConversionAtVeTHMR_b_StartV);

    /* SignalConversion generated from: '<S4>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_d);

    /* SignalConversion generated from: '<S4>/VeENGR_b_CondOkForCylDeac_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    HMIR_ac_B.TmpSignalConversionAtVeENGR_b_CondOkForC =
        Rte_IrvRead_HMIR_MedTEF_VeENGR_b_CondOkForCylDeac_write_IRV();

    /* SignalConversion generated from: '<S4>/VeOBCR_e_ChargingSystemSts' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value
        (&rtb_TmpSignalConversionAtVeOBCR_e_Chargi);

    /* SignalConversion generated from: '<S4>/VeDMDR_Pct_SOCTarget' incorporates:
     *  Inport: '<Root>/VeBACR_Pct_TargetSOC_Stgc'
     */
    (void)Rte_Read_VeBACR_Pct_TargetSOC_Stgc_Value
        (&rtb_TmpSignalConversionAtVeDMDR_Pct_SOCT);

    /* SignalConversion generated from: '<S4>/VeBPCR_e_HV_BatIsolStat' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatIsolStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatIsolStat_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatIsol);

    /* SignalConversion generated from: '<S4>/VeBPCR_e_PwrtrnHV_IsolStat' incorporates:
     *  Inport: '<Root>/VeBPCR_e_PwrtrnHV_IsolStat'
     */
    (void)Rte_Read_VeBPCR_e_PwrtrnHV_IsolStat_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeBPCR_e_PwrtrnHV_I);

    /* SignalConversion generated from: '<S4>/VeTHMR_e_HV_Bat_CltLvlLo' incorporates:
     *  Inport: '<Root>/VeTHMR_e_HV_Bat_CltLvlLo'
     */
    (void)Rte_Read_VeTHMR_e_HV_Bat_CltLvlLo_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeTHMR_e_HV_Bat_Clt);

    /* SignalConversion generated from: '<S4>/VeHMIR_b_MCPA_Service_Lamp_Request_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_MCPA_Servi =
        Rte_IrvRead_HMIR_MedTEF_MCPA_SvsLampRequest_write_IRV();

    /* SignalConversion generated from: '<S4>/VeHMIR_b_MCPB_Service_Lamp_Request_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_MCPB_Servi =
        Rte_IrvRead_HMIR_MedTEF_MCPB_SvsLampRequest_write_IRV();

    /* SignalConversion generated from: '<S4>/VeHMIR_b_MCPC_Service_Lamp_Request_read' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_MCPC_Servi =
        Rte_IrvRead_HMIR_MedTEF_MCPC_SvsLampRequest_write_IRV();

    /* SignalConversion generated from: '<S4>/VeHVTR_e_HV_IntrlkStat' incorporates:
     *  Inport: '<Root>/VeHVTR_e_HV_IntrlkStat'
     */
    (void)Rte_Read_VeHVTR_e_HV_IntrlkStat_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeHVTR_e_HV_IntrlkS);

    /* SignalConversion generated from: '<S4>/VeHMIR_b_P1_MIL_Request_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_P1_MIL_Req =
        Rte_IrvRead_HMIR_MedTEF_P1_MIL_Request_write_IRV();

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_LostCommABSCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommABSCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommABSCM_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeDMAB_y_StatusByte);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_InvData_ABS' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ABS'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ABS_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeDMAB_y_StatusBy_d);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/HMIC_50ms_Disp'
     */
    /* Outputs for Atomic SubSystem: '<S184>/Calc_Red_Mtr_Cpby' */
#if Rte_SysCon_Variant_HMIR_2

    /* Outputs for Atomic SubSystem: '<S186>/Calc_Red_Mtr_Cpby' */
    /* Inport: '<Root>/VeBSWR_b_CM_Perf' */
    (void)Rte_Read_VeBSWR_b_CM_Perf_Value(&rtb_OR1_pt);

    /* Inport: '<Root>/VeBSWR_b_RadFanDiagErrSupply' */
    (void)Rte_Read_VeBSWR_b_RadFanDiagErrSupply_Value(&tmpRead_e);

    /* Inport: '<Root>/VeBSWR_b_MtrElect_CT2_SnsrBCktHi' */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT2_SnsrBCktHi_Value(&tmpRead_d);

    /* Inport: '<Root>/VeBSWR_b_MtrElect_CT2_SnsrBCktLo' */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT2_SnsrBCktLo_Value(&tmpRead_c);

    /* Inport: '<Root>/VeBSWR_b_RadFanDiagErrM1' */
    (void)Rte_Read_VeBSWR_b_RadFanDiagErrM1_Value(&tmpRead_b);

    /* Inport: '<Root>/VeBSWR_b_RadFanDiagErrM0' */
    (void)Rte_Read_VeBSWR_b_RadFanDiagErrM0_Value(&tmpRead_a);

    /* Inport: '<Root>/VeBSWR_b_Fan1CntrlCktHi' */
    (void)Rte_Read_VeBSWR_b_Fan1CntrlCktHi_Value(&tmpRead_9);

    /* Inport: '<Root>/VeBSWR_b_Fan1CntrlCktLo' */
    (void)Rte_Read_VeBSWR_b_Fan1CntrlCktLo_Value(&tmpRead_8);

    /* Inport: '<Root>/VeBSWR_b_Fan1CntrlCkt' */
    (void)Rte_Read_VeBSWR_b_Fan1CntrlCkt_Value(&tmpRead_7);

    /* Inport: '<Root>/VeBSWR_b_CT_SnsrCktHi' */
    (void)Rte_Read_VeBSWR_b_CT_SnsrCktHi_Value(&tmpRead_6);

    /* Inport: '<Root>/VeBSWR_b_CT_SnsrCktLo' */
    (void)Rte_Read_VeBSWR_b_CT_SnsrCktLo_Value(&tmpRead_5);

    /* Inport: '<Root>/VeBSWR_b_MtrElect_CT_SnsrCktHi' */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT_SnsrCktHi_Value(&tmpRead_4);

    /* Inport: '<Root>/VeBSWR_b_MtrElect_CT_SnsrCktLo' */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT_SnsrCktLo_Value(&tmpRead_3);

    /* Logic: '<S191>/Logical Operator5' incorporates:
     *  Constant: '<S193>/Constant1'
     *  Constant: '<S193>/Constant2'
     *  Constant: '<S194>/Constant1'
     *  Constant: '<S194>/Constant2'
     *  Constant: '<S195>/Constant1'
     *  Constant: '<S195>/Constant2'
     *  Constant: '<S196>/Constant1'
     *  Constant: '<S196>/Constant2'
     *  Constant: '<S197>/Constant1'
     *  Constant: '<S197>/Constant2'
     *  Constant: '<S198>/Constant1'
     *  Constant: '<S198>/Constant2'
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S199>/Constant2'
     *  Constant: '<S200>/Constant1'
     *  Constant: '<S200>/Constant2'
     *  Constant: '<S201>/Constant1'
     *  Constant: '<S201>/Constant2'
     *  Constant: '<S202>/Constant1'
     *  Constant: '<S202>/Constant2'
     *  Constant: '<S203>/Constant1'
     *  Constant: '<S203>/Constant2'
     *  Constant: '<S204>/Constant1'
     *  Constant: '<S204>/Constant2'
     *  Constant: '<S205>/Constant1'
     *  Constant: '<S205>/Constant2'
     *  Constant: '<S206>/Constant1'
     *  Constant: '<S206>/Constant2'
     *  Constant: '<S207>/Constant1'
     *  Constant: '<S207>/Constant2'
     *  Constant: '<S208>/Constant1'
     *  Constant: '<S208>/Constant2'
     *  Constant: '<S209>/Constant1'
     *  Constant: '<S209>/Constant2'
     *  Constant: '<S210>/Constant1'
     *  Constant: '<S210>/Constant2'
     *  Constant: '<S211>/Constant1'
     *  Constant: '<S211>/Constant2'
     *  Constant: '<S212>/Constant1'
     *  Constant: '<S212>/Constant2'
     *  Constant: '<S213>/Constant1'
     *  Constant: '<S213>/Constant2'
     *  Constant: '<S214>/Constant1'
     *  Constant: '<S214>/Constant2'
     *  Constant: '<S215>/Constant1'
     *  Constant: '<S215>/Constant2'
     *  Constant: '<S216>/Constant1'
     *  Constant: '<S216>/Constant2'
     *  Constant: '<S217>/Constant1'
     *  Constant: '<S217>/Constant2'
     *  Constant: '<S218>/Constant1'
     *  Constant: '<S218>/Constant2'
     *  Constant: '<S219>/Constant1'
     *  Constant: '<S219>/Constant2'
     *  Constant: '<S220>/Constant1'
     *  Constant: '<S220>/Constant2'
     *  Constant: '<S221>/Constant1'
     *  Constant: '<S221>/Constant2'
     *  Constant: '<S222>/Constant1'
     *  Constant: '<S222>/Constant2'
     *  Constant: '<S223>/Constant1'
     *  Constant: '<S223>/Constant2'
     *  Constant: '<S224>/Constant1'
     *  Constant: '<S224>/Constant2'
     *  Constant: '<S225>/Calib'
     *  Constant: '<S226>/Calib'
     *  Constant: '<S227>/Calib'
     *  Constant: '<S228>/Calib'
     *  Constant: '<S229>/Calib'
     *  Constant: '<S230>/Calib'
     *  Constant: '<S231>/Calib'
     *  Constant: '<S232>/Calib'
     *  Constant: '<S233>/Calib'
     *  Constant: '<S234>/Calib'
     *  Constant: '<S235>/Calib'
     *  Constant: '<S236>/Calib'
     *  Constant: '<S237>/Calib'
     *  Constant: '<S238>/Calib'
     *  Constant: '<S239>/Calib'
     *  Constant: '<S240>/Calib'
     *  Constant: '<S241>/Calib'
     *  Constant: '<S242>/Calib'
     *  Constant: '<S243>/Calib'
     *  Constant: '<S244>/Calib'
     *  Constant: '<S245>/Calib'
     *  Constant: '<S246>/Calib'
     *  Constant: '<S247>/Calib'
     *  Constant: '<S248>/Calib'
     *  Constant: '<S249>/Calib'
     *  Constant: '<S250>/Calib'
     *  Constant: '<S251>/Calib'
     *  Constant: '<S252>/Calib'
     *  Constant: '<S253>/Calib'
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Constant: '<S256>/Calib'
     *  Constant: '<S257>/Calib'
     *  Constant: '<S258>/Calib'
     *  Constant: '<S259>/Calib'
     *  Constant: '<S260>/Calib'
     *  Constant: '<S261>/Calib'
     *  Constant: '<S262>/Calib'
     *  Constant: '<S263>/Calib'
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     *  Constant: '<S266>/Calib'
     *  Constant: '<S267>/Calib'
     *  Constant: '<S268>/Calib'
     *  Constant: '<S269>/Calib'
     *  DataStoreRead: '<S193>/StatusByte_AAT_SnsrCktHi'
     *  DataStoreRead: '<S194>/StatusByte_AAT_SnsrCktLo'
     *  DataStoreRead: '<S195>/StatusByte_AAT_SnsrPerf'
     *  DataStoreRead: '<S196>/StatusByte_APP_Snsr1_MinStpPerf'
     *  DataStoreRead: '<S197>/StatusByte_BatChaCouTemSenACirRan'
     *  DataStoreRead: '<S198>/StatusByte_BatChaCouTemSnsrCkt'
     *  DataStoreRead: '<S199>/StatusByte_BattChrgCouTempSnsrBCktPerf'
     *  DataStoreRead: '<S200>/StatusByte_BattChrgCouTempSnsrBCkt'
     *  DataStoreRead: '<S201>/StatusByte_BattChrgCouTempSnsrCCktPerf'
     *  DataStoreRead: '<S202>/StatusByte_BattChrgCouTempSnsrCCkt'
     *  DataStoreRead: '<S203>/StatusByte_BattCoolPmpOveSpd'
     *  DataStoreRead: '<S204>/StatusByte_CT_SnsrPerf'
     *  DataStoreRead: '<S205>/StatusByte_ClntTempTooHigh'
     *  DataStoreRead: '<S206>/StatusByte_EngHoodSwCktHi'
     *  DataStoreRead: '<S207>/StatusByte_EngHoodSwCktLo'
     *  DataStoreRead: '<S208>/StatusByte_EngHoodSwCktRngPerf'
     *  DataStoreRead: '<S209>/StatusByte_HB_PSC_CtrlValBCktPerf'
     *  DataStoreRead: '<S210>/StatusByte_HB_PSC_CtrlValCCktPerf'
     *  DataStoreRead: '<S211>/StatusByte_IgnSwRunCrnkPstnCktLo'
     *  DataStoreRead: '<S212>/StatusByte_LostCommHB_PSCCooCtrlVlvB'
     *  DataStoreRead: '<S213>/StatusByte_LostCommHB_PSCCooCtrlVlvC'
     *  DataStoreRead: '<S214>/StatusByte_LostCommMtrElectCoolPmpA'
     *  DataStoreRead: '<S215>/StatusByte_LostCommMtrElectCoolPmpB'
     *  DataStoreRead: '<S216>/StatusByte_MtrElect_CT_SnsrBPerf'
     *  DataStoreRead: '<S217>/StatusByte_MtrElect_CT_SnsrPerf'
     *  DataStoreRead: '<S218>/StatusByte_MtrElect_CooPumBOvrSpd'
     *  DataStoreRead: '<S219>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S220>/StatusByte_MtrElect_CoolPmpBTempSnsrPerf'
     *  DataStoreRead: '<S221>/StatusByte_MtrElect_CoolPumAOvrSpd'
     *  DataStoreRead: '<S222>/StatusByte_MtrElect_CoolPumBCtrlPerf'
     *  DataStoreRead: '<S223>/StatusByte_PIM_ContMod'
     *  DataStoreRead: '<S224>/StatusByte_PwrElecPmpPerf'
     *  Logic: '<S191>/Logical1'
     *  Logic: '<S191>/Logical10'
     *  Logic: '<S191>/Logical11'
     *  Logic: '<S191>/Logical12'
     *  Logic: '<S191>/Logical13'
     *  Logic: '<S191>/Logical15'
     *  Logic: '<S191>/Logical18'
     *  Logic: '<S191>/Logical19'
     *  Logic: '<S191>/Logical2'
     *  Logic: '<S191>/Logical21'
     *  Logic: '<S191>/Logical22'
     *  Logic: '<S191>/Logical23'
     *  Logic: '<S191>/Logical24'
     *  Logic: '<S191>/Logical25'
     *  Logic: '<S191>/Logical26'
     *  Logic: '<S191>/Logical27'
     *  Logic: '<S191>/Logical28'
     *  Logic: '<S191>/Logical29'
     *  Logic: '<S191>/Logical3'
     *  Logic: '<S191>/Logical30'
     *  Logic: '<S191>/Logical31'
     *  Logic: '<S191>/Logical33'
     *  Logic: '<S191>/Logical34'
     *  Logic: '<S191>/Logical35'
     *  Logic: '<S191>/Logical36'
     *  Logic: '<S191>/Logical37'
     *  Logic: '<S191>/Logical38'
     *  Logic: '<S191>/Logical39'
     *  Logic: '<S191>/Logical4'
     *  Logic: '<S191>/Logical40'
     *  Logic: '<S191>/Logical41'
     *  Logic: '<S191>/Logical43'
     *  Logic: '<S191>/Logical44'
     *  Logic: '<S191>/Logical45'
     *  Logic: '<S191>/Logical46'
     *  Logic: '<S191>/Logical47'
     *  Logic: '<S191>/Logical48'
     *  Logic: '<S191>/Logical50'
     *  Logic: '<S191>/Logical51'
     *  Logic: '<S191>/Logical52'
     *  Logic: '<S191>/Logical53'
     *  Logic: '<S191>/Logical54'
     *  Logic: '<S191>/Logical55'
     *  Logic: '<S191>/Logical7'
     *  Logic: '<S191>/Logical9'
     *  Logic: '<S193>/Logical Operator'
     *  Logic: '<S194>/Logical Operator'
     *  Logic: '<S195>/Logical Operator'
     *  Logic: '<S196>/Logical Operator'
     *  Logic: '<S197>/Logical Operator'
     *  Logic: '<S198>/Logical Operator'
     *  Logic: '<S199>/Logical Operator'
     *  Logic: '<S200>/Logical Operator'
     *  Logic: '<S201>/Logical Operator'
     *  Logic: '<S202>/Logical Operator'
     *  Logic: '<S203>/Logical Operator'
     *  Logic: '<S204>/Logical Operator'
     *  Logic: '<S205>/Logical Operator'
     *  Logic: '<S206>/Logical Operator'
     *  Logic: '<S207>/Logical Operator'
     *  Logic: '<S208>/Logical Operator'
     *  Logic: '<S209>/Logical Operator'
     *  Logic: '<S210>/Logical Operator'
     *  Logic: '<S211>/Logical Operator'
     *  Logic: '<S212>/Logical Operator'
     *  Logic: '<S213>/Logical Operator'
     *  Logic: '<S214>/Logical Operator'
     *  Logic: '<S215>/Logical Operator'
     *  Logic: '<S216>/Logical Operator'
     *  Logic: '<S217>/Logical Operator'
     *  Logic: '<S218>/Logical Operator'
     *  Logic: '<S219>/Logical Operator'
     *  Logic: '<S220>/Logical Operator'
     *  Logic: '<S221>/Logical Operator'
     *  Logic: '<S222>/Logical Operator'
     *  Logic: '<S223>/Logical Operator'
     *  Logic: '<S224>/Logical Operator'
     *  RelationalOperator: '<S193>/Relational Operator1'
     *  RelationalOperator: '<S193>/Relational Operator2'
     *  RelationalOperator: '<S194>/Relational Operator1'
     *  RelationalOperator: '<S194>/Relational Operator2'
     *  RelationalOperator: '<S195>/Relational Operator1'
     *  RelationalOperator: '<S195>/Relational Operator2'
     *  RelationalOperator: '<S196>/Relational Operator1'
     *  RelationalOperator: '<S196>/Relational Operator2'
     *  RelationalOperator: '<S197>/Relational Operator1'
     *  RelationalOperator: '<S197>/Relational Operator2'
     *  RelationalOperator: '<S198>/Relational Operator1'
     *  RelationalOperator: '<S198>/Relational Operator2'
     *  RelationalOperator: '<S199>/Relational Operator1'
     *  RelationalOperator: '<S199>/Relational Operator2'
     *  RelationalOperator: '<S200>/Relational Operator1'
     *  RelationalOperator: '<S200>/Relational Operator2'
     *  RelationalOperator: '<S201>/Relational Operator1'
     *  RelationalOperator: '<S201>/Relational Operator2'
     *  RelationalOperator: '<S202>/Relational Operator1'
     *  RelationalOperator: '<S202>/Relational Operator2'
     *  RelationalOperator: '<S203>/Relational Operator1'
     *  RelationalOperator: '<S203>/Relational Operator2'
     *  RelationalOperator: '<S204>/Relational Operator1'
     *  RelationalOperator: '<S204>/Relational Operator2'
     *  RelationalOperator: '<S205>/Relational Operator1'
     *  RelationalOperator: '<S205>/Relational Operator2'
     *  RelationalOperator: '<S206>/Relational Operator1'
     *  RelationalOperator: '<S206>/Relational Operator2'
     *  RelationalOperator: '<S207>/Relational Operator1'
     *  RelationalOperator: '<S207>/Relational Operator2'
     *  RelationalOperator: '<S208>/Relational Operator1'
     *  RelationalOperator: '<S208>/Relational Operator2'
     *  RelationalOperator: '<S209>/Relational Operator1'
     *  RelationalOperator: '<S209>/Relational Operator2'
     *  RelationalOperator: '<S210>/Relational Operator1'
     *  RelationalOperator: '<S210>/Relational Operator2'
     *  RelationalOperator: '<S211>/Relational Operator1'
     *  RelationalOperator: '<S211>/Relational Operator2'
     *  RelationalOperator: '<S212>/Relational Operator1'
     *  RelationalOperator: '<S212>/Relational Operator2'
     *  RelationalOperator: '<S213>/Relational Operator1'
     *  RelationalOperator: '<S213>/Relational Operator2'
     *  RelationalOperator: '<S214>/Relational Operator1'
     *  RelationalOperator: '<S214>/Relational Operator2'
     *  RelationalOperator: '<S215>/Relational Operator1'
     *  RelationalOperator: '<S215>/Relational Operator2'
     *  RelationalOperator: '<S216>/Relational Operator1'
     *  RelationalOperator: '<S216>/Relational Operator2'
     *  RelationalOperator: '<S217>/Relational Operator1'
     *  RelationalOperator: '<S217>/Relational Operator2'
     *  RelationalOperator: '<S218>/Relational Operator1'
     *  RelationalOperator: '<S218>/Relational Operator2'
     *  RelationalOperator: '<S219>/Relational Operator1'
     *  RelationalOperator: '<S219>/Relational Operator2'
     *  RelationalOperator: '<S220>/Relational Operator1'
     *  RelationalOperator: '<S220>/Relational Operator2'
     *  RelationalOperator: '<S221>/Relational Operator1'
     *  RelationalOperator: '<S221>/Relational Operator2'
     *  RelationalOperator: '<S222>/Relational Operator1'
     *  RelationalOperator: '<S222>/Relational Operator2'
     *  RelationalOperator: '<S223>/Relational Operator1'
     *  RelationalOperator: '<S223>/Relational Operator2'
     *  RelationalOperator: '<S224>/Relational Operator1'
     *  RelationalOperator: '<S224>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S194>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S194>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S195>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S195>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S196>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S196>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S197>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S197>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S199>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S199>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S200>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S200>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S201>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S201>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S202>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S202>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S204>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S204>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S206>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S206>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S207>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S207>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S208>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S208>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S209>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S209>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S210>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S210>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S211>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S211>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S212>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S212>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S213>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S213>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S215>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S216>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S216>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S217>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S217>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S218>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S218>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S219>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S219>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S220>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S220>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S221>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S221>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S224>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S224>/Bitwise Operator2'
     */
    VeHMIC_b_DTC_Service_Lamp_M182 =
        ((((((((((((((((((((((((((((((((((((((((((((((KeHMIR_b_MtrElect_CT_SnsrCktLo_En)
        && tmpRead_3) || ((KeHMIR_b_MtrElect_CT_SnsrCktHi_En) && tmpRead_4)) ||
        ((KeHMIR_b_CT_SnsrCktLo_En) && tmpRead_5)) || ((KeHMIR_b_CT_SnsrCktHi_En)
        && tmpRead_6)) || ((KeHMIR_b_MtrElect_CT2_SnsrBCktHi_En) && tmpRead_d)) ||
        ((KeHMIR_b_LostCommHB_PSCCooCtrlVlvC_En) &&
        (((HMIR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvC & ((uint8)1U)) >
        ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvC &
        ((uint8)64U)) == ((uint8)0U))))) || ((KeHMIR_b_Fan1CntrlCkt_En) &&
        tmpRead_7)) || ((KeHMIR_b_Fan1CntrlCktLo_En) && tmpRead_8)) ||
        ((KeHMIR_b_Fan1CntrlCktHi_En) && tmpRead_9)) ||
        ((KeHMIR_b_BattChrgCouTempSnsrCCkt_En) &&
        (((HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt & ((uint8)1U)) >
        ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt &
        ((uint8)64U)) == ((uint8)0U))))) || ((KeHMIR_b_AAT_SnsrCktHi_En) &&
        (((HMIR_ac_DW.StatusByte_AAT_SnsrCktHi & ((uint8)1U)) > ((uint8)0U)) &&
        ((HMIR_ac_DW.StatusByte_AAT_SnsrCktHi & ((uint8)64U)) == ((uint8)0U)))))
        || ((KeHMIR_b_HB_PSC_CtrlValBCktPerf_En) &&
        (((HMIR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf & ((uint8)1U)) > ((uint8)
        0U)) && ((HMIR_ac_DW.StatusByte_HB_PSC_CtrlValBCktPerf & ((uint8)64U)) ==
        ((uint8)0U))))) || ((KeHMIR_b_CM_Perf_En) && rtb_OR1_pt)) ||
        ((KeHMIR_b_BattChrgCouTempSnsrBCkt_En) &&
        (((HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt & ((uint8)1U)) >
        ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt &
        ((uint8)64U)) == ((uint8)0U))))) || ((KeHMIR_b_APPSnsr1MinStpPerf_En) &&
        (((HMIR_ac_DW.StatusByte_APP_Snsr1_MinStpPerf & ((uint8)1U)) > ((uint8)
        0U)) && ((HMIR_ac_DW.StatusByte_APP_Snsr1_MinStpPerf & ((uint8)64U)) ==
        ((uint8)0U))))) || ((KeHMIR_b_EngHoodSwCktLo_En) &&
        (((HMIR_ac_DW.StatusByte_EngHoodSwCktLo & ((uint8)1U)) > ((uint8)0U)) &&
        ((HMIR_ac_DW.StatusByte_EngHoodSwCktLo & ((uint8)64U)) == ((uint8)0U)))))
        || ((KeHMIR_b_EngHoodSwCktHi_En) &&
        (((HMIR_ac_DW.StatusByte_EngHoodSwCktHi & ((uint8)1U)) > ((uint8)0U)) &&
        ((HMIR_ac_DW.StatusByte_EngHoodSwCktHi & ((uint8)64U)) == ((uint8)0U)))))
        || ((KeHMIR_b_MtrElect_CoolPmpATempSnsrPerf_En) &&
        (((HMIR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf & ((uint8)1U)) >
        ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf &
        ((uint8)64U)) == ((uint8)0U))))) ||
        ((KeHMIR_b_MtrElect_CoolPmpBTempSnsrPerf_En) &&
        (((HMIR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf & ((uint8)1U)) >
        ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_MtrElect_CoolPmpBTempSnsrPerf &
        ((uint8)64U)) == ((uint8)0U))))) ||
        ((KeHMIR_b_MtrElect_CoolPumBCtrlPerf_En) &&
        (((HMIR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf & ((uint8)1U)) >
        ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf &
        ((uint8)64U)) == ((uint8)0U))))) || ((KeHMIR_b_RadFanDiagErrM0_En) &&
        tmpRead_a)) || ((KeHMIR_b_PwrElecPmpPerf_En) &&
        (((HMIR_ac_DW.StatusByte_PwrElecPmpPerf & ((uint8)1U)) > ((uint8)0U)) &&
        ((HMIR_ac_DW.StatusByte_PwrElecPmpPerf & ((uint8)64U)) == ((uint8)0U)))))
        || ((KeHMIR_b_RadFanDiagErrM1_En) && tmpRead_b)) ||
        ((KeHMIR_b_RadFanDiagErrM2_En) && tmpRead_e)) ||
        ((KeHMIR_b_AAT_SnsrPerf_En) && (((HMIR_ac_DW.StatusByte_AAT_SnsrPerf &
        ((uint8)1U)) > ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_AAT_SnsrPerf &
        ((uint8)64U)) == ((uint8)0U))))) || ((KeHMIR_b_BatChaCouTemSenACirRan_En)
        && (((HMIR_ac_DW.StatusByte_BatChaCouTemSenACirRan & ((uint8)1U)) >
        ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_BatChaCouTemSenACirRan & ((uint8)
        64U)) == ((uint8)0U))))) || ((KeHMIR_b_BattChrgCouTempSnsrCCktPerf_En) &&
        (((HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf & ((uint8)1U)) >
        ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf &
        ((uint8)64U)) == ((uint8)0U))))) ||
                          ((KeHMIR_b_BattChrgCouTempSnsrBCktPerf_En) &&
                           (((HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf
        & ((uint8)1U)) > ((uint8)0U)) &&
        ((HMIR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf & ((uint8)64U)) ==
        ((uint8)0U))))) || ((KeHMIR_b_EngHoodSwCktRngPerf_En) &&
                            (((HMIR_ac_DW.StatusByte_EngHoodSwCktRngPerf &
        ((uint8)1U)) > ((uint8)0U)) &&
                           ((HMIR_ac_DW.StatusByte_EngHoodSwCktRngPerf & ((uint8)
        64U)) == ((uint8)0U))))) || ((KeHMIR_b_LostCommMtrElectCoolPmpA_En) &&
                         (((HMIR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA &
        ((uint8)1U)) > ((uint8)0U)) &&
                          ((HMIR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA &
        ((uint8)64U)) == ((uint8)0U))))) ||
                       ((KeHMIR_b_LostCommMtrElectCoolPmpB_En) &&
                        (((HMIR_ac_DW.StatusByte_LostCommMtrElectCoolPmpB &
                           ((uint8)1U)) > ((uint8)0U)) &&
                         ((HMIR_ac_DW.StatusByte_LostCommMtrElectCoolPmpB &
                           ((uint8)64U)) == ((uint8)0U))))) ||
                      ((KeHMIR_b_ClntTempTooHigh_En) &&
                       (((HMIR_ac_DW.StatusByte_ClntTempTooHigh & ((uint8)1U)) >
                         ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_ClntTempTooHigh
                          & ((uint8)64U)) == ((uint8)0U))))) ||
                     ((KeHMIR_b_MtrElect_CoolPumAOvrSpd_En) &&
                      (((HMIR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd & ((uint8)
                          1U)) > ((uint8)0U)) &&
                       ((HMIR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd & ((uint8)
                          64U)) == ((uint8)0U))))) ||
                    ((KeHMIR_b_MtrElect_CooPumBOvrSpd_En) &&
                     (((HMIR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd & ((uint8)
                         1U)) > ((uint8)0U)) &&
                      ((HMIR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd & ((uint8)
                         64U)) == ((uint8)0U))))) ||
                   ((KeHMIR_b_MtrElect_CT_SnsrBPerf_En) &&
                    (((HMIR_ac_DW.StatusByte_MtrElect_CT_SnsrBPerf & ((uint8)1U))
                      > ((uint8)0U)) &&
                     ((HMIR_ac_DW.StatusByte_MtrElect_CT_SnsrBPerf & ((uint8)64U))
                      == ((uint8)0U))))) ||
                  ((KeHMIR_b_LostCommHB_PSCCooCtrlVlvB_En) &&
                   (((HMIR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvB & ((uint8)
                       1U)) > ((uint8)0U)) &&
                    ((HMIR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvB & ((uint8)
                       64U)) == ((uint8)0U))))) ||
                 ((KeHMIR_b_BatChaCouTemSnsrCkt_En) &&
                  (((HMIR_ac_DW.StatusByte_BatChaCouTemSnsrCkt & ((uint8)1U)) >
                    ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_BatChaCouTemSnsrCkt
                     & ((uint8)64U)) == ((uint8)0U))))) ||
                ((KeHMIR_b_MtrElect_CT_SnsrPerf_En) &&
                 (((HMIR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf & ((uint8)1U)) >
                   ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf
                    & ((uint8)64U)) == ((uint8)0U))))) ||
               ((KeHMIR_b_MtrElect_CT2_SnsrBCktLo_En) && tmpRead_c)) ||
              ((KeHMIR_b_CT_SnsrPerf_En) && (((HMIR_ac_DW.StatusByte_CT_SnsrPerf
                  & ((uint8)1U)) > ((uint8)0U)) &&
                ((HMIR_ac_DW.StatusByte_CT_SnsrPerf & ((uint8)64U)) == ((uint8)
                  0U))))) || ((KeHMIR_b_AAT_SnsrCktLo_En) &&
              (((HMIR_ac_DW.StatusByte_AAT_SnsrCktLo & ((uint8)1U)) > ((uint8)0U))
               && ((HMIR_ac_DW.StatusByte_AAT_SnsrCktLo & ((uint8)64U)) ==
                   ((uint8)0U))))) || ((KeHMIR_b_IgnSwRunCrnkPstnCktLo_En) &&
             (((HMIR_ac_DW.StatusByte_IgnSwRunCrnkPstnCktLo & ((uint8)1U)) >
               ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_IgnSwRunCrnkPstnCktLo &
                ((uint8)64U)) == ((uint8)0U))))) ||
           ((KeHMIR_b_CtrlValCCktPerf_En) &&
            (((HMIR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf & ((uint8)1U)) >
              ((uint8)0U)) && ((HMIR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf &
               ((uint8)64U)) == ((uint8)0U))))) || ((KeHMIR_b_PIM_ContMod_En) &&
           (((HMIR_ac_DW.StatusByte_PIM_ContMod & ((uint8)1U)) > ((uint8)0U)) &&
            ((HMIR_ac_DW.StatusByte_PIM_ContMod & ((uint8)64U)) == ((uint8)0U)))))
         || ((KeHMIR_b_BattCoolPmpOveSpd_En) &&
             (((HMIR_ac_DW.StatusByte_BattCoolPmpOveSpd & ((uint8)1U)) > ((uint8)
             0U)) && ((HMIR_ac_DW.StatusByte_BattCoolPmpOveSpd & ((uint8)64U)) ==
                      ((uint8)0U)))));

    /* End of Outputs for SubSystem: '<S186>/Calc_Red_Mtr_Cpby' */
#else

    /* Outputs for Atomic SubSystem: '<S186>/Subsystem' */
    /* Constant: '<S192>/Constant' */
    VeHMIC_b_DTC_Service_Lamp_M182 = false;

    /* End of Outputs for SubSystem: '<S186>/Subsystem' */
#endif

    /* End of Outputs for SubSystem: '<S184>/Calc_Red_Mtr_Cpby' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeBACR_e_ChargeSustn' */
    (void)Rte_Read_VeBACR_e_ChargeSustn_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/HMIR_MedTEF'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/HMIC_50ms_Disp'
     */
    /* Outputs for Atomic SubSystem: '<S184>/Multi_Indicators' */
    HMIR_ac_Multi_Indicators();

    /* End of Outputs for SubSystem: '<S184>/Multi_Indicators' */

    /* Outputs for Atomic SubSystem: '<S184>/ShifterPos_Disp' */
    HMIR_ac_ShifterPos_Disp();

    /* End of Outputs for SubSystem: '<S184>/ShifterPos_Disp' */

    /* RelationalOperator: '<S187>/Relational Operator4' incorporates:
     *  Constant: '<S278>/Constant'
     *  Inport: '<Root>/VeBACR_e_ChargeSustn'
     */
    VeHMIC_b_ESaveMode = (tmpRead_g == CeBACR_e_ChargeIncreasing);

    /* Outputs for Atomic SubSystem: '<S187>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S274>/Switch1' incorporates:
     *  Constant: '<S187>/Constant Value4'
     *  Constant: '<S187>/FALSE Constant'
     *  Constant: '<S187>/TRUE Constant'
     *  Switch: '<S274>/Switch2'
     *  UnitDelay: '<S274>/Unit Delay'
     */
    if (false)
    {
        HMIR_ac_DW.UnitDelay_DSTATE_mt = 50.0F;
    }
    else
    {
        if (true)
        {
            /* UnitDelay: '<S274>/Unit Delay' incorporates:
             *  Constant: '<S283>/Calib'
             *  Product: '<S274>/Multiplication'
             *  Sum: '<S274>/Subtraction'
             *  Sum: '<S274>/Summation'
             *  Switch: '<S274>/Switch2'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_mt +=
                (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_d -
                 HMIR_ac_DW.UnitDelay_DSTATE_mt) * KeHMIR_k_SOCDispFiltrCoef;
        }
    }

    /* End of Switch: '<S274>/Switch1' */
    /* End of Outputs for SubSystem: '<S187>/Digital Lowpass Reset Enabled' */

    /* Lookup_n-D: '<S284>/Vector' incorporates:
     *  Switch: '<S274>/Switch1'
     *  UnitDelay: '<S274>/Unit Delay'
     */
    VeHMIC_Pct_ActualSOCFilt = look1_iflf_binlca_16a
        (HMIR_ac_DW.UnitDelay_DSTATE_mt, ((const float32 *)&(KxHMIR_Pct_SOCDisp
           [0])), ((const float32 *)&(KtHMIR_Pct_SOCDisp[0])), 10U);

    /* MinMax: '<S187>/MinMax' incorporates:
     *  Constant: '<S282>/Calib'
     */
    VeHMIC_Pct_ActualSOC = fminf(KeHMIR_Pct_SOCDispCharging,
        VeHMIC_Pct_ActualSOCFilt);

    /* Switch: '<S286>/Switch1' incorporates:
     *  Inport: '<Root>/VeCITR_b_SOC_Max_Lev'
     *  SignalConversion generated from: '<S187>/Variant Source1'
     */
#if Rte_SysCon_Variant_HMIR_2

    (void)Rte_Read_VeCITR_b_SOC_Max_Lev_Value(&rtb_AND);
    if (rtb_AND)
    {
        /* Switch: '<S292>/Switch1' incorporates:
         *  Constant: '<S298>/Calib'
         */
        rtb_Switch1_ej = KeHMIR_Pct_SOCDispChargComplt;
    }
    else
    {
        /* Switch: '<S292>/Switch1' incorporates:
         *  Constant: '<S299>/Calib'
         *  MinMax: '<S286>/MinMax1'
         */
        rtb_Switch1_ej = fmaxf(KeHMIR_Pct_SOCDispChargComplt80,
                               VeHMIC_Pct_ActualSOC);
    }

#else

    /* Switch: '<S292>/Switch1' incorporates:
     *  Constant: '<S300>/Calib'
     *  SignalConversion generated from: '<S187>/Variant Source1'
     */
    rtb_Switch1_ej = KeHMIR_Pct_SOCDispChargComplt;

#endif

    /* End of Switch: '<S286>/Switch1' */

    /* SignalConversion generated from: '<S187>/Variant Source1' */
    VeHMIC_Pct_ActualSOCFiltdSatd = rtb_Switch1_ej;

    /* Switch: '<S187>/Switch1' incorporates:
     *  Constant: '<S271>/Constant'
     *  Constant: '<S273>/Constant'
     *  RelationalOperator: '<S187>/Relational Operator1'
     *  RelationalOperator: '<S187>/Relational Operator2'
     *  Switch: '<S187>/Switch2'
     */
    if (CeOBCR_e_ChargingSts_Complete ==
            rtb_TmpSignalConversionAtVeOBCR_e_Chargi)
    {
        /* Switch: '<S187>/Switch1' */
        VeHMIC_Pct_ActualSOC = VeHMIC_Pct_ActualSOCFiltdSatd;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeOBCR_e_Chargi !=
                CeOBCR_e_ChargingSts_Charging)
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Switch: '<S187>/Switch2'
             */
            VeHMIC_Pct_ActualSOC = VeHMIC_Pct_ActualSOCFilt;
        }
    }

    /* End of Switch: '<S187>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S187>/EdgeRising1' */
    /* Logic: '<S277>/AND' incorporates:
     *  Constant: '<S187>/TRUE Constant4'
     *  Logic: '<S277>/OR1'
     *  UnitDelay: '<S277>/Unit Delay'
     */
    rtb_AND = ((true) && (!HMIR_ac_DW.UnitDelay_DSTATE_bb));

    /* Update for UnitDelay: '<S277>/Unit Delay' incorporates:
     *  Constant: '<S187>/TRUE Constant4'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_bb = true;

    /* End of Outputs for SubSystem: '<S187>/EdgeRising1' */

    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S187>/TRUE Constant1'
     *  Switch: '<S291>/Switch2'
     *  UnitDelay: '<S291>/Unit Delay1'
     */
    if (rtb_AND)
    {
        HMIR_ac_DW.UnitDelay1_DSTATE_n = VeHMIC_Pct_ActualSOC;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S291>/Switch2' incorporates:
             *  UnitDelay: '<S291>/Unit Delay'
             *  UnitDelay: '<S291>/Unit Delay1'
             */
            HMIR_ac_DW.UnitDelay1_DSTATE_n = HMIR_ac_DW.UnitDelay_DSTATE_dg;
        }
    }

    /* End of Switch: '<S291>/Switch1' */

    /* Switch: '<S187>/Switch6' */
    if (VeHMIC_b_ESaveMode)
    {
        /* Switch: '<S187>/Switch6' */
        VeHMIC_Pct_TargetSOC_Diff = rtb_TmpSignalConversionAtVeDMDR_Pct_SOCT;
    }
    else
    {
        /* Switch: '<S187>/Switch6' incorporates:
         *  UnitDelay: '<S291>/Unit Delay1'
         */
        VeHMIC_Pct_TargetSOC_Diff = HMIR_ac_DW.UnitDelay1_DSTATE_n;
    }

    /* End of Switch: '<S187>/Switch6' */

    /* Sum: '<S187>/Surrrrrbtract' */
    VeHMIC_Cnt_ActualTargetDiff = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_d -
        VeHMIC_Pct_TargetSOC_Diff;

    /* Lookup_n-D: '<S293>/Vector' incorporates:
     *  Sum: '<S187>/Surrrrrbtract'
     */
    VeHMIC_Cnt_BlendInRate = look1_iflf_binlca_16a(VeHMIC_Cnt_ActualTargetDiff,
        ((const float32 *)&(KxHMIR_Cnt_TargetSOC_BlendInRate[0])), ((const
        float32 *)&(KtHMIR_Cnt_TargetSOC_BlendInRate[0])), 10U);

    /* Lookup_n-D: '<S294>/Vector' incorporates:
     *  Sum: '<S187>/Surrrrrbtract'
     */
    VeHMIC_Cnt_BlendOutRate = look1_iflf_binlca_16a(VeHMIC_Cnt_ActualTargetDiff,
        ((const float32 *)&(KxHMIR_Cnt_TargetSOC_BlendOutRate[0])), ((const
        float32 *)&(KtHMIR_Cnt_TargetSOC_BlendOutRate[0])), 10U);

    /* RelationalOperator: '<S187>/Relational Operator5' incorporates:
     *  Constant: '<S280>/Calib'
     */
    VeHMIC_b_ActualGreater = (VeHMIC_Cnt_ActualTargetDiff >= ((float32)
        KeHMIR_Pct_SOCDiffActualAboveTarget));

    /* RelationalOperator: '<S187>/Relational Operator3' incorporates:
     *  Abs: '<S187>/Abs'
     *  Constant: '<S281>/Calib'
     */
    VeHMIC_b_ActualLower = (fabsf(VeHMIC_Cnt_ActualTargetDiff) < ((float32)
        KeHMIR_Pct_SOCDiffActualBelowTarget));

    /* Logic: '<S187>/Logical Operator' incorporates:
     *  Logic: '<S187>/Logical Operator2'
     */
    VeHMIC_b_ConditionTrueForEsave = (((!VeHMIC_b_ActualGreater) &&
        (VeHMIC_b_ActualLower)) && (VeHMIC_b_ESaveMode));

    /* Outputs for Atomic SubSystem: '<S270>/GradientLimiter' */
    /* Switch: '<S292>/Switch1' incorporates:
     *  Delay: '<S292>/Delay'
     */
    rtb_Switch1_ej = HMIR_ac_DW.Delay_DSTATE[0];

    /* Outputs for Atomic SubSystem: '<S292>/EdgeRising' */
    /* Logic: '<S295>/OR1' incorporates:
     *  UnitDelay: '<S295>/Unit Delay'
     */
    rtb_OR1_pt = !HMIR_ac_DW.UnitDelay_DSTATE_j0;

    /* Update for UnitDelay: '<S295>/Unit Delay' incorporates:
     *  Constant: '<S292>/TRUE Constant3'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_j0 = true;

    /* Switch: '<S292>/Switch1' incorporates:
     *  Constant: '<S292>/TRUE Constant3'
     *  Logic: '<S295>/AND'
     */
    if ((true) && rtb_OR1_pt)
    {
        /* Switch: '<S292>/Switch' */
        if (VeHMIC_b_ConditionTrueForEsave)
        {
            /* Switch: '<S292>/Switch1' incorporates:
             *  Constant: '<S292>/Constant Value'
             */
            rtb_Switch1_ej = 1.0F;
        }
        else
        {
            /* Switch: '<S292>/Switch1' incorporates:
             *  Constant: '<S292>/Constant Value1'
             */
            rtb_Switch1_ej = 0.0F;
        }

        /* End of Switch: '<S292>/Switch' */
    }

    /* End of Switch: '<S292>/Switch1' */
    /* End of Outputs for SubSystem: '<S292>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S270>/GradientLimiter' */

    /* Switch: '<S187>/Switch4' incorporates:
     *  Constant: '<S187>/Constant Value7'
     *  Constant: '<S187>/Constant Value8'
     */
    if (VeHMIC_b_ConditionTrueForEsave)
    {
        rtb_Sum2_g = 1.0F;
    }
    else
    {
        rtb_Sum2_g = 0.0F;
    }

    /* End of Switch: '<S187>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S270>/GradientLimiter' */
    /* Sum: '<S296>/Sum2' */
    rtb_Sum2_g -= rtb_Switch1_ej;

    /* Outputs for Atomic SubSystem: '<S296>/Limiter' */
    /* Switch: '<S297>/Switch1' incorporates:
     *  RelationalOperator: '<S297>/Relational Operator'
     */
    if (VeHMIC_Cnt_BlendInRate < rtb_Sum2_g)
    {
        /* Switch: '<S297>/Switch1' */
        rtb_Sum2_g = VeHMIC_Cnt_BlendInRate;
    }

    /* End of Switch: '<S297>/Switch1' */

    /* Switch: '<S297>/Switch' incorporates:
     *  RelationalOperator: '<S297>/Relational Operator1'
     */
    if (rtb_Sum2_g <= VeHMIC_Cnt_BlendOutRate)
    {
        rtb_Sum2_g = VeHMIC_Cnt_BlendOutRate;
    }

    /* End of Switch: '<S297>/Switch' */
    /* End of Outputs for SubSystem: '<S296>/Limiter' */

    /* Sum: '<S296>/Sum3' */
    VeHMIC_Cnt_EnableValue = rtb_Sum2_g + rtb_Switch1_ej;

    /* Update for Delay: '<S292>/Delay' */
    HMIR_ac_DW.Delay_DSTATE[0] = HMIR_ac_DW.Delay_DSTATE[1];
    HMIR_ac_DW.Delay_DSTATE[1] = VeHMIC_Cnt_EnableValue;

    /* End of Outputs for SubSystem: '<S270>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S187>/EdgeRising' */
    /* Logic: '<S276>/AND' incorporates:
     *  Constant: '<S187>/TRUE Constant3'
     *  Logic: '<S276>/OR1'
     *  UnitDelay: '<S276>/Unit Delay'
     */
    rtb_OR1_pt = ((true) && (!HMIR_ac_DW.UnitDelay_DSTATE_n1));

    /* Update for UnitDelay: '<S276>/Unit Delay' incorporates:
     *  Constant: '<S187>/TRUE Constant3'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_n1 = true;

    /* End of Outputs for SubSystem: '<S187>/EdgeRising' */

    /* Switch: '<S290>/Switch1' incorporates:
     *  Constant: '<S187>/TRUE Constant2'
     *  Switch: '<S290>/Switch2'
     *  UnitDelay: '<S290>/Unit Delay1'
     */
    if (rtb_OR1_pt)
    {
        HMIR_ac_DW.UnitDelay1_DSTATE_i = VeHMIC_Pct_ActualSOC;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S290>/Switch2' incorporates:
             *  UnitDelay: '<S290>/Unit Delay'
             *  UnitDelay: '<S290>/Unit Delay1'
             */
            HMIR_ac_DW.UnitDelay1_DSTATE_i = HMIR_ac_DW.UnitDelay_DSTATE_gk;
        }
    }

    /* End of Switch: '<S290>/Switch1' */

    /* Switch: '<S187>/Switch5' */
    if (VeHMIC_b_ConditionTrueForEsave)
    {
        /* Switch: '<S187>/Switch5' incorporates:
         *  Lookup_n-D: '<S285>/Vector'
         *  SignalConversion generated from: '<S4>/VeDMDR_Pct_SOCTarget'
         */
        VeHMIC_Pct_TargetSOC = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeDMDR_Pct_SOCT, ((const float32 *)
              &(KxHMIR_Pct_TargetSOCDisp[0])), ((const float32 *)
              &(KtHMIR_Pct_TargetSOCDisp[0])), 10U);
    }
    else
    {
        /* Switch: '<S187>/Switch5' incorporates:
         *  UnitDelay: '<S290>/Unit Delay1'
         */
        VeHMIC_Pct_TargetSOC = HMIR_ac_DW.UnitDelay1_DSTATE_i;
    }

    /* End of Switch: '<S187>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeESSR_e_HybEngSysActv' */
    (void)Rte_Read_VeESSR_e_HybEngSysActv_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/HMIR_MedTEF'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/HMIC_50ms_Disp'
     */
    /* Sum: '<S270>/Add1' incorporates:
     *  Constant: '<S270>/Constant Value8'
     *  Product: '<S270>/Product1'
     *  Product: '<S270>/Product2'
     *  Sum: '<S270>/Add'
     */
    VeHMIC_Pct_DispSOC = ((1.0F - VeHMIC_Cnt_EnableValue) * VeHMIC_Pct_ActualSOC)
        + (VeHMIC_Pct_TargetSOC * VeHMIC_Cnt_EnableValue);

    /* RelationalOperator: '<S187>/Comparison1' incorporates:
     *  Constant: '<S279>/Calib'
     */
    VeHMIC_b_ConditionTrueThreshold = (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_d >
        KeHMIR_Pct_CSUpperThreshold);

    /* Outputs for Atomic SubSystem: '<S187>/Signal Latch On With Reset' */
    /* Logic: '<S289>/OR1' incorporates:
     *  Constant: '<S272>/Constant'
     *  Inport: '<Root>/VeESSR_e_HybEngSysActv'
     *  Logic: '<S289>/NOT'
     *  Logic: '<S289>/OR'
     *  RelationalOperator: '<S187>/Relational Operator'
     *  UnitDelay: '<S187>/Unit Delay1'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_gu = ((tmpRead == CeESSR_e_HybEngEnabledOn) ||
        ((!HMIR_ac_DW.UnitDelay1_DSTATE_c) && (HMIR_ac_DW.UnitDelay_DSTATE_gu)));

    /* End of Outputs for SubSystem: '<S187>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S187>/Signal Latch Off' */
    /* Logic: '<S288>/OR2' incorporates:
     *  Logic: '<S187>/Logical Operator1'
     *  UnitDelay: '<S288>/Unit Delay'
     */
    HMIR_ac_DW.UnitDelay_DSTATE_fx = ((!VeHMIC_b_ConditionTrueThreshold) &&
        (HMIR_ac_DW.UnitDelay_DSTATE_fx));

    /* End of Outputs for SubSystem: '<S187>/Signal Latch Off' */

    /* Switch: '<S187>/Switch' incorporates:
     *  Inport: '<Root>/VeSRAR_b_OutOfFuelSOCShtDwn'
     */
    if (VeHMIC_b_ConditionTrueThreshold)
    {
        /* Outputs for Function Call SubSystem: '<S4>/HMIO_50msec_Outputs' */
        /* Outport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
         *  Inport: '<S185>/HVBatSOC_50ms'
         *  SignalConversion generated from: '<S4>/VeHMIC_Pct_HvBatSOC_50ms'
         */
        (void)Rte_Write_VeHMIR_Pct_HVBatSOC_HCP_Value(VeHMIC_Pct_DispSOC);

        /* End of Outputs for SubSystem: '<S4>/HMIO_50msec_Outputs' */
    }
    else
    {
        (void)Rte_Read_VeSRAR_b_OutOfFuelSOCShtDwn_Value(&tmpRead_0);

        /* Switch: '<S187>/Switch3' incorporates:
         *  Inport: '<Root>/VeSRAR_b_OutOfFuelSOCShtDwn'
         *  Logic: '<S187>/Logical1'
         *  Logic: '<S187>/Logical2'
         *  SignalConversion generated from: '<S4>/InitSOCIsLow_Read'
         *  SignalConversion generated from: '<S7>/InitSOCIsLow'
         *  UnitDelay: '<S187>/Unit Delay2'
         *  UnitDelay: '<S289>/Unit Delay'
         */
        if (((((HMIR_ac_DW.UnitDelay_DSTATE_gu) ||
                ((Rte_IrvRead_HMIR_MedTEF_InitSOCIsLow_IRV()) &&
                 (HMIR_ac_DW.UnitDelay2_DSTATE))) || tmpRead_0) ||
                rtb_TmpSignalConversionAtVeTHMR_b_HVAC_t) ||
                rtb_TmpSignalConversionAtVeTHMR_b_StartV)
        {
            /* Outputs for Function Call SubSystem: '<S4>/HMIO_50msec_Outputs' */
            /* Outport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
             *  Constant: '<S187>/Constant Value2'
             *  Inport: '<S185>/HVBatSOC_50ms'
             *  SignalConversion generated from: '<S4>/VeHMIC_Pct_HvBatSOC_50ms'
             */
            (void)Rte_Write_VeHMIR_Pct_HVBatSOC_HCP_Value(0.0F);

            /* End of Outputs for SubSystem: '<S4>/HMIO_50msec_Outputs' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S4>/HMIO_50msec_Outputs' */
            /* Outport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
             *  Constant: '<S187>/Constant Value3'
             *  Inport: '<S185>/HVBatSOC_50ms'
             *  SignalConversion generated from: '<S4>/VeHMIC_Pct_HvBatSOC_50ms'
             */
            (void)Rte_Write_VeHMIR_Pct_HVBatSOC_HCP_Value(1.0F);

            /* End of Outputs for SubSystem: '<S4>/HMIO_50msec_Outputs' */
        }

        /* End of Switch: '<S187>/Switch3' */
    }

    /* End of Switch: '<S187>/Switch' */

    /* Switch: '<S290>/Switch3' incorporates:
     *  UnitDelay: '<S290>/Unit Delay'
     */
    if (rtb_OR1_pt)
    {
        HMIR_ac_DW.UnitDelay_DSTATE_gk = VeHMIC_Pct_ActualSOC;
    }
    else
    {
        HMIR_ac_DW.UnitDelay_DSTATE_gk = VeHMIC_Pct_TargetSOC;
    }

    /* End of Switch: '<S290>/Switch3' */

    /* Switch: '<S291>/Switch3' incorporates:
     *  UnitDelay: '<S291>/Unit Delay'
     */
    if (rtb_AND)
    {
        HMIR_ac_DW.UnitDelay_DSTATE_dg = VeHMIC_Pct_ActualSOC;
    }
    else
    {
        HMIR_ac_DW.UnitDelay_DSTATE_dg = VeHMIC_Pct_TargetSOC_Diff;
    }

    /* End of Switch: '<S291>/Switch3' */

    /* SignalConversion generated from: '<S184>/SOCV_HCP' */
    HMIR_ac_B.OutportBufferForSOCV_HCP = HMIR_ac_ConstB.VeHMIC_b_HVBatSOCV;

    /* Outputs for Atomic SubSystem: '<S188>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S188>/Constant Value9'
     *  Constant: '<S188>/FALSE Constant2'
     *  Constant: '<S188>/TRUE Constant1'
     *  Inport: '<Root>/VeSCPR_Pct_Est_SOC'
     *  Switch: '<S301>/Switch2'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    if (false)
    {
        HMIR_ac_DW.UnitDelay_DSTATE_jii = 50.0F;
    }
    else
    {
        if (true)
        {
            (void)Rte_Read_VeSCPR_Pct_Est_SOC_Value(&tmpRead_2);

            /* UnitDelay: '<S301>/Unit Delay' incorporates:
             *  Constant: '<S302>/Calib'
             *  Inport: '<Root>/VeSCPR_Pct_Est_SOC'
             *  Product: '<S301>/Multiplication'
             *  Sum: '<S301>/Subtraction'
             *  Sum: '<S301>/Summation'
             *  Switch: '<S301>/Switch2'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_jii += (tmpRead_2 -
                HMIR_ac_DW.UnitDelay_DSTATE_jii) * KeHMIR_k_EstSOCDispFiltrCoef;
        }
    }

    /* End of Switch: '<S301>/Switch1' */
    /* End of Outputs for SubSystem: '<S188>/Digital Lowpass Reset Enabled1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VeVTXR_e_PowerPanelMd' */
    (void)Rte_Read_VeVTXR_e_PowerPanelMd_Value(&tmpRead_f);

    /* Inport: '<Root>/VeDMIR_e_DrvMdInfoSt' */
    (void)Rte_Read_VeDMIR_e_DrvMdInfoSt_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/HMIR_MedTEF'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/HMIC_50ms_Disp'
     */
    /* Lookup_n-D: '<S303>/Vector' incorporates:
     *  Switch: '<S301>/Switch1'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    VeHMIC_Pct_EstSOCFilt = look1_iflf_binlca_16a
        (HMIR_ac_DW.UnitDelay_DSTATE_jii, ((const float32 *)
          &(KxHMIR_Pct_SOCDisp[0])), ((const float32 *)&(KtHMIR_Pct_SOCDisp[0])),
         10U);

    /* Update for UnitDelay: '<S187>/Unit Delay1' */
    HMIR_ac_DW.UnitDelay1_DSTATE_c = VeHMIC_b_ConditionTrueThreshold;

    /* Update for UnitDelay: '<S187>/Unit Delay2' */
    HMIR_ac_DW.UnitDelay2_DSTATE = HMIR_ac_DW.UnitDelay_DSTATE_fx;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/HMIO_50msec_Outputs'
     */
    /* Selector: '<S185>/Selector' incorporates:
     *  Constant: '<S362>/Calib'
     *  DataTypeConversion: '<S185>/Data Type Conversion'
     *  SignalConversion generated from: '<S4>/VeDMDR_e_DrvMdArb'
     */
    HMIR_ac_B.VeHMIR_e_DriveMdstat = (sint16)
        rtb_TmpSignalConversionAtVeDMDR_e_DrvMdA;
    HMIR_ac_B.VeHMIR_e_DriveMdstat = KaHMIR_e_DriveMdRemapping
        [(HMIR_ac_B.VeHMIR_e_DriveMdstat)];

    /* Outport: '<Root>/VeHMIR_e_HVBatSOCV_HCP' incorporates:
     *  Gain: '<S364>/Gain'
     *  SignalConversion generated from: '<S4>/HVBatSOCV_HCP'
     */
    (void)Rte_Write_VeHMIR_e_HVBatSOCV_HCP_Value((true) &&
        (HMIR_ac_B.OutportBufferForSOCV_HCP));

    /* Outport: '<Root>/VeHMIR_Pct_EstSOCDisplay' incorporates:
     *  Gain: '<S363>/Gain'
     *  SignalConversion generated from: '<S4>/VeHMIC_Pct_EstSOCDisplay'
     */
    (void)Rte_Write_VeHMIR_Pct_EstSOCDisplay_Value(1.0F * VeHMIC_Pct_EstSOCFilt);

    /* Outport: '<Root>/VeHMIR_e_ShifterPOS' incorporates:
     *  Inport: '<S185>/ShifterPOS_50ms'
     *  Selector: '<S190>/Selector'
     *  SignalConversion generated from: '<S4>/VeHMIC_e_ShifterPOS_50ms'
     */
    (void)Rte_Write_VeHMIR_e_ShifterPOS_Value(HMIR_ac_B.VeHMIC_e_ShifterPOS);

    /* Outport: '<Root>/VeHMIR_b_ChrgFault' incorporates:
     *  Logic: '<S357>/AND'
     *  SignalConversion generated from: '<S4>/VeHMIR_b_ChrgFault'
     */
    (void)Rte_Write_VeHMIR_b_ChrgFault_Value(HMIR_ac_B.OBC_SvsLmp);

    /* Outport: '<Root>/VeHMIR_b_PrpFault' incorporates:
     *  Logic: '<S354>/AND'
     *  SignalConversion generated from: '<S4>/VeHMIR_b_PrpFault'
     */
    (void)Rte_Write_VeHMIR_b_PrpFault_Value(HMIR_ac_B.Logical1);

    /* Outport: '<Root>/VeHMIR_b_ShifterInPark' incorporates:
     *  Logic: '<S356>/AND'
     *  SignalConversion generated from: '<S4>/VeHMIR_b_ShifterInPark'
     */
    (void)Rte_Write_VeHMIR_b_ShifterInPark_Value(VeHMIC_b_ShifterInPark);

    /* Outport: '<Root>/VeHMIR_b_SrvLmpGenFault' incorporates:
     *  Logic: '<S355>/AND'
     *  SignalConversion generated from: '<S4>/VeHMIR_b_SrvLmpGenFault'
     */
    (void)Rte_Write_VeHMIR_b_SrvLmpGenFault_Value(HMIR_ac_B.Logical2);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeHMIR_e_DriveMdstat' incorporates:
     *  SignalConversion generated from: '<S4>/VeHMIR_e_DriveMdstat'
     */
    (void)Rte_Write_VeHMIR_e_DriveMdstat_Value(HMIR_ac_B.VeHMIR_e_DriveMdstat);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/HMIO_50msec_Outputs'
     */
    /* Switch: '<S185>/Switch3' incorporates:
     *  Constant: '<S185>/Constant Value'
     *  Constant: '<S361>/Constant'
     *  Inport: '<Root>/VeVTXR_e_PowerPanelMd'
     *  RelationalOperator: '<S185>/Comparison4'
     */
    if (tmpRead_f == CeVTXR_e_GeneratorMd)
    {
        tmpRead_h = ((uint16)4U);
    }
    else
    {
        tmpRead_h = (uint16)HMIR_ac_B.VeHMIR_e_DriveMdstat;
    }

    /* End of Switch: '<S185>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeHMIR_e_DriveMdstat_BPCM' incorporates:
     *  SignalConversion generated from: '<S4>/VeHMIR_e_DriveMdstat_BPCM'
     */
    (void)Rte_Write_VeHMIR_e_DriveMdstat_BPCM_Value(tmpRead_h);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/HMIO_50msec_Outputs'
     */
    /* Outport: '<Root>/VeHMIR_e_DriveMdstat_PopUpRqst' incorporates:
     *  DataTypeConversion: '<S358>/DataTypeConversion'
     *  Inport: '<Root>/VeDMIR_e_DrvMdInfoSt'
     *  SignalConversion generated from: '<S4>/VeHMIR_e_DriveMdstat_PopUpRqst'
     */
    (void)Rte_Write_VeHMIR_e_DriveMdstat_PopUpRqst_Value(tmpRead_1);

    /* Outport: '<Root>/VeHMIR_e_HEV_LMP_RQ' incorporates:
     *  DataTypeConversion: '<S359>/DataTypeConversion'
     *  SignalConversion generated from: '<S4>/VeHMIR_e_HEV_LMP_RQ'
     *  Switch: '<S310>/Switch5'
     */
    (void)Rte_Write_VeHMIR_e_HEV_LMP_RQ_Value(VeHMIC_e_HEV_LMP_RQ);

    /* Outport: '<Root>/VeHMIR_e_ShifterPOS_K8' incorporates:
     *  DataTypeConversion: '<S360>/DataTypeConversion'
     *  Selector: '<S190>/Selector1'
     *  SignalConversion generated from: '<S4>/VeHMIR_e_ShifterPOS_K8'
     */
    (void)Rte_Write_VeHMIR_e_ShifterPOS_K8_Value(VeHMIC_e_ShifterPOS_K8);

    /* Merge: '<Root>/Merge_10_Irv' incorporates:
     *  Inport: '<S185>/ShifterPOS_50ms'
     *  Selector: '<S190>/Selector'
     *  SignalConversion generated from: '<S4>/VeHMIC_e_ShifterPOS_50ms_write'
     */
    Rte_IrvWrite_HMIR_MedTEF_VeHMIC_e_ShifterPOS_50ms_write_IRV
        (HMIR_ac_B.VeHMIC_e_ShifterPOS);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */
}

/* Model step function for TID3 */
FUNC(void, HMIR_CODE) HMIR_MedTEH(void) /* Explicit Task: MedTEH */
{
    float32 Gain_az;
    float32 Gain_bf;
    float32 Gain_c;
    float32 Gain_e;
    float32 Gain_fa;
    float32 Gain_h;
    float32 Gain_m;
    float32 Gain_o;
    float32 rtb_VM_Conditional_Signal_SugSpdThr_50;
    boolean rtb_VM_Conditional_Signal_DerateRsnOverH;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/HMIR_MedTEH'
     */
    /* DataStoreWrite: '<S5>/DSW_StatusByte_DrvMtrB_Ovrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DrvMtrB_Ovrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvMtrB_Ovrtemp_Value
        (&HMIR_ac_DW.StatusByte_DrvMtrB_Ovrtemp);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_DrvMtrB_InvrtrOvrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DrvMtrB_InvrtrOvrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvMtrB_InvrtrOvrtemp_Value
        (&HMIR_ac_DW.StatusByte_DrvMtrB_InvrtrOvrtemp);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_DrvMtrA_Ovrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DrvMtrA_Ovrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvMtrA_Ovrtemp_Value
        (&HMIR_ac_DW.StatusByte_DrvMtrA_Ovrtemp);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_DrvMtrA_InvrtrOvrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DrvMtrA_InvrtrOvrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvMtrA_InvrtrOvrtemp_Value
        (&HMIR_ac_DW.StatusByte_DrvMtrA_InvrtrOvrtemp);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_DM_B_I_PW_Ovrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DM_B_I_PW_Ovrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DM_B_I_PW_Ovrtemp_Value
        (&HMIR_ac_DW.StatusByte_DM_B_I_PW_Ovrtemp);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_DM_B_I_PV_Ovrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DM_B_I_PV_Ovrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DM_B_I_PV_Ovrtemp_Value
        (&HMIR_ac_DW.StatusByte_DM_B_I_PV_Ovrtemp);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_DM_B_I_PU_Ovrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DM_B_I_PU_Ovrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DM_B_I_PU_Ovrtemp_Value
        (&HMIR_ac_DW.StatusByte_DM_B_I_PU_Ovrtemp);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_DM_A_I_PW_Ovrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DM_A_I_PW_Ovrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DM_A_I_PW_Ovrtemp_Value
        (&HMIR_ac_DW.StatusByte_DM_A_I_PW_Ovrtemp);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_DM_A_I_PV_Ovrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DM_A_I_PV_Ovrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DM_A_I_PV_Ovrtemp_Value
        (&HMIR_ac_DW.StatusByte_DM_A_I_PV_Ovrtemp);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_DM_A_I_PU_Ovrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DM_A_I_PU_Ovrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DM_A_I_PU_Ovrtemp_Value
        (&HMIR_ac_DW.StatusByte_DM_A_I_PU_Ovrtemp);

    /* SignalConversion generated from: '<S5>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

    /* SignalConversion generated from: '<S5>/VeGENR_b_LowVoltSysFld' incorporates:
     *  Inport: '<Root>/VeGENR_b_LowVoltSysFld'
     */
    (void)Rte_Read_VeGENR_b_LowVoltSysFld_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeGENR_b_LowVoltSys);

    /* SignalConversion generated from: '<S5>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd' incorporates:
     *  Inport: '<Root>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd'
     */
    (void)Rte_Read_VeSRAR_b_HybPwrtrnRdcdPerfCmnd_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_HybPwrtrnR);

    /* SignalConversion generated from: '<S5>/VeTHMR_b_BattCondPlugin_Rq' incorporates:
     *  Inport: '<Root>/VeTHMR_b_BattCondPlugin_Rq'
     */
    (void)Rte_Read_VeTHMR_b_BattCondPlugin_Rq_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_BattCondPl);

    /* SignalConversion generated from: '<S5>/VeIMOR_b_EngDsbldToIC' incorporates:
     *  Inport: '<Root>/VeIMOR_b_EngDsbldToIC'
     */
    (void)Rte_Read_VeIMOR_b_EngDsbldToIC_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeIMOR_b_EngDsbldTo);

    /* SignalConversion generated from: '<S5>/VeENGR_b_EngSysLowFuel' incorporates:
     *  Inport: '<Root>/VeENGR_b_EngSysLowFuel'
     */
    (void)Rte_Read_VeENGR_b_EngSysLowFuel_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeENGR_b_EngSysLowF);

    /* SignalConversion generated from: '<S5>/VeTHMR_b_RmtStrtAbort_StrtVhclRq' incorporates:
     *  Inport: '<Root>/VeTHMR_b_RmtStrtAbort_StrtVhclRq'
     */
    (void)Rte_Read_VeTHMR_b_RmtStrtAbort_StrtVhclRq_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_RmtStrtAbo);

    /* SignalConversion generated from: '<S5>/VeINVR_b_MtrA_DC_VoltFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_DC_VoltFA'
     */
    (void)Rte_Read_VeINVR_b_MtrA_DC_VoltFA_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrA_DC_Vo);

    /* SignalConversion generated from: '<S5>/VeINVR_b_MtrB_DC_VoltFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrB_DC_VoltFA'
     */
    (void)Rte_Read_VeINVR_b_MtrB_DC_VoltFA_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrB_DC_Vo);

    /* SignalConversion generated from: '<S5>/VeINVR_b_MtrA_DC_CrntFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_DC_CrntFA'
     */
    (void)Rte_Read_VeINVR_b_MtrA_DC_CrntFA_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrA_DC_Cr);

    /* SignalConversion generated from: '<S5>/VeINVR_b_MtrB_DC_CrntFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrB_DC_CrntFA'
     */
    (void)Rte_Read_VeINVR_b_MtrB_DC_CrntFA_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeINVR_b_MtrB_DC_Cr);

    /* SignalConversion generated from: '<S5>/VeHMIC_e_ShifterPOS_50ms_read' incorporates:
     *  Merge: '<Root>/Merge_10_Irv'
     */
    HMIR_ac_B.TmpSignalConversionAtVeHMIC_e_ShifterPOS =
        Rte_IrvRead_HMIR_MedTEH_VeHMIC_e_ShifterPOS_50ms_write_IRV();

    /* SignalConversion generated from: '<S5>/VeCSVR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeCSVR_v_VehSpdOutp);

    /* SignalConversion generated from: '<S5>/VeDTRR_b_DrvrIntndedAxleTrqRawFA' incorporates:
     *  Inport: '<Root>/VeDTRR_b_DrvrIntndedAxleTrqRawFA'
     */
    (void)Rte_Read_VeDTRR_b_DrvrIntndedAxleTrqRawFA_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeDTRR_b_DrvrIntnde);

    /* SignalConversion generated from: '<S5>/VeTHMR_b_StartVhcl_ToMaintain12Vlt' incorporates:
     *  Inport: '<Root>/VeTHMR_b_StartVhcl_ToMaintain12Vlt'
     */
    (void)Rte_Read_VeTHMR_b_StartVhcl_ToMaintain12Vlt_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_StartVhcl_);

    /* SignalConversion generated from: '<S5>/VeTHMR_b_HVAC_turnedOff' incorporates:
     *  Inport: '<Root>/VeTHMR_b_HVAC_turnedOff'
     */
    (void)Rte_Read_VeTHMR_b_HVAC_turnedOff_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_HVAC_turne);

    /* SignalConversion generated from: '<S5>/VeTHMR_b_LeaveKeyIn_RUN' incorporates:
     *  Inport: '<Root>/VeTHMR_b_LeaveKeyIn_RUN'
     */
    (void)Rte_Read_VeTHMR_b_LeaveKeyIn_RUN_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_LeaveKeyIn);

    /* SignalConversion generated from: '<S5>/VeESSR_b_AStrtFailed' incorporates:
     *  Inport: '<Root>/VeESSR_b_AStrtFailed'
     */
    (void)Rte_Read_VeESSR_b_AStrtFailed_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeESSR_b_AStrtFaile);

    /* SignalConversion generated from: '<S5>/VeBPCR_b_PwrLimON' incorporates:
     *  Inport: '<Root>/VeBPCR_b_PwrLimON'
     */
    (void)Rte_Read_VeBPCR_b_PwrLimON_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_PwrLimONOu);

    /* SignalConversion generated from: '<S5>/VeESPR_b_EngNegSpdFltDtct' incorporates:
     *  Inport: '<Root>/VeESPR_b_EngNegSpdFltDtct'
     */
    (void)Rte_Read_VeESPR_b_EngNegSpdFltDtct_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeESPR_b_EngNegSpdF);

    /* SignalConversion generated from: '<S5>/VeOBCR_b_HMIR_MSG5' incorporates:
     *  Inport: '<Root>/VeOBCR_b_HMIR_MSG5'
     */
    (void)Rte_Read_VeOBCR_b_HMIR_MSG5_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG5O);

    /* SignalConversion generated from: '<S5>/VeOBCR_b_HMIR_MSG6' incorporates:
     *  Inport: '<Root>/VeOBCR_b_HMIR_MSG6'
     */
    (void)Rte_Read_VeOBCR_b_HMIR_MSG6_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG6O);

    /* SignalConversion generated from: '<S5>/VeSRAR_b_CreepTorqMode' incorporates:
     *  Inport: '<Root>/VeSRAR_b_CreepTorqMode'
     */
    (void)Rte_Read_VeSRAR_b_CreepTorqMode_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_CreepTorqM);

    /* SignalConversion generated from: '<S5>/VeSRAR_b_ReducedPerfMode2' incorporates:
     *  Inport: '<Root>/VeSRAR_b_ReducedPerfMode2'
     */
    (void)Rte_Read_VeSRAR_b_ReducedPerfMode2_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_ReducedPer);

    /* SignalConversion generated from: '<S5>/VeSRAR_b_limitInputTrq' incorporates:
     *  Inport: '<Root>/VeSRAR_b_limitInputTrq'
     */
    (void)Rte_Read_VeSRAR_b_limitInputTrq_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_limitInput);

    /* SignalConversion generated from: '<S5>/VeOBCR_b_HMIR_MSG8' incorporates:
     *  Inport: '<Root>/VeOBCR_b_HMIR_MSG8'
     */
    (void)Rte_Read_VeOBCR_b_HMIR_MSG8_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeOBCR_b_HMIR_MSG8O);

    /* SignalConversion generated from: '<S5>/VeSRAR_b_VehShutoffSoon' incorporates:
     *  Inport: '<Root>/VeSRAR_b_VehShutoffSoon'
     */
    (void)Rte_Read_VeSRAR_b_VehShutoffSoon_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_VehShutoff);

    /* SignalConversion generated from: '<S5>/VeTHMR_b_DisblFunc_Msg_10' incorporates:
     *  Inport: '<Root>/VeTHMR_b_DisblFunc_Msg_10'
     */
    (void)Rte_Read_VeTHMR_b_DisblFunc_Msg_10_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeTHMR_b_DisblFunc_);

    /* SignalConversion generated from: '<S5>/VeHVTR_P_HV_BatPwr' incorporates:
     *  Inport: '<Root>/VeHVTR_P_HV_BatPwr_Arb2'
     */
    (void)Rte_Read_VeHVTR_P_HV_BatPwr_Arb2_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeHVTR_P_HV_BatPwrO);

    /* SignalConversion generated from: '<S5>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa);

    /* SignalConversion generated from: '<S5>/VeOHSR_b_EnaGSI' incorporates:
     *  Inport: '<Root>/VeOHSR_b_EnaGSI'
     */
    (void)Rte_Read_VeOHSR_b_EnaGSI_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeOHSR_b_EnaGSIOutp);

    /* SignalConversion generated from: '<S5>/VeCDMR_b_ChrgPortUL_FltDtct' incorporates:
     *  Inport: '<Root>/VeCDMR_b_ChrgPortUL_FltDtct'
     */
    (void)Rte_Read_VeCDMR_b_ChrgPortUL_FltDtct_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeCDMR_b_ChrgPortUL);

    /* SignalConversion generated from: '<S5>/VeSTRR_b_BumpStrtInhbt' incorporates:
     *  Inport: '<Root>/VeSTRR_b_BumpStrtInhbt'
     */
    (void)Rte_Read_VeSTRR_b_BumpStrtInhbt_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_BumpStrtIn);

    /* SignalConversion generated from: '<S5>/VeCITR_b_ChrgPortDoorSts' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPortDoorSts'
     */
    (void)Rte_Read_VeCITR_b_ChrgPortDoorSts_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortDo);

    /* SignalConversion generated from: '<S5>/VeSRAR_b_Veh_Spd_Lmtd' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Veh_Spd_Lmtd'
     */
    (void)Rte_Read_VeSRAR_b_Veh_Spd_Lmtd_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Veh_Spd_Lm);

    /* SignalConversion generated from: '<S5>/VeSRAR_b_PerfLmtd_StpSfly' incorporates:
     *  Inport: '<Root>/VeSRAR_b_PerfLmtd_StpSfly'
     */
    (void)Rte_Read_VeSRAR_b_PerfLmtd_StpSfly_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_PerfLmtd_S);

    /* SignalConversion generated from: '<S5>/VeSSDR_b_DrvNotAllwdTPChck' incorporates:
     *  Inport: '<Root>/VeSSDR_b_DrvNotAllwdTPChck'
     */
    (void)Rte_Read_VeSSDR_b_DrvNotAllwdTPChck_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSSDR_b_DrvNotAllw);

    /* SignalConversion generated from: '<S5>/VeBPCR_b_HEVOnRqBPCM_Debounced' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HEVOnRqBPCM_Debounced'
     */
    (void)Rte_Read_VeBPCR_b_HEVOnRqBPCM_Debounced_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_HEVOnRqBPC);

    /* SignalConversion generated from: '<S5>/VeMTIR_k_MtrADrtngFctr' incorporates:
     *  Inport: '<Root>/VeMTIR_k_MtrADrtngFctr'
     */
#if Rte_SysCon_Variant_HMIR_1 || Rte_SysCon_Variant_HMIR_5

    (void)Rte_Read_VeMTIR_k_MtrADrtngFctr_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrADrtngF);

#endif

    /* End of SignalConversion generated from: '<S5>/VeMTIR_k_MtrADrtngFctr' */

    /* SignalConversion generated from: '<S5>/VeMTIR_k_MtrBDrtngFctr' incorporates:
     *  Inport: '<Root>/VeMTIR_k_MtrBDrtngFctr'
     */
#if Rte_SysCon_Variant_HMIR_5

    (void)Rte_Read_VeMTIR_k_MtrBDrtngFctr_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeMTIR_k_MtrBDrtngF);

#endif

    /* End of SignalConversion generated from: '<S5>/VeMTIR_k_MtrBDrtngFctr' */

    /* SignalConversion generated from: '<S5>/VeINVR_e_MtrA_DrtRsn' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrA_DrtRsn'
     */
#if Rte_SysCon_Variant_HMIR_1 || Rte_SysCon_Variant_HMIR_5

    (void)Rte_Read_VeINVR_e_MtrA_DrtRsn_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeINVR_e_MtrA_DrtRs);

#endif

    /* End of SignalConversion generated from: '<S5>/VeINVR_e_MtrA_DrtRsn' */

    /* SignalConversion generated from: '<S5>/VeINVR_e_MtrB_DrtRsn' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrB_DrtRsn'
     */
#if Rte_SysCon_Variant_HMIR_5

    (void)Rte_Read_VeINVR_e_MtrB_DrtRsn_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeINVR_e_MtrB_DrtRs);

#endif

    /* End of SignalConversion generated from: '<S5>/VeINVR_e_MtrB_DrtRsn' */

    /* SignalConversion generated from: '<S5>/VeSRAR_b_Popup_Msg14' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Popup_Msg14'
     */
    (void)Rte_Read_VeSRAR_b_Popup_Msg14_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Msg1);

    /* SignalConversion generated from: '<S5>/VeSRAR_b_Popup_Msg15' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Popup_Msg15'
     */
    (void)Rte_Read_VeSRAR_b_Popup_Msg15_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSRAR_b_Popup_Ms_m);

    /* SignalConversion generated from: '<S5>/VeSTRR_b_P2p5HMIMsg' incorporates:
     *  Inport: '<Root>/VeSTRR_b_P2p5HMIMsg'
     */
    (void)Rte_Read_VeSTRR_b_P2p5HMIMsg_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeSTRR_b_P2p5HMIMsg);

    /* SignalConversion generated from: '<S5>/VeBPCR_b_BatShtOffFlg' incorporates:
     *  Inport: '<Root>/VeASLR_v_DrvMdTurtleMdSpdLim'
     *  Inport: '<Root>/VeASLR_v_TSRDispSpdLimClpd'
     *  Inport: '<Root>/VeBPCR_b_BatShtOffFlg'
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     *  Merge: '<Root>/Merge_7'
     *  SignalConversion generated from: '<S5>/VeASLR_v_DrvMdTurtleMdSpdLim'
     *  SignalConversion generated from: '<S5>/VeASLR_v_TSRDispSpdLimClpd'
     *  SignalConversion generated from: '<S5>/VeDMDR_e_DrvMdArb'
     *  SignalConversion generated from: '<S5>/VeDMDR_e_TurtleMdSts'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_FrontWiperMoveSts_read'
     */
#if Rte_SysCon_Variant_HMIR_5

    (void)Rte_Read_VeBPCR_b_BatShtOffFlg_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeBPCR_b_BatShtOffF);
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeDMDR_e_TurtleMdSt);
    (void)Rte_Read_VeASLR_v_TSRDispSpdLimClpd_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeASLR_v_TSRDispSpd);
    (void)Rte_Read_VeASLR_v_DrvMdTurtleMdSpdLim_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeASLR_v_DrvMdTurtl);
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value
        (&HMIR_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu);
    HMIR_ac_B.TmpSignalConversionAtVeHMIR_b_FrontWiper =
        Rte_IrvRead_HMIR_MedTEH_FrontWiperMoveSts_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S5>/VeBPCR_b_BatShtOffFlg' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/HMIC_100ms_Disp'
     */
    /* Outputs for Atomic SubSystem: '<S365>/HMIC_100ms_Reserve' */
    HMIR_ac_HMIC_100ms_Reserve();

    /* End of Outputs for SubSystem: '<S365>/HMIC_100ms_Reserve' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/HMIO_100msec_Outputs'
     */
    /* SignalConversion generated from: '<S366>/RegenPowerDisp' */
#if Rte_SysCon_Variant_HMIR_6

    /* VariantMerge generated from: '<S366>/SugSpdThr' */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = HMIR_ac_B.Switch1_j;

#else

    /* VariantMerge generated from: '<S366>/SugSpdThr' incorporates:
     *  SignalConversion generated from: '<S366>/RegenPowerDisp'
     */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S366>/RegenPowerDisp' */

    /* Gain: '<S852>/Gain' */
    Gain_h = 1.0F * rtb_VM_Conditional_Signal_SugSpdThr_50;

    /* SignalConversion generated from: '<S366>/RegenPowerDispV' */
#if Rte_SysCon_Variant_HMIR_6

    /* VariantMerge generated from: '<S366>/DerateRsnOverHeated' */
    rtb_VM_Conditional_Signal_DerateRsnOverH = HMIR_ac_B.Logical3;

#else

    /* VariantMerge generated from: '<S366>/DerateRsnOverHeated' incorporates:
     *  SignalConversion generated from: '<S366>/RegenPowerDispV'
     */
    rtb_VM_Conditional_Signal_DerateRsnOverH = false;

#endif

    /* End of SignalConversion generated from: '<S366>/RegenPowerDispV' */

    /* SignalConversion generated from: '<S5>/VeHMIR_b_RegenPwrDispV' incorporates:
     *  Logic: '<S819>/AND'
     *  Outport: '<Root>/VeHMIR_b_RegenPwrDispV'
     */
    (void)Rte_Write_VeHMIR_b_RegenPwrDispV_Value
        (rtb_VM_Conditional_Signal_DerateRsnOverH);

    /* SignalConversion generated from: '<S366>/BatTemDisp' */
#if Rte_SysCon_Variant_HMIR_5

    /* VariantMerge generated from: '<S366>/SugSpdThr' */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = VeHMIC_T_HVBattTempDisp;

#else

    /* VariantMerge generated from: '<S366>/SugSpdThr' incorporates:
     *  SignalConversion generated from: '<S366>/BatTemDisp'
     */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S366>/BatTemDisp' */

    /* Gain: '<S862>/Gain' */
    Gain_c = 1.0F * rtb_VM_Conditional_Signal_SugSpdThr_50;

    /* SignalConversion generated from: '<S366>/MaxCmfrtZnHVBatt' */
#if Rte_SysCon_Variant_HMIR_5

    /* VariantMerge generated from: '<S366>/SugSpdThr' */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = VeHMIC_T_MaxCmfrtZnHVBattDisp;

#else

    /* VariantMerge generated from: '<S366>/SugSpdThr' incorporates:
     *  SignalConversion generated from: '<S366>/MaxCmfrtZnHVBatt'
     */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S366>/MaxCmfrtZnHVBatt' */

    /* Gain: '<S864>/Gain' */
    Gain_fa = 1.0F * rtb_VM_Conditional_Signal_SugSpdThr_50;

    /* SignalConversion generated from: '<S366>/MinCmfrtZnHVBatt' */
#if Rte_SysCon_Variant_HMIR_5

    /* VariantMerge generated from: '<S366>/SugSpdThr' */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = VeHMIC_T_MinCmfrtZnHVBattDisp;

#else

    /* VariantMerge generated from: '<S366>/SugSpdThr' incorporates:
     *  SignalConversion generated from: '<S366>/MinCmfrtZnHVBatt'
     */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S366>/MinCmfrtZnHVBatt' */

    /* Gain: '<S865>/Gain' */
    Gain_m = 1.0F * rtb_VM_Conditional_Signal_SugSpdThr_50;

    /* SignalConversion generated from: '<S366>/MaxDrtngZnHVBatt' */
#if Rte_SysCon_Variant_HMIR_5

    /* VariantMerge generated from: '<S366>/SugSpdThr' */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = VeHMIC_T_MaxDrtngZnHVBattDisp;

#else

    /* VariantMerge generated from: '<S366>/SugSpdThr' incorporates:
     *  SignalConversion generated from: '<S366>/MaxDrtngZnHVBatt'
     */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S366>/MaxDrtngZnHVBatt' */

    /* Gain: '<S866>/Gain' */
    Gain_az = 1.0F * rtb_VM_Conditional_Signal_SugSpdThr_50;

    /* SignalConversion generated from: '<S366>/MinDrtngZnHVBatt' */
#if Rte_SysCon_Variant_HMIR_5

    /* VariantMerge generated from: '<S366>/SugSpdThr' */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = VeHMIC_T_MinDrtngZnHVBattDisp;

#else

    /* VariantMerge generated from: '<S366>/SugSpdThr' incorporates:
     *  SignalConversion generated from: '<S366>/MinDrtngZnHVBatt'
     */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S366>/MinDrtngZnHVBatt' */

    /* Gain: '<S867>/Gain' */
    Gain_bf = 1.0F * rtb_VM_Conditional_Signal_SugSpdThr_50;

    /* SignalConversion generated from: '<S366>/HVBatteryShutOff' */
#if Rte_SysCon_Variant_HMIR_5

    /* VariantMerge generated from: '<S366>/DerateRsnOverHeated' */
    rtb_VM_Conditional_Signal_DerateRsnOverH = HMIR_ac_B.AND_bd;

#else

    /* VariantMerge generated from: '<S366>/DerateRsnOverHeated' incorporates:
     *  SignalConversion generated from: '<S366>/HVBatteryShutOff'
     */
    rtb_VM_Conditional_Signal_DerateRsnOverH = false;

#endif

    /* End of SignalConversion generated from: '<S366>/HVBatteryShutOff' */

    /* SignalConversion generated from: '<S5>/VeHMIR_b_HVBatteryShutOff' incorporates:
     *  Logic: '<S839>/AND'
     *  Outport: '<Root>/VeHMIR_b_HVBatteryShutOff'
     */
    (void)Rte_Write_VeHMIR_b_HVBatteryShutOff_Value
        (rtb_VM_Conditional_Signal_DerateRsnOverH);

    /* SignalConversion generated from: '<S366>/DerateRsnOverSpeed' */
#if Rte_SysCon_Variant_HMIR_1

    /* VariantMerge generated from: '<S366>/DerateRsnOverHeated' */
    rtb_VM_Conditional_Signal_DerateRsnOverH = HMIR_ac_B.AND_dk;

#else

    /* VariantMerge generated from: '<S366>/DerateRsnOverHeated' incorporates:
     *  SignalConversion generated from: '<S366>/DerateRsnOverSpeed'
     */
    rtb_VM_Conditional_Signal_DerateRsnOverH = false;

#endif

    /* End of SignalConversion generated from: '<S366>/DerateRsnOverSpeed' */

    /* SignalConversion generated from: '<S5>/VeHMIR_b_DerateRsnOverSpeed' incorporates:
     *  Logic: '<S840>/AND'
     *  Outport: '<Root>/VeHMIR_b_DerateRsnOverSpeed'
     */
    (void)Rte_Write_VeHMIR_b_DerateRsnOverSpeed_Value
        (rtb_VM_Conditional_Signal_DerateRsnOverH);

    /* SignalConversion generated from: '<S366>/DerateRsnOverHeated' */
#if Rte_SysCon_Variant_HMIR_1

    /* VariantMerge generated from: '<S366>/DerateRsnOverHeated' */
    rtb_VM_Conditional_Signal_DerateRsnOverH = HMIR_ac_B.AND_dh;

#else

    /* VariantMerge generated from: '<S366>/DerateRsnOverHeated' incorporates:
     *  SignalConversion generated from: '<S366>/DerateRsnOverHeated'
     */
    rtb_VM_Conditional_Signal_DerateRsnOverH = false;

#endif

    /* End of SignalConversion generated from: '<S366>/DerateRsnOverHeated' */

    /* SignalConversion generated from: '<S366>/SugSpdMax' */
#if Rte_SysCon_Variant_HMIR_5

    /* VariantMerge generated from: '<S366>/SugSpdThr' */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = HMIR_ac_B.Gain_bx;

#else

    /* VariantMerge generated from: '<S366>/SugSpdThr' incorporates:
     *  SignalConversion generated from: '<S366>/SugSpdMax'
     */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S366>/SugSpdMax' */

    /* Gain: '<S868>/Gain' */
    Gain_o = 1.0F * rtb_VM_Conditional_Signal_SugSpdThr_50;

    /* SignalConversion generated from: '<S366>/SugSpdMin' */
#if Rte_SysCon_Variant_HMIR_5

    /* VariantMerge generated from: '<S366>/SugSpdThr' */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = HMIR_ac_B.Gain1;

#else

    /* VariantMerge generated from: '<S366>/SugSpdThr' incorporates:
     *  SignalConversion generated from: '<S366>/SugSpdMin'
     */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S366>/SugSpdMin' */

    /* Gain: '<S869>/Gain' */
    Gain_e = 1.0F * rtb_VM_Conditional_Signal_SugSpdThr_50;

    /* SignalConversion generated from: '<S366>/SugSpdThr' */
#if Rte_SysCon_Variant_HMIR_5

    /* VariantMerge generated from: '<S366>/SugSpdThr' */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = HMIR_ac_B.Gain2;

#else

    /* VariantMerge generated from: '<S366>/SugSpdThr' incorporates:
     *  SignalConversion generated from: '<S366>/SugSpdThr'
     */
    rtb_VM_Conditional_Signal_SugSpdThr_50 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S366>/SugSpdThr' */

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg1' incorporates:
     *  Logic: '<S846>/AND'
     *  SignalConversion generated from: '<S5>/HEV_PopupMsg1'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg1_Value(VeHMIC_b_Popup_Msg1);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg2' incorporates:
     *  Logic: '<S847>/AND'
     *  SignalConversion generated from: '<S5>/HEV_PopupMsg2'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg2_Value(VeHMIC_b_Popup_Msg2);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg3' incorporates:
     *  Logic: '<S848>/AND'
     *  SignalConversion generated from: '<S5>/HEV_PopupMsg3'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg3_Value(VeHMIC_b_Popup_Msg3);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg4' incorporates:
     *  Logic: '<S849>/AND'
     *  SignalConversion generated from: '<S5>/HEV_PopupMsg4'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg4_Value(VeHMIC_b_Popup_Msg4);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg5' incorporates:
     *  Logic: '<S820>/AND'
     *  SignalConversion generated from: '<S5>/HEV_PopupMsg5'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg5_Value(VeHMIC_b_Popup_Msg5);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg6' incorporates:
     *  Logic: '<S821>/AND'
     *  SignalConversion generated from: '<S5>/HEV_PopupMsg6'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg6_Value(VeHMIC_b_Popup_Msg6);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg7' incorporates:
     *  Logic: '<S822>/AND'
     *  SignalConversion generated from: '<S5>/HEV_PopupMsg7'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg7_Value(VeHMIC_b_Popup_Msg7);

    /* Outport: '<Root>/VeHMIR_P_BatPwrUsageDisp' incorporates:
     *  Gain: '<S861>/Gain'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_BatPwrUsageDisp'
     */
    (void)Rte_Write_VeHMIR_P_BatPwrUsageDisp_Value(1.0F *
        VeHMIC_P_BatPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_b_BatPwrUsageDispV' incorporates:
     *  Logic: '<S824>/AND'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_BatPwrUsageDispV'
     */
    (void)Rte_Write_VeHMIR_b_BatPwrUsageDispV_Value(VeHMIC_b_BatPwrUsageDispV);

    /* Outport: '<Root>/VeHMIR_Pct_CoachDisp' incorporates:
     *  Gain: '<S860>/Gain'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_CoachDisp'
     */
    (void)Rte_Write_VeHMIR_Pct_CoachDisp_Value(1.0F * VeHMIC_Pct_CoachDisp);

    /* Outport: '<Root>/VeHMIR_b_CoachDispV' incorporates:
     *  Logic: '<S828>/AND'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_CoachDispV'
     */
    (void)Rte_Write_VeHMIR_b_CoachDispV_Value(VeHMIC_b_CoachDispV);

    /* Outport: '<Root>/VeHMIR_b_DriveReady' incorporates:
     *  Logic: '<S829>/AND'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_DriveReady'
     */
    (void)Rte_Write_VeHMIR_b_DriveReady_Value(VeHMIC_b_DriveReady);

    /* Outport: '<Root>/VeHMIR_P_EngPwrUsageDisp' incorporates:
     *  Gain: '<S858>/Gain'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_EngPwrUsageDisp'
     */
    (void)Rte_Write_VeHMIR_P_EngPwrUsageDisp_Value(1.0F *
        VeHMIC_P_EngPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_b_EngPwrUsageDispV' incorporates:
     *  Logic: '<S825>/AND'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_EngPwrUsageDispV'
     */
    (void)Rte_Write_VeHMIR_b_EngPwrUsageDispV_Value(HMIR_ac_B.EngTrqActual_FA);

    /* Outport: '<Root>/VeHMIR_b_HEV_EVT_MD' incorporates:
     *  Logic: '<S844>/AND'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_HEV_EVT_MD'
     */
    (void)Rte_Write_VeHMIR_b_HEV_EVT_MD_Value(VeHMIC_b_HEV_EVT_MD);

    /* Outport: '<Root>/VeHMIR_P_HVACPwrUsageDisp' incorporates:
     *  Gain: '<S855>/Gain'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_HVACPwrUsageDisp'
     */
    (void)Rte_Write_VeHMIR_P_HVACPwrUsageDisp_Value(1.0F *
        VeHMIC_P_HVACPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_b_HVACPwrUsageDispV' incorporates:
     *  Logic: '<S823>/AND'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_HVACPwrUsageDispV'
     */
    (void)Rte_Write_VeHMIR_b_HVACPwrUsageDispV_Value(VeHMIC_b_HVACPwrUsageDIspV);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeHMIR_T_HVBattTempDisp' incorporates:
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_HVBattTempDisp'
     */
    (void)Rte_Write_VeHMIR_T_HVBattTempDisp_Value(Gain_c);

    /* Outport: '<Root>/VeHMIR_T_MaxCmfrtZnHVBattDisp' incorporates:
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_MaxCmfrtZnHVBattDisp'
     */
    (void)Rte_Write_VeHMIR_T_MaxCmfrtZnHVBattDisp_Value(Gain_fa);

    /* Outport: '<Root>/VeHMIR_T_MaxDrtngZnHVBattDisp' incorporates:
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_MaxDrtngZnHVBattDisp'
     */
    (void)Rte_Write_VeHMIR_T_MaxDrtngZnHVBattDisp_Value(Gain_az);

    /* Outport: '<Root>/VeHMIR_T_MinCmfrtZnHVBattDisp' incorporates:
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_MinCmfrtZnHVBattDisp'
     */
    (void)Rte_Write_VeHMIR_T_MinCmfrtZnHVBattDisp_Value(Gain_m);

    /* Outport: '<Root>/VeHMIR_T_MinDrtngZnHVBattDisp' incorporates:
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_MinDrtngZnHVBattDisp'
     */
    (void)Rte_Write_VeHMIR_T_MinDrtngZnHVBattDisp_Value(Gain_bf);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/HMIO_100msec_Outputs'
     */
    /* Outport: '<Root>/VeHMIR_P_MtrPwrUsageDisp' incorporates:
     *  Gain: '<S856>/Gain'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_MtrPwrUsageDisp'
     */
    (void)Rte_Write_VeHMIR_P_MtrPwrUsageDisp_Value(1.0F *
        VeHMIC_P_MtrPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_b_MtrPwrUsageDispV' incorporates:
     *  Gain: '<S857>/Gain'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_MtrPwrUsageDispV'
     */
    (void)Rte_Write_VeHMIR_b_MtrPwrUsageDispV_Value((true) &&
        (VeHMIC_b_MtrPwrUsageDispV));

    /* Outport: '<Root>/VeHMIR_Pct_OutputPwrDisp' incorporates:
     *  Gain: '<S859>/Gain'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_OutputPwrDisp'
     */
    (void)Rte_Write_VeHMIR_Pct_OutputPwrDisp_Value(1.0F *
        VeHMIC_Pct_OutputPwrDisp);

    /* Outport: '<Root>/VeHMIR_b_OutputPwrDispV' incorporates:
     *  Logic: '<S827>/AND'
     *  SignalConversion generated from: '<S5>/HMIO_100msec_Outputs_OutputPwrDispV'
     */
    (void)Rte_Write_VeHMIR_b_OutputPwrDispV_Value(VeHMIC_b_OutputPwrDispV);

    /* Outport: '<Root>/VeHMIR_P_MtrAPwrUsageDisp' incorporates:
     *  Gain: '<S853>/Gain'
     *  SignalConversion generated from: '<S5>/VeHMIR_P_MtrAPwrUsageDisp'
     */
    (void)Rte_Write_VeHMIR_P_MtrAPwrUsageDisp_Value(1.0F *
        VeHMIC_P_MtrAPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_P_MtrAPwrUsageDispV' incorporates:
     *  Logic: '<S833>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_P_MtrAPwrUsageDispV'
     */
    (void)Rte_Write_VeHMIR_P_MtrAPwrUsageDispV_Value(VeHMIC_b_MtrAPwrUsageDispV);

    /* Outport: '<Root>/VeHMIR_P_MtrBPwrUsageDisp' incorporates:
     *  Gain: '<S863>/Gain'
     *  SignalConversion generated from: '<S5>/VeHMIR_P_MtrBPwrUsageDisp'
     */
    (void)Rte_Write_VeHMIR_P_MtrBPwrUsageDisp_Value(1.0F *
        VeHMIC_P_MtrBPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_P_MtrBPwrUsageDispV' incorporates:
     *  Logic: '<S834>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_P_MtrBPwrUsageDispV'
     */
    (void)Rte_Write_VeHMIR_P_MtrBPwrUsageDispV_Value(VeHMIC_b_MtrBPwrUsageDispV);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeHMIR_P_RegenPwrDisp' incorporates:
     *  SignalConversion generated from: '<S5>/VeHMIR_P_RegenPwrDisp'
     */
    (void)Rte_Write_VeHMIR_P_RegenPwrDisp_Value(Gain_h);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/HMIO_100msec_Outputs'
     */
    /* Outport: '<Root>/VeHMIR_b_DerateRsnOverHeated' incorporates:
     *  Logic: '<S842>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_DerateRsnOverHeated'
     */
    (void)Rte_Write_VeHMIR_b_DerateRsnOverHeated_Value
        (rtb_VM_Conditional_Signal_DerateRsnOverH);

    /* Outport: '<Root>/VeHMIR_b_FCVLowBatteryLowPerf' incorporates:
     *  Logic: '<S843>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_FCVLowBatteryLowPerf'
     */
    (void)Rte_Write_VeHMIR_b_FCVLowBatteryLowPerf_Value(HMIR_ac_B.OR8_c);

    /* Outport: '<Root>/VeHMIR_b_MiL_OnRq_BPCM' incorporates:
     *  Logic: '<S818>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_MiL_OnRq_BPCM'
     */
    (void)Rte_Write_VeHMIR_b_MiL_OnRq_BPCM_Value(VeHMIC_b_MiL_OnRq_BPCM);

    /* Outport: '<Root>/VeHMIR_b_P1fFailedUseBumpStartHMI' incorporates:
     *  Logic: '<S836>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_P1fFailedUseBumpStartHMI'
     */
    (void)Rte_Write_VeHMIR_b_P1fFailedUseBumpStartHMI_Value
        (VeHMIC_b_PopUp_P1fFailedUseBumpStartHMI);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg10' incorporates:
     *  Logic: '<S832>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_Popup_Msg10'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg10_Value(VeHMIC_b_Popup_Msg10);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg11' incorporates:
     *  Logic: '<S837>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_Popup_Msg11'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg11_Value(VeHMIC_b_Popup_Msg11);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg13' incorporates:
     *  Logic: '<S835>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_Popup_Msg13'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg13_Value(VeHMIC_b_Popup_Msg13);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg14' incorporates:
     *  Logic: '<S841>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_Popup_Msg14'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg14_Value(VeHMIC_b_Popup_Msg14);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg15' incorporates:
     *  Logic: '<S845>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_Popup_Msg15'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg15_Value(VeHMIC_b_Popup_Msg15);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg16' incorporates:
     *  Logic: '<S838>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_Popup_Msg16'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg16_Value(VeHMIC_b_Popup_Msg16);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg8' incorporates:
     *  Logic: '<S826>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_Popup_Msg8'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg8_Value(VeHMIC_b_Popup_Msg8);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg9' incorporates:
     *  Logic: '<S831>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_Popup_Msg9'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg9_Value(VeHMIC_b_Popup_Msg9);

    /* Outport: '<Root>/VeHMIR_b_ThrmlRnAway_Lmp' incorporates:
     *  Logic: '<S830>/AND'
     *  SignalConversion generated from: '<S5>/VeHMIR_b_ThrmlRnAway_Lmp'
     */
    (void)Rte_Write_VeHMIR_b_ThrmlRnAway_Lmp_Value(VeHMIC_b_ThrmlRnAway_Lmp);

    /* Outport: '<Root>/VeHMIR_e_GSI' incorporates:
     *  DataTypeConversion: '<S851>/DataTypeConversion'
     *  SignalConversion generated from: '<S5>/VeHMIR_e_GSI'
     */
    (void)Rte_Write_VeHMIR_e_GSI_Value((TeHMIR_e_GSI_Stat)VeHMIC_e_GSISt_Dbncd);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeHMIR_e_TransWarn' incorporates:
     *  Merge: '<Root>/VeHMIC_e_TransWarn_IRV_Merge'
     *  SignalConversion generated from: '<S5>/VeHMIR_e_TransWarn'
     *  SignalConversion generated from: '<S5>/VeHMIC_e_TransWarn_Read'
     */
    (void)Rte_Write_VeHMIR_e_TransWarn_Value
        (Rte_IrvRead_HMIR_MedTEH_VeHMIC_e_TransWarn_write_IRV());

    /* Outport: '<Root>/VeHMIR_v_SugSpeedMax' incorporates:
     *  SignalConversion generated from: '<S5>/VeHMIR_v_SugSpeedMax'
     */
    (void)Rte_Write_VeHMIR_v_SugSpeedMax_Value(Gain_o);

    /* Outport: '<Root>/VeHMIR_v_SugSpeedMin' incorporates:
     *  SignalConversion generated from: '<S5>/VeHMIR_v_SugSpeedMin'
     */
    (void)Rte_Write_VeHMIR_v_SugSpeedMin_Value(Gain_e);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/HMIO_100msec_Outputs'
     */
    /* Outport: '<Root>/VeHMIR_v_SugSpeedThreshold' incorporates:
     *  Gain: '<S854>/Gain'
     *  SignalConversion generated from: '<S5>/VeHMIR_v_SugSpeedThreshold'
     */
    (void)Rte_Write_VeHMIR_v_SugSpeedThreshold_Value(1.0F *
        rtb_VM_Conditional_Signal_SugSpdThr_50);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Model step function for TID4 */
FUNC(void, HMIR_CODE) HMIR_SlowTEF(void) /* Explicit Task: SlowTEF */
{

#if Rte_SysCon_Variant_HMIR_5

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_HMIR_5

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 tmpRead_1;

#endif

    TeEBMR_e_eBoostStatus tmpRead_2;
    TeEBMR_e_eBoostWarning tmpRead_3;

#if Rte_SysCon_Variant_HMIR_5

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrA_T;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrB_T;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrA_I;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrB_I;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 rtb_MinMax;

#endif

#if Rte_SysCon_Variant_HMIR_5

    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/HMIR_SlowTEF'
     */
    /* SignalConversion generated from: '<S8>/VeINVR_T_MtrA_Temp' incorporates:
     *  Inport: '<Root>/VeCDMR_b_ChrgPortLK_FltDtct'
     *  Inport: '<Root>/VeCDMR_b_ChrgPortUL_FltDtct'
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     *  Inport: '<Root>/VeOBCR_b_HMIR_MSG8'
     *  SignalConversion generated from: '<S8>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S8>/VeINVR_T_MtrA_InvrtrTemp'
     *  SignalConversion generated from: '<S8>/VeINVR_T_MtrB_InvrtrTemp'
     *  SignalConversion generated from: '<S8>/VeINVR_T_MtrB_Temp'
     */
#if Rte_SysCon_Variant_HMIR_5

    /* S-Function (fcgen): '<S8>/FcnCallGen' */
    /* SignalConversion generated from: '<S8>/VeINVR_T_MtrA_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrA_T);

    /* SignalConversion generated from: '<S8>/VeINVR_T_MtrB_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrB_T);

    /* SignalConversion generated from: '<S8>/VeINVR_T_MtrA_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrA_I);

    /* SignalConversion generated from: '<S8>/VeINVR_T_MtrB_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrB_I);

    /* SignalConversion generated from: '<S8>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);
    (void)Rte_Read_VeCDMR_b_ChrgPortLK_FltDtct_Value(&tmpRead_4);
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&rtb_MinMax);
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead_1);
    (void)Rte_Read_VeCDMR_b_ChrgPortUL_FltDtct_Value(&tmpRead_0);
    (void)Rte_Read_VeOBCR_b_HMIR_MSG8_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S8>/HMIC_1000ms_Disp' */
    /* If: '<S895>/If' incorporates:
     *  Inport: '<Root>/VeCDMR_b_ChrgPortLK_FltDtct'
     *  Inport: '<Root>/VeCDMR_b_ChrgPortUL_FltDtct'
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     *  Inport: '<Root>/VeOBCR_b_HMIR_MSG8'
     */
    if (tmpRead)
    {
        /* Outputs for IfAction SubSystem: '<S895>/If Action Subsystem' incorporates:
         *  ActionPort: '<S904>/Action Port'
         */
        /* Merge: '<S895>/Merge' incorporates:
         *  Constant: '<S908>/Constant'
         *  SignalConversion generated from: '<S904>/Out1'
         */
        HMIR_ac_B.Merge = CeHMIR_e_Lvl_1;

        /* End of Outputs for SubSystem: '<S895>/If Action Subsystem' */
    }
    else if (tmpRead_4)
    {
        /* Outputs for IfAction SubSystem: '<S895>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S905>/Action Port'
         */
        /* Merge: '<S895>/Merge' incorporates:
         *  Constant: '<S909>/Constant'
         *  SignalConversion generated from: '<S905>/Out1'
         */
        HMIR_ac_B.Merge = CeHMIR_e_Lvl_2;

        /* End of Outputs for SubSystem: '<S895>/If Action Subsystem1' */
    }
    else if (tmpRead_0)
    {
        /* Outputs for IfAction SubSystem: '<S895>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S906>/Action Port'
         */
        /* Merge: '<S895>/Merge' incorporates:
         *  Constant: '<S910>/Constant'
         *  SignalConversion generated from: '<S906>/Out1'
         */
        HMIR_ac_B.Merge = CeHMIR_e_Lvl_3;

        /* End of Outputs for SubSystem: '<S895>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S895>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S907>/Action Port'
         */
        /* Merge: '<S895>/Merge' incorporates:
         *  Constant: '<S911>/Constant'
         *  SignalConversion generated from: '<S907>/Out1'
         */
        HMIR_ac_B.Merge = CeHMIR_e_Not_Availabl;

        /* End of Outputs for SubSystem: '<S895>/If Action Subsystem3' */
    }

    /* End of If: '<S895>/If' */

    /* RelationalOperator: '<S893>/Comparison2' incorporates:
     *  Constant: '<S898>/Calib'
     */
    HMIR_ac_B.Comparison2 = (rtb_TmpSignalConversionAtVeINVR_T_MtrA_T >=
        KeHMIR_T_MCPA_WindingTempThrs);

    /* RelationalOperator: '<S893>/Comparison4' incorporates:
     *  Constant: '<S900>/Calib'
     */
    HMIR_ac_B.Comparison4 = (rtb_TmpSignalConversionAtVeINVR_T_MtrB_T >=
        KeHMIR_T_MCPB_WindingTempThrs);

    /* RelationalOperator: '<S893>/Comparison1' incorporates:
     *  Constant: '<S897>/Calib'
     */
    HMIR_ac_B.Comparison1 = (rtb_TmpSignalConversionAtVeINVR_T_MtrA_I >=
        KeHMIR_T_MCPA_InvrtrTempThrs);

    /* RelationalOperator: '<S893>/Comparison3' incorporates:
     *  Constant: '<S899>/Calib'
     */
    HMIR_ac_B.Comparison3 = (rtb_TmpSignalConversionAtVeINVR_T_MtrB_I >=
        KeHMIR_T_MCPB_InvrtrTempThrs);

    /* MinMax: '<S896>/MinMax' */
    rtb_MinMax = fmaxf(tmpRead_1, rtb_MinMax);

    /* Outputs for Atomic SubSystem: '<S896>/Hysteresis' */
    /* Switch: '<S915>/Switch1' incorporates:
     *  Constant: '<S915>/Constant Value'
     *  Constant: '<S920>/Calib'
     *  Constant: '<S921>/Calib'
     *  RelationalOperator: '<S915>/Greater  Than'
     *  RelationalOperator: '<S915>/Greater  Than1'
     *  Switch: '<S915>/Switch2'
     *  UnitDelay: '<S915>/Unit Delay'
     */
    if (rtb_MinMax > ((float32)KeHMIR_n_RPMth1))
    {
        HMIR_ac_DW.UnitDelay_DSTATE_mn = true;
    }
    else
    {
        if (rtb_MinMax < ((float32)KeHMIR_n_RPMth2))
        {
            /* Switch: '<S915>/Switch2' incorporates:
             *  Constant: '<S915>/Constant Value1'
             *  UnitDelay: '<S915>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_mn = false;
        }
    }

    /* End of Switch: '<S915>/Switch1' */
    /* End of Outputs for SubSystem: '<S896>/Hysteresis' */

    /* Logic: '<S896>/OR8' incorporates:
     *  Constant: '<S916>/Calib'
     *  Constant: '<S917>/Calib'
     *  Constant: '<S918>/Calib'
     *  Constant: '<S919>/Calib'
     *  RelationalOperator: '<S896>/Relational Operator1'
     *  RelationalOperator: '<S896>/Relational Operator2'
     *  RelationalOperator: '<S896>/Relational Operator3'
     *  RelationalOperator: '<S896>/Relational Operator4'
     */
    VeHMIC_b_CondTrue_MtrTemp_IgbtTemp =
        ((((rtb_TmpSignalConversionAtVeINVR_T_MtrA_T >
            KeHMIR_T_MCPA_WindingTempThrs) ||
           (rtb_TmpSignalConversionAtVeINVR_T_MtrB_T >
            KeHMIR_T_MCPB_WindingTempThrs)) ||
          (rtb_TmpSignalConversionAtVeINVR_T_MtrA_I >
           KeHMIR_T_MCPA_InvrtrTempThrs)) ||
         (rtb_TmpSignalConversionAtVeINVR_T_MtrB_I >
          KeHMIR_T_MCPB_InvrtrTempThrs));

    /* Switch: '<S896>/Switch2' incorporates:
     *  Switch: '<S896>/Switch1'
     *  UnitDelay: '<S915>/Unit Delay'
     */
    if (HMIR_ac_DW.UnitDelay_DSTATE_mn)
    {
        /* Switch: '<S896>/Switch2' incorporates:
         *  Constant: '<S912>/Constant'
         */
        HMIR_ac_B.Switch2 = CeHMIR_e_level6;
    }
    else if (VeHMIC_b_CondTrue_MtrTemp_IgbtTemp)
    {
        /* Switch: '<S896>/Switch1' incorporates:
         *  Constant: '<S914>/Constant'
         *  Switch: '<S896>/Switch2'
         */
        HMIR_ac_B.Switch2 = CeHMIR_e_level1;
    }
    else
    {
        /* Switch: '<S896>/Switch2' incorporates:
         *  Constant: '<S913>/Constant'
         *  Switch: '<S896>/Switch1'
         */
        HMIR_ac_B.Switch2 = CeHMIR_e_Not_Available;
    }

    /* End of Switch: '<S896>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S894>/Hysteresis' */
    /* Switch: '<S901>/Switch1' incorporates:
     *  Constant: '<S901>/Constant Value'
     *  Constant: '<S902>/Calib'
     *  Constant: '<S903>/Calib'
     *  RelationalOperator: '<S901>/Greater  Than'
     *  RelationalOperator: '<S901>/Greater  Than1'
     *  Switch: '<S901>/Switch2'
     *  UnitDelay: '<S901>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > KeHMIR_Pct_SocTelltale2)
    {
        HMIR_ac_DW.UnitDelay_DSTATE_af = true;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B < KeHMIR_Pct_SocTelltale1)
        {
            /* Switch: '<S901>/Switch2' incorporates:
             *  Constant: '<S901>/Constant Value1'
             *  UnitDelay: '<S901>/Unit Delay'
             */
            HMIR_ac_DW.UnitDelay_DSTATE_af = false;
        }
    }

    /* End of Switch: '<S901>/Switch1' */
    /* End of Outputs for SubSystem: '<S894>/Hysteresis' */

    /* Logic: '<S894>/OR8' incorporates:
     *  UnitDelay: '<S901>/Unit Delay'
     */
    HMIR_ac_B.OR8 = !HMIR_ac_DW.UnitDelay_DSTATE_af;

    /* End of Outputs for SubSystem: '<S8>/HMIC_1000ms_Disp' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S8>/VeINVR_T_MtrA_Temp' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */

    /* Inport: '<Root>/VeEBMR_e_eBoostWarning' */
    (void)Rte_Read_VeEBMR_e_eBoostWarning_Value(&tmpRead_3);

    /* Inport: '<Root>/VeEBMR_e_eBoostStatus' */
    (void)Rte_Read_VeEBMR_e_eBoostStatus_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/HMIR_SlowTEF'
     */
    /* SignalConversion generated from: '<S8>/VeHMIR_b_MtrA_IvtrOverTempWarn' incorporates:
     *  SignalConversion generated from: '<S8>/VeHMIR_b_MtrA_OverTempWarn'
     *  SignalConversion generated from: '<S8>/VeHMIR_b_MtrB_IvtrOverTempWarn'
     *  SignalConversion generated from: '<S8>/VeHMIR_b_MtrB_OverTempWarn'
     *  SignalConversion generated from: '<S8>/VeHMIR_b_VDCM_LowSocTelltale'
     */
#if Rte_SysCon_Variant_HMIR_5

    /* Outport: '<Root>/VeHMIR_b_MtrA_IvtrOverTempWarn' */
    (void)Rte_Write_VeHMIR_b_MtrA_IvtrOverTempWarn_Value(HMIR_ac_B.Comparison1);

    /* Outport: '<Root>/VeHMIR_b_MtrA_OverTempWarn' */
    (void)Rte_Write_VeHMIR_b_MtrA_OverTempWarn_Value(HMIR_ac_B.Comparison2);

    /* Outport: '<Root>/VeHMIR_b_MtrB_IvtrOverTempWarn' */
    (void)Rte_Write_VeHMIR_b_MtrB_IvtrOverTempWarn_Value(HMIR_ac_B.Comparison3);

    /* Outport: '<Root>/VeHMIR_b_MtrB_OverTempWarn' */
    (void)Rte_Write_VeHMIR_b_MtrB_OverTempWarn_Value(HMIR_ac_B.Comparison4);

    /* Outport: '<Root>/VeHMIR_b_VDCM_LowSocTelltale' */
    (void)Rte_Write_VeHMIR_b_VDCM_LowSocTelltale_Value(HMIR_ac_B.OR8);

#endif

    /* End of SignalConversion generated from: '<S8>/VeHMIR_b_MtrA_IvtrOverTempWarn' */

    /* Outport: '<Root>/VeHMIR_e_LimitMaxPower_Sel' incorporates:
     *  Merge: '<Root>/Merge_4'
     *  SignalConversion generated from: '<S8>/VeHMIR_e_LimitMaxPower_Sel'
     *  SignalConversion generated from: '<S8>/VeHMIR_e_LimitMaxPower_Sel_read'
     */
    (void)Rte_Write_VeHMIR_e_LimitMaxPower_Sel_Value
        (Rte_IrvRead_HMIR_SlowTEF_LimitMaxPower_Sel_write_IRV());

    /* SignalConversion generated from: '<S8>/VeHMIR_e_VDCM_PopUpChrgPrtMis' incorporates:
     *  SignalConversion generated from: '<S8>/VeHMIR_e_VDCM_PopUpMsgOvrrv'
     */
#if Rte_SysCon_Variant_HMIR_5

    /* Outport: '<Root>/VeHMIR_e_VDCM_PopUpChrgPrtMis' incorporates:
     *  Merge: '<S895>/Merge'
     */
    (void)Rte_Write_VeHMIR_e_VDCM_PopUpChrgPrtMis_Value(HMIR_ac_B.Merge);

    /* Outport: '<Root>/VeHMIR_e_VDCM_PopUpMsgOvrrv' incorporates:
     *  Switch: '<S896>/Switch2'
     */
    (void)Rte_Write_VeHMIR_e_VDCM_PopUpMsgOvrrv_Value(HMIR_ac_B.Switch2);

#endif

    /* End of SignalConversion generated from: '<S8>/VeHMIR_e_VDCM_PopUpChrgPrtMis' */

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/HMIO_1000msec_Outputs'
     */
    /* Outport: '<Root>/VeHMIR_e_eBoost_Sts' incorporates:
     *  Constant: '<S925>/Calib'
     *  DataTypeConversion: '<S891>/Data Type Conversion'
     *  DataTypeConversion: '<S923>/DataTypeConversion'
     *  Inport: '<Root>/VeEBMR_e_eBoostStatus'
     *  Selector: '<S891>/Selector'
     *  SignalConversion generated from: '<S8>/VeHMIR_e_eBoost_Sts'
     */
    (void)Rte_Write_VeHMIR_e_eBoost_Sts_Value((TeEBMR_e_eBoostStatus)
        KaHMIR_e_eBoostStsRemap[(tmpRead_2)]);

    /* Outport: '<Root>/VeHMIR_e_eBoost_Warn' incorporates:
     *  Constant: '<S926>/Calib'
     *  DataTypeConversion: '<S891>/Data Type Conversion1'
     *  DataTypeConversion: '<S922>/DataTypeConversion'
     *  Inport: '<Root>/VeEBMR_e_eBoostWarning'
     *  Selector: '<S891>/Selector1'
     *  SignalConversion generated from: '<S8>/VeHMIR_e_eBoost_Warn'
     */
    (void)Rte_Write_VeHMIR_e_eBoost_Warn_Value((TeEBMR_e_eBoostWarning)
        KaHMIR_e_eBoostWarnRemap[(tmpRead_3)]);

    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/* Output function */
FUNC(void, HMIR_CODE) FsftHMIR_b_ServiceHybSys(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftHMIR_b_ServiceHybSys' */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S1>/FsftHMIR_b_ServiceHybSysChrt'
     *  SignalConversion generated from: '<S1>/VeENGR_b_CondOkForCylDeac_write'
     */
    /* Gateway: FsftHMIR_b_ServiceHybSys/FsftHMIR_b_ServiceHybSysChrt */
    /* During: FsftHMIR_b_ServiceHybSys/FsftHMIR_b_ServiceHybSysChrt */
    /* Entry Internal: FsftHMIR_b_ServiceHybSys/FsftHMIR_b_ServiceHybSysChrt */
    /* Transition: '<S16>:2' */
    Rte_IrvWrite_FsftHMIR_b_ServiceHybSys_VeENGR_b_CondOkForCylDeac_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftHMIR_b_ServiceHybSys' */
}

/* Output function */
FUNC(void, HMIR_CODE) FsftHMIR_e_LimitMaxPower_Sel(void)
{
    /* local block i/o variables */
    boolean rtb_LeHMIR_b_LimitMaxPower_SelFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/FsftHMIR_e_LimitMaxPower_Sel' */
    /* Chart: '<S2>/FsftHMIR_e_LimitMaxPower_SelChrt' */
    /* Gateway: FsftHMIR_e_LimitMaxPower_Sel/FsftHMIR_e_LimitMaxPower_SelChrt */
    /* During: FsftHMIR_e_LimitMaxPower_Sel/FsftHMIR_e_LimitMaxPower_SelChrt */
    /* Entry Internal: FsftHMIR_e_LimitMaxPower_Sel/FsftHMIR_e_LimitMaxPower_SelChrt */
    /* Transition: '<S17>:2' */
    rtb_LeHMIR_b_LimitMaxPower_SelFA_out = true;

    /* End of Outputs for SubSystem: '<Root>/FsftHMIR_e_LimitMaxPower_Sel' */
}

/* Output function */
#if Rte_SysCon_Variant_HMIR_5

FUNC(void, HMIR_CODE) PokeHMIR_b_FrontWiperMoveSts(VAR(boolean, AUTOMATIC)
    LeHMIR_b_FrontWiperMoveSts)
{

#if !Rte_SysCon_Variant_HMIR_5

    UNUSED_PARAMETER(LeHMIR_b_FrontWiperMoveSts);

#endif

#if Rte_SysCon_Variant_HMIR_5

    /* Outputs for Function Call SubSystem: '<Root>/PokeHMIR_b_FrontWiperMoveSts' */
    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S9>/LeHMIR_b_FrontWiperMoveSts'
     *  SignalConversion generated from: '<S9>/VeHMIR_b_FrontWiperMoveSts_write'
     */
    /* Gateway: PokeHMIR_b_FrontWiperMoveSts/PokeHMIR_b_FrontWiperMoveStsChrt */
    /* During: PokeHMIR_b_FrontWiperMoveSts/PokeHMIR_b_FrontWiperMoveStsChrt */
    /* Entry Internal: PokeHMIR_b_FrontWiperMoveSts/PokeHMIR_b_FrontWiperMoveStsChrt */
    /* Transition: '<S927>:2' */
    Rte_IrvWrite_PokeHMIR_b_FrontWiperMoveSts_FrontWiperMoveSts_write_IRV
        (LeHMIR_b_FrontWiperMoveSts);

    /* End of Outputs for SubSystem: '<Root>/PokeHMIR_b_FrontWiperMoveSts' */
#endif

}

#endif

/* Output function */
FUNC(void, HMIR_CODE) PokeHMIR_b_MCPA_Service_Lamp_Request(VAR(boolean,
    AUTOMATIC) LeHMIR_b_MCPA_Service_Lamp_Request)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeHMIR_b_MCPA_Service_Lamp_Request' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S10>/LeHMIR_b_MCPA_Service_Lamp_Request'
     *  SignalConversion generated from: '<S10>/VeHMIR_b_MCPA_Service_Lamp_Request_write'
     */
    /* Gateway: PokeHMIR_b_MCPA_Service_Lamp_Request/PokeHMIR_b_MCPA_Service_Lamp_RequestChrt */
    /* During: PokeHMIR_b_MCPA_Service_Lamp_Request/PokeHMIR_b_MCPA_Service_Lamp_RequestChrt */
    /* Entry Internal: PokeHMIR_b_MCPA_Service_Lamp_Request/PokeHMIR_b_MCPA_Service_Lamp_RequestChrt */
    /* Transition: '<S928>:2' */
    Rte_IrvWrite_PokeHMIR_b_MCPA_Service_Lamp_Request_MCPA_SvsLampRequest_write_IRV
        (LeHMIR_b_MCPA_Service_Lamp_Request);

    /* End of Outputs for SubSystem: '<Root>/PokeHMIR_b_MCPA_Service_Lamp_Request' */
}

/* Output function */
FUNC(void, HMIR_CODE) PokeHMIR_b_MCPB_Service_Lamp_Request(VAR(boolean,
    AUTOMATIC) LeHMIR_b_MCPB_Service_Lamp_Request)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeHMIR_b_MCPB_Service_Lamp_Request' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S11>/LeHMIR_b_MCPB_Service_Lamp_Request'
     *  SignalConversion generated from: '<S11>/VeHMIR_b_MCPB_Service_Lamp_Request_write'
     */
    /* Gateway: PokeHMIR_b_MCPB_Service_Lamp_Request/PokeHMIR_b_MCPB_Service_Lamp_RequestChrt */
    /* During: PokeHMIR_b_MCPB_Service_Lamp_Request/PokeHMIR_b_MCPB_Service_Lamp_RequestChrt */
    /* Entry Internal: PokeHMIR_b_MCPB_Service_Lamp_Request/PokeHMIR_b_MCPB_Service_Lamp_RequestChrt */
    /* Transition: '<S929>:2' */
    Rte_IrvWrite_PokeHMIR_b_MCPB_Service_Lamp_Request_MCPB_SvsLampRequest_write_IRV
        (LeHMIR_b_MCPB_Service_Lamp_Request);

    /* End of Outputs for SubSystem: '<Root>/PokeHMIR_b_MCPB_Service_Lamp_Request' */
}

/* Output function */
FUNC(void, HMIR_CODE) PokeHMIR_b_MCPC_Service_Lamp_Request(VAR(boolean,
    AUTOMATIC) LeHMIR_b_MCPC_Service_Lamp_Request)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeHMIR_b_MCPC_Service_Lamp_Request' */
    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S12>/LeHMIR_b_MCPC_Service_Lamp_Request'
     *  SignalConversion generated from: '<S12>/VeHMIR_b_MCPC_Service_Lamp_Request_write'
     */
    /* Gateway: PokeHMIR_b_MCPC_Service_Lamp_Request/PokeHMIR_b_MCPC_Service_Lamp_RequestChrt */
    /* During: PokeHMIR_b_MCPC_Service_Lamp_Request/PokeHMIR_b_MCPC_Service_Lamp_RequestChrt */
    /* Entry Internal: PokeHMIR_b_MCPC_Service_Lamp_Request/PokeHMIR_b_MCPC_Service_Lamp_RequestChrt */
    /* Transition: '<S930>:2' */
    Rte_IrvWrite_PokeHMIR_b_MCPC_Service_Lamp_Request_MCPC_SvsLampRequest_write_IRV
        (LeHMIR_b_MCPC_Service_Lamp_Request);

    /* End of Outputs for SubSystem: '<Root>/PokeHMIR_b_MCPC_Service_Lamp_Request' */
}

/* Output function */
FUNC(void, HMIR_CODE) PokeHMIR_b_P1_MIL_Request(VAR(boolean, AUTOMATIC)
    LeHMIR_b_P1_MIL_Request)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeHMIR_b_P1_MIL_Request' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S13>/LeHMIR_b_P1_MIL_Request'
     *  SignalConversion generated from: '<S13>/VeHMIR_b_P1_MIL_Request_write'
     */
    /* Gateway: PokeHMIR_b_P1_MIL_Request/PokeHMIR_b_P1_MIL_RequestChrt */
    /* During: PokeHMIR_b_P1_MIL_Request/PokeHMIR_b_P1_MIL_RequestChrt */
    /* Entry Internal: PokeHMIR_b_P1_MIL_Request/PokeHMIR_b_P1_MIL_RequestChrt */
    /* Transition: '<S931>:2' */
    Rte_IrvWrite_PokeHMIR_b_P1_MIL_Request_P1_MIL_Request_write_IRV
        (LeHMIR_b_P1_MIL_Request);

    /* End of Outputs for SubSystem: '<Root>/PokeHMIR_b_P1_MIL_Request' */
}

/* Output function */
FUNC(void, HMIR_CODE) PokeHMIR_b_ServiceHybSys(VAR(boolean, AUTOMATIC)
    LeHMIR_b_ServiceHybSys)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeHMIR_b_ServiceHybSys' */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S14>/LeHMIR_b_ServiceHybSys'
     *  SignalConversion generated from: '<S14>/VeHMIR_b_ServiceHybSys_write'
     */
    /* Gateway: PokeHMIR_b_ServiceHybSys/PokeHMIR_b_ServiceHybSysChrt */
    /* During: PokeHMIR_b_ServiceHybSys/PokeHMIR_b_ServiceHybSysChrt */
    /* Entry Internal: PokeHMIR_b_ServiceHybSys/PokeHMIR_b_ServiceHybSysChrt */
    /* Transition: '<S932>:2' */
    Rte_IrvWrite_PokeHMIR_b_ServiceHybSys_VeENGR_b_CondOkForCylDeac_write_IRV
        (LeHMIR_b_ServiceHybSys);

    /* End of Outputs for SubSystem: '<Root>/PokeHMIR_b_ServiceHybSys' */
}

/* Output function */
FUNC(void, HMIR_CODE) PokeHMIR_e_LimitMaxPower_Sel(VAR(TeHMIR_e_LimitMaxPowerSel,
    AUTOMATIC) LeHMIR_e_LimitMaxPower_Sel, VAR(boolean, AUTOMATIC)
    LeHMIR_b_LimitMaxPower_SelFA)
{
    /* local block i/o variables */
    boolean rtb_LeHMIR_b_LimitMaxPower_SelFA_out_n;
    TeHMIR_e_LimitMaxPowerSel rtb_LeHMIR_e_LimitMaxPower_Sel_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeHMIR_e_LimitMaxPower_Sel' */
    /* Chart: '<S15>/PokeHMIR_e_LimitMaxPower_SelChrt' incorporates:
     *  SignalConversion generated from: '<S15>/LeHMIR_b_LimitMaxPower_SelFA'
     *  SignalConversion generated from: '<S15>/LeHMIR_e_LimitMaxPower_Sel'
     */
    /* Gateway: PokeHMIR_e_LimitMaxPower_Sel/PokeHMIR_e_LimitMaxPower_SelChrt */
    /* During: PokeHMIR_e_LimitMaxPower_Sel/PokeHMIR_e_LimitMaxPower_SelChrt */
    /* Entry Internal: PokeHMIR_e_LimitMaxPower_Sel/PokeHMIR_e_LimitMaxPower_SelChrt */
    /* Transition: '<S933>:2' */
    if (!LeHMIR_b_LimitMaxPower_SelFA)
    {
        /* Transition: '<S933>:3' */
        /* Transition: '<S933>:15' */
        rtb_LeHMIR_e_LimitMaxPower_Sel_out = LeHMIR_e_LimitMaxPower_Sel;
        rtb_LeHMIR_b_LimitMaxPower_SelFA_out_n = false;

        /* Transition: '<S933>:18' */
    }
    else
    {
        /* Transition: '<S933>:4' */
        rtb_LeHMIR_e_LimitMaxPower_Sel_out = CeHMIR_e_Not_Active;
        rtb_LeHMIR_b_LimitMaxPower_SelFA_out_n = true;
    }

    /* End of Chart: '<S15>/PokeHMIR_e_LimitMaxPower_SelChrt' */

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S15>/VeHMIR_e_LimitMaxPower_Sel_write'
     * */
    Rte_IrvWrite_PokeHMIR_e_LimitMaxPower_Sel_LimitMaxPower_Sel_write_IRV
        (rtb_LeHMIR_e_LimitMaxPower_Sel_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHMIR_e_LimitMaxPower_Sel' */
}

/* Output function */
FUNC(void, HMIR_CODE) HMIR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/HMIR_PwrOff'
     */
    /* Outport: '<Root>/EeHMIR_e_HEV_LMP_RQ_PM_Out' incorporates:
     *  DataStoreRead: '<S6>/EeHMIR_e_HEV_LMP_RQ'
     */
    (void)Rte_Write_EeHMIR_e_HEV_LMP_RQ_EeHMIR_e_HEV_LMP_RQ(EeHMIR_e_HEV_LMP_RQ);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, HMIR_CODE) HMIR_PwrOn(void)
{
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a;
    boolean rtb_Comparison1_p;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HMIR_PwrOn'
     */
    /* S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
     *  SubSystem: '<S7>/DSM_Init'
     */
    /* DataStoreWrite: '<S870>/EeHMIR_e_HEV_LMP_RQ' incorporates:
     *  Inport: '<Root>/EeHMIR_e_HEV_LMP_RQ_PM_In'
     */
    (void)Rte_Read_EeHMIR_e_HEV_LMP_RQ_Rx_EeHMIR_e_HEV_LMP_RQ
        ((&(EeHMIR_e_HEV_LMP_RQ)));

    /* End of Outputs for S-Function (fcgen): '<S7>/FcnCallGen' */

    /* SignalConversion generated from: '<S7>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a);

    /* S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
     *  SubSystem: '<S7>/HMIC_Init_Cntrlr_Disp'
     */
    /* RelationalOperator: '<S876>/Comparison1' incorporates:
     *  Constant: '<S879>/Calib'
     */
    rtb_Comparison1_p = (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a >
                         KeHMIR_Pct_CSUpperThreshold);

    /* Logic: '<S876>/Logical2' */
    VeHMIC_b_InitSOCIsLow = !rtb_Comparison1_p;

    /* S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
     *  SubSystem: '<S7>/HMIO_Init_Outputs'
     */
    /* SignalConversion generated from: '<S872>/ShifterPOS_Init' incorporates:
     *  Constant: '<S882>/Constant'
     */
    HMIR_ac_B.OutportBufferForShifterPOS_Init = HMIR_ac_ConstB.Constant;

    /* DataStoreRead: '<S872>/Data Store Read1' incorporates:
     *  SignalConversion generated from: '<S872>/VariantSource'
     */
#if Rte_SysCon_Variant_HMIR_2

    /* VariantMerge generated from: '<S872>/VariantSource' */
    HMIR_ac_B.VariantMerge_For_Variant_Source_VariantS = EeHMIR_e_HEV_LMP_RQ;

#else

    /* VariantMerge generated from: '<S872>/VariantSource' incorporates:
     *  Constant: '<S883>/Constant'
     *  SignalConversion generated from: '<S872>/VariantSource'
     */
    HMIR_ac_B.VariantMerge_For_Variant_Source_VariantS = CeHMIR_e_HEV_LMP_OFF;

#endif

    /* End of DataStoreRead: '<S872>/Data Store Read1' */

    /* S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
     *  SubSystem: '<S7>/Init_HMII_Input'
     */
    /* SignalConversion generated from: '<S874>/ServiceHybSys_init' incorporates:
     *  Constant: '<S885>/Calib'
     */
    HMIR_ac_B.OutportBufferForServiceHybSys_init = KeHMIR_b_ServiceHybSys_init;

    /* SignalConversion generated from: '<S874>/MCPA_SvsLampRequest' */
    HMIR_ac_B.OutportBufferForMCPA_SvsLampRequest =
        HMIR_ac_ConstB.FALSEConstant15;

    /* SignalConversion generated from: '<S874>/MCPB_SvsLampRequest' */
    HMIR_ac_B.OutportBufferForMCPB_SvsLampRequest =
        HMIR_ac_ConstB.FALSEConstant1;

    /* SignalConversion generated from: '<S874>/MCPC_SvsLampRequest' */
    HMIR_ac_B.OutportBufferForMCPC_SvsLampRequest =
        HMIR_ac_ConstB.FALSEConstant2;

    /* SignalConversion generated from: '<S874>/P1_MIL_Request' */
    HMIR_ac_B.OutportBufferForP1_MIL_Request = HMIR_ac_ConstB.FALSEConstant3;

    /* SignalConversion generated from: '<S874>/LimitMaxPower_Sel' incorporates:
     *  Constant: '<S884>/Constant'
     */
    HMIR_ac_B.OutportBufferForLimitMaxPower_Sel = HMIR_ac_ConstB.Constant_pl;

    /* SignalConversion generated from: '<S7>/FrontWiperMoveSts_write' */
#if Rte_SysCon_Variant_HMIR_5

    /* Outputs for Function Call SubSystem: '<S7>/Init_HMII_IRV_M182' */
    /* SignalConversion generated from: '<S873>/FrontWiperMoveSts' */
    HMIR_ac_B.OutportBufferForFrontWiperMoveSts = HMIR_ac_ConstB.FALSEConstant;

    /* End of Outputs for SubSystem: '<S7>/Init_HMII_IRV_M182' */
    /* End of Outputs for S-Function (fcgen): '<S7>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S7>/FrontWiperMoveSts_write' */

    /* S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
     *  SubSystem: '<S7>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S875>/VeHMIR_b_HEV_EVT_MD_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_HEV_EVT_MD_Out_ = HMIR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_HVBatSOCV_HCP_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_e_HVBatSOCV_HCP_O = HMIR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg3_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg3_Out_ = HMIR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_TransWarn_Out_Init' incorporates:
     *  Constant: '<S875>/Const4'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_TransWarn_Out_I = HMIR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_TransWarn2_Out_Init' incorporates:
     *  Constant: '<S875>/Const5'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_TransWarn2_Out_ = HMIR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg2_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg2_Out_ = HMIR_ac_ConstB.Const6;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg1_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg1_Out_ = HMIR_ac_ConstB.Const7;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg4_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg4_Out_ = HMIR_ac_ConstB.Const8;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg5_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg5_Out_ = HMIR_ac_ConstB.Const9;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg6_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg6_Out_ = HMIR_ac_ConstB.Const10;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg7_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg7_Out_ = HMIR_ac_ConstB.Const11;

    /* SignalConversion generated from: '<S875>/VeHMIR_P_HVACPwrUsageDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_P_HVACPwrUsageDis = HMIR_ac_ConstB.Const12;

    /* SignalConversion generated from: '<S875>/VeHMIR_P_MtrPwrUsageDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_P_MtrPwrUsageDisp = HMIR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_MtrPwrUsageDispV_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_MtrPwrUsageDisp = HMIR_ac_ConstB.Const14;

    /* SignalConversion generated from: '<S875>/VeHMIR_P_EngPwrUsageDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_P_EngPwrUsageDisp = HMIR_ac_ConstB.Const15;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_EngPwrUsageDispV_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_EngPwrUsageDisp = HMIR_ac_ConstB.Const16;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_HVACPwrUsageDispV_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_HVACPwrUsageDis = HMIR_ac_ConstB.Const17;

    /* SignalConversion generated from: '<S875>/VeHMIR_P_BatPwrUsageDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_P_BatPwrUsageDisp = HMIR_ac_ConstB.Const18;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_BatPwrUsageDispV_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_BatPwrUsageDisp = HMIR_ac_ConstB.Const19;

    /* SignalConversion generated from: '<S875>/VeHMIR_Pct_OutputPwrDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_Pct_OutputPwrDisp = HMIR_ac_ConstB.Const20;

    /* SignalConversion generated from: '<S875>/VeHMIR_Pct_CoachDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_Pct_CoachDisp_Out = HMIR_ac_ConstB.Const21;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_OutputPwrDispV_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_OutputPwrDispV_ = HMIR_ac_ConstB.Const22;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_CoachDispV_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_CoachDispV_Out_ = HMIR_ac_ConstB.Const23;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_DriveReady_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_DriveReady_Out_ = HMIR_ac_ConstB.Const24;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_ShftProg_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_e_ShftProg_Out_In = HMIR_ac_ConstB.Const25;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg8_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg8_Out_ = HMIR_ac_ConstB.Const26;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_ShifterPOS_K8_Out_Init' incorporates:
     *  Constant: '<S875>/Const27'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_ShifterPOS_K8_O = HMIR_ac_ConstB.Const27;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_ShifterInPark_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_ShifterInPark_O = HMIR_ac_ConstB.Const28;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_DriveMdstat_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_e_DriveMdstat_Out = HMIR_ac_ConstB.Const29;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_DriveMdstat_PopUpRqst_Out_Init' incorporates:
     *  Constant: '<S875>/Const30'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_DriveMdstat_Pop = HMIR_ac_ConstB.Const30;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg9_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg9_Out_ = HMIR_ac_ConstB.Const31;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg10_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg10_Out = HMIR_ac_ConstB.Const32;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_GSI_Out_Init' incorporates:
     *  Constant: '<S875>/Const33'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_GSI_Out_Init = HMIR_ac_ConstB.Const33;

    /* SignalConversion generated from: '<S875>/VeHMIR_P_MtrAPwrUsageDispV_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_P_MtrAPwrUsageD_m = HMIR_ac_ConstB.Const34;

    /* SignalConversion generated from: '<S875>/VeHMIR_P_MtrBPwrUsageDispV_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_P_MtrBPwrUsageD_a = HMIR_ac_ConstB.Const35;

    /* SignalConversion generated from: '<S875>/VeHMIR_P_MtrAPwrUsageDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_P_MtrAPwrUsageDis = HMIR_ac_ConstB.Const36;

    /* SignalConversion generated from: '<S875>/VeHMIR_P_MtrBPwrUsageDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_P_MtrBPwrUsageDis = HMIR_ac_ConstB.Const37;

    /* SignalConversion generated from: '<S875>/VeHMIR_Pct_EstSOCDisplay_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_Pct_EstSOCDisplay = HMIR_ac_ConstB.Const38;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg13_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg13_Out = HMIR_ac_ConstB.Const39;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_P1fFailedUseBumpStartHMI_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_P1fFailedUseBum = HMIR_ac_ConstB.Const40;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg11_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg11_Out = HMIR_ac_ConstB.Const41;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_MiL_OnRq_BPCM_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_MiL_OnRq_BPCM_O = HMIR_ac_ConstB.Const42;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_ThrmlRnAway_Lmp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_ThrmlRnAway_Lmp = HMIR_ac_ConstB.Const43;

    /* SignalConversion generated from: '<S875>/VeHMIR_P_RegenPwrDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_P_RegenPwrDisp_Ou = HMIR_ac_ConstB.Const44;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_RegenPwrDispV_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_RegenPwrDispV_O = HMIR_ac_ConstB.Const45;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_RollWarn_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_RollWarn_Out_In = HMIR_ac_ConstB.Const46;

    /* SignalConversion generated from: '<S875>/VeHMIR_T_HVBattTempDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_T_HVBattTempDisp_ = HMIR_ac_ConstB.Const47;

    /* SignalConversion generated from: '<S875>/VeHMIR_T_MaxCmfrtZnHVBattDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_T_MaxCmfrtZnHVBat = HMIR_ac_ConstB.Const48;

    /* SignalConversion generated from: '<S875>/VeHMIR_T_MinCmfrtZnHVBattDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_T_MinCmfrtZnHVBat = HMIR_ac_ConstB.Const49;

    /* SignalConversion generated from: '<S875>/VeHMIR_T_MaxDrtngZnHVBattDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_T_MaxDrtngZnHVBat = HMIR_ac_ConstB.Const50;

    /* SignalConversion generated from: '<S875>/VeHMIR_T_MinDrtngZnHVBattDisp_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_T_MinDrtngZnHVBat = HMIR_ac_ConstB.Const51;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_VDCM_PopUpChrgPrtMis_Out_Init' incorporates:
     *  Constant: '<S875>/Const52'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_VDCM_PopUpChrgP = HMIR_ac_ConstB.Const52;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_VDCM_PopUpMsgOvrrv_Out_Init' incorporates:
     *  Constant: '<S875>/Const53'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_VDCM_PopUpMsgOv = HMIR_ac_ConstB.Const53;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_VDCM_LowSocTelltale_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_VDCM_LowSocTell = HMIR_ac_ConstB.Const54;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_DrvAwayAlt_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_DrvAwayAlt_Out_ = HMIR_ac_ConstB.Const55;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_DrvAwayIn_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_DrvAwayIn_Out_I = HMIR_ac_ConstB.Const56;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg14_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg14_Out = HMIR_ac_ConstB.Const57;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg15_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg15_Out = HMIR_ac_ConstB.Const58;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg16_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg16_Out = HMIR_ac_ConstB.Const59;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_HVBatteryShutOff_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_HVBatteryShutOf = HMIR_ac_ConstB.Const60;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_eBoost_Sts_Out_Init' incorporates:
     *  Constant: '<S875>/Const61'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_eBoost_Sts_Out_ = HMIR_ac_ConstB.Const61;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_eBoost_Warn_Out_Init' incorporates:
     *  Constant: '<S875>/Const62'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_eBoost_Warn_Out = HMIR_ac_ConstB.Const62;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_GreyPowerAct_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_GreyPowerAct_Ou = HMIR_ac_ConstB.Const63;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_LimitMaxPower_Sel_Out_Init' incorporates:
     *  Constant: '<S875>/Const64'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_LimitMaxPower_S = HMIR_ac_ConstB.Const64;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_MtrA_OverTempWarn_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_MtrA_OverTempWa = HMIR_ac_ConstB.Const65;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_MtrB_OverTempWarn_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_MtrB_OverTempWa = HMIR_ac_ConstB.Const66;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_MtrA_IvtrOverTempWarn_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_MtrA_IvtrOverTe = HMIR_ac_ConstB.Const67;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_MtrB_IvtrOverTempWarn_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_MtrB_IvtrOverTe = HMIR_ac_ConstB.Const68;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_DerateRsnOverSpeed_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_DerateRsnOverSp = HMIR_ac_ConstB.Const69;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_DerateRsnOverHeated_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_DerateRsnOverHe = HMIR_ac_ConstB.Const70;

    /* SignalConversion generated from: '<S875>/VeHMIR_v_SugSpeedMax_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_v_SugSpeedMax_Out = HMIR_ac_ConstB.Const71;

    /* SignalConversion generated from: '<S875>/VeHMIR_v_SugSpeedMin_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_v_SugSpeedMin_Out = HMIR_ac_ConstB.Const72;

    /* SignalConversion generated from: '<S875>/VeHMIR_v_SugSpeedThreshold_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_v_SugSpeedThresho = HMIR_ac_ConstB.Const73;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_PrpFault_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_PrpFault_Out_In = HMIR_ac_ConstB.Const74;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_SrvLmpGenFault_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_SrvLmpGenFault_ = HMIR_ac_ConstB.Const75;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_ChrgFault_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_ChrgFault_Out_I = HMIR_ac_ConstB.Const76;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_DriveMdstat_BPCM_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_e_DriveMdstat_BPC = HMIR_ac_ConstB.Const77;

    /* SignalConversion generated from: '<S875>/VeHMIR_b_FCVLowBatteryLowPerf_Out_Init' */
    HMIR_ac_B.OutportBufferForVeHMIR_b_FCVLowBatteryLo = HMIR_ac_ConstB.Const78;

    /* SignalConversion generated from: '<S875>/VeHMIC_e_TransWarn_write' incorporates:
     *  Constant: '<S886>/Constant'
     */
    HMIR_ac_B.OutportBufferForVeHMIC_e_TransWarn_write =
        HMIR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S875>/VeHMIC_e_TerrainHMIRq_OutInit' incorporates:
     *  Constant: '<S887>/Constant'
     */
    HMIR_ac_B.OutportBufferForVeHMIC_e_TerrainHMIRq_Ou =
        HMIR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_TerrainModeDesiredStat_OutInit' incorporates:
     *  Constant: '<S888>/Constant'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_TerrainModeDesi =
        HMIR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S875>/VeHMIR_e_TerrainModeStat_OutInit' incorporates:
     *  Constant: '<S889>/Constant'
     */
    HMIR_ac_B.OutportBufferForVeHMIR_e_TerrainModeStat =
        HMIR_ac_ConstB.Constant_mq;

    /* End of Outputs for S-Function (fcgen): '<S7>/FcnCallGen' */

    /* Outport: '<Root>/VeHMIR_e_ShifterPOS' incorporates:
     *  SignalConversion generated from: '<S7>/ShifterPOS_Init'
     *  SignalConversion generated from: '<S872>/ShifterPOS_Init'
     */
    (void)Rte_Write_VeHMIR_e_ShifterPOS_Value
        (HMIR_ac_B.OutportBufferForShifterPOS_Init);

    /* Outport: '<Root>/VeHMIR_e_TerrainHMIRq' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIC_e_TerrainHMIRq_OutInit'
     *  SignalConversion generated from: '<S875>/VeHMIC_e_TerrainHMIRq_OutInit'
     */
    (void)Rte_Write_VeHMIR_e_TerrainHMIRq_Value
        (HMIR_ac_B.OutportBufferForVeHMIC_e_TerrainHMIRq_Ou);

    /* Outport: '<Root>/VeHMIR_P_BatPwrUsageDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_P_BatPwrUsageDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_P_BatPwrUsageDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_P_BatPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_P_EngPwrUsageDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_P_EngPwrUsageDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_P_EngPwrUsageDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_P_EngPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_P_HVACPwrUsageDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_P_HVACPwrUsageDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_P_HVACPwrUsageDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_P_HVACPwrUsageDis);

    /* Outport: '<Root>/VeHMIR_P_MtrAPwrUsageDispV' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_P_MtrAPwrUsageDispV_Out_Init'
     */
    (void)Rte_Write_VeHMIR_P_MtrAPwrUsageDispV_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_P_MtrAPwrUsageD_m);

    /* Outport: '<Root>/VeHMIR_P_MtrAPwrUsageDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_P_MtrAPwrUsageDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_P_MtrAPwrUsageDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_P_MtrAPwrUsageDis);

    /* Outport: '<Root>/VeHMIR_P_MtrBPwrUsageDispV' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_P_MtrBPwrUsageDispV_Out_Init'
     */
    (void)Rte_Write_VeHMIR_P_MtrBPwrUsageDispV_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_P_MtrBPwrUsageD_a);

    /* Outport: '<Root>/VeHMIR_P_MtrBPwrUsageDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_P_MtrBPwrUsageDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_P_MtrBPwrUsageDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_P_MtrBPwrUsageDis);

    /* Outport: '<Root>/VeHMIR_P_MtrPwrUsageDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_P_MtrPwrUsageDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_P_MtrPwrUsageDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_P_MtrPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_P_RegenPwrDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_P_RegenPwrDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_P_RegenPwrDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_P_RegenPwrDisp_Ou);

    /* Outport: '<Root>/VeHMIR_Pct_CoachDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_Pct_CoachDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_Pct_CoachDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_Pct_CoachDisp_Out);

    /* Outport: '<Root>/VeHMIR_Pct_EstSOCDisplay' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_Pct_EstSOCDisplay_Out_Init'
     */
    (void)Rte_Write_VeHMIR_Pct_EstSOCDisplay_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_Pct_EstSOCDisplay);

    /* Outport: '<Root>/VeHMIR_Pct_OutputPwrDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_Pct_OutputPwrDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_Pct_OutputPwrDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_Pct_OutputPwrDisp);

    /* S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
     *  SubSystem: '<S7>/HMIC_Init_Cntrlr_Disp'
     */
    /* Switch: '<S878>/Switch1' incorporates:
     *  Constant: '<S876>/Constant Value'
     *  Constant: '<S880>/Calib'
     *  Lookup_n-D: '<S881>/Vector'
     *  Product: '<S876>/Multiplication'
     */
    if (rtb_Comparison1_p)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = look1_iflf_binlca_16a
            (KeHMIR_k_SOCDispFiltrCoef *
             rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a, ((const float32 *)
              &(KxHMIR_Pct_SOCDisp[0])), ((const float32 *)&(KtHMIR_Pct_SOCDisp
               [0])), 10U);
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = 0.0F;
    }

    /* End of Switch: '<S878>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S7>/FcnCallGen' */

    /* Outport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_Pct_SOCDisplay_Init'
     */
    (void)Rte_Write_VeHMIR_Pct_HVBatSOC_HCP_Value
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a);

    /* Outport: '<Root>/VeHMIR_T_HVBattTempDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_T_HVBattTempDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_T_HVBattTempDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_T_HVBattTempDisp_);

    /* Outport: '<Root>/VeHMIR_T_MaxCmfrtZnHVBattDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_T_MaxCmfrtZnHVBattDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_T_MaxCmfrtZnHVBattDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_T_MaxCmfrtZnHVBat);

    /* Outport: '<Root>/VeHMIR_T_MaxDrtngZnHVBattDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_T_MaxDrtngZnHVBattDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_T_MaxDrtngZnHVBattDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_T_MaxDrtngZnHVBat);

    /* Outport: '<Root>/VeHMIR_T_MinCmfrtZnHVBattDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_T_MinCmfrtZnHVBattDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_T_MinCmfrtZnHVBattDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_T_MinCmfrtZnHVBat);

    /* Outport: '<Root>/VeHMIR_T_MinDrtngZnHVBattDisp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_T_MinDrtngZnHVBattDisp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_T_MinDrtngZnHVBattDisp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_T_MinDrtngZnHVBat);

    /* Outport: '<Root>/VeHMIR_b_BatPwrUsageDispV' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_BatPwrUsageDispV_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_BatPwrUsageDispV_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_BatPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_b_ChrgFault' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_ChrgFault_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_ChrgFault_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_ChrgFault_Out_I);

    /* Outport: '<Root>/VeHMIR_b_CoachDispV' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_CoachDispV_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_CoachDispV_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_CoachDispV_Out_);

    /* Outport: '<Root>/VeHMIR_b_DerateRsnOverHeated' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_DerateRsnOverHeated_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_DerateRsnOverHeated_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_DerateRsnOverHe);

    /* Outport: '<Root>/VeHMIR_b_DerateRsnOverSpeed' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_DerateRsnOverSpeed_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_DerateRsnOverSpeed_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_DerateRsnOverSp);

    /* Outport: '<Root>/VeHMIR_b_DriveReady' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_DriveReady_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_DriveReady_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_DriveReady_Out_);

    /* Outport: '<Root>/VeHMIR_b_DrvAwayAlt' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_DrvAwayAlt_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_DrvAwayAlt_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_DrvAwayAlt_Out_);

    /* Outport: '<Root>/VeHMIR_b_DrvAwayIn' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_DrvAwayIn_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_DrvAwayIn_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_DrvAwayIn_Out_I);

    /* Outport: '<Root>/VeHMIR_b_EngPwrUsageDispV' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_EngPwrUsageDispV_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_EngPwrUsageDispV_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_EngPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_b_FCVLowBatteryLowPerf' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_FCVLowBatteryLowPerf_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_FCVLowBatteryLowPerf_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_FCVLowBatteryLo);

    /* Outport: '<Root>/VeHMIR_b_GreyPowerAct' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_GreyPowerAct_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_GreyPowerAct_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_GreyPowerAct_Ou);

    /* Outport: '<Root>/VeHMIR_b_HEV_EVT_MD' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_HEV_EVT_MD_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_HEV_EVT_MD_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_HEV_EVT_MD_Out_);

    /* Outport: '<Root>/VeHMIR_b_HVACPwrUsageDispV' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_HVACPwrUsageDispV_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_HVACPwrUsageDispV_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_HVACPwrUsageDis);

    /* Outport: '<Root>/VeHMIR_b_HVBatteryShutOff' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_HVBatteryShutOff_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_HVBatteryShutOff_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_HVBatteryShutOf);

    /* Outport: '<Root>/VeHMIR_b_MiL_OnRq_BPCM' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_MiL_OnRq_BPCM_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_MiL_OnRq_BPCM_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_MiL_OnRq_BPCM_O);

    /* Outport: '<Root>/VeHMIR_b_MtrA_IvtrOverTempWarn' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_MtrA_IvtrOverTempWarn_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_MtrA_IvtrOverTempWarn_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_MtrA_IvtrOverTe);

    /* Outport: '<Root>/VeHMIR_b_MtrA_OverTempWarn' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_MtrA_OverTempWarn_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_MtrA_OverTempWarn_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_MtrA_OverTempWa);

    /* Outport: '<Root>/VeHMIR_b_MtrB_IvtrOverTempWarn' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_MtrB_IvtrOverTempWarn_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_MtrB_IvtrOverTempWarn_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_MtrB_IvtrOverTe);

    /* Outport: '<Root>/VeHMIR_b_MtrB_OverTempWarn' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_MtrB_OverTempWarn_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_MtrB_OverTempWarn_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_MtrB_OverTempWa);

    /* Outport: '<Root>/VeHMIR_b_MtrPwrUsageDispV' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_MtrPwrUsageDispV_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_MtrPwrUsageDispV_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_MtrPwrUsageDisp);

    /* Outport: '<Root>/VeHMIR_b_OutputPwrDispV' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_OutputPwrDispV_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_OutputPwrDispV_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_OutputPwrDispV_);

    /* Outport: '<Root>/VeHMIR_b_P1fFailedUseBumpStartHMI' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_P1fFailedUseBumpStartHMI_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_P1fFailedUseBumpStartHMI_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_P1fFailedUseBum);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg10' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg10_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg10_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg10_Out);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg11' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg11_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg11_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg11_Out);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg13' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg13_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg13_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg13_Out);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg14' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg14_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg14_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg14_Out);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg15' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg15_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg15_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg15_Out);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg16' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg16_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg16_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg16_Out);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg1' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg1_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg1_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg1_Out_);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg2' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg2_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg2_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg2_Out_);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg3' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg3_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg3_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg3_Out_);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg4' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg4_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg4_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg4_Out_);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg5' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg5_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg5_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg5_Out_);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg6' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg6_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg6_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg6_Out_);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg7' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg7_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg7_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg7_Out_);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg8' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg8_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg8_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg8_Out_);

    /* Outport: '<Root>/VeHMIR_b_Popup_Msg9' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_Popup_Msg9_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_Popup_Msg9_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg9_Out_);

    /* Outport: '<Root>/VeHMIR_b_PrpFault' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_PrpFault_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_PrpFault_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_PrpFault_Out_In);

    /* Outport: '<Root>/VeHMIR_b_RegenPwrDispV' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_RegenPwrDispV_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_RegenPwrDispV_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_RegenPwrDispV_O);

    /* Outport: '<Root>/VeHMIR_b_RollWarn' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_RollWarn_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_RollWarn_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_RollWarn_Out_In);

    /* Outport: '<Root>/VeHMIR_b_ShifterInPark' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_ShifterInPark_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_ShifterInPark_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_ShifterInPark_O);

    /* Outport: '<Root>/VeHMIR_b_SrvLmpGenFault' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_SrvLmpGenFault_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_SrvLmpGenFault_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_SrvLmpGenFault_);

    /* Outport: '<Root>/VeHMIR_b_ThrmlRnAway_Lmp' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_ThrmlRnAway_Lmp_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_ThrmlRnAway_Lmp_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_ThrmlRnAway_Lmp);

    /* Outport: '<Root>/VeHMIR_b_VDCM_LowSocTelltale' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_b_VDCM_LowSocTelltale_Out_Init'
     */
    (void)Rte_Write_VeHMIR_b_VDCM_LowSocTelltale_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_b_VDCM_LowSocTell);

    /* Outport: '<Root>/VeHMIR_e_DriveMdstat_BPCM' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_DriveMdstat_BPCM_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_DriveMdstat_BPCM_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_DriveMdstat_BPC);

    /* Outport: '<Root>/VeHMIR_e_DriveMdstat' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_DriveMdstat_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_DriveMdstat_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_DriveMdstat_Out);

    /* Outport: '<Root>/VeHMIR_e_DriveMdstat_PopUpRqst' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_DriveMdstat_PopUpRqst_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_DriveMdstat_PopUpRqst_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_DriveMdstat_PopUpRqst_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_DriveMdstat_Pop);

    /* Outport: '<Root>/VeHMIR_e_GSI' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_GSI_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_GSI_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_GSI_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_GSI_Out_Init);

    /* Outport: '<Root>/VeHMIR_e_HEV_LMP_RQ' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_HEV_LMP_RQ'
     *  VariantMerge generated from: '<S872>/VariantSource'
     */
    (void)Rte_Write_VeHMIR_e_HEV_LMP_RQ_Value
        (HMIR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VeHMIR_e_HVBatSOCV_HCP' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_HVBatSOCV_HCP_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_HVBatSOCV_HCP_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_HVBatSOCV_HCP_O);

    /* Outport: '<Root>/VeHMIR_e_LimitMaxPower_Sel' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_LimitMaxPower_Sel_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_LimitMaxPower_Sel_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_LimitMaxPower_Sel_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_LimitMaxPower_S);

    /* Outport: '<Root>/VeHMIR_e_ShftProg' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_ShftProg_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_ShftProg_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_ShftProg_Out_In);

    /* Outport: '<Root>/VeHMIR_e_ShifterPOS_K8' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_ShifterPOS_K8_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_ShifterPOS_K8_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_ShifterPOS_K8_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_ShifterPOS_K8_O);

    /* Outport: '<Root>/VeHMIR_e_TerrainModeDesiredStat' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_TerrainModeDesiredStat_OutInit'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_TerrainModeDesiredStat_OutInit'
     */
    (void)Rte_Write_VeHMIR_e_TerrainModeDesiredStat_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_TerrainModeDesi);

    /* Outport: '<Root>/VeHMIR_e_TerrainModeStat' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_TerrainModeStat_OutInit'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_TerrainModeStat_OutInit'
     */
    (void)Rte_Write_VeHMIR_e_TerrainModeStat_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_TerrainModeStat);

    /* Outport: '<Root>/VeHMIR_e_TransWarn2' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_TransWarn2_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_TransWarn2_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_TransWarn2_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_TransWarn2_Out_);

    /* Outport: '<Root>/VeHMIR_e_TransWarn' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_TransWarn_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_TransWarn_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_TransWarn_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_TransWarn_Out_I);

    /* Outport: '<Root>/VeHMIR_e_VDCM_PopUpChrgPrtMis' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_VDCM_PopUpChrgPrtMis_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_VDCM_PopUpChrgPrtMis_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_VDCM_PopUpChrgPrtMis_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_VDCM_PopUpChrgP);

    /* Outport: '<Root>/VeHMIR_e_VDCM_PopUpMsgOvrrv' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_VDCM_PopUpMsgOvrrv_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_VDCM_PopUpMsgOvrrv_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_VDCM_PopUpMsgOvrrv_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_VDCM_PopUpMsgOv);

    /* Outport: '<Root>/VeHMIR_e_eBoost_Sts' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_eBoost_Sts_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_eBoost_Sts_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_eBoost_Sts_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_eBoost_Sts_Out_);

    /* Outport: '<Root>/VeHMIR_e_eBoost_Warn' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_e_eBoost_Warn_Out_Init'
     *  SignalConversion generated from: '<S875>/VeHMIR_e_eBoost_Warn_Out_Init'
     */
    (void)Rte_Write_VeHMIR_e_eBoost_Warn_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_e_eBoost_Warn_Out);

    /* Outport: '<Root>/VeHMIR_v_SugSpeedMax' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_v_SugSpeedMax_Out_Init'
     */
    (void)Rte_Write_VeHMIR_v_SugSpeedMax_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_v_SugSpeedMax_Out);

    /* Outport: '<Root>/VeHMIR_v_SugSpeedMin' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_v_SugSpeedMin_Out_Init'
     */
    (void)Rte_Write_VeHMIR_v_SugSpeedMin_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_v_SugSpeedMin_Out);

    /* Outport: '<Root>/VeHMIR_v_SugSpeedThreshold' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIR_v_SugSpeedThreshold_Out_Init'
     */
    (void)Rte_Write_VeHMIR_v_SugSpeedThreshold_Value
        (HMIR_ac_B.OutportBufferForVeHMIR_v_SugSpeedThresho);

    /* SignalConversion generated from: '<S7>/FrontWiperMoveSts_write' */
#if Rte_SysCon_Variant_HMIR_5

    /* Merge: '<Root>/Merge_7' */
    Rte_IrvWrite_HMIR_PwrOn_FrontWiperMoveSts_write_IRV
        (HMIR_ac_B.OutportBufferForFrontWiperMoveSts);

#endif

    /* End of SignalConversion generated from: '<S7>/FrontWiperMoveSts_write' */

    /* SignalConversion generated from: '<S7>/InitSOCIsLow' */
    Rte_IrvWrite_HMIR_PwrOn_InitSOCIsLow_IRV(VeHMIC_b_InitSOCIsLow);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S7>/LimitMaxPower_Sel_write'
     *  SignalConversion generated from: '<S874>/LimitMaxPower_Sel'
     * */
    Rte_IrvWrite_HMIR_PwrOn_LimitMaxPower_Sel_write_IRV
        (HMIR_ac_B.OutportBufferForLimitMaxPower_Sel);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S7>/MCPA_SvsLampRequest_write'
     * */
    Rte_IrvWrite_HMIR_PwrOn_MCPA_SvsLampRequest_write_IRV
        (HMIR_ac_B.OutportBufferForMCPA_SvsLampRequest);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S7>/MCPB_SvsLampRequest_write'
     * */
    Rte_IrvWrite_HMIR_PwrOn_MCPB_SvsLampRequest_write_IRV
        (HMIR_ac_B.OutportBufferForMCPB_SvsLampRequest);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S7>/MCPC_SvsLampRequest_write'
     * */
    Rte_IrvWrite_HMIR_PwrOn_MCPC_SvsLampRequest_write_IRV
        (HMIR_ac_B.OutportBufferForMCPC_SvsLampRequest);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S7>/P1_MIL_Request_write'
     * */
    Rte_IrvWrite_HMIR_PwrOn_P1_MIL_Request_write_IRV
        (HMIR_ac_B.OutportBufferForP1_MIL_Request);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S7>/ServiceHybSys_init_write'
     * */
    Rte_IrvWrite_HMIR_PwrOn_VeENGR_b_CondOkForCylDeac_write_IRV
        (HMIR_ac_B.OutportBufferForServiceHybSys_init);

    /* Merge: '<Root>/Merge_10_Irv' incorporates:
     *  SignalConversion generated from: '<S7>/ShifterPOS_Init_write'
     *  SignalConversion generated from: '<S872>/ShifterPOS_Init'
     * */
    Rte_IrvWrite_HMIR_PwrOn_VeHMIC_e_ShifterPOS_50ms_write_IRV
        (HMIR_ac_B.OutportBufferForShifterPOS_Init);

    /* Merge: '<Root>/VeHMIC_e_TransWarn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S7>/VeHMIC_e_TransWarn_write'
     *  SignalConversion generated from: '<S875>/VeHMIC_e_TransWarn_write'
     * */
    Rte_IrvWrite_HMIR_PwrOn_VeHMIC_e_TransWarn_write_IRV
        (HMIR_ac_B.OutportBufferForVeHMIC_e_TransWarn_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, HMIR_CODE) HMIR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        HMIR_ac_B.OutportBufferForVeHMIR_e_eBoost_Warn_Out =
            CeEBMR_e_DeactivatedESCOff;
    }

    {
        sint32 i;

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/HMIR_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
         *  SubSystem: '<S7>/HMIO_Init_Outputs'
         */
        /* SystemInitialize for SignalConversion generated from: '<S872>/ShifterPOS_Init' incorporates:
         *  Constant: '<S882>/Constant'
         */
        HMIR_ac_B.OutportBufferForShifterPOS_Init = HMIR_ac_ConstB.Constant;

        /* SystemInitialize for S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
         *  SubSystem: '<S7>/Init_HMII_Input'
         */
        /* SystemInitialize for SignalConversion generated from: '<S874>/ServiceHybSys_init' incorporates:
         *  Constant: '<S885>/Calib'
         */
        HMIR_ac_B.OutportBufferForServiceHybSys_init =
            KeHMIR_b_ServiceHybSys_init;

        /* SystemInitialize for SignalConversion generated from: '<S874>/MCPA_SvsLampRequest' */
        HMIR_ac_B.OutportBufferForMCPA_SvsLampRequest =
            HMIR_ac_ConstB.FALSEConstant15;

        /* SystemInitialize for SignalConversion generated from: '<S874>/MCPB_SvsLampRequest' */
        HMIR_ac_B.OutportBufferForMCPB_SvsLampRequest =
            HMIR_ac_ConstB.FALSEConstant1;

        /* SystemInitialize for SignalConversion generated from: '<S874>/MCPC_SvsLampRequest' */
        HMIR_ac_B.OutportBufferForMCPC_SvsLampRequest =
            HMIR_ac_ConstB.FALSEConstant2;

        /* SystemInitialize for SignalConversion generated from: '<S874>/P1_MIL_Request' */
        HMIR_ac_B.OutportBufferForP1_MIL_Request = HMIR_ac_ConstB.FALSEConstant3;

        /* SystemInitialize for SignalConversion generated from: '<S874>/LimitMaxPower_Sel' incorporates:
         *  Constant: '<S884>/Constant'
         */
        HMIR_ac_B.OutportBufferForLimitMaxPower_Sel = HMIR_ac_ConstB.Constant_pl;

#if Rte_SysCon_Variant_HMIR_5

        /* SystemInitialize for Function Call SubSystem: '<S7>/Init_HMII_IRV_M182' */
        /* SystemInitialize for SignalConversion generated from: '<S873>/FrontWiperMoveSts' */
        HMIR_ac_B.OutportBufferForFrontWiperMoveSts =
            HMIR_ac_ConstB.FALSEConstant;

        /* End of SystemInitialize for SubSystem: '<S7>/Init_HMII_IRV_M182' */
        /* End of SystemInitialize for S-Function (fcgen): '<S7>/FcnCallGen' */
#endif

        /* SystemInitialize for S-Function (fcgen): '<S7>/FcnCallGen' incorporates:
         *  SubSystem: '<S7>/Sub_Out_Init'
         */
        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_HEV_EVT_MD_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_HEV_EVT_MD_Out_ =
            HMIR_ac_ConstB.Const1;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_HVBatSOCV_HCP_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_e_HVBatSOCV_HCP_O =
            HMIR_ac_ConstB.Const2;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg3_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg3_Out_ =
            HMIR_ac_ConstB.Const3;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_TransWarn_Out_Init' incorporates:
         *  Constant: '<S875>/Const4'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_TransWarn_Out_I =
            HMIR_ac_ConstB.Const4;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_TransWarn2_Out_Init' incorporates:
         *  Constant: '<S875>/Const5'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_TransWarn2_Out_ =
            HMIR_ac_ConstB.Const5;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg2_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg2_Out_ =
            HMIR_ac_ConstB.Const6;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg1_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg1_Out_ =
            HMIR_ac_ConstB.Const7;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg4_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg4_Out_ =
            HMIR_ac_ConstB.Const8;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg5_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg5_Out_ =
            HMIR_ac_ConstB.Const9;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg6_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg6_Out_ =
            HMIR_ac_ConstB.Const10;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg7_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg7_Out_ =
            HMIR_ac_ConstB.Const11;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_P_HVACPwrUsageDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_P_HVACPwrUsageDis =
            HMIR_ac_ConstB.Const12;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_P_MtrPwrUsageDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_P_MtrPwrUsageDisp =
            HMIR_ac_ConstB.Const13;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_MtrPwrUsageDispV_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_MtrPwrUsageDisp =
            HMIR_ac_ConstB.Const14;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_P_EngPwrUsageDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_P_EngPwrUsageDisp =
            HMIR_ac_ConstB.Const15;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_EngPwrUsageDispV_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_EngPwrUsageDisp =
            HMIR_ac_ConstB.Const16;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_HVACPwrUsageDispV_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_HVACPwrUsageDis =
            HMIR_ac_ConstB.Const17;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_P_BatPwrUsageDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_P_BatPwrUsageDisp =
            HMIR_ac_ConstB.Const18;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_BatPwrUsageDispV_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_BatPwrUsageDisp =
            HMIR_ac_ConstB.Const19;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_Pct_OutputPwrDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_Pct_OutputPwrDisp =
            HMIR_ac_ConstB.Const20;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_Pct_CoachDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_Pct_CoachDisp_Out =
            HMIR_ac_ConstB.Const21;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_OutputPwrDispV_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_OutputPwrDispV_ =
            HMIR_ac_ConstB.Const22;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_CoachDispV_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_CoachDispV_Out_ =
            HMIR_ac_ConstB.Const23;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_DriveReady_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_DriveReady_Out_ =
            HMIR_ac_ConstB.Const24;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_ShftProg_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_e_ShftProg_Out_In =
            HMIR_ac_ConstB.Const25;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg8_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg8_Out_ =
            HMIR_ac_ConstB.Const26;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_ShifterPOS_K8_Out_Init' incorporates:
         *  Constant: '<S875>/Const27'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_ShifterPOS_K8_O =
            HMIR_ac_ConstB.Const27;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_ShifterInPark_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_ShifterInPark_O =
            HMIR_ac_ConstB.Const28;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_DriveMdstat_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_e_DriveMdstat_Out =
            HMIR_ac_ConstB.Const29;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_DriveMdstat_PopUpRqst_Out_Init' incorporates:
         *  Constant: '<S875>/Const30'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_DriveMdstat_Pop =
            HMIR_ac_ConstB.Const30;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg9_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg9_Out_ =
            HMIR_ac_ConstB.Const31;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg10_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg10_Out =
            HMIR_ac_ConstB.Const32;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_GSI_Out_Init' incorporates:
         *  Constant: '<S875>/Const33'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_GSI_Out_Init = HMIR_ac_ConstB.Const33;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_P_MtrAPwrUsageDispV_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_P_MtrAPwrUsageD_m =
            HMIR_ac_ConstB.Const34;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_P_MtrBPwrUsageDispV_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_P_MtrBPwrUsageD_a =
            HMIR_ac_ConstB.Const35;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_P_MtrAPwrUsageDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_P_MtrAPwrUsageDis =
            HMIR_ac_ConstB.Const36;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_P_MtrBPwrUsageDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_P_MtrBPwrUsageDis =
            HMIR_ac_ConstB.Const37;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_Pct_EstSOCDisplay_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_Pct_EstSOCDisplay =
            HMIR_ac_ConstB.Const38;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg13_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg13_Out =
            HMIR_ac_ConstB.Const39;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_P1fFailedUseBumpStartHMI_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_P1fFailedUseBum =
            HMIR_ac_ConstB.Const40;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg11_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg11_Out =
            HMIR_ac_ConstB.Const41;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_MiL_OnRq_BPCM_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_MiL_OnRq_BPCM_O =
            HMIR_ac_ConstB.Const42;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_ThrmlRnAway_Lmp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_ThrmlRnAway_Lmp =
            HMIR_ac_ConstB.Const43;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_P_RegenPwrDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_P_RegenPwrDisp_Ou =
            HMIR_ac_ConstB.Const44;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_RegenPwrDispV_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_RegenPwrDispV_O =
            HMIR_ac_ConstB.Const45;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_RollWarn_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_RollWarn_Out_In =
            HMIR_ac_ConstB.Const46;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_T_HVBattTempDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_T_HVBattTempDisp_ =
            HMIR_ac_ConstB.Const47;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_T_MaxCmfrtZnHVBattDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_T_MaxCmfrtZnHVBat =
            HMIR_ac_ConstB.Const48;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_T_MinCmfrtZnHVBattDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_T_MinCmfrtZnHVBat =
            HMIR_ac_ConstB.Const49;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_T_MaxDrtngZnHVBattDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_T_MaxDrtngZnHVBat =
            HMIR_ac_ConstB.Const50;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_T_MinDrtngZnHVBattDisp_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_T_MinDrtngZnHVBat =
            HMIR_ac_ConstB.Const51;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_VDCM_PopUpChrgPrtMis_Out_Init' incorporates:
         *  Constant: '<S875>/Const52'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_VDCM_PopUpChrgP =
            HMIR_ac_ConstB.Const52;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_VDCM_PopUpMsgOvrrv_Out_Init' incorporates:
         *  Constant: '<S875>/Const53'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_VDCM_PopUpMsgOv =
            HMIR_ac_ConstB.Const53;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_VDCM_LowSocTelltale_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_VDCM_LowSocTell =
            HMIR_ac_ConstB.Const54;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_DrvAwayAlt_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_DrvAwayAlt_Out_ =
            HMIR_ac_ConstB.Const55;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_DrvAwayIn_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_DrvAwayIn_Out_I =
            HMIR_ac_ConstB.Const56;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg14_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg14_Out =
            HMIR_ac_ConstB.Const57;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg15_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg15_Out =
            HMIR_ac_ConstB.Const58;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_Popup_Msg16_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_Popup_Msg16_Out =
            HMIR_ac_ConstB.Const59;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_HVBatteryShutOff_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_HVBatteryShutOf =
            HMIR_ac_ConstB.Const60;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_eBoost_Sts_Out_Init' incorporates:
         *  Constant: '<S875>/Const61'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_eBoost_Sts_Out_ =
            HMIR_ac_ConstB.Const61;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_eBoost_Warn_Out_Init' incorporates:
         *  Constant: '<S875>/Const62'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_eBoost_Warn_Out =
            HMIR_ac_ConstB.Const62;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_GreyPowerAct_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_GreyPowerAct_Ou =
            HMIR_ac_ConstB.Const63;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_LimitMaxPower_Sel_Out_Init' incorporates:
         *  Constant: '<S875>/Const64'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_LimitMaxPower_S =
            HMIR_ac_ConstB.Const64;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_MtrA_OverTempWarn_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_MtrA_OverTempWa =
            HMIR_ac_ConstB.Const65;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_MtrB_OverTempWarn_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_MtrB_OverTempWa =
            HMIR_ac_ConstB.Const66;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_MtrA_IvtrOverTempWarn_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_MtrA_IvtrOverTe =
            HMIR_ac_ConstB.Const67;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_MtrB_IvtrOverTempWarn_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_MtrB_IvtrOverTe =
            HMIR_ac_ConstB.Const68;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_DerateRsnOverSpeed_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_DerateRsnOverSp =
            HMIR_ac_ConstB.Const69;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_DerateRsnOverHeated_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_DerateRsnOverHe =
            HMIR_ac_ConstB.Const70;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_v_SugSpeedMax_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_v_SugSpeedMax_Out =
            HMIR_ac_ConstB.Const71;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_v_SugSpeedMin_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_v_SugSpeedMin_Out =
            HMIR_ac_ConstB.Const72;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_v_SugSpeedThreshold_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_v_SugSpeedThresho =
            HMIR_ac_ConstB.Const73;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_PrpFault_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_PrpFault_Out_In =
            HMIR_ac_ConstB.Const74;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_SrvLmpGenFault_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_SrvLmpGenFault_ =
            HMIR_ac_ConstB.Const75;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_ChrgFault_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_ChrgFault_Out_I =
            HMIR_ac_ConstB.Const76;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_DriveMdstat_BPCM_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_e_DriveMdstat_BPC =
            HMIR_ac_ConstB.Const77;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_b_FCVLowBatteryLowPerf_Out_Init' */
        HMIR_ac_B.OutportBufferForVeHMIR_b_FCVLowBatteryLo =
            HMIR_ac_ConstB.Const78;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIC_e_TransWarn_write' incorporates:
         *  Constant: '<S886>/Constant'
         */
        HMIR_ac_B.OutportBufferForVeHMIC_e_TransWarn_write =
            HMIR_ac_ConstB.Constant_m;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIC_e_TerrainHMIRq_OutInit' incorporates:
         *  Constant: '<S887>/Constant'
         */
        HMIR_ac_B.OutportBufferForVeHMIC_e_TerrainHMIRq_Ou =
            HMIR_ac_ConstB.Constant_b;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_TerrainModeDesiredStat_OutInit' incorporates:
         *  Constant: '<S888>/Constant'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_TerrainModeDesi =
            HMIR_ac_ConstB.Constant_p;

        /* SystemInitialize for SignalConversion generated from: '<S875>/VeHMIR_e_TerrainModeStat_OutInit' incorporates:
         *  Constant: '<S889>/Constant'
         */
        HMIR_ac_B.OutportBufferForVeHMIR_e_TerrainModeStat =
            HMIR_ac_ConstB.Constant_mq;

        /* End of SystemInitialize for S-Function (fcgen): '<S7>/FcnCallGen' */

        /* SystemInitialize for SignalConversion generated from: '<S7>/InitSOCIsLow' */
        Rte_IrvWrite_HMIR_ac_Init_InitSOCIsLow_IRV(VeHMIC_b_InitSOCIsLow);

        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
         *  SubSystem: '<Root>/HMIR_MedTEF'
         */
        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/HMIC_50ms_Disp'
         */
        /* InitializeConditions for UnitDelay: '<S291>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_dg = 0.0F;

        /* InitializeConditions for UnitDelay: '<S291>/Unit Delay1' */
        HMIR_ac_DW.UnitDelay1_DSTATE_n = 0.0F;

        /* InitializeConditions for UnitDelay: '<S290>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_gk = 0.0F;

        /* InitializeConditions for UnitDelay: '<S290>/Unit Delay1' */
        HMIR_ac_DW.UnitDelay1_DSTATE_i = 0.0F;

        /* InitializeConditions for UnitDelay: '<S187>/Unit Delay1' */
        HMIR_ac_DW.UnitDelay1_DSTATE_c = false;

        /* InitializeConditions for UnitDelay: '<S187>/Unit Delay2' */
        HMIR_ac_DW.UnitDelay2_DSTATE = true;

        /* SystemInitialize for Atomic SubSystem: '<S184>/Multi_Indicators' */
        HMIR_ac_Multi_Indicators_Init();

        /* End of SystemInitialize for SubSystem: '<S184>/Multi_Indicators' */

        /* SystemInitialize for Atomic SubSystem: '<S270>/GradientLimiter' */
        /* SystemInitialize for Atomic SubSystem: '<S292>/EdgeRising' */
        /* InitializeConditions for UnitDelay: '<S295>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_j0 = false;

        /* End of SystemInitialize for SubSystem: '<S292>/EdgeRising' */
        /* End of SystemInitialize for SubSystem: '<S270>/GradientLimiter' */

        /* SystemInitialize for Atomic SubSystem: '<S187>/Digital Lowpass Reset Enabled' */
        /* InitializeConditions for UnitDelay: '<S274>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_mt = 0.0F;

        /* End of SystemInitialize for SubSystem: '<S187>/Digital Lowpass Reset Enabled' */

        /* SystemInitialize for Atomic SubSystem: '<S187>/EdgeRising' */
        /* InitializeConditions for UnitDelay: '<S276>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_n1 = false;

        /* End of SystemInitialize for SubSystem: '<S187>/EdgeRising' */

        /* SystemInitialize for Atomic SubSystem: '<S187>/EdgeRising1' */
        /* InitializeConditions for UnitDelay: '<S277>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_bb = false;

        /* End of SystemInitialize for SubSystem: '<S187>/EdgeRising1' */

        /* SystemInitialize for Atomic SubSystem: '<S187>/Signal Latch Off' */
        /* InitializeConditions for UnitDelay: '<S288>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_fx = true;

        /* End of SystemInitialize for SubSystem: '<S187>/Signal Latch Off' */

        /* SystemInitialize for Atomic SubSystem: '<S187>/Signal Latch On With Reset' */
        /* InitializeConditions for UnitDelay: '<S289>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_gu = false;

        /* End of SystemInitialize for SubSystem: '<S187>/Signal Latch On With Reset' */

        /* SystemInitialize for SignalConversion generated from: '<S184>/SOCV_HCP' */
        HMIR_ac_B.OutportBufferForSOCV_HCP = HMIR_ac_ConstB.VeHMIC_b_HVBatSOCV;

        /* SystemInitialize for Atomic SubSystem: '<S188>/Digital Lowpass Reset Enabled1' */
        /* InitializeConditions for UnitDelay: '<S301>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_jii = 0.0F;

        /* End of SystemInitialize for SubSystem: '<S188>/Digital Lowpass Reset Enabled1' */
        /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_HEV_LMP_RQ' incorporates:
         *  Merge: '<Root>/Merge_9'
         */
        (void)Rte_Write_VeHMIR_e_HEV_LMP_RQ_Value(CeHMIR_e_HEV_LMP_OFF);

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
         *  SubSystem: '<Root>/HMIR_MedTED'
         */
        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/HMIC_25ms_Disp'
         */
        /* InitializeConditions for UnitDelay: '<S155>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_hy = CeHMIR_e_Warn2_None;

        /* InitializeConditions for UnitDelay: '<S156>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_gn = CeHMIR_e_Warn2_None;

        /* InitializeConditions for RelationalOperator: '<S21>/Relational Operator42' incorporates:
         *  UnitDelay: '<S21>/Unit Delay4'
         */
        HMIR_ac_DW.UnitDelay4_DSTATE = CeHMIR_e_No_Request;

        /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
        HMIR_ac_DW.UnitDelay1_DSTATE_gh = CeTMDR_e_NotDefine;

        /* InitializeConditions for UnitDelay: '<S21>/Unit Delay2' */
        HMIR_ac_DW.UnitDelay2_DSTATE_g = CeFWDR_e_ShiftINProg;

        /* InitializeConditions for UnitDelay: '<S21>/Unit Delay3' */
        HMIR_ac_DW.UnitDelay3_DSTATE = CeFWDR_e_ShiftINProg;

        /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_dc = CeTIMR_e_Not_Activated;

        /* SystemInitialize for Atomic SubSystem: '<S155>/Turn On Delay Time' */
        /* InitializeConditions for UnitDelay: '<S163>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_pu = 0.0F;

        /* SystemInitialize for Atomic SubSystem: '<S163>/EdgeRising' */
        /* InitializeConditions for UnitDelay: '<S164>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_mtn = false;

        /* End of SystemInitialize for SubSystem: '<S163>/EdgeRising' */
        /* End of SystemInitialize for SubSystem: '<S155>/Turn On Delay Time' */

        /* SystemInitialize for Atomic SubSystem: '<S156>/Turn On Delay Time' */
        /* InitializeConditions for UnitDelay: '<S170>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_ky = 0.0F;

        /* SystemInitialize for Atomic SubSystem: '<S170>/EdgeRising' */
        /* InitializeConditions for UnitDelay: '<S171>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_el = false;

        /* End of SystemInitialize for SubSystem: '<S170>/EdgeRising' */
        /* End of SystemInitialize for SubSystem: '<S156>/Turn On Delay Time' */

        /* SystemInitialize for SignalConversion generated from: '<S18>/VeHMIC_e_ShftProg' incorporates:
         *  Constant: '<S20>/Calib'
         */
        HMIR_ac_B.VeHMIC_e_ShftProg = KeHMIR_e_ShftProg;

        /* SystemInitialize for Atomic SubSystem: '<S21>/Count Down Reset Enabled' */
        /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_nz = ((uint16)0U);

        /* End of SystemInitialize for SubSystem: '<S21>/Count Down Reset Enabled' */
        /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
         *  SubSystem: '<Root>/HMIR_MedTEH'
         */
        /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
         *  SubSystem: '<S5>/HMIC_100ms_Disp'
         */
        /* SystemInitialize for Atomic SubSystem: '<S365>/HMIC_100ms_Reserve' */
        HMIR_ac_HMIC_100ms_Reserve_Init();

        /* End of SystemInitialize for SubSystem: '<S365>/HMIC_100ms_Reserve' */
        /* End of SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_HEV_EVT_MD' incorporates:
         *  Merge: '<Root>/Merge_Outport_2'
         */
        (void)Rte_Write_VeHMIR_b_HEV_EVT_MD_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_HVBatSOCV_HCP' incorporates:
         *  Merge: '<Root>/Merge_Outport_3'
         */
        (void)Rte_Write_VeHMIR_e_HVBatSOCV_HCP_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg3' incorporates:
         *  Merge: '<Root>/Merge_Outport_4'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg3_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_TransWarn' incorporates:
         *  Merge: '<Root>/Merge_Outport_5'
         */
        (void)Rte_Write_VeHMIR_e_TransWarn_Value(CeHMIR_e_Warn2_None);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_TransWarn2' incorporates:
         *  Merge: '<Root>/Merge_Outport_6'
         */
        (void)Rte_Write_VeHMIR_e_TransWarn2_Value(CeHMIR_e_Warn2_None);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg2' incorporates:
         *  Merge: '<Root>/Merge_Outport_7'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg2_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg1' incorporates:
         *  Merge: '<Root>/Merge_Outport_8'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg1_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg4' incorporates:
         *  Merge: '<Root>/Merge_Outport_9'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg4_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg5' incorporates:
         *  Merge: '<Root>/Merge_Outport_10'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg5_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg6' incorporates:
         *  Merge: '<Root>/Merge_Outport_11'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg6_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg7' incorporates:
         *  Merge: '<Root>/Merge_Outport_12'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg7_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_P_HVACPwrUsageDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_13'
         */
        (void)Rte_Write_VeHMIR_P_HVACPwrUsageDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_P_MtrPwrUsageDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_14'
         */
        (void)Rte_Write_VeHMIR_P_MtrPwrUsageDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_MtrPwrUsageDispV' incorporates:
         *  Merge: '<Root>/Merge_Outport_15'
         */
        (void)Rte_Write_VeHMIR_b_MtrPwrUsageDispV_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_P_EngPwrUsageDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_16'
         */
        (void)Rte_Write_VeHMIR_P_EngPwrUsageDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_EngPwrUsageDispV' incorporates:
         *  Merge: '<Root>/Merge_Outport_17'
         */
        (void)Rte_Write_VeHMIR_b_EngPwrUsageDispV_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_HVACPwrUsageDispV' incorporates:
         *  Merge: '<Root>/Merge_Outport_18'
         */
        (void)Rte_Write_VeHMIR_b_HVACPwrUsageDispV_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_P_BatPwrUsageDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_19'
         */
        (void)Rte_Write_VeHMIR_P_BatPwrUsageDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_BatPwrUsageDispV' incorporates:
         *  Merge: '<Root>/Merge_Outport_20'
         */
        (void)Rte_Write_VeHMIR_b_BatPwrUsageDispV_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_Pct_OutputPwrDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_21'
         */
        (void)Rte_Write_VeHMIR_Pct_OutputPwrDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_Pct_CoachDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_22'
         */
        (void)Rte_Write_VeHMIR_Pct_CoachDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_OutputPwrDispV' incorporates:
         *  Merge: '<Root>/Merge_Outport_23'
         */
        (void)Rte_Write_VeHMIR_b_OutputPwrDispV_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_CoachDispV' incorporates:
         *  Merge: '<Root>/Merge_Outport_24'
         */
        (void)Rte_Write_VeHMIR_b_CoachDispV_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_DriveReady' incorporates:
         *  Merge: '<Root>/Merge_Outport_25'
         */
        (void)Rte_Write_VeHMIR_b_DriveReady_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_ShftProg' incorporates:
         *  Merge: '<Root>/Merge_Outport_26'
         */
        (void)Rte_Write_VeHMIR_e_ShftProg_Value(0);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
         *  Merge: '<Root>/Merge_8'
         */
        (void)Rte_Write_VeHMIR_Pct_HVBatSOC_HCP_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_ShifterPOS' incorporates:
         *  Merge: '<Root>/Merge_10'
         */
        (void)Rte_Write_VeHMIR_e_ShifterPOS_Value(CeHMIR_e_ShifterPosNoSelection);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg8' incorporates:
         *  Merge: '<Root>/Merge_Outport_29'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg8_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_ShifterPOS_K8' incorporates:
         *  Merge: '<Root>/Merge_Outport_30'
         */
        (void)Rte_Write_VeHMIR_e_ShifterPOS_K8_Value
            (CeHMIR_e_ShifterPosNotCoded_CUSW);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_ShifterInPark' incorporates:
         *  Merge: '<Root>/Merge_Outport_31'
         */
        (void)Rte_Write_VeHMIR_b_ShifterInPark_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_DriveMdstat' incorporates:
         *  Merge: '<Root>/Merge_Outport_32'
         */
        (void)Rte_Write_VeHMIR_e_DriveMdstat_Value(0);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_DriveMdstat_PopUpRqst' incorporates:
         *  Merge: '<Root>/Merge_Outport_33'
         */
        (void)Rte_Write_VeHMIR_e_DriveMdstat_PopUpRqst_Value(CeDMIR_e_NoDrvMdSt);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg9' incorporates:
         *  Merge: '<Root>/Merge_Outport_34'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg9_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg10' incorporates:
         *  Merge: '<Root>/Merge_Outport_35'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg10_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_GSI' incorporates:
         *  Merge: '<Root>/Merge_Outport_36'
         */
        (void)Rte_Write_VeHMIR_e_GSI_Value(CeHMIR_e_None);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_P_MtrAPwrUsageDispV' incorporates:
         *  Merge: '<Root>/Merge_Outport_37'
         */
        (void)Rte_Write_VeHMIR_P_MtrAPwrUsageDispV_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_P_MtrBPwrUsageDispV' incorporates:
         *  Merge: '<Root>/Merge_Outport_38'
         */
        (void)Rte_Write_VeHMIR_P_MtrBPwrUsageDispV_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_P_MtrAPwrUsageDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_39'
         */
        (void)Rte_Write_VeHMIR_P_MtrAPwrUsageDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_P_MtrBPwrUsageDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_40'
         */
        (void)Rte_Write_VeHMIR_P_MtrBPwrUsageDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_Pct_EstSOCDisplay' incorporates:
         *  Merge: '<Root>/Merge_Outport_41'
         */
        (void)Rte_Write_VeHMIR_Pct_EstSOCDisplay_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg13' incorporates:
         *  Merge: '<Root>/Merge_Outport_42'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg13_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_P1fFailedUseBumpStartHMI' incorporates:
         *  Merge: '<Root>/Merge_Outport_43'
         */
        (void)Rte_Write_VeHMIR_b_P1fFailedUseBumpStartHMI_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg11' incorporates:
         *  Merge: '<Root>/Merge_Outport_44'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg11_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_MiL_OnRq_BPCM' incorporates:
         *  Merge: '<Root>/Merge_Outport_45'
         */
        (void)Rte_Write_VeHMIR_b_MiL_OnRq_BPCM_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_ThrmlRnAway_Lmp' incorporates:
         *  Merge: '<Root>/Merge_Outport_46'
         */
        (void)Rte_Write_VeHMIR_b_ThrmlRnAway_Lmp_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_P_RegenPwrDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_47'
         */
        (void)Rte_Write_VeHMIR_P_RegenPwrDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_RegenPwrDispV' incorporates:
         *  Merge: '<Root>/Merge_Outport_48'
         */
        (void)Rte_Write_VeHMIR_b_RegenPwrDispV_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_RollWarn' incorporates:
         *  Merge: '<Root>/Merge_Outport_49'
         */
        (void)Rte_Write_VeHMIR_b_RollWarn_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_T_HVBattTempDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_50'
         */
        (void)Rte_Write_VeHMIR_T_HVBattTempDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_T_MaxCmfrtZnHVBattDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_51'
         */
        (void)Rte_Write_VeHMIR_T_MaxCmfrtZnHVBattDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_T_MinCmfrtZnHVBattDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_52'
         */
        (void)Rte_Write_VeHMIR_T_MinCmfrtZnHVBattDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_T_MaxDrtngZnHVBattDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_53'
         */
        (void)Rte_Write_VeHMIR_T_MaxDrtngZnHVBattDisp_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_T_MinDrtngZnHVBattDisp' incorporates:
         *  Merge: '<Root>/Merge_Outport_54'
         */
        (void)Rte_Write_VeHMIR_T_MinDrtngZnHVBattDisp_Value(0.0F);

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
         *  SubSystem: '<Root>/HMIR_SlowTEF'
         */
#if Rte_SysCon_Variant_HMIR_5

        /* SystemInitialize for S-Function (fcgen): '<S8>/FcnCallGen' */
        /* SystemInitialize for Function Call SubSystem: '<S8>/HMIC_1000ms_Disp' */
        /* SystemInitialize for Merge: '<S895>/Merge' */
        HMIR_ac_B.Merge = CeHMIR_e_Not_Availabl;

        /* SystemInitialize for Atomic SubSystem: '<S896>/Hysteresis' */
        /* InitializeConditions for UnitDelay: '<S915>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_mn = false;

        /* End of SystemInitialize for SubSystem: '<S896>/Hysteresis' */

        /* SystemInitialize for Atomic SubSystem: '<S894>/Hysteresis' */
        /* InitializeConditions for UnitDelay: '<S901>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_af = false;

        /* End of SystemInitialize for SubSystem: '<S894>/Hysteresis' */
        /* End of SystemInitialize for SubSystem: '<S8>/HMIC_1000ms_Disp' */
        /* End of SystemInitialize for S-Function (fcgen): '<S8>/FcnCallGen' */
#endif

        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_VDCM_PopUpChrgPrtMis' incorporates:
         *  Merge: '<Root>/Merge_Outport_55'
         */
        (void)Rte_Write_VeHMIR_e_VDCM_PopUpChrgPrtMis_Value
            (CeHMIR_e_Not_Availabl);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_VDCM_PopUpMsgOvrrv' incorporates:
         *  Merge: '<Root>/Merge_Outport_56'
         */
        (void)Rte_Write_VeHMIR_e_VDCM_PopUpMsgOvrrv_Value(CeHMIR_e_Not_Available);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_VDCM_LowSocTelltale' incorporates:
         *  Merge: '<Root>/Merge_Outport_57'
         */
        (void)Rte_Write_VeHMIR_b_VDCM_LowSocTelltale_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_DrvAwayAlt' incorporates:
         *  Merge: '<Root>/Merge_Outport_58'
         */
        (void)Rte_Write_VeHMIR_b_DrvAwayAlt_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_DrvAwayIn' incorporates:
         *  Merge: '<Root>/Merge_Outport_59'
         */
        (void)Rte_Write_VeHMIR_b_DrvAwayIn_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg14' incorporates:
         *  Merge: '<Root>/Merge_Outport_60'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg14_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg15' incorporates:
         *  Merge: '<Root>/Merge_Outport_61'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg15_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_Popup_Msg16' incorporates:
         *  Merge: '<Root>/Merge_Outport_62'
         */
        (void)Rte_Write_VeHMIR_b_Popup_Msg16_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_HVBatteryShutOff' incorporates:
         *  Merge: '<Root>/Merge_Outport_63'
         */
        (void)Rte_Write_VeHMIR_b_HVBatteryShutOff_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_eBoost_Sts' incorporates:
         *  Merge: '<Root>/Merge_Outport_64'
         */
        (void)Rte_Write_VeHMIR_e_eBoost_Sts_Value(CeEBMR_e_eBoostOFF);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_eBoost_Warn' incorporates:
         *  Merge: '<Root>/Merge_Outport_65'
         */
        (void)Rte_Write_VeHMIR_e_eBoost_Warn_Value(CeEBMR_e_DeactivatedESCOff);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_GreyPowerAct' incorporates:
         *  Merge: '<Root>/Merge_Outport_66'
         */
        (void)Rte_Write_VeHMIR_b_GreyPowerAct_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_LimitMaxPower_Sel' incorporates:
         *  Merge: '<Root>/Merge_Outport_67'
         */
        (void)Rte_Write_VeHMIR_e_LimitMaxPower_Sel_Value(CeHMIR_e_Not_Active);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_MtrA_OverTempWarn' incorporates:
         *  Merge: '<Root>/Merge_Outport_68'
         */
        (void)Rte_Write_VeHMIR_b_MtrA_OverTempWarn_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_MtrB_OverTempWarn' incorporates:
         *  Merge: '<Root>/Merge_Outport_69'
         */
        (void)Rte_Write_VeHMIR_b_MtrB_OverTempWarn_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_MtrA_IvtrOverTempWarn' incorporates:
         *  Merge: '<Root>/Merge_Outport_70'
         */
        (void)Rte_Write_VeHMIR_b_MtrA_IvtrOverTempWarn_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_MtrB_IvtrOverTempWarn' incorporates:
         *  Merge: '<Root>/Merge_Outport_71'
         */
        (void)Rte_Write_VeHMIR_b_MtrB_IvtrOverTempWarn_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_DerateRsnOverSpeed' incorporates:
         *  Merge: '<Root>/Merge_Outport_72'
         */
        (void)Rte_Write_VeHMIR_b_DerateRsnOverSpeed_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_DerateRsnOverHeated' incorporates:
         *  Merge: '<Root>/Merge_Outport_73'
         */
        (void)Rte_Write_VeHMIR_b_DerateRsnOverHeated_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_v_SugSpeedMax' incorporates:
         *  Merge: '<Root>/Merge_Outport_74'
         */
        (void)Rte_Write_VeHMIR_v_SugSpeedMax_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_v_SugSpeedMin' incorporates:
         *  Merge: '<Root>/Merge_Outport_75'
         */
        (void)Rte_Write_VeHMIR_v_SugSpeedMin_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_v_SugSpeedThreshold' incorporates:
         *  Merge: '<Root>/Merge_Outport_76'
         */
        (void)Rte_Write_VeHMIR_v_SugSpeedThreshold_Value(0.0F);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_PrpFault' incorporates:
         *  Merge: '<Root>/Merge_Outport_77'
         */
        (void)Rte_Write_VeHMIR_b_PrpFault_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_SrvLmpGenFault' incorporates:
         *  Merge: '<Root>/Merge_Outport_78'
         */
        (void)Rte_Write_VeHMIR_b_SrvLmpGenFault_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_ChrgFault' incorporates:
         *  Merge: '<Root>/Merge_Outport_79'
         */
        (void)Rte_Write_VeHMIR_b_ChrgFault_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_DriveMdstat_BPCM' incorporates:
         *  Merge: '<Root>/Merge_Outport_80'
         */
        (void)Rte_Write_VeHMIR_e_DriveMdstat_BPCM_Value(((uint16)0U));

        /* SystemInitialize for Outport: '<Root>/VeHMIR_b_FCVLowBatteryLowPerf' incorporates:
         *  Merge: '<Root>/Merge_Outport_81'
         */
        (void)Rte_Write_VeHMIR_b_FCVLowBatteryLowPerf_Value(false);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_TerrainHMIRq' incorporates:
         *  Merge: '<Root>/Merge_Outport_1'
         */
        (void)Rte_Write_VeHMIR_e_TerrainHMIRq_Value(CeHMIR_e_No_Request);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_TerrainModeDesiredStat' incorporates:
         *  Merge: '<Root>/Merge_Outport_82'
         */
        (void)Rte_Write_VeHMIR_e_TerrainModeDesiredStat_Value(CeHMIR_e_Auto);

        /* SystemInitialize for Outport: '<Root>/VeHMIR_e_TerrainModeStat' incorporates:
         *  Merge: '<Root>/Merge_Outport_28'
         */
        (void)Rte_Write_VeHMIR_e_TerrainModeStat_Value(CeHMIR_e_AutoStat);

        /* Enable for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
         *  SubSystem: '<Root>/HMIR_MedTEF'
         */
        /* SystemReset for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/HMIC_50ms_Disp'
         */
        /* SystemReset for Atomic SubSystem: '<S184>/Multi_Indicators' */
        /* Enable for S-Function (fcgen): '<S4>/FcnCallGen' */
        HMIR_ac_Multi_Indicators_Reset();

        /* End of SystemReset for SubSystem: '<S184>/Multi_Indicators' */

        /* SystemReset for Atomic SubSystem: '<S270>/GradientLimiter' */
        /* InitializeConditions for Delay: '<S292>/Delay' */
        for (i = 0; i < 2; i++)
        {
            HMIR_ac_DW.Delay_DSTATE[i] = 0.0F;
        }

        /* End of InitializeConditions for Delay: '<S292>/Delay' */
        /* End of SystemReset for SubSystem: '<S270>/GradientLimiter' */
        /* End of Enable for S-Function (fcgen): '<S4>/FcnCallGen' */
        /* End of SystemReset for S-Function (fcgen): '<S4>/FcnCallGen' */
        /* End of Enable for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

        /* Enable for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
         *  SubSystem: '<Root>/HMIR_MedTEH'
         */
        /* SystemReset for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
         *  SubSystem: '<S5>/HMIC_100ms_Disp'
         */
        /* SystemReset for Atomic SubSystem: '<S365>/HMIC_100ms_Reserve' */
        /* Enable for S-Function (fcgen): '<S5>/FcnCallGen' */
        HMIR_ac_HMIC_100ms_Reserve_Reset();

        /* End of Enable for S-Function (fcgen): '<S5>/FcnCallGen' */
        /* End of SystemReset for SubSystem: '<S365>/HMIC_100ms_Reserve' */
        /* End of SystemReset for S-Function (fcgen): '<S5>/FcnCallGen' */
        /* End of Enable for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

        /* Enable for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
         *  SubSystem: '<Root>/HMIR_SlowTEF'
         */
#if Rte_SysCon_Variant_HMIR_5

        /* Enable for S-Function (fcgen): '<S8>/FcnCallGen' */
        /* SystemReset for S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
         *  SubSystem: '<S8>/HMIC_1000ms_Disp'
         */
        /* SystemReset for Atomic SubSystem: '<S896>/Hysteresis' */
        /* InitializeConditions for UnitDelay: '<S915>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_mn = false;

        /* End of SystemReset for SubSystem: '<S896>/Hysteresis' */

        /* SystemReset for Atomic SubSystem: '<S894>/Hysteresis' */
        /* InitializeConditions for UnitDelay: '<S901>/Unit Delay' */
        HMIR_ac_DW.UnitDelay_DSTATE_af = false;

        /* End of SystemReset for SubSystem: '<S894>/Hysteresis' */
        /* End of SystemReset for S-Function (fcgen): '<S8>/FcnCallGen' */
        /* End of Enable for S-Function (fcgen): '<S8>/FcnCallGen' */
#endif

        /* End of Enable for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
