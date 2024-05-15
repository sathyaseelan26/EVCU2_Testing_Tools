/*
 * File: EOCR_ac.c
 *
 * Code generated for Simulink model 'EOCR_ac'.
 *
 * Model version                  : 9.42
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:36:12 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EOCR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_EOCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, EOCR_VAR_INIT) HeEOCR_Pct_PurgeAdjst_DfltVal =
    0.0F;                              /* Referenced by: '<S96>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) HeEOCR_T_CatTempOvrrd = 600.0F;/* Referenced by: '<S97>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) HeEOCR_T_CoolTempOvrrd = 90.0F;/* Referenced by: '<S98>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_CTMOvrrdEnable = 0;/* Referenced by: '<S99>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_CTMOvrrdState = 0;/* Referenced by: '<S100>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_CatTempOvrrd = 0;/* Referenced by: '<S101>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_CatWarmupOvrrdEnable = 0;/* Referenced by: '<S102>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_CatWarmupOvrrdState = 0;/* Referenced by: '<S103>/Calib' */

#if Rte_SysCon_Variant_EOCR_3

static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_ColdCtrl_RawInit = 1;/* Referenced by: '<S164>/Calib' */

#endif

static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_CoolTempOvrrd = 0;/* Referenced by: '<S104>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_EngSpdOvrrd = 0;/* Referenced by: '<S105>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_PurgeAdjst_Ovrd = 0;/* Referenced by: '<S106>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_RunTimeOvrrd = 0;/* Referenced by: '<S11>/Calib' */

#if Rte_SysCon_Variant_EOCR_3

static volatile CONST(boolean, EOCR_VAR_INIT) HeEOCR_b_SeriesNiTi_AllwdInit = 1;/* Referenced by: '<S165>/Calib' */

#endif

static volatile CONST(float32, EOCR_VAR_INIT) HeEOCR_n_EngSpdOvrrd = 1000.0F;/* Referenced by: '<S107>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) HeEOCR_t_PwrDltDrvtvSampleTime =
    0.02F;                             /* Referenced by:
                                        * '<S58>/Calib'
                                        * '<S139>/Calib'
                                        */
static volatile CONST(float32, EOCR_VAR_INIT) HeEOCR_t_RunTimeOvrrd = 0.0F;/* Referenced by: '<S12>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) HeEOCR_t_TimeStep = 0.02F;/* Referenced by: '<S13>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) KaEOCR_b_UseTiCL4TiColdCtrl[2] =
{
    1, 1
} ;                                    /* Referenced by: '<S151>/Calib' */

static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_P_PwrDlt_LSP = 0.0F;/* Referenced by:
                                                                      * '<S62>/Calib'
                                                                      * '<S141>/Calib'
                                                                      */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_T_CatTempDflt = 600.0F;/* Referenced by: '<S108>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_T_CatTempRunTimeReset =
    100.0F;                            /* Referenced by: '<S14>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_T_CoolTempRunTimeReset =
    40.0F;                             /* Referenced by: '<S15>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_T_NiTiCtrl_StartECTMin =
    0.0F;                              /* Referenced by: '<S82>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) KeEOCR_b_CWUInitCondEnbl = 1;/* Referenced by: '<S50>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) KeEOCR_b_EngStrStpEnbl = 1;/* Referenced by: '<S83>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) KeEOCR_b_NiTi_PropSysMdChk = 1;/* Referenced by: '<S84>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) KeEOCR_b_PBattLTMaxBsdPwrDlt = 0;/* Referenced by: '<S142>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) KeEOCR_b_RunTimeResetAndLogic = 1;/* Referenced by: '<S16>/Calib' */
static volatile CONST(boolean, EOCR_VAR_INIT) KeEOCR_b_UseNiColdArb_ForNiCold =
    0;                                 /* Referenced by: '<S153>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_k_TiCldCapctyFiltCoef =
    1.0F;                              /* Referenced by: '<S154>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_n_EngSpdCatWarmUp = 300.0F;/* Referenced by: '<S92>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_n_EngSpdRunTimeEnbl =
    300.0F;                            /* Referenced by: '<S17>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_n_NiMin_MaxLim = 4500.0F;/* Referenced by: '<S63>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_n_Purge_NoThrsh_Dsbl =
    -5000.0F;                          /* Referenced by: '<S64>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_n_Purge_NoThrsh_Enbl =
    -5001.0F;                          /* Referenced by: '<S65>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_r_StgcMult_LSP = 0.1F;/* Referenced by: '<S66>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_r_StgcMult_RSP = 0.3F;/* Referenced by: '<S67>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_t_CWUInitCondThresh =
    0.025F;                            /* Referenced by: '<S51>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_t_NiTiCtrl_EngOffTimeMin =
    0.0F;                              /* Referenced by: '<S85>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_t_PwrDltStgcTimePrd = 0.5F;/* Referenced by: '<S68>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_t_PwrDltTactTimePrd = 0.5F;/* Referenced by: '<S143>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KeEOCR_t_RunTimeMax =
    1.6777216E+7F;                     /* Referenced by: '<S18>/Calib' */
static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_M_TiCatTempMaint[7] =
{
    40.0F, 40.0F, 40.0F, 40.0F, 20.0F, 10.0F, -999.0F
} ;                                    /* Referenced by: '<S118>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_M_TiCldCapctyRsrvOffst[7] =
{
    40.0F, 40.0F, 40.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT)
    KtEOCR_M_TiCldCtrl_FrmRunTm_CatTemp[64] =
{
    25.0F, 25.0F, 35.0F, 35.0F, 43.3F, 51.7F, 60.0F, 60.0F, 25.0F, 25.0F, 35.0F,
    35.0F, 43.3F, 51.7F, 60.0F, 60.0F, 25.0F, 25.0F, 35.0F, 35.0F, 43.3F, 51.7F,
    60.0F, 60.0F, 25.0F, 25.0F, 35.0F, 35.0F, 43.3F, 51.7F, 60.0F, 60.0F, 25.0F,
    25.0F, 35.0F, 35.0F, 43.3F, 51.7F, 60.0F, 60.0F, 25.0F, 25.0F, 35.0F, 35.0F,
    43.3F, 51.7F, 60.0F, 60.0F, 25.0F, 25.0F, 35.0F, 35.0F, 43.3F, 51.7F, 60.0F,
    60.0F, 25.0F, 25.0F, 35.0F, 35.0F, 43.3F, 51.7F, 60.0F, 60.0F
} ;                                    /* Referenced by:
                                        * '<S166>/Vector'
                                        * '<S69>/Vector'
                                        */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_M_TiTargetMax_Offset[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S156>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_M_TiTargetMin_Offset[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S157>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_P_PwrDltStgcRSPOffset[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S70>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_P_PwrDltStgc_RSP[7] =
{
    5.0F, 5.0F, 25.0F, 45.0F, 45.0F, 45.0F, 5.0F
} ;                                    /* Referenced by:
                                        * '<S71>/Vector'
                                        * '<S144>/Vector'
                                        */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_P_PwrDltTactRSPOffset[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S145>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_k_NoBsdFltrCoeff[42] =
{
    0.5F, 0.8F, 0.01F, 0.001F, 0.001F, 0.001F, 0.01F, 0.5F, 0.8F, 0.6F, 0.0015F,
    0.01F, 0.01F, 0.3F, 0.6F, 0.6F, 0.6F, 0.002F, 0.3F, 0.6F, 0.6F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S109>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_n_NiCldCtrl_FrmRunTm_No[56]
    =
{
    1200.0F, 1200.0F, 1200.0F, 1200.0F, 1200.0F, 1200.0F, 1200.0F, 1200.0F,
    1250.0F, 1250.0F, 1250.0F, 1250.0F, 1250.0F, 1250.0F, 1250.0F, 1250.0F,
    1300.0F, 1300.0F, 1300.0F, 1300.0F, 1300.0F, 1300.0F, 1300.0F, 1300.0F,
    1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F,
    1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F,
    1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F,
    1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F
} ;                                    /* Referenced by:
                                        * '<S167>/Vector'
                                        * '<S72>/Vector'
                                        */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_n_NiTrgtAdjust[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S158>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_r_CatTempMult[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S52>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_r_CoolantTempMult[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S53>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_r_PwrDltTact_Mult[42] =
{
    1.0F, 0.7F, 0.5F, 0.2F, 0.0F, 0.0F, 1.0F, 1.0F, 0.7F, 0.5F, 0.2F, 0.0F, 1.0F,
    1.0F, 1.0F, 0.7F, 0.5F, 0.2F, 1.0F, 1.0F, 1.0F, 1.0F, 0.7F, 0.5F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 0.7F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KtEOCR_r_RunTimeMult[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S54>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_M_TiCatTempMaint[7] =
{
    0.0F, 500.0F, 1000.0F, 2000.0F, 3000.0F, 3500.0F, 4000.0F
} ;                                    /* Referenced by: '<S118>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_M_TiCldCapctyRsrvOffst[7] =
{
    0.0F, 500.0F, 1000.0F, 1200.0F, 3000.0F, 3500.0F, 4000.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT)
    KxEOCR_M_TiCldCtrl_FrmRunTm_CatTemp[8] =
{
    1.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 40.0F, 60.0F
} ;                                    /* Referenced by:
                                        * '<S166>/Vector'
                                        * '<S69>/Vector'
                                        */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_M_TiTargetMax_Offset[7] =
{
    0.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 2900.0F
} ;                                    /* Referenced by: '<S156>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_M_TiTargetMin_Offset[7] =
{
    0.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 2900.0F
} ;                                    /* Referenced by: '<S157>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_P_PwrDltStgcRSPOffset[7] =
{
    0.0F, 50.0F, 100.0F, 125.0F, 150.0F, 175.0F, 200.0F
} ;                                    /* Referenced by: '<S70>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_P_PwrDltStgc_RSP[7] =
{
    10.0F, 12.0F, 14.0F, 18.0F, 20.0F, 89.0F, 90.0F
} ;                                    /* Referenced by:
                                        * '<S71>/Vector'
                                        * '<S144>/Vector'
                                        */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_P_PwrDltTactRSPOffset[7] =
{
    0.0F, 50.0F, 100.0F, 125.0F, 150.0F, 175.0F, 200.0F
} ;                                    /* Referenced by: '<S145>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_k_NoBsdFltrCoeff[7] =
{
    -500.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 500.0F
} ;                                    /* Referenced by: '<S109>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_n_NiCldCtrl_FrmRunTm_No[8] =
{
    1.0F, 15.0F, 30.0F, 50.0F, 75.0F, 80.0F, 85.0F, 90.0F
} ;                                    /* Referenced by:
                                        * '<S167>/Vector'
                                        * '<S72>/Vector'
                                        */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_n_NiTrgtAdjust[7] =
{
    -300.0F, -200.0F, -100.0F, -50.0F, -20.0F, 0.0F, 50.0F
} ;                                    /* Referenced by: '<S158>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_r_CatTempMult[9] =
{
    1.0F, 125.0F, 250.0F, 375.0F, 500.0F, 625.0F, 750.0F, 875.0F, 999.0F
} ;                                    /* Referenced by: '<S52>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_r_CoolantTempMult[9] =
{
    -40.0F, -15.0F, 0.0F, 15.0F, 30.0F, 45.0F, 60.0F, 75.0F, 99.0F
} ;                                    /* Referenced by: '<S53>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_r_PwrDltTact_Mult[6] =
{
    -20.0F, 10.0F, 20.0F, 40.0F, 55.0F, 70.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KxEOCR_r_RunTimeMult[9] =
{
    1.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S54>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT)
    KyEOCR_M_TiCldCtrl_FrmRunTm_CatTemp[8] =
{
    -50.0F, 25.0F, 100.0F, 300.0F, 500.0F, 700.0F, 900.0F, 1000.0F
} ;                                    /* Referenced by:
                                        * '<S166>/Vector'
                                        * '<S69>/Vector'
                                        */

static volatile CONST(float32, EOCR_VAR_INIT) KyEOCR_k_NoBsdFltrCoeff[6] =
{
    0.0F, 500.0F, 1000.0F, 2000.0F, 2500.0F, 2900.0F
} ;                                    /* Referenced by: '<S109>/Vector' */

static volatile CONST(float32, EOCR_VAR_INIT) KyEOCR_n_NiCldCtrl_FrmRunTm_No[7] =
{
    0.0F, 100.0F, 250.0F, 500.0F, 2000.0F, 2500.0F, 2900.0F
} ;                                    /* Referenced by:
                                        * '<S167>/Vector'
                                        * '<S72>/Vector'
                                        */

static volatile CONST(float32, EOCR_VAR_INIT) KyEOCR_r_PwrDltTact_Mult[7] =
{
    12.0F, 13.0F, 14.0F, 16.0F, 50.0F, 85.0F, 90.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_EOCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, EOCR_VAR_INIT) VaEOCR_M_TiColdCtrl_Max[2];/* '<S115>/Sum2' */
static VAR(float32, EOCR_VAR_INIT) VaEOCR_M_TiColdCtrl_Min[2];/* '<S115>/Sum3' */
static VAR(float32, EOCR_VAR_INIT) VeEOCC_M_TiColdArb;/* '<S115>/Switch3' */
static VAR(float32, EOCR_VAR_INIT) VeEOCC_P_CWU_PwrDlt;/* '<S9>/Product12' */
static VAR(float32, EOCR_VAR_INIT) VeEOCC_P_CWU_PwrDltTact;/* '<S115>/Product10' */
static VAR(float32, EOCR_VAR_INIT) VeEOCC_T_NiTiCtrl_StartECT;/* '<S10>/Switch3' */
static VAR(boolean, EOCR_VAR_INIT) VeEOCC_b_PwrDltStgcAllwd;/* '<S9>/Logical Operator1' */
static VAR(boolean, EOCR_VAR_INIT) VeEOCC_b_PwrDltTactAllwd;/* '<S114>/Logical Operator7' */
static VAR(float32, EOCR_VAR_INIT) VeEOCC_r_ColdCtrl_Raw;/* '<S8>/Product3' */
static VAR(float32, EOCR_VAR_INIT) VeEOCC_r_NiTiCtrl_Fact;/* '<S10>/Switch12' */
static VAR(float32, EOCR_VAR_INIT) VeEOCC_r_PwrDltTact_Mult;/* '<S114>/Switch6' */
static VAR(float32, EOCR_VAR_INIT) VeEOCI_Pct_PurgeIntsty;/* '<S5>/Switch9' */
static VAR(float32, EOCR_VAR_INIT) VeEOCI_T_CatTemp;/* '<S5>/Switch3' */
static VAR(float32, EOCR_VAR_INIT) VeEOCI_T_CoolTemp;/* '<S5>/Switch2' */
static VAR(boolean, EOCR_VAR_INIT) VeEOCI_b_CTMEnabled;/* '<S5>/Switch4' */
static VAR(boolean, EOCR_VAR_INIT) VeEOCI_b_CatWarmupEngFlag;/* '<S5>/Switch8' */
static VAR(float32, EOCR_VAR_INIT) VeEOCI_n_EngSpd;/* '<S5>/Switch1' */
static VAR(float32, EOCR_VAR_INIT) VeEOCI_n_No_Fltd;/* '<S95>/Switch1' */
static VAR(uint32, EOCR_VAR_INIT) VeEOCR_g_CatHtgStatusRegA_DS;/* '<Root>/DSM_1' */
static VAR(uint16, EOCR_VAR_INIT) VeEOCR_g_CatHtgStatusRegB_DS;/* '<Root>/DSM_2' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_EOCR
#include "MemMap.h"

CONST(ConstP_EOCR_ac_T, EOCR_VAR_INIT) EOCR_ac_ConstP =
{
    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S109>/Vector'
     */
    {
        6U, 5U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S167>/Vector'
     *   '<S72>/Vector'
     */
    {
        7U, 6U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S166>/Vector'
     *   '<S69>/Vector'
     */
    {
        7U, 7U
    },

    /* Computed Parameter: Vector_maxIndex_p
     * Referenced by: '<S146>/Vector'
     */
    {
        5U, 6U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_EOCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

VAR(B_EOCR_ac_T, EOCR_VAR_INIT) EOCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

VAR(DW_EOCR_ac_T, EOCR_VAR_INIT) EOCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, EOCR_CODE) EOCR_MedTED1(void) /* Explicit Task: MedTED1 */
{
    float32 Vector_f;
    float32 rtb_TmpSignalConversionAtVeABCR_P_HV_A_m;
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a;
    float32 rtb_TmpSignalConversionAtVeESMR_P_Batt_a;
    float32 rtb_TmpSignalConversionAtVeESMR_P_Boos_d;
    float32 rtb_TmpSignalConversionAtVeVSDR_n_Prim_m;
    float32 rtb_TmpSignalConversionAtVeVSDR_n_StratN;
    float32 rtb_Vector_hy;
    float32 rtb_Vector_pz;
    float32 tmpRead;
    float32 tmpRead_0;
    TeESSR_e_EngStartStopSt tmpRead_1;
    TeHPMR_e_PropSysMode tmpRead_3;
    TePMDR_e_PowerMode tmpRead_2;
    boolean rtb_AND_k;
    boolean rtb_Logical;
    boolean rtb_Logical9;
    boolean rtb_LogicalOperator2_f;
    boolean rtb_OR1;
    boolean rtb_OR1_ng;
    boolean rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

    /* Inport: '<Root>/VeENGR_T_EngCoolantTemp' */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value((&(VeEOCI_T_CoolTemp)));

    /* Inport: '<Root>/VeTISR_n_InputSpeed' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value((&(VeEOCI_n_EngSpd)));

    /* Inport: '<Root>/VeENGR_b_CatalystWarmUpEnabled' */
    (void)Rte_Read_VeENGR_b_CatalystWarmUpEnabled_Value
        ((&(VeEOCI_b_CatWarmupEngFlag)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/EOCR_MedTED1'
     */
    /* SignalConversion generated from: '<S1>/VeVSDR_n_StratNoFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_StratNoFltrd'
     */
    (void)Rte_Read_VeVSDR_n_StratNoFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_StratN);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_Prim_m);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BattLTMaxLim' incorporates:
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value
        (&rtb_TmpSignalConversionAtVeESMR_P_Batt_a);

    /* SignalConversion generated from: '<S1>/VeABCR_P_HV_AccPwr' incorporates:
     *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeABCR_P_HV_AccPwr_Value
        (&rtb_TmpSignalConversionAtVeABCR_P_HV_A_m);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt' incorporates:
     *  Inport: '<Root>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt'
     */
    (void)Rte_Read_VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Value
        (&rtb_TmpSignalConversionAtVeESMR_P_Boos_d);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EOCI_Input_Processing'
     */
    /* Switch: '<S5>/Switch8' incorporates:
     *  Constant: '<S102>/Calib'
     */
    if (HeEOCR_b_CatWarmupOvrrdEnable)
    {
        /* Switch: '<S5>/Switch8' incorporates:
         *  Constant: '<S103>/Calib'
         *  Inport: '<Root>/VeENGR_b_CatalystWarmUpEnabled'
         */
        VeEOCI_b_CatWarmupEngFlag = HeEOCR_b_CatWarmupOvrrdState;
    }

    /* End of Switch: '<S5>/Switch8' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S105>/Calib'
     */
    if (HeEOCR_b_EngSpdOvrrd)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S107>/Calib'
         *  Inport: '<Root>/VeTISR_n_InputSpeed'
         */
        VeEOCI_n_EngSpd = HeEOCR_n_EngSpdOvrrd;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S104>/Calib'
     */
    if (HeEOCR_b_CoolTempOvrrd)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S98>/Calib'
         *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
         */
        VeEOCI_T_CoolTemp = HeEOCR_T_CoolTempOvrrd;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S101>/Calib'
     *  Inport: '<Root>/VeENGR_T_CatalystTemp'
     *  Inport: '<Root>/VeENGR_b_CatalystTempFA'
     */
    if (HeEOCR_b_CatTempOvrrd)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S97>/Calib'
         *  Inport: '<Root>/VeENGR_T_CatalystTemp'
         */
        VeEOCI_T_CatTemp = HeEOCR_T_CatTempOvrrd;
    }
    else
    {
        (void)Rte_Read_VeENGR_T_CatalystTemp_Value((&(VeEOCI_T_CatTemp)));
        (void)Rte_Read_VeENGR_b_CatalystTempFA_Value(&rtb_Logical);

        /* Switch: '<S5>/Switch6' incorporates:
         *  Inport: '<Root>/VeENGR_T_CatalystTemp'
         *  Inport: '<Root>/VeENGR_b_CatalystTempFA'
         */
        if (rtb_Logical)
        {
            /* Switch: '<S5>/Switch3' incorporates:
             *  Constant: '<S108>/Calib'
             */
            VeEOCI_T_CatTemp = KeEOCR_T_CatTempDflt;
        }

        /* End of Switch: '<S5>/Switch6' */
    }

    /* End of Switch: '<S5>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* Inport: '<Root>/VeENGR_b_CatTempMaintEnabled' */
    (void)Rte_Read_VeENGR_b_CatTempMaintEnabled_Value((&(VeEOCI_b_CTMEnabled)));

    /* Inport: '<Root>/VeENGR_Pct_PurgeIntensity' */
    (void)Rte_Read_VeENGR_Pct_PurgeIntensity_Value((&(VeEOCI_Pct_PurgeIntsty)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/EOCR_MedTED1'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EOCI_Input_Processing'
     */
    /* Switch: '<S5>/Switch9' incorporates:
     *  Constant: '<S106>/Calib'
     */
    if (HeEOCR_b_PurgeAdjst_Ovrd)
    {
        /* Switch: '<S5>/Switch9' incorporates:
         *  Constant: '<S96>/Calib'
         *  Inport: '<Root>/VeENGR_Pct_PurgeIntensity'
         */
        VeEOCI_Pct_PurgeIntsty = HeEOCR_Pct_PurgeAdjst_DfltVal;
    }

    /* End of Switch: '<S5>/Switch9' */

    /* Outputs for Atomic SubSystem: '<S5>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S95>/Switch1' incorporates:
     *  Lookup_n-D: '<S109>/Vector'
     *  Product: '<S95>/Multiplication'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_StratNoFltrd'
     *  Sum: '<S5>/Subtraction7'
     *  Sum: '<S95>/Subtraction'
     *  Sum: '<S95>/Summation'
     *  UnitDelay: '<S5>/Unit Delay5'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    VeEOCI_n_No_Fltd = (look2_iflf_binlca_16a
                        (rtb_TmpSignalConversionAtVeVSDR_n_StratN -
                         EOCR_ac_DW.UnitDelay5_DSTATE,
                         rtb_TmpSignalConversionAtVeVSDR_n_StratN, ((const
                           float32 *)&(KxEOCR_k_NoBsdFltrCoeff[0])), ((const
                           float32 *)&(KyEOCR_k_NoBsdFltrCoeff[0])), ((const
                           float32 *)&(KtEOCR_k_NoBsdFltrCoeff[0])),
                         EOCR_ac_ConstP.Vector_maxIndex, 7U) *
                        (rtb_TmpSignalConversionAtVeVSDR_n_StratN -
                         VeEOCI_n_No_Fltd)) + VeEOCI_n_No_Fltd;

    /* End of Outputs for SubSystem: '<S5>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S99>/Calib'
     */
    if (HeEOCR_b_CTMOvrrdEnable)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S100>/Calib'
         *  Inport: '<Root>/VeENGR_b_CatTempMaintEnabled'
         */
        VeEOCI_b_CTMEnabled = HeEOCR_b_CTMOvrrdState;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Update for UnitDelay: '<S5>/Unit Delay5' */
    EOCR_ac_DW.UnitDelay5_DSTATE = VeEOCI_n_No_Fltd;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EOCCCalcA'
     */
    /* Logic: '<S21>/Logical' incorporates:
     *  Constant: '<S92>/Calib'
     *  RelationalOperator: '<S21>/Comparison1'
     *  SignalConversion: '<S5>/Signal Conversion1'
     */
    rtb_Logical = ((VeEOCI_b_CatWarmupEngFlag) && (VeEOCI_n_EngSpd >=
                    KeEOCR_n_EngSpdCatWarmUp));

    /* Outputs for Atomic SubSystem: '<S21>/EdgeRising' */
    /* Logic: '<S91>/OR1' incorporates:
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtb_OR1 = !EOCR_ac_DW.UnitDelay_DSTATE_i;

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    EOCR_ac_DW.UnitDelay_DSTATE_i = rtb_Logical;

    /* End of Outputs for SubSystem: '<S21>/EdgeRising' */

    /* If: '<S21>/If' */
    if (VeEOCI_b_CatWarmupEngFlag)
    {
        /* Outputs for IfAction SubSystem: '<S21>/CatalystWarmupEnabled' incorporates:
         *  ActionPort: '<S90>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S21>/EdgeRising' */
        /* Merge: '<S21>/Merge2' incorporates:
         *  Inport: '<S90>/ResetIn'
         *  Logic: '<S91>/AND'
         */
        rtb_OR1 = (rtb_Logical && rtb_OR1);

        /* End of Outputs for SubSystem: '<S21>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S21>/CatalystWarmupEnabled' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S21>/NormalOperation' incorporates:
         *  ActionPort: '<S93>/Action Port'
         */
        /* Outputs for Function Call SubSystem: '<S1>/EOCI_Input_Processing' */
        /* Switch: '<S93>/Switch1' incorporates:
         *  Constant: '<S17>/Calib'
         *  RelationalOperator: '<S93>/Less  Than2'
         *  SignalConversion: '<S5>/Signal Conversion1'
         */
        rtb_Logical = (VeEOCI_n_EngSpd >= KeEOCR_n_EngSpdRunTimeEnbl);

        /* End of Outputs for SubSystem: '<S1>/EOCI_Input_Processing' */

        /* Switch: '<S93>/Switch1' incorporates:
         *  Constant: '<S14>/Calib'
         *  Constant: '<S15>/Calib'
         *  Constant: '<S16>/Calib'
         *  Logic: '<S93>/Logical Operator2'
         *  Logic: '<S93>/Logical Operator3'
         *  RelationalOperator: '<S93>/Less  Than1'
         *  RelationalOperator: '<S93>/Less  Than5'
         */
        if (KeEOCR_b_RunTimeResetAndLogic)
        {
            rtb_OR1 = ((VeEOCI_T_CoolTemp < KeEOCR_T_CoolTempRunTimeReset) &&
                       (VeEOCI_T_CatTemp < KeEOCR_T_CatTempRunTimeReset));
        }
        else
        {
            rtb_OR1 = ((VeEOCI_T_CoolTemp < KeEOCR_T_CoolTempRunTimeReset) ||
                       (VeEOCI_T_CatTemp < KeEOCR_T_CatTempRunTimeReset));
        }

        /* End of Switch: '<S93>/Switch1' */

        /* Merge: '<S21>/Merge2' incorporates:
         *  Logic: '<S93>/Logical Operator'
         *  Logic: '<S93>/Logical Operator1'
         */
        rtb_OR1 = ((!rtb_Logical) && rtb_OR1);

        /* End of Outputs for SubSystem: '<S21>/NormalOperation' */
    }

    /* End of If: '<S21>/If' */

    /* Switch: '<S20>/Switch3' incorporates:
     *  Constant: '<S11>/Calib'
     *  Switch: '<S20>/Switch1'
     *  Switch: '<S20>/Switch2'
     */
    if (HeEOCR_b_RunTimeOvrrd)
    {
        /* Switch: '<S20>/Switch3' incorporates:
         *  Constant: '<S12>/Calib'
         */
        EOCR_ac_DW.UnitDelay_DSTATE_k = HeEOCR_t_RunTimeOvrrd;
    }
    else if (rtb_OR1)
    {
        /* Switch: '<S20>/Switch2' incorporates:
         *  Constant: '<S20>/InitialTimeValue'
         *  Switch: '<S20>/Switch3'
         */
        EOCR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        if (rtb_Logical)
        {
            /* Switch: '<S20>/Switch1' incorporates:
             *  Constant: '<S13>/Calib'
             *  Sum: '<S20>/Sum//Sub'
             *  Switch: '<S20>/Switch2'
             *  Switch: '<S20>/Switch3'
             *  UnitDelay: '<S20>/UnitDelay'
             */
            EOCR_ac_DW.UnitDelay_DSTATE_k += HeEOCR_t_TimeStep;
        }
    }

    /* End of Switch: '<S20>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* Inport: '<Root>/VeHPMR_e_PropSysMode' */
    (void)Rte_Read_VeHPMR_e_PropSysMode_Value(&tmpRead_3);

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&tmpRead_2);

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_1);

    /* Inport: '<Root>/VeENGR_t_EngOffTime' */
    (void)Rte_Read_VeENGR_t_EngOffTime_Value(&Vector_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/EOCR_MedTED1'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EOCCCalcA'
     */
    /* Outputs for Atomic SubSystem: '<S20>/Limiter' */
    /* Switch: '<S89>/Switch1' incorporates:
     *  Constant: '<S18>/Calib'
     *  RelationalOperator: '<S89>/Relational Operator'
     */
    if (KeEOCR_t_RunTimeMax < EOCR_ac_DW.UnitDelay_DSTATE_k)
    {
        /* Switch: '<S73>/Switch1' */
        rtb_Vector_pz = KeEOCR_t_RunTimeMax;
    }
    else
    {
        /* Switch: '<S73>/Switch1' */
        rtb_Vector_pz = EOCR_ac_DW.UnitDelay_DSTATE_k;
    }

    /* End of Switch: '<S89>/Switch1' */

    /* Switch: '<S89>/Switch' incorporates:
     *  Constant: '<S20>/MinTime'
     *  RelationalOperator: '<S89>/Relational Operator1'
     *  UnitDelay: '<S20>/UnitDelay'
     */
    if (rtb_Vector_pz > 0.0F)
    {
        EOCR_ac_DW.UnitDelay_DSTATE_k = rtb_Vector_pz;
    }
    else
    {
        EOCR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }

    /* End of Switch: '<S89>/Switch' */
    /* End of Outputs for SubSystem: '<S20>/Limiter' */

    /* Lookup_n-D: '<S54>/Vector' incorporates:
     *  Switch: '<S89>/Switch'
     *  UnitDelay: '<S20>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeVSDR_n_StratN = look1_iflf_binlca_16a
        (EOCR_ac_DW.UnitDelay_DSTATE_k, ((const float32 *)
          &(KxEOCR_r_RunTimeMult[0])), ((const float32 *)&(KtEOCR_r_RunTimeMult
           [0])), 8U);

    /* Lookup_n-D: '<S52>/Vector' incorporates:
     *  Switch: '<S5>/Switch3'
     */
    rtb_Vector_pz = look1_iflf_binlca_16a(VeEOCI_T_CatTemp, ((const float32 *)
        &(KxEOCR_r_CatTempMult[0])), ((const float32 *)&(KtEOCR_r_CatTempMult[0])),
        8U);

    /* Lookup_n-D: '<S71>/Vector' incorporates:
     *  Lookup_n-D: '<S53>/Vector'
     *  Switch: '<S5>/Switch2'
     */
    rtb_Vector_hy = look1_iflf_binlca_16a(VeEOCI_T_CoolTemp, ((const float32 *)
        &(KxEOCR_r_CoolantTempMult[0])), ((const float32 *)
        &(KtEOCR_r_CoolantTempMult[0])), 8U);

    /* Logic: '<S10>/Logical4' incorporates:
     *  Constant: '<S79>/Constant'
     *  Logic: '<S10>/Logical5'
     *  RelationalOperator: '<S10>/Less  Than16'
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    rtb_OR1 = ((EOCR_ac_DW.UnitDelay2_DSTATE) && (CeESSR_e_EngOff != ((uint32)
                 tmpRead_1)));

    /* Outputs for Atomic SubSystem: '<S10>/EdgeRising2' */
    /* Logic: '<S76>/OR1' incorporates:
     *  UnitDelay: '<S76>/Unit Delay'
     */
    rtb_OR1_ng = !EOCR_ac_DW.UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S76>/Unit Delay' */
    EOCR_ac_DW.UnitDelay_DSTATE_o = rtb_OR1;

    /* End of Outputs for SubSystem: '<S10>/EdgeRising2' */

    /* Logic: '<S10>/Logical9' incorporates:
     *  Constant: '<S78>/Constant'
     *  Constant: '<S80>/Constant'
     *  RelationalOperator: '<S10>/Less  Than14'
     *  RelationalOperator: '<S10>/Less  Than15'
     */
    rtb_Logical9 = ((CePMDR_e_PowerMode_Run == ((uint32)tmpRead_2)) || (((uint32)
                      tmpRead_2) == CePMDR_e_PowerMode_Crank));

    /* Outputs for Atomic SubSystem: '<S10>/EdgeFalling' */
    /* Logic: '<S74>/AND' incorporates:
     *  Logic: '<S74>/OR1'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    rtb_AND_k = ((!rtb_Logical9) && (EOCR_ac_DW.UnitDelay_DSTATE_k1));

    /* Update for UnitDelay: '<S74>/Unit Delay' */
    EOCR_ac_DW.UnitDelay_DSTATE_k1 = rtb_Logical9;

    /* End of Outputs for SubSystem: '<S10>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S10>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S10>/EdgeRising2' */
    /* Logic: '<S88>/OR1' incorporates:
     *  Logic: '<S76>/AND'
     *  Logic: '<S88>/NOT'
     *  Logic: '<S88>/OR'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    EOCR_ac_DW.UnitDelay_DSTATE_ht = ((rtb_OR1 && rtb_OR1_ng) || ((!rtb_AND_k) &&
        (EOCR_ac_DW.UnitDelay_DSTATE_ht)));

    /* End of Outputs for SubSystem: '<S10>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S10>/Signal Latch On With Reset2' */

    /* Switch: '<S10>/Switch3' incorporates:
     *  UnitDelay: '<S88>/Unit Delay'
     */
    if (!EOCR_ac_DW.UnitDelay_DSTATE_ht)
    {
        /* Switch: '<S10>/Switch3' */
        VeEOCC_T_NiTiCtrl_StartECT = VeEOCI_T_CoolTemp;
    }

    /* End of Switch: '<S10>/Switch3' */

    /* RelationalOperator: '<S10>/Less  Than1' incorporates:
     *  Constant: '<S82>/Calib'
     */
    rtb_OR1 = (VeEOCC_T_NiTiCtrl_StartECT < KeEOCR_T_NiTiCtrl_StartECTMin);

    /* RelationalOperator: '<S10>/Less  Than2' incorporates:
     *  Constant: '<S85>/Calib'
     */
    rtb_OR1_ng = (Vector_f < KeEOCR_t_NiTiCtrl_EngOffTimeMin);

    /* Outputs for Atomic SubSystem: '<S10>/EdgeRising' */
    /* Logic: '<S75>/OR1' incorporates:
     *  UnitDelay: '<S75>/Unit Delay'
     */
    rtb_Logical9 = !EOCR_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S75>/Unit Delay' */
    EOCR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

    /* Outputs for Atomic SubSystem: '<S10>/Signal Latch On With Reset1' */
    /* Logic: '<S87>/OR1' incorporates:
     *  Constant: '<S77>/Constant'
     *  Constant: '<S83>/Calib'
     *  Logic: '<S10>/Logical'
     *  Logic: '<S75>/AND'
     *  Logic: '<S87>/NOT'
     *  Logic: '<S87>/OR'
     *  RelationalOperator: '<S10>/Less  Than3'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    EOCR_ac_DW.UnitDelay_DSTATE_g = (((KeEOCR_b_EngStrStpEnbl) && (((uint32)
        tmpRead_1) == CeESSR_e_FinishStopSt)) ||
        (((!rtb_TmpSignalConversionAtVeHPMR_b_PropSy) || (!rtb_Logical9)) &&
         (EOCR_ac_DW.UnitDelay_DSTATE_g)));

    /* End of Outputs for SubSystem: '<S10>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S10>/EdgeRising' */

    /* Logic: '<S10>/Logical10' incorporates:
     *  Constant: '<S81>/Constant'
     *  Constant: '<S84>/Calib'
     *  Inport: '<Root>/VeHPMR_e_PropSysMode'
     *  RelationalOperator: '<S10>/Less  Than17'
     */
    rtb_Logical9 = ((((uint32)tmpRead_3) != CeHPMR_e_Hybrid) &&
                    (KeEOCR_b_NiTi_PropSysMdChk));

    /* Logic: '<S10>/Logical1' incorporates:
     *  UnitDelay: '<S87>/Unit Delay'
     */
    rtb_AND_k = (((rtb_OR1 || rtb_OR1_ng) || (EOCR_ac_DW.UnitDelay_DSTATE_g)) ||
                 rtb_Logical9);

    /* Switch: '<S10>/Switch12' */
    VeEOCC_r_NiTiCtrl_Fact = (float32)((!rtb_AND_k) ? 1 : 0);

    /* Logic: '<S8>/Logical Operator2' incorporates:
     *  Constant: '<S50>/Calib'
     *  Constant: '<S51>/Calib'
     *  Logic: '<S8>/Logical Operator3'
     *  RelationalOperator: '<S8>/Comparison2'
     *  UnitDelay: '<S20>/UnitDelay'
     */
    rtb_LogicalOperator2_f = (((EOCR_ac_DW.UnitDelay_DSTATE_k <
        KeEOCR_t_CWUInitCondThresh) && (!VeEOCI_b_CatWarmupEngFlag)) &&
        (KeEOCR_b_CWUInitCondEnbl));

    /* Product: '<S8>/Product3' incorporates:
     *  Switch: '<S8>/Switch3'
     */
    VeEOCC_r_ColdCtrl_Raw = (((rtb_TmpSignalConversionAtVeVSDR_n_StratN *
        rtb_Vector_pz) * rtb_Vector_hy) * VeEOCC_r_NiTiCtrl_Fact) * ((float32)((
        !rtb_LogicalOperator2_f) ? 1 : 0));

    /* RelationalOperator: '<S7>/Comparison4' incorporates:
     *  Constant: '<S49>/Calib'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy = (VeEOCC_r_ColdCtrl_Raw >
        ((float32)Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()));

    /* Switch: '<S7>/Switch9' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read12'
     *  DataStoreWrite: '<S7>/Data Store Write11'
     *  S-Function (sfix_bitop): '<S24>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S24>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S24>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S37>/FixPt Bitwise Operator1'
     */
    if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 2048U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 2048U);
    }

    /* End of Switch: '<S7>/Switch9' */

    /* Switch: '<S7>/Switch13' incorporates:
     *  Constant: '<S49>/Calib'
     *  DataStoreRead: '<S7>/Data Store Read8'
     *  DataStoreWrite: '<S7>/Data Store Write7'
     *  RelationalOperator: '<S7>/Comparison3'
     *  S-Function (sfix_bitop): '<S25>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S25>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S25>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S38>/FixPt Bitwise Operator1'
     */
    if (rtb_TmpSignalConversionAtVeVSDR_n_StratN > ((float32)
            Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()))
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 128U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 128U);
    }

    /* End of Switch: '<S7>/Switch13' */

    /* Switch: '<S7>/Switch7' incorporates:
     *  Constant: '<S49>/Calib'
     *  DataStoreRead: '<S7>/Data Store Read10'
     *  DataStoreWrite: '<S7>/Data Store Write8'
     *  RelationalOperator: '<S7>/Comparison1'
     *  S-Function (sfix_bitop): '<S32>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S32>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S32>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S45>/FixPt Bitwise Operator1'
     */
    if (rtb_Vector_pz > ((float32)
                         Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()))
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 256U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 256U);
    }

    /* End of Switch: '<S7>/Switch7' */

    /* Switch: '<S7>/Switch8' incorporates:
     *  Constant: '<S49>/Calib'
     *  DataStoreRead: '<S7>/Data Store Read9'
     *  DataStoreWrite: '<S7>/Data Store Write9'
     *  RelationalOperator: '<S7>/Comparison2'
     *  S-Function (sfix_bitop): '<S33>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S33>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S33>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S46>/FixPt Bitwise Operator1'
     */
    if (rtb_Vector_hy > ((float32)
                         Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()))
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 512U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 512U);
    }

    /* End of Switch: '<S7>/Switch8' */

    /* Switch: '<S7>/Switch21' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read1'
     *  DataStoreWrite: '<S7>/Data Store Write'
     *  S-Function (sfix_bitop): '<S22>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S22>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S22>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S35>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 1U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 1U);
    }

    /* End of Switch: '<S7>/Switch21' */

    /* Switch: '<S7>/Switch1' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read7'
     *  DataStoreWrite: '<S7>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S23>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S23>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S23>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S36>/FixPt Bitwise Operator1'
     */
    if (VeEOCI_b_CatWarmupEngFlag)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 2U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 2U);
    }

    /* End of Switch: '<S7>/Switch1' */

    /* Switch: '<S7>/Switch2' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read2'
     *  DataStoreWrite: '<S7>/Data Store Write2'
     *  Logic: '<S7>/Logical Operator1'
     *  S-Function (sfix_bitop): '<S27>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S27>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S27>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S40>/FixPt Bitwise Operator1'
     */
    if (!rtb_OR1)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 4U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 4U);
    }

    /* End of Switch: '<S7>/Switch2' */

    /* Switch: '<S7>/Switch3' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read3'
     *  DataStoreWrite: '<S7>/Data Store Write3'
     *  Logic: '<S7>/Logical Operator2'
     *  S-Function (sfix_bitop): '<S28>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S28>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S28>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S41>/FixPt Bitwise Operator1'
     */
    if (!rtb_OR1_ng)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 8U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 8U);
    }

    /* End of Switch: '<S7>/Switch3' */

    /* Switch: '<S7>/Switch4' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read4'
     *  DataStoreWrite: '<S7>/Data Store Write4'
     *  Logic: '<S7>/Logical Operator3'
     *  S-Function (sfix_bitop): '<S29>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S29>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S29>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S42>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    if (!EOCR_ac_DW.UnitDelay_DSTATE_g)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 16U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 16U);
    }

    /* End of Switch: '<S7>/Switch4' */

    /* Switch: '<S7>/Switch5' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read6'
     *  DataStoreWrite: '<S7>/Data Store Write5'
     *  Logic: '<S7>/Logical Operator4'
     *  S-Function (sfix_bitop): '<S30>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S30>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S30>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S43>/FixPt Bitwise Operator1'
     */
    if (!rtb_Logical9)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 32U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 32U);
    }

    /* End of Switch: '<S7>/Switch5' */

    /* Switch: '<S7>/Switch6' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read5'
     *  DataStoreWrite: '<S7>/Data Store Write6'
     *  Logic: '<S7>/Logical Operator5'
     *  S-Function (sfix_bitop): '<S31>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S31>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S31>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S44>/FixPt Bitwise Operator1'
     */
    if (!rtb_AND_k)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 64U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 64U);
    }

    /* End of Switch: '<S7>/Switch6' */

    /* Switch: '<S7>/Switch11' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read11'
     *  DataStoreWrite: '<S7>/Data Store Write10'
     *  S-Function (sfix_bitop): '<S34>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S34>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S34>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S47>/FixPt Bitwise Operator1'
     */
    if (rtb_LogicalOperator2_f)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 1024U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 1024U);
    }

    /* End of Switch: '<S7>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd' */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value(&tmpRead_0);

    /* Inport: '<Root>/VeATRR_M_ToReqImmedOITR_Phy' */
    (void)Rte_Read_VeATRR_M_ToReqImmedOITR_Phy_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/EOCR_MedTED1'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EOCCCalcA'
     */
    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S57>/Constant Value1'
     *  Constant: '<S58>/Calib'
     *  Product: '<S57>/Multiplication3'
     */
    rtb_Vector_pz = HeEOCR_t_PwrDltDrvtvSampleTime / 2.0F;

    /* Lookup_n-D: '<S72>/Vector' incorporates:
     *  Switch: '<S89>/Switch'
     *  Switch: '<S95>/Switch1'
     *  UnitDelay: '<S20>/UnitDelay'
     */
    Vector_f = look2_iflf_binlca_16a(EOCR_ac_DW.UnitDelay_DSTATE_k,
        VeEOCI_n_No_Fltd, ((const float32 *)&(KxEOCR_n_NiCldCtrl_FrmRunTm_No[0])),
        ((const float32 *)&(KyEOCR_n_NiCldCtrl_FrmRunTm_No[0])), ((const float32
        *)&(KtEOCR_n_NiCldCtrl_FrmRunTm_No[0])), EOCR_ac_ConstP.pooled21, 8U);

    /* Lookup_n-D: '<S69>/Vector' incorporates:
     *  Switch: '<S5>/Switch3'
     *  Switch: '<S89>/Switch'
     *  UnitDelay: '<S20>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeVSDR_n_StratN = look2_iflf_binlca_16a
        (EOCR_ac_DW.UnitDelay_DSTATE_k, VeEOCI_T_CatTemp, ((const float32 *)
          &(KxEOCR_M_TiCldCtrl_FrmRunTm_CatTemp[0])), ((const float32 *)
          &(KyEOCR_M_TiCldCtrl_FrmRunTm_CatTemp[0])), ((const float32 *)
          &(KtEOCR_M_TiCldCtrl_FrmRunTm_CatTemp[0])), EOCR_ac_ConstP.pooled22,
         8U);

    /* Product: '<S9>/Product12' incorporates:
     *  Constant: '<S9>/Constant Value7'
     *  Product: '<S9>/Product11'
     *  Product: '<S9>/Product13'
     *  Sum: '<S9>/Sum11'
     */
    VeEOCC_P_CWU_PwrDlt = ((tmpRead * tmpRead_0) - (Vector_f *
                            rtb_TmpSignalConversionAtVeVSDR_n_StratN)) *
        0.000104719758F;

    /* Product: '<S57>/Multiplication2' incorporates:
     *  Constant: '<S68>/Calib'
     *  Product: '<S57>/Multiplication4'
     *  Sum: '<S57>/Summation'
     *  Sum: '<S57>/Summation1'
     *  Sum: '<S57>/Summation2'
     *  UnitDelay: '<S57>/Unit Delay'
     *  UnitDelay: '<S57>/Unit Delay1'
     */
    EOCR_ac_DW.UnitDelay1_DSTATE_a = ((VeEOCC_P_CWU_PwrDlt - ((rtb_Vector_pz -
        KeEOCR_t_PwrDltStgcTimePrd) * EOCR_ac_DW.UnitDelay1_DSTATE_a)) -
        EOCR_ac_DW.UnitDelay_DSTATE_a) / (rtb_Vector_pz +
        KeEOCR_t_PwrDltStgcTimePrd);

    /* Sum: '<S9>/Sum1' incorporates:
     *  Constant: '<S9>/Constant Value11'
     *  Lookup_n-D: '<S70>/Vector'
     *  Lookup_n-D: '<S71>/Vector'
     *  MinMax: '<S9>/MinMax1'
     *  MinMax: '<S9>/MinMax2'
     *  MinMax: '<S9>/MinMax3'
     *  Product: '<S57>/Multiplication2'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  Sum: '<S9>/Sum10'
     *  UnitDelay: '<S57>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = fminf
        (rtb_TmpSignalConversionAtVeESMR_P_Boos_d, fminf(fmaxf
          (rtb_TmpSignalConversionAtVeESMR_P_Batt_a, 0.0F),
          look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a, ((
             const float32 *)&(KxEOCR_P_PwrDltStgc_RSP[0])), ((const float32 *)
            &(KtEOCR_P_PwrDltStgc_RSP[0])), 6U)) -
         rtb_TmpSignalConversionAtVeABCR_P_HV_A_m) + look1_iflf_binlca_16a
        (EOCR_ac_DW.UnitDelay1_DSTATE_a, ((const float32 *)
          &(KxEOCR_P_PwrDltStgcRSPOffset[0])), ((const float32 *)
          &(KtEOCR_P_PwrDltStgcRSPOffset[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S9>/Hysteresis1' */
    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<S60>/Constant Value'
     *  Constant: '<S62>/Calib'
     *  RelationalOperator: '<S60>/Greater  Than'
     *  RelationalOperator: '<S60>/Greater  Than1'
     *  Sum: '<S9>/Sum9'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    if (VeEOCC_P_CWU_PwrDlt > rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a)
    {
        EOCR_ac_DW.UnitDelay_DSTATE_hq = true;
    }
    else
    {
        EOCR_ac_DW.UnitDelay_DSTATE_hq = ((VeEOCC_P_CWU_PwrDlt >=
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a - KeEOCR_P_PwrDlt_LSP)) &&
            (EOCR_ac_DW.UnitDelay_DSTATE_hq));
    }

    /* End of Switch: '<S60>/Switch1' */
    /* End of Outputs for SubSystem: '<S9>/Hysteresis1' */

    /* Logic: '<S9>/Logical Operator1' incorporates:
     *  UnitDelay: '<S60>/Unit Delay'
     */
    VeEOCC_b_PwrDltStgcAllwd = !EOCR_ac_DW.UnitDelay_DSTATE_hq;

    /* Switch: '<S7>/Switch14' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read16'
     *  DataStoreWrite: '<S7>/Data Store Write13'
     *  S-Function (sfix_bitop): '<S26>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S26>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S26>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S39>/FixPt Bitwise Operator1'
     */
    if (VeEOCC_b_PwrDltStgcAllwd)
    {
        VeEOCR_g_CatHtgStatusRegA_DS = VeEOCR_g_CatHtgStatusRegA_DS | 8192U;
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegA_DS = ~((~VeEOCR_g_CatHtgStatusRegA_DS) | 8192U);
    }

    /* End of Switch: '<S7>/Switch14' */

    /* Outputs for Atomic SubSystem: '<S9>/Hysteresis' */
    /* Switch: '<S59>/Switch1' incorporates:
     *  Constant: '<S59>/Constant Value'
     *  Constant: '<S64>/Calib'
     *  Constant: '<S65>/Calib'
     *  RelationalOperator: '<S59>/Greater  Than'
     *  RelationalOperator: '<S59>/Greater  Than1'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeVSDR_n_Prim_m > KeEOCR_n_Purge_NoThrsh_Dsbl)
    {
        EOCR_ac_DW.UnitDelay_DSTATE_or = true;
    }
    else
    {
        EOCR_ac_DW.UnitDelay_DSTATE_or =
            ((rtb_TmpSignalConversionAtVeVSDR_n_Prim_m >=
              KeEOCR_n_Purge_NoThrsh_Enbl) && (EOCR_ac_DW.UnitDelay_DSTATE_or));
    }

    /* End of Switch: '<S59>/Switch1' */
    /* End of Outputs for SubSystem: '<S9>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S9>/Hysteresis2' */
    /* Switch: '<S61>/Switch1' incorporates:
     *  Constant: '<S61>/Constant Value'
     *  Constant: '<S66>/Calib'
     *  Constant: '<S67>/Calib'
     *  RelationalOperator: '<S61>/Greater  Than'
     *  RelationalOperator: '<S61>/Greater  Than1'
     *  SignalConversion: '<S9>/Signal Conversion'
     *  UnitDelay: '<S61>/Unit Delay'
     */
    if (VeEOCC_r_ColdCtrl_Raw > KeEOCR_r_StgcMult_RSP)
    {
        EOCR_ac_DW.UnitDelay_DSTATE_m = true;
    }
    else
    {
        EOCR_ac_DW.UnitDelay_DSTATE_m = ((VeEOCC_r_ColdCtrl_Raw >=
            KeEOCR_r_StgcMult_LSP) && (EOCR_ac_DW.UnitDelay_DSTATE_m));
    }

    /* End of Switch: '<S61>/Switch1' */
    /* End of Outputs for SubSystem: '<S9>/Hysteresis2' */

    /* Update for UnitDelay: '<S10>/Unit Delay2' incorporates:
     *  Inport: '<Root>/VeENGR_b_ECT_Sgnl_Rcvd'
     */
    (void)Rte_Read_VeENGR_b_ECT_Sgnl_Rcvd_Value(&EOCR_ac_DW.UnitDelay2_DSTATE);

    /* Logic: '<S9>/Logical Operator' incorporates:
     *  UnitDelay: '<S61>/Unit Delay'
     */
    rtb_Logical = ((EOCR_ac_DW.UnitDelay_DSTATE_m) && (VeEOCC_b_PwrDltStgcAllwd));

    /* Product: '<S9>/Product4' */
    rtb_Vector_pz = VeEOCC_r_ColdCtrl_Raw * Vector_f;

    /* Outputs for Atomic SubSystem: '<S9>/Limiter2' */
    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     *  RelationalOperator: '<S73>/Relational Operator'
     */
    if (KeEOCR_n_NiMin_MaxLim < rtb_Vector_pz)
    {
        /* Switch: '<S73>/Switch1' */
        rtb_Vector_pz = KeEOCR_n_NiMin_MaxLim;
    }

    /* End of Switch: '<S73>/Switch1' */
    /* End of Outputs for SubSystem: '<S9>/Limiter2' */

    /* Update for UnitDelay: '<S57>/Unit Delay' */
    EOCR_ac_DW.UnitDelay_DSTATE_a = VeEOCC_P_CWU_PwrDlt;

    /* Outport: '<Root>/VeEOCR_b_CatalystWarmupEnabled' incorporates:
     *  Logic: '<S55>/AND'
     *  SignalConversion generated from: '<S1>/CatalystWarmupEnabled'
     */
    (void)Rte_Write_VeEOCR_b_CatalystWarmupEnabled_Value
        (VeEOCI_b_CatWarmupEngFlag);

    /* Switch: '<S9>/Switch10' incorporates:
     *  Constant: '<S9>/Constant Value2'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    if (EOCR_ac_DW.UnitDelay_DSTATE_or)
    {
        rtb_TmpSignalConversionAtVeVSDR_n_Prim_m = VeEOCI_Pct_PurgeIntsty;
    }
    else
    {
        rtb_TmpSignalConversionAtVeVSDR_n_Prim_m = 0.0F;
    }

    /* End of Switch: '<S9>/Switch10' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeEOCR_Pct_PurgeIntensity' incorporates:
     *  SignalConversion generated from: '<S1>/EOCR_PurgeIntsty'
     */
    (void)Rte_Write_VeEOCR_Pct_PurgeIntensity_Value
        (rtb_TmpSignalConversionAtVeVSDR_n_Prim_m);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EOCCCalcA'
     */
    /* Outport: '<Root>/VeEOCR_t_RunTime' incorporates:
     *  Gain: '<S19>/Gain'
     *  SignalConversion generated from: '<S1>/RunTime'
     *  UnitDelay: '<S20>/UnitDelay'
     */
    (void)Rte_Write_VeEOCR_t_RunTime_Value(EOCR_ac_DW.UnitDelay_DSTATE_k);

    /* Outport: '<Root>/VeEOCR_b_ColdCtrlStgc_woSeMdAllw' incorporates:
     *  Logic: '<S56>/AND'
     *  SignalConversion generated from: '<S1>/VeEOCR_b_ColdCtrlStgc_woSeMdAllw'
     */
    (void)Rte_Write_VeEOCR_b_ColdCtrlStgc_woSeMdAllw_Value(rtb_Logical);

    /* Outport: '<Root>/VeEOCR_b_ColdCtrl_Raw' incorporates:
     *  Logic: '<S48>/AND'
     *  SignalConversion generated from: '<S1>/VeEOCR_b_ColdCtrl_Raw'
     */
    (void)Rte_Write_VeEOCR_b_ColdCtrl_Raw_Value
        (rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* Outputs for Atomic SubSystem: '<S9>/Limiter2' */
    /* Switch: '<S73>/Switch' incorporates:
     *  Constant: '<S9>/Constant Value8'
     *  RelationalOperator: '<S73>/Relational Operator1'
     */
    if (rtb_Vector_pz <= 0.0F)
    {
        rtb_Vector_pz = 0.0F;
    }

    /* End of Switch: '<S73>/Switch' */
    /* End of Outputs for SubSystem: '<S9>/Limiter2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeEOCR_n_NiMin_ColdCtrlRaw' incorporates:
     *  SignalConversion generated from: '<S1>/VeEOCR_n_NiMin_ColdCtrlRaw'
     */
    (void)Rte_Write_VeEOCR_n_NiMin_ColdCtrlRaw_Value(rtb_Vector_pz);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EOCI_Input_Processing'
     */
    /* Merge: '<Root>/CTMEnabled_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/CTMEnabled_write'
     *  SignalConversion: '<S5>/Signal Conversion'
     */
    Rte_IrvWrite_EOCR_MedTED1_CTMEnabled_write_IRV(VeEOCI_b_CTMEnabled);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/ColdCtrlStgc_woSeMdAllw_toCalcB_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/ColdCtrlStgc_woSeMdAllw_toCalcB_write'
     * */
    Rte_IrvWrite_EOCR_MedTED1_ColdCtrlStgc_woSeMdAllw_toCalcB_write_IRV
        (rtb_Logical);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EOCI_Input_Processing'
     */
    /* Merge: '<Root>/EngSpd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EngSpd_write'
     *  SignalConversion: '<S5>/Signal Conversion1'
     */
    Rte_IrvWrite_EOCR_MedTED1_EngSpd_write_IRV(VeEOCI_n_EngSpd);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/LeEOCR_M_Ti_ColdCtrl_Old_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/LeEOCR_M_Ti_ColdCtrl_Old_write'
     * */
    Rte_IrvWrite_EOCR_MedTED1_LeEOCR_M_Ti_ColdCtrl_Old_write_IRV
        (rtb_TmpSignalConversionAtVeVSDR_n_StratN);

    /* Merge: '<Root>/LeEOCR_n_Ni_ColdCtrl_Old_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/LeEOCR_n_Ni_ColdCtrl_Old_write'
     * */
    Rte_IrvWrite_EOCR_MedTED1_LeEOCR_n_Ni_ColdCtrl_Old_write_IRV(Vector_f);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EOCCCalcA'
     */
    /* Merge: '<Root>/VeEOCC_r_TactMultwoPwrDlt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeEOCC_r_TactMultwoPwrDlt_write'
     *  SignalConversion: '<S9>/Signal Conversion'
     */
    Rte_IrvWrite_EOCR_MedTED1_VeEOCC_r_TactMultwoPwrDlt_write_IRV
        (VeEOCC_r_ColdCtrl_Raw);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */
}

/* Model step function for TID2 */
FUNC(void, EOCR_CODE) EOCR_MedTED2(void) /* Explicit Task: MedTED2 */
{
    sint32 iU;
    float32 rtb_Sum6[2];
    float32 rtb_Switch1_na[2];
    float32 rtb_TmpSignalConversionAtVeESMR[2];
    float32 rtb_Vector_ed[2];
    float32 rtb_MinMax1;
    float32 rtb_Switch4_o;
    float32 rtb_Switch5_l;
    float32 rtb_Switch_m;
    float32 rtb_TmpSignalConversionAtEngSpd_ReadOutp;
    float32 rtb_TmpSignalConversionAtLeEOCR_n_Ni_Col;
    float32 rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    float32 rtb_TmpSignalConversionAtVeESMR_P_BattLT;
    float32 rtb_TmpSignalConversionAtVeESMR_P_BoostC;
    float32 rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_TransO;
    float32 rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    float32 tmpRead_3;
    float32 tmpRead_5;
    TeTMDR_e_LockLowSt tmpRead_4;
    boolean rtb_LogicalOperator;
    boolean rtb_LogicalOperator5_c;
    boolean rtb_NotEqual1;
    boolean rtb_TmpSignalConversionAtVeOSMR_b_Series;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/EOCR_MedTED2'
     */
    /* SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_PrimNo);

    /* SignalConversion generated from: '<S2>/VeESMR_P_BattLTMaxLim' incorporates:
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value
        (&rtb_TmpSignalConversionAtVeESMR_P_BattLT);

    /* SignalConversion generated from: '<S2>/VeABCR_P_HV_AccPwr' incorporates:
     *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeABCR_P_HV_AccPwr_Value
        (&rtb_TmpSignalConversionAtVeABCR_P_HV_Acc);

    /* SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* SignalConversion generated from: '<S2>/VeOSMR_b_SeriesModeAllowed' incorporates:
     *  Inport: '<Root>/VeOSMR_b_SeriesModeAllowed'
     */
    (void)Rte_Read_VeOSMR_b_SeriesModeAllowed_Value
        (&rtb_TmpSignalConversionAtVeOSMR_b_Series);

    /* SignalConversion generated from: '<S2>/VeOSMR_P_HV_AccPwr' incorporates:
     *  Inport: '<Root>/VeOSMR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeOSMR_P_HV_AccPwr_Value
        (&rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd' incorporates:
     *  Inport: '<Root>/VeOSMR_n_TransOutSpd'
     */
    (void)Rte_Read_VeOSMR_n_TransOutSpd_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_TransO);

    /* SignalConversion generated from: '<S2>/LeEOCR_n_Ni_ColdCtrl_Old_Read' incorporates:
     *  Merge: '<Root>/LeEOCR_n_Ni_ColdCtrl_Old_IRV_Merge'
     */
    rtb_TmpSignalConversionAtLeEOCR_n_Ni_Col =
        Rte_IrvRead_EOCR_MedTED2_LeEOCR_n_Ni_ColdCtrl_Old_write_IRV();

    /* SignalConversion generated from: '<S2>/EngSpd_Read' incorporates:
     *  Merge: '<Root>/EngSpd_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEngSpd_ReadOutp =
        Rte_IrvRead_EOCR_MedTED2_EngSpd_write_IRV();

    /* SignalConversion generated from: '<S2>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt' incorporates:
     *  Inport: '<Root>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt'
     */
    (void)Rte_Read_VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Value
        (&rtb_TmpSignalConversionAtVeESMR_P_BoostC);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/EOCCCalcB'
     */
    /* SignalConversion generated from: '<S113>/VariantSource' */
#if Rte_SysCon_Variant_EOCR_1

    /* Logic: '<S113>/Logical Operator5' incorporates:
     *  Constant: '<S113>/TRUE Constant'
     */
    rtb_LogicalOperator5_c = true;

#endif

    /* End of SignalConversion generated from: '<S113>/VariantSource' */

    /* SignalConversion generated from: '<S113>/VariantSource' */
#if Rte_SysCon_Variant_EOCR_2

    /* Logic: '<S113>/Logical Operator5' incorporates:
     *  Constant: '<S113>/FALSE Constant'
     */
    rtb_LogicalOperator5_c = false;

#endif

    /* End of SignalConversion generated from: '<S113>/VariantSource' */

    /* Logic: '<S113>/Logical Operator5' incorporates:
     *  Constant: '<S113>/Constant Value21'
     *  Constant: '<S136>/Constant'
     *  DataStoreRead: '<S113>/Data Store Read1'
     *  Logic: '<S113>/Logical Operator4'
     *  RelationalOperator: '<S136>/Compare'
     *  S-Function (sfix_bitop): '<S113>/Bitwise Logical Operator8'
     */
    rtb_LogicalOperator5_c = ((((VeEOCR_g_CatHtgStatusRegA_DS & 8192U) > 0U) &&
        rtb_TmpSignalConversionAtVeOSMR_b_Series) || rtb_LogicalOperator5_c);

    /* Switch: '<S113>/Switch6' incorporates:
     *  DataStoreRead: '<S113>/Data Store Read6'
     *  DataStoreWrite: '<S113>/Data Store Write6'
     *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S133>/FixPt Bitwise Operator1'
     */
    if (rtb_LogicalOperator5_c)
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(VeEOCR_g_CatHtgStatusRegB_DS |
            ((uint16)32));
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(~((uint16)(((uint16)
            (~VeEOCR_g_CatHtgStatusRegB_DS)) | ((uint16)32))));
    }

    /* End of Switch: '<S113>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */

    /* Inport: '<Root>/VeTMDR_e_LockLowSt' */
    (void)Rte_Read_VeTMDR_e_LockLowSt_Value(&tmpRead_4);

    /* Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd' */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value(&rtb_Switch5_l);

    /* Inport: '<Root>/VeATRR_M_ToReqImmedOITR_Phy' */
    (void)Rte_Read_VeATRR_M_ToReqImmedOITR_Phy_Value(&rtb_MinMax1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/EOCR_MedTED2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/EOCCCalcB'
     */
    /* Logic: '<S114>/Logical Operator' incorporates:
     *  Merge: '<Root>/ColdCtrlStgc_woSeMdAllw_toCalcB_IRV_Merge'
     *  SignalConversion generated from: '<S2>/ColdCtrlStgc_woSeMdAllw_toCalcB_Read'
     */
    rtb_LogicalOperator =
        ((Rte_IrvRead_EOCR_MedTED2_ColdCtrlStgc_woSeMdAllw_toCalcB_write_IRV()) &&
         rtb_TmpSignalConversionAtVeOSMR_b_Series);

    /* Logic: '<S112>/Logical Operator' incorporates:
     *  Constant: '<S152>/Calib'
     *  DataTypeConversion: '<S115>/Data Type Conversion'
     *  Inport: '<Root>/VeTMDR_e_LockLowSt'
     *  Logic: '<S115>/Logical Operator3'
     *  Logic: '<S115>/Logical Operator5'
     *  Selector: '<S115>/Selector3'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_Series =
        ((Rte_Prm_KaOPTR_b_LockLowSt_LwrdCreepEna_KaOPTR_b_LockLowSt_LwrdCreepEna
          ())[tmpRead_4] && (!rtb_LogicalOperator));

    /* Switch: '<S115>/Switch4' incorporates:
     *  Inport: '<Root>/VeOSMR_n_TransMinEngSpd_xNiColdMin'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_b_Series)
    {
        (void)Rte_Read_VeOSMR_n_TransMinEngSpd_xNiColdMin_Value(&rtb_Switch4_o);

        /* Switch: '<S115>/Switch4' incorporates:
         *  Inport: '<Root>/VeOSMR_n_TransMinEngSpd_xNiColdMin'
         *  MinMax: '<S115>/MinMax3'
         */
        rtb_Switch4_o = fmaxf(rtb_TmpSignalConversionAtEngSpd_ReadOutp,
                              rtb_Switch4_o);
    }
    else
    {
        /* Switch: '<S115>/Switch4' */
        rtb_Switch4_o = rtb_TmpSignalConversionAtLeEOCR_n_Ni_Col;
    }

    /* End of Switch: '<S115>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */

    /* Inport: '<Root>/VeETQR_M_EngCapacityMax' */
    (void)Rte_Read_VeETQR_M_EngCapacityMax_Value(&rtb_Switch_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/EOCR_MedTED2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/EOCCCalcB'
     */
    /* Outputs for Atomic SubSystem: '<S115>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S150>/Switch1' incorporates:
     *  Constant: '<S154>/Calib'
     *  Lookup_n-D: '<S155>/Vector'
     *  Product: '<S150>/Multiplication'
     *  SignalConversion generated from: '<S2>/EngSpd_Read'
     *  Sum: '<S115>/Sum9'
     *  Sum: '<S150>/Subtraction'
     *  Sum: '<S150>/Summation'
     *  UnitDelay: '<S150>/Unit Delay'
     */
    EOCR_ac_DW.UnitDelay_DSTATE_b += ((rtb_Switch_m - look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtEngSpd_ReadOutp, ((const float32 *)
        &(KxEOCR_M_TiCldCapctyRsrvOffst[0])), ((const float32 *)
        &(KtEOCR_M_TiCldCapctyRsrvOffst[0])), 6U)) -
        EOCR_ac_DW.UnitDelay_DSTATE_b) * KeEOCR_k_TiCldCapctyFiltCoef;

    /* End of Outputs for SubSystem: '<S115>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S115>/Switch3' */
    if (rtb_TmpSignalConversionAtVeOSMR_b_Series)
    {
        /* Switch: '<S115>/Switch3' incorporates:
         *  Merge: '<Root>/LeEOCR_M_Ti_ColdCtrl_Old_IRV_Merge'
         *  MinMax: '<S115>/MinMax2'
         *  SignalConversion generated from: '<S2>/LeEOCR_M_Ti_ColdCtrl_Old_Read'
         *  UnitDelay: '<S150>/Unit Delay'
         */
        VeEOCC_M_TiColdArb = fminf(EOCR_ac_DW.UnitDelay_DSTATE_b,
            Rte_IrvRead_EOCR_MedTED2_LeEOCR_M_Ti_ColdCtrl_Old_write_IRV());
    }
    else
    {
        /* Switch: '<S115>/Switch3' incorporates:
         *  Merge: '<Root>/LeEOCR_M_Ti_ColdCtrl_Old_IRV_Merge'
         *  SignalConversion generated from: '<S2>/LeEOCR_M_Ti_ColdCtrl_Old_Read'
         */
        VeEOCC_M_TiColdArb =
            Rte_IrvRead_EOCR_MedTED2_LeEOCR_M_Ti_ColdCtrl_Old_write_IRV();
    }

    /* End of Switch: '<S115>/Switch3' */

    /* Product: '<S115>/Product10' incorporates:
     *  Constant: '<S115>/Constant Value6'
     *  Constant: '<S115>/Constant Value7'
     *  Product: '<S115>/Product11'
     *  Product: '<S115>/Product7'
     *  Product: '<S115>/Product9'
     *  Sum: '<S115>/Sum10'
     *  Sum: '<S115>/Sum12'
     */
    VeEOCC_P_CWU_PwrDltTact = (((rtb_MinMax1 * rtb_Switch5_l) +
        (rtb_TmpSignalConversionAtVeABCR_P_HV_Acc * 9549.29688F)) -
        (rtb_Switch4_o * VeEOCC_M_TiColdArb)) * 0.000104719758F;

    /* Switch: '<S114>/Switch8' incorporates:
     *  Constant: '<S142>/Calib'
     *  Sum: '<S114>/Sum2'
     */
    if (KeEOCR_b_PBattLTMaxBsdPwrDlt)
    {
        rtb_MinMax1 = (rtb_TmpSignalConversionAtVeESMR_P_BattLT -
                       rtb_TmpSignalConversionAtVeABCR_P_HV_Acc) -
            VeEOCC_P_CWU_PwrDltTact;
    }
    else
    {
        rtb_MinMax1 = VeEOCC_P_CWU_PwrDltTact;
    }

    /* End of Switch: '<S114>/Switch8' */

    /* Lookup_n-D: '<S146>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    VeEOCC_r_PwrDltTact_Mult = look2_iflf_binlca_16a(rtb_MinMax1,
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
        &(KxEOCR_r_PwrDltTact_Mult[0])), ((const float32 *)
        &(KyEOCR_r_PwrDltTact_Mult[0])), ((const float32 *)
        &(KtEOCR_r_PwrDltTact_Mult[0])), EOCR_ac_ConstP.Vector_maxIndex_p, 6U);

    /* Switch: '<S113>/Switch1' incorporates:
     *  Constant: '<S137>/Calib'
     *  DataStoreRead: '<S113>/Data Store Read4'
     *  DataStoreWrite: '<S113>/Data Store Write1'
     *  RelationalOperator: '<S113>/Comparison1'
     *  S-Function (sfix_bitop): '<S121>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S121>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S121>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S128>/FixPt Bitwise Operator1'
     */
    if (VeEOCC_r_PwrDltTact_Mult > ((float32)
            Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()))
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(VeEOCR_g_CatHtgStatusRegB_DS |
            ((uint16)1));
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(~((uint16)(((uint16)
            (~VeEOCR_g_CatHtgStatusRegB_DS)) | ((uint16)1))));
    }

    /* End of Switch: '<S113>/Switch1' */

    /* Switch: '<S115>/Switch5' incorporates:
     *  Constant: '<S114>/Constant Value2'
     *  MinMax: '<S114>/MinMax2'
     */
    rtb_Switch5_l = fmaxf(rtb_TmpSignalConversionAtVeESMR_P_BattLT, 0.0F);

    /* Lookup_n-D: '<S158>/Vector' incorporates:
     *  Lookup_n-D: '<S144>/Vector'
     *  MinMax: '<S114>/MinMax3'
     *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = fminf(rtb_Switch5_l,
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const
        float32 *)&(KxEOCR_P_PwrDltStgc_RSP[0])), ((const float32 *)
        &(KtEOCR_P_PwrDltStgc_RSP[0])), 6U));

    /* Logic: '<S112>/Logical Operator' incorporates:
     *  RelationalOperator: '<S114>/Relational Operator'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_Series = (rtb_Switch5_l ==
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* Lookup_n-D: '<S158>/Vector' incorporates:
     *  Sum: '<S114>/Sum4'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B -=
        rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;

    /* MinMax: '<S114>/MinMax1' */
    rtb_MinMax1 = fminf(rtb_TmpSignalConversionAtVeESMR_P_BoostC,
                        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* Lookup_n-D: '<S158>/Vector' incorporates:
     *  Constant: '<S138>/Constant Value1'
     *  Constant: '<S139>/Calib'
     *  Product: '<S138>/Multiplication3'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = HeEOCR_t_PwrDltDrvtvSampleTime /
        2.0F;

    /* Product: '<S138>/Multiplication2' incorporates:
     *  Constant: '<S143>/Calib'
     *  Product: '<S138>/Multiplication4'
     *  Sum: '<S138>/Summation'
     *  Sum: '<S138>/Summation1'
     *  Sum: '<S138>/Summation2'
     *  UnitDelay: '<S138>/Unit Delay'
     *  UnitDelay: '<S138>/Unit Delay1'
     */
    EOCR_ac_DW.UnitDelay1_DSTATE = ((VeEOCC_P_CWU_PwrDltTact -
        ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B - KeEOCR_t_PwrDltTactTimePrd)
         * EOCR_ac_DW.UnitDelay1_DSTATE)) - EOCR_ac_DW.UnitDelay_DSTATE) /
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B + KeEOCR_t_PwrDltTactTimePrd);

    /* Sum: '<S114>/Sum3' incorporates:
     *  Lookup_n-D: '<S145>/Vector'
     *  Product: '<S138>/Multiplication2'
     *  UnitDelay: '<S138>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = rtb_MinMax1 +
        look1_iflf_binlca_16a(EOCR_ac_DW.UnitDelay1_DSTATE, ((const float32 *)
        &(KxEOCR_P_PwrDltTactRSPOffset[0])), ((const float32 *)
        &(KtEOCR_P_PwrDltTactRSPOffset[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S114>/Hysteresis3' */
    /* Switch: '<S140>/Switch1' incorporates:
     *  Constant: '<S140>/Constant Value'
     *  Constant: '<S141>/Calib'
     *  RelationalOperator: '<S140>/Greater  Than'
     *  RelationalOperator: '<S140>/Greater  Than1'
     *  Sum: '<S114>/Sum1'
     *  UnitDelay: '<S140>/Unit Delay'
     */
    if (VeEOCC_P_CWU_PwrDltTact > rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B)
    {
        EOCR_ac_DW.UnitDelay_DSTATE_h = true;
    }
    else
    {
        EOCR_ac_DW.UnitDelay_DSTATE_h = ((VeEOCC_P_CWU_PwrDltTact >=
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B - KeEOCR_P_PwrDlt_LSP)) &&
            (EOCR_ac_DW.UnitDelay_DSTATE_h));
    }

    /* End of Switch: '<S140>/Switch1' */
    /* End of Outputs for SubSystem: '<S114>/Hysteresis3' */

    /* Logic: '<S114>/Logical Operator7' incorporates:
     *  UnitDelay: '<S140>/Unit Delay'
     */
    VeEOCC_b_PwrDltTactAllwd = !EOCR_ac_DW.UnitDelay_DSTATE_h;

    /* Switch: '<S114>/Switch6' incorporates:
     *  Logic: '<S114>/Logical Operator6'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_b_Series)
    {
        /* Switch: '<S114>/Switch6' incorporates:
         *  Switch: '<S114>/Switch7'
         */
        VeEOCC_r_PwrDltTact_Mult = (float32)(VeEOCC_b_PwrDltTactAllwd ? 1.0F :
            0.0F);
    }

    /* End of Switch: '<S114>/Switch6' */

    /* Product: '<S114>/Product5' incorporates:
     *  Merge: '<Root>/VeEOCC_r_TactMultwoPwrDlt_IRV_Merge'
     *  SignalConversion generated from: '<S2>/VeEOCC_r_TactMultwoPwrDlt_Read'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B =
        Rte_IrvRead_EOCR_MedTED2_VeEOCC_r_TactMultwoPwrDlt_write_IRV() *
        VeEOCC_r_PwrDltTact_Mult;

    /* Outputs for Atomic SubSystem: '<S114>/Limiter1' */
    /* Switch: '<S147>/Switch1' incorporates:
     *  Constant: '<S114>/Constant Value4'
     *  RelationalOperator: '<S147>/Relational Operator'
     */
    if (1.0F < rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B)
    {
        /* Lookup_n-D: '<S158>/Vector' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = 1.0F;
    }

    /* End of Switch: '<S147>/Switch1' */

    /* Switch: '<S147>/Switch' incorporates:
     *  Constant: '<S114>/Constant Value1'
     *  RelationalOperator: '<S147>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > 0.0F)
    {
        /* Switch: '<S147>/Switch' */
        rtb_Switch_m = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    }
    else
    {
        /* Switch: '<S147>/Switch' */
        rtb_Switch_m = 0.0F;
    }

    /* End of Switch: '<S147>/Switch' */
    /* End of Outputs for SubSystem: '<S114>/Limiter1' */

    /* Switch: '<S113>/Switch4' incorporates:
     *  Constant: '<S137>/Calib'
     *  DataStoreRead: '<S113>/Data Store Read5'
     *  DataStoreWrite: '<S113>/Data Store Write4'
     *  RelationalOperator: '<S113>/Comparison5'
     *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S131>/FixPt Bitwise Operator1'
     */
    if (rtb_Switch_m > ((float32)
                        Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()))
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(VeEOCR_g_CatHtgStatusRegB_DS |
            ((uint16)8));
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(~((uint16)(((uint16)
            (~VeEOCR_g_CatHtgStatusRegB_DS)) | ((uint16)8))));
    }

    /* End of Switch: '<S113>/Switch4' */

    /* SignalConversion generated from: '<S114>/VariantSource' */
#if Rte_SysCon_Variant_EOCR_1

    /* Lookup_n-D: '<S158>/Vector' */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = rtb_Switch_m;

#endif

    /* End of SignalConversion generated from: '<S114>/VariantSource' */

    /* Switch: '<S114>/Switch2' */
#if Rte_SysCon_Variant_EOCR_2

    /* Lookup_n-D: '<S158>/Vector' */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = rtb_LogicalOperator ? 1.0F : 0.0F;

#endif

    /* End of Switch: '<S114>/Switch2' */

    /* Switch: '<S113>/Switch5' incorporates:
     *  Constant: '<S137>/Calib'
     *  DataStoreRead: '<S113>/Data Store Read8'
     *  DataStoreWrite: '<S113>/Data Store Write5'
     *  RelationalOperator: '<S113>/Comparison3'
     *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > ((float32)
            Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()))
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(VeEOCR_g_CatHtgStatusRegB_DS |
            ((uint16)16));
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(~((uint16)(((uint16)
            (~VeEOCR_g_CatHtgStatusRegB_DS)) | ((uint16)16))));
    }

    /* End of Switch: '<S113>/Switch5' */

    /* Switch: '<S113>/Switch2' incorporates:
     *  DataStoreRead: '<S113>/Data Store Read2'
     *  DataStoreWrite: '<S113>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S122>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S122>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S122>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator1'
     */
    if (VeEOCC_b_PwrDltTactAllwd)
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(VeEOCR_g_CatHtgStatusRegB_DS |
            ((uint16)2));
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(~((uint16)(((uint16)
            (~VeEOCR_g_CatHtgStatusRegB_DS)) | ((uint16)2))));
    }

    /* End of Switch: '<S113>/Switch2' */

    /* Switch: '<S113>/Switch3' incorporates:
     *  DataStoreRead: '<S113>/Data Store Read3'
     *  DataStoreWrite: '<S113>/Data Store Write3'
     *  S-Function (sfix_bitop): '<S123>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S123>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S123>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator1'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_b_Series)
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(VeEOCR_g_CatHtgStatusRegB_DS |
            ((uint16)4));
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(~((uint16)(((uint16)
            (~VeEOCR_g_CatHtgStatusRegB_DS)) | ((uint16)4))));
    }

    /* End of Switch: '<S113>/Switch3' */

    /* Logic: '<S112>/Logical Operator' incorporates:
     *  Constant: '<S117>/Calib'
     *  Merge: '<Root>/CTMEnabled_IRV_Merge'
     *  RelationalOperator: '<S112>/Comparison1'
     *  RelationalOperator: '<S112>/Comparison2'
     *  SignalConversion generated from: '<S2>/CTMEnabled_Read'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_Series = (((rtb_Switch_m < ((float32)
        Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin())) && (((float32)
        Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()) >
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B)) &&
        (Rte_IrvRead_EOCR_MedTED2_CTMEnabled_write_IRV()));

    /* Switch: '<S113>/Switch8' incorporates:
     *  DataStoreRead: '<S113>/Data Store Read7'
     *  DataStoreWrite: '<S113>/Data Store Write7'
     *  S-Function (sfix_bitop): '<S127>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S127>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S127>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S134>/FixPt Bitwise Operator1'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_b_Series)
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(VeEOCR_g_CatHtgStatusRegB_DS |
            ((uint16)2048));
    }
    else
    {
        VeEOCR_g_CatHtgStatusRegB_DS = (uint16)(~((uint16)(((uint16)
            (~VeEOCR_g_CatHtgStatusRegB_DS)) | ((uint16)2048))));
    }

    /* End of Switch: '<S113>/Switch8' */

    /* Lookup_n-D: '<S157>/Vector' incorporates:
     *  SignalConversion generated from: '<S156>/Vector'
     */
    rtb_Vector_ed[0] = rtb_TmpSignalConversionAtVeOSMR_n_TransO;
    rtb_Vector_ed[1] = rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

    /* Lookup_n-D: '<S156>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Switch1_na[iU] = look1_iflf_binlca_16a(rtb_Vector_ed[iU], ((const
            float32 *)&(KxEOCR_M_TiTargetMax_Offset[0])), ((const float32 *)
            &(KtEOCR_M_TiTargetMax_Offset[0])), 6U);
    }

    /* End of Lookup_n-D: '<S156>/Vector' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */

    /* Inport: '<Root>/VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt' */
    (void)Rte_Read_VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_Value(&tmpRead_5);

    /* Inport: '<Root>/VeOSMR_M_OutTorqReqAccel' */
    (void)Rte_Read_VeOSMR_M_OutTorqReqAccel_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTITR_M_InputTrqMin' */
    (void)Rte_Read_VeTITR_M_InputTrqMin_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTITR_M_Ti_CL_Slow' */
    (void)Rte_Read_VeTITR_M_Ti_CL_Slow_Value(&tmpRead_1);

    /* Inport: '<Root>/VeESMR_P_BattLTMinLim' */
    (void)Rte_Read_VeESMR_P_BattLTMinLim_Value(&tmpRead_0);

    /* Inport: '<Root>/VeATRR_M_OutputTorqReqImmedOITR' */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmedOITR_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/EOCR_MedTED2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/EOCCCalcB'
     */
    /* Product: '<S115>/Product' incorporates:
     *  SignalConversion generated from: '<S156>/Vector'
     */
    VaEOCR_M_TiColdCtrl_Min[0] = rtb_TmpSignalConversionAtVeOSMR_n_TransO *
        tmpRead_3;
    VaEOCR_M_TiColdCtrl_Min[1] = rtb_TmpSignalConversionAtVeVSDR_n_PrimNo *
        tmpRead;

    /* Sum: '<S115>/Sum' incorporates:
     *  Constant: '<S115>/Constant Value1'
     *  MinMax: '<S115>/MinMax5'
     *  Product: '<S115>/Product1'
     *  Sum: '<S115>/Sum11'
     */
    VaEOCR_M_TiColdCtrl_Max[0] = VaEOCR_M_TiColdCtrl_Min[0] - (fmaxf(tmpRead_0 -
        rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc, tmpRead_5) * 9549.29688F);
    VaEOCR_M_TiColdCtrl_Max[1] = VaEOCR_M_TiColdCtrl_Min[1] - (fmaxf(tmpRead_0 -
        rtb_TmpSignalConversionAtVeABCR_P_HV_Acc, tmpRead_5) * 9549.29688F);

    /* Outputs for Atomic SubSystem: '<S115>/Protected Division' */
    /* RelationalOperator: '<S160>/Not Equal1' incorporates:
     *  Constant: '<S160>/Constant Value1'
     */
    rtb_LogicalOperator = (rtb_Switch4_o != 0.0F);

    /* End of Outputs for SubSystem: '<S115>/Protected Division' */

    /* Sum: '<S115>/Sum13' */
    rtb_TmpSignalConversionAtVeESMR[0] =
        rtb_TmpSignalConversionAtVeESMR_P_BattLT -
        rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;
    rtb_TmpSignalConversionAtVeESMR[1] =
        rtb_TmpSignalConversionAtVeESMR_P_BattLT -
        rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;

    /* Outputs for Atomic SubSystem: '<S115>/Protected Division1' */
    /* RelationalOperator: '<S161>/Not Equal1' incorporates:
     *  Constant: '<S161>/Constant Value1'
     */
    rtb_NotEqual1 = (rtb_Switch4_o != 0.0F);

    /* End of Outputs for SubSystem: '<S115>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S115>/Limiter' */
    for (iU = 0; iU < 2; iU++)
    {
        /* Outputs for Atomic SubSystem: '<S115>/Protected Division' */
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S160>/Constant Value'
         *  Constant: '<S160>/Constant Value2'
         *  Constant: '<S160>/Constant Value3'
         *  Constant: '<S160>/Constant Value4'
         *  Logic: '<S160>/AND'
         *  Product: '<S160>/Division'
         *  RelationalOperator: '<S160>/Greater Than or Equal '
         *  RelationalOperator: '<S160>/Greater Than or Equal 1'
         *  RelationalOperator: '<S160>/Not Equal'
         *  Switch: '<S160>/Switch2'
         *  Switch: '<S160>/Switch3'
         */
        if ((VaEOCR_M_TiColdCtrl_Max[(iU)] != 0.0F) && rtb_LogicalOperator)
        {
            rtb_MinMax1 = VaEOCR_M_TiColdCtrl_Max[(iU)] / rtb_Switch4_o;
        }
        else if (VaEOCR_M_TiColdCtrl_Max[(iU)] > 0.0F)
        {
            /* Switch: '<S160>/Switch2' incorporates:
             *  Constant: '<S160>/MAXFLOAT'
             */
            rtb_MinMax1 = 3.402823466E+38F;
        }
        else if (VaEOCR_M_TiColdCtrl_Max[(iU)] < 0.0F)
        {
            /* Switch: '<S160>/Switch3' incorporates:
             *  Constant: '<S160>/MINFLOAT'
             */
            rtb_MinMax1 = -3.402823466E+38F;
        }
        else
        {
            rtb_MinMax1 = 0.0F;
        }

        /* End of Switch: '<S160>/Switch1' */

        /* Sum: '<S115>/Sum2' incorporates:
         *  RelationalOperator: '<S160>/Not Equal'
         */
        VaEOCR_M_TiColdCtrl_Max[(iU)] = rtb_MinMax1 - rtb_Switch1_na[iU];

        /* End of Outputs for SubSystem: '<S115>/Protected Division' */

        /* Switch: '<S115>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         */
        if (KaEOCR_b_UseTiCL4TiColdCtrl[(iU)])
        {
            /* Switch: '<S115>/Switch1' */
            rtb_TmpSignalConversionAtVeVSDR_n_PrimNo = tmpRead_1;
        }
        else
        {
            /* Switch: '<S115>/Switch1' incorporates:
             *  Constant: '<S115>/Constant Value3'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_PrimNo = 0.0F;
        }

        /* End of Switch: '<S115>/Switch1' */

        /* Sum: '<S115>/Sum6' */
        rtb_TmpSignalConversionAtVeESMR_P_BattLT = VaEOCR_M_TiColdCtrl_Max[(iU)]
            - rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

        /* Switch: '<S115>/Switch2' incorporates:
         *  Constant: '<S151>/Calib'
         */
        if (KaEOCR_b_UseTiCL4TiColdCtrl[(iU)])
        {
            /* Switch: '<S115>/Switch2' incorporates:
             *  MinMax: '<S115>/MinMax1'
             */
            rtb_TmpSignalConversionAtVeABCR_P_HV_Acc = fmaxf
                (rtb_TmpSignalConversionAtVeESMR_P_BattLT, tmpRead_2);
        }
        else
        {
            /* Switch: '<S115>/Switch2' */
            rtb_TmpSignalConversionAtVeABCR_P_HV_Acc =
                rtb_TmpSignalConversionAtVeESMR_P_BattLT;
        }

        /* End of Switch: '<S115>/Switch2' */

        /* Sum: '<S115>/Sum1' incorporates:
         *  Constant: '<S115>/Constant Value2'
         *  MinMax: '<S115>/MinMax4'
         *  Product: '<S115>/Product2'
         */
        VaEOCR_M_TiColdCtrl_Min[(iU)] = VaEOCR_M_TiColdCtrl_Min[(iU)] - (fminf
            (rtb_TmpSignalConversionAtVeESMR_P_BoostC,
             rtb_TmpSignalConversionAtVeESMR[iU]) * 9549.29688F);

        /* Lookup_n-D: '<S157>/Vector' */
        rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc = look1_iflf_binlca_16a
            (rtb_Vector_ed[iU], ((const float32 *)&(KxEOCR_M_TiTargetMin_Offset
               [0])), ((const float32 *)&(KtEOCR_M_TiTargetMin_Offset[0])), 6U);

        /* Outputs for Atomic SubSystem: '<S115>/Protected Division1' */
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S161>/Constant Value'
         *  Constant: '<S161>/Constant Value2'
         *  Constant: '<S161>/Constant Value3'
         *  Constant: '<S161>/Constant Value4'
         *  Logic: '<S161>/AND'
         *  Product: '<S161>/Division'
         *  RelationalOperator: '<S161>/Greater Than or Equal '
         *  RelationalOperator: '<S161>/Greater Than or Equal 1'
         *  RelationalOperator: '<S161>/Not Equal'
         *  Switch: '<S161>/Switch2'
         *  Switch: '<S161>/Switch3'
         */
        if ((VaEOCR_M_TiColdCtrl_Min[(iU)] != 0.0F) && rtb_NotEqual1)
        {
            rtb_MinMax1 = VaEOCR_M_TiColdCtrl_Min[(iU)] / rtb_Switch4_o;
        }
        else if (VaEOCR_M_TiColdCtrl_Min[(iU)] > 0.0F)
        {
            /* Switch: '<S161>/Switch2' incorporates:
             *  Constant: '<S161>/MAXFLOAT'
             */
            rtb_MinMax1 = 3.402823466E+38F;
        }
        else if (VaEOCR_M_TiColdCtrl_Min[(iU)] < 0.0F)
        {
            /* Switch: '<S161>/Switch3' incorporates:
             *  Constant: '<S161>/MINFLOAT'
             */
            rtb_MinMax1 = -3.402823466E+38F;
        }
        else
        {
            rtb_MinMax1 = 0.0F;
        }

        /* End of Switch: '<S161>/Switch1' */

        /* Sum: '<S115>/Sum3' incorporates:
         *  RelationalOperator: '<S161>/Not Equal'
         */
        VaEOCR_M_TiColdCtrl_Min[(iU)] = rtb_MinMax1 -
            rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;

        /* End of Outputs for SubSystem: '<S115>/Protected Division1' */

        /* Sum: '<S115>/Sum7' */
        rtb_TmpSignalConversionAtVeVSDR_n_PrimNo = VaEOCR_M_TiColdCtrl_Min[(iU)]
            - rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

        /* Switch: '<S159>/Switch1' incorporates:
         *  RelationalOperator: '<S159>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeABCR_P_HV_Acc >= VeEOCC_M_TiColdArb)
        {
            /* Switch: '<S116>/Switch1' */
            rtb_TmpSignalConversionAtVeABCR_P_HV_Acc = VeEOCC_M_TiColdArb;
        }

        /* End of Switch: '<S159>/Switch1' */

        /* Switch: '<S159>/Switch' incorporates:
         *  RelationalOperator: '<S159>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeABCR_P_HV_Acc >
                rtb_TmpSignalConversionAtVeVSDR_n_PrimNo)
        {
            /* Switch: '<S159>/Switch' */
            rtb_TmpSignalConversionAtVeVSDR_n_PrimNo =
                rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;
        }

        /* End of Switch: '<S159>/Switch' */

        /* Sum: '<S115>/Sum6' */
        rtb_Sum6[iU] = rtb_TmpSignalConversionAtVeESMR_P_BattLT;

        /* Switch: '<S115>/Switch1' */
        rtb_Switch1_na[iU] = rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

        /* Lookup_n-D: '<S157>/Vector' */
        rtb_Vector_ed[iU] = rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;
    }

    /* End of Outputs for SubSystem: '<S115>/Limiter' */

    /* Switch: '<S116>/Switch1' */
    if (rtb_TmpSignalConversionAtVeOSMR_b_Series)
    {
        /* Lookup_n-D: '<S118>/Vector' incorporates:
         *  SignalConversion generated from: '<S2>/EngSpd_Read'
         */
        rtb_TmpSignalConversionAtEngSpd_ReadOutp = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtEngSpd_ReadOutp, ((const float32 *)
              &(KxEOCR_M_TiCatTempMaint[0])), ((const float32 *)
              &(KtEOCR_M_TiCatTempMaint[0])), 6U);

        /* Switch: '<S116>/Switch1' */
        for (iU = 0; iU < 2; iU++)
        {
            rtb_Vector_ed[iU] = rtb_TmpSignalConversionAtEngSpd_ReadOutp;
        }
    }
    else
    {
        /* Switch: '<S116>/Switch1' */
        for (iU = 0; iU < 2; iU++)
        {
            rtb_Vector_ed[iU] = rtb_Switch1_na[iU];
        }
    }

    /* End of Switch: '<S116>/Switch1' */

    /* SignalConversion generated from: '<S112>/VariantSource' */
#if Rte_SysCon_Variant_EOCR_1

    /* Switch: '<S115>/Switch5' */
    rtb_Switch5_l = rtb_Vector_ed[1];

#endif

    /* End of SignalConversion generated from: '<S112>/VariantSource' */

    /* SignalConversion generated from: '<S112>/VariantSource' */
#if Rte_SysCon_Variant_EOCR_2

    /* Switch: '<S115>/Switch5' */
    rtb_Switch5_l = rtb_Vector_ed[1];

#endif

    /* End of SignalConversion generated from: '<S112>/VariantSource' */

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    EOCR_ac_DW.UnitDelay_DSTATE = VeEOCC_P_CWU_PwrDltTact;

    /* Switch: '<S115>/Switch5' incorporates:
     *  Constant: '<S153>/Calib'
     */
    if (KeEOCR_b_UseNiColdArb_ForNiCold)
    {
        rtb_TmpSignalConversionAtLeEOCR_n_Ni_Col = rtb_Switch4_o;
    }

    /* End of Switch: '<S115>/Switch5' */

    /* Outport: '<Root>/VeEOCR_n_Ni_ColdCtrl' incorporates:
     *  Lookup_n-D: '<S158>/Vector'
     *  SignalConversion generated from: '<S2>/NiCold'
     *  Sum: '<S115>/Sum4'
     *  Sum: '<S115>/Sum5'
     */
    (void)Rte_Write_VeEOCR_n_Ni_ColdCtrl_Value
        (rtb_TmpSignalConversionAtLeEOCR_n_Ni_Col - look1_iflf_binlca_16a
         (rtb_Switch1_na[1] - rtb_Sum6[1], ((const float32 *)
           &(KxEOCR_n_NiTrgtAdjust[0])), ((const float32 *)
           &(KtEOCR_n_NiTrgtAdjust[0])), 6U));

    /* Outport: '<Root>/VeEOCR_M_Ti_ColdCtrl' incorporates:
     *  Gain: '<S119>/Gain'
     *  SignalConversion generated from: '<S2>/VeEOCR_M_Ti_ColdCtrl'
     */
    (void)Rte_Write_VeEOCR_M_Ti_ColdCtrl_Value(rtb_Vector_ed[1]);

    /* Outport: '<Root>/VeEOCR_M_Ti_ColdCtrl_Stgc' incorporates:
     *  Gain: '<S120>/Gain'
     *  SignalConversion generated from: '<S2>/VeEOCR_M_Ti_ColdCtrl_Stgc'
     */
    (void)Rte_Write_VeEOCR_M_Ti_ColdCtrl_Stgc_Value(rtb_Switch5_l);

    /* Outport: '<Root>/VeEOCR_b_Series_NiTi_Allowed' incorporates:
     *  Logic: '<S135>/AND'
     *  SignalConversion generated from: '<S2>/VeEOCR_b_Series_NiTi_Allowed'
     */
    (void)Rte_Write_VeEOCR_b_Series_NiTi_Allowed_Value(rtb_LogicalOperator5_c);

    /* Outport: '<Root>/VeEOCR_r_CatTempMaintFact' incorporates:
     *  SignalConversion generated from: '<S2>/VeEOCR_r_CatTempMaintFact'
     *  Switch: '<S112>/Switch2'
     */
    (void)Rte_Write_VeEOCR_r_CatTempMaintFact_Value((float32)
        rtb_TmpSignalConversionAtVeOSMR_b_Series);

    /* Outport: '<Root>/VeEOCR_r_ColdCtrlCostFact_Stgc' incorporates:
     *  Gain: '<S148>/Gain'
     *  SignalConversion generated from: '<S2>/VeEOCR_r_ColdCtrlCostFact_Stgc'
     */
    (void)Rte_Write_VeEOCR_r_ColdCtrlCostFact_Stgc_Value
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* Outport: '<Root>/VeEOCR_r_ColdCtrlCostFact_Tact' incorporates:
     *  Gain: '<S149>/Gain'
     *  SignalConversion generated from: '<S2>/VeEOCR_r_ColdCtrlCostFact_Tact'
     */
    (void)Rte_Write_VeEOCR_r_ColdCtrlCostFact_Tact_Value(rtb_Switch_m);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */
}

/* Output function */
FUNC(void, EOCR_CODE) EOCR_PwrOn(void)
{

#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    boolean rtb_VariantMerge_For_Variant_Source_Va_d;

#endif

#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    float32 rtb_VariantMerge_For_Variant_Source_Vari;

#endif

#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    float32 rtb_VariantMerge_For_Variant_Source_Va_p;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/EOCR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Initialization_NF25or50msCalcA'
     */
    /* SignalConversion generated from: '<S162>/VariantSource4' */
#if Rte_SysCon_Variant_EOCR_3

    /* VariantMerge generated from: '<S162>/VariantSource3' incorporates:
     *  Constant: '<S165>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = HeEOCR_b_SeriesNiTi_AllwdInit;

#endif

    /* End of SignalConversion generated from: '<S162>/VariantSource4' */

    /* SignalConversion generated from: '<S162>/VariantSource4' */
#if Rte_SysCon_Variant_EOCR_4

    /* VariantMerge generated from: '<S162>/VariantSource3' incorporates:
     *  Constant: '<S162>/FALSE Constant4'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = false;

#endif

    /* End of SignalConversion generated from: '<S162>/VariantSource4' */

    /* Gain: '<S170>/Gain' */
#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    /* Gain: '<S170>/Gain' */
    EOCR_ac_B.Gain_g4 = rtb_VariantMerge_For_Variant_Source_Va_d;

#endif

    /* End of Gain: '<S170>/Gain' */

    /* SignalConversion generated from: '<S162>/VariantSource3' */
#if Rte_SysCon_Variant_EOCR_3

    /* VariantMerge generated from: '<S162>/VariantSource3' incorporates:
     *  Constant: '<S164>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = HeEOCR_b_ColdCtrl_RawInit;

#endif

    /* End of SignalConversion generated from: '<S162>/VariantSource3' */

    /* SignalConversion generated from: '<S162>/VariantSource3' */
#if Rte_SysCon_Variant_EOCR_4

    /* VariantMerge generated from: '<S162>/VariantSource3' incorporates:
     *  Constant: '<S162>/FALSE Constant3'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = false;

#endif

    /* End of SignalConversion generated from: '<S162>/VariantSource3' */

    /* Gain: '<S171>/Gain' */
#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    /* Gain: '<S171>/Gain' */
    EOCR_ac_B.Gain_bq = rtb_VariantMerge_For_Variant_Source_Va_d;

#endif

    /* End of Gain: '<S171>/Gain' */

    /* Outport: '<Root>/VeEOCR_b_NiTi_Achieved' incorporates:
     *  Constant: '<S162>/FALSE Constant1'
     *  Gain: '<S168>/Gain'
     */
    (void)Rte_Write_VeEOCR_b_NiTi_Achieved_Value(false);

    /* Lookup_n-D: '<S166>/Vector' incorporates:
     *  Lookup_n-D: '<S167>/Vector'
     */
#if Rte_SysCon_Variant_EOCR_3

    /* VariantMerge generated from: '<S162>/VariantSource2' incorporates:
     *  Constant: '<S162>/Constant Value1'
     *  Constant: '<S162>/Constant Value3'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p = look2_iflf_binlca_16a(0.0F, 25.0F,
        ((const float32 *)&(KxEOCR_M_TiCldCtrl_FrmRunTm_CatTemp[0])), ((const
        float32 *)&(KyEOCR_M_TiCldCtrl_FrmRunTm_CatTemp[0])), ((const float32 *)
        &(KtEOCR_M_TiCldCtrl_FrmRunTm_CatTemp[0])), EOCR_ac_ConstP.pooled22, 8U);

    /* VariantMerge generated from: '<S162>/VariantSource1' incorporates:
     *  Constant: '<S162>/Constant Value3'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = look2_iflf_binlca_16a(0.0F, 0.0F,
        ((const float32 *)&(KxEOCR_n_NiCldCtrl_FrmRunTm_No[0])), ((const float32
        *)&(KyEOCR_n_NiCldCtrl_FrmRunTm_No[0])), ((const float32 *)
        &(KtEOCR_n_NiCldCtrl_FrmRunTm_No[0])), EOCR_ac_ConstP.pooled21, 8U);

#endif

    /* End of Lookup_n-D: '<S166>/Vector' */

    /* SignalConversion generated from: '<S162>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S162>/VariantSource2'
     */
#if Rte_SysCon_Variant_EOCR_4

    /* VariantMerge generated from: '<S162>/VariantSource1' incorporates:
     *  Constant: '<S162>/Constant Value4'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = 0.0F;

    /* VariantMerge generated from: '<S162>/VariantSource2' incorporates:
     *  Constant: '<S162>/Constant Value5'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S162>/VariantSource1' */

    /* Gain: '<S172>/Gain' incorporates:
     *  Gain: '<S173>/Gain'
     *  Gain: '<S174>/Gain'
     *  Gain: '<S175>/Gain'
     */
#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    /* Gain: '<S172>/Gain' */
    EOCR_ac_B.Gain = rtb_VariantMerge_For_Variant_Source_Vari;

    /* Gain: '<S173>/Gain' */
    EOCR_ac_B.Gain_d = rtb_VariantMerge_For_Variant_Source_Vari;

    /* Gain: '<S174>/Gain' */
    EOCR_ac_B.Gain_g = rtb_VariantMerge_For_Variant_Source_Va_p;

    /* Gain: '<S175>/Gain' */
    EOCR_ac_B.Gain_gj = rtb_VariantMerge_For_Variant_Source_Va_p;

#endif

    /* End of Gain: '<S172>/Gain' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S163>/CTMEnabled_write' */
    EOCR_ac_B.OutportBufferForCTMEnabled_write = false;

    /* SignalConversion generated from: '<S163>/EngSpd_write' */
    EOCR_ac_B.OutportBufferForEngSpd_write = 0.0F;

    /* SignalConversion generated from: '<S163>/LeEOCR_n_Ni_ColdCtrl_Old_write' */
    EOCR_ac_B.OutportBufferForLeEOCR_n_Ni_ColdCtrl_Old = 0.0F;

    /* SignalConversion generated from: '<S163>/LeEOCR_M_Ti_ColdCtrl_Old_write' */
    EOCR_ac_B.OutportBufferForLeEOCR_M_Ti_ColdCtrl_Old = 0.0F;

    /* SignalConversion generated from: '<S163>/VeEOCC_r_TactMultwoPwrDlt_write' */
    EOCR_ac_B.OutportBufferForVeEOCC_r_TactMultwoPwrDl = 0.0F;

    /* SignalConversion generated from: '<S163>/ColdCtrlStgc_woSeMdAllw_toCalcB_write' */
    EOCR_ac_B.OutportBufferForColdCtrlStgc_woSeMdAllw_ = false;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Initialization_NF25or50msCalcA'
     */
    /* Outport: '<Root>/VeEOCR_r_CatTempMaintFact' incorporates:
     *  Constant: '<S162>/Constant Value2'
     *  Gain: '<S181>/Gain'
     *  SignalConversion generated from: '<S3>/CatTempMaintFact1'
     */
    (void)Rte_Write_VeEOCR_r_CatTempMaintFact_Value(0.0F);

    /* Outport: '<Root>/VeEOCR_b_CatalystWarmupEnabled' incorporates:
     *  Constant: '<S162>/FALSE Constant'
     *  Gain: '<S169>/Gain'
     *  SignalConversion generated from: '<S3>/CatalystWarmupEnabled1'
     */
    (void)Rte_Write_VeEOCR_b_CatalystWarmupEnabled_Value(false);

    /* Outport: '<Root>/VeEOCR_r_ColdCtrlCostFact_Stgc' incorporates:
     *  Constant: '<S162>/Constant Value2'
     *  Gain: '<S180>/Gain'
     *  SignalConversion generated from: '<S3>/ColdCtrlCostFact_Stgc1'
     */
    (void)Rte_Write_VeEOCR_r_ColdCtrlCostFact_Stgc_Value(0.0F);

    /* Outport: '<Root>/VeEOCR_r_ColdCtrlCostFact_Tact' incorporates:
     *  Constant: '<S162>/Constant Value2'
     *  Gain: '<S176>/Gain'
     *  SignalConversion generated from: '<S3>/ColdCtrlCostFact_Tact1'
     */
    (void)Rte_Write_VeEOCR_r_ColdCtrlCostFact_Tact_Value(0.0F);

    /* Outport: '<Root>/VeEOCR_b_ColdCtrlStgc_woSeMdAllw' incorporates:
     *  Constant: '<S162>/FALSE Constant2'
     *  Gain: '<S177>/Gain'
     *  SignalConversion generated from: '<S3>/ColdCtrlStgc_woSeMdAllw1'
     */
    (void)Rte_Write_VeEOCR_b_ColdCtrlStgc_woSeMdAllw_Value(false);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* SignalConversion generated from: '<S3>/ColdCtrl_Raw1' incorporates:
     *  SignalConversion generated from: '<S3>/NiMin_ColdCtrlRaw1'
     *  SignalConversion generated from: '<S3>/Ni_ColdCtrl1'
     */
#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    /* Outport: '<Root>/VeEOCR_b_ColdCtrl_Raw' */
    (void)Rte_Write_VeEOCR_b_ColdCtrl_Raw_Value(EOCR_ac_B.Gain_bq);

    /* Outport: '<Root>/VeEOCR_n_NiMin_ColdCtrlRaw' */
    (void)Rte_Write_VeEOCR_n_NiMin_ColdCtrlRaw_Value(EOCR_ac_B.Gain_d);

    /* Outport: '<Root>/VeEOCR_n_Ni_ColdCtrl' */
    (void)Rte_Write_VeEOCR_n_Ni_ColdCtrl_Value(EOCR_ac_B.Gain);

#endif

    /* End of SignalConversion generated from: '<S3>/ColdCtrl_Raw1' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Initialization_NF25or50msCalcA'
     */
    /* Outport: '<Root>/VeEOCR_Pct_PurgeIntensity' incorporates:
     *  Constant: '<S162>/Constant Value2'
     *  Gain: '<S179>/Gain'
     *  SignalConversion generated from: '<S3>/PurgeIntensity1'
     */
    (void)Rte_Write_VeEOCR_Pct_PurgeIntensity_Value(0.0F);

    /* Outport: '<Root>/VeEOCR_t_RunTime' incorporates:
     *  Constant: '<S162>/Constant Value2'
     *  Gain: '<S178>/Gain'
     *  SignalConversion generated from: '<S3>/RunTime1'
     */
    (void)Rte_Write_VeEOCR_t_RunTime_Value(0.0F);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* SignalConversion generated from: '<S3>/Series_NiTi_Allowed1' incorporates:
     *  SignalConversion generated from: '<S3>/Ti_ColdCtrl1'
     *  SignalConversion generated from: '<S3>/Ti_ColdCtrl_Stgc1'
     */
#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    /* Outport: '<Root>/VeEOCR_b_Series_NiTi_Allowed' */
    (void)Rte_Write_VeEOCR_b_Series_NiTi_Allowed_Value(EOCR_ac_B.Gain_g4);

    /* Outport: '<Root>/VeEOCR_M_Ti_ColdCtrl' */
    (void)Rte_Write_VeEOCR_M_Ti_ColdCtrl_Value(EOCR_ac_B.Gain_g);

    /* Outport: '<Root>/VeEOCR_M_Ti_ColdCtrl_Stgc' */
    (void)Rte_Write_VeEOCR_M_Ti_ColdCtrl_Stgc_Value(EOCR_ac_B.Gain_gj);

#endif

    /* End of SignalConversion generated from: '<S3>/Series_NiTi_Allowed1' */

    /* Merge: '<Root>/CTMEnabled_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/CTMEnabled_write'
     * */
    Rte_IrvWrite_EOCR_PwrOn_CTMEnabled_write_IRV
        (EOCR_ac_B.OutportBufferForCTMEnabled_write);

    /* Merge: '<Root>/ColdCtrlStgc_woSeMdAllw_toCalcB_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/ColdCtrlStgc_woSeMdAllw_toCalcB_write'
     * */
    Rte_IrvWrite_EOCR_PwrOn_ColdCtrlStgc_woSeMdAllw_toCalcB_write_IRV
        (EOCR_ac_B.OutportBufferForColdCtrlStgc_woSeMdAllw_);

    /* Merge: '<Root>/EngSpd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/EngSpd_write'
     * */
    Rte_IrvWrite_EOCR_PwrOn_EngSpd_write_IRV
        (EOCR_ac_B.OutportBufferForEngSpd_write);

    /* Merge: '<Root>/LeEOCR_M_Ti_ColdCtrl_Old_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/LeEOCR_M_Ti_ColdCtrl_Old_write'
     * */
    Rte_IrvWrite_EOCR_PwrOn_LeEOCR_M_Ti_ColdCtrl_Old_write_IRV
        (EOCR_ac_B.OutportBufferForLeEOCR_M_Ti_ColdCtrl_Old);

    /* Merge: '<Root>/LeEOCR_n_Ni_ColdCtrl_Old_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/LeEOCR_n_Ni_ColdCtrl_Old_write'
     * */
    Rte_IrvWrite_EOCR_PwrOn_LeEOCR_n_Ni_ColdCtrl_Old_write_IRV
        (EOCR_ac_B.OutportBufferForLeEOCR_n_Ni_ColdCtrl_Old);

    /* Merge: '<Root>/VeEOCC_r_TactMultwoPwrDlt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeEOCC_r_TactMultwoPwrDlt_write'
     * */
    Rte_IrvWrite_EOCR_PwrOn_VeEOCC_r_TactMultwoPwrDlt_write_IRV
        (EOCR_ac_B.OutportBufferForVeEOCC_r_TactMultwoPwrDl);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, EOCR_CODE) EOCR_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
