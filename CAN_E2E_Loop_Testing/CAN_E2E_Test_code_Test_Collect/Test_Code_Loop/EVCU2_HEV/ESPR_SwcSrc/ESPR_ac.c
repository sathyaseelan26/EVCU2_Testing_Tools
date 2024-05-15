/*
 * File: ESPR_ac.c
 *
 * Code generated for Simulink model 'ESPR_ac'.
 *
 * Model version                  : 9.151
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:40:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ESPR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* Named constants for Chart: '<S28>/Sync_Angle_Procedure' */
#if Rte_SysCon_Variant_ESPR_4
#define ESPR_ac_IN_Init_State          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ESPR_4
#define ESPR_ac_IN_PHASE_CORRECTION    ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ESPR_4
#define ESPR_ac_IN_SYNC_CONFIRMED      ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ESPR_4
#define ESPR_ac_IN_Wait                ((uint8)4U)
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
#define START_SEC_CALIB_UNSPECIFIED_ESPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) HeESPR_t_FastTEF = 0.005F;/* Referenced by:
                                                                      * '<S80>/Calib'
                                                                      * '<S51>/Calib'
                                                                      * '<S191>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(TeESPR_e_ECMCrankPhase, ESPR_VAR_INIT)
    KaESPR_e_ECMCrankPhase_Map[8] =
{
    CeESPR_e_NotInitialized, CeESPR_e_FirstQuadrant, CeESPR_e_SecondQuadrant,
    CeESPR_e_ThirdQuadrant, CeESPR_e_FourthQuadrant, CeESPR_e_SNA, CeESPR_e_SNA,
    CeESPR_e_SNA
};                                     /* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT)
    KeESPD_Cnt_BuffrCrnkPrfrmncWarningCntLmt = 43U;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT)
    KeESPD_Cnt_BuffrCrnkPrfrmncWarningSmplCntLmt = 50U;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static volatile CONST(uint16, ESPR_VAR_INIT)
    KeESPD_Cnt_DMCM_A_CKP_SnsrPerf_FailCntLmt = 43U;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static volatile CONST(uint16, ESPR_VAR_INIT)
    KeESPD_Cnt_DMCM_A_CKP_SnsrPerf_SmplCntLmt = 43U;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT) KeESPD_Cnt_EngNegSpdFailureCntLmt =
    40U;                               /* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT)
    KeESPD_Cnt_EngNegSpdFailureSmplCntLmt = 0U;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT) KeESPD_Cnt_EngNegSpdWarningCntLmt =
    43U;                               /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT)
    KeESPD_Cnt_EngNegSpdWarningSmplCntLmt = 0U;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT) KeESPD_Cnt_EngOvrSpdFailureCntLmt =
    43U;                               /* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT)
    KeESPD_Cnt_EngOvrSpdFailureSmplCntLmt = 0U;/* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT) KeESPD_Cnt_EngOvrSpdWarningCntLmt =
    43U;                               /* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT)
    KeESPD_Cnt_EngOvrSpdWarningSmplCntLmt = 0U;/* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_BuffrCrnkPrfrmncCalcEnbl =
    1;                                 /* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT)
    KeESPD_b_BuffrCrnkPrfrmncWarning_LtchEnbl = 0;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT)
    KeESPD_b_DMCM_A_CKP_SnsrCkt_LtchEnbl = 0;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static volatile CONST(boolean, ESPR_VAR_INIT)
    KeESPD_b_DMCM_A_CKP_SnsrPerf_LtchEnbl = 0;/* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_EngNegSpdCntrlEnbl = 1;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_EngNegSpdFailure_LtchEnbl
    = 0;                               /* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_EngNegSpdWarning_LtchEnbl
    = 0;                               /* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_EngOvrSpdCntrlEnbl = 1;/* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_EngOvrSpdFailure_LtchEnbl
    = 0;                               /* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_EngOvrSpdWarning_LtchEnbl
    = 0;                               /* Referenced by: '<S269>/Calib' */

#endif

#if (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_EngineSpeedOvrdEnbl = 0;/* Referenced by: '<S133>/Calib' */

#endif

#if (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_Ni_6DegOvrdEnbl = 0;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_RunCrankActiveEnbl = 0;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_RunCrankActiveOvrdVal = 0;/* Referenced by: '<S136>/Calib' */

#endif

#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4)

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPD_b_TransInSpdOvrdEnbl = 1;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static volatile CONST(float32, ESPR_VAR_INIT)
    KeESPD_n_BuffdCrnkPrfrmcFailThrshldMax = 250.0F;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT)
    KeESPD_n_BufferedCrankPrfrncFailThrshld = 50.0F;/* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT)
    KeESPD_n_BufferedCrankPrfrncWarnThrshld = 850.0F;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_BuffrCrnkPrfrmncVal =
    0.0F;                              /* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_EngNegSpdCntrlVal = 0.0F;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_EngNegSpdFailureThrshld =
    -50.0F;                            /* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_EngNegSpdWarningThrshld =
    -45.0F;                            /* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_EngOvrSpdCntrlVal = 0.0F;/* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_EngOvrSpdFailureThrshld =
    7000.0F;                           /* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_EngOvrSpdWarningThrshld =
    5000.0F;                           /* Referenced by: '<S272>/Calib' */

#endif

#if (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_EngineSpeedOvrdVal = 0.0F;/* Referenced by: '<S138>/Calib' */

#endif

#if (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_EngineSpeedThrshld =
    50.0F;                             /* Referenced by:
                                        * '<S153>/Calib'
                                        * '<S196>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_Ni_6DegOvrdVal = 0.0F;/* Referenced by: '<S139>/Calib' */

#endif

#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4)

static volatile CONST(float32, ESPR_VAR_INIT) KeESPD_n_TransInSpdOvrdVal = 0.0F;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint8, ESPR_VAR_INIT) KeESPR_Cnt_AttemptSamples = 3U;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT) KeESPR_Cnt_CrankMaturingFltDbnc =
    5U;                                /* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT) KeESPR_Cnt_EngineOffTimerIV = 480U;/* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint16, ESPR_VAR_INIT) KeESPR_Cnt_EngineSpdFaultOut = 24U;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint8, ESPR_VAR_INIT) KeESPR_Cnt_MaxLearnAttempts = 3U;/* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static volatile CONST(uint8, ESPR_VAR_INIT) KeESPR_Cnt_UnlckOccurrenceLmt = 3U;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_K_BufferBlendStepDownSize =
    0.03F;                             /* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_K_BufferBlendStepUpSize =
    0.03F;                             /* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT)
    KeESPR_K_Nidot_BufferBlendStepDownSize = 0.03F;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT)
    KeESPR_K_Nidot_BufferBlendStepUpSize = 0.03F;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPR_b_CrankMaturingFaultDflt =
    0;             /* Referenced by: '<S4>/FsftESPR_b_CrankMaturingFaultChrt' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPR_b_EnableP1AC7Diag = 0;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPR_b_EnblOldSourceSwitchLogic =
    0;                                 /* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPR_b_EngAngleSyncPhase = 0;/* Referenced by:
                                                                      * '<S57>/Calib'
                                                                      * '<S72>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(boolean, ESPR_VAR_INIT) KeESPR_b_SyncLogicReset = 0;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_dn_AccHystLSP = 500.0F;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_dn_AccHystRSP = 500.0F;/* Referenced by: '<S59>/Calib' */

#endif

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_dn_EngineAccel_MCP = 0.0F;/* Referenced by: '<S312>/Calib' */

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(TeESPR_e_ECMCrankPhase, ESPR_VAR_INIT)
    KeESPR_e_ECMCrankPhase_init = CeESPR_e_NotInitialized;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_f_LowPassFreq = 10.0F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(uint8, ESPR_VAR_INIT) KeESPR_i_CrankSpeedType = 2U;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_EngHalfCylSpdMaxLimDflt =
    6000.0F;                           /* Referenced by:
                                        * '<S7>/FsftESPR_n_EngHalfCylSpdMaxLimChrt'
                                        * '<S321>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_EngHalfCylSpdMinLimDflt =
    800.0F;                            /* Referenced by:
                                        * '<S8>/FsftESPR_n_EngHalfCylSpdMinLimChrt'
                                        * '<S322>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_EngSpdDflt = 0.0F;
                         /* Referenced by: '<S21>/PokeESPR_n_EngineSpeedChrt' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_EngSpdMaxLimDflt =
    8000.0F;                           /* Referenced by:
                                        * '<S9>/FsftESPR_n_EngSpdMaxLimChrt'
                                        * '<S323>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_EngSpdMinLimDflt = 450.0F;/* Referenced by:
                                                                      * '<S10>/FsftESPR_n_EngSpdMinLimChrt'
                                                                      * '<S324>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_EngSpdThrshld = 0.0F;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_EngineLowDefault = 600.0F;/* Referenced by: '<S100>/Calib' */

#endif

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_EngineSpeed_MCP = 0.0F;/* Referenced by: '<S313>/Calib' */

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_MaxEngineOffSpeed =
    100.0F;                            /* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_MinEngineSpeed = 1000.0F;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_PrepStopAccHystLSP =
    500.0F;                            /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_PrepStopAccHystRSP =
    500.0F;                            /* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_PrepStopSpeedHystLSP =
    1300.0F;                           /* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_PrepStopSpeedHystRSP =
    1300.0F;                           /* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_SpeedHystLSP = 1500.0F;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_SpeedHystRSP = 1500.0F;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_TCMEngSpdReqOnSNA = 0.0F;
                        /* Referenced by: '<S23>/PokeESPR_n_TCMEngSpdReqChrt' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_n_TOSS_LowLimit = 600.0F;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_phi_AngleRange = 180.0F;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_r_NiNoFltdRatio = 2.893F;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_t_NiDotCANTimePeriod =
    0.00625F;                          /* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static volatile CONST(float32, ESPR_VAR_INIT) KeESPR_t_UnlckTimerLmt = 0.5F;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT)
    KtESPD_Cnt_BuffrCrnkPrfrmncFailureCntLmt[6] =
{
    100.0F, 32.0F, 30.0F, 28.0F, 28.0F, 28.0F
} ;                                    /* Referenced by: '<S154>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT)
    KtESPD_Cnt_BuffrCrnkPrfrmncFailureSmplCntLmt[6] =
{
    100.0F, 33.0F, 35.0F, 35.0F, 35.0F, 35.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KtESPR_K_CoeffEngineSpeed6deg[12] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.9F, 0.7F, 0.5F, 0.3F, 0.1F, 0.0F
} ;                                    /* Referenced by: '<S115>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KtESPR_K_CoeffEngineSpeedEPP[14] =
{
    0.0F, 0.0F, 0.1F, 0.3F, 0.5F, 0.7F, 0.9F, 1.0F, 1.0F, 0.7F, 0.5F, 0.3F, 0.1F,
    0.0F
} ;                                    /* Referenced by: '<S116>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KtESPR_K_CoeffNidot6deg[12] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.9F, 0.7F, 0.5F, 0.3F, 0.1F, 0.0F
} ;                                    /* Referenced by: '<S117>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KtESPR_K_CoeffNidotEPP[14] =
{
    0.0F, 0.0F, 0.1F, 0.3F, 0.5F, 2.7F, 0.9F, 1.0F, 1.0F, 0.7F, 0.5F, 0.3F, 0.1F,
    0.0F
} ;                                    /* Referenced by: '<S118>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT)
    KxESPD_Cnt_BuffrCrnkPrfrmncFailureCntLmt[6] =
{
    0.0F, 40.0F, 200.0F, 1000.0F, 2000.0F, 3000.0F
} ;                                    /* Referenced by: '<S154>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT)
    KxESPD_Cnt_BuffrCrnkPrfrmncFailureSmplCntLmt[6] =
{
    0.0F, 40.0F, 200.0F, 1000.0F, 2000.0F, 3000.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KxESPR_K_CoeffEngineSpeed6deg[12] =
{
    0.0F, 200.0F, 400.0F, 600.0F, 700.0F, 750.0F, 800.0F, 850.0F, 900.0F, 950.0F,
    1000.0F, 1050.0F
} ;                                    /* Referenced by: '<S115>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KxESPR_K_CoeffEngineSpeedEPP[14] =
{
    0.0F, 750.0F, 800.0F, 850.0F, 900.0F, 950.0F, 1000.0F, 1050.0F, 3600.0F,
    3650.0F, 3700.0F, 3750.0F, 3800.0F, 3850.0F
} ;                                    /* Referenced by: '<S116>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KxESPR_K_CoeffNidot6deg[12] =
{
    0.0F, 200.0F, 400.0F, 600.0F, 700.0F, 750.0F, 800.0F, 850.0F, 900.0F, 950.0F,
    1000.0F, 1050.0F
} ;                                    /* Referenced by: '<S117>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static volatile CONST(float32, ESPR_VAR_INIT) KxESPR_K_CoeffNidotEPP[14] =
{
    0.0F, 750.0F, 800.0F, 850.0F, 900.0F, 950.0F, 1000.0F, 1050.0F, 3600.0F,
    3650.0F, 3700.0F, 3750.0F, 3800.0F, 3850.0F
} ;                                    /* Referenced by: '<S118>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ESPR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ESPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPC_b_CANEngineSpeedFA;/* '<S29>/Merge2' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPC_b_EngineSpeed_MCPFA;/* '<S30>/Logical' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPC_b_LatchBuffCrk;/* '<S90>/OR1' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPC_b_LatchEngSpd;/* '<S89>/OR1' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(TeESPR_e_ECMCrankPhase, ESPR_VAR_INIT) VeESPC_e_ECMCrankPhase;/* '<S31>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_BuffrCrnkPrfrmncFailCnt;/* '<S165>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_BuffrCrnkPrfrmncFailSmplCnt;/* '<S166>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_BuffrCrnkPrfrmncSpdWarnCnt;/* '<S179>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_BuffrCrnkPrfrmncWarnSmplCnt;/* '<S180>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_FailCnt;/* '<S208>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_SmpCnt;/* '<S209>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_EngNegSpdFailCnt;/* '<S238>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_EngNegSpdFailSmplCnt;/* '<S239>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_EngNegSpdWarnCnt;/* '<S252>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_EngNegSpdWarnSmplCnt;/* '<S253>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_EngOvrSpdFailCnt;/* '<S296>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_EngOvrSpdFailSmplCnt;/* '<S297>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_EngOvrSpdWarnCnt;/* '<S282>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static VAR(uint16, ESPR_VAR_INIT) VeESPD_Cnt_EngOvrSpdWarnSmplCnt;/* '<S283>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPD_b_BufferCrankPerformance_EnbleCndtn;/* '<S141>/Logical' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPD_b_BufferedCrankPrfrncVal;/* '<S144>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static VAR(boolean, ESPR_VAR_INIT) VeESPD_b_P1AC7_EnbleCndtn;/* '<S187>/Relational Operator2' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static VAR(boolean, ESPR_VAR_INIT) VeESPD_b_P1AC7_FailBuffSpdCriteria;/* '<S187>/Relational Operator3' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPD_b_P1AC7_FailCrtMet;/* synthesized block */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static VAR(boolean, ESPR_VAR_INIT) VeESPD_b_P1AC7_Fail_OccCriteria;/* '<S187>/AND2' */

#endif

#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

static VAR(boolean, ESPR_VAR_INIT) VeESPD_b_P1AC7_Fail_TmrCriteria;/* '<S187>/AND' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPD_b_RunCrankActive;/* '<S25>/Switch4' */

#endif

#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPD_n_EngNegSpdFBVal;/* '<S218>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPD_n_EngOvrSpdFBVal;/* '<S262>/Switch1' */

#endif

#if (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static VAR(float32, ESPR_VAR_INIT) VeESPD_n_EngineSpeed;/* '<S25>/Switch1' */

#endif

#if (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static VAR(float32, ESPR_VAR_INIT) VeESPD_n_Ni_6Deg;/* '<S25>/Switch2' */

#endif

#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4)

static VAR(float32, ESPR_VAR_INIT) VeESPD_n_TransInSpd;/* '<S25>/Switch3' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(uint8, ESPR_VAR_INIT) VeESPR_Cnt_AttemptSamples;/* '<S41>/Gain' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(uint8, ESPR_VAR_INIT) VeESPR_Cnt_NoOffsetAttempts;/* '<S43>/Gain' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(uint8, ESPR_VAR_INIT) VeESPR_Cnt_NotSyncedSamples;/* '<S37>/Gain' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(uint8, ESPR_VAR_INIT) VeESPR_Cnt_OffsetAttempts;/* '<S42>/Gain' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(uint8, ESPR_VAR_INIT) VeESPR_Cnt_PhaseSyncLearnAttempts;/* '<S38>/Gain' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(uint8, ESPR_VAR_INIT) VeESPR_Cnt_SyncedSamples;/* '<S40>/Gain' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_CoeffEngineSpeedEPP;/* '<S116>/Vector' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_EPPCoefMath;/* '<S30>/Sum1' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_NiDotEPPCoefMath;/* '<S30>/Sum6' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_Ni_1rev_Coeff;/* '<S30>/Product7' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_Ni_1rev_Coeff_2;/* '<S30>/Product10' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_Ni_6Deg_Coeff;/* '<S120>/Switch' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_Ni_EPP_Coeff;/* '<S30>/Product6' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_Nidot_1rev_Coeff;/* '<S30>/Product9' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_Nidot_1rev_Coeff_latchDecay;/* '<S30>/Product11' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_Nidot_6Deg_Coeff;/* '<S123>/Switch' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_K_Nidot_EPP_Coeff;/* '<S30>/Product8' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_AccTest;/* '<S32>/Logical3' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_CrankPhaseTrigger;/* '<S32>/Comparison4' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_CrnkSensorFailing;/* '<S306>/AND' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_EngineOffTest;/* '<S32>/Logical7' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_MinSpeedTest;/* '<S32>/Comparison2' */

#endif

#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_P1AC6Failing;/* '<S141>/Logical4' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_PhaseLearnActive;/* '<S39>/Gain' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_PhaseSyncEnabled;/* '<S32>/AND7' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_PrepStopAccTest;/* '<S32>/Logical9' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_PrepStopCondition;/* '<S32>/Logical' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_PrepStopSpeedTest;/* '<S32>/Logical8' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_SpeedCondition;/* '<S32>/Logical2' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_SpeedConditionsTest;/* '<S32>/Logical4' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(boolean, ESPR_VAR_INIT) VeESPR_b_SpeedTest;/* '<S32>/Logical1' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_dn_NiDot1rev_Fctr;/* '<S30>/Product5' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_dn_NiDot6Deg_Fctr;/* '<S30>/Product3' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_dn_NiDotEPP_Fctr;/* '<S30>/Product4' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_n_Ni1revFactr;/* '<S30>/Product2' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_n_Ni6DegFactr;/* '<S30>/Product' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_n_NiEPPFactr;/* '<S30>/Product1' */

#endif

#if Rte_SysCon_Variant_ESPR_4

static VAR(float32, ESPR_VAR_INIT) VeESPR_phi_TempOffset;/* '<S44>/Gain' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ESPR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ESPR
#include "MemMap.h"

CONST(ConstB_ESPR_ac_T, ESPR_VAR_INIT) ESPR_ac_ConstB =
{
    CeESPR_e_EngSpdNormal,             /* '<S320>/Constant' */

#if Rte_SysCon_Variant_ESPR_4

    CeESPR_e_EngSpdNormal,             /* '<S314>/Constant' */

#endif

    CeDFIB_e_Init,                     /* '<S319>/Constant' */
    CeDFIB_e_Init,                     /* '<S316>/Constant' */
    CeDFIB_e_Init,                     /* '<S317>/Constant' */
    CeDFIB_e_Init                      /* '<S318>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_ESPR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ESPR
#include "MemMap.h"

VAR(B_ESPR_ac_T, ESPR_VAR_INIT) ESPR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ESPR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ESPR
#include "MemMap.h"

VAR(DW_ESPR_ac_T, ESPR_VAR_INIT) ESPR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ESPR
#include "MemMap.h"
#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static FUNC(void, ESPR_CODE_LOCAL) ESPR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ESPR_VAR_INIT)
    rty_FaultSts);

#endif

#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static FUNC(void, ESPR_CODE_LOCAL) ESPR_ac_Init_h(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ESPR_VAR_INIT)
    rty_FaultSts);

#endif

#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static FUNC(void, ESPR_CODE_LOCAL) ESPR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ESPR_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S156>/Fail'
 *    '<S157>/Fail'
 *    '<S200>/Fail'
 *    '<S229>/Fail'
 *    '<S230>/Fail'
 *    '<S273>/Fail'
 *    '<S274>/Fail'
 */
#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static FUNC(void, ESPR_CODE_LOCAL) ESPR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ESPR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S156>/Fail' incorporates:
     *  EnablePort: '<S161>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S161>/FaultSts' incorporates:
         *  Constant: '<S167>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S156>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S156>/Init'
 *    '<S157>/Init'
 *    '<S200>/Init'
 *    '<S229>/Init'
 *    '<S230>/Init'
 *    '<S273>/Init'
 *    '<S274>/Init'
 */
#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static FUNC(void, ESPR_CODE_LOCAL) ESPR_ac_Init_h(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ESPR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S156>/Init' incorporates:
     *  EnablePort: '<S162>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S162>/FaultSts' incorporates:
         *  Constant: '<S168>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S156>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S156>/Pass'
 *    '<S157>/Pass'
 *    '<S200>/Pass'
 *    '<S229>/Pass'
 *    '<S230>/Pass'
 *    '<S273>/Pass'
 *    '<S274>/Pass'
 */
#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

static FUNC(void, ESPR_CODE_LOCAL) ESPR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ESPR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S156>/Pass' incorporates:
     *  EnablePort: '<S163>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S163>/FaultSts' incorporates:
         *  Constant: '<S169>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S156>/Pass' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) ESPR_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_ESPR_4

    float32 rtb_Vector;

#endif

#if Rte_SysCon_Variant_ESPR_4

    float32 rtb_Switch1_dp;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_AND1;

#endif

#if Rte_SysCon_Variant_ESPR_4

    float32 rtb_Switch_l;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_AND_as;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_Switch2_fe1;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_OR1_pq;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_OR1_e;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_AND_gg;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_AND_iw;

#endif

#if Rte_SysCon_Variant_ESPR_4

    float32 TmpSignalConversionAtTmpVM_FcnCallSubsys;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_n;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_a2;

#endif

#if Rte_SysCon_Variant_ESPR_4

    sint32 tmp;

#endif

#if Rte_SysCon_Variant_ESPR_4

    TeESPR_e_EngSpdStatus VeESPC_b_EngineSpeed_MCPFA_tmp;

#endif

#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4)

    uint32 rtb_RelationalOperator3_j_tmp;

#endif

#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4)

    uint32 rtb_Logical1_c_tmp;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubsys =
        Rte_IrvRead_ESPR_FastTEF_VeESPI_n_EngineSpeed_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeBCKR_n_Ni_6Deg'
     */
    (void)Rte_Read_VeBCKR_n_Ni_6Deg_VeBCKR_n_Ni_6Deg
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeBCKR_n_Ni_Epp'
     */
    (void)Rte_Read_VeBCKR_n_Ni_Epp_VeBCKR_n_Ni_Epp
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeBCKR_n_Ni_1Rev'
     */
    (void)Rte_Read_VeBCKR_n_Ni_1Rev_VeBCKR_n_Ni_1Rev
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeBCKR_dn_Nidot_6Deg'
     */
    (void)Rte_Read_VeBCKR_dn_Nidot_6Deg_VeBCKR_dn_Nidot_6Deg
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeBCKR_dn_Nidot_Epp'
     */
    (void)Rte_Read_VeBCKR_dn_Nidot_Epp_VeBCKR_dn_Nidot_Epp
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeBCKR_dn_Nidot_1Rev'
     */
    (void)Rte_Read_VeBCKR_dn_Nidot_1Rev_VeBCKR_dn_Nidot_1Rev
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeTISR_b_InputSpeedFA'
     */
    (void)Rte_Read_VeTISR_b_InputSpeedFA_Value
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeVSDR_b_PrimNoFA'
     */
    (void)Rte_Read_VeVSDR_b_PrimNoFA_Value
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndRaw'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndRaw_Value
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VePMDR_b_RunCrankActive'
     */
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_n =
        Rte_IrvRead_ESPR_FastTEF_VeESPR_b_CrankMaturingFault_init_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_a2 =
        Rte_IrvRead_ESPR_FastTEF_VeESPR_e_ECMCrankPhaseFA_init_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j);

#elif !Rte_SysCon_Variant_ESPR_1 && !Rte_SysCon_Variant_ESPR_2 && !Rte_SysCon_Variant_ESPR_3 && !Rte_SysCon_Variant_ESPR_5 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
    ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
    ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeBCKR_b_DiagFailingFlag'
     */
    (void)Rte_Read_VeBCKR_b_DiagFailingFlag_VeBCKR_b_DiagFailingFlag
        (&ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_f1);

#elif !Rte_SysCon_Variant_ESPR_5 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
    ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_f1 = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
#if (Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4) || (Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ai);

#elif !Rte_SysCon_Variant_ESPR_1 && !Rte_SysCon_Variant_ESPR_2 && !Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
    ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ai = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeBCKR_phi_EngAg_MCP'
     */
    (void)Rte_Read_VeBCKR_phi_EngAg_MCP_VeBCKR_phi_EngAg_MCP
        (&ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
#if Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngOvrspd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngOvrspd_Value
        (&ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy);

#elif !Rte_SysCon_Variant_ESPR_1 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
    ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
#if Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngNegSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngNegSpd_Value
        (&ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c);

#elif !Rte_SysCon_Variant_ESPR_2 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
    ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
#if Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DMCM_A_CKP_SnsrCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DMCM_A_CKP_SnsrCkt_Value
        (&ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a);

#elif !Rte_SysCon_Variant_ESPR_3 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
    ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a = 0U;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
#if Rte_SysCon_Variant_ESPR_4 && Rte_SysCon_Variant_ESPR_5

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_DMCM_A_CKP_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_DMCM_A_CKP_SnsrPerf_Value
        (&ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f);

#elif !Rte_SysCon_Variant_ESPR_5 && Rte_SysCon_Variant_ESPR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39' */
    ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f = 0U;

#endif

    /* Outputs for Function Call SubSystem: '<Root>/ESPR_FastTEF' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPC_ProcessEng_FastTEF'
     */
    /* Lookup_n-D: '<S115>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39'
     */
    rtb_Vector = look1_iflf_binlca_16a
        (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k, ((const float32 *)
          &(KxESPR_K_CoeffEngineSpeed6deg[0])), ((const float32 *)
          &(KtESPR_K_CoeffEngineSpeed6deg[0])), 11U);

    /* Lookup_n-D: '<S116>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39'
     */
    VeESPR_K_CoeffEngineSpeedEPP = look1_iflf_binlca_16a
        (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k, ((const float32 *)
          &(KxESPR_K_CoeffEngineSpeedEPP[0])), ((const float32 *)
          &(KtESPR_K_CoeffEngineSpeedEPP[0])), 13U);

    /* Outputs for Atomic SubSystem: '<S30>/GradientLimiter1' */
    /* Outputs for Atomic SubSystem: '<S108>/Limiter' */
    /* Switch: '<S126>/Switch1' incorporates:
     *  Constant: '<S112>/Calib'
     *  RelationalOperator: '<S126>/Relational Operator'
     *  Sum: '<S108>/Sum2'
     *  Switch: '<S30>/Switch'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    if (KeESPR_K_BufferBlendStepUpSize < (1.0F - ESPR_ac_DW.UnitDelay_DSTATE_h))
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = KeESPR_K_BufferBlendStepUpSize;
    }
    else
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 1.0F - ESPR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S126>/Switch1' */

    /* Switch: '<S126>/Switch' incorporates:
     *  Constant: '<S111>/Calib'
     *  Gain: '<S30>/Gain1'
     *  RelationalOperator: '<S126>/Relational Operator1'
     */
    if (VeESPR_K_Nidot_6Deg_Coeff <= (-KeESPR_K_BufferBlendStepDownSize))
    {
        VeESPR_K_Nidot_6Deg_Coeff = -KeESPR_K_BufferBlendStepDownSize;
    }

    /* End of Outputs for SubSystem: '<S108>/Limiter' */

    /* Sum: '<S108>/Sum3' incorporates:
     *  UnitDelay: '<S108>/Unit Delay'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_h += VeESPR_K_Nidot_6Deg_Coeff;

    /* End of Outputs for SubSystem: '<S30>/GradientLimiter1' */

    /* Product: '<S30>/Product10' incorporates:
     *  UnitDelay: '<S108>/Unit Delay'
     *  UnitDelay: '<S30>/Unit Delay2'
     */
    VeESPR_K_Ni_1rev_Coeff_2 = ESPR_ac_DW.UnitDelay_DSTATE_h *
        ESPR_ac_DW.UnitDelay2_DSTATE;

    /* Sum: '<S30>/Sum1' incorporates:
     *  Constant: '<S30>/ConstantValue10'
     */
    VeESPR_K_EPPCoefMath = (1.0F - VeESPR_K_Ni_1rev_Coeff_2) - rtb_Vector;

    /* Outputs for Atomic SubSystem: '<S30>/Limiter' */
    /* Switch: '<S119>/Switch1' incorporates:
     *  Constant: '<S30>/ConstantValue3'
     *  RelationalOperator: '<S119>/Relational Operator'
     *  Switch: '<S30>/Switch8'
     */
    if (1.0F < VeESPR_K_CoeffEngineSpeedEPP)
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 1.0F;
    }
    else
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = VeESPR_K_CoeffEngineSpeedEPP;
    }

    /* End of Switch: '<S119>/Switch1' */

    /* Switch: '<S119>/Switch' incorporates:
     *  Constant: '<S30>/ConstantValue1'
     *  RelationalOperator: '<S119>/Relational Operator1'
     */
    if (VeESPR_K_Nidot_6Deg_Coeff > 0.0F)
    {
        /* Switch: '<S119>/Switch' */
        rtb_Switch_l = VeESPR_K_Nidot_6Deg_Coeff;
    }
    else
    {
        /* Switch: '<S119>/Switch' */
        rtb_Switch_l = 0.0F;
    }

    /* End of Switch: '<S119>/Switch' */
    /* End of Outputs for SubSystem: '<S30>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S30>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S107>/Limiter' */
    /* Switch: '<S125>/Switch1' incorporates:
     *  Constant: '<S112>/Calib'
     *  Constant: '<S30>/ConstantValue16'
     *  RelationalOperator: '<S125>/Relational Operator'
     *  Sum: '<S107>/Sum2'
     *  Switch: '<S30>/Switch1'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    if (KeESPR_K_BufferBlendStepUpSize < (1.0F - ESPR_ac_DW.UnitDelay_DSTATE_b))
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = KeESPR_K_BufferBlendStepUpSize;
    }
    else
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 1.0F - ESPR_ac_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S125>/Switch1' */

    /* Switch: '<S125>/Switch' incorporates:
     *  Constant: '<S111>/Calib'
     *  Gain: '<S30>/Gain2'
     *  RelationalOperator: '<S125>/Relational Operator1'
     */
    if (VeESPR_K_Nidot_6Deg_Coeff <= (-KeESPR_K_BufferBlendStepDownSize))
    {
        /* Switch: '<S126>/Switch' */
        VeESPR_K_Nidot_6Deg_Coeff = -KeESPR_K_BufferBlendStepDownSize;
    }

    /* End of Switch: '<S125>/Switch' */
    /* End of Outputs for SubSystem: '<S107>/Limiter' */

    /* Sum: '<S107>/Sum3' incorporates:
     *  UnitDelay: '<S107>/Unit Delay'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_b += VeESPR_K_Nidot_6Deg_Coeff;

    /* End of Outputs for SubSystem: '<S30>/GradientLimiter' */

    /* Product: '<S30>/Product6' incorporates:
     *  UnitDelay: '<S107>/Unit Delay'
     */
    VeESPR_K_Ni_EPP_Coeff = rtb_Switch_l * ESPR_ac_DW.UnitDelay_DSTATE_b;

    /* Switch: '<S30>/Switch7' incorporates:
     *  Constant: '<S30>/ConstantValue13'
     *  Sum: '<S30>/Sum4'
     *  UnitDelay: '<S30>/Unit Delay2'
     */
    ESPR_ac_DW.UnitDelay2_DSTATE = (1.0F - rtb_Vector) - VeESPR_K_Ni_EPP_Coeff;

    /* Outputs for Atomic SubSystem: '<S30>/Limiter2' */
    /* Switch: '<S121>/Switch1' incorporates:
     *  Constant: '<S30>/ConstantValue7'
     *  RelationalOperator: '<S121>/Relational Operator'
     *  UnitDelay: '<S30>/Unit Delay2'
     */
    if (1.0F < ESPR_ac_DW.UnitDelay2_DSTATE)
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 1.0F;
    }
    else
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = ESPR_ac_DW.UnitDelay2_DSTATE;
    }

    /* End of Switch: '<S121>/Switch1' */

    /* Switch: '<S121>/Switch' incorporates:
     *  Constant: '<S30>/ConstantValue6'
     *  RelationalOperator: '<S121>/Relational Operator1'
     */
    if (VeESPR_K_Nidot_6Deg_Coeff <= 0.0F)
    {
        /* Switch: '<S126>/Switch' */
        VeESPR_K_Nidot_6Deg_Coeff = 0.0F;
    }

    /* End of Switch: '<S121>/Switch' */
    /* End of Outputs for SubSystem: '<S30>/Limiter2' */

    /* Product: '<S30>/Product7' incorporates:
     *  UnitDelay: '<S108>/Unit Delay'
     */
    VeESPR_K_Ni_1rev_Coeff = VeESPR_K_Nidot_6Deg_Coeff *
        ESPR_ac_DW.UnitDelay_DSTATE_h;

    /* Switch: '<S126>/Switch' incorporates:
     *  Constant: '<S30>/ConstantValue2'
     *  MinMax: '<S30>/MinMax1'
     *  Sum: '<S30>/Sum2'
     */
    VeESPR_K_Nidot_6Deg_Coeff = fmaxf(rtb_Vector, (1.0F - VeESPR_K_Ni_1rev_Coeff)
        - VeESPR_K_Ni_EPP_Coeff);

    /* Outputs for Atomic SubSystem: '<S30>/Limiter1' */
    /* Switch: '<S120>/Switch1' incorporates:
     *  Constant: '<S30>/ConstantValue5'
     *  RelationalOperator: '<S120>/Relational Operator'
     */
    if (1.0F < VeESPR_K_Nidot_6Deg_Coeff)
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 1.0F;
    }

    /* End of Switch: '<S120>/Switch1' */

    /* Switch: '<S120>/Switch' incorporates:
     *  Constant: '<S30>/ConstantValue4'
     *  RelationalOperator: '<S120>/Relational Operator1'
     */
    if (VeESPR_K_Nidot_6Deg_Coeff > 0.0F)
    {
        /* Switch: '<S120>/Switch' */
        VeESPR_K_Ni_6Deg_Coeff = VeESPR_K_Nidot_6Deg_Coeff;
    }
    else
    {
        /* Switch: '<S120>/Switch' */
        VeESPR_K_Ni_6Deg_Coeff = 0.0F;
    }

    /* End of Switch: '<S120>/Switch' */
    /* End of Outputs for SubSystem: '<S30>/Limiter1' */

    /* Switch: '<S30>/Switch12' incorporates:
     *  Constant: '<S30>/ConstantValue26'
     *  RelationalOperator: '<S30>/Comparison5'
     *  Sum: '<S30>/Sum8'
     */
    if (((VeESPR_K_Ni_6Deg_Coeff + VeESPR_K_Ni_EPP_Coeff) +
            VeESPR_K_Ni_1rev_Coeff) != 1.0F)
    {
        /* DataStoreWrite: '<S30>/DataStoreWrite' incorporates:
         *  Constant: '<S30>/ConstantValue27'
         *  DataStoreRead: '<S30>/DataStoreRead'
         *  Sum: '<S30>/Sum9'
         *  Switch: '<S30>/Switch12'
         */
        ESPR_ac_DW.NeESPR_Cnt_CoeffNotEqualOne++;
    }

    /* End of Switch: '<S30>/Switch12' */

    /* Outputs for Atomic SubSystem: '<S30>/GradientLimiter2' */
    /* Outputs for Atomic SubSystem: '<S109>/Limiter' */
    /* Switch: '<S127>/Switch1' incorporates:
     *  Constant: '<S114>/Calib'
     *  RelationalOperator: '<S127>/Relational Operator'
     *  Sum: '<S109>/Sum2'
     *  Switch: '<S30>/Switch3'
     *  UnitDelay: '<S109>/Unit Delay'
     */
    if (KeESPR_K_Nidot_BufferBlendStepUpSize < (1.0F -
            ESPR_ac_DW.UnitDelay_DSTATE_p))
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = KeESPR_K_Nidot_BufferBlendStepUpSize;
    }
    else
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 1.0F - ESPR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S127>/Switch1' */

    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S113>/Calib'
     *  Gain: '<S30>/Gain'
     *  RelationalOperator: '<S127>/Relational Operator1'
     */
    if (VeESPR_K_Nidot_6Deg_Coeff <= (-KeESPR_K_Nidot_BufferBlendStepDownSize))
    {
        /* Switch: '<S126>/Switch' */
        VeESPR_K_Nidot_6Deg_Coeff = -KeESPR_K_Nidot_BufferBlendStepDownSize;
    }

    /* End of Switch: '<S127>/Switch' */
    /* End of Outputs for SubSystem: '<S109>/Limiter' */

    /* Sum: '<S109>/Sum3' incorporates:
     *  UnitDelay: '<S109>/Unit Delay'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_p += VeESPR_K_Nidot_6Deg_Coeff;

    /* End of Outputs for SubSystem: '<S30>/GradientLimiter2' */

    /* Outputs for Atomic SubSystem: '<S30>/GradientLimiter3' */
    /* Outputs for Atomic SubSystem: '<S110>/Limiter' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  Constant: '<S114>/Calib'
     *  Constant: '<S30>/ConstantValue20'
     *  RelationalOperator: '<S128>/Relational Operator'
     *  Sum: '<S110>/Sum2'
     *  Switch: '<S30>/Switch2'
     *  UnitDelay: '<S110>/Unit Delay'
     */
    if (KeESPR_K_Nidot_BufferBlendStepUpSize < (1.0F -
            ESPR_ac_DW.UnitDelay_DSTATE_j))
    {
        /* Switch: '<S128>/Switch1' */
        rtb_Vector = KeESPR_K_Nidot_BufferBlendStepUpSize;
    }
    else
    {
        /* Switch: '<S128>/Switch1' */
        rtb_Vector = 1.0F - ESPR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S128>/Switch1' */

    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S113>/Calib'
     *  Gain: '<S30>/Gain3'
     *  RelationalOperator: '<S128>/Relational Operator1'
     */
    if (rtb_Vector <= (-KeESPR_K_Nidot_BufferBlendStepDownSize))
    {
        rtb_Vector = -KeESPR_K_Nidot_BufferBlendStepDownSize;
    }

    /* End of Switch: '<S128>/Switch' */
    /* End of Outputs for SubSystem: '<S110>/Limiter' */

    /* Sum: '<S110>/Sum3' incorporates:
     *  UnitDelay: '<S110>/Unit Delay'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_j += rtb_Vector;

    /* End of Outputs for SubSystem: '<S30>/GradientLimiter3' */

    /* Lookup_n-D: '<S117>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39'
     */
    rtb_Vector = look1_iflf_binlca_16a
        (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k, ((const float32 *)
          &(KxESPR_K_CoeffNidot6deg[0])), ((const float32 *)
          &(KtESPR_K_CoeffNidot6deg[0])), 11U);

    /* Product: '<S30>/Product11' incorporates:
     *  UnitDelay: '<S109>/Unit Delay'
     *  UnitDelay: '<S30>/Unit Delay4'
     */
    VeESPR_K_Nidot_1rev_Coeff_latchDecay = ESPR_ac_DW.UnitDelay_DSTATE_p *
        ESPR_ac_DW.UnitDelay4_DSTATE;

    /* Sum: '<S30>/Sum6' incorporates:
     *  Constant: '<S30>/ConstantValue24'
     */
    VeESPR_K_NiDotEPPCoefMath = (1.0F - VeESPR_K_Nidot_1rev_Coeff_latchDecay) -
        rtb_Vector;

    /* Switch: '<S126>/Switch' incorporates:
     *  Lookup_n-D: '<S118>/Vector'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39'
     *  Switch: '<S30>/Switch10'
     */
    VeESPR_K_Nidot_6Deg_Coeff = look1_iflf_binlca_16a
        (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k, ((const float32 *)
          &(KxESPR_K_CoeffNidotEPP[0])), ((const float32 *)
          &(KtESPR_K_CoeffNidotEPP[0])), 13U);

    /* Outputs for Atomic SubSystem: '<S30>/Limiter5' */
    /* Switch: '<S124>/Switch1' incorporates:
     *  Constant: '<S30>/ConstantValue21'
     *  RelationalOperator: '<S124>/Relational Operator'
     */
    if (1.0F < VeESPR_K_Nidot_6Deg_Coeff)
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 1.0F;
    }

    /* End of Switch: '<S124>/Switch1' */

    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S30>/ConstantValue18'
     *  RelationalOperator: '<S124>/Relational Operator1'
     */
    if (VeESPR_K_Nidot_6Deg_Coeff <= 0.0F)
    {
        /* Switch: '<S126>/Switch' */
        VeESPR_K_Nidot_6Deg_Coeff = 0.0F;
    }

    /* End of Switch: '<S124>/Switch' */
    /* End of Outputs for SubSystem: '<S30>/Limiter5' */

    /* Product: '<S30>/Product8' incorporates:
     *  UnitDelay: '<S110>/Unit Delay'
     */
    VeESPR_K_Nidot_EPP_Coeff = VeESPR_K_Nidot_6Deg_Coeff *
        ESPR_ac_DW.UnitDelay_DSTATE_j;

    /* Switch: '<S30>/Switch9' incorporates:
     *  Constant: '<S30>/ConstantValue25'
     *  Sum: '<S30>/Sum7'
     *  UnitDelay: '<S30>/Unit Delay4'
     */
    ESPR_ac_DW.UnitDelay4_DSTATE = (1.0F - rtb_Vector) -
        VeESPR_K_Nidot_EPP_Coeff;

    /* Outputs for Atomic SubSystem: '<S30>/Limiter3' */
    /* Switch: '<S122>/Switch1' incorporates:
     *  Constant: '<S30>/ConstantValue14'
     *  RelationalOperator: '<S122>/Relational Operator'
     *  UnitDelay: '<S30>/Unit Delay4'
     */
    if (1.0F < ESPR_ac_DW.UnitDelay4_DSTATE)
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 1.0F;
    }
    else
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = ESPR_ac_DW.UnitDelay4_DSTATE;
    }

    /* End of Switch: '<S122>/Switch1' */

    /* Switch: '<S122>/Switch' incorporates:
     *  Constant: '<S30>/ConstantValue11'
     *  RelationalOperator: '<S122>/Relational Operator1'
     */
    if (VeESPR_K_Nidot_6Deg_Coeff <= 0.0F)
    {
        /* Switch: '<S126>/Switch' */
        VeESPR_K_Nidot_6Deg_Coeff = 0.0F;
    }

    /* End of Switch: '<S122>/Switch' */
    /* End of Outputs for SubSystem: '<S30>/Limiter3' */

    /* Product: '<S30>/Product9' incorporates:
     *  UnitDelay: '<S109>/Unit Delay'
     */
    VeESPR_K_Nidot_1rev_Coeff = VeESPR_K_Nidot_6Deg_Coeff *
        ESPR_ac_DW.UnitDelay_DSTATE_p;

    /* Switch: '<S126>/Switch' incorporates:
     *  Constant: '<S30>/ConstantValue8'
     *  MinMax: '<S30>/MinMax2'
     *  Sum: '<S30>/Sum5'
     */
    VeESPR_K_Nidot_6Deg_Coeff = fmaxf(rtb_Vector, (1.0F -
        VeESPR_K_Nidot_EPP_Coeff) - VeESPR_K_Nidot_1rev_Coeff);

    /* Outputs for Atomic SubSystem: '<S30>/Limiter4' */
    /* Switch: '<S123>/Switch1' incorporates:
     *  Constant: '<S30>/ConstantValue17'
     *  RelationalOperator: '<S123>/Relational Operator'
     */
    if (1.0F < VeESPR_K_Nidot_6Deg_Coeff)
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Product: '<S74>/Multiplication3'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 1.0F;
    }

    /* End of Switch: '<S123>/Switch1' */

    /* Switch: '<S123>/Switch' incorporates:
     *  Constant: '<S30>/ConstantValue9'
     *  RelationalOperator: '<S123>/Relational Operator1'
     */
    if (VeESPR_K_Nidot_6Deg_Coeff <= 0.0F)
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Switch: '<S123>/Switch'
         */
        VeESPR_K_Nidot_6Deg_Coeff = 0.0F;
    }

    /* End of Switch: '<S123>/Switch' */
    /* End of Outputs for SubSystem: '<S30>/Limiter4' */

    /* Product: '<S30>/Product' */
    VeESPR_n_Ni6DegFactr = ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k *
        VeESPR_K_Ni_6Deg_Coeff;

    /* Switch: '<S30>/Switch5' incorporates:
     *  UnitDelay: '<S30>/Unit Delay1'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE =
        ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b;

    /* Product: '<S30>/Product1' incorporates:
     *  UnitDelay: '<S30>/Unit Delay1'
     */
    VeESPR_n_NiEPPFactr = ESPR_ac_DW.UnitDelay1_DSTATE * VeESPR_K_Ni_EPP_Coeff;

    /* Switch: '<S30>/Switch4' incorporates:
     *  UnitDelay: '<S30>/Unit Delay'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_k =
        ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a;

    /* Product: '<S30>/Product2' incorporates:
     *  UnitDelay: '<S30>/Unit Delay'
     */
    VeESPR_n_Ni1revFactr = ESPR_ac_DW.UnitDelay_DSTATE_k *
        VeESPR_K_Ni_1rev_Coeff;

    /* Product: '<S30>/Product3' */
    VeESPR_dn_NiDot6Deg_Fctr = VeESPR_K_Nidot_6Deg_Coeff *
        ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o;

    /* Switch: '<S30>/Switch11' incorporates:
     *  UnitDelay: '<S30>/Unit Delay5'
     */
    ESPR_ac_DW.UnitDelay5_DSTATE =
        ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e;

    /* Product: '<S30>/Product4' incorporates:
     *  UnitDelay: '<S30>/Unit Delay5'
     */
    VeESPR_dn_NiDotEPP_Fctr = ESPR_ac_DW.UnitDelay5_DSTATE *
        VeESPR_K_Nidot_EPP_Coeff;

    /* Switch: '<S30>/Switch6' incorporates:
     *  UnitDelay: '<S30>/Unit Delay3'
     */
    ESPR_ac_DW.UnitDelay3_DSTATE =
        ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j;

    /* Product: '<S30>/Product5' incorporates:
     *  UnitDelay: '<S30>/Unit Delay3'
     */
    VeESPR_dn_NiDot1rev_Fctr = ESPR_ac_DW.UnitDelay3_DSTATE *
        VeESPR_K_Nidot_1rev_Coeff;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPD_DiagProcessEng_FastTEF'
     */
    /* Outputs for Atomic SubSystem: '<S25>/BufferCrankPerformance' */
    /* Outputs for Atomic SubSystem: '<S129>/BufferCrankPerformance' */
    /* RelationalOperator: '<S30>/Comparison4' incorporates:
     *  Merge: '<Root>/Merge_26_Irv'
     *  RelationalOperator: '<S141>/Comparison4'
     *  RelationalOperator: '<S29>/Comparison1'
     *  RelationalOperator: '<S29>/Comparison4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39'
     */
    VeESPC_b_EngineSpeed_MCPFA_tmp =
        Rte_IrvRead_ESPR_FastTEF_VeESPI_e_EngineSpeedStatus_write_IRV();

    /* End of Outputs for SubSystem: '<S129>/BufferCrankPerformance' */
    /* End of Outputs for SubSystem: '<S25>/BufferCrankPerformance' */

    /* Logic: '<S30>/Logical' incorporates:
     *  Constant: '<S106>/Constant'
     *  RelationalOperator: '<S30>/Comparison4'
     */
    VeESPC_b_EngineSpeed_MCPFA = (((uint32)VeESPC_b_EngineSpeed_MCPFA_tmp) !=
        CeESPR_e_EngSpdNormal);

    /* RelationalOperator: '<S32>/Comparison1' incorporates:
     *  DataTypeConversion: '<S31>/DataTypeConversion'
     *  Merge: '<Root>/Merge_23'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39'
     */
    VeESPC_e_ECMCrankPhase =
        Rte_IrvRead_ESPR_FastTEF_VeESPR_e_ECMCrankPhase_init_write_IRV();

    /* MultiPortSwitch: '<S32>/MultiportSwitch' incorporates:
     *  Constant: '<S61>/Calib'
     */
    switch (KeESPR_i_CrankSpeedType)
    {
      case 1:
        /* MultiPortSwitch: '<S32>/MultiportSwitch' */
        rtb_Vector = ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k;
        break;

      case 2:
        /* MultiPortSwitch: '<S32>/MultiportSwitch' */
        rtb_Vector = ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b;
        break;

      default:
        /* MultiPortSwitch: '<S32>/MultiportSwitch' */
        rtb_Vector = ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a;
        break;
    }

    /* End of MultiPortSwitch: '<S32>/MultiportSwitch' */

    /* Outputs for Atomic SubSystem: '<S32>/Hysteresis3' */
    /* Switch: '<S54>/Switch1' incorporates:
     *  Constant: '<S54>/Constant Value'
     *  Constant: '<S66>/Calib'
     *  Constant: '<S67>/Calib'
     *  RelationalOperator: '<S54>/Greater  Than'
     *  RelationalOperator: '<S54>/Greater  Than1'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    if (rtb_Vector > KeESPR_n_PrepStopSpeedHystRSP)
    {
        ESPR_ac_DW.UnitDelay_DSTATE_p3 = true;
    }
    else
    {
        ESPR_ac_DW.UnitDelay_DSTATE_p3 = ((rtb_Vector >=
            KeESPR_n_PrepStopSpeedHystLSP) && (ESPR_ac_DW.UnitDelay_DSTATE_p3));
    }

    /* End of Switch: '<S54>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/Hysteresis3' */

    /* Logic: '<S32>/Logical8' incorporates:
     *  UnitDelay: '<S54>/Unit Delay'
     */
    VeESPR_b_PrepStopSpeedTest = !ESPR_ac_DW.UnitDelay_DSTATE_p3;

    /* Product: '<S48>/Multiplication3' incorporates:
     *  Constant: '<S48>/Constant Value1'
     *  Constant: '<S51>/Calib'
     *  Product: '<S74>/Multiplication3'
     */
    rtb_Switch_l = HeESPR_t_FastTEF / 2.0F;

    /* Outputs for Atomic SubSystem: '<S32>/ProtectedDivision' */
    /* Switch: '<S70>/Switch1' incorporates:
     *  Constant: '<S60>/Calib'
     *  Constant: '<S70>/Constant Value1'
     *  RelationalOperator: '<S70>/Not Equal1'
     */
    if (KeESPR_f_LowPassFreq != 0.0F)
    {
        /* Switch: '<S70>/Switch1' incorporates:
         *  Constant: '<S32>/ConstantValue'
         *  Product: '<S70>/Division'
         */
        rtb_Switch1_dp = 1.0F / KeESPR_f_LowPassFreq;
    }
    else
    {
        /* Switch: '<S70>/Switch1' */
        rtb_Switch1_dp = 3.402823466E+38F;
    }

    /* End of Switch: '<S70>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/ProtectedDivision' */

    /* Product: '<S48>/Multiplication2' incorporates:
     *  Product: '<S48>/Multiplication3'
     *  Product: '<S48>/Multiplication4'
     *  Sum: '<S48>/Summation'
     *  Sum: '<S48>/Summation1'
     *  Sum: '<S48>/Summation2'
     *  UnitDelay: '<S48>/Unit Delay'
     *  UnitDelay: '<S48>/Unit Delay1'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE_c = ((rtb_Vector - ((rtb_Switch_l -
        rtb_Switch1_dp) * ESPR_ac_DW.UnitDelay1_DSTATE_c)) -
        ESPR_ac_DW.UnitDelay_DSTATE_e) / (rtb_Switch_l + rtb_Switch1_dp);

    /* Abs: '<S32>/Abs1' incorporates:
     *  UnitDelay: '<S48>/Unit Delay1'
     */
    rtb_Switch1_dp = fabsf(ESPR_ac_DW.UnitDelay1_DSTATE_c);

    /* Outputs for Atomic SubSystem: '<S32>/Hysteresis4' */
    /* Switch: '<S55>/Switch1' incorporates:
     *  Constant: '<S55>/Constant Value'
     *  Constant: '<S64>/Calib'
     *  Constant: '<S65>/Calib'
     *  RelationalOperator: '<S55>/Greater  Than'
     *  RelationalOperator: '<S55>/Greater  Than1'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    if (rtb_Switch1_dp > KeESPR_n_PrepStopAccHystRSP)
    {
        ESPR_ac_DW.UnitDelay_DSTATE_ch = true;
    }
    else
    {
        ESPR_ac_DW.UnitDelay_DSTATE_ch = ((rtb_Switch1_dp >=
            KeESPR_n_PrepStopAccHystLSP) && (ESPR_ac_DW.UnitDelay_DSTATE_ch));
    }

    /* End of Switch: '<S55>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/Hysteresis4' */

    /* Logic: '<S32>/Logical9' incorporates:
     *  UnitDelay: '<S55>/Unit Delay'
     */
    VeESPR_b_PrepStopAccTest = !ESPR_ac_DW.UnitDelay_DSTATE_ch;

    /* Logic: '<S32>/Logical' incorporates:
     *  Constant: '<S49>/Constant'
     *  RelationalOperator: '<S32>/Comparison5'
     */
    VeESPR_b_PrepStopCondition = (((((uint32)
        ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bw) ==
        CeESSR_e_PrepForStopSt) && (VeESPR_b_PrepStopSpeedTest)) &&
        (VeESPR_b_PrepStopAccTest));

    /* Outputs for Atomic SubSystem: '<S32>/Hysteresis2' */
    /* Switch: '<S53>/Switch1' incorporates:
     *  Constant: '<S53>/Constant Value'
     *  Constant: '<S68>/Calib'
     *  Constant: '<S69>/Calib'
     *  RelationalOperator: '<S53>/Greater  Than'
     *  RelationalOperator: '<S53>/Greater  Than1'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    if (rtb_Vector > KeESPR_n_SpeedHystRSP)
    {
        ESPR_ac_DW.UnitDelay_DSTATE_fn = true;
    }
    else
    {
        ESPR_ac_DW.UnitDelay_DSTATE_fn = ((rtb_Vector >= KeESPR_n_SpeedHystLSP) &&
            (ESPR_ac_DW.UnitDelay_DSTATE_fn));
    }

    /* End of Switch: '<S53>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/Hysteresis2' */

    /* Logic: '<S32>/Logical1' incorporates:
     *  UnitDelay: '<S53>/Unit Delay'
     */
    VeESPR_b_SpeedTest = !ESPR_ac_DW.UnitDelay_DSTATE_fn;

    /* Outputs for Atomic SubSystem: '<S32>/Hysteresis1' */
    /* Switch: '<S52>/Switch1' incorporates:
     *  Constant: '<S52>/Constant Value'
     *  Constant: '<S58>/Calib'
     *  Constant: '<S59>/Calib'
     *  RelationalOperator: '<S52>/Greater  Than'
     *  RelationalOperator: '<S52>/Greater  Than1'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    if (rtb_Switch1_dp > KeESPR_dn_AccHystRSP)
    {
        ESPR_ac_DW.UnitDelay_DSTATE_fuq = true;
    }
    else
    {
        ESPR_ac_DW.UnitDelay_DSTATE_fuq = ((rtb_Switch1_dp >=
            KeESPR_dn_AccHystLSP) && (ESPR_ac_DW.UnitDelay_DSTATE_fuq));
    }

    /* End of Switch: '<S52>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/Hysteresis1' */

    /* Logic: '<S32>/Logical3' incorporates:
     *  UnitDelay: '<S52>/Unit Delay'
     */
    VeESPR_b_AccTest = !ESPR_ac_DW.UnitDelay_DSTATE_fuq;

    /* RelationalOperator: '<S32>/Comparison2' incorporates:
     *  Constant: '<S63>/Calib'
     */
    VeESPR_b_MinSpeedTest = (rtb_Vector > KeESPR_n_MinEngineSpeed);

    /* Outputs for Atomic SubSystem: '<S32>/CountDownResetEnabled' */
    /* Switch: '<S47>/Switch1' incorporates:
     *  Abs: '<S32>/Abs'
     *  Constant: '<S47>/Constant Value'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S62>/Calib'
     *  Logic: '<S32>/Logical6'
     *  RelationalOperator: '<S32>/Comparison3'
     *  RelationalOperator: '<S47>/Greater  Than'
     *  Switch: '<S47>/Switch2'
     *  UnitDelay: '<S47>/Unit Delay'
     */
    if (fabsf(rtb_Vector) >= KeESPR_n_MaxEngineOffSpeed)
    {
        ESPR_ac_DW.UnitDelay_DSTATE_cl = KeESPR_Cnt_EngineOffTimerIV;
    }
    else
    {
        if (((sint32)ESPR_ac_DW.UnitDelay_DSTATE_cl) > 0)
        {
            /* UnitDelay: '<S47>/Unit Delay' incorporates:
             *  Constant: '<S47>/Constant Value1'
             *  Sum: '<S47>/Subtraction'
             *  Switch: '<S47>/Switch2'
             */
            ESPR_ac_DW.UnitDelay_DSTATE_cl = (uint16)((sint32)(((sint32)
                ESPR_ac_DW.UnitDelay_DSTATE_cl) - 1));
        }
    }

    /* End of Switch: '<S47>/Switch1' */

    /* Logic: '<S32>/Logical7' incorporates:
     *  Constant: '<S47>/Constant Value2'
     *  RelationalOperator: '<S47>/Greater  Than1'
     *  UnitDelay: '<S47>/Unit Delay'
     */
    VeESPR_b_EngineOffTest = (((sint32)ESPR_ac_DW.UnitDelay_DSTATE_cl) <= 0);

    /* End of Outputs for SubSystem: '<S32>/CountDownResetEnabled' */

    /* Logic: '<S32>/Logical2' incorporates:
     *  Logic: '<S32>/Logical5'
     */
    VeESPR_b_SpeedCondition = (((VeESPR_b_SpeedTest) && (VeESPR_b_AccTest)) &&
        ((VeESPR_b_MinSpeedTest) || (VeESPR_b_EngineOffTest)));

    /* Logic: '<S32>/Logical4' */
    VeESPR_b_SpeedConditionsTest = ((VeESPR_b_PrepStopCondition) ||
        (VeESPR_b_SpeedCondition));

    /* Logic: '<S32>/AND7' incorporates:
     *  Constant: '<S50>/Constant'
     *  Constant: '<S57>/Calib'
     *  Logic: '<S32>/AND4'
     *  RelationalOperator: '<S32>/Comparison1'
     */
    VeESPR_b_PhaseSyncEnabled = (((KeESPR_b_EngAngleSyncPhase) &&
        (CeESPR_e_NotInitialized != ((uint32)VeESPC_e_ECMCrankPhase))) &&
        (VeESPR_b_SpeedConditionsTest));

    /* RelationalOperator: '<S32>/Comparison4' incorporates:
     *  UnitDelay: '<S32>/Unit Delay'
     */
    VeESPR_b_CrankPhaseTrigger = (VeESPC_e_ECMCrankPhase !=
        ((TeESPR_e_ECMCrankPhase)ESPR_ac_DW.UnitDelay_DSTATE_g0));

    /* Logic: '<S32>/AND1' */
    rtb_AND1 = (((ESPR_ac_B.VariantMergeForOutportVeESPD_b_BuffrCr_e) ||
                 (VeESPC_b_EngineSpeed_MCPFA)) ||
                (ESPR_ac_B.VariantMergeForOutportVeESPR_b_CrnkSenso));

    /* Chart: '<S28>/Sync_Angle_Procedure' incorporates:
     *  Constant: '<S34>/Calib'
     *  Constant: '<S35>/Calib'
     *  Constant: '<S36>/Calib'
     */
    /* Gateway: ESPR_FastTEF/ESPC_ProcessEng_FastTEF/AutoStopAnglePos/Sync_Angle_Procedure */
    /* During: ESPR_FastTEF/ESPC_ProcessEng_FastTEF/AutoStopAnglePos/Sync_Angle_Procedure */
    if (((uint32)ESPR_ac_DW.is_active_c35_ESPR_ac) == 0U)
    {
        /* Entry: ESPR_FastTEF/ESPC_ProcessEng_FastTEF/AutoStopAnglePos/Sync_Angle_Procedure */
        ESPR_ac_DW.is_active_c35_ESPR_ac = 1U;

        /* Entry Internal: ESPR_FastTEF/ESPC_ProcessEng_FastTEF/AutoStopAnglePos/Sync_Angle_Procedure */
        /* Transition: '<S45>:576' */
        /* Transition: '<S45>:978' */
        ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts = 0U;
        ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = false;
        ESPR_ac_B.LeESPR_phi_FinalOffset = 1.0F;
        ESPR_ac_B.LeESPR_cnt_OffsetAttempts = 0U;
        ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts = 0U;
        ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Init_State;

        /* Entry 'Init_State': '<S45>:578' */
        ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
    }
    else
    {
        guard1 = false;
        guard2 = false;
        guard3 = false;
        switch (ESPR_ac_DW.is_c35_ESPR_ac)
        {
          case ESPR_ac_IN_Init_State:
            /* During 'Init_State': '<S45>:578' */
            if ((((VeESPR_b_PhaseSyncEnabled) && (!rtb_AND1)) &&
                    (!TmpSignalConversionAtTmpVM_FcnCallSub_a2)) &&
                    (!KeESPR_b_SyncLogicReset))
            {
                /* Transition: '<S45>:848' */
                ESPR_ac_B.LeESPR_b_PhaseLearnActive = true;
                ESPR_ac_B.LeESPR_cnt_AttemptSamples = 0U;
                ESPR_ac_B.LeESPR_cnt_NotSyncedSamples = 0U;
                ESPR_ac_B.LeESPR_cnt_SyncedSamples = 0U;
                if (VeESPR_b_CrankPhaseTrigger)
                {
                    /* Transition: '<S45>:936' */
                    /* Transition: '<S45>:908' */
                    tmp = ((sint32)ESPR_ac_B.LeESPR_cnt_AttemptSamples) + 1;
                    if ((((sint32)ESPR_ac_B.LeESPR_cnt_AttemptSamples) + 1) >
                            255)
                    {
                        tmp = 255;
                    }

                    ESPR_ac_B.LeESPR_cnt_AttemptSamples = (uint8)tmp;
                    if ((((((((uint32)VeESPC_e_ECMCrankPhase) ==
                             CeESPR_e_FirstQuadrant) && (360.0F <=
                             ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                           &&
                            (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p <
                             (KeESPR_phi_AngleRange + 360.0F))) || (((((uint32)
                              VeESPC_e_ECMCrankPhase) == CeESPR_e_SecondQuadrant)
                            && (540.0F <=
                                ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                           &&
                            (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p <
                             (KeESPR_phi_AngleRange + 540.0F)))) || (((((uint32)
                             VeESPC_e_ECMCrankPhase) == CeESPR_e_ThirdQuadrant) &&
                           (0.0F <=
                            ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                          && (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                              < KeESPR_phi_AngleRange))) || (((((uint32)
                            VeESPC_e_ECMCrankPhase) == CeESPR_e_FourthQuadrant) &&
                          (180.0F <=
                            ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                         && (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p <
                             (KeESPR_phi_AngleRange + 180.0F))))
                    {
                        /* Transition: '<S45>:895' */
                        /* Transition: '<S45>:915' */
                        tmp = ((sint32)ESPR_ac_B.LeESPR_cnt_NotSyncedSamples) +
                            1;
                        if ((((sint32)ESPR_ac_B.LeESPR_cnt_NotSyncedSamples) + 1)
                            > 255)
                        {
                            tmp = 255;
                        }

                        ESPR_ac_B.LeESPR_cnt_NotSyncedSamples = (uint8)tmp;
                    }
                    else
                    {
                        /* Transition: '<S45>:913' */
                        if ((((((((uint32)VeESPC_e_ECMCrankPhase) ==
                                 CeESPR_e_FirstQuadrant) && (0.0F <=
                                 ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                               &&
                                (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                                 < KeESPR_phi_AngleRange)) || (((((uint32)
                                  VeESPC_e_ECMCrankPhase) ==
                                 CeESPR_e_SecondQuadrant) && (180.0F <=
                                 ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                               &&
                                (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                                 < (KeESPR_phi_AngleRange + 180.0F)))) ||
                                (((((uint32)VeESPC_e_ECMCrankPhase) ==
                                   CeESPR_e_ThirdQuadrant) && (360.0F <=
                                ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                                 &&
                                 (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                                  < (KeESPR_phi_AngleRange + 360.0F)))) ||
                                (((((uint32)VeESPC_e_ECMCrankPhase) ==
                                   CeESPR_e_FourthQuadrant) && (540.0F <=
                                ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                                 &&
                                 (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                                  < (KeESPR_phi_AngleRange + 540.0F))))
                        {
                            /* Transition: '<S45>:910' */
                            /* Transition: '<S45>:914' */
                            tmp = ((sint32)ESPR_ac_B.LeESPR_cnt_SyncedSamples) +
                                1;
                            if ((((sint32)ESPR_ac_B.LeESPR_cnt_SyncedSamples) +
                                    1) > 255)
                            {
                                tmp = 255;
                            }

                            ESPR_ac_B.LeESPR_cnt_SyncedSamples = (uint8)tmp;

                            /* Transition: '<S45>:918' */
                        }
                        else
                        {
                            /* Transition: '<S45>:896' */
                        }

                        /* Transition: '<S45>:921' */
                    }

                    if (ESPR_ac_B.LeESPR_cnt_AttemptSamples >=
                            KeESPR_Cnt_AttemptSamples)
                    {
                        /* Transition: '<S45>:931' */
                        /* Transition: '<S45>:928' */
                        /*  Phase Determination  */
                        if (ESPR_ac_B.LeESPR_cnt_NotSyncedSamples ==
                                ESPR_ac_B.LeESPR_cnt_SyncedSamples)
                        {
                            /* Transition: '<S45>:924' */
                            if (ESPR_ac_B.LeESPR_cnt_AttemptSamples ==
                                    KeESPR_Cnt_AttemptSamples)
                            {
                                /* Transition: '<S45>:923' */
                                /* Transition: '<S45>:922' */
                                /*  Make an addtional check to determine offset  */
                                /* Transition: '<S45>:917' */
                                ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Wait;
                            }
                            else
                            {
                                /* Transition: '<S45>:935' */
                                ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = false;

                                /* Transition: '<S45>:942' */
                                guard2 = true;
                            }
                        }
                        else
                        {
                            /* Transition: '<S45>:929' */
                            if (ESPR_ac_B.LeESPR_cnt_SyncedSamples >
                                    ESPR_ac_B.LeESPR_cnt_NotSyncedSamples)
                            {
                                /* Transition: '<S45>:937' */
                                /* Transition: '<S45>:939' */
                                ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = true;
                                ESPR_ac_B.LeESPR_phi_TempOffset = 0.0F;
                                tmp = ((sint32)
                                       ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts) +
                                    1;
                                if ((((sint32)
                                        ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts) +
                                     1) > 255)
                                {
                                    tmp = 255;
                                }

                                ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts = (uint8)
                                    tmp;

                                /* Transition: '<S45>:949' */
                            }
                            else
                            {
                                /* Transition: '<S45>:938' */
                                ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = true;
                                ESPR_ac_B.LeESPR_phi_TempOffset = 360.0F;
                                tmp = ((sint32)
                                       ESPR_ac_B.LeESPR_cnt_OffsetAttempts) + 1;
                                if ((((sint32)
                                        ESPR_ac_B.LeESPR_cnt_OffsetAttempts) + 1)
                                    > 255)
                                {
                                    tmp = 255;
                                }

                                ESPR_ac_B.LeESPR_cnt_OffsetAttempts = (uint8)tmp;
                            }

                            guard2 = true;
                        }
                    }
                    else
                    {
                        /* Transition: '<S45>:926' */
                        /* Transition: '<S45>:917' */
                        ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Wait;
                    }
                }
                else
                {
                    /* Transition: '<S45>:898' */
                    ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Wait;
                }
            }
            break;

          case ESPR_ac_IN_PHASE_CORRECTION:
            /* During 'PHASE_CORRECTION': '<S45>:780' */
            if (rtb_AND1 || (KeESPR_b_SyncLogicReset))
            {
                /* Transition: '<S45>:873' */
                if (KeESPR_b_SyncLogicReset)
                {
                    /* Transition: '<S45>:983' */
                    /* Transition: '<S45>:984' */
                    /* Transition: '<S45>:978' */
                    ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts = 0U;
                    ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = false;
                    ESPR_ac_B.LeESPR_phi_FinalOffset = 1.0F;
                    ESPR_ac_B.LeESPR_cnt_OffsetAttempts = 0U;
                    ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts = 0U;
                }
                else
                {
                    /* Transition: '<S45>:872' */
                }

                ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Init_State;

                /* Entry 'Init_State': '<S45>:578' */
                ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
            }
            else
            {
                if (((((uint32)
                        ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bw) !=
                        CeESSR_e_DisableFuelSt) && (((uint32)
                        ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bw) !=
                        CeESSR_e_RampDownSt)) && (((uint32)
                        ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bw) !=
                        CeESSR_e_FinishStopSt))
                {
                    /* Transition: '<S45>:833' */
                    /* Transition: '<S45>:880' */
                    ESPR_ac_B.LeESPR_phi_FinalOffset =
                        ESPR_ac_B.LeESPR_phi_TempOffset;

                    /* Transition: '<S45>:834' */
                    ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_SYNC_CONFIRMED;

                    /* Entry 'SYNC_CONFIRMED': '<S45>:777' */
                    ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
                }
            }
            break;

          case ESPR_ac_IN_SYNC_CONFIRMED:
            /* During 'SYNC_CONFIRMED': '<S45>:777' */
            if (rtb_AND1 || (KeESPR_b_SyncLogicReset))
            {
                /* Transition: '<S45>:584' */
                /* Transition: '<S45>:808' */
                /* Transition: '<S45>:869' */
                /* Transition: '<S45>:843' */
                if (KeESPR_b_SyncLogicReset)
                {
                    /* Transition: '<S45>:981' */
                    /* Transition: '<S45>:982' */
                    /* Transition: '<S45>:978' */
                    ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts = 0U;
                    ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = false;
                    ESPR_ac_B.LeESPR_phi_FinalOffset = 1.0F;
                    ESPR_ac_B.LeESPR_cnt_OffsetAttempts = 0U;
                    ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts = 0U;
                }
                else
                {
                    /* Transition: '<S45>:587' */
                }

                ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Init_State;

                /* Entry 'Init_State': '<S45>:578' */
                ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
            }
            break;

          default:
            /* During 'Wait': '<S45>:933' */
            if (((rtb_AND1 || TmpSignalConversionAtTmpVM_FcnCallSub_a2) ||
                    (!VeESPR_b_PhaseSyncEnabled)) || (KeESPR_b_SyncLogicReset))
            {
                /* Transition: '<S45>:903' */
                guard1 = true;
            }
            else
            {
                if (VeESPR_b_CrankPhaseTrigger)
                {
                    /* Transition: '<S45>:930' */
                    /* Transition: '<S45>:908' */
                    tmp = ((sint32)ESPR_ac_B.LeESPR_cnt_AttemptSamples) + 1;
                    if ((((sint32)ESPR_ac_B.LeESPR_cnt_AttemptSamples) + 1) >
                            255)
                    {
                        tmp = 255;
                    }

                    ESPR_ac_B.LeESPR_cnt_AttemptSamples = (uint8)tmp;
                    if ((((((((uint32)VeESPC_e_ECMCrankPhase) ==
                             CeESPR_e_FirstQuadrant) && (360.0F <=
                             ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                           &&
                            (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p <
                             (KeESPR_phi_AngleRange + 360.0F))) || (((((uint32)
                              VeESPC_e_ECMCrankPhase) == CeESPR_e_SecondQuadrant)
                            && (540.0F <=
                                ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                           &&
                            (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p <
                             (KeESPR_phi_AngleRange + 540.0F)))) || (((((uint32)
                             VeESPC_e_ECMCrankPhase) == CeESPR_e_ThirdQuadrant) &&
                           (0.0F <=
                            ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                          && (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                              < KeESPR_phi_AngleRange))) || (((((uint32)
                            VeESPC_e_ECMCrankPhase) == CeESPR_e_FourthQuadrant) &&
                          (180.0F <=
                            ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                         && (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p <
                             (KeESPR_phi_AngleRange + 180.0F))))
                    {
                        /* Transition: '<S45>:895' */
                        /* Transition: '<S45>:915' */
                        tmp = ((sint32)ESPR_ac_B.LeESPR_cnt_NotSyncedSamples) +
                            1;
                        if ((((sint32)ESPR_ac_B.LeESPR_cnt_NotSyncedSamples) + 1)
                            > 255)
                        {
                            tmp = 255;
                        }

                        ESPR_ac_B.LeESPR_cnt_NotSyncedSamples = (uint8)tmp;
                    }
                    else
                    {
                        /* Transition: '<S45>:913' */
                        if ((((((((uint32)VeESPC_e_ECMCrankPhase) ==
                                 CeESPR_e_FirstQuadrant) && (0.0F <=
                                 ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                               &&
                                (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                                 < KeESPR_phi_AngleRange)) || (((((uint32)
                                  VeESPC_e_ECMCrankPhase) ==
                                 CeESPR_e_SecondQuadrant) && (180.0F <=
                                 ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                               &&
                                (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                                 < (KeESPR_phi_AngleRange + 180.0F)))) ||
                                (((((uint32)VeESPC_e_ECMCrankPhase) ==
                                   CeESPR_e_ThirdQuadrant) && (360.0F <=
                                ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                                 &&
                                 (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                                  < (KeESPR_phi_AngleRange + 360.0F)))) ||
                                (((((uint32)VeESPC_e_ECMCrankPhase) ==
                                   CeESPR_e_FourthQuadrant) && (540.0F <=
                                ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p))
                                 &&
                                 (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p
                                  < (KeESPR_phi_AngleRange + 540.0F))))
                        {
                            /* Transition: '<S45>:910' */
                            /* Transition: '<S45>:914' */
                            tmp = ((sint32)ESPR_ac_B.LeESPR_cnt_SyncedSamples) +
                                1;
                            if ((((sint32)ESPR_ac_B.LeESPR_cnt_SyncedSamples) +
                                    1) > 255)
                            {
                                tmp = 255;
                            }

                            ESPR_ac_B.LeESPR_cnt_SyncedSamples = (uint8)tmp;

                            /* Transition: '<S45>:918' */
                        }
                        else
                        {
                            /* Transition: '<S45>:896' */
                        }

                        /* Transition: '<S45>:921' */
                    }

                    if (ESPR_ac_B.LeESPR_cnt_AttemptSamples >=
                            KeESPR_Cnt_AttemptSamples)
                    {
                        /* Transition: '<S45>:931' */
                        /* Transition: '<S45>:928' */
                        /*  Phase Determination  */
                        if (ESPR_ac_B.LeESPR_cnt_NotSyncedSamples ==
                                ESPR_ac_B.LeESPR_cnt_SyncedSamples)
                        {
                            /* Transition: '<S45>:924' */
                            if (ESPR_ac_B.LeESPR_cnt_AttemptSamples ==
                                    KeESPR_Cnt_AttemptSamples)
                            {
                                /* Transition: '<S45>:923' */
                                /* Transition: '<S45>:922' */
                                /*  Make an addtional check to determine offset  */
                                /* Transition: '<S45>:917' */
                                ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Wait;
                            }
                            else
                            {
                                /* Transition: '<S45>:935' */
                                ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = false;

                                /* Transition: '<S45>:942' */
                                guard3 = true;
                            }
                        }
                        else
                        {
                            /* Transition: '<S45>:929' */
                            if (ESPR_ac_B.LeESPR_cnt_SyncedSamples >
                                    ESPR_ac_B.LeESPR_cnt_NotSyncedSamples)
                            {
                                /* Transition: '<S45>:937' */
                                /* Transition: '<S45>:939' */
                                ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = true;
                                ESPR_ac_B.LeESPR_phi_TempOffset = 0.0F;
                                tmp = ((sint32)
                                       ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts) +
                                    1;
                                if ((((sint32)
                                        ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts) +
                                     1) > 255)
                                {
                                    tmp = 255;
                                }

                                ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts = (uint8)
                                    tmp;

                                /* Transition: '<S45>:949' */
                            }
                            else
                            {
                                /* Transition: '<S45>:938' */
                                ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = true;
                                ESPR_ac_B.LeESPR_phi_TempOffset = 360.0F;
                                tmp = ((sint32)
                                       ESPR_ac_B.LeESPR_cnt_OffsetAttempts) + 1;
                                if ((((sint32)
                                        ESPR_ac_B.LeESPR_cnt_OffsetAttempts) + 1)
                                    > 255)
                                {
                                    tmp = 255;
                                }

                                ESPR_ac_B.LeESPR_cnt_OffsetAttempts = (uint8)tmp;
                            }

                            guard3 = true;
                        }
                    }
                    else
                    {
                        /* Transition: '<S45>:926' */
                        /* Transition: '<S45>:917' */
                        ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Wait;
                    }
                }
            }
            break;
        }

        if (guard3)
        {
            /* Transition: '<S45>:945' */
            tmp = ((sint32)ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts) + 1;
            if ((((sint32)ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts) + 1) >
                    255)
            {
                tmp = 255;
            }

            ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts = (uint8)tmp;
            if ((ESPR_ac_B.LeESPR_phi_FinalOffset == 1.0F) &&
                    (ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn))
            {
                /* Transition: '<S45>:947' */
                /* Transition: '<S45>:952' */
                ESPR_ac_B.LeESPR_phi_FinalOffset =
                    ESPR_ac_B.LeESPR_phi_TempOffset;

                /* Transition: '<S45>:950' */
            }
            else
            {
                /* Transition: '<S45>:944' */
            }

            if (ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts >=
                    KeESPR_Cnt_MaxLearnAttempts)
            {
                /* Transition: '<S45>:951' */
                if (((ESPR_ac_B.LeESPR_cnt_OffsetAttempts >
                        ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts) &&
                        (ESPR_ac_B.LeESPR_phi_FinalOffset == 0.0F)) ||
                        ((ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts >
                          ESPR_ac_B.LeESPR_cnt_OffsetAttempts) &&
                         (ESPR_ac_B.LeESPR_phi_FinalOffset == 360.0F)))
                {
                    /* Transition: '<S45>:943' */
                    ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_PHASE_CORRECTION;

                    /* Entry 'PHASE_CORRECTION': '<S45>:780' */
                    ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
                }
                else
                {
                    /* Transition: '<S45>:902' */
                    ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_SYNC_CONFIRMED;

                    /* Entry 'SYNC_CONFIRMED': '<S45>:777' */
                    ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
                }
            }
            else
            {
                /* Transition: '<S45>:948' */
                /* Transition: '<S45>:869' */
                guard1 = true;
            }
        }

        if (guard2)
        {
            /* Transition: '<S45>:945' */
            tmp = ((sint32)ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts) + 1;
            if ((((sint32)ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts) + 1) >
                    255)
            {
                tmp = 255;
            }

            ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts = (uint8)tmp;
            if ((ESPR_ac_B.LeESPR_phi_FinalOffset == 1.0F) &&
                    (ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn))
            {
                /* Transition: '<S45>:947' */
                /* Transition: '<S45>:952' */
                ESPR_ac_B.LeESPR_phi_FinalOffset =
                    ESPR_ac_B.LeESPR_phi_TempOffset;

                /* Transition: '<S45>:950' */
            }
            else
            {
                /* Transition: '<S45>:944' */
            }

            if (ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts >=
                    KeESPR_Cnt_MaxLearnAttempts)
            {
                /* Transition: '<S45>:951' */
                if (((ESPR_ac_B.LeESPR_cnt_OffsetAttempts >
                        ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts) &&
                        (ESPR_ac_B.LeESPR_phi_FinalOffset == 0.0F)) ||
                        ((ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts >
                          ESPR_ac_B.LeESPR_cnt_OffsetAttempts) &&
                         (ESPR_ac_B.LeESPR_phi_FinalOffset == 360.0F)))
                {
                    /* Transition: '<S45>:943' */
                    ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_PHASE_CORRECTION;

                    /* Entry 'PHASE_CORRECTION': '<S45>:780' */
                    ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
                }
                else
                {
                    /* Transition: '<S45>:902' */
                    ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_SYNC_CONFIRMED;

                    /* Entry 'SYNC_CONFIRMED': '<S45>:777' */
                    ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
                }
            }
            else
            {
                /* Transition: '<S45>:948' */
                /* Transition: '<S45>:869' */
                /* Transition: '<S45>:843' */
                if (KeESPR_b_SyncLogicReset)
                {
                    /* Transition: '<S45>:981' */
                    /* Transition: '<S45>:982' */
                    /* Transition: '<S45>:978' */
                    ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts = 0U;
                    ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = false;
                    ESPR_ac_B.LeESPR_phi_FinalOffset = 1.0F;
                    ESPR_ac_B.LeESPR_cnt_OffsetAttempts = 0U;
                    ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts = 0U;
                }
                else
                {
                    /* Transition: '<S45>:587' */
                }

                ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Init_State;

                /* Entry 'Init_State': '<S45>:578' */
                ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
            }
        }

        if (guard1)
        {
            /* Transition: '<S45>:843' */
            if (KeESPR_b_SyncLogicReset)
            {
                /* Transition: '<S45>:981' */
                /* Transition: '<S45>:982' */
                /* Transition: '<S45>:978' */
                ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts = 0U;
                ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn = false;
                ESPR_ac_B.LeESPR_phi_FinalOffset = 1.0F;
                ESPR_ac_B.LeESPR_cnt_OffsetAttempts = 0U;
                ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts = 0U;
            }
            else
            {
                /* Transition: '<S45>:587' */
            }

            ESPR_ac_DW.is_c35_ESPR_ac = ESPR_ac_IN_Init_State;

            /* Entry 'Init_State': '<S45>:578' */
            ESPR_ac_B.LeESPR_b_PhaseLearnActive = false;
        }
    }

    /* End of Chart: '<S28>/Sync_Angle_Procedure' */

    /* Gain: '<S37>/Gain' */
    VeESPR_Cnt_NotSyncedSamples = ESPR_ac_B.LeESPR_cnt_NotSyncedSamples;

    /* Gain: '<S38>/Gain' */
    VeESPR_Cnt_PhaseSyncLearnAttempts =
        ESPR_ac_B.LeESPR_cnt_PhaseSyncLearnAttempts;

    /* Gain: '<S39>/Gain' */
    VeESPR_b_PhaseLearnActive = ESPR_ac_B.LeESPR_b_PhaseLearnActive;

    /* Gain: '<S40>/Gain' */
    VeESPR_Cnt_SyncedSamples = ESPR_ac_B.LeESPR_cnt_SyncedSamples;

    /* Gain: '<S41>/Gain' */
    VeESPR_Cnt_AttemptSamples = ESPR_ac_B.LeESPR_cnt_AttemptSamples;

    /* Gain: '<S42>/Gain' */
    VeESPR_Cnt_OffsetAttempts = ESPR_ac_B.LeESPR_cnt_OffsetAttempts;

    /* Gain: '<S43>/Gain' */
    VeESPR_Cnt_NoOffsetAttempts = ESPR_ac_B.LeESPR_cnt_NoOffsetAttempts;

    /* Gain: '<S44>/Gain' */
    VeESPR_phi_TempOffset = ESPR_ac_B.LeESPR_phi_TempOffset;

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S72>/Calib'
     */
    if (KeESPR_b_EngAngleSyncPhase)
    {
        /* Sum: '<S71>/Sum' */
        rtb_Switch1_dp = ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p +
            ESPR_ac_B.LeESPR_phi_FinalOffset;

        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S71>/ConstantValue'
         *  RelationalOperator: '<S71>/Comparison4'
         */
        if (rtb_Switch1_dp > 720.0F)
        {
            /* Switch: '<S46>/Switch1' incorporates:
             *  Constant: '<S71>/ConstantValue1'
             *  Sum: '<S71>/Sum1'
             *  Switch: '<S71>/Switch'
             */
            rtb_Switch1_dp -= 720.0F;
        }

        /* End of Switch: '<S71>/Switch' */
    }
    else
    {
        /* Switch: '<S46>/Switch1' */
        rtb_Switch1_dp = ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* RelationalOperator: '<S29>/Comparison1' incorporates:
     *  Constant: '<S79>/Constant'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_a2 = (((uint32)
        VeESPC_b_EngineSpeed_MCPFA_tmp) == CeESPR_e_EngSpdDegraded);

    /* If: '<S29>/If' incorporates:
     *  Constant: '<S78>/Constant'
     *  Constant: '<S98>/Calib'
     *  If: '<S81>/If'
     *  Logic: '<S29>/Logical1'
     *  Logic: '<S29>/Logical6'
     *  Logic: '<S29>/Logical7'
     *  Logic: '<S81>/Logical'
     *  Logic: '<S81>/Logical1'
     *  Logic: '<S81>/Logical2'
     *  Merge: '<Root>/Merge_22'
     *  RelationalOperator: '<S29>/Comparison4'
     *  RelationalOperator: '<S81>/Comparison'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39'
     */
    if (((((uint32)VeESPC_b_EngineSpeed_MCPFA_tmp) == CeESPR_e_EngSpdNormal) ||
            TmpSignalConversionAtTmpVM_FcnCallSub_a2) &&
            (!Rte_IrvRead_ESPR_FastTEF_VeESPR_b_EngSpdFA_Init_write_IRV()))
    {
        /* Outputs for IfAction SubSystem: '<S29>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S82>/ActionPort'
         */
        /* Merge: '<S29>/Merge1' incorporates:
         *  Gain: '<S101>/Gain'
         */
        ESPR_ac_B.Signal_Conversion = TmpSignalConversionAtTmpVM_FcnCallSubsys;

        /* Merge: '<S29>/Merge2' incorporates:
         *  Gain: '<S102>/Gain'
         *  Merge: '<Root>/Merge_18'
         */
        VeESPC_b_CANEngineSpeedFA =
            Rte_IrvRead_ESPR_FastTEF_VeESPR_b_EngineSpeedStatusFA_Init_write_IRV
            ();

        /* End of Outputs for SubSystem: '<S29>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S29>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S81>/ActionPort'
         */
        if (!ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j4)
        {
            /* Outputs for IfAction SubSystem: '<S81>/IfActionSubsystem' incorporates:
             *  ActionPort: '<S94>/ActionPort'
             */
            /* If: '<S81>/If' incorporates:
             *  Inport: '<S94>/InputSpd'
             *  Merge: '<S29>/Merge1'
             *  SignalConversion: '<S81>/Signal_Conversion'
             */
            ESPR_ac_B.Signal_Conversion =
                ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d;

            /* End of Outputs for SubSystem: '<S81>/IfActionSubsystem' */
        }
        else if ((!ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kl) &&
                 (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f >
                  KeESPR_n_TOSS_LowLimit))
        {
            /* Outputs for IfAction SubSystem: '<S81>/IfActionSubsystem1' incorporates:
             *  ActionPort: '<S95>/ActionPort'
             */
            /* If: '<S81>/If' incorporates:
             *  Constant: '<S99>/Calib'
             *  Merge: '<S29>/Merge1'
             *  Product: '<S95>/Product'
             *  SignalConversion: '<S81>/Signal_Conversion'
             */
            ESPR_ac_B.Signal_Conversion =
                ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f *
                KeESPR_r_NiNoFltdRatio;

            /* End of Outputs for SubSystem: '<S81>/IfActionSubsystem1' */
        }
        else if (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jv)
        {
            /* Outputs for IfAction SubSystem: '<S81>/IfActionSubsystem2' incorporates:
             *  ActionPort: '<S96>/ActionPort'
             */
            /* If: '<S81>/If' incorporates:
             *  Constant: '<S100>/Calib'
             *  Merge: '<S29>/Merge1'
             *  SignalConversion: '<S81>/Signal_Conversion'
             *  SignalConversion generated from: '<S96>/LeESPR_n_DfltInputSpeed'
             */
            ESPR_ac_B.Signal_Conversion = KeESPR_n_EngineLowDefault;

            /* End of Outputs for SubSystem: '<S81>/IfActionSubsystem2' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S81>/IfActionSubsystem3' incorporates:
             *  ActionPort: '<S97>/ActionPort'
             */
            /* If: '<S81>/If' incorporates:
             *  Constant: '<S97>/ConstantValue'
             *  Merge: '<S29>/Merge1'
             *  SignalConversion: '<S81>/Signal_Conversion'
             *  SignalConversion generated from: '<S97>/DfltInputSpeed'
             */
            ESPR_ac_B.Signal_Conversion = 0.0F;

            /* End of Outputs for SubSystem: '<S81>/IfActionSubsystem3' */
        }

        /* Merge: '<S29>/Merge2' incorporates:
         *  Constant: '<S81>/TRUEConstant'
         *  Constant: '<S98>/Calib'
         *  If: '<S81>/If'
         *  Logic: '<S81>/Logical'
         *  Logic: '<S81>/Logical1'
         *  RelationalOperator: '<S81>/Comparison'
         *  SignalConversion generated from: '<S81>/LeESPR_b_EngineSpeedStatusFA'
         */
        VeESPC_b_CANEngineSpeedFA = true;

        /* End of Outputs for SubSystem: '<S29>/IfActionSubsystem' */
    }

    /* End of If: '<S29>/If' */

    /* Product: '<S74>/Multiplication2' incorporates:
     *  Constant: '<S88>/Calib'
     *  Product: '<S74>/Multiplication4'
     *  Sum: '<S74>/Summation'
     *  Sum: '<S74>/Summation1'
     *  Sum: '<S74>/Summation2'
     *  UnitDelay: '<S74>/Unit Delay'
     *  UnitDelay: '<S74>/Unit Delay1'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE_o = ((ESPR_ac_B.Signal_Conversion -
        ((rtb_Switch_l - KeESPR_t_NiDotCANTimePeriod) *
         ESPR_ac_DW.UnitDelay1_DSTATE_o)) - ESPR_ac_DW.UnitDelay_DSTATE_g) /
        (rtb_Switch_l + KeESPR_t_NiDotCANTimePeriod);

    /* Outputs for Atomic SubSystem: '<S29>/TurnOnDelaySample3' */
    /* Outputs for Atomic SubSystem: '<S93>/EdgeRising' */
    /* Logic: '<S105>/AND' incorporates:
     *  Logic: '<S105>/OR1'
     *  UnitDelay: '<S105>/Unit Delay'
     */
    rtb_AND_as = (TmpSignalConversionAtTmpVM_FcnCallSubs_n &&
                  (!ESPR_ac_DW.UnitDelay_DSTATE_of));

    /* Update for UnitDelay: '<S105>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_of = TmpSignalConversionAtTmpVM_FcnCallSubs_n;

    /* End of Outputs for SubSystem: '<S93>/EdgeRising' */

    /* Switch: '<S93>/Switch1' incorporates:
     *  Constant: '<S83>/Calib'
     *  Constant: '<S93>/Constant Value'
     *  Constant: '<S93>/Constant Value1'
     *  Logic: '<S93>/OR'
     *  Logic: '<S93>/OR1'
     *  MinMax: '<S93>/Minimum'
     *  Sum: '<S93>/Summation'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    if ((!TmpSignalConversionAtTmpVM_FcnCallSubs_n) || rtb_AND_as)
    {
        ESPR_ac_DW.UnitDelay_DSTATE_p4 = 0U;
    }
    else if (KeESPR_Cnt_CrankMaturingFltDbnc < ((uint16)(((uint32)
                ESPR_ac_DW.UnitDelay_DSTATE_p4) + 1U)))
    {
        /* MinMax: '<S93>/Minimum' incorporates:
         *  Constant: '<S83>/Calib'
         */
        ESPR_ac_DW.UnitDelay_DSTATE_p4 = KeESPR_Cnt_CrankMaturingFltDbnc;
    }
    else
    {
        /* MinMax: '<S93>/Minimum' incorporates:
         *  Constant: '<S93>/Constant Value'
         *  Sum: '<S93>/Summation'
         *  UnitDelay: '<S93>/Unit Delay'
         */
        ESPR_ac_DW.UnitDelay_DSTATE_p4 = (uint16)(((uint32)
            ESPR_ac_DW.UnitDelay_DSTATE_p4) + 1U);
    }

    /* End of Switch: '<S93>/Switch1' */
    /* End of Outputs for SubSystem: '<S29>/TurnOnDelaySample3' */

    /* Switch: '<S29>/Switch2' incorporates:
     *  Constant: '<S85>/Calib'
     */
    if (KeESPR_b_EnableP1AC7Diag)
    {
        /* Switch: '<S29>/Switch2' incorporates:
         *  Constant: '<S1>/Constant4'
         */
        rtb_Switch2_fe1 = false;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S29>/TurnOnDelaySample3' */
        /* Switch: '<S29>/Switch2' incorporates:
         *  Constant: '<S83>/Calib'
         *  Logic: '<S29>/Logical3'
         *  Logic: '<S93>/AND'
         *  RelationalOperator: '<S93>/Greater  Than'
         *  UnitDelay: '<S93>/Unit Delay'
         */
        rtb_Switch2_fe1 = ((ESPR_ac_B.VariantMergeForOutportVeESPD_b_BuffrCr_e) ||
                           (TmpSignalConversionAtTmpVM_FcnCallSubs_n &&
                            (ESPR_ac_DW.UnitDelay_DSTATE_p4 >=
                             KeESPR_Cnt_CrankMaturingFltDbnc)));

        /* End of Outputs for SubSystem: '<S29>/TurnOnDelaySample3' */
    }

    /* End of Switch: '<S29>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising' */
    /* Logic: '<S75>/OR1' incorporates:
     *  UnitDelay: '<S75>/Unit Delay'
     */
    rtb_OR1_pq = !ESPR_ac_DW.UnitDelay_DSTATE_bp;

    /* Update for UnitDelay: '<S75>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_bp = rtb_Switch2_fe1;

    /* End of Outputs for SubSystem: '<S29>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising1' */
    /* Logic: '<S76>/OR1' incorporates:
     *  UnitDelay: '<S76>/Unit Delay'
     */
    rtb_OR1_e = !ESPR_ac_DW.UnitDelay_DSTATE_oc;

    /* Update for UnitDelay: '<S76>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_oc = TmpSignalConversionAtTmpVM_FcnCallSub_a2;

    /* End of Outputs for SubSystem: '<S29>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S29>/TurnOnDelaySample2' */
    /* Outputs for Atomic SubSystem: '<S92>/EdgeRising' */
    /* Logic: '<S104>/AND' incorporates:
     *  Logic: '<S104>/OR1'
     *  UnitDelay: '<S104>/Unit Delay'
     */
    rtb_AND_gg = (TmpSignalConversionAtTmpVM_FcnCallSub_a2 &&
                  (!ESPR_ac_DW.UnitDelay_DSTATE_hk));

    /* Update for UnitDelay: '<S104>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_hk = TmpSignalConversionAtTmpVM_FcnCallSub_a2;

    /* End of Outputs for SubSystem: '<S92>/EdgeRising' */

    /* Logic: '<S92>/OR1' incorporates:
     *  Logic: '<S92>/AND'
     */
    rtb_AND_as = !TmpSignalConversionAtTmpVM_FcnCallSub_a2;

    /* Switch: '<S92>/Switch1' incorporates:
     *  Constant: '<S84>/Calib'
     *  Constant: '<S92>/Constant Value'
     *  Constant: '<S92>/Constant Value1'
     *  Logic: '<S92>/OR'
     *  Logic: '<S92>/OR1'
     *  MinMax: '<S92>/Minimum'
     *  Sum: '<S92>/Summation'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    if (rtb_AND_as || rtb_AND_gg)
    {
        ESPR_ac_DW.UnitDelay_DSTATE_a = 0U;
    }
    else if (KeESPR_Cnt_EngineSpdFaultOut < ((uint16)(((uint32)
                ESPR_ac_DW.UnitDelay_DSTATE_a) + 1U)))
    {
        /* MinMax: '<S92>/Minimum' incorporates:
         *  Constant: '<S84>/Calib'
         */
        ESPR_ac_DW.UnitDelay_DSTATE_a = KeESPR_Cnt_EngineSpdFaultOut;
    }
    else
    {
        /* MinMax: '<S92>/Minimum' incorporates:
         *  Constant: '<S92>/Constant Value'
         *  Sum: '<S92>/Summation'
         *  UnitDelay: '<S92>/Unit Delay'
         */
        ESPR_ac_DW.UnitDelay_DSTATE_a = (uint16)(((uint32)
            ESPR_ac_DW.UnitDelay_DSTATE_a) + 1U);
    }

    /* End of Switch: '<S92>/Switch1' */
    /* End of Outputs for SubSystem: '<S29>/TurnOnDelaySample2' */

    /* Outputs for Atomic SubSystem: '<S29>/TurnOnDelaySample1' */
    /* Outputs for Atomic SubSystem: '<S91>/EdgeRising' */
    /* Logic: '<S103>/AND' incorporates:
     *  Logic: '<S103>/OR1'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    rtb_AND_gg = (rtb_Switch2_fe1 && (!ESPR_ac_DW.UnitDelay_DSTATE_lf));

    /* Update for UnitDelay: '<S103>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_lf = rtb_Switch2_fe1;

    /* End of Outputs for SubSystem: '<S91>/EdgeRising' */

    /* Logic: '<S91>/OR1' incorporates:
     *  Logic: '<S91>/AND'
     */
    rtb_AND_iw = !rtb_Switch2_fe1;

    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S84>/Calib'
     *  Constant: '<S91>/Constant Value'
     *  Constant: '<S91>/Constant Value1'
     *  Logic: '<S91>/OR'
     *  Logic: '<S91>/OR1'
     *  MinMax: '<S91>/Minimum'
     *  Sum: '<S91>/Summation'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    if (rtb_AND_iw || rtb_AND_gg)
    {
        ESPR_ac_DW.UnitDelay_DSTATE_f1 = 0U;
    }
    else if (KeESPR_Cnt_EngineSpdFaultOut < ((uint16)(((uint32)
                ESPR_ac_DW.UnitDelay_DSTATE_f1) + 1U)))
    {
        /* MinMax: '<S91>/Minimum' incorporates:
         *  Constant: '<S84>/Calib'
         */
        ESPR_ac_DW.UnitDelay_DSTATE_f1 = KeESPR_Cnt_EngineSpdFaultOut;
    }
    else
    {
        /* MinMax: '<S91>/Minimum' incorporates:
         *  Constant: '<S91>/Constant Value'
         *  Sum: '<S91>/Summation'
         *  UnitDelay: '<S91>/Unit Delay'
         */
        ESPR_ac_DW.UnitDelay_DSTATE_f1 = (uint16)(((uint32)
            ESPR_ac_DW.UnitDelay_DSTATE_f1) + 1U);
    }

    /* End of Switch: '<S91>/Switch1' */
    /* End of Outputs for SubSystem: '<S29>/TurnOnDelaySample1' */

    /* Outputs for Atomic SubSystem: '<S29>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S29>/TurnOnDelaySample2' */
    /* Logic: '<S89>/OR1' incorporates:
     *  Constant: '<S84>/Calib'
     *  Constant: '<S87>/Calib'
     *  Logic: '<S29>/Logical'
     *  Logic: '<S29>/Logical8'
     *  Logic: '<S29>/Logical9'
     *  Logic: '<S76>/AND'
     *  Logic: '<S89>/NOT'
     *  Logic: '<S89>/OR'
     *  Logic: '<S92>/AND'
     *  RelationalOperator: '<S29>/Comparison5'
     *  RelationalOperator: '<S92>/Greater  Than'
     *  UnitDelay: '<S89>/Unit Delay'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    VeESPC_b_LatchEngSpd = ((TmpSignalConversionAtTmpVM_FcnCallSub_a2 &&
        rtb_OR1_e) || ((((rtb_AND_as || (ESPR_ac_DW.UnitDelay_DSTATE_a <
        KeESPR_Cnt_EngineSpdFaultOut)) || (ESPR_ac_B.Signal_Conversion <=
        KeESPR_n_EngSpdThrshld)) && TmpSignalConversionAtTmpVM_FcnCallSub_a2) &&
                       (VeESPC_b_LatchEngSpd)));

    /* End of Outputs for SubSystem: '<S29>/TurnOnDelaySample2' */
    /* End of Outputs for SubSystem: '<S29>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S29>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S29>/SignalLatchOnWithReset1' */
    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S29>/TurnOnDelaySample1' */
    /* Logic: '<S90>/OR1' incorporates:
     *  Constant: '<S84>/Calib'
     *  Constant: '<S87>/Calib'
     *  Logic: '<S29>/Logical2'
     *  Logic: '<S75>/AND'
     *  Logic: '<S90>/NOT'
     *  Logic: '<S90>/OR'
     *  Logic: '<S91>/AND'
     *  RelationalOperator: '<S29>/Comparison2'
     *  RelationalOperator: '<S91>/Greater  Than'
     *  UnitDelay: '<S90>/Unit Delay'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    VeESPC_b_LatchBuffCrk = ((rtb_Switch2_fe1 && rtb_OR1_pq) || (((rtb_AND_iw ||
        (ESPR_ac_DW.UnitDelay_DSTATE_f1 < KeESPR_Cnt_EngineSpdFaultOut)) ||
        (ESPR_ac_B.Signal_Conversion <= KeESPR_n_EngSpdThrshld)) &&
        (VeESPC_b_LatchBuffCrk)));

    /* End of Outputs for SubSystem: '<S29>/TurnOnDelaySample1' */
    /* End of Outputs for SubSystem: '<S29>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S29>/SignalLatchOnWithReset1' */

    /* Update for UnitDelay: '<S48>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_e = rtb_Vector;

    /* Update for UnitDelay: '<S32>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_g0 = (uint8)VeESPC_e_ECMCrankPhase;

    /* Update for UnitDelay: '<S74>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_g = ESPR_ac_B.Signal_Conversion;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPD_DiagProcessEng_FastTEF'
     */
    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S133>/Calib'
     *  Constant: '<S134>/Calib'
     *  Switch: '<S25>/Switch2'
     */
#if Rte_SysCon_Variant_ESPR_3 || Rte_SysCon_Variant_ESPR_5

    if (KeESPD_b_EngineSpeedOvrdEnbl)
    {
        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S138>/Calib'
         */
        VeESPD_n_EngineSpeed = KeESPD_n_EngineSpeedOvrdVal;
    }
    else
    {
        /* Switch: '<S25>/Switch1' */
        VeESPD_n_EngineSpeed = TmpSignalConversionAtTmpVM_FcnCallSubsys;
    }

    if (KeESPD_b_Ni_6DegOvrdEnbl)
    {
        /* Switch: '<S25>/Switch2' incorporates:
         *  Constant: '<S139>/Calib'
         */
        VeESPD_n_Ni_6Deg = KeESPD_n_Ni_6DegOvrdVal;
    }
    else
    {
        /* Switch: '<S25>/Switch2' */
        VeESPD_n_Ni_6Deg = ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k;
    }

#endif

    /* End of Switch: '<S25>/Switch1' */

    /* Switch: '<S25>/Switch4' incorporates:
     *  Constant: '<S135>/Calib'
     */
#if Rte_SysCon_Variant_ESPR_3

    if (KeESPD_b_RunCrankActiveEnbl)
    {
        /* Switch: '<S25>/Switch4' incorporates:
         *  Constant: '<S136>/Calib'
         */
        VeESPD_b_RunCrankActive = KeESPD_b_RunCrankActiveOvrdVal;
    }
    else
    {
        /* Switch: '<S25>/Switch4' */
        VeESPD_b_RunCrankActive =
            ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jv;
    }

#endif

    /* End of Switch: '<S25>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S25>/BuffrCrnkLockFailure' */
#if Rte_SysCon_Variant_ESPR_5

    /* Outputs for Atomic SubSystem: '<S130>/BuffrCrnkLockFailure' */
    /* RelationalOperator: '<S187>/Relational Operator2' incorporates:
     *  Constant: '<S196>/Calib'
     */
    VeESPD_b_P1AC7_EnbleCndtn = (VeESPD_n_EngineSpeed >
        KeESPD_n_EngineSpeedThrshld);

    /* RelationalOperator: '<S200>/Relational Operator3' incorporates:
     *  Constant: '<S200>/Constant3'
     *  S-Function (sfix_bitop): '<S200>/Bitwise Operator2'
     */
    rtb_AND_as = ((((uint32)ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f)
                   & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S200>/EdgeFalling1' */
    /* Logic: '<S200>/Logical Operator' incorporates:
     *  Logic: '<S202>/OR1'
     */
    rtb_Switch2_fe1 = !rtb_AND_as;

    /* End of Outputs for SubSystem: '<S200>/EdgeFalling1' */

    /* Logic: '<S200>/Logical1' incorporates:
     *  Constant: '<S194>/Calib'
     *  Constant: '<S200>/Constant1'
     *  Logic: '<S200>/Logical Operator'
     *  Logic: '<S200>/Logical10'
     *  Logic: '<S200>/Logical12'
     *  RelationalOperator: '<S200>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S200>/Bitwise Operator3'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_a2 = ((VeESPD_b_P1AC7_EnbleCndtn) &&
        ((!KeESPD_b_DMCM_A_CKP_SnsrPerf_LtchEnbl) || (((((uint32)
        ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f) & 1U) == 0U) ||
        rtb_Switch2_fe1)));

    /* Outputs for Atomic SubSystem: '<S187>/EdgeRising' */
    /* Logic: '<S190>/OR1' incorporates:
     *  UnitDelay: '<S190>/Unit Delay'
     */
    rtb_OR1_pq = !ESPR_ac_DW.UnitDelay_DSTATE_fl;

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_fl =
        ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_f1;

    /* Outputs for Atomic SubSystem: '<S187>/Counter Reset Enabled ' */
    /* Switch: '<S189>/Switch2' incorporates:
     *  Logic: '<S190>/AND'
     */
    if ((ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_f1) && rtb_OR1_pq)
    {
        /* Switch: '<S189>/Switch' incorporates:
         *  Constant: '<S189>/Constant Value1'
         *  Sum: '<S189>/Subtraction'
         *  Switch: '<S214>/Switch1'
         *  UnitDelay: '<S189>/Unit Delay'
         */
        ESPR_ac_DW.UnitDelay_DSTATE_gb = (uint16)(((uint32)
            ESPR_ac_DW.UnitDelay_DSTATE_gb) + 1U);
    }

    /* End of Switch: '<S189>/Switch2' */
    /* End of Outputs for SubSystem: '<S187>/Counter Reset Enabled ' */
    /* End of Outputs for SubSystem: '<S187>/EdgeRising' */

    /* RelationalOperator: '<S187>/Relational Operator3' incorporates:
     *  Constant: '<S195>/Calib'
     */
    VeESPD_b_P1AC7_FailBuffSpdCriteria = (VeESPD_n_Ni_6Deg >=
        KeESPD_n_BuffdCrnkPrfrmcFailThrshldMax);

    /* Logic: '<S187>/AND2' incorporates:
     *  Constant: '<S197>/Calib'
     *  RelationalOperator: '<S187>/Relational Operator'
     *  UnitDelay: '<S189>/Unit Delay'
     */
    VeESPD_b_P1AC7_Fail_OccCriteria = ((ESPR_ac_DW.UnitDelay_DSTATE_gb >=
        ((uint16)KeESPR_Cnt_UnlckOccurrenceLmt)) &&
        (VeESPD_b_P1AC7_FailBuffSpdCriteria));

    /* Outputs for Atomic SubSystem: '<S187>/Stop Watch Reset Enabled' */
    /* Switch: '<S199>/Switch2' incorporates:
     *  Constant: '<S199>/Constant Value2'
     *  Logic: '<S187>/NOT'
     *  Switch: '<S199>/Switch'
     *  UnitDelay: '<S199>/Unit Delay'
     */
    if (!ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_f1)
    {
        ESPR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S199>/Unit Delay' incorporates:
         *  Constant: '<S191>/Calib'
         *  Sum: '<S199>/Subtraction'
         *  Switch: '<S199>/Switch2'
         */
        ESPR_ac_DW.UnitDelay_DSTATE += HeESPR_t_FastTEF;
    }

    /* End of Switch: '<S199>/Switch2' */
    /* End of Outputs for SubSystem: '<S187>/Stop Watch Reset Enabled' */

    /* Logic: '<S187>/AND' incorporates:
     *  Constant: '<S198>/Calib'
     *  RelationalOperator: '<S187>/Relational Operator1'
     *  UnitDelay: '<S199>/Unit Delay'
     */
    VeESPD_b_P1AC7_Fail_TmrCriteria = ((VeESPD_b_P1AC7_FailBuffSpdCriteria) &&
        (ESPR_ac_DW.UnitDelay_DSTATE >= KeESPR_t_UnlckTimerLmt));

    /* VariantMerge generated from: '<S130>/VeESPD_b_DiagFailing' incorporates:
     *  Logic: '<S187>/OR'
     */
    VeESPD_b_P1AC7_FailCrtMet = ((VeESPD_b_P1AC7_Fail_OccCriteria) ||
        (VeESPD_b_P1AC7_Fail_TmrCriteria));

    /* Outputs for Atomic SubSystem: '<S200>/EdgeFalling1' */
    /* Logic: '<S202>/AND' incorporates:
     *  UnitDelay: '<S202>/Unit Delay'
     */
    rtb_Switch2_fe1 = (rtb_Switch2_fe1 && (ESPR_ac_DW.UnitDelay_DSTATE_ni));

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_ni = rtb_AND_as;

    /* End of Outputs for SubSystem: '<S200>/EdgeFalling1' */

    /* Logic: '<S200>/Logical5' incorporates:
     *  Logic: '<S187>/NOT4'
     */
    rtb_AND_as = (((ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e) ||
                   (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)) ||
                  rtb_Switch2_fe1);

    /* Outputs for Atomic SubSystem: '<S201>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S201>/Counter Reset  Enabled ' */
    /* Switch: '<S208>/Switch1' incorporates:
     *  Logic: '<S201>/Fail Counter Reset'
     *  Logic: '<S201>/NOT6'
     *  Switch: '<S208>/Switch2'
     *  Switch: '<S209>/Switch1'
     *  UnitDelay: '<S201>/Unit Delay'
     *  UnitDelay: '<S201>/Unit Delay1'
     */
    if ((rtb_AND_as || (ESPR_ac_DW.UnitDelay_DSTATE_ox)) ||
            (ESPR_ac_DW.UnitDelay1_DSTATE_i))
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S208>/Constant Value2'
         */
        VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_FailCnt = 0U;

        /* Switch: '<S209>/Switch1' incorporates:
         *  Constant: '<S209>/Constant Value2'
         */
        VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_SmpCnt = 0U;
    }
    else
    {
        if (TmpSignalConversionAtTmpVM_FcnCallSub_a2 &&
                (VeESPD_b_P1AC7_FailCrtMet))
        {
            /* Switch: '<S208>/Switch1' incorporates:
             *  Constant: '<S208>/Constant Value1'
             *  Sum: '<S208>/Subtraction'
             *  Switch: '<S208>/Switch2'
             *  UnitDelay: '<S208>/Unit Delay'
             */
            VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_FailCnt = (uint16)(((uint32)
                VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_FailCnt) + 1U);
        }

        /* Switch: '<S209>/Switch2' */
        if (TmpSignalConversionAtTmpVM_FcnCallSub_a2)
        {
            /* Switch: '<S209>/Switch1' incorporates:
             *  Constant: '<S209>/Constant Value1'
             *  Sum: '<S209>/Subtraction'
             *  Switch: '<S209>/Switch2'
             *  UnitDelay: '<S209>/Unit Delay'
             */
            VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_SmpCnt = (uint16)(((uint32)
                VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S209>/Switch2' */
    }

    /* End of Switch: '<S208>/Switch1' */
    /* End of Outputs for SubSystem: '<S201>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S201>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S201>/Greater Than or Equal ' incorporates:
     *  Constant: '<S192>/Calib'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE_i = (VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_FailCnt >=
        KeESPD_Cnt_DMCM_A_CKP_SnsrPerf_FailCntLmt);

    /* Logic: '<S201>/NOT5' incorporates:
     *  Constant: '<S193>/Calib'
     *  Logic: '<S201>/NOT3'
     *  RelationalOperator: '<S201>/Less Than  or Equal'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_ox = ((VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_SmpCnt >=
        KeESPD_Cnt_DMCM_A_CKP_SnsrPerf_SmplCntLmt) &&
        (!ESPR_ac_DW.UnitDelay1_DSTATE_i));

    /* Switch: '<S214>/Switch1' incorporates:
     *  Switch: '<S213>/Switch1'
     */
    if (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
    {
        /* DataStoreWrite: '<S187>/Data Store Write' incorporates:
         *  Constant: '<S207>/Constant Value'
         *  Switch: '<S214>/Switch1'
         */
        ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkLockFailureMFOP = 0U;
    }
    else
    {
        if (ESPR_ac_DW.UnitDelay_DSTATE_ox)
        {
            /* MinMax: '<S207>/Minimum2' incorporates:
             *  DataStoreRead: '<S187>/Data Store Read'
             *  Switch: '<S213>/Switch1'
             */
            if (VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_FailCnt >
                    ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkLockFailureMFOP)
            {
                /* DataStoreWrite: '<S187>/Data Store Write' incorporates:
                 *  Switch: '<S213>/Switch1'
                 *  Switch: '<S214>/Switch1'
                 */
                ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkLockFailureMFOP =
                    VeESPD_Cnt_DMCM_A_CKP_SnsrPerf_FailCnt;
            }

            /* End of MinMax: '<S207>/Minimum2' */
        }
    }

    /* End of Switch: '<S214>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S200>/Fail' */
    ESPR_ac_Fail(ESPR_ac_DW.UnitDelay1_DSTATE_i,
                 &ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A_CK);

    /* End of Outputs for SubSystem: '<S200>/Fail' */

    /* Outputs for Enabled SubSystem: '<S200>/Init' */
    ESPR_ac_Init_h(rtb_AND_as,
                   &ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A_CK);

    /* End of Outputs for SubSystem: '<S200>/Init' */

    /* Outputs for Enabled SubSystem: '<S200>/Pass' */
    ESPR_ac_Pass(ESPR_ac_DW.UnitDelay_DSTATE_ox,
                 &ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A_CK);

    /* End of Outputs for SubSystem: '<S200>/Pass' */

    /* VariantMerge generated from: '<S130>/VeESPD_b_BuffrCrnkLckFltDtct' incorporates:
     *  Constant: '<S203>/Constant'
     *  RelationalOperator: '<S200>/Relational Operator'
     *  VariantMerge generated from: '<S130>/FaultSts_DMCM_A_CKP_SnsrPerf'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPD_b_BuffrCrnk = (((uint32)
        ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A_CK) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S130>/BuffrCrnkLockFailure' */
    /* End of Outputs for SubSystem: '<S25>/BuffrCrnkLockFailure' */
#else

    /* Outputs for Atomic SubSystem: '<S130>/BuffrCrnkLockFailureStub' */
    /* VariantMerge generated from: '<S130>/FaultSts_DMCM_A_CKP_SnsrPerf' incorporates:
     *  Constant: '<S215>/Constant'
     */
    ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A_CK = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S130>/VeESPD_b_BuffrCrnkLckFltDtct' incorporates:
     *  Constant: '<S188>/Constant'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPD_b_BuffrCrnk = false;

    /* VariantMerge generated from: '<S130>/VeESPD_b_DiagFailing' incorporates:
     *  Constant: '<S188>/Constant1'
     */
    VeESPD_b_P1AC7_FailCrtMet = false;

    /* End of Outputs for SubSystem: '<S130>/BuffrCrnkLockFailureStub' */
#endif

    /* Outputs for Atomic SubSystem: '<S25>/BufferCrankPerformance' */
#if Rte_SysCon_Variant_ESPR_3

    /* Outputs for Atomic SubSystem: '<S129>/BufferCrankPerformance' */
    /* Logic: '<S141>/Logical' incorporates:
     *  Constant: '<S143>/Constant'
     *  Constant: '<S153>/Calib'
     *  Logic: '<S141>/Logical2'
     *  RelationalOperator: '<S141>/Comparison'
     *  RelationalOperator: '<S141>/Comparison4'
     */
    VeESPD_b_BufferCrankPerformance_EnbleCndtn = (((((VeESPD_n_EngineSpeed >
        KeESPD_n_EngineSpeedThrshld) && (VeESPD_b_RunCrankActive)) &&
        (!VeESPC_b_EngineSpeed_MCPFA)) && (((uint32)
        VeESPC_b_EngineSpeed_MCPFA_tmp) == CeESPR_e_EngSpdNormal)) &&
        (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ai));

    /* S-Function (sfix_bitop): '<S157>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S156>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_j_tmp = ((uint32)
        ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a) & 64U;

    /* RelationalOperator: '<S157>/Relational Operator3' incorporates:
     *  Constant: '<S157>/Constant3'
     *  S-Function (sfix_bitop): '<S157>/Bitwise Operator2'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_a2 = (rtb_RelationalOperator3_j_tmp ==
        0U);

    /* Outputs for Atomic SubSystem: '<S157>/EdgeFalling1' */
    /* Logic: '<S157>/Logical Operator' incorporates:
     *  Logic: '<S173>/OR1'
     */
    rtb_OR1_pq = !TmpSignalConversionAtTmpVM_FcnCallSub_a2;

    /* End of Outputs for SubSystem: '<S157>/EdgeFalling1' */

    /* S-Function (sfix_bitop): '<S157>/Bitwise Operator3' incorporates:
     *  S-Function (sfix_bitop): '<S156>/Bitwise Operator3'
     */
    rtb_Logical1_c_tmp = ((uint32)
                          ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a) &
        1U;

    /* Logic: '<S157>/Logical1' incorporates:
     *  Constant: '<S148>/Calib'
     *  Constant: '<S157>/Constant1'
     *  Logic: '<S157>/Logical Operator'
     *  Logic: '<S157>/Logical10'
     *  Logic: '<S157>/Logical12'
     *  RelationalOperator: '<S157>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S157>/Bitwise Operator3'
     */
    rtb_AND_as = ((VeESPD_b_BufferCrankPerformance_EnbleCndtn) &&
                  ((!KeESPD_b_BuffrCrnkPrfrmncWarning_LtchEnbl) ||
                   ((rtb_Logical1_c_tmp == 0U) || rtb_OR1_pq)));

    /* Switch: '<S144>/Switch1' incorporates:
     *  Constant: '<S147>/Calib'
     */
    if (KeESPD_b_BuffrCrnkPrfrmncCalcEnbl)
    {
        /* Switch: '<S144>/Switch1' */
        VeESPD_b_BufferedCrankPrfrncVal = VeESPD_n_Ni_6Deg;
    }
    else
    {
        /* Switch: '<S144>/Switch1' incorporates:
         *  Constant: '<S152>/Calib'
         */
        VeESPD_b_BufferedCrankPrfrncVal = KeESPD_n_BuffrCrnkPrfrmncVal;
    }

    /* End of Switch: '<S144>/Switch1' */

    /* Logic: '<S141>/NOT4' */
    rtb_Switch2_fe1 = ((ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e) ||
                       (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j));

    /* Outputs for Atomic SubSystem: '<S157>/EdgeFalling1' */
    /* Logic: '<S173>/AND' incorporates:
     *  UnitDelay: '<S173>/Unit Delay'
     */
    rtb_OR1_pq = (rtb_OR1_pq && (ESPR_ac_DW.UnitDelay_DSTATE_pz));

    /* Update for UnitDelay: '<S173>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_pz = TmpSignalConversionAtTmpVM_FcnCallSub_a2;

    /* End of Outputs for SubSystem: '<S157>/EdgeFalling1' */

    /* Logic: '<S157>/Logical5' */
    TmpSignalConversionAtTmpVM_FcnCallSub_a2 = (rtb_Switch2_fe1 || rtb_OR1_pq);

    /* Outputs for Atomic SubSystem: '<S172>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S172>/Counter Reset  Enabled ' */
    /* Switch: '<S179>/Switch1' incorporates:
     *  Constant: '<S151>/Calib'
     *  Logic: '<S172>/Fail Counter Reset'
     *  Logic: '<S172>/NOT6'
     *  RelationalOperator: '<S141>/Comparison1'
     *  Switch: '<S179>/Switch2'
     *  Switch: '<S180>/Switch1'
     *  UnitDelay: '<S172>/Unit Delay'
     *  UnitDelay: '<S172>/Unit Delay1'
     */
    if ((TmpSignalConversionAtTmpVM_FcnCallSub_a2 ||
            (ESPR_ac_DW.UnitDelay_DSTATE_by)) || (ESPR_ac_DW.UnitDelay1_DSTATE_k))
    {
        /* Switch: '<S179>/Switch1' incorporates:
         *  Constant: '<S179>/Constant Value2'
         */
        VeESPD_Cnt_BuffrCrnkPrfrmncSpdWarnCnt = 0U;

        /* Switch: '<S180>/Switch1' incorporates:
         *  Constant: '<S180>/Constant Value2'
         */
        VeESPD_Cnt_BuffrCrnkPrfrmncWarnSmplCnt = 0U;
    }
    else
    {
        if (rtb_AND_as && (VeESPD_b_BufferedCrankPrfrncVal <
                           KeESPD_n_BufferedCrankPrfrncWarnThrshld))
        {
            /* Switch: '<S179>/Switch1' incorporates:
             *  Constant: '<S179>/Constant Value1'
             *  Sum: '<S179>/Subtraction'
             *  Switch: '<S179>/Switch2'
             *  UnitDelay: '<S179>/Unit Delay'
             */
            VeESPD_Cnt_BuffrCrnkPrfrmncSpdWarnCnt = (uint16)(((uint32)
                VeESPD_Cnt_BuffrCrnkPrfrmncSpdWarnCnt) + 1U);
        }

        /* Switch: '<S180>/Switch2' */
        if (rtb_AND_as)
        {
            /* Switch: '<S180>/Switch1' incorporates:
             *  Constant: '<S180>/Constant Value1'
             *  Sum: '<S180>/Subtraction'
             *  Switch: '<S180>/Switch2'
             *  UnitDelay: '<S180>/Unit Delay'
             */
            VeESPD_Cnt_BuffrCrnkPrfrmncWarnSmplCnt = (uint16)(((uint32)
                VeESPD_Cnt_BuffrCrnkPrfrmncWarnSmplCnt) + 1U);
        }

        /* End of Switch: '<S180>/Switch2' */
    }

    /* End of Switch: '<S179>/Switch1' */
    /* End of Outputs for SubSystem: '<S172>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S172>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S172>/Greater Than or Equal ' incorporates:
     *  Constant: '<S145>/Calib'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE_k = (VeESPD_Cnt_BuffrCrnkPrfrmncSpdWarnCnt >=
        KeESPD_Cnt_BuffrCrnkPrfrmncWarningCntLmt);

    /* Logic: '<S172>/NOT5' incorporates:
     *  Constant: '<S146>/Calib'
     *  Logic: '<S172>/NOT3'
     *  RelationalOperator: '<S172>/Less Than  or Equal'
     */
    rtb_AND_as = ((VeESPD_Cnt_BuffrCrnkPrfrmncWarnSmplCnt >=
                   KeESPD_Cnt_BuffrCrnkPrfrmncWarningSmplCntLmt) &&
                  (!ESPR_ac_DW.UnitDelay1_DSTATE_k));

    /* Switch: '<S185>/Switch1' incorporates:
     *  Switch: '<S184>/Switch1'
     */
    if (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
    {
        /* DataStoreWrite: '<S141>/Data Store Write1' incorporates:
         *  Constant: '<S178>/Constant Value'
         *  Switch: '<S171>/Switch1'
         */
        ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP = 0U;
    }
    else
    {
        if (rtb_AND_as)
        {
            /* MinMax: '<S178>/Minimum2' incorporates:
             *  DataStoreRead: '<S141>/Data Store Read3'
             *  Switch: '<S184>/Switch1'
             */
            if (VeESPD_Cnt_BuffrCrnkPrfrmncSpdWarnCnt >
                    ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP)
            {
                /* DataStoreWrite: '<S141>/Data Store Write1' incorporates:
                 *  Switch: '<S171>/Switch1'
                 *  Switch: '<S184>/Switch1'
                 */
                ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP =
                    VeESPD_Cnt_BuffrCrnkPrfrmncSpdWarnCnt;
            }

            /* End of MinMax: '<S178>/Minimum2' */
        }
    }

    /* End of Switch: '<S185>/Switch1' */

    /* RelationalOperator: '<S156>/Relational Operator3' incorporates:
     *  Constant: '<S156>/Constant3'
     */
    rtb_AND_gg = (rtb_RelationalOperator3_j_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S156>/EdgeFalling1' */
    /* Logic: '<S156>/Logical Operator' incorporates:
     *  Logic: '<S159>/OR1'
     */
    rtb_AND_iw = !rtb_AND_gg;

    /* End of Outputs for SubSystem: '<S156>/EdgeFalling1' */

    /* Logic: '<S156>/Logical1' incorporates:
     *  Constant: '<S149>/Calib'
     *  Constant: '<S156>/Constant1'
     *  Logic: '<S156>/Logical Operator'
     *  Logic: '<S156>/Logical10'
     *  Logic: '<S156>/Logical12'
     *  RelationalOperator: '<S156>/Relational Operator1'
     */
    rtb_OR1_pq = ((VeESPD_b_BufferCrankPerformance_EnbleCndtn) &&
                  ((!KeESPD_b_DMCM_A_CKP_SnsrCkt_LtchEnbl) ||
                   ((rtb_Logical1_c_tmp == 0U) || rtb_AND_iw)));

    /* RelationalOperator: '<S141>/Comparison2' incorporates:
     *  Constant: '<S150>/Calib'
     */
    rtb_OR1_e = (VeESPD_b_BufferedCrankPrfrncVal <
                 KeESPD_n_BufferedCrankPrfrncFailThrshld);

    /* Outputs for Atomic SubSystem: '<S156>/EdgeFalling1' */
    /* Logic: '<S159>/AND' incorporates:
     *  UnitDelay: '<S159>/Unit Delay'
     */
    rtb_AND_iw = (rtb_AND_iw && (ESPR_ac_DW.UnitDelay_DSTATE_a2));

    /* Update for UnitDelay: '<S159>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_a2 = rtb_AND_gg;

    /* End of Outputs for SubSystem: '<S156>/EdgeFalling1' */

    /* Logic: '<S156>/Logical5' */
    rtb_Switch2_fe1 = (rtb_Switch2_fe1 || rtb_AND_iw);

    /* UnitDelay: '<S158>/Unit Delay1' incorporates:
     *  UnitDelay: '<S172>/Unit Delay'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_by = ESPR_ac_DW.UnitDelay1_DSTATE_m;

    /* Outputs for Atomic SubSystem: '<S158>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S158>/Counter Reset  Enabled ' */
    /* Switch: '<S165>/Switch1' incorporates:
     *  Logic: '<S158>/Fail Counter Reset'
     *  Logic: '<S158>/NOT6'
     *  Switch: '<S165>/Switch2'
     *  Switch: '<S166>/Switch1'
     *  UnitDelay: '<S158>/Unit Delay'
     *  UnitDelay: '<S172>/Unit Delay'
     */
    if ((rtb_Switch2_fe1 || (ESPR_ac_DW.UnitDelay_DSTATE_o3)) ||
            (ESPR_ac_DW.UnitDelay_DSTATE_by))
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S165>/Constant Value2'
         */
        VeESPD_Cnt_BuffrCrnkPrfrmncFailCnt = 0U;

        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S166>/Constant Value2'
         */
        VeESPD_Cnt_BuffrCrnkPrfrmncFailSmplCnt = 0U;
    }
    else
    {
        if (rtb_OR1_pq && rtb_OR1_e)
        {
            /* Switch: '<S165>/Switch1' incorporates:
             *  Constant: '<S165>/Constant Value1'
             *  Sum: '<S165>/Subtraction'
             *  Switch: '<S165>/Switch2'
             *  UnitDelay: '<S165>/Unit Delay'
             */
            VeESPD_Cnt_BuffrCrnkPrfrmncFailCnt = (uint16)(((uint32)
                VeESPD_Cnt_BuffrCrnkPrfrmncFailCnt) + 1U);
        }

        /* Switch: '<S166>/Switch2' */
        if (rtb_OR1_pq)
        {
            /* Switch: '<S166>/Switch1' incorporates:
             *  Constant: '<S166>/Constant Value1'
             *  Sum: '<S166>/Subtraction'
             *  Switch: '<S166>/Switch2'
             *  UnitDelay: '<S166>/Unit Delay'
             */
            VeESPD_Cnt_BuffrCrnkPrfrmncFailSmplCnt = (uint16)(((uint32)
                VeESPD_Cnt_BuffrCrnkPrfrmncFailSmplCnt) + 1U);
        }

        /* End of Switch: '<S166>/Switch2' */
    }

    /* End of Switch: '<S165>/Switch1' */
    /* End of Outputs for SubSystem: '<S158>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S158>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S158>/Greater Than or Equal ' incorporates:
     *  Lookup_n-D: '<S154>/Vector'
     *  Switch: '<S25>/Switch1'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE_m = (((float32)
        VeESPD_Cnt_BuffrCrnkPrfrmncFailCnt) >= look1_iflf_binlca_16a
        (VeESPD_n_EngineSpeed, ((const float32 *)
        &(KxESPD_Cnt_BuffrCrnkPrfrmncFailureCntLmt[0])), ((const float32 *)
        &(KtESPD_Cnt_BuffrCrnkPrfrmncFailureCntLmt[0])), 5U));

    /* Logic: '<S158>/NOT5' incorporates:
     *  Logic: '<S158>/NOT3'
     *  Lookup_n-D: '<S155>/Vector'
     *  RelationalOperator: '<S158>/Less Than  or Equal'
     *  Switch: '<S25>/Switch1'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_o3 = ((((float32)
        VeESPD_Cnt_BuffrCrnkPrfrmncFailSmplCnt) >= look1_iflf_binlca_16a
        (VeESPD_n_EngineSpeed, ((const float32 *)
        &(KxESPD_Cnt_BuffrCrnkPrfrmncFailureSmplCntLmt[0])), ((const float32 *)
        &(KtESPD_Cnt_BuffrCrnkPrfrmncFailureSmplCntLmt[0])), 5U)) &&
        (!ESPR_ac_DW.UnitDelay1_DSTATE_m));

    /* Switch: '<S171>/Switch1' incorporates:
     *  Switch: '<S170>/Switch1'
     */
    if (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
    {
        /* DataStoreWrite: '<S141>/Data Store Write5' incorporates:
         *  Constant: '<S164>/Constant Value'
         *  Switch: '<S171>/Switch1'
         */
        ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP = 0U;
    }
    else
    {
        if (ESPR_ac_DW.UnitDelay_DSTATE_o3)
        {
            /* MinMax: '<S164>/Minimum2' incorporates:
             *  DataStoreRead: '<S141>/Data Store Read5'
             *  Switch: '<S170>/Switch1'
             */
            if (VeESPD_Cnt_BuffrCrnkPrfrmncFailCnt >
                    ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP)
            {
                /* DataStoreWrite: '<S141>/Data Store Write5' incorporates:
                 *  Switch: '<S170>/Switch1'
                 *  Switch: '<S171>/Switch1'
                 */
                ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP =
                    VeESPD_Cnt_BuffrCrnkPrfrmncFailCnt;
            }

            /* End of MinMax: '<S164>/Minimum2' */
        }
    }

    /* End of Switch: '<S171>/Switch1' */

    /* Logic: '<S141>/Logical4' */
    VeESPR_b_P1AC6Failing = (rtb_OR1_e &&
        (VeESPD_b_BufferCrankPerformance_EnbleCndtn));

    /* VariantMerge generated from: '<S129>/VeESPR_b_CrnkSensorFailing' incorporates:
     *  Logic: '<S141>/Logical1'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPR_b_CrnkSenso = ((VeESPR_b_P1AC6Failing)
        || TmpSignalConversionAtTmpVM_FcnCallSubs_n);

    /* VariantMerge generated from: '<S129>/VeESPR_b_BuffrCrnkDiagFailing' incorporates:
     *  Logic: '<S141>/Logical3'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPR_b_BuffrCrnk =
        (((VeESPR_b_P1AC6Failing) || (VeESPD_b_P1AC7_FailCrtMet)) ||
         TmpSignalConversionAtTmpVM_FcnCallSubs_n);

    /* Outputs for Enabled SubSystem: '<S156>/Fail' */
    ESPR_ac_Fail(ESPR_ac_DW.UnitDelay1_DSTATE_m,
                 &ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A__i);

    /* End of Outputs for SubSystem: '<S156>/Fail' */

    /* Outputs for Enabled SubSystem: '<S156>/Init' */
    ESPR_ac_Init_h(rtb_Switch2_fe1,
                   &ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A__i);

    /* End of Outputs for SubSystem: '<S156>/Init' */

    /* Outputs for Enabled SubSystem: '<S156>/Pass' */
    ESPR_ac_Pass(ESPR_ac_DW.UnitDelay_DSTATE_o3,
                 &ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A__i);

    /* End of Outputs for SubSystem: '<S156>/Pass' */

    /* VariantMerge generated from: '<S129>/VeESPD_b_BuffrCrnkPrfrmncFltDtct' incorporates:
     *  Constant: '<S160>/Constant'
     *  RelationalOperator: '<S156>/Relational Operator'
     *  VariantMerge generated from: '<S129>/FaultSts_DMCM_A_CKP_SnsrCkt'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPD_b_BuffrCr_e = (((uint32)
        ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A__i) == CeDFIB_e_Fail);

    /* Outputs for Enabled SubSystem: '<S157>/Fail' */
    ESPR_ac_Fail(ESPR_ac_DW.UnitDelay1_DSTATE_k, &ESPR_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S157>/Fail' */

    /* Outputs for Enabled SubSystem: '<S157>/Init' */
    ESPR_ac_Init_h(TmpSignalConversionAtTmpVM_FcnCallSub_a2, &ESPR_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S157>/Init' */

    /* Outputs for Enabled SubSystem: '<S157>/Pass' */
    ESPR_ac_Pass(rtb_AND_as, &ESPR_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S157>/Pass' */

    /* Update for UnitDelay: '<S172>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_by = rtb_AND_as;

    /* End of Outputs for SubSystem: '<S129>/BufferCrankPerformance' */
#else

    /* Outputs for Atomic SubSystem: '<S129>/BufferCrankPerformanceStub' */
    /* VariantMerge generated from: '<S129>/VeESPD_b_BuffrCrnkPrfrmncFltDtct' incorporates:
     *  Constant: '<S142>/FALSEConstant'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPD_b_BuffrCr_e = false;

    /* VariantMerge generated from: '<S129>/VeESPR_b_BuffrCrnkDiagFailing' incorporates:
     *  Constant: '<S142>/FALSEConstant1'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPR_b_BuffrCrnk = false;

    /* VariantMerge generated from: '<S129>/VeESPR_b_CrnkSensorFailing' incorporates:
     *  Constant: '<S142>/FALSEConstant2'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPR_b_CrnkSenso = false;

    /* VariantMerge generated from: '<S129>/FaultSts_DMCM_A_CKP_SnsrCkt' incorporates:
     *  Constant: '<S186>/Constant'
     */
    ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A__i = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S129>/BufferCrankPerformanceStub' */
#endif

    /* End of Outputs for SubSystem: '<S25>/BufferCrankPerformance' */

    /* Switch: '<S25>/Switch3' incorporates:
     *  Constant: '<S137>/Calib'
     */
#if Rte_SysCon_Variant_ESPR_1 || Rte_SysCon_Variant_ESPR_2

    if (KeESPD_b_TransInSpdOvrdEnbl)
    {
        /* Switch: '<S25>/Switch3' incorporates:
         *  Constant: '<S140>/Calib'
         */
        VeESPD_n_TransInSpd = KeESPD_n_TransInSpdOvrdVal;
    }
    else
    {
        /* Switch: '<S25>/Switch3' */
        VeESPD_n_TransInSpd = ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d;
    }

#endif

    /* End of Switch: '<S25>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S25>/EngNegSpeed' */
#if Rte_SysCon_Variant_ESPR_2

    /* Outputs for Atomic SubSystem: '<S131>/EngNegSpeed' */
    /* Logic: '<S216>/Logical Operator' incorporates:
     *  Logic: '<S216>/Logical2'
     */
    rtb_AND_as = ((!ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j4) &&
                  (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ai));

    /* S-Function (sfix_bitop): '<S230>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S229>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_j_tmp = ((uint32)
        ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c) & 64U;

    /* RelationalOperator: '<S230>/Relational Operator3' incorporates:
     *  Constant: '<S230>/Constant3'
     *  S-Function (sfix_bitop): '<S230>/Bitwise Operator2'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_a2 = (rtb_RelationalOperator3_j_tmp ==
        0U);

    /* Outputs for Atomic SubSystem: '<S230>/EdgeFalling1' */
    /* Logic: '<S230>/Logical Operator' incorporates:
     *  Logic: '<S246>/OR1'
     */
    rtb_OR1_pq = !TmpSignalConversionAtTmpVM_FcnCallSub_a2;

    /* End of Outputs for SubSystem: '<S230>/EdgeFalling1' */

    /* S-Function (sfix_bitop): '<S230>/Bitwise Operator3' incorporates:
     *  S-Function (sfix_bitop): '<S229>/Bitwise Operator3'
     */
    rtb_Logical1_c_tmp = ((uint32)
                          ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c) &
        1U;

    /* Logic: '<S230>/Logical1' incorporates:
     *  Constant: '<S225>/Calib'
     *  Constant: '<S230>/Constant1'
     *  Logic: '<S230>/Logical Operator'
     *  Logic: '<S230>/Logical10'
     *  Logic: '<S230>/Logical12'
     *  RelationalOperator: '<S230>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S230>/Bitwise Operator3'
     */
    rtb_Switch2_fe1 = (rtb_AND_as && ((!KeESPD_b_EngNegSpdWarning_LtchEnbl) ||
                        ((rtb_Logical1_c_tmp == 0U) || rtb_OR1_pq)));

    /* Switch: '<S218>/Switch1' incorporates:
     *  Constant: '<S223>/Calib'
     */
    if (KeESPD_b_EngNegSpdCntrlEnbl)
    {
        /* Switch: '<S218>/Switch1' */
        VeESPD_n_EngNegSpdFBVal = VeESPD_n_TransInSpd;
    }
    else
    {
        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S226>/Calib'
         */
        VeESPD_n_EngNegSpdFBVal = KeESPD_n_EngNegSpdCntrlVal;
    }

    /* End of Switch: '<S218>/Switch1' */

    /* Logic: '<S216>/NOT4' */
    TmpSignalConversionAtTmpVM_FcnCallSubs_n =
        ((ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e) ||
         (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j));

    /* Outputs for Atomic SubSystem: '<S230>/EdgeFalling1' */
    /* Logic: '<S246>/AND' incorporates:
     *  UnitDelay: '<S246>/Unit Delay'
     */
    rtb_OR1_pq = (rtb_OR1_pq && (ESPR_ac_DW.UnitDelay_DSTATE_et));

    /* Update for UnitDelay: '<S246>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_et = TmpSignalConversionAtTmpVM_FcnCallSub_a2;

    /* End of Outputs for SubSystem: '<S230>/EdgeFalling1' */

    /* Logic: '<S230>/Logical5' */
    TmpSignalConversionAtTmpVM_FcnCallSub_a2 =
        (TmpSignalConversionAtTmpVM_FcnCallSubs_n || rtb_OR1_pq);

    /* Outputs for Atomic SubSystem: '<S245>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S245>/Counter Reset  Enabled ' */
    /* Switch: '<S252>/Switch1' incorporates:
     *  Constant: '<S228>/Calib'
     *  Logic: '<S245>/Fail Counter Reset'
     *  Logic: '<S245>/NOT6'
     *  RelationalOperator: '<S216>/Greater  Than1'
     *  Switch: '<S252>/Switch2'
     *  Switch: '<S253>/Switch1'
     *  UnitDelay: '<S245>/Unit Delay'
     *  UnitDelay: '<S245>/Unit Delay1'
     */
    if ((TmpSignalConversionAtTmpVM_FcnCallSub_a2 ||
            (ESPR_ac_DW.UnitDelay_DSTATE_aw)) || (ESPR_ac_DW.UnitDelay1_DSTATE_h))
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S252>/Constant Value2'
         */
        VeESPD_Cnt_EngNegSpdWarnCnt = 0U;

        /* Switch: '<S253>/Switch1' incorporates:
         *  Constant: '<S253>/Constant Value2'
         */
        VeESPD_Cnt_EngNegSpdWarnSmplCnt = 0U;
    }
    else
    {
        if (rtb_Switch2_fe1 && (VeESPD_n_EngNegSpdFBVal <
                                KeESPD_n_EngNegSpdWarningThrshld))
        {
            /* Switch: '<S252>/Switch1' incorporates:
             *  Constant: '<S252>/Constant Value1'
             *  Sum: '<S252>/Subtraction'
             *  Switch: '<S252>/Switch2'
             *  UnitDelay: '<S252>/Unit Delay'
             */
            VeESPD_Cnt_EngNegSpdWarnCnt = (uint16)(((uint32)
                VeESPD_Cnt_EngNegSpdWarnCnt) + 1U);
        }

        /* Switch: '<S253>/Switch2' */
        if (rtb_Switch2_fe1)
        {
            /* Switch: '<S253>/Switch1' incorporates:
             *  Constant: '<S253>/Constant Value1'
             *  Sum: '<S253>/Subtraction'
             *  Switch: '<S253>/Switch2'
             *  UnitDelay: '<S253>/Unit Delay'
             */
            VeESPD_Cnt_EngNegSpdWarnSmplCnt = (uint16)(((uint32)
                VeESPD_Cnt_EngNegSpdWarnSmplCnt) + 1U);
        }

        /* End of Switch: '<S253>/Switch2' */
    }

    /* End of Switch: '<S252>/Switch1' */
    /* End of Outputs for SubSystem: '<S245>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S245>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S245>/Greater Than or Equal ' incorporates:
     *  Constant: '<S221>/Calib'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE_h = (VeESPD_Cnt_EngNegSpdWarnCnt >=
        KeESPD_Cnt_EngNegSpdWarningCntLmt);

    /* Logic: '<S245>/NOT5' incorporates:
     *  Constant: '<S222>/Calib'
     *  Logic: '<S245>/NOT3'
     *  RelationalOperator: '<S245>/Less Than  or Equal'
     */
    rtb_Switch2_fe1 = ((VeESPD_Cnt_EngNegSpdWarnSmplCnt >=
                        KeESPD_Cnt_EngNegSpdWarningSmplCntLmt) &&
                       (!ESPR_ac_DW.UnitDelay1_DSTATE_h));

    /* Switch: '<S258>/Switch1' incorporates:
     *  Switch: '<S257>/Switch1'
     */
    if (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
    {
        /* DataStoreWrite: '<S216>/Data Store Write1' incorporates:
         *  Constant: '<S251>/Constant Value'
         *  Switch: '<S244>/Switch1'
         */
        ESPR_ac_DW.NeESPD_Cnt_EngNegSpdWarnMFOP = 0U;
    }
    else
    {
        if (rtb_Switch2_fe1)
        {
            /* MinMax: '<S251>/Minimum2' incorporates:
             *  DataStoreRead: '<S216>/Data Store Read3'
             *  Switch: '<S257>/Switch1'
             */
            if (VeESPD_Cnt_EngNegSpdWarnCnt >
                    ESPR_ac_DW.NeESPD_Cnt_EngNegSpdWarnMFOP)
            {
                /* DataStoreWrite: '<S216>/Data Store Write1' incorporates:
                 *  Switch: '<S244>/Switch1'
                 *  Switch: '<S257>/Switch1'
                 */
                ESPR_ac_DW.NeESPD_Cnt_EngNegSpdWarnMFOP =
                    VeESPD_Cnt_EngNegSpdWarnCnt;
            }

            /* End of MinMax: '<S251>/Minimum2' */
        }
    }

    /* End of Switch: '<S258>/Switch1' */

    /* RelationalOperator: '<S229>/Relational Operator3' incorporates:
     *  Constant: '<S229>/Constant3'
     */
    rtb_OR1_pq = (rtb_RelationalOperator3_j_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S229>/EdgeFalling1' */
    /* Logic: '<S229>/Logical Operator' incorporates:
     *  Logic: '<S232>/OR1'
     */
    rtb_OR1_e = !rtb_OR1_pq;

    /* End of Outputs for SubSystem: '<S229>/EdgeFalling1' */

    /* Logic: '<S229>/Logical1' incorporates:
     *  Constant: '<S224>/Calib'
     *  Constant: '<S229>/Constant1'
     *  Logic: '<S229>/Logical Operator'
     *  Logic: '<S229>/Logical10'
     *  Logic: '<S229>/Logical12'
     *  RelationalOperator: '<S229>/Relational Operator1'
     */
    rtb_AND_as = (rtb_AND_as && ((!KeESPD_b_EngNegSpdFailure_LtchEnbl) ||
                   ((rtb_Logical1_c_tmp == 0U) || rtb_OR1_e)));

    /* Outputs for Atomic SubSystem: '<S229>/EdgeFalling1' */
    /* Logic: '<S232>/AND' incorporates:
     *  UnitDelay: '<S232>/Unit Delay'
     */
    rtb_OR1_e = (rtb_OR1_e && (ESPR_ac_DW.UnitDelay_DSTATE_gd));

    /* Update for UnitDelay: '<S232>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_gd = rtb_OR1_pq;

    /* End of Outputs for SubSystem: '<S229>/EdgeFalling1' */

    /* Logic: '<S229>/Logical5' */
    TmpSignalConversionAtTmpVM_FcnCallSubs_n =
        (TmpSignalConversionAtTmpVM_FcnCallSubs_n || rtb_OR1_e);

    /* UnitDelay: '<S231>/Unit Delay1' incorporates:
     *  UnitDelay: '<S245>/Unit Delay'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_aw = ESPR_ac_DW.UnitDelay1_DSTATE_d;

    /* Outputs for Atomic SubSystem: '<S231>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S231>/Counter Reset  Enabled ' */
    /* Switch: '<S238>/Switch1' incorporates:
     *  Constant: '<S227>/Calib'
     *  Logic: '<S231>/Fail Counter Reset'
     *  Logic: '<S231>/NOT6'
     *  RelationalOperator: '<S216>/Greater  Than2'
     *  Switch: '<S238>/Switch2'
     *  Switch: '<S239>/Switch1'
     *  UnitDelay: '<S231>/Unit Delay'
     *  UnitDelay: '<S245>/Unit Delay'
     */
    if ((TmpSignalConversionAtTmpVM_FcnCallSubs_n ||
            (ESPR_ac_DW.UnitDelay_DSTATE_ez)) || (ESPR_ac_DW.UnitDelay_DSTATE_aw))
    {
        /* Switch: '<S238>/Switch1' incorporates:
         *  Constant: '<S238>/Constant Value2'
         */
        VeESPD_Cnt_EngNegSpdFailCnt = 0U;

        /* Switch: '<S239>/Switch1' incorporates:
         *  Constant: '<S239>/Constant Value2'
         */
        VeESPD_Cnt_EngNegSpdFailSmplCnt = 0U;
    }
    else
    {
        if (rtb_AND_as && (VeESPD_n_EngNegSpdFBVal <
                           KeESPD_n_EngNegSpdFailureThrshld))
        {
            /* Switch: '<S238>/Switch1' incorporates:
             *  Constant: '<S238>/Constant Value1'
             *  Sum: '<S238>/Subtraction'
             *  Switch: '<S238>/Switch2'
             *  UnitDelay: '<S238>/Unit Delay'
             */
            VeESPD_Cnt_EngNegSpdFailCnt = (uint16)(((uint32)
                VeESPD_Cnt_EngNegSpdFailCnt) + 1U);
        }

        /* Switch: '<S239>/Switch2' */
        if (rtb_AND_as)
        {
            /* Switch: '<S239>/Switch1' incorporates:
             *  Constant: '<S239>/Constant Value1'
             *  Sum: '<S239>/Subtraction'
             *  Switch: '<S239>/Switch2'
             *  UnitDelay: '<S239>/Unit Delay'
             */
            VeESPD_Cnt_EngNegSpdFailSmplCnt = (uint16)(((uint32)
                VeESPD_Cnt_EngNegSpdFailSmplCnt) + 1U);
        }

        /* End of Switch: '<S239>/Switch2' */
    }

    /* End of Switch: '<S238>/Switch1' */
    /* End of Outputs for SubSystem: '<S231>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S231>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S231>/Greater Than or Equal ' incorporates:
     *  Constant: '<S219>/Calib'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE_d = (VeESPD_Cnt_EngNegSpdFailCnt >=
        KeESPD_Cnt_EngNegSpdFailureCntLmt);

    /* Logic: '<S231>/NOT5' incorporates:
     *  Constant: '<S220>/Calib'
     *  Logic: '<S231>/NOT3'
     *  RelationalOperator: '<S231>/Less Than  or Equal'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_ez = ((VeESPD_Cnt_EngNegSpdFailSmplCnt >=
        KeESPD_Cnt_EngNegSpdFailureSmplCntLmt) &&
        (!ESPR_ac_DW.UnitDelay1_DSTATE_d));

    /* Switch: '<S244>/Switch1' incorporates:
     *  Switch: '<S243>/Switch1'
     */
    if (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
    {
        /* DataStoreWrite: '<S216>/Data Store Write5' incorporates:
         *  Constant: '<S237>/Constant Value'
         *  Switch: '<S244>/Switch1'
         */
        ESPR_ac_DW.NeESPD_Cnt_EngNegSpdFailureMFOP = 0U;
    }
    else
    {
        if (ESPR_ac_DW.UnitDelay_DSTATE_ez)
        {
            /* MinMax: '<S237>/Minimum2' incorporates:
             *  DataStoreRead: '<S216>/Data Store Read5'
             *  Switch: '<S243>/Switch1'
             */
            if (VeESPD_Cnt_EngNegSpdFailCnt >
                    ESPR_ac_DW.NeESPD_Cnt_EngNegSpdFailureMFOP)
            {
                /* DataStoreWrite: '<S216>/Data Store Write5' incorporates:
                 *  Switch: '<S243>/Switch1'
                 *  Switch: '<S244>/Switch1'
                 */
                ESPR_ac_DW.NeESPD_Cnt_EngNegSpdFailureMFOP =
                    VeESPD_Cnt_EngNegSpdFailCnt;
            }

            /* End of MinMax: '<S237>/Minimum2' */
        }
    }

    /* End of Switch: '<S244>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S229>/Fail' */
    ESPR_ac_Fail(ESPR_ac_DW.UnitDelay1_DSTATE_d,
                 &ESPR_ac_B.VariantMergeForOutportFaultSts_EngNegSpd);

    /* End of Outputs for SubSystem: '<S229>/Fail' */

    /* Outputs for Enabled SubSystem: '<S229>/Init' */
    ESPR_ac_Init_h(TmpSignalConversionAtTmpVM_FcnCallSubs_n,
                   &ESPR_ac_B.VariantMergeForOutportFaultSts_EngNegSpd);

    /* End of Outputs for SubSystem: '<S229>/Init' */

    /* Outputs for Enabled SubSystem: '<S229>/Pass' */
    ESPR_ac_Pass(ESPR_ac_DW.UnitDelay_DSTATE_ez,
                 &ESPR_ac_B.VariantMergeForOutportFaultSts_EngNegSpd);

    /* End of Outputs for SubSystem: '<S229>/Pass' */

    /* VariantMerge generated from: '<S131>/VeESPR_b_EngNegSpdFltDtct' incorporates:
     *  Constant: '<S233>/Constant'
     *  RelationalOperator: '<S229>/Relational Operator'
     *  VariantMerge generated from: '<S131>/FaultSts_EngNegSpd'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPR_b_EngNegSpd = (((uint32)
        ESPR_ac_B.VariantMergeForOutportFaultSts_EngNegSpd) == CeDFIB_e_Fail);

    /* Outputs for Enabled SubSystem: '<S230>/Fail' */
    ESPR_ac_Fail(ESPR_ac_DW.UnitDelay1_DSTATE_h, &ESPR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S230>/Fail' */

    /* Outputs for Enabled SubSystem: '<S230>/Init' */
    ESPR_ac_Init_h(TmpSignalConversionAtTmpVM_FcnCallSub_a2, &ESPR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S230>/Init' */

    /* Outputs for Enabled SubSystem: '<S230>/Pass' */
    ESPR_ac_Pass(rtb_Switch2_fe1, &ESPR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S230>/Pass' */

    /* Update for UnitDelay: '<S245>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_aw = rtb_Switch2_fe1;

    /* End of Outputs for SubSystem: '<S131>/EngNegSpeed' */
    /* End of Outputs for SubSystem: '<S25>/EngNegSpeed' */
#else

    /* Outputs for Atomic SubSystem: '<S131>/EngNegSpeedStub' */
    /* VariantMerge generated from: '<S131>/VeESPR_b_EngNegSpdFltDtct' incorporates:
     *  Constant: '<S217>/FALSEConstant'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPR_b_EngNegSpd = false;

    /* VariantMerge generated from: '<S131>/FaultSts_EngNegSpd' incorporates:
     *  Constant: '<S259>/Constant'
     */
    ESPR_ac_B.VariantMergeForOutportFaultSts_EngNegSpd = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S131>/EngNegSpeedStub' */
#endif

    /* Outputs for Atomic SubSystem: '<S25>/EngOverSpeed' */
#if Rte_SysCon_Variant_ESPR_1

    /* Outputs for Atomic SubSystem: '<S132>/EngOverSpeed' */
    /* Logic: '<S260>/Logical Operator' incorporates:
     *  Logic: '<S260>/Logical2'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_a2 =
        ((!ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j4) &&
         (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ai));

    /* S-Function (sfix_bitop): '<S273>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S274>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_j_tmp = ((uint32)
        ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy) & 64U;

    /* RelationalOperator: '<S273>/Relational Operator3' incorporates:
     *  Constant: '<S273>/Constant3'
     *  S-Function (sfix_bitop): '<S273>/Bitwise Operator2'
     */
    rtb_AND_as = (rtb_RelationalOperator3_j_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S273>/EdgeFalling1' */
    /* Logic: '<S273>/Logical Operator' incorporates:
     *  Logic: '<S276>/OR1'
     */
    rtb_OR1_pq = !rtb_AND_as;

    /* End of Outputs for SubSystem: '<S273>/EdgeFalling1' */

    /* S-Function (sfix_bitop): '<S273>/Bitwise Operator3' incorporates:
     *  S-Function (sfix_bitop): '<S274>/Bitwise Operator3'
     */
    rtb_Logical1_c_tmp = ((uint32)
                          ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy) &
        1U;

    /* Logic: '<S273>/Logical1' incorporates:
     *  Constant: '<S269>/Calib'
     *  Constant: '<S273>/Constant1'
     *  Logic: '<S273>/Logical Operator'
     *  Logic: '<S273>/Logical10'
     *  Logic: '<S273>/Logical12'
     *  RelationalOperator: '<S273>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S273>/Bitwise Operator3'
     */
    rtb_Switch2_fe1 = (TmpSignalConversionAtTmpVM_FcnCallSub_a2 &&
                       ((!KeESPD_b_EngOvrSpdWarning_LtchEnbl) ||
                        ((rtb_Logical1_c_tmp == 0U) || rtb_OR1_pq)));

    /* Switch: '<S262>/Switch1' incorporates:
     *  Constant: '<S267>/Calib'
     */
    if (KeESPD_b_EngOvrSpdCntrlEnbl)
    {
        /* Switch: '<S262>/Switch1' */
        VeESPD_n_EngOvrSpdFBVal = VeESPD_n_TransInSpd;
    }
    else
    {
        /* Switch: '<S262>/Switch1' incorporates:
         *  Constant: '<S270>/Calib'
         */
        VeESPD_n_EngOvrSpdFBVal = KeESPD_n_EngOvrSpdCntrlVal;
    }

    /* End of Switch: '<S262>/Switch1' */

    /* Logic: '<S260>/NOT4' */
    TmpSignalConversionAtTmpVM_FcnCallSubs_n =
        ((ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e) ||
         (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j));

    /* Outputs for Atomic SubSystem: '<S273>/EdgeFalling1' */
    /* Logic: '<S276>/AND' incorporates:
     *  UnitDelay: '<S276>/Unit Delay'
     */
    rtb_OR1_pq = (rtb_OR1_pq && (ESPR_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S276>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_n = rtb_AND_as;

    /* End of Outputs for SubSystem: '<S273>/EdgeFalling1' */

    /* Logic: '<S273>/Logical5' */
    rtb_AND_as = (TmpSignalConversionAtTmpVM_FcnCallSubs_n || rtb_OR1_pq);

    /* Outputs for Atomic SubSystem: '<S275>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S275>/Counter Reset  Enabled ' */
    /* Switch: '<S282>/Switch1' incorporates:
     *  Constant: '<S272>/Calib'
     *  Logic: '<S275>/Fail Counter Reset'
     *  Logic: '<S275>/NOT6'
     *  RelationalOperator: '<S260>/Greater  Than1'
     *  Switch: '<S282>/Switch2'
     *  Switch: '<S283>/Switch1'
     *  UnitDelay: '<S275>/Unit Delay'
     *  UnitDelay: '<S275>/Unit Delay1'
     */
    if ((rtb_AND_as || (ESPR_ac_DW.UnitDelay_DSTATE_hyn)) ||
            (ESPR_ac_DW.UnitDelay1_DSTATE_f))
    {
        /* Switch: '<S282>/Switch1' incorporates:
         *  Constant: '<S282>/Constant Value2'
         */
        VeESPD_Cnt_EngOvrSpdWarnCnt = 0U;

        /* Switch: '<S283>/Switch1' incorporates:
         *  Constant: '<S283>/Constant Value2'
         */
        VeESPD_Cnt_EngOvrSpdWarnSmplCnt = 0U;
    }
    else
    {
        if (rtb_Switch2_fe1 && (VeESPD_n_EngOvrSpdFBVal >
                                KeESPD_n_EngOvrSpdWarningThrshld))
        {
            /* Switch: '<S282>/Switch1' incorporates:
             *  Constant: '<S282>/Constant Value1'
             *  Sum: '<S282>/Subtraction'
             *  Switch: '<S282>/Switch2'
             *  UnitDelay: '<S282>/Unit Delay'
             */
            VeESPD_Cnt_EngOvrSpdWarnCnt = (uint16)(((uint32)
                VeESPD_Cnt_EngOvrSpdWarnCnt) + 1U);
        }

        /* Switch: '<S283>/Switch2' */
        if (rtb_Switch2_fe1)
        {
            /* Switch: '<S283>/Switch1' incorporates:
             *  Constant: '<S283>/Constant Value1'
             *  Sum: '<S283>/Subtraction'
             *  Switch: '<S283>/Switch2'
             *  UnitDelay: '<S283>/Unit Delay'
             */
            VeESPD_Cnt_EngOvrSpdWarnSmplCnt = (uint16)(((uint32)
                VeESPD_Cnt_EngOvrSpdWarnSmplCnt) + 1U);
        }

        /* End of Switch: '<S283>/Switch2' */
    }

    /* End of Switch: '<S282>/Switch1' */
    /* End of Outputs for SubSystem: '<S275>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S275>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S275>/Greater Than or Equal ' incorporates:
     *  Constant: '<S265>/Calib'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE_f = (VeESPD_Cnt_EngOvrSpdWarnCnt >=
        KeESPD_Cnt_EngOvrSpdWarningCntLmt);

    /* Logic: '<S275>/NOT5' incorporates:
     *  Constant: '<S266>/Calib'
     *  Logic: '<S275>/NOT3'
     *  RelationalOperator: '<S275>/Less Than  or Equal'
     */
    rtb_Switch2_fe1 = ((VeESPD_Cnt_EngOvrSpdWarnSmplCnt >=
                        KeESPD_Cnt_EngOvrSpdWarningSmplCntLmt) &&
                       (!ESPR_ac_DW.UnitDelay1_DSTATE_f));

    /* Switch: '<S288>/Switch1' incorporates:
     *  Switch: '<S287>/Switch1'
     */
    if (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
    {
        /* DataStoreWrite: '<S260>/Data Store Write1' incorporates:
         *  Constant: '<S281>/Constant Value'
         *  Switch: '<S302>/Switch1'
         */
        ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdWarnMFOP = 0U;
    }
    else
    {
        if (rtb_Switch2_fe1)
        {
            /* MinMax: '<S281>/Minimum2' incorporates:
             *  DataStoreRead: '<S260>/Data Store Read3'
             *  Switch: '<S287>/Switch1'
             */
            if (VeESPD_Cnt_EngOvrSpdWarnCnt >
                    ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdWarnMFOP)
            {
                /* DataStoreWrite: '<S260>/Data Store Write1' incorporates:
                 *  Switch: '<S287>/Switch1'
                 *  Switch: '<S302>/Switch1'
                 */
                ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdWarnMFOP =
                    VeESPD_Cnt_EngOvrSpdWarnCnt;
            }

            /* End of MinMax: '<S281>/Minimum2' */
        }
    }

    /* End of Switch: '<S288>/Switch1' */

    /* RelationalOperator: '<S274>/Relational Operator3' incorporates:
     *  Constant: '<S274>/Constant3'
     */
    rtb_OR1_pq = (rtb_RelationalOperator3_j_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S274>/EdgeFalling1' */
    /* Logic: '<S274>/Logical Operator' incorporates:
     *  Logic: '<S290>/OR1'
     */
    rtb_OR1_e = !rtb_OR1_pq;

    /* End of Outputs for SubSystem: '<S274>/EdgeFalling1' */

    /* Logic: '<S274>/Logical1' incorporates:
     *  Constant: '<S268>/Calib'
     *  Constant: '<S274>/Constant1'
     *  Logic: '<S274>/Logical Operator'
     *  Logic: '<S274>/Logical10'
     *  Logic: '<S274>/Logical12'
     *  RelationalOperator: '<S274>/Relational Operator1'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_a2 =
        (TmpSignalConversionAtTmpVM_FcnCallSub_a2 &&
         ((!KeESPD_b_EngOvrSpdFailure_LtchEnbl) || ((rtb_Logical1_c_tmp == 0U) ||
           rtb_OR1_e)));

    /* Outputs for Atomic SubSystem: '<S274>/EdgeFalling1' */
    /* Logic: '<S290>/AND' incorporates:
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_OR1_e = (rtb_OR1_e && (ESPR_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_l = rtb_OR1_pq;

    /* End of Outputs for SubSystem: '<S274>/EdgeFalling1' */

    /* Logic: '<S274>/Logical5' */
    TmpSignalConversionAtTmpVM_FcnCallSubs_n =
        (TmpSignalConversionAtTmpVM_FcnCallSubs_n || rtb_OR1_e);

    /* UnitDelay: '<S289>/Unit Delay1' incorporates:
     *  UnitDelay: '<S275>/Unit Delay'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_hyn = ESPR_ac_DW.UnitDelay1_DSTATE_a;

    /* Outputs for Atomic SubSystem: '<S289>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S289>/Counter Reset  Enabled ' */
    /* Switch: '<S296>/Switch1' incorporates:
     *  Constant: '<S271>/Calib'
     *  Logic: '<S289>/Fail Counter Reset'
     *  Logic: '<S289>/NOT6'
     *  RelationalOperator: '<S260>/Greater  Than2'
     *  Switch: '<S296>/Switch2'
     *  Switch: '<S297>/Switch1'
     *  UnitDelay: '<S275>/Unit Delay'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    if ((TmpSignalConversionAtTmpVM_FcnCallSubs_n ||
            (ESPR_ac_DW.UnitDelay_DSTATE_gv)) ||
            (ESPR_ac_DW.UnitDelay_DSTATE_hyn))
    {
        /* Switch: '<S296>/Switch1' incorporates:
         *  Constant: '<S296>/Constant Value2'
         */
        VeESPD_Cnt_EngOvrSpdFailCnt = 0U;

        /* Switch: '<S297>/Switch1' incorporates:
         *  Constant: '<S297>/Constant Value2'
         */
        VeESPD_Cnt_EngOvrSpdFailSmplCnt = 0U;
    }
    else
    {
        if (TmpSignalConversionAtTmpVM_FcnCallSub_a2 && (VeESPD_n_EngOvrSpdFBVal
             > KeESPD_n_EngOvrSpdFailureThrshld))
        {
            /* Switch: '<S296>/Switch1' incorporates:
             *  Constant: '<S296>/Constant Value1'
             *  Sum: '<S296>/Subtraction'
             *  Switch: '<S296>/Switch2'
             *  UnitDelay: '<S296>/Unit Delay'
             */
            VeESPD_Cnt_EngOvrSpdFailCnt = (uint16)(((uint32)
                VeESPD_Cnt_EngOvrSpdFailCnt) + 1U);
        }

        /* Switch: '<S297>/Switch2' */
        if (TmpSignalConversionAtTmpVM_FcnCallSub_a2)
        {
            /* Switch: '<S297>/Switch1' incorporates:
             *  Constant: '<S297>/Constant Value1'
             *  Sum: '<S297>/Subtraction'
             *  Switch: '<S297>/Switch2'
             *  UnitDelay: '<S297>/Unit Delay'
             */
            VeESPD_Cnt_EngOvrSpdFailSmplCnt = (uint16)(((uint32)
                VeESPD_Cnt_EngOvrSpdFailSmplCnt) + 1U);
        }

        /* End of Switch: '<S297>/Switch2' */
    }

    /* End of Switch: '<S296>/Switch1' */
    /* End of Outputs for SubSystem: '<S289>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S289>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S289>/Greater Than or Equal ' incorporates:
     *  Constant: '<S263>/Calib'
     */
    ESPR_ac_DW.UnitDelay1_DSTATE_a = (VeESPD_Cnt_EngOvrSpdFailCnt >=
        KeESPD_Cnt_EngOvrSpdFailureCntLmt);

    /* Logic: '<S289>/NOT5' incorporates:
     *  Constant: '<S264>/Calib'
     *  Logic: '<S289>/NOT3'
     *  RelationalOperator: '<S289>/Less Than  or Equal'
     */
    ESPR_ac_DW.UnitDelay_DSTATE_gv = ((VeESPD_Cnt_EngOvrSpdFailSmplCnt >=
        KeESPD_Cnt_EngOvrSpdFailureSmplCntLmt) &&
        (!ESPR_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S302>/Switch1' incorporates:
     *  Switch: '<S301>/Switch1'
     */
    if (ESPR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
    {
        /* DataStoreWrite: '<S260>/Data Store Write5' incorporates:
         *  Constant: '<S295>/Constant Value'
         *  Switch: '<S302>/Switch1'
         */
        ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdFailureMFOP = 0U;
    }
    else
    {
        if (ESPR_ac_DW.UnitDelay_DSTATE_gv)
        {
            /* MinMax: '<S295>/Minimum2' incorporates:
             *  DataStoreRead: '<S260>/Data Store Read5'
             *  Switch: '<S301>/Switch1'
             */
            if (VeESPD_Cnt_EngOvrSpdFailCnt >
                    ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdFailureMFOP)
            {
                /* DataStoreWrite: '<S260>/Data Store Write5' incorporates:
                 *  Switch: '<S301>/Switch1'
                 *  Switch: '<S302>/Switch1'
                 */
                ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdFailureMFOP =
                    VeESPD_Cnt_EngOvrSpdFailCnt;
            }

            /* End of MinMax: '<S295>/Minimum2' */
        }
    }

    /* End of Switch: '<S302>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S273>/Fail' */
    ESPR_ac_Fail(ESPR_ac_DW.UnitDelay1_DSTATE_f, &ESPR_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S273>/Fail' */

    /* Outputs for Enabled SubSystem: '<S273>/Init' */
    ESPR_ac_Init_h(rtb_AND_as, &ESPR_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S273>/Init' */

    /* Outputs for Enabled SubSystem: '<S273>/Pass' */
    ESPR_ac_Pass(rtb_Switch2_fe1, &ESPR_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S273>/Pass' */

    /* Outputs for Enabled SubSystem: '<S274>/Fail' */
    ESPR_ac_Fail(ESPR_ac_DW.UnitDelay1_DSTATE_a,
                 &ESPR_ac_B.VariantMergeForOutportFaultSts_EngOvrspd);

    /* End of Outputs for SubSystem: '<S274>/Fail' */

    /* Outputs for Enabled SubSystem: '<S274>/Init' */
    ESPR_ac_Init_h(TmpSignalConversionAtTmpVM_FcnCallSubs_n,
                   &ESPR_ac_B.VariantMergeForOutportFaultSts_EngOvrspd);

    /* End of Outputs for SubSystem: '<S274>/Init' */

    /* Outputs for Enabled SubSystem: '<S274>/Pass' */
    ESPR_ac_Pass(ESPR_ac_DW.UnitDelay_DSTATE_gv,
                 &ESPR_ac_B.VariantMergeForOutportFaultSts_EngOvrspd);

    /* End of Outputs for SubSystem: '<S274>/Pass' */

    /* VariantMerge generated from: '<S132>/VeESPR_b_EngOvrSpdFltDtct' incorporates:
     *  Constant: '<S291>/Constant'
     *  RelationalOperator: '<S274>/Relational Operator'
     *  VariantMerge generated from: '<S132>/FaultSts_EngOvrspd'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPR_b_EngOvrSpd = (((uint32)
        ESPR_ac_B.VariantMergeForOutportFaultSts_EngOvrspd) == CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S275>/Unit Delay' */
    ESPR_ac_DW.UnitDelay_DSTATE_hyn = rtb_Switch2_fe1;

    /* End of Outputs for SubSystem: '<S132>/EngOverSpeed' */
    /* End of Outputs for SubSystem: '<S25>/EngOverSpeed' */
#else

    /* Outputs for Atomic SubSystem: '<S132>/OverSpeedStub' */
    /* VariantMerge generated from: '<S132>/VeESPR_b_EngOvrSpdFltDtct' incorporates:
     *  Constant: '<S261>/FALSEConstant'
     *  SignalConversion: '<S261>/SignalConversion'
     */
    ESPR_ac_B.VariantMergeForOutportVeESPR_b_EngOvrSpd = false;

    /* VariantMerge generated from: '<S132>/FaultSts_EngOvrspd' incorporates:
     *  Constant: '<S303>/Constant'
     */
    ESPR_ac_B.VariantMergeForOutportFaultSts_EngOvrspd = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S132>/OverSpeedStub' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPO_FastTEF'
     */
    /* Logic: '<S306>/AND' */
    VeESPR_b_CrnkSensorFailing =
        ESPR_ac_B.VariantMergeForOutportVeESPR_b_CrnkSenso;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPC_ProcessEng_FastTEF'
     */
    /* Outport: '<Root>/VeESPR_b_TCMEngSpdReqActive' incorporates:
     *  Logic: '<S29>/Logical4'
     *  Logic: '<S29>/Logical5'
     *  Merge: '<Root>/Merge_21'
     *  Merge: '<Root>/Merge_4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESPR_FastTEFInport39'
     *  SignalConversion generated from: '<S1>/TCMEngSpdReqActive_Out'
     */
    (void)Rte_Write_VeESPR_b_TCMEngSpdReqActive_Value
        ((Rte_IrvRead_ESPR_FastTEF_TCMEngSpdReqActive_write_IRV()) &&
         (!Rte_IrvRead_ESPR_FastTEF_VeESPR_b_TCMEngSpdReqFA_Init_write_IRV()));

    /* Outport: '<Root>/VeESPR_b_EngAngle720SyncLrn' incorporates:
     *  Constant: '<S72>/Calib'
     *  SignalConversion generated from: '<S1>/VeESPC_b_EngAngle720SyncLrn'
     *  Switch: '<S46>/Switch'
     */
    (void)Rte_Write_VeESPR_b_EngAngle720SyncLrn_Value
        ((KeESPR_b_EngAngleSyncPhase) && (ESPR_ac_B.LeESPC_b_EngAngle720SyncLrn));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeESPR_phi_EngAngle720Sync' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPC_phi_EngAngle720Sync'
     */
    (void)Rte_Write_VeESPR_phi_EngAngle720Sync_Value(rtb_Switch1_dp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPC_ProcessEng_FastTEF'
     */
    /* Outport: '<Root>/VeESPR_b_EngAngle720SyncFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPC_phi_EngAngle720SyncFA'
     *  SignalConversion: '<S46>/Signal_Conversion4'
     */
    (void)Rte_Write_VeESPR_b_EngAngle720SyncFA_Value(rtb_AND1);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeESPR_b_EngNegSpdFltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPD_b_EngNegSpdFltDtct'
     */
    (void)Rte_Write_VeESPR_b_EngNegSpdFltDtct_Value
        (ESPR_ac_B.VariantMergeForOutportVeESPR_b_EngNegSpd);

    /* Outport: '<Root>/VeESPR_b_EngOvrSpdFltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPD_b_EngOvrSpdFltDtct'
     */
    (void)Rte_Write_VeESPR_b_EngOvrSpdFltDtct_Value
        (ESPR_ac_B.VariantMergeForOutportVeESPR_b_EngOvrSpd);

    /* Outport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_b_BuffrCrnkDiagFailing'
     */
    (void)Rte_Write_VeESPR_b_BuffrCrnkDiagFailing_Value
        (ESPR_ac_B.VariantMergeForOutportVeESPR_b_BuffrCrnk);

    /* Outport: '<Root>/VeESPR_b_BuffrCrnkLckFltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_b_BuffrCrnkLckFltDtct'
     */
    (void)Rte_Write_VeESPR_b_BuffrCrnkLckFltDtct_Value
        (ESPR_ac_B.VariantMergeForOutportVeESPD_b_BuffrCrnk);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPO_FastTEF'
     */
    /* Outport: '<Root>/VeESPR_b_BuffrCrnkPrfrmncFltDtct' incorporates:
     *  Logic: '<S307>/AND'
     *  SignalConversion generated from: '<S1>/VeESPR_b_BuffrCrnkPrfrmncFltDtct'
     */
    (void)Rte_Write_VeESPR_b_BuffrCrnkPrfrmncFltDtct_Value
        (ESPR_ac_B.VariantMergeForOutportVeESPD_b_BuffrCr_e);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPC_ProcessEng_FastTEF'
     */
    /* Switch: '<S29>/Switch3' incorporates:
     *  Constant: '<S86>/Calib'
     */
    if (KeESPR_b_EnblOldSourceSwitchLogic)
    {
        /* Switch: '<S29>/Switch' incorporates:
         *  Constant: '<S29>/TRUEConstant'
         *  Switch: '<S29>/Switch1'
         */
        if (VeESPC_b_LatchEngSpd)
        {
            rtb_AND_as = true;
        }
        else
        {
            rtb_AND_as = ((VeESPC_b_LatchBuffCrk) || (VeESPC_b_CANEngineSpeedFA));
        }

        /* End of Switch: '<S29>/Switch' */
    }
    else
    {
        rtb_AND_as = VeESPC_b_CANEngineSpeedFA;
    }

    /* End of Switch: '<S29>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeESPR_b_CrnkSnsrFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_b_CrnkSnsrFA'
     */
    (void)Rte_Write_VeESPR_b_CrnkSnsrFA_Value(rtb_AND_as);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPO_FastTEF'
     */
    /* Outport: '<Root>/VeESPR_b_EngineSpeed_MCPFA' incorporates:
     *  Logic: '<S26>/Logical1'
     *  SignalConversion generated from: '<S1>/VeESPR_b_EngineSpeed_MCPFA'
     */
    (void)Rte_Write_VeESPR_b_EngineSpeed_MCPFA_Value
        (((ESPR_ac_B.VariantMergeForOutportVeESPD_b_BuffrCr_e) ||
          (VeESPC_b_EngineSpeed_MCPFA)) ||
         (ESPR_ac_B.VariantMergeForOutportVeESPR_b_CrnkSenso));

    /* Outport: '<Root>/VeESPR_b_IUMPR_P1AC6Fail' incorporates:
     *  Constant: '<S26>/FALSEConstant'
     *  Logic: '<S304>/AND'
     *  SignalConversion generated from: '<S1>/VeESPR_b_IUMPR_P1AC6Fail'
     */
    (void)Rte_Write_VeESPR_b_IUMPR_P1AC6Fail_Value(false);

    /* Outport: '<Root>/VeESPR_b_IUMPR_P1AC7Fail' incorporates:
     *  Constant: '<S26>/FALSEConstant1'
     *  Logic: '<S305>/AND'
     *  SignalConversion generated from: '<S1>/VeESPR_b_IUMPR_P1AC7Fail'
     */
    (void)Rte_Write_VeESPR_b_IUMPR_P1AC7Fail_Value(false);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPC_ProcessEng_FastTEF'
     */
    /* Outport: '<Root>/VeESPR_dn_EngineAccel' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_dn_EngineAccel'
     *  SignalConversion: '<S29>/Signal_Conversion1'
     *  UnitDelay: '<S74>/Unit Delay1'
     */
    (void)Rte_Write_VeESPR_dn_EngineAccel_Value(ESPR_ac_DW.UnitDelay1_DSTATE_o);

    /* Outport: '<Root>/VeESPR_dn_EngineAccel_MCP' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_dn_EngineAccel_MCP'
     *  Sum: '<S30>/Sum3'
     */
    (void)Rte_Write_VeESPR_dn_EngineAccel_MCP_Value((VeESPR_dn_NiDot6Deg_Fctr +
        VeESPR_dn_NiDotEPP_Fctr) + VeESPR_dn_NiDot1rev_Fctr);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt'
     *  VariantMerge generated from: '<S129>/FaultSts_DMCM_A_CKP_SnsrCkt'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt_Value
        (ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A__i);

    /* Outport: '<Root>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf'
     *  VariantMerge generated from: '<S130>/FaultSts_DMCM_A_CKP_SnsrPerf'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf_Value
        (ESPR_ac_B.VariantMergeForOutportFaultSts_DMCM_A_CK);

    /* Outport: '<Root>/VeESPR_e_FaultSts_EngNegSpd' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_e_FaultSts_EngNegSpd'
     *  VariantMerge generated from: '<S131>/FaultSts_EngNegSpd'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_EngNegSpd_Value
        (ESPR_ac_B.VariantMergeForOutportFaultSts_EngNegSpd);

    /* Outport: '<Root>/VeESPR_e_FaultSts_EngOvrspd' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_e_FaultSts_EngOvrspd'
     *  VariantMerge generated from: '<S132>/FaultSts_EngOvrspd'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_EngOvrspd_Value
        (ESPR_ac_B.VariantMergeForOutportFaultSts_EngOvrspd);

    /* Outport: '<Root>/VeESPR_n_EngineSpeed' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_n_EngineSpeed'
     */
    (void)Rte_Write_VeESPR_n_EngineSpeed_Value(ESPR_ac_B.Signal_Conversion);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESPC_ProcessEng_FastTEF'
     */
    /* Outport: '<Root>/VeESPR_n_EngineSpeed_MCP' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_n_EngineSpeed_MCP'
     *  Sum: '<S30>/Sum'
     */
    (void)Rte_Write_VeESPR_n_EngineSpeed_MCP_Value((VeESPR_n_Ni6DegFactr +
        VeESPR_n_NiEPPFactr) + VeESPR_n_Ni1revFactr);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeESPR_phi_EngineAngle_MCP' incorporates:
     *  Gain: '<S27>/Gain'
     */
    (void)Rte_Write_VeESPR_phi_EngineAngle_MCP_Value
        (ESPR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p);

    /* Outport: '<Root>/VeESPR_b_EngineAngle_MCPFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_b_EngineAngle_MCPFA'
     */
    (void)Rte_Write_VeESPR_b_EngineAngle_MCPFA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/ESPR_FastTEF' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) FsftESPR_b_CrankMaturingFault(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftESPR_b_CrankMaturingFault' */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  Chart: '<S4>/FsftESPR_b_CrankMaturingFaultChrt'
     *  SignalConversion generated from: '<S4>/VeESPR_b_CrankMaturingFault_write'
     */
    /* Gateway: FsftESPR_b_CrankMaturingFault/FsftESPR_b_CrankMaturingFaultChrt */
    /* During: FsftESPR_b_CrankMaturingFault/FsftESPR_b_CrankMaturingFaultChrt */
    /* Entry Internal: FsftESPR_b_CrankMaturingFault/FsftESPR_b_CrankMaturingFaultChrt */
    /* Transition: '<S325>:2' */
    Rte_IrvWrite_FsftESPR_b_CrankMaturingFault_VeESPR_b_CrankMaturingFault_init_write_IRV
        (KeESPR_b_CrankMaturingFaultDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftESPR_b_CrankMaturingFault' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) FsftESPR_b_ECMCrankPhase(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftESPR_b_ECMCrankPhase' */
    /* Merge: '<Root>/Merge_24' incorporates:
     *  Chart: '<S5>/FsftESPR_b_ECMCrankPhaseChrt'
     *  SignalConversion generated from: '<S5>/VeESPR_b_ECMCrankPhaseFA_write'
     */
    /* Gateway: FsftESPR_b_ECMCrankPhase/FsftESPR_b_ECMCrankPhaseChrt */
    /* During: FsftESPR_b_ECMCrankPhase/FsftESPR_b_ECMCrankPhaseChrt */
    /* Entry Internal: FsftESPR_b_ECMCrankPhase/FsftESPR_b_ECMCrankPhaseChrt */
    /* Transition: '<S326>:2' */
    Rte_IrvWrite_FsftESPR_b_ECMCrankPhase_VeESPR_e_ECMCrankPhaseFA_init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftESPR_b_ECMCrankPhase' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) FsftESPR_e_EngineSpeedStatus(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftESPR_e_EngineSpeedStatus' */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  Chart: '<S6>/FsftESPR_e_EngineSpeedStatusChrt'
     *  SignalConversion generated from: '<S6>/VeESPR_b_EngineSpeedStatusFA_write'
     */
    /* Gateway: FsftESPR_e_EngineSpeedStatus/FsftESPR_e_EngineSpeedStatusChrt */
    /* During: FsftESPR_e_EngineSpeedStatus/FsftESPR_e_EngineSpeedStatusChrt */
    /* Entry Internal: FsftESPR_e_EngineSpeedStatus/FsftESPR_e_EngineSpeedStatusChrt */
    /* Transition: '<S327>:2' */
    Rte_IrvWrite_FsftESPR_e_EngineSpeedStatus_VeESPR_b_EngineSpeedStatusFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftESPR_e_EngineSpeedStatus' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) FsftESPR_n_EngHalfCylSpdMaxLim(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftESPR_n_EngHalfCylSpdMaxLim' */
    /* Outport: '<Root>/VeESPR_n_EngHalfCylSpdMaxLim' incorporates:
     *  Chart: '<S7>/FsftESPR_n_EngHalfCylSpdMaxLimChrt'
     *  SignalConversion generated from: '<S7>/VeESPR_n_EngHalfCylSpdMaxLim'
     */
    /* Gateway: FsftESPR_n_EngHalfCylSpdMaxLim/FsftESPR_n_EngHalfCylSpdMaxLimChrt */
    /* During: FsftESPR_n_EngHalfCylSpdMaxLim/FsftESPR_n_EngHalfCylSpdMaxLimChrt */
    /* Entry Internal: FsftESPR_n_EngHalfCylSpdMaxLim/FsftESPR_n_EngHalfCylSpdMaxLimChrt */
    /* Transition: '<S328>:2' */
    (void)Rte_Write_VeESPR_n_EngHalfCylSpdMaxLim_Value
        (KeESPR_n_EngHalfCylSpdMaxLimDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftESPR_n_EngHalfCylSpdMaxLim' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) FsftESPR_n_EngHalfCylSpdMinLim(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftESPR_n_EngHalfCylSpdMinLim' */
    /* Outport: '<Root>/VeESPR_n_EngHalfCylSpdMinLim' incorporates:
     *  Chart: '<S8>/FsftESPR_n_EngHalfCylSpdMinLimChrt'
     *  SignalConversion generated from: '<S8>/VeESPR_n_EngHalfCylSpdMinLim'
     */
    /* Gateway: FsftESPR_n_EngHalfCylSpdMinLim/FsftESPR_n_EngHalfCylSpdMinLimChrt */
    /* During: FsftESPR_n_EngHalfCylSpdMinLim/FsftESPR_n_EngHalfCylSpdMinLimChrt */
    /* Entry Internal: FsftESPR_n_EngHalfCylSpdMinLim/FsftESPR_n_EngHalfCylSpdMinLimChrt */
    /* Transition: '<S329>:2' */
    (void)Rte_Write_VeESPR_n_EngHalfCylSpdMinLim_Value
        (KeESPR_n_EngHalfCylSpdMinLimDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftESPR_n_EngHalfCylSpdMinLim' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) FsftESPR_n_EngSpdMaxLim(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftESPR_n_EngSpdMaxLim' */
    /* Outport: '<Root>/VeESPR_n_EngSpdMaxLim' incorporates:
     *  Chart: '<S9>/FsftESPR_n_EngSpdMaxLimChrt'
     *  SignalConversion generated from: '<S9>/VeESPR_n_EngSpdMaxLim'
     */
    /* Gateway: FsftESPR_n_EngSpdMaxLim/FsftESPR_n_EngSpdMaxLimChrt */
    /* During: FsftESPR_n_EngSpdMaxLim/FsftESPR_n_EngSpdMaxLimChrt */
    /* Entry Internal: FsftESPR_n_EngSpdMaxLim/FsftESPR_n_EngSpdMaxLimChrt */
    /* Transition: '<S330>:2' */
    (void)Rte_Write_VeESPR_n_EngSpdMaxLim_Value(KeESPR_n_EngSpdMaxLimDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftESPR_n_EngSpdMaxLim' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) FsftESPR_n_EngSpdMinLim(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftESPR_n_EngSpdMinLim' */
    /* Outport: '<Root>/VeESPR_n_EngSpdMinLim' incorporates:
     *  Chart: '<S10>/FsftESPR_n_EngSpdMinLimChrt'
     *  SignalConversion generated from: '<S10>/VeESPR_n_EngSpdMinLim'
     */
    /* Gateway: FsftESPR_n_EngSpdMinLim/FsftESPR_n_EngSpdMinLimChrt */
    /* During: FsftESPR_n_EngSpdMinLim/FsftESPR_n_EngSpdMinLimChrt */
    /* Entry Internal: FsftESPR_n_EngSpdMinLim/FsftESPR_n_EngSpdMinLimChrt */
    /* Transition: '<S331>:2' */
    (void)Rte_Write_VeESPR_n_EngSpdMinLim_Value(KeESPR_n_EngSpdMinLimDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftESPR_n_EngSpdMinLim' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) FsftESPR_n_EngineSpeed(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftESPR_n_EngineSpeed' */
    /* Merge: '<Root>/Merge_22' incorporates:
     *  Chart: '<S11>/FsftESPR_n_EngineSpeedChrt'
     *  SignalConversion generated from: '<S11>/VeESPR_b_EngineSpeedFA_write'
     */
    /* Gateway: FsftESPR_n_EngineSpeed/FsftESPR_n_EngineSpeedChrt */
    /* During: FsftESPR_n_EngineSpeed/FsftESPR_n_EngineSpeedChrt */
    /* Entry Internal: FsftESPR_n_EngineSpeed/FsftESPR_n_EngineSpeedChrt */
    /* Transition: '<S332>:2' */
    Rte_IrvWrite_FsftESPR_n_EngineSpeed_VeESPR_b_EngSpdFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftESPR_n_EngineSpeed' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) FsftESPR_n_TCMEngSpdReq(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftESPR_n_TCMEngSpdReq' */
    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S12>/FsftESPR_n_TCMEngSpdReqChrt'
     *  SignalConversion generated from: '<S12>/VeESPR_b_TCMEngSpdReqFA_write'
     */
    /* Gateway: FsftESPR_n_TCMEngSpdReq/FsftESPR_n_TCMEngSpdReqChrt */
    /* During: FsftESPR_n_TCMEngSpdReq/FsftESPR_n_TCMEngSpdReqChrt */
    /* Entry Internal: FsftESPR_n_TCMEngSpdReq/FsftESPR_n_TCMEngSpdReqChrt */
    /* Transition: '<S333>:2' */
    Rte_IrvWrite_FsftESPR_n_TCMEngSpdReq_VeESPR_b_TCMEngSpdReqFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftESPR_n_TCMEngSpdReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_b_CrankMaturingFault(VAR(boolean, AUTOMATIC)
    LeESPR_b_CrankMaturingFault)
{

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_b_CrankMaturingFault);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_b_CrankMaturingFault' */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S13>/LeESPR_b_CrankMaturingFault'
     *  SignalConversion generated from: '<S13>/VeESPR_b_CrankMaturingFault_write'
     */
    /* Gateway: PokeESPR_b_CrankMaturingFault/PokeESPR_b_CrankMaturingFaultChrt */
    /* During: PokeESPR_b_CrankMaturingFault/PokeESPR_b_CrankMaturingFaultChrt */
    /* Entry Internal: PokeESPR_b_CrankMaturingFault/PokeESPR_b_CrankMaturingFaultChrt */
    /* Transition: '<S334>:2' */
    Rte_IrvWrite_PokeESPR_b_CrankMaturingFault_VeESPR_b_CrankMaturingFault_init_write_IRV
        (LeESPR_b_CrankMaturingFault);

    /* End of Outputs for SubSystem: '<Root>/PokeESPR_b_CrankMaturingFault' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_b_TCMEngSpdReqActive(VAR(boolean, AUTOMATIC)
    LeESPR_b_TCMEngSpdReqActive)
{

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_b_TCMEngSpdReqActive);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_b_TCMEngSpdReqActive' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S14>/LeESPR_b_TCMEngSpdReqActive'
     *  SignalConversion generated from: '<S14>/VeESPR_b_TCMEngSpdReqActive_write'
     */
    /* Gateway: PokeESPR_b_TCMEngSpdReqActive/PokeESPR_b_TCMEngSpdReqActiveChrt */
    /* During: PokeESPR_b_TCMEngSpdReqActive/PokeESPR_b_TCMEngSpdReqActiveChrt */
    /* Entry Internal: PokeESPR_b_TCMEngSpdReqActive/PokeESPR_b_TCMEngSpdReqActiveChrt */
    /* Transition: '<S335>:2' */
    Rte_IrvWrite_PokeESPR_b_TCMEngSpdReqActive_TCMEngSpdReqActive_write_IRV
        (LeESPR_b_TCMEngSpdReqActive);

    /* End of Outputs for SubSystem: '<Root>/PokeESPR_b_TCMEngSpdReqActive' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_e_ECMCrankPhase(VAR(TeESPR_e_ECMCrankPhase,
    AUTOMATIC) LeESPR_e_ECMCrankPhase, VAR(boolean, AUTOMATIC)
    LeESPR_b_ECMCrankPhaseFA)
{

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_LeESPR_b_ECMCrankPhaseFA_out_c;

#endif

#if Rte_SysCon_Variant_ESPR_4

    TeESPR_e_ECMCrankPhase rtb_LeESPR_e_ECMCrankPhase_out;

#endif

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_e_ECMCrankPhase);

#endif

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_b_ECMCrankPhaseFA);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_e_ECMCrankPhase' */
    /* Chart: '<S15>/PokeESPR_e_ECMCrankPhaseChrt' incorporates:
     *  Constant: '<S336>/Calib'
     *  SignalConversion generated from: '<S15>/LeESPR_b_ECMCrankPhaseFA'
     *  SignalConversion generated from: '<S15>/LeESPR_e_ECMCrankPhase'
     */
    /* Gateway: PokeESPR_e_ECMCrankPhase/PokeESPR_e_ECMCrankPhaseChrt */
    /* During: PokeESPR_e_ECMCrankPhase/PokeESPR_e_ECMCrankPhaseChrt */
    /* Entry Internal: PokeESPR_e_ECMCrankPhase/PokeESPR_e_ECMCrankPhaseChrt */
    /* Transition: '<S337>:2' */
    if (!LeESPR_b_ECMCrankPhaseFA)
    {
        /* Transition: '<S337>:3' */
        /* Transition: '<S337>:15' */
        rtb_LeESPR_e_ECMCrankPhase_out = KaESPR_e_ECMCrankPhase_Map
            [(LeESPR_e_ECMCrankPhase)];
        rtb_LeESPR_b_ECMCrankPhaseFA_out_c = false;

        /* Transition: '<S337>:18' */
    }
    else
    {
        /* Transition: '<S337>:4' */
        rtb_LeESPR_e_ECMCrankPhase_out = CeESPR_e_NotInitialized;
        rtb_LeESPR_b_ECMCrankPhaseFA_out_c = true;
    }

    /* End of Chart: '<S15>/PokeESPR_e_ECMCrankPhaseChrt' */

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S15>/VeESPR_b_ECMCrankPhaseFA_write'
     * */
    Rte_IrvWrite_PokeESPR_e_ECMCrankPhase_VeESPR_e_ECMCrankPhaseFA_init_write_IRV
        (rtb_LeESPR_b_ECMCrankPhaseFA_out_c);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S15>/VeESPR_e_ECMCrankPhase_write'
     * */
    Rte_IrvWrite_PokeESPR_e_ECMCrankPhase_VeESPR_e_ECMCrankPhase_init_write_IRV
        (rtb_LeESPR_e_ECMCrankPhase_out);

    /* End of Outputs for SubSystem: '<Root>/PokeESPR_e_ECMCrankPhase' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_e_EngineSpeedStatus(VAR(TeESPR_e_EngSpdStatus,
    AUTOMATIC) LeESPR_e_EngineSpeedStatus)
{

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_e_EngineSpeedStatus);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_e_EngineSpeedStatus' */
    /* Outport: '<Root>/VeESPR_e_EngineSpeedStatus' incorporates:
     *  SignalConversion generated from: '<S16>/VeESPR_e_EngineSpeedStatus'
     *  SignalConversion generated from: '<S16>/LeESPR_e_EngineSpeedStatus'
     */
    /* Gateway: PokeESPR_e_EngineSpeedStatus/PokeESPR_e_EngineSpeedStatusChrt */
    /* During: PokeESPR_e_EngineSpeedStatus/PokeESPR_e_EngineSpeedStatusChrt */
    /* Entry Internal: PokeESPR_e_EngineSpeedStatus/PokeESPR_e_EngineSpeedStatusChrt */
    /* Transition: '<S338>:2' */
    (void)Rte_Write_VeESPR_e_EngineSpeedStatus_Value(LeESPR_e_EngineSpeedStatus);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  Chart: '<S16>/PokeESPR_e_EngineSpeedStatusChrt'
     *  SignalConversion generated from: '<S16>/VeESPR_b_EngineSpeedStatusFA_Out_write'
     */
    Rte_IrvWrite_PokeESPR_e_EngineSpeedStatus_VeESPR_b_EngineSpeedStatusFA_Init_write_IRV
        (false);

    /* Merge: '<Root>/Merge_26_Irv' incorporates:
     *  SignalConversion generated from: '<S16>/LeESPR_e_EngineSpeedStatus'
     *  SignalConversion generated from: '<S16>/VeESPR_e_EngineSpeedStatus_write'
     */
    Rte_IrvWrite_PokeESPR_e_EngineSpeedStatus_VeESPI_e_EngineSpeedStatus_write_IRV
        (LeESPR_e_EngineSpeedStatus);

    /* End of Outputs for SubSystem: '<Root>/PokeESPR_e_EngineSpeedStatus' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_n_EngHalfCylSpdMaxLim(VAR(float32, AUTOMATIC)
    LeESPR_n_EngHalfCylSpdMaxLim, VAR(boolean, AUTOMATIC)
    LeESPR_b_EngHalfCylSpdMaxLimFA)
{

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_n_EngHalfCylSpdMaxLim);

#endif

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_b_EngHalfCylSpdMaxLimFA);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_n_EngHalfCylSpdMaxLim' */
    /* Chart: '<S17>/PokeESPR_n_EngHalfCylSpdMaxLimChrt' incorporates:
     *  SignalConversion generated from: '<S17>/LeESPR_b_EngHalfCylSpdMaxLimFA'
     */
    /* Gateway: PokeESPR_n_EngHalfCylSpdMaxLim/PokeESPR_n_EngHalfCylSpdMaxLimChrt */
    /* During: PokeESPR_n_EngHalfCylSpdMaxLim/PokeESPR_n_EngHalfCylSpdMaxLimChrt */
    /* Entry Internal: PokeESPR_n_EngHalfCylSpdMaxLim/PokeESPR_n_EngHalfCylSpdMaxLimChrt */
    /* Transition: '<S339>:2' */
    if (!LeESPR_b_EngHalfCylSpdMaxLimFA)
    {
        /* SignalConversion generated from: '<S17>/VeESPR_n_EngHalfCylSpdMaxLim' incorporates:
         *  Outport: '<Root>/VeESPR_n_EngHalfCylSpdMaxLim'
         *  SignalConversion generated from: '<S17>/LeESPR_n_EngHalfCylSpdMaxLim'
         */
        /* Transition: '<S339>:3' */
        /* Transition: '<S339>:15' */
        (void)Rte_Write_VeESPR_n_EngHalfCylSpdMaxLim_Value
            (LeESPR_n_EngHalfCylSpdMaxLim);

        /* Transition: '<S339>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S17>/VeESPR_n_EngHalfCylSpdMaxLim' incorporates:
         *  Outport: '<Root>/VeESPR_n_EngHalfCylSpdMaxLim'
         *  SignalConversion generated from: '<S17>/LeESPR_n_EngHalfCylSpdMaxLim'
         */
        /* Transition: '<S339>:4' */
        (void)Rte_Write_VeESPR_n_EngHalfCylSpdMaxLim_Value
            (LeESPR_n_EngHalfCylSpdMaxLim);
    }

    /* End of Chart: '<S17>/PokeESPR_n_EngHalfCylSpdMaxLimChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeESPR_n_EngHalfCylSpdMaxLim' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_n_EngHalfCylSpdMinLim(VAR(float32, AUTOMATIC)
    LeESPR_n_EngHalfCylSpdMinLim, VAR(boolean, AUTOMATIC)
    LeESPR_b_EngHalfCylSpdMinLimFA)
{

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_n_EngHalfCylSpdMinLim);

#endif

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_b_EngHalfCylSpdMinLimFA);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_n_EngHalfCylSpdMinLim' */
    /* Chart: '<S18>/PokeESPR_n_EngHalfCylSpdMinLimChrt' incorporates:
     *  SignalConversion generated from: '<S18>/LeESPR_b_EngHalfCylSpdMinLimFA'
     */
    /* Gateway: PokeESPR_n_EngHalfCylSpdMinLim/PokeESPR_n_EngHalfCylSpdMinLimChrt */
    /* During: PokeESPR_n_EngHalfCylSpdMinLim/PokeESPR_n_EngHalfCylSpdMinLimChrt */
    /* Entry Internal: PokeESPR_n_EngHalfCylSpdMinLim/PokeESPR_n_EngHalfCylSpdMinLimChrt */
    /* Transition: '<S340>:2' */
    if (!LeESPR_b_EngHalfCylSpdMinLimFA)
    {
        /* SignalConversion generated from: '<S18>/VeESPR_n_EngHalfCylSpdMinLim' incorporates:
         *  Outport: '<Root>/VeESPR_n_EngHalfCylSpdMinLim'
         *  SignalConversion generated from: '<S18>/LeESPR_n_EngHalfCylSpdMinLim'
         */
        /* Transition: '<S340>:3' */
        /* Transition: '<S340>:15' */
        (void)Rte_Write_VeESPR_n_EngHalfCylSpdMinLim_Value
            (LeESPR_n_EngHalfCylSpdMinLim);

        /* Transition: '<S340>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S18>/VeESPR_n_EngHalfCylSpdMinLim' incorporates:
         *  Outport: '<Root>/VeESPR_n_EngHalfCylSpdMinLim'
         *  SignalConversion generated from: '<S18>/LeESPR_n_EngHalfCylSpdMinLim'
         */
        /* Transition: '<S340>:4' */
        (void)Rte_Write_VeESPR_n_EngHalfCylSpdMinLim_Value
            (LeESPR_n_EngHalfCylSpdMinLim);
    }

    /* End of Chart: '<S18>/PokeESPR_n_EngHalfCylSpdMinLimChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeESPR_n_EngHalfCylSpdMinLim' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_n_EngSpdMaxLim(VAR(float32, AUTOMATIC)
    LeESPR_n_EngSpdMaxLim)
{

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_n_EngSpdMaxLim);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_n_EngSpdMaxLim' */
    /* Outport: '<Root>/VeESPR_n_EngSpdMaxLim' incorporates:
     *  SignalConversion generated from: '<S19>/VeESPR_n_EngSpdMaxLim'
     *  SignalConversion generated from: '<S19>/LeESPR_n_EngSpdMaxLim'
     */
    /* Gateway: PokeESPR_n_EngSpdMaxLim/PokeESPR_n_EngSpdMaxLimChrt */
    /* During: PokeESPR_n_EngSpdMaxLim/PokeESPR_n_EngSpdMaxLimChrt */
    /* Entry Internal: PokeESPR_n_EngSpdMaxLim/PokeESPR_n_EngSpdMaxLimChrt */
    /* Transition: '<S341>:2' */
    (void)Rte_Write_VeESPR_n_EngSpdMaxLim_Value(LeESPR_n_EngSpdMaxLim);

    /* End of Outputs for SubSystem: '<Root>/PokeESPR_n_EngSpdMaxLim' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_n_EngSpdMinLim(VAR(float32, AUTOMATIC)
    LeESPR_n_EngSpdMinLim)
{

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_n_EngSpdMinLim);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_n_EngSpdMinLim' */
    /* Outport: '<Root>/VeESPR_n_EngSpdMinLim' incorporates:
     *  SignalConversion generated from: '<S20>/VeESPR_n_EngSpdMinLim'
     *  SignalConversion generated from: '<S20>/LeESPR_n_EngSpdMinLim'
     */
    /* Gateway: PokeESPR_n_EngSpdMinLim/PokeESPR_n_EngSpdMinLimChrt */
    /* During: PokeESPR_n_EngSpdMinLim/PokeESPR_n_EngSpdMinLimChrt */
    /* Entry Internal: PokeESPR_n_EngSpdMinLim/PokeESPR_n_EngSpdMinLimChrt */
    /* Transition: '<S342>:2' */
    (void)Rte_Write_VeESPR_n_EngSpdMinLim_Value(LeESPR_n_EngSpdMinLim);

    /* End of Outputs for SubSystem: '<Root>/PokeESPR_n_EngSpdMinLim' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_n_EngineSpeed(VAR(float32, AUTOMATIC)
    LeESPR_n_EngineSpeed, VAR(boolean, AUTOMATIC) LeESPR_b_EngineSpeedFA)
{

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_LeESPR_b_EngineSpeedFA_out;

#endif

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_n_EngineSpeed);

#endif

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_b_EngineSpeedFA);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_n_EngineSpeed' */
    /* Chart: '<S21>/PokeESPR_n_EngineSpeedChrt' incorporates:
     *  SignalConversion generated from: '<S21>/LeESPR_b_EngineSpeedFA'
     */
    /* Gateway: PokeESPR_n_EngineSpeed/PokeESPR_n_EngineSpeedChrt */
    /* During: PokeESPR_n_EngineSpeed/PokeESPR_n_EngineSpeedChrt */
    /* Entry Internal: PokeESPR_n_EngineSpeed/PokeESPR_n_EngineSpeedChrt */
    /* Transition: '<S343>:2' */
    if (!LeESPR_b_EngineSpeedFA)
    {
        /* SignalConversion generated from: '<S21>/VeESPR_n_EngineSpeed_write' incorporates:
         *  Merge: '<Root>/Merge_27'
         *  SignalConversion generated from: '<S21>/LeESPR_n_EngineSpeed'
         */
        /* Transition: '<S343>:3' */
        /* Transition: '<S343>:15' */
        Rte_IrvWrite_PokeESPR_n_EngineSpeed_VeESPI_n_EngineSpeed_write_IRV
            (LeESPR_n_EngineSpeed);
        rtb_LeESPR_b_EngineSpeedFA_out = false;

        /* Transition: '<S343>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S21>/VeESPR_n_EngineSpeed_write' incorporates:
         *  Merge: '<Root>/Merge_27'
         */
        /* Transition: '<S343>:4' */
        Rte_IrvWrite_PokeESPR_n_EngineSpeed_VeESPI_n_EngineSpeed_write_IRV
            (KeESPR_n_EngSpdDflt);
        rtb_LeESPR_b_EngineSpeedFA_out = true;
    }

    /* End of Chart: '<S21>/PokeESPR_n_EngineSpeedChrt' */

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S21>/VeESPR_b_EngineSpeedFA_write'
     * */
    Rte_IrvWrite_PokeESPR_n_EngineSpeed_VeESPR_b_EngSpdFA_Init_write_IRV
        (rtb_LeESPR_b_EngineSpeedFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeESPR_n_EngineSpeed' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_n_EngineSpeed_MCP(VAR(float32, AUTOMATIC)
    LeESPR_n_EngineSpeed_MCP, VAR(boolean, AUTOMATIC) LeESPR_b_EngineSpeed_MCPFA)
{
    UNUSED_PARAMETER(LeESPR_n_EngineSpeed_MCP);
    UNUSED_PARAMETER(LeESPR_b_EngineSpeed_MCPFA);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) PokeESPR_n_TCMEngSpdReq(VAR(float32, AUTOMATIC)
    LeESPR_n_TCMEngSpdReq, VAR(boolean, AUTOMATIC) LeESPR_b_TCMEngSpdReqFA)
{

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_LeESPR_b_TCMEngSpdReqFA_out;

#endif

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_n_TCMEngSpdReq);

#endif

#if !Rte_SysCon_Variant_ESPR_4

    UNUSED_PARAMETER(LeESPR_b_TCMEngSpdReqFA);

#endif

#if Rte_SysCon_Variant_ESPR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeESPR_n_TCMEngSpdReq' */
    /* Chart: '<S23>/PokeESPR_n_TCMEngSpdReqChrt' incorporates:
     *  SignalConversion generated from: '<S23>/LeESPR_b_TCMEngSpdReqFA'
     */
    /* Gateway: PokeESPR_n_TCMEngSpdReq/PokeESPR_n_TCMEngSpdReqChrt */
    /* During: PokeESPR_n_TCMEngSpdReq/PokeESPR_n_TCMEngSpdReqChrt */
    /* Entry Internal: PokeESPR_n_TCMEngSpdReq/PokeESPR_n_TCMEngSpdReqChrt */
    /* Transition: '<S345>:2' */
    if (!LeESPR_b_TCMEngSpdReqFA)
    {
        /* SignalConversion generated from: '<S23>/VeESPR_n_TCMEngSpdReq' incorporates:
         *  Outport: '<Root>/VeESPR_n_TCMEngSpdReq'
         *  SignalConversion generated from: '<S23>/LeESPR_n_TCMEngSpdReq'
         */
        /* Transition: '<S345>:3' */
        /* Transition: '<S345>:15' */
        (void)Rte_Write_VeESPR_n_TCMEngSpdReq_Value(LeESPR_n_TCMEngSpdReq);
        rtb_LeESPR_b_TCMEngSpdReqFA_out = false;

        /* Transition: '<S345>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S23>/VeESPR_n_TCMEngSpdReq' incorporates:
         *  Outport: '<Root>/VeESPR_n_TCMEngSpdReq'
         */
        /* Transition: '<S345>:4' */
        (void)Rte_Write_VeESPR_n_TCMEngSpdReq_Value(KeESPR_n_TCMEngSpdReqOnSNA);
        rtb_LeESPR_b_TCMEngSpdReqFA_out = true;
    }

    /* End of Chart: '<S23>/PokeESPR_n_TCMEngSpdReqChrt' */

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S23>/VeESPR_b_TCMEngSpdReqFA_write'
     * */
    Rte_IrvWrite_PokeESPR_n_TCMEngSpdReq_VeESPR_b_TCMEngSpdReqFA_Init_write_IRV
        (rtb_LeESPR_b_TCMEngSpdReqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeESPR_n_TCMEngSpdReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ESPR_4

FUNC(void, ESPR_CODE) ESPR_PwrOff(void)
{

#if Rte_SysCon_Variant_ESPR_4

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/ESPR_PwrOff' */
    /* Outport: '<Root>/NeESPR_Cnt_CoeffNotEqualOne_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeESPR_Cnt_CoeffNotEqualOne'
     */
    (void)Rte_Write_NeESPR_Cnt_CoeffNotEqualOne_NeESPR_Cnt_CoeffNotEqualOne
        (ESPR_ac_DW.NeESPR_Cnt_CoeffNotEqualOne);

    /* Outport: '<Root>/NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP'
     */
    (void)
        Rte_Write_NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP_NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP
        (ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP);

    /* Outport: '<Root>/NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP'
     */
    (void)
        Rte_Write_NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP_NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP
        (ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP);

    /* Outport: '<Root>/NeESPD_Cnt_EngNegSpdFailureMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeESPD_Cnt_EngNegSpdFailureMFOP'
     */
    (void)
        Rte_Write_NeESPD_Cnt_EngNegSpdFailureMFOP_NeESPD_Cnt_EngNegSpdFailureMFOP
        (ESPR_ac_DW.NeESPD_Cnt_EngNegSpdFailureMFOP);

    /* Outport: '<Root>/NeESPD_Cnt_EngNegSpdWarnMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeESPD_Cnt_EngNegSpdWarnMFOP'
     */
    (void)Rte_Write_NeESPD_Cnt_EngNegSpdWarnMFOP_NeESPD_Cnt_EngNegSpdWarnMFOP
        (ESPR_ac_DW.NeESPD_Cnt_EngNegSpdWarnMFOP);

    /* Outport: '<Root>/NeESPD_Cnt_EngOvrSpdFailureMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeESPD_Cnt_EngOvrSpdFailureMFOP'
     */
    (void)
        Rte_Write_NeESPD_Cnt_EngOvrSpdFailureMFOP_NeESPD_Cnt_EngOvrSpdFailureMFOP
        (ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdFailureMFOP);

    /* Outport: '<Root>/NeESPD_Cnt_EngOvrSpdWarnMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeESPD_Cnt_EngOvrSpdWarnMFOP'
     */
    (void)Rte_Write_NeESPD_Cnt_EngOvrSpdWarnMFOP_NeESPD_Cnt_EngOvrSpdWarnMFOP
        (ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdWarnMFOP);

    /* Outport: '<Root>/NeESPD_Cnt_BuffrCrnkLockFailureMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeESPD_Cnt_EngOvrSpdWarnMFOP1'
     */
    (void)
        Rte_Write_NeESPD_Cnt_BuffrCrnkLockFailureMFOP_NeESPD_Cnt_BuffrCrnkLockFailureMFOP
        (ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkLockFailureMFOP);

    /* End of Outputs for SubSystem: '<Root>/ESPR_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, ESPR_CODE) ESPR_PwrOn(void)
{

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_OutportBufferForTCMEngSpdReqActive_w;

#endif

#if Rte_SysCon_Variant_ESPR_4

    float32 rtb_OutportBufferForVeESPI_n_EngineSpeed;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_OutportBufferForVeESPR_b_CrankMatu_o;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_OutportBufferForVeESPR_b_EngSpdFA_In;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_OutportBufferForVeESPR_b_EngineSpe_c;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_OutportBufferForVeESPR_b_TCMEngSpd_e;

#endif

#if Rte_SysCon_Variant_ESPR_4

    boolean rtb_OutportBufferForVeESPR_e_ECMCrankP_d;

#endif

#if Rte_SysCon_Variant_ESPR_4

    TeESPR_e_EngSpdStatus rtb_OutportBufferForVeESPI_e_EngineSpeed;

#endif

#if Rte_SysCon_Variant_ESPR_4

    TeESPR_e_ECMCrankPhase rtb_OutportBufferForVeESPR_e_ECMCrankP_j;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ESPR_PwrOn'
     */
#if Rte_SysCon_Variant_ESPR_4

    /* S-Function (fcgen): '<S3>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S3>/DSM_Init' */
    /* DataStoreWrite: '<S308>/NeESPD_Cnt_EngOvrSpdWarnMFOP1' incorporates:
     *  Inport: '<Root>/NeESPD_Cnt_BuffrCrnkLockFailureMFOP_PM_In'
     */
    (void)
        Rte_Read_NeESPD_Cnt_BuffrCrnkLockFailureMFOP_Rx_NeESPD_Cnt_BuffrCrnkLockFailureMFOP
        (&ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkLockFailureMFOP);

    /* DataStoreWrite: '<S308>/NeESPD_Cnt_EngOvrSpdWarnMFOP' incorporates:
     *  Inport: '<Root>/NeESPD_Cnt_EngOvrSpdWarnMFOP_PM_In'
     */
    (void)Rte_Read_NeESPD_Cnt_EngOvrSpdWarnMFOP_Rx_NeESPD_Cnt_EngOvrSpdWarnMFOP(
        &ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdWarnMFOP);

    /* DataStoreWrite: '<S308>/NeESPD_Cnt_EngOvrSpdFailureMFOP' incorporates:
     *  Inport: '<Root>/NeESPD_Cnt_EngOvrSpdFailureMFOP_PM_In'
     */
    (void)
        Rte_Read_NeESPD_Cnt_EngOvrSpdFailureMFOP_Rx_NeESPD_Cnt_EngOvrSpdFailureMFOP
        (&ESPR_ac_DW.NeESPD_Cnt_EngOvrSpdFailureMFOP);

    /* DataStoreWrite: '<S308>/NeESPD_Cnt_EngNegSpdWarnMFOP' incorporates:
     *  Inport: '<Root>/NeESPD_Cnt_EngNegSpdWarnMFOP_PM_In'
     */
    (void)Rte_Read_NeESPD_Cnt_EngNegSpdWarnMFOP_Rx_NeESPD_Cnt_EngNegSpdWarnMFOP(
        &ESPR_ac_DW.NeESPD_Cnt_EngNegSpdWarnMFOP);

    /* DataStoreWrite: '<S308>/NeESPD_Cnt_EngNegSpdFailureMFOP' incorporates:
     *  Inport: '<Root>/NeESPD_Cnt_EngNegSpdFailureMFOP_PM_In'
     */
    (void)
        Rte_Read_NeESPD_Cnt_EngNegSpdFailureMFOP_Rx_NeESPD_Cnt_EngNegSpdFailureMFOP
        (&ESPR_ac_DW.NeESPD_Cnt_EngNegSpdFailureMFOP);

    /* DataStoreWrite: '<S308>/NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP' incorporates:
     *  Inport: '<Root>/NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP_PM_In'
     */
    (void)
        Rte_Read_NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP_Rx_NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP
        (&ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncWarnMFOP);

    /* DataStoreWrite: '<S308>/NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP' incorporates:
     *  Inport: '<Root>/NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP_PM_In'
     */
    (void)
        Rte_Read_NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP_Rx_NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP
        (&ESPR_ac_DW.NeESPD_Cnt_BuffrCrnkPrfrmncFailureMFOP);

    /* DataStoreWrite: '<S308>/NeESPR_Cnt_CoeffNotEqualOne' incorporates:
     *  Inport: '<Root>/NeESPR_Cnt_CoeffNotEqualOne_PM_In'
     */
    (void)Rte_Read_NeESPR_Cnt_CoeffNotEqualOne_Rx_NeESPR_Cnt_CoeffNotEqualOne
        (&ESPR_ac_DW.NeESPR_Cnt_CoeffNotEqualOne);

    /* End of Outputs for SubSystem: '<S3>/DSM_Init' */

    /* Outputs for Function Call SubSystem: '<S3>/InitENGIOutput' */
    /* SignalConversion generated from: '<S310>/VeESPI_e_EngineSpeedStatus' incorporates:
     *  Constant: '<S314>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPI_e_EngineSpeedSt_d =
        ESPR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S310>/VeESPI_n_EngineSpeed' */
    ESPR_ac_B.OutportBufferForVeESPI_n_EngineSpeed = 0.0F;

    /* SignalConversion generated from: '<S310>/TCMEngSpdReqActive' */
    ESPR_ac_B.OutportBufferForTCMEngSpdReqActive = false;

    /* SignalConversion generated from: '<S310>/VeESPR_b_CrankMaturingFault_init' */
    ESPR_ac_B.OutportBufferForVeESPR_b_CrankMaturingFa = false;

    /* SignalConversion generated from: '<S310>/VeESPR_b_EngineSpeedStatusFA_Init' */
    ESPR_ac_B.OutportBufferForVeESPR_b_EngineSpeedStat = false;

    /* SignalConversion generated from: '<S310>/VeESPR_b_TCMEngSpdReqFA_Init' */
    ESPR_ac_B.OutportBufferForVeESPR_b_TCMEngSpdReqFA_ = false;

    /* SignalConversion generated from: '<S310>/VeESPR_b_EngSpdFA_Init' */
    ESPR_ac_B.OutportBufferForVeESPR_b_EngSpdFA_Init = false;

    /* SignalConversion generated from: '<S310>/VeESPR_e_ECMCrankPhase_init' incorporates:
     *  Constant: '<S315>/Calib'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_ECMCrankPhase_i =
        KeESPR_e_ECMCrankPhase_init;

    /* SignalConversion generated from: '<S310>/VeESPR_e_ECMCrankPhaseFA_init' */
    ESPR_ac_B.OutportBufferForVeESPR_e_ECMCrankPhaseFA = false;

    /* End of Outputs for SubSystem: '<S3>/InitENGIOutput' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ESPO_Initialization_NF'
     */
    /* SignalConversion generated from: '<S309>/EngineSpeed_STUB' */
    ESPR_ac_B.OutportBufferForEngineSpeed_STUB = 0.0F;

    /* SignalConversion generated from: '<S309>/EngOvrSpdFltDtct_STUB' */
    ESPR_ac_B.OutportBufferForEngOvrSpdFltDtct_STUB = false;

    /* SignalConversion generated from: '<S309>/EngNegSpdFltDtct_STUB' */
    ESPR_ac_B.OutportBufferForEngNegSpdFltDtct_STUB = false;

    /* SignalConversion generated from: '<S309>/EngineSpeed_MCP_STUB' incorporates:
     *  Constant: '<S313>/Calib'
     */
    ESPR_ac_B.OutportBufferForEngineSpeed_MCP_STUB = KeESPR_n_EngineSpeed_MCP;

    /* SignalConversion generated from: '<S309>/EngineSpeed_MCPFA_STUB' */
    ESPR_ac_B.OutportBufferForEngineSpeed_MCPFA_STUB = false;

    /* SignalConversion generated from: '<S309>/TCMEngSpdReqActive_STUB' */
    ESPR_ac_B.OutportBufferForTCMEngSpdReqActive_STUB = false;

    /* SignalConversion generated from: '<S309>/EngineAccel_MCP_STUB' incorporates:
     *  Constant: '<S312>/Calib'
     */
    ESPR_ac_B.OutportBufferForEngineAccel_MCP_STUB = KeESPR_dn_EngineAccel_MCP;

    /* SignalConversion generated from: '<S309>/BuffrCrnkPrfrmncFltDtct_STUB' */
    ESPR_ac_B.OutportBufferForBuffrCrnkPrfrmncFltDtct_ = false;

    /* SignalConversion generated from: '<S309>/BuffrCrnkDiagFailing_STUB' */
    ESPR_ac_B.OutportBufferForBuffrCrnkDiagFailing_STU = false;

    /* SignalConversion generated from: '<S309>/EngineAccelCAN_STUB' */
    ESPR_ac_B.OutportBufferForEngineAccelCAN_STUB = 0.0F;

    /* SignalConversion generated from: '<S309>/IUMPR_P1AC6Fail_STUB' */
    ESPR_ac_B.OutportBufferForIUMPR_P1AC6Fail_STUB = false;

    /* SignalConversion generated from: '<S309>/IUMPR_P1AC7Fail_STUB' */
    ESPR_ac_B.OutportBufferForIUMPR_P1AC7Fail_STUB = false;

    /* SignalConversion generated from: '<S309>/EngAngle720Sync_STUB' */
    ESPR_ac_B.OutportBufferForEngAngle720Sync_STUB = 0.0F;

    /* SignalConversion generated from: '<S309>/EngAngle720SyncFA_STUB' */
    ESPR_ac_B.OutportBufferForEngAngle720SyncFA_STUB = false;

    /* SignalConversion generated from: '<S309>/EngAngle720SyncLrn_STUB' */
    ESPR_ac_B.OutportBufferForEngAngle720SyncLrn_STUB = false;

    /* SignalConversion generated from: '<S309>/BuffrCrnkLckFltDtct_STUB' */
    ESPR_ac_B.OutportBufferForBuffrCrnkLckFltDtct_STUB = false;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/InitENGIOutput1'
     */
    /* SignalConversion generated from: '<S311>/VariantSource' incorporates:
     *  Constant: '<S311>/ConstantValue11'
     *  Constant: '<S311>/ConstantValue12'
     *  Constant: '<S311>/ConstantValue14'
     *  Constant: '<S321>/Calib'
     *  Constant: '<S324>/Calib'
     */
#if Rte_SysCon_Variant_ESPR_4

    ESPR_ac_B.ConstantValue14 = KeESPR_n_EngHalfCylSpdMaxLimDflt;

    /* VariantMerge generated from: '<S311>/VariantSource' incorporates:
     *  Constant: '<S311>/ConstantValue14'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        ESPR_ac_B.ConstantValue14;

#else

    ESPR_ac_B.Calib_e = 0.0F;

    /* VariantMerge generated from: '<S311>/VariantSource' incorporates:
     *  Constant: '<S311>/ConstantValue11'
     *  Constant: '<S324>/Calib'
     *  SignalConversion generated from: '<S311>/VariantSource'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_VariantS = ESPR_ac_B.Calib_e;
    ESPR_ac_B.ConstantValue14 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S311>/VariantSource' */

    /* SignalConversion generated from: '<S311>/VariantSource1' incorporates:
     *  Constant: '<S311>/ConstantValue13'
     *  Constant: '<S311>/ConstantValue14'
     *  Constant: '<S322>/Calib'
     *  Constant: '<S323>/Calib'
     *  Constant: '<S324>/Calib'
     *  SignalConversion generated from: '<S311>/VariantSource2'
     */
#if Rte_SysCon_Variant_ESPR_4

    ESPR_ac_B.Calib_e = KeESPR_n_EngHalfCylSpdMinLimDflt;

    /* VariantMerge generated from: '<S311>/VariantSource1' incorporates:
     *  Constant: '<S324>/Calib'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_c = ESPR_ac_B.Calib_e;
    ESPR_ac_B.Calib_e = KeESPR_n_EngSpdMaxLimDflt;

    /* VariantMerge generated from: '<S311>/VariantSource2' incorporates:
     *  Constant: '<S324>/Calib'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_h = ESPR_ac_B.Calib_e;

#else

    /* VariantMerge generated from: '<S311>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S311>/VariantSource1'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
        ESPR_ac_B.ConstantValue14;
    ESPR_ac_B.ConstantValue14 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S311>/VariantSource1' */

    /* SignalConversion generated from: '<S311>/VariantSource3' incorporates:
     *  Constant: '<S311>/ConstantValue14'
     *  Constant: '<S324>/Calib'
     *  SignalConversion generated from: '<S311>/VariantSource2'
     */
#if Rte_SysCon_Variant_ESPR_4

    ESPR_ac_B.Calib_e = KeESPR_n_EngSpdMinLimDflt;

    /* VariantMerge generated from: '<S311>/VariantSource3' incorporates:
     *  Constant: '<S324>/Calib'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_g = ESPR_ac_B.Calib_e;

#else

    /* VariantMerge generated from: '<S311>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S311>/VariantSource2'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_h =
        ESPR_ac_B.ConstantValue14;
    ESPR_ac_B.ConstantValue14 = 0.0F;

    /* VariantMerge generated from: '<S311>/VariantSource3' incorporates:
     *  Constant: '<S311>/ConstantValue14'
     *  SignalConversion generated from: '<S311>/VariantSource3'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        ESPR_ac_B.ConstantValue14;

#endif

    /* End of SignalConversion generated from: '<S311>/VariantSource3' */

    /* SignalConversion generated from: '<S311>/VeESPI_e_EngineSpeedStatus' incorporates:
     *  Constant: '<S320>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPI_e_EngineSpeedStat =
        ESPR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S311>/TCMEngSpdReq' */
    ESPR_ac_B.OutportBufferForTCMEngSpdReq = 0.0F;

    /* SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt' incorporates:
     *  Constant: '<S319>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_DMCM_A =
        ESPR_ac_ConstB.Constant_gz;

    /* SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_EngNegSpd' incorporates:
     *  Constant: '<S316>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_EngNeg =
        ESPR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_EngOvrspd' incorporates:
     *  Constant: '<S317>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_EngOvr =
        ESPR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S311>/VeESPR_b_CrnkSnsrFA' */
    ESPR_ac_B.OutportBufferForVeESPR_b_CrnkSnsrFA = false;

    /* SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf' incorporates:
     *  Constant: '<S318>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_DMCM_a =
        ESPR_ac_ConstB.Constant_lq;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing' incorporates:
     *  SignalConversion generated from: '<S3>/BuffrCrnkDiagFailing_STUB'
     */
    (void)Rte_Write_VeESPR_b_BuffrCrnkDiagFailing_Value
        (ESPR_ac_B.OutportBufferForBuffrCrnkDiagFailing_STU);

    /* Outport: '<Root>/VeESPR_b_BuffrCrnkLckFltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/BuffrCrnkLckFltDtct_STUB'
     */
    (void)Rte_Write_VeESPR_b_BuffrCrnkLckFltDtct_Value
        (ESPR_ac_B.OutportBufferForBuffrCrnkLckFltDtct_STUB);

    /* Outport: '<Root>/VeESPR_b_BuffrCrnkPrfrmncFltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/BuffrCrnkPrfrmncFltDtct_STUB'
     */
    (void)Rte_Write_VeESPR_b_BuffrCrnkPrfrmncFltDtct_Value
        (ESPR_ac_B.OutportBufferForBuffrCrnkPrfrmncFltDtct_);

    /* Outport: '<Root>/VeESPR_b_EngAngle720SyncFA' incorporates:
     *  SignalConversion generated from: '<S3>/EngAngle720SyncFA_STUB'
     */
    (void)Rte_Write_VeESPR_b_EngAngle720SyncFA_Value
        (ESPR_ac_B.OutportBufferForEngAngle720SyncFA_STUB);

    /* Outport: '<Root>/VeESPR_b_EngAngle720SyncLrn' incorporates:
     *  SignalConversion generated from: '<S3>/EngAngle720SyncLrn_STUB'
     */
    (void)Rte_Write_VeESPR_b_EngAngle720SyncLrn_Value
        (ESPR_ac_B.OutportBufferForEngAngle720SyncLrn_STUB);

    /* Outport: '<Root>/VeESPR_phi_EngAngle720Sync' incorporates:
     *  SignalConversion generated from: '<S3>/EngAngle720Sync_STUB'
     */
    (void)Rte_Write_VeESPR_phi_EngAngle720Sync_Value
        (ESPR_ac_B.OutportBufferForEngAngle720Sync_STUB);

    /* Outport: '<Root>/VeESPR_b_EngNegSpdFltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/EngNegSpdFltDtct_STUB'
     */
    (void)Rte_Write_VeESPR_b_EngNegSpdFltDtct_Value
        (ESPR_ac_B.OutportBufferForEngNegSpdFltDtct_STUB);

    /* Outport: '<Root>/VeESPR_b_EngOvrSpdFltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/EngOvrSpdFltDtct_STUB'
     */
    (void)Rte_Write_VeESPR_b_EngOvrSpdFltDtct_Value
        (ESPR_ac_B.OutportBufferForEngOvrSpdFltDtct_STUB);

    /* Outport: '<Root>/VeESPR_dn_EngineAccel' incorporates:
     *  SignalConversion generated from: '<S3>/EngineAccelCAN_STUB'
     */
    (void)Rte_Write_VeESPR_dn_EngineAccel_Value
        (ESPR_ac_B.OutportBufferForEngineAccelCAN_STUB);

    /* Outport: '<Root>/VeESPR_dn_EngineAccel_MCP' incorporates:
     *  SignalConversion generated from: '<S3>/EngineAccel_MCP_STUB'
     */
    (void)Rte_Write_VeESPR_dn_EngineAccel_MCP_Value
        (ESPR_ac_B.OutportBufferForEngineAccel_MCP_STUB);

    /* Outport: '<Root>/VeESPR_b_EngineSpeed_MCPFA' incorporates:
     *  SignalConversion generated from: '<S3>/EngineSpeed_MCPFA_STUB'
     */
    (void)Rte_Write_VeESPR_b_EngineSpeed_MCPFA_Value
        (ESPR_ac_B.OutportBufferForEngineSpeed_MCPFA_STUB);

    /* Outport: '<Root>/VeESPR_n_EngineSpeed_MCP' incorporates:
     *  SignalConversion generated from: '<S3>/EngineSpeed_MCP_STUB'
     */
    (void)Rte_Write_VeESPR_n_EngineSpeed_MCP_Value
        (ESPR_ac_B.OutportBufferForEngineSpeed_MCP_STUB);

    /* Outport: '<Root>/VeESPR_n_EngineSpeed' incorporates:
     *  SignalConversion generated from: '<S3>/EngineSpeed_STUB'
     */
    (void)Rte_Write_VeESPR_n_EngineSpeed_Value
        (ESPR_ac_B.OutportBufferForEngineSpeed_STUB);

    /* Outport: '<Root>/VeESPR_b_IUMPR_P1AC6Fail' incorporates:
     *  SignalConversion generated from: '<S3>/IUMPR_P1AC6Fail_STUB'
     */
    (void)Rte_Write_VeESPR_b_IUMPR_P1AC6Fail_Value
        (ESPR_ac_B.OutportBufferForIUMPR_P1AC6Fail_STUB);

    /* Outport: '<Root>/VeESPR_b_IUMPR_P1AC7Fail' incorporates:
     *  SignalConversion generated from: '<S3>/IUMPR_P1AC7Fail_STUB'
     */
    (void)Rte_Write_VeESPR_b_IUMPR_P1AC7Fail_Value
        (ESPR_ac_B.OutportBufferForIUMPR_P1AC7Fail_STUB);

    /* Outport: '<Root>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt' incorporates:
     *  SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt'
     *  SignalConversion generated from: '<S3>/R_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt_Value
        (ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_DMCM_A);

    /* Outport: '<Root>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf_Value
        (ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_DMCM_a);

    /* Outport: '<Root>/VeESPR_e_FaultSts_EngNegSpd' incorporates:
     *  SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_EngNegSpd'
     *  SignalConversion generated from: '<S3>/R_VeESPR_e_FaultSts_EngNegSpd'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_EngNegSpd_Value
        (ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_EngNeg);

    /* Outport: '<Root>/VeESPR_e_FaultSts_EngOvrspd' incorporates:
     *  SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_EngOvrspd'
     *  SignalConversion generated from: '<S3>/R_VeESPR_e_FaultSts_EngOvrspd'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_EngOvrspd_Value
        (ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_EngOvr);

    /* Outport: '<Root>/VeESPR_n_TCMEngSpdReq' incorporates:
     *  SignalConversion generated from: '<S3>/TCMEngSpdReq'
     */
    (void)Rte_Write_VeESPR_n_TCMEngSpdReq_Value
        (ESPR_ac_B.OutportBufferForTCMEngSpdReq);

    /* Outport: '<Root>/VeESPR_b_TCMEngSpdReqActive' incorporates:
     *  SignalConversion generated from: '<S3>/TCMEngSpdReqActive_STUB'
     */
    (void)Rte_Write_VeESPR_b_TCMEngSpdReqActive_Value
        (ESPR_ac_B.OutportBufferForTCMEngSpdReqActive_STUB);

    /* SignalConversion generated from: '<S3>/TCMEngSpdReqActive_write' */
#if Rte_SysCon_Variant_ESPR_4

    /* SignalConversion generated from: '<S3>/TCMEngSpdReqActive_write' */
    rtb_OutportBufferForTCMEngSpdReqActive_w =
        ESPR_ac_B.OutportBufferForTCMEngSpdReqActive;

#endif

    /* End of SignalConversion generated from: '<S3>/TCMEngSpdReqActive_write' */

    /* Outport: '<Root>/VeESPR_e_EngineSpeedStatus' incorporates:
     *  SignalConversion generated from: '<S311>/VeESPI_e_EngineSpeedStatus'
     *  SignalConversion generated from: '<S3>/VeESPI_e_EngineSpeedStatus'
     */
    (void)Rte_Write_VeESPR_e_EngineSpeedStatus_Value
        (ESPR_ac_B.OutportBufferForVeESPI_e_EngineSpeedStat);

    /* SignalConversion generated from: '<S3>/VeESPI_e_EngineSpeedStatus_write' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPI_n_EngineSpeed_write'
     *  SignalConversion generated from: '<S3>/VeESPR_b_CrankMaturingFault_init_write'
     */
#if Rte_SysCon_Variant_ESPR_4

    /* SignalConversion generated from: '<S3>/VeESPI_e_EngineSpeedStatus_write' incorporates:
     *  SignalConversion generated from: '<S310>/VeESPI_e_EngineSpeedStatus'
     */
    rtb_OutportBufferForVeESPI_e_EngineSpeed =
        ESPR_ac_B.OutportBufferForVeESPI_e_EngineSpeedSt_d;

    /* SignalConversion generated from: '<S3>/VeESPI_n_EngineSpeed_write' */
    rtb_OutportBufferForVeESPI_n_EngineSpeed =
        ESPR_ac_B.OutportBufferForVeESPI_n_EngineSpeed;

    /* SignalConversion generated from: '<S3>/VeESPR_b_CrankMaturingFault_init_write' */
    rtb_OutportBufferForVeESPR_b_CrankMatu_o =
        ESPR_ac_B.OutportBufferForVeESPR_b_CrankMaturingFa;

#endif

    /* End of SignalConversion generated from: '<S3>/VeESPI_e_EngineSpeedStatus_write' */

    /* Outport: '<Root>/VeESPR_b_CrnkSnsrFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPR_b_CrnkSnsrFA'
     */
    (void)Rte_Write_VeESPR_b_CrnkSnsrFA_Value
        (ESPR_ac_B.OutportBufferForVeESPR_b_CrnkSnsrFA);

    /* SignalConversion generated from: '<S3>/VeESPR_b_EngSpdFA_Init_write' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPR_b_EngineSpeedStatusFA_Init_write'
     *  SignalConversion generated from: '<S3>/VeESPR_b_TCMEngSpdReqFA_Init_write'
     *  SignalConversion generated from: '<S3>/VeESPR_e_ECMCrankPhaseFA_init_write'
     *  SignalConversion generated from: '<S3>/VeESPR_e_ECMCrankPhase_init_write'
     */
#if Rte_SysCon_Variant_ESPR_4

    /* SignalConversion generated from: '<S3>/VeESPR_b_EngSpdFA_Init_write' */
    rtb_OutportBufferForVeESPR_b_EngSpdFA_In =
        ESPR_ac_B.OutportBufferForVeESPR_b_EngSpdFA_Init;

    /* SignalConversion generated from: '<S3>/VeESPR_b_EngineSpeedStatusFA_Init_write' */
    rtb_OutportBufferForVeESPR_b_EngineSpe_c =
        ESPR_ac_B.OutportBufferForVeESPR_b_EngineSpeedStat;

    /* SignalConversion generated from: '<S3>/VeESPR_b_TCMEngSpdReqFA_Init_write' */
    rtb_OutportBufferForVeESPR_b_TCMEngSpd_e =
        ESPR_ac_B.OutportBufferForVeESPR_b_TCMEngSpdReqFA_;

    /* SignalConversion generated from: '<S3>/VeESPR_e_ECMCrankPhaseFA_init_write' */
    rtb_OutportBufferForVeESPR_e_ECMCrankP_d =
        ESPR_ac_B.OutportBufferForVeESPR_e_ECMCrankPhaseFA;

    /* SignalConversion generated from: '<S3>/VeESPR_e_ECMCrankPhase_init_write' incorporates:
     *  SignalConversion generated from: '<S310>/VeESPR_e_ECMCrankPhase_init'
     */
    rtb_OutportBufferForVeESPR_e_ECMCrankP_j =
        ESPR_ac_B.OutportBufferForVeESPR_e_ECMCrankPhase_i;

#endif

    /* End of SignalConversion generated from: '<S3>/VeESPR_b_EngSpdFA_Init_write' */

    /* Outport: '<Root>/VeESPR_n_EngHalfCylSpdMaxLim' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPR_n_EngHalfCylSpdMaxLim'
     */
    (void)Rte_Write_VeESPR_n_EngHalfCylSpdMaxLim_Value
        (ESPR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VeESPR_n_EngHalfCylSpdMinLim' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPR_n_EngHalfCylSpdMinLim'
     */
    (void)Rte_Write_VeESPR_n_EngHalfCylSpdMinLim_Value
        (ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_c);

    /* Outport: '<Root>/VeESPR_n_EngSpdMaxLim' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPR_n_EngSpdMaxLim'
     */
    (void)Rte_Write_VeESPR_n_EngSpdMaxLim_Value
        (ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_h);

    /* Outport: '<Root>/VeESPR_n_EngSpdMinLim' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPR_n_EngSpdMinLim'
     */
    (void)Rte_Write_VeESPR_n_EngSpdMinLim_Value
        (ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* SignalConversion generated from: '<S3>/TCMEngSpdReqActive_write' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPI_e_EngineSpeedStatus_write'
     *  SignalConversion generated from: '<S3>/VeESPI_n_EngineSpeed_write'
     *  SignalConversion generated from: '<S3>/VeESPR_b_CrankMaturingFault_init_write'
     *  SignalConversion generated from: '<S3>/VeESPR_b_EngSpdFA_Init_write'
     *  SignalConversion generated from: '<S3>/VeESPR_b_EngineSpeedStatusFA_Init_write'
     *  SignalConversion generated from: '<S3>/VeESPR_b_TCMEngSpdReqFA_Init_write'
     *  SignalConversion generated from: '<S3>/VeESPR_e_ECMCrankPhaseFA_init_write'
     *  SignalConversion generated from: '<S3>/VeESPR_e_ECMCrankPhase_init_write'
     */
#if Rte_SysCon_Variant_ESPR_4

    /* Merge: '<Root>/Merge_4' */
    Rte_IrvWrite_ESPR_PwrOn_TCMEngSpdReqActive_write_IRV
        (rtb_OutportBufferForTCMEngSpdReqActive_w);

    /* Merge: '<Root>/Merge_26_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPI_e_EngineSpeedStatus_write'
     */
    Rte_IrvWrite_ESPR_PwrOn_VeESPI_e_EngineSpeedStatus_write_IRV
        (rtb_OutportBufferForVeESPI_e_EngineSpeed);

    /* Merge: '<Root>/Merge_27' */
    Rte_IrvWrite_ESPR_PwrOn_VeESPI_n_EngineSpeed_write_IRV
        (rtb_OutportBufferForVeESPI_n_EngineSpeed);

    /* Merge: '<Root>/Merge_20' */
    Rte_IrvWrite_ESPR_PwrOn_VeESPR_b_CrankMaturingFault_init_write_IRV
        (rtb_OutportBufferForVeESPR_b_CrankMatu_o);

    /* Merge: '<Root>/Merge_22' */
    Rte_IrvWrite_ESPR_PwrOn_VeESPR_b_EngSpdFA_Init_write_IRV
        (rtb_OutportBufferForVeESPR_b_EngSpdFA_In);

    /* Merge: '<Root>/Merge_18' */
    Rte_IrvWrite_ESPR_PwrOn_VeESPR_b_EngineSpeedStatusFA_Init_write_IRV
        (rtb_OutportBufferForVeESPR_b_EngineSpe_c);

    /* Merge: '<Root>/Merge_21' */
    Rte_IrvWrite_ESPR_PwrOn_VeESPR_b_TCMEngSpdReqFA_Init_write_IRV
        (rtb_OutportBufferForVeESPR_b_TCMEngSpd_e);

    /* Merge: '<Root>/Merge_24' */
    Rte_IrvWrite_ESPR_PwrOn_VeESPR_e_ECMCrankPhaseFA_init_write_IRV
        (rtb_OutportBufferForVeESPR_e_ECMCrankP_d);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S3>/VeESPR_e_ECMCrankPhase_init_write'
     */
    Rte_IrvWrite_ESPR_PwrOn_VeESPR_e_ECMCrankPhase_init_write_IRV
        (rtb_OutportBufferForVeESPR_e_ECMCrankP_j);

#endif

    /* End of SignalConversion generated from: '<S3>/TCMEngSpdReqActive_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ESPR_CODE) ESPR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ESPR_PwrOn'
     */
#if Rte_SysCon_Variant_ESPR_4

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S3>/InitENGIOutput' */
    /* SystemInitialize for SignalConversion generated from: '<S310>/VeESPI_e_EngineSpeedStatus' incorporates:
     *  Constant: '<S314>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPI_e_EngineSpeedSt_d =
        ESPR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S310>/VeESPR_e_ECMCrankPhase_init' incorporates:
     *  Constant: '<S315>/Calib'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_ECMCrankPhase_i =
        KeESPR_e_ECMCrankPhase_init;

    /* End of SystemInitialize for SubSystem: '<S3>/InitENGIOutput' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ESPO_Initialization_NF'
     */
    /* SystemInitialize for SignalConversion generated from: '<S309>/EngineSpeed_MCP_STUB' incorporates:
     *  Constant: '<S313>/Calib'
     */
    ESPR_ac_B.OutportBufferForEngineSpeed_MCP_STUB = KeESPR_n_EngineSpeed_MCP;

    /* SystemInitialize for SignalConversion generated from: '<S309>/EngineAccel_MCP_STUB' incorporates:
     *  Constant: '<S312>/Calib'
     */
    ESPR_ac_B.OutportBufferForEngineAccel_MCP_STUB = KeESPR_dn_EngineAccel_MCP;

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/InitENGIOutput1'
     */
    /* Start for Constant: '<S321>/Calib' incorporates:
     *  Constant: '<S311>/ConstantValue11'
     *  Constant: '<S311>/ConstantValue12'
     *  Constant: '<S311>/ConstantValue13'
     */
#if Rte_SysCon_Variant_ESPR_4

    /* Start for Constant: '<S311>/ConstantValue14' */
    ESPR_ac_B.ConstantValue14 = KeESPR_n_EngHalfCylSpdMaxLimDflt;

#else

    /* Start for Constant: '<S324>/Calib' incorporates:
     *  Constant: '<S311>/ConstantValue11'
     */
    ESPR_ac_B.Calib_e = 0.0F;

    /* Start for Constant: '<S311>/ConstantValue14' incorporates:
     *  Constant: '<S311>/ConstantValue13'
     */
    ESPR_ac_B.ConstantValue14 = 0.0F;

#endif

    /* End of Start for Constant: '<S321>/Calib' */

    /* Start for Constant: '<S322>/Calib' incorporates:
     *  Constant: '<S311>/ConstantValue14'
     */
#if Rte_SysCon_Variant_ESPR_4

    /* Start for Constant: '<S324>/Calib' */
    ESPR_ac_B.Calib_e = KeESPR_n_EngHalfCylSpdMinLimDflt;

#else

    /* Start for Constant: '<S311>/ConstantValue14' */
    ESPR_ac_B.ConstantValue14 = 0.0F;

#endif

    /* End of Start for Constant: '<S322>/Calib' */

    /* SystemInitialize for SignalConversion generated from: '<S311>/VariantSource' incorporates:
     *  Constant: '<S323>/Calib'
     *  Constant: '<S324>/Calib'
     */
#if Rte_SysCon_Variant_ESPR_4

    ESPR_ac_B.Calib_e = KeESPR_n_EngSpdMinLimDflt;

    /* SystemInitialize for VariantMerge generated from: '<S311>/VariantSource' incorporates:
     *  Constant: '<S324>/Calib'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        ESPR_ac_B.ConstantValue14;

#else

    /* SystemInitialize for VariantMerge generated from: '<S311>/VariantSource' incorporates:
     *  SignalConversion generated from: '<S311>/VariantSource'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_VariantS = ESPR_ac_B.Calib_e;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S311>/VariantSource' */

    /* SystemInitialize for SignalConversion generated from: '<S311>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S311>/VariantSource2'
     */
#if Rte_SysCon_Variant_ESPR_4

    /* SystemInitialize for VariantMerge generated from: '<S311>/VariantSource1' */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_c = ESPR_ac_B.Calib_e;

    /* SystemInitialize for VariantMerge generated from: '<S311>/VariantSource2' */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_h = ESPR_ac_B.Calib_e;

#else

    /* SystemInitialize for VariantMerge generated from: '<S311>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S311>/VariantSource1'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
        ESPR_ac_B.ConstantValue14;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S311>/VariantSource1' */

    /* SystemInitialize for SignalConversion generated from: '<S311>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S311>/VariantSource2'
     */
#if Rte_SysCon_Variant_ESPR_4

    /* SystemInitialize for VariantMerge generated from: '<S311>/VariantSource3' */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_g = ESPR_ac_B.Calib_e;

#else

    /* SystemInitialize for VariantMerge generated from: '<S311>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S311>/VariantSource2'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_h =
        ESPR_ac_B.ConstantValue14;

    /* SystemInitialize for VariantMerge generated from: '<S311>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S311>/VariantSource3'
     */
    ESPR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        ESPR_ac_B.ConstantValue14;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S311>/VariantSource3' */

    /* SystemInitialize for SignalConversion generated from: '<S311>/VeESPI_e_EngineSpeedStatus' incorporates:
     *  Constant: '<S320>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPI_e_EngineSpeedStat =
        ESPR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt' incorporates:
     *  Constant: '<S319>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_DMCM_A =
        ESPR_ac_ConstB.Constant_gz;

    /* SystemInitialize for SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_EngNegSpd' incorporates:
     *  Constant: '<S316>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_EngNeg =
        ESPR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_EngOvrspd' incorporates:
     *  Constant: '<S317>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_EngOvr =
        ESPR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S311>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf' incorporates:
     *  Constant: '<S318>/Constant'
     */
    ESPR_ac_B.OutportBufferForVeESPR_e_FaultSts_DMCM_a =
        ESPR_ac_ConstB.Constant_lq;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeESPR_e_EngineSpeedStatus' incorporates:
     *  Merge: '<Root>/Merge_26'
     */
    (void)Rte_Write_VeESPR_e_EngineSpeedStatus_Value(CeESPR_e_EngSpdNormal);

    /* SystemInitialize for Outport: '<Root>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt' incorporates:
     *  Merge: '<Root>/M_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrCkt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeESPR_e_FaultSts_EngNegSpd' incorporates:
     *  Merge: '<Root>/M_VeESPR_e_FaultSts_EngNegSpd'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_EngNegSpd_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeESPR_e_FaultSts_EngOvrspd' incorporates:
     *  Merge: '<Root>/M_VeESPR_e_FaultSts_EngOvrspd'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_EngOvrspd_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf'
     */
    (void)Rte_Write_VeESPR_e_FaultSts_DMCM_A_CKP_SnsrPerf_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
