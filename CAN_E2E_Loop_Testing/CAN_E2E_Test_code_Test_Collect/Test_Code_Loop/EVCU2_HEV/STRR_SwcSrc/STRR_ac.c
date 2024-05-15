/*
 * File: STRR_ac.c
 *
 * Code generated for Simulink model 'STRR_ac'.
 *
 * Model version                  : 9.278
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:14:44 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STRR_ac.h"

/* Named constants for Chart: '<S329>/STRC_FCStateMachine' */
#if Rte_SysCon_Variant_STRR_UseFCVar
#define STRR_ac_IN_FCOff               ((uint8)1U)
#endif

#if Rte_SysCon_Variant_STRR_UseFCVar
#define STRR_ac_IN_FCRunning           ((uint8)2U)
#endif

#if Rte_SysCon_Variant_STRR_UseFCVar
#define STRR_ac_IN_FCStart             ((uint8)3U)
#endif

#if Rte_SysCon_Variant_STRR_UseFCVar
#define STRR_ac_IN_FCStop              ((uint8)4U)
#endif

#if Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar
#define STRR_ac_IN_KeyOff              ((uint8)5U)
#endif

/* Named constants for Chart: '<S536>/STRC_StateMachine' */
#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar
#define STRR_ac_IN_EngOff              ((uint8)1U)
#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar
#define STRR_ac_IN_KeyOff_b            ((uint8)2U)
#endif

/* Named constants for Chart: '<S648>/STRC_StateMachine' */
#if Rte_SysCon_Variant_STRR_UseHybVar
#define STRR_ac_IN_EngRunning          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_STRR_UseHybVar
#define STRR_ac_IN_EngStart            ((uint8)3U)
#endif

#if Rte_SysCon_Variant_STRR_UseHybVar
#define STRR_ac_IN_EngStop             ((uint8)4U)
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
#define START_SEC_CALIB_UNSPECIFIED_STRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if !Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) HeSTRR_t_MedTEB_dT = 0.01F;/* Referenced by:
                                                                      * '<S92>/Calib'
                                                                      * '<S653>/Calib'
                                                                      * '<S663>/Calib'
                                                                      * '<S681>/Calib'
                                                                      * '<S958>/Calib'
                                                                      * '<S1014>/Calib'
                                                                      */

#endif

static volatile CONST(float32, STRR_VAR_INIT) HeSTRR_t_SlowTEF_dT = 1.0F;/* Referenced by: '<S1049>/Calib' */
static volatile CONST(sint16, STRR_VAR_INIT) KaSTRR_d_EngStrtStopTypMAP[18] =
{
    0, 1, 2, 3, 5, 6, 7, 8, 9, 10, 4, 11, 12, 13, 14, 15, 16, 17
} ;                                    /* Referenced by: '<S1035>/Calib' */

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(uint16, STRR_VAR_INIT) KeSTRR_Cnt_ImmedStopDelayOn = 3U;/* Referenced by:
                                                                      * '<S498>/Calib'
                                                                      * '<S615>/Calib'
                                                                      * '<S927>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(uint16, STRR_VAR_INIT) KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc
    = 20U;                             /* Referenced by:
                                        * '<S495>/Calib'
                                        * '<S612>/Calib'
                                        * '<S915>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(uint16, STRR_VAR_INIT) KeSTRR_Cnt_ImmedStrtCtrlDbnc = 3U;/* Referenced by: '<S687>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(uint16, STRR_VAR_INIT) KeSTRR_Cnt_StrtCtrlDbncDelayOn = 5U;/* Referenced by: '<S688>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_P_OvrrdPwrReq = 20.0F;/* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_P_StartMinDschrgPow = 4.0F;/* Referenced by:
                                                                      * '<S525>/Calib'
                                                                      * '<S832>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_Pct_AutoStopHVBattSOC =
    40.0F;                             /* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_Pct_AutoStrtHVBattSOC =
    25.0F;                             /* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_Pct_CrankSOCAbsMin = 30.0F;/* Referenced by: '<S983>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_Pct_HV_BatSOC_Thresh = 0.0F;/* Referenced by: '<S864>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_Pct_StartSOCAbsMin = 10.0F;/* Referenced by:
                                                                      * '<S526>/Calib'
                                                                      * '<S833>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_U_CrnkBatModVAbsMin = 5.0F;/* Referenced by: '<S962>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_U_CrnkBatModVMaxIntgrlVal =
    3.0F;                              /* Referenced by: '<S959>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_U_CrnkBatModVMin = 11.0F;/* Referenced by: '<S960>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_U_StartMinModVolt = 6.0F;/* Referenced by:
                                                                      * '<S527>/Calib'
                                                                      * '<S834>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_12vStrtrEquipped = 0;/* Referenced by: '<S835>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_AllowStartAborts = 0;/* Referenced by: '<S707>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_CheckParkAndNeutral = 0;/* Referenced by:
                                                                      * '<S511>/Calib'
                                                                      * '<S626>/Calib'
                                                                      * '<S897>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar && Rte_SysCon_Variant_STRR_EnblBckUpStrt

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_ClrBackupStrtRsnHist = 0;/* Referenced by: '<S210>/Calib' */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar && Rte_SysCon_Variant_STRR_EnblBmpStrt

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_ClrBumpStrtRsnHist = 0;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_ClrImmedStpRsnHist = 0;/* Referenced by:
                                                                      * '<S503>/Calib'
                                                                      * '<S620>/Calib'
                                                                      * '<S935>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_DbncStartReqInput = 0;/* Referenced by: '<S689>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_DisableAutoStrtForKeyCrnk
    = 1;                               /* Referenced by: '<S998>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblCntctrOpen_ImmedStop =
    1;                                 /* Referenced by:
                                        * '<S448>/Calib'
                                        * '<S561>/Calib'
                                        * '<S913>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblCntctrStat_ImmedStop =
    1;                                 /* Referenced by:
                                        * '<S446>/Calib'
                                        * '<S559>/Calib'
                                        * '<S863>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblDrvbltyFuelOn = 1;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblEngOnDlyForKeyCrnk =
    0;                                 /* Referenced by:
                                        * '<S690>/Calib'
                                        * '<S1028>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblFltBsdImmedStp = 1;/* Referenced by: '<S911>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT)
    KeSTRR_b_EnblInFieldStrtAllwRAOvrrd = 0;/* Referenced by: '<S837>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT)
    KeSTRR_b_EnblInPlantStrtAllwRAOvrrd = 0;/* Referenced by: '<S838>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblKeyStOffChk = 0;/* Referenced by: '<S508>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblOperMdChk = 1;/* Referenced by: '<S904>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblOvrrdFCActState = 0;/* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblOvrrdPwrReq = 0;/* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblRunPreCrank_ImmedStop
    = 1;                               /* Referenced by:
                                        * '<S623>/Calib'
                                        * '<S933>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EnblServFuelOn = 1;/* Referenced by: '<S306>/Calib' */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EngOnAllowedOvrrdEnbl = 1;/* Referenced by: '<S89>/Calib' */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_EngOnAllowedOvrrdVal = 1;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_OvrrdImmedStop = 0;/* Referenced by:
                                                                      * '<S499>/Calib'
                                                                      * '<S616>/Calib'
                                                                      * '<S928>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_PwrtrnCrnkAbrtEnbl = 0;/* Referenced by: '<S923>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_StrtCntrlOffChkEnbl = 1;/* Referenced by:
                                                                      * '<S512>/Calib'
                                                                      * '<S627>/Calib'
                                                                      * '<S898>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(boolean, STRR_VAR_INIT) KeSTRR_b_StrtFailLowPwrLtchEnab =
    1;                                 /* Referenced by:
                                        * '<S984>/Calib'
                                        * '<S749>/Calib'
                                        * '<S753>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STRR_VAR_INIT)
    KeSTRR_e_CompressionTestReq = CeSTRR_e_CompressTst;/* Referenced by: '<S994>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static volatile CONST(TeFCPR_e_ActualMode, STRR_VAR_INIT)
    KeSTRR_e_OvrrdFCActState = CeFCPR_e_ActualMode_Off;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static volatile CONST(TeSTRR_e_FCMdReqOvrrd, STRR_VAR_INIT)
    KeSTRR_e_OvrrdFCMdReq = CeSTRR_e_NoOvrd;/* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STRR_VAR_INIT)
    KeSTRR_e_SwtchDflt_StartType = CeSTRR_e_AStrtAggrsv;/* Referenced by: '<S782>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(uint32, STRR_VAR_INIT) KeSTRR_g_AStrtFailSel4StrtTypChng =
    32U;                               /* Referenced by: '<S764>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(uint32, STRR_VAR_INIT) KeSTRR_g_BuStrtFailSel4LPStrtTyp =
    512U;                              /* Referenced by: '<S765>/Calib' */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static volatile CONST(uint32, STRR_VAR_INIT)
    KeSTRR_g_StrtDisAllowRsnOnAllowedMask = 25168U;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_t_AutoStrt4KeyStrtDlyTm =
    0.0F;                              /* Referenced by: '<S655>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_t_CalLdrTransitionDly =
    0.25F;                             /* Referenced by: '<S664>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_t_DelayCrankAbortTm = 0.5F;/* Referenced by: '<S1017>/Calib' */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_t_EngOffAllwdECM_HiTm =
    0.1F;                              /* Referenced by: '<S93>/Calib' */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_t_EngOffAllwdECM_LoTm =
    0.0F;                              /* Referenced by: '<S94>/Calib' */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_t_EngOffAllwdSTGC_HiTm =
    0.0F;                              /* Referenced by: '<S95>/Calib' */

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_t_EngOffAllwdSTGC_LoTm =
    0.0F;                              /* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_t_InPlantDelayCrankAbortTm =
    3.0F;                              /* Referenced by: '<S1018>/Calib' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static volatile CONST(float32, STRR_VAR_INIT) KeSTRR_t_KeyCrnkEngOnDlyTime =
    2.0F;                              /* Referenced by: '<S691>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_STRR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, STRR_VAR_INIT) NeSTRR_b_RealTime_EngOFF_FA;/* '<Root>/DSM_6' */
static VAR(boolean, STRR_VAR_INIT) NeSTRR_b_StrtFailLowPwrLtch;/* '<Root>/DSM_33' */
static VAR(uint32, STRR_VAR_INIT) NeSTRR_g_BackupStrtRsn;/* '<Root>/DSM_7' */
static VAR(uint32, STRR_VAR_INIT) NeSTRR_g_BumpStrtRsn;/* '<Root>/DSM_35' */
static VAR(uint32, STRR_VAR_INIT) NeSTRR_g_ImmedStopRsn;/* '<Root>/DSM_37' */
static VAR(uint32, STRR_VAR_INIT) NeSTRR_t_RealTime_EngOff;/* '<Root>/DSM_38' */
static VAR(float32, STRR_VAR_INIT) VeSTRR_P_FCPwrReq_DS;/* '<Root>/DSM_41' */

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(float32, STRR_VAR_INIT) VeSTRR_U_BatModVMin;/* '<S957>/Switch1' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_BEVClrImmedStopRsn;/* '<S552>/Logical5' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_BEVImmedStopPreRunCrnkDsbl;/* '<S555>/Logical7' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_BEVImmedStopPwrMd;/* '<S557>/AND' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_BEVImmedStopRsnClearPSA;/* '<S619>/AND' */

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_BEVStartAllowed;/* '<S533>/AND3' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_ClrImmedStopRsn;/* '<S857>/Logical5' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_CrankAborted_DS;/* '<Root>/DSM_36' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_CrnkBatFail;/* '<S860>/Logical3' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_CrnkBatFail_DS;/* '<Root>/DSM_9' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_CrnkFailLowVolt_DS;/* '<Root>/DSM_10' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_CrnkLowVoltWarn;/* '<S953>/Comparison4' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_DelayedKeyCrnkExitTrgr;/* '<S661>/AND' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_DlyKCrankCondsMet;/* '<S651>/Logical6' */

#endif

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_EngOffAllowed_DS;/* '<Root>/DSM_14' */
static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_EngOffAllwdECM_DS;/* '<Root>/DSM_15' */
static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_EngOffAllwdTCM_DS;/* '<Root>/DSM_16' */
static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_EngOnReq_DS;/* '<Root>/DSM_17' */

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_EngStartAllowed;/* '<S645>/AND5' */

#endif

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_EngStartAllowedRaw;/* '<S8>/Logical3' */

#if Rte_SysCon_Variant_STRR_UseFCVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_FCClrImmedStopRsn;/* '<S439>/Logical5' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_FCImmedStopPwrMd;/* '<S444>/AND' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_FCImmedStopRsnClearPSA;/* '<S502>/AND' */

#endif

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_FCOffAllwd_DS;/* '<Root>/DSM_40' */
static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_FCOnAllwd_DS;/* '<Root>/DSM_39' */
static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_FCStartAllowed;/* synthesized block */
static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_FirstStartActv_DS;/* '<Root>/DSM_19' */
static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_FirstStartComplete_DS;/* '<Root>/DSM_20' */
static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_HybCrnkAbrtd_DS;/* '<Root>/DSM_21' */

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_ImmedDlyStrCtrl;/* '<S651>/Logical7' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_ImmedNrmlStrtCtrl;/* '<S651>/Logical1' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_ImmedStopCompressTst;/* '<S842>/AND' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_ImmedStopPreRunCrnkDsbl;/* '<S856>/Logical7' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_ImmedStopPwrMd;/* '<S843>/AND' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_ImmedStopRsnClearPSA;/* '<S934>/AND' */

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_ImmedStpDurStpLtch_DS;/* '<Root>/DSM_32' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_KeyCrnkEngOnDlyActv_DS;/* '<Root>/DSM_3' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_KeyStrtAlwRAOvrrd;/* '<S836>/Switch1' */

#endif

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_RunCrnkActv;/* '<S8>/Logical4' */

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_StartCtrl;/* '<S684>/Switch1' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_StartFailLowSOC_DS;/* '<Root>/DSM_28' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_StpDtct_DS;/* '<Root>/DSM_29' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_StrtCtrlDelayed_DS;/* '<Root>/DSM_1' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_StrtCtrlLatched_DS;/* '<Root>/DSM_4' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_StrtCtrlTriggered_DS;/* '<Root>/DSM_2' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_StrtDtct_DS;/* '<Root>/DSM_31' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(boolean, STRR_VAR_INIT) VeSTRR_b_StrtNotAlwdBatChks_DS;/* '<Root>/DSM_34' */

#endif

static VAR(TeSTRR_e_EngStrtStopType, STRR_VAR_INIT) VeSTRR_e_EngStrtStopType_DS;/* '<Root>/DSM_18' */
static VAR(TeSTRR_e_FCMdReqOvrrd, STRR_VAR_INIT) VeSTRR_e_FCMdReq_DS;/* '<Root>/Data Store Memory4' */

#if Rte_SysCon_Variant_STRR_UseFCVar

static VAR(TeSTRR_e_STMTrigger, STRR_VAR_INIT) VeSTRR_e_FCSTMTrigger_DS;/* '<Root>/Data Store Memory' */

#endif

static VAR(TeSTRR_e_HybStrtrSt, STRR_VAR_INIT) VeSTRR_e_FCStrtrSt_DS;/* '<Root>/Data Store Memory1' */
static VAR(TeESSR_e_HybEngSysActv, STRR_VAR_INIT) VeSTRR_e_FCSysActv_DS;/* '<Root>/Data Store Memory2' */
static VAR(TeSTRR_e_HybStrtrSt, STRR_VAR_INIT) VeSTRR_e_HybStrtrSt_DS;/* '<Root>/DSM_13' */

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

static VAR(TeSTRR_e_STMTrigger, STRR_VAR_INIT) VeSTRR_e_STMTrigger_DS;/* '<Root>/DSM_26' */

#endif

static VAR(TeSTRR_e_SilentStrtChkMod, STRR_VAR_INIT) VeSTRR_e_StrtChkMod_DS;/* '<Root>/DSM_27' */
static VAR(uint32, STRR_VAR_INIT) VeSTRR_g_AStpInhbtRsn2_DS;/* '<Root>/DSM_5' */
static VAR(uint32, STRR_VAR_INIT) VeSTRR_g_AStpInhbtRsn_DS;/* '<Root>/DSM_25' */
static VAR(uint32, STRR_VAR_INIT) VeSTRR_g_EVModeInhbtRsn2_DS;/* '<Root>/DSM_11' */
static VAR(uint32, STRR_VAR_INIT) VeSTRR_g_EVModeInhbtRsn_DS;/* '<Root>/DSM_12' */
static VAR(uint32, STRR_VAR_INIT) VeSTRR_g_ImmedStopRsnCurr_DS;/* '<Root>/DSM_22' */
static VAR(uint32, STRR_VAR_INIT) VeSTRR_g_StrtDisAllowRsn_DS;/* '<Root>/DSM_30' */

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(float32, STRR_VAR_INIT) VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS;/* '<Root>/DSM_24' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(float32, STRR_VAR_INIT) VeSTRR_t_CrnkAbrtTmr_DS;/* '<Root>/DSM_8' */

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static VAR(float32, STRR_VAR_INIT) VeSTRR_t_EngOffSTMTmr_DS;/* '<Root>/DSM_23' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STRR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_STRR
#include "MemMap.h"

CONST(ConstB_STRR_ac_T, STRR_VAR_INIT) STRR_ac_ConstB =
{
    CeSTRR_e_Normal,                   /* '<S1047>/Const8' */
    CeSTRR_e_KeyOffSt,                 /* '<S1047>/Const5' */
    CeSTRR_e_KeyOffSt,                 /* '<S1047>/Const48' */
    CeSTRR_e_NoOvrd,                   /* '<S1047>/Const51' */
    CeSTRR_e_NoAction,                 /* '<S1047>/Const2' */
    CeSTRR_e_NoAction,                 /* '<S1047>/Const45' */
    CeSTRR_e_None,                     /* '<S1047>/Const10' */
    CeSTRR_e_NoOvrrd,                  /* '<S1047>/Const24' */
    CeESSR_e_HybEngDisabled,           /* '<S1047>/Const49' */

#if Rte_SysCon_Variant_STRR_UseBEVVar

    /* Start of '<S531>/ImmedStop' */
    {
        0U,                            /* '<S592>/FixPt Bitwise Operator5' */
        8U                             /* '<S611>/FixPt Bitwise Operator1' */
    }
    ,

    /* End of '<S531>/ImmedStop' */
#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

    /* Start of '<S312>/ImmedStop' */
    {
        0U,                            /* '<S475>/FixPt Bitwise Operator5' */
        8U                             /* '<S494>/FixPt Bitwise Operator1' */
    }
    /* End of '<S312>/ImmedStop' */
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_STRR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STRR
#include "MemMap.h"

VAR(B_STRR_ac_T, STRR_VAR_INIT) STRR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STRR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STRR
#include "MemMap.h"

VAR(DW_STRR_ac_T, STRR_VAR_INIT) STRR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STRR
#include "MemMap.h"
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCOff(VAR(boolean, AUTOMATIC)
    rtu_ImmdStp, VAR(boolean, AUTOMATIC) rtu_CmdFCOn, VAR(boolean, AUTOMATIC)
    rtu_StrtAllw, VAR(TeFCPR_e_ActualMode, AUTOMATIC) rtu_FCActSt, VAR(boolean,
    AUTOMATIC) rtu_KeyOff);

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCStartingEnt(void);

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCStartingDur(VAR(TeFCPR_e_ActualMode,
    AUTOMATIC) rtu_FCActSt, VAR(boolean, AUTOMATIC) rtu_ImmdStp, VAR(boolean,
    AUTOMATIC) rtu_CmdFCOn, VAR(boolean, AUTOMATIC) rtu_RemStop, VAR(boolean,
    AUTOMATIC) rtu_Keyoff, VAR(boolean, AUTOMATIC) rtu_QuickStop, VAR(boolean,
    AUTOMATIC) rtu_ImmdShtDwn);

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_NoStop(void);

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCRunning(VAR(TeFCPR_e_ActualMode,
    AUTOMATIC) rtu_FCActSt, VAR(boolean, AUTOMATIC) rtu_CmndFCOn, VAR(boolean,
    AUTOMATIC) rtu_ImmdStp, VAR(boolean, AUTOMATIC) rtu_KeyOff, VAR(boolean,
    AUTOMATIC) rtu_QuickStop, VAR(boolean, AUTOMATIC) rtu_ImmdShtDwn, VAR
    (float32, AUTOMATIC) rtu_OHSRPwrDsrd);

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCStopping(VAR(TeFCPR_e_ActualMode,
    AUTOMATIC) rtu_FCSt, VAR(boolean, AUTOMATIC) rtu_ImmdStp, VAR(boolean,
    AUTOMATIC) rtu_KeyOff, VAR(boolean, AUTOMATIC) rtu_QuickStop, VAR(boolean,
    AUTOMATIC) rtu_ImmdShtDwn);

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_ImmedStop(VAR
    (TeHVTR_e_HV_BatCntctrStat, AUTOMATIC) rtu_HVBatCntctrStat, VAR(boolean,
    AUTOMATIC) rtu_BattOpnRq, VAR(boolean, AUTOMATIC) rtu_ClrDiagDsbl, VAR
    (boolean, AUTOMATIC) rtu_PSA, VAR(TePMDR_e_KeyStatus, AUTOMATIC)
    rtu_KeyStatus, VAR(boolean, AUTOMATIC) rtu_RunCrnkActv, VAR(boolean,
    AUTOMATIC) rtu_PropSysStrtRdy, VAR(TeTRGR_e_TransRangeState, AUTOMATIC)
    rtu_PRNDL, VAR(boolean, AUTOMATIC) rtu_PTCrnkAct, P2VAR(boolean, AUTOMATIC,
    STRR_VAR_INIT) rty_ImmdStp, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_ImmdStpNeutRq, P2VAR(B_ImmedStop_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT)
    localB, P2CONST(ConstB_ImmedStop_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT) localC,
    P2VAR(DW_ImmedStop_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffInit(void);

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffDur(VAR(boolean, AUTOMATIC)
    rtu_PTCrnkAct, VAR(TeFCPR_e_ActualMode, AUTOMATIC) rtu_FCActSt, VAR(boolean,
    AUTOMATIC) rtu_CmndFCOn, VAR(boolean, AUTOMATIC) rtu_StrtAllwd);

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_StrtAllowed(VAR(boolean, AUTOMATIC)
    rtu_ImmdStp, VAR(float32, AUTOMATIC) rtu_HVBatVoltModMinArb, VAR(float32,
    AUTOMATIC) rtu_HV_BatSOC, VAR(float32, AUTOMATIC) rtu_PBatSTMaxHH, VAR
    (TeHPMR_e_FC_MdCmd, AUTOMATIC) rtu_FCMdCmd, P2VAR(boolean, AUTOMATIC,
    STRR_VAR_INIT) rty_StrtAllw);

#endif

#if !Rte_SysCon_Variant_STRR_UseFCVar || (!Rte_SysCon_Variant_STRR_UseBEVVar && !Rte_SysCon_Variant_STRR_UseHybVar)

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_No_FC(P2VAR(boolean, AUTOMATIC,
    STRR_VAR_INIT) rty_ImmdStp, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_ImmdStpNeutRq, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT) rty_StrtAllwRaw,
    P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT) rty_STRR_RunCrnkActv);

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngOff(VAR(boolean, AUTOMATIC)
    rtu_ImmdStp);

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_ImmedStop_p(VAR(boolean, AUTOMATIC)
    rtu_PSA, VAR(boolean, AUTOMATIC) rtu_PropSysStrtRdy, VAR(boolean, AUTOMATIC)
    rtu_RunCrnkActv, VAR(TeHVTR_e_HV_BatCntctrStat, AUTOMATIC)
    rtu_HVBatCntctrStat, VAR(TeTRGR_e_TransRangeState, AUTOMATIC) rtu_PRNDL, VAR
    (boolean, AUTOMATIC) rtu_PTCrnkAct, VAR(boolean, AUTOMATIC) rtu_BattOpnRq,
    VAR(boolean, AUTOMATIC) rtu_ClrDiagDsbl, VAR(TePMDR_e_KeyStatus, AUTOMATIC)
    rtu_KeyStatus, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT) rty_ImmdStp, P2VAR
    (boolean, AUTOMATIC, STRR_VAR_INIT) rty_ImmdStpNeutRq, P2CONST
    (ConstB_ImmedStop_STRR_ac_n_T, AUTOMATIC, STRR_VAR_INIT) localC, P2VAR
    (DW_ImmedStop_STRR_ac_j_T, AUTOMATIC, STRR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffInit_m(void);

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_ImmedStp(P2VAR
    (TeSTRR_e_EngStrtStopType, AUTOMATIC, STRR_VAR_INIT) rty_Type);

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffDur_l(VAR(boolean, AUTOMATIC)
    rtu_PTCrnkAct, VAR(boolean, AUTOMATIC) rtu_StrtAllwd, VAR(boolean, AUTOMATIC)
    rtu_ImmdStp);

#endif

#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStrtAllowed(VAR(boolean, AUTOMATIC)
    rtu_ImmdStp, VAR(boolean, AUTOMATIC) rtu_RunCrnkActv);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngOff_g(VAR(TeESSR_e_EngStartStopSt,
    AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC) rtu_CmndEngOn, VAR
    (TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_HCPStrtTyp, VAR(boolean, AUTOMATIC)
    rtu_ImmdStp, VAR(boolean, AUTOMATIC) rtu_PTCrnkAct, VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) rtu_PRNDL, VAR(boolean, AUTOMATIC)
    rtu_StrtAllwd, VAR(boolean, AUTOMATIC) rtu_StrtChkMdUp, P2VAR
    (DW_EngOff_STRR_ac_b_T, AUTOMATIC, STRR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStartingEnt(void);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_Generic_Reverse(VAR
    (TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_EngStrtType);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStartingDur(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_EssFail, VAR(TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_HCPStrtTyp, VAR
    (boolean, AUTOMATIC) rtu_ImmdStp, VAR(uint32, AUTOMATIC) rtu_ESSFailPhase,
    VAR(boolean, AUTOMATIC) rtu_CmdEngOn, VAR(boolean, AUTOMATIC) rtu_RemStop);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngRunning(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_CmndEngOn, VAR(boolean, AUTOMATIC) rtu_ImmdStp);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStopping(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_EssFail, VAR(boolean, AUTOMATIC) rtu_ImmdStp, VAR(boolean, AUTOMATIC)
    rtu_EngStrtAllwd, VAR(boolean, AUTOMATIC) rtu_CmndEngOn, VAR(boolean,
    AUTOMATIC) rtu_EssStrtAbrt, VAR(TeSTRR_e_EngStrtStopType, AUTOMATIC)
    rtu_HCPStrtType, VAR(uint32, AUTOMATIC) rtu_RTC_CurTm, VAR(boolean,
    AUTOMATIC) rtu_RTC_CurTm_FA);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_ImmedStop_d(VAR(boolean, AUTOMATIC)
    rtu_EssFail, VAR(boolean, AUTOMATIC) rtu_PSA, VAR(boolean, AUTOMATIC)
    rtu_PropSysStrtRdy, VAR(boolean, AUTOMATIC) rtu_RunCrnkActv, VAR
    (TeHVTR_e_HV_BatCntctrStat, AUTOMATIC) rtu_HVBatCntctrStat, VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) rtu_PRNDL, VAR(boolean, AUTOMATIC)
    rtu_PTCrnkAbrtd, VAR(boolean, AUTOMATIC) rtu_PTCrnkAct, VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC) rtu_ECMOvrrd, VAR(float32,
    AUTOMATIC) rtu_HV_BatSOC, VAR(boolean, AUTOMATIC) rtu_BattOpnRq, VAR(float32,
    AUTOMATIC) rtu_HVBatVoltModMinArb, VAR(boolean, AUTOMATIC) rtu_ClrDiagDsbl,
    VAR(TePMDR_e_KeyStatus, AUTOMATIC) rtu_KeyStatus, VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC) rtu_FltOvrrd, VAR
    (TePMDR_e_OperationalMode, AUTOMATIC) rtu_OperMdSt, P2VAR(boolean, AUTOMATIC,
    STRR_VAR_INIT) rty_ImmdStp, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_ImmdStpNeutRq, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_VeSTRR_b_RunCrnkActv, P2VAR(B_ImmedStop_STRR_ac_l_T, AUTOMATIC,
    STRR_VAR_INIT) localB, P2VAR(DW_ImmedStop_STRR_ac_e_T, AUTOMATIC,
    STRR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffInit_h(void);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffDur_m(VAR(boolean, AUTOMATIC)
    rtu_PTCrnkAct, VAR(TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR
    (float32, AUTOMATIC) rtu_HV_BatSOC, VAR(boolean, AUTOMATIC) rtu_CmndEngOn,
    VAR(TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_EngStrtTyp, VAR(boolean,
    AUTOMATIC) rtu_StrtAllwd, VAR(boolean, AUTOMATIC) rtu_ImmdStp, VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) rtu_PRNDL, VAR(boolean, AUTOMATIC)
    rtu_InPlntMd, VAR(TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_HCPStrtTyp, VAR
    (uint32, AUTOMATIC) rtu_GenReg);

#endif

#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStrtAllowed_n(VAR(boolean,
    AUTOMATIC) rtu_ImmdStp, VAR(float32, AUTOMATIC) rtu_HVBatVoltModMinArb, VAR
    (float32, AUTOMATIC) rtu_HV_BatSOC, VAR(float32, AUTOMATIC) rtu_PBatSTMaxHH,
    VAR(boolean, AUTOMATIC) rtu_RunCrnkActv, VAR(boolean, AUTOMATIC)
    rtu_InPlntMd, VAR(boolean, AUTOMATIC) rtu_RAStrtAllwinN, VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC) rtu_ECMOvrrd, VAR(boolean,
    AUTOMATIC) rtu_FltOKStrtAllw, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_StrtAllwRaw);

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_STRL_DSD(VAR(boolean, AUTOMATIC)
    rtu_Input, VAR(float32, AUTOMATIC) rtu_HiTime, VAR(float32, AUTOMATIC)
    rtu_LowTime, VAR(boolean, AUTOMATIC) rtu_LastOutput, VAR(float32, AUTOMATIC)
    rtu_dT, P2VAR(B_STRL_DSD_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT) localB, P2VAR
    (DW_STRL_DSD_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT) localDW);

#endif

/* Output and update for function-call system: '<S312>/FCOff' */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCOff(VAR(boolean, AUTOMATIC)
    rtu_ImmdStp, VAR(boolean, AUTOMATIC) rtu_CmdFCOn, VAR(boolean, AUTOMATIC)
    rtu_StrtAllw, VAR(TeFCPR_e_ActualMode, AUTOMATIC) rtu_FCActSt, VAR(boolean,
    AUTOMATIC) rtu_KeyOff)
{
    /* If: '<S323>/If' incorporates:
     *  Constant: '<S338>/Constant'
     *  Logic: '<S323>/Logical'
     *  RelationalOperator: '<S332>/Greater Than or Equal '
     *  Switch: '<S344>/Switch1'
     *  Switch: '<S345>/Switch1'
     */
    if (rtu_ImmdStp)
    {
        /* Outputs for IfAction SubSystem: '<S323>/ImmedStp' incorporates:
         *  ActionPort: '<S333>/Action Port'
         */
        /* DataStoreWrite: '<S333>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S339>/Constant'
         */
        VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_KeyOffFailTr;

        /* DataStoreWrite: '<S333>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S340>/Constant'
         */
        VeSTRR_e_FCMdReq_DS = CeSTRR_e_QuickStop;

        /* End of Outputs for SubSystem: '<S323>/ImmedStp' */
    }
    else if (((uint32)rtu_FCActSt) == CeFCPR_e_ActualMode_Starting)
    {
        /* Outputs for IfAction SubSystem: '<S323>/StrtCnfrm' incorporates:
         *  ActionPort: '<S336>/Action Port'
         */
        /* DataStoreWrite: '<S336>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S348>/Constant'
         */
        VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_EngStartTr;

        /* End of Outputs for SubSystem: '<S323>/StrtCnfrm' */
    }
    else if (rtu_CmdFCOn && rtu_StrtAllw)
    {
        /* Outputs for IfAction SubSystem: '<S323>/StrtTrg' incorporates:
         *  ActionPort: '<S337>/Action Port'
         */
        /* DataStoreWrite: '<S337>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S349>/Constant'
         */
        VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_InactiveTr;

        /* DataStoreWrite: '<S337>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S350>/Constant'
         */
        VeSTRR_e_FCMdReq_DS = CeSTRR_e_Run;

        /* End of Outputs for SubSystem: '<S323>/StrtTrg' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S323>/NoStart' incorporates:
         *  ActionPort: '<S334>/Action Port'
         */
        if (rtu_KeyOff)
        {
            /* Switch: '<S345>/Switch1' incorporates:
             *  Constant: '<S343>/Constant'
             *  DataStoreWrite: '<S334>/Dsw_EngOnReq'
             */
            VeSTRR_e_FCMdReq_DS = CeSTRR_e_Off;

            /* Switch: '<S344>/Switch1' incorporates:
             *  Constant: '<S341>/Constant'
             *  DataStoreWrite: '<S334>/Dsw_STMTrigger1'
             */
            VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_KeyOffFailTr;
        }
        else
        {
            /* Switch: '<S344>/Switch1' incorporates:
             *  Constant: '<S342>/Constant'
             *  DataStoreWrite: '<S334>/Dsw_STMTrigger1'
             */
            VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_InactiveTr;
        }

        /* End of Outputs for SubSystem: '<S323>/NoStart' */
    }

    /* End of If: '<S323>/If' */

    /* If: '<S323>/If1' incorporates:
     *  DataStoreRead: '<S323>/Dsr_StrtStopMdTmr1'
     *  DataTypeConversion: '<S323>/Data Type Conversion1'
     */
    if (((sint32)VeSTRR_e_FCStrtrSt_DS) != 1)
    {
        /* Outputs for IfAction SubSystem: '<S323>/STRC_FCOffInit' incorporates:
         *  ActionPort: '<S335>/Action Port'
         */
        /* DataStoreWrite: '<S335>/Dsw_HybStrtrSt1' incorporates:
         *  Constant: '<S346>/Constant'
         */
        VeSTRR_e_FCSysActv_DS = CeESSR_e_HybEngEnabledOff;

        /* DataStoreWrite: '<S335>/Dsw_HybStrtrSt' incorporates:
         *  Constant: '<S347>/Constant'
         */
        VeSTRR_e_FCStrtrSt_DS = CeSTRR_e_EngOffSt;

        /* DataStoreWrite: '<S335>/Data Store Write' incorporates:
         *  Constant: '<S335>/FALSE Constant1'
         */
        VeSTRR_b_FCOnAllwd_DS = false;

        /* DataStoreWrite: '<S335>/Data Store Write1' incorporates:
         *  Constant: '<S335>/FALSE Constant2'
         */
        VeSTRR_b_FCOffAllwd_DS = true;

        /* End of Outputs for SubSystem: '<S323>/STRC_FCOffInit' */
    }

    /* End of If: '<S323>/If1' */
}

#endif

/* Output and update for function-call system: '<S325>/FCStartingEnt' */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCStartingEnt(void)
{
    /* DataStoreWrite: '<S375>/Dsw_HybStrtrSt' incorporates:
     *  Constant: '<S397>/Constant'
     */
    VeSTRR_e_FCStrtrSt_DS = CeSTRR_e_EngStartingSt;

    /* DataStoreWrite: '<S375>/Data Store Write' incorporates:
     *  Constant: '<S375>/FALSE Constant2'
     */
    VeSTRR_b_FCOnAllwd_DS = true;

    /* DataStoreWrite: '<S375>/Data Store Write1' incorporates:
     *  Constant: '<S375>/FALSE Constant1'
     */
    VeSTRR_b_FCOffAllwd_DS = false;

    /* DataStoreWrite: '<S375>/Dsw_EngOnReq' incorporates:
     *  Constant: '<S398>/Constant'
     */
    VeSTRR_e_FCMdReq_DS = CeSTRR_e_Run;
}

#endif

/* Output and update for function-call system: '<S325>/FCStartingDur' */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCStartingDur(VAR(TeFCPR_e_ActualMode,
    AUTOMATIC) rtu_FCActSt, VAR(boolean, AUTOMATIC) rtu_ImmdStp, VAR(boolean,
    AUTOMATIC) rtu_CmdFCOn, VAR(boolean, AUTOMATIC) rtu_RemStop, VAR(boolean,
    AUTOMATIC) rtu_Keyoff, VAR(boolean, AUTOMATIC) rtu_QuickStop, VAR(boolean,
    AUTOMATIC) rtu_ImmdShtDwn)
{
    boolean rtb_GreaterThanorEqual_e;

    /* RelationalOperator: '<S374>/Greater Than or Equal ' incorporates:
     *  Constant: '<S377>/Constant'
     */
    rtb_GreaterThanorEqual_e = (((uint32)rtu_FCActSt) ==
        CeFCPR_e_ActualMode_Shutdown);

    /* If: '<S374>/If' incorporates:
     *  Constant: '<S376>/Constant'
     *  Logic: '<S374>/Logical1'
     *  Logic: '<S374>/Logical2'
     *  Logic: '<S374>/Logical3'
     *  Logic: '<S374>/Logical4'
     *  RelationalOperator: '<S374>/Equal2'
     *  Switch: '<S396>/Switch1'
     */
    if (rtu_ImmdStp || rtu_QuickStop)
    {
        /* Outputs for IfAction SubSystem: '<S374>/STRR_ImmedStop' incorporates:
         *  ActionPort: '<S380>/Action Port'
         */
        /* Switch: '<S392>/Switch1' incorporates:
         *  Constant: '<S389>/Constant'
         *  Constant: '<S390>/Constant'
         *  DataStoreWrite: '<S380>/Dsw_STMTrigger1'
         */
        if (rtb_GreaterThanorEqual_e)
        {
            VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_EngStopTr;
        }
        else
        {
            VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_InactiveTr;
        }

        /* End of Switch: '<S392>/Switch1' */

        /* DataStoreWrite: '<S380>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S391>/Constant'
         */
        VeSTRR_e_FCMdReq_DS = CeSTRR_e_QuickStop;

        /* DataStoreWrite: '<S380>/Dsw_HybStrtrSt2' incorporates:
         *  Constant: '<S380>/TRUE Constant'
         */
        VeSTRR_b_ImmedStpDurStpLtch_DS = true;

        /* End of Outputs for SubSystem: '<S374>/STRR_ImmedStop' */
    }
    else if (((uint32)rtu_FCActSt) == CeFCPR_e_ActualMode_Run)
    {
        /* Outputs for IfAction SubSystem: '<S374>/FCStarted' incorporates:
         *  ActionPort: '<S378>/Action Port'
         */
        /* DataStoreWrite: '<S378>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S382>/Constant'
         */
        VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_EngRunTr;

        /* End of Outputs for SubSystem: '<S374>/FCStarted' */
    }
    else if (rtb_GreaterThanorEqual_e || ((!rtu_CmdFCOn) && rtu_RemStop))
    {
        /* Outputs for IfAction SubSystem: '<S374>/FCStopTrg' incorporates:
         *  ActionPort: '<S379>/Action Port'
         */
        /* Switch: '<S387>/Switch1' incorporates:
         *  Constant: '<S385>/Constant'
         *  Constant: '<S386>/Constant'
         *  DataStoreWrite: '<S379>/Dsw_EngOnReq'
         */
        if (rtu_ImmdShtDwn)
        {
            VeSTRR_e_FCMdReq_DS = CeSTRR_e_ImmedShutDown;
        }
        else
        {
            VeSTRR_e_FCMdReq_DS = CeSTRR_e_Off;
        }

        /* End of Switch: '<S387>/Switch1' */

        /* Switch: '<S388>/Switch1' incorporates:
         *  Constant: '<S383>/Constant'
         *  Constant: '<S384>/Constant'
         *  DataStoreWrite: '<S379>/Dsw_STMTrigger1'
         */
        if (rtb_GreaterThanorEqual_e)
        {
            VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_EngStopTr;
        }
        else
        {
            VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_InactiveTr;
        }

        /* End of Switch: '<S388>/Switch1' */
        /* End of Outputs for SubSystem: '<S374>/FCStopTrg' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S374>/WaitingForStart' incorporates:
         *  ActionPort: '<S381>/Action Port'
         */
        if (rtu_Keyoff)
        {
            /* Switch: '<S396>/Switch1' incorporates:
             *  Constant: '<S393>/Constant'
             *  DataStoreWrite: '<S381>/Dsw_HybStrtrSt1'
             */
            VeSTRR_e_FCSysActv_DS = CeESSR_e_HybEngDisabled;
        }
        else
        {
            /* Switch: '<S396>/Switch1' incorporates:
             *  Constant: '<S395>/Constant'
             *  DataStoreWrite: '<S381>/Dsw_HybStrtrSt1'
             */
            VeSTRR_e_FCSysActv_DS = CeESSR_e_HybEngEnabledOff;
        }

        /* DataStoreWrite: '<S381>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S394>/Constant'
         */
        VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_InactiveTr;

        /* End of Outputs for SubSystem: '<S374>/WaitingForStart' */
    }

    /* End of If: '<S374>/If' */
}

#endif

/*
 * Output and update for action system:
 *    '<S324>/NoStop'
 *    '<S414>/StartReq'
 */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_NoStop(void)
{
    /* DataStoreWrite: '<S354>/Dsw_EngOnReq' incorporates:
     *  Constant: '<S369>/Constant'
     */
    VeSTRR_e_FCMdReq_DS = CeSTRR_e_Run;
}

#endif

/* Output and update for function-call system: '<S312>/FCRunning' */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCRunning(VAR(TeFCPR_e_ActualMode,
    AUTOMATIC) rtu_FCActSt, VAR(boolean, AUTOMATIC) rtu_CmndFCOn, VAR(boolean,
    AUTOMATIC) rtu_ImmdStp, VAR(boolean, AUTOMATIC) rtu_KeyOff, VAR(boolean,
    AUTOMATIC) rtu_QuickStop, VAR(boolean, AUTOMATIC) rtu_ImmdShtDwn, VAR
    (float32, AUTOMATIC) rtu_OHSRPwrDsrd)
{
    /* Switch: '<S366>/Switch1' incorporates:
     *  Constant: '<S357>/Constant'
     *  Constant: '<S360>/Constant'
     *  Constant: '<S361>/Constant'
     *  DataStoreWrite: '<S353>/Dsw_STMTrigger'
     *  RelationalOperator: '<S353>/Greater Than or Equal '
     *  Switch: '<S363>/Switch1'
     */
    if (((uint32)rtu_FCActSt) == CeFCPR_e_ActualMode_Shutdown)
    {
        VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_EngStopTr;
    }
    else
    {
        VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_InactiveTr;
    }

    /* End of Switch: '<S366>/Switch1' */

    /* Switch: '<S364>/Switch1' incorporates:
     *  Constant: '<S367>/Calib'
     *  Constant: '<S368>/Calib'
     *  DataStoreWrite: '<S353>/Dsw_STMTrigger1'
     */
    if (KeSTRR_b_EnblOvrrdPwrReq)
    {
        VeSTRR_P_FCPwrReq_DS = KeSTRR_P_OvrrdPwrReq;
    }
    else
    {
        VeSTRR_P_FCPwrReq_DS = rtu_OHSRPwrDsrd;
    }

    /* End of Switch: '<S364>/Switch1' */

    /* Switch: '<S365>/Switch1' incorporates:
     *  Constant: '<S358>/Constant'
     *  Constant: '<S359>/Constant'
     *  DataStoreWrite: '<S353>/Dsw_HybStrtrSt1'
     */
    if (rtu_KeyOff)
    {
        VeSTRR_e_FCSysActv_DS = CeESSR_e_HybEngDisabled;
    }
    else
    {
        VeSTRR_e_FCSysActv_DS = CeESSR_e_HybEngEnabledOn;
    }

    /* End of Switch: '<S365>/Switch1' */

    /* If: '<S324>/If' incorporates:
     *  Logic: '<S324>/Logical2'
     *  Logic: '<S324>/OR7'
     */
    if (rtu_ImmdStp || (!rtu_CmndFCOn))
    {
        /* Outputs for IfAction SubSystem: '<S324>/Stop' incorporates:
         *  ActionPort: '<S355>/Action Port'
         */
        /* Switch: '<S373>/Switch1' incorporates:
         *  Constant: '<S370>/Constant'
         *  Constant: '<S371>/Constant'
         *  DataStoreWrite: '<S355>/Dsw_EngOnReq'
         *  Logic: '<S355>/OR7'
         *  Switch: '<S373>/Switch2'
         */
        if (rtu_ImmdStp || rtu_QuickStop)
        {
            VeSTRR_e_FCMdReq_DS = CeSTRR_e_QuickStop;
        }
        else if (rtu_ImmdShtDwn)
        {
            /* Switch: '<S373>/Switch2' incorporates:
             *  Constant: '<S372>/Constant'
             *  DataStoreWrite: '<S355>/Dsw_EngOnReq'
             *  Switch: '<S373>/Switch1'
             */
            VeSTRR_e_FCMdReq_DS = CeSTRR_e_ImmedShutDown;
        }
        else
        {
            VeSTRR_e_FCMdReq_DS = CeSTRR_e_Off;
        }

        /* End of Switch: '<S373>/Switch1' */
        /* End of Outputs for SubSystem: '<S324>/Stop' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S324>/NoStop' incorporates:
         *  ActionPort: '<S354>/Action Port'
         */
        STRR_ac_NoStop();

        /* End of Outputs for SubSystem: '<S324>/NoStop' */
    }

    /* End of If: '<S324>/If' */

    /* If: '<S324>/If1' incorporates:
     *  DataStoreRead: '<S324>/Dsr_StrtStopMdTmr1'
     *  DataTypeConversion: '<S324>/Data Type Conversion1'
     */
    if (((sint32)VeSTRR_e_FCStrtrSt_DS) != 3)
    {
        /* Outputs for IfAction SubSystem: '<S324>/FCRunningInit' incorporates:
         *  ActionPort: '<S352>/Action Port'
         */
        /* DataStoreWrite: '<S352>/Dsw_HybStrtrSt' incorporates:
         *  Constant: '<S356>/Constant'
         */
        VeSTRR_e_FCStrtrSt_DS = CeSTRR_e_EngRunningSt;

        /* DataStoreWrite: '<S352>/Data Store Write' incorporates:
         *  Constant: '<S352>/FALSE Constant2'
         */
        VeSTRR_b_FCOnAllwd_DS = true;

        /* DataStoreWrite: '<S352>/Data Store Write1' incorporates:
         *  Constant: '<S352>/FALSE Constant1'
         */
        VeSTRR_b_FCOffAllwd_DS = false;

        /* End of Outputs for SubSystem: '<S324>/FCRunningInit' */
    }

    /* End of If: '<S324>/If1' */
}

#endif

/* Output and update for function-call system: '<S312>/FCStopping' */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_FCStopping(VAR(TeFCPR_e_ActualMode,
    AUTOMATIC) rtu_FCSt, VAR(boolean, AUTOMATIC) rtu_ImmdStp, VAR(boolean,
    AUTOMATIC) rtu_KeyOff, VAR(boolean, AUTOMATIC) rtu_QuickStop, VAR(boolean,
    AUTOMATIC) rtu_ImmdShtDwn)
{
    boolean rtb_Logical2_dn;

    /* Logic: '<S326>/Logical1' incorporates:
     *  DataStoreRead: '<S326>/Dsr_StrtStopMdTmr2'
     */
    VeSTRR_b_ImmedStpDurStpLtch_DS = (rtu_ImmdStp ||
        (VeSTRR_b_ImmedStpDurStpLtch_DS));

    /* Logic: '<S326>/Logical2' */
    rtb_Logical2_dn = ((VeSTRR_b_ImmedStpDurStpLtch_DS) || rtu_QuickStop);

    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S401>/Constant'
     *  DataStoreWrite: '<S326>/Dsw_EngOnReq'
     *  Switch: '<S404>/Switch2'
     */
    if (rtb_Logical2_dn)
    {
        VeSTRR_e_FCMdReq_DS = CeSTRR_e_QuickStop;
    }
    else
    {
        if (rtu_ImmdShtDwn)
        {
            /* Switch: '<S404>/Switch1' incorporates:
             *  Constant: '<S402>/Constant'
             *  DataStoreWrite: '<S326>/Dsw_EngOnReq'
             *  Switch: '<S404>/Switch2'
             */
            VeSTRR_e_FCMdReq_DS = CeSTRR_e_ImmedShutDown;
        }
    }

    /* End of Switch: '<S404>/Switch1' */

    /* If: '<S326>/If' incorporates:
     *  Constant: '<S399>/Constant'
     *  RelationalOperator: '<S326>/Equal2'
     *  Switch: '<S413>/Switch1'
     */
    if (((uint32)rtu_FCSt) == CeFCPR_e_ActualMode_Off)
    {
        /* Outputs for IfAction SubSystem: '<S326>/FCStopped' incorporates:
         *  ActionPort: '<S403>/Action Port'
         */
        /* Switch: '<S409>/Switch1' incorporates:
         *  Constant: '<S407>/Constant'
         *  Constant: '<S408>/Constant'
         *  DataStoreWrite: '<S403>/Dsw_STMTrigger'
         *  Logic: '<S403>/Logical1'
         */
        if (rtu_KeyOff || rtb_Logical2_dn)
        {
            VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_KeyOffFailTr;
        }
        else
        {
            VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_EngOffTr;
        }

        /* End of Switch: '<S409>/Switch1' */
        /* End of Outputs for SubSystem: '<S326>/FCStopped' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S326>/WaitingForStop' incorporates:
         *  ActionPort: '<S406>/Action Port'
         */
        if (!rtu_KeyOff)
        {
            /* Switch: '<S413>/Switch1' incorporates:
             *  Constant: '<S411>/Constant'
             *  DataStoreWrite: '<S406>/Dsw_HybStrtrSt1'
             */
            VeSTRR_e_FCSysActv_DS = CeESSR_e_HybEngDisabled;
        }

        /* DataStoreWrite: '<S406>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S412>/Constant'
         */
        VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_InactiveTr;

        /* End of Outputs for SubSystem: '<S326>/WaitingForStop' */
    }

    /* End of If: '<S326>/If' */

    /* If: '<S326>/If1' incorporates:
     *  DataStoreRead: '<S326>/Dsr_StrtStopMdTmr1'
     *  DataTypeConversion: '<S326>/Data Type Conversion1'
     */
    if (((sint32)VeSTRR_e_FCStrtrSt_DS) != 4)
    {
        /* Outputs for IfAction SubSystem: '<S326>/STRC_EngStoppingInit' incorporates:
         *  ActionPort: '<S405>/Action Port'
         */
        /* DataStoreWrite: '<S405>/Dsw_HybStrtrSt1' incorporates:
         *  Constant: '<S410>/Constant'
         */
        VeSTRR_e_FCStrtrSt_DS = CeSTRR_e_EngStoppingSt;

        /* DataStoreWrite: '<S405>/Data Store Write' incorporates:
         *  Constant: '<S405>/FALSE Constant1'
         */
        VeSTRR_b_FCOnAllwd_DS = false;

        /* DataStoreWrite: '<S405>/Data Store Write1' incorporates:
         *  Constant: '<S405>/FALSE Constant2'
         */
        VeSTRR_b_FCOffAllwd_DS = true;

        /* DataStoreWrite: '<S405>/Dsw_STMTrigger1' incorporates:
         *  Constant: '<S405>/FALSE Constant3'
         */
        VeSTRR_P_FCPwrReq_DS = 0.0F;

        /* End of Outputs for SubSystem: '<S326>/STRC_EngStoppingInit' */
    }

    /* End of If: '<S326>/If1' */
}

#endif

/* Output and update for function-call system: '<S312>/ImmedStop' */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_ImmedStop(VAR
    (TeHVTR_e_HV_BatCntctrStat, AUTOMATIC) rtu_HVBatCntctrStat, VAR(boolean,
    AUTOMATIC) rtu_BattOpnRq, VAR(boolean, AUTOMATIC) rtu_ClrDiagDsbl, VAR
    (boolean, AUTOMATIC) rtu_PSA, VAR(TePMDR_e_KeyStatus, AUTOMATIC)
    rtu_KeyStatus, VAR(boolean, AUTOMATIC) rtu_RunCrnkActv, VAR(boolean,
    AUTOMATIC) rtu_PropSysStrtRdy, VAR(TeTRGR_e_TransRangeState, AUTOMATIC)
    rtu_PRNDL, VAR(boolean, AUTOMATIC) rtu_PTCrnkAct, P2VAR(boolean, AUTOMATIC,
    STRR_VAR_INIT) rty_ImmdStp, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_ImmdStpNeutRq, P2VAR(B_ImmedStop_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT)
    localB, P2CONST(ConstB_ImmedStop_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT) localC,
    P2VAR(DW_ImmedStop_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT) localDW)
{
    uint32 rtb_Switch_d;
    boolean rtb_AND_ev;
    boolean rtb_LeSTRR_b_FCImmedStopBatCntctr;
    boolean rtb_LeSTRR_b_FCImmedStopBatCntctrOpn;
    boolean rtb_LeSTRR_b_FCKeyDrop;
    boolean rtb_LeSTRR_b_FC_KeyStOff;
    boolean rtb_OR2;

    /* Logic: '<S432>/Logical' incorporates:
     *  Constant: '<S445>/Constant'
     *  Constant: '<S446>/Calib'
     *  RelationalOperator: '<S432>/Equal1'
     */
    rtb_LeSTRR_b_FCImmedStopBatCntctr = ((KeSTRR_b_EnblCntctrStat_ImmedStop) &&
        (((uint32)rtu_HVBatCntctrStat) != CeHVTR_e_Closed));

    /* Switch: '<S435>/Switch' */
    if (rtb_LeSTRR_b_FCImmedStopBatCntctr)
    {
        /* Switch: '<S435>/Switch' incorporates:
         *  DataStoreRead: '<S328>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S466>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d = VeSTRR_g_StrtDisAllowRsn_DS | 1U;
    }
    else
    {
        /* Switch: '<S435>/Switch' incorporates:
         *  DataStoreRead: '<S328>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S463>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S463>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S463>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~VeSTRR_g_StrtDisAllowRsn_DS) | 1U);
    }

    /* End of Switch: '<S435>/Switch' */

    /* Logic: '<S328>/NOT' */
    rtb_LeSTRR_b_FCKeyDrop = !rtu_RunCrnkActv;

    /* Switch: '<S435>/Switch1' */
    if (rtb_LeSTRR_b_FCKeyDrop)
    {
        /* Switch: '<S435>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S467>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 32U;
    }
    else
    {
        /* Switch: '<S435>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~rtb_Switch_d) | 32U);
    }

    /* End of Switch: '<S435>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S444>/Signal Latch On With Reset' */
    /* Logic: '<S513>/NOT' incorporates:
     *  Logic: '<S444>/Logical2'
     */
    rtb_LeSTRR_b_FC_KeyStOff = !rtu_PSA;

    /* Logic: '<S513>/OR1' incorporates:
     *  Logic: '<S513>/NOT'
     *  Logic: '<S513>/OR'
     *  UnitDelay: '<S513>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_o = (rtu_PTCrnkAct || (rtb_LeSTRR_b_FC_KeyStOff &&
        (localDW->UnitDelay_DSTATE_o)));

    /* End of Outputs for SubSystem: '<S444>/Signal Latch On With Reset' */

    /* Logic: '<S444>/AND' incorporates:
     *  Constant: '<S509>/Constant'
     *  Constant: '<S510>/Constant'
     *  Constant: '<S511>/Calib'
     *  Constant: '<S512>/Calib'
     *  Logic: '<S444>/Logical'
     *  Logic: '<S444>/Logical1'
     *  Logic: '<S444>/Logical3'
     *  Logic: '<S444>/Logical4'
     *  Logic: '<S444>/OR3'
     *  RelationalOperator: '<S444>/Equal17'
     *  RelationalOperator: '<S444>/Equal18'
     */
    VeSTRR_b_FCImmedStopPwrMd = (rtb_LeSTRR_b_FC_KeyStOff && (((((!rtu_PTCrnkAct)
        && (localDW->UnitDelay_DSTATE_o)) && (KeSTRR_b_StrtCntrlOffChkEnbl)) ||
        (!rtu_PropSysStrtRdy)) || (((CeTRGR_e_TransRangePark != ((uint32)
        rtu_PRNDL)) && (((uint32)rtu_PRNDL) != CeTRGR_e_TransRangeNeutral)) &&
        (KeSTRR_b_CheckParkAndNeutral))));

    /* Switch: '<S435>/Switch3' incorporates:
     *  DataStoreWrite: '<S328>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S465>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S465>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S465>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S468>/FixPt Bitwise Operator1'
     */
    if (VeSTRR_b_FCImmedStopPwrMd)
    {
        VeSTRR_g_StrtDisAllowRsn_DS = rtb_Switch_d | 1024U;
    }
    else
    {
        VeSTRR_g_StrtDisAllowRsn_DS = ~((~rtb_Switch_d) | 1024U);
    }

    /* End of Switch: '<S435>/Switch3' */

    /* Logic: '<S442>/Logical7' incorporates:
     *  Constant: '<S505>/Constant'
     *  Constant: '<S506>/Constant'
     *  Constant: '<S507>/Constant'
     *  Constant: '<S508>/Calib'
     *  Logic: '<S442>/Logical1'
     *  RelationalOperator: '<S442>/Equal1'
     *  RelationalOperator: '<S442>/Equal2'
     *  RelationalOperator: '<S442>/Equal3'
     */
    rtb_LeSTRR_b_FC_KeyStOff = ((KeSTRR_b_EnblKeyStOffChk) && (((((uint32)
        rtu_KeyStatus) == CePMDR_e_KeySt_RunPreCrank) || (((uint32)rtu_KeyStatus)
        == CePMDR_e_KeySt_Off)) || (((uint32)rtu_KeyStatus) ==
        CePMDR_e_KeySt_Acc)));

    /* Logic: '<S433>/Logical6' incorporates:
     *  Constant: '<S448>/Calib'
     */
    rtb_LeSTRR_b_FCImmedStopBatCntctrOpn = ((KeSTRR_b_EnblCntctrOpen_ImmedStop) &&
        rtu_BattOpnRq);

    /* Logic: '<S328>/OR2' */
    rtb_OR2 = ((((rtb_LeSTRR_b_FCImmedStopBatCntctr || rtb_LeSTRR_b_FC_KeyStOff)
                 || rtb_LeSTRR_b_FCKeyDrop) ||
                rtb_LeSTRR_b_FCImmedStopBatCntctrOpn) ||
               (VeSTRR_b_FCImmedStopPwrMd));

    /* Outputs for Atomic SubSystem: '<S438>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S500>/EdgeRising' */
    /* Logic: '<S501>/AND' incorporates:
     *  Logic: '<S501>/OR1'
     *  UnitDelay: '<S501>/Unit Delay'
     */
    rtb_AND_ev = (rtb_OR2 && (!localDW->UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S501>/Unit Delay' */
    localDW->UnitDelay_DSTATE_k = rtb_OR2;

    /* End of Outputs for SubSystem: '<S500>/EdgeRising' */

    /* Switch: '<S500>/Switch1' incorporates:
     *  Constant: '<S498>/Calib'
     *  Constant: '<S500>/Constant Value'
     *  Constant: '<S500>/Constant Value1'
     *  Logic: '<S500>/OR'
     *  Logic: '<S500>/OR1'
     *  MinMax: '<S500>/Minimum'
     *  Sum: '<S500>/Summation'
     *  UnitDelay: '<S500>/Unit Delay'
     */
    if ((!rtb_OR2) || rtb_AND_ev)
    {
        localDW->UnitDelay_DSTATE = 0U;
    }
    else if (KeSTRR_Cnt_ImmedStopDelayOn < ((uint16)(((uint32)
                localDW->UnitDelay_DSTATE) + 1U)))
    {
        /* MinMax: '<S500>/Minimum' incorporates:
         *  Constant: '<S498>/Calib'
         */
        localDW->UnitDelay_DSTATE = KeSTRR_Cnt_ImmedStopDelayOn;
    }
    else
    {
        /* MinMax: '<S500>/Minimum' incorporates:
         *  Constant: '<S500>/Constant Value'
         *  Sum: '<S500>/Summation'
         *  UnitDelay: '<S500>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE = (uint16)(((uint32)localDW->UnitDelay_DSTATE)
            + 1U);
    }

    /* End of Switch: '<S500>/Switch1' */

    /* Logic: '<S438>/Logical1' incorporates:
     *  Constant: '<S498>/Calib'
     *  Constant: '<S499>/Calib'
     *  Logic: '<S500>/AND'
     *  RelationalOperator: '<S500>/Greater  Than'
     *  UnitDelay: '<S500>/Unit Delay'
     */
    *rty_ImmdStp = ((rtb_OR2 && (localDW->UnitDelay_DSTATE >=
                      KeSTRR_Cnt_ImmedStopDelayOn)) || (KeSTRR_b_OvrrdImmedStop));

    /* End of Outputs for SubSystem: '<S438>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S433>/Signal Latch On With Reset5' */
    /* Logic: '<S449>/OR1' incorporates:
     *  Constant: '<S447>/Constant'
     *  DataStoreRead: '<S433>/Dsr_HybCrnkAbrd'
     *  Logic: '<S449>/NOT'
     *  Logic: '<S449>/OR'
     *  RelationalOperator: '<S433>/Comparison1'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_i = (rtb_LeSTRR_b_FCImmedStopBatCntctrOpn ||
        ((((uint32)VeSTRR_e_FCStrtrSt_DS) != CeSTRR_e_KeyOffSt) &&
         (localDW->UnitDelay_DSTATE_i)));

    /* End of Outputs for SubSystem: '<S433>/Signal Latch On With Reset5' */

    /* Switch: '<S436>/Switch1' incorporates:
     *  Logic: '<S443>/NOT12'
     *  Logic: '<S443>/NOT9'
     *  Switch: '<S436>/Switch9'
     */
    if ((*rty_ImmdStp) && (localDW->UnitDelay_DSTATE_i))
    {
        /* Switch: '<S436>/Switch9' incorporates:
         *  Logic: '<S443>/NOT12'
         */
        if ((VeSTRR_b_FCImmedStopPwrMd) && (*rty_ImmdStp))
        {
            rtb_Switch_d = localC->FixPtBitwiseOperator1_p;
        }
        else
        {
            rtb_Switch_d = localC->FixPtBitwiseOperator5_f;
        }

        /* Switch: '<S434>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S476>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S476>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S476>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S477>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S477>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S477>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S482>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d = (~((~(~((~rtb_Switch_d) | 16U))) | 32U)) | 64U;
    }
    else
    {
        if ((VeSTRR_b_FCImmedStopPwrMd) && (*rty_ImmdStp))
        {
            /* Switch: '<S436>/Switch9' */
            rtb_Switch_d = localC->FixPtBitwiseOperator1_p;
        }
        else
        {
            /* Switch: '<S436>/Switch9' */
            rtb_Switch_d = localC->FixPtBitwiseOperator5_f;
        }

        /* Switch: '<S434>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S476>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S476>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S476>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S477>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S477>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S477>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S478>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S478>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S478>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~(~((~(~((~rtb_Switch_d) | 16U))) | 32U))) | 64U);
    }

    /* End of Switch: '<S436>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S437>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S496>/EdgeRising' */
    /* Logic: '<S497>/AND' incorporates:
     *  Logic: '<S497>/OR1'
     *  UnitDelay: '<S497>/Unit Delay'
     */
    rtb_LeSTRR_b_FCImmedStopBatCntctrOpn = (rtb_LeSTRR_b_FCImmedStopBatCntctr &&
        (!localDW->UnitDelay_DSTATE_a));

    /* Update for UnitDelay: '<S497>/Unit Delay' */
    localDW->UnitDelay_DSTATE_a = rtb_LeSTRR_b_FCImmedStopBatCntctr;

    /* End of Outputs for SubSystem: '<S496>/EdgeRising' */

    /* Switch: '<S496>/Switch1' incorporates:
     *  Constant: '<S495>/Calib'
     *  Constant: '<S496>/Constant Value'
     *  Constant: '<S496>/Constant Value1'
     *  Logic: '<S496>/OR'
     *  Logic: '<S496>/OR1'
     *  MinMax: '<S496>/Minimum'
     *  Sum: '<S496>/Summation'
     *  UnitDelay: '<S496>/Unit Delay'
     */
    if ((!rtb_LeSTRR_b_FCImmedStopBatCntctr) ||
            rtb_LeSTRR_b_FCImmedStopBatCntctrOpn)
    {
        localDW->UnitDelay_DSTATE_g = 0U;
    }
    else if (KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc < ((uint16)(((uint32)
                localDW->UnitDelay_DSTATE_g) + 1U)))
    {
        /* MinMax: '<S496>/Minimum' incorporates:
         *  Constant: '<S495>/Calib'
         */
        localDW->UnitDelay_DSTATE_g = KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc;
    }
    else
    {
        /* MinMax: '<S496>/Minimum' incorporates:
         *  Constant: '<S496>/Constant Value'
         *  Sum: '<S496>/Summation'
         *  UnitDelay: '<S496>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_g = (uint16)(((uint32)
            localDW->UnitDelay_DSTATE_g) + 1U);
    }

    /* End of Switch: '<S496>/Switch1' */

    /* Logic: '<S496>/AND' incorporates:
     *  Constant: '<S495>/Calib'
     *  RelationalOperator: '<S496>/Greater  Than'
     *  UnitDelay: '<S496>/Unit Delay'
     */
    rtb_LeSTRR_b_FCImmedStopBatCntctr = (rtb_LeSTRR_b_FCImmedStopBatCntctr &&
        (localDW->UnitDelay_DSTATE_g >= KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc));

    /* End of Outputs for SubSystem: '<S437>/Turn On Delay Sample1' */

    /* Switch: '<S436>/Switch7' incorporates:
     *  Logic: '<S443>/NOT7'
     */
    if ((*rty_ImmdStp) && rtb_LeSTRR_b_FCImmedStopBatCntctr)
    {
        /* Switch: '<S436>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S479>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S479>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S479>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S492>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d = (~((~rtb_Switch_d) | 128U)) | 256U;
    }
    else
    {
        /* Switch: '<S436>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S479>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S479>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S479>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S480>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S480>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S480>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~(~((~rtb_Switch_d) | 128U))) | 256U);
    }

    /* End of Switch: '<S436>/Switch7' */

    /* Switch: '<S436>/Switch8' incorporates:
     *  Constant: '<S499>/Calib'
     *  Logic: '<S443>/NOT6'
     */
    if ((*rty_ImmdStp) && (KeSTRR_b_OvrrdImmedStop))
    {
        /* Switch: '<S436>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S493>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 512U;
    }
    else
    {
        /* Switch: '<S436>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S481>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S481>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S481>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~rtb_Switch_d) | 512U);
    }

    /* End of Switch: '<S436>/Switch8' */

    /* Logic: '<S443>/NOT2' incorporates:
     *  Logic: '<S441>/NOT1'
     */
    rtb_LeSTRR_b_FCImmedStopBatCntctrOpn = !rtb_LeSTRR_b_FCKeyDrop;

    /* Switch: '<S436>/Switch5' incorporates:
     *  Logic: '<S443>/NOT2'
     *  Logic: '<S443>/NOT5'
     */
    if ((*rty_ImmdStp) && rtb_LeSTRR_b_FCImmedStopBatCntctrOpn)
    {
        /* Switch: '<S436>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S490>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 1024U;
    }
    else
    {
        /* Switch: '<S436>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S471>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S471>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S471>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~rtb_Switch_d) | 1024U);
    }

    /* End of Switch: '<S436>/Switch5' */

    /* Switch: '<S436>/Switch6' incorporates:
     *  Logic: '<S443>/NOT4'
     *  S-Function (sfix_bitop): '<S472>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S472>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S472>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S491>/FixPt Bitwise Operator1'
     */
    if ((*rty_ImmdStp) && rtb_LeSTRR_b_FC_KeyStOff)
    {
        rtb_Switch_d |= 2048U;
    }
    else
    {
        rtb_Switch_d = ~((~rtb_Switch_d) | 2048U);
    }

    /* End of Switch: '<S436>/Switch6' */

    /* Switch: '<S436>/Switch12' incorporates:
     *  DataStoreWrite: '<S328>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S473>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S473>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S473>/FixPt Bitwise Operator5'
     */
    VeSTRR_g_ImmedStopRsnCurr_DS = ~((~rtb_Switch_d) | 4096U);

    /* Outputs for Atomic SubSystem: '<S439>/EdgeRising1' */
    /* Logic: '<S502>/AND' incorporates:
     *  Logic: '<S502>/OR1'
     *  UnitDelay: '<S502>/Unit Delay'
     */
    VeSTRR_b_FCImmedStopRsnClearPSA = (rtu_PSA && (!localDW->UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S502>/Unit Delay' */
    localDW->UnitDelay_DSTATE_n = rtu_PSA;

    /* End of Outputs for SubSystem: '<S439>/EdgeRising1' */

    /* Logic: '<S439>/Logical5' incorporates:
     *  Constant: '<S503>/Calib'
     */
    VeSTRR_b_FCClrImmedStopRsn = (((KeSTRR_b_ClrImmedStpRsnHist) ||
        rtu_ClrDiagDsbl) || (VeSTRR_b_FCImmedStopRsnClearPSA));

    /* Switch: '<S434>/Switch9' incorporates:
     *  Logic: '<S441>/NOT18'
     */
    if ((VeSTRR_b_FCImmedStopPwrMd) && (*rty_ImmdStp))
    {
        /* Switch: '<S434>/Switch1' incorporates:
         *  DataStoreRead: '<S441>/Dsr_PID_AStrtEntry1'
         *  S-Function (sfix_bitop): '<S462>/FixPt Bitwise Operator1'
         *  Switch: '<S434>/Switch10'
         */
        rtb_Switch_d = NeSTRR_g_ImmedStopRsn | 8U;
    }
    else
    {
        /* Switch: '<S434>/Switch1' incorporates:
         *  DataStoreRead: '<S441>/Dsr_PID_AStrtEntry1'
         *  Switch: '<S434>/Switch10'
         */
        rtb_Switch_d = NeSTRR_g_ImmedStopRsn;
    }

    /* End of Switch: '<S434>/Switch9' */

    /* Switch: '<S434>/Switch1' incorporates:
     *  Logic: '<S441>/NOT28'
     */
    if ((localDW->UnitDelay_DSTATE_i) && (*rty_ImmdStp))
    {
        /* Switch: '<S434>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S450>/FixPt Bitwise Operator1'
         *  Switch: '<S434>/Switch4'
         */
        rtb_Switch_d |= 64U;
    }

    /* End of Switch: '<S434>/Switch1' */

    /* Switch: '<S434>/Switch7' incorporates:
     *  Logic: '<S441>/NOT26'
     */
    if (rtb_LeSTRR_b_FCImmedStopBatCntctr && (*rty_ImmdStp))
    {
        /* Switch: '<S434>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S460>/FixPt Bitwise Operator1'
         *  Switch: '<S434>/Switch2'
         */
        rtb_Switch_d |= 256U;
    }

    /* End of Switch: '<S434>/Switch7' */

    /* Switch: '<S434>/Switch8' incorporates:
     *  Constant: '<S499>/Calib'
     *  Logic: '<S441>/NOT25'
     */
    if ((KeSTRR_b_OvrrdImmedStop) && (*rty_ImmdStp))
    {
        /* Switch: '<S434>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S461>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 512U;
    }

    /* End of Switch: '<S434>/Switch8' */

    /* Switch: '<S434>/Switch5' incorporates:
     *  Logic: '<S441>/NOT24'
     */
    if (rtb_LeSTRR_b_FCImmedStopBatCntctrOpn && (*rty_ImmdStp))
    {
        /* Switch: '<S434>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S458>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 1024U;
    }

    /* End of Switch: '<S434>/Switch5' */

    /* Switch: '<S439>/Switch5' incorporates:
     *  Constant: '<S439>/Constant Value'
     *  DataStoreWrite: '<S439>/Dsw_PID_AStrtEntry3'
     *  Logic: '<S441>/NOT23'
     *  Switch: '<S434>/Switch6'
     */
    if (VeSTRR_b_FCClrImmedStopRsn)
    {
        NeSTRR_g_ImmedStopRsn = 0U;
    }
    else if ((*rty_ImmdStp) && rtb_LeSTRR_b_FC_KeyStOff)
    {
        /* Switch: '<S434>/Switch6' incorporates:
         *  DataStoreWrite: '<S439>/Dsw_PID_AStrtEntry3'
         *  S-Function (sfix_bitop): '<S459>/FixPt Bitwise Operator1'
         */
        NeSTRR_g_ImmedStopRsn = rtb_Switch_d | 2048U;
    }
    else
    {
        /* DataStoreWrite: '<S439>/Dsw_PID_AStrtEntry3' incorporates:
         *  Switch: '<S434>/Switch6'
         */
        NeSTRR_g_ImmedStopRsn = rtb_Switch_d;
    }

    /* End of Switch: '<S439>/Switch5' */

    /* Logic: '<S328>/Logical1' */
    localB->Logical1 = (rtb_LeSTRR_b_FCKeyDrop || rtb_LeSTRR_b_FC_KeyStOff);

    /* Switch: '<S504>/Switch1' */
    *rty_ImmdStpNeutRq = *rty_ImmdStp;
}

#endif

/* Output and update for function-call system: '<S327>/KeyOffInit' */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffInit(void)
{
    /* DataStoreWrite: '<S415>/Dsw_HybStrtrSt1' incorporates:
     *  Constant: '<S428>/Constant'
     */
    VeSTRR_e_FCSysActv_DS = CeESSR_e_HybEngDisabled;

    /* DataStoreWrite: '<S415>/Dsw_HybStrtrSt' incorporates:
     *  Constant: '<S429>/Constant'
     */
    VeSTRR_e_FCStrtrSt_DS = CeSTRR_e_KeyOffSt;

    /* DataStoreWrite: '<S415>/Dsw_STMTrigger' incorporates:
     *  Constant: '<S430>/Constant'
     */
    VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_InactiveTr;

    /* DataStoreWrite: '<S415>/Data Store Write' incorporates:
     *  Constant: '<S415>/FALSE Constant3'
     */
    VeSTRR_b_FCOnAllwd_DS = false;

    /* DataStoreWrite: '<S415>/Dsw_HybStrtrSt2' incorporates:
     *  Constant: '<S415>/FALSE Constant3'
     */
    VeSTRR_b_ImmedStpDurStpLtch_DS = false;

    /* DataStoreWrite: '<S415>/Data Store Write1' incorporates:
     *  Constant: '<S415>/FALSE Constant1'
     */
    VeSTRR_b_FCOffAllwd_DS = true;

    /* DataStoreWrite: '<S415>/Dsw_EngOnReq' incorporates:
     *  Constant: '<S431>/Constant'
     */
    VeSTRR_e_FCMdReq_DS = CeSTRR_e_Off;

    /* DataStoreWrite: '<S415>/Dsw_STMTrigger1' incorporates:
     *  Constant: '<S415>/FALSE Constant2'
     */
    VeSTRR_P_FCPwrReq_DS = 0.0F;
}

#endif

/* Output and update for function-call system: '<S327>/KeyOffDur' */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffDur(VAR(boolean, AUTOMATIC)
    rtu_PTCrnkAct, VAR(TeFCPR_e_ActualMode, AUTOMATIC) rtu_FCActSt, VAR(boolean,
    AUTOMATIC) rtu_CmndFCOn, VAR(boolean, AUTOMATIC) rtu_StrtAllwd)
{
    /* If: '<S414>/If' incorporates:
     *  Logic: '<S414>/AND1'
     *  Logic: '<S414>/AND2'
     */
    if (!rtu_StrtAllwd)
    {
        /* Outputs for IfAction SubSystem: '<S414>/NoStrtsAllwd' incorporates:
         *  ActionPort: '<S418>/Action Port'
         */
        /* DataStoreWrite: '<S418>/Dsw_EngOnReq1' incorporates:
         *  Constant: '<S424>/Constant'
         */
        VeSTRR_e_FCMdReq_DS = CeSTRR_e_Off;

        /* End of Outputs for SubSystem: '<S414>/NoStrtsAllwd' */
    }
    else if (rtu_CmndFCOn && rtu_PTCrnkAct)
    {
        /* Outputs for IfAction SubSystem: '<S414>/StartReq' incorporates:
         *  ActionPort: '<S420>/Action Port'
         */
        STRR_ac_NoStop();

        /* End of Outputs for SubSystem: '<S414>/StartReq' */
    }
    else
    {
        if (rtu_PTCrnkAct)
        {
            /* Outputs for IfAction SubSystem: '<S414>/OffReq' incorporates:
             *  ActionPort: '<S419>/Action Port'
             */
            /* DataStoreWrite: '<S419>/Dsw_STMTrigger1' incorporates:
             *  Constant: '<S425>/Constant'
             */
            VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_EngOffTr;

            /* DataStoreWrite: '<S419>/Dsw_EngOnReq1' incorporates:
             *  Constant: '<S426>/Constant'
             */
            VeSTRR_e_FCMdReq_DS = CeSTRR_e_Off;

            /* End of Outputs for SubSystem: '<S414>/OffReq' */
        }
    }

    /* End of If: '<S414>/If' */

    /* If: '<S414>/StateTransition' incorporates:
     *  Constant: '<S423>/Constant'
     *  RelationalOperator: '<S417>/Greater Than or Equal '
     */
    if (((uint32)rtu_FCActSt) == CeFCPR_e_ActualMode_Starting)
    {
        /* Outputs for IfAction SubSystem: '<S414>/FCStrtEntry' incorporates:
         *  ActionPort: '<S416>/Action Port'
         */
        /* DataStoreWrite: '<S416>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S421>/Constant'
         */
        VeSTRR_e_FCSTMTrigger_DS = CeSTRR_e_EngStartTr;

        /* DataStoreWrite: '<S416>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S422>/Constant'
         */
        VeSTRR_e_FCMdReq_DS = CeSTRR_e_Run;

        /* End of Outputs for SubSystem: '<S414>/FCStrtEntry' */
    }

    /* End of If: '<S414>/StateTransition' */
}

#endif

/* Output and update for function-call system: '<S312>/StrtAllowed' */
#if Rte_SysCon_Variant_STRR_UseFCVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_StrtAllowed(VAR(boolean, AUTOMATIC)
    rtu_ImmdStp, VAR(float32, AUTOMATIC) rtu_HVBatVoltModMinArb, VAR(float32,
    AUTOMATIC) rtu_HV_BatSOC, VAR(float32, AUTOMATIC) rtu_PBatSTMaxHH, VAR
    (TeHPMR_e_FC_MdCmd, AUTOMATIC) rtu_FCMdCmd, P2VAR(boolean, AUTOMATIC,
    STRR_VAR_INIT) rty_StrtAllw)
{
    uint32 rtb_Switch_g;
    boolean rtb_LeSTRR_b_HVBattStrtAllw;
    boolean rtb_LeSTRR_b_KeyStrtAlwBatPwr;
    boolean rtb_LeSTRR_b_KeyStrtAlwBatSOC;
    boolean rtb_LeSTRR_b_KeyStrtAlwBatVolt;
    boolean rtb_NOT1_n;

    /* RelationalOperator: '<S518>/Greater Than or Equal ' incorporates:
     *  Constant: '<S526>/Calib'
     */
    rtb_LeSTRR_b_KeyStrtAlwBatSOC = (rtu_HV_BatSOC > KeSTRR_Pct_StartSOCAbsMin);

    /* RelationalOperator: '<S518>/Greater Than or Equal 1' incorporates:
     *  Constant: '<S525>/Calib'
     */
    rtb_LeSTRR_b_KeyStrtAlwBatPwr = (rtu_PBatSTMaxHH >
        KeSTRR_P_StartMinDschrgPow);

    /* RelationalOperator: '<S518>/Greater Than or Equal 2' incorporates:
     *  Constant: '<S527>/Calib'
     */
    rtb_LeSTRR_b_KeyStrtAlwBatVolt = (rtu_HVBatVoltModMinArb >
        KeSTRR_U_StartMinModVolt);

    /* Logic: '<S518>/AND1' */
    rtb_LeSTRR_b_HVBattStrtAllw = ((rtb_LeSTRR_b_KeyStrtAlwBatSOC &&
        rtb_LeSTRR_b_KeyStrtAlwBatPwr) && rtb_LeSTRR_b_KeyStrtAlwBatVolt);

    /* Logic: '<S518>/NOT1' */
    rtb_NOT1_n = !rtb_LeSTRR_b_HVBattStrtAllw;

    /* Switch: '<S517>/Switch' incorporates:
     *  Logic: '<S518>/Logical1'
     *  Logic: '<S518>/NOT4'
     */
    if (rtb_NOT1_n && (!rtb_LeSTRR_b_KeyStrtAlwBatPwr))
    {
        /* Switch: '<S517>/Switch' incorporates:
         *  DataStoreRead: '<S516>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S522>/FixPt Bitwise Operator1'
         */
        rtb_Switch_g = VeSTRR_g_StrtDisAllowRsn_DS | 2U;
    }
    else
    {
        /* Switch: '<S517>/Switch' incorporates:
         *  DataStoreRead: '<S516>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator5'
         */
        rtb_Switch_g = ~((~VeSTRR_g_StrtDisAllowRsn_DS) | 2U);
    }

    /* End of Switch: '<S517>/Switch' */

    /* Switch: '<S517>/Switch1' incorporates:
     *  Logic: '<S518>/Logical3'
     *  Logic: '<S518>/NOT5'
     */
    if (rtb_NOT1_n && (!rtb_LeSTRR_b_KeyStrtAlwBatVolt))
    {
        /* Switch: '<S517>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S523>/FixPt Bitwise Operator1'
         */
        rtb_Switch_g |= 4U;
    }
    else
    {
        /* Switch: '<S517>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S520>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S520>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S520>/FixPt Bitwise Operator5'
         */
        rtb_Switch_g = ~((~rtb_Switch_g) | 4U);
    }

    /* End of Switch: '<S517>/Switch1' */

    /* Switch: '<S517>/Switch4' incorporates:
     *  DataStoreWrite: '<S516>/Data Store Write1'
     *  Logic: '<S518>/Logical2'
     *  Logic: '<S518>/NOT3'
     *  S-Function (sfix_bitop): '<S521>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S521>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S521>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S524>/FixPt Bitwise Operator1'
     */
    if (rtb_NOT1_n && (!rtb_LeSTRR_b_KeyStrtAlwBatSOC))
    {
        VeSTRR_g_StrtDisAllowRsn_DS = rtb_Switch_g | 8U;
    }
    else
    {
        VeSTRR_g_StrtDisAllowRsn_DS = ~((~rtb_Switch_g) | 8U);
    }

    /* End of Switch: '<S517>/Switch4' */

    /* Logic: '<S330>/AND5' incorporates:
     *  Constant: '<S515>/Constant'
     *  Logic: '<S330>/NOT'
     *  RelationalOperator: '<S330>/Equal1'
     */
    *rty_StrtAllw = (((!rtu_ImmdStp) && rtb_LeSTRR_b_HVBattStrtAllw) &&
                     (((uint32)rtu_FCMdCmd) == CeHPMR_e_FC_Enabled));
}

#endif

/*
 * Output and update for atomic system:
 *    '<S307>/No_FC'
 *    '<S308>/NotActive'
 */
#if !Rte_SysCon_Variant_STRR_UseFCVar || (!Rte_SysCon_Variant_STRR_UseBEVVar && !Rte_SysCon_Variant_STRR_UseHybVar)

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_No_FC(P2VAR(boolean, AUTOMATIC,
    STRR_VAR_INIT) rty_ImmdStp, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_ImmdStpNeutRq, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT) rty_StrtAllwRaw,
    P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT) rty_STRR_RunCrnkActv)
{
    /* Constant: '<S310>/TRUE Constant3' */
    *rty_ImmdStp = false;

    /* Constant: '<S310>/TRUE Constant4' */
    *rty_ImmdStpNeutRq = false;

    /* Constant: '<S310>/TRUE Constant1' */
    *rty_StrtAllwRaw = true;

    /* Constant: '<S310>/TRUE Constant2' */
    *rty_STRR_RunCrnkActv = true;
}

#endif

/* Output and update for function-call system: '<S531>/EngOff' */
#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngOff(VAR(boolean, AUTOMATIC)
    rtu_ImmdStp)
{
    /* If: '<S532>/If' */
    if (rtu_ImmdStp)
    {
        /* Outputs for IfAction SubSystem: '<S532>/ImmedStp' incorporates:
         *  ActionPort: '<S538>/Action Port'
         */
        /* DataStoreWrite: '<S538>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S541>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_StopImmed;

        /* DataStoreWrite: '<S538>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S542>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_KeyOffFailTr;

        /* End of Outputs for SubSystem: '<S532>/ImmedStp' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S532>/NoStart' incorporates:
         *  ActionPort: '<S539>/Action Port'
         */
        /* DataStoreWrite: '<S539>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S543>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;

        /* End of Outputs for SubSystem: '<S532>/NoStart' */
    }

    /* End of If: '<S532>/If' */

    /* If: '<S532>/If1' incorporates:
     *  DataStoreRead: '<S532>/Dsr_StrtStopMdTmr1'
     *  DataTypeConversion: '<S532>/Data Type Conversion1'
     */
    if (((sint32)VeSTRR_e_HybStrtrSt_DS) != 1)
    {
        /* Outputs for IfAction SubSystem: '<S532>/STRC_EngOffInit' incorporates:
         *  ActionPort: '<S540>/Action Port'
         */
        /* DataStoreWrite: '<S540>/Dsw_HybStrtrSt' incorporates:
         *  Constant: '<S544>/Constant'
         */
        VeSTRR_e_HybStrtrSt_DS = CeSTRR_e_EngOffSt;

        /* End of Outputs for SubSystem: '<S532>/STRC_EngOffInit' */
    }

    /* End of If: '<S532>/If1' */
}

#endif

/* Output and update for function-call system: '<S531>/ImmedStop' */
#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_ImmedStop_p(VAR(boolean, AUTOMATIC)
    rtu_PSA, VAR(boolean, AUTOMATIC) rtu_PropSysStrtRdy, VAR(boolean, AUTOMATIC)
    rtu_RunCrnkActv, VAR(TeHVTR_e_HV_BatCntctrStat, AUTOMATIC)
    rtu_HVBatCntctrStat, VAR(TeTRGR_e_TransRangeState, AUTOMATIC) rtu_PRNDL, VAR
    (boolean, AUTOMATIC) rtu_PTCrnkAct, VAR(boolean, AUTOMATIC) rtu_BattOpnRq,
    VAR(boolean, AUTOMATIC) rtu_ClrDiagDsbl, VAR(TePMDR_e_KeyStatus, AUTOMATIC)
    rtu_KeyStatus, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT) rty_ImmdStp, P2VAR
    (boolean, AUTOMATIC, STRR_VAR_INIT) rty_ImmdStpNeutRq, P2CONST
    (ConstB_ImmedStop_STRR_ac_n_T, AUTOMATIC, STRR_VAR_INIT) localC, P2VAR
    (DW_ImmedStop_STRR_ac_j_T, AUTOMATIC, STRR_VAR_INIT) localDW)
{
    uint32 rtb_Switch_d;
    boolean rtb_AND_p3;
    boolean rtb_LeSTRR_b_BEVImmedStopBatCntctr;
    boolean rtb_LeSTRR_b_BEVImmedStopBatCntctrOpn;
    boolean rtb_LeSTRR_b_BEVImmedStopRunCrnkAct_tmp;
    boolean rtb_OR2;

    /* Logic: '<S545>/Logical' incorporates:
     *  Constant: '<S558>/Constant'
     *  Constant: '<S559>/Calib'
     *  RelationalOperator: '<S545>/Equal1'
     */
    rtb_LeSTRR_b_BEVImmedStopBatCntctr = ((KeSTRR_b_EnblCntctrStat_ImmedStop) &&
        (((uint32)rtu_HVBatCntctrStat) != CeHVTR_e_Closed));

    /* Switch: '<S548>/Switch' */
    if (rtb_LeSTRR_b_BEVImmedStopBatCntctr)
    {
        /* Switch: '<S548>/Switch' incorporates:
         *  DataStoreRead: '<S534>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S581>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d = VeSTRR_g_StrtDisAllowRsn_DS | 1U;
    }
    else
    {
        /* Switch: '<S548>/Switch' incorporates:
         *  DataStoreRead: '<S534>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S576>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S576>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S576>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~VeSTRR_g_StrtDisAllowRsn_DS) | 1U);
    }

    /* End of Switch: '<S548>/Switch' */

    /* Logic: '<S534>/NOT' incorporates:
     *  Logic: '<S554>/NOT1'
     *  Logic: '<S556>/NOT2'
     */
    rtb_LeSTRR_b_BEVImmedStopRunCrnkAct_tmp = !rtu_RunCrnkActv;

    /* Switch: '<S548>/Switch1' incorporates:
     *  Logic: '<S534>/NOT'
     */
    if (rtb_LeSTRR_b_BEVImmedStopRunCrnkAct_tmp)
    {
        /* Switch: '<S547>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S582>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 32U;
    }
    else
    {
        /* Switch: '<S547>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S577>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S577>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S577>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~rtb_Switch_d) | 32U);
    }

    /* End of Switch: '<S548>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S557>/Signal Latch On With Reset' */
    /* Logic: '<S628>/NOT' incorporates:
     *  Logic: '<S557>/Logical2'
     */
    rtb_LeSTRR_b_BEVImmedStopBatCntctrOpn = !rtu_PSA;

    /* Logic: '<S628>/OR1' incorporates:
     *  Logic: '<S628>/NOT'
     *  Logic: '<S628>/OR'
     *  UnitDelay: '<S628>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_k = (rtu_PTCrnkAct ||
        (rtb_LeSTRR_b_BEVImmedStopBatCntctrOpn && (localDW->UnitDelay_DSTATE_k)));

    /* End of Outputs for SubSystem: '<S557>/Signal Latch On With Reset' */

    /* Logic: '<S557>/AND' incorporates:
     *  Constant: '<S624>/Constant'
     *  Constant: '<S625>/Constant'
     *  Constant: '<S626>/Calib'
     *  Constant: '<S627>/Calib'
     *  Logic: '<S557>/Logical'
     *  Logic: '<S557>/Logical1'
     *  Logic: '<S557>/Logical3'
     *  Logic: '<S557>/Logical4'
     *  Logic: '<S557>/OR3'
     *  RelationalOperator: '<S557>/Equal17'
     *  RelationalOperator: '<S557>/Equal18'
     */
    VeSTRR_b_BEVImmedStopPwrMd = (rtb_LeSTRR_b_BEVImmedStopBatCntctrOpn && (((((
        !rtu_PTCrnkAct) && (localDW->UnitDelay_DSTATE_k)) &&
        (KeSTRR_b_StrtCntrlOffChkEnbl)) || (!rtu_PropSysStrtRdy)) ||
        (((CeTRGR_e_TransRangePark != ((uint32)rtu_PRNDL)) && (((uint32)
        rtu_PRNDL) != CeTRGR_e_TransRangeNeutral)) &&
         (KeSTRR_b_CheckParkAndNeutral))));

    /* Switch: '<S548>/Switch3' */
    if (VeSTRR_b_BEVImmedStopPwrMd)
    {
        /* Switch: '<S547>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S578>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S578>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S578>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S584>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d = (~((~rtb_Switch_d) | 256U)) | 1024U;
    }
    else
    {
        /* Switch: '<S547>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S578>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S578>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S578>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S579>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S579>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S579>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~(~((~rtb_Switch_d) | 256U))) | 1024U);
    }

    /* End of Switch: '<S548>/Switch3' */

    /* Switch: '<S548>/Switch4' incorporates:
     *  DataStoreWrite: '<S534>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S580>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S580>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S580>/FixPt Bitwise Operator5'
     */
    VeSTRR_g_StrtDisAllowRsn_DS = ~((~rtb_Switch_d) | 2048U);

    /* Logic: '<S546>/Logical6' incorporates:
     *  Constant: '<S561>/Calib'
     */
    rtb_LeSTRR_b_BEVImmedStopBatCntctrOpn = ((KeSTRR_b_EnblCntctrOpen_ImmedStop)
        && rtu_BattOpnRq);

    /* Logic: '<S555>/Logical7' incorporates:
     *  Constant: '<S622>/Constant'
     *  Constant: '<S623>/Calib'
     *  RelationalOperator: '<S555>/Equal3'
     */
    VeSTRR_b_BEVImmedStopPreRunCrnkDsbl = ((KeSTRR_b_EnblRunPreCrank_ImmedStop) &&
        (((uint32)rtu_KeyStatus) == CePMDR_e_KeySt_RunPreCrank));

    /* Logic: '<S534>/OR2' incorporates:
     *  Logic: '<S534>/NOT'
     */
    rtb_OR2 = (((((VeSTRR_b_BEVImmedStopPwrMd) ||
                  rtb_LeSTRR_b_BEVImmedStopRunCrnkAct_tmp) ||
                 rtb_LeSTRR_b_BEVImmedStopBatCntctr) ||
                rtb_LeSTRR_b_BEVImmedStopBatCntctrOpn) ||
               (VeSTRR_b_BEVImmedStopPreRunCrnkDsbl));

    /* Outputs for Atomic SubSystem: '<S551>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S617>/EdgeRising' */
    /* Logic: '<S618>/AND' incorporates:
     *  Logic: '<S618>/OR1'
     *  UnitDelay: '<S618>/Unit Delay'
     */
    rtb_AND_p3 = (rtb_OR2 && (!localDW->UnitDelay_DSTATE_fc));

    /* Update for UnitDelay: '<S618>/Unit Delay' */
    localDW->UnitDelay_DSTATE_fc = rtb_OR2;

    /* End of Outputs for SubSystem: '<S617>/EdgeRising' */

    /* Switch: '<S617>/Switch1' incorporates:
     *  Constant: '<S615>/Calib'
     *  Constant: '<S617>/Constant Value'
     *  Constant: '<S617>/Constant Value1'
     *  Logic: '<S617>/OR'
     *  Logic: '<S617>/OR1'
     *  MinMax: '<S617>/Minimum'
     *  Sum: '<S617>/Summation'
     *  UnitDelay: '<S617>/Unit Delay'
     */
    if ((!rtb_OR2) || rtb_AND_p3)
    {
        localDW->UnitDelay_DSTATE = 0U;
    }
    else if (KeSTRR_Cnt_ImmedStopDelayOn < ((uint16)(((uint32)
                localDW->UnitDelay_DSTATE) + 1U)))
    {
        /* MinMax: '<S617>/Minimum' incorporates:
         *  Constant: '<S615>/Calib'
         */
        localDW->UnitDelay_DSTATE = KeSTRR_Cnt_ImmedStopDelayOn;
    }
    else
    {
        /* MinMax: '<S617>/Minimum' incorporates:
         *  Constant: '<S617>/Constant Value'
         *  Sum: '<S617>/Summation'
         *  UnitDelay: '<S617>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE = (uint16)(((uint32)localDW->UnitDelay_DSTATE)
            + 1U);
    }

    /* End of Switch: '<S617>/Switch1' */

    /* Logic: '<S551>/Logical1' incorporates:
     *  Constant: '<S615>/Calib'
     *  Constant: '<S616>/Calib'
     *  Logic: '<S617>/AND'
     *  RelationalOperator: '<S617>/Greater  Than'
     *  UnitDelay: '<S617>/Unit Delay'
     */
    *rty_ImmdStp = ((rtb_OR2 && (localDW->UnitDelay_DSTATE >=
                      KeSTRR_Cnt_ImmedStopDelayOn)) || (KeSTRR_b_OvrrdImmedStop));

    /* End of Outputs for SubSystem: '<S551>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S546>/Signal Latch On With Reset5' */
    /* Logic: '<S562>/OR1' incorporates:
     *  Constant: '<S560>/Constant'
     *  DataStoreRead: '<S546>/Dsr_HybCrnkAbrd'
     *  Logic: '<S562>/NOT'
     *  Logic: '<S562>/OR'
     *  RelationalOperator: '<S546>/Comparison1'
     *  UnitDelay: '<S562>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_h = (rtb_LeSTRR_b_BEVImmedStopBatCntctrOpn ||
        ((((uint32)VeSTRR_e_HybStrtrSt_DS) != CeSTRR_e_KeyOffSt) &&
         (localDW->UnitDelay_DSTATE_h)));

    /* End of Outputs for SubSystem: '<S546>/Signal Latch On With Reset5' */

    /* Switch: '<S549>/Switch1' incorporates:
     *  Logic: '<S556>/NOT12'
     *  Logic: '<S556>/NOT9'
     *  Switch: '<S549>/Switch9'
     */
    if ((*rty_ImmdStp) && (localDW->UnitDelay_DSTATE_h))
    {
        /* Switch: '<S549>/Switch9' incorporates:
         *  Logic: '<S556>/NOT12'
         */
        if ((VeSTRR_b_BEVImmedStopPwrMd) && (*rty_ImmdStp))
        {
            rtb_Switch_d = localC->FixPtBitwiseOperator1_m;
        }
        else
        {
            rtb_Switch_d = localC->FixPtBitwiseOperator5_m;
        }

        /* Switch: '<S547>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S593>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S593>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S593>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S594>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S594>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S594>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S599>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d = (~((~(~((~rtb_Switch_d) | 16U))) | 32U)) | 64U;
    }
    else
    {
        if ((VeSTRR_b_BEVImmedStopPwrMd) && (*rty_ImmdStp))
        {
            /* Switch: '<S549>/Switch9' */
            rtb_Switch_d = localC->FixPtBitwiseOperator1_m;
        }
        else
        {
            /* Switch: '<S549>/Switch9' */
            rtb_Switch_d = localC->FixPtBitwiseOperator5_m;
        }

        /* Switch: '<S547>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S593>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S593>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S593>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S594>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S594>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S594>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S595>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S595>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S595>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~(~((~(~((~rtb_Switch_d) | 16U))) | 32U))) | 64U);
    }

    /* End of Switch: '<S549>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S550>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S613>/EdgeRising' */
    /* Logic: '<S614>/AND' incorporates:
     *  Logic: '<S614>/OR1'
     *  UnitDelay: '<S614>/Unit Delay'
     */
    rtb_LeSTRR_b_BEVImmedStopBatCntctrOpn = (rtb_LeSTRR_b_BEVImmedStopBatCntctr &&
        (!localDW->UnitDelay_DSTATE_i));

    /* Update for UnitDelay: '<S614>/Unit Delay' */
    localDW->UnitDelay_DSTATE_i = rtb_LeSTRR_b_BEVImmedStopBatCntctr;

    /* End of Outputs for SubSystem: '<S613>/EdgeRising' */

    /* Switch: '<S613>/Switch1' incorporates:
     *  Constant: '<S612>/Calib'
     *  Constant: '<S613>/Constant Value'
     *  Constant: '<S613>/Constant Value1'
     *  Logic: '<S613>/OR'
     *  Logic: '<S613>/OR1'
     *  MinMax: '<S613>/Minimum'
     *  Sum: '<S613>/Summation'
     *  UnitDelay: '<S613>/Unit Delay'
     */
    if ((!rtb_LeSTRR_b_BEVImmedStopBatCntctr) ||
            rtb_LeSTRR_b_BEVImmedStopBatCntctrOpn)
    {
        localDW->UnitDelay_DSTATE_f = 0U;
    }
    else if (KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc < ((uint16)(((uint32)
                localDW->UnitDelay_DSTATE_f) + 1U)))
    {
        /* MinMax: '<S613>/Minimum' incorporates:
         *  Constant: '<S612>/Calib'
         */
        localDW->UnitDelay_DSTATE_f = KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc;
    }
    else
    {
        /* MinMax: '<S613>/Minimum' incorporates:
         *  Constant: '<S613>/Constant Value'
         *  Sum: '<S613>/Summation'
         *  UnitDelay: '<S613>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_f = (uint16)(((uint32)
            localDW->UnitDelay_DSTATE_f) + 1U);
    }

    /* End of Switch: '<S613>/Switch1' */

    /* Logic: '<S613>/AND' incorporates:
     *  Constant: '<S612>/Calib'
     *  RelationalOperator: '<S613>/Greater  Than'
     *  UnitDelay: '<S613>/Unit Delay'
     */
    rtb_LeSTRR_b_BEVImmedStopBatCntctr = (rtb_LeSTRR_b_BEVImmedStopBatCntctr &&
        (localDW->UnitDelay_DSTATE_f >= KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc));

    /* End of Outputs for SubSystem: '<S550>/Turn On Delay Sample1' */

    /* Switch: '<S549>/Switch7' incorporates:
     *  Logic: '<S556>/NOT7'
     */
    if ((*rty_ImmdStp) && rtb_LeSTRR_b_BEVImmedStopBatCntctr)
    {
        /* Switch: '<S549>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S609>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d = (~((~rtb_Switch_d) | 128U)) | 256U;
    }
    else
    {
        /* Switch: '<S549>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S597>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S597>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S597>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~(~((~rtb_Switch_d) | 128U))) | 256U);
    }

    /* End of Switch: '<S549>/Switch7' */

    /* Switch: '<S549>/Switch8' incorporates:
     *  Constant: '<S616>/Calib'
     *  Logic: '<S556>/NOT6'
     */
    if ((*rty_ImmdStp) && (KeSTRR_b_OvrrdImmedStop))
    {
        /* Switch: '<S549>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S610>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 512U;
    }
    else
    {
        /* Switch: '<S549>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S598>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S598>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S598>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~rtb_Switch_d) | 512U);
    }

    /* End of Switch: '<S549>/Switch8' */

    /* Switch: '<S549>/Switch5' incorporates:
     *  Logic: '<S556>/NOT5'
     */
    if ((*rty_ImmdStp) && rtb_LeSTRR_b_BEVImmedStopRunCrnkAct_tmp)
    {
        /* Switch: '<S549>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S607>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 1024U;
    }
    else
    {
        /* Switch: '<S549>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S588>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S588>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S588>/FixPt Bitwise Operator5'
         */
        rtb_Switch_d = ~((~rtb_Switch_d) | 1024U);
    }

    /* End of Switch: '<S549>/Switch5' */

    /* Switch: '<S549>/Switch6' incorporates:
     *  Logic: '<S556>/NOT4'
     *  S-Function (sfix_bitop): '<S589>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S589>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S589>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S608>/FixPt Bitwise Operator1'
     */
    if ((*rty_ImmdStp) && (VeSTRR_b_BEVImmedStopPreRunCrnkDsbl))
    {
        rtb_Switch_d |= 2048U;
    }
    else
    {
        rtb_Switch_d = ~((~rtb_Switch_d) | 2048U);
    }

    /* End of Switch: '<S549>/Switch6' */

    /* Switch: '<S549>/Switch12' incorporates:
     *  DataStoreWrite: '<S534>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S590>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S590>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S590>/FixPt Bitwise Operator5'
     */
    VeSTRR_g_ImmedStopRsnCurr_DS = ~((~rtb_Switch_d) | 4096U);

    /* Outputs for Atomic SubSystem: '<S552>/EdgeRising1' */
    /* Logic: '<S619>/AND' incorporates:
     *  Logic: '<S619>/OR1'
     *  UnitDelay: '<S619>/Unit Delay'
     */
    VeSTRR_b_BEVImmedStopRsnClearPSA = (rtu_PSA && (!localDW->UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S619>/Unit Delay' */
    localDW->UnitDelay_DSTATE_n = rtu_PSA;

    /* End of Outputs for SubSystem: '<S552>/EdgeRising1' */

    /* Logic: '<S552>/Logical5' incorporates:
     *  Constant: '<S620>/Calib'
     */
    VeSTRR_b_BEVClrImmedStopRsn = (((KeSTRR_b_ClrImmedStpRsnHist) ||
        rtu_ClrDiagDsbl) || (VeSTRR_b_BEVImmedStopRsnClearPSA));

    /* Switch: '<S547>/Switch9' incorporates:
     *  Logic: '<S554>/NOT18'
     */
    if ((VeSTRR_b_BEVImmedStopPwrMd) && (*rty_ImmdStp))
    {
        /* Switch: '<S547>/Switch1' incorporates:
         *  DataStoreRead: '<S554>/Dsr_PID_AStrtEntry1'
         *  S-Function (sfix_bitop): '<S575>/FixPt Bitwise Operator1'
         *  Switch: '<S547>/Switch10'
         */
        rtb_Switch_d = NeSTRR_g_ImmedStopRsn | 8U;
    }
    else
    {
        /* Switch: '<S547>/Switch1' incorporates:
         *  DataStoreRead: '<S554>/Dsr_PID_AStrtEntry1'
         *  Switch: '<S547>/Switch10'
         */
        rtb_Switch_d = NeSTRR_g_ImmedStopRsn;
    }

    /* End of Switch: '<S547>/Switch9' */

    /* Switch: '<S547>/Switch1' incorporates:
     *  Logic: '<S554>/NOT28'
     */
    if ((localDW->UnitDelay_DSTATE_h) && (*rty_ImmdStp))
    {
        /* Switch: '<S547>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S563>/FixPt Bitwise Operator1'
         *  Switch: '<S547>/Switch4'
         */
        rtb_Switch_d |= 64U;
    }

    /* End of Switch: '<S547>/Switch1' */

    /* Switch: '<S547>/Switch7' incorporates:
     *  Logic: '<S554>/NOT26'
     */
    if (rtb_LeSTRR_b_BEVImmedStopBatCntctr && (*rty_ImmdStp))
    {
        /* Switch: '<S547>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S573>/FixPt Bitwise Operator1'
         *  Switch: '<S547>/Switch2'
         */
        rtb_Switch_d |= 256U;
    }

    /* End of Switch: '<S547>/Switch7' */

    /* Switch: '<S547>/Switch8' incorporates:
     *  Constant: '<S616>/Calib'
     *  Logic: '<S554>/NOT25'
     */
    if ((KeSTRR_b_OvrrdImmedStop) && (*rty_ImmdStp))
    {
        /* Switch: '<S547>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S574>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 512U;
    }

    /* End of Switch: '<S547>/Switch8' */

    /* Switch: '<S547>/Switch5' incorporates:
     *  Logic: '<S554>/NOT24'
     */
    if (rtb_LeSTRR_b_BEVImmedStopRunCrnkAct_tmp && (*rty_ImmdStp))
    {
        /* Switch: '<S547>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S571>/FixPt Bitwise Operator1'
         */
        rtb_Switch_d |= 1024U;
    }

    /* End of Switch: '<S547>/Switch5' */

    /* Switch: '<S552>/Switch5' incorporates:
     *  Constant: '<S552>/Constant Value'
     *  DataStoreWrite: '<S552>/Dsw_PID_AStrtEntry3'
     *  Logic: '<S554>/NOT23'
     *  Switch: '<S547>/Switch6'
     */
    if (VeSTRR_b_BEVClrImmedStopRsn)
    {
        NeSTRR_g_ImmedStopRsn = 0U;
    }
    else if ((*rty_ImmdStp) && (VeSTRR_b_BEVImmedStopPreRunCrnkDsbl))
    {
        /* Switch: '<S547>/Switch6' incorporates:
         *  DataStoreWrite: '<S552>/Dsw_PID_AStrtEntry3'
         *  S-Function (sfix_bitop): '<S572>/FixPt Bitwise Operator1'
         */
        NeSTRR_g_ImmedStopRsn = rtb_Switch_d | 2048U;
    }
    else
    {
        /* DataStoreWrite: '<S552>/Dsw_PID_AStrtEntry3' incorporates:
         *  Switch: '<S547>/Switch6'
         */
        NeSTRR_g_ImmedStopRsn = rtb_Switch_d;
    }

    /* End of Switch: '<S552>/Switch5' */

    /* Switch: '<S621>/Switch1' */
    *rty_ImmdStpNeutRq = *rty_ImmdStp;
}

#endif

/* Output and update for function-call system: '<S535>/KeyOffInit' */
#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffInit_m(void)
{
    /* DataStoreWrite: '<S630>/Dsw_HybStrtrSt' incorporates:
     *  Constant: '<S637>/Constant'
     */
    VeSTRR_e_HybStrtrSt_DS = CeSTRR_e_KeyOffSt;

    /* DataStoreWrite: '<S630>/Dsw_STMTrigger' incorporates:
     *  Constant: '<S638>/Constant'
     */
    VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;
}

#endif

/*
 * Output and update for action system:
 *    '<S629>/ImmedStp'
 *    '<S985>/ImmedStp'
 */
#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_ImmedStp(P2VAR
    (TeSTRR_e_EngStrtStopType, AUTOMATIC, STRR_VAR_INIT) rty_Type)
{
    /* SignalConversion generated from: '<S633>/Type' incorporates:
     *  Constant: '<S636>/Constant'
     */
    *rty_Type = CeSTRR_e_StopImmed;
}

#endif

/* Output and update for function-call system: '<S535>/KeyOffDur' */
#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffDur_l(VAR(boolean, AUTOMATIC)
    rtu_PTCrnkAct, VAR(boolean, AUTOMATIC) rtu_StrtAllwd, VAR(boolean, AUTOMATIC)
    rtu_ImmdStp)
{
    /* If: '<S629>/If1' */
    if (rtu_ImmdStp)
    {
        /* Outputs for IfAction SubSystem: '<S629>/ImmedStp' incorporates:
         *  ActionPort: '<S633>/Action Port'
         */
        /* DataStoreWrite: '<S629>/Dsw_EngStrtStopType' */
        STRR_ac_ImmedStp((&(VeSTRR_e_EngStrtStopType_DS)));

        /* End of Outputs for SubSystem: '<S629>/ImmedStp' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S629>/HCP_ArbStrtTyp' incorporates:
         *  ActionPort: '<S632>/Action Port'
         */
        /* DataStoreWrite: '<S629>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S635>/Constant'
         *  Merge: '<S629>/Merge'
         *  SignalConversion generated from: '<S632>/Type'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_NoAction;

        /* End of Outputs for SubSystem: '<S629>/HCP_ArbStrtTyp' */
    }

    /* End of If: '<S629>/If1' */

    /* If: '<S629>/If' incorporates:
     *  Logic: '<S629>/Logical'
     */
    if (rtu_StrtAllwd && rtu_PTCrnkAct)
    {
        /* Outputs for IfAction SubSystem: '<S629>/EngOffEntry' incorporates:
         *  ActionPort: '<S631>/Action Port'
         */
        /* DataStoreWrite: '<S631>/Dsw_STMTrigger1' incorporates:
         *  Constant: '<S634>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngOffTr;

        /* End of Outputs for SubSystem: '<S629>/EngOffEntry' */
    }

    /* End of If: '<S629>/If' */
}

#endif

/* Output and update for function-call system: '<S531>/EngStrtAllowed' */
#if Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStrtAllowed(VAR(boolean, AUTOMATIC)
    rtu_ImmdStp, VAR(boolean, AUTOMATIC) rtu_RunCrnkActv)
{
    /* Logic: '<S533>/AND3' incorporates:
     *  Logic: '<S533>/NOT'
     */
    VeSTRR_b_BEVStartAllowed = ((!rtu_ImmdStp) && rtu_RunCrnkActv);
}

#endif

/* Output and update for function-call system: '<S640>/EngOff' */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngOff_g(VAR(TeESSR_e_EngStartStopSt,
    AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC) rtu_CmndEngOn, VAR
    (TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_HCPStrtTyp, VAR(boolean, AUTOMATIC)
    rtu_ImmdStp, VAR(boolean, AUTOMATIC) rtu_PTCrnkAct, VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) rtu_PRNDL, VAR(boolean, AUTOMATIC)
    rtu_StrtAllwd, VAR(boolean, AUTOMATIC) rtu_StrtChkMdUp, P2VAR
    (DW_EngOff_STRR_ac_b_T, AUTOMATIC, STRR_VAR_INIT) localDW)
{
    boolean rtb_AND_mi;
    boolean rtb_Logical1_h3;
    boolean rtb_UnitDelay_b;

    /* Sum: '<S641>/Sum' incorporates:
     *  Constant: '<S653>/Calib'
     *  DataStoreRead: '<S641>/Dsr_StrtStopMdTmr3'
     */
    VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS = VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS +
        HeSTRR_t_MedTEB_dT;

    /* Outputs for Atomic SubSystem: '<S641>/Limiter1' */
    /* Switch: '<S656>/Switch1' incorporates:
     *  Constant: '<S655>/Calib'
     *  RelationalOperator: '<S656>/Relational Operator'
     */
    if (KeSTRR_t_AutoStrt4KeyStrtDlyTm < VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS)
    {
        /* Switch: '<S656>/Switch1' */
        VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS = KeSTRR_t_AutoStrt4KeyStrtDlyTm;
    }

    /* End of Switch: '<S656>/Switch1' */

    /* Switch: '<S656>/Switch' incorporates:
     *  Constant: '<S641>/Constant Value17'
     *  DataStoreWrite: '<S641>/Dsw_StrtStopMdTmr'
     *  RelationalOperator: '<S656>/Relational Operator1'
     */
    if (VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS <= 0.0F)
    {
        VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS = 0.0F;
    }

    /* End of Switch: '<S656>/Switch' */
    /* End of Outputs for SubSystem: '<S641>/Limiter1' */

    /* Logic: '<S651>/Logical4' incorporates:
     *  Constant: '<S678>/Constant'
     *  Constant: '<S680>/Constant'
     *  Constant: '<S690>/Calib'
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr11'
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr13'
     *  DataStoreWrite: '<S651>/Dsw_StrtStopMdTmr1'
     *  Logic: '<S651>/Logical5'
     *  RelationalOperator: '<S651>/Comparison1'
     *  RelationalOperator: '<S651>/Comparison3'
     */
    VeSTRR_b_KeyCrnkEngOnDlyActv_DS = (((((VeSTRR_b_StrtCtrlLatched_DS) &&
        (!VeSTRR_b_StrtCtrlDelayed_DS)) && (((uint32)rtu_EssSt) ==
        CeESSR_e_EngOff)) && (KeSTRR_b_EnblEngOnDlyForKeyCrnk)) && (((uint32)
        VeSTRR_e_StrtChkMod_DS) == CeSTRR_e_EvalDlydKeyCrank));

    /* Outputs for Atomic SubSystem: '<S651>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S692>/EdgeFalling1' */
    /* UnitDelay: '<S677>/Unit Delay' incorporates:
     *  UnitDelay: '<S696>/Unit Delay'
     */
    rtb_UnitDelay_b = localDW->UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S696>/Unit Delay' */
    localDW->UnitDelay_DSTATE_o = rtu_PTCrnkAct;

    /* Outputs for Atomic SubSystem: '<S651>/Turn On Delay Sample' */
    /* Logic: '<S696>/OR1' incorporates:
     *  Logic: '<S693>/OR1'
     */
    rtb_Logical1_h3 = !rtu_PTCrnkAct;

    /* End of Outputs for SubSystem: '<S651>/Turn On Delay Sample' */

    /* Switch: '<S692>/Switch' incorporates:
     *  Constant: '<S681>/Calib'
     *  Constant: '<S691>/Calib'
     *  Constant: '<S692>/Constant Value1'
     *  Logic: '<S696>/AND'
     *  Logic: '<S696>/OR1'
     *  MinMax: '<S692>/Minimum'
     *  Sum: '<S692>/Summation'
     *  UnitDelay: '<S692>/Unit Delay'
     */
    if (rtb_Logical1_h3 && rtb_UnitDelay_b)
    {
        localDW->UnitDelay_DSTATE_j = KeSTRR_t_KeyCrnkEngOnDlyTime;
    }
    else
    {
        localDW->UnitDelay_DSTATE_j = fmaxf(localDW->UnitDelay_DSTATE_j -
            HeSTRR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S692>/Switch' */
    /* End of Outputs for SubSystem: '<S692>/EdgeFalling1' */

    /* Switch: '<S683>/Switch1' incorporates:
     *  Constant: '<S692>/Constant Value2'
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr4'
     *  DataStoreWrite: '<S651>/Dsw_StrtStopMdTmr2'
     *  Logic: '<S692>/AND'
     *  RelationalOperator: '<S692>/Greater  Than'
     *  UnitDelay: '<S692>/Unit Delay'
     */
    VeSTRR_b_StrtCtrlLatched_DS = ((VeSTRR_b_StrtCtrlTriggered_DS) &&
        (rtu_PTCrnkAct || (localDW->UnitDelay_DSTATE_j > 0.0F)));

    /* End of Outputs for SubSystem: '<S651>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S651>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S695>/EdgeRising' */
    /* Logic: '<S699>/AND' incorporates:
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr1'
     *  Logic: '<S699>/OR1'
     *  UnitDelay: '<S699>/Unit Delay'
     */
    rtb_UnitDelay_b = ((VeSTRR_b_StrtCtrlLatched_DS) &&
                       (!localDW->UnitDelay_DSTATE_jg));

    /* Update for UnitDelay: '<S699>/Unit Delay' incorporates:
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr1'
     */
    localDW->UnitDelay_DSTATE_jg = VeSTRR_b_StrtCtrlLatched_DS;

    /* End of Outputs for SubSystem: '<S695>/EdgeRising' */

    /* Switch: '<S695>/Switch1' incorporates:
     *  Constant: '<S681>/Calib'
     *  Constant: '<S691>/Calib'
     *  Constant: '<S695>/Constant Value1'
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr1'
     *  Logic: '<S695>/OR'
     *  Logic: '<S695>/OR1'
     *  MinMax: '<S695>/Minimum'
     *  Sum: '<S695>/Summation'
     *  UnitDelay: '<S695>/Unit Delay'
     */
    if ((!VeSTRR_b_StrtCtrlLatched_DS) || rtb_UnitDelay_b)
    {
        localDW->UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        localDW->UnitDelay_DSTATE = fminf(KeSTRR_t_KeyCrnkEngOnDlyTime,
            HeSTRR_t_MedTEB_dT + localDW->UnitDelay_DSTATE);
    }

    /* End of Switch: '<S695>/Switch1' */

    /* Switch: '<S682>/Switch1' incorporates:
     *  Constant: '<S691>/Calib'
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr1'
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr5'
     *  DataStoreWrite: '<S651>/Dsw_StrtStopMdTmr3'
     *  Logic: '<S695>/AND'
     *  RelationalOperator: '<S695>/Greater  Than'
     *  UnitDelay: '<S695>/Unit Delay'
     */
    VeSTRR_b_StrtCtrlDelayed_DS = ((VeSTRR_b_StrtCtrlTriggered_DS) &&
        ((VeSTRR_b_StrtCtrlLatched_DS) && (localDW->UnitDelay_DSTATE >=
        KeSTRR_t_KeyCrnkEngOnDlyTime)));

    /* End of Outputs for SubSystem: '<S651>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S651>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S693>/EdgeRising' */
    /* UnitDelay: '<S677>/Unit Delay' incorporates:
     *  UnitDelay: '<S697>/Unit Delay'
     */
    rtb_UnitDelay_b = localDW->UnitDelay_DSTATE_e;

    /* Update for UnitDelay: '<S697>/Unit Delay' */
    localDW->UnitDelay_DSTATE_e = rtu_PTCrnkAct;

    /* Switch: '<S693>/Switch1' incorporates:
     *  Constant: '<S688>/Calib'
     *  Constant: '<S693>/Constant Value'
     *  Constant: '<S693>/Constant Value1'
     *  Logic: '<S693>/OR'
     *  Logic: '<S697>/AND'
     *  Logic: '<S697>/OR1'
     *  MinMax: '<S693>/Minimum'
     *  Sum: '<S693>/Summation'
     *  UnitDelay: '<S693>/Unit Delay'
     */
    if (rtb_Logical1_h3 || (rtu_PTCrnkAct && (!rtb_UnitDelay_b)))
    {
        localDW->UnitDelay_DSTATE_g = 0U;
    }
    else if (KeSTRR_Cnt_StrtCtrlDbncDelayOn < ((uint16)(((uint32)
                localDW->UnitDelay_DSTATE_g) + 1U)))
    {
        /* MinMax: '<S693>/Minimum' incorporates:
         *  Constant: '<S688>/Calib'
         */
        localDW->UnitDelay_DSTATE_g = KeSTRR_Cnt_StrtCtrlDbncDelayOn;
    }
    else
    {
        /* MinMax: '<S693>/Minimum' incorporates:
         *  Constant: '<S693>/Constant Value'
         *  Sum: '<S693>/Summation'
         *  UnitDelay: '<S693>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_g = (uint16)(((uint32)
            localDW->UnitDelay_DSTATE_g) + 1U);
    }

    /* End of Switch: '<S693>/Switch1' */
    /* End of Outputs for SubSystem: '<S693>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S651>/Turn On Delay Sample' */

    /* Switch: '<S685>/Switch1' incorporates:
     *  Constant: '<S688>/Calib'
     *  Constant: '<S689>/Calib'
     *  Logic: '<S651>/Logical9'
     *  Logic: '<S693>/AND'
     *  RelationalOperator: '<S693>/Greater  Than'
     *  UnitDelay: '<S693>/Unit Delay'
     */
    if (KeSTRR_b_DbncStartReqInput)
    {
        /* Outputs for Atomic SubSystem: '<S651>/Turn On Delay Sample' */
        rtb_Logical1_h3 = ((rtu_PTCrnkAct && (localDW->UnitDelay_DSTATE_g >=
                             KeSTRR_Cnt_StrtCtrlDbncDelayOn)) && rtu_PTCrnkAct);

        /* End of Outputs for SubSystem: '<S651>/Turn On Delay Sample' */
    }
    else
    {
        rtb_Logical1_h3 = rtu_PTCrnkAct;
    }

    /* End of Switch: '<S685>/Switch1' */

    /* Switch: '<S686>/Switch1' incorporates:
     *  DataStoreWrite: '<S651>/Dsw_StrtStopMdTmr4'
     */
    VeSTRR_b_StrtCtrlTriggered_DS = (rtb_Logical1_h3 ||
        (VeSTRR_b_StrtCtrlTriggered_DS));

    /* Logic: '<S651>/Logical3' incorporates:
     *  Logic: '<S650>/Logical2'
     */
    rtb_Logical1_h3 = !rtu_CmndEngOn;

    /* Logic: '<S651>/Logical6' incorporates:
     *  Constant: '<S679>/Constant'
     *  Constant: '<S690>/Calib'
     *  DataStoreWrite: '<S651>/Dsw_StrtStopMdTmr1'
     *  Logic: '<S651>/Logical3'
     *  RelationalOperator: '<S651>/Comparison5'
     *  RelationalOperator: '<S651>/Comparison7'
     */
    VeSTRR_b_DlyKCrankCondsMet = ((((KeSTRR_b_EnblEngOnDlyForKeyCrnk) &&
        rtb_Logical1_h3) && (VeSTRR_b_KeyCrnkEngOnDlyActv_DS)) && (((uint32)
        rtu_PRNDL) == CeTRGR_e_TransRangePark));

    /* Logic: '<S651>/Logical7' incorporates:
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr2'
     *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr3'
     */
    VeSTRR_b_ImmedDlyStrCtrl = ((VeSTRR_b_StrtCtrlTriggered_DS) &&
        (VeSTRR_b_StrtCtrlLatched_DS));

    /* Logic: '<S651>/Logical1' incorporates:
     *  Constant: '<S690>/Calib'
     *  Logic: '<S651>/Logical2'
     *  RelationalOperator: '<S651>/Comparison5'
     */
    VeSTRR_b_ImmedNrmlStrtCtrl = (rtu_PTCrnkAct &&
        (!KeSTRR_b_EnblEngOnDlyForKeyCrnk));

    /* Logic: '<S651>/Logical8' */
    rtb_UnitDelay_b = ((VeSTRR_b_ImmedDlyStrCtrl) || (VeSTRR_b_ImmedNrmlStrtCtrl));

    /* Outputs for Atomic SubSystem: '<S651>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S694>/EdgeRising' */
    /* Logic: '<S698>/AND' incorporates:
     *  Logic: '<S698>/OR1'
     *  UnitDelay: '<S698>/Unit Delay'
     */
    rtb_AND_mi = (rtb_UnitDelay_b && (!localDW->UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S698>/Unit Delay' */
    localDW->UnitDelay_DSTATE_f = rtb_UnitDelay_b;

    /* End of Outputs for SubSystem: '<S694>/EdgeRising' */

    /* Switch: '<S694>/Switch1' incorporates:
     *  Constant: '<S687>/Calib'
     *  Constant: '<S694>/Constant Value'
     *  Constant: '<S694>/Constant Value1'
     *  Logic: '<S694>/OR'
     *  Logic: '<S694>/OR1'
     *  MinMax: '<S694>/Minimum'
     *  Sum: '<S694>/Summation'
     *  UnitDelay: '<S694>/Unit Delay'
     */
    if ((!rtb_UnitDelay_b) || rtb_AND_mi)
    {
        localDW->UnitDelay_DSTATE_d = 0U;
    }
    else if (KeSTRR_Cnt_ImmedStrtCtrlDbnc < ((uint16)(((uint32)
                localDW->UnitDelay_DSTATE_d) + 1U)))
    {
        /* MinMax: '<S694>/Minimum' incorporates:
         *  Constant: '<S687>/Calib'
         */
        localDW->UnitDelay_DSTATE_d = KeSTRR_Cnt_ImmedStrtCtrlDbnc;
    }
    else
    {
        /* MinMax: '<S694>/Minimum' incorporates:
         *  Constant: '<S694>/Constant Value'
         *  Sum: '<S694>/Summation'
         *  UnitDelay: '<S694>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_d = (uint16)(((uint32)
            localDW->UnitDelay_DSTATE_d) + 1U);
    }

    /* End of Switch: '<S694>/Switch1' */
    /* End of Outputs for SubSystem: '<S651>/Turn On Delay Sample1' */

    /* Switch: '<S684>/Switch1' */
    if (VeSTRR_b_DlyKCrankCondsMet)
    {
        /* Switch: '<S684>/Switch1' incorporates:
         *  DataStoreRead: '<S651>/Dsr_StrtStopMdTmr6'
         */
        VeSTRR_b_StartCtrl = VeSTRR_b_StrtCtrlDelayed_DS;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S651>/Turn On Delay Sample1' */
        /* Switch: '<S684>/Switch1' incorporates:
         *  Constant: '<S687>/Calib'
         *  Logic: '<S694>/AND'
         *  RelationalOperator: '<S694>/Greater  Than'
         *  UnitDelay: '<S694>/Unit Delay'
         */
        VeSTRR_b_StartCtrl = (rtb_UnitDelay_b && (localDW->UnitDelay_DSTATE_d >=
                               KeSTRR_Cnt_ImmedStrtCtrlDbnc));

        /* End of Outputs for SubSystem: '<S651>/Turn On Delay Sample1' */
    }

    /* End of Switch: '<S684>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S650>/EdgeRising' */
    /* Logic: '<S661>/AND' incorporates:
     *  Logic: '<S661>/OR1'
     *  UnitDelay: '<S661>/Unit Delay'
     */
    VeSTRR_b_DelayedKeyCrnkExitTrgr = ((VeSTRR_b_StartCtrl) &&
        (!localDW->UnitDelay_DSTATE_oj));

    /* Update for UnitDelay: '<S661>/Unit Delay' */
    localDW->UnitDelay_DSTATE_oj = VeSTRR_b_StartCtrl;

    /* End of Outputs for SubSystem: '<S650>/EdgeRising' */

    /* UnitDelay: '<S677>/Unit Delay' incorporates:
     *  Constant: '<S662>/Constant'
     *  RelationalOperator: '<S650>/Comparison2'
     */
    rtb_UnitDelay_b = (((uint32)VeSTRR_e_StrtChkMod_DS) ==
                       CeSTRR_e_SilentStrtEntry);

    /* Logic: '<S650>/Logical1' */
    rtb_Logical1_h3 = (rtb_Logical1_h3 && rtb_UnitDelay_b);

    /* Outputs for Atomic SubSystem: '<S650>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S669>/EdgeRising' */
    /* Logic: '<S676>/AND' incorporates:
     *  Logic: '<S676>/OR1'
     *  UnitDelay: '<S676>/Unit Delay'
     */
    rtb_AND_mi = (rtb_Logical1_h3 && (!localDW->UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S676>/Unit Delay' */
    localDW->UnitDelay_DSTATE_c = rtb_Logical1_h3;

    /* End of Outputs for SubSystem: '<S669>/EdgeRising' */

    /* Switch: '<S669>/Switch1' incorporates:
     *  Constant: '<S663>/Calib'
     *  Constant: '<S664>/Calib'
     *  Constant: '<S669>/Constant Value1'
     *  Logic: '<S669>/OR'
     *  Logic: '<S669>/OR1'
     *  MinMax: '<S669>/Minimum'
     *  Sum: '<S669>/Summation'
     *  UnitDelay: '<S669>/Unit Delay'
     */
    if ((!rtb_Logical1_h3) || rtb_AND_mi)
    {
        localDW->UnitDelay_DSTATE_a = 0.0F;
    }
    else
    {
        localDW->UnitDelay_DSTATE_a = fminf(KeSTRR_t_CalLdrTransitionDly,
            HeSTRR_t_MedTEB_dT + localDW->UnitDelay_DSTATE_a);
    }

    /* End of Switch: '<S669>/Switch1' */
    /* End of Outputs for SubSystem: '<S650>/Turn On Delay Time1' */

    /* Logic: '<S650>/Logical10' */
    rtb_UnitDelay_b = (rtb_UnitDelay_b && rtu_CmndEngOn);

    /* Outputs for Atomic SubSystem: '<S650>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S670>/EdgeRising' */
    /* Logic: '<S677>/AND' incorporates:
     *  Logic: '<S677>/OR1'
     *  UnitDelay: '<S677>/Unit Delay'
     */
    rtb_AND_mi = (rtb_UnitDelay_b && (!localDW->UnitDelay_DSTATE_fj));

    /* Update for UnitDelay: '<S677>/Unit Delay' */
    localDW->UnitDelay_DSTATE_fj = rtb_UnitDelay_b;

    /* End of Outputs for SubSystem: '<S670>/EdgeRising' */

    /* Switch: '<S670>/Switch1' incorporates:
     *  Constant: '<S663>/Calib'
     *  Constant: '<S664>/Calib'
     *  Constant: '<S670>/Constant Value1'
     *  Logic: '<S670>/OR'
     *  Logic: '<S670>/OR1'
     *  MinMax: '<S670>/Minimum'
     *  Sum: '<S670>/Summation'
     *  UnitDelay: '<S670>/Unit Delay'
     */
    if ((!rtb_UnitDelay_b) || rtb_AND_mi)
    {
        localDW->UnitDelay_DSTATE_p = 0.0F;
    }
    else
    {
        localDW->UnitDelay_DSTATE_p = fminf(KeSTRR_t_CalLdrTransitionDly,
            HeSTRR_t_MedTEB_dT + localDW->UnitDelay_DSTATE_p);
    }

    /* End of Switch: '<S670>/Switch1' */
    /* End of Outputs for SubSystem: '<S650>/Turn On Delay Time2' */

    /* If: '<S650>/If' incorporates:
     *  Constant: '<S664>/Calib'
     *  Logic: '<S669>/AND'
     *  Logic: '<S670>/AND'
     *  RelationalOperator: '<S669>/Greater  Than'
     *  RelationalOperator: '<S670>/Greater  Than'
     *  UnitDelay: '<S669>/Unit Delay'
     *  UnitDelay: '<S670>/Unit Delay'
     */
    if (VeSTRR_b_DelayedKeyCrnkExitTrgr)
    {
        /* Outputs for IfAction SubSystem: '<S650>/Normal_SilentStartEntry' incorporates:
         *  ActionPort: '<S667>/Action Port'
         */
        /* Switch: '<S674>/Switch1' */
        if (rtu_StrtChkMdUp)
        {
            /* RelationalOperator: '<S651>/Comparison3' incorporates:
             *  Constant: '<S672>/Constant'
             */
            VeSTRR_e_StrtChkMod_DS = CeSTRR_e_SilentStrtEntry;
        }
        else
        {
            /* RelationalOperator: '<S651>/Comparison3' incorporates:
             *  Constant: '<S673>/Constant'
             */
            VeSTRR_e_StrtChkMod_DS = CeSTRR_e_Normal;
        }

        /* End of Switch: '<S674>/Switch1' */
        /* End of Outputs for SubSystem: '<S650>/Normal_SilentStartEntry' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S650>/Turn On Delay Time1' */
        if (rtb_Logical1_h3 && (localDW->UnitDelay_DSTATE_a >=
                                KeSTRR_t_CalLdrTransitionDly))
        {
            /* Outputs for IfAction SubSystem: '<S650>/SilentStartExit' incorporates:
             *  ActionPort: '<S668>/Action Port'
             */
            /* RelationalOperator: '<S651>/Comparison3' incorporates:
             *  Constant: '<S675>/Constant'
             *  DataStoreWrite: '<S668>/Dsw_SilentStrtChkMod'
             */
            VeSTRR_e_StrtChkMod_DS = CeSTRR_e_SilentStrtExit;

            /* End of Outputs for SubSystem: '<S650>/SilentStartExit' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S650>/Turn On Delay Time2' */
            if (rtb_UnitDelay_b && (localDW->UnitDelay_DSTATE_p >=
                                    KeSTRR_t_CalLdrTransitionDly))
            {
                /* Outputs for IfAction SubSystem: '<S650>/Normal' incorporates:
                 *  ActionPort: '<S666>/Action Port'
                 */
                /* RelationalOperator: '<S651>/Comparison3' incorporates:
                 *  Constant: '<S671>/Constant'
                 *  DataStoreWrite: '<S666>/Dsw_SilentStrtChkMod'
                 */
                VeSTRR_e_StrtChkMod_DS = CeSTRR_e_Normal;

                /* End of Outputs for SubSystem: '<S650>/Normal' */
            }

            /* End of Outputs for SubSystem: '<S650>/Turn On Delay Time2' */
        }

        /* End of Outputs for SubSystem: '<S650>/Turn On Delay Time1' */
    }

    /* End of If: '<S650>/If' */

    /* If: '<S641>/If' incorporates:
     *  Constant: '<S655>/Calib'
     *  Constant: '<S700>/Constant'
     *  Constant: '<S701>/Constant'
     *  Constant: '<S707>/Calib'
     *  DataStoreRead: '<S652>/Data Store Read1'
     *  DataStoreWrite: '<S641>/Dsw_StrtStopMdTmr'
     *  Logic: '<S641>/Logical'
     *  Logic: '<S652>/AND'
     *  Logic: '<S652>/AND1'
     *  Logic: '<S657>/AND1'
     *  RelationalOperator: '<S641>/Comparison4'
     *  RelationalOperator: '<S652>/Greater Than or Equal '
     *  RelationalOperator: '<S652>/Less Than  or Equal1'
     */
    if (rtu_ImmdStp)
    {
        /* Outputs for IfAction SubSystem: '<S641>/ImmedStp' incorporates:
         *  ActionPort: '<S654>/Action Port'
         */
        /* DataStoreWrite: '<S654>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S702>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_StopImmed;

        /* DataStoreWrite: '<S654>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S703>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_KeyOffFailTr;

        /* DataStoreWrite: '<S654>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S654>/FALSE Constant'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* End of Outputs for SubSystem: '<S641>/ImmedStp' */
    }
    else if (((((uint32)rtu_EssSt) >= CeESSR_e_InitEngSpinSt) && (((uint32)
                rtu_EssSt) <= CeESSR_e_StrtEngOnlyChngMind)) &&
             (VeSTRR_b_StrtDtct_DS))
    {
        /* Outputs for IfAction SubSystem: '<S641>/StartCnfrmd' incorporates:
         *  ActionPort: '<S659>/Action Port'
         */
        /* DataStoreWrite: '<S659>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S711>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngStartTr;

        /* DataStoreWrite: '<S659>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S659>/TRUE Constant'
         */
        VeSTRR_b_EngOnReq_DS = true;

        /* DataStoreWrite: '<S659>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S659>/TRUE Constant1'
         */
        VeSTRR_b_StrtDtct_DS = true;

        /* DataStoreWrite: '<S659>/Dsw_StrtFail5' incorporates:
         *  Constant: '<S659>/FALSE Constant2'
         */
        VeSTRR_b_StpDtct_DS = false;

        /* End of Outputs for SubSystem: '<S641>/StartCnfrmd' */
    }
    else if ((rtu_CmndEngOn && (KeSTRR_t_AutoStrt4KeyStrtDlyTm ==
                                VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS)) &&
             rtu_StrtAllwd)
    {
        /* Outputs for IfAction SubSystem: '<S641>/StartRq' incorporates:
         *  ActionPort: '<S660>/Action Port'
         */
        /* DataStoreWrite: '<S660>/Dsw_EngStrtStopType' */
        VeSTRR_e_EngStrtStopType_DS = rtu_HCPStrtTyp;

        /* DataStoreWrite: '<S660>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S712>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;

        /* DataStoreWrite: '<S660>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S660>/TRUE Constant'
         */
        VeSTRR_b_EngOnReq_DS = true;

        /* DataStoreWrite: '<S660>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S660>/TRUE Constant1'
         */
        VeSTRR_b_StrtDtct_DS = true;

        /* DataStoreWrite: '<S660>/Dsw_StrtFail5' incorporates:
         *  Constant: '<S660>/FALSE Constant2'
         */
        VeSTRR_b_StpDtct_DS = false;

        /* End of Outputs for SubSystem: '<S641>/StartRq' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S641>/NoStart' incorporates:
         *  ActionPort: '<S657>/Action Port'
         */
        /* DataStoreWrite: '<S657>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S706>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;

        /* Outputs for Enabled SubSystem: '<S657>/AbrtAllwd' incorporates:
         *  EnablePort: '<S704>/Enable'
         */
        if (KeSTRR_b_AllowStartAborts)
        {
            /* DataStoreWrite: '<S704>/Dsw_EngStrtStopType' */
            VeSTRR_e_EngStrtStopType_DS = rtu_HCPStrtTyp;

            /* DataStoreWrite: '<S704>/Dsw_EngOnReq' incorporates:
             *  Constant: '<S704>/FALSE Constant2'
             */
            VeSTRR_b_EngOnReq_DS = false;

            /* DataStoreWrite: '<S704>/Dsw_StrtFail4' incorporates:
             *  Constant: '<S704>/FALSE Constant1'
             */
            VeSTRR_b_StrtDtct_DS = false;

            /* DataStoreWrite: '<S704>/Dsw_StrtFail5' incorporates:
             *  Constant: '<S704>/TRUE Constant2'
             */
            VeSTRR_b_StpDtct_DS = true;
        }

        /* End of Outputs for SubSystem: '<S657>/AbrtAllwd' */

        /* Outputs for Enabled SubSystem: '<S657>/AbrtNotAllwd' incorporates:
         *  EnablePort: '<S705>/Enable'
         */
        if (!KeSTRR_b_AllowStartAborts)
        {
            /* Switch: '<S709>/Switch1' incorporates:
             *  Constant: '<S705>/FALSE Constant1'
             *  DataStoreRead: '<S705>/Data Store Read3'
             *  DataStoreWrite: '<S705>/Dsw_EngOnReq'
             *  DataStoreWrite: '<S705>/Dsw_EngStrtStopType'
             *  Switch: '<S708>/Switch1'
             */
            if (!VeSTRR_b_StrtDtct_DS)
            {
                VeSTRR_b_EngOnReq_DS = false;
                VeSTRR_e_EngStrtStopType_DS = rtu_HCPStrtTyp;
            }

            /* End of Switch: '<S709>/Switch1' */
        }

        /* End of Outputs for SubSystem: '<S657>/AbrtNotAllwd' */
        /* End of Outputs for SubSystem: '<S641>/NoStart' */
    }

    /* End of If: '<S641>/If' */

    /* If: '<S641>/If1' incorporates:
     *  DataStoreRead: '<S641>/Dsr_StrtStopMdTmr1'
     *  DataTypeConversion: '<S641>/Data Type Conversion1'
     */
    if (((sint32)VeSTRR_e_HybStrtrSt_DS) != 1)
    {
        /* Outputs for IfAction SubSystem: '<S641>/STRC_EngOffInit' incorporates:
         *  ActionPort: '<S658>/Action Port'
         */
        /* DataStoreWrite: '<S658>/Dsw_JumpAsstTmr' incorporates:
         *  Constant: '<S658>/Constant Value1'
         */
        VeSTRR_t_EngOffSTMTmr_DS = 0.0F;

        /* DataStoreWrite: '<S658>/Dsw_HybStrtrSt' incorporates:
         *  Constant: '<S710>/Constant'
         */
        VeSTRR_e_HybStrtrSt_DS = CeSTRR_e_EngOffSt;

        /* DataStoreWrite: '<S658>/Dsw_JumpAsstTmr2' incorporates:
         *  Constant: '<S658>/Constant Value8'
         */
        VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS = 0.0F;

        /* End of Outputs for SubSystem: '<S641>/STRC_EngOffInit' */
    }

    /* End of If: '<S641>/If1' */
}

#endif

/* Output and update for function-call system: '<S643>/EngStartingEnt' */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStartingEnt(void)
{
    /* DataStoreWrite: '<S732>/Dsw_HybStrtrSt' incorporates:
     *  Constant: '<S791>/Constant'
     */
    VeSTRR_e_HybStrtrSt_DS = CeSTRR_e_EngStartingSt;

    /* DataStoreWrite: '<S732>/Dsw_EngOnReq' incorporates:
     *  Constant: '<S732>/TRUE Constant'
     */
    VeSTRR_b_EngOnReq_DS = true;

    /* DataStoreWrite: '<S732>/Dsw_StrtStopMdTmr3' incorporates:
     *  Constant: '<S732>/FALSE Constant1'
     */
    VeSTRR_b_StrtCtrlDelayed_DS = false;

    /* DataStoreWrite: '<S732>/Dsw_StrtStopMdTmr4' incorporates:
     *  Constant: '<S732>/FALSE Constant2'
     */
    VeSTRR_b_StrtCtrlTriggered_DS = false;

    /* DataStoreWrite: '<S732>/Dsw_StrtStopMdTmr6' incorporates:
     *  Constant: '<S732>/FALSE Constant4'
     */
    VeSTRR_b_KeyCrnkEngOnDlyActv_DS = false;

    /* DataStoreWrite: '<S732>/Dsw_StrtStopMdTmr7' incorporates:
     *  Constant: '<S732>/FALSE Constant9'
     */
    VeSTRR_b_StrtCtrlLatched_DS = false;
}

#endif

/*
 * Output and update for action system:
 *    '<S774>/Generic_Reverse'
 *    '<S779>/Update_StartType'
 *    '<S778>/Update_StartType'
 */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_Generic_Reverse(VAR
    (TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_EngStrtType)
{
    /* DataStoreWrite: '<S777>/Dsw_EngStrtStopType' */
    VeSTRR_e_EngStrtStopType_DS = rtu_EngStrtType;
}

#endif

/* Output and update for function-call system: '<S643>/EngStartingDur' */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStartingDur(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_EssFail, VAR(TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_HCPStrtTyp, VAR
    (boolean, AUTOMATIC) rtu_ImmdStp, VAR(uint32, AUTOMATIC) rtu_ESSFailPhase,
    VAR(boolean, AUTOMATIC) rtu_CmdEngOn, VAR(boolean, AUTOMATIC) rtu_RemStop)
{
    /* If: '<S731>/If' incorporates:
     *  Constant: '<S733>/Constant'
     *  Constant: '<S734>/Constant'
     *  Constant: '<S735>/Constant'
     *  Constant: '<S736>/Constant'
     *  Logic: '<S731>/AND'
     *  Logic: '<S731>/Logical1'
     *  Logic: '<S731>/Logical2'
     *  RelationalOperator: '<S731>/Equal1'
     *  RelationalOperator: '<S731>/Equal2'
     *  RelationalOperator: '<S731>/Greater Than or Equal '
     *  RelationalOperator: '<S731>/Less Than  or Equal'
     */
    if (((uint32)rtu_EssSt) == CeESSR_e_EngRunning)
    {
        /* Outputs for IfAction SubSystem: '<S731>/EngStarted' incorporates:
         *  ActionPort: '<S740>/Action Port'
         */
        /* DataStoreWrite: '<S740>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S750>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngRunTr;

        /* DataStoreWrite: '<S740>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S751>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_NoAction;

        /* Switch: '<S752>/Switch1' incorporates:
         *  Constant: '<S753>/Calib'
         *  DataStoreRead: '<S740>/Dsr_StrtFail'
         *  DataStoreWrite: '<S740>/Dsw_StrtFailLowPwrLtch'
         *  Logic: '<S740>/Logical'
         */
        NeSTRR_b_StrtFailLowPwrLtch = (((KeSTRR_b_StrtFailLowPwrLtchEnab) &&
            (VeSTRR_b_CrnkBatFail_DS)) || (NeSTRR_b_StrtFailLowPwrLtch));

        /* DataStoreWrite: '<S740>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S740>/TRUE Constant3'
         */
        VeSTRR_b_StrtDtct_DS = true;

        /* DataStoreWrite: '<S740>/Dsw_StrtFail6' incorporates:
         *  Constant: '<S740>/FALSE Constant1'
         */
        VeSTRR_b_StpDtct_DS = false;

        /* End of Outputs for SubSystem: '<S731>/EngStarted' */
    }
    else if (((uint32)rtu_EssSt) == CeESSR_e_ImmedStopSt)
    {
        /* Outputs for IfAction SubSystem: '<S731>/ESSR_ImmedStop' incorporates:
         *  ActionPort: '<S739>/Action Port'
         */
        /* Logic: '<S739>/Logical2' incorporates:
         *  DataStoreRead: '<S739>/Dsr_StrtFail'
         *  DataStoreRead: '<S739>/Dsr_StrtFail1'
         *  DataStoreWrite: '<S739>/Dsw_StartFailLowSOC'
         *  Logic: '<S739>/Logical1'
         */
        VeSTRR_b_StartFailLowSOC_DS = (((VeSTRR_b_CrnkBatFail_DS) && rtu_EssFail)
            || (VeSTRR_b_CrnkFailLowVolt_DS));

        /* Switch: '<S748>/Switch1' incorporates:
         *  Constant: '<S749>/Calib'
         *  DataStoreWrite: '<S739>/Dsw_StartFailLowSOC'
         *  DataStoreWrite: '<S739>/Dsw_StrtFailLowPwrLtch'
         *  Logic: '<S739>/Logical'
         */
        NeSTRR_b_StrtFailLowPwrLtch = (((KeSTRR_b_StrtFailLowPwrLtchEnab) &&
            (VeSTRR_b_StartFailLowSOC_DS)) || (NeSTRR_b_StrtFailLowPwrLtch));

        /* DataStoreWrite: '<S739>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S745>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngStopTr;

        /* DataStoreWrite: '<S739>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S746>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_StopImmed;

        /* Switch: '<S747>/Switch1' incorporates:
         *  DataStoreRead: '<S739>/Dsr_HybCrnkAbrtd4'
         *  DataStoreWrite: '<S739>/Dsw_HybCrnkAbrtd'
         */
        VeSTRR_b_HybCrnkAbrtd_DS = ((VeSTRR_b_FirstStartActv_DS) ||
            (VeSTRR_b_HybCrnkAbrtd_DS));

        /* DataStoreWrite: '<S739>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S739>/FALSE Constant2'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* DataStoreWrite: '<S739>/Dsw_HybStrtrSt2' incorporates:
         *  Constant: '<S739>/TRUE Constant2'
         */
        VeSTRR_b_ImmedStpDurStpLtch_DS = true;

        /* DataStoreWrite: '<S739>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S739>/FALSE Constant1'
         */
        VeSTRR_b_StrtDtct_DS = false;

        /* DataStoreWrite: '<S739>/Dsw_StrtFail6' incorporates:
         *  Constant: '<S739>/TRUE Constant4'
         */
        VeSTRR_b_StpDtct_DS = true;

        /* End of Outputs for SubSystem: '<S731>/ESSR_ImmedStop' */
    }
    else if (rtu_ImmdStp)
    {
        /* Outputs for IfAction SubSystem: '<S731>/STRR_ImmedStop' incorporates:
         *  ActionPort: '<S743>/Action Port'
         */
        /* DataStoreWrite: '<S743>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S761>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;

        /* DataStoreWrite: '<S743>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S762>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_StopImmed;

        /* DataStoreWrite: '<S743>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S743>/FALSE Constant2'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* DataStoreWrite: '<S743>/Dsw_HybStrtrSt2' incorporates:
         *  Constant: '<S743>/TRUE Constant'
         */
        VeSTRR_b_ImmedStpDurStpLtch_DS = true;

        /* DataStoreWrite: '<S743>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S743>/FALSE Constant1'
         */
        VeSTRR_b_StrtDtct_DS = false;

        /* End of Outputs for SubSystem: '<S731>/STRR_ImmedStop' */
    }
    else if ((((uint32)rtu_EssSt) >= CeESSR_e_PrepForStopSt) && (((uint32)
               rtu_EssSt) <= CeESSR_e_FinishStopSt))
    {
        /* Outputs for IfAction SubSystem: '<S731>/EssStopCnfrm' incorporates:
         *  ActionPort: '<S742>/Action Port'
         */
        /* DataStoreWrite: '<S742>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S759>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngStopTr;

        /* DataStoreWrite: '<S742>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S760>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_StopCtrld;

        /* DataStoreWrite: '<S742>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S742>/FALSE Constant2'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* DataStoreWrite: '<S742>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S742>/FALSE Constant1'
         */
        VeSTRR_b_StrtDtct_DS = false;

        /* DataStoreWrite: '<S742>/Dsw_StrtFail6' incorporates:
         *  Constant: '<S742>/TRUE Constant3'
         */
        VeSTRR_b_StpDtct_DS = true;

        /* End of Outputs for SubSystem: '<S731>/EssStopCnfrm' */
    }
    else if ((!rtu_CmdEngOn) && rtu_RemStop)
    {
        /* Outputs for IfAction SubSystem: '<S731>/EngStopTrg' incorporates:
         *  ActionPort: '<S741>/Action Port'
         */
        /* Switch: '<S758>/Switch1' incorporates:
         *  Constant: '<S737>/Constant'
         *  Constant: '<S738>/Constant'
         *  Constant: '<S754>/Constant'
         *  Constant: '<S755>/Constant'
         *  DataStoreWrite: '<S741>/Dsw_STMTrigger1'
         *  Logic: '<S731>/AND1'
         *  RelationalOperator: '<S731>/Equal3'
         *  RelationalOperator: '<S731>/Equal5'
         */
        if ((CeESSR_e_EngOff == ((uint32)rtu_EssSt)) || (((uint32)rtu_EssSt) ==
                CeESSR_e_CoastDownSt))
        {
            VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngStopTr;
        }
        else
        {
            VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;
        }

        /* End of Switch: '<S758>/Switch1' */

        /* DataStoreWrite: '<S741>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S756>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_StopCtrld;

        /* Switch: '<S757>/Switch1' incorporates:
         *  DataStoreRead: '<S741>/Dsr_HybCrnkAbrtd4'
         *  DataStoreWrite: '<S741>/Dsw_HybCrnkAbrtd'
         */
        VeSTRR_b_HybCrnkAbrtd_DS = ((VeSTRR_b_FirstStartActv_DS) ||
            (VeSTRR_b_HybCrnkAbrtd_DS));

        /* DataStoreWrite: '<S741>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S741>/FALSE Constant2'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* DataStoreWrite: '<S741>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S741>/FALSE Constant1'
         */
        VeSTRR_b_StrtDtct_DS = false;

        /* DataStoreWrite: '<S741>/Dsw_StrtFail6' incorporates:
         *  Constant: '<S741>/TRUE Constant1'
         */
        VeSTRR_b_StpDtct_DS = true;

        /* End of Outputs for SubSystem: '<S731>/EngStopTrg' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S731>/WaitingForStart' incorporates:
         *  ActionPort: '<S744>/Action Port'
         */
        /* DataStoreWrite: '<S744>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S763>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;

        /* If: '<S744>/If1' incorporates:
         *  Constant: '<S744>/Constant Value'
         *  Constant: '<S744>/Constant Value2'
         *  Constant: '<S764>/Calib'
         *  Constant: '<S765>/Calib'
         *  Constant: '<S769>/Constant'
         *  Constant: '<S770>/Constant'
         *  Constant: '<S771>/Constant'
         *  Constant: '<S772>/Constant'
         *  Constant: '<S773>/Constant'
         *  DataStoreRead: '<S767>/Data Store Read'
         *  If: '<S767>/If'
         *  Logic: '<S767>/AND1'
         *  RelationalOperator: '<S744>/Equal1'
         *  RelationalOperator: '<S744>/Equal3'
         *  RelationalOperator: '<S767>/Equal1'
         *  RelationalOperator: '<S767>/Equal2'
         *  RelationalOperator: '<S767>/Equal3'
         *  RelationalOperator: '<S767>/Equal4'
         *  RelationalOperator: '<S767>/Equal5'
         *  S-Function (sfix_bitop): '<S744>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S744>/Bitwise Operator2'
         */
        if ((rtu_ESSFailPhase & KeSTRR_g_AStrtFailSel4StrtTypChng) > 0U)
        {
            /* Outputs for IfAction SubSystem: '<S744>/Update_BckupSTyp' incorporates:
             *  ActionPort: '<S766>/Action Port'
             */
            /* DataStoreWrite: '<S766>/Dsw_EngStrtStopType' */
            VeSTRR_e_EngStrtStopType_DS = rtu_HCPStrtTyp;

            /* End of Outputs for SubSystem: '<S744>/Update_BckupSTyp' */
        }
        else if ((rtu_ESSFailPhase & KeSTRR_g_BuStrtFailSel4LPStrtTyp) > 0U)
        {
            /* Outputs for IfAction SubSystem: '<S744>/Update_LowPwrSTyp' incorporates:
             *  ActionPort: '<S768>/Action Port'
             */
            /* DataStoreWrite: '<S768>/Dsw_EngStrtStopType' incorporates:
             *  Constant: '<S790>/Constant'
             */
            VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_KeyCrnkEngTrq;

            /* End of Outputs for SubSystem: '<S744>/Update_LowPwrSTyp' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S744>/Update_EngStrtStopType' incorporates:
             *  ActionPort: '<S767>/Action Port'
             */
            if (((((((uint32)VeSTRR_e_EngStrtStopType_DS) ==
                    CeSTRR_e_AStrtGeneric) || (((uint32)
                     VeSTRR_e_EngStrtStopType_DS) == CeSTRR_e_AStrtSmooth)) ||
                    (((uint32)VeSTRR_e_EngStrtStopType_DS) ==
                     CeSTRR_e_AStrtNormal)) || (((uint32)
                    VeSTRR_e_EngStrtStopType_DS) == CeSTRR_e_AStrtAggrsv)) ||
                    (((uint32)VeSTRR_e_EngStrtStopType_DS) ==
                     CeSTRR_e_AStrtReverse))
            {
                /* Outputs for IfAction SubSystem: '<S767>/Update_EngStrtStopType' incorporates:
                 *  ActionPort: '<S774>/Action Port'
                 */
                /* If: '<S767>/If' incorporates:
                 *  DataStoreRead: '<S774>/Data Store Read'
                 *  DataTypeConversion: '<S774>/Data Type Conversion'
                 *  SwitchCase: '<S774>/Switch Case'
                 */
                switch (VeSTRR_e_EngStrtStopType_DS)
                {
                  case 8:
                  case 13:
                    /* Outputs for IfAction SubSystem: '<S774>/Generic_Reverse' incorporates:
                     *  ActionPort: '<S777>/Action Port'
                     */
                    STRR_ac_Generic_Reverse(rtu_HCPStrtTyp);

                    /* End of Outputs for SubSystem: '<S774>/Generic_Reverse' */
                    break;

                  case 5:
                    /* Outputs for IfAction SubSystem: '<S774>/Smooth' incorporates:
                     *  ActionPort: '<S779>/Action Port'
                     */
                    /* If: '<S779>/If' incorporates:
                     *  Constant: '<S786>/Constant'
                     *  Constant: '<S787>/Constant'
                     *  Constant: '<S788>/Constant'
                     *  Logic: '<S779>/AND1'
                     *  RelationalOperator: '<S779>/Equal1'
                     *  RelationalOperator: '<S779>/Equal2'
                     *  RelationalOperator: '<S779>/Equal3'
                     */
                    if (((((uint32)rtu_HCPStrtTyp) == CeSTRR_e_AStrtNormal) ||
                            (((uint32)rtu_HCPStrtTyp) == CeSTRR_e_AStrtAggrsv)) ||
                        (((uint32)rtu_HCPStrtTyp) == CeSTRR_e_AStrtReverse))
                    {
                        /* Outputs for IfAction SubSystem: '<S779>/Update_StartType' incorporates:
                         *  ActionPort: '<S789>/Action Port'
                         */
                        STRR_ac_Generic_Reverse(rtu_HCPStrtTyp);

                        /* End of Outputs for SubSystem: '<S779>/Update_StartType' */
                    }

                    /* End of If: '<S779>/If' */
                    /* End of Outputs for SubSystem: '<S774>/Smooth' */
                    break;

                  case 6:
                    /* Outputs for IfAction SubSystem: '<S774>/Normal' incorporates:
                     *  ActionPort: '<S778>/Action Port'
                     */
                    /* If: '<S778>/If' incorporates:
                     *  DataTypeConversion: '<S778>/Data Type Conversion'
                     */
                    if ((((sint32)rtu_HCPStrtTyp) == 7) || (((sint32)
                            rtu_HCPStrtTyp) == 13))
                    {
                        /* Outputs for IfAction SubSystem: '<S778>/Update_StartType' incorporates:
                         *  ActionPort: '<S785>/Action Port'
                         */
                        STRR_ac_Generic_Reverse(rtu_HCPStrtTyp);

                        /* End of Outputs for SubSystem: '<S778>/Update_StartType' */
                    }

                    /* End of If: '<S778>/If' */
                    /* End of Outputs for SubSystem: '<S774>/Normal' */
                    break;

                  case 7:
                    /* Outputs for IfAction SubSystem: '<S774>/Aggressive' incorporates:
                     *  ActionPort: '<S775>/Action Port'
                     */
                    /* DataStoreWrite: '<S775>/Dsw_EngStrtStopType' incorporates:
                     *  Constant: '<S780>/Constant'
                     */
                    VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_AStrtAggrsv;

                    /* End of Outputs for SubSystem: '<S774>/Aggressive' */
                    break;

                  default:
                    /* Outputs for IfAction SubSystem: '<S774>/Default' incorporates:
                     *  ActionPort: '<S776>/Action Port'
                     */
                    /* DataStoreWrite: '<S776>/Dsw_EngStrtStopType' incorporates:
                     *  Constant: '<S782>/Calib'
                     */
                    VeSTRR_e_EngStrtStopType_DS = KeSTRR_e_SwtchDflt_StartType;

                    /* End of Outputs for SubSystem: '<S774>/Default' */
                    break;
                }

                /* End of Outputs for SubSystem: '<S767>/Update_EngStrtStopType' */
            }

            /* End of Outputs for SubSystem: '<S744>/Update_EngStrtStopType' */
        }

        /* End of If: '<S744>/If1' */
        /* End of Outputs for SubSystem: '<S731>/WaitingForStart' */
    }

    /* End of If: '<S731>/If' */
}

#endif

/* Output and update for function-call system: '<S640>/EngRunning' */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngRunning(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_CmndEngOn, VAR(boolean, AUTOMATIC) rtu_ImmdStp)
{
    boolean rtb_LeSTRR_b_AutoStop_p;

    /* Switch: '<S722>/Switch1' incorporates:
     *  Constant: '<S714>/FALSE Constant2'
     *  Constant: '<S714>/TRUE Constant1'
     *  Constant: '<S718>/Constant'
     *  Constant: '<S719>/Constant'
     *  Constant: '<S720>/Constant'
     *  Constant: '<S721>/Constant'
     *  DataStoreWrite: '<S714>/Dsw_STMTrigger'
     *  DataStoreWrite: '<S714>/Dsw_StrtFail4'
     *  DataStoreWrite: '<S714>/Dsw_StrtFail6'
     *  Logic: '<S714>/AND'
     *  RelationalOperator: '<S714>/Greater Than or Equal '
     *  RelationalOperator: '<S714>/Less Than  or Equal'
     *  Switch: '<S723>/Switch1'
     *  Switch: '<S724>/Switch1'
     */
    if ((((uint32)rtu_EssSt) >= CeESSR_e_PrepForStopSt) && (((uint32)rtu_EssSt) <=
         CeESSR_e_CoastDownSt))
    {
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngStopTr;
        VeSTRR_b_StrtDtct_DS = false;
        VeSTRR_b_StpDtct_DS = true;
    }
    else
    {
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;
    }

    /* End of Switch: '<S722>/Switch1' */

    /* Logic: '<S642>/Logical2' */
    rtb_LeSTRR_b_AutoStop_p = !rtu_CmndEngOn;

    /* If: '<S642>/If' incorporates:
     *  Logic: '<S642>/OR7'
     */
    if (rtu_ImmdStp || rtb_LeSTRR_b_AutoStop_p)
    {
        /* Outputs for IfAction SubSystem: '<S642>/Stop' incorporates:
         *  ActionPort: '<S717>/Action Port'
         */
        /* Switch: '<S730>/Switch1' incorporates:
         *  Constant: '<S728>/Constant'
         *  Constant: '<S729>/Constant'
         *  DataStoreWrite: '<S717>/Dsw_EngStrtStopType'
         */
        if (rtb_LeSTRR_b_AutoStop_p)
        {
            VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_StopCtrld;
        }
        else
        {
            VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_StopImmed;
        }

        /* End of Switch: '<S730>/Switch1' */

        /* DataStoreWrite: '<S717>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S717>/FALSE Constant'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* End of Outputs for SubSystem: '<S642>/Stop' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S642>/NoStop' incorporates:
         *  ActionPort: '<S716>/Action Port'
         */
        /* DataStoreWrite: '<S716>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S727>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_NoAction;

        /* DataStoreWrite: '<S716>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S716>/TRUE Constant'
         */
        VeSTRR_b_EngOnReq_DS = true;

        /* End of Outputs for SubSystem: '<S642>/NoStop' */
    }

    /* End of If: '<S642>/If' */

    /* If: '<S642>/If1' incorporates:
     *  DataStoreRead: '<S642>/Dsr_StrtStopMdTmr1'
     *  DataTypeConversion: '<S642>/Data Type Conversion1'
     */
    if (((sint32)VeSTRR_e_HybStrtrSt_DS) != 3)
    {
        /* Outputs for IfAction SubSystem: '<S642>/EngRunningInit' incorporates:
         *  ActionPort: '<S715>/Action Port'
         */
        /* DataStoreWrite: '<S715>/Dsw_SilentStrtChkMod' incorporates:
         *  Constant: '<S725>/Constant'
         */
        VeSTRR_e_StrtChkMod_DS = CeSTRR_e_Normal;

        /* DataStoreWrite: '<S715>/Dsw_HybStrtrSt' incorporates:
         *  Constant: '<S726>/Constant'
         */
        VeSTRR_e_HybStrtrSt_DS = CeSTRR_e_EngRunningSt;

        /* DataStoreWrite: '<S715>/Dsw_FirstStartComplete' incorporates:
         *  Constant: '<S715>/TRUE Constant'
         */
        VeSTRR_b_FirstStartComplete_DS = true;

        /* DataStoreWrite: '<S715>/Dsw_PID_AStrtCmnd1' incorporates:
         *  Constant: '<S715>/FALSE Constant1'
         */
        VeSTRR_b_FirstStartActv_DS = false;

        /* End of Outputs for SubSystem: '<S642>/EngRunningInit' */
    }

    /* End of If: '<S642>/If1' */
}

#endif

/* Output and update for function-call system: '<S640>/EngStopping' */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStopping(VAR
    (TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR(boolean, AUTOMATIC)
    rtu_EssFail, VAR(boolean, AUTOMATIC) rtu_ImmdStp, VAR(boolean, AUTOMATIC)
    rtu_EngStrtAllwd, VAR(boolean, AUTOMATIC) rtu_CmndEngOn, VAR(boolean,
    AUTOMATIC) rtu_EssStrtAbrt, VAR(TeSTRR_e_EngStrtStopType, AUTOMATIC)
    rtu_HCPStrtType, VAR(uint32, AUTOMATIC) rtu_RTC_CurTm, VAR(boolean,
    AUTOMATIC) rtu_RTC_CurTm_FA)
{
    /* Logic: '<S644>/Logical1' incorporates:
     *  DataStoreRead: '<S644>/Dsr_StrtStopMdTmr2'
     */
    VeSTRR_b_ImmedStpDurStpLtch_DS = (rtu_ImmdStp ||
        (VeSTRR_b_ImmedStpDurStpLtch_DS));

    /* If: '<S644>/If' incorporates:
     *  Constant: '<S792>/Constant'
     *  Constant: '<S793>/Constant'
     *  Constant: '<S794>/Constant'
     *  Constant: '<S795>/Constant'
     *  Constant: '<S799>/Constant'
     *  Constant: '<S800>/Constant'
     *  Constant: '<S801>/Constant'
     *  Logic: '<S644>/AND'
     *  Logic: '<S644>/Logical2'
     *  Logic: '<S644>/Logical3'
     *  RelationalOperator: '<S644>/Equal1'
     *  RelationalOperator: '<S644>/Equal2'
     *  RelationalOperator: '<S644>/Equal3'
     *  RelationalOperator: '<S644>/Equal4'
     *  RelationalOperator: '<S644>/Equal5'
     *  RelationalOperator: '<S644>/Equal6'
     *  RelationalOperator: '<S644>/Equal7'
     */
    if (((uint32)rtu_EssSt) == CeESSR_e_EngOff)
    {
        /* Outputs for IfAction SubSystem: '<S644>/EngStopped' incorporates:
         *  ActionPort: '<S798>/Action Port'
         */
        /* Switch: '<S812>/Switch1' incorporates:
         *  Constant: '<S809>/Constant'
         *  Constant: '<S810>/Constant'
         *  DataStoreWrite: '<S798>/Dsw_STMTrigger'
         *  Logic: '<S798>/Logical1'
         */
        if ((rtu_EssFail || (VeSTRR_b_ImmedStpDurStpLtch_DS)) || rtu_EssStrtAbrt)
        {
            VeSTRR_e_STMTrigger_DS = CeSTRR_e_KeyOffFailTr;
        }
        else
        {
            VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngOffTr;
        }

        /* End of Switch: '<S812>/Switch1' */

        /* DataStoreWrite: '<S798>/Data Store Write' */
        NeSTRR_t_RealTime_EngOff = rtu_RTC_CurTm;

        /* DataStoreWrite: '<S798>/Data Store Write1' */
        NeSTRR_b_RealTime_EngOFF_FA = rtu_RTC_CurTm_FA;

        /* DataStoreWrite: '<S798>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S811>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_NoAction;

        /* DataStoreWrite: '<S798>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S798>/FALSE Constant1'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* DataStoreWrite: '<S798>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S798>/FALSE Constant2'
         */
        VeSTRR_b_StrtDtct_DS = false;

        /* DataStoreWrite: '<S798>/Dsw_StrtFail6' incorporates:
         *  Constant: '<S798>/TRUE Constant3'
         */
        VeSTRR_b_StpDtct_DS = true;

        /* End of Outputs for SubSystem: '<S644>/EngStopped' */
    }
    else if (((uint32)rtu_EssSt) == CeESSR_e_EngRunning)
    {
        /* Outputs for IfAction SubSystem: '<S644>/EngRunning' incorporates:
         *  ActionPort: '<S797>/Action Port'
         */
        /* DataStoreWrite: '<S797>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S807>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngRunTr;

        /* DataStoreWrite: '<S797>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S808>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_NoAction;

        /* DataStoreWrite: '<S797>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S797>/TRUE Constant'
         */
        VeSTRR_b_EngOnReq_DS = true;

        /* DataStoreWrite: '<S797>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S797>/TRUE Constant3'
         */
        VeSTRR_b_StrtDtct_DS = true;

        /* DataStoreWrite: '<S797>/Dsw_StrtFail6' incorporates:
         *  Constant: '<S797>/FALSE Constant2'
         */
        VeSTRR_b_StpDtct_DS = false;

        /* End of Outputs for SubSystem: '<S644>/EngRunning' */
    }
    else if (((((uint32)rtu_EssSt) == CeESSR_e_RestartPrepSt) || (((uint32)
                rtu_EssSt) == CeESSR_e_InitEngSpinSt)) || ((((uint32)rtu_EssSt) ==
               CeESSR_e_StrtEngOnlyChngMind) || (((uint32)rtu_EssSt) ==
               CeESSR_e_StartEngPFSSt)))
    {
        /* Outputs for IfAction SubSystem: '<S644>/StopAborted_Restarting' incorporates:
         *  ActionPort: '<S805>/Action Port'
         */
        /* DataStoreWrite: '<S805>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S817>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngStartTr;

        /* DataStoreWrite: '<S805>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S805>/TRUE Constant'
         */
        VeSTRR_b_EngOnReq_DS = true;

        /* DataStoreWrite: '<S805>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S805>/TRUE Constant3'
         */
        VeSTRR_b_StrtDtct_DS = true;

        /* DataStoreWrite: '<S805>/Dsw_StrtFail6' incorporates:
         *  Constant: '<S805>/FALSE Constant1'
         */
        VeSTRR_b_StpDtct_DS = false;

        /* End of Outputs for SubSystem: '<S644>/StopAborted_Restarting' */
    }
    else if ((CeESSR_e_ImmedStopSt == ((uint32)rtu_EssSt)) ||
             (VeSTRR_b_ImmedStpDurStpLtch_DS))
    {
        /* Outputs for IfAction SubSystem: '<S644>/ImmedStop' incorporates:
         *  ActionPort: '<S802>/Action Port'
         */
        /* DataStoreWrite: '<S802>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S813>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;

        /* DataStoreWrite: '<S802>/Dsw_EngStrtStopType' incorporates:
         *  Constant: '<S814>/Constant'
         */
        VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_StopImmed;

        /* DataStoreWrite: '<S802>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S802>/FALSE Constant2'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* DataStoreWrite: '<S802>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S802>/FALSE Constant1'
         */
        VeSTRR_b_StrtDtct_DS = false;

        /* DataStoreWrite: '<S802>/Dsw_StrtFail6' incorporates:
         *  Constant: '<S802>/TRUE Constant3'
         */
        VeSTRR_b_StpDtct_DS = true;

        /* End of Outputs for SubSystem: '<S644>/ImmedStop' */
    }
    else if (rtu_CmndEngOn && rtu_EngStrtAllwd)
    {
        /* Outputs for IfAction SubSystem: '<S644>/ReqStart' incorporates:
         *  ActionPort: '<S803>/Action Port'
         */
        /* DataStoreWrite: '<S803>/Dsw_EngStrtStopType' */
        VeSTRR_e_EngStrtStopType_DS = rtu_HCPStrtType;

        /* DataStoreWrite: '<S803>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S815>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;

        /* DataStoreWrite: '<S803>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S803>/TRUE Constant'
         */
        VeSTRR_b_EngOnReq_DS = true;

        /* DataStoreWrite: '<S803>/Dsw_StrtFail4' incorporates:
         *  Constant: '<S803>/TRUE Constant1'
         */
        VeSTRR_b_StrtDtct_DS = true;

        /* DataStoreWrite: '<S803>/Dsw_StrtFail6' incorporates:
         *  Constant: '<S803>/FALSE Constant1'
         */
        VeSTRR_b_StpDtct_DS = false;

        /* End of Outputs for SubSystem: '<S644>/ReqStart' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S644>/WaitingForStop' incorporates:
         *  ActionPort: '<S806>/Action Port'
         */
        /* DataStoreWrite: '<S806>/Dsw_EngStrtStopType' */
        VeSTRR_e_EngStrtStopType_DS = rtu_HCPStrtType;

        /* DataStoreWrite: '<S806>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S818>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;

        /* DataStoreWrite: '<S806>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S806>/FALSE Constant1'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* End of Outputs for SubSystem: '<S644>/WaitingForStop' */
    }

    /* End of If: '<S644>/If' */

    /* If: '<S644>/If1' incorporates:
     *  DataStoreRead: '<S644>/Dsr_StrtStopMdTmr1'
     *  DataTypeConversion: '<S644>/Data Type Conversion1'
     */
    if (((sint32)VeSTRR_e_HybStrtrSt_DS) != 4)
    {
        /* Outputs for IfAction SubSystem: '<S644>/STRC_EngStoppingInit' incorporates:
         *  ActionPort: '<S804>/Action Port'
         */
        /* DataStoreWrite: '<S804>/Dsw_HybStrtrSt1' incorporates:
         *  Constant: '<S816>/Constant'
         */
        VeSTRR_e_HybStrtrSt_DS = CeSTRR_e_EngStoppingSt;

        /* DataStoreWrite: '<S804>/Dsw_HybStrtrSt2' incorporates:
         *  Constant: '<S804>/FALSE Constant'
         */
        VeSTRR_b_FirstStartActv_DS = false;

        /* End of Outputs for SubSystem: '<S644>/STRC_EngStoppingInit' */
    }

    /* End of If: '<S644>/If1' */
}

#endif

/* Output and update for function-call system: '<S640>/ImmedStop' */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_ImmedStop_d(VAR(boolean, AUTOMATIC)
    rtu_EssFail, VAR(boolean, AUTOMATIC) rtu_PSA, VAR(boolean, AUTOMATIC)
    rtu_PropSysStrtRdy, VAR(boolean, AUTOMATIC) rtu_RunCrnkActv, VAR
    (TeHVTR_e_HV_BatCntctrStat, AUTOMATIC) rtu_HVBatCntctrStat, VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) rtu_PRNDL, VAR(boolean, AUTOMATIC)
    rtu_PTCrnkAbrtd, VAR(boolean, AUTOMATIC) rtu_PTCrnkAct, VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC) rtu_ECMOvrrd, VAR(float32,
    AUTOMATIC) rtu_HV_BatSOC, VAR(boolean, AUTOMATIC) rtu_BattOpnRq, VAR(float32,
    AUTOMATIC) rtu_HVBatVoltModMinArb, VAR(boolean, AUTOMATIC) rtu_ClrDiagDsbl,
    VAR(TePMDR_e_KeyStatus, AUTOMATIC) rtu_KeyStatus, VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC) rtu_FltOvrrd, VAR
    (TePMDR_e_OperationalMode, AUTOMATIC) rtu_OperMdSt, P2VAR(boolean, AUTOMATIC,
    STRR_VAR_INIT) rty_ImmdStp, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_ImmdStpNeutRq, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_VeSTRR_b_RunCrnkActv, P2VAR(B_ImmedStop_STRR_ac_l_T, AUTOMATIC,
    STRR_VAR_INIT) localB, P2VAR(DW_ImmedStop_STRR_ac_e_T, AUTOMATIC,
    STRR_VAR_INIT) localDW)
{
    uint32 rtb_Switch13_m;
    boolean rtb_AND_d4;
    boolean rtb_AND_if;
    boolean rtb_AND_m;
    boolean rtb_Comparison1_k;
    boolean rtb_LeSTRR_b_FltBsdImmedStp;
    boolean rtb_LeSTRR_b_ImmedStopBatCntctr;
    boolean rtb_LeSTRR_b_ImmedStopBatCntctrOpn;
    boolean rtb_LeSTRR_b_ImmedStopESSEngStateDsbl;
    boolean rtb_LeSTRR_b_ImmedStopEngSysDsbld;
    boolean rtb_LeSTRR_b_ImmedStopRunCrnkAct;
    boolean rtb_OR1_iq;
    boolean rtb_OR2;
    boolean rtb_OR3_g;

    /* RelationalOperator: '<S850>/Comparison1' incorporates:
     *  Constant: '<S912>/Constant'
     */
    rtb_Comparison1_k = (((uint32)VeSTRR_e_HybStrtrSt_DS) ==
                         CeSTRR_e_EngStartingSt);

    /* Outputs for Atomic SubSystem: '<S847>/Signal Latch On With Reset' */
    /* Logic: '<S909>/OR1' incorporates:
     *  Gain: '<S908>/Gain'
     *  Logic: '<S909>/NOT'
     *  Logic: '<S909>/OR'
     *  UnitDelay: '<S909>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_d3 = (rtu_EssFail || ((!rtb_Comparison1_k) &&
        (localDW->UnitDelay_DSTATE_d3)));

    /* End of Outputs for SubSystem: '<S847>/Signal Latch On With Reset' */

    /* Logic: '<S843>/Logical5' incorporates:
     *  Logic: '<S843>/Logical2'
     */
    rtb_OR3_g = !rtu_PSA;

    /* Outputs for Atomic SubSystem: '<S843>/Signal Latch On With Reset' */
    /* Logic: '<S899>/OR1' incorporates:
     *  DataStoreRead: '<S843>/Dsr_HybCrnkAbrd'
     *  Logic: '<S843>/Logical5'
     *  Logic: '<S899>/NOT'
     *  Logic: '<S899>/OR'
     *  UnitDelay: '<S899>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_ls = (rtu_PTCrnkAct || ((rtb_OR3_g &&
        (!VeSTRR_b_HybCrnkAbrtd_DS)) && (localDW->UnitDelay_DSTATE_ls)));

    /* End of Outputs for SubSystem: '<S843>/Signal Latch On With Reset' */

    /* Logic: '<S843>/AND' incorporates:
     *  Constant: '<S895>/Constant'
     *  Constant: '<S896>/Constant'
     *  Constant: '<S897>/Calib'
     *  Constant: '<S898>/Calib'
     *  Logic: '<S843>/Logical'
     *  Logic: '<S843>/Logical1'
     *  Logic: '<S843>/Logical3'
     *  Logic: '<S843>/Logical4'
     *  Logic: '<S843>/OR3'
     *  RelationalOperator: '<S843>/Equal17'
     *  RelationalOperator: '<S843>/Equal18'
     */
    VeSTRR_b_ImmedStopPwrMd = (rtb_OR3_g && (((((!rtu_PTCrnkAct) &&
        (localDW->UnitDelay_DSTATE_ls)) && (KeSTRR_b_StrtCntrlOffChkEnbl)) ||
        (!rtu_PropSysStrtRdy)) || (((CeTRGR_e_TransRangePark != ((uint32)
        rtu_PRNDL)) && (((uint32)rtu_PRNDL) != CeTRGR_e_TransRangeNeutral)) &&
        (KeSTRR_b_CheckParkAndNeutral))));

    /* Logic: '<S844>/OR3' incorporates:
     *  Constant: '<S900>/Constant'
     *  Constant: '<S901>/Constant'
     *  Constant: '<S902>/Constant'
     *  Constant: '<S904>/Calib'
     *  Logic: '<S844>/Logical5'
     *  RelationalOperator: '<S844>/Comparison1'
     *  RelationalOperator: '<S844>/Equal17'
     *  RelationalOperator: '<S844>/Equal18'
     */
    rtb_OR3_g = ((((CePMDR_e_Ign_Start == ((uint32)rtu_OperMdSt)) || (((uint32)
                     rtu_OperMdSt) == CePMDR_e_Ign_Cranking)) &&
                  (KeSTRR_b_EnblOperMdChk)) && (((uint32)VeSTRR_e_HybStrtrSt_DS)
                  == CeSTRR_e_KeyOffSt));

    /* Outputs for Atomic SubSystem: '<S844>/EdgeRising2' */
    /* Logic: '<S903>/OR1' incorporates:
     *  UnitDelay: '<S903>/Unit Delay'
     */
    rtb_OR1_iq = !localDW->UnitDelay_DSTATE_l;

    /* Update for UnitDelay: '<S903>/Unit Delay' */
    localDW->UnitDelay_DSTATE_l = rtb_OR3_g;

    /* End of Outputs for SubSystem: '<S844>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S844>/Signal Latch On With Reset' */
    /* Logic: '<S905>/NOT' incorporates:
     *  Logic: '<S844>/Logical3'
     */
    rtb_LeSTRR_b_ImmedStopRunCrnkAct = !rtu_RunCrnkActv;

    /* Outputs for Atomic SubSystem: '<S844>/EdgeRising2' */
    /* Logic: '<S905>/OR1' incorporates:
     *  Logic: '<S903>/AND'
     *  Logic: '<S905>/NOT'
     *  Logic: '<S905>/OR'
     *  UnitDelay: '<S905>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_gp = ((rtb_OR3_g && rtb_OR1_iq) ||
        (rtb_LeSTRR_b_ImmedStopRunCrnkAct && (localDW->UnitDelay_DSTATE_gp)));

    /* End of Outputs for SubSystem: '<S844>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S844>/Signal Latch On With Reset' */

    /* Logic: '<S844>/AND' incorporates:
     *  Logic: '<S844>/Logical2'
     */
    rtb_LeSTRR_b_ImmedStopRunCrnkAct = ((!localDW->UnitDelay_DSTATE_gp) &&
        rtb_LeSTRR_b_ImmedStopRunCrnkAct);

    /* Logic: '<S839>/Logical' incorporates:
     *  Constant: '<S862>/Constant'
     *  Constant: '<S863>/Calib'
     *  RelationalOperator: '<S839>/Equal1'
     */
    rtb_LeSTRR_b_ImmedStopBatCntctr = ((KeSTRR_b_EnblCntctrStat_ImmedStop) &&
        (((uint32)rtu_HVBatCntctrStat) != CeHVTR_e_Closed));

    /* Logic: '<S842>/AND' incorporates:
     *  Constant: '<S893>/Constant'
     *  Constant: '<S894>/Constant'
     *  RelationalOperator: '<S842>/Equal1'
     *  RelationalOperator: '<S842>/Equal17'
     */
    VeSTRR_b_ImmedStopCompressTst = ((((uint32)VeSTRR_e_EngStrtStopType_DS) ==
        CeSTRR_e_CompressTst) && (((uint32)rtu_ECMOvrrd) != CeSTRR_e_OvrrdEngOn));

    /* RelationalOperator: '<S840>/Equal2' incorporates:
     *  Constant: '<S864>/Calib'
     */
    rtb_LeSTRR_b_ImmedStopEngSysDsbld = (rtu_HV_BatSOC <=
        KeSTRR_Pct_HV_BatSOC_Thresh);

    /* Logic: '<S851>/Logical6' incorporates:
     *  Constant: '<S913>/Calib'
     */
    rtb_LeSTRR_b_ImmedStopBatCntctrOpn = ((KeSTRR_b_EnblCntctrOpen_ImmedStop) &&
        rtu_BattOpnRq);

    /* Logic: '<S956>/Logical2' incorporates:
     *  Constant: '<S963>/Constant'
     *  Constant: '<S964>/Constant'
     *  Constant: '<S965>/Constant'
     *  Constant: '<S966>/Constant'
     *  Logic: '<S956>/Logical1'
     *  RelationalOperator: '<S956>/Comparison5'
     *  RelationalOperator: '<S956>/Equal1'
     *  RelationalOperator: '<S956>/Equal2'
     *  RelationalOperator: '<S956>/Equal3'
     */
    rtb_OR1_iq = ((((uint32)VeSTRR_e_HybStrtrSt_DS) == CeSTRR_e_EngStartingSt) &&
                  (((((uint32)VeSTRR_e_EngStrtStopType_DS) ==
                     CeSTRR_e_KeyCrnkHybTrq) || (((uint32)
                      VeSTRR_e_EngStrtStopType_DS) == CeSTRR_e_KeyCrnkEngTrq)) ||
                   (((uint32)VeSTRR_e_EngStrtStopType_DS) ==
                    CeSTRR_e_CompressTst)));

    /* Outputs for Enabled SubSystem: '<S860>/BatModVNoMon' incorporates:
     *  EnablePort: '<S952>/Enable'
     */
    /* Outputs for Enabled SubSystem: '<S860>/STRC_BatModVMon' incorporates:
     *  EnablePort: '<S954>/Enable'
     */
    /* Logic: '<S860>/Logical4' */
    if (!rtb_OR1_iq)
    {
        /* Merge: '<S860>/Merge' incorporates:
         *  Constant: '<S952>/Constant Value'
         *  SignalConversion generated from: '<S952>/HVBattCrankVoltFailure'
         */
        rtb_OR3_g = false;
    }
    else
    {
        /* Merge: '<S860>/Merge' incorporates:
         *  Constant: '<S962>/Calib'
         *  RelationalOperator: '<S954>/Comparison1'
         */
        rtb_OR3_g = (rtu_HVBatVoltModMinArb < KeSTRR_U_CrnkBatModVAbsMin);
    }

    /* End of Logic: '<S860>/Logical4' */
    /* End of Outputs for SubSystem: '<S860>/STRC_BatModVMon' */
    /* End of Outputs for SubSystem: '<S860>/BatModVNoMon' */

    /* RelationalOperator: '<S846>/Equal4' incorporates:
     *  Constant: '<S907>/Constant'
     */
    rtb_LeSTRR_b_ImmedStopESSEngStateDsbl = (((uint32)rtu_ECMOvrrd) ==
        CeSTRR_e_OvrrdImmedStop);

    /* Logic: '<S856>/Logical7' incorporates:
     *  Constant: '<S932>/Constant'
     *  Constant: '<S933>/Calib'
     *  RelationalOperator: '<S856>/Equal3'
     */
    VeSTRR_b_ImmedStopPreRunCrnkDsbl = ((KeSTRR_b_EnblRunPreCrank_ImmedStop) &&
        (((uint32)rtu_KeyStatus) == CePMDR_e_KeySt_RunPreCrank));

    /* Logic: '<S849>/Logical8' incorporates:
     *  Constant: '<S910>/Constant'
     *  Constant: '<S911>/Calib'
     *  RelationalOperator: '<S849>/Equal6'
     */
    rtb_LeSTRR_b_FltBsdImmedStp = ((((uint32)rtu_FltOvrrd) ==
        CeSTRR_e_OvrrdImmedStop) && (KeSTRR_b_EnblFltBsdImmedStp));

    /* Logic: '<S646>/OR2' incorporates:
     *  Gain: '<S908>/Gain'
     */
    rtb_OR2 = ((((((((((rtu_EssFail || (VeSTRR_b_ImmedStopPwrMd)) ||
                       rtb_LeSTRR_b_ImmedStopRunCrnkAct) ||
                      rtb_LeSTRR_b_ImmedStopBatCntctr) ||
                     (VeSTRR_b_ImmedStopCompressTst)) ||
                    rtb_LeSTRR_b_ImmedStopEngSysDsbld) ||
                   rtb_LeSTRR_b_ImmedStopBatCntctrOpn) || rtb_OR3_g) ||
                 rtb_LeSTRR_b_ImmedStopESSEngStateDsbl) ||
                (VeSTRR_b_ImmedStopPreRunCrnkDsbl)) ||
               rtb_LeSTRR_b_FltBsdImmedStp);

    /* Outputs for Atomic SubSystem: '<S854>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S929>/EdgeRising' */
    /* Logic: '<S930>/AND' incorporates:
     *  Logic: '<S930>/OR1'
     *  UnitDelay: '<S930>/Unit Delay'
     */
    rtb_AND_m = (rtb_OR2 && (!localDW->UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S930>/Unit Delay' */
    localDW->UnitDelay_DSTATE_f = rtb_OR2;

    /* End of Outputs for SubSystem: '<S929>/EdgeRising' */

    /* Switch: '<S929>/Switch1' incorporates:
     *  Constant: '<S927>/Calib'
     *  Constant: '<S929>/Constant Value'
     *  Constant: '<S929>/Constant Value1'
     *  Logic: '<S929>/OR'
     *  Logic: '<S929>/OR1'
     *  MinMax: '<S929>/Minimum'
     *  Sum: '<S929>/Summation'
     *  UnitDelay: '<S929>/Unit Delay'
     */
    if ((!rtb_OR2) || rtb_AND_m)
    {
        localDW->UnitDelay_DSTATE_i = 0U;
    }
    else if (KeSTRR_Cnt_ImmedStopDelayOn < ((uint16)(((uint32)
                localDW->UnitDelay_DSTATE_i) + 1U)))
    {
        /* MinMax: '<S929>/Minimum' incorporates:
         *  Constant: '<S927>/Calib'
         */
        localDW->UnitDelay_DSTATE_i = KeSTRR_Cnt_ImmedStopDelayOn;
    }
    else
    {
        /* MinMax: '<S929>/Minimum' incorporates:
         *  Constant: '<S929>/Constant Value'
         *  Sum: '<S929>/Summation'
         *  UnitDelay: '<S929>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_i = (uint16)(((uint32)
            localDW->UnitDelay_DSTATE_i) + 1U);
    }

    /* End of Switch: '<S929>/Switch1' */
    /* End of Outputs for SubSystem: '<S854>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S853>/EdgeFalling1' */
    /* Logic: '<S919>/AND' incorporates:
     *  Logic: '<S919>/OR1'
     *  UnitDelay: '<S919>/Unit Delay'
     */
    rtb_AND_m = ((!rtu_PTCrnkAbrtd) && (localDW->UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S919>/Unit Delay' */
    localDW->UnitDelay_DSTATE_n = rtu_PTCrnkAbrtd;

    /* End of Outputs for SubSystem: '<S853>/EdgeFalling1' */

    /* Logic: '<S844>/NOT' */
    *rty_VeSTRR_b_RunCrnkActv = !rtb_LeSTRR_b_ImmedStopRunCrnkAct;

    /* Outputs for Atomic SubSystem: '<S853>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S853>/EdgeFalling3' */
    /* Outputs for Atomic SubSystem: '<S853>/EdgeFalling' */
    /* Logic: '<S918>/OR1' incorporates:
     *  Logic: '<S920>/OR1'
     *  Logic: '<S921>/OR1'
     */
    rtb_AND_d4 = !(*rty_VeSTRR_b_RunCrnkActv);

    /* End of Outputs for SubSystem: '<S853>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S853>/EdgeFalling2' */

    /* Logic: '<S918>/AND' incorporates:
     *  Logic: '<S918>/OR1'
     *  UnitDelay: '<S918>/Unit Delay'
     */
    rtb_AND_if = (rtb_AND_d4 && (localDW->UnitDelay_DSTATE_jr));

    /* Update for UnitDelay: '<S918>/Unit Delay' */
    localDW->UnitDelay_DSTATE_jr = *rty_VeSTRR_b_RunCrnkActv;

    /* End of Outputs for SubSystem: '<S853>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S853>/Signal Latch On With Reset' */
    /* Logic: '<S925>/OR1' incorporates:
     *  Logic: '<S925>/NOT'
     *  Logic: '<S925>/OR'
     *  UnitDelay: '<S925>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_gy = (rtu_PTCrnkAct || ((!rtb_AND_if) &&
        (localDW->UnitDelay_DSTATE_gy)));

    /* End of Outputs for SubSystem: '<S853>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S853>/EdgeFalling3' */
    /* Logic: '<S921>/AND' incorporates:
     *  UnitDelay: '<S921>/Unit Delay'
     */
    rtb_AND_if = (rtb_AND_d4 && (localDW->UnitDelay_DSTATE_j));

    /* Update for UnitDelay: '<S921>/Unit Delay' */
    localDW->UnitDelay_DSTATE_j = *rty_VeSTRR_b_RunCrnkActv;

    /* End of Outputs for SubSystem: '<S853>/EdgeFalling3' */

    /* Outputs for Atomic SubSystem: '<S853>/Signal Latch Off With Reset' */
    /* Logic: '<S924>/OR2' incorporates:
     *  Constant: '<S922>/Constant'
     *  DataStoreRead: '<S853>/Dsr_HybCrnkAbrd1'
     *  Logic: '<S924>/OR'
     *  Logic: '<S924>/OR3'
     *  RelationalOperator: '<S853>/Comparison5'
     *  UnitDelay: '<S924>/Unit Delay'
     */
    rtb_AND_if = ((((uint32)VeSTRR_e_STMTrigger_DS) != CeSTRR_e_InactiveTr) &&
                  (rtb_AND_if || (!localDW->UnitDelay_DSTATE_es)));

    /* Logic: '<S924>/OR1' incorporates:
     *  UnitDelay: '<S924>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_es = !rtb_AND_if;

    /* End of Outputs for SubSystem: '<S853>/Signal Latch Off With Reset' */

    /* Outputs for Atomic SubSystem: '<S853>/EdgeFalling2' */
    /* Logic: '<S920>/AND' incorporates:
     *  UnitDelay: '<S920>/Unit Delay'
     */
    rtb_AND_d4 = (rtb_AND_d4 && (localDW->UnitDelay_DSTATE_fr));

    /* Update for UnitDelay: '<S920>/Unit Delay' */
    localDW->UnitDelay_DSTATE_fr = *rty_VeSTRR_b_RunCrnkActv;

    /* End of Outputs for SubSystem: '<S853>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S853>/Signal Latch On With Reset1' */
    /* Logic: '<S926>/OR1' incorporates:
     *  Constant: '<S923>/Calib'
     *  Logic: '<S853>/Logical'
     *  Logic: '<S926>/NOT'
     *  Logic: '<S926>/OR'
     *  UnitDelay: '<S925>/Unit Delay'
     *  UnitDelay: '<S926>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_g = ((((rtb_AND_m && (localDW->UnitDelay_DSTATE_gy))
        && rtb_AND_if) && (KeSTRR_b_PwrtrnCrnkAbrtEnbl)) || ((!rtb_AND_d4) &&
        (localDW->UnitDelay_DSTATE_g)));

    /* End of Outputs for SubSystem: '<S853>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S854>/Turn On Delay Sample' */
    /* Logic: '<S854>/Logical1' incorporates:
     *  Constant: '<S927>/Calib'
     *  Constant: '<S928>/Calib'
     *  Logic: '<S929>/AND'
     *  RelationalOperator: '<S929>/Greater  Than'
     *  UnitDelay: '<S926>/Unit Delay'
     *  UnitDelay: '<S929>/Unit Delay'
     */
    *rty_ImmdStp = (((rtb_OR2 && (localDW->UnitDelay_DSTATE_i >=
                       KeSTRR_Cnt_ImmedStopDelayOn)) || (KeSTRR_b_OvrrdImmedStop))
                    || (localDW->UnitDelay_DSTATE_g));

    /* End of Outputs for SubSystem: '<S854>/Turn On Delay Sample' */

    /* Switch: '<S841>/Switch13' incorporates:
     *  Logic: '<S859>/NOT19'
     */
    if ((VeSTRR_b_ImmedStopCompressTst) && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch13' incorporates:
         *  Logic: '<S859>/NOT21'
         *  S-Function (sfix_bitop): '<S866>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S866>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S866>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S883>/FixPt Bitwise Operator1'
         *  Switch: '<S841>/Switch11'
         *  UnitDelay: '<S909>/Unit Delay'
         */
        rtb_Switch13_m = (~((~((uint32)(((localDW->UnitDelay_DSTATE_d3) &&
                               (*rty_ImmdStp)) ? 1 : 0))) | 2U)) | 4U;
    }
    else
    {
        /* Switch: '<S841>/Switch13' incorporates:
         *  Logic: '<S859>/NOT21'
         *  S-Function (sfix_bitop): '<S866>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S866>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S866>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S871>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S871>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S871>/FixPt Bitwise Operator5'
         *  Switch: '<S841>/Switch11'
         *  UnitDelay: '<S909>/Unit Delay'
         */
        rtb_Switch13_m = ~((~(~((~((uint32)(((localDW->UnitDelay_DSTATE_d3) && (*
            rty_ImmdStp)) ? 1 : 0))) | 2U))) | 4U);
    }

    /* End of Switch: '<S841>/Switch13' */

    /* Switch: '<S841>/Switch9' incorporates:
     *  Logic: '<S859>/NOT18'
     */
    if ((VeSTRR_b_ImmedStopPwrMd) && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S892>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 8U;
    }
    else
    {
        /* Switch: '<S841>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S872>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S872>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S872>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 8U);
    }

    /* End of Switch: '<S841>/Switch9' */

    /* Switch: '<S841>/Switch3' incorporates:
     *  Logic: '<S859>/NOT17'
     */
    if (rtb_LeSTRR_b_ImmedStopEngSysDsbld && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S886>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 16U;
    }
    else
    {
        /* Switch: '<S841>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S873>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S873>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S873>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 16U);
    }

    /* End of Switch: '<S841>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S860>/Signal Latch On With Reset7' */
    /* Logic: '<S955>/OR1' incorporates:
     *  Logic: '<S860>/Logical5'
     *  Logic: '<S955>/OR'
     *  UnitDelay: '<S955>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_e = (rtb_OR3_g || (rtb_Comparison1_k &&
        (localDW->UnitDelay_DSTATE_e)));

    /* End of Outputs for SubSystem: '<S860>/Signal Latch On With Reset7' */

    /* Switch: '<S841>/Switch4' incorporates:
     *  Logic: '<S859>/NOT16'
     *  UnitDelay: '<S955>/Unit Delay'
     */
    if ((localDW->UnitDelay_DSTATE_e) && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S887>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 32U;
    }
    else
    {
        /* Switch: '<S841>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S874>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S874>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S874>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 32U);
    }

    /* End of Switch: '<S841>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S851>/Signal Latch On With Reset5' */
    /* Logic: '<S914>/OR1' incorporates:
     *  Logic: '<S914>/NOT'
     *  Logic: '<S914>/OR'
     *  UnitDelay: '<S914>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_d = (rtb_LeSTRR_b_ImmedStopBatCntctrOpn ||
        ((!rtb_Comparison1_k) && (localDW->UnitDelay_DSTATE_d)));

    /* End of Outputs for SubSystem: '<S851>/Signal Latch On With Reset5' */

    /* Switch: '<S841>/Switch1' incorporates:
     *  Logic: '<S859>/NOT28'
     *  UnitDelay: '<S914>/Unit Delay'
     */
    if ((localDW->UnitDelay_DSTATE_d) && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S879>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 64U;
    }
    else
    {
        /* Switch: '<S841>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S875>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S875>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S875>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 64U);
    }

    /* End of Switch: '<S841>/Switch1' */

    /* Switch: '<S841>/Switch2' incorporates:
     *  Logic: '<S859>/NOT27'
     *  UnitDelay: '<S926>/Unit Delay'
     */
    if ((localDW->UnitDelay_DSTATE_g) && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S885>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 128U;
    }
    else
    {
        /* Switch: '<S841>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S876>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S876>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S876>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 128U);
    }

    /* End of Switch: '<S841>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S852>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S916>/EdgeRising' */
    /* Logic: '<S917>/AND' incorporates:
     *  Logic: '<S917>/OR1'
     *  UnitDelay: '<S917>/Unit Delay'
     */
    rtb_LeSTRR_b_ImmedStopBatCntctrOpn = (rtb_LeSTRR_b_ImmedStopBatCntctr &&
        (!localDW->UnitDelay_DSTATE_h));

    /* Update for UnitDelay: '<S917>/Unit Delay' */
    localDW->UnitDelay_DSTATE_h = rtb_LeSTRR_b_ImmedStopBatCntctr;

    /* End of Outputs for SubSystem: '<S916>/EdgeRising' */

    /* Switch: '<S916>/Switch1' incorporates:
     *  Constant: '<S915>/Calib'
     *  Constant: '<S916>/Constant Value'
     *  Constant: '<S916>/Constant Value1'
     *  Logic: '<S916>/OR'
     *  Logic: '<S916>/OR1'
     *  MinMax: '<S916>/Minimum'
     *  Sum: '<S916>/Summation'
     *  UnitDelay: '<S916>/Unit Delay'
     */
    if ((!rtb_LeSTRR_b_ImmedStopBatCntctr) || rtb_LeSTRR_b_ImmedStopBatCntctrOpn)
    {
        localDW->UnitDelay_DSTATE_m = 0U;
    }
    else if (KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc < ((uint16)(((uint32)
                localDW->UnitDelay_DSTATE_m) + 1U)))
    {
        /* MinMax: '<S916>/Minimum' incorporates:
         *  Constant: '<S915>/Calib'
         */
        localDW->UnitDelay_DSTATE_m = KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc;
    }
    else
    {
        /* MinMax: '<S916>/Minimum' incorporates:
         *  Constant: '<S916>/Constant Value'
         *  Sum: '<S916>/Summation'
         *  UnitDelay: '<S916>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_m = (uint16)(((uint32)
            localDW->UnitDelay_DSTATE_m) + 1U);
    }

    /* End of Switch: '<S916>/Switch1' */

    /* Logic: '<S916>/AND' incorporates:
     *  Constant: '<S915>/Calib'
     *  RelationalOperator: '<S916>/Greater  Than'
     *  UnitDelay: '<S916>/Unit Delay'
     */
    rtb_LeSTRR_b_ImmedStopBatCntctrOpn = (rtb_LeSTRR_b_ImmedStopBatCntctr &&
        (localDW->UnitDelay_DSTATE_m >= KeSTRR_Cnt_ImmedStpRsnBatCntctrDbnc));

    /* End of Outputs for SubSystem: '<S852>/Turn On Delay Sample1' */

    /* Switch: '<S841>/Switch7' incorporates:
     *  Logic: '<S859>/NOT26'
     */
    if (rtb_LeSTRR_b_ImmedStopBatCntctrOpn && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S890>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 256U;
    }
    else
    {
        /* Switch: '<S841>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S877>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S877>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S877>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 256U);
    }

    /* End of Switch: '<S841>/Switch7' */

    /* Switch: '<S841>/Switch8' incorporates:
     *  Constant: '<S928>/Calib'
     *  Logic: '<S859>/NOT25'
     */
    if ((KeSTRR_b_OvrrdImmedStop) && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S891>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 512U;
    }
    else
    {
        /* Switch: '<S841>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S878>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S878>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S878>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 512U);
    }

    /* End of Switch: '<S841>/Switch8' */

    /* Switch: '<S841>/Switch5' incorporates:
     *  Logic: '<S859>/NOT24'
     */
    if (rtb_LeSTRR_b_ImmedStopRunCrnkAct && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S888>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 1024U;
    }
    else
    {
        /* Switch: '<S841>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S867>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S867>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S867>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 1024U);
    }

    /* End of Switch: '<S841>/Switch5' */

    /* Switch: '<S841>/Switch6' incorporates:
     *  Logic: '<S859>/NOT23'
     */
    if ((VeSTRR_b_ImmedStopPreRunCrnkDsbl) && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S889>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 2048U;
    }
    else
    {
        /* Switch: '<S841>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S868>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S868>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S868>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 2048U);
    }

    /* End of Switch: '<S841>/Switch6' */

    /* Switch: '<S841>/Switch12' incorporates:
     *  Logic: '<S859>/NOT22'
     */
    if (rtb_LeSTRR_b_ImmedStopESSEngStateDsbl && (*rty_ImmdStp))
    {
        /* Switch: '<S841>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S882>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 4096U;
    }
    else
    {
        /* Switch: '<S841>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S869>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S869>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S869>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 4096U);
    }

    /* End of Switch: '<S841>/Switch12' */

    /* Switch: '<S841>/Switch14' incorporates:
     *  DataStoreWrite: '<S646>/Data Store Write2'
     *  Logic: '<S859>/NOT30'
     *  S-Function (sfix_bitop): '<S870>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S870>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S870>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S884>/FixPt Bitwise Operator1'
     */
    if ((*rty_ImmdStp) && rtb_LeSTRR_b_FltBsdImmedStp)
    {
        VeSTRR_g_ImmedStopRsnCurr_DS = rtb_Switch13_m | 8192U;
    }
    else
    {
        VeSTRR_g_ImmedStopRsnCurr_DS = ~((~rtb_Switch13_m) | 8192U);
    }

    /* End of Switch: '<S841>/Switch14' */

    /* Outputs for Atomic SubSystem: '<S857>/EdgeRising1' */
    /* Logic: '<S934>/AND' incorporates:
     *  Logic: '<S934>/OR1'
     *  UnitDelay: '<S934>/Unit Delay'
     */
    VeSTRR_b_ImmedStopRsnClearPSA = (rtu_PSA && (!localDW->UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S934>/Unit Delay' */
    localDW->UnitDelay_DSTATE_k = rtu_PSA;

    /* End of Outputs for SubSystem: '<S857>/EdgeRising1' */

    /* Logic: '<S857>/Logical5' incorporates:
     *  Constant: '<S935>/Calib'
     */
    VeSTRR_b_ClrImmedStopRsn = (((KeSTRR_b_ClrImmedStpRsnHist) ||
        rtu_ClrDiagDsbl) || (VeSTRR_b_ImmedStopRsnClearPSA));

    /* Outputs for Atomic SubSystem: '<S646>/EdgeRising1' */
    /* Logic: '<S848>/AND' incorporates:
     *  Logic: '<S848>/OR1'
     *  UnitDelay: '<S848>/Unit Delay'
     */
    rtb_OR2 = ((*rty_ImmdStp) && (!localDW->UnitDelay_DSTATE_nt));

    /* Update for UnitDelay: '<S848>/Unit Delay' */
    localDW->UnitDelay_DSTATE_nt = *rty_ImmdStp;

    /* End of Outputs for SubSystem: '<S646>/EdgeRising1' */

    /* Outputs for Enabled SubSystem: '<S646>/NVRam_Register' incorporates:
     *  EnablePort: '<S858>/Enable'
     */
    /* Logic: '<S646>/Logical1' */
    if (rtb_OR2 || rtu_PTCrnkAct)
    {
        /* Switch: '<S936>/Switch10' incorporates:
         *  Logic: '<S937>/NOT21'
         *  UnitDelay: '<S909>/Unit Delay'
         */
        if ((localDW->UnitDelay_DSTATE_d3) && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch10' incorporates:
             *  DataStoreRead: '<S937>/Dsr_PID_AStrtEntry1'
             *  S-Function (sfix_bitop): '<S939>/FixPt Bitwise Operator1'
             */
            localB->Switch14 = NeSTRR_g_ImmedStopRsn | 1U;
        }
        else
        {
            /* Switch: '<S936>/Switch10' incorporates:
             *  DataStoreRead: '<S937>/Dsr_PID_AStrtEntry1'
             */
            localB->Switch14 = NeSTRR_g_ImmedStopRsn;
        }

        /* End of Switch: '<S936>/Switch10' */

        /* Switch: '<S936>/Switch13' incorporates:
         *  Logic: '<S937>/NOT19'
         */
        if ((VeSTRR_b_ImmedStopCompressTst) && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch13' incorporates:
             *  S-Function (sfix_bitop): '<S942>/FixPt Bitwise Operator1'
             *  Switch: '<S936>/Switch11'
             */
            localB->Switch14 |= 4U;
        }

        /* End of Switch: '<S936>/Switch13' */

        /* Switch: '<S936>/Switch9' incorporates:
         *  Logic: '<S937>/NOT18'
         */
        if ((VeSTRR_b_ImmedStopPwrMd) && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch9' incorporates:
             *  S-Function (sfix_bitop): '<S951>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 8U;
        }

        /* End of Switch: '<S936>/Switch9' */

        /* Switch: '<S936>/Switch3' incorporates:
         *  Logic: '<S937>/NOT17'
         */
        if (rtb_LeSTRR_b_ImmedStopEngSysDsbld && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch3' incorporates:
             *  S-Function (sfix_bitop): '<S945>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 16U;
        }

        /* End of Switch: '<S936>/Switch3' */

        /* Switch: '<S936>/Switch4' incorporates:
         *  Logic: '<S937>/NOT16'
         *  UnitDelay: '<S955>/Unit Delay'
         */
        if ((localDW->UnitDelay_DSTATE_e) && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch4' incorporates:
             *  S-Function (sfix_bitop): '<S946>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 32U;
        }

        /* End of Switch: '<S936>/Switch4' */

        /* Switch: '<S936>/Switch1' incorporates:
         *  Logic: '<S937>/NOT28'
         *  UnitDelay: '<S914>/Unit Delay'
         */
        if ((localDW->UnitDelay_DSTATE_d) && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch1' incorporates:
             *  S-Function (sfix_bitop): '<S938>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 64U;
        }

        /* End of Switch: '<S936>/Switch1' */

        /* Switch: '<S936>/Switch2' incorporates:
         *  Logic: '<S937>/NOT27'
         *  UnitDelay: '<S926>/Unit Delay'
         */
        if ((localDW->UnitDelay_DSTATE_g) && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch2' incorporates:
             *  S-Function (sfix_bitop): '<S944>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 128U;
        }

        /* End of Switch: '<S936>/Switch2' */

        /* Switch: '<S936>/Switch7' incorporates:
         *  Logic: '<S937>/NOT26'
         */
        if (rtb_LeSTRR_b_ImmedStopBatCntctrOpn && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch7' incorporates:
             *  S-Function (sfix_bitop): '<S949>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 256U;
        }

        /* End of Switch: '<S936>/Switch7' */

        /* Switch: '<S936>/Switch8' incorporates:
         *  Constant: '<S928>/Calib'
         *  Logic: '<S937>/NOT25'
         */
        if ((KeSTRR_b_OvrrdImmedStop) && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch8' incorporates:
             *  S-Function (sfix_bitop): '<S950>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 512U;
        }

        /* End of Switch: '<S936>/Switch8' */

        /* Switch: '<S936>/Switch5' incorporates:
         *  Logic: '<S937>/NOT24'
         */
        if (rtb_LeSTRR_b_ImmedStopRunCrnkAct && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch5' incorporates:
             *  S-Function (sfix_bitop): '<S947>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 1024U;
        }

        /* End of Switch: '<S936>/Switch5' */

        /* Switch: '<S936>/Switch6' incorporates:
         *  Logic: '<S937>/NOT23'
         */
        if ((VeSTRR_b_ImmedStopPreRunCrnkDsbl) && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch6' incorporates:
             *  S-Function (sfix_bitop): '<S948>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 2048U;
        }

        /* End of Switch: '<S936>/Switch6' */

        /* Switch: '<S936>/Switch12' incorporates:
         *  Logic: '<S937>/NOT22'
         */
        if (rtb_LeSTRR_b_ImmedStopESSEngStateDsbl && (*rty_ImmdStp))
        {
            /* Switch: '<S936>/Switch12' incorporates:
             *  S-Function (sfix_bitop): '<S941>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 4096U;
        }

        /* End of Switch: '<S936>/Switch12' */

        /* Switch: '<S936>/Switch14' incorporates:
         *  Logic: '<S937>/NOT30'
         */
        if ((*rty_ImmdStp) && rtb_LeSTRR_b_FltBsdImmedStp)
        {
            /* Switch: '<S936>/Switch14' incorporates:
             *  S-Function (sfix_bitop): '<S943>/FixPt Bitwise Operator1'
             */
            localB->Switch14 |= 4096U;
        }

        /* End of Switch: '<S936>/Switch14' */
    }

    /* End of Logic: '<S646>/Logical1' */
    /* End of Outputs for SubSystem: '<S646>/NVRam_Register' */

    /* Switch: '<S857>/Switch5' incorporates:
     *  Constant: '<S857>/Constant Value'
     *  DataStoreWrite: '<S857>/Dsw_PID_AStrtEntry3'
     */
    if (VeSTRR_b_ClrImmedStopRsn)
    {
        NeSTRR_g_ImmedStopRsn = 0U;
    }
    else
    {
        NeSTRR_g_ImmedStopRsn = localB->Switch14;
    }

    /* End of Switch: '<S857>/Switch5' */

    /* Switch: '<S967>/Switch' incorporates:
     *  Logic: '<S861>/Logical2'
     */
    if (rtb_LeSTRR_b_ImmedStopBatCntctr && (*rty_ImmdStp))
    {
        /* Switch: '<S967>/Switch' incorporates:
         *  DataStoreRead: '<S861>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S973>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m = VeSTRR_g_StrtDisAllowRsn_DS | 1U;
    }
    else
    {
        /* Switch: '<S967>/Switch' incorporates:
         *  DataStoreRead: '<S861>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S968>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S968>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S968>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~VeSTRR_g_StrtDisAllowRsn_DS) | 1U);
    }

    /* End of Switch: '<S967>/Switch' */

    /* Switch: '<S967>/Switch1' incorporates:
     *  Logic: '<S861>/Logical4'
     */
    if (rtb_LeSTRR_b_ImmedStopRunCrnkAct && (*rty_ImmdStp))
    {
        /* Switch: '<S967>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S974>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 32U;
    }
    else
    {
        /* Switch: '<S967>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S969>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S969>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S969>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 32U);
    }

    /* End of Switch: '<S967>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S845>/Signal Latch On With Reset4' */
    /* Logic: '<S906>/OR1' incorporates:
     *  DataStoreWrite: '<S845>/Dsw_StrtFail6'
     *  Logic: '<S845>/Logical4'
     *  Logic: '<S906>/NOT'
     *  Logic: '<S906>/OR'
     *  UnitDelay: '<S906>/Unit Delay'
     *  UnitDelay: '<S926>/Unit Delay'
     */
    VeSTRR_b_CrankAborted_DS = ((rtb_OR3_g || (localDW->UnitDelay_DSTATE_g)) ||
        ((!rtb_Comparison1_k) && (localDW->UnitDelay_DSTATE_i1)));

    /* Update for UnitDelay: '<S906>/Unit Delay' incorporates:
     *  DataStoreWrite: '<S845>/Dsw_StrtFail6'
     */
    localDW->UnitDelay_DSTATE_i1 = VeSTRR_b_CrankAborted_DS;

    /* End of Outputs for SubSystem: '<S845>/Signal Latch On With Reset4' */

    /* Switch: '<S967>/Switch2' incorporates:
     *  DataStoreWrite: '<S845>/Dsw_StrtFail6'
     *  Logic: '<S861>/Logical5'
     */
    if ((VeSTRR_b_CrankAborted_DS) && (*rty_ImmdStp))
    {
        /* Switch: '<S967>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S975>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 256U;
    }
    else
    {
        /* Switch: '<S967>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S970>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S970>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S970>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 256U);
    }

    /* End of Switch: '<S967>/Switch2' */

    /* Switch: '<S967>/Switch3' incorporates:
     *  Logic: '<S861>/Logical3'
     */
    if ((VeSTRR_b_ImmedStopPwrMd) && (*rty_ImmdStp))
    {
        /* Switch: '<S967>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S976>/FixPt Bitwise Operator1'
         */
        rtb_Switch13_m |= 1024U;
    }
    else
    {
        /* Switch: '<S967>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S971>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S971>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S971>/FixPt Bitwise Operator5'
         */
        rtb_Switch13_m = ~((~rtb_Switch13_m) | 1024U);
    }

    /* End of Switch: '<S967>/Switch3' */

    /* Switch: '<S967>/Switch4' incorporates:
     *  DataStoreWrite: '<S861>/Data Store Write1'
     *  Gain: '<S908>/Gain'
     *  Logic: '<S861>/Logical1'
     *  S-Function (sfix_bitop): '<S972>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S972>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S972>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S977>/FixPt Bitwise Operator1'
     */
    if (rtu_EssFail && (*rty_ImmdStp))
    {
        VeSTRR_g_StrtDisAllowRsn_DS = rtb_Switch13_m | 2048U;
    }
    else
    {
        VeSTRR_g_StrtDisAllowRsn_DS = ~((~rtb_Switch13_m) | 2048U);
    }

    /* End of Switch: '<S967>/Switch4' */

    /* DataStoreWrite: '<S860>/Data Store Write' incorporates:
     *  UnitDelay: '<S955>/Unit Delay'
     */
    VeSTRR_b_CrnkFailLowVolt_DS = localDW->UnitDelay_DSTATE_e;

    /* Outputs for Atomic SubSystem: '<S953>/Accumulator Reset Limited' */
    /* Switch: '<S957>/Switch1' incorporates:
     *  Logic: '<S953>/Logical2'
     */
    if (!rtb_OR1_iq)
    {
        /* Switch: '<S957>/Switch1' incorporates:
         *  Constant: '<S953>/Constant Value1'
         */
        VeSTRR_U_BatModVMin = 0.0F;
    }
    else
    {
        /* Sum: '<S957>/Summation' incorporates:
         *  Constant: '<S953>/Constant Value'
         *  Constant: '<S958>/Calib'
         *  Constant: '<S960>/Calib'
         *  MinMax: '<S953>/MinMax1'
         *  Product: '<S953>/Product'
         *  Sum: '<S953>/Sum1'
         *  UnitDelay: '<S957>/Unit Delay'
         */
        VeSTRR_U_BatModVMin = (fmaxf(0.0F, KeSTRR_U_CrnkBatModVMin -
                                rtu_HVBatVoltModMinArb) * HeSTRR_t_MedTEB_dT) +
            VeSTRR_U_BatModVMin;

        /* Outputs for Atomic SubSystem: '<S957>/Limiter' */
        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S959>/Calib'
         *  RelationalOperator: '<S961>/Relational Operator'
         */
        if (KeSTRR_U_CrnkBatModVMaxIntgrlVal < VeSTRR_U_BatModVMin)
        {
            /* Switch: '<S961>/Switch1' */
            VeSTRR_U_BatModVMin = KeSTRR_U_CrnkBatModVMaxIntgrlVal;
        }

        /* End of Switch: '<S961>/Switch1' */

        /* Switch: '<S961>/Switch' incorporates:
         *  Constant: '<S953>/Constant Value1'
         *  RelationalOperator: '<S961>/Relational Operator1'
         */
        if (VeSTRR_U_BatModVMin <= 0.0F)
        {
            /* Switch: '<S957>/Switch1' */
            VeSTRR_U_BatModVMin = 0.0F;
        }

        /* End of Switch: '<S961>/Switch' */
        /* End of Outputs for SubSystem: '<S957>/Limiter' */
    }

    /* End of Switch: '<S957>/Switch1' */
    /* End of Outputs for SubSystem: '<S953>/Accumulator Reset Limited' */

    /* RelationalOperator: '<S953>/Comparison4' incorporates:
     *  Constant: '<S959>/Calib'
     */
    VeSTRR_b_CrnkLowVoltWarn = (VeSTRR_U_BatModVMin ==
        KeSTRR_U_CrnkBatModVMaxIntgrlVal);

    /* Logic: '<S860>/Logical3' */
    VeSTRR_b_CrnkBatFail = (rtb_OR3_g || (VeSTRR_b_CrnkLowVoltWarn));

    /* DataStoreWrite: '<S860>/Dsw_StrtFail3' */
    VeSTRR_b_CrnkBatFail_DS = VeSTRR_b_CrnkBatFail;

    /* Switch: '<S931>/Switch1' incorporates:
     *  Gain: '<S908>/Gain'
     *  Logic: '<S855>/Logical3'
     */
    *rty_ImmdStpNeutRq = ((*rty_ImmdStp) || rtu_EssFail);
}

#endif

/* Output and update for function-call system: '<S647>/KeyOffInit' */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffInit_h(void)
{
    /* DataStoreWrite: '<S979>/Dsw_StrtStopMdTmr2' incorporates:
     *  Constant: '<S979>/Constant Value2'
     */
    VeSTRR_t_AutoStrt4KeyStrtDlyTmr_DS = 0.0F;

    /* DataStoreWrite: '<S979>/Dsw_HybStrtrSt' incorporates:
     *  Constant: '<S1023>/Constant'
     */
    VeSTRR_e_HybStrtrSt_DS = CeSTRR_e_KeyOffSt;

    /* DataStoreWrite: '<S979>/Dsw_STMTrigger' incorporates:
     *  Constant: '<S1024>/Constant'
     */
    VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;

    /* DataStoreWrite: '<S979>/Dsw_EngOffAllowed' incorporates:
     *  Constant: '<S979>/TRUE Constant3'
     */
    VeSTRR_b_EngOffAllowed_DS = true;

    /* DataStoreWrite: '<S979>/Dsw_EngOnReq' incorporates:
     *  Constant: '<S979>/FALSE Constant1'
     */
    VeSTRR_b_EngOnReq_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_FirstStartComplete' incorporates:
     *  Constant: '<S979>/FALSE Constant12'
     */
    VeSTRR_b_FirstStartComplete_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_HybStrtrSt2' incorporates:
     *  Constant: '<S979>/FALSE Constant3'
     */
    VeSTRR_b_ImmedStpDurStpLtch_DS = false;

    /* Switch: '<S1027>/Switch1' incorporates:
     *  Constant: '<S1025>/Constant'
     *  Constant: '<S1026>/Constant'
     *  Constant: '<S1028>/Calib'
     *  DataStoreWrite: '<S979>/Dsw_HybStrtrSt3'
     */
    if (KeSTRR_b_EnblEngOnDlyForKeyCrnk)
    {
        VeSTRR_e_StrtChkMod_DS = CeSTRR_e_EvalDlydKeyCrank;
    }
    else
    {
        VeSTRR_e_StrtChkMod_DS = CeSTRR_e_SilentStrtEntry;
    }

    /* End of Switch: '<S1027>/Switch1' */

    /* DataStoreWrite: '<S979>/Dsw_StrtFail1' incorporates:
     *  Constant: '<S979>/FALSE Constant7'
     */
    VeSTRR_b_CrnkFailLowVolt_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_StrtFail2' incorporates:
     *  Constant: '<S979>/FALSE Constant8'
     */
    VeSTRR_b_FirstStartActv_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_StrtFail3' incorporates:
     *  Constant: '<S979>/FALSE Constant6'
     */
    VeSTRR_b_CrnkBatFail_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_StrtFail4' incorporates:
     *  Constant: '<S979>/FALSE Constant5'
     */
    VeSTRR_b_StrtDtct_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_StrtFail5' incorporates:
     *  Constant: '<S979>/FALSE Constant5'
     */
    VeSTRR_b_StpDtct_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_StrtFailLowSOC' incorporates:
     *  Constant: '<S979>/FALSE Constant2'
     */
    VeSTRR_b_StartFailLowSOC_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_StrtStopMdTmr6' incorporates:
     *  Constant: '<S979>/FALSE Constant4'
     */
    VeSTRR_b_StrtCtrlDelayed_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_StrtStopMdTmr7' incorporates:
     *  Constant: '<S979>/FALSE Constant9'
     */
    VeSTRR_b_StrtCtrlTriggered_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_StrtStopMdTmr8' incorporates:
     *  Constant: '<S979>/FALSE Constant10'
     */
    VeSTRR_b_KeyCrnkEngOnDlyActv_DS = false;

    /* DataStoreWrite: '<S979>/Dsw_StrtStopMdTmr9' incorporates:
     *  Constant: '<S979>/FALSE Constant11'
     */
    VeSTRR_b_StrtCtrlLatched_DS = false;
}

#endif

/* Output and update for function-call system: '<S647>/KeyOffDur' */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_KeyOffDur_m(VAR(boolean, AUTOMATIC)
    rtu_PTCrnkAct, VAR(TeESSR_e_EngStartStopSt, AUTOMATIC) rtu_EssSt, VAR
    (float32, AUTOMATIC) rtu_HV_BatSOC, VAR(boolean, AUTOMATIC) rtu_CmndEngOn,
    VAR(TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_EngStrtTyp, VAR(boolean,
    AUTOMATIC) rtu_StrtAllwd, VAR(boolean, AUTOMATIC) rtu_ImmdStp, VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) rtu_PRNDL, VAR(boolean, AUTOMATIC)
    rtu_InPlntMd, VAR(TeSTRR_e_EngStrtStopType, AUTOMATIC) rtu_HCPStrtTyp, VAR
    (uint32, AUTOMATIC) rtu_GenReg)
{
    float32 rtb_Switch_fg;

    /* Switch: '<S982>/Switch1' incorporates:
     *  DataStoreRead: '<S978>/Data Store Read'
     */
    if (NeSTRR_b_StrtFailLowPwrLtch)
    {
        /* DataStoreWrite: '<S978>/Dsw_StrtFailLowPwrLtch' incorporates:
         *  Constant: '<S983>/Calib'
         *  Constant: '<S984>/Calib'
         *  Logic: '<S978>/Logical1'
         *  RelationalOperator: '<S978>/Comparison'
         *  Switch: '<S982>/Switch1'
         */
        NeSTRR_b_StrtFailLowPwrLtch = ((KeSTRR_b_StrtFailLowPwrLtchEnab) &&
            (rtu_HV_BatSOC < KeSTRR_Pct_CrankSOCAbsMin));
    }
    else
    {
        /* DataStoreWrite: '<S978>/Dsw_StrtFailLowPwrLtch' incorporates:
         *  Constant: '<S978>/FALSE Constant1'
         *  Switch: '<S982>/Switch1'
         */
        NeSTRR_b_StrtFailLowPwrLtch = false;
    }

    /* End of Switch: '<S982>/Switch1' */

    /* If: '<S978>/If' incorporates:
     *  DataStoreRead: '<S978>/Dsr_StrtStopMdTmr'
     */
    if ((!VeSTRR_b_HybCrnkAbrtd_DS) && rtu_StrtAllwd)
    {
        /* Outputs for IfAction SubSystem: '<S978>/StrtAllowed' incorporates:
         *  ActionPort: '<S986>/Action Port'
         */
        /* If: '<S1008>/If' incorporates:
         *  Constant: '<S986>/Constant Value17'
         *  DataStoreWrite: '<S986>/Dsw_StrtStopMdTmr'
         */
        VeSTRR_t_CrnkAbrtTmr_DS = 0.0F;

        /* If: '<S986>/If' incorporates:
         *  Constant: '<S1003>/Constant'
         *  Constant: '<S997>/Constant'
         *  Constant: '<S998>/Calib'
         *  DataStoreRead: '<S986>/Dsr_StrtStopMdTmr'
         *  DataStoreWrite: '<S999>/Dsw_STMTrigger1'
         *  Logic: '<S986>/Logical'
         *  Logic: '<S986>/Logical1'
         *  RelationalOperator: '<S986>/Comparison5'
         *  RelationalOperator: '<S999>/Greater Than or Equal 2'
         *  Switch: '<S1006>/Switch1'
         */
        if (rtu_PTCrnkAct && (rtu_CmndEngOn && ((((uint32)
                VeSTRR_e_EngStrtStopType_DS) != CeSTRR_e_NoAction) ||
                (KeSTRR_b_DisableAutoStrtForKeyCrnk))))
        {
            /* Outputs for IfAction SubSystem: '<S986>/StartReq' incorporates:
             *  ActionPort: '<S1000>/Action Port'
             */
            /* DataStoreWrite: '<S1000>/Dsw_EngOnReq' incorporates:
             *  Constant: '<S1000>/TRUE Constant'
             */
            VeSTRR_b_EngOnReq_DS = true;

            /* DataStoreWrite: '<S1000>/Dsw_EngOnReq1' incorporates:
             *  Constant: '<S1000>/TRUE Constant1'
             */
            VeSTRR_b_FirstStartActv_DS = true;

            /* DataStoreWrite: '<S1000>/Dsw_StrtFail1' incorporates:
             *  Constant: '<S1000>/FALSE Constant2'
             */
            VeSTRR_b_StpDtct_DS = false;

            /* DataStoreWrite: '<S1000>/Dsw_StrtFail4' incorporates:
             *  Constant: '<S1000>/TRUE Constant2'
             */
            VeSTRR_b_StrtDtct_DS = true;

            /* End of Outputs for SubSystem: '<S986>/StartReq' */
        }
        else
        {
            if (rtu_PTCrnkAct)
            {
                /* Outputs for IfAction SubSystem: '<S986>/OffReq_Abrt' incorporates:
                 *  ActionPort: '<S999>/Action Port'
                 */
                /* Switch: '<S1007>/Switch1' incorporates:
                 *  Constant: '<S999>/FALSE Constant2'
                 *  DataStoreRead: '<S999>/Data Store Read3'
                 *  DataStoreWrite: '<S999>/Dsw_EngOnReq1'
                 *  Switch: '<S1006>/Switch1'
                 */
                if (!VeSTRR_b_StrtDtct_DS)
                {
                    VeSTRR_b_EngOnReq_DS = false;

                    /* Switch: '<S1005>/Switch1' incorporates:
                     *  Constant: '<S1001>/Constant'
                     *  Constant: '<S1002>/Constant'
                     *  Constant: '<S999>/FALSE Constant2'
                     *  DataStoreWrite: '<S999>/Dsw_EngOnReq1'
                     *  DataStoreWrite: '<S999>/Dsw_STMTrigger1'
                     *  Logic: '<S999>/Logical7'
                     *  RelationalOperator: '<S978>/Comparison1'
                     *  S-Function (sfix_bitop): '<S978>/Bitwise Logical Operator'
                     *  Switch: '<S1006>/Switch1'
                     */
                    if ((rtu_GenReg & 256U) <= 0U)
                    {
                        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngOffTr;
                    }
                    else
                    {
                        VeSTRR_e_STMTrigger_DS = CeSTRR_e_InactiveTr;
                    }

                    /* End of Switch: '<S1005>/Switch1' */
                }

                /* End of Switch: '<S1007>/Switch1' */

                /* Outputs for Enabled SubSystem: '<S999>/EngOffEntry' incorporates:
                 *  EnablePort: '<S1004>/Enable'
                 */
                if (((uint32)VeSTRR_e_STMTrigger_DS) == CeSTRR_e_EngOffTr)
                {
                    /* DataStoreWrite: '<S1004>/Data Store Write' incorporates:
                     *  Constant: '<S1004>/FALSE Constant1'
                     */
                    VeSTRR_b_StrtDtct_DS = false;

                    /* DataStoreWrite: '<S1004>/Dsw_StrtFail5' incorporates:
                     *  Constant: '<S1004>/TRUE Constant1'
                     */
                    VeSTRR_b_StpDtct_DS = true;
                }

                /* End of Outputs for SubSystem: '<S999>/EngOffEntry' */
                /* End of Outputs for SubSystem: '<S986>/OffReq_Abrt' */
            }
        }

        /* End of If: '<S986>/If' */
        /* End of Outputs for SubSystem: '<S978>/StrtAllowed' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S978>/StrtNOTAlwd' incorporates:
         *  ActionPort: '<S987>/Action Port'
         */
        /* DataStoreWrite: '<S987>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S987>/FALSE Constant'
         */
        VeSTRR_b_EngOnReq_DS = false;

        /* DataStoreWrite: '<S987>/Dsw_StrtStopMdTmr3' incorporates:
         *  Constant: '<S987>/FALSE Constant1'
         */
        VeSTRR_b_StrtCtrlDelayed_DS = false;

        /* DataStoreWrite: '<S987>/Dsw_StrtStopMdTmr4' incorporates:
         *  Constant: '<S987>/FALSE Constant2'
         */
        VeSTRR_b_StrtCtrlTriggered_DS = false;

        /* DataStoreWrite: '<S987>/Dsw_StrtStopMdTmr6' incorporates:
         *  Constant: '<S987>/FALSE Constant4'
         */
        VeSTRR_b_KeyCrnkEngOnDlyActv_DS = false;

        /* DataStoreWrite: '<S987>/Dsw_StrtStopMdTmr7' incorporates:
         *  Constant: '<S987>/FALSE Constant9'
         */
        VeSTRR_b_StrtCtrlLatched_DS = false;

        /* If: '<S987>/If1' incorporates:
         *  DataStoreRead: '<S987>/Dsr_StrtStopMdTmr'
         */
        if (VeSTRR_b_HybCrnkAbrtd_DS)
        {
            /* Outputs for IfAction SubSystem: '<S987>/CheckHybClear' incorporates:
             *  ActionPort: '<S1009>/Action Port'
             */
            /* Switch: '<S1022>/Switch1' incorporates:
             *  DataStoreWrite: '<S1009>/Dsw_HybCrnkAbrtd'
             */
            VeSTRR_b_HybCrnkAbrtd_DS = rtu_PTCrnkAct;

            /* End of Outputs for SubSystem: '<S987>/CheckHybClear' */
        }
        else if (rtu_PTCrnkAct)
        {
            /* Outputs for IfAction SubSystem: '<S987>/CheckHybAbrtSet' incorporates:
             *  ActionPort: '<S1008>/Action Port'
             */
            /* Switch: '<S1008>/Switch' incorporates:
             *  Constant: '<S1013>/Constant'
             *  Logic: '<S1008>/Logical2'
             *  RelationalOperator: '<S1008>/Comparison5'
             */
            if (rtu_InPlntMd && (((uint32)rtu_PRNDL) != CeTRGR_e_TransRangePark))
            {
                /* Switch: '<S1008>/Switch' incorporates:
                 *  Constant: '<S1018>/Calib'
                 */
                rtb_Switch_fg = KeSTRR_t_InPlantDelayCrankAbortTm;
            }
            else
            {
                /* Switch: '<S1008>/Switch' incorporates:
                 *  Constant: '<S1017>/Calib'
                 */
                rtb_Switch_fg = KeSTRR_t_DelayCrankAbortTm;
            }

            /* End of Switch: '<S1008>/Switch' */

            /* If: '<S1008>/If' incorporates:
             *  Constant: '<S1014>/Calib'
             *  Constant: '<S1020>/Constant Value17'
             *  SignalConversion generated from: '<S1020>/Out1'
             *  Sum: '<S1008>/Sum'
             */
            if ((((sint32)rtu_PRNDL) != 1) && (((sint32)rtu_PRNDL) != 3))
            {
                /* Outputs for IfAction SubSystem: '<S1008>/Not_PN' incorporates:
                 *  ActionPort: '<S1020>/Action Port'
                 */
                VeSTRR_t_CrnkAbrtTmr_DS = 0.0F;

                /* End of Outputs for SubSystem: '<S1008>/Not_PN' */
            }

            VeSTRR_t_CrnkAbrtTmr_DS = VeSTRR_t_CrnkAbrtTmr_DS +
                HeSTRR_t_MedTEB_dT;

            /* Outputs for Atomic SubSystem: '<S1008>/Limiter1' */
            /* Switch: '<S1019>/Switch1' incorporates:
             *  RelationalOperator: '<S1019>/Relational Operator'
             */
            if (rtb_Switch_fg < VeSTRR_t_CrnkAbrtTmr_DS)
            {
                /* If: '<S1008>/If' incorporates:
                 *  Switch: '<S1019>/Switch1'
                 */
                VeSTRR_t_CrnkAbrtTmr_DS = rtb_Switch_fg;
            }

            /* End of Switch: '<S1019>/Switch1' */

            /* Switch: '<S1019>/Switch' incorporates:
             *  Constant: '<S1008>/Constant Value17'
             *  RelationalOperator: '<S1019>/Relational Operator1'
             */
            if (VeSTRR_t_CrnkAbrtTmr_DS <= 0.0F)
            {
                /* If: '<S1008>/If' incorporates:
                 *  DataStoreWrite: '<S1008>/Dsw_StrtStopMdTmr'
                 */
                VeSTRR_t_CrnkAbrtTmr_DS = 0.0F;
            }

            /* End of Switch: '<S1019>/Switch' */
            /* End of Outputs for SubSystem: '<S1008>/Limiter1' */

            /* RelationalOperator: '<S1008>/Comparison4' incorporates:
             *  DataStoreWrite: '<S1008>/Dsw_StrtStopMdTmr'
             */
            VeSTRR_b_HybCrnkAbrtd_DS = (rtb_Switch_fg == VeSTRR_t_CrnkAbrtTmr_DS);

            /* Switch: '<S1016>/Switch1' incorporates:
             *  DataStoreRead: '<S1008>/Dsr_StrtNotAlwdBatChks'
             *  DataStoreWrite: '<S1008>/Dsw_StrtFailLowSOC'
             *  Logic: '<S1008>/Logical'
             */
            VeSTRR_b_StartFailLowSOC_DS = ((VeSTRR_b_HybCrnkAbrtd_DS) &&
                (VeSTRR_b_StrtNotAlwdBatChks_DS));

            /* End of Outputs for SubSystem: '<S987>/CheckHybAbrtSet' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S987>/ClearTmr' incorporates:
             *  ActionPort: '<S1010>/Action Port'
             */
            /* If: '<S1008>/If' incorporates:
             *  Constant: '<S1010>/Constant Value17'
             *  DataStoreWrite: '<S1010>/Dsw_StrtStopMdTmr'
             */
            VeSTRR_t_CrnkAbrtTmr_DS = 0.0F;

            /* DataStoreWrite: '<S1010>/Dsw_StrtFailLowSOC' incorporates:
             *  Constant: '<S1010>/FALSE Constant2'
             */
            VeSTRR_b_StartFailLowSOC_DS = false;

            /* End of Outputs for SubSystem: '<S987>/ClearTmr' */
        }

        /* End of If: '<S987>/If1' */
        /* End of Outputs for SubSystem: '<S978>/StrtNOTAlwd' */
    }

    /* End of If: '<S978>/If' */

    /* If: '<S978>/StateTransition' incorporates:
     *  Constant: '<S989>/Constant'
     *  Constant: '<S990>/Constant'
     *  Constant: '<S994>/Calib'
     *  If: '<S985>/If'
     *  Logic: '<S981>/AND'
     *  RelationalOperator: '<S981>/Greater Than or Equal '
     *  RelationalOperator: '<S981>/Less Than  or Equal'
     *  RelationalOperator: '<S985>/Comparison4'
     */
    if ((((uint32)rtu_EssSt) >= CeESSR_e_InitEngSpinSt) && (((uint32)rtu_EssSt) <=
         CeESSR_e_StrtEngEMStrtSt))
    {
        /* Outputs for IfAction SubSystem: '<S978>/EngStrtEntry' incorporates:
         *  ActionPort: '<S980>/Action Port'
         */
        /* DataStoreWrite: '<S980>/Dsw_STMTrigger' incorporates:
         *  Constant: '<S988>/Constant'
         */
        VeSTRR_e_STMTrigger_DS = CeSTRR_e_EngStartTr;

        /* DataStoreWrite: '<S980>/Data Store Write' incorporates:
         *  Constant: '<S980>/TRUE Constant1'
         */
        VeSTRR_b_StrtDtct_DS = true;

        /* DataStoreWrite: '<S980>/Dsw_EngOnReq' incorporates:
         *  Constant: '<S980>/TRUE Constant'
         */
        VeSTRR_b_EngOnReq_DS = true;

        /* DataStoreWrite: '<S980>/Dsw_StrtFail5' incorporates:
         *  Constant: '<S980>/FALSE Constant1'
         */
        VeSTRR_b_StpDtct_DS = false;

        /* End of Outputs for SubSystem: '<S978>/EngStrtEntry' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S978>/STRC_StrtTypUpdt' incorporates:
         *  ActionPort: '<S985>/Action Port'
         */
        if (rtu_ImmdStp)
        {
            /* Outputs for IfAction SubSystem: '<S985>/ImmedStp' incorporates:
             *  ActionPort: '<S993>/Action Port'
             */
            /* If: '<S985>/If' incorporates:
             *  DataStoreWrite: '<S985>/Dsw_EngStrtStopType'
             */
            STRR_ac_ImmedStp((&(VeSTRR_e_EngStrtStopType_DS)));

            /* End of Outputs for SubSystem: '<S985>/ImmedStp' */
        }
        else if (KeSTRR_e_CompressionTestReq == rtu_EngStrtTyp)
        {
            /* Outputs for IfAction SubSystem: '<S985>/CompressTst' incorporates:
             *  ActionPort: '<S991>/Action Port'
             */
            /* If: '<S985>/If' incorporates:
             *  Constant: '<S995>/Constant'
             *  DataStoreWrite: '<S985>/Dsw_EngStrtStopType'
             *  Merge: '<S985>/Merge'
             *  SignalConversion generated from: '<S991>/Type'
             */
            VeSTRR_e_EngStrtStopType_DS = CeSTRR_e_CompressTst;

            /* End of Outputs for SubSystem: '<S985>/CompressTst' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S985>/HCP_ArbStrtTyp' incorporates:
             *  ActionPort: '<S992>/Action Port'
             */
            /* If: '<S985>/If' incorporates:
             *  DataStoreWrite: '<S985>/Dsw_EngStrtStopType'
             *  Inport: '<S992>/HCPStrtTyp'
             *  Merge: '<S985>/Merge'
             */
            VeSTRR_e_EngStrtStopType_DS = rtu_HCPStrtTyp;

            /* End of Outputs for SubSystem: '<S985>/HCP_ArbStrtTyp' */
        }

        /* End of Outputs for SubSystem: '<S978>/STRC_StrtTypUpdt' */
    }

    /* End of If: '<S978>/StateTransition' */
}

#endif

/* Output and update for function-call system: '<S640>/EngStrtAllowed' */
#if Rte_SysCon_Variant_STRR_UseHybVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_EngStrtAllowed_n(VAR(boolean,
    AUTOMATIC) rtu_ImmdStp, VAR(float32, AUTOMATIC) rtu_HVBatVoltModMinArb, VAR
    (float32, AUTOMATIC) rtu_HV_BatSOC, VAR(float32, AUTOMATIC) rtu_PBatSTMaxHH,
    VAR(boolean, AUTOMATIC) rtu_RunCrnkActv, VAR(boolean, AUTOMATIC)
    rtu_InPlntMd, VAR(boolean, AUTOMATIC) rtu_RAStrtAllwinN, VAR
    (TeSTRR_e_AutoStopStartOvrrd, AUTOMATIC) rtu_ECMOvrrd, VAR(boolean,
    AUTOMATIC) rtu_FltOKStrtAllw, P2VAR(boolean, AUTOMATIC, STRR_VAR_INIT)
    rty_StrtAllwRaw)
{
    uint32 rtb_Switch_f;
    boolean rtb_AND1_dd;
    boolean rtb_LeSTRR_b_KeyStrtAlwBatPwr;
    boolean rtb_LeSTRR_b_KeyStrtAlwBatSOC;
    boolean rtb_LeSTRR_b_KeyStrtAlwBatVolt;
    boolean rtb_NOT2_k5_tmp;
    boolean rtb_Switch1_eo;

    /* RelationalOperator: '<S823>/Greater Than or Equal ' incorporates:
     *  Constant: '<S833>/Calib'
     */
    rtb_LeSTRR_b_KeyStrtAlwBatSOC = (rtu_HV_BatSOC > KeSTRR_Pct_StartSOCAbsMin);

    /* RelationalOperator: '<S823>/Greater Than or Equal 1' incorporates:
     *  Constant: '<S832>/Calib'
     */
    rtb_LeSTRR_b_KeyStrtAlwBatPwr = (rtu_PBatSTMaxHH >
        KeSTRR_P_StartMinDschrgPow);

    /* RelationalOperator: '<S823>/Greater Than or Equal 2' incorporates:
     *  Constant: '<S834>/Calib'
     */
    rtb_LeSTRR_b_KeyStrtAlwBatVolt = (rtu_HVBatVoltModMinArb >
        KeSTRR_U_StartMinModVolt);

    /* Logic: '<S823>/AND1' */
    rtb_AND1_dd = ((rtb_LeSTRR_b_KeyStrtAlwBatSOC &&
                    rtb_LeSTRR_b_KeyStrtAlwBatPwr) &&
                   rtb_LeSTRR_b_KeyStrtAlwBatVolt);

    /* Switch: '<S831>/Switch1' incorporates:
     *  Constant: '<S830>/Constant'
     *  Constant: '<S835>/Calib'
     *  DataStoreRead: '<S823>/Data Store Read'
     *  Logic: '<S823>/Logical'
     *  RelationalOperator: '<S823>/Comparison4'
     */
    rtb_Switch1_eo = (((((uint32)VeSTRR_e_EngStrtStopType_DS) ==
                        CeSTRR_e_KeyCrnkEngTrq) && (KeSTRR_b_12vStrtrEquipped)) ||
                      rtb_AND1_dd);

    /* Logic: '<S823>/NOT2' incorporates:
     *  Logic: '<S823>/NOT6'
     */
    rtb_NOT2_k5_tmp = !rtb_Switch1_eo;

    /* Switch: '<S822>/Switch' incorporates:
     *  Logic: '<S823>/Logical1'
     *  Logic: '<S823>/NOT2'
     *  Logic: '<S823>/NOT4'
     */
    if (rtb_NOT2_k5_tmp && (!rtb_LeSTRR_b_KeyStrtAlwBatPwr))
    {
        /* Switch: '<S822>/Switch' incorporates:
         *  DataStoreRead: '<S820>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S827>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f = VeSTRR_g_StrtDisAllowRsn_DS | 2U;
    }
    else
    {
        /* Switch: '<S822>/Switch' incorporates:
         *  DataStoreRead: '<S820>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S824>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S824>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S824>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~VeSTRR_g_StrtDisAllowRsn_DS) | 2U);
    }

    /* End of Switch: '<S822>/Switch' */

    /* Switch: '<S822>/Switch1' incorporates:
     *  Logic: '<S823>/Logical3'
     *  Logic: '<S823>/NOT2'
     *  Logic: '<S823>/NOT5'
     */
    if (rtb_NOT2_k5_tmp && (!rtb_LeSTRR_b_KeyStrtAlwBatVolt))
    {
        /* Switch: '<S822>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S828>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 4U;
    }
    else
    {
        /* Switch: '<S822>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S825>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S825>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S825>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 4U);
    }

    /* End of Switch: '<S822>/Switch1' */

    /* Switch: '<S822>/Switch4' incorporates:
     *  DataStoreWrite: '<S820>/Data Store Write1'
     *  Logic: '<S823>/Logical2'
     *  Logic: '<S823>/NOT2'
     *  Logic: '<S823>/NOT3'
     *  S-Function (sfix_bitop): '<S826>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S826>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S826>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S829>/FixPt Bitwise Operator1'
     */
    if (rtb_NOT2_k5_tmp && (!rtb_LeSTRR_b_KeyStrtAlwBatSOC))
    {
        VeSTRR_g_StrtDisAllowRsn_DS = rtb_Switch_f | 8U;
    }
    else
    {
        VeSTRR_g_StrtDisAllowRsn_DS = ~((~rtb_Switch_f) | 8U);
    }

    /* End of Switch: '<S822>/Switch4' */

    /* Logic: '<S823>/Logical4' incorporates:
     *  DataStoreWrite: '<S823>/Dsw_StrtNotAlwdBatChks'
     *  Logic: '<S823>/NOT1'
     */
    VeSTRR_b_StrtNotAlwdBatChks_DS = (rtb_NOT2_k5_tmp && (!rtb_AND1_dd));

    /* Switch: '<S836>/Switch1' incorporates:
     *  Constant: '<S838>/Calib'
     *  Logic: '<S821>/AND4'
     */
    if (rtu_InPlntMd && (KeSTRR_b_EnblInPlantStrtAllwRAOvrrd))
    {
        /* Switch: '<S836>/Switch1' incorporates:
         *  Logic: '<S821>/NOT6'
         */
        VeSTRR_b_KeyStrtAlwRAOvrrd = !rtu_RAStrtAllwinN;
    }
    else
    {
        /* Switch: '<S836>/Switch1' incorporates:
         *  Constant: '<S837>/Calib'
         *  Logic: '<S821>/AND2'
         *  Logic: '<S821>/NOT6'
         *  Logic: '<S821>/NOT7'
         */
        VeSTRR_b_KeyStrtAlwRAOvrrd = ((((!rtu_InPlntMd) &&
            (KeSTRR_b_EnblInFieldStrtAllwRAOvrrd)) && (!rtu_RAStrtAllwinN)) ||
            (rtu_InPlntMd || (!KeSTRR_b_EnblInFieldStrtAllwRAOvrrd)));
    }

    /* End of Switch: '<S836>/Switch1' */

    /* Logic: '<S645>/AND3' incorporates:
     *  Constant: '<S819>/Constant'
     *  Logic: '<S645>/NOT'
     *  RelationalOperator: '<S645>/Comparison1'
     */
    *rty_StrtAllwRaw = (((((!rtu_ImmdStp) && rtu_RunCrnkActv) &&
                          (VeSTRR_b_KeyStrtAlwRAOvrrd)) && (CeSTRR_e_OvrrdEngOff
                          != ((uint32)rtu_ECMOvrrd))) && rtb_Switch1_eo);

    /* Logic: '<S645>/AND5' */
    VeSTRR_b_EngStartAllowed = ((*rty_StrtAllwRaw) && rtu_FltOKStrtAllw);
}

#endif

/*
 * Output and update for atomic system:
 *    '<S19>/STRL_DSD'
 *    '<S19>/STRL_DSD1'
 */
#if !Rte_SysCon_Variant_STRR_UseBEVVar

static FUNC(void, STRR_CODE_LOCAL) STRR_ac_STRL_DSD(VAR(boolean, AUTOMATIC)
    rtu_Input, VAR(float32, AUTOMATIC) rtu_HiTime, VAR(float32, AUTOMATIC)
    rtu_LowTime, VAR(boolean, AUTOMATIC) rtu_LastOutput, VAR(float32, AUTOMATIC)
    rtu_dT, P2VAR(B_STRL_DSD_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT) localB, P2VAR
    (DW_STRL_DSD_STRR_ac_T, AUTOMATIC, STRR_VAR_INIT) localDW)
{
    float32 rtb_MinMax1_o;

    /* If: '<S97>/If' incorporates:
     *  Logic: '<S97>/AND'
     *  Logic: '<S97>/AND2'
     *  Logic: '<S97>/OR1'
     *  RelationalOperator: '<S97>/Comparison1'
     *  RelationalOperator: '<S97>/Greater  Than'
     *  RelationalOperator: '<S97>/Greater  Than1'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    if (rtu_Input == rtu_LastOutput)
    {
        /* Outputs for IfAction SubSystem: '<S97>/InEqOut' incorporates:
         *  ActionPort: '<S100>/Action Port'
         */
        /* Merge: '<S97>/Merge' incorporates:
         *  Gain: '<S103>/Gain'
         */
        localB->Merge = rtu_LastOutput;

        /* SignalConversion generated from: '<S100>/Out2' incorporates:
         *  Constant: '<S100>/Constant Value1'
         *  UnitDelay: '<S97>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE = 0.0F;

        /* End of Outputs for SubSystem: '<S97>/InEqOut' */
    }
    else if ((localDW->UnitDelay_DSTATE >= rtu_HiTime) && rtu_Input)
    {
        /* Outputs for IfAction SubSystem: '<S97>/RisingDbnc' incorporates:
         *  ActionPort: '<S102>/Action Port'
         */
        /* Merge: '<S97>/Merge' incorporates:
         *  Constant: '<S102>/Constant Value4'
         *  SignalConversion generated from: '<S102>/Out1'
         */
        localB->Merge = true;

        /* SignalConversion generated from: '<S102>/Out2' incorporates:
         *  Constant: '<S102>/Constant Value1'
         *  UnitDelay: '<S97>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE = 0.0F;

        /* End of Outputs for SubSystem: '<S97>/RisingDbnc' */
    }
    else if ((localDW->UnitDelay_DSTATE >= rtu_LowTime) && (!rtu_Input))
    {
        /* Outputs for IfAction SubSystem: '<S97>/FallingDbnc' incorporates:
         *  ActionPort: '<S99>/Action Port'
         */
        /* Merge: '<S97>/Merge' incorporates:
         *  Constant: '<S99>/Constant Value4'
         *  SignalConversion generated from: '<S99>/Out1'
         */
        localB->Merge = false;

        /* SignalConversion generated from: '<S99>/Out2' incorporates:
         *  Constant: '<S99>/Constant Value1'
         *  UnitDelay: '<S97>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE = 0.0F;

        /* End of Outputs for SubSystem: '<S97>/FallingDbnc' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S97>/IncTime' incorporates:
         *  ActionPort: '<S101>/Action Port'
         */
        /* Merge: '<S97>/Merge' incorporates:
         *  Gain: '<S105>/Gain'
         */
        localB->Merge = rtu_LastOutput;

        /* MinMax: '<S101>/MinMax1' */
        rtb_MinMax1_o = fmaxf(rtu_HiTime, rtu_LowTime);

        /* Sum: '<S101>/Summation' incorporates:
         *  UnitDelay: '<S97>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE += rtu_dT;

        /* Outputs for Atomic SubSystem: '<S101>/Limiter' */
        /* Switch: '<S104>/Switch1' incorporates:
         *  RelationalOperator: '<S104>/Relational Operator'
         */
        if (rtb_MinMax1_o < localDW->UnitDelay_DSTATE)
        {
            /* Switch: '<S104>/Switch1' */
            localDW->UnitDelay_DSTATE = rtb_MinMax1_o;
        }

        /* End of Switch: '<S104>/Switch1' */

        /* Switch: '<S104>/Switch' incorporates:
         *  Constant: '<S101>/Constant Value1'
         *  RelationalOperator: '<S104>/Relational Operator1'
         *  UnitDelay: '<S97>/Unit Delay'
         */
        if (localDW->UnitDelay_DSTATE <= 0.0F)
        {
            localDW->UnitDelay_DSTATE = 0.0F;
        }

        /* End of Switch: '<S104>/Switch' */
        /* End of Outputs for SubSystem: '<S101>/Limiter' */
        /* End of Outputs for SubSystem: '<S97>/IncTime' */
    }

    /* End of If: '<S97>/If' */
}

#endif

/* Model step function for TID1 */
FUNC(void, STRR_CODE) STRR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if !Rte_SysCon_Variant_STRR_UseBEVVar && Rte_SysCon_Variant_STRR_UseHybVar

    TeSTRR_e_EngStrtStopType tmpRead;

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

    TeHPMR_e_FC_MdCmd tmpRead_0;

#endif

#if Rte_SysCon_Variant_STRR_UseFCVar

    float32 tmpRead_1;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean tmpRead_2;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    TeSTRR_e_EngStrtStopType tmpRead_3;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean tmpRead_4;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean tmpRead_5;

#endif

    uint32 tmpRead_6;
    uint32 tmpRead_7;
    uint32 tmpRead_8;
    uint32 tmpRead_9;

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_bh;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_gh;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_fw;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_ao;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Comparison6;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_i;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_VeSTRR_b_EngOnAllowedB4Arb;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_dr;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_k;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_cf;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_j;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_cb;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_dv;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_nz;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_nk;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_hg;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_bv;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_Compare_l;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_TmpSignalConversionAtVeSTFR_b_BackUp;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    boolean rtb_TmpSignalConversionAtVeSTFR_b_BumpSt;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    uint32 rtb_Switch;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    uint32 rtb_TmpSignalConversionAtVeSTFR_g_FltReg;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    uint32 rtb_Switch_f;

#endif

#if !Rte_SysCon_Variant_STRR_UseBEVVar

    uint32 rtb_Switch_av;

#endif

    TeSTRR_e_HybStrtrSt rtb_VariantMerge_For_Variant_Source_Vari;
    boolean VeSTRR_b_ImmedStop;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/STRR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeSTFR_b_BackUpStrtChkEngOn' incorporates:
     *  SignalConversion generated from: '<S1>/VeSTFR_b_BumpStrtChkEngOn'
     */
#if !Rte_SysCon_Variant_STRR_UseBEVVar

    /* SignalConversion generated from: '<S1>/VeSTFR_b_BackUpStrtChkEngOn' incorporates:
     *  Inport: '<Root>/VeSTFR_b_BackUpStrtChkEngOn'
     */
    (void)Rte_Read_VeSTFR_b_BackUpStrtChkEngOn_Value
        (&rtb_TmpSignalConversionAtVeSTFR_b_BackUp);

    /* SignalConversion generated from: '<S1>/VeSTFR_b_BumpStrtChkEngOn' incorporates:
     *  Inport: '<Root>/VeSTFR_b_BumpStrtChkEngOn'
     */
    (void)Rte_Read_VeSTFR_b_BumpStrtChkEngOn_Value
        (&rtb_TmpSignalConversionAtVeSTFR_b_BumpSt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTFR_b_BackUpStrtChkEngOn' */

    /* SignalConversion generated from: '<S1>/VeSTFR_e_StrtStpOvrrd' */
#if !Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeSTFR_e_StrtStpOvrrd' incorporates:
     *  Inport: '<Root>/VeSTFR_e_StrtStpOvrrd'
     */
    (void)Rte_Read_VeSTFR_e_StrtStpOvrrd_Value
        (&STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTFR_e_StrtStpOvrrd' */

    /* SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl' */
#if Rte_SysCon_Variant_STRR_EnblBckUpStrt || Rte_SysCon_Variant_STRR_EnblBmpStrt || Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl' */

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' */
#if !Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' */

    /* SignalConversion generated from: '<S1>/VeESSR_b_StrtStopFail' incorporates:
     *  SignalConversion generated from: '<S1>/VeESSR_g_StrtStpFailPhase'
     */
#if Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeESSR_b_StrtStopFail' incorporates:
     *  Inport: '<Root>/VeESSR_b_StrtStopFail'
     */
    (void)Rte_Read_VeESSR_b_StrtStopFail_Value
        (&STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa);

    /* SignalConversion generated from: '<S1>/VeESSR_g_StrtStpFailPhase' incorporates:
     *  Inport: '<Root>/VeESSR_g_StrtStpFailPhase'
     */
    (void)Rte_Read_VeESSR_g_StrtStpFailPhase_Value
        (&STRR_ac_B.TmpSignalConversionAtVeESSR_g_StrtStpFai);

#endif

    /* End of SignalConversion generated from: '<S1>/VeESSR_b_StrtStopFail' */

    /* SignalConversion generated from: '<S1>/VeSTAR_b_CmdEngOnFnl' */
#if !Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeSTAR_b_CmdEngOnFnl' incorporates:
     *  Inport: '<Root>/VeSTAR_b_CmdEngOnFnl'
     */
    (void)Rte_Read_VeSTAR_b_CmdEngOnFnl_Value
        (&STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTAR_b_CmdEngOnFnl' */

    /* SignalConversion generated from: '<S1>/VeSTAR_e_StrtTypArbFnl' */
#if Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeSTAR_e_StrtTypArbFnl' incorporates:
     *  Inport: '<Root>/VeSTAR_e_StrtTypArbFnl'
     */
    (void)Rte_Read_VeSTAR_e_StrtTypArbFnl_Value
        (&STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTAR_e_StrtTypArbFnl' */

    /* SignalConversion generated from: '<S1>/VeSTAR_g_GenStrtStpReg' */
#if !Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeSTAR_g_GenStrtStpReg' incorporates:
     *  Inport: '<Root>/VeSTAR_g_GenStrtStpReg'
     */
    (void)Rte_Read_VeSTAR_g_GenStrtStpReg_Value
        (&STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTAR_g_GenStrtStpReg' */

    /* SignalConversion generated from: '<S1>/VeENGR_e_EngStrtStpOvrrd' */
#if Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeENGR_e_EngStrtStpOvrrd' incorporates:
     *  Inport: '<Root>/VeENGR_e_EngStrtStpOvrrd'
     */
    (void)Rte_Read_VeENGR_e_EngStrtStpOvrrd_Value
        (&STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp);

#endif

    /* End of SignalConversion generated from: '<S1>/VeENGR_e_EngStrtStpOvrrd' */

    /* SignalConversion generated from: '<S1>/VePMDR_b_StrtCntrlStOn' incorporates:
     *  Inport: '<Root>/VePMDR_b_StrtCntrlStOn'
     */
    (void)Rte_Read_VePMDR_b_StrtCntrlStOn_Value
        (&STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS);

    /* SignalConversion generated from: '<S1>/VePMDR_b_CrankAborted' */
#if Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VePMDR_b_CrankAborted' incorporates:
     *  Inport: '<Root>/VePMDR_b_CrankAborted'
     */
    (void)Rte_Read_VePMDR_b_CrankAborted_Value
        (&STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMDR_b_CrankAborted' */

    /* SignalConversion generated from: '<S1>/VePMDR_e_KeyStatus' incorporates:
     *  SignalConversion generated from: '<S1>/VePMDR_b_RunCrankActive'
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VePMDR_e_KeyStatus' incorporates:
     *  Inport: '<Root>/VePMDR_e_KeyStatus'
     */
    (void)Rte_Read_VePMDR_e_KeyStatus_Value
        (&STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO);

    /* SignalConversion generated from: '<S1>/VePMDR_b_RunCrankActive' incorporates:
     *  Inport: '<Root>/VePMDR_b_RunCrankActive'
     */
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value
        (&STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMDR_e_KeyStatus' */

    /* SignalConversion generated from: '<S1>/VeRTMR_b_InPlantMode' */
#if Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeRTMR_b_InPlantMode' incorporates:
     *  Inport: '<Root>/VeRTMR_b_InPlantMode'
     */
    (void)Rte_Read_VeRTMR_b_InPlantMode_Value
        (&STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRTMR_b_InPlantMode' */

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysStartReady' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
     */
#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysStartReady' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysStartReady'
     */
    (void)Rte_Read_VeHPMR_b_PropSysStartReady_Value
        (&STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta);

    /* SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        (&STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHPMR_b_PropSysStartReady' */

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  SignalConversion generated from: '<S1>/VeHVTR_U_HV_BatVoltModMinArb'
     *  SignalConversion generated from: '<S1>/VeSTCR_P_PBatSTMaxHH'
     */
#if Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa);

    /* SignalConversion generated from: '<S1>/VeHVTR_U_HV_BatVoltModMinArb' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb'
     */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMinArb_Value
        (&STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt);

    /* SignalConversion generated from: '<S1>/VeSTCR_P_PBatSTMaxHH' incorporates:
     *  Inport: '<Root>/VeSTCR_P_PBatSTMaxHH'
     */
    (void)Rte_Read_VeSTCR_P_PBatSTMaxHH_Value
        (&STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' */

    /* SignalConversion generated from: '<S1>/VeBPCR_b_HV_BatCntctrOpenReq' */
#if Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseFCVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeBPCR_b_HV_BatCntctrOpenReq' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenReq_Value
        (&STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBPCR_b_HV_BatCntctrOpenReq' */

    /* SignalConversion generated from: '<S1>/VeSTAR_b_RemedialStop' */
#if !Rte_SysCon_Variant_STRR_UseBEVVar || Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VeSTAR_b_RemedialStop' incorporates:
     *  Inport: '<Root>/VeSTAR_b_RemedialStop'
     */
    (void)Rte_Read_VeSTAR_b_RemedialStop_Value
        (&STRR_ac_B.TmpSignalConversionAtVeSTAR_b_RemedialSt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTAR_b_RemedialStop' */

    /* SignalConversion generated from: '<S1>/VePMDR_e_OperationalModeSts' */
#if Rte_SysCon_Variant_STRR_UseHybVar

    /* SignalConversion generated from: '<S1>/VePMDR_e_OperationalModeSts' incorporates:
     *  Inport: '<Root>/VePMDR_e_OperationalModeSts'
     */
    (void)Rte_Read_VePMDR_e_OperationalModeSts_Value
        (&STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMDR_e_OperationalModeSts' */

    /* SignalConversion generated from: '<S1>/VeSTFR_g_FltReg1' */
#if !Rte_SysCon_Variant_STRR_UseBEVVar

    /* SignalConversion generated from: '<S1>/VeSTFR_g_FltReg1' incorporates:
     *  Inport: '<Root>/VeSTFR_g_FltReg1'
     */
    (void)Rte_Read_VeSTFR_g_FltReg1_Value
        (&rtb_TmpSignalConversionAtVeSTFR_g_FltReg);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTFR_g_FltReg1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRC_STMVars'
     */
    /* Outputs for Atomic SubSystem: '<S8>/VarSS_STM' */
#if Rte_SysCon_Variant_STRR_UseBEVVar

    /* Outputs for Atomic SubSystem: '<S308>/BEV' */
    /* Chart: '<S536>/STRC_StateMachine' incorporates:
     *  DataStoreRead: '<S536>/Dsr_STMTrigger'
     */
    /* Gateway: STRC_BEV_STM/STRC_ExecSM/STRC_StateMachine */
    /* During: STRC_BEV_STM/STRC_ExecSM/STRC_StateMachine */
    if (((uint32)STRR_ac_DW.is_active_c35_STRC_BEV_STM) == 0U)
    {
        /* Entry: STRC_BEV_STM/STRC_ExecSM/STRC_StateMachine */
        STRR_ac_DW.is_active_c35_STRC_BEV_STM = 1U;

        /* Entry Internal: STRC_BEV_STM/STRC_ExecSM/STRC_StateMachine */
        /* Transition: '<S639>:6' */
        STRR_ac_DW.is_c35_STRC_BEV_STM = STRR_ac_IN_KeyOff_b;

        /* Outputs for Function Call SubSystem: '<S531>/ImmedStop' */
        /* Entry 'KeyOff': '<S639>:5' */
        /* Event: '<S639>:30' */
        STRR_ac_ImmedStop_p(STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                            STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                            STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                            STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                            STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                            STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                            STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                            STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                            STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                            &STRR_ac_B.VariantMergeForOutportImmdStp,
                            &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                            &STRR_ac_ConstB.ImmedStop_p, &STRR_ac_DW.ImmedStop_p);

        /* End of Outputs for SubSystem: '<S531>/ImmedStop' */

        /* Outputs for Function Call SubSystem: '<S531>/EngStrtAllowed' */
        /* Event: '<S639>:33' */
        STRR_ac_EngStrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp,
                               STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc);

        /* End of Outputs for SubSystem: '<S531>/EngStrtAllowed' */

        /* Outputs for Function Call SubSystem: '<S535>/KeyOffInit' */
        /* Event: '<S639>:31' */
        STRR_ac_KeyOffInit_m();

        /* End of Outputs for SubSystem: '<S535>/KeyOffInit' */

        /* Outputs for Function Call SubSystem: '<S535>/KeyOffDur' */
        /* Event: '<S639>:32' */
        STRR_ac_KeyOffDur_l(STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                            VeSTRR_b_BEVStartAllowed,
                            STRR_ac_B.VariantMergeForOutportImmdStp);

        /* End of Outputs for SubSystem: '<S535>/KeyOffDur' */
    }
    else if (((uint32)STRR_ac_DW.is_c35_STRC_BEV_STM) == STRR_ac_IN_EngOff)
    {
        /* During 'EngOff': '<S639>:1' */
        if (((uint32)VeSTRR_e_STMTrigger_DS) == CeSTRR_e_KeyOffFailTr)
        {
            /* Transition: '<S639>:16' */
            STRR_ac_DW.is_c35_STRC_BEV_STM = STRR_ac_IN_KeyOff_b;

            /* Outputs for Function Call SubSystem: '<S531>/ImmedStop' */
            /* Entry 'KeyOff': '<S639>:5' */
            /* Event: '<S639>:30' */
            STRR_ac_ImmedStop_p
                (STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                 STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                 STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                 STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                 STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                 STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                 &STRR_ac_B.VariantMergeForOutportImmdStp,
                 &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                 &STRR_ac_ConstB.ImmedStop_p, &STRR_ac_DW.ImmedStop_p);

            /* End of Outputs for SubSystem: '<S531>/ImmedStop' */

            /* Outputs for Function Call SubSystem: '<S531>/EngStrtAllowed' */
            /* Event: '<S639>:33' */
            STRR_ac_EngStrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp,
                                   STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc);

            /* End of Outputs for SubSystem: '<S531>/EngStrtAllowed' */

            /* Outputs for Function Call SubSystem: '<S535>/KeyOffInit' */
            /* Event: '<S639>:31' */
            STRR_ac_KeyOffInit_m();

            /* End of Outputs for SubSystem: '<S535>/KeyOffInit' */

            /* Outputs for Function Call SubSystem: '<S535>/KeyOffDur' */
            /* Event: '<S639>:32' */
            STRR_ac_KeyOffDur_l
                (STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                 VeSTRR_b_BEVStartAllowed,
                 STRR_ac_B.VariantMergeForOutportImmdStp);

            /* End of Outputs for SubSystem: '<S535>/KeyOffDur' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S531>/ImmedStop' */
            /* Event: '<S639>:30' */
            STRR_ac_ImmedStop_p
                (STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                 STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                 STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                 STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                 STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                 STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                 &STRR_ac_B.VariantMergeForOutportImmdStp,
                 &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                 &STRR_ac_ConstB.ImmedStop_p, &STRR_ac_DW.ImmedStop_p);

            /* End of Outputs for SubSystem: '<S531>/ImmedStop' */

            /* Outputs for Function Call SubSystem: '<S531>/EngOff' */
            /* Event: '<S639>:25' */
            STRR_ac_EngOff(STRR_ac_B.VariantMergeForOutportImmdStp);

            /* End of Outputs for SubSystem: '<S531>/EngOff' */
        }
    }
    else
    {
        /* During 'KeyOff': '<S639>:5' */
        if (((uint32)VeSTRR_e_STMTrigger_DS) == CeSTRR_e_EngOffTr)
        {
            /* Transition: '<S639>:12' */
            STRR_ac_DW.is_c35_STRC_BEV_STM = STRR_ac_IN_EngOff;

            /* Outputs for Function Call SubSystem: '<S531>/ImmedStop' */
            /* Entry 'EngOff': '<S639>:1' */
            /* Event: '<S639>:30' */
            STRR_ac_ImmedStop_p
                (STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                 STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                 STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                 STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                 STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                 STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                 &STRR_ac_B.VariantMergeForOutportImmdStp,
                 &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                 &STRR_ac_ConstB.ImmedStop_p, &STRR_ac_DW.ImmedStop_p);

            /* End of Outputs for SubSystem: '<S531>/ImmedStop' */

            /* Outputs for Function Call SubSystem: '<S531>/EngOff' */
            /* Event: '<S639>:25' */
            STRR_ac_EngOff(STRR_ac_B.VariantMergeForOutportImmdStp);

            /* End of Outputs for SubSystem: '<S531>/EngOff' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S531>/ImmedStop' */
            /* Event: '<S639>:30' */
            STRR_ac_ImmedStop_p
                (STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                 STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                 STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                 STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                 STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                 STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                 STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                 &STRR_ac_B.VariantMergeForOutportImmdStp,
                 &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                 &STRR_ac_ConstB.ImmedStop_p, &STRR_ac_DW.ImmedStop_p);

            /* End of Outputs for SubSystem: '<S531>/ImmedStop' */

            /* Outputs for Function Call SubSystem: '<S531>/EngStrtAllowed' */
            /* Event: '<S639>:33' */
            STRR_ac_EngStrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp,
                                   STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc);

            /* End of Outputs for SubSystem: '<S531>/EngStrtAllowed' */

            /* Outputs for Function Call SubSystem: '<S535>/KeyOffDur' */
            /* Event: '<S639>:32' */
            STRR_ac_KeyOffDur_l
                (STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                 VeSTRR_b_BEVStartAllowed,
                 STRR_ac_B.VariantMergeForOutportImmdStp);

            /* End of Outputs for SubSystem: '<S535>/KeyOffDur' */
        }
    }

    /* End of Chart: '<S536>/STRC_StateMachine' */

    /* VariantMerge generated from: '<S308>/StrtAllwRaw' incorporates:
     *  Constant: '<S528>/TRUE Constant1'
     */
    STRR_ac_B.VariantMergeForOutportStrtAllwRaw = true;

    /* VariantMerge generated from: '<S308>/STRR_RunCrnkActv' incorporates:
     *  Constant: '<S528>/TRUE Constant2'
     */
    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv = true;

    /* End of Outputs for SubSystem: '<S308>/BEV' */
#elif Rte_SysCon_Variant_STRR_UseHybVar

    /* Outputs for Atomic SubSystem: '<S308>/Non_BEV' */
    /* Inport: '<Root>/VeENGR_e_EngReqStrtType' */
    /* Gateway: STRC_FUNC_STM/STRC_ExSTM/STRC_StateMachine */
    /* During: STRC_FUNC_STM/STRC_ExSTM/STRC_StateMachine */
    (void)Rte_Read_VeENGR_e_EngReqStrtType_Value(&tmpRead);

    /* Inport: '<Root>/VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly' */
    (void)Rte_Read_VeSRAR_b_EngShutDwn_EngOffKeyStrtinNeutralOnly_Value
        (&VeSTRR_b_ImmedStop);

    /* Inport: '<Root>/VeSTAR_b_StrtAllwd' */
    (void)Rte_Read_VeSTAR_b_StrtAllwd_Value(&rtb_Comparison6);

    /* Chart: '<S648>/STRC_StateMachine' incorporates:
     *  DataStoreRead: '<S648>/Dsr_STMTrigger'
     *  Inport: '<Root>/VeESSR_b_EngStartAbort'
     *  Inport: '<Root>/VePLTR_b_RTC_CurrentTimeFA'
     *  Inport: '<Root>/VePLTR_t_RTC_CurrentTime'
     *  Inport: '<Root>/VeSTAR_b_StrtChkMdUp'
     */
    if (((uint32)STRR_ac_DW.is_active_c1_STRC_FUNC_STM) == 0U)
    {
        /* Entry: STRC_FUNC_STM/STRC_ExSTM/STRC_StateMachine */
        STRR_ac_DW.is_active_c1_STRC_FUNC_STM = 1U;

        /* Entry Internal: STRC_FUNC_STM/STRC_ExSTM/STRC_StateMachine */
        /* Transition: '<S1029>:6' */
        STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_KeyOff;

        /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
        /* Entry 'KeyOff': '<S1029>:5' */
        /* Event: '<S1029>:30' */
        STRR_ac_ImmedStop_d(STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                            STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                            STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                            STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                            STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                            STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                            STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                            STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                            STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                            STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                            STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                            STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                            STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                            STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                            STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                            STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                            &STRR_ac_B.VariantMergeForOutportImmdStp,
                            &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                            &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                            &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

        /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

        /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
        /* Event: '<S1029>:33' */
        STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
            STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
            STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
            STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
            STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
            STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
            VeSTRR_b_ImmedStop,
            STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp, rtb_Comparison6,
            &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

        /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

        /* Outputs for Function Call SubSystem: '<S647>/KeyOffInit' */
        /* Event: '<S1029>:31' */
        STRR_ac_KeyOffInit_h();

        /* End of Outputs for SubSystem: '<S647>/KeyOffInit' */

        /* Outputs for Function Call SubSystem: '<S647>/KeyOffDur' */
        /* Event: '<S1029>:32' */
        STRR_ac_KeyOffDur_m(STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                            STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                            STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                            STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                            tmpRead, VeSTRR_b_EngStartAllowed,
                            STRR_ac_B.VariantMergeForOutportImmdStp,
                            STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                            STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                            STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                            STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp);

        /* End of Outputs for SubSystem: '<S647>/KeyOffDur' */
    }
    else
    {
        (void)Rte_Read_VeESSR_b_EngStartAbort_Value(&rtb_Compare_gh);
        (void)Rte_Read_VePLTR_t_RTC_CurrentTime_Value(&rtb_Switch);
        (void)Rte_Read_VePLTR_b_RTC_CurrentTimeFA_Value(&rtb_Compare_i);
        (void)Rte_Read_VeSTAR_b_StrtChkMdUp_Value
            (&rtb_VeSTRR_b_EngOnAllowedB4Arb);
        switch (STRR_ac_DW.is_c1_STRC_FUNC_STM)
        {
          case STRR_ac_IN_EngOff:
            /* During 'EngOff': '<S1029>:1' */
            switch (VeSTRR_e_STMTrigger_DS)
            {
              case CeSTRR_e_EngStartTr:
                /* Transition: '<S1029>:7' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_EngStart;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'EngStart': '<S1029>:3' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S643>/EngStartingEnt' */
                /* Event: '<S1029>:26' */
                STRR_ac_EngStartingEnt();

                /* End of Outputs for SubSystem: '<S643>/EngStartingEnt' */

                /* Outputs for Function Call SubSystem: '<S643>/EngStartingDur' */
                /* Event: '<S1029>:27' */
                STRR_ac_EngStartingDur
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_g_StrtStpFai,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_RemedialSt);

                /* End of Outputs for SubSystem: '<S643>/EngStartingDur' */
                break;

              case CeSTRR_e_KeyOffFailTr:
                /* Transition: '<S1029>:16' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_KeyOff;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'KeyOff': '<S1029>:5' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S647>/KeyOffInit' */
                /* Event: '<S1029>:31' */
                STRR_ac_KeyOffInit_h();

                /* End of Outputs for SubSystem: '<S647>/KeyOffInit' */

                /* Outputs for Function Call SubSystem: '<S647>/KeyOffDur' */
                /* Event: '<S1029>:32' */
                STRR_ac_KeyOffDur_m
                    (STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn, tmpRead,
                     VeSTRR_b_EngStartAllowed,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp);

                /* End of Outputs for SubSystem: '<S647>/KeyOffDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S640>/EngOff' */
                /* Event: '<S1029>:25' */
                STRR_ac_EngOff_g
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     VeSTRR_b_EngStartAllowed, rtb_VeSTRR_b_EngOnAllowedB4Arb,
                     &STRR_ac_DW.EngOff_g);

                /* End of Outputs for SubSystem: '<S640>/EngOff' */
                break;
            }
            break;

          case STRR_ac_IN_EngRunning:
            /* During 'EngRunning': '<S1029>:2' */
            if (((uint32)VeSTRR_e_STMTrigger_DS) == CeSTRR_e_EngStopTr)
            {
                /* Transition: '<S1029>:9' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_EngStop;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'EngStop': '<S1029>:4' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStopping' */
                /* Event: '<S1029>:29' */
                STRR_ac_EngStopping
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     VeSTRR_b_EngStartAllowed,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     rtb_Compare_gh,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     rtb_Switch, rtb_Compare_i);

                /* End of Outputs for SubSystem: '<S640>/EngStopping' */
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngRunning' */
                /* Event: '<S1029>:28' */
                STRR_ac_EngRunning
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.VariantMergeForOutportImmdStp);

                /* End of Outputs for SubSystem: '<S640>/EngRunning' */
            }
            break;

          case STRR_ac_IN_EngStart:
            /* During 'EngStart': '<S1029>:3' */
            switch (VeSTRR_e_STMTrigger_DS)
            {
              case CeSTRR_e_EngStopTr:
                /* Transition: '<S1029>:11' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_EngStop;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'EngStop': '<S1029>:4' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStopping' */
                /* Event: '<S1029>:29' */
                STRR_ac_EngStopping
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     VeSTRR_b_EngStartAllowed,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     rtb_Compare_gh,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     rtb_Switch, rtb_Compare_i);

                /* End of Outputs for SubSystem: '<S640>/EngStopping' */
                break;

              case CeSTRR_e_EngRunTr:
                /* Transition: '<S1029>:8' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_EngRunning;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'EngRunning': '<S1029>:2' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngRunning' */
                /* Event: '<S1029>:28' */
                STRR_ac_EngRunning
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.VariantMergeForOutportImmdStp);

                /* End of Outputs for SubSystem: '<S640>/EngRunning' */
                break;

              case CeSTRR_e_KeyOffFailTr:
                /* Transition: '<S1029>:15' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_KeyOff;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'KeyOff': '<S1029>:5' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S647>/KeyOffInit' */
                /* Event: '<S1029>:31' */
                STRR_ac_KeyOffInit_h();

                /* End of Outputs for SubSystem: '<S647>/KeyOffInit' */

                /* Outputs for Function Call SubSystem: '<S647>/KeyOffDur' */
                /* Event: '<S1029>:32' */
                STRR_ac_KeyOffDur_m
                    (STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn, tmpRead,
                     VeSTRR_b_EngStartAllowed,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp);

                /* End of Outputs for SubSystem: '<S647>/KeyOffDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S643>/EngStartingDur' */
                /* Event: '<S1029>:27' */
                STRR_ac_EngStartingDur
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_g_StrtStpFai,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_RemedialSt);

                /* End of Outputs for SubSystem: '<S643>/EngStartingDur' */
                break;
            }
            break;

          case STRR_ac_IN_EngStop:
            /* During 'EngStop': '<S1029>:4' */
            switch (VeSTRR_e_STMTrigger_DS)
            {
              case CeSTRR_e_KeyOffFailTr:
                /* Transition: '<S1029>:13' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_KeyOff;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'KeyOff': '<S1029>:5' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S647>/KeyOffInit' */
                /* Event: '<S1029>:31' */
                STRR_ac_KeyOffInit_h();

                /* End of Outputs for SubSystem: '<S647>/KeyOffInit' */

                /* Outputs for Function Call SubSystem: '<S647>/KeyOffDur' */
                /* Event: '<S1029>:32' */
                STRR_ac_KeyOffDur_m
                    (STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn, tmpRead,
                     VeSTRR_b_EngStartAllowed,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp);

                /* End of Outputs for SubSystem: '<S647>/KeyOffDur' */
                break;

              case CeSTRR_e_EngRunTr:
                /* Transition: '<S1029>:14' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_EngRunning;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'EngRunning': '<S1029>:2' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngRunning' */
                /* Event: '<S1029>:28' */
                STRR_ac_EngRunning
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.VariantMergeForOutportImmdStp);

                /* End of Outputs for SubSystem: '<S640>/EngRunning' */
                break;

              case CeSTRR_e_EngStartTr:
                /* Transition: '<S1029>:18' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_EngStart;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'EngStart': '<S1029>:3' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S643>/EngStartingEnt' */
                /* Event: '<S1029>:26' */
                STRR_ac_EngStartingEnt();

                /* End of Outputs for SubSystem: '<S643>/EngStartingEnt' */

                /* Outputs for Function Call SubSystem: '<S643>/EngStartingDur' */
                /* Event: '<S1029>:27' */
                STRR_ac_EngStartingDur
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_g_StrtStpFai,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_RemedialSt);

                /* End of Outputs for SubSystem: '<S643>/EngStartingDur' */
                break;

              case CeSTRR_e_EngOffTr:
                /* Transition: '<S1029>:10' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_EngOff;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'EngOff': '<S1029>:1' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S640>/EngOff' */
                /* Event: '<S1029>:25' */
                STRR_ac_EngOff_g
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     VeSTRR_b_EngStartAllowed, rtb_VeSTRR_b_EngOnAllowedB4Arb,
                     &STRR_ac_DW.EngOff_g);

                /* End of Outputs for SubSystem: '<S640>/EngOff' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStopping' */
                /* Event: '<S1029>:29' */
                STRR_ac_EngStopping
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     VeSTRR_b_EngStartAllowed,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     rtb_Compare_gh,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     rtb_Switch, rtb_Compare_i);

                /* End of Outputs for SubSystem: '<S640>/EngStopping' */
                break;
            }
            break;

          default:
            /* During 'KeyOff': '<S1029>:5' */
            switch (VeSTRR_e_STMTrigger_DS)
            {
              case CeSTRR_e_EngOffTr:
                /* Transition: '<S1029>:12' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_EngOff;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'EngOff': '<S1029>:1' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S640>/EngOff' */
                /* Event: '<S1029>:25' */
                STRR_ac_EngOff_g
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     VeSTRR_b_EngStartAllowed, rtb_VeSTRR_b_EngOnAllowedB4Arb,
                     &STRR_ac_DW.EngOff_g);

                /* End of Outputs for SubSystem: '<S640>/EngOff' */
                break;

              case CeSTRR_e_EngStartTr:
                /* Transition: '<S1029>:17' */
                STRR_ac_DW.is_c1_STRC_FUNC_STM = STRR_ac_IN_EngStart;

                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Entry 'EngStart': '<S1029>:3' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S643>/EngStartingEnt' */
                /* Event: '<S1029>:26' */
                STRR_ac_EngStartingEnt();

                /* End of Outputs for SubSystem: '<S643>/EngStartingEnt' */

                /* Outputs for Function Call SubSystem: '<S643>/EngStartingDur' */
                /* Event: '<S1029>:27' */
                STRR_ac_EngStartingDur
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_g_StrtStpFai,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_RemedialSt);

                /* End of Outputs for SubSystem: '<S643>/EngStartingDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S640>/ImmedStop' */
                /* Event: '<S1029>:30' */
                STRR_ac_ImmedStop_d
                    (STRR_ac_B.TmpSignalConversionAtVeESSR_b_StrtStopFa,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_CrankAbort,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_Operationa,
                     &STRR_ac_B.VariantMergeForOutportImmdStp,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                     &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                     &STRR_ac_B.ImmedStop_d, &STRR_ac_DW.ImmedStop_d);

                /* End of Outputs for SubSystem: '<S640>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S640>/EngStrtAllowed' */
                /* Event: '<S1029>:33' */
                STRR_ac_EngStrtAllowed_n(STRR_ac_B.VariantMergeForOutportImmdStp,
                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv,
                    STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                    VeSTRR_b_ImmedStop,
                    STRR_ac_B.TmpSignalConversionAtVeENGR_e_EngStrtStp,
                    rtb_Comparison6,
                    &STRR_ac_B.VariantMergeForOutportStrtAllwRaw);

                /* End of Outputs for SubSystem: '<S640>/EngStrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S647>/KeyOffDur' */
                /* Event: '<S1029>:32' */
                STRR_ac_KeyOffDur_m
                    (STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn, tmpRead,
                     VeSTRR_b_EngStartAllowed,
                     STRR_ac_B.VariantMergeForOutportImmdStp,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVeRTMR_b_InPlantMod,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_e_StrtTypArb,
                     STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp);

                /* End of Outputs for SubSystem: '<S647>/KeyOffDur' */
                break;
            }
            break;
        }
    }

    /* End of Chart: '<S648>/STRC_StateMachine' */
    /* End of Outputs for SubSystem: '<S308>/Non_BEV' */
#else

    /* Outputs for Atomic SubSystem: '<S308>/NotActive' */
    STRR_ac_No_FC(&STRR_ac_B.VariantMergeForOutportImmdStp,
                  &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq,
                  &STRR_ac_B.VariantMergeForOutportStrtAllwRaw,
                  &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv);

    /* End of Outputs for SubSystem: '<S308>/NotActive' */
#endif

    /* End of Outputs for SubSystem: '<S8>/VarSS_STM' */

    /* Outputs for Atomic SubSystem: '<S8>/VarSS_FC_STM' */
#if Rte_SysCon_Variant_STRR_UseFCVar

    /* Outputs for Atomic SubSystem: '<S307>/FC' */
    /* RelationalOperator: '<S311>/Equal2' incorporates:
     *  Constant: '<S315>/Constant'
     *  Constant: '<S322>/Calib'
     */
    STRR_ac_B.Equal2 = (((uint32)KeSTRR_e_OvrrdFCMdReq) ==
                        CeSTRR_e_ImmedShutDown);

    /* RelationalOperator: '<S311>/Equal4' incorporates:
     *  Constant: '<S316>/Constant'
     */
    STRR_ac_B.Equal4 = (((uint32)KeSTRR_e_OvrrdFCMdReq) == CeSTRR_e_QuickStop);

    /* Outputs for Atomic SubSystem: '<S311>/Hysteresis' */
    /* Switch: '<S317>/Switch1' incorporates:
     *  Constant: '<S317>/Constant Value'
     *  Constant: '<S318>/Calib'
     *  Constant: '<S319>/Calib'
     *  RelationalOperator: '<S317>/Greater  Than'
     *  RelationalOperator: '<S317>/Greater  Than1'
     *  UnitDelay: '<S317>/Unit Delay'
     */
    if (STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa >
            KeSTRR_Pct_AutoStopHVBattSOC)
    {
        STRR_ac_DW.UnitDelay_DSTATE_a = true;
    }
    else
    {
        STRR_ac_DW.UnitDelay_DSTATE_a =
            ((STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa >=
              KeSTRR_Pct_AutoStrtHVBattSOC) && (STRR_ac_DW.UnitDelay_DSTATE_a));
    }

    /* End of Switch: '<S317>/Switch1' */
    /* End of Outputs for SubSystem: '<S311>/Hysteresis' */

    /* Inport: '<Root>/VeFCPR_e_ActualMode' */
    (void)Rte_Read_VeFCPR_e_ActualMode_Value(&STRR_ac_B.Switch_f);

    /* Logic: '<S311>/Logical2' incorporates:
     *  Constant: '<S313>/Constant'
     *  RelationalOperator: '<S311>/Equal3'
     */
    STRR_ac_B.Logical2 = ((((uint32)KeSTRR_e_OvrrdFCMdReq) == CeSTRR_e_Off) ||
                          (STRR_ac_B.Equal2));

    /* Logic: '<S311>/Logical3' incorporates:
     *  Constant: '<S314>/Constant'
     *  Logic: '<S311>/Logical Operator'
     *  RelationalOperator: '<S311>/Equal1'
     *  UnitDelay: '<S317>/Unit Delay'
     */
    STRR_ac_B.Logical3 = ((!STRR_ac_DW.UnitDelay_DSTATE_a) || (((uint32)
                            KeSTRR_e_OvrrdFCMdReq) == CeSTRR_e_Run));

    /* Switch: '<S311>/Switch' incorporates:
     *  Constant: '<S320>/Calib'
     */
    if (KeSTRR_b_EnblOvrrdFCActState)
    {
        /* Switch: '<S311>/Switch' incorporates:
         *  Constant: '<S321>/Calib'
         *  Inport: '<Root>/VeFCPR_e_ActualMode'
         */
        STRR_ac_B.Switch_f = KeSTRR_e_OvrrdFCActState;
    }

    /* End of Switch: '<S311>/Switch' */

    /* VariantMerge generated from: '<S307>/STRR_RunCrnkActv' incorporates:
     *  Inport: '<S309>/RunCrnkActv'
     */
    STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j =
        STRR_ac_B.TmpSignalConversionAtVePMDR_b_RunCrankAc;

    /* Inport: '<Root>/VeHPMR_e_FuelCellMdCmd' */
    /* Gateway: STRR_MedTEB/STRC_STMVars/VarSS_FC_STM/FC/FC_STM/STRC_FCExSTM/STRC_FCStateMachine */
    /* During: STRR_MedTEB/STRC_STMVars/VarSS_FC_STM/FC/FC_STM/STRC_FCExSTM/STRC_FCStateMachine */
    (void)Rte_Read_VeHPMR_e_FuelCellMdCmd_Value(&tmpRead_0);

    /* Chart: '<S329>/STRC_FCStateMachine' incorporates:
     *  DataStoreRead: '<S329>/Dsr_STMTrigger'
     *  Inport: '<Root>/VeOHSR_P_FCDsrdPwr'
     */
    if (((uint32)STRR_ac_DW.is_active_c1_STRR_ac) == 0U)
    {
        /* Entry: STRR_MedTEB/STRC_STMVars/VarSS_FC_STM/FC/FC_STM/STRC_FCExSTM/STRC_FCStateMachine */
        STRR_ac_DW.is_active_c1_STRR_ac = 1U;

        /* Entry Internal: STRR_MedTEB/STRC_STMVars/VarSS_FC_STM/FC/FC_STM/STRC_FCExSTM/STRC_FCStateMachine */
        /* Transition: '<S514>:6' */
        STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_KeyOff;

        /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
        /* Entry 'KeyOff': '<S514>:5' */
        /* Event: '<S514>:30' */
        STRR_ac_ImmedStop(STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                          STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                          STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                          STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                          STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                          STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                          STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                          STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                          STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                          &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                          &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                          &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                          &STRR_ac_DW.ImmedStop);

        /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

        /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
        /* Event: '<S514>:33' */
        STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                            STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                            STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                            STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                            tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

        /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

        /* Outputs for Function Call SubSystem: '<S327>/KeyOffInit' */
        /* Event: '<S514>:31' */
        STRR_ac_KeyOffInit();

        /* End of Outputs for SubSystem: '<S327>/KeyOffInit' */

        /* Outputs for Function Call SubSystem: '<S327>/KeyOffDur' */
        /* Event: '<S514>:32' */
        STRR_ac_KeyOffDur(STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                          STRR_ac_B.Switch_f, STRR_ac_B.Logical3,
                          VeSTRR_b_FCStartAllowed);

        /* End of Outputs for SubSystem: '<S327>/KeyOffDur' */
    }
    else
    {
        (void)Rte_Read_VeOHSR_P_FCDsrdPwr_Value(&tmpRead_1);
        switch (STRR_ac_DW.is_c1_STRR_ac)
        {
          case STRR_ac_IN_FCOff:
            /* During 'FCOff': '<S514>:1' */
            switch (VeSTRR_e_FCSTMTrigger_DS)
            {
              case CeSTRR_e_EngStartTr:
                /* Transition: '<S514>:7' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_FCStart;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'FCStart': '<S514>:3' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S325>/FCStartingEnt' */
                /* Event: '<S514>:26' */
                STRR_ac_FCStartingEnt();

                /* End of Outputs for SubSystem: '<S325>/FCStartingEnt' */

                /* Outputs for Function Call SubSystem: '<S325>/FCStartingDur' */
                /* Event: '<S514>:27' */
                STRR_ac_FCStartingDur(STRR_ac_B.Switch_f,
                                      STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                      STRR_ac_B.Logical3, STRR_ac_B.Logical2,
                                      STRR_ac_B.ImmedStop.Logical1,
                                      STRR_ac_B.Equal4, STRR_ac_B.Equal2);

                /* End of Outputs for SubSystem: '<S325>/FCStartingDur' */
                break;

              case CeSTRR_e_KeyOffFailTr:
                /* Transition: '<S514>:16' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_KeyOff;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'KeyOff': '<S514>:5' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
                /* Event: '<S514>:33' */
                STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                                    tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

                /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S327>/KeyOffInit' */
                /* Event: '<S514>:31' */
                STRR_ac_KeyOffInit();

                /* End of Outputs for SubSystem: '<S327>/KeyOffInit' */

                /* Outputs for Function Call SubSystem: '<S327>/KeyOffDur' */
                /* Event: '<S514>:32' */
                STRR_ac_KeyOffDur
                    (STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.Switch_f, STRR_ac_B.Logical3,
                     VeSTRR_b_FCStartAllowed);

                /* End of Outputs for SubSystem: '<S327>/KeyOffDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
                /* Event: '<S514>:33' */
                STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                                    tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

                /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S312>/FCOff' */
                /* Event: '<S514>:25' */
                STRR_ac_FCOff(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                              STRR_ac_B.Logical3, VeSTRR_b_FCStartAllowed,
                              STRR_ac_B.Switch_f, STRR_ac_B.ImmedStop.Logical1);

                /* End of Outputs for SubSystem: '<S312>/FCOff' */
                break;
            }
            break;

          case STRR_ac_IN_FCRunning:
            /* During 'FCRunning': '<S514>:2' */
            if (((uint32)VeSTRR_e_FCSTMTrigger_DS) == CeSTRR_e_EngStopTr)
            {
                /* Transition: '<S514>:9' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_FCStop;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'FCStop': '<S514>:4' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
                /* Event: '<S514>:33' */
                STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                                    tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

                /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S312>/FCStopping' */
                /* Event: '<S514>:29' */
                STRR_ac_FCStopping(STRR_ac_B.Switch_f,
                                   STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                   STRR_ac_B.ImmedStop.Logical1,
                                   STRR_ac_B.Equal4, STRR_ac_B.Equal2);

                /* End of Outputs for SubSystem: '<S312>/FCStopping' */
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/FCRunning' */
                /* Event: '<S514>:28' */
                STRR_ac_FCRunning(STRR_ac_B.Switch_f, STRR_ac_B.Logical3,
                                  STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                  STRR_ac_B.ImmedStop.Logical1, STRR_ac_B.Equal4,
                                  STRR_ac_B.Equal2, tmpRead_1);

                /* End of Outputs for SubSystem: '<S312>/FCRunning' */
            }
            break;

          case STRR_ac_IN_FCStart:
            /* During 'FCStart': '<S514>:3' */
            switch (VeSTRR_e_FCSTMTrigger_DS)
            {
              case CeSTRR_e_EngStopTr:
                /* Transition: '<S514>:11' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_FCStop;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'FCStop': '<S514>:4' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
                /* Event: '<S514>:33' */
                STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                                    tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

                /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S312>/FCStopping' */
                /* Event: '<S514>:29' */
                STRR_ac_FCStopping(STRR_ac_B.Switch_f,
                                   STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                   STRR_ac_B.ImmedStop.Logical1,
                                   STRR_ac_B.Equal4, STRR_ac_B.Equal2);

                /* End of Outputs for SubSystem: '<S312>/FCStopping' */
                break;

              case CeSTRR_e_EngRunTr:
                /* Transition: '<S514>:8' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_FCRunning;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'FCRunning': '<S514>:2' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/FCRunning' */
                /* Event: '<S514>:28' */
                STRR_ac_FCRunning(STRR_ac_B.Switch_f, STRR_ac_B.Logical3,
                                  STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                  STRR_ac_B.ImmedStop.Logical1, STRR_ac_B.Equal4,
                                  STRR_ac_B.Equal2, tmpRead_1);

                /* End of Outputs for SubSystem: '<S312>/FCRunning' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S325>/FCStartingDur' */
                /* Event: '<S514>:27' */
                STRR_ac_FCStartingDur(STRR_ac_B.Switch_f,
                                      STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                      STRR_ac_B.Logical3, STRR_ac_B.Logical2,
                                      STRR_ac_B.ImmedStop.Logical1,
                                      STRR_ac_B.Equal4, STRR_ac_B.Equal2);

                /* End of Outputs for SubSystem: '<S325>/FCStartingDur' */
                break;
            }
            break;

          case STRR_ac_IN_FCStop:
            /* During 'FCStop': '<S514>:4' */
            switch (VeSTRR_e_FCSTMTrigger_DS)
            {
              case CeSTRR_e_KeyOffFailTr:
                /* Transition: '<S514>:13' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_KeyOff;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'KeyOff': '<S514>:5' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
                /* Event: '<S514>:33' */
                STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                                    tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

                /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S327>/KeyOffInit' */
                /* Event: '<S514>:31' */
                STRR_ac_KeyOffInit();

                /* End of Outputs for SubSystem: '<S327>/KeyOffInit' */

                /* Outputs for Function Call SubSystem: '<S327>/KeyOffDur' */
                /* Event: '<S514>:32' */
                STRR_ac_KeyOffDur
                    (STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.Switch_f, STRR_ac_B.Logical3,
                     VeSTRR_b_FCStartAllowed);

                /* End of Outputs for SubSystem: '<S327>/KeyOffDur' */
                break;

              case CeSTRR_e_EngRunTr:
                /* Transition: '<S514>:14' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_FCRunning;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'FCRunning': '<S514>:2' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/FCRunning' */
                /* Event: '<S514>:28' */
                STRR_ac_FCRunning(STRR_ac_B.Switch_f, STRR_ac_B.Logical3,
                                  STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                  STRR_ac_B.ImmedStop.Logical1, STRR_ac_B.Equal4,
                                  STRR_ac_B.Equal2, tmpRead_1);

                /* End of Outputs for SubSystem: '<S312>/FCRunning' */
                break;

              case CeSTRR_e_EngStartTr:
                /* Transition: '<S514>:18' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_FCStart;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'FCStart': '<S514>:3' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S325>/FCStartingEnt' */
                /* Event: '<S514>:26' */
                STRR_ac_FCStartingEnt();

                /* End of Outputs for SubSystem: '<S325>/FCStartingEnt' */

                /* Outputs for Function Call SubSystem: '<S325>/FCStartingDur' */
                /* Event: '<S514>:27' */
                STRR_ac_FCStartingDur(STRR_ac_B.Switch_f,
                                      STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                      STRR_ac_B.Logical3, STRR_ac_B.Logical2,
                                      STRR_ac_B.ImmedStop.Logical1,
                                      STRR_ac_B.Equal4, STRR_ac_B.Equal2);

                /* End of Outputs for SubSystem: '<S325>/FCStartingDur' */
                break;

              case CeSTRR_e_EngOffTr:
                /* Transition: '<S514>:10' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_FCOff;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'FCOff': '<S514>:1' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
                /* Event: '<S514>:33' */
                STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                                    tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

                /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S312>/FCOff' */
                /* Event: '<S514>:25' */
                STRR_ac_FCOff(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                              STRR_ac_B.Logical3, VeSTRR_b_FCStartAllowed,
                              STRR_ac_B.Switch_f, STRR_ac_B.ImmedStop.Logical1);

                /* End of Outputs for SubSystem: '<S312>/FCOff' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
                /* Event: '<S514>:33' */
                STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                                    tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

                /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S312>/FCStopping' */
                /* Event: '<S514>:29' */
                STRR_ac_FCStopping(STRR_ac_B.Switch_f,
                                   STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                   STRR_ac_B.ImmedStop.Logical1,
                                   STRR_ac_B.Equal4, STRR_ac_B.Equal2);

                /* End of Outputs for SubSystem: '<S312>/FCStopping' */
                break;
            }
            break;

          default:
            /* During 'KeyOff': '<S514>:5' */
            switch (VeSTRR_e_FCSTMTrigger_DS)
            {
              case CeSTRR_e_EngOffTr:
                /* Transition: '<S514>:12' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_FCOff;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'FCOff': '<S514>:1' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
                /* Event: '<S514>:33' */
                STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                                    tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

                /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S312>/FCOff' */
                /* Event: '<S514>:25' */
                STRR_ac_FCOff(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                              STRR_ac_B.Logical3, VeSTRR_b_FCStartAllowed,
                              STRR_ac_B.Switch_f, STRR_ac_B.ImmedStop.Logical1);

                /* End of Outputs for SubSystem: '<S312>/FCOff' */
                break;

              case CeSTRR_e_EngStartTr:
                /* Transition: '<S514>:17' */
                STRR_ac_DW.is_c1_STRR_ac = STRR_ac_IN_FCStart;

                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Entry 'FCStart': '<S514>:3' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S325>/FCStartingEnt' */
                /* Event: '<S514>:26' */
                STRR_ac_FCStartingEnt();

                /* End of Outputs for SubSystem: '<S325>/FCStartingEnt' */

                /* Outputs for Function Call SubSystem: '<S325>/FCStartingDur' */
                /* Event: '<S514>:27' */
                STRR_ac_FCStartingDur(STRR_ac_B.Switch_f,
                                      STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                      STRR_ac_B.Logical3, STRR_ac_B.Logical2,
                                      STRR_ac_B.ImmedStop.Logical1,
                                      STRR_ac_B.Equal4, STRR_ac_B.Equal2);

                /* End of Outputs for SubSystem: '<S325>/FCStartingDur' */
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S312>/ImmedStop' */
                /* Event: '<S514>:30' */
                STRR_ac_ImmedStop
                    (STRR_ac_B.TmpSignalConversionAtVeBPCR_e_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeBPCR_b_HV_BatCntc,
                     STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_e_KeyStatusO,
                     STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j,
                     STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysSta,
                     STRR_ac_B.TmpSignalConversionAtVeTRGR_e_VldtdTrans,
                     STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     &STRR_ac_B.VariantMergeForOutportImmdStp_i,
                     &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                     &STRR_ac_B.ImmedStop, &STRR_ac_ConstB.ImmedStop,
                     &STRR_ac_DW.ImmedStop);

                /* End of Outputs for SubSystem: '<S312>/ImmedStop' */

                /* Outputs for Function Call SubSystem: '<S312>/StrtAllowed' */
                /* Event: '<S514>:33' */
                STRR_ac_StrtAllowed(STRR_ac_B.VariantMergeForOutportImmdStp_i,
                                    STRR_ac_B.TmpSignalConversionAtVeHVTR_U_HV_BatVolt,
                                    STRR_ac_B.TmpSignalConversionAtVeBPCR_Pct_HV_BatPa,
                                    STRR_ac_B.TmpSignalConversionAtVeSTCR_P_PBatSTMaxH,
                                    tmpRead_0, (&(VeSTRR_b_FCStartAllowed)));

                /* End of Outputs for SubSystem: '<S312>/StrtAllowed' */

                /* Outputs for Function Call SubSystem: '<S327>/KeyOffDur' */
                /* Event: '<S514>:32' */
                STRR_ac_KeyOffDur
                    (STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS,
                     STRR_ac_B.Switch_f, STRR_ac_B.Logical3,
                     VeSTRR_b_FCStartAllowed);

                /* End of Outputs for SubSystem: '<S327>/KeyOffDur' */
                break;
            }
            break;
        }
    }

    /* End of Chart: '<S329>/STRC_FCStateMachine' */
    /* End of Outputs for SubSystem: '<S307>/FC' */
    /* End of Outputs for SubSystem: '<S8>/VarSS_FC_STM' */
#else

    /* Outputs for Atomic SubSystem: '<S307>/No_FC' */
    STRR_ac_No_FC(&STRR_ac_B.VariantMergeForOutportImmdStp_i,
                  &STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c,
                  (&(VeSTRR_b_FCStartAllowed)),
                  &STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j);

    /* End of Outputs for SubSystem: '<S307>/No_FC' */
#endif

    /* Logic: '<S8>/Logical1' */
    VeSTRR_b_ImmedStop = ((STRR_ac_B.VariantMergeForOutportImmdStp) ||
                          (STRR_ac_B.VariantMergeForOutportImmdStp_i));

    /* Logic: '<S8>/Logical3' */
    VeSTRR_b_EngStartAllowedRaw = ((STRR_ac_B.VariantMergeForOutportStrtAllwRaw)
        && (VeSTRR_b_FCStartAllowed));

    /* Logic: '<S8>/Logical4' */
    VeSTRR_b_RunCrnkActv = ((STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv) &&
                            (STRR_ac_B.VariantMergeForOutportSTRR_RunCrnkActv_j));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRC_PoPrCfg'
     */
    /* Outputs for Atomic SubSystem: '<S7>/Variant_SS_PostProc' */
#if Rte_SysCon_Variant_STRR_UseBEVVar

    /* Outputs for Atomic SubSystem: '<S10>/Variant_BEV' */
    /* DataStoreWrite: '<S11>/Data Store Write' incorporates:
     *  Constant: '<S11>/Constant Value1'
     */
    NeSTRR_g_BackupStrtRsn = 0U;

    /* DataStoreWrite: '<S11>/Data Store Write2' incorporates:
     *  Constant: '<S11>/Constant Value2'
     */
    NeSTRR_g_BumpStrtRsn = 0U;

    /* DataStoreWrite: '<S11>/Dsw_PID_AStrtEntry2' incorporates:
     *  Constant: '<S11>/Constant Value3'
     */
    VeSTRR_g_AStpInhbtRsn_DS = 0U;

    /* DataStoreWrite: '<S11>/Dsw_PID_AStrtEntry4' incorporates:
     *  Constant: '<S11>/Constant Value4'
     */
    VeSTRR_g_AStpInhbtRsn2_DS = 0U;

    /* DataStoreWrite: '<S11>/Dsw_PID_AStrtEntry1' incorporates:
     *  Constant: '<S11>/Constant Value5'
     */
    VeSTRR_g_EVModeInhbtRsn_DS = 0U;

    /* DataStoreWrite: '<S11>/Dsw_PID_AStrtEntry11' incorporates:
     *  Constant: '<S11>/Constant Value6'
     */
    VeSTRR_g_EVModeInhbtRsn2_DS = 0U;

    /* DataStoreWrite: '<S11>/DSW_EngOffAllowedECM' incorporates:
     *  Constant: '<S11>/FALSE Constant6'
     */
    VeSTRR_b_EngOffAllwdECM_DS = true;

    /* DataStoreWrite: '<S11>/DSW_EngOffAllowedECM1' incorporates:
     *  Constant: '<S11>/FALSE Constant7'
     */
    VeSTRR_b_EngOffAllwdTCM_DS = true;

    /* DataStoreWrite: '<S11>/DSW_EngOffAllowedSTGC' incorporates:
     *  Constant: '<S11>/FALSE Constant5'
     */
    VeSTRR_b_EngOffAllowed_DS = true;

    /* VariantMerge generated from: '<S10>/EngOnFuelOn' incorporates:
     *  Constant: '<S11>/FALSE Constant1'
     */
    STRR_ac_B.VariantMergeForOutportEngOnFuelOn = false;

    /* VariantMerge generated from: '<S10>/EngOnAllwdSTGCFnl' incorporates:
     *  Constant: '<S11>/FALSE Constant2'
     */
    STRR_ac_B.VariantMergeForOutportEngOnAllwdSTGCFnl = false;

    /* VariantMerge generated from: '<S10>/RemStpFnl' incorporates:
     *  Constant: '<S11>/FALSE Constant3'
     */
    STRR_ac_B.VariantMergeForOutportRemStpFnl = false;

    /* VariantMerge generated from: '<S10>/StrtTyp2TCMFnl' incorporates:
     *  Constant: '<S13>/Constant'
     */
    STRR_ac_B.VariantMergeForOutportStrtTyp2TCMFnl = CeSTRR_e_NoAction;

    /* VariantMerge generated from: '<S10>/RmStpESSFnl' incorporates:
     *  Constant: '<S11>/FALSE Constant4'
     */
    STRR_ac_B.VariantMergeForOutportRmStpESSFnl = false;

    /* End of Outputs for SubSystem: '<S10>/Variant_BEV' */
#else

    /* Outputs for Atomic SubSystem: '<S10>/Variant_NonBEV' */
    /* RelationalOperator: '<S51>/Compare' incorporates:
     *  Constant: '<S16>/Constant1'
     *  Constant: '<S51>/Constant'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator'
     */
    rtb_Compare_bh = ((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 1U) >
                      0U);

    /* Switch: '<S15>/Switch' */
    if (rtb_Compare_bh)
    {
        /* Switch: '<S15>/Switch' incorporates:
         *  DataStoreRead: '<S12>/Dsr_PID_AStrtEntry1'
         *  S-Function (sfix_bitop): '<S44>/FixPt Bitwise Operator1'
         */
        rtb_Switch = VeSTRR_g_EVModeInhbtRsn_DS | 64U;
    }
    else
    {
        /* Switch: '<S15>/Switch' incorporates:
         *  DataStoreRead: '<S12>/Dsr_PID_AStrtEntry1'
         *  S-Function (sfix_bitop): '<S37>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S37>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S37>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~VeSTRR_g_EVModeInhbtRsn_DS) | 64U);
    }

    /* End of Switch: '<S15>/Switch' */

    /* RelationalOperator: '<S79>/Compare' incorporates:
     *  Constant: '<S16>/Constant6'
     *  Constant: '<S79>/Constant'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator5'
     */
    rtb_Compare_gh = ((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 32U)
                      > 0U);

    /* Switch: '<S15>/Switch1' */
    if (rtb_Compare_gh)
    {
        /* Switch: '<S15>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S45>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 256U;
    }
    else
    {
        /* Switch: '<S15>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S38>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S38>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S38>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 256U);
    }

    /* End of Switch: '<S15>/Switch1' */

    /* RelationalOperator: '<S52>/Compare' incorporates:
     *  Constant: '<S16>/Constant2'
     *  Constant: '<S52>/Constant'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator1'
     */
    rtb_Compare_fw = ((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 2U) >
                      0U);

    /* Switch: '<S15>/Switch2' */
    if (rtb_Compare_fw)
    {
        /* Switch: '<S15>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S46>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 1024U;
    }
    else
    {
        /* Switch: '<S15>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S39>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S39>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S39>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 1024U);
    }

    /* End of Switch: '<S15>/Switch2' */

    /* RelationalOperator: '<S178>/Compare' incorporates:
     *  Constant: '<S16>/Constant11'
     *  Constant: '<S53>/Constant'
     *  RelationalOperator: '<S53>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator10'
     */
    rtb_Compare_ao = ((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp &
                       1024U) > 0U);

    /* Switch: '<S15>/Switch5' */
    if (rtb_Compare_ao)
    {
        /* Switch: '<S15>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S49>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 33554432U;
    }
    else
    {
        /* Switch: '<S15>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S42>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S42>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S42>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 33554432U);
    }

    /* End of Switch: '<S15>/Switch5' */

    /* RelationalOperator: '<S17>/Comparison6' incorporates:
     *  Constant: '<S16>/Constant7'
     *  Constant: '<S78>/Constant'
     *  RelationalOperator: '<S78>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator6'
     */
    rtb_Comparison6 = ((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 64U)
                       > 0U);

    /* Switch: '<S15>/Switch3' incorporates:
     *  DataStoreWrite: '<S12>/Dsw_PID_AStrtEntry1'
     *  S-Function (sfix_bitop): '<S40>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S40>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S40>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S47>/FixPt Bitwise Operator1'
     */
    if (rtb_Comparison6)
    {
        VeSTRR_g_EVModeInhbtRsn_DS = rtb_Switch | 2147483648U;
    }
    else
    {
        VeSTRR_g_EVModeInhbtRsn_DS = ~((~rtb_Switch) | 2147483648U);
    }

    /* End of Switch: '<S15>/Switch3' */

    /* RelationalOperator: '<S63>/Compare' incorporates:
     *  Constant: '<S16>/Constant3'
     *  Constant: '<S63>/Constant'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator2'
     */
    rtb_Compare_i = ((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 4U) >
                     0U);

    /* Switch: '<S15>/Switch4' */
    if (rtb_Compare_i)
    {
        /* Switch: '<S15>/Switch4' incorporates:
         *  DataStoreRead: '<S12>/Dsr_PID_AStrtEntry21'
         *  S-Function (sfix_bitop): '<S48>/FixPt Bitwise Operator1'
         */
        rtb_Switch = VeSTRR_g_EVModeInhbtRsn2_DS | 1U;
    }
    else
    {
        /* Switch: '<S15>/Switch4' incorporates:
         *  DataStoreRead: '<S12>/Dsr_PID_AStrtEntry21'
         *  S-Function (sfix_bitop): '<S41>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S41>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S41>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~VeSTRR_g_EVModeInhbtRsn2_DS) | 1U);
    }

    /* End of Switch: '<S15>/Switch4' */

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S16>/Constant10'
     *  Constant: '<S82>/Constant'
     *  RelationalOperator: '<S82>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator9'
     */
    rtb_VeSTRR_b_EngOnAllowedB4Arb =
        ((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 512U) > 0U);

    /* Switch: '<S15>/Switch6' incorporates:
     *  DataStoreWrite: '<S12>/Dsw_PID_AStrtEntry11'
     *  S-Function (sfix_bitop): '<S43>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S43>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S43>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S50>/FixPt Bitwise Operator1'
     */
    if (rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        VeSTRR_g_EVModeInhbtRsn2_DS = rtb_Switch | 134217728U;
    }
    else
    {
        VeSTRR_g_EVModeInhbtRsn2_DS = ~((~rtb_Switch) | 134217728U);
    }

    /* End of Switch: '<S15>/Switch6' */

    /* Switch: '<S14>/Switch' */
    if (rtb_Compare_bh)
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  DataStoreRead: '<S12>/Dsr_PID_AStrtEntry2'
         *  S-Function (sfix_bitop): '<S30>/FixPt Bitwise Operator1'
         */
        rtb_Switch = VeSTRR_g_AStpInhbtRsn_DS | 64U;
    }
    else
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  DataStoreRead: '<S12>/Dsr_PID_AStrtEntry2'
         *  S-Function (sfix_bitop): '<S23>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S23>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S23>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~VeSTRR_g_AStpInhbtRsn_DS) | 64U);
    }

    /* End of Switch: '<S14>/Switch' */

    /* Switch: '<S14>/Switch1' */
    if (rtb_Compare_gh)
    {
        /* Switch: '<S14>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S31>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 256U;
    }
    else
    {
        /* Switch: '<S14>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S24>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S24>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S24>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 256U);
    }

    /* End of Switch: '<S14>/Switch1' */

    /* Switch: '<S14>/Switch2' */
    if (rtb_Compare_fw)
    {
        /* Switch: '<S14>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S32>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 1024U;
    }
    else
    {
        /* Switch: '<S14>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S25>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S25>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S25>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 1024U);
    }

    /* End of Switch: '<S14>/Switch2' */

    /* Switch: '<S14>/Switch5' */
    if (rtb_Compare_ao)
    {
        /* Switch: '<S14>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S35>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 33554432U;
    }
    else
    {
        /* Switch: '<S14>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S28>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S28>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S28>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 33554432U);
    }

    /* End of Switch: '<S14>/Switch5' */

    /* Switch: '<S14>/Switch3' incorporates:
     *  DataStoreWrite: '<S12>/Dsw_PID_AStrtEntry2'
     *  S-Function (sfix_bitop): '<S26>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S26>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S26>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S33>/FixPt Bitwise Operator1'
     */
    if (rtb_Comparison6)
    {
        VeSTRR_g_AStpInhbtRsn_DS = rtb_Switch | 2147483648U;
    }
    else
    {
        VeSTRR_g_AStpInhbtRsn_DS = ~((~rtb_Switch) | 2147483648U);
    }

    /* End of Switch: '<S14>/Switch3' */

    /* Switch: '<S14>/Switch4' */
    if (rtb_Compare_i)
    {
        /* Switch: '<S14>/Switch4' incorporates:
         *  DataStoreRead: '<S12>/Dsr_PID_AStrtEntry5'
         *  S-Function (sfix_bitop): '<S34>/FixPt Bitwise Operator1'
         */
        rtb_Switch = VeSTRR_g_AStpInhbtRsn2_DS | 1U;
    }
    else
    {
        /* Switch: '<S14>/Switch4' incorporates:
         *  DataStoreRead: '<S12>/Dsr_PID_AStrtEntry5'
         *  S-Function (sfix_bitop): '<S27>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S27>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S27>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~VeSTRR_g_AStpInhbtRsn2_DS) | 1U);
    }

    /* End of Switch: '<S14>/Switch4' */

    /* Switch: '<S14>/Switch6' incorporates:
     *  DataStoreWrite: '<S12>/Dsw_PID_AStrtEntry4'
     *  S-Function (sfix_bitop): '<S29>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S29>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S29>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S36>/FixPt Bitwise Operator1'
     */
    if (rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        VeSTRR_g_AStpInhbtRsn2_DS = rtb_Switch | 134217728U;
    }
    else
    {
        VeSTRR_g_AStpInhbtRsn2_DS = ~((~rtb_Switch) | 134217728U);
    }

    /* End of Switch: '<S14>/Switch6' */

    /* Inport: '<Root>/VeSTAR_b_EngOffAllowedECM' */
    (void)Rte_Read_VeSTAR_b_EngOffAllowedECM_Value(&rtb_Compare_dr);

    /* Inport: '<Root>/VeSTAR_b_EngOffAllowed' */
    (void)Rte_Read_VeSTAR_b_EngOffAllowed_Value(&rtb_Compare_k);

    /* Logic: '<S18>/Logical10' */
    rtb_Compare_bh = ((VeSTRR_b_ImmedStop &&
                       (STRR_ac_B.TmpSignalConversionAtVeHPMR_b_PropSysAct)) &&
                      (VeSTRR_b_RunCrnkActv));

    /* Outputs for Atomic SubSystem: '<S19>/STRL_DSD1' */
    /* Logic: '<S19>/Logical3' incorporates:
     *  Constant: '<S92>/Calib'
     *  Constant: '<S93>/Calib'
     *  Constant: '<S94>/Calib'
     *  DataStoreRead: '<S19>/Data Store Read1'
     */
    STRR_ac_STRL_DSD(rtb_Compare_bh || rtb_Compare_dr,
                     KeSTRR_t_EngOffAllwdECM_HiTm, KeSTRR_t_EngOffAllwdECM_LoTm,
                     VeSTRR_b_EngOffAllwdECM_DS, HeSTRR_t_MedTEB_dT,
                     &STRR_ac_B.STRL_DSD1, &STRR_ac_DW.STRL_DSD1);

    /* End of Outputs for SubSystem: '<S19>/STRL_DSD1' */

    /* DataStoreWrite: '<S19>/DSW_EngOffAllowedECM' */
    VeSTRR_b_EngOffAllwdECM_DS = STRR_ac_B.STRL_DSD1.Merge;

    /* Outputs for Atomic SubSystem: '<S19>/STRL_DSD' */
    /* Logic: '<S19>/Logical1' incorporates:
     *  Constant: '<S92>/Calib'
     *  Constant: '<S95>/Calib'
     *  Constant: '<S96>/Calib'
     *  DataStoreRead: '<S19>/Data Store Read'
     */
    STRR_ac_STRL_DSD(rtb_Compare_k || rtb_Compare_bh,
                     KeSTRR_t_EngOffAllwdSTGC_HiTm,
                     KeSTRR_t_EngOffAllwdSTGC_LoTm, VeSTRR_b_EngOffAllowed_DS,
                     HeSTRR_t_MedTEB_dT, &STRR_ac_B.STRL_DSD,
                     &STRR_ac_DW.STRL_DSD);

    /* End of Outputs for SubSystem: '<S19>/STRL_DSD' */

    /* DataStoreWrite: '<S19>/DSW_EngOffAllowedSTGC' */
    VeSTRR_b_EngOffAllowed_DS = STRR_ac_B.STRL_DSD.Merge;

    /* Switch: '<S18>/Switch1' incorporates:
     *  DataStoreRead: '<S285>/Data Store Read'
     *  Logic: '<S285>/Logical2'
     */
    rtb_VeSTRR_b_EngOnAllowedB4Arb = !VeSTRR_b_EngOnReq_DS;

    /* Switch: '<S284>/Switch' incorporates:
     *  Constant: '<S16>/Constant13'
     *  Constant: '<S58>/Constant'
     *  Logic: '<S285>/Logical5'
     *  RelationalOperator: '<S58>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator12'
     */
    if (((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 4096U) > 0U) &&
            rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        /* Switch: '<S284>/Switch' incorporates:
         *  DataStoreRead: '<S21>/Data Store Read10'
         *  S-Function (sfix_bitop): '<S295>/FixPt Bitwise Operator1'
         */
        rtb_Switch = VeSTRR_g_StrtDisAllowRsn_DS | 16U;
    }
    else
    {
        /* Switch: '<S284>/Switch' incorporates:
         *  DataStoreRead: '<S21>/Data Store Read10'
         *  S-Function (sfix_bitop): '<S286>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S286>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S286>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~VeSTRR_g_StrtDisAllowRsn_DS) | 16U);
    }

    /* End of Switch: '<S284>/Switch' */

    /* Switch: '<S284>/Switch1' incorporates:
     *  Constant: '<S16>/Constant14'
     *  Constant: '<S57>/Constant'
     *  Logic: '<S285>/Logical6'
     *  RelationalOperator: '<S57>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator13'
     */
    if (((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 8192U) > 0U) &&
            rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        /* Switch: '<S284>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S296>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 64U;
    }
    else
    {
        /* Switch: '<S284>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S287>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S287>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S287>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 64U);
    }

    /* End of Switch: '<S284>/Switch1' */

    /* RelationalOperator: '<S17>/Comparison6' incorporates:
     *  Constant: '<S85>/Constant'
     */
    rtb_Comparison6 = (((uint32)VeSTRR_e_HybStrtrSt_DS) == CeSTRR_e_KeyOffSt);

    /* Switch: '<S284>/Switch2' incorporates:
     *  Constant: '<S83>/Constant'
     *  Constant: '<S84>/Constant'
     *  Constant: '<S86>/Constant'
     *  Constant: '<S87>/Constant'
     *  Constant: '<S88>/Constant'
     *  Logic: '<S17>/Logical13'
     *  Logic: '<S17>/Logical14'
     *  Logic: '<S17>/Logical15'
     *  Logic: '<S17>/Logical2'
     *  Logic: '<S17>/Logical7'
     *  Logic: '<S285>/Logical4'
     *  RelationalOperator: '<S17>/Comparison1'
     *  RelationalOperator: '<S17>/Comparison2'
     *  RelationalOperator: '<S17>/Comparison4'
     *  RelationalOperator: '<S17>/Comparison5'
     *  RelationalOperator: '<S17>/Comparison7'
     */
    if (((((CeESSR_e_EngOff == ((uint32)
                                STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt))
           || ((((uint32)STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) >=
                CeESSR_e_PrepForStopSt) && (((uint32)
              STRR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) <=
             CeESSR_e_CoastDownSt))) &&
            (!STRR_ac_B.TmpSignalConversionAtVeSTAR_b_CmdEngOnFn)) &&
            (((CeSTRR_e_EngStoppingSt == ((uint32)VeSTRR_e_HybStrtrSt_DS)) ||
              rtb_Comparison6) || (((uint32)VeSTRR_e_HybStrtrSt_DS) ==
            CeSTRR_e_EngOffSt))) && rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        /* Switch: '<S284>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S297>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 128U;
    }
    else
    {
        /* Switch: '<S284>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S288>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S288>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S288>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 128U);
    }

    /* End of Switch: '<S284>/Switch2' */

    /* Switch: '<S284>/Switch5' incorporates:
     *  Constant: '<S16>/Constant15'
     *  Constant: '<S56>/Constant'
     *  Logic: '<S285>/Logical3'
     *  RelationalOperator: '<S56>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator14'
     */
    if (((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 16384U) > 0U) &&
            rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        /* Switch: '<S284>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S300>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 512U;
    }
    else
    {
        /* Switch: '<S284>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S291>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S291>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S291>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 512U);
    }

    /* End of Switch: '<S284>/Switch5' */

    /* Switch: '<S284>/Switch3' incorporates:
     *  Constant: '<S16>/Constant12'
     *  Constant: '<S54>/Constant'
     *  Logic: '<S285>/Logical1'
     *  RelationalOperator: '<S54>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator11'
     */
    if (((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 2048U) > 0U) &&
            rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        /* Switch: '<S284>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S298>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 4096U;
    }
    else
    {
        /* Switch: '<S284>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S289>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S289>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S289>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 4096U);
    }

    /* End of Switch: '<S284>/Switch3' */

    /* Switch: '<S284>/Switch4' incorporates:
     *  Constant: '<S16>/Constant16'
     *  Constant: '<S55>/Constant'
     *  Logic: '<S285>/Logical7'
     *  RelationalOperator: '<S55>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator15'
     */
    if (((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 32768U) > 0U) &&
            rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        /* Switch: '<S284>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S299>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 8192U;
    }
    else
    {
        /* Switch: '<S284>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S290>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S290>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S290>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 8192U);
    }

    /* End of Switch: '<S284>/Switch4' */

    /* Switch: '<S284>/Switch6' incorporates:
     *  Constant: '<S16>/Constant17'
     *  Constant: '<S59>/Constant'
     *  Logic: '<S285>/Logical8'
     *  RelationalOperator: '<S59>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator16'
     */
    if (((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 65536U) > 0U) &&
            rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        /* Switch: '<S284>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S301>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 16384U;
    }
    else
    {
        /* Switch: '<S284>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S292>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S292>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S292>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 16384U);
    }

    /* End of Switch: '<S284>/Switch6' */

    /* Switch: '<S284>/Switch7' incorporates:
     *  Constant: '<S16>/Constant25'
     *  Constant: '<S60>/Constant'
     *  Logic: '<S285>/Logical9'
     *  RelationalOperator: '<S60>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator17'
     */
    if (((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 131072U) > 0U) &&
        rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        /* Switch: '<S284>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S302>/FixPt Bitwise Operator1'
         */
        rtb_Switch |= 32768U;
    }
    else
    {
        /* Switch: '<S284>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S293>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S293>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S293>/FixPt Bitwise Operator5'
         */
        rtb_Switch = ~((~rtb_Switch) | 32768U);
    }

    /* End of Switch: '<S284>/Switch7' */

    /* Switch: '<S284>/Switch8' incorporates:
     *  Constant: '<S16>/Constant26'
     *  Constant: '<S68>/Constant'
     *  DataStoreWrite: '<S21>/Data Store Write2'
     *  Logic: '<S285>/Logical10'
     *  RelationalOperator: '<S68>/Compare'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator24'
     *  S-Function (sfix_bitop): '<S294>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S294>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S294>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S303>/FixPt Bitwise Operator1'
     */
    if (((STRR_ac_B.TmpSignalConversionAtVeSTAR_g_GenStrtStp & 262144U) > 0U) &&
        rtb_VeSTRR_b_EngOnAllowedB4Arb)
    {
        VeSTRR_g_StrtDisAllowRsn_DS = rtb_Switch | 65536U;
    }
    else
    {
        VeSTRR_g_StrtDisAllowRsn_DS = ~((~rtb_Switch) | 65536U);
    }

    /* End of Switch: '<S284>/Switch8' */

    /* RelationalOperator: '<S174>/Compare' incorporates:
     *  Constant: '<S115>/Constant1'
     *  Constant: '<S174>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator'
     */
    rtb_Compare_dr = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 1U) > 0U);

    /* RelationalOperator: '<S175>/Compare' incorporates:
     *  Constant: '<S115>/Constant2'
     *  Constant: '<S175>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator1'
     */
    rtb_Compare_k = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 2U) > 0U);

    /* RelationalOperator: '<S197>/Compare' incorporates:
     *  Constant: '<S115>/Constant4'
     *  Constant: '<S197>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator3'
     */
    rtb_Compare_fw = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 8U) > 0U);

    /* RelationalOperator: '<S204>/Compare' incorporates:
     *  Constant: '<S115>/Constant9'
     *  Constant: '<S204>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator8'
     */
    rtb_Compare_cf = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 256U) > 0U);

    /* RelationalOperator: '<S181>/Compare' incorporates:
     *  Constant: '<S115>/Constant13'
     *  Constant: '<S181>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator12'
     */
    rtb_Compare_j = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 4096U) > 0U);

    /* RelationalOperator: '<S205>/Compare' incorporates:
     *  Constant: '<S115>/Constant10'
     *  Constant: '<S205>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator9'
     */
    rtb_Compare_cb = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 512U) > 0U);

    /* RelationalOperator: '<S176>/Compare' incorporates:
     *  Constant: '<S115>/Constant11'
     *  Constant: '<S176>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator10'
     */
    rtb_Compare_dv = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 1024U) > 0U);

    /* RelationalOperator: '<S203>/Compare' incorporates:
     *  Constant: '<S115>/Constant5'
     *  Constant: '<S203>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator4'
     */
    rtb_Compare_nz = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 16U) > 0U);

    /* RelationalOperator: '<S202>/Compare' incorporates:
     *  Constant: '<S115>/Constant6'
     *  Constant: '<S202>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator5'
     */
    rtb_Compare_nk = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 32U) > 0U);

    /* RelationalOperator: '<S201>/Compare' incorporates:
     *  Constant: '<S115>/Constant7'
     *  Constant: '<S201>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator6'
     */
    rtb_Compare_hg = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 64U) > 0U);

    /* RelationalOperator: '<S177>/Compare' incorporates:
     *  Constant: '<S115>/Constant12'
     *  Constant: '<S177>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator11'
     */
    rtb_Compare_bv = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 2048U) > 0U);

    /* Outputs for Atomic SubSystem: '<S20>/Variant_SS_BckUpStrt' */
#if Rte_SysCon_Variant_STRR_EnblBckUpStrt

    /* Outputs for Atomic SubSystem: '<S116>/BckUpActv' */
    /* Switch: '<S208>/Switch' incorporates:
     *  Logic: '<S211>/Logical27'
     */
    if (rtb_Compare_dr && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch' incorporates:
         *  DataStoreRead: '<S206>/Data Store Read9'
         *  S-Function (sfix_bitop): '<S212>/FixPt Bitwise Operator1'
         *  Switch: '<S208>/Switch13'
         */
        rtb_Switch_f = NeSTRR_g_BackupStrtRsn | 2U;
    }
    else
    {
        /* Switch: '<S208>/Switch' incorporates:
         *  DataStoreRead: '<S206>/Data Store Read9'
         *  Switch: '<S208>/Switch13'
         */
        rtb_Switch_f = NeSTRR_g_BackupStrtRsn;
    }

    /* End of Switch: '<S208>/Switch' */

    /* Switch: '<S208>/Switch1' incorporates:
     *  Logic: '<S211>/Logical33'
     */
    if (rtb_Compare_k && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S213>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 4U;
    }

    /* End of Switch: '<S208>/Switch1' */

    /* Switch: '<S208>/Switch2' incorporates:
     *  Logic: '<S211>/Logical34'
     */
    if (rtb_Compare_fw && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S216>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 8U;
    }

    /* End of Switch: '<S208>/Switch2' */

    /* Switch: '<S208>/Switch5' incorporates:
     *  Logic: '<S211>/Logical36'
     */
    if (rtb_Compare_cf && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S219>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 16U;
    }

    /* End of Switch: '<S208>/Switch5' */

    /* Switch: '<S208>/Switch3' incorporates:
     *  Logic: '<S211>/Logical28'
     */
    if (rtb_Compare_j && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S217>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 32U;
    }

    /* End of Switch: '<S208>/Switch3' */

    /* Switch: '<S208>/Switch4' incorporates:
     *  Logic: '<S211>/Logical29'
     */
    if (rtb_Compare_cb && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S218>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 64U;
    }

    /* End of Switch: '<S208>/Switch4' */

    /* Switch: '<S208>/Switch6' incorporates:
     *  Logic: '<S211>/Logical30'
     */
    if (rtb_Compare_dv && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S220>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 128U;
    }

    /* End of Switch: '<S208>/Switch6' */

    /* Switch: '<S208>/Switch7' incorporates:
     *  Logic: '<S211>/Logical31'
     */
    if (rtb_Compare_nz && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S221>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 256U;
    }

    /* End of Switch: '<S208>/Switch7' */

    /* Switch: '<S208>/Switch8' incorporates:
     *  Logic: '<S211>/Logical32'
     */
    if (rtb_Compare_nk && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S222>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 512U;
    }

    /* End of Switch: '<S208>/Switch8' */

    /* Switch: '<S208>/Switch9' incorporates:
     *  Logic: '<S211>/Logical37'
     */
    if (rtb_Compare_hg && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
    {
        /* Switch: '<S208>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S223>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 1024U;
    }

    /* End of Switch: '<S208>/Switch9' */

    /* Switch: '<S206>/Switch' incorporates:
     *  Constant: '<S210>/Calib'
     *  Logic: '<S206>/Logical3'
     *  Logic: '<S211>/Logical38'
     *  Switch: '<S208>/Switch10'
     */
    if ((KeSTRR_b_ClrBackupStrtRsnHist) ||
            (STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl))
    {
        /* VariantMerge generated from: '<S116>/BckUpNVRam' incorporates:
         *  Constant: '<S206>/Constant Value'
         */
        rtb_Switch_f = 0U;
    }
    else
    {
        if (rtb_Compare_bv && rtb_TmpSignalConversionAtVeSTFR_b_BackUp)
        {
            /* Switch: '<S208>/Switch10' incorporates:
             *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator1'
             *  VariantMerge generated from: '<S116>/BckUpNVRam'
             */
            rtb_Switch_f |= 2048U;
        }
    }

    /* End of Switch: '<S206>/Switch' */
    /* End of Outputs for SubSystem: '<S116>/BckUpActv' */
#else

    /* Outputs for Atomic SubSystem: '<S116>/NoBckUp' */
    /* VariantMerge generated from: '<S116>/BckUpNVRam' incorporates:
     *  Constant: '<S207>/Constant Value1'
     */
    rtb_Switch_f = 0U;

    /* End of Outputs for SubSystem: '<S116>/NoBckUp' */
#endif

    /* End of Outputs for SubSystem: '<S20>/Variant_SS_BckUpStrt' */

    /* DataStoreWrite: '<S20>/Data Store Write' */
    NeSTRR_g_BackupStrtRsn = rtb_Switch_f;

    /* RelationalOperator: '<S180>/Compare' incorporates:
     *  Constant: '<S115>/Constant14'
     *  Constant: '<S180>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator13'
     */
    rtb_Compare_l = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 8192U) > 0U);

    /* Outputs for Atomic SubSystem: '<S20>/Variant_SS_BmpUpStrt' */
#if Rte_SysCon_Variant_STRR_EnblBmpStrt

    /* Outputs for Atomic SubSystem: '<S117>/BmpStrtActv' */
    /* Switch: '<S250>/Switch' incorporates:
     *  Logic: '<S253>/Logical39'
     */
    if (rtb_Compare_hg && rtb_TmpSignalConversionAtVeSTFR_b_BumpSt)
    {
        /* Switch: '<S250>/Switch' incorporates:
         *  DataStoreRead: '<S248>/Data Store Read'
         *  S-Function (sfix_bitop): '<S254>/FixPt Bitwise Operator1'
         *  Switch: '<S250>/Switch13'
         */
        rtb_Switch_av = NeSTRR_g_BumpStrtRsn | 2U;
    }
    else
    {
        /* Switch: '<S250>/Switch' incorporates:
         *  DataStoreRead: '<S248>/Data Store Read'
         *  Switch: '<S250>/Switch13'
         */
        rtb_Switch_av = NeSTRR_g_BumpStrtRsn;
    }

    /* End of Switch: '<S250>/Switch' */

    /* Switch: '<S250>/Switch1' incorporates:
     *  Logic: '<S253>/Logical45'
     */
    if (rtb_Compare_nz && rtb_TmpSignalConversionAtVeSTFR_b_BumpSt)
    {
        /* Switch: '<S250>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S255>/FixPt Bitwise Operator1'
         */
        rtb_Switch_av |= 4U;
    }

    /* End of Switch: '<S250>/Switch1' */

    /* Switch: '<S250>/Switch2' incorporates:
     *  Logic: '<S253>/Logical46'
     */
    if (rtb_Compare_j && rtb_TmpSignalConversionAtVeSTFR_b_BumpSt)
    {
        /* Switch: '<S250>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S257>/FixPt Bitwise Operator1'
         */
        rtb_Switch_av |= 8U;
    }

    /* End of Switch: '<S250>/Switch2' */

    /* Switch: '<S250>/Switch5' incorporates:
     *  Logic: '<S253>/Logical48'
     */
    if (rtb_Compare_cf && rtb_TmpSignalConversionAtVeSTFR_b_BumpSt)
    {
        /* Switch: '<S250>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S260>/FixPt Bitwise Operator1'
         */
        rtb_Switch_av |= 16U;
    }

    /* End of Switch: '<S250>/Switch5' */

    /* Switch: '<S250>/Switch3' incorporates:
     *  Logic: '<S253>/Logical40'
     */
    if (rtb_Compare_l && rtb_TmpSignalConversionAtVeSTFR_b_BumpSt)
    {
        /* Switch: '<S250>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S258>/FixPt Bitwise Operator1'
         */
        rtb_Switch_av |= 32U;
    }

    /* End of Switch: '<S250>/Switch3' */

    /* Switch: '<S250>/Switch6' incorporates:
     *  Logic: '<S253>/Logical42'
     */
    if (rtb_Compare_fw && rtb_TmpSignalConversionAtVeSTFR_b_BumpSt)
    {
        /* Switch: '<S250>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S261>/FixPt Bitwise Operator1'
         *  Switch: '<S250>/Switch4'
         */
        rtb_Switch_av |= 128U;
    }

    /* End of Switch: '<S250>/Switch6' */

    /* Switch: '<S250>/Switch7' incorporates:
     *  Logic: '<S253>/Logical43'
     */
    if (rtb_Compare_nk && rtb_TmpSignalConversionAtVeSTFR_b_BumpSt)
    {
        /* Switch: '<S250>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S262>/FixPt Bitwise Operator1'
         */
        rtb_Switch_av |= 256U;
    }

    /* End of Switch: '<S250>/Switch7' */

    /* Switch: '<S248>/Switch1' incorporates:
     *  Constant: '<S252>/Calib'
     *  Logic: '<S248>/Logical4'
     *  Logic: '<S253>/Logical44'
     *  Switch: '<S250>/Switch8'
     */
    if ((STRR_ac_B.TmpSignalConversionAtVeDFIR_b_PostCodeCl) ||
            (KeSTRR_b_ClrBumpStrtRsnHist))
    {
        /* VariantMerge generated from: '<S117>/BmpNVRam' incorporates:
         *  Constant: '<S248>/Constant Value1'
         */
        rtb_Switch_av = 0U;
    }
    else
    {
        if (rtb_Compare_dv && rtb_TmpSignalConversionAtVeSTFR_b_BumpSt)
        {
            /* Switch: '<S250>/Switch8' incorporates:
             *  S-Function (sfix_bitop): '<S263>/FixPt Bitwise Operator1'
             *  VariantMerge generated from: '<S117>/BmpNVRam'
             */
            rtb_Switch_av |= 512U;
        }
    }

    /* End of Switch: '<S248>/Switch1' */
    /* End of Outputs for SubSystem: '<S117>/BmpStrtActv' */
#else

    /* Outputs for Atomic SubSystem: '<S117>/NoBmpStrt' */
    /* VariantMerge generated from: '<S117>/BmpNVRam' incorporates:
     *  Constant: '<S249>/Constant Value1'
     */
    rtb_Switch_av = 0U;

    /* End of Outputs for SubSystem: '<S117>/NoBmpStrt' */
#endif

    /* End of Outputs for SubSystem: '<S20>/Variant_SS_BmpUpStrt' */

    /* DataStoreWrite: '<S20>/Data Store Write2' */
    NeSTRR_g_BumpStrtRsn = rtb_Switch_av;

    /* Switch: '<S113>/Switch' */
    if (rtb_Compare_dv)
    {
        /* Switch: '<S113>/Switch' incorporates:
         *  DataStoreRead: '<S20>/Dsr_PID_AStrtEntry25'
         *  S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f = VeSTRR_g_AStpInhbtRsn2_DS | 2U;
    }
    else
    {
        /* Switch: '<S113>/Switch' incorporates:
         *  DataStoreRead: '<S20>/Dsr_PID_AStrtEntry25'
         *  S-Function (sfix_bitop): '<S118>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S118>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S118>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~VeSTRR_g_AStpInhbtRsn2_DS) | 2U);
    }

    /* End of Switch: '<S113>/Switch' */

    /* Switch: '<S113>/Switch1' */
    if (rtb_Compare_cb)
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S133>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 4U;
    }
    else
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S119>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S119>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S119>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 4U);
    }

    /* End of Switch: '<S113>/Switch1' */

    /* Switch: '<S113>/Switch2' */
    if (rtb_Compare_j)
    {
        /* Switch: '<S113>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 8U;
    }
    else
    {
        /* Switch: '<S113>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 8U);
    }

    /* End of Switch: '<S113>/Switch2' */

    /* Switch: '<S113>/Switch5' */
    if (rtb_Compare_cf)
    {
        /* Switch: '<S113>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S141>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 16U;
    }
    else
    {
        /* Switch: '<S113>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S127>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S127>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S127>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 16U);
    }

    /* End of Switch: '<S113>/Switch5' */

    /* Switch: '<S113>/Switch3' */
    if (rtb_Compare_fw)
    {
        /* Switch: '<S113>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 32U;
    }
    else
    {
        /* Switch: '<S113>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 32U);
    }

    /* End of Switch: '<S113>/Switch3' */

    /* Switch: '<S113>/Switch4' */
    if (rtb_Compare_k)
    {
        /* Switch: '<S113>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S140>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 64U;
    }
    else
    {
        /* Switch: '<S113>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 64U);
    }

    /* End of Switch: '<S113>/Switch4' */

    /* Switch: '<S113>/Switch6' */
    if (rtb_Compare_dr)
    {
        /* Switch: '<S114>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S142>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 128U;
    }
    else
    {
        /* Switch: '<S114>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S128>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S128>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S128>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 128U);
    }

    /* End of Switch: '<S113>/Switch6' */

    /* Switch: '<S113>/Switch8' */
    if (rtb_Compare_hg)
    {
        /* Switch: '<S113>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S144>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f = (~((~rtb_Switch_f) | 256U)) | 1024U;
    }
    else
    {
        /* Switch: '<S113>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~(~((~rtb_Switch_f) | 256U))) | 1024U);
    }

    /* End of Switch: '<S113>/Switch8' */

    /* Switch: '<S113>/Switch9' */
    if (rtb_Compare_nz)
    {
        /* Switch: '<S113>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S145>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 4096U;
    }
    else
    {
        /* Switch: '<S113>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S131>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S131>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S131>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 4096U);
    }

    /* End of Switch: '<S113>/Switch9' */

    /* Switch: '<S113>/Switch10' */
    if (rtb_Compare_l)
    {
        /* Switch: '<S113>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S134>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 8192U;
    }
    else
    {
        /* Switch: '<S113>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S120>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S120>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S120>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 8192U);
    }

    /* End of Switch: '<S113>/Switch10' */

    /* Switch: '<S113>/Switch11' */
    if (rtb_Compare_nk)
    {
        /* Switch: '<S113>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S135>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f |= 65536U;
    }
    else
    {
        /* Switch: '<S113>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S121>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S121>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S121>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_Switch_f) | 65536U);
    }

    /* End of Switch: '<S113>/Switch11' */

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S115>/Constant15'
     *  Constant: '<S179>/Constant'
     *  RelationalOperator: '<S179>/Compare'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator14'
     */
    rtb_VeSTRR_b_EngOnAllowedB4Arb = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg
        & 16384U) > 0U);

    /* RelationalOperator: '<S178>/Compare' incorporates:
     *  Constant: '<S115>/Constant16'
     *  Constant: '<S178>/Constant'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Logical Operator15'
     */
    rtb_Compare_ao = ((rtb_TmpSignalConversionAtVeSTFR_g_FltReg & 32768U) > 0U);

    /* Switch: '<S113>/Switch12' incorporates:
     *  Logic: '<S20>/Logical2'
     */
    if (rtb_VeSTRR_b_EngOnAllowedB4Arb || rtb_Compare_ao)
    {
        /* Switch: '<S113>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S136>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg = rtb_Switch_f | 131072U;
    }
    else
    {
        /* Switch: '<S113>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S122>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S122>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S122>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg = ~((~rtb_Switch_f) | 131072U);
    }

    /* End of Switch: '<S113>/Switch12' */

    /* Switch: '<S113>/Switch13' incorporates:
     *  DataStoreWrite: '<S20>/Dsw_PID_AStrtEntry13'
     *  S-Function (sfix_bitop): '<S123>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S123>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S123>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S137>/FixPt Bitwise Operator1'
     */
    if (rtb_Compare_bv)
    {
        VeSTRR_g_AStpInhbtRsn2_DS = rtb_TmpSignalConversionAtVeSTFR_g_FltReg |
            16777216U;
    }
    else
    {
        VeSTRR_g_AStpInhbtRsn2_DS = ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg)
            | 16777216U);
    }

    /* End of Switch: '<S113>/Switch13' */

    /* Switch: '<S114>/Switch' */
    if (rtb_Compare_dv)
    {
        /* Switch: '<S114>/Switch' incorporates:
         *  DataStoreRead: '<S20>/Dsr_PID_AStrtEntry12'
         *  S-Function (sfix_bitop): '<S160>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg = VeSTRR_g_EVModeInhbtRsn2_DS |
            2U;
    }
    else
    {
        /* Switch: '<S114>/Switch' incorporates:
         *  DataStoreRead: '<S20>/Dsr_PID_AStrtEntry12'
         *  S-Function (sfix_bitop): '<S146>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S146>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S146>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~VeSTRR_g_EVModeInhbtRsn2_DS) | 2U);
    }

    /* End of Switch: '<S114>/Switch' */

    /* Switch: '<S114>/Switch1' */
    if (rtb_Compare_cb)
    {
        /* Switch: '<S114>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S161>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg |= 4U;
    }
    else
    {
        /* Switch: '<S114>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S147>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S147>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S147>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 4U);
    }

    /* End of Switch: '<S114>/Switch1' */

    /* Switch: '<S114>/Switch2' */
    if (rtb_Compare_j)
    {
        /* Switch: '<S114>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S166>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg |= 8U;
    }
    else
    {
        /* Switch: '<S114>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S152>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S152>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S152>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 8U);
    }

    /* End of Switch: '<S114>/Switch2' */

    /* Switch: '<S114>/Switch5' */
    if (rtb_Compare_cf)
    {
        /* Switch: '<S114>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg |= 16U;
    }
    else
    {
        /* Switch: '<S114>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 16U);
    }

    /* End of Switch: '<S114>/Switch5' */

    /* Switch: '<S114>/Switch3' */
    if (rtb_Compare_fw)
    {
        /* Switch: '<S114>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S167>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg |= 32U;
    }
    else
    {
        /* Switch: '<S114>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 32U);
    }

    /* End of Switch: '<S114>/Switch3' */

    /* Switch: '<S114>/Switch4' */
    if (rtb_Compare_k)
    {
        /* Switch: '<S114>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S168>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg |= 64U;
    }
    else
    {
        /* Switch: '<S114>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 64U);
    }

    /* End of Switch: '<S114>/Switch4' */

    /* Switch: '<S114>/Switch6' */
    if (rtb_Compare_dr)
    {
        /* Switch: '<S114>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S170>/FixPt Bitwise Operator1'
         */
        rtb_Switch_f = rtb_TmpSignalConversionAtVeSTFR_g_FltReg | 128U;
    }
    else
    {
        /* Switch: '<S114>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S156>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S156>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S156>/FixPt Bitwise Operator5'
         */
        rtb_Switch_f = ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 128U);
    }

    /* End of Switch: '<S114>/Switch6' */

    /* Switch: '<S114>/Switch8' */
    if (rtb_Compare_hg)
    {
        /* Switch: '<S114>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S172>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg = (~((~rtb_Switch_f) | 256U)) |
            1024U;
    }
    else
    {
        /* Switch: '<S114>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg = ~((~(~((~rtb_Switch_f) | 256U)))
            | 1024U);
    }

    /* End of Switch: '<S114>/Switch8' */

    /* Switch: '<S114>/Switch9' */
    if (rtb_Compare_nz)
    {
        /* Switch: '<S114>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S173>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg |= 4096U;
    }
    else
    {
        /* Switch: '<S114>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 4096U);
    }

    /* End of Switch: '<S114>/Switch9' */

    /* Switch: '<S114>/Switch10' */
    if (rtb_Compare_l)
    {
        /* Switch: '<S114>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S162>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg |= 8192U;
    }
    else
    {
        /* Switch: '<S114>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S148>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S148>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S148>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 8192U);
    }

    /* End of Switch: '<S114>/Switch10' */

    /* Switch: '<S114>/Switch11' */
    if (rtb_Compare_nk)
    {
        /* Switch: '<S114>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S163>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg |= 65536U;
    }
    else
    {
        /* Switch: '<S114>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S149>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S149>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S149>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 65536U);
    }

    /* End of Switch: '<S114>/Switch11' */

    /* Switch: '<S114>/Switch12' incorporates:
     *  Logic: '<S20>/Logical1'
     */
    if (rtb_VeSTRR_b_EngOnAllowedB4Arb || rtb_Compare_ao)
    {
        /* Switch: '<S114>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S164>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg |= 131072U;
    }
    else
    {
        /* Switch: '<S114>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S150>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S150>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S150>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR_g_FltReg =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 131072U);
    }

    /* End of Switch: '<S114>/Switch12' */

    /* Switch: '<S114>/Switch13' incorporates:
     *  DataStoreWrite: '<S20>/Dsw_PID_AStrtEntry6'
     *  S-Function (sfix_bitop): '<S151>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S151>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S151>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator1'
     */
    if (rtb_Compare_bv)
    {
        VeSTRR_g_EVModeInhbtRsn2_DS = rtb_TmpSignalConversionAtVeSTFR_g_FltReg |
            16777216U;
    }
    else
    {
        VeSTRR_g_EVModeInhbtRsn2_DS =
            ~((~rtb_TmpSignalConversionAtVeSTFR_g_FltReg) | 16777216U);
    }

    /* End of Switch: '<S114>/Switch13' */

    /* Inport: '<Root>/VeSTAR_b_RemStopESS' */
    (void)Rte_Read_VeSTAR_b_RemStopESS_Value(&tmpRead_4);

    /* VariantMerge generated from: '<S10>/RmStpESSFnl' incorporates:
     *  Logic: '<S18>/Logical1'
     */
    STRR_ac_B.VariantMergeForOutportRmStpESSFnl = (rtb_Compare_bh || tmpRead_4);

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S89>/Calib'
     *  Inport: '<Root>/VeSTAR_b_EngOnAllwdSTGC'
     */
    if (KeSTRR_b_EngOnAllowedOvrrdEnbl)
    {
        /* Switch: '<S18>/Switch1' incorporates:
         *  Constant: '<S90>/Calib'
         */
        rtb_VeSTRR_b_EngOnAllowedB4Arb = KeSTRR_b_EngOnAllowedOvrrdVal;
    }
    else
    {
        (void)Rte_Read_VeSTAR_b_EngOnAllwdSTGC_Value(&tmpRead_2);

        /* Switch: '<S18>/Switch1' incorporates:
         *  Constant: '<S18>/Constant Value2'
         *  Constant: '<S91>/Calib'
         *  DataStoreWrite: '<S21>/Data Store Write2'
         *  Inport: '<Root>/VeSTAR_b_EngOnAllwdSTGC'
         *  Logic: '<S18>/Logical5'
         *  Logic: '<S18>/Logical6'
         *  Logic: '<S18>/Logical9'
         *  RelationalOperator: '<S18>/Comparison3'
         *  S-Function (sfix_bitop): '<S18>/Bitwise Operator2'
         */
        rtb_VeSTRR_b_EngOnAllowedB4Arb = ((((VeSTRR_g_StrtDisAllowRsn_DS &
            KeSTRR_g_StrtDisAllowRsnOnAllowedMask) <= 0U) && tmpRead_2) &&
            (!rtb_Compare_bh));
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Inport: '<Root>/VeSTCR_b_FuelOn' */
    (void)Rte_Read_VeSTCR_b_FuelOn_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSTAR_e_StrtTyp2TCM' */
    (void)Rte_Read_VeSTAR_e_StrtTyp2TCM_Value(&tmpRead_3);

    /* VariantMerge generated from: '<S10>/RemStpFnl' incorporates:
     *  Logic: '<S18>/Logical8'
     */
    STRR_ac_B.VariantMergeForOutportRemStpFnl = (rtb_Compare_bh ||
        (STRR_ac_B.TmpSignalConversionAtVeSTAR_b_RemedialSt));

    /* VariantMerge generated from: '<S10>/EngOnAllwdSTGCFnl' incorporates:
     *  Logic: '<S18>/Logical12'
     *  Switch: '<S18>/Switch2'
     */
    STRR_ac_B.VariantMergeForOutportEngOnAllwdSTGCFnl =
        (((!STRR_ac_B.STRL_DSD.Merge) && (!rtb_VeSTRR_b_EngOnAllowedB4Arb)) ||
         rtb_VeSTRR_b_EngOnAllowedB4Arb);

    /* VariantMerge generated from: '<S10>/EngOnFuelOn' incorporates:
     *  Constant: '<S305>/Calib'
     *  Constant: '<S306>/Calib'
     *  Logic: '<S22>/Logical21'
     *  Logic: '<S22>/Logical4'
     *  Logic: '<S22>/OR1'
     */
    STRR_ac_B.VariantMergeForOutportEngOnFuelOn = ((tmpRead_5 || (rtb_Compare_gh
        && (KeSTRR_b_EnblDrvbltyFuelOn))) || (rtb_Compare_i &&
        (KeSTRR_b_EnblServFuelOn)));

    /* Switch: '<S22>/Switch3' incorporates:
     *  Logic: '<S22>/Logical16'
     *  Logic: '<S22>/Logical17'
     *  Logic: '<S22>/Logical18'
     *  Logic: '<S22>/Logical19'
     */
    if (((!VeSTRR_b_EngStartAllowedRaw) ||
            (!STRR_ac_B.TmpSignalConversionAtVePMDR_b_StrtCntrlS)) &&
            rtb_Comparison6)
    {
        /* VariantMerge generated from: '<S10>/StrtTyp2TCMFnl' incorporates:
         *  Constant: '<S304>/Constant'
         */
        STRR_ac_B.VariantMergeForOutportStrtTyp2TCMFnl = CeSTRR_e_NoAction;
    }
    else
    {
        /* VariantMerge generated from: '<S10>/StrtTyp2TCMFnl' incorporates:
         *  Inport: '<Root>/VeSTAR_e_StrtTyp2TCM'
         */
        STRR_ac_B.VariantMergeForOutportStrtTyp2TCMFnl = tmpRead_3;
    }

    /* End of Switch: '<S22>/Switch3' */
    /* End of Outputs for SubSystem: '<S10>/Variant_NonBEV' */
#endif

    /* End of Outputs for SubSystem: '<S7>/Variant_SS_PostProc' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRO_WriteOutputs'
     */
    /* DataStoreRead: '<S1031>/Data Store Read10' */
#if Rte_SysCon_Variant_STRR_UseFCVar

    /* VariantMerge generated from: '<S1031>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Vari = VeSTRR_e_FCStrtrSt_DS;

#endif

    /* End of DataStoreRead: '<S1031>/Data Store Read10' */

    /* DataStoreRead: '<S1031>/Data Store Read' */
#if !Rte_SysCon_Variant_STRR_UseFCVar

    /* VariantMerge generated from: '<S1031>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Vari = VeSTRR_e_HybStrtrSt_DS;

#endif

    /* End of DataStoreRead: '<S1031>/Data Store Read' */

    /* RelationalOperator: '<S17>/Comparison6' incorporates:
     *  DataStoreWrite: '<S1031>/Data Store Write'
     *  VariantMerge generated from: '<S1031>/Variant Source'
     */
    VeSTRR_e_HybStrtrSt_DS = rtb_VariantMerge_For_Variant_Source_Vari;

    /* Selector: '<S1031>/Selector' incorporates:
     *  Constant: '<S1035>/Calib'
     *  DataStoreRead: '<S1031>/Dsr_EngStrtStopType'
     *  DataTypeConversion: '<S1031>/Data Type Conversion'
     */
    STRR_ac_B.VeSTRR_d_EngStrtStopType_CAN = (sint16)VeSTRR_e_EngStrtStopType_DS;
    STRR_ac_B.VeSTRR_d_EngStrtStopType_CAN = KaSTRR_d_EngStrtStopTypMAP
        [(STRR_ac_B.VeSTRR_d_EngStrtStopType_CAN)];

    /* Outputs for Atomic SubSystem: '<S1034>/VarSS_PassThru' */
#if Rte_SysCon_Variant_STRR_UseBEVVar

    /* Outputs for Atomic SubSystem: '<S1036>/BEV' */
    /* VariantMerge generated from: '<S1036>/MaxEngOff' incorporates:
     *  Constant: '<S1037>/FALSE Constant'
     */
    STRR_ac_B.VariantMergeForOutportMaxEngOff = false;

    /* VariantMerge generated from: '<S1036>/STGCRsn' incorporates:
     *  Constant: '<S1039>/Constant'
     */
    STRR_ac_B.VariantMergeForOutportSTGCRsn = CeSTRR_e_None;

    /* VariantMerge generated from: '<S1036>/AStrtUpShftTrg_Out' incorporates:
     *  Constant: '<S1037>/FALSE Constant1'
     */
    STRR_ac_B.VariantMergeForOutportAStrtUpShftTrg_Out = false;

    /* VariantMerge generated from: '<S1036>/HardChkEngOn' incorporates:
     *  Constant: '<S1037>/FALSE Constant2'
     */
    STRR_ac_B.VariantMergeForOutportHardChkEngOn = false;

    /* VariantMerge generated from: '<S1036>/SoftChkDeltaFromTgtSOCArb' incorporates:
     *  Constant: '<S1037>/Constant Value2'
     */
    STRR_ac_B.VariantMergeForOutportSoftChkDeltaFromTg = 0.0F;

    /* VariantMerge generated from: '<S1036>/DrvbltyRsn' incorporates:
     *  Constant: '<S1037>/Constant Value1'
     */
    STRR_ac_B.VariantMergeForOutportDrvbltyRsn = 0U;

    /* VariantMerge generated from: '<S1036>/ToMaxAllowed' incorporates:
     *  Constant: '<S1037>/Constant Value'
     */
    STRR_ac_B.VariantMergeForOutportToMaxAllowed = 999999.0F;

    /* VariantMerge generated from: '<S1036>/BckupStrtEngOn' incorporates:
     *  Constant: '<S1037>/FALSE Constant4'
     */
    STRR_ac_B.VariantMergeForOutportBckupStrtEngOn = false;

    /* VariantMerge generated from: '<S1036>/BmpStrtEngOn' incorporates:
     *  Constant: '<S1037>/FALSE Constant6'
     */
    STRR_ac_B.VariantMergeForOutportBmpStrtEngOn = false;

    /* VariantMerge generated from: '<S1036>/BmpStrInhbt' incorporates:
     *  Constant: '<S1037>/FALSE Constant5'
     */
    STRR_ac_B.VariantMergeForOutportBmpStrInhbt = false;

    /* VariantMerge generated from: '<S1036>/P2p5HMIMsg' incorporates:
     *  Constant: '<S1037>/FALSE Constant7'
     */
    STRR_ac_B.VariantMergeForOutportP2p5HMIMsg = false;

    /* VariantMerge generated from: '<S1036>/CltchStrtZn' incorporates:
     *  Constant: '<S1037>/FALSE Constant3'
     */
    STRR_ac_B.VariantMergeForOutportCltchStrtZn = false;

    /* VariantMerge generated from: '<S1036>/CltchStrtRsrvRaw' incorporates:
     *  Constant: '<S1037>/FALSE Constant8'
     */
    STRR_ac_B.VariantMergeForOutportCltchStrtRsrvRaw = false;

    /* VariantMerge generated from: '<S1036>/FltBsdOvrrd' incorporates:
     *  Constant: '<S1040>/Constant'
     */
    STRR_ac_B.VariantMergeForOutportFltBsdOvrrd = CeSTRR_e_NoOvrrd;

    /* End of Outputs for SubSystem: '<S1036>/BEV' */
#else

    /* Outputs for Atomic SubSystem: '<S1036>/Non_BEV' */
    /* VariantMerge generated from: '<S1036>/P2p5HMIMsg' incorporates:
     *  Inport: '<Root>/VeSTFR_b_P2p5HMIMsg'
     */
    (void)Rte_Read_VeSTFR_b_P2p5HMIMsg_Value
        (&STRR_ac_B.VariantMergeForOutportP2p5HMIMsg);

    /* VariantMerge generated from: '<S1036>/BmpStrInhbt' incorporates:
     *  Inport: '<Root>/VeSTFR_b_BmpStrtInhbt'
     */
    (void)Rte_Read_VeSTFR_b_BmpStrtInhbt_Value
        (&STRR_ac_B.VariantMergeForOutportBmpStrInhbt);

    /* VariantMerge generated from: '<S1036>/CltchStrtRsrvRaw' incorporates:
     *  Inport: '<Root>/VeSTDR_b_CltchStrtRsrvAvail_Raw'
     */
    (void)Rte_Read_VeSTDR_b_CltchStrtRsrvAvail_Raw_Value
        (&STRR_ac_B.VariantMergeForOutportCltchStrtRsrvRaw);

    /* VariantMerge generated from: '<S1036>/CltchStrtZn' incorporates:
     *  Inport: '<Root>/VeSTDR_b_InCltchStrtZn'
     */
    (void)Rte_Read_VeSTDR_b_InCltchStrtZn_Value
        (&STRR_ac_B.VariantMergeForOutportCltchStrtZn);

    /* VariantMerge generated from: '<S1036>/ToMaxAllowed' incorporates:
     *  Inport: '<Root>/VeSTDR_M_ToMaxAllowed'
     */
    (void)Rte_Read_VeSTDR_M_ToMaxAllowed_Value
        (&STRR_ac_B.VariantMergeForOutportToMaxAllowed);

    /* VariantMerge generated from: '<S1036>/DrvbltyRsn' incorporates:
     *  Inport: '<Root>/VeSTDR_d_DrvbltyRsn'
     */
    (void)Rte_Read_VeSTDR_d_DrvbltyRsn_Value
        (&STRR_ac_B.VariantMergeForOutportDrvbltyRsn);

    /* VariantMerge generated from: '<S1036>/SoftChkDeltaFromTgtSOCArb' incorporates:
     *  Inport: '<Root>/VeSTCR_Pct_AStrtBatSOCDeltaFromTgtArb'
     */
    (void)Rte_Read_VeSTCR_Pct_AStrtBatSOCDeltaFromTgtArb_Value
        (&STRR_ac_B.VariantMergeForOutportSoftChkDeltaFromTg);

    /* VariantMerge generated from: '<S1036>/HardChkEngOn' incorporates:
     *  Inport: '<Root>/VeSTCR_b_HardChkEngOn'
     */
    (void)Rte_Read_VeSTCR_b_HardChkEngOn_Value
        (&STRR_ac_B.VariantMergeForOutportHardChkEngOn);

    /* VariantMerge generated from: '<S1036>/AStrtUpShftTrg_Out' incorporates:
     *  Inport: '<Root>/VeSTCR_b_AStrtUpShftTrg'
     */
    (void)Rte_Read_VeSTCR_b_AStrtUpShftTrg_Value
        (&STRR_ac_B.VariantMergeForOutportAStrtUpShftTrg_Out);

    /* VariantMerge generated from: '<S1036>/STGCRsn' incorporates:
     *  Inport: '<Root>/VeSTAR_e_EssSTGCRsn'
     */
    (void)Rte_Read_VeSTAR_e_EssSTGCRsn_Value
        (&STRR_ac_B.VariantMergeForOutportSTGCRsn);

    /* VariantMerge generated from: '<S1036>/MaxEngOff' incorporates:
     *  Inport: '<Root>/VeSTAR_b_MaxEngOff'
     */
    (void)Rte_Read_VeSTAR_b_MaxEngOff_Value
        (&STRR_ac_B.VariantMergeForOutportMaxEngOff);

    /* VariantMerge generated from: '<S1036>/BckupStrtEngOn' incorporates:
     *  Inport: '<S1038>/BckUpStrtOn_In'
     */
    STRR_ac_B.VariantMergeForOutportBckupStrtEngOn =
        rtb_TmpSignalConversionAtVeSTFR_b_BackUp;

    /* VariantMerge generated from: '<S1036>/BmpStrtEngOn' incorporates:
     *  Inport: '<S1038>/BmpStrtOn_In'
     */
    STRR_ac_B.VariantMergeForOutportBmpStrtEngOn =
        rtb_TmpSignalConversionAtVeSTFR_b_BumpSt;

    /* VariantMerge generated from: '<S1036>/FltBsdOvrrd' incorporates:
     *  Inport: '<S1038>/FltBsdOvrrd_In'
     *  SignalConversion generated from: '<S1>/VeSTFR_e_StrtStpOvrrd'
     */
    STRR_ac_B.VariantMergeForOutportFltBsdOvrrd =
        STRR_ac_B.TmpSignalConversionAtVeSTFR_e_StrtStpOvr;

    /* End of Outputs for SubSystem: '<S1036>/Non_BEV' */
#endif

    /* End of Outputs for SubSystem: '<S1034>/VarSS_PassThru' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSTCR_g_EVMdInhbtRsn2' */
    (void)Rte_Read_VeSTCR_g_EVMdInhbtRsn2_Value(&tmpRead_9);

    /* Inport: '<Root>/VeSTCR_g_EVMdInhbtRsn1' */
    (void)Rte_Read_VeSTCR_g_EVMdInhbtRsn1_Value(&tmpRead_8);

    /* Inport: '<Root>/VeSTCR_g_AStpInhbtRsn2' */
    (void)Rte_Read_VeSTCR_g_AStpInhbtRsn2_Value(&tmpRead_7);

    /* Inport: '<Root>/VeSTCR_g_AStpInhbtRsn1' */
    (void)Rte_Read_VeSTCR_g_AStpInhbtRsn1_Value(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/STRR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRO_WriteOutputs'
     */
    /* Outport: '<Root>/VeSTRR_g_AStpInhbtRsn' incorporates:
     *  DataStoreRead: '<S1030>/Dsr_HybCrnkAbrtd2'
     *  S-Function (sfix_bitop): '<S1030>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S1>/AStpInhbtRsn'
     */
    (void)Rte_Write_VeSTRR_g_AStpInhbtRsn_Value(tmpRead_6 |
        VeSTRR_g_AStpInhbtRsn_DS);

    /* Outport: '<Root>/VeSTRR_g_AStpInhbtRsn2' incorporates:
     *  DataStoreRead: '<S1030>/Dsr_AStpInhbtRsn2'
     *  S-Function (sfix_bitop): '<S1030>/Bitwise Logical Operator1'
     *  SignalConversion generated from: '<S1>/AStpInhbtRsn2'
     */
    (void)Rte_Write_VeSTRR_g_AStpInhbtRsn2_Value(tmpRead_7 |
        VeSTRR_g_AStpInhbtRsn2_DS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_b_AStrtUpShftTrg' incorporates:
     *  SignalConversion generated from: '<S1>/AStrtUpShftTrg_Out'
     */
    (void)Rte_Write_VeSTRR_b_AStrtUpShftTrg_Value
        (STRR_ac_B.VariantMergeForOutportAStrtUpShftTrg_Out);

    /* Outport: '<Root>/VeSTRR_b_BackupStrtEngOn' incorporates:
     *  SignalConversion generated from: '<S1>/BckupStrtEngOn'
     */
    (void)Rte_Write_VeSTRR_b_BackupStrtEngOn_Value
        (STRR_ac_B.VariantMergeForOutportBckupStrtEngOn);

    /* Outport: '<Root>/VeSTRR_b_BumpStrtEngOn' incorporates:
     *  SignalConversion generated from: '<S1>/BmpStrtEngOn'
     */
    (void)Rte_Write_VeSTRR_b_BumpStrtEngOn_Value
        (STRR_ac_B.VariantMergeForOutportBmpStrtEngOn);

    /* Outport: '<Root>/VeSTRR_b_BumpStrtInhbt' incorporates:
     *  SignalConversion generated from: '<S1>/BmpStrtInhbt'
     */
    (void)Rte_Write_VeSTRR_b_BumpStrtInhbt_Value
        (STRR_ac_B.VariantMergeForOutportBmpStrInhbt);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRO_WriteOutputs'
     */
    /* Outport: '<Root>/VeSTRR_g_BumpStrtRsn' incorporates:
     *  DataStoreRead: '<S1032>/Data Store Read12'
     *  SignalConversion generated from: '<S1>/BumpStrtRsn'
     */
    (void)Rte_Write_VeSTRR_g_BumpStrtRsn_Value(NeSTRR_g_BumpStrtRsn);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_b_CltchStrtRsrvAvail_Raw' incorporates:
     *  SignalConversion generated from: '<S1>/CltchStrtRsrvRaw'
     */
    (void)Rte_Write_VeSTRR_b_CltchStrtRsrvAvail_Raw_Value
        (STRR_ac_B.VariantMergeForOutportCltchStrtRsrvRaw);

    /* Outport: '<Root>/VeSTRR_b_InCltchStrtZn' incorporates:
     *  SignalConversion generated from: '<S1>/CltchStrtZn'
     */
    (void)Rte_Write_VeSTRR_b_InCltchStrtZn_Value
        (STRR_ac_B.VariantMergeForOutportCltchStrtZn);

    /* Outport: '<Root>/VeSTRR_d_DrvbltyRsn' incorporates:
     *  SignalConversion generated from: '<S1>/DrvbltyRsn'
     */
    (void)Rte_Write_VeSTRR_d_DrvbltyRsn_Value
        (STRR_ac_B.VariantMergeForOutportDrvbltyRsn);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRO_WriteOutputs'
     */
    /* Outport: '<Root>/VeSTRR_g_EVModeInhbtRsn' incorporates:
     *  DataStoreRead: '<S1030>/Dsr_AStpInhbtRsn3'
     *  S-Function (sfix_bitop): '<S1030>/Bitwise Logical Operator2'
     *  SignalConversion generated from: '<S1>/EVMdInhbtRsn'
     */
    (void)Rte_Write_VeSTRR_g_EVModeInhbtRsn_Value(tmpRead_8 |
        VeSTRR_g_EVModeInhbtRsn_DS);

    /* Outport: '<Root>/VeSTRR_g_EVModeInhbtRsn2' incorporates:
     *  DataStoreRead: '<S1030>/Dsr_AStpInhbtRsn4'
     *  S-Function (sfix_bitop): '<S1030>/Bitwise Logical Operator3'
     *  SignalConversion generated from: '<S1>/EVMdInhbtRsn2'
     */
    (void)Rte_Write_VeSTRR_g_EVModeInhbtRsn2_Value(tmpRead_9 |
        VeSTRR_g_EVModeInhbtRsn2_DS);

    /* Outport: '<Root>/VeSTRR_b_EngOffAllwdECM' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read3'
     *  SignalConversion generated from: '<S1>/EngOffAllwdECM'
     */
    (void)Rte_Write_VeSTRR_b_EngOffAllwdECM_Value(VeSTRR_b_EngOffAllwdECM_DS);

    /* Outport: '<Root>/VeSTRR_b_EngOffAllowed' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read2'
     *  SignalConversion generated from: '<S1>/EngOffAllwdSTGC'
     */
    (void)Rte_Write_VeSTRR_b_EngOffAllowed_Value(VeSTRR_b_EngOffAllowed_DS);

    /* Outport: '<Root>/VeSTRR_b_EngOffAllwdTCM' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read4'
     *  SignalConversion generated from: '<S1>/EngOffAllwdTCM'
     */
    (void)Rte_Write_VeSTRR_b_EngOffAllwdTCM_Value(VeSTRR_b_EngOffAllwdTCM_DS);

    /* Outport: '<Root>/VeSTRR_t_StordEngOffTm' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read5'
     *  SignalConversion generated from: '<S1>/EngOffTmStmp'
     */
    (void)Rte_Write_VeSTRR_t_StordEngOffTm_Value(NeSTRR_t_RealTime_EngOff);

    /* Outport: '<Root>/VeSTRR_b_StordEngOffTmFA' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read6'
     *  SignalConversion generated from: '<S1>/EngOffTmStmpFA'
     */
    (void)Rte_Write_VeSTRR_b_StordEngOffTmFA_Value(NeSTRR_b_RealTime_EngOFF_FA);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_b_EngOnAllowed' incorporates:
     *  SignalConversion generated from: '<S1>/EngOnAllwdSTGCFnl'
     */
    (void)Rte_Write_VeSTRR_b_EngOnAllowed_Value
        (STRR_ac_B.VariantMergeForOutportEngOnAllwdSTGCFnl);

    /* Outport: '<Root>/VeSTRR_b_EngOnFuelOnReqd' incorporates:
     *  SignalConversion generated from: '<S1>/EngOnFuelOn'
     */
    (void)Rte_Write_VeSTRR_b_EngOnFuelOnReqd_Value
        (STRR_ac_B.VariantMergeForOutportEngOnFuelOn);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRO_WriteOutputs'
     */
    /* Outport: '<Root>/VeSTRR_b_EngOnReq' incorporates:
     *  DataStoreRead: '<S1031>/Dsr_EngOnReq'
     *  SignalConversion generated from: '<S1>/EngOnReq'
     */
    (void)Rte_Write_VeSTRR_b_EngOnReq_Value(VeSTRR_b_EngOnReq_DS);

    /* Outport: '<Root>/VeSTRR_e_EngStrtStopType' incorporates:
     *  DataStoreRead: '<S1031>/Dsr_EngStrtStopType'
     *  SignalConversion generated from: '<S1>/EngStrtStopType'
     */
    (void)Rte_Write_VeSTRR_e_EngStrtStopType_Value(VeSTRR_e_EngStrtStopType_DS);

    /* Outport: '<Root>/VeSTRR_e_FCMdReq' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read9'
     *  SignalConversion generated from: '<S1>/FCMdReq'
     */
    (void)Rte_Write_VeSTRR_e_FCMdReq_Value(VeSTRR_e_FCMdReq_DS);

    /* Outport: '<Root>/VeSTRR_b_FCOffAllwd' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read7'
     *  SignalConversion generated from: '<S1>/FCOffAllwd'
     */
    (void)Rte_Write_VeSTRR_b_FCOffAllwd_Value(VeSTRR_b_FCOffAllwd_DS);

    /* Outport: '<Root>/VeSTRR_b_FCOnAllwd' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read'
     *  SignalConversion generated from: '<S1>/FCOnAllwd'
     */
    (void)Rte_Write_VeSTRR_b_FCOnAllwd_Value(VeSTRR_b_FCOnAllwd_DS);

    /* Outport: '<Root>/VeSTRR_P_FCPwrReq' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read12'
     *  SignalConversion generated from: '<S1>/FCPwrReq'
     */
    (void)Rte_Write_VeSTRR_P_FCPwrReq_Value(VeSTRR_P_FCPwrReq_DS);

    /* Outport: '<Root>/VeSTRR_e_FCStrtrSt' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read10'
     *  SignalConversion generated from: '<S1>/FCStrtrSt'
     */
    (void)Rte_Write_VeSTRR_e_FCStrtrSt_Value(VeSTRR_e_FCStrtrSt_DS);

    /* Outport: '<Root>/VeSTRR_e_FCSysActv' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read8'
     *  SignalConversion generated from: '<S1>/FCSysActv'
     */
    (void)Rte_Write_VeSTRR_e_FCSysActv_Value(VeSTRR_e_FCSysActv_DS);

    /* Outport: '<Root>/VeSTRR_b_FirstStartActv' incorporates:
     *  DataStoreRead: '<S1031>/Dsr_HybCrnkAbrtd4'
     *  SignalConversion generated from: '<S1>/FirstStartActv'
     */
    (void)Rte_Write_VeSTRR_b_FirstStartActv_Value(VeSTRR_b_FirstStartActv_DS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_e_FltBsdOvrrdFnl' incorporates:
     *  SignalConversion generated from: '<S1>/FltBsdOvrrd'
     *  VariantMerge generated from: '<S1036>/FltBsdOvrrd'
     */
    (void)Rte_Write_VeSTRR_e_FltBsdOvrrdFnl_Value
        (STRR_ac_B.VariantMergeForOutportFltBsdOvrrd);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRO_WriteOutputs'
     */
    /* Outport: '<Root>/VeSTRR_b_FrstStrtCmplt' incorporates:
     *  DataStoreRead: '<S1031>/Dsr_StartLoadShedReq'
     *  SignalConversion generated from: '<S1>/FrstStrtCmplt'
     */
    (void)Rte_Write_VeSTRR_b_FrstStrtCmplt_Value(VeSTRR_b_FirstStartComplete_DS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_b_HardChkEngOn' incorporates:
     *  SignalConversion generated from: '<S1>/HardChkEngOn'
     */
    (void)Rte_Write_VeSTRR_b_HardChkEngOn_Value
        (STRR_ac_B.VariantMergeForOutportHardChkEngOn);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRO_WriteOutputs'
     */
    /* Outport: '<Root>/VeSTRR_b_HybCrnkAbrtd' incorporates:
     *  DataStoreRead: '<S1031>/Dsr_HybCrnkAbrtd'
     *  SignalConversion generated from: '<S1>/HybCrnkAbrtd'
     */
    (void)Rte_Write_VeSTRR_b_HybCrnkAbrtd_Value(VeSTRR_b_HybCrnkAbrtd_DS);

    /* Outport: '<Root>/VeSTRR_e_HybStrtrSt' incorporates:
     *  DataStoreRead: '<S1031>/Dsr_HybStrtrSt'
     *  SignalConversion generated from: '<S1>/HybStrtrSt'
     */
    (void)Rte_Write_VeSTRR_e_HybStrtrSt_Value(VeSTRR_e_HybStrtrSt_DS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_b_ImmedStop' incorporates:
     *  SignalConversion generated from: '<S1>/ImmdStp'
     */
    (void)Rte_Write_VeSTRR_b_ImmedStop_Value(VeSTRR_b_ImmedStop);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRC_STMVars'
     */
    /* Outport: '<Root>/VeSTRR_b_ImmedStopNeutReq' incorporates:
     *  Logic: '<S8>/Logical2'
     *  SignalConversion generated from: '<S1>/ImmdStpNeutRq'
     */
    (void)Rte_Write_VeSTRR_b_ImmedStopNeutReq_Value
        ((STRR_ac_B.VariantMergeForOutportImmdStpNeutRq) ||
         (STRR_ac_B.VariantMergeForOutportImmdStpNeutRq_c));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRO_WriteOutputs'
     */
    /* Outport: '<Root>/VeSTRR_g_ImmedStopRsn' incorporates:
     *  DataStoreRead: '<S1033>/Dsr_PID_AStrtEntry8'
     *  SignalConversion generated from: '<S1>/ImmedStopRsn'
     */
    (void)Rte_Write_VeSTRR_g_ImmedStopRsn_Value(NeSTRR_g_ImmedStopRsn);

    /* Outport: '<Root>/VeSTRR_b_StrtFailLowPwrLtch' incorporates:
     *  DataStoreRead: '<S1033>/Data Store Read1'
     *  SignalConversion generated from: '<S1>/LoPwrLtch'
     */
    (void)Rte_Write_VeSTRR_b_StrtFailLowPwrLtch_Value
        (NeSTRR_b_StrtFailLowPwrLtch);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_b_MaxEngOff' incorporates:
     *  SignalConversion generated from: '<S1>/MaxEngOff'
     */
    (void)Rte_Write_VeSTRR_b_MaxEngOff_Value
        (STRR_ac_B.VariantMergeForOutportMaxEngOff);

    /* Outport: '<Root>/VeSTRR_b_P2p5HMIMsg' incorporates:
     *  SignalConversion generated from: '<S1>/P2p5HMIMsg'
     */
    (void)Rte_Write_VeSTRR_b_P2p5HMIMsg_Value
        (STRR_ac_B.VariantMergeForOutportP2p5HMIMsg);

    /* Outport: '<Root>/VeSTRR_b_RemedialStop' incorporates:
     *  SignalConversion generated from: '<S1>/RemStpFnl'
     */
    (void)Rte_Write_VeSTRR_b_RemedialStop_Value
        (STRR_ac_B.VariantMergeForOutportRemStpFnl);

    /* Outport: '<Root>/VeSTRR_b_RemStopESS' incorporates:
     *  SignalConversion generated from: '<S1>/RmStpESSFnl'
     */
    (void)Rte_Write_VeSTRR_b_RemStopESS_Value
        (STRR_ac_B.VariantMergeForOutportRmStpESSFnl);

    /* Outport: '<Root>/VeSTRR_e_EssSTGCRsn' incorporates:
     *  SignalConversion generated from: '<S1>/STGCRsn'
     *  VariantMerge generated from: '<S1036>/STGCRsn'
     */
    (void)Rte_Write_VeSTRR_e_EssSTGCRsn_Value
        (STRR_ac_B.VariantMergeForOutportSTGCRsn);

    /* Outport: '<Root>/VeSTRR_Pct_SoftChkDeltaFromTgtSOCArb' incorporates:
     *  SignalConversion generated from: '<S1>/SoftChkDlta4mTgtSOCArb'
     */
    (void)Rte_Write_VeSTRR_Pct_SoftChkDeltaFromTgtSOCArb_Value
        (STRR_ac_B.VariantMergeForOutportSoftChkDeltaFromTg);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STRO_WriteOutputs'
     */
    /* Outport: '<Root>/VeSTRR_e_StrtChkMod' incorporates:
     *  DataStoreRead: '<S1031>/Dsr_HybEngSysActv1'
     *  SignalConversion generated from: '<S1>/StrChkMod'
     */
    (void)Rte_Write_VeSTRR_e_StrtChkMod_Value(VeSTRR_e_StrtChkMod_DS);

    /* Outport: '<Root>/VeSTRR_g_StrtDisAllowRsn' incorporates:
     *  DataStoreRead: '<S1032>/Dsr_StrtDisAllowRsn'
     *  SignalConversion generated from: '<S1>/StrtDisAllowRsn'
     */
    (void)Rte_Write_VeSTRR_g_StrtDisAllowRsn_Value(VeSTRR_g_StrtDisAllowRsn_DS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_d_EngStrtStopType_CAN' incorporates:
     *  SignalConversion generated from: '<S1>/StrtStopTypeCAN'
     */
    (void)Rte_Write_VeSTRR_d_EngStrtStopType_CAN_Value
        (STRR_ac_B.VeSTRR_d_EngStrtStopType_CAN);

    /* Outport: '<Root>/VeSTRR_e_StrtTyp2TCM' incorporates:
     *  SignalConversion generated from: '<S1>/StrtTyp2TCMFnl'
     *  VariantMerge generated from: '<S10>/StrtTyp2TCMFnl'
     */
    (void)Rte_Write_VeSTRR_e_StrtTyp2TCM_Value
        (STRR_ac_B.VariantMergeForOutportStrtTyp2TCMFnl);

    /* Outport: '<Root>/VeSTRR_M_ToMaxAllowed' incorporates:
     *  SignalConversion generated from: '<S1>/ToMaxAllwd'
     */
    (void)Rte_Write_VeSTRR_M_ToMaxAllowed_Value
        (STRR_ac_B.VariantMergeForOutportToMaxAllowed);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, STRR_CODE) STRR_MedTEB2(void) /* Explicit Task: MedTEB2 */
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/STRR_MedTEB2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/STFR_RegOPs'
     */
    /* Outputs for Atomic SubSystem: '<S1041>/VarSS_STFR_Reg' */
#if Rte_SysCon_Variant_STRR_UseBEVVar

    /* Outputs for Atomic SubSystem: '<S1042>/BEV' */
    /* VariantMerge generated from: '<S1042>/FltReg1' incorporates:
     *  Constant: '<S1043>/Constant Value'
     */
    STRR_ac_B.VariantMergeForOutportFltReg1 = 0U;

    /* VariantMerge generated from: '<S1042>/FltReg2' incorporates:
     *  Constant: '<S1043>/Constant Value1'
     */
    STRR_ac_B.VariantMergeForOutportFltReg2 = 0U;

    /* End of Outputs for SubSystem: '<S1042>/BEV' */
#else

    /* Outputs for Atomic SubSystem: '<S1042>/Non_BEV' */
    /* VariantMerge generated from: '<S1042>/FltReg2' incorporates:
     *  Inport: '<Root>/VeSTFR_g_FltReg2'
     */
    (void)Rte_Read_VeSTFR_g_FltReg2_Value
        (&STRR_ac_B.VariantMergeForOutportFltReg2);

    /* VariantMerge generated from: '<S1042>/FltReg1' incorporates:
     *  Inport: '<Root>/VeSTFR_g_FltReg1'
     */
    (void)Rte_Read_VeSTFR_g_FltReg1_Value
        (&STRR_ac_B.VariantMergeForOutportFltReg1);

    /* End of Outputs for SubSystem: '<S1042>/Non_BEV' */
#endif

    /* End of Outputs for SubSystem: '<S1041>/VarSS_STFR_Reg' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_g_FltReg1' incorporates:
     *  SignalConversion generated from: '<S2>/FltReg1'
     */
    (void)Rte_Write_VeSTRR_g_FltReg1_Value
        (STRR_ac_B.VariantMergeForOutportFltReg1);

    /* Outport: '<Root>/VeSTRR_g_FltReg2' incorporates:
     *  SignalConversion generated from: '<S2>/FltReg2'
     */
    (void)Rte_Write_VeSTRR_g_FltReg2_Value
        (STRR_ac_B.VariantMergeForOutportFltReg2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
}

/* Model step function for TID3 */
FUNC(void, STRR_CODE) STRR_SlowTEF(void) /* Explicit Task: SlowTEF */
{
    boolean rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/STRR_SlowTEF'
     */
    /* SignalConversion generated from: '<S6>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* S-Function (fcgen): '<S6>/FcnCallGen' incorporates:
     *  SubSystem: '<S6>/STRC_OBDData'
     */
    /* Outputs for Atomic SubSystem: '<S1048>/Stop Watch Reset Enabled' */
    /* Switch: '<S1051>/Switch2' incorporates:
     *  Constant: '<S1051>/Constant Value2'
     *  Logic: '<S1048>/Logical2'
     *  Switch: '<S1051>/Switch1'
     *  UnitDelay: '<S1051>/Unit Delay'
     */
    if (!rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
    {
        STRR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S1051>/Unit Delay' incorporates:
         *  Constant: '<S1049>/Calib'
         *  Sum: '<S1051>/Subtraction'
         *  Switch: '<S1051>/Switch2'
         */
        STRR_ac_DW.UnitDelay_DSTATE += HeSTRR_t_SlowTEF_dT;
    }

    /* End of Switch: '<S1051>/Switch2' */
    /* End of Outputs for SubSystem: '<S1048>/Stop Watch Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S1048>/Limiter3' */
    /* Switch: '<S1050>/Switch1' incorporates:
     *  Constant: '<S1048>/Constant Value4'
     *  RelationalOperator: '<S1050>/Relational Operator'
     *  UnitDelay: '<S1051>/Unit Delay'
     */
    if (65535.0F < STRR_ac_DW.UnitDelay_DSTATE)
    {
        /* Switch: '<S1050>/Switch' */
        STRR_ac_B.Switch = 65535.0F;
    }
    else
    {
        /* Switch: '<S1050>/Switch' */
        STRR_ac_B.Switch = STRR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S1050>/Switch1' */

    /* Switch: '<S1050>/Switch' incorporates:
     *  Constant: '<S1048>/Constant Value5'
     *  RelationalOperator: '<S1050>/Relational Operator1'
     */
    if (STRR_ac_B.Switch <= 0.0F)
    {
        /* Switch: '<S1050>/Switch' */
        STRR_ac_B.Switch = 0.0F;
    }

    /* End of Switch: '<S1050>/Switch' */
    /* End of Outputs for SubSystem: '<S1048>/Limiter3' */
    /* End of Outputs for S-Function (fcgen): '<S6>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_t_TmSinceSystActv' incorporates:
     *  SignalConversion generated from: '<S6>/TmSysRun'
     */
    (void)Rte_Write_VeSTRR_t_TmSinceSystActv_Value(STRR_ac_B.Switch);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/* Output function */
FUNC(void, STRR_CODE) STRR_PUP(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/STRR_PUP'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/STRC_PwrUpPT'
     */
    /* DataStoreWrite: '<S1045>/Data Store Write1' incorporates:
     *  Constant: '<S1045>/Constant Value'
     */
    VeSTRR_g_ImmedStopRsnCurr_DS = 0U;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */
}

/* Output function */
FUNC(void, STRR_CODE) STRR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/STRR_PwrOff'
     */
    /* Outport: '<Root>/NeSTRR_b_StrtFailLowPwrLtch_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeSTRR_b_StrtFailLowPwrLtch'
     */
    (void)Rte_Write_NeSTRR_b_StrtFailLowPwrLtch_NeSTRR_b_StrtFailLowPwrLtch
        (NeSTRR_b_StrtFailLowPwrLtch);

    /* Outport: '<Root>/NeSTRR_g_BumpStrtRsn_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeSTRR_g_BumpStrtRsn'
     */
    (void)Rte_Write_NeSTRR_g_BumpStrtRsn_NeSTRR_g_BumpStrtRsn
        (NeSTRR_g_BumpStrtRsn);

    /* Outport: '<Root>/NeSTRR_g_ImmedStopRsn_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeSTRR_g_ImmedStopRsn'
     */
    (void)Rte_Write_NeSTRR_g_ImmedStopRsn_NeSTRR_g_ImmedStopRsn
        (NeSTRR_g_ImmedStopRsn);

    /* Outport: '<Root>/NeSTRR_t_RealTime_EngOff_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeSTRR_t_RealTime_EngOff'
     */
    (void)Rte_Write_NeSTRR_t_RealTime_EngOff_NeSTRR_t_RealTime_EngOff
        (NeSTRR_t_RealTime_EngOff);

    /* Outport: '<Root>/NeSTRR_b_RealTime_EngOFF_FA_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeSTRR_b_RealTime_EngOFF_FA'
     */
    (void)Rte_Write_NeSTRR_b_RealTime_EngOFF_FA_NeSTRR_b_RealTime_EngOFF_FA
        (NeSTRR_b_RealTime_EngOFF_FA);

    /* Outport: '<Root>/NeSTRR_g_BackupStrtRsn_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeSTRR_g_BackupStrtRsn'
     */
    (void)Rte_Write_NeSTRR_g_BackupStrtRsn_NeSTRR_g_BackupStrtRsn
        (NeSTRR_g_BackupStrtRsn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, STRR_CODE) STRR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/STRR_PwrOn'
     */
    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/DSM_Init'
     */
    /* DataStoreWrite: '<S1046>/NeSTRR_g_BackupStrtRsn' incorporates:
     *  Inport: '<Root>/NeSTRR_g_BackupStrtRsn_PM_In'
     */
    (void)Rte_Read_NeSTRR_g_BackupStrtRsn_Rx_NeSTRR_g_BackupStrtRsn
        ((&(NeSTRR_g_BackupStrtRsn)));

    /* DataStoreWrite: '<S1046>/NeSTRR_b_RealTime_EngOFF_FA' incorporates:
     *  Inport: '<Root>/NeSTRR_b_RealTime_EngOFF_FA_PM_In'
     */
    (void)Rte_Read_NeSTRR_b_RealTime_EngOFF_FA_Rx_NeSTRR_b_RealTime_EngOFF_FA
        ((&(NeSTRR_b_RealTime_EngOFF_FA)));

    /* DataStoreWrite: '<S1046>/NeSTRR_t_RealTime_EngOff' incorporates:
     *  Inport: '<Root>/NeSTRR_t_RealTime_EngOff_PM_In'
     */
    (void)Rte_Read_NeSTRR_t_RealTime_EngOff_Rx_NeSTRR_t_RealTime_EngOff
        ((&(NeSTRR_t_RealTime_EngOff)));

    /* DataStoreWrite: '<S1046>/NeSTRR_g_ImmedStopRsn' incorporates:
     *  Inport: '<Root>/NeSTRR_g_ImmedStopRsn_PM_In'
     */
    (void)Rte_Read_NeSTRR_g_ImmedStopRsn_Rx_NeSTRR_g_ImmedStopRsn
        ((&(NeSTRR_g_ImmedStopRsn)));

    /* DataStoreWrite: '<S1046>/NeSTRR_g_BumpStrtRsn' incorporates:
     *  Inport: '<Root>/NeSTRR_g_BumpStrtRsn_PM_In'
     */
    (void)Rte_Read_NeSTRR_g_BumpStrtRsn_Rx_NeSTRR_g_BumpStrtRsn
        ((&(NeSTRR_g_BumpStrtRsn)));

    /* DataStoreWrite: '<S1046>/NeSTRR_b_StrtFailLowPwrLtch' incorporates:
     *  Inport: '<Root>/NeSTRR_b_StrtFailLowPwrLtch_PM_In'
     */
    (void)Rte_Read_NeSTRR_b_StrtFailLowPwrLtch_Rx_NeSTRR_b_StrtFailLowPwrLtch
        ((&(NeSTRR_b_StrtFailLowPwrLtch)));

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1047>/VeSTRR_b_EngOnReq_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_EngOnReq_Out_In = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_e_EngStrtStopType_Out_Init' incorporates:
     *  Constant: '<S1047>/Const2'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_EngStrtStopType = STRR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S1047>/VeSTRR_d_EngStrtStopType_CAN_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_d_EngStrtStopType = 0;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_HybCrnkAbrtd_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_HybCrnkAbrtd_Ou = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_e_HybStrtrSt_Out_Init' incorporates:
     *  Constant: '<S1047>/Const5'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_HybStrtrSt_Out_ = STRR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_FrstStrtCmplt_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_FrstStrtCmplt_O = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_FirstStartActv_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_FirstStartActv_ = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_e_StrtChkMod_Out_Init' incorporates:
     *  Constant: '<S1047>/Const8'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_StrtChkMod_Out_ = STRR_ac_ConstB.Const8;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_MaxEngOff_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_MaxEngOff_Out_I = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_e_EssSTGCRsn_Out_Init' incorporates:
     *  Constant: '<S1047>/Const10'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_EssSTGCRsn_Out_ = STRR_ac_ConstB.Const10;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_AStrtUpShftTrg_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_AStrtUpShftTrg_ = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_HardChkEngOn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_HardChkEngOn_Ou = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_Pct_SoftChkDeltaFromTgtSOCArb_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_Pct_SoftChkDeltaF = 0.0F;

    /* SignalConversion generated from: '<S1047>/VeSTRR_d_DrvbltyRsn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_d_DrvbltyRsn_Out_ = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_M_ToMaxAllowed_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_M_ToMaxAllowed_Ou = 0.0F;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_BackupStrtEngOn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_BackupStrtEngOn = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_BumpStrtEngOn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_BumpStrtEngOn_O = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_BumpStrtInhbt_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_BumpStrtInhbt_O = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_P2p5HMIMsg_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_P2p5HMIMsg_Out_ = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_g_FltReg1_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_g_FltReg1_Out_Ini = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_g_FltReg2_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_g_FltReg2_Out_Ini = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_InCltchStrtZn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_InCltchStrtZn_O = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_CltchStrtRsrvAvail_Raw_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_CltchStrtRsrvAv = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_e_FltBsdOvrrdFnl_Out_Init' incorporates:
     *  Constant: '<S1047>/Const24'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_FltBsdOvrrdFnl_ = STRR_ac_ConstB.Const24;

    /* SignalConversion generated from: '<S1047>/VeSTRR_g_BumpStrtRsn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_g_BumpStrtRsn_Out = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_g_StrtDisAllowRsn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_g_StrtDisAllowRsn = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_g_AStpInhbtRsn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_g_AStpInhbtRsn_Ou = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_g_AStpInhbtRsn2_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_g_AStpInhbtRsn2_O = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_g_EVModeInhbtRsn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_g_EVModeInhbtRsn_ = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_g_EVModeInhbtRsn2_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_g_EVModeInhbtRsn2 = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_EngOffAllowed_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_EngOffAllowed_O = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_EngOffAllwdECM_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_EngOffAllwdECM_ = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_EngOffAllwdTCM_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_EngOffAllwdTCM_ = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_StrtFailLowPwrLtch_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_StrtFailLowPwrL = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_t_StordEngOffTm_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_t_StordEngOffTm_O = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_StordEngOffTmFA_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_StordEngOffTmFA = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_g_ImmedStopRsn_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_g_ImmedStopRsn_Ou = 0U;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_ImmedStop_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_ImmedStop_Out_I = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_ImmedStopNeutReq_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_ImmedStopNeutRe = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_EngOnFuelOnReqd_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_EngOnFuelOnReqd = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_EngOnAllowed_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_EngOnAllowed_Ou = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_t_TmSinceSystActv_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_t_TmSinceSystActv = 0.0F;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_RemedialStop_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_RemedialStop_Ou = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_e_StrtTyp2TCM_Out_Init' incorporates:
     *  Constant: '<S1047>/Const45'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_StrtTyp2TCM_Out = STRR_ac_ConstB.Const45;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_RemStopESS_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_RemStopESS_Out_ = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_FCOnAllwd_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_FCOnAllwd_Out_I = false;

    /* SignalConversion generated from: '<S1047>/VeSTRR_b_FCOffAllwd_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_FCOffAllwd_Out_ = true;

    /* SignalConversion generated from: '<S1047>/VeSTRR_e_FCStrtrSt_Out_Init' incorporates:
     *  Constant: '<S1047>/Const48'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_FCStrtrSt_Out_I = STRR_ac_ConstB.Const48;

    /* SignalConversion generated from: '<S1047>/VeSTRR_e_FCSysActv_Out_Init' incorporates:
     *  Constant: '<S1047>/Const49'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_FCSysActv_Out_I = STRR_ac_ConstB.Const49;

    /* SignalConversion generated from: '<S1047>/VeSTRR_P_FCPwrReq_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_P_FCPwrReq_Out_In = 0.0F;

    /* SignalConversion generated from: '<S1047>/VeSTRR_e_FCMdReq_Out_Init' incorporates:
     *  Constant: '<S1047>/Const51'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_FCMdReq_Out_Ini = STRR_ac_ConstB.Const51;

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeSTRR_M_ToMaxAllowed' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_M_ToMaxAllowed_Out_Init'
     */
    (void)Rte_Write_VeSTRR_M_ToMaxAllowed_Value
        (STRR_ac_B.OutportBufferForVeSTRR_M_ToMaxAllowed_Ou);

    /* Outport: '<Root>/VeSTRR_P_FCPwrReq' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_P_FCPwrReq_Out_Init'
     */
    (void)Rte_Write_VeSTRR_P_FCPwrReq_Value
        (STRR_ac_B.OutportBufferForVeSTRR_P_FCPwrReq_Out_In);

    /* Outport: '<Root>/VeSTRR_Pct_SoftChkDeltaFromTgtSOCArb' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_Pct_SoftChkDeltaFromTgtSOCArb_Out_Init'
     */
    (void)Rte_Write_VeSTRR_Pct_SoftChkDeltaFromTgtSOCArb_Value
        (STRR_ac_B.OutportBufferForVeSTRR_Pct_SoftChkDeltaF);

    /* Outport: '<Root>/VeSTRR_b_AStrtUpShftTrg' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_AStrtUpShftTrg_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_AStrtUpShftTrg_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_AStrtUpShftTrg_);

    /* Outport: '<Root>/VeSTRR_b_BackupStrtEngOn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_BackupStrtEngOn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_BackupStrtEngOn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_BackupStrtEngOn);

    /* Outport: '<Root>/VeSTRR_b_BumpStrtEngOn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_BumpStrtEngOn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_BumpStrtEngOn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_BumpStrtEngOn_O);

    /* Outport: '<Root>/VeSTRR_b_BumpStrtInhbt' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_BumpStrtInhbt_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_BumpStrtInhbt_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_BumpStrtInhbt_O);

    /* Outport: '<Root>/VeSTRR_b_CltchStrtRsrvAvail_Raw' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_CltchStrtRsrvAvail_Raw_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_CltchStrtRsrvAvail_Raw_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_CltchStrtRsrvAv);

    /* Outport: '<Root>/VeSTRR_b_EngOffAllowed' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_EngOffAllowed_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_EngOffAllowed_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_EngOffAllowed_O);

    /* Outport: '<Root>/VeSTRR_b_EngOffAllwdECM' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_EngOffAllwdECM_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_EngOffAllwdECM_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_EngOffAllwdECM_);

    /* Outport: '<Root>/VeSTRR_b_EngOffAllwdTCM' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_EngOffAllwdTCM_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_EngOffAllwdTCM_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_EngOffAllwdTCM_);

    /* Outport: '<Root>/VeSTRR_b_EngOnAllowed' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_EngOnAllowed_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_EngOnAllowed_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_EngOnAllowed_Ou);

    /* Outport: '<Root>/VeSTRR_b_EngOnFuelOnReqd' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_EngOnFuelOnReqd_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_EngOnFuelOnReqd_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_EngOnFuelOnReqd);

    /* Outport: '<Root>/VeSTRR_b_EngOnReq' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_EngOnReq_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_EngOnReq_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_EngOnReq_Out_In);

    /* Outport: '<Root>/VeSTRR_b_FCOffAllwd' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_FCOffAllwd_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_FCOffAllwd_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_FCOffAllwd_Out_);

    /* Outport: '<Root>/VeSTRR_b_FCOnAllwd' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_FCOnAllwd_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_FCOnAllwd_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_FCOnAllwd_Out_I);

    /* Outport: '<Root>/VeSTRR_b_FirstStartActv' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_FirstStartActv_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_FirstStartActv_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_FirstStartActv_);

    /* Outport: '<Root>/VeSTRR_b_FrstStrtCmplt' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_FrstStrtCmplt_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_FrstStrtCmplt_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_FrstStrtCmplt_O);

    /* Outport: '<Root>/VeSTRR_b_HardChkEngOn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_HardChkEngOn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_HardChkEngOn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_HardChkEngOn_Ou);

    /* Outport: '<Root>/VeSTRR_b_HybCrnkAbrtd' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_HybCrnkAbrtd_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_HybCrnkAbrtd_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_HybCrnkAbrtd_Ou);

    /* Outport: '<Root>/VeSTRR_b_ImmedStopNeutReq' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_ImmedStopNeutReq_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_ImmedStopNeutReq_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_ImmedStopNeutRe);

    /* Outport: '<Root>/VeSTRR_b_ImmedStop' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_ImmedStop_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_ImmedStop_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_ImmedStop_Out_I);

    /* Outport: '<Root>/VeSTRR_b_InCltchStrtZn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_InCltchStrtZn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_InCltchStrtZn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_InCltchStrtZn_O);

    /* Outport: '<Root>/VeSTRR_b_MaxEngOff' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_MaxEngOff_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_MaxEngOff_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_MaxEngOff_Out_I);

    /* Outport: '<Root>/VeSTRR_b_P2p5HMIMsg' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_P2p5HMIMsg_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_P2p5HMIMsg_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_P2p5HMIMsg_Out_);

    /* Outport: '<Root>/VeSTRR_b_RemStopESS' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_RemStopESS_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_RemStopESS_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_RemStopESS_Out_);

    /* Outport: '<Root>/VeSTRR_b_RemedialStop' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_RemedialStop_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_RemedialStop_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_RemedialStop_Ou);

    /* Outport: '<Root>/VeSTRR_b_StordEngOffTmFA' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_StordEngOffTmFA_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_StordEngOffTmFA_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_StordEngOffTmFA);

    /* Outport: '<Root>/VeSTRR_b_StrtFailLowPwrLtch' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_b_StrtFailLowPwrLtch_Out_Init'
     */
    (void)Rte_Write_VeSTRR_b_StrtFailLowPwrLtch_Value
        (STRR_ac_B.OutportBufferForVeSTRR_b_StrtFailLowPwrL);

    /* Outport: '<Root>/VeSTRR_d_DrvbltyRsn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_d_DrvbltyRsn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_d_DrvbltyRsn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_d_DrvbltyRsn_Out_);

    /* Outport: '<Root>/VeSTRR_d_EngStrtStopType_CAN' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_d_EngStrtStopType_CAN_Out_Init'
     */
    (void)Rte_Write_VeSTRR_d_EngStrtStopType_CAN_Value
        (STRR_ac_B.OutportBufferForVeSTRR_d_EngStrtStopType);

    /* Outport: '<Root>/VeSTRR_e_EngStrtStopType' incorporates:
     *  SignalConversion generated from: '<S1047>/VeSTRR_e_EngStrtStopType_Out_Init'
     *  SignalConversion generated from: '<S5>/VeSTRR_e_EngStrtStopType_Out_Init'
     */
    (void)Rte_Write_VeSTRR_e_EngStrtStopType_Value
        (STRR_ac_B.OutportBufferForVeSTRR_e_EngStrtStopType);

    /* Outport: '<Root>/VeSTRR_e_EssSTGCRsn' incorporates:
     *  SignalConversion generated from: '<S1047>/VeSTRR_e_EssSTGCRsn_Out_Init'
     *  SignalConversion generated from: '<S5>/VeSTRR_e_EssSTGCRsn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_e_EssSTGCRsn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_e_EssSTGCRsn_Out_);

    /* Outport: '<Root>/VeSTRR_e_FCMdReq' incorporates:
     *  SignalConversion generated from: '<S1047>/VeSTRR_e_FCMdReq_Out_Init'
     *  SignalConversion generated from: '<S5>/VeSTRR_e_FCMdReq_Out_Init'
     */
    (void)Rte_Write_VeSTRR_e_FCMdReq_Value
        (STRR_ac_B.OutportBufferForVeSTRR_e_FCMdReq_Out_Ini);

    /* Outport: '<Root>/VeSTRR_e_FCStrtrSt' incorporates:
     *  SignalConversion generated from: '<S1047>/VeSTRR_e_FCStrtrSt_Out_Init'
     *  SignalConversion generated from: '<S5>/VeSTRR_e_FCStrtrSt_Out_Init'
     */
    (void)Rte_Write_VeSTRR_e_FCStrtrSt_Value
        (STRR_ac_B.OutportBufferForVeSTRR_e_FCStrtrSt_Out_I);

    /* Outport: '<Root>/VeSTRR_e_FCSysActv' incorporates:
     *  SignalConversion generated from: '<S1047>/VeSTRR_e_FCSysActv_Out_Init'
     *  SignalConversion generated from: '<S5>/VeSTRR_e_FCSysActv_Out_Init'
     */
    (void)Rte_Write_VeSTRR_e_FCSysActv_Value
        (STRR_ac_B.OutportBufferForVeSTRR_e_FCSysActv_Out_I);

    /* Outport: '<Root>/VeSTRR_e_FltBsdOvrrdFnl' incorporates:
     *  SignalConversion generated from: '<S1047>/VeSTRR_e_FltBsdOvrrdFnl_Out_Init'
     *  SignalConversion generated from: '<S5>/VeSTRR_e_FltBsdOvrrdFnl_Out_Init'
     */
    (void)Rte_Write_VeSTRR_e_FltBsdOvrrdFnl_Value
        (STRR_ac_B.OutportBufferForVeSTRR_e_FltBsdOvrrdFnl_);

    /* Outport: '<Root>/VeSTRR_e_HybStrtrSt' incorporates:
     *  SignalConversion generated from: '<S1047>/VeSTRR_e_HybStrtrSt_Out_Init'
     *  SignalConversion generated from: '<S5>/VeSTRR_e_HybStrtrSt_Out_Init'
     */
    (void)Rte_Write_VeSTRR_e_HybStrtrSt_Value
        (STRR_ac_B.OutportBufferForVeSTRR_e_HybStrtrSt_Out_);

    /* Outport: '<Root>/VeSTRR_e_StrtChkMod' incorporates:
     *  SignalConversion generated from: '<S1047>/VeSTRR_e_StrtChkMod_Out_Init'
     *  SignalConversion generated from: '<S5>/VeSTRR_e_StrtChkMod_Out_Init'
     */
    (void)Rte_Write_VeSTRR_e_StrtChkMod_Value
        (STRR_ac_B.OutportBufferForVeSTRR_e_StrtChkMod_Out_);

    /* Outport: '<Root>/VeSTRR_e_StrtTyp2TCM' incorporates:
     *  SignalConversion generated from: '<S1047>/VeSTRR_e_StrtTyp2TCM_Out_Init'
     *  SignalConversion generated from: '<S5>/VeSTRR_e_StrtTyp2TCM_Out_Init'
     */
    (void)Rte_Write_VeSTRR_e_StrtTyp2TCM_Value
        (STRR_ac_B.OutportBufferForVeSTRR_e_StrtTyp2TCM_Out);

    /* Outport: '<Root>/VeSTRR_g_AStpInhbtRsn2' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_g_AStpInhbtRsn2_Out_Init'
     */
    (void)Rte_Write_VeSTRR_g_AStpInhbtRsn2_Value
        (STRR_ac_B.OutportBufferForVeSTRR_g_AStpInhbtRsn2_O);

    /* Outport: '<Root>/VeSTRR_g_AStpInhbtRsn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_g_AStpInhbtRsn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_g_AStpInhbtRsn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_g_AStpInhbtRsn_Ou);

    /* Outport: '<Root>/VeSTRR_g_BumpStrtRsn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_g_BumpStrtRsn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_g_BumpStrtRsn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_g_BumpStrtRsn_Out);

    /* Outport: '<Root>/VeSTRR_g_EVModeInhbtRsn2' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_g_EVModeInhbtRsn2_Out_Init'
     */
    (void)Rte_Write_VeSTRR_g_EVModeInhbtRsn2_Value
        (STRR_ac_B.OutportBufferForVeSTRR_g_EVModeInhbtRsn2);

    /* Outport: '<Root>/VeSTRR_g_EVModeInhbtRsn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_g_EVModeInhbtRsn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_g_EVModeInhbtRsn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_g_EVModeInhbtRsn_);

    /* Outport: '<Root>/VeSTRR_g_FltReg1' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_g_FltReg1_Out_Init'
     */
    (void)Rte_Write_VeSTRR_g_FltReg1_Value
        (STRR_ac_B.OutportBufferForVeSTRR_g_FltReg1_Out_Ini);

    /* Outport: '<Root>/VeSTRR_g_FltReg2' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_g_FltReg2_Out_Init'
     */
    (void)Rte_Write_VeSTRR_g_FltReg2_Value
        (STRR_ac_B.OutportBufferForVeSTRR_g_FltReg2_Out_Ini);

    /* Outport: '<Root>/VeSTRR_g_ImmedStopRsn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_g_ImmedStopRsn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_g_ImmedStopRsn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_g_ImmedStopRsn_Ou);

    /* Outport: '<Root>/VeSTRR_g_StrtDisAllowRsn' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_g_StrtDisAllowRsn_Out_Init'
     */
    (void)Rte_Write_VeSTRR_g_StrtDisAllowRsn_Value
        (STRR_ac_B.OutportBufferForVeSTRR_g_StrtDisAllowRsn);

    /* Outport: '<Root>/VeSTRR_t_StordEngOffTm' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_t_StordEngOffTm_Out_Init'
     */
    (void)Rte_Write_VeSTRR_t_StordEngOffTm_Value
        (STRR_ac_B.OutportBufferForVeSTRR_t_StordEngOffTm_O);

    /* Outport: '<Root>/VeSTRR_t_TmSinceSystActv' incorporates:
     *  SignalConversion generated from: '<S5>/VeSTRR_t_TmSinceSystActv_Out_Init'
     */
    (void)Rte_Write_VeSTRR_t_TmSinceSystActv_Value
        (STRR_ac_B.OutportBufferForVeSTRR_t_TmSinceSystActv);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, STRR_CODE) STRR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        STRR_ac_B.OutportBufferForVeSTRR_e_FCMdReq_Out_Ini = CeSTRR_e_NoOvrd;
    }

    /* states (dwork) */

    /* custom states */
    VeSTRR_e_FCMdReq_DS = CeSTRR_e_NoOvrd;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory4' */
    VeSTRR_e_FCMdReq_DS = CeSTRR_e_NoOvrd;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/STRR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_e_EngStrtStopType_Out_Init' incorporates:
     *  Constant: '<S1047>/Const2'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_EngStrtStopType = STRR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_e_HybStrtrSt_Out_Init' incorporates:
     *  Constant: '<S1047>/Const5'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_HybStrtrSt_Out_ = STRR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_e_StrtChkMod_Out_Init' incorporates:
     *  Constant: '<S1047>/Const8'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_StrtChkMod_Out_ = STRR_ac_ConstB.Const8;

    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_e_EssSTGCRsn_Out_Init' incorporates:
     *  Constant: '<S1047>/Const10'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_EssSTGCRsn_Out_ = STRR_ac_ConstB.Const10;

    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_e_FltBsdOvrrdFnl_Out_Init' incorporates:
     *  Constant: '<S1047>/Const24'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_FltBsdOvrrdFnl_ = STRR_ac_ConstB.Const24;

    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_e_StrtTyp2TCM_Out_Init' incorporates:
     *  Constant: '<S1047>/Const45'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_StrtTyp2TCM_Out = STRR_ac_ConstB.Const45;

    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_b_FCOffAllwd_Out_Init' */
    STRR_ac_B.OutportBufferForVeSTRR_b_FCOffAllwd_Out_ = true;

    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_e_FCStrtrSt_Out_Init' incorporates:
     *  Constant: '<S1047>/Const48'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_FCStrtrSt_Out_I = STRR_ac_ConstB.Const48;

    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_e_FCSysActv_Out_Init' incorporates:
     *  Constant: '<S1047>/Const49'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_FCSysActv_Out_I = STRR_ac_ConstB.Const49;

    /* SystemInitialize for SignalConversion generated from: '<S1047>/VeSTRR_e_FCMdReq_Out_Init' incorporates:
     *  Constant: '<S1047>/Const51'
     */
    STRR_ac_B.OutportBufferForVeSTRR_e_FCMdReq_Out_Ini = STRR_ac_ConstB.Const51;

    /* End of SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeSTRR_e_EngStrtStopType' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeSTRR_e_EngStrtStopType_Value(CeSTRR_e_NoAction);

    /* SystemInitialize for Outport: '<Root>/VeSTRR_e_HybStrtrSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VeSTRR_e_HybStrtrSt_Value(CeSTRR_e_KeyOffSt);

    /* SystemInitialize for Outport: '<Root>/VeSTRR_e_StrtChkMod' incorporates:
     *  Merge: '<Root>/Merge_Outport_8'
     */
    (void)Rte_Write_VeSTRR_e_StrtChkMod_Value(CeSTRR_e_Normal);

    /* SystemInitialize for Outport: '<Root>/VeSTRR_e_EssSTGCRsn' incorporates:
     *  Merge: '<Root>/Merge_Outport_10'
     */
    (void)Rte_Write_VeSTRR_e_EssSTGCRsn_Value(CeSTRR_e_None);

    /* SystemInitialize for Outport: '<Root>/VeSTRR_e_FltBsdOvrrdFnl' incorporates:
     *  Merge: '<Root>/Merge_Outport_24'
     */
    (void)Rte_Write_VeSTRR_e_FltBsdOvrrdFnl_Value(CeSTRR_e_NoOvrrd);

    /* SystemInitialize for Outport: '<Root>/VeSTRR_e_StrtTyp2TCM' incorporates:
     *  Merge: '<Root>/Merge_Outport_45'
     */
    (void)Rte_Write_VeSTRR_e_StrtTyp2TCM_Value(CeSTRR_e_NoAction);

    /* SystemInitialize for Outport: '<Root>/VeSTRR_e_FCStrtrSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_48'
     */
    (void)Rte_Write_VeSTRR_e_FCStrtrSt_Value(CeSTRR_e_KeyOffSt);

    /* SystemInitialize for Outport: '<Root>/VeSTRR_e_FCSysActv' incorporates:
     *  Merge: '<Root>/Merge_Outport_49'
     */
    (void)Rte_Write_VeSTRR_e_FCSysActv_Value(CeESSR_e_HybEngDisabled);

    /* SystemInitialize for Outport: '<Root>/VeSTRR_e_FCMdReq' incorporates:
     *  Merge: '<Root>/Merge_Outport_50'
     */
    (void)Rte_Write_VeSTRR_e_FCMdReq_Value(CeSTRR_e_NoOvrd);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
