/*
 * File: STMR_ac.c
 *
 * Code generated for Simulink model 'STMR_ac'.
 *
 * Model version                  : 9.2273
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:12:27 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STMR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_STMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint16, STMR_VAR_INIT) KaSTMR_e_PRND_STAT_Map[256] =
{
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U,
    4U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 4U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    4U, 7U, 2U, 7U, 0U, 7U, 1U, 4U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 4U, 7U, 4U, 4U, 4U,
    4U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U
} ;                                    /* Referenced by: '<S592>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_Cf_CircmFrnc2Radius = 0.16F;/* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_Cf_ILELoCkFactor = 0.01F;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_Cf_ILEOpnFactor = 1.0F;/* Referenced by: '<S55>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_Cf_TransOutSpdCalc = 1.0F;/* Referenced by: '<S598>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_AxleASRCntrDec = 1U;/* Referenced by: '<S465>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_AxleASRCntrInc = 1U;/* Referenced by: '<S466>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_AxleASRCntrLim = 20U;/* Referenced by: '<S467>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_AxleMSRCntrDec = 1U;/* Referenced by: '<S468>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_AxleMSRCntrInc = 1U;/* Referenced by: '<S469>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_AxleMSRCntrLim = 20U;/* Referenced by: '<S470>/Calib' */

#endif

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_CCTrqChkLmt = 40U;/* Referenced by: '<S250>/Calib' */
static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_CCTrqChk_Inc = 1U;/* Referenced by: '<S251>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_Cnt_CreepDsblDbnc = 3U;/* Referenced by: '<S570>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_DistMntrWindow = 10U;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_Cnt_K0OpnDlyCnt = 10U;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_Cnt_LHomFixGrDly = 8U;/* Referenced by: '<S389>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_Lv2RdPerfm_Dly = 4U;/* Referenced by: '<S115>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_Lv2RdPerfm_MinLimDly = 4U;/* Referenced by: '<S154>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_MinCnt2EarlyTrqFA = 5U;/* Referenced by: '<S119>/Calib' */

#endif

static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_Cnt_MtrDeRatePeriod = 10U;/* Referenced by: '<S295>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_Cnt_MtrTrqDeRateCnfrm = 5U;/* Referenced by: '<S296>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_Cnt_MtrTrqDeRateEnDly = 78U;/* Referenced by: '<S286>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_Cnt_NoChngInCCSetSpdDly =
    200U;                              /* Referenced by: '<S257>/Calib' */
static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_RdPerfmTrqChkCntr = 4U;/* Referenced by: '<S140>/Calib' */
static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_RdPerfmTrqChkCntr_Min =
    4U;                                /* Referenced by: '<S141>/Calib' */
static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_RgnEstFailCntrInc = 1U;/* Referenced by: '<S437>/Calib' */
static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_RgnEstFailCntrLim = 78U;/* Referenced by: '<S438>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_SpdErrFailCntrInc = 3U;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_SpdErrFailCntrLim = 54U;/* Referenced by: '<S191>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_Tmax_Cntr_Lim = 78U;/* Referenced by: '<S129>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_Tmax_Cntr_Lim_LHom = 72U;/* Referenced by: '<S130>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_Tmax_LL = 60U;/* Referenced by: '<S131>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_Tmin_Cntr_Lim = 78U;/* Referenced by: '<S155>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_Tmin_Cntr_Lim_LHom = 72U;/* Referenced by: '<S156>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_Cnt_Tmin_LL = 60U;/* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_Cnt_UndrShtActvDly = 3U;/* Referenced by: '<S345>/Calib' */

#endif

static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_Cnt_VehInParkZeroTrqThresh =
    8U;                                /* Referenced by: '<S313>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_I_WhlRadius = 0.3F;/* Referenced by: '<S387>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_J_Inertia_Engine_Ie = 0.11F;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_J_Inertia_MtrA_Ia = 0.013F;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_J_Inertia_MtrB_Ib = 0.04F;/* Referenced by: '<S62>/Calib' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_J_MtrA_Inertia_M182 =
    0.001F;                            /* Referenced by: '<S30>/Calib' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_J_MtrB_Inertia_M182 =
    0.001F;                            /* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_DrvDmndDlyCoeff = 1.0F;/* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_DrvDmndDlyRiseCoeff =
    0.95F;                             /* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_DrvDmndDlyRiseCoeffMin =
    0.1F;                              /* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_DrvDmndMaxFiltrCoefMin =
    0.9F;                              /* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_MaxErrIntLmt = 750000.0F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_MaxErrLmt_RdPrfm =
    370000.0F;                         /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_MinErrIntLmt = 750000.0F;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_MinErrLmt_RdPrfm =
    370000.0F;                         /* Referenced by: '<S176>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_MtrTrqRateLimFiltCoeff =
    1.0F;                              /* Referenced by: '<S258>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_ReducedPerfCoeff = 0.1F;/* Referenced by: '<S236>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_K_VehAbsSpdFltrCoeff = 1.0F;/* Referenced by: '<S259>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_CruiseGrdLmtAllowMax =
    3000.0F;                           /* Referenced by: '<S252>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_DrvrNegDiffThrshld = 1.0F;/* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_DrvrNegDiffThrshldMin =
    1.0F;                              /* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_DrvrPosDiffThrshld = 1.0F;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_DrvrPosDiffThrshldMin =
    1.0F;                              /* Referenced by: '<S366>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_EngActStdyStTrq = 100.0F;/* Referenced by: '<S578>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_FrntAxlCLMaxLim_LSP =
    1.0F;                              /* Referenced by: '<S471>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_FrntAxlCLMaxLim_RSP =
    1.0F;                              /* Referenced by: '<S472>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_FrntAxlCLMinLim_LSP =
    1.0F;                              /* Referenced by: '<S473>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_FrntAxlCLMinLim_RSP =
    1.0F;                              /* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_InertiaTrqFailTrqVal =
    0.0F;                              /* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_InrtiaChkTrqVal = 10.0F;/* Referenced by: '<S47>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_InvalidRegenBrkAxleTrq =
    8190.0F;                           /* Referenced by: '<S597>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_K0Capacity_Default = 0.0F;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_K0TrqLockThrshld = 28.0F;/* Referenced by: '<S68>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_MaxLim_LTsh_LSP = 0.1F;/* Referenced by: '<S142>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_MaxLim_LTsh_RSP = 0.1F;/* Referenced by: '<S143>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_MaxTrq2EarlyTrqFA =
    500.0F;                            /* Referenced by: '<S120>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_MinLim_LTsh_LSP = 0.1F;/* Referenced by: '<S144>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_MinLim_LTsh_RSP = 0.1F;/* Referenced by: '<S145>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_MtrMaxLim_VehSpdFA =
    200.0F;                            /* Referenced by: '<S321>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_MtrMinLim_VehSpdFA =
    200.0F;                            /* Referenced by: '<S322>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT)
    KeSTMR_M_MtrTrqCmndMaxLim_SafeaMargin = 50.0F;/* Referenced by: '<S314>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_MtrTrqRateLmt_StdySt =
    100.0F;                            /* Referenced by: '<S260>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_P2EngInrtiaChkTrqVal =
    -30.0F;                            /* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_P2SpdCntrl_MnTrqDflt =
    0.0F;                              /* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_P2SpdCntrl_MxTrqDflt =
    0.0F;                              /* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RegenBrkAxTorqReqst =
    0.0F;                              /* Referenced by: '<S367>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RgnReqMin = 50.0F;/* Referenced by: '<S431>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RgnTol = 100.0F;/* Referenced by: '<S451>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RgnTolMin = 500.0F;/* Referenced by: '<S452>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RgnTrqMntrMax_GRD_LD =
    -30.0F;                            /* Referenced by: '<S453>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RgnTrqMntrMax_GRD_LU =
    100.0F;                            /* Referenced by: '<S454>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RgnTrqMntrMin_GRD_LD =
    -100.0F;                           /* Referenced by: '<S455>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RgnTrqMntrMin_GRD_LU =
    50.0F;                             /* Referenced by: '<S456>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RrAxlCLMaxLim_LSP = 1.0F;/* Referenced by: '<S475>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RrAxlCLMaxLim_RSP = 1.0F;/* Referenced by: '<S476>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RrAxlCLMinLim_LSP = 1.0F;/* Referenced by: '<S477>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_RrAxlCLMinLim_RSP = 1.0F;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_SpdControlTrqError = 2.0F;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_SpdRisecheckThrshld =
    0.5F;                              /* Referenced by: '<S194>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_TmaxLim_LHom = 2500.0F;/* Referenced by:
                                                                      * '<S323>/Calib'
                                                                      * '<S372>/Calib'
                                                                      */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_M_TminLim_LHom = -1000.0F;/* Referenced by:
                                                                      * '<S324>/Calib'
                                                                      * '<S379>/Calib'
                                                                      */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_Pct_AcclPdlLim = 0.1F;/* Referenced by: '<S564>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_AeCoastReadyOvrd = 0;/* Referenced by: '<S540>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_CalcTransTrqRatio = 0;/* Referenced by: '<S390>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_CreepModeEnbl = 1;/* Referenced by: '<S560>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_CrpCntResetEnbl = 1;/* Referenced by: '<S206>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DisblASRMntr = 0;/* Referenced by: '<S479>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DisblASRbyMSS = 0;/* Referenced by: '<S480>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DisblCCTrqChk = 1;/* Referenced by: '<S253>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DisblMSRMntr = 0;/* Referenced by: '<S481>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DisblMSRbyMSS = 0;/* Referenced by: '<S482>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DisblMtrCmndChk = 1;/* Referenced by: '<S106>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DisblOutTrqMntr_EngSpdFA =
    0;                                 /* Referenced by: '<S552>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DisblOutTrqMntr_MtrBSpdFA
    = 0;                               /* Referenced by: '<S553>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DisblP061BbyMSS = 1;/* Referenced by: '<S107>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DoNotAllowRgnBrkFault_RA =
    1;                                 /* Referenced by: '<S108>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_DsblMntrEngTrqFA = 1;/* Referenced by: '<S554>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_ETRQ_CrpDsbl = 1;/* Referenced by: '<S563>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_EblRedPerfModeDTMR = 1;/* Referenced by: '<S97>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Ebl_NewReqUnintAccel = 0;/* Referenced by:
                                                                      * '<S325>/Calib'
                                                                      * '<S116>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static volatile CONST(boolean, STMR_VAR_INIT)
    KeSTMR_b_EnblAtlantisHigh_SpdSource = 1;/* Referenced by: '<S85>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_EnblLHOM_RgnbrkInh = 0;/* Referenced by: '<S581>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_EnblLimHomActv = 1;/* Referenced by: '<S582>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_4 || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2 || Rte_SysCon_Variant_STMR_FUNC_3

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_EnblLv2Garage = 1;/* Referenced by:
                                                                      * '<S22>/Calib'
                                                                      * '<S79>/Calib'
                                                                      */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_EnblMtrDeRateChk = 0;/* Referenced by: '<S287>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_EnblOutTrqMntrMaxLim = 0;/* Referenced by: '<S146>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_EnblOutTrqMntrMinLim = 0;/* Referenced by: '<S147>/Calib' */

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_EnblWED = 1;/* Referenced by: '<S86>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_EarlyFaultSet = 1;/* Referenced by: '<S121>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_RegenMntr = 1;/* Referenced by: '<S432>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_ResetByP3034 = 1;/* Referenced by: '<S109>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_ResetHardLimp = 1;/* Referenced by: '<S401>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_ResetMedLimp = 1;/* Referenced by: '<S402>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_ResetSTMRbyMSS = 1;/* Referenced by: '<S403>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_ResetSoftLimp = 1;/* Referenced by: '<S404>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_ResetStopLimp = 1;/* Referenced by: '<S405>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_ResetUltraHardLimp =
    1;                                 /* Referenced by: '<S406>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Enbl_UseLv1WEDSts = 0;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_ILELockSpdCheckEnbl = 1;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_ILESTO_StatEnbl = 1;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_K0_Opn_MntrP2 = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Lv2ReducePerfModeEnbl = 0;/* Referenced by: '<S217>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_Lv2_MntrCCTrqReqEnbl = 1;/* Referenced by: '<S254>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_OnlyCheckBSM_limit = 0;/* Referenced by: '<S483>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_OvrdEngActStdyStTrq = 0;/* Referenced by: '<S579>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_PerfmTTRLmt_SIP = 1;/* Referenced by: '<S391>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_SetDTCForTrqMntFlt = 0;/* Referenced by: '<S239>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_SetDTCOnRedPerfMd = 1;/* Referenced by: '<S240>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_SetDTC_ZeroTrq = 1;/* Referenced by: '<S241>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_SetRgnReqZeroInR = 0;/* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_SlectDeltaTrqErrMthd = 1;/* Referenced by: '<S199>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_SpdMntrInPNDsbl = 0;/* Referenced by: '<S561>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_UseRdPerfmMd = 0;/* Referenced by: '<S230>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_UseRdPerfmMd_MinLim = 0;/* Referenced by: '<S231>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_UseRdPerfmRst = 0;/* Referenced by: '<S148>/Calib' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_UseRdPerfmRst_Min = 0;/* Referenced by: '<S158>/Calib' */

#endif

static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_UseRegenMntr_withWED = 1;/* Referenced by: '<S433>/Calib' */
static volatile CONST(boolean, STMR_VAR_INIT) KeSTMR_b_UseRegenOffset = 0;/* Referenced by: '<S434>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_dn_EngAccel_MaxLim = 50.0F;/* Referenced by: '<S599>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_dn_EngAccel_MinLim = -10.0F;/* Referenced by: '<S600>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_dn_MtrAAccel_MaxLim = 50.0F;/* Referenced by: '<S601>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_dn_MtrAAccel_MinLim =
    -10.0F;                            /* Referenced by: '<S602>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_dn_MtrBAccel_MaxLim = 50.0F;/* Referenced by: '<S603>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_dn_MtrBAccel_MinLim =
    -10.0F;                            /* Referenced by: '<S604>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_GearMax = 3U;/* Referenced by: '<S565>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_GearMin = 1U;/* Referenced by: '<S566>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_ILESTsCreep = 1U;/* Referenced by: '<S571>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_ILEStsNeutrl = 0U;/* Referenced by: '<S572>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_K0LockingState = 2U;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_K0StateClsd = 5U;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_K0StateOpn = 0U;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Hard_3_1 = 31U;/* Referenced by: '<S414>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Hard_3_2 = 32U;/* Referenced by: '<S415>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Hard_3_3 = 33U;/* Referenced by: '<S416>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Hard_4_1 = 41U;/* Referenced by: '<S417>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Hard_4_2 = 42U;/* Referenced by: '<S418>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Hard_4_3 = 43U;/* Referenced by: '<S419>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Med_2_1 = 21U;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Med_2_2 = 22U;/* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Med_2_3 = 23U;/* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Soft_1_1 = 11U;/* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Soft_1_2 = 12U;/* Referenced by: '<S424>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Soft_1_3 = 13U;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Stop_5_1 = 51U;/* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Stop_5_2 = 52U;/* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Limitation_Stop_5_3 = 53U;/* Referenced by: '<S428>/Calib' */

#endif

static volatile CONST(uint8, STMR_VAR_INIT) KeSTMR_e_Lv2BrakeMaxRegenReady = 1U;/* Referenced by: '<S541>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_RevGear = 11U;/* Referenced by: '<S567>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_Tcase4HighSlctCANC = 2U;/* Referenced by: '<S548>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_Tcase4HighSlctePT = 0U;/* Referenced by: '<S549>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_Tcase4LowSlctCANC = 2U;/* Referenced by: '<S550>/Calib' */
static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_e_TcaseRangeSelect = 2U;/* Referenced by: '<S551>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_EngSpdLowPathCoeff = 0.1F;/* Referenced by: '<S605>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_HourToSecsConvFctr =
    0.00027778F;                       /* Referenced by: '<S261>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT)
    KeSTMR_k_Lv2_RgnBrkAxlTrqReqLowCoeff = 0.5F;/* Referenced by: '<S457>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_MtrASpdLowPathCoeff =
    0.1F;                              /* Referenced by: '<S606>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_MtrBSpdLowPathCoeff =
    0.1F;                              /* Referenced by: '<S607>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_MtrDeRateAvg = 10.0F;/* Referenced by: '<S301>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_MtrTrqCmndFiltrCoeff =
    0.5F;                              /* Referenced by: '<S297>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_OutTrqCalcFiltd = 0.8F;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_P2TrqCalcFiltd = 0.8F;/* Referenced by: '<S51>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_P4BEV_FDR = 9.6F;/* Referenced by:
                                                                      * '<S608>/Calib'
                                                                      * '<S484>/Calib'
                                                                      */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_PdlWhlTrqMphFltCoeff =
    0.1F;                              /* Referenced by: '<S609>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_SpdDiffIntrglCoeff = 1.0F;/* Referenced by: '<S262>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_TmaxFltrCoeff = 0.5F;/* Referenced by:
                                                                      * '<S326>/Calib'
                                                                      * '<S373>/Calib'
                                                                      */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_TminFltrCoeff = 0.5F;/* Referenced by:
                                                                      * '<S327>/Calib'
                                                                      * '<S380>/Calib'
                                                                      */

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_WEDSpdDiffFiltercoeff =
    0.02F;                             /* Referenced by: '<S88>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_k_kph_To_mph = 1.0F;/* Referenced by: '<S610>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_l_SpdDiffCnfrmThsh =
    0.00027778F;                       /* Referenced by: '<S263>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_l_WhlRadius_meter_M182 =
    0.362F;                            /* Referenced by: '<S315>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_m_VehCurbWeight_M182 =
    1630.0F;                           /* Referenced by: '<S316>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_IdlSpdErrToRstDecay =
    50.0F;                             /* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_K0Cls_P2EngSpdDiff =
    200.0F;                            /* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_K0SlipSpdLSP = 250.0F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_K0SlipSpdRSP = 500.0F;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_MaxIdleErrTrgt = 180.0F;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_MaxIdleSpd = 1600.0F;/* Referenced by: '<S196>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_NTurbCrpLim = 1600.0F;/* Referenced by: '<S575>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_P2NTurbErrorThrhld =
    200.0F;                            /* Referenced by: '<S385>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_P2NTurbErrorVal = 400.0F;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_SpdErrILELock = 250.0F;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_SpdThrhldforK0TrqSgnLSP =
    0.0F;                              /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_SpdThrhldforK0TrqSgnRSP =
    50.0F;                             /* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_UndrShtActvThrshldLSP =
    -50.0F;                            /* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_UndrShtActvThrshldRSP =
    -40.0F;                            /* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_WEDMntr_CreepSpdRPM =
    500.0F;                            /* Referenced by: '<S89>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_n_trnsOutSpdCrpLim = 700.0F;/* Referenced by: '<S576>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_3

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_All_NoFromNb_NCnDep =
    0.391304344F;                      /* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_Damping_Engine_Be =
    0.001F;                            /* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_Damping_MtrA_Ba = 0.0001F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_Damping_MtrB_Bb =
    5.01E-5F;                          /* Referenced by: '<S63>/Calib' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_DistRatio_ReducedPerf =
    0.3F;                              /* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_ENPG1FIX_TTR = 4.4592F;/* Referenced by: '<S392>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_FDRratio = 100.0F;/* Referenced by: '<S90>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_FDRratioRegen = 13.0F;/* Referenced by: '<S435>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_3

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_M2_ToFromNa_TiNiDep =
    0.00012753F;                       /* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_M2_ToFromNadot_TiNiDep =
    0.0042F;                           /* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_M2_ToFromNo_TiNiDep =
    -0.000694F;                        /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_M2_ToFromNodot_TiNiDep =
    -0.0272F;                          /* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_M2_ToFromTa_TiNiDep =
    -3.1538F;                          /* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_M2_ToFromTb_TiNiDep =
    2.5556F;                           /* Referenced by: '<S29>/Calib' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_MtrA_DampingM182 =
    0.0001F;                           /* Referenced by: '<S32>/Calib' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_MtrB_DampingM182 =
    0.0001F;                           /* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_P1f_BeltRatio = 2.48F;/* Referenced by:
                                                                      * '<S75>/Calib'
                                                                      * '<S61>/Calib'
                                                                      */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_TFRatio = 3.2F;/* Referenced by:
                                                                      * '<S625>/Calib'
                                                                      * '<S393>/Calib'
                                                                      */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_UndrShtPrtctnDecayRate =
    0.1F;                              /* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_UndrShtTrqFltrCoef = 0.2F;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_WEDSpdDiff_Open = 0.3F;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_WEDSpdThsh_Closed = 0.2F;/* Referenced by: '<S92>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_r_cFinalDrvRat = 3.59F;/* Referenced by: '<S626>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_t_EngAccel_FiltThsh = 1.5F;/* Referenced by: '<S611>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(uint16, STMR_VAR_INIT) KeSTMR_t_HighTrqCheckTime = 2U;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_t_IntErrRstTm = 0.3F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_t_Lv2RdPerfm_Dly = 0.5F;/* Referenced by: '<S210>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_t_MtrAAccel_FiltThsh = 1.5F;/* Referenced by: '<S612>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_t_MtrBAccel_FiltThsh = 1.5F;/* Referenced by: '<S613>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_t_OptShftTm = 0.4F;/* Referenced by: '<S183>/Calib' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_t_UnintAccelTimeDur = 1.3F;/* Referenced by: '<S317>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_t_dT = 0.025F;/* Referenced by:
                                                                    * '<S614>/Calib'
                                                                    * '<S318>/Calib'
                                                                    * '<S171>/Calib'
                                                                    * '<S264>/Calib'
                                                                    * '<S184>/Calib'
                                                                    */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_v_CCSetSpdChngThsh = 1.0F;/* Referenced by: '<S265>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_v_Kph_To_Mph_ConvFctr =
    0.621371F;                         /* Referenced by: '<S306>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_v_SpdDiffIntgThsh = 0.0F;/* Referenced by: '<S266>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_v_VehSpdCrpLim = 8.0F;/* Referenced by: '<S577>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_v_VehSpdDiffCC_LSP = 1.0F;/* Referenced by: '<S288>/Calib' */
static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_v_VehSpdDiffCC_RSP = 1.0F;/* Referenced by: '<S289>/Calib' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KeSTMR_v_VehStpSpd = 0.5F;/* Referenced by: '<S394>/Calib' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_K_MaxErrIntegralGain[15] =
{
    0.01F, 0.17F, 0.34F, 0.51F, 0.68F, 0.85F, 1.0F, 0.5F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S177>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_K_MinErrIntegralGain[15] =
{
    0.01F, 0.17F, 0.34F, 0.51F, 0.68F, 0.85F, 1.0F, 0.5F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S178>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_FrntAxlOLMax_Margin[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S485>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_FrntAxlOLMin_Margin[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S486>/Vector' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_Lv2ReducedPerfmMd[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.2F, 0.3F, 0.4F, 0.5F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S237>/Vector' */

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_MtrMaxLim_ParkNeutral[16]
    =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S319>/Vector'
                                        * '<S328>/Vector'
                                        */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_MtrMinLim_ParkNeutral[16]
    =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S329>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_MtrTrqCmnd_MaxLim[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S330>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_MtrTrqCmnd_MinLim[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S331>/Vector' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_MtrTrqRateLmt_CCSpdChng
    [126] =
{
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F
} ;                                    /* Referenced by: '<S267>/Vector' */

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_MtrTrqRateLmt_VehSpdChng
    [126] =
{
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_RrAxlOLMax_Margin[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S487>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_RrAxlOLMin_Margin[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S488>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_TiMaxLimit_LTSH[22] =
{
    80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F,
    80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F
} ;                                    /* Referenced by: '<S374>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_TiMinLimit_LTSH[22] =
{
    80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F,
    80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F
} ;                                    /* Referenced by: '<S381>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_UnAcc_HTSH_TTR[15] =
{
    150.0F, 150.0F, 150.0F, 148.837494F, 123.736183F, 97.9333801F, 65.8087387F,
    62.2407913F, 43.8724899F, 27.0817833F, 18.0545235F, 18.0F, 18.0F, 18.0F,
    18.0F
} ;                                    /* Referenced by: '<S179>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_UnAcc_LTSH_TTR[11] =
{
    91.0F, 91.0F, 428.0F, 341.0F, 286.0F, 222.0F, 171.0F, 136.0F, 91.0F, 61.0F,
    61.0F
} ;                                    /* Referenced by: '<S180>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_UnAcc_SFctr_TrnsTrqRt[15]
    =
{
    183.75F, 183.75F, 183.75F, 183.75F, 183.75F, 183.75F, 162.490707F,
    153.680969F, 108.327133F, 80.0F, 65.0F, 65.0F, 65.0F, 65.0F, 65.0F
} ;                                    /* Referenced by: '<S382>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_UnDeccel_HTSH_TTR[15] =
{
    183.75F, 183.75F, 183.75F, 183.75F, 183.75F, 183.75F, 183.75F, 183.75F,
    162.490707F, 100.0F, 75.0F, 75.0F, 75.0F, 75.0F, 75.0F
} ;                                    /* Referenced by: '<S181>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_UnDeccel_LTSH_TTR[11] =
{
    513.0F, 513.0F, 2408.0F, 1915.0F, 1606.0F, 1250.0F, 964.0F, 764.0F, 513.0F,
    342.0F, 342.0F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_UnDecel_SFctr_TrnsTrqRt
    [15] =
{
    122.5F, 122.5F, 122.5F, 122.5F, 101.840485F, 80.6036072F, 54.1635666F,
    51.2269897F, 36.1090469F, 25.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F
} ;                                    /* Referenced by: '<S375>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_M_UnderShootPrtcn[35] =
{
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_l_UnintAccelDist[16] =
{
    0.5F, 1.0F, 3.0F, 5.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F,
    10.0F, 10.0F, 10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S320>/Vector' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_r_TransTrqRatio_GrEngd[17] =
{
    0.0F, 4.4592F, 2.5083F, 1.547F, 1.1422F, 0.8516F, 0.6719F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -3.185F, 0.0F
} ;                                    /* Referenced by: '<S395>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KtSTMR_r_TransTrqRatio_TrgtGr[17] =
{
    0.0F, 4.4592F, 2.5083F, 1.547F, 1.1422F, 0.8516F, 0.6719F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -3.185F, 0.0F
} ;                                    /* Referenced by: '<S396>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_K_MaxErrIntegralGain[15] =
{
    -300.0F, -250.0F, -200.0F, -150.0F, -100.0F, -50.0F, -15.0F, 0.0F, 15.0F,
    50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F
} ;                                    /* Referenced by: '<S177>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_K_MinErrIntegralGain[15] =
{
    -300.0F, -250.0F, -200.0F, -150.0F, -100.0F, -50.0F, -15.0F, 0.0F, 15.0F,
    50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F
} ;                                    /* Referenced by: '<S178>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_FrntAxlOLMax_Margin[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S485>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_FrntAxlOLMin_Margin[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S486>/Vector' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_Lv2ReducedPerfmMd[10] =
{
    -1500.0F, -700.0F, -400.0F, -300.0F, -175.0F, 0.0F, 175.0F, 350.0F, 950.0F,
    1500.0F
} ;                                    /* Referenced by: '<S237>/Vector' */

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_MtrMaxLim_ParkNeutral[16]
    =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by:
                                        * '<S319>/Vector'
                                        * '<S328>/Vector'
                                        */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_MtrMinLim_ParkNeutral[16]
    =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S329>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_MtrTrqCmnd_MaxLim[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S330>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_MtrTrqCmnd_MinLim[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S331>/Vector' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_MtrTrqRateLmt_CCSpdChng
    [14] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F, 50.0F, 55.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F
} ;                                    /* Referenced by: '<S267>/Vector' */

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_MtrTrqRateLmt_VehSpdChng
    [14] =
{
    10.0F, 15.0F, 20.0F, 30.0F, 40.0F, 50.0F, 55.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_RrAxlOLMax_Margin[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S487>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_RrAxlOLMin_Margin[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S488>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_TiMaxLimit_LTSH[22] =
{
    1.0F, 10.0F, 50.0F, 100.0F, 200.0F, 350.0F, 400.0F, 450.0F, 500.0F, 601.0F,
    700.0F, 801.0F, 900.0F, 1050.0F, 1300.0F, 1500.0F, 1700.0F, 2000.0F, 2500.0F,
    3000.0F, 3500.0F, 4000.0F
} ;                                    /* Referenced by: '<S374>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_TiMinLimit_LTSH[22] =
{
    1.0F, 10.0F, 50.0F, 100.0F, 200.0F, 350.0F, 400.0F, 450.0F, 500.0F, 601.0F,
    700.0F, 801.0F, 900.0F, 1050.0F, 1300.0F, 1500.0F, 1700.0F, 2000.0F, 2500.0F,
    3000.0F, 3500.0F, 4000.0F
} ;                                    /* Referenced by: '<S381>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_UnAcc_HTSH_TTR[15] =
{
    0.0F, 3.444F, 4.1F, 5.248F, 6.847F, 8.651F, 12.874F, 13.612F, 19.311F,
    51.496F, 77.244F, 90.0F, 120.0F, 150.0F, 160.0F
} ;                                    /* Referenced by: '<S179>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_UnAcc_LTSH_TTR[11] =
{
    -5.0F, -3.3F, 0.67F, 0.84F, 1.0F, 1.29F, 1.67F, 2.1F, 3.14F, 4.71F, 6.0F
} ;                                    /* Referenced by: '<S180>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_UnAcc_SFctr_TrnsTrqRt[15]
    =
{
    0.0F, 3.444F, 4.1F, 5.248F, 6.847F, 8.651F, 12.874F, 13.612F, 19.311F,
    51.496F, 77.244F, 90.0F, 120.0F, 125.0F, 130.0F
} ;                                    /* Referenced by: '<S382>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_UnDeccel_HTSH_TTR[15] =
{
    0.0F, 3.444F, 4.1F, 5.248F, 6.847F, 8.651F, 12.874F, 13.612F, 19.311F,
    51.496F, 77.244F, 90.0F, 120.0F, 150.0F, 160.0F
} ;                                    /* Referenced by: '<S181>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_UnDeccel_LTSH_TTR[11] =
{
    -5.0F, -3.3F, 0.67F, 0.84F, 1.0F, 1.29F, 1.67F, 2.1F, 3.14F, 4.71F, 6.0F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_UnDecel_SFctr_TrnsTrqRt
    [15] =
{
    0.0F, 3.444F, 4.1F, 5.248F, 6.847F, 8.651F, 12.874F, 13.612F, 19.311F,
    51.496F, 77.244F, 90.0F, 120.0F, 125.0F, 130.0F
} ;                                    /* Referenced by: '<S375>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_M_UnderShootPrtcn[5] =
{
    400.0F, 601.0F, 800.0F, 1001.0F, 1200.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_l_UnintAccelDist[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S320>/Vector' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_r_TransTrqRatio_GrEngd[17] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 6.5F, 7.0F, 8.0F, 9.0F, 10.0F,
    11.0F, 12.0F, 13.0F, 14.0F, 15.0F
} ;                                    /* Referenced by: '<S395>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KxSTMR_r_TransTrqRatio_TrgtGr[17] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 6.5F, 7.0F, 8.0F, 9.0F, 10.0F,
    11.0F, 12.0F, 13.0F, 14.0F, 15.0F
} ;                                    /* Referenced by: '<S396>/Vector' */

#endif

static volatile CONST(float32, STMR_VAR_INIT) KySTMR_M_MtrTrqRateLmt_CCSpdChng[9]
    =
{
    25.0F, 30.0F, 40.0F, 45.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S267>/Vector' */

static volatile CONST(float32, STMR_VAR_INIT) KySTMR_M_MtrTrqRateLmt_VehSpdChng
    [9] =
{
    25.0F, 30.0F, 40.0F, 45.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static volatile CONST(float32, STMR_VAR_INIT) KySTMR_M_UnderShootPrtcn[7] =
{
    -100.0F, -80.0F, -61.0F, -40.0F, -19.0F, 0.0F, 20.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_STMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_Cf_InertiaFactor;/* '<S41>/Switch2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_Cf_K0TrqFlwDirction;/* '<S45>/Switch1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_AxleASR_FA_deb;/* '<S489>/Switch2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_AxleMSR_FA_deb;/* '<S490>/Switch2' */

#endif

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_CC_TrqChk_Fail;/* '<S256>/Switch2' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_FailCntsAftrMaxChk;/* '<S133>/Switch18' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_FailCntsArb;/* '<S133>/Switch19' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_FailCntsArbAftrPause;/* '<S133>/Switch7' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_FinalFailCnts;/* '<S133>/Switch16' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint16, STMR_VAR_INIT) VeSTMC_Cnt_IntegralNumLimited;/* '<S126>/LimiterSwitch1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint16, STMR_VAR_INIT) VeSTMC_Cnt_IntegralSum;/* '<S114>/Sum12' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint16, STMR_VAR_INIT) VeSTMC_Cnt_Integral_TrqDiff;/* '<S114>/Switch5' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint16, STMR_VAR_INIT) VeSTMC_Cnt_Integral_TrqDiff_prev;/* '<S114>/UnitDelay2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_MCntr_FailCnts;/* '<S133>/Main_Counter' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_FailCntsAftrMaxChk;/* '<S160>/Switch18' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_FailCntsArb;/* '<S160>/Switch19' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_FailCntsArbAftrPause;/* '<S160>/Switch7' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_FinalFailCnts;/* '<S160>/Switch16' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_MCntr_FailCnts;/* '<S160>/Main_Counter' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_PCntrIncVal;/* '<S160>/Switch1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_PCntrVal;/* '<S160>/Pause_Counter' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_PcntrIncValActv;/* '<S160>/Switch20' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_PcntrPrevValArb;/* '<S160>/Switch4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_Min_PrevValArb;/* '<S160>/Switch17' */

#endif

static VAR(uint16, STMR_VAR_INIT) VeSTMC_Cnt_MtrTrqCmndDecCntrVal;/* '<S303>/Switch1' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_PCntrVal;/* '<S133>/Pause_Counter' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_PcntrIncVal;/* '<S133>/Switch20' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_PcntrIncValActv;/* '<S133>/Switch1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_PcntrPrevValArb;/* '<S133>/Switch4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_PrevValArb;/* '<S133>/Switch17' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_RdPrfTorqFltEble;/* '<S114>/Switch2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_RdPrfTorqFltEble_prev;/* '<S114>/UnitDelay6' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_RdPrfTorqLmt_Inc;/* '<S114>/Sum15' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_RdPrfTorqLmt_arb;/* '<S114>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_Cnt_ResumeMainCntr_Dly1;/* '<S214>/AND' */

#endif

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_RgnEstMntrFlt;/* '<S439>/Switch2' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_TMaxCntrLim_Arb;/* '<S117>/Switch4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(uint8, STMR_VAR_INIT) VeSTMC_Cnt_TMinCntrLim_Arb;/* '<S153>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_J_Eng_Inertia;/* '<S43>/Product9' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_J_MtrAEng_DampingCoeff;/* '<S43>/Sum3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_J_MtrAEng_Inertia;/* '<S43>/Sum2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_J_MtrAInertia;/* '<S43>/Product4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_Err_Thsh_Arb;/* '<S165>/Switch6' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_Err_Thsh_Min_Arb;/* '<S165>/Switch5' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_Err_Thsh_RdPrfm_Arb;/* '<S165>/Switch4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_Gain_Integral;/* '<S165>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_Gain_MaxError;/* '<S177>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_Gain_MinError;/* '<S178>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_Gain_MinError_Arb;/* '<S165>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_IntegralOfTrqErr;/* '<S168>/Sum2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_IntegralOfTrqErr_Arb;/* '<S168>/Switch4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_IntegralRstFctr_Arb;/* '<S168>/Switch5' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_Integral_Rst;/* '<S168>/SumSub1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_Integral_Rst_Arb;/* '<S168>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_MinErr_RdPrfm_Arb;/* '<S165>/Switch2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_TrqErrIntgrl;/* '<S168>/Multiplication' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_TrqErrIntgrl_Pause;/* '<S168>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_TrqErr_NmmS;/* '<S168>/Switch2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_TrqErr_NmmS_Arb;/* '<S208>/Switch2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_TrqErr_NmmS_MxLmt;/* '<S168>/Sum' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_K_TrqErrorDuringPause;/* '<S169>/UnitDelay2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_AvgLv2Trq;/* '<S197>/Product1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_CMATrqDiff_arb;/* '<S114>/Switch7' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_CruiseTrqError;/* '<S245>/Sum1' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_DeltaTrqUndrShtPrtct;/* '<S342>/Sum1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_DiffInMaxErr;/* '<S165>/Sum4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_DiffInMinErr;/* '<S165>/Sum5' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_DrvDmndMax_NoUnder;/* '<S369>/Switch9' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_DrvDmndMax_P1P2;/* '<S343>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_DrvDmndMin_P1P2;/* '<S370>/Switch9' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_DrvrDmndSlipMax;/* '<S343>/Sum3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_DrvrDmndSlipMin;/* '<S343>/Sum2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_DrvrRqstWithUndrShtTrq;/* '<S343>/Sum1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_ErrorMax;/* '<S113>/Sum1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_ErrorMaxArb;/* '<S113>/Switch5' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_ErrorMin;/* '<S113>/Sum2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_ErrorMinArb;/* '<S113>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Error_Arb;/* '<S113>/Switch2' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrictionMtrA_arb;/* '<S17>/Sum2' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrictionMtrB_arb;/* '<S17>/Sum4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrntAxlAdhMax_Mtrbased;/* '<S460>/Product1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrntAxlAdhMin_Mtrbased;/* '<S460>/Product3' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrntAxlMaxRqPrtctd_MtrDomain;/* '<S460>/Product9' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrntAxlMinRqPrtctd_MtrDomain;/* '<S460>/Product10' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrntMaxLim;/* '<S460>/Add' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrntMaxLim_Raw;/* '<S460>/Switch26' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrntMinLim;/* '<S460>/Add2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrntMinLim_Raw;/* '<S460>/Switch24' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_FrontAxleRqBSM_MtrDomain;/* '<S460>/Product11' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv1EstRgnBrkAxlTrqArb;/* '<S14>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv1EstRgnBrkAxlTrqWEDArb;/* '<S14>/Switch2' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv1EstRgnBrkAxlTrqWEDArb_Abs;/* '<S14>/Abs' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv1EstRgnBrkAxlTrq_SingleSig;/* '<S14>/Divide' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv1EstRgnBrkAxlTrq_TwoSig;/* '<S14>/Sum1' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2MaxLim_final;/* '<S308>/Gain' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2MinLim_final;/* '<S309>/Gain' */

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2MtrATrqCmndRev;/* '<S20>/Gain' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2MtrBTrqCmndRev;/* '<S20>/Gain1' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2ReducedPerfTrqFiltd;/* '<S238>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2ReducedPrfmTrq_MtrTrqChk;/* '<S218>/Switch14' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2RegenBrkTotalRequestMax;/* '<S430>/Min1' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2RegenBrkTotalRequestMaxGRD;/* '<S449>/Sum3' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2RegenBrkTotalRequestMin;/* '<S430>/Max1' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2RegenBrkTotalRequestMinGRD;/* '<S450>/Sum3' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2RegenBrkTotalRequest_Lowpass;/* '<S448>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2RgnEstMaxLim;/* '<S430>/Sum2' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2RgnEstMinLim;/* '<S430>/Max2' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2TrqK0;/* '<S18>/Switch2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2TrqPriorOvrSpd;/* '<S189>/Switch3' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2_MtrCmnd_MaxLim_Fltr;/* '<S332>/Switch1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_Lv2_MtrCmnd_MinLim_Fltr;/* '<S333>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MaxLim_Final_Lmt;/* '<S179>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MaxLim_Final_Lmt_Arb;/* '<S165>/Switch9' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MaxLim_LTsh_LSP;/* '<S111>/Sum6' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MaxLim_LTsh_RSP;/* '<S111>/Sum' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MaxLim_RdPrfm_Lmt;/* '<S180>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MaxLim_RdPrfm_Lmt_Arb;/* '<S165>/Switch7' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MinLim_Final_Lmt;/* '<S181>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MinLim_Final_Lmt_Arb;/* '<S165>/Switch10' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MinLim_LTsh_LSP;/* '<S111>/Sum5' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MinLim_LTsh_RSP;/* '<S111>/Sum4' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MinLim_RdPrfm_Lmt;/* '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MinLim_RdPrfm_Lmt_Arb;/* '<S165>/Switch8' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtA_TorqCmnd_NegOnly;/* '<S14>/Gain' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtB_TorqCmnd_NegOnly;/* '<S14>/Gain1' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrAEngTrqCmndArb1;/* '<S36>/Sum3' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrATrqCmndAccuVal;/* '<S298>/Switch1' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrATrqCmndArb;/* '<S43>/Product3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrATrqCmndArb1;/* '<S36>/Product3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrA_EngRltdTrq;/* '<S42>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrA_EngRltdTrq2;/* '<S56>/Product2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrA_EngRltdTrq3;/* '<S42>/Product8' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrA_EngTrq;/* '<S43>/Sum1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrBRltdTrq;/* '<S44>/Sum' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrCmnd_MaxLim_Raw;/* '<S310>/Sum2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrCmnd_MaxLim_RawArb;/* '<S334>/Switch' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrCmnd_MinLim_Raw;/* '<S310>/Sum3' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrCmnd_MinLim_RawArb;/* '<S335>/Switch' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmndFiltd;/* '<S299>/Switch1' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MaxLim;/* '<S330>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MaxLimArb;/* '<S310>/Switch6' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MaxLimDivide;/* '<S307>/Divide4' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MaxLim_Dist_NotNnP;/* '<S307>/Sum12' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MaxLim_Distbased;/* '<S307>/Switch5' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MaxLim_NotNnP;/* '<S310>/Switch3' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MaxLim_SpdBased;/* '<S310>/Switch4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MinLim;/* '<S331>/Vector' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MinLimArb;/* '<S310>/Switch2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqCmnd_MinLim_NotNnP;/* '<S310>/Switch1' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqRateLmt;/* '<S249>/Switch4' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqRateLmtFltrd;/* '<S272>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_MtrTrqRateLmt_VehSpdChng;/* '<S249>/Switch3' */

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_NetMtrATrqCmnd;/* '<S17>/Sum1' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_NetMtrATrqCmnd_Arb;/* '<S20>/Product5' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_NetMtrATrqCmnd_bfWED;/* '<S20>/Switch4' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_NetMtrBTrqCmnd;/* '<S17>/Sum3' */

#endif

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_NetMtrBTrqCmnd_Arb;/* '<S20>/Switch5' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_NetTransTrqCmnd_Arb;/* synthesized block */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_OutputTrqCalc_P1P2_ILE;/* '<S35>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_OutputTrqCalc_P1P2_Raw;/* '<S35>/Sum4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_P2SpdCntrl_MaxTrqLmt;/* '<S337>/Switch9' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_P2SpdCntrl_MinTrqLmt;/* '<S338>/Switch12' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_RearAxleRqBSM_MtrDomain;/* '<S460>/Product12' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_RegenReqArb_Offset;/* '<S343>/Switch4' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_RqInRdPerfmTrqArb;/* '<S223>/Sum1' */

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_RrAxlAdhMax_Mtrbased;/* '<S460>/Product2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_RrAxlAdhMin_Mtrbased;/* '<S460>/Product4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_RrMaxLim;/* '<S460>/Add1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_RrMaxLim_Raw;/* '<S460>/Switch25' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_RrMinLim;/* '<S460>/Add4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_RrMinLim_Raw;/* '<S460>/Switch23' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_StdySt_MtrAEng_Spd;/* '<S43>/Product7' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_StdySt_MtrBSpd;/* '<S44>/Product1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_SumTrqDiff;/* '<S114>/Sum14' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_SumTrqDiff_arb;/* '<S114>/Switch6' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_SumTrqDiff_arb_prev;/* '<S114>/UnitDelay3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_ToFromDmpg;/* '<S16>/Sum2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_ToFromInrta;/* '<S16>/Sum4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_ToFromMtrTrq;/* '<S16>/Sum1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_To_P1P2_AeDiffTrq;/* '<S35>/Sum6' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_TransientTrq_MtrAEng_Accel;/* '<S43>/Product5' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_TransientTrq_MtrBAccel;/* '<S44>/Product' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_TrqDiff_DTRTransTrq;/* '<S114>/Sum13' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_TrqErr;/* '<S189>/Sum1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_TrqErr1;/* '<S189>/Switch1' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_TrqRtLt_CCSpdChng;/* '<S267>/Vector' */
static VAR(float32, STMR_VAR_INIT) VeSTMC_M_TrqRtLt_VehSpdChng;/* '<S268>/Vector' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_UnderShootPrtcn;/* '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_UnderShootPrtcn_Fild;/* '<S354>/Switch9' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_UnfltrdOutputTrqCalc_P1P2;/* '<S35>/Switch2' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_M_UnintAccel_interim;/* '<S307>/Product3' */

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_AxleASR_FA_deb;/* '<S489>/Switch3' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_AxleASR_FA_deb_Rst;/* '<S489>/passDBCparam2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_AxleMSR_FA_deb;/* '<S490>/Switch3' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_AxleMSR_FA_deb_Rst;/* '<S490>/passDBCparam2' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_CCSetSpdChngDtctd;/* '<S249>/Comparison' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_CC_TrqChk_Fail;/* '<S256>/Switch3' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_CalcTTRArb;/* '<S341>/Logical2' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ChangeInCCSetSpeed;/* '<S274>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ChangeInVehSpd;/* '<S249>/Comparison2' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ChangeInVehSpdDueToGrade;/* '<S249>/Logical' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ChngInTrgrtGR_SIP;/* '<S166>/Comparison5' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_CntInitial_Integral;/* '<S114>/MaxLimReached3' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_CntMetEarlyFA;/* '<S114>/MaxLimReached7' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_CrpCntReset;/* '<S168>/Logical4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_CrpOverSpd;/* '<S188>/Logical1' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_CruiseTrqChkFailing;/* '<S245>/Logical3' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_CruiseTrqStepError;/* '<S245>/Comparison1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_DisblRgnMntr;/* '<S14>/Logical2' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_DistMntrTorqNoFaultSet;/* '<S114>/Logical53' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_EarlyFault_Distbased;/* '<S114>/Logical30' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_EnblMtrTrqDeRateMntr;/* '<S246>/Logical' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_EnblRegenMntr_WEDArb;/* '<S14>/Logical1' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ErrorIntegralZeroOrNeg;/* '<S168>/Comparison3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ExtendedShftInProg;/* '<S166>/Comparison1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_FrntMaxASR_FA;/* '<S460>/Switch13' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_FrntMaxASR_Hys_FA;/* '<S461>/Switch1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_FrntMaxMSR_FA;/* '<S460>/Switch17' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_FrntMinMSR_Hys_FA;/* '<S460>/Logical60' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_FrontAxl_Max_BSMRq_R;/* '<S460>/Logical11' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_FrontAxl_Max_BSM_Arb;/* '<S460>/Logical10' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_FrontAxl_Min_BSMRq_R;/* '<S460>/Logical15' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_FrontAxl_Min_BSM_Arb;/* '<S460>/Logical14' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_HardLimitationEbled;/* '<S13>/Logical11' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_HighCmnddTrq;/* '<S189>/Comparison3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_HighrStatetoLockK0;/* '<S36>/Comparison6' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ILEIsLocked;/* '<S34>/Logical1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ILEIsLockedOK;/* '<S34>/Logical2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ILELockSpdMet;/* '<S34>/Logical4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ILELockSpdMetIntrm;/* '<S34>/Comparison10' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ILE_STO_Stat;/* '<S34>/Logical3' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_IdleSpdErrMntrl_final;/* '<S105>/AND' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_IntegralEbl;/* '<S123>/OR1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_IntegrateError;/* '<S168>/Logical' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0ClutchStatusOpen;/* '<S36>/Comparison4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0LockedSt;/* '<S36>/Logical9' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0LockedSt1;/* '<S36>/Comparison1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0LockedSt2;/* '<S36>/Logical7' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0NotSlipping;/* '<S36>/Logical11' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0SlipStat;/* '<S36>/Logical10' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0Sliping;/* '<S36>/Logical5' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0TrqHghtoLock;/* '<S36>/Comparison11' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0_Opn;/* '<S36>/Logical4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_K0_Opn_SpdBased;/* '<S36>/Logical3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_LatchTrqForCheck;/* '<S189>/Logical1' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2CCTrqCmprChkFlt_Rst;/* '<S256>/passDBCparam2' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2EnblPdlMntr_Arb;/* '<S94>/Logical34' */

#if Rte_SysCon_Variant_STMR_FUNC_1

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2FrntLftShaft_DisEn;/* '<S21>/Comparison1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2FrntRtShaft_DisEn;/* '<S21>/Comparison4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2FrntShaft_DisEnAll;/* '<S21>/Logical1' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2MaxLimFail_RedPerf;/* '<S218>/Logical52' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2MinLimFail_RedPerf;/* '<S218>/Logical9' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2MtrTrqCmndChkFailed;/* '<S219>/Logical15' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2ReduPerfMdLtch_MinLim;/* '<S235>/OR1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2ReducedPerfModeLtch;/* '<S234>/OR1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2ReducedPerfMode_MinLim;/* '<S218>/Logical29' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2ReducedPerfMode_MtrTrqChk;/* '<S218>/Logical33' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2ResetbyDMAB;/* '<S95>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2RgnEstRprtFailing;/* '<S436>/Logical1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2TrqDeRateChkFltCCActv;/* '<S290>/OR1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2TrqFaulted_ParkNeutral;/* '<S219>/Logical41' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2TrqPos;/* '<S35>/Comparison1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2WEDSpdNormDisEnbl;/* '<S21>/GreaterThan1' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2WED_ArbEnb;/* synthesized block */

#if Rte_SysCon_Variant_STMR_FUNC_1

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2WED_FrntShaftOpen;/* '<S21>/Logical2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2WED_SpdEqual;/* '<S21>/GreaterThan2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Lv2WED_SpdOpen;/* '<S21>/GreaterThan3' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_MSSLimpActivated;/* '<S13>/Logical8' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_MaxFailing;/* '<S111>/Logical18' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_MaxFailing_arb;/* '<S117>/Logical45' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_MaxLimFail_RedPerf;/* '<S218>/Logical7' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_MaxLimFail_RedPerf_Distbased;/* '<S218>/Logical51' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Max_Lv2ReducedPerfMode;/* '<S218>/Logical26' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_MedLimitationEbled;/* '<S13>/Logical5' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_MntrP2TrqCmndOnly;/* '<S35>/Logical' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_MntrRgnEstEn;/* '<S14>/Logical' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_MntrWindow_within;/* '<S114>/MaxLimReached' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_NoMinLimFail;/* '<S111>/Logical42' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_NoMinMaxError;/* '<S169>/Logical2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_NoMinMaxTrqError;/* '<S113>/Logical4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_NoSIPRisingEdg;/* '<S166>/Logical7' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_OkToDtrmnK0Cls;/* '<S36>/Logical2' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_OutTrqMaxFailDist_final;/* '<S102>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_OutTrqMaxFail_LL_final;/* '<S99>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_OutTrqMaxFail_final;/* '<S100>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_OutTrqMinFail_LL_final;/* '<S103>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_OutTrqMinFail_final;/* '<S104>/AND' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_P2EngDecelCheck;/* '<S35>/Comparison2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_P2NTurbErrorOK;/* '<S339>/Logical47' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_P2NTurbInLim;/* '<S339>/Comparison10' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_P2SpdControl_Req;/* '<S339>/Logical46' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_P2SpdGrtrEngSpd;/* '<S66>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_P2SpdGrtrNTurb;/* '<S35>/Comparison3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_PauseDlyActv;/* '<S169>/Comparison1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RdPerfmMdActv;/* '<S169>/Logical' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RdPrfOutTrqMaxFailDist_final;/* '<S101>/AND' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RdPrfOutTrqMax_Dist;/* '<S114>/Switch9' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RdPrfTorqFltCntActive;/* '<S114>/Logical58' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RdPrfTorqFltCntActive_arb;/* '<S114>/Switch8' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RdPrfTorqFltCnt_CntOn;/* '<S114>/MaxLimReached4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RdPrfTorqFltCnt_NotReset;/* '<S114>/MaxLimReached5' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RdPrfTorqFlt_Latch;/* '<S125>/OR1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RdPrfTorqSumFault_Dist;/* '<S114>/MaxLimReached2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RearAxl_Max_BSMRq_R;/* '<S460>/Logical13' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RearAxl_Max_BSM_Arb;/* '<S460>/Logical12' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RearAxl_Min_BSMRq_R;/* '<S460>/Logical17' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RearAxl_Min_BSM_Arb;/* '<S460>/Logical16' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ResetASR_Debounce;/* '<S460>/Logical20' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ResetDecay;/* '<S342>/Logical2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ResetMSR_Debounce;/* '<S460>/Logical7' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ResetP061BTrqDTC;/* '<S10>/Logical1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ResetSTMRbyMSS;/* '<S13>/Logical9' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ResetTrqErrorIntegrator;/* '<S168>/Logical1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RestCount;/* '<S168>/Logical3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ResumeMainCntr_DlyInActv;/* '<S169>/Comparison' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RrMaxASR_FA;/* '<S460>/Switch14' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RrMaxASR_Hys_FA;/* '<S462>/Switch1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RrMaxMSR_FA;/* '<S460>/Switch27' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RrMinMSR_Hys_FA;/* '<S460>/Logical59' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstCCTrqChkCntr;/* '<S245>/Logical1' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstCntrForMaxLimFail;/* '<S117>/Logical4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstCntrForMaxLimFail_Dist;/* '<S114>/Logical43' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstCntrForMinLimFail;/* '<S153>/Logical1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstCounter;/* '<S166>/Logical2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstLHomVehStpLtch;/* '<S341>/Logical4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstMainIntegral;/* '<S113>/Logical3' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstMinMntrRdPrfmMd;/* '<S153>/Logical31' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstMinMntr_NormalMd;/* '<S153>/Logical47' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstMntrRdPrfmMd;/* '<S111>/Logical21' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstMntr_NormalMd;/* '<S111>/Logical46' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstPauseIntegral;/* '<S169>/Logical1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_RstRdPerfmCount;/* '<S114>/Logical54' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_SIP_ChngInTrgtGr;/* '<S166>/Logical' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_SIP_Tmr_Rst;/* '<S166>/Logical6' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ShiftInProg;/* '<S341>/Comparison1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_ShiftInProg2;/* '<S166>/Comparison2' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_SoftLimitationEbled;/* '<S13>/Logical3' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_SpdErrChngResetdecay;/* '<S342>/Comparison1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_SpdErrFailing;/* '<S167>/Logical2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_SpdErrStallPsbl;/* '<S342>/Logical1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_SpdRising;/* '<S188>/Comparison4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Spdhigh;/* '<S188>/Comparison2' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Stage1RemActionActv;/* '<S219>/Logical11' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Stage2RemActionActv;/* '<S219>/Logical12' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_StopLimitationEbled;/* '<S13>/Logical7' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TMaxMinLimFailing;/* '<S113>/Logical1' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TMinLim_FailingCnfrm;/* '<S111>/Logical24' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TorqSumFault_Dist_Normal;/* '<S114>/Switch11' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TorqSumFault_Distbased;/* '<S114>/MaxLimReached1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TorqSumFault_Distbased_arb;/* '<S114>/Switch13' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TorqSumFault_Distbased_arb2;/* '<S114>/Switch12' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TrqDeRateChkFailed;/* '<S246>/Logical4' */
static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TrqDeRateChkFailed_CC_Dtcd;/* '<S246>/Logical6' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TrqError_Cnfrmd;/* '<S172>/Comparison2' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_TrqNeedEarlyFA;/* '<S114>/MaxLimReached6' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_Trqerr;/* '<S189>/Comparison1' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_UltraHardLimitationEbled;/* '<S13>/Logical6' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_UndrShootPrtctActv;/* '<S342>/Logical39' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_UndrShootPrtctActvDly;/* '<S353>/AND' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_VehInParkNeutralMet;/* '<S307>/Comparison5' */

#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_VehInRev_LashArb;/* '<S20>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_VehStpDtctd;/* '<S341>/Comparison2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_VehStpDtctd_LHom;/* '<S341>/Logical3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMC_b_VehStpDtctd_LHom_Ltch1;/* '<S398>/OR1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(TeDFIB_e_FaultDebounceStatus, STMR_VAR_INIT)
    VeSTMC_e_AxleASR_FA_deb_DBCsts;    /* '<S497>/Switch1' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(TeDFIB_e_FaultDebounceStatus, STMR_VAR_INIT)
    VeSTMC_e_AxleMSR_FA_deb_DBCsts;    /* '<S505>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_e_GearEngd_Float;/* '<S341>/DataTypeConversion2' */

#endif

static VAR(TeDFIB_e_FaultDebounceStatus, STMR_VAR_INIT)
    VeSTMC_e_Lv2CCTrqCmprChkFlt_DBCsts;/* '<S276>/Switch1' */
static VAR(TeDFIB_e_FaultDebounceStatus, STMR_VAR_INIT)
    VeSTMC_e_RgnEstMntrFlt_DBCsts;     /* '<S440>/Switch1' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_e_TargetGr_Float;/* '<S341>/DataTypeConversion1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_k_DrvrDmnd_MaxFCoef;/* '<S343>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_k_DrvrDmnd_MinFCoef;/* '<S343>/Switch2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_l_radius;/* '<S340>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_AvgP2Spd;/* '<S193>/Product2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_EngP2SpdDiff;/* '<S45>/Sum5' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_IdlSpdTrgtArb;/* '<S188>/Min' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_IdleSpdError;/* '<S342>/Sum2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_Lv2AvgWhlFL_RPM;/* '<S21>/Switch10' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_Lv2NoAccel;/* '<S16>/Product8' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_3

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_Lv2NoSpd;/* '<S16>/Product5' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_Lv2WEDSpdDiff_WhlMtr;/* '<S21>/Sum9' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_Lv2WEDSpdDiff_WhlMtr_Abs;/* '<S21>/Abs' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_Lv2WEDSpdDiff_WhlMtr_Filt;/* '<S81>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_Lv2WhlFrnt_Avg;/* '<S21>/Product4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_MtrBEng_SpdDiff;/* '<S36>/Sum1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_P2NTurbError;/* '<S339>/Sum2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_n_P2SpdErrr;/* '<S188>/Sum3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_DecayRate;/* '<S342>/Product' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_Lv2WEDSpdDiff_Norm;/* '<S21>/Switch8' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_Lv2WED_EngMultiply;/* synthesized block */

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_Lv2WED_norm;/* '<S21>/Divide2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_MtrADampingCoeff;/* '<S43>/Product6' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_TTR_Arb_LHom;/* '<S341>/Switch4' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_TTR_Arb_w_LHom;/* '<S341>/Switch2' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_TransTrqRatio_Arb;/* '<S341>/Switch1' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_TransTrqRatio_GrEngd_Raw;/* '<S395>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_TransTrqRatio_LHom;/* '<S341>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_TransTrqRatio_Lmtd;/* '<S341>/Switch10' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_r_TransTrqRatio_TrgtGr_Raw;/* '<S396>/Vector' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_t_PauseTime;/* '<S213>/Switch3' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(float32, STMR_VAR_INIT) VeSTMC_t_ShftInPrg_Tmr1;/* '<S186>/Switch1' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMC_v_Lv2SetSpeed4TrqEst_Mph;/* '<S305>/Product' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_M_EngActStdyStTorq_In;/* '<S534>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_M_Lv2FrntAxlRq;/* '<S530>/Switch8' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_M_Lv2Lv1AeCoastTorqDiff;/* '<S529>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb;/* '<S537>/Switch' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_M_Lv2RegenBrkRearOffsetRequest_Arb;/* '<S537>/Switch2' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_M_Lv2RgnBrkAxlTrqReq;/* '<S537>/Switch3' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_M_Lv2RrAxlRq;/* '<S530>/Switch9' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_4HighActvGd;/* '<S531>/Switch1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_4LowActvGd;/* '<S531>/Switch3' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_4LowActv_CANC;/* '<S531>/Logical2' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_4LowActv_EPT;/* '<S531>/Comparison8' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_4LowCreepActvintm;/* '<S558>/Logical5' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_4highActv_CANC;/* '<S531>/Logical1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_4highActv_CANePT;/* '<S531>/Comparison2' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_AclPdlCheck;/* '<S556>/Comparison14' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_AllModeCreepActv;/* '<S573>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_CreepActvIntm;/* '<S533>/Logical55' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_CreepCnd1;/* '<S562>/Comparison11' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_CreepCnd2;/* '<S562>/Comparison12' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_CreepCnd3;/* '<S562>/Comparison13' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_CreepCnd4;/* '<S556>/Logical9' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_CreepCnd5;/* '<S557>/Logical54' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_CreepSigGood;/* '<S559>/Logical57' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_DisblMntr_EngSpdFA;/* '<S532>/Logical14' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_DisblMntr_MtrABSpdFA;/* '<S532>/Logical15' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_DisblOutTrqMntr;/* '<S532>/Logical27' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_DsblMntr_EngActTrqFA;/* '<S532>/Logical11' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_ETRQ1;/* '<S555>/Comparison18' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_ETRQ2;/* '<S555>/Comparison19' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_ETRQ3;/* '<S555>/Comparison22' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_ETRQ4;/* '<S555>/Comparison20' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_ETRQ_Creep;/* '<S555>/Logical12' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_ETRQ_Creep1;/* '<S555>/Logical14' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_ILEInCreep;/* '<S558>/Comparison5' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_ILEInNeutrl;/* '<S558>/Comparison1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_LimpHomeActv;/* '<S535>/Logical7' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv1ResetDTC;/* '<S535>/Logical2' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2AeCoastReady;/* '<S529>/Logical54' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2FrntAxlMaxRq;/* '<S542>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2FrntAxlMinRq;/* '<S543>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2FrntAxlRq_FA;/* '<S544>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2KeyOff;/* '<S535>/Switch1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2RgnBrkFltd;/* '<S537>/Logical11' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2RrAxlMaxRq;/* '<S545>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2RrAxlMinRq;/* '<S546>/AND' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2RrAxlRq_FA;/* '<S547>/AND' */

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2VehInNeutral;/* '<S585>/Comparison4' */

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2VehInPark;/* '<S585>/Comparison2' */

#endif

static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2VehInParkNeutral;/* synthesized block */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_Lv2VehInRev;/* synthesized block */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_MaxGrCreep;/* '<S557>/Comparison1' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_MinGrCreep;/* '<S557>/Comparison16' */
static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_RevGrCreep;/* '<S557>/Comparison15' */

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_VehInNeutral_CAN;/* '<S584>/Logical5' */

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

static VAR(boolean, STMR_VAR_INIT) VeSTMI_b_VehInPark_CAN;/* '<S584>/Logical4' */

#endif

static VAR(float32, STMR_VAR_INIT) VeSTMI_dn_Eng_Accel;/* '<S624>/LimiterSwitch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_dn_MtrA_Accel;/* '<S622>/LimiterSwitch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_dn_MtrB_Accel;/* '<S623>/LimiterSwitch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_n_Lv2EngSpd;/* '<S621>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_n_Lv2MtrASpd;/* '<S619>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_n_Lv2MtrBSpd;/* '<S620>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_n_Lv2TransOutSpd_Arb;/* '<S538>/Product1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_r_TTRatioNoTF;/* '<S539>/Multiplication1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_r_TTRatioWithTF;/* '<S539>/Multiplication2' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_r_TTRatio_Intm;/* '<S539>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_r_TorqueTransRatio;/* '<S539>/Switch10' */
static VAR(float32, STMR_VAR_INIT) VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc;/* '<S618>/Switch1' */
static VAR(float32, STMR_VAR_INIT) VeSTMR_M_Lv2RegenBrkTotalOffsetRequest;/* '<S14>/Sum11' */
static VAR(boolean, STMR_VAR_INIT) VeSTMR_b_RgnEstMntrFlt_Rst;/* '<S439>/passDBCparam2' */
static VAR(boolean, STMR_VAR_INIT) VeSTMR_b_SetDTC_MtrTrqChkFailed;/* '<S219>/Logical25' */
static VAR(boolean, STMR_VAR_INIT) VeSTMR_b_TrqChkFailed;/* '<S219>/Logical13' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_STMR
#include "MemMap.h"

CONST(ConstB_STMR_ac_T, STMR_VAR_INIT) STMR_ac_ConstB =
{
    CeSTMR_e_NoRdPerfmMdRq,            /* '<S634>/Const12' */
    CeSTMR_e_DrvMdM182_Auto,           /* '<S634>/Const1' */
    CeSTMR_e_BrkStat_NotDtrmnd,        /* '<S634>/Const11' */
    CeDFIB_e_Init,                     /* '<S636>/Constant' */
    CeDFIB_e_Init                      /* '<S635>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_STMR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_STMR
#include "MemMap.h"

CONST(ConstP_STMR_ac_T, STMR_VAR_INIT) STMR_ac_ConstP =
{

#if Rte_SysCon_Variant_STMR_FUNC_4

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S351>/Vector'
     */
    {
        4U, 6U
    },

#endif

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S267>/Vector'
     *   '<S268>/Vector'
     */
    {
        13U, 8U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_STMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STMR
#include "MemMap.h"

VAR(B_STMR_ac_T, STMR_VAR_INIT) STMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STMR
#include "MemMap.h"

VAR(DW_STMR_ac_T, STMR_VAR_INIT) STMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STMR
#include "MemMap.h"

static FUNC(void, STMR_CODE_LOCAL) STMR_ac_MntrRgnTrq(void);

/* Forward declaration for local functions */
static uint8 STMR__safe_cast_to_TeSTMR_e_Lv2PRND_Stat(uint8 input);

/* Output and update for atomic system: '<S3>/MntrRgnTrq' */
static FUNC(void, STMR_CODE_LOCAL) STMR_ac_MntrRgnTrq(void)
{
    float32 rtb_Abs;
    float32 rtb_Min;
    float32 rtb_Sum2_n;
    float32 rtb_VeSTMC_M_Lv2RegenBrkTotalRequest_Arb;
    uint8 rtb_Inc_Cntr;
    boolean rtb_AND;
    boolean rtb_Compare;

    /* Inport: '<Root>/VeRGNR_M_EstRegenAchvdAxleTorq_Rear' */
    (void)Rte_Read_VeRGNR_M_EstRegenAchvdAxleTorq_Rear_Value
        (&rtb_VeSTMC_M_Lv2RegenBrkTotalRequest_Arb);

    /* Inport: '<Root>/VeRGNR_M_EstRegenAchvdAxleTorq_Frnt' */
    (void)Rte_Read_VeRGNR_M_EstRegenAchvdAxleTorq_Frnt_Value(&rtb_Abs);

    /* Inport: '<Root>/VeLTIR_b_Lv2BrkTravelSts_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2BrkTravelSts_FA_Value(&rtb_Compare);

    /* Inport: '<Root>/VeRGNR_M_EstRegenBrkAxTorq' */
    (void)Rte_Read_VeRGNR_M_EstRegenBrkAxTorq_Value
        ((&(VeSTMC_M_Lv1EstRgnBrkAxlTrqArb)));

    /* Sum: '<S14>/Sum1' incorporates:
     *  Product: '<S14>/Product'
     */
    VeSTMC_M_Lv1EstRgnBrkAxlTrq_TwoSig = (VeSTMC_r_Lv2WED_EngMultiply * rtb_Abs)
        + rtb_VeSTMC_M_Lv2RegenBrkTotalRequest_Arb;

    /* Gain: '<S14>/Gain' incorporates:
     *  Abs: '<S14>/Abs1'
     *  Sum: '<S14>/Sum3'
     */
    VeSTMC_M_MtA_TorqCmnd_NegOnly =
        (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA - fabsf
         (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA)) * 0.5F;

    /* Gain: '<S14>/Gain1' incorporates:
     *  Abs: '<S14>/Abs2'
     *  Sum: '<S14>/Sum4'
     */
    VeSTMC_M_MtB_TorqCmnd_NegOnly =
        (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB - fabsf
         (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB)) * 0.5F;

    /* Product: '<S14>/Divide' incorporates:
     *  Constant: '<S435>/Calib'
     *  Product: '<S14>/Product1'
     *  Sum: '<S14>/Sum2'
     */
    VeSTMC_M_Lv1EstRgnBrkAxlTrq_SingleSig = ((VeSTMC_r_Lv2WED_EngMultiply *
        VeSTMC_M_MtA_TorqCmnd_NegOnly) + VeSTMC_M_MtB_TorqCmnd_NegOnly) *
        KeSTMR_r_FDRratioRegen;

    /* Switch: '<S14>/Switch2' incorporates:
     *  Constant: '<S434>/Calib'
     */
    if (KeSTMR_b_UseRegenOffset)
    {
        /* Switch: '<S14>/Switch2' */
        VeSTMC_M_Lv1EstRgnBrkAxlTrqWEDArb = VeSTMC_M_Lv1EstRgnBrkAxlTrq_TwoSig;
    }
    else
    {
        /* Switch: '<S14>/Switch2' */
        VeSTMC_M_Lv1EstRgnBrkAxlTrqWEDArb =
            VeSTMC_M_Lv1EstRgnBrkAxlTrq_SingleSig;
    }

    /* End of Switch: '<S14>/Switch2' */

    /* Abs: '<S14>/Abs' */
    VeSTMC_M_Lv1EstRgnBrkAxlTrqWEDArb_Abs = fabsf
        (VeSTMC_M_Lv1EstRgnBrkAxlTrqWEDArb);

    /* Logic: '<S14>/Logical1' incorporates:
     *  Constant: '<S433>/Calib'
     *  Logic: '<S14>/Logical4'
     */
    VeSTMC_b_EnblRegenMntr_WEDArb = ((KeSTMR_b_UseRegenMntr_withWED) &&
        (!VeSTMC_b_Lv2WED_ArbEnb));

    /* Switch: '<S14>/Switch1' */
    if (VeSTMC_b_EnblRegenMntr_WEDArb)
    {
        /* Switch: '<S14>/Switch1' incorporates:
         *  Inport: '<Root>/VeRGNR_M_EstRegenBrkAxTorq'
         */
        VeSTMC_M_Lv1EstRgnBrkAxlTrqArb = VeSTMC_M_Lv1EstRgnBrkAxlTrqWEDArb_Abs;
    }

    /* End of Switch: '<S14>/Switch1' */

    /* Sum: '<S14>/Sum11' */
    VeSTMR_M_Lv2RegenBrkTotalOffsetRequest =
        VeSTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb +
        VeSTMI_M_Lv2RegenBrkRearOffsetRequest_Arb;

    /* Switch: '<S14>/Switch12' incorporates:
     *  Constant: '<S434>/Calib'
     */
    if (KeSTMR_b_UseRegenOffset)
    {
        /* Switch: '<S14>/Switch12' */
        rtb_VeSTMC_M_Lv2RegenBrkTotalRequest_Arb =
            VeSTMR_M_Lv2RegenBrkTotalOffsetRequest;
    }
    else
    {
        /* Switch: '<S14>/Switch12' */
        rtb_VeSTMC_M_Lv2RegenBrkTotalRequest_Arb = VeSTMI_M_Lv2RgnBrkAxlTrqReq;
    }

    /* End of Switch: '<S14>/Switch12' */

    /* Abs: '<S430>/Abs' */
    rtb_Abs = fabsf(rtb_VeSTMC_M_Lv2RegenBrkTotalRequest_Arb);

    /* Outputs for Atomic SubSystem: '<S430>/DigitalLowpassResetEnabled' */
    /* Switch: '<S448>/Switch1' incorporates:
     *  Constant: '<S457>/Calib'
     *  Product: '<S448>/Multiplication'
     *  Sum: '<S448>/Subtraction'
     *  Sum: '<S448>/Summation'
     *  UnitDelay: '<S448>/Unit Delay'
     */
    VeSTMC_M_Lv2RegenBrkTotalRequest_Lowpass = ((rtb_Abs -
        VeSTMC_M_Lv2RegenBrkTotalRequest_Lowpass) *
        KeSTMR_k_Lv2_RgnBrkAxlTrqReqLowCoeff) +
        VeSTMC_M_Lv2RegenBrkTotalRequest_Lowpass;

    /* End of Outputs for SubSystem: '<S430>/DigitalLowpassResetEnabled' */

    /* MinMax: '<S430>/Min' */
    rtb_Min = fminf(rtb_Abs, VeSTMC_M_Lv2RegenBrkTotalRequest_Lowpass);

    /* Outputs for Atomic SubSystem: '<S430>/GradientLimiter1' */
    /* Sum: '<S449>/Sum2' incorporates:
     *  UnitDelay: '<S449>/UnitDelay'
     */
    rtb_Sum2_n = rtb_Min - VeSTMC_M_Lv2RegenBrkTotalRequestMaxGRD;

    /* Outputs for Atomic SubSystem: '<S449>/Limiter' */
    /* Switch: '<S458>/Switch1' incorporates:
     *  Constant: '<S456>/Calib'
     *  RelationalOperator: '<S458>/RelationalOperator'
     */
    if (KeSTMR_M_RgnTrqMntrMin_GRD_LU < rtb_Sum2_n)
    {
        /* UnitDelay: '<S450>/UnitDelay' */
        rtb_Sum2_n = KeSTMR_M_RgnTrqMntrMin_GRD_LU;
    }

    /* End of Switch: '<S458>/Switch1' */

    /* Switch: '<S458>/Switch' incorporates:
     *  Constant: '<S455>/Calib'
     *  RelationalOperator: '<S458>/RelationalOperator1'
     */
    if (rtb_Sum2_n <= KeSTMR_M_RgnTrqMntrMin_GRD_LD)
    {
        rtb_Sum2_n = KeSTMR_M_RgnTrqMntrMin_GRD_LD;
    }

    /* End of Switch: '<S458>/Switch' */
    /* End of Outputs for SubSystem: '<S449>/Limiter' */

    /* Sum: '<S449>/Sum3' incorporates:
     *  UnitDelay: '<S449>/UnitDelay'
     */
    VeSTMC_M_Lv2RegenBrkTotalRequestMaxGRD = rtb_Sum2_n +
        VeSTMC_M_Lv2RegenBrkTotalRequestMaxGRD;

    /* End of Outputs for SubSystem: '<S430>/GradientLimiter1' */

    /* MinMax: '<S430>/Min1' */
    VeSTMC_M_Lv2RegenBrkTotalRequestMax = fminf
        (VeSTMC_M_Lv2RegenBrkTotalRequestMaxGRD, rtb_Min);

    /* MinMax: '<S430>/Max2' incorporates:
     *  Constant: '<S430>/ConstantValue6'
     *  Constant: '<S452>/Calib'
     *  Sum: '<S430>/Sum3'
     */
    VeSTMC_M_Lv2RgnEstMinLim = fmaxf(VeSTMC_M_Lv2RegenBrkTotalRequestMax -
        KeSTMR_M_RgnTolMin, -10.0F);

    /* MinMax: '<S430>/Max' */
    rtb_Abs = fmaxf(VeSTMC_M_Lv2RegenBrkTotalRequest_Lowpass, rtb_Abs);

    /* Outputs for Atomic SubSystem: '<S430>/GradientLimiter2' */
    /* Sum: '<S450>/Sum2' incorporates:
     *  UnitDelay: '<S450>/UnitDelay'
     */
    rtb_Min = rtb_Abs - VeSTMC_M_Lv2RegenBrkTotalRequestMinGRD;

    /* Outputs for Atomic SubSystem: '<S450>/Limiter' */
    /* Switch: '<S459>/Switch1' incorporates:
     *  Constant: '<S454>/Calib'
     *  RelationalOperator: '<S459>/RelationalOperator'
     */
    if (KeSTMR_M_RgnTrqMntrMax_GRD_LU < rtb_Min)
    {
        /* Switch: '<S459>/Switch1' */
        rtb_Min = KeSTMR_M_RgnTrqMntrMax_GRD_LU;
    }

    /* End of Switch: '<S459>/Switch1' */

    /* Switch: '<S459>/Switch' incorporates:
     *  Constant: '<S453>/Calib'
     *  RelationalOperator: '<S459>/RelationalOperator1'
     */
    if (rtb_Min <= KeSTMR_M_RgnTrqMntrMax_GRD_LD)
    {
        rtb_Min = KeSTMR_M_RgnTrqMntrMax_GRD_LD;
    }

    /* End of Switch: '<S459>/Switch' */
    /* End of Outputs for SubSystem: '<S450>/Limiter' */

    /* Sum: '<S450>/Sum3' incorporates:
     *  UnitDelay: '<S450>/UnitDelay'
     */
    VeSTMC_M_Lv2RegenBrkTotalRequestMinGRD = rtb_Min +
        VeSTMC_M_Lv2RegenBrkTotalRequestMinGRD;

    /* End of Outputs for SubSystem: '<S430>/GradientLimiter2' */

    /* MinMax: '<S430>/Max1' */
    VeSTMC_M_Lv2RegenBrkTotalRequestMin = fmaxf
        (VeSTMC_M_Lv2RegenBrkTotalRequestMinGRD, rtb_Abs);

    /* Sum: '<S430>/Sum2' incorporates:
     *  Constant: '<S451>/Calib'
     */
    VeSTMC_M_Lv2RgnEstMaxLim = KeSTMR_M_RgnTol +
        VeSTMC_M_Lv2RegenBrkTotalRequestMin;

    /* Logic: '<S14>/Logical' incorporates:
     *  Constant: '<S431>/Calib'
     *  Constant: '<S432>/Calib'
     *  RelationalOperator: '<S14>/Comparison2'
     */
    VeSTMC_b_MntrRgnEstEn = ((rtb_VeSTMC_M_Lv2RegenBrkTotalRequest_Arb >
        KeSTMR_M_RgnReqMin) && (KeSTMR_b_Enbl_RegenMntr));

    /* Logic: '<S14>/Logical2' */
    VeSTMC_b_DisblRgnMntr = (((VeSTMI_b_Lv2RgnBrkFltd) || rtb_Compare) ||
        (VeSTMC_b_ResetSTMRbyMSS));

    /* Outputs for Atomic SubSystem: '<S14>/CheckRegenEstimate' */
    /* Outputs for Atomic SubSystem: '<S429>/Check_Rgn_Est_Trq' */
    /* Logic: '<S436>/Logical1' incorporates:
     *  Logic: '<S436>/Logical2'
     *  Logic: '<S436>/Logical4'
     *  RelationalOperator: '<S436>/Comparison3'
     *  RelationalOperator: '<S436>/Comparison4'
     */
    VeSTMC_b_Lv2RgnEstRprtFailing = ((((VeSTMC_b_MntrRgnEstEn) &&
        ((VeSTMC_M_Lv2RgnEstMaxLim < VeSTMC_M_Lv1EstRgnBrkAxlTrqArb) ||
         (VeSTMC_M_Lv1EstRgnBrkAxlTrqArb < VeSTMC_M_Lv2RgnEstMinLim))) &&
        (!VeSTMC_b_DisblRgnMntr)) && (VeSTMI_b_Lv2AeCoastReady));

    /* End of Outputs for SubSystem: '<S429>/Check_Rgn_Est_Trq' */

    /* Switch: '<S439>/dec_if_Ok_else_inc' incorporates:
     *  MinMax: '<S439>/FixPtMinax'
     *  UnitDelay: '<S439>/UnitDelay'
     */
    if (VeSTMC_b_Lv2RgnEstRprtFailing)
    {
        /* Sum: '<S439>/Inc_Cntr' incorporates:
         *  Constant: '<S437>/Calib'
         *  UnitDelay: '<S439>/UnitDelay'
         */
        rtb_Inc_Cntr = (uint8)(((uint32)VeSTMC_Cnt_RgnEstMntrFlt) + ((uint32)
                                KeSTMR_Cnt_RgnEstFailCntrInc));

        /* Switch: '<S439>/Switch1' incorporates:
         *  RelationalOperator: '<S439>/Relational_Operator'
         *  UnitDelay: '<S439>/UnitDelay'
         */
        if (rtb_Inc_Cntr < VeSTMC_Cnt_RgnEstMntrFlt)
        {
            /* Switch: '<S439>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S439>/CounterMax'
             */
            rtb_Inc_Cntr = MAX_uint8_T;
        }

        /* End of Switch: '<S439>/Switch1' */
    }
    else
    {
        if (((sint32)VeSTMC_Cnt_RgnEstMntrFlt) <= 1)
        {
            /* MinMax: '<S439>/FixPtMinax' */
            VeSTMC_Cnt_RgnEstMntrFlt = 1U;
        }

        /* Switch: '<S439>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S429>/FixedDecrement'
         *  Sum: '<S439>/Dec_Cntr'
         */
        rtb_Inc_Cntr = (uint8)((sint32)(((sint32)VeSTMC_Cnt_RgnEstMntrFlt) - 1));
    }

    /* End of Switch: '<S439>/dec_if_Ok_else_inc' */

    /* RelationalOperator: '<S445>/Compare' incorporates:
     *  Constant: '<S445>/Constant'
     *  S-Function (sfix_bitop): '<S439>/Bit6'
     */
    rtb_Compare = ((((uint32)STMR_ac_B.TmpSignalConversionAtVeDMAB_y_StatusByte)
                    & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S439>/EdgeFalling' */
    /* Logic: '<S441>/AND' incorporates:
     *  Logic: '<S441>/OR1'
     *  UnitDelay: '<S441>/Unit Delay'
     */
    rtb_AND = ((!rtb_Compare) && (STMR_ac_DW.UnitDelay_DSTATE_al));

    /* Update for UnitDelay: '<S441>/Unit Delay' */
    STMR_ac_DW.UnitDelay_DSTATE_al = rtb_Compare;

    /* End of Outputs for SubSystem: '<S439>/EdgeFalling' */

    /* Logic: '<S439>/passDBCparam2' */
    VeSTMR_b_RgnEstMntrFlt_Rst = ((VeSTMI_b_Lv1ResetDTC) || rtb_AND);

    /* Switch: '<S439>/Switch2' incorporates:
     *  Constant: '<S438>/Calib'
     *  Constant: '<S439>/ResetZero1'
     *  Logic: '<S439>/Cntr_fail'
     *  RelationalOperator: '<S439>/Enough_counts_to_Fail'
     *  Switch: '<S439>/Switch3'
     *  Switch: '<S440>/Switch1'
     *  UnitDelay: '<S439>/UnitDelay1'
     */
    if (VeSTMR_b_RgnEstMntrFlt_Rst)
    {
        /* MinMax: '<S439>/FixPtMinax' incorporates:
         *  Constant: '<S439>/ResetZero'
         *  Switch: '<S439>/Switch2'
         */
        VeSTMC_Cnt_RgnEstMntrFlt = 0U;
        STMR_ac_DW.UnitDelay1_DSTATE_c = false;

        /* Switch: '<S440>/Switch1' incorporates:
         *  Constant: '<S439>/ResetZero1'
         *  Constant: '<S443>/Constant'
         *  UnitDelay: '<S439>/UnitDelay1'
         */
        VeSTMC_e_RgnEstMntrFlt_DBCsts = CeDFIB_e_Init;
    }
    else
    {
        /* MinMax: '<S439>/FixPtMinax' incorporates:
         *  Switch: '<S439>/Switch2'
         */
        VeSTMC_Cnt_RgnEstMntrFlt = rtb_Inc_Cntr;
        STMR_ac_DW.UnitDelay1_DSTATE_c = ((rtb_Inc_Cntr >=
            KeSTMR_Cnt_RgnEstFailCntrLim) || (STMR_ac_DW.UnitDelay1_DSTATE_c));

        /* Switch: '<S440>/Switch2' incorporates:
         *  Constant: '<S438>/Calib'
         *  Constant: '<S446>/Constant'
         *  Logic: '<S439>/Cntr_fail'
         *  RelationalOperator: '<S439>/Enough_counts_to_Fail'
         *  RelationalOperator: '<S446>/Compare'
         *  Switch: '<S440>/Switch3'
         *  UnitDelay: '<S439>/UnitDelay1'
         */
        if (STMR_ac_DW.UnitDelay1_DSTATE_c)
        {
            /* Switch: '<S440>/Switch1' incorporates:
             *  Constant: '<S442>/Constant'
             *  Switch: '<S440>/Switch2'
             */
            VeSTMC_e_RgnEstMntrFlt_DBCsts = CeDFIB_e_Fail;
        }
        else if (((sint32)VeSTMC_Cnt_RgnEstMntrFlt) == 0)
        {
            /* Switch: '<S440>/Switch3' incorporates:
             *  Constant: '<S444>/Constant'
             *  Switch: '<S440>/Switch1'
             */
            VeSTMC_e_RgnEstMntrFlt_DBCsts = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S440>/Switch1' incorporates:
             *  Switch: '<S440>/Switch3'
             *  UnitDelay: '<S440>/UnitDelay'
             */
            VeSTMC_e_RgnEstMntrFlt_DBCsts = STMR_ac_DW.UnitDelay_DSTATE_ip;
        }

        /* End of Switch: '<S440>/Switch2' */
    }

    /* End of Switch: '<S439>/Switch2' */

    /* Update for UnitDelay: '<S440>/UnitDelay' incorporates:
     *  DataTypeConversion: '<S440>/UNIT8'
     *  Switch: '<S440>/Switch1'
     */
    STMR_ac_DW.UnitDelay_DSTATE_ip = (uint8)VeSTMC_e_RgnEstMntrFlt_DBCsts;

    /* End of Outputs for SubSystem: '<S14>/CheckRegenEstimate' */
}

static uint8 STMR__safe_cast_to_TeSTMR_e_Lv2PRND_Stat(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeSTMR_e_Lv2PRND_Stat (CeSTMR_e_LVR_P) */
    y = 0U;
    if (((((sint32)input) <= 2) || ((((sint32)input) >= 4) && (((sint32)input) <=
           5))) || (((sint32)input) == 7))
    {
        /* Set output value to input value if it is a member of TeSTMR_e_Lv2PRND_Stat */
        y = input;
    }

    return y;
}

/* Model step function for TID1 */
FUNC(void, STMR_CODE) STMR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;

#if !Rte_SysCon_Variant_STMR_FUNC_4

    TeGSMR_e_Lv2PRND_Position tmpRead_3;

#endif

    float32 tmpRead_i;
    float32 tmpRead_j;
    float32 tmpRead_k;
    float32 tmpRead_l;
    float32 tmpRead_n;
    TeLTIR_e_KeySts tmpRead_8;
    TeSTMR_e_Lv2BrkPdlStat tmpRead_g;
    TeSTMR_e_Lv2M182DrvMd tmpRead_h;
    uint8 tmpRead_5;
    boolean tmpRead_4;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_b;
    boolean tmpRead_c;
    boolean tmpRead_d;
    boolean tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_m;

#if Rte_SysCon_Variant_STMR_FUNC_1

    TeSTMR_e_WED_ShaftStatus tmpRead_o;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

    TeSTMR_e_WED_ShaftStatus tmpRead_p;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

    boolean tmpRead_q;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

    boolean tmpRead_r;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    float32 tmpRead_s;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    float32 tmpRead_t;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    float32 tmpRead_u;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    float32 tmpRead_v;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    float32 tmpRead_w;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    float32 tmpRead_x;

#endif

    boolean tmpRead_10;
    boolean tmpRead_11;
    boolean tmpRead_y;
    boolean tmpRead_z;

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_12;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_13;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_14;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_15;

#endif

    boolean tmpRead_16;

#if Rte_SysCon_Variant_STMR_FUNC_4

    uint8 tmpRead_17;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    uint8 tmpRead_18;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_19;

#endif

    float32 tmpRead_1a;
    uint8 tmpRead_1f;
    boolean tmpRead_1b;
    boolean tmpRead_1c;
    boolean tmpRead_1d;
    boolean tmpRead_1e;
    boolean tmpRead_1g;

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_1h;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_1i;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_1j;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    uint8 tmpRead_1k;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_1l;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean tmpRead_1m;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    float32 tmpRead_1n;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

    float32 tmpRead_1o;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

    float32 tmpRead_1p;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

    boolean tmpRead_1q;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

    TeADAR_e_ActuationStatus tmpRead_1r;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

    TeADAR_e_ActuationStatus tmpRead_1s;

#endif

    float32 rtb_Switch3_k;
    float32 rtb_Switch5_l;
    float32 rtb_Switch6_f;
    float32 rtb_TmpSignalConversionAtVeSSMR_n_EngSpd;
    float32 rtb_TmpSignalConversionAtVeSSMR_n_MtrASp;
    float32 rtb_TmpSignalConversionAtVeSSMR_n_MtrBSp;
    float32 rtb_TmpSignalConversionAtVeSSMR_n_TurbSp;
    float32 rtb_TmpSignalConversionAtVeSSMR_v_VehSpd;
    uint8 rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea;
    uint8 rtb_TmpSignalConversionAtVeSCMR_e_Lv2T_n;
    uint8 rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca;
    uint8 rtb_TmpSignalConversionAtVeSCMR_e_SumFWI;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_EngAct;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea;
    boolean rtb_TmpSignalConversionAtVeSSMR_b_EngSpd;
    boolean rtb_TmpSignalConversionAtVeSSMR_b_MtrBSp;
    boolean rtb_TmpSignalConversionAtVeSSMR_b_VehSpd;
    boolean rtb_VeSTMI_b_Lv2RgnBrkAxlTrqReq_Fltd;
    boolean rtb_VeSTMI_b_Lv2RgnBrkFront_Fltd;
    boolean rtb_VeSTMI_b_Lv2RgnBrkRear_Fltd;

#if Rte_SysCon_Variant_STMR_FUNC_4

    uint8 rtb_TmpSignalConversionAtVeSCMR_e_Lv2K0C;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

    boolean rtb_VeSTMC_b_Lv2WED_Faulted;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    float32 rtb_TmpSignalConversionAtVeOHSR_n_IdleSp;

#endif

    float32 rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri;

#if Rte_SysCon_Variant_STMR_FUNC_4

    uint8 rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tar;

#endif

    boolean rtb_AND;
    boolean rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1;
    boolean rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb;

#if !(!Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_4

    float32 rtb_UnitDelay1_fe;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_1

    uint8 rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    float32 rtb_UnitDelay_ix;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    float32 rtb_UnitDelay1_j1;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    float32 rtb_UnitDelay_hs;

#endif

#if Rte_SysCon_Variant_STMR_FUNC_4

    float32 rtb_UnitDelay1_mw;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

    boolean rtb_UnitDelay3_p;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

    boolean rtb_UnitDelay3_j;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

    boolean rtb_VeSTMC_b_ResumeMCntr;

#endif

#if !Rte_SysCon_Variant_STMR_FUNC_4

    boolean rtb_VeSTMC_b_Min_ResumeMCntr;

#endif

    float32 rtb_TmpSignalConversionAtVeDTMR_M_Lv2Axl;
    boolean rtb_AND_dc;
    boolean rtb_AND_ow;
    boolean rtb_Compare;
    boolean rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE;
    boolean rtb_TmpSignalConversionAtVeDTMR_b_VehIn_;
    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2Frn;
    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2Tca;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Torque;

#if Rte_SysCon_Variant_STMR_FUNC_4

    boolean rtb_TmpSignalConversionAtVeSCMR_b_PRND_D;

#endif

#if !(!Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_4

    uint8 rtb_VeSTMC_Cnt_SpdErrMntrFlt_inc_cntr;

#endif

    TeOHSR_e_VLE_DriveStat rtb_TmpSignalConversionAtVeOHSR_e_ILESta;
    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2F_p;
    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2R_o;

#if !Rte_SysCon_Variant_STMR_FUNC_1

    TeSRMR_e_LimitationMd rtb_TmpSignalConversionAtVeSRMR_e_Limita;

#endif

    TeSTMR_e_RdPrfmMd_MinMax VeSTMC_e_Lv2RdPerfMinMax;
    boolean rtb_VariantMerge_For_Variant_Source_V__0;
    boolean rtb_VariantMerge_For_Variant_Source_V__1;
    boolean rtb_VariantMerge_For_Variant_Source_V__2;
    boolean rtb_VariantMerge_For_Variant_Source_V__3;
    boolean rtb_VariantMerge_For_Variant_Source_V__4;

#if Rte_SysCon_Variant_STMR_FUNC_4

    TeSTMR_e_Lv2PRND_Stat VeSTMI_b_VehInPark_CAN_tmp;

#endif

    uint32 rtb_Compare_iy_tmp;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/STMR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeSCMR_M_Lv2RegenBrkFrontOffsetRequest' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2RegenBrkFrontOffsetRequest'
     */
    (void)Rte_Read_VeSCMR_M_Lv2RegenBrkFrontOffsetRequest_Value
        ((&(VeSTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb)));

    /* SignalConversion generated from: '<S1>/VeSCMR_M_Lv2RegenBrkRearOffsetRequest' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2RegenBrkRearOffsetRequest'
     */
    (void)Rte_Read_VeSCMR_M_Lv2RegenBrkRearOffsetRequest_Value
        ((&(VeSTMI_M_Lv2RegenBrkRearOffsetRequest_Arb)));

    /* SignalConversion generated from: '<S1>/VeSSMR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeSSMR_v_VehSpd'
     */
    (void)Rte_Read_VeSSMR_v_VehSpd_Value
        (&rtb_TmpSignalConversionAtVeSSMR_v_VehSpd);

    /* SignalConversion generated from: '<S1>/VeSCMR_M_Lv2RgnBrkAxTrqReq' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2RgnBrkAxTrqReq'
     */
    (void)Rte_Read_VeSCMR_M_Lv2RgnBrkAxTrqReq_Value
        ((&(VeSTMI_M_Lv2RgnBrkAxlTrqReq)));

    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2FrntAxlRq_BSM_FA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2FrntAxlRq_BSM_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2FrntAxlRq_BSM_FA_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2Frn);

    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2RrAxlRq_BSM_FA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2RrAxlRq_BSM_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2RrAxlRq_BSM_FA_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA);

    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2FrntAxlRqCANC2_BSM_FA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2FrntAxlRqCANC2_BSM_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2FrntAxlRqCANC2_BSM_FA_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2F_p);

    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2RrAxlRqCANC2_BSM_FA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2RrAxlRqCANC2_BSM_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2RrAxlRqCANC2_BSM_FA_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2R_o);

    /* SignalConversion generated from: '<S1>/VeSSMR_n_MtrASpd' incorporates:
     *  Inport: '<Root>/VeSSMR_n_MtrASpd'
     */
    (void)Rte_Read_VeSSMR_n_MtrASpd_Value
        (&rtb_TmpSignalConversionAtVeSSMR_n_MtrASp);

    /* SignalConversion generated from: '<S1>/VeSSMR_n_MtrBSpd' incorporates:
     *  Inport: '<Root>/VeSSMR_n_MtrBSpd'
     */
    (void)Rte_Read_VeSSMR_n_MtrBSpd_Value
        (&rtb_TmpSignalConversionAtVeSSMR_n_MtrBSp);

    /* SignalConversion generated from: '<S1>/VeSSMR_n_EngSpd' incorporates:
     *  Inport: '<Root>/VeSSMR_n_EngSpd'
     */
    (void)Rte_Read_VeSSMR_n_EngSpd_Value
        (&rtb_TmpSignalConversionAtVeSSMR_n_EngSpd);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_EngActStdyStTorqFA' incorporates:
     *  Inport: '<Root>/VeSCMR_b_EngActStdyStTorqFA'
     */
    (void)Rte_Read_VeSCMR_b_EngActStdyStTorqFA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_EngAct);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_PRND_Disp_FA' */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* SignalConversion generated from: '<S1>/VeSCMR_b_PRND_Disp_FA' incorporates:
     *  Inport: '<Root>/VeSCMR_b_PRND_Disp_FA'
     */
    (void)Rte_Read_VeSCMR_b_PRND_Disp_FA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_PRND_D);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSCMR_b_PRND_Disp_FA' */

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2TcaseRange_Stat' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2TcaseRange_Stat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2TcaseRange_Stat_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2TcaseRange_StatFA' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2TcaseRange_StatFA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2TcaseRange_StatFA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2Tca);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2Tcase_StatCANC' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2Tcase_StatCANC'
     */
    (void)Rte_Read_VeSCMR_e_Lv2Tcase_StatCANC_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2T_n);

    /* SignalConversion generated from: '<S1>/VeSSMR_n_TurbSpd' incorporates:
     *  Inport: '<Root>/VeSSMR_n_TurbSpd'
     */
    (void)Rte_Read_VeSSMR_n_TurbSpd_Value
        (&rtb_TmpSignalConversionAtVeSSMR_n_TurbSp);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2GearEngaged' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2GearEngaged'
     */
    (void)Rte_Read_VeSCMR_e_Lv2GearEngaged_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea);

    /* SignalConversion generated from: '<S1>/VeSSMR_b_VehSpdFA' incorporates:
     *  Inport: '<Root>/VeSSMR_b_VehSpdFA'
     */
    (void)Rte_Read_VeSSMR_b_VehSpdFA_Value
        (&rtb_TmpSignalConversionAtVeSSMR_b_VehSpd);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2GearEngaged_FA' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2GearEngaged_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2GearEngaged_FA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_SumFWIDFst' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2SumFWIDFst'
     */
    (void)Rte_Read_VeSCMR_e_Lv2SumFWIDFst_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_SumFWI);

    /* SignalConversion generated from: '<S1>/VeOHSR_e_ILEState' incorporates:
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     */
    (void)Rte_Read_VeOHSR_e_ILEState_Value
        (&rtb_TmpSignalConversionAtVeOHSR_e_ILESta);

    /* SignalConversion generated from: '<S1>/VeSSMR_b_EngSpdFA' incorporates:
     *  Inport: '<Root>/VeSSMR_b_EngSpdFA'
     */
    (void)Rte_Read_VeSSMR_b_EngSpdFA_Value
        (&rtb_TmpSignalConversionAtVeSSMR_b_EngSpd);

    /* SignalConversion generated from: '<S1>/VeSSMR_b_MtrBSpdFA' incorporates:
     *  Inport: '<Root>/VeSSMR_b_MtrBSpdFA'
     */
    (void)Rte_Read_VeSSMR_b_MtrBSpdFA_Value
        (&rtb_TmpSignalConversionAtVeSSMR_b_MtrBSp);

    /* SignalConversion generated from: '<S1>/VeATRR_b_Lv2Lv1ASL_Active' incorporates:
     *  Inport: '<Root>/VeATRR_b_ASL_Active'
     */
    (void)Rte_Read_VeATRR_b_ASL_Active_Value
        (&rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1);

    /* SignalConversion generated from: '<S1>/VeCSMR_b_Lv2CCEngaged' incorporates:
     *  Inport: '<Root>/VeCSMR_b_Lv2CCEngaged'
     */
    (void)Rte_Read_VeCSMR_b_Lv2CCEngaged_Value
        (&rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Lv2Lv1MtrA_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeLTIR_M_Lv2MtrA_TrqCmnd'
     */
    (void)Rte_Read_VeLTIR_M_Lv2MtrA_TrqCmnd_Value
        (&STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Lv2Lv1MtrB_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrB_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrB_TorqCmnd_Value
        (&STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB);

    /* SignalConversion generated from: '<S1>/VeDTMR_M_Lv2AxlTrqReq' incorporates:
     *  Inport: '<Root>/VeDTMR_M_Lv2AxlTrqReq'
     */
    (void)Rte_Read_VeDTMR_M_Lv2AxlTrqReq_Value
        (&rtb_TmpSignalConversionAtVeDTMR_M_Lv2Axl);

    /* SignalConversion generated from: '<S1>/VeDTMR_b_Lv2DsblAccelPdlRelatedMntr' incorporates:
     *  Inport: '<Root>/VeDTMR_b_Lv2DsblAccelPdlRelatedMntr'
     */
    (void)Rte_Read_VeDTMR_b_Lv2DsblAccelPdlRelatedMntr_Value
        (&rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb);

    /* SignalConversion generated from: '<S1>/VeDTMR_M_Lv2DriverTorqueReqstSTMR' incorporates:
     *  Inport: '<Root>/VeDTMR_M_Lv2DriverTorqueReqstSTMR'
     */
    (void)Rte_Read_VeDTMR_M_Lv2DriverTorqueReqstSTMR_Value
        (&rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_MSSBEV_Action' */
#if Rte_SysCon_Variant_STMR_FUNC_1

    /* SignalConversion generated from: '<S1>/VeSCMR_e_MSSBEV_Action' incorporates:
     *  Inport: '<Root>/VeSCMR_e_MSSBEV_Action'
     */
    (void)Rte_Read_VeSCMR_e_MSSBEV_Action_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSCMR_e_MSSBEV_Action' */

    /* SignalConversion generated from: '<S1>/VeDTMR_b_VehIn_Lv2LashCntrl' */
#if !Rte_SysCon_Variant_STMR_FUNC_4 || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2 || Rte_SysCon_Variant_STMR_FUNC_3

    /* SignalConversion generated from: '<S1>/VeDTMR_b_VehIn_Lv2LashCntrl' incorporates:
     *  Inport: '<Root>/VeDTMR_b_VehIn_Lv2LashCntrl'
     */
    (void)Rte_Read_VeDTMR_b_VehIn_Lv2LashCntrl_Value
        (&rtb_TmpSignalConversionAtVeDTMR_b_VehIn_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDTMR_b_VehIn_Lv2LashCntrl' */

    /* SignalConversion generated from: '<S1>/VeSRMR_e_LimitationMd' */
#if !Rte_SysCon_Variant_STMR_FUNC_1

    /* SignalConversion generated from: '<S1>/VeSRMR_e_LimitationMd' incorporates:
     *  Inport: '<Root>/VeSRMR_e_LimitationMd'
     */
    (void)Rte_Read_VeSRMR_e_LimitationMd_Value
        (&rtb_TmpSignalConversionAtVeSRMR_e_Limita);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSRMR_e_LimitationMd' */

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2K0ClutchStatus' incorporates:
     *  SignalConversion generated from: '<S1>/VeOHSR_n_IdleSpdBlended'
     *  SignalConversion generated from: '<S1>/VeSCMR_b_TorqueTransRatioFA'
     *  SignalConversion generated from: '<S1>/VeSCMR_e_Lv2TargetGear'
     */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2K0ClutchStatus' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2K0ClutchStatus'
     */
    (void)Rte_Read_VeSCMR_e_Lv2K0ClutchStatus_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2K0C);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_TorqueTransRatioFA' incorporates:
     *  Inport: '<Root>/VeSCMR_b_TorqueTransRatioFA'
     */
    (void)Rte_Read_VeSCMR_b_TorqueTransRatioFA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Torque);

    /* SignalConversion generated from: '<S1>/VeOHSR_n_IdleSpdBlended' incorporates:
     *  Inport: '<Root>/VeOHSR_n_IdleSpdBlended'
     */
    (void)Rte_Read_VeOHSR_n_IdleSpdBlended_Value
        (&rtb_TmpSignalConversionAtVeOHSR_n_IdleSp);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_Lv2TargetGear' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2TargetGear'
     */
    (void)Rte_Read_VeSCMR_e_Lv2TargetGear_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tar);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSCMR_e_Lv2K0ClutchStatus' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_M_Lv2EngActStdyStTorq' */
    (void)Rte_Read_VeSCMR_M_Lv2EngActStdyStTorq_Value
        ((&(VeSTMI_M_EngActStdyStTorq_In)));

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&tmpRead_2);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_1);

    /* Inport: '<Root>/VeDFIR_b_DiagSystemDsbl' */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/STMR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_CM_TorqPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_TorqPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_TorqPerf_Value
        (&STMR_ac_B.TmpSignalConversionAtVeDMAB_y_StatusByte);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMR_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S7>/STMR_FastTEF_StartCheckpoint' */
    Rte_Call_STMR_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMI'
     */
    /* Logic: '<S532>/Logical11' incorporates:
     *  Constant: '<S554>/Calib'
     */
    VeSTMI_b_DsblMntr_EngActTrqFA = (rtb_TmpSignalConversionAtVeSCMR_b_EngAct &&
        (KeSTMR_b_DsblMntrEngTrqFA));

    /* Logic: '<S532>/Logical14' incorporates:
     *  Constant: '<S552>/Calib'
     */
    VeSTMI_b_DisblMntr_EngSpdFA = (rtb_TmpSignalConversionAtVeSSMR_b_EngSpd &&
        (KeSTMR_b_DisblOutTrqMntr_EngSpdFA));

    /* Logic: '<S532>/Logical15' incorporates:
     *  Constant: '<S553>/Calib'
     */
    VeSTMI_b_DisblMntr_MtrABSpdFA = (rtb_TmpSignalConversionAtVeSSMR_b_MtrBSp &&
        (KeSTMR_b_DisblOutTrqMntr_MtrBSpdFA));

    /* Logic: '<S535>/Logical2' */
    VeSTMI_b_Lv1ResetDTC = ((tmpRead_0 || tmpRead_1) || tmpRead_2);

    /* Logic: '<S532>/Logical27' */
    VeSTMI_b_DisblOutTrqMntr = ((((VeSTMI_b_Lv1ResetDTC) ||
        (VeSTMI_b_DisblMntr_EngSpdFA)) || (VeSTMI_b_DisblMntr_MtrABSpdFA)) ||
        (VeSTMI_b_DsblMntr_EngActTrqFA));

    /* Switch: '<S534>/Switch1' incorporates:
     *  Constant: '<S579>/Calib'
     *  Logic: '<S534>/Logical54'
     */
    if ((KeSTMR_b_OvrdEngActStdyStTrq) ||
            rtb_TmpSignalConversionAtVeSCMR_b_EngAct)
    {
        /* Switch: '<S534>/Switch1' incorporates:
         *  Constant: '<S578>/Calib'
         *  Inport: '<Root>/VeSCMR_M_Lv2EngActStdyStTorq'
         */
        VeSTMI_M_EngActStdyStTorq_In = KeSTMR_M_EngActStdyStTrq;
    }

    /* End of Switch: '<S534>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeLTIR_b_Lv2KeySts_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2KeySts_FA_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/STMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMI'
     */
    /* Switch: '<S535>/Switch1' incorporates:
     *  Inport: '<Root>/VeHWIO_b_Lv2IgnSwitch'
     *  Inport: '<Root>/VeLTIR_e_Lv2KeySts'
     */
    if (tmpRead_7)
    {
        (void)Rte_Read_VeHWIO_b_Lv2IgnSwitch_Value(&tmpRead_4);

        /* Switch: '<S535>/Switch1' incorporates:
         *  Inport: '<Root>/VeHWIO_b_Lv2IgnSwitch'
         *  Logic: '<S535>/Logical5'
         */
        VeSTMI_b_Lv2KeyOff = !tmpRead_4;
    }
    else
    {
        (void)Rte_Read_VeLTIR_e_Lv2KeySts_Value(&tmpRead_8);

        /* Switch: '<S535>/Switch1' incorporates:
         *  Constant: '<S580>/Constant'
         *  Inport: '<Root>/VeLTIR_e_Lv2KeySts'
         *  RelationalOperator: '<S535>/Comparison3'
         */
        VeSTMI_b_Lv2KeyOff = (((uint32)tmpRead_8) == CeLTIR_e_IGN_LK);
    }

    /* End of Switch: '<S535>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_b_Lv2SumFWIDSlw_FA' */
    (void)Rte_Read_VeSCMR_b_Lv2SumFWIDSlw_FA_Value(&tmpRead_1g);

    /* Inport: '<Root>/VeSCMR_e_Lv2SumFWIDSlw' */
    (void)Rte_Read_VeSCMR_e_Lv2SumFWIDSlw_Value(&tmpRead_1f);

    /* Inport: '<Root>/VeSCMR_b_Lv2SumFWIDFst_FA' */
    (void)Rte_Read_VeSCMR_b_Lv2SumFWIDFst_FA_Value(&tmpRead_1e);

    /* Inport: '<Root>/VePSMR_b_Lv2AccelPdlPosFlt' */
    (void)Rte_Read_VePSMR_b_Lv2AccelPdlPosFlt_Value(&tmpRead_1d);

    /* Inport: '<Root>/VeSSMR_b_TurbSpdFA' */
    (void)Rte_Read_VeSSMR_b_TurbSpdFA_Value(&tmpRead_1c);

    /* Inport: '<Root>/VeSSMR_b_TransOutSpdFA' */
    (void)Rte_Read_VeSSMR_b_TransOutSpdFA_Value(&tmpRead_1b);

    /* Inport: '<Root>/VePSMR_Pct_Lv2AccelPedalEffPosition' */
    (void)Rte_Read_VePSMR_Pct_Lv2AccelPedalEffPosition_Value(&rtb_Switch3_k);

    /* Inport: '<Root>/VeSCMR_b_Lv2Tcase_StatCANCFA' */
    (void)Rte_Read_VeSCMR_b_Lv2Tcase_StatCANCFA_Value
        (&rtb_VeSTMI_b_Lv2RgnBrkFront_Fltd);

    /* Inport: '<Root>/VeSRAR_b_OpnBattCntctr' */
    (void)Rte_Read_VeSRAR_b_OpnBattCntctr_Value(&tmpRead_d);

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnCmnd_Value(&tmpRead_c);

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnBPClsdCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnBPClsdCmnd_Value(&tmpRead_b);

    /* Inport: '<Root>/VeSRAR_b_DsblInvA' */
    (void)Rte_Read_VeSRAR_b_DsblInvA_Value(&tmpRead_a);

    /* Inport: '<Root>/VeSRAR_b_RegenBrkInhb' */
    (void)Rte_Read_VeSRAR_b_RegenBrkInhb_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/STMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMI'
     */
    /* Logic: '<S535>/Logical7' incorporates:
     *  Constant: '<S581>/Calib'
     *  Constant: '<S582>/Calib'
     *  Logic: '<S535>/Logical10'
     *  Logic: '<S535>/Logical9'
     */
    VeSTMI_b_LimpHomeActv = ((((((tmpRead_9 && (KeSTMR_b_EnblLHOM_RgnbrkInh)) ||
        tmpRead_a) || tmpRead_b) || tmpRead_c) || tmpRead_d) &&
        (KeSTMR_b_EnblLimHomActv));

    /* RelationalOperator: '<S531>/Comparison2' incorporates:
     *  Constant: '<S549>/Calib'
     */
    VeSTMI_b_4highActv_CANePT = (((uint16)
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca) == KeSTMR_e_Tcase4HighSlctePT);

    /* RelationalOperator: '<S531>/Comparison8' incorporates:
     *  Constant: '<S551>/Calib'
     */
    VeSTMI_b_4LowActv_EPT = (((uint16)rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca) ==
        KeSTMR_e_TcaseRangeSelect);

    /* Logic: '<S537>/Logical1' incorporates:
     *  Logic: '<S531>/Logical57'
     */
    rtb_VeSTMI_b_Lv2RgnBrkFront_Fltd = !rtb_VeSTMI_b_Lv2RgnBrkFront_Fltd;

    /* Logic: '<S531>/Logical1' incorporates:
     *  Constant: '<S548>/Calib'
     *  RelationalOperator: '<S531>/Comparison3'
     */
    VeSTMI_b_4highActv_CANC = (rtb_VeSTMI_b_Lv2RgnBrkFront_Fltd && (((uint16)
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2T_n) == KeSTMR_e_Tcase4HighSlctCANC));

    /* Logic: '<S531>/Logical2' incorporates:
     *  Constant: '<S550>/Calib'
     *  RelationalOperator: '<S531>/Comparison1'
     */
    VeSTMI_b_4LowActv_CANC = (rtb_VeSTMI_b_Lv2RgnBrkFront_Fltd && (((uint16)
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2T_n) == KeSTMR_e_Tcase4LowSlctCANC));

    /* Switch: '<S531>/Switch1' */
    if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Tca)
    {
        /* Switch: '<S531>/Switch1' */
        VeSTMI_b_4HighActvGd = VeSTMI_b_4highActv_CANC;

        /* Switch: '<S531>/Switch3' */
        VeSTMI_b_4LowActvGd = VeSTMI_b_4LowActv_CANC;
    }
    else
    {
        /* Switch: '<S531>/Switch1' */
        VeSTMI_b_4HighActvGd = VeSTMI_b_4highActv_CANePT;

        /* Switch: '<S531>/Switch3' */
        VeSTMI_b_4LowActvGd = VeSTMI_b_4LowActv_EPT;
    }

    /* End of Switch: '<S531>/Switch1' */

    /* RelationalOperator: '<S555>/Comparison18' */
    VeSTMI_b_ETRQ1 = (((sint32)rtb_TmpSignalConversionAtVeSCMR_e_SumFWI) == 0);

    /* RelationalOperator: '<S555>/Comparison19' */
    VeSTMI_b_ETRQ2 = (((sint32)rtb_TmpSignalConversionAtVeSCMR_e_SumFWI) == 1);

    /* RelationalOperator: '<S555>/Comparison20' */
    VeSTMI_b_ETRQ4 = (((sint32)tmpRead_1f) != 6);

    /* RelationalOperator: '<S555>/Comparison22' */
    VeSTMI_b_ETRQ3 = (((sint32)rtb_TmpSignalConversionAtVeSCMR_e_SumFWI) == 18);

    /* Logic: '<S555>/Logical14' incorporates:
     *  Logic: '<S555>/Logical15'
     *  Logic: '<S555>/Logical4'
     *  Logic: '<S555>/Logical7'
     */
    VeSTMI_b_ETRQ_Creep1 = (((((VeSTMI_b_ETRQ1) || (VeSTMI_b_ETRQ2)) ||
        (VeSTMI_b_ETRQ3)) && (VeSTMI_b_ETRQ4)) && ((!tmpRead_1e) && (!tmpRead_1g)));

    /* Logic: '<S555>/Logical12' incorporates:
     *  Constant: '<S563>/Calib'
     */
    VeSTMI_b_ETRQ_Creep = ((VeSTMI_b_ETRQ_Creep1) || (KeSTMR_b_ETRQ_CrpDsbl));

    /* RelationalOperator: '<S556>/Comparison14' incorporates:
     *  Constant: '<S564>/Calib'
     */
    VeSTMI_b_AclPdlCheck = (rtb_Switch3_k <= KeSTMR_Pct_AcclPdlLim);

    /* Logic: '<S556>/Logical9' */
    VeSTMI_b_CreepCnd4 = (((VeSTMI_b_4LowActvGd) || (VeSTMI_b_AclPdlCheck)) ||
                          tmpRead_1d);

    /* RelationalOperator: '<S557>/Comparison1' incorporates:
     *  Constant: '<S565>/Calib'
     */
    VeSTMI_b_MaxGrCreep = (((uint16)rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea) <=
                           KeSTMR_e_GearMax);

    /* RelationalOperator: '<S557>/Comparison15' incorporates:
     *  Constant: '<S567>/Calib'
     */
    VeSTMI_b_RevGrCreep = (((uint16)rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea) ==
                           KeSTMR_e_RevGear);

    /* RelationalOperator: '<S557>/Comparison16' incorporates:
     *  Constant: '<S566>/Calib'
     */
    VeSTMI_b_MinGrCreep = (((uint16)rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea) >=
                           KeSTMR_e_GearMin);

    /* Logic: '<S557>/Logical54' incorporates:
     *  Logic: '<S557>/Logical1'
     */
    VeSTMI_b_CreepCnd5 = ((VeSTMI_b_RevGrCreep) || ((VeSTMI_b_MinGrCreep) &&
                           (VeSTMI_b_MaxGrCreep)));

    /* RelationalOperator: '<S558>/Comparison1' incorporates:
     *  Constant: '<S572>/Calib'
     *  DataTypeConversion: '<S569>/DataTypeConversion'
     */
    VeSTMI_b_ILEInNeutrl = (rtb_TmpSignalConversionAtVeOHSR_e_ILESta ==
                            ((TeOHSR_e_VLE_DriveStat)KeSTMR_e_ILEStsNeutrl));

    /* RelationalOperator: '<S558>/Comparison5' incorporates:
     *  Constant: '<S571>/Calib'
     *  DataTypeConversion: '<S568>/DataTypeConversion'
     */
    VeSTMI_b_ILEInCreep = (rtb_TmpSignalConversionAtVeOHSR_e_ILESta ==
                           ((TeOHSR_e_VLE_DriveStat)KeSTMR_e_ILESTsCreep));

    /* RelationalOperator: '<S562>/Comparison11' incorporates:
     *  Constant: '<S577>/Calib'
     */
    VeSTMI_b_CreepCnd1 = (rtb_TmpSignalConversionAtVeSSMR_v_VehSpd <=
                          KeSTMR_v_VehSpdCrpLim);

    /* Product: '<S538>/Product1' incorporates:
     *  Constant: '<S598>/Calib'
     *  Constant: '<S608>/Calib'
     *  Product: '<S538>/Divide'
     */
    VeSTMI_n_Lv2TransOutSpd_Arb = (rtb_TmpSignalConversionAtVeSSMR_v_VehSpd /
        KeSTMR_k_P4BEV_FDR) * KeSTMR_Cf_TransOutSpdCalc;

    /* RelationalOperator: '<S562>/Comparison12' incorporates:
     *  Constant: '<S576>/Calib'
     */
    VeSTMI_b_CreepCnd2 = (VeSTMI_n_Lv2TransOutSpd_Arb <=
                          KeSTMR_n_trnsOutSpdCrpLim);

    /* RelationalOperator: '<S562>/Comparison13' incorporates:
     *  Constant: '<S575>/Calib'
     */
    VeSTMI_b_CreepCnd3 = (rtb_TmpSignalConversionAtVeSSMR_n_TurbSp <=
                          KeSTMR_n_NTurbCrpLim);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMC'
     */
    /* Logic: '<S559>/Logical56' incorporates:
     *  Logic: '<S246>/Logical3'
     */
    tmpRead_1d = !rtb_TmpSignalConversionAtVeSSMR_b_VehSpd;

    /* Logic: '<S559>/Logical57' incorporates:
     *  Logic: '<S559>/Logical56'
     */
    VeSTMI_b_CreepSigGood = ((((!tmpRead_1b) && tmpRead_1d) &&
        (!rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea)) && (!tmpRead_1c));

    /* Outputs for Atomic SubSystem: '<S536>/VariantSubsystem' */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* Outputs for Atomic SubSystem: '<S583>/PRNDPos_CAN' */
    /* Inport: '<Root>/VeSCMR_b_PRNDL_DISPePTFA' */
    (void)Rte_Read_VeSCMR_b_PRNDL_DISPePTFA_Value(&tmpRead_19);

    /* Inport: '<Root>/VeSCMR_e_PRNDL_DISPePT' */
    (void)Rte_Read_VeSCMR_e_PRNDL_DISPePT_Value(&tmpRead_18);

    /* Inport: '<Root>/VeSCMR_e_Lv2PRND_Disp' */
    (void)Rte_Read_VeSCMR_e_Lv2PRND_Disp_Value(&tmpRead_17);

    /* Chart: '<S586>/Chart' incorporates:
     *  Switch: '<S586>/Switch1'
     */
    /* Gateway: STMR_MedTEB/STMI/Lv2PRND_Arb/VariantSubsystem/PRNDPos_CAN/Determine_PRNDLSts/Chart */
    /* During: STMR_MedTEB/STMI/Lv2PRND_Arb/VariantSubsystem/PRNDPos_CAN/Determine_PRNDLSts/Chart */
    /* Entry Internal: STMR_MedTEB/STMI/Lv2PRND_Arb/VariantSubsystem/PRNDPos_CAN/Determine_PRNDLSts/Chart */
    /* Transition: '<S590>:2' */
    /* Transition: '<S590>:6' */
    if (rtb_TmpSignalConversionAtVeSCMR_b_PRND_D)
    {
        tmpRead_17 = tmpRead_18;
    }

    /* Logic: '<S584>/Logical3' incorporates:
     *  Logic: '<S584>/Logical42'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_PRND_D = ((!tmpRead_19) ||
        (!rtb_TmpSignalConversionAtVeSCMR_b_PRND_D));

    /* RelationalOperator: '<S584>/Comparison4' incorporates:
     *  Chart: '<S586>/Chart'
     *  Constant: '<S592>/Calib'
     *  RelationalOperator: '<S584>/Comparison1'
     *  RelationalOperator: '<S584>/Comparison2'
     */
    VeSTMI_b_VehInPark_CAN_tmp = (TeSTMR_e_Lv2PRND_Stat)
        STMR__safe_cast_to_TeSTMR_e_Lv2PRND_Stat((uint8)KaSTMR_e_PRND_STAT_Map
        [(tmpRead_17)]);

    /* Logic: '<S584>/Logical4' incorporates:
     *  Constant: '<S587>/Constant'
     *  RelationalOperator: '<S584>/Comparison4'
     */
    VeSTMI_b_VehInPark_CAN = (rtb_TmpSignalConversionAtVeSCMR_b_PRND_D &&
        (((uint32)VeSTMI_b_VehInPark_CAN_tmp) == CeSTMR_e_LVR_P));

    /* Logic: '<S584>/Logical5' incorporates:
     *  Constant: '<S588>/Constant'
     *  RelationalOperator: '<S584>/Comparison1'
     */
    VeSTMI_b_VehInNeutral_CAN = (rtb_TmpSignalConversionAtVeSCMR_b_PRND_D &&
        (((uint32)VeSTMI_b_VehInPark_CAN_tmp) == CeSTMR_e_LVR_N));

    /* VariantMerge generated from: '<S583>/VehInParkNeutral' incorporates:
     *  Logic: '<S584>/Logical1'
     */
    VeSTMI_b_Lv2VehInParkNeutral = ((VeSTMI_b_VehInPark_CAN) ||
        (VeSTMI_b_VehInNeutral_CAN));

    /* VariantMerge generated from: '<S583>/VehInRev' incorporates:
     *  Constant: '<S589>/Constant'
     *  Logic: '<S584>/Logical6'
     *  RelationalOperator: '<S584>/Comparison2'
     */
    VeSTMI_b_Lv2VehInRev = (rtb_TmpSignalConversionAtVeSCMR_b_PRND_D &&
                            (((uint32)VeSTMI_b_VehInPark_CAN_tmp) ==
        CeSTMR_e_LVR_R));

    /* End of Outputs for SubSystem: '<S583>/PRNDPos_CAN' */
#else

    /* Outputs for Atomic SubSystem: '<S583>/PRNDPos_GSMR' */
    /* Inport: '<Root>/VeGSMR_e_VldtdPRNDPos' */
    (void)Rte_Read_VeGSMR_e_VldtdPRNDPos_Value(&tmpRead_3);

    /* RelationalOperator: '<S585>/Comparison2' incorporates:
     *  Constant: '<S594>/Constant'
     */
    VeSTMI_b_Lv2VehInPark = (((uint32)tmpRead_3) == CeGSMR_e_TransRangePark);

    /* RelationalOperator: '<S585>/Comparison4' incorporates:
     *  Constant: '<S595>/Constant'
     */
    VeSTMI_b_Lv2VehInNeutral = (((uint32)tmpRead_3) ==
        CeGSMR_e_TransRangeNeutral);

    /* VariantMerge generated from: '<S583>/VehInRev' incorporates:
     *  Constant: '<S596>/Constant'
     *  RelationalOperator: '<S585>/Comparison9'
     */
    VeSTMI_b_Lv2VehInRev = (((uint32)tmpRead_3) == CeGSMR_e_TransRangeReverse);

    /* VariantMerge generated from: '<S583>/VehInParkNeutral' incorporates:
     *  Logic: '<S585>/Logical3'
     */
    VeSTMI_b_Lv2VehInParkNeutral = ((VeSTMI_b_Lv2VehInPark) ||
        (VeSTMI_b_Lv2VehInNeutral));

    /* End of Outputs for SubSystem: '<S583>/PRNDPos_GSMR' */
#endif

    /* End of Outputs for SubSystem: '<S536>/VariantSubsystem' */

    /* Logic: '<S533>/Logical55' incorporates:
     *  Constant: '<S560>/Calib'
     *  Constant: '<S561>/Calib'
     *  Logic: '<S533>/Logical1'
     *  Logic: '<S533>/Logical60'
     *  Logic: '<S562>/Logical55'
     */
    VeSTMI_b_CreepActvIntm = (((((((KeSTMR_b_CreepModeEnbl) &&
        (((VeSTMI_b_CreepCnd1) && (VeSTMI_b_CreepCnd2)) && (VeSTMI_b_CreepCnd3)))
        && (VeSTMI_b_CreepSigGood)) && ((!VeSTMI_b_Lv2VehInParkNeutral) ||
        (KeSTMR_b_SpdMntrInPNDsbl))) && (VeSTMI_b_CreepCnd4)) &&
        (VeSTMI_b_CreepCnd5)) && (VeSTMI_b_ETRQ_Creep));

    /* Logic: '<S558>/Logical5' incorporates:
     *  Logic: '<S558>/Logical1'
     */
    VeSTMI_b_4LowCreepActvintm = ((VeSTMI_b_CreepActvIntm) &&
        ((VeSTMI_b_ILEInCreep) || (VeSTMI_b_ILEInNeutrl)));

    /* Outputs for Atomic SubSystem: '<S558>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* Switch: '<S573>/Switch2' incorporates:
     *  Logic: '<S574>/AND'
     *  Logic: '<S574>/OR1'
     *  MinMax: '<S573>/Minimum1'
     *  UnitDelay: '<S573>/UnitDelay1'
     *  UnitDelay: '<S574>/UnitDelay1'
     */
    if ((!VeSTMI_b_4LowCreepActvintm) && (STMR_ac_DW.UnitDelay1_DSTATE_pj))
    {
        /* MinMax: '<S573>/Minimum1' incorporates:
         *  Constant: '<S570>/Calib'
         *  UnitDelay: '<S573>/UnitDelay1'
         */
        STMR_ac_DW.UnitDelay1_DSTATE_h = KeSTMR_Cnt_CreepDsblDbnc;
    }
    else
    {
        if (((sint32)STMR_ac_DW.UnitDelay1_DSTATE_h) <= 1)
        {
            /* MinMax: '<S573>/Minimum1' */
            STMR_ac_DW.UnitDelay1_DSTATE_h = 1U;
        }

        /* MinMax: '<S573>/Minimum1' incorporates:
         *  Constant: '<S573>/ConstantValue'
         *  Sum: '<S573>/Summation'
         *  UnitDelay: '<S573>/UnitDelay1'
         */
        STMR_ac_DW.UnitDelay1_DSTATE_h = (uint16)((sint32)(((sint32)
            STMR_ac_DW.UnitDelay1_DSTATE_h) - 1));
    }

    /* End of Switch: '<S573>/Switch2' */
    /* End of Outputs for SubSystem: '<S558>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_b_DriveLineRatioEptFA' */
    (void)Rte_Read_VeSCMR_b_DriveLineRatioEptFA_Value
        (&rtb_VeSTMI_b_Lv2RgnBrkRear_Fltd);

    /* Inport: '<Root>/VeSCMR_r_DriveLineRatioEpt' */
    (void)Rte_Read_VeSCMR_r_DriveLineRatioEpt_Value((&(VeSTMI_r_TorqueTransRatio)));

    /* Inport: '<Root>/VeSCMR_r_Lv2TorqueTransRatio' */
    (void)Rte_Read_VeSCMR_r_Lv2TorqueTransRatio_Value(&tmpRead_1a);

    /* Inport: '<Root>/VeLTIR_b_Lv2RgnBrkAxTrqReq_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2RgnBrkAxTrqReq_FA_Value
        (&rtb_VeSTMI_b_Lv2RgnBrkAxlTrqReq_Fltd);

    /* Inport: '<Root>/VeSCMR_b_Lv2RegenBrkRearOffsetRequestFA' */
    (void)Rte_Read_VeSCMR_b_Lv2RegenBrkRearOffsetRequestFA_Value(&tmpRead_f);

    /* Inport: '<Root>/VeSCMR_b_Lv2RegenBrkFrontOffsetRequestFA' */
    (void)Rte_Read_VeSCMR_b_Lv2RegenBrkFrontOffsetRequestFA_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/STMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMI'
     */
    /* Outputs for Atomic SubSystem: '<S558>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* Logic: '<S573>/AND' incorporates:
     *  Constant: '<S573>/ConstantValue2'
     *  RelationalOperator: '<S573>/GreaterThan'
     *  UnitDelay: '<S573>/UnitDelay1'
     */
    VeSTMI_b_AllModeCreepActv = ((VeSTMI_b_4LowCreepActvintm) || (((sint32)
        STMR_ac_DW.UnitDelay1_DSTATE_h) > 0));

    /* Update for UnitDelay: '<S574>/UnitDelay1' */
    STMR_ac_DW.UnitDelay1_DSTATE_pj = VeSTMI_b_4LowCreepActvintm;

    /* End of Outputs for SubSystem: '<S558>/LV2_Turn_Off_Delay_Sample_Modified' */

    /* Outputs for Atomic SubSystem: '<S538>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S618>/Switch1' incorporates:
     *  Constant: '<S609>/Calib'
     *  Constant: '<S610>/Calib'
     *  Product: '<S538>/Product'
     *  Product: '<S618>/Multiplication'
     *  Sum: '<S618>/Subtraction'
     *  Sum: '<S618>/Summation'
     *  UnitDelay: '<S618>/UnitDelay'
     */
    VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc =
        (((rtb_TmpSignalConversionAtVeSSMR_v_VehSpd * KeSTMR_k_kph_To_mph) -
          VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc) * KeSTMR_k_PdlWhlTrqMphFltCoeff) +
        VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc;

    /* End of Outputs for SubSystem: '<S538>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Product: '<S615>/Multiplication3' incorporates:
     *  Constant: '<S614>/Calib'
     *  Constant: '<S615>/Constant1'
     *  Product: '<S616>/Multiplication3'
     *  Product: '<S617>/Multiplication3'
     */
    rtb_TmpSignalConversionAtVeSSMR_v_VehSpd = KeSTMR_t_dT / 2.0F;

    /* Switch: '<S624>/LimiterSwitch' incorporates:
     *  Constant: '<S612>/Calib'
     *  Product: '<S615>/Multiplication3'
     *  Sum: '<S615>/Summation2'
     */
    VeSTMI_dn_Eng_Accel = rtb_TmpSignalConversionAtVeSSMR_v_VehSpd -
        KeSTMR_t_MtrAAccel_FiltThsh;

    /* Switch: '<S617>/Switch3' incorporates:
     *  Constant: '<S612>/Calib'
     *  Product: '<S615>/Multiplication3'
     *  Sum: '<S615>/Summation1'
     */
    rtb_Switch3_k = rtb_TmpSignalConversionAtVeSSMR_v_VehSpd +
        KeSTMR_t_MtrAAccel_FiltThsh;

    /* Switch: '<S615>/Switch1' incorporates:
     *  Constant: '<S615>/ConstantValue1'
     *  RelationalOperator: '<S615>/GreatherThan1'
     */
    if (VeSTMI_dn_Eng_Accel > 65535.0F)
    {
        /* Switch: '<S624>/LimiterSwitch' incorporates:
         *  Constant: '<S615>/ConstantValue3'
         */
        VeSTMI_dn_Eng_Accel = 65535.0F;
    }

    /* End of Switch: '<S615>/Switch1' */

    /* Switch: '<S624>/LimiterSwitch' incorporates:
     *  Product: '<S615>/Multiplication4'
     *  UnitDelay: '<S615>/UnitDelay1'
     */
    VeSTMI_dn_Eng_Accel = STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1 *
        VeSTMI_dn_Eng_Accel;

    /* Switch: '<S615>/Switch2' incorporates:
     *  Constant: '<S615>/ConstantValue5'
     *  RelationalOperator: '<S615>/GreatherThan3'
     */
    if (VeSTMI_dn_Eng_Accel > 65535.0F)
    {
        /* Switch: '<S624>/LimiterSwitch' incorporates:
         *  Constant: '<S615>/ConstantValue6'
         */
        VeSTMI_dn_Eng_Accel = 65535.0F;
    }

    /* End of Switch: '<S615>/Switch2' */

    /* Switch: '<S624>/LimiterSwitch' incorporates:
     *  Sum: '<S615>/Summation'
     *  UnitDelay: '<S615>/UnitDelay'
     */
    VeSTMI_dn_Eng_Accel = (rtb_TmpSignalConversionAtVeSSMR_n_MtrASp -
                           VeSTMI_dn_Eng_Accel) -
        STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev;

    /* Switch: '<S615>/Switch3' incorporates:
     *  Constant: '<S615>/ConstantValue8'
     *  RelationalOperator: '<S615>/GreatherThan4'
     */
    if (VeSTMI_dn_Eng_Accel > 65535.0F)
    {
        /* Switch: '<S624>/LimiterSwitch' incorporates:
         *  Constant: '<S615>/ConstantValue7'
         */
        VeSTMI_dn_Eng_Accel = 65535.0F;
    }

    /* End of Switch: '<S615>/Switch3' */

    /* Switch: '<S615>/Switch4' incorporates:
     *  Constant: '<S615>/ConstantValue4'
     *  RelationalOperator: '<S615>/GreatherThan2'
     */
    if (rtb_Switch3_k > 65535.0F)
    {
        /* Switch: '<S617>/Switch3' incorporates:
         *  Constant: '<S615>/ConstantValue2'
         */
        rtb_Switch3_k = 65535.0F;
    }

    /* End of Switch: '<S615>/Switch4' */

    /* Product: '<S615>/Multiplication2' incorporates:
     *  UnitDelay: '<S615>/UnitDelay1'
     */
    STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1 = VeSTMI_dn_Eng_Accel /
        rtb_Switch3_k;

    /* Switch: '<S617>/Switch3' incorporates:
     *  Constant: '<S613>/Calib'
     *  Sum: '<S616>/Summation2'
     */
    rtb_Switch3_k = rtb_TmpSignalConversionAtVeSSMR_v_VehSpd -
        KeSTMR_t_MtrBAccel_FiltThsh;

    /* Switch: '<S624>/LimiterSwitch' incorporates:
     *  Constant: '<S613>/Calib'
     *  Sum: '<S616>/Summation1'
     */
    VeSTMI_dn_Eng_Accel = rtb_TmpSignalConversionAtVeSSMR_v_VehSpd +
        KeSTMR_t_MtrBAccel_FiltThsh;

    /* Switch: '<S616>/Switch1' incorporates:
     *  Constant: '<S616>/ConstantValue1'
     *  RelationalOperator: '<S616>/GreatherThan1'
     */
    if (rtb_Switch3_k > 65535.0F)
    {
        /* Switch: '<S617>/Switch3' incorporates:
         *  Constant: '<S616>/ConstantValue3'
         */
        rtb_Switch3_k = 65535.0F;
    }

    /* End of Switch: '<S616>/Switch1' */

    /* Switch: '<S617>/Switch3' incorporates:
     *  Product: '<S616>/Multiplication4'
     *  UnitDelay: '<S616>/UnitDelay1'
     */
    rtb_Switch3_k *= STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1_o;

    /* Switch: '<S616>/Switch2' incorporates:
     *  Constant: '<S616>/ConstantValue5'
     *  RelationalOperator: '<S616>/GreatherThan3'
     */
    if (rtb_Switch3_k > 65535.0F)
    {
        /* Switch: '<S617>/Switch3' incorporates:
         *  Constant: '<S616>/ConstantValue6'
         */
        rtb_Switch3_k = 65535.0F;
    }

    /* End of Switch: '<S616>/Switch2' */

    /* Switch: '<S617>/Switch3' incorporates:
     *  Sum: '<S616>/Summation'
     *  UnitDelay: '<S616>/UnitDelay'
     */
    rtb_Switch3_k = (rtb_TmpSignalConversionAtVeSSMR_n_MtrBSp - rtb_Switch3_k) -
        STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev_h;

    /* Switch: '<S616>/Switch3' incorporates:
     *  Constant: '<S616>/ConstantValue8'
     *  RelationalOperator: '<S616>/GreatherThan4'
     */
    if (rtb_Switch3_k > 65535.0F)
    {
        /* Switch: '<S617>/Switch3' incorporates:
         *  Constant: '<S616>/ConstantValue7'
         */
        rtb_Switch3_k = 65535.0F;
    }

    /* End of Switch: '<S616>/Switch3' */

    /* Switch: '<S616>/Switch4' incorporates:
     *  Constant: '<S616>/ConstantValue4'
     *  RelationalOperator: '<S616>/GreatherThan2'
     */
    if (VeSTMI_dn_Eng_Accel > 65535.0F)
    {
        /* Switch: '<S624>/LimiterSwitch' incorporates:
         *  Constant: '<S616>/ConstantValue2'
         */
        VeSTMI_dn_Eng_Accel = 65535.0F;
    }

    /* End of Switch: '<S616>/Switch4' */

    /* Product: '<S616>/Multiplication2' incorporates:
     *  UnitDelay: '<S616>/UnitDelay1'
     */
    STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1_o = rtb_Switch3_k /
        VeSTMI_dn_Eng_Accel;

    /* Switch: '<S617>/Switch3' incorporates:
     *  Constant: '<S611>/Calib'
     *  Sum: '<S617>/Summation2'
     */
    rtb_Switch3_k = rtb_TmpSignalConversionAtVeSSMR_v_VehSpd -
        KeSTMR_t_EngAccel_FiltThsh;

    /* Switch: '<S624>/LimiterSwitch' incorporates:
     *  Constant: '<S611>/Calib'
     *  Sum: '<S617>/Summation1'
     */
    VeSTMI_dn_Eng_Accel = rtb_TmpSignalConversionAtVeSSMR_v_VehSpd +
        KeSTMR_t_EngAccel_FiltThsh;

    /* Switch: '<S617>/Switch1' incorporates:
     *  Constant: '<S617>/ConstantValue1'
     *  RelationalOperator: '<S617>/GreatherThan1'
     */
    if (rtb_Switch3_k > 65535.0F)
    {
        /* Switch: '<S617>/Switch3' incorporates:
         *  Constant: '<S617>/ConstantValue3'
         */
        rtb_Switch3_k = 65535.0F;
    }

    /* End of Switch: '<S617>/Switch1' */

    /* Switch: '<S617>/Switch3' incorporates:
     *  Product: '<S617>/Multiplication4'
     *  UnitDelay: '<S617>/UnitDelay1'
     */
    rtb_Switch3_k *= STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1_e;

    /* Switch: '<S617>/Switch2' incorporates:
     *  Constant: '<S617>/ConstantValue5'
     *  RelationalOperator: '<S617>/GreatherThan3'
     */
    if (rtb_Switch3_k > 65535.0F)
    {
        /* Switch: '<S617>/Switch3' incorporates:
         *  Constant: '<S617>/ConstantValue6'
         */
        rtb_Switch3_k = 65535.0F;
    }

    /* End of Switch: '<S617>/Switch2' */

    /* Switch: '<S617>/Switch3' incorporates:
     *  Sum: '<S617>/Summation'
     *  UnitDelay: '<S617>/UnitDelay'
     */
    rtb_Switch3_k = (rtb_TmpSignalConversionAtVeSSMR_n_EngSpd - rtb_Switch3_k) -
        STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev_n;

    /* Switch: '<S617>/Switch3' incorporates:
     *  Constant: '<S617>/ConstantValue8'
     *  RelationalOperator: '<S617>/GreatherThan4'
     */
    if (rtb_Switch3_k > 65535.0F)
    {
        /* Switch: '<S617>/Switch3' incorporates:
         *  Constant: '<S617>/ConstantValue7'
         */
        rtb_Switch3_k = 65535.0F;
    }

    /* End of Switch: '<S617>/Switch3' */

    /* Switch: '<S617>/Switch4' incorporates:
     *  Constant: '<S617>/ConstantValue4'
     *  RelationalOperator: '<S617>/GreatherThan2'
     */
    if (VeSTMI_dn_Eng_Accel > 65535.0F)
    {
        /* Switch: '<S624>/LimiterSwitch' incorporates:
         *  Constant: '<S617>/ConstantValue2'
         */
        VeSTMI_dn_Eng_Accel = 65535.0F;
    }

    /* End of Switch: '<S617>/Switch4' */

    /* Product: '<S617>/Multiplication2' incorporates:
     *  UnitDelay: '<S617>/UnitDelay1'
     */
    STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1_e = rtb_Switch3_k /
        VeSTMI_dn_Eng_Accel;

    /* Outputs for Atomic SubSystem: '<S538>/LV2_Digital_Lowpass_Reset_Enabled1' */
    /* Switch: '<S619>/Switch1' incorporates:
     *  Constant: '<S606>/Calib'
     *  Product: '<S619>/Multiplication'
     *  Sum: '<S619>/Subtraction'
     *  Sum: '<S619>/Summation'
     *  UnitDelay: '<S619>/UnitDelay'
     */
    VeSTMI_n_Lv2MtrASpd = ((rtb_TmpSignalConversionAtVeSSMR_n_MtrASp -
                            VeSTMI_n_Lv2MtrASpd) * KeSTMR_k_MtrASpdLowPathCoeff)
        + VeSTMI_n_Lv2MtrASpd;

    /* End of Outputs for SubSystem: '<S538>/LV2_Digital_Lowpass_Reset_Enabled1' */

    /* Outputs for Atomic SubSystem: '<S538>/LV2_Digital_Lowpass_Reset_Enabled2' */
    /* Switch: '<S620>/Switch1' incorporates:
     *  Constant: '<S607>/Calib'
     *  Product: '<S620>/Multiplication'
     *  Sum: '<S620>/Subtraction'
     *  Sum: '<S620>/Summation'
     *  UnitDelay: '<S620>/UnitDelay'
     */
    VeSTMI_n_Lv2MtrBSpd = ((rtb_TmpSignalConversionAtVeSSMR_n_MtrBSp -
                            VeSTMI_n_Lv2MtrBSpd) * KeSTMR_k_MtrBSpdLowPathCoeff)
        + VeSTMI_n_Lv2MtrBSpd;

    /* End of Outputs for SubSystem: '<S538>/LV2_Digital_Lowpass_Reset_Enabled2' */

    /* Outputs for Atomic SubSystem: '<S538>/LV2_Digital_Lowpass_Reset_Enabled3' */
    /* Switch: '<S621>/Switch1' incorporates:
     *  Constant: '<S605>/Calib'
     *  Product: '<S621>/Multiplication'
     *  Sum: '<S621>/Subtraction'
     *  Sum: '<S621>/Summation'
     *  UnitDelay: '<S621>/UnitDelay'
     */
    VeSTMI_n_Lv2EngSpd = ((rtb_TmpSignalConversionAtVeSSMR_n_EngSpd -
                           VeSTMI_n_Lv2EngSpd) * KeSTMR_k_EngSpdLowPathCoeff) +
        VeSTMI_n_Lv2EngSpd;

    /* End of Outputs for SubSystem: '<S538>/LV2_Digital_Lowpass_Reset_Enabled3' */

    /* Outputs for Atomic SubSystem: '<S538>/MinMaxLimiter1' */
    /* Switch: '<S622>/LimiterSwitch' incorporates:
     *  Constant: '<S601>/Calib'
     *  RelationalOperator: '<S622>/GreatherThan'
     *  UnitDelay: '<S615>/UnitDelay1'
     */
    if (KeSTMR_dn_MtrAAccel_MaxLim < STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1)
    {
        /* Switch: '<S624>/LimiterSwitch' */
        VeSTMI_dn_Eng_Accel = KeSTMR_dn_MtrAAccel_MaxLim;
    }
    else
    {
        /* Switch: '<S624>/LimiterSwitch' */
        VeSTMI_dn_Eng_Accel = STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1;
    }

    /* End of Switch: '<S622>/LimiterSwitch' */

    /* Switch: '<S622>/LimiterSwitch1' incorporates:
     *  Constant: '<S602>/Calib'
     *  RelationalOperator: '<S622>/GreatherThan1'
     */
    if (VeSTMI_dn_Eng_Accel > KeSTMR_dn_MtrAAccel_MinLim)
    {
        /* Switch: '<S622>/LimiterSwitch1' */
        VeSTMI_dn_MtrA_Accel = VeSTMI_dn_Eng_Accel;
    }
    else
    {
        /* Switch: '<S622>/LimiterSwitch1' */
        VeSTMI_dn_MtrA_Accel = KeSTMR_dn_MtrAAccel_MinLim;
    }

    /* End of Switch: '<S622>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S538>/MinMaxLimiter1' */

    /* Outputs for Atomic SubSystem: '<S538>/MinMaxLimiter2' */
    /* Switch: '<S623>/LimiterSwitch' incorporates:
     *  Constant: '<S603>/Calib'
     *  RelationalOperator: '<S623>/GreatherThan'
     *  UnitDelay: '<S616>/UnitDelay1'
     */
    if (KeSTMR_dn_MtrBAccel_MaxLim < STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1_o)
    {
        /* Switch: '<S624>/LimiterSwitch' */
        VeSTMI_dn_Eng_Accel = KeSTMR_dn_MtrBAccel_MaxLim;
    }
    else
    {
        /* Switch: '<S624>/LimiterSwitch' */
        VeSTMI_dn_Eng_Accel = STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1_o;
    }

    /* End of Switch: '<S623>/LimiterSwitch' */

    /* Switch: '<S623>/LimiterSwitch1' incorporates:
     *  Constant: '<S604>/Calib'
     *  RelationalOperator: '<S623>/GreatherThan1'
     */
    if (VeSTMI_dn_Eng_Accel > KeSTMR_dn_MtrBAccel_MinLim)
    {
        /* Switch: '<S623>/LimiterSwitch1' */
        VeSTMI_dn_MtrB_Accel = VeSTMI_dn_Eng_Accel;
    }
    else
    {
        /* Switch: '<S623>/LimiterSwitch1' */
        VeSTMI_dn_MtrB_Accel = KeSTMR_dn_MtrBAccel_MinLim;
    }

    /* End of Switch: '<S623>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S538>/MinMaxLimiter2' */

    /* Outputs for Atomic SubSystem: '<S538>/MinMaxLimiter3' */
    /* Switch: '<S624>/LimiterSwitch' incorporates:
     *  Constant: '<S599>/Calib'
     *  RelationalOperator: '<S624>/GreatherThan'
     *  UnitDelay: '<S617>/UnitDelay1'
     */
    if (KeSTMR_dn_EngAccel_MaxLim < STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1_e)
    {
        /* Switch: '<S624>/LimiterSwitch' */
        VeSTMI_dn_Eng_Accel = KeSTMR_dn_EngAccel_MaxLim;
    }
    else
    {
        /* Switch: '<S624>/LimiterSwitch' */
        VeSTMI_dn_Eng_Accel = STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev1_e;
    }

    /* End of Switch: '<S624>/LimiterSwitch' */

    /* Switch: '<S624>/LimiterSwitch1' incorporates:
     *  Constant: '<S600>/Calib'
     *  RelationalOperator: '<S624>/GreatherThan1'
     */
    if (VeSTMI_dn_Eng_Accel <= KeSTMR_dn_EngAccel_MinLim)
    {
        /* Switch: '<S624>/LimiterSwitch1' */
        VeSTMI_dn_Eng_Accel = KeSTMR_dn_EngAccel_MinLim;
    }

    /* End of Switch: '<S624>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S538>/MinMaxLimiter3' */

    /* Product: '<S539>/Multiplication1' incorporates:
     *  Constant: '<S626>/Calib'
     */
    VeSTMI_r_TTRatioNoTF = KeSTMR_r_cFinalDrvRat * tmpRead_1a;

    /* Product: '<S539>/Multiplication2' incorporates:
     *  Constant: '<S625>/Calib'
     */
    VeSTMI_r_TTRatioWithTF = KeSTMR_r_TFRatio * VeSTMI_r_TTRatioNoTF;

    /* Switch: '<S539>/Switch1' */
    if (VeSTMI_b_4LowActvGd)
    {
        /* Switch: '<S539>/Switch1' */
        VeSTMI_r_TTRatio_Intm = VeSTMI_r_TTRatioWithTF;
    }
    else
    {
        /* Switch: '<S539>/Switch1' */
        VeSTMI_r_TTRatio_Intm = VeSTMI_r_TTRatioNoTF;
    }

    /* End of Switch: '<S539>/Switch1' */

    /* Switch: '<S539>/Switch10' */
    if (rtb_VeSTMI_b_Lv2RgnBrkRear_Fltd)
    {
        /* Switch: '<S539>/Switch10' incorporates:
         *  Inport: '<Root>/VeSCMR_r_DriveLineRatioEpt'
         */
        VeSTMI_r_TorqueTransRatio = VeSTMI_r_TTRatio_Intm;
    }

    /* End of Switch: '<S539>/Switch10' */

    /* Logic: '<S537>/Logical1' incorporates:
     *  Constant: '<S597>/Calib'
     *  RelationalOperator: '<S537>/Comparison1'
     */
    rtb_VeSTMI_b_Lv2RgnBrkFront_Fltd = (tmpRead_e ||
        (KeSTMR_M_InvalidRegenBrkAxleTrq >=
         VeSTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb));

    /* Logic: '<S537>/Logical4' incorporates:
     *  Constant: '<S597>/Calib'
     *  RelationalOperator: '<S537>/Comparison7'
     */
    rtb_VeSTMI_b_Lv2RgnBrkRear_Fltd = (tmpRead_f ||
        (KeSTMR_M_InvalidRegenBrkAxleTrq >=
         VeSTMI_M_Lv2RegenBrkRearOffsetRequest_Arb));

    /* Logic: '<S537>/Logical6' incorporates:
     *  Constant: '<S597>/Calib'
     *  RelationalOperator: '<S537>/Comparison5'
     */
    rtb_VeSTMI_b_Lv2RgnBrkAxlTrqReq_Fltd = (rtb_VeSTMI_b_Lv2RgnBrkAxlTrqReq_Fltd
        || (KeSTMR_M_InvalidRegenBrkAxleTrq >= VeSTMI_M_Lv2RgnBrkAxlTrqReq));

    /* Logic: '<S537>/Logical11' */
    VeSTMI_b_Lv2RgnBrkFltd = ((rtb_VeSTMI_b_Lv2RgnBrkFront_Fltd ||
        rtb_VeSTMI_b_Lv2RgnBrkRear_Fltd) || rtb_VeSTMI_b_Lv2RgnBrkAxlTrqReq_Fltd);

    /* Switch: '<S537>/Switch' incorporates:
     *  Constant: '<S537>/ConstantValue'
     */
    if (rtb_VeSTMI_b_Lv2RgnBrkFront_Fltd)
    {
        VeSTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb = 0.0F;
    }

    /* End of Switch: '<S537>/Switch' */

    /* Switch: '<S537>/Switch2' incorporates:
     *  Constant: '<S537>/ConstantValue1'
     */
    if (rtb_VeSTMI_b_Lv2RgnBrkRear_Fltd)
    {
        VeSTMI_M_Lv2RegenBrkRearOffsetRequest_Arb = 0.0F;
    }

    /* End of Switch: '<S537>/Switch2' */

    /* Switch: '<S537>/Switch3' incorporates:
     *  Constant: '<S537>/ConstantValue3'
     */
    if (rtb_VeSTMI_b_Lv2RgnBrkAxlTrqReq_Fltd)
    {
        VeSTMI_M_Lv2RgnBrkAxlTrqReq = 0.0F;
    }

    /* End of Switch: '<S537>/Switch3' */

    /* Switch: '<S530>/Switch4' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMaxRqCANC2_BSM'
     *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMinRqCANC2_BSM'
     */
    if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2Frn)
    {
        (void)Rte_Read_VeSCMR_b_Lv2FrntAxlMinRqCANC2_BSM_Value(&tmpRead_z);
        (void)Rte_Read_VeSCMR_b_Lv2FrntAxlMaxRqCANC2_BSM_Value(&tmpRead_y);

        /* Logic: '<S545>/AND' incorporates:
         *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMaxRqCANC2_BSM'
         *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMinRqCANC2_BSM'
         *  Switch: '<S530>/Switch5'
         *  Switch: '<S530>/Switch6'
         */
        VeSTMI_b_Lv2RrAxlMaxRq = (rtb_TmpSignalConversionAtVeLTIR_b_Lv2F_p ||
            tmpRead_y);

        /* Logic: '<S546>/AND' incorporates:
         *  Switch: '<S530>/Switch5'
         *  Switch: '<S530>/Switch6'
         */
        VeSTMI_b_Lv2RrAxlMinRq = (rtb_TmpSignalConversionAtVeLTIR_b_Lv2F_p ||
            tmpRead_z);

        /* Logic: '<S544>/AND' incorporates:
         *  Switch: '<S530>/Switch5'
         *  Switch: '<S530>/Switch6'
         */
        VeSTMI_b_Lv2FrntAxlRq_FA = rtb_TmpSignalConversionAtVeLTIR_b_Lv2F_p;
    }
    else
    {
        /* Switch: '<S530>/Switch6' incorporates:
         *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMaxRq_BSM'
         *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMinRq_BSM'
         */
        (void)Rte_Read_VeSCMR_b_Lv2FrntAxlMinRq_BSM_Value
            ((&(VeSTMI_b_Lv2RrAxlMinRq)));
        (void)Rte_Read_VeSCMR_b_Lv2FrntAxlMaxRq_BSM_Value
            ((&(VeSTMI_b_Lv2RrAxlMaxRq)));

        /* Logic: '<S544>/AND' incorporates:
         *  Constant: '<S530>/FALSEConstant3'
         *  Switch: '<S530>/Switch6'
         */
        VeSTMI_b_Lv2FrntAxlRq_FA = false;
    }

    /* End of Switch: '<S530>/Switch4' */

    /* Logic: '<S542>/AND' */
    VeSTMI_b_Lv2FrntAxlMaxRq = VeSTMI_b_Lv2RrAxlMaxRq;

    /* Logic: '<S543>/AND' */
    VeSTMI_b_Lv2FrntAxlMinRq = VeSTMI_b_Lv2RrAxlMinRq;

    /* Switch: '<S530>/Switch8' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2FrntAxlRqCANC2_BSM'
     */
    if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2Frn)
    {
        (void)Rte_Read_VeSCMR_M_Lv2FrntAxlRqCANC2_BSM_Value
            ((&(VeSTMI_M_Lv2FrntAxlRq)));

        /* Switch: '<S530>/Switch10' incorporates:
         *  Inport: '<Root>/VeSCMR_M_Lv2FrntAxlRqCANC2_BSM'
         */
        if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2F_p)
        {
            /* Switch: '<S530>/Switch8' incorporates:
             *  Constant: '<S530>/Constant11'
             */
            VeSTMI_M_Lv2FrntAxlRq = 0.0F;
        }

        /* End of Switch: '<S530>/Switch10' */
    }
    else
    {
        /* Switch: '<S530>/Switch8' incorporates:
         *  Inport: '<Root>/VeSCMR_M_Lv2FrntAxlRq_BSM'
         */
        (void)Rte_Read_VeSCMR_M_Lv2FrntAxlRq_BSM_Value((&(VeSTMI_M_Lv2FrntAxlRq)));
    }

    /* End of Switch: '<S530>/Switch8' */

    /* Switch: '<S530>/Switch6' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMaxRqCANC2_BSM'
     *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMinRqCANC2_BSM'
     */
    if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA)
    {
        (void)Rte_Read_VeSCMR_b_Lv2RrAxlMinRqCANC2_BSM_Value(&tmpRead_11);
        (void)Rte_Read_VeSCMR_b_Lv2RrAxlMaxRqCANC2_BSM_Value(&tmpRead_10);

        /* Logic: '<S545>/AND' incorporates:
         *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMaxRqCANC2_BSM'
         *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMinRqCANC2_BSM'
         *  Switch: '<S530>/Switch6'
         *  Switch: '<S530>/Switch7'
         */
        VeSTMI_b_Lv2RrAxlMaxRq = (rtb_TmpSignalConversionAtVeLTIR_b_Lv2R_o ||
            tmpRead_10);

        /* Logic: '<S546>/AND' incorporates:
         *  Switch: '<S530>/Switch6'
         *  Switch: '<S530>/Switch7'
         */
        VeSTMI_b_Lv2RrAxlMinRq = (rtb_TmpSignalConversionAtVeLTIR_b_Lv2R_o ||
            tmpRead_11);

        /* Logic: '<S547>/AND' incorporates:
         *  Switch: '<S530>/Switch6'
         *  Switch: '<S530>/Switch7'
         */
        VeSTMI_b_Lv2RrAxlRq_FA = rtb_TmpSignalConversionAtVeLTIR_b_Lv2R_o;
    }
    else
    {
        /* Switch: '<S530>/Switch6' incorporates:
         *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMaxRq_BSM'
         *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMinRq_BSM'
         */
        (void)Rte_Read_VeSCMR_b_Lv2RrAxlMinRq_BSM_Value
            ((&(VeSTMI_b_Lv2RrAxlMinRq)));
        (void)Rte_Read_VeSCMR_b_Lv2RrAxlMaxRq_BSM_Value
            ((&(VeSTMI_b_Lv2RrAxlMaxRq)));

        /* Logic: '<S547>/AND' incorporates:
         *  Constant: '<S530>/FALSEConstant9'
         *  Switch: '<S530>/Switch6'
         */
        VeSTMI_b_Lv2RrAxlRq_FA = false;
    }

    /* End of Switch: '<S530>/Switch6' */

    /* Switch: '<S530>/Switch9' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2RrAxlRqCANC2_BSM'
     */
    if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA)
    {
        (void)Rte_Read_VeSCMR_M_Lv2RrAxlRqCANC2_BSM_Value((&(VeSTMI_M_Lv2RrAxlRq)));

        /* Switch: '<S530>/Switch11' incorporates:
         *  Inport: '<Root>/VeSCMR_M_Lv2RrAxlRqCANC2_BSM'
         */
        if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2R_o)
        {
            /* Switch: '<S530>/Switch9' incorporates:
             *  Constant: '<S530>/Constant73'
             */
            VeSTMI_M_Lv2RrAxlRq = 0.0F;
        }

        /* End of Switch: '<S530>/Switch11' */
    }
    else
    {
        /* Switch: '<S530>/Switch9' incorporates:
         *  Inport: '<Root>/VeSCMR_M_Lv2RrAxlRq_BSM'
         */
        (void)Rte_Read_VeSCMR_M_Lv2RrAxlRq_BSM_Value((&(VeSTMI_M_Lv2RrAxlRq)));
    }

    /* End of Switch: '<S530>/Switch9' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeWTAR_b_AeCoastTorqDiffActv' */
    (void)Rte_Read_VeWTAR_b_AeCoastTorqDiffActv_Value(&tmpRead_16);

    /* Inport: '<Root>/VeWTAR_M_AeCoastTorqDiff' */
    (void)Rte_Read_VeWTAR_M_AeCoastTorqDiff_Value
        ((&(VeSTMI_M_Lv2Lv1AeCoastTorqDiff)));

    /* Inport: '<Root>/VeLTIR_b_Lv2BrkMaxRgnReady_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2BrkMaxRgnReady_FA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSCMR_e_Lv2BrkMaxRgnReady' */
    (void)Rte_Read_VeSCMR_e_Lv2BrkMaxRgnReady_Value(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/STMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMI'
     */
    /* Logic: '<S529>/Logical54' incorporates:
     *  Constant: '<S540>/Calib'
     *  Constant: '<S541>/Calib'
     *  Logic: '<S529>/Logical1'
     *  Logic: '<S529>/Logical4'
     *  RelationalOperator: '<S529>/RelationalOperator'
     */
    VeSTMI_b_Lv2AeCoastReady = ((tmpRead_16 && ((KeSTMR_b_AeCoastReadyOvrd) ||
        (tmpRead_5 == KeSTMR_e_Lv2BrakeMaxRegenReady))) && (!tmpRead_6));

    /* Switch: '<S529>/Switch1' */
    if (!VeSTMI_b_Lv2AeCoastReady)
    {
        /* Switch: '<S529>/Switch1' incorporates:
         *  Constant: '<S529>/ConstantValue1'
         *  Inport: '<Root>/VeWTAR_M_AeCoastTorqDiff'
         */
        VeSTMI_M_Lv2Lv1AeCoastTorqDiff = 0.0F;
    }

    /* End of Switch: '<S529>/Switch1' */

    /* Update for UnitDelay: '<S615>/UnitDelay' */
    STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev =
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp;

    /* Update for UnitDelay: '<S616>/UnitDelay' */
    STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev_h =
        rtb_TmpSignalConversionAtVeSSMR_n_MtrBSp;

    /* Update for UnitDelay: '<S617>/UnitDelay' */
    STMR_ac_DW.VeSTMC_dn_MtrAAccel_Fltd_prev_n =
        rtb_TmpSignalConversionAtVeSSMR_n_EngSpd;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMC'
     */
    /* Product: '<S16>/Product3' incorporates:
     *  Constant: '<S22>/Calib'
     *  Product: '<S16>/Product1'
     *  Product: '<S16>/Product2'
     *  Product: '<S16>/Product4'
     *  Product: '<S16>/Product5'
     *  Product: '<S16>/Product6'
     *  Product: '<S16>/Product7'
     *  Product: '<S16>/Product8'
     *  Sum: '<S16>/Sum1'
     *  Sum: '<S16>/Sum2'
     *  Sum: '<S16>/Sum4'
     *  Sum: '<S16>/Sum5'
     *  Switch: '<S16>/Switch2'
     *  Switch: '<S16>/Switch3'
     */
#if Rte_SysCon_Variant_STMR_FUNC_3

    /* Sum: '<S16>/Sum1' incorporates:
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     */
    VeSTMC_M_ToFromMtrTrq = (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA *
        KeSTMR_r_M2_ToFromTa_TiNiDep) +
        (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB *
         KeSTMR_r_M2_ToFromTb_TiNiDep);

    /* Product: '<S16>/Product5' incorporates:
     *  Constant: '<S23>/Calib'
     */
    VeSTMC_n_Lv2NoSpd = VeSTMI_n_Lv2MtrBSpd * KeSTMR_r_All_NoFromNb_NCnDep;

    /* Sum: '<S16>/Sum2' incorporates:
     *  Constant: '<S24>/Calib'
     *  Constant: '<S26>/Calib'
     */
    VeSTMC_M_ToFromDmpg = (VeSTMI_n_Lv2MtrASpd * KeSTMR_r_M2_ToFromNa_TiNiDep) +
        (VeSTMC_n_Lv2NoSpd * KeSTMR_r_M2_ToFromNo_TiNiDep);

    /* Product: '<S16>/Product8' incorporates:
     *  Constant: '<S23>/Calib'
     */
    VeSTMC_n_Lv2NoAccel = VeSTMI_dn_MtrB_Accel * KeSTMR_r_All_NoFromNb_NCnDep;

    /* Sum: '<S16>/Sum4' incorporates:
     *  Constant: '<S25>/Calib'
     *  Constant: '<S27>/Calib'
     */
    VeSTMC_M_ToFromInrta = (VeSTMI_dn_MtrA_Accel *
                            KeSTMR_r_M2_ToFromNadot_TiNiDep) +
        (VeSTMC_n_Lv2NoAccel * KeSTMR_r_M2_ToFromNodot_TiNiDep);
    if (KeSTMR_b_EnblLv2Garage)
    {
        rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA =
            rtb_TmpSignalConversionAtVeDTMR_b_VehIn_;
    }
    else
    {
        rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA = VeSTMI_b_Lv2VehInRev;
    }

    if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA)
    {
        /* VariantMerge generated from: '<S9>/Variant Source' incorporates:
         *  Gain: '<S16>/Gain'
         */
        VeSTMC_M_NetTransTrqCmnd_Arb = -((VeSTMC_M_ToFromMtrTrq +
            VeSTMC_M_ToFromDmpg) + VeSTMC_M_ToFromInrta);
    }
    else
    {
        /* VariantMerge generated from: '<S9>/Variant Source' */
        VeSTMC_M_NetTransTrqCmnd_Arb = (VeSTMC_M_ToFromMtrTrq +
            VeSTMC_M_ToFromDmpg) + VeSTMC_M_ToFromInrta;
    }

#endif

    /* End of Product: '<S16>/Product3' */

    /* Product: '<S17>/Product' incorporates:
     *  Product: '<S17>/Product1'
     *  Product: '<S17>/Product2'
     *  Product: '<S17>/Product3'
     *  Sum: '<S17>/Sum1'
     *  Sum: '<S17>/Sum2'
     *  Sum: '<S17>/Sum3'
     *  Sum: '<S17>/Sum4'
     */
#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

    /* Sum: '<S17>/Sum2' incorporates:
     *  Constant: '<S30>/Calib'
     *  Constant: '<S32>/Calib'
     */
    VeSTMC_M_FrictionMtrA_arb = (KeSTMR_r_MtrA_DampingM182 * VeSTMI_n_Lv2MtrASpd)
        + (KeSTMR_J_MtrA_Inertia_M182 * VeSTMI_dn_MtrA_Accel);

    /* Sum: '<S17>/Sum1' */
    VeSTMC_M_NetMtrATrqCmnd = STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB
        - VeSTMC_M_FrictionMtrA_arb;

    /* Sum: '<S17>/Sum4' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S33>/Calib'
     */
    VeSTMC_M_FrictionMtrB_arb = (KeSTMR_r_MtrB_DampingM182 * VeSTMI_n_Lv2MtrBSpd)
        + (KeSTMR_J_MtrB_Inertia_M182 * VeSTMI_dn_MtrB_Accel);

    /* Sum: '<S17>/Sum3' */
    VeSTMC_M_NetMtrBTrqCmnd = STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA
        - VeSTMC_M_FrictionMtrB_arb;

#endif

    /* End of Product: '<S17>/Product' */

    /* Sum: '<S34>/Sum1' incorporates:
     *  Abs: '<S34>/Abs'
     *  Abs: '<S36>/Abs'
     *  Abs: '<S56>/Abs'
     *  Constant: '<S42>/ConstantValue'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S51>/Calib'
     *  Constant: '<S61>/Calib'
     *  Inport: '<Root>/VeSCMR_M_Lv2TrqK0'
     *  Inport: '<Root>/VeSCMR_b_ILE_STO_Stat'
     *  Inport: '<Root>/VeSCMR_b_KGB'
     *  Inport: '<Root>/VeSCMR_b_Lv2K0ClutchStatusFA'
     *  Inport: '<Root>/VeSCMR_b_Lv2TrqK0FA'
     *  Logic: '<S34>/Logical1'
     *  Logic: '<S34>/Logical2'
     *  Logic: '<S34>/Logical3'
     *  Logic: '<S34>/Logical4'
     *  Logic: '<S35>/Logical'
     *  Logic: '<S35>/Logical4'
     *  Logic: '<S35>/Logical6'
     *  Logic: '<S36>/Logical1'
     *  Logic: '<S36>/Logical10'
     *  Logic: '<S36>/Logical11'
     *  Logic: '<S36>/Logical2'
     *  Logic: '<S36>/Logical3'
     *  Logic: '<S36>/Logical4'
     *  Logic: '<S36>/Logical5'
     *  Logic: '<S36>/Logical6'
     *  Logic: '<S36>/Logical7'
     *  Logic: '<S36>/Logical9'
     *  Logic: '<S45>/Logical5'
     *  MinMax: '<S42>/Min'
     *  MinMax: '<S56>/Min'
     *  Product: '<S36>/Product3'
     *  Product: '<S42>/Product8'
     *  Product: '<S43>/Product1'
     *  Product: '<S43>/Product3'
     *  Product: '<S43>/Product4'
     *  Product: '<S43>/Product5'
     *  Product: '<S43>/Product6'
     *  Product: '<S43>/Product7'
     *  Product: '<S43>/Product9'
     *  Product: '<S44>/Product'
     *  Product: '<S44>/Product1'
     *  Product: '<S56>/Product2'
     *  RelationalOperator: '<S34>/Comparison10'
     *  RelationalOperator: '<S35>/Comparison1'
     *  RelationalOperator: '<S35>/Comparison2'
     *  RelationalOperator: '<S35>/Comparison3'
     *  RelationalOperator: '<S36>/Comparison1'
     *  RelationalOperator: '<S36>/Comparison11'
     *  RelationalOperator: '<S36>/Comparison3'
     *  RelationalOperator: '<S36>/Comparison4'
     *  RelationalOperator: '<S36>/Comparison6'
     *  RelationalOperator: '<S42>/Comparison4'
     *  Sum: '<S35>/Sum4'
     *  Sum: '<S35>/Sum6'
     *  Sum: '<S35>/Sum7'
     *  Sum: '<S36>/Sum1'
     *  Sum: '<S36>/Sum3'
     *  Sum: '<S43>/Sum1'
     *  Sum: '<S43>/Sum2'
     *  Sum: '<S43>/Sum3'
     *  Sum: '<S44>/Sum'
     *  Sum: '<S45>/Sum5'
     *  Switch: '<S18>/Switch2'
     *  Switch: '<S35>/Switch1'
     *  Switch: '<S35>/Switch2'
     *  Switch: '<S35>/Switch3'
     *  Switch: '<S41>/Switch2'
     *  Switch: '<S42>/Switch1'
     *  Switch: '<S45>/Switch1'
     */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* Outputs for Atomic SubSystem: '<S35>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Outputs for Atomic SubSystem: '<S36>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* Outputs for Atomic SubSystem: '<S36>/LV2_Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S45>/LV2_Hysteresis' */
    /* Switch: '<S460>/Switch6' */
    rtb_Switch6_f = VeSTMI_n_Lv2MtrBSpd -
        rtb_TmpSignalConversionAtVeSSMR_n_TurbSp;

    /* RelationalOperator: '<S34>/Comparison10' incorporates:
     *  Constant: '<S40>/Calib'
     */
    VeSTMC_b_ILELockSpdMetIntrm = (fabsf(rtb_Switch6_f) <=
        KeSTMR_n_SpdErrILELock);
    (void)Rte_Read_VeSCMR_b_ILE_STO_Stat_Value(&tmpRead_14);

    /* Logic: '<S34>/Logical3' incorporates:
     *  Constant: '<S39>/Calib'
     *  Inport: '<Root>/VeSCMR_b_ILE_STO_Stat'
     */
    VeSTMC_b_ILE_STO_Stat = ((KeSTMR_b_ILESTO_StatEnbl) && tmpRead_14);
    (void)Rte_Read_VeSCMR_b_KGB_Value(&tmpRead_15);

    /* Logic: '<S34>/Logical1' incorporates:
     *  Inport: '<Root>/VeSCMR_b_KGB'
     */
    VeSTMC_b_ILEIsLocked = ((VeSTMC_b_ILE_STO_Stat) || tmpRead_15);

    /* Logic: '<S34>/Logical4' incorporates:
     *  Constant: '<S38>/Calib'
     */
    VeSTMC_b_ILELockSpdMet = ((VeSTMC_b_ILELockSpdMetIntrm) &&
        (KeSTMR_b_ILELockSpdCheckEnbl));

    /* Logic: '<S34>/Logical2' */
    VeSTMC_b_ILEIsLockedOK = ((VeSTMC_b_ILEIsLocked) && (VeSTMC_b_ILELockSpdMet));
    if (VeSTMC_b_ILEIsLockedOK)
    {
        /* Switch: '<S41>/Switch2' incorporates:
         *  Constant: '<S54>/Calib'
         */
        VeSTMC_Cf_InertiaFactor = KeSTMR_Cf_ILELoCkFactor;
    }
    else
    {
        /* Switch: '<S41>/Switch2' incorporates:
         *  Constant: '<S55>/Calib'
         */
        VeSTMC_Cf_InertiaFactor = KeSTMR_Cf_ILEOpnFactor;
    }

    VeSTMC_M_MtrATrqCmndArb = KeSTMR_r_P1f_BeltRatio *
        STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA;

    /* Switch: '<S460>/Switch5' incorporates:
     *  Constant: '<S61>/Calib'
     */
    rtb_Switch5_l = KeSTMR_r_P1f_BeltRatio * KeSTMR_r_P1f_BeltRatio;

    /* Product: '<S43>/Product4' incorporates:
     *  Constant: '<S58>/Calib'
     */
    VeSTMC_J_MtrAInertia = (rtb_Switch5_l * KeSTMR_J_Inertia_MtrA_Ia) *
        VeSTMC_Cf_InertiaFactor;

    /* Product: '<S43>/Product9' incorporates:
     *  Constant: '<S57>/Calib'
     */
    VeSTMC_J_Eng_Inertia = KeSTMR_J_Inertia_Engine_Ie * VeSTMC_Cf_InertiaFactor;

    /* Sum: '<S43>/Sum2' */
    VeSTMC_J_MtrAEng_Inertia = VeSTMC_J_MtrAInertia + VeSTMC_J_Eng_Inertia;

    /* Product: '<S43>/Product5' */
    VeSTMC_M_TransientTrq_MtrAEng_Accel = VeSTMC_J_MtrAEng_Inertia *
        VeSTMI_dn_Eng_Accel;

    /* Product: '<S43>/Product6' incorporates:
     *  Constant: '<S60>/Calib'
     */
    VeSTMC_r_MtrADampingCoeff = rtb_Switch5_l * KeSTMR_r_Damping_MtrA_Ba;

    /* Sum: '<S43>/Sum3' incorporates:
     *  Constant: '<S59>/Calib'
     */
    VeSTMC_J_MtrAEng_DampingCoeff = VeSTMC_r_MtrADampingCoeff +
        KeSTMR_r_Damping_Engine_Be;

    /* Product: '<S43>/Product7' */
    VeSTMC_M_StdySt_MtrAEng_Spd = VeSTMC_J_MtrAEng_DampingCoeff *
        VeSTMI_n_Lv2EngSpd;

    /* Sum: '<S43>/Sum1' */
    VeSTMC_M_MtrA_EngTrq = ((VeSTMC_M_MtrATrqCmndArb +
        VeSTMI_M_EngActStdyStTorq_In) - VeSTMC_M_TransientTrq_MtrAEng_Accel) -
        VeSTMC_M_StdySt_MtrAEng_Spd;
    (void)Rte_Read_VeSCMR_b_Lv2TrqK0FA_Value(&tmpRead_13);
    (void)Rte_Read_VeSCMR_M_Lv2TrqK0_Value((&(VeSTMC_M_Lv2TrqK0)));
    if (tmpRead_13)
    {
        /* Switch: '<S18>/Switch2' incorporates:
         *  Constant: '<S37>/Calib'
         */
        VeSTMC_M_Lv2TrqK0 = KeSTMR_M_K0Capacity_Default;
    }

    /* Switch: '<S460>/Switch5' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2TrqK0'
     *  Inport: '<Root>/VeSCMR_b_Lv2TrqK0FA'
     */
    rtb_Switch5_l = fabsf(VeSTMC_M_MtrA_EngTrq);

    /* Product: '<S56>/Product2' */
    VeSTMC_M_MtrA_EngRltdTrq2 = -fminf(rtb_Switch5_l, VeSTMC_M_Lv2TrqK0);
    VeSTMC_n_EngP2SpdDiff = VeSTMI_n_Lv2MtrBSpd - VeSTMI_n_Lv2EngSpd;

    /* Switch: '<S66>/Switch3' incorporates:
     *  Constant: '<S65>/Calib'
     *  RelationalOperator: '<S66>/GreaterThan'
     */
    if (VeSTMC_n_EngP2SpdDiff > KeSTMR_n_SpdThrhldforK0TrqSgnRSP)
    {
        /* Switch: '<S66>/Switch3' incorporates:
         *  Constant: '<S66>/ConstantValue'
         */
        VeSTMC_b_P2SpdGrtrEngSpd = true;
    }
    else
    {
        /* Switch: '<S66>/Switch3' incorporates:
         *  Constant: '<S64>/Calib'
         *  RelationalOperator: '<S66>/GreaterThan1'
         *  UnitDelay: '<S66>/UnitDelay1'
         */
        VeSTMC_b_P2SpdGrtrEngSpd = ((VeSTMC_n_EngP2SpdDiff >=
            KeSTMR_n_SpdThrhldforK0TrqSgnLSP) && (VeSTMC_b_P2SpdGrtrEngSpd));
    }

    /* End of Switch: '<S66>/Switch3' */

    /* Sum: '<S36>/Sum1' */
    VeSTMC_n_MtrBEng_SpdDiff = VeSTMC_n_EngP2SpdDiff;

    /* Abs: '<S36>/Abs' */
    rtb_TmpSignalConversionAtVeSSMR_n_MtrASp = fabsf(VeSTMC_n_MtrBEng_SpdDiff);

    /* Switch: '<S76>/LV2Switch1' incorporates:
     *  Constant: '<S73>/Calib'
     *  Constant: '<S74>/Calib'
     *  Constant: '<S76>/ConstantValue'
     *  RelationalOperator: '<S76>/GreaterThan'
     *  RelationalOperator: '<S76>/GreaterThan1'
     *  UnitDelay: '<S76>/UnitDelay1'
     */
    if (rtb_TmpSignalConversionAtVeSSMR_n_MtrASp > KeSTMR_n_K0SlipSpdRSP)
    {
        STMR_ac_DW.VeSTMC_b_K0Slipping_prev = true;
    }
    else
    {
        STMR_ac_DW.VeSTMC_b_K0Slipping_prev =
            ((rtb_TmpSignalConversionAtVeSSMR_n_MtrASp >= KeSTMR_n_K0SlipSpdLSP)
             && (STMR_ac_DW.VeSTMC_b_K0Slipping_prev));
    }

    /* End of Switch: '<S76>/LV2Switch1' */

    /* Logic: '<S36>/Logical3' incorporates:
     *  Constant: '<S72>/Calib'
     *  UnitDelay: '<S76>/UnitDelay1'
     */
    VeSTMC_b_K0_Opn_SpdBased = (((float32)(STMR_ac_DW.VeSTMC_b_K0Slipping_prev ?
        1.0F : 0.0F)) > KeSTMR_n_K0Cls_P2EngSpdDiff);

    /* RelationalOperator: '<S36>/Comparison4' incorporates:
     *  Constant: '<S71>/Calib'
     */
    VeSTMC_b_K0ClutchStatusOpen = (((uint16)
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2K0C) == KeSTMR_e_K0StateOpn);
    (void)Rte_Read_VeSCMR_b_Lv2K0ClutchStatusFA_Value(&tmpRead_12);

    /* Logic: '<S36>/Logical2' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2K0ClutchStatusFA'
     */
    VeSTMC_b_OkToDtrmnK0Cls = (((!tmpRead_12) &&
        (!rtb_TmpSignalConversionAtVeSSMR_b_MtrBSp)) &&
        (!rtb_TmpSignalConversionAtVeSSMR_b_EngSpd));

    /* Logic: '<S36>/Logical4' */
    VeSTMC_b_K0_Opn = (((VeSTMC_b_K0_Opn_SpdBased) &&
                        (VeSTMC_b_K0ClutchStatusOpen)) &&
                       (VeSTMC_b_OkToDtrmnK0Cls));

    /* RelationalOperator: '<S36>/Comparison1' incorporates:
     *  Constant: '<S70>/Calib'
     */
    VeSTMC_b_K0LockedSt1 = (((uint16)rtb_TmpSignalConversionAtVeSCMR_e_Lv2K0C) ==
                            KeSTMR_e_K0StateClsd);

    /* Logic: '<S36>/Logical11' incorporates:
     *  UnitDelay: '<S76>/UnitDelay1'
     */
    VeSTMC_b_K0NotSlipping = !STMR_ac_DW.VeSTMC_b_K0Slipping_prev;

    /* RelationalOperator: '<S36>/Comparison6' incorporates:
     *  Constant: '<S69>/Calib'
     */
    VeSTMC_b_HighrStatetoLockK0 = (((uint16)
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2K0C) >= KeSTMR_e_K0LockingState);

    /* Product: '<S36>/Product3' */
    VeSTMC_M_MtrATrqCmndArb1 = VeSTMC_M_MtrATrqCmndArb;

    /* Sum: '<S36>/Sum3' incorporates:
     *  Constant: '<S68>/Calib'
     */
    VeSTMC_M_MtrAEngTrqCmndArb1 = (VeSTMC_M_MtrATrqCmndArb1 +
        VeSTMI_M_EngActStdyStTorq_In) + KeSTMR_M_K0TrqLockThrshld;

    /* RelationalOperator: '<S36>/Comparison11' */
    VeSTMC_b_K0TrqHghtoLock = (VeSTMC_M_Lv2TrqK0 >= VeSTMC_M_MtrAEngTrqCmndArb1);

    /* Logic: '<S36>/Logical7' */
    VeSTMC_b_K0LockedSt2 = (((VeSTMC_b_K0NotSlipping) &&
        (VeSTMC_b_HighrStatetoLockK0)) && (VeSTMC_b_K0TrqHghtoLock));

    /* Logic: '<S36>/Logical9' */
    VeSTMC_b_K0LockedSt = ((VeSTMC_b_K0LockedSt1) || (VeSTMC_b_K0LockedSt2));

    /* Logic: '<S78>/OR1' incorporates:
     *  Logic: '<S77>/AND'
     */
    rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA = !VeSTMC_b_K0LockedSt;

    /* Switch: '<S77>/LV2Switch' incorporates:
     *  Logic: '<S78>/AND'
     *  Logic: '<S78>/OR1'
     *  MinMax: '<S77>/Minimum1'
     *  UnitDelay: '<S77>/UnitDelay1'
     *  UnitDelay: '<S78>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA &&
            (STMR_ac_DW.VeSTMC_b_K0OpeningDlyd_prev))
    {
        /* MinMax: '<S77>/Minimum1' incorporates:
         *  Constant: '<S67>/Calib'
         *  UnitDelay: '<S77>/UnitDelay1'
         */
        STMR_ac_DW.VeSTMC_Cnt_K0OpeningDlyd_prev = KeSTMR_Cnt_K0OpnDlyCnt;
    }
    else
    {
        if (((sint32)STMR_ac_DW.VeSTMC_Cnt_K0OpeningDlyd_prev) <= 1)
        {
            /* MinMax: '<S77>/Minimum1' */
            STMR_ac_DW.VeSTMC_Cnt_K0OpeningDlyd_prev = 1U;
        }

        /* MinMax: '<S77>/Minimum1' incorporates:
         *  Constant: '<S77>/ConstantValue'
         *  Sum: '<S77>/Summation'
         *  UnitDelay: '<S77>/UnitDelay1'
         */
        STMR_ac_DW.VeSTMC_Cnt_K0OpeningDlyd_prev = (uint16)((sint32)(((sint32)
            STMR_ac_DW.VeSTMC_Cnt_K0OpeningDlyd_prev) - 1));
    }

    /* End of Switch: '<S77>/LV2Switch' */

    /* Update for UnitDelay: '<S78>/UnitDelay' */
    STMR_ac_DW.VeSTMC_b_K0OpeningDlyd_prev = VeSTMC_b_K0LockedSt;

    /* Logic: '<S36>/Logical10' incorporates:
     *  Constant: '<S77>/ConstantValue2'
     *  Logic: '<S77>/AND'
     *  RelationalOperator: '<S77>/GreaterThan'
     *  UnitDelay: '<S77>/UnitDelay1'
     */
    VeSTMC_b_K0SlipStat = (rtb_TmpSignalConversionAtVeLTIR_b_Lv2RrA && (((sint32)
        STMR_ac_DW.VeSTMC_Cnt_K0OpeningDlyd_prev) <= 0));

    /* Logic: '<S36>/Logical5' */
    VeSTMC_b_K0Sliping = (((!VeSTMC_b_K0_Opn) && (VeSTMC_b_OkToDtrmnK0Cls)) &&
                          (VeSTMC_b_K0SlipStat));
    if ((VeSTMC_b_P2SpdGrtrEngSpd) && (VeSTMC_b_K0Sliping))
    {
        /* Switch: '<S45>/Switch1' incorporates:
         *  Constant: '<S45>/ConstantValue1'
         */
        VeSTMC_Cf_K0TrqFlwDirction = -1.0F;
    }
    else
    {
        /* Switch: '<S45>/Switch1' incorporates:
         *  Constant: '<S45>/ConstantValue3'
         */
        VeSTMC_Cf_K0TrqFlwDirction = 1.0F;
    }

    /* Product: '<S42>/Product8' */
    VeSTMC_M_MtrA_EngRltdTrq3 = VeSTMC_Cf_K0TrqFlwDirction * fminf
        (VeSTMC_M_MtrA_EngTrq, VeSTMC_M_Lv2TrqK0);
    if (VeSTMC_M_MtrA_EngTrq >= 0.0F)
    {
        /* Switch: '<S42>/Switch1' */
        VeSTMC_M_MtrA_EngRltdTrq = VeSTMC_M_MtrA_EngRltdTrq3;
    }
    else
    {
        /* Switch: '<S42>/Switch1' */
        VeSTMC_M_MtrA_EngRltdTrq = VeSTMC_M_MtrA_EngRltdTrq2;
    }

    /* Product: '<S44>/Product' incorporates:
     *  Constant: '<S42>/ConstantValue'
     *  Constant: '<S62>/Calib'
     */
    VeSTMC_M_TransientTrq_MtrBAccel = (KeSTMR_J_Inertia_MtrB_Ib *
        VeSTMI_dn_MtrB_Accel) * VeSTMC_Cf_InertiaFactor;

    /* Product: '<S44>/Product1' incorporates:
     *  Constant: '<S63>/Calib'
     */
    VeSTMC_M_StdySt_MtrBSpd = KeSTMR_r_Damping_MtrB_Bb * VeSTMI_n_Lv2MtrBSpd;

    /* Sum: '<S44>/Sum' */
    VeSTMC_M_MtrBRltdTrq = (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB -
                            VeSTMC_M_TransientTrq_MtrBAccel) -
        VeSTMC_M_StdySt_MtrBSpd;

    /* Logic: '<S35>/Logical' incorporates:
     *  Constant: '<S49>/Calib'
     */
    VeSTMC_b_MntrP2TrqCmndOnly = ((VeSTMC_b_K0_Opn) && (KeSTMR_b_K0_Opn_MntrP2));

    /* Sum: '<S35>/Sum4' */
    VeSTMC_M_OutputTrqCalc_P1P2_Raw = VeSTMC_M_MtrBRltdTrq +
        VeSTMC_M_MtrA_EngRltdTrq;
    if (VeSTMC_b_MntrP2TrqCmndOnly)
    {
        /* Switch: '<S35>/Switch3' */
        VeSTMC_M_OutputTrqCalc_P1P2_ILE = VeSTMC_M_MtrBRltdTrq;
    }
    else
    {
        /* Switch: '<S35>/Switch3' */
        VeSTMC_M_OutputTrqCalc_P1P2_ILE = VeSTMC_M_OutputTrqCalc_P1P2_Raw;
    }

    /* Sum: '<S35>/Sum6' */
    VeSTMC_M_To_P1P2_AeDiffTrq = VeSTMC_M_OutputTrqCalc_P1P2_ILE -
        VeSTMI_M_Lv2Lv1AeCoastTorqDiff;

    /* RelationalOperator: '<S35>/Comparison1' incorporates:
     *  Constant: '<S47>/Calib'
     */
    VeSTMC_b_Lv2TrqPos = (VeSTMC_M_To_P1P2_AeDiffTrq > KeSTMR_M_InrtiaChkTrqVal);

    /* RelationalOperator: '<S35>/Comparison2' incorporates:
     *  Constant: '<S48>/Calib'
     */
    VeSTMC_b_P2EngDecelCheck = ((VeSTMC_M_TransientTrq_MtrBAccel +
        VeSTMC_M_TransientTrq_MtrAEng_Accel) < KeSTMR_M_P2EngInrtiaChkTrqVal);

    /* RelationalOperator: '<S35>/Comparison3' incorporates:
     *  Constant: '<S52>/Calib'
     */
    VeSTMC_b_P2SpdGrtrNTurb = (rtb_Switch6_f < KeSTMR_n_P2NTurbErrorVal);
    if ((((VeSTMC_b_Lv2TrqPos) && (VeSTMC_b_P2EngDecelCheck)) &&
            (!VeSTMC_b_ILEIsLockedOK)) && (VeSTMC_b_P2SpdGrtrNTurb))
    {
        /* Switch: '<S35>/Switch2' incorporates:
         *  Constant: '<S46>/Calib'
         */
        VeSTMC_M_UnfltrdOutputTrqCalc_P1P2 = KeSTMR_M_InertiaTrqFailTrqVal;
    }
    else
    {
        /* Switch: '<S35>/Switch2' */
        VeSTMC_M_UnfltrdOutputTrqCalc_P1P2 = VeSTMC_M_To_P1P2_AeDiffTrq;
    }

    if (VeSTMC_b_MntrP2TrqCmndOnly)
    {
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp = KeSTMR_k_P2TrqCalcFiltd;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp = KeSTMR_k_OutTrqCalcFiltd;
    }

    /* Switch: '<S53>/Switch3' incorporates:
     *  Constant: '<S50>/Calib'
     *  Constant: '<S51>/Calib'
     *  Product: '<S53>/Multiplication'
     *  Sum: '<S53>/Subtraction'
     *  Sum: '<S53>/Summation'
     *  UnitDelay: '<S53>/UnitDelay1'
     */
    STMR_ac_DW.VeSTMC_M_OutputTrqCalc_Prev_prev +=
        (VeSTMC_M_UnfltrdOutputTrqCalc_P1P2 -
         STMR_ac_DW.VeSTMC_M_OutputTrqCalc_Prev_prev) *
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp;

    /* End of Outputs for SubSystem: '<S45>/LV2_Hysteresis' */
    /* End of Outputs for SubSystem: '<S36>/LV2_Hysteresis1' */
    /* End of Outputs for SubSystem: '<S36>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* End of Outputs for SubSystem: '<S35>/LV2_Digital_Lowpass_Reset_Enabled' */
#endif

    /* End of Sum: '<S34>/Sum1' */

    /* RelationalOperator: '<S21>/Comparison4' incorporates:
     *  Inport: '<Root>/VeSCMR_b_WEDFrntLeft_ShaftStFA'
     *  Inport: '<Root>/VeSCMR_b_WEDFrntRight_ShaftStFA'
     *  Inport: '<Root>/VeSCMR_e_WEDFrntLeft_ShaftSt'
     *  Inport: '<Root>/VeSCMR_e_WEDFrntRight_ShaftSt'
     *  Logic: '<S21>/Logical1'
     *  Logic: '<S21>/Logical2'
     *  Logic: '<S21>/Logical3'
     *  Logic: '<S21>/Logical4'
     *  RelationalOperator: '<S21>/Comparison1'
     *  Switch: '<S21>/Switch2'
     */
#if Rte_SysCon_Variant_STMR_FUNC_1

    (void)Rte_Read_VeSCMR_e_WEDFrntRight_ShaftSt_Value(&tmpRead_o);

    /* RelationalOperator: '<S21>/Comparison4' incorporates:
     *  Constant: '<S82>/Constant'
     *  Inport: '<Root>/VeSCMR_e_WEDFrntRight_ShaftSt'
     */
    VeSTMC_b_Lv2FrntRtShaft_DisEn = (((uint32)tmpRead_o) ==
        CeSTMR_e_WED_Disdngaged);
    (void)Rte_Read_VeSCMR_e_WEDFrntLeft_ShaftSt_Value(&tmpRead_p);

    /* RelationalOperator: '<S21>/Comparison1' incorporates:
     *  Constant: '<S83>/Constant'
     *  Inport: '<Root>/VeSCMR_e_WEDFrntLeft_ShaftSt'
     */
    VeSTMC_b_Lv2FrntLftShaft_DisEn = (((uint32)tmpRead_p) ==
        CeSTMR_e_WED_Disdngaged);

    /* Logic: '<S21>/Logical1' */
    VeSTMC_b_Lv2FrntShaft_DisEnAll = ((VeSTMC_b_Lv2FrntRtShaft_DisEn) &&
        (VeSTMC_b_Lv2FrntLftShaft_DisEn));
    (void)Rte_Read_VeSCMR_b_WEDFrntRight_ShaftStFA_Value(&tmpRead_q);
    (void)Rte_Read_VeSCMR_b_WEDFrntLeft_ShaftStFA_Value(&tmpRead_r);

    /* Logic: '<S21>/Logical2' incorporates:
     *  Constant: '<S86>/Calib'
     *  Inport: '<Root>/VeSCMR_b_WEDFrntLeft_ShaftStFA'
     *  Inport: '<Root>/VeSCMR_b_WEDFrntRight_ShaftStFA'
     */
    VeSTMC_b_Lv2WED_FrntShaftOpen = ((((KeSTMR_b_EnblWED) &&
        (VeSTMC_b_Lv2FrntShaft_DisEnAll)) && (!tmpRead_q)) && (!tmpRead_r));
    VeSTMC_r_Lv2WED_EngMultiply = (float32)((!VeSTMC_b_Lv2WED_FrntShaftOpen) ? 1
        : 0);

#endif

    /* End of RelationalOperator: '<S21>/Comparison4' */

    /* Logic: '<S21>/Logical6' incorporates:
     *  Abs: '<S21>/Abs'
     *  Constant: '<S85>/Calib'
     *  Constant: '<S87>/Calib'
     *  Inport: '<Root>/VeADAR_e_LeftActuationStatus'
     *  Inport: '<Root>/VeADAR_e_RightActuationStatus'
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFL_RPS_Flt'
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFR_RPS_Flt'
     *  Inport: '<Root>/VeLTIR_n_Lv2WhlFL_RPS'
     *  Inport: '<Root>/VeLTIR_n_Lv2WhlFR_RPS'
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFL_Spd_FA'
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFR_Spd_FA'
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFL_Spd'
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFR_Spd'
     *  Logic: '<S21>/Logical5'
     *  Product: '<S21>/Divide2'
     *  Product: '<S21>/Product4'
     *  RelationalOperator: '<S21>/GreaterThan1'
     *  RelationalOperator: '<S21>/GreaterThan2'
     *  RelationalOperator: '<S21>/GreaterThan3'
     *  Sum: '<S21>/Sum7'
     *  Sum: '<S21>/Sum8'
     *  Sum: '<S21>/Sum9'
     *  Switch: '<S21>/Switch10'
     *  Switch: '<S21>/Switch11'
     *  Switch: '<S21>/Switch3'
     *  Switch: '<S21>/Switch6'
     *  Switch: '<S21>/Switch7'
     *  Switch: '<S21>/Switch8'
     *  Switch: '<S21>/Switch9'
     */
#if Rte_SysCon_Variant_STMR_FUNC_2 || (!Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4)

    /* Outputs for Atomic SubSystem: '<S21>/DigitalLowpassResetEnabled' */
    if (KeSTMR_b_EnblAtlantisHigh_SpdSource)
    {
        (void)Rte_Read_VeLTIR_b_Lv2WhlFR_RPS_Flt_Value
            (&rtb_VeSTMC_b_Lv2WED_Faulted);
        (void)Rte_Read_VeLTIR_b_Lv2WhlFL_RPS_Flt_Value(&tmpRead_1q);

        /* Logic: '<S94>/Logical2' incorporates:
         *  Inport: '<Root>/VeLTIR_b_Lv2WhlFL_RPS_Flt'
         *  Inport: '<Root>/VeLTIR_b_Lv2WhlFR_RPS_Flt'
         *  Logic: '<S21>/Logical8'
         */
        rtb_TmpSignalConversionAtVeSSMR_b_EngSpd = (tmpRead_1q ||
            rtb_VeSTMC_b_Lv2WED_Faulted);
    }
    else
    {
        (void)Rte_Read_VeSCMR_b_Lv2WhlFR_Spd_FA_Value
            (&rtb_VeSTMC_b_Lv2WED_Faulted);
        (void)Rte_Read_VeSCMR_b_Lv2WhlFL_Spd_FA_Value(&tmpRead_1q);

        /* Logic: '<S94>/Logical2' incorporates:
         *  Inport: '<Root>/VeSCMR_b_Lv2WhlFL_Spd_FA'
         *  Inport: '<Root>/VeSCMR_b_Lv2WhlFR_Spd_FA'
         *  Logic: '<S21>/Logical9'
         */
        rtb_TmpSignalConversionAtVeSSMR_b_EngSpd = (tmpRead_1q ||
            rtb_VeSTMC_b_Lv2WED_Faulted);
    }

    /* Logic: '<S21>/Logical5' incorporates:
     *  Constant: '<S85>/Calib'
     *  Constant: '<S86>/Calib'
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFL_RPS_Flt'
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFR_RPS_Flt'
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFL_Spd_FA'
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFR_Spd_FA'
     */
    rtb_VeSTMC_b_Lv2WED_Faulted = ((!KeSTMR_b_EnblWED) ||
        rtb_TmpSignalConversionAtVeSSMR_b_EngSpd);
    if (KeSTMR_b_EnblAtlantisHigh_SpdSource)
    {
        (void)Rte_Read_VeLTIR_n_Lv2WhlFR_RPS_Value(&tmpRead_1p);
        (void)Rte_Read_VeLTIR_n_Lv2WhlFL_RPS_Value(&tmpRead_1o);

        /* Switch: '<S21>/Switch10' incorporates:
         *  Gain: '<S21>/Gain3'
         *  Inport: '<Root>/VeLTIR_n_Lv2WhlFL_RPS'
         *  Inport: '<Root>/VeLTIR_n_Lv2WhlFR_RPS'
         *  Sum: '<S21>/Sum10'
         */
        VeSTMC_n_Lv2AvgWhlFL_RPM = (tmpRead_1o + tmpRead_1p) * 30.0F;
    }
    else
    {
        (void)Rte_Read_VeSCMR_n_Lv2WhlFR_Spd_Value(&tmpRead_1p);
        (void)Rte_Read_VeSCMR_n_Lv2WhlFL_Spd_Value(&tmpRead_1o);

        /* Switch: '<S21>/Switch10' incorporates:
         *  Gain: '<S21>/Gain2'
         *  Inport: '<Root>/VeSCMR_n_Lv2WhlFL_Spd'
         *  Inport: '<Root>/VeSCMR_n_Lv2WhlFR_Spd'
         *  Sum: '<S21>/Sum6'
         */
        VeSTMC_n_Lv2AvgWhlFL_RPM = (tmpRead_1o + tmpRead_1p) * 0.5F;
    }

    /* Product: '<S21>/Product4' incorporates:
     *  Constant: '<S85>/Calib'
     *  Constant: '<S90>/Calib'
     *  Inport: '<Root>/VeLTIR_n_Lv2WhlFL_RPS'
     *  Inport: '<Root>/VeLTIR_n_Lv2WhlFR_RPS'
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFL_Spd'
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFR_Spd'
     */
    VeSTMC_n_Lv2WhlFrnt_Avg = VeSTMC_n_Lv2AvgWhlFL_RPM * KeSTMR_r_FDRratio;

    /* RelationalOperator: '<S21>/GreaterThan1' incorporates:
     *  Constant: '<S89>/Calib'
     */
    VeSTMC_b_Lv2WEDSpdNormDisEnbl = (VeSTMC_n_Lv2WhlFrnt_Avg <
        KeSTMR_n_WEDMntr_CreepSpdRPM);

    /* Sum: '<S21>/Sum9' */
    VeSTMC_n_Lv2WEDSpdDiff_WhlMtr = VeSTMC_n_Lv2WhlFrnt_Avg -
        VeSTMI_n_Lv2MtrASpd;

    /* Lookup_n-D: '<S488>/Vector' incorporates:
     *  UnitDelay: '<S81>/Unit Delay'
     */
    rtb_Switch5_l = STMR_ac_DW.UnitDelay_DSTATE_o;

    /* Switch: '<S81>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  Product: '<S81>/Multiplication'
     *  Sum: '<S81>/Subtraction'
     *  Sum: '<S81>/Summation'
     */
    VeSTMC_n_Lv2WEDSpdDiff_WhlMtr_Filt = ((VeSTMC_n_Lv2WEDSpdDiff_WhlMtr -
        rtb_Switch5_l) * KeSTMR_k_WEDSpdDiffFiltercoeff) + rtb_Switch5_l;

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    STMR_ac_DW.UnitDelay_DSTATE_o = VeSTMC_n_Lv2WEDSpdDiff_WhlMtr_Filt;

    /* Abs: '<S21>/Abs' */
    VeSTMC_n_Lv2WEDSpdDiff_WhlMtr_Abs = fabsf(VeSTMC_n_Lv2WEDSpdDiff_WhlMtr_Filt);
    if (VeSTMC_b_Lv2WEDSpdNormDisEnbl)
    {
        /* Switch: '<S21>/Switch8' incorporates:
         *  Constant: '<S21>/ConstantValue8'
         */
        VeSTMC_r_Lv2WEDSpdDiff_Norm = 0.0F;
    }
    else
    {
        /* Switch: '<S21>/Switch8' incorporates:
         *  Product: '<S21>/Divide1'
         */
        VeSTMC_r_Lv2WEDSpdDiff_Norm = VeSTMC_n_Lv2WEDSpdDiff_WhlMtr_Abs /
            VeSTMC_n_Lv2WhlFrnt_Avg;
    }

    /* RelationalOperator: '<S21>/GreaterThan2' incorporates:
     *  Constant: '<S92>/Calib'
     */
    VeSTMC_b_Lv2WED_SpdEqual = (VeSTMC_r_Lv2WEDSpdDiff_Norm <
        KeSTMR_r_WEDSpdThsh_Closed);

    /* RelationalOperator: '<S21>/GreaterThan3' incorporates:
     *  Constant: '<S91>/Calib'
     */
    VeSTMC_b_Lv2WED_SpdOpen = (VeSTMC_r_Lv2WEDSpdDiff_Norm >
        KeSTMR_r_WEDSpdDiff_Open);

    /* Product: '<S21>/Divide2' incorporates:
     *  Constant: '<S91>/Calib'
     *  Constant: '<S92>/Calib'
     */
    VeSTMC_r_Lv2WED_norm = (VeSTMC_r_Lv2WEDSpdDiff_Norm -
                            KeSTMR_r_WEDSpdDiff_Open) /
        (KeSTMR_r_WEDSpdThsh_Closed - KeSTMR_r_WEDSpdDiff_Open);
    if (KeSTMR_b_Enbl_UseLv1WEDSts)
    {
        (void)Rte_Read_VeADAR_e_RightActuationStatus_Value(&tmpRead_1s);
        (void)Rte_Read_VeADAR_e_LeftActuationStatus_Value(&tmpRead_1r);

        /* Switch: '<S460>/Switch5' incorporates:
         *  Constant: '<S84>/Constant'
         *  Inport: '<Root>/VeADAR_e_LeftActuationStatus'
         *  Inport: '<Root>/VeADAR_e_RightActuationStatus'
         *  Logic: '<S21>/Logical7'
         *  RelationalOperator: '<S21>/Comparison2'
         *  RelationalOperator: '<S21>/Comparison3'
         */
        rtb_Switch5_l = (float32)(((((uint32)tmpRead_1r) != CeADAR_e_SS_Open) ||
            (((uint32)tmpRead_1s) != CeADAR_e_SS_Open)) ? 1 : 0);
    }
    else if (rtb_VeSTMC_b_Lv2WED_Faulted)
    {
        /* Switch: '<S460>/Switch5' incorporates:
         *  Constant: '<S21>/ConstantValue3'
         *  Switch: '<S21>/Switch7'
         */
        rtb_Switch5_l = 1.0F;
    }
    else if (VeSTMC_b_Lv2WED_SpdEqual)
    {
        /* Switch: '<S460>/Switch5' incorporates:
         *  Constant: '<S21>/ConstantValue4'
         *  Switch: '<S21>/Switch6'
         *  Switch: '<S21>/Switch7'
         */
        rtb_Switch5_l = 1.0F;
    }
    else if (VeSTMC_b_Lv2WED_SpdOpen)
    {
        /* Switch: '<S460>/Switch5' incorporates:
         *  Constant: '<S21>/ConstantValue5'
         *  Switch: '<S21>/Switch6'
         *  Switch: '<S21>/Switch7'
         *  Switch: '<S21>/Switch9'
         */
        rtb_Switch5_l = 0.0F;
    }
    else
    {
        /* Switch: '<S460>/Switch5' incorporates:
         *  Switch: '<S21>/Switch6'
         *  Switch: '<S21>/Switch7'
         *  Switch: '<S21>/Switch9'
         */
        rtb_Switch5_l = VeSTMC_r_Lv2WED_norm;
    }

    /* End of Outputs for SubSystem: '<S21>/DigitalLowpassResetEnabled' */
#endif

    /* End of Logic: '<S21>/Logical6' */

    /* SignalConversion generated from: '<S21>/Variant Source' */
#if Rte_SysCon_Variant_STMR_FUNC_2

    VeSTMC_r_Lv2WED_EngMultiply = rtb_Switch5_l;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source' */

    /* SignalConversion generated from: '<S21>/Variant Source' incorporates:
     *  Constant: '<S21>/ConstantValue10'
     */
#if Rte_SysCon_Variant_STMR_FUNC_3

    VeSTMC_r_Lv2WED_EngMultiply = 1.0F;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source' */

    /* SignalConversion generated from: '<S21>/Variant Source' incorporates:
     *  Constant: '<S21>/ConstantValue11'
     */
#if Rte_SysCon_Variant_STMR_FUNC_4

    VeSTMC_r_Lv2WED_EngMultiply = 1.0F;

#elif !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    /* SignalConversion generated from: '<S21>/Variant Source' */
    VeSTMC_r_Lv2WED_EngMultiply = rtb_Switch5_l;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source' */

    /* Gain: '<S20>/Gain' incorporates:
     *  Constant: '<S79>/Calib'
     *  Gain: '<S20>/Gain1'
     *  Product: '<S20>/Product5'
     *  Sum: '<S20>/Sum4'
     *  Switch: '<S20>/Switch3'
     *  Switch: '<S20>/Switch4'
     *  Switch: '<S20>/Switch5'
     */
#if (!Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4) || Rte_SysCon_Variant_STMR_FUNC_1 || Rte_SysCon_Variant_STMR_FUNC_2

    /* Gain: '<S20>/Gain' */
    VeSTMC_M_Lv2MtrATrqCmndRev = -VeSTMC_M_NetMtrBTrqCmnd;
    if (KeSTMR_b_EnblLv2Garage)
    {
        /* Switch: '<S20>/Switch3' */
        VeSTMC_b_VehInRev_LashArb = rtb_TmpSignalConversionAtVeDTMR_b_VehIn_;
    }
    else
    {
        /* Switch: '<S20>/Switch3' */
        VeSTMC_b_VehInRev_LashArb = VeSTMI_b_Lv2VehInRev;
    }

    if (VeSTMC_b_VehInRev_LashArb)
    {
        /* Switch: '<S20>/Switch4' */
        VeSTMC_M_NetMtrATrqCmnd_bfWED = VeSTMC_M_Lv2MtrATrqCmndRev;
    }
    else
    {
        /* Switch: '<S20>/Switch4' */
        VeSTMC_M_NetMtrATrqCmnd_bfWED = VeSTMC_M_NetMtrBTrqCmnd;
    }

    /* Product: '<S20>/Product5' incorporates:
     *  Constant: '<S79>/Calib'
     */
    VeSTMC_M_NetMtrATrqCmnd_Arb = VeSTMC_r_Lv2WED_EngMultiply *
        VeSTMC_M_NetMtrATrqCmnd_bfWED;

    /* Gain: '<S20>/Gain1' */
    VeSTMC_M_Lv2MtrBTrqCmndRev = -VeSTMC_M_NetMtrATrqCmnd;
    if (VeSTMC_b_VehInRev_LashArb)
    {
        /* Switch: '<S20>/Switch5' */
        VeSTMC_M_NetMtrBTrqCmnd_Arb = VeSTMC_M_Lv2MtrBTrqCmndRev;
    }
    else
    {
        /* Switch: '<S20>/Switch5' */
        VeSTMC_M_NetMtrBTrqCmnd_Arb = VeSTMC_M_NetMtrATrqCmnd;
    }

    /* Switch: '<S460>/Switch5' */
    rtb_Switch5_l = VeSTMC_M_NetMtrATrqCmnd_Arb + VeSTMC_M_NetMtrBTrqCmnd_Arb;

#endif

    /* End of Gain: '<S20>/Gain' */

    /* SignalConversion generated from: '<S9>/Variant Source' */
#if Rte_SysCon_Variant_STMR_FUNC_1

    /* VariantMerge generated from: '<S9>/Variant Source' */
    VeSTMC_M_NetTransTrqCmnd_Arb = rtb_Switch5_l;

#endif

    /* End of SignalConversion generated from: '<S9>/Variant Source' */

    /* SignalConversion generated from: '<S9>/Variant Source' */
#if Rte_SysCon_Variant_STMR_FUNC_2

    /* VariantMerge generated from: '<S9>/Variant Source' */
    VeSTMC_M_NetTransTrqCmnd_Arb = rtb_Switch5_l;

#endif

    /* End of SignalConversion generated from: '<S9>/Variant Source' */

    /* SignalConversion generated from: '<S9>/Variant Source' */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* VariantMerge generated from: '<S9>/Variant Source' incorporates:
     *  UnitDelay: '<S53>/UnitDelay1'
     */
    VeSTMC_M_NetTransTrqCmnd_Arb = STMR_ac_DW.VeSTMC_M_OutputTrqCalc_Prev_prev;

#elif !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    /* VariantMerge generated from: '<S9>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S9>/Variant Source'
     */
    VeSTMC_M_NetTransTrqCmnd_Arb = rtb_Switch5_l;

#endif

    /* End of SignalConversion generated from: '<S9>/Variant Source' */

    /* SignalConversion generated from: '<S21>/Variant Source1' incorporates:
     *  Constant: '<S21>/FALSEConstant1'
     */
#if Rte_SysCon_Variant_STMR_FUNC_1

    VeSTMC_b_Lv2WED_ArbEnb = false;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source1' */

    /* SignalConversion generated from: '<S21>/Variant Source1' */
#if Rte_SysCon_Variant_STMR_FUNC_2

    VeSTMC_b_Lv2WED_ArbEnb = rtb_VeSTMC_b_Lv2WED_Faulted;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source1' */

    /* SignalConversion generated from: '<S21>/Variant Source1' incorporates:
     *  Constant: '<S21>/TRUEConstant2'
     */
#if Rte_SysCon_Variant_STMR_FUNC_3

    VeSTMC_b_Lv2WED_ArbEnb = true;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source1' */

    /* SignalConversion generated from: '<S21>/Variant Source1' incorporates:
     *  Constant: '<S21>/TRUEConstant3'
     */
#if Rte_SysCon_Variant_STMR_FUNC_4

    VeSTMC_b_Lv2WED_ArbEnb = true;

#elif !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    /* SignalConversion generated from: '<S21>/Variant Source1' */
    VeSTMC_b_Lv2WED_ArbEnb = rtb_VeSTMC_b_Lv2WED_Faulted;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source1' */

    /* Lookup_n-D: '<S179>/Vector' incorporates:
     *  Abs: '<S339>/Abs'
     *  Abs: '<S341>/Abs'
     *  Abs: '<S342>/Abs'
     *  Constant: '<S337>/ConstantValue2'
     *  Constant: '<S338>/ConstantValue3'
     *  Constant: '<S368>/Calib'
     *  Constant: '<S389>/Calib'
     *  Constant: '<S391>/Calib'
     *  DataTypeConversion: '<S341>/DataTypeConversion1'
     *  DataTypeConversion: '<S341>/DataTypeConversion2'
     *  Inport: '<Root>/VeSCMR_M_P2SpdCntrl_MaxTrqLmt'
     *  Inport: '<Root>/VeSCMR_M_P2SpdCntrl_MinTrqLmt'
     *  Inport: '<Root>/VeSCMR_b_CircumfFA'
     *  Inport: '<Root>/VeSCMR_b_Lv2TargetGear_FA'
     *  Inport: '<Root>/VeSCMR_b_P2SpdCntrl_MaxTrqLmtFA'
     *  Inport: '<Root>/VeSCMR_b_P2SpdCntrl_MinTrqLmtFA'
     *  Inport: '<Root>/VeSCMR_b_P2SpdControl_ReqFA'
     *  Inport: '<Root>/VeSCMR_e_P2SpdControl_Req'
     *  Inport: '<Root>/VeSCMR_l_Circumf'
     *  Logic: '<S339>/Logical45'
     *  Logic: '<S339>/Logical46'
     *  Logic: '<S339>/Logical47'
     *  Logic: '<S341>/Logical1'
     *  Logic: '<S341>/Logical2'
     *  Logic: '<S341>/Logical3'
     *  Logic: '<S341>/Logical4'
     *  Logic: '<S341>/Logical5'
     *  Logic: '<S341>/Logical6'
     *  Logic: '<S342>/Logical1'
     *  Logic: '<S342>/Logical2'
     *  Logic: '<S342>/Logical3'
     *  Logic: '<S342>/Logical39'
     *  Logic: '<S342>/Logical44'
     *  Logic: '<S342>/Logical60'
     *  Logic: '<S343>/Logical1'
     *  Logic: '<S343>/Logical2'
     *  Logic: '<S399>/AND'
     *  Lookup_n-D: '<S351>/Vector'
     *  Lookup_n-D: '<S374>/Vector'
     *  Lookup_n-D: '<S375>/Vector'
     *  Lookup_n-D: '<S395>/Vector'
     *  Lookup_n-D: '<S396>/Vector'
     *  Product: '<S337>/Product1'
     *  Product: '<S342>/Product'
     *  Product: '<S538>/Product1'
     *  RelationalOperator: '<S339>/Comparison10'
     *  RelationalOperator: '<S339>/Comparison8'
     *  RelationalOperator: '<S341>/Comparison1'
     *  RelationalOperator: '<S341>/Comparison2'
     *  RelationalOperator: '<S342>/Comparison1'
     *  RelationalOperator: '<S377>/Comparison'
     *  RelationalOperator: '<S384>/Comparison'
     *  RelationalOperator: '<S399>/GreaterThan'
     *  Sum: '<S337>/Sum1'
     *  Sum: '<S338>/Sum4'
     *  Sum: '<S339>/Sum2'
     *  Sum: '<S342>/Sum1'
     *  Sum: '<S342>/Sum2'
     *  Sum: '<S343>/Sum1'
     *  Sum: '<S343>/Sum2'
     *  Sum: '<S343>/Sum3'
     *  Sum: '<S343>/Sum4'
     *  Switch: '<S165>/Switch9'
     *  Switch: '<S337>/Switch15'
     *  Switch: '<S337>/Switch7'
     *  Switch: '<S337>/Switch9'
     *  Switch: '<S338>/Switch12'
     *  Switch: '<S338>/Switch16'
     *  Switch: '<S338>/Switch8'
     *  Switch: '<S340>/Switch3'
     *  Switch: '<S341>/Switch1'
     *  Switch: '<S341>/Switch10'
     *  Switch: '<S341>/Switch2'
     *  Switch: '<S341>/Switch3'
     *  Switch: '<S341>/Switch4'
     *  Switch: '<S343>/Switch1'
     *  Switch: '<S343>/Switch2'
     *  Switch: '<S343>/Switch3'
     *  Switch: '<S343>/Switch4'
     *  Switch: '<S377>/Switch'
     *  Switch: '<S384>/Switch'
     *  UnitDelay: '<S343>/UnitDelay1'
     *  UnitDelay: '<S343>/UnitDelay2'
     *  UnitDelay: '<S357>/UnitDelay1'
     *  UnitDelay: '<S358>/UnitDelay1'
     *  UnitDelay: '<S399>/UnitDelay1'
     */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* Outputs for Atomic SubSystem: '<S338>/LV2_Digital_Lowpass_Reset_Enabled1' */
    /* Outputs for Atomic SubSystem: '<S343>/MinLowpassResetEnabled1' */
    /* Outputs for Atomic SubSystem: '<S343>/Hysteresis' */
    /* Outputs for Atomic SubSystem: '<S337>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Outputs for Atomic SubSystem: '<S341>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S341>/TurnOnDelaySample' */
    /* Outputs for Atomic SubSystem: '<S341>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S343>/MaxLowpassResetEnabled' */
    /* Outputs for Atomic SubSystem: '<S343>/Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S342>/LV2_Accumulator_Reset_Limited' */
    /* Outputs for Atomic SubSystem: '<S342>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* Outputs for Atomic SubSystem: '<S342>/Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S342>/MaxLowpassResetEnabled' */
    /* Lookup_n-D: '<S179>/Vector' incorporates:
     *  Switch: '<S539>/Switch10'
     */
    VeSTMC_M_MaxLim_Final_Lmt = look1_iflf_binlca_16a(VeSTMI_r_TorqueTransRatio,
        ((const float32 *)&(KxSTMR_M_UnAcc_HTSH_TTR[0])), ((const float32 *)
        &(KtSTMR_M_UnAcc_HTSH_TTR[0])), 14U);
    if (rtb_TmpSignalConversionAtVeSCMR_b_Torque)
    {
        /* Switch: '<S165>/Switch9' incorporates:
         *  Constant: '<S173>/Calib'
         */
        VeSTMC_M_MaxLim_Final_Lmt_Arb = KeSTMR_K_MaxErrIntLmt;
    }
    else
    {
        /* Switch: '<S165>/Switch9' */
        VeSTMC_M_MaxLim_Final_Lmt_Arb = VeSTMC_M_MaxLim_Final_Lmt;
    }

    /* Sum: '<S339>/Sum2' */
    VeSTMC_n_P2NTurbError = VeSTMI_n_Lv2MtrBSpd -
        rtb_TmpSignalConversionAtVeSSMR_n_TurbSp;

    /* RelationalOperator: '<S339>/Comparison10' incorporates:
     *  Constant: '<S385>/Calib'
     */
    VeSTMC_b_P2NTurbInLim = (fabsf(VeSTMC_n_P2NTurbError) <=
        KeSTMR_n_P2NTurbErrorThrhld);
    (void)Rte_Read_VeSCMR_b_P2SpdControl_ReqFA_Value(&tmpRead_1j);
    (void)Rte_Read_VeSCMR_e_P2SpdControl_Req_Value(&tmpRead_1k);

    /* Logic: '<S339>/Logical46' incorporates:
     *  Inport: '<Root>/VeSCMR_b_P2SpdControl_ReqFA'
     *  Inport: '<Root>/VeSCMR_e_P2SpdControl_Req'
     */
    VeSTMC_b_P2SpdControl_Req = ((!tmpRead_1j) && (((sint32)tmpRead_1k) == 1));

    /* Logic: '<S339>/Logical47' */
    VeSTMC_b_P2NTurbErrorOK = ((VeSTMC_b_P2NTurbInLim) &&
        (VeSTMC_b_P2SpdControl_Req));
    if (VeSTMC_b_P2NTurbErrorOK)
    {
        /* Switch: '<S337>/Switch9' incorporates:
         *  Constant: '<S337>/ConstantValue4'
         *  Inport: '<Root>/VeSCMR_M_P2SpdCntrl_MaxTrqLmt'
         */
        VeSTMC_M_P2SpdCntrl_MaxTrqLmt = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeSCMR_M_P2SpdCntrl_MaxTrqLmt_Value
            ((&(VeSTMC_M_P2SpdCntrl_MaxTrqLmt)));
        (void)Rte_Read_VeSCMR_b_P2SpdCntrl_MaxTrqLmtFA_Value(&tmpRead_1h);

        /* Switch: '<S337>/Switch10' incorporates:
         *  Inport: '<Root>/VeSCMR_M_P2SpdCntrl_MaxTrqLmt'
         *  Inport: '<Root>/VeSCMR_b_P2SpdCntrl_MaxTrqLmtFA'
         */
        if (tmpRead_1h)
        {
            /* Switch: '<S337>/Switch9' incorporates:
             *  Constant: '<S371>/Calib'
             */
            VeSTMC_M_P2SpdCntrl_MaxTrqLmt = KeSTMR_M_P2SpdCntrl_MxTrqDflt;
        }

        /* End of Switch: '<S337>/Switch10' */
    }

    /* Sum: '<S342>/Sum2' incorporates:
     *  Inport: '<Root>/VeSCMR_M_P2SpdCntrl_MaxTrqLmt'
     *  Inport: '<Root>/VeSCMR_b_P2SpdCntrl_MaxTrqLmtFA'
     */
    VeSTMC_n_IdleSpdError = VeSTMI_n_Lv2MtrBSpd -
        rtb_TmpSignalConversionAtVeOHSR_n_IdleSp;

    /* Lookup_n-D: '<S351>/Vector' incorporates:
     *  Sum: '<S342>/Sum2'
     *  Switch: '<S620>/Switch1'
     */
    VeSTMC_M_UnderShootPrtcn = look2_iflf_binlca_16a(VeSTMC_n_IdleSpdError,
        VeSTMI_n_Lv2MtrBSpd, ((const float32 *)&(KxSTMR_M_UnderShootPrtcn[0])),
        ((const float32 *)&(KySTMR_M_UnderShootPrtcn[0])), ((const float32 *)
        &(KtSTMR_M_UnderShootPrtcn[0])), STMR_ac_ConstP.Vector_maxIndex, 5U);

    /* Lookup_n-D: '<S488>/Vector' incorporates:
     *  UnitDelay: '<S354>/UnitDelay1'
     */
    rtb_Switch5_l = STMR_ac_DW.UnitDelay1_DSTATE_p;

    /* Switch: '<S354>/Switch9' incorporates:
     *  Constant: '<S350>/Calib'
     *  Product: '<S354>/Multiplication'
     *  Sum: '<S354>/Subtraction'
     *  Sum: '<S354>/Summation'
     */
    VeSTMC_M_UnderShootPrtcn_Fild = ((VeSTMC_M_UnderShootPrtcn - rtb_Switch5_l) *
        KeSTMR_r_UndrShtTrqFltrCoef) + rtb_Switch5_l;

    /* Update for UnitDelay: '<S354>/UnitDelay1' */
    STMR_ac_DW.UnitDelay1_DSTATE_p = VeSTMC_M_UnderShootPrtcn_Fild;

    /* Product: '<S342>/Product' incorporates:
     *  Constant: '<S349>/Calib'
     */
    VeSTMC_r_DecayRate = VeSTMC_M_UnderShootPrtcn_Fild *
        KeSTMR_r_UndrShtPrtctnDecayRate;

    /* RelationalOperator: '<S342>/Comparison1' incorporates:
     *  Constant: '<S346>/Calib'
     */
    VeSTMC_b_SpdErrChngResetdecay = (fabsf(VeSTMC_n_IdleSpdError) >=
        KeSTMR_n_IdlSpdErrToRstDecay);

    /* Switch: '<S344>/Switch3' incorporates:
     *  Constant: '<S344>/ConstantValue'
     *  Constant: '<S347>/Calib'
     *  Constant: '<S348>/Calib'
     *  RelationalOperator: '<S344>/GreaterThan'
     *  RelationalOperator: '<S344>/GreaterThan1'
     *  UnitDelay: '<S344>/UnitDelay1'
     */
    if (VeSTMC_n_IdleSpdError > KeSTMR_n_UndrShtActvThrshldRSP)
    {
        STMR_ac_DW.VeSTMC_r_TTR_Prev_g = true;
    }
    else
    {
        STMR_ac_DW.VeSTMC_r_TTR_Prev_g = ((VeSTMC_n_IdleSpdError >=
            KeSTMR_n_UndrShtActvThrshldLSP) && (STMR_ac_DW.VeSTMC_r_TTR_Prev_g));
    }

    /* End of Switch: '<S344>/Switch3' */

    /* Logic: '<S342>/Logical1' incorporates:
     *  UnitDelay: '<S344>/UnitDelay1'
     */
    VeSTMC_b_SpdErrStallPsbl = !STMR_ac_DW.VeSTMC_r_TTR_Prev_g;

    /* Logic: '<S342>/Logical39' */
    VeSTMC_b_UndrShootPrtctActv = ((((VeSTMC_b_SpdErrStallPsbl) &&
        (VeSTMI_b_4HighActvGd)) && (!VeSTMI_b_AllModeCreepActv)) &&
        (!VeSTMI_b_Lv2VehInParkNeutral));

    /* Switch: '<S353>/Switch9' incorporates:
     *  Logic: '<S356>/AND'
     *  Logic: '<S356>/OR1'
     *  MinMax: '<S353>/Minimum1'
     *  UnitDelay: '<S353>/UnitDelay'
     *  UnitDelay: '<S356>/UnitDelay'
     */
    if ((!VeSTMC_b_UndrShootPrtctActv) && (STMR_ac_DW.UnitDelay_DSTATE_js))
    {
        /* MinMax: '<S353>/Minimum1' incorporates:
         *  Constant: '<S345>/Calib'
         *  UnitDelay: '<S353>/UnitDelay'
         */
        STMR_ac_DW.UnitDelay_DSTATE_f = KeSTMR_Cnt_UndrShtActvDly;
    }
    else
    {
        if (((sint32)STMR_ac_DW.UnitDelay_DSTATE_f) <= 1)
        {
            /* MinMax: '<S353>/Minimum1' */
            STMR_ac_DW.UnitDelay_DSTATE_f = 1U;
        }

        /* MinMax: '<S353>/Minimum1' incorporates:
         *  Constant: '<S353>/ConstantValue'
         *  Sum: '<S353>/Summation'
         *  UnitDelay: '<S353>/UnitDelay'
         */
        STMR_ac_DW.UnitDelay_DSTATE_f = (uint16)((sint32)(((sint32)
            STMR_ac_DW.UnitDelay_DSTATE_f) - 1));
    }

    /* End of Switch: '<S353>/Switch9' */

    /* Logic: '<S353>/AND' incorporates:
     *  Constant: '<S353>/ConstantValue2'
     *  RelationalOperator: '<S353>/GreaterThan'
     *  UnitDelay: '<S353>/UnitDelay'
     */
    VeSTMC_b_UndrShootPrtctActvDly = ((VeSTMC_b_UndrShootPrtctActv) || (((sint32)
        STMR_ac_DW.UnitDelay_DSTATE_f) > 0));

    /* Update for UnitDelay: '<S356>/UnitDelay' */
    STMR_ac_DW.UnitDelay_DSTATE_js = VeSTMC_b_UndrShootPrtctActv;

    /* Logic: '<S342>/Logical2' */
    VeSTMC_b_ResetDecay = ((VeSTMC_b_SpdErrChngResetdecay) ||
                           (!VeSTMC_b_UndrShootPrtctActvDly));

    /* Switch: '<S352>/Switch9' incorporates:
     *  Constant: '<S342>/ConstantValue3'
     *  UnitDelay: '<S352>/UnitDelay'
     */
    if (VeSTMC_b_ResetDecay)
    {
        STMR_ac_DW.UnitDelay_DSTATE_k5 = 0.0F;
    }
    else
    {
        /* Sum: '<S352>/Summation' incorporates:
         *  UnitDelay: '<S352>/UnitDelay'
         */
        STMR_ac_DW.UnitDelay_DSTATE_k5 += VeSTMC_r_DecayRate;

        /* Outputs for Atomic SubSystem: '<S352>/Limiter' */
        /* Switch: '<S355>/Switch9' incorporates:
         *  RelationalOperator: '<S355>/RelationalOperator'
         */
        if (VeSTMC_M_UnderShootPrtcn_Fild < STMR_ac_DW.UnitDelay_DSTATE_k5)
        {
            /* Switch: '<S355>/Switch9' */
            STMR_ac_DW.UnitDelay_DSTATE_k5 = VeSTMC_M_UnderShootPrtcn_Fild;
        }

        /* End of Switch: '<S355>/Switch9' */

        /* Switch: '<S355>/Switch1' incorporates:
         *  Constant: '<S342>/ConstantValue1'
         *  RelationalOperator: '<S355>/RelationalOperator1'
         *  UnitDelay: '<S352>/UnitDelay'
         */
        if (STMR_ac_DW.UnitDelay_DSTATE_k5 <= 0.0F)
        {
            STMR_ac_DW.UnitDelay_DSTATE_k5 = 0.0F;
        }

        /* End of Switch: '<S355>/Switch1' */
        /* End of Outputs for SubSystem: '<S352>/Limiter' */
    }

    /* End of Switch: '<S352>/Switch9' */

    /* Sum: '<S342>/Sum1' incorporates:
     *  UnitDelay: '<S352>/UnitDelay'
     */
    VeSTMC_M_DeltaTrqUndrShtPrtct = VeSTMC_M_UnderShootPrtcn_Fild -
        STMR_ac_DW.UnitDelay_DSTATE_k5;
    if ((VeSTMI_b_Lv2RgnBrkFltd) || ((VeSTMI_b_Lv2VehInRev) &&
            (KeSTMR_b_SetRgnReqZeroInR)))
    {
        /* Switch: '<S343>/Switch4' incorporates:
         *  Constant: '<S367>/Calib'
         */
        VeSTMC_M_RegenReqArb_Offset = KeSTMR_M_RegenBrkAxTorqReqst;
    }
    else
    {
        /* Switch: '<S343>/Switch4' */
        VeSTMC_M_RegenReqArb_Offset = VeSTMI_M_Lv2RgnBrkAxlTrqReq;
    }

    /* Sum: '<S343>/Sum3' incorporates:
     *  Constant: '<S368>/Calib'
     */
    VeSTMC_M_DrvrDmndSlipMax = (rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri +
        VeSTMC_M_RegenReqArb_Offset) - STMR_ac_DW.VeSTMC_r_TTR_Prev;

    /* Switch: '<S358>/Switch3' incorporates:
     *  Constant: '<S358>/ConstantValue'
     *  Constant: '<S363>/Calib'
     *  Constant: '<S365>/Calib'
     *  RelationalOperator: '<S358>/GreaterThan'
     *  RelationalOperator: '<S358>/GreaterThan1'
     *  UnitDelay: '<S358>/UnitDelay1'
     */
    if (VeSTMC_M_DrvrDmndSlipMax > KeSTMR_M_DrvrPosDiffThrshld)
    {
        STMR_ac_DW.VeSTMC_r_TTR_Prev_c = true;
    }
    else
    {
        STMR_ac_DW.VeSTMC_r_TTR_Prev_c = ((VeSTMC_M_DrvrDmndSlipMax >=
            KeSTMR_M_DrvrNegDiffThrshld) && (STMR_ac_DW.VeSTMC_r_TTR_Prev_c));
    }

    /* End of Switch: '<S358>/Switch3' */
    if (STMR_ac_DW.VeSTMC_r_TTR_Prev_c)
    {
        /* Switch: '<S343>/Switch3' incorporates:
         *  Constant: '<S360>/Calib'
         */
        VeSTMC_k_DrvrDmnd_MaxFCoef = KeSTMR_K_DrvDmndDlyRiseCoeff;
    }
    else
    {
        /* Switch: '<S343>/Switch3' incorporates:
         *  Constant: '<S359>/Calib'
         */
        VeSTMC_k_DrvrDmnd_MaxFCoef = KeSTMR_K_DrvDmndDlyCoeff;
    }

    /* Switch: '<S369>/Switch9' incorporates:
     *  Product: '<S369>/Multiplication'
     *  Sum: '<S369>/Subtraction'
     *  Sum: '<S369>/Summation'
     *  UnitDelay: '<S358>/UnitDelay1'
     *  UnitDelay: '<S369>/UnitDelay1'
     */
    VeSTMC_M_DrvDmndMax_NoUnder = ((rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri -
        VeSTMC_M_DrvDmndMax_NoUnder) * VeSTMC_k_DrvrDmnd_MaxFCoef) +
        VeSTMC_M_DrvDmndMax_NoUnder;

    /* Sum: '<S343>/Sum1' */
    VeSTMC_M_DrvrRqstWithUndrShtTrq = VeSTMC_M_DeltaTrqUndrShtPrtct +
        VeSTMC_M_DrvDmndMax_NoUnder;
    if (VeSTMC_b_UndrShootPrtctActvDly)
    {
        /* Switch: '<S343>/Switch1' */
        VeSTMC_M_DrvDmndMax_P1P2 = VeSTMC_M_DrvrRqstWithUndrShtTrq;
    }
    else
    {
        /* Switch: '<S343>/Switch1' */
        VeSTMC_M_DrvDmndMax_P1P2 = VeSTMC_M_DrvDmndMax_NoUnder;
    }

    /* RelationalOperator: '<S341>/Comparison2' incorporates:
     *  Constant: '<S394>/Calib'
     */
    VeSTMC_b_VehStpDtctd = (fabsf(VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc) <=
                            KeSTMR_v_VehStpSpd);
    (void)Rte_Read_VeSCMR_b_Lv2TargetGear_FA_Value(&tmpRead_1l);

    /* Logic: '<S341>/Logical6' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2TargetGear_FA'
     */
    rtb_TmpSignalConversionAtVeDTMR_b_VehIn_ = (tmpRead_1l ||
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea);

    /* Logic: '<S341>/Logical3' */
    VeSTMC_b_VehStpDtctd_LHom = ((VeSTMC_b_VehStpDtctd) &&
        rtb_TmpSignalConversionAtVeDTMR_b_VehIn_);

    /* Logic: '<S341>/Logical4' */
    VeSTMC_b_RstLHomVehStpLtch = ((!rtb_TmpSignalConversionAtVeDTMR_b_VehIn_) ||
        (VeSTMI_b_Lv2KeyOff));

    /* Logic: '<S398>/OR1' incorporates:
     *  Logic: '<S398>/NOT'
     *  Logic: '<S398>/OR'
     *  UnitDelay: '<S398>/UnitDelay1'
     */
    VeSTMC_b_VehStpDtctd_LHom_Ltch1 = ((VeSTMC_b_VehStpDtctd_LHom) ||
        ((!VeSTMC_b_RstLHomVehStpLtch) && (STMR_ac_DW.UnitDelay1_DSTATE_f)));

    /* Update for UnitDelay: '<S398>/UnitDelay1' */
    STMR_ac_DW.UnitDelay1_DSTATE_f = VeSTMC_b_VehStpDtctd_LHom_Ltch1;

    /* Outputs for Atomic SubSystem: '<S399>/EdgeRising' */
    /* UnitDelay: '<S506>/Unit Delay' incorporates:
     *  UnitDelay: '<S400>/UnitDelay1'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea = STMR_ac_DW.UnitDelay1_DSTATE_n;

    /* Update for UnitDelay: '<S400>/UnitDelay1' */
    STMR_ac_DW.UnitDelay1_DSTATE_n = VeSTMC_b_VehStpDtctd_LHom_Ltch1;

    /* Switch: '<S399>/Switch4' incorporates:
     *  Constant: '<S389>/Calib'
     *  Constant: '<S399>/ConstantValue'
     *  Constant: '<S399>/ConstantValue1'
     *  Logic: '<S399>/OR'
     *  Logic: '<S399>/OR1'
     *  Logic: '<S400>/AND'
     *  Logic: '<S400>/OR1'
     *  MinMax: '<S399>/Minimum'
     *  Sum: '<S399>/Summation'
     *  UnitDelay: '<S399>/UnitDelay1'
     */
    if ((!VeSTMC_b_VehStpDtctd_LHom_Ltch1) || ((VeSTMC_b_VehStpDtctd_LHom_Ltch1)
         && (!rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea)))
    {
        STMR_ac_DW.UnitDelay1_DSTATE_j = 0U;
    }
    else if (KeSTMR_Cnt_LHomFixGrDly < ((uint16)(((uint32)
                STMR_ac_DW.UnitDelay1_DSTATE_j) + 1U)))
    {
        /* MinMax: '<S399>/Minimum' incorporates:
         *  Constant: '<S389>/Calib'
         */
        STMR_ac_DW.UnitDelay1_DSTATE_j = KeSTMR_Cnt_LHomFixGrDly;
    }
    else
    {
        /* MinMax: '<S399>/Minimum' incorporates:
         *  Constant: '<S399>/ConstantValue'
         *  Sum: '<S399>/Summation'
         *  UnitDelay: '<S399>/UnitDelay1'
         */
        STMR_ac_DW.UnitDelay1_DSTATE_j = (uint16)(((uint32)
            STMR_ac_DW.UnitDelay1_DSTATE_j) + 1U);
    }

    /* End of Switch: '<S399>/Switch4' */
    /* End of Outputs for SubSystem: '<S399>/EdgeRising' */

    /* Logic: '<S388>/AND' incorporates:
     *  Logic: '<S388>/OR1'
     *  UnitDelay: '<S388>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea =
        (rtb_TmpSignalConversionAtVeDTMR_b_VehIn_ &&
         (!STMR_ac_DW.VeSTMC_b_CondOkForTTRCalc_ER_prev));

    /* Update for UnitDelay: '<S388>/UnitDelay' */
    STMR_ac_DW.VeSTMC_b_CondOkForTTRCalc_ER_prev =
        rtb_TmpSignalConversionAtVeDTMR_b_VehIn_;
    if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea)
    {
        /* Switch: '<S341>/Switch4' */
        VeSTMC_r_TTR_Arb_LHom = VeSTMC_r_TransTrqRatio_Arb;
    }

    if ((VeSTMC_b_VehStpDtctd_LHom_Ltch1) && (STMR_ac_DW.UnitDelay1_DSTATE_j >=
            KeSTMR_Cnt_LHomFixGrDly))
    {
        /* Switch: '<S341>/Switch3' incorporates:
         *  Constant: '<S392>/Calib'
         */
        VeSTMC_r_TransTrqRatio_LHom = KeSTMR_r_ENPG1FIX_TTR;
    }
    else
    {
        /* Switch: '<S341>/Switch3' */
        VeSTMC_r_TransTrqRatio_LHom = VeSTMC_r_TTR_Arb_LHom;
    }

    /* Logic: '<S341>/Logical2' incorporates:
     *  Constant: '<S389>/Calib'
     *  Constant: '<S390>/Calib'
     *  Logic: '<S399>/AND'
     *  RelationalOperator: '<S399>/GreaterThan'
     *  UnitDelay: '<S399>/UnitDelay1'
     */
    VeSTMC_b_CalcTTRArb = ((KeSTMR_b_CalcTransTrqRatio) &&
                           rtb_TmpSignalConversionAtVeDTMR_b_VehIn_);

    /* DataTypeConversion: '<S341>/DataTypeConversion1' */
    VeSTMC_e_TargetGr_Float = (float32)rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tar;

    /* Lookup_n-D: '<S396>/Vector' incorporates:
     *  DataTypeConversion: '<S341>/DataTypeConversion1'
     */
    VeSTMC_r_TransTrqRatio_TrgtGr_Raw = look1_iflf_binlca_16a
        (VeSTMC_e_TargetGr_Float, ((const float32 *)
          &(KxSTMR_r_TransTrqRatio_TrgtGr[0])), ((const float32 *)
          &(KtSTMR_r_TransTrqRatio_TrgtGr[0])), 16U);

    /* DataTypeConversion: '<S341>/DataTypeConversion2' */
    VeSTMC_e_GearEngd_Float = (float32)rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea;

    /* Lookup_n-D: '<S395>/Vector' incorporates:
     *  DataTypeConversion: '<S341>/DataTypeConversion2'
     */
    VeSTMC_r_TransTrqRatio_GrEngd_Raw = look1_iflf_binlca_16a
        (VeSTMC_e_GearEngd_Float, ((const float32 *)
          &(KxSTMR_r_TransTrqRatio_GrEngd[0])), ((const float32 *)
          &(KtSTMR_r_TransTrqRatio_GrEngd[0])), 16U);
    if (VeSTMI_b_4LowActvGd)
    {
        /* Switch: '<S341>/Switch10' incorporates:
         *  Constant: '<S393>/Calib'
         */
        VeSTMC_r_TransTrqRatio_Lmtd = KeSTMR_r_TFRatio;
    }
    else
    {
        /* Switch: '<S341>/Switch10' incorporates:
         *  MinMax: '<S341>/Max'
         *  MinMax: '<S341>/Min'
         *  MinMax: '<S397>/MinMax'
         *  MinMax: '<S397>/MinMax1'
         */
        VeSTMC_r_TransTrqRatio_Lmtd = fmaxf(fminf(fmaxf
            (VeSTMC_r_TransTrqRatio_TrgtGr_Raw,
             VeSTMC_r_TransTrqRatio_GrEngd_Raw), VeSTMI_r_TorqueTransRatio),
            fminf(VeSTMC_r_TransTrqRatio_TrgtGr_Raw,
                  VeSTMC_r_TransTrqRatio_GrEngd_Raw));
    }

    /* RelationalOperator: '<S341>/Comparison1' */
    VeSTMC_b_ShiftInProg = (rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tar !=
                            rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea);
    if ((VeSTMC_b_ShiftInProg) && (KeSTMR_b_PerfmTTRLmt_SIP))
    {
        /* Switch: '<S341>/Switch1' */
        VeSTMC_r_TransTrqRatio_Arb = VeSTMC_r_TransTrqRatio_Lmtd;
    }
    else
    {
        /* Switch: '<S341>/Switch1' */
        VeSTMC_r_TransTrqRatio_Arb = VeSTMI_r_TorqueTransRatio;
    }

    if (VeSTMC_b_CalcTTRArb)
    {
        /* Switch: '<S341>/Switch2' */
        VeSTMC_r_TTR_Arb_w_LHom = VeSTMC_r_TransTrqRatio_LHom;
    }
    else
    {
        /* Switch: '<S341>/Switch2' */
        VeSTMC_r_TTR_Arb_w_LHom = VeSTMC_r_TransTrqRatio_Arb;
    }

    (void)Rte_Read_VeSCMR_b_CircumfFA_Value(&tmpRead_1m);
    if (tmpRead_1m)
    {
        /* Switch: '<S340>/Switch3' incorporates:
         *  Constant: '<S387>/Calib'
         */
        VeSTMC_l_radius = KeSTMR_I_WhlRadius;
    }
    else
    {
        (void)Rte_Read_VeSCMR_l_Circumf_Value(&tmpRead_1n);

        /* Switch: '<S340>/Switch3' incorporates:
         *  Constant: '<S386>/Calib'
         *  Inport: '<Root>/VeSCMR_l_Circumf'
         *  Product: '<S340>/Product'
         */
        VeSTMC_l_radius = tmpRead_1n * KeSTMR_Cf_CircmFrnc2Radius;
    }

    if (VeSTMC_M_DrvDmndMax_P1P2 > 0.0F)
    {
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp = VeSTMC_M_DrvDmndMax_P1P2;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp = 0.0F;
    }

    if (rtb_TmpSignalConversionAtVeSCMR_b_Torque)
    {
        rtb_Switch6_f = look1_iflf_binlca_16a(VeSTMI_n_Lv2TransOutSpd_Arb, ((
            const float32 *)&(KxSTMR_M_TiMaxLimit_LTSH[0])), ((const float32 *)
            &(KtSTMR_M_TiMaxLimit_LTSH[0])), 21U);
    }
    else
    {
        rtb_Switch6_f = look1_iflf_binlca_16a(VeSTMC_r_TTR_Arb_w_LHom, ((const
            float32 *)&(KxSTMR_M_UnDecel_SFctr_TrnsTrqRt[0])), ((const float32 *)
            &(KtSTMR_M_UnDecel_SFctr_TrnsTrqRt[0])), 14U) * VeSTMC_l_radius;
    }

    /* Switch: '<S376>/Switch1' incorporates:
     *  Constant: '<S337>/ConstantValue2'
     *  Constant: '<S373>/Calib'
     *  Constant: '<S391>/Calib'
     *  Inport: '<Root>/VeSCMR_b_CircumfFA'
     *  Inport: '<Root>/VeSCMR_l_Circumf'
     *  Lookup_n-D: '<S374>/Vector'
     *  Lookup_n-D: '<S375>/Vector'
     *  Product: '<S337>/Product1'
     *  Product: '<S376>/Multiplication'
     *  Product: '<S538>/Product1'
     *  Sum: '<S376>/Subtraction'
     *  Sum: '<S376>/Summation'
     *  Switch: '<S341>/Switch2'
     *  UnitDelay: '<S376>/UnitDelay'
     */
    STMR_ac_DW.VeSTMC_M_MtrCmnd_MaxLimFiltr_prev +=
        (((VeSTMC_M_P2SpdCntrl_MaxTrqLmt +
           rtb_TmpSignalConversionAtVeSSMR_n_MtrASp) + rtb_Switch6_f) -
         STMR_ac_DW.VeSTMC_M_MtrCmnd_MaxLimFiltr_prev) * KeSTMR_k_TmaxFltrCoeff;
    if (VeSTMI_b_LimpHomeActv)
    {
        /* Gain: '<S308>/Gain' incorporates:
         *  Constant: '<S372>/Calib'
         */
        VeSTMC_M_Lv2MaxLim_final = KeSTMR_M_TmaxLim_LHom;
    }
    else
    {
        /* Gain: '<S308>/Gain' incorporates:
         *  UnitDelay: '<S376>/UnitDelay'
         */
        VeSTMC_M_Lv2MaxLim_final = STMR_ac_DW.VeSTMC_M_MtrCmnd_MaxLimFiltr_prev;
    }

    if (VeSTMC_b_P2NTurbErrorOK)
    {
        /* Switch: '<S338>/Switch12' incorporates:
         *  Constant: '<S338>/ConstantValue5'
         *  Inport: '<Root>/VeSCMR_M_P2SpdCntrl_MinTrqLmt'
         */
        VeSTMC_M_P2SpdCntrl_MinTrqLmt = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeSCMR_M_P2SpdCntrl_MinTrqLmt_Value
            ((&(VeSTMC_M_P2SpdCntrl_MinTrqLmt)));
        (void)Rte_Read_VeSCMR_b_P2SpdCntrl_MinTrqLmtFA_Value(&tmpRead_1i);

        /* Switch: '<S338>/Switch11' incorporates:
         *  Inport: '<Root>/VeSCMR_M_P2SpdCntrl_MinTrqLmt'
         *  Inport: '<Root>/VeSCMR_b_P2SpdCntrl_MinTrqLmtFA'
         */
        if (tmpRead_1i)
        {
            /* Switch: '<S338>/Switch12' incorporates:
             *  Constant: '<S378>/Calib'
             */
            VeSTMC_M_P2SpdCntrl_MinTrqLmt = KeSTMR_M_P2SpdCntrl_MnTrqDflt;
        }

        /* End of Switch: '<S338>/Switch11' */
    }

    /* Sum: '<S343>/Sum2' incorporates:
     *  Inport: '<Root>/VeSCMR_M_P2SpdCntrl_MinTrqLmt'
     *  Inport: '<Root>/VeSCMR_b_P2SpdCntrl_MinTrqLmtFA'
     */
    VeSTMC_M_DrvrDmndSlipMin = rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri -
        STMR_ac_DW.VeSTMC_r_TTR_Prev_i;

    /* Switch: '<S357>/Switch3' incorporates:
     *  Constant: '<S357>/ConstantValue'
     *  Constant: '<S364>/Calib'
     *  Constant: '<S366>/Calib'
     *  RelationalOperator: '<S357>/GreaterThan'
     *  RelationalOperator: '<S357>/GreaterThan1'
     *  UnitDelay: '<S357>/UnitDelay1'
     */
    if (VeSTMC_M_DrvrDmndSlipMin > KeSTMR_M_DrvrPosDiffThrshldMin)
    {
        STMR_ac_DW.VeSTMC_r_TTR_Prev_b = true;
    }
    else
    {
        STMR_ac_DW.VeSTMC_r_TTR_Prev_b = ((VeSTMC_M_DrvrDmndSlipMin >=
            KeSTMR_M_DrvrNegDiffThrshldMin) && (STMR_ac_DW.VeSTMC_r_TTR_Prev_b));
    }

    /* End of Switch: '<S357>/Switch3' */
    if (STMR_ac_DW.VeSTMC_r_TTR_Prev_b)
    {
        /* Switch: '<S343>/Switch2' incorporates:
         *  Constant: '<S361>/Calib'
         */
        VeSTMC_k_DrvrDmnd_MinFCoef = KeSTMR_K_DrvDmndDlyRiseCoeffMin;
    }
    else
    {
        /* Switch: '<S343>/Switch2' incorporates:
         *  Constant: '<S362>/Calib'
         */
        VeSTMC_k_DrvrDmnd_MinFCoef = KeSTMR_K_DrvDmndMaxFiltrCoefMin;
    }

    /* Switch: '<S370>/Switch9' incorporates:
     *  Product: '<S370>/Multiplication'
     *  Sum: '<S370>/Subtraction'
     *  Sum: '<S370>/Summation'
     *  UnitDelay: '<S357>/UnitDelay1'
     *  UnitDelay: '<S370>/UnitDelay1'
     */
    VeSTMC_M_DrvDmndMin_P1P2 = ((rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri -
        VeSTMC_M_DrvDmndMin_P1P2) * VeSTMC_k_DrvrDmnd_MinFCoef) +
        VeSTMC_M_DrvDmndMin_P1P2;
    if (rtb_TmpSignalConversionAtVeSCMR_b_Torque)
    {
        /* Switch: '<S460>/Switch6' incorporates:
         *  Lookup_n-D: '<S381>/Vector'
         *  Product: '<S538>/Product1'
         */
        rtb_Switch6_f = look1_iflf_binlca_16a(VeSTMI_n_Lv2TransOutSpd_Arb, ((
            const float32 *)&(KxSTMR_M_TiMinLimit_LTSH[0])), ((const float32 *)
            &(KtSTMR_M_TiMinLimit_LTSH[0])), 21U);
    }
    else
    {
        /* Switch: '<S460>/Switch6' incorporates:
         *  Lookup_n-D: '<S382>/Vector'
         *  Product: '<S338>/Product1'
         *  Switch: '<S341>/Switch2'
         */
        rtb_Switch6_f = look1_iflf_binlca_16a(VeSTMC_r_TTR_Arb_w_LHom, ((const
            float32 *)&(KxSTMR_M_UnAcc_SFctr_TrnsTrqRt[0])), ((const float32 *)
            &(KtSTMR_M_UnAcc_SFctr_TrnsTrqRt[0])), 14U) * VeSTMC_l_radius;
    }

    if (VeSTMC_M_DrvDmndMin_P1P2 < 0.0F)
    {
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp = VeSTMC_M_DrvDmndMin_P1P2;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp = 0.0F;
    }

    /* Switch: '<S383>/Switch1' incorporates:
     *  Constant: '<S338>/ConstantValue3'
     *  Constant: '<S380>/Calib'
     *  Product: '<S383>/Multiplication'
     *  Sum: '<S383>/Subtraction'
     *  Sum: '<S383>/Summation'
     *  UnitDelay: '<S383>/UnitDelay'
     */
    STMR_ac_DW.VeSTMC_M_MtrCmnd_MinLim_Filtr_prev +=
        (((VeSTMC_M_P2SpdCntrl_MinTrqLmt +
           rtb_TmpSignalConversionAtVeSSMR_n_MtrASp) - rtb_Switch6_f) -
         STMR_ac_DW.VeSTMC_M_MtrCmnd_MinLim_Filtr_prev) * KeSTMR_k_TminFltrCoeff;
    if (VeSTMI_b_LimpHomeActv)
    {
        /* Gain: '<S309>/Gain' incorporates:
         *  Constant: '<S379>/Calib'
         */
        VeSTMC_M_Lv2MinLim_final = KeSTMR_M_TminLim_LHom;
    }
    else
    {
        /* Gain: '<S309>/Gain' incorporates:
         *  UnitDelay: '<S383>/UnitDelay'
         */
        VeSTMC_M_Lv2MinLim_final = STMR_ac_DW.VeSTMC_M_MtrCmnd_MinLim_Filtr_prev;
    }

    /* End of Outputs for SubSystem: '<S342>/MaxLowpassResetEnabled' */
    /* End of Outputs for SubSystem: '<S342>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S342>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* End of Outputs for SubSystem: '<S342>/LV2_Accumulator_Reset_Limited' */
    /* End of Outputs for SubSystem: '<S343>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S343>/MaxLowpassResetEnabled' */
    /* End of Outputs for SubSystem: '<S341>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S341>/TurnOnDelaySample' */
    /* End of Outputs for SubSystem: '<S341>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S343>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S343>/MinLowpassResetEnabled1' */
    /* End of Outputs for SubSystem: '<S338>/LV2_Digital_Lowpass_Reset_Enabled1' */
#endif

    /* End of Lookup_n-D: '<S179>/Vector' */
    /* End of Outputs for SubSystem: '<S337>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Outputs for Atomic SubSystem: '<S307>/CounterResetEnabled' */
    /* Switch: '<S312>/Switch2' incorporates:
     *  Constant: '<S312>/ConstantValue2'
     *  Logic: '<S307>/Logical5'
     *  Switch: '<S312>/Switch'
     *  UnitDelay: '<S312>/UnitDelay'
     */
    if (!VeSTMI_b_Lv2VehInParkNeutral)
    {
        STMR_ac_DW.UnitDelay_DSTATE_gp = 0U;
    }
    else
    {
        /* UnitDelay: '<S312>/UnitDelay' incorporates:
         *  Constant: '<S312>/ConstantValue1'
         *  Sum: '<S312>/Subtraction'
         *  Switch: '<S312>/Switch2'
         */
        STMR_ac_DW.UnitDelay_DSTATE_gp = (uint16)(((uint32)
            STMR_ac_DW.UnitDelay_DSTATE_gp) + 1U);
    }

    /* End of Switch: '<S312>/Switch2' */
    /* End of Outputs for SubSystem: '<S307>/CounterResetEnabled' */

    /* RelationalOperator: '<S307>/Comparison5' incorporates:
     *  Constant: '<S313>/Calib'
     *  UnitDelay: '<S312>/UnitDelay'
     */
    VeSTMC_b_VehInParkNeutralMet = (STMR_ac_DW.UnitDelay_DSTATE_gp >
        KeSTMR_Cnt_VehInParkZeroTrqThresh);

    /* Product: '<S307>/Product3' incorporates:
     *  Constant: '<S315>/Calib'
     *  Constant: '<S316>/Calib'
     *  Constant: '<S318>/Calib'
     *  Lookup_n-D: '<S320>/Vector'
     *  Switch: '<S618>/Switch1'
     */
    VeSTMC_M_UnintAccel_interim = ((KeSTMR_l_WhlRadius_meter_M182 *
        KeSTMR_m_VehCurbWeight_M182) * KeSTMR_t_dT) * look1_iflf_binlca_16a
        (VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxSTMR_l_UnintAccelDist[0])), ((const float32 *)
          &(KtSTMR_l_UnintAccelDist[0])), 15U);

    /* Product: '<S307>/Divide4' incorporates:
     *  Constant: '<S317>/Calib'
     *  Product: '<S307>/Product4'
     */
    VeSTMC_M_MtrTrqCmnd_MaxLimDivide = VeSTMC_M_UnintAccel_interim /
        ((KeSTMR_t_UnintAccelTimeDur * KeSTMR_t_UnintAccelTimeDur) *
         KeSTMR_t_UnintAccelTimeDur);

    /* Sum: '<S307>/Sum12' incorporates:
     *  Constant: '<S314>/Calib'
     */
    VeSTMC_M_MtrTrqCmnd_MaxLim_Dist_NotNnP = VeSTMC_M_MtrTrqCmnd_MaxLimDivide +
        KeSTMR_M_MtrTrqCmndMaxLim_SafeaMargin;

    /* Switch: '<S307>/Switch5' */
    if (VeSTMC_b_VehInParkNeutralMet)
    {
        /* Switch: '<S307>/Switch5' incorporates:
         *  DataTypeConversion: '<S307>/DataTypeConversion1'
         *  Lookup_n-D: '<S319>/Vector'
         *  UnitDelay: '<S312>/UnitDelay'
         */
        VeSTMC_M_MtrTrqCmnd_MaxLim_Distbased = look1_iflf_binlca_16a((float32)
            STMR_ac_DW.UnitDelay_DSTATE_gp, ((const float32 *)
            &(KxSTMR_M_MtrMaxLim_ParkNeutral[0])), ((const float32 *)
            &(KtSTMR_M_MtrMaxLim_ParkNeutral[0])), 15U);
    }
    else
    {
        /* Switch: '<S307>/Switch5' */
        VeSTMC_M_MtrTrqCmnd_MaxLim_Distbased =
            VeSTMC_M_MtrTrqCmnd_MaxLim_Dist_NotNnP;
    }

    /* End of Switch: '<S307>/Switch5' */

    /* Lookup_n-D: '<S330>/Vector' incorporates:
     *  Constant: '<S310>/ConstantValue2'
     *  Constant: '<S310>/ConstantValue3'
     *  Constant: '<S325>/Calib'
     *  Lookup_n-D: '<S331>/Vector'
     *  RelationalOperator: '<S334>/Comparison'
     *  RelationalOperator: '<S335>/Comparison'
     *  Sum: '<S310>/Sum2'
     *  Sum: '<S310>/Sum3'
     *  Switch: '<S310>/Switch1'
     *  Switch: '<S310>/Switch2'
     *  Switch: '<S310>/Switch3'
     *  Switch: '<S310>/Switch4'
     *  Switch: '<S310>/Switch6'
     *  Switch: '<S310>/Switch7'
     *  Switch: '<S310>/Switch8'
     *  Switch: '<S334>/Switch'
     *  Switch: '<S335>/Switch'
     */
#if !Rte_SysCon_Variant_STMR_FUNC_4

    /* Outputs for Atomic SubSystem: '<S310>/LV2_Digital_Lowpass_Reset_Enabled1' */
    /* Outputs for Atomic SubSystem: '<S310>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Lookup_n-D: '<S330>/Vector' incorporates:
     *  Switch: '<S618>/Switch1'
     */
    VeSTMC_M_MtrTrqCmnd_MaxLim = look1_iflf_binlca_16a
        (VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxSTMR_M_MtrTrqCmnd_MaxLim[0])), ((const float32 *)
          &(KtSTMR_M_MtrTrqCmnd_MaxLim[0])), 15U);
    if (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd)
    {
        /* Switch: '<S310>/Switch3' incorporates:
         *  Constant: '<S321>/Calib'
         */
        VeSTMC_M_MtrTrqCmnd_MaxLim_NotNnP = KeSTMR_M_MtrMaxLim_VehSpdFA;
    }
    else
    {
        /* Switch: '<S310>/Switch3' */
        VeSTMC_M_MtrTrqCmnd_MaxLim_NotNnP = VeSTMC_M_MtrTrqCmnd_MaxLim;
    }

    if (VeSTMC_b_VehInParkNeutralMet)
    {
        /* Switch: '<S310>/Switch4' incorporates:
         *  DataTypeConversion: '<S307>/DataTypeConversion1'
         *  Lookup_n-D: '<S328>/Vector'
         *  UnitDelay: '<S312>/UnitDelay'
         */
        VeSTMC_M_MtrTrqCmnd_MaxLim_SpdBased = look1_iflf_binlca_16a((float32)
            STMR_ac_DW.UnitDelay_DSTATE_gp, ((const float32 *)
            &(KxSTMR_M_MtrMaxLim_ParkNeutral[0])), ((const float32 *)
            &(KtSTMR_M_MtrMaxLim_ParkNeutral[0])), 15U);
    }
    else
    {
        /* Switch: '<S310>/Switch4' */
        VeSTMC_M_MtrTrqCmnd_MaxLim_SpdBased = VeSTMC_M_MtrTrqCmnd_MaxLim_NotNnP;
    }

    if (KeSTMR_b_Ebl_NewReqUnintAccel)
    {
        /* Switch: '<S310>/Switch6' */
        VeSTMC_M_MtrTrqCmnd_MaxLimArb = VeSTMC_M_MtrTrqCmnd_MaxLim_Distbased;
    }
    else
    {
        /* Switch: '<S310>/Switch6' */
        VeSTMC_M_MtrTrqCmnd_MaxLimArb = VeSTMC_M_MtrTrqCmnd_MaxLim_SpdBased;
    }

    /* Sum: '<S310>/Sum2' incorporates:
     *  Constant: '<S325>/Calib'
     */
    VeSTMC_M_MtrCmnd_MaxLim_Raw = rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri +
        VeSTMC_M_MtrTrqCmnd_MaxLimArb;
    if (VeSTMC_M_MtrCmnd_MaxLim_Raw > 0.0F)
    {
        /* Switch: '<S334>/Switch' */
        VeSTMC_M_MtrCmnd_MaxLim_RawArb = VeSTMC_M_MtrCmnd_MaxLim_Raw;
    }
    else
    {
        /* Switch: '<S334>/Switch' */
        VeSTMC_M_MtrCmnd_MaxLim_RawArb = 0.0F;
    }

    /* Lookup_n-D: '<S488>/Vector' incorporates:
     *  Constant: '<S310>/ConstantValue2'
     *  UnitDelay: '<S332>/UnitDelay'
     */
    rtb_Switch5_l = STMR_ac_DW.VeSTMC_M_MtrCmnd_MaxLimFiltr_prev_a;

    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S326>/Calib'
     *  Product: '<S332>/Multiplication'
     *  Sum: '<S332>/Subtraction'
     *  Sum: '<S332>/Summation'
     */
    VeSTMC_M_Lv2_MtrCmnd_MaxLim_Fltr = ((VeSTMC_M_MtrCmnd_MaxLim_RawArb -
        rtb_Switch5_l) * KeSTMR_k_TmaxFltrCoeff) + rtb_Switch5_l;

    /* Update for UnitDelay: '<S332>/UnitDelay' */
    STMR_ac_DW.VeSTMC_M_MtrCmnd_MaxLimFiltr_prev_a =
        VeSTMC_M_Lv2_MtrCmnd_MaxLim_Fltr;
    if (VeSTMI_b_LimpHomeActv)
    {
        /* Gain: '<S308>/Gain' incorporates:
         *  Constant: '<S323>/Calib'
         */
        VeSTMC_M_Lv2MaxLim_final = KeSTMR_M_TmaxLim_LHom;
    }
    else
    {
        /* Gain: '<S308>/Gain' */
        VeSTMC_M_Lv2MaxLim_final = VeSTMC_M_Lv2_MtrCmnd_MaxLim_Fltr;
    }

    /* Lookup_n-D: '<S331>/Vector' incorporates:
     *  Switch: '<S618>/Switch1'
     */
    VeSTMC_M_MtrTrqCmnd_MinLim = look1_iflf_binlca_16a
        (VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxSTMR_M_MtrTrqCmnd_MinLim[0])), ((const float32 *)
          &(KtSTMR_M_MtrTrqCmnd_MinLim[0])), 15U);
    if (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd)
    {
        /* Switch: '<S310>/Switch1' incorporates:
         *  Constant: '<S322>/Calib'
         */
        VeSTMC_M_MtrTrqCmnd_MinLim_NotNnP = KeSTMR_M_MtrMinLim_VehSpdFA;
    }
    else
    {
        /* Switch: '<S310>/Switch1' */
        VeSTMC_M_MtrTrqCmnd_MinLim_NotNnP = VeSTMC_M_MtrTrqCmnd_MinLim;
    }

    if (VeSTMC_b_VehInParkNeutralMet)
    {
        /* Switch: '<S310>/Switch2' incorporates:
         *  DataTypeConversion: '<S307>/DataTypeConversion1'
         *  Lookup_n-D: '<S329>/Vector'
         *  UnitDelay: '<S312>/UnitDelay'
         */
        VeSTMC_M_MtrTrqCmnd_MinLimArb = look1_iflf_binlca_16a((float32)
            STMR_ac_DW.UnitDelay_DSTATE_gp, ((const float32 *)
            &(KxSTMR_M_MtrMinLim_ParkNeutral[0])), ((const float32 *)
            &(KtSTMR_M_MtrMinLim_ParkNeutral[0])), 15U);
    }
    else
    {
        /* Switch: '<S310>/Switch2' */
        VeSTMC_M_MtrTrqCmnd_MinLimArb = VeSTMC_M_MtrTrqCmnd_MinLim_NotNnP;
    }

    /* Sum: '<S310>/Sum3' */
    VeSTMC_M_MtrCmnd_MinLim_Raw = rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri -
        VeSTMC_M_MtrTrqCmnd_MinLimArb;
    if (VeSTMC_M_MtrCmnd_MinLim_Raw < 0.0F)
    {
        /* Switch: '<S335>/Switch' */
        VeSTMC_M_MtrCmnd_MinLim_RawArb = VeSTMC_M_MtrCmnd_MinLim_Raw;
    }
    else
    {
        /* Switch: '<S335>/Switch' */
        VeSTMC_M_MtrCmnd_MinLim_RawArb = 0.0F;
    }

    /* Lookup_n-D: '<S488>/Vector' incorporates:
     *  Constant: '<S310>/ConstantValue3'
     *  UnitDelay: '<S333>/UnitDelay'
     */
    rtb_Switch5_l = STMR_ac_DW.VeSTMC_M_MtrCmnd_MinLim_Filtr_prev_l;

    /* Switch: '<S333>/Switch1' incorporates:
     *  Constant: '<S327>/Calib'
     *  Product: '<S333>/Multiplication'
     *  Sum: '<S333>/Subtraction'
     *  Sum: '<S333>/Summation'
     */
    VeSTMC_M_Lv2_MtrCmnd_MinLim_Fltr = ((VeSTMC_M_MtrCmnd_MinLim_RawArb -
        rtb_Switch5_l) * KeSTMR_k_TminFltrCoeff) + rtb_Switch5_l;

    /* Update for UnitDelay: '<S333>/UnitDelay' */
    STMR_ac_DW.VeSTMC_M_MtrCmnd_MinLim_Filtr_prev_l =
        VeSTMC_M_Lv2_MtrCmnd_MinLim_Fltr;
    if (VeSTMI_b_LimpHomeActv)
    {
        /* Gain: '<S309>/Gain' incorporates:
         *  Constant: '<S324>/Calib'
         */
        VeSTMC_M_Lv2MinLim_final = KeSTMR_M_TminLim_LHom;
    }
    else
    {
        /* Gain: '<S309>/Gain' */
        VeSTMC_M_Lv2MinLim_final = VeSTMC_M_Lv2_MtrCmnd_MinLim_Fltr;
    }

    /* End of Outputs for SubSystem: '<S310>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* End of Outputs for SubSystem: '<S310>/LV2_Digital_Lowpass_Reset_Enabled1' */
#endif

    /* End of Lookup_n-D: '<S330>/Vector' */

    /* Sum: '<S111>/Sum6' incorporates:
     *  Constant: '<S142>/Calib'
     */
    VeSTMC_M_MaxLim_LTsh_LSP = VeSTMC_M_Lv2MaxLim_final -
        KeSTMR_M_MaxLim_LTsh_LSP;

    /* Sum: '<S111>/Sum' incorporates:
     *  Constant: '<S143>/Calib'
     */
    VeSTMC_M_MaxLim_LTsh_RSP = VeSTMC_M_Lv2MaxLim_final +
        KeSTMR_M_MaxLim_LTsh_RSP;

    /* Outputs for Atomic SubSystem: '<S111>/Hysteresis2' */
    /* Switch: '<S139>/Switch1' incorporates:
     *  Constant: '<S139>/ConstantValue'
     *  RelationalOperator: '<S139>/GreaterThan'
     *  RelationalOperator: '<S139>/GreaterThan1'
     *  UnitDelay: '<S139>/UnitDelay'
     */
    if (VeSTMC_M_NetTransTrqCmnd_Arb > VeSTMC_M_MaxLim_LTsh_RSP)
    {
        STMR_ac_DW.UnitDelay_DSTATE_dp = true;
    }
    else
    {
        STMR_ac_DW.UnitDelay_DSTATE_dp = ((VeSTMC_M_NetTransTrqCmnd_Arb >=
            VeSTMC_M_MaxLim_LTsh_LSP) && (STMR_ac_DW.UnitDelay_DSTATE_dp));
    }

    /* End of Switch: '<S139>/Switch1' */
    /* End of Outputs for SubSystem: '<S111>/Hysteresis2' */

    /* Logic: '<S94>/Logical16' incorporates:
     *  Logic: '<S245>/Logical5'
     */
    rtb_TmpSignalConversionAtVeSSMR_b_VehSpd =
        !rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb;

    /* Logic: '<S94>/Logical34' incorporates:
     *  Constant: '<S108>/Calib'
     *  Logic: '<S94>/Logical16'
     *  Logic: '<S94>/Logical17'
     *  Logic: '<S94>/Logical35'
     *  Logic: '<S94>/Logical36'
     */
    VeSTMC_b_Lv2EnblPdlMntr_Arb = ((rtb_TmpSignalConversionAtVeSSMR_b_VehSpd ||
        rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1) && ((!VeSTMI_b_Lv2RgnBrkFltd) ||
        (KeSTMR_b_DoNotAllowRgnBrkFault_RA)));

    /* Logic: '<S111>/Logical18' incorporates:
     *  Constant: '<S146>/Calib'
     *  UnitDelay: '<S139>/UnitDelay'
     */
    VeSTMC_b_MaxFailing = (((STMR_ac_DW.UnitDelay_DSTATE_dp) &&
                            (KeSTMR_b_EnblOutTrqMntrMaxLim)) &&
                           (VeSTMC_b_Lv2EnblPdlMntr_Arb));

    /* Lookup_n-D: '<S181>/Vector' incorporates:
     *  Switch: '<S165>/Switch10'
     */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* Lookup_n-D: '<S181>/Vector' incorporates:
     *  Switch: '<S539>/Switch10'
     */
    VeSTMC_M_MinLim_Final_Lmt = look1_iflf_binlca_16a(VeSTMI_r_TorqueTransRatio,
        ((const float32 *)&(KxSTMR_M_UnDeccel_HTSH_TTR[0])), ((const float32 *)
        &(KtSTMR_M_UnDeccel_HTSH_TTR[0])), 14U);
    if (rtb_TmpSignalConversionAtVeSCMR_b_Torque)
    {
        /* Switch: '<S165>/Switch10' incorporates:
         *  Constant: '<S175>/Calib'
         */
        VeSTMC_M_MinLim_Final_Lmt_Arb = KeSTMR_K_MinErrIntLmt;
    }
    else
    {
        /* Switch: '<S165>/Switch10' */
        VeSTMC_M_MinLim_Final_Lmt_Arb = VeSTMC_M_MinLim_Final_Lmt;
    }

#endif

    /* End of Lookup_n-D: '<S181>/Vector' */

    /* Sum: '<S111>/Sum5' incorporates:
     *  Constant: '<S144>/Calib'
     */
    VeSTMC_M_MinLim_LTsh_LSP = VeSTMC_M_Lv2MinLim_final -
        KeSTMR_M_MinLim_LTsh_LSP;

    /* Sum: '<S111>/Sum4' incorporates:
     *  Constant: '<S145>/Calib'
     */
    VeSTMC_M_MinLim_LTsh_RSP = VeSTMC_M_Lv2MinLim_final +
        KeSTMR_M_MinLim_LTsh_RSP;

    /* Outputs for Atomic SubSystem: '<S111>/Hysteresis1' */
    /* Switch: '<S138>/Switch1' incorporates:
     *  Constant: '<S138>/ConstantValue'
     *  RelationalOperator: '<S138>/GreaterThan'
     *  RelationalOperator: '<S138>/GreaterThan1'
     *  UnitDelay: '<S138>/UnitDelay'
     */
    if (VeSTMC_M_NetTransTrqCmnd_Arb > VeSTMC_M_MinLim_LTsh_RSP)
    {
        STMR_ac_DW.UnitDelay_DSTATE_ez = true;
    }
    else
    {
        STMR_ac_DW.UnitDelay_DSTATE_ez = ((VeSTMC_M_NetTransTrqCmnd_Arb >=
            VeSTMC_M_MinLim_LTsh_LSP) && (STMR_ac_DW.UnitDelay_DSTATE_ez));
    }

    /* End of Switch: '<S138>/Switch1' */
    /* End of Outputs for SubSystem: '<S111>/Hysteresis1' */

    /* Logic: '<S111>/Logical24' incorporates:
     *  Constant: '<S147>/Calib'
     *  Logic: '<S111>/Logical5'
     *  UnitDelay: '<S138>/UnitDelay'
     */
    VeSTMC_b_TMinLim_FailingCnfrm = (((!STMR_ac_DW.UnitDelay_DSTATE_ez) &&
        (KeSTMR_b_EnblOutTrqMntrMinLim)) && (VeSTMC_b_Lv2EnblPdlMntr_Arb));

    /* Switch: '<S165>/Switch5' incorporates:
     *  Logic: '<S113>/Logical1'
     *  Logic: '<S168>/Logical3'
     *  Logic: '<S168>/Logical4'
     *  Logic: '<S169>/Logical2'
     *  RelationalOperator: '<S168>/Comparison3'
     *  Sum: '<S168>/Sum'
     *  Sum: '<S168>/SumSub1'
     *  Switch: '<S165>/Switch6'
     *  Switch: '<S168>/Switch1'
     *  UnitDelay: '<S168>/UnitDelay1'
     */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* Outputs for Atomic SubSystem: '<S169>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S168>/EdgeFalling' */
    if (VeSTMC_b_TMinLim_FailingCnfrm)
    {
        /* Switch: '<S165>/Switch5' */
        VeSTMC_K_Err_Thsh_Min_Arb = VeSTMC_M_MinLim_Final_Lmt_Arb;
    }
    else
    {
        /* Switch: '<S165>/Switch5' incorporates:
         *  Constant: '<S165>/ConstantValue5'
         */
        VeSTMC_K_Err_Thsh_Min_Arb = 0.0F;
    }

    if (VeSTMC_b_MaxFailing)
    {
        /* Switch: '<S165>/Switch6' */
        VeSTMC_K_Err_Thsh_Arb = VeSTMC_M_MaxLim_Final_Lmt_Arb;
    }
    else
    {
        /* Switch: '<S165>/Switch6' */
        VeSTMC_K_Err_Thsh_Arb = VeSTMC_K_Err_Thsh_Min_Arb;
    }

    /* Sum: '<S168>/Sum' incorporates:
     *  Constant: '<S168>/ConstantValue5'
     */
    VeSTMC_K_TrqErr_NmmS_MxLmt = VeSTMC_K_Err_Thsh_Arb + 1.0F;

    /* Logic: '<S203>/AND' incorporates:
     *  Logic: '<S203>/OR1'
     *  UnitDelay: '<S203>/UnitDelay'
     */
    rtb_AND = ((!VeSTMI_b_AllModeCreepActv) &&
               (STMR_ac_DW.VeSTMC_K_IntegralRstFctr_Abs_Prev_b1));

    /* Update for UnitDelay: '<S203>/UnitDelay' */
    STMR_ac_DW.VeSTMC_K_IntegralRstFctr_Abs_Prev_b1 = VeSTMI_b_AllModeCreepActv;

    /* Logic: '<S168>/Logical4' incorporates:
     *  Constant: '<S206>/Calib'
     */
    VeSTMC_b_CrpCntReset = ((KeSTMR_b_CrpCntResetEnbl) && rtb_AND);

    /* UnitDelay: '<S168>/UnitDelay1' */
    rtb_UnitDelay1_fe = VeSTMC_K_TrqErr_NmmS_Arb;

    /* RelationalOperator: '<S168>/Comparison3' incorporates:
     *  Constant: '<S168>/ConstantValue2'
     */
    VeSTMC_b_ErrorIntegralZeroOrNeg = (VeSTMC_K_TrqErr_NmmS_Arb <= 0.0F);

    /* Logic: '<S168>/Logical3' */
    VeSTMC_b_RestCount = ((VeSTMC_b_CrpCntReset) ||
                          (VeSTMC_b_ErrorIntegralZeroOrNeg));

    /* Sum: '<S168>/SumSub1' incorporates:
     *  UnitDelay: '<S168>/UnitDelay'
     */
    VeSTMC_K_Integral_Rst = VeSTMC_K_TrqErr_NmmS_Arb -
        STMR_ac_DW.VeSTMC_K_IntegralRstFctr_Abs_Prev;
    if (VeSTMC_b_RestCount)
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S168>/ConstantValue1'
         */
        VeSTMC_K_Integral_Rst_Arb = 0.0F;
    }
    else
    {
        /* Switch: '<S168>/Switch1' */
        VeSTMC_K_Integral_Rst_Arb = VeSTMC_K_Integral_Rst;
    }

    /* Logic: '<S209>/AND' incorporates:
     *  Logic: '<S209>/OR1'
     *  UnitDelay: '<S113>/UnitDelay1'
     *  UnitDelay: '<S209>/UnitDelay'
     */
    rtb_AND = ((STMR_ac_DW.UnitDelay1_DSTATE_eg) &&
               (!STMR_ac_DW.UnitDelay_DSTATE_h3));

    /* Update for UnitDelay: '<S209>/UnitDelay' incorporates:
     *  UnitDelay: '<S113>/UnitDelay1'
     */
    STMR_ac_DW.UnitDelay_DSTATE_h3 = STMR_ac_DW.UnitDelay1_DSTATE_eg;

    /* Logic: '<S113>/Logical1' */
    VeSTMC_b_TMaxMinLimFailing = ((VeSTMC_b_MaxFailing) ||
        (VeSTMC_b_TMinLim_FailingCnfrm));

    /* Logic: '<S169>/Logical2' */
    VeSTMC_b_NoMinMaxError = !VeSTMC_b_TMaxMinLimFailing;

    /* End of Outputs for SubSystem: '<S168>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S169>/EdgeRising' */
#endif

    /* End of Switch: '<S165>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeDTMR_b_DTRcmdFlt' */
    (void)Rte_Read_VeDTMR_b_DTRcmdFlt_Value(&rtb_AND_ow);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/STMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMC'
     */
    /* RelationalOperator: '<S408>/Comparison1' incorporates:
     *  Constant: '<S414>/Calib'
     *  Constant: '<S415>/Calib'
     *  Constant: '<S416>/Calib'
     *  Constant: '<S417>/Calib'
     *  Constant: '<S418>/Calib'
     *  Constant: '<S419>/Calib'
     *  Constant: '<S420>/Calib'
     *  Constant: '<S421>/Calib'
     *  Constant: '<S422>/Calib'
     *  Constant: '<S423>/Calib'
     *  Constant: '<S424>/Calib'
     *  Constant: '<S425>/Calib'
     *  Constant: '<S426>/Calib'
     *  Constant: '<S427>/Calib'
     *  Constant: '<S428>/Calib'
     *  Logic: '<S408>/Logical1'
     *  Logic: '<S408>/Logical10'
     *  Logic: '<S408>/Logical132'
     *  Logic: '<S408>/Logical2'
     *  Logic: '<S408>/Logical4'
     *  RelationalOperator: '<S407>/Comparison1'
     *  RelationalOperator: '<S407>/Comparison12'
     *  RelationalOperator: '<S407>/Comparison13'
     *  RelationalOperator: '<S407>/Comparison14'
     *  RelationalOperator: '<S407>/Comparison6'
     *  RelationalOperator: '<S408>/Comparison10'
     *  RelationalOperator: '<S408>/Comparison11'
     *  RelationalOperator: '<S408>/Comparison12'
     *  RelationalOperator: '<S408>/Comparison13'
     *  RelationalOperator: '<S408>/Comparison14'
     *  RelationalOperator: '<S408>/Comparison15'
     *  RelationalOperator: '<S408>/Comparison2'
     *  RelationalOperator: '<S408>/Comparison3'
     *  RelationalOperator: '<S408>/Comparison4'
     *  RelationalOperator: '<S408>/Comparison5'
     *  RelationalOperator: '<S408>/Comparison6'
     *  RelationalOperator: '<S408>/Comparison7'
     *  RelationalOperator: '<S408>/Comparison8'
     *  RelationalOperator: '<S408>/Comparison9'
     */
#if Rte_SysCon_Variant_STMR_FUNC_1

    rtb_VariantMerge_For_Variant_Source_V__4 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Soft_1_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Soft_1_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeSTMR_e_Limitation_Soft_1_3));
    rtb_VariantMerge_For_Variant_Source_V__3 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Med_2_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Med_2_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeSTMR_e_Limitation_Med_2_3));
    rtb_VariantMerge_For_Variant_Source_V__2 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Hard_3_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Hard_3_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeSTMR_e_Limitation_Hard_3_3));
    rtb_VariantMerge_For_Variant_Source_V__1 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Hard_4_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Hard_4_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeSTMR_e_Limitation_Hard_4_3));
    rtb_VariantMerge_For_Variant_Source_V__0 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Stop_5_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeSTMR_e_Limitation_Stop_5_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeSTMR_e_Limitation_Stop_5_3));

#else

    /* RelationalOperator: '<S407>/Comparison1' incorporates:
     *  Constant: '<S412>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_V__4 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) == CeSRMR_e_SoftLimitation);

    /* RelationalOperator: '<S407>/Comparison14' incorporates:
     *  Constant: '<S409>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_V__3 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) == CeSRMR_e_MedLimitation);

    /* RelationalOperator: '<S407>/Comparison12' incorporates:
     *  Constant: '<S410>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_V__2 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) == CeSRMR_e_HardLimitation);

    /* RelationalOperator: '<S407>/Comparison6' incorporates:
     *  Constant: '<S411>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_V__1 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) ==
        CeSRMR_e_UltraHardLimitation);

    /* RelationalOperator: '<S407>/Comparison13' incorporates:
     *  Constant: '<S413>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_V__0 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) == CeSRMR_e_StopLimitation);

#endif

    /* End of RelationalOperator: '<S408>/Comparison1' */

    /* Logic: '<S13>/Logical3' incorporates:
     *  Constant: '<S404>/Calib'
     */
    VeSTMC_b_SoftLimitationEbled = (rtb_VariantMerge_For_Variant_Source_V__4 &&
        (KeSTMR_b_Enbl_ResetSoftLimp));

    /* Logic: '<S13>/Logical5' incorporates:
     *  Constant: '<S402>/Calib'
     */
    VeSTMC_b_MedLimitationEbled = (rtb_VariantMerge_For_Variant_Source_V__3 &&
        (KeSTMR_b_Enbl_ResetMedLimp));

    /* Logic: '<S13>/Logical11' incorporates:
     *  Constant: '<S401>/Calib'
     */
    VeSTMC_b_HardLimitationEbled = (rtb_VariantMerge_For_Variant_Source_V__2 &&
        (KeSTMR_b_Enbl_ResetHardLimp));

    /* Logic: '<S13>/Logical6' incorporates:
     *  Constant: '<S406>/Calib'
     */
    VeSTMC_b_UltraHardLimitationEbled =
        (rtb_VariantMerge_For_Variant_Source_V__1 &&
         (KeSTMR_b_Enbl_ResetUltraHardLimp));

    /* Logic: '<S13>/Logical7' incorporates:
     *  Constant: '<S405>/Calib'
     */
    VeSTMC_b_StopLimitationEbled = (rtb_VariantMerge_For_Variant_Source_V__0 &&
        (KeSTMR_b_Enbl_ResetStopLimp));

    /* Logic: '<S13>/Logical8' */
    VeSTMC_b_MSSLimpActivated = (((((VeSTMC_b_SoftLimitationEbled) ||
        (VeSTMC_b_MedLimitationEbled)) || (VeSTMC_b_HardLimitationEbled)) ||
        (VeSTMC_b_UltraHardLimitationEbled)) || (VeSTMC_b_StopLimitationEbled));

    /* Logic: '<S13>/Logical9' incorporates:
     *  Constant: '<S403>/Calib'
     */
    VeSTMC_b_ResetSTMRbyMSS = ((KeSTMR_b_Enbl_ResetSTMRbyMSS) &&
        (VeSTMC_b_MSSLimpActivated));

    /* S-Function (sfix_bitop): '<S10>/Bit6' incorporates:
     *  S-Function (sfix_bitop): '<S256>/Bit6'
     *  S-Function (sfix_bitop): '<S489>/Bit6'
     *  S-Function (sfix_bitop): '<S490>/Bit6'
     */
    rtb_Compare_iy_tmp = ((uint32)
                          STMR_ac_B.TmpSignalConversionAtVeDMAB_y_StatusByte) &
        64U;

    /* RelationalOperator: '<S98>/Compare' incorporates:
     *  Constant: '<S98>/Constant'
     *  S-Function (sfix_bitop): '<S10>/Bit6'
     */
    rtb_VariantMerge_For_Variant_Source_V__0 = (rtb_Compare_iy_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S10>/EdgeFalling' */
    /* Logic: '<S95>/AND' incorporates:
     *  Logic: '<S95>/OR1'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    VeSTMC_b_Lv2ResetbyDMAB = ((!rtb_VariantMerge_For_Variant_Source_V__0) &&
        (STMR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    STMR_ac_DW.UnitDelay_DSTATE_c = rtb_VariantMerge_For_Variant_Source_V__0;

    /* End of Outputs for SubSystem: '<S10>/EdgeFalling' */

    /* Logic: '<S94>/Logical2' incorporates:
     *  Constant: '<S106>/Calib'
     *  Constant: '<S107>/Calib'
     *  Constant: '<S109>/Calib'
     *  Logic: '<S94>/Logical20'
     *  Logic: '<S94>/Logical37'
     */
    rtb_TmpSignalConversionAtVeSSMR_b_EngSpd = ((((((KeSTMR_b_DisblMtrCmndChk) ||
        (VeSTMI_b_Lv2KeyOff)) || (VeSTMI_b_Lv1ResetDTC)) || (rtb_AND_ow &&
        (KeSTMR_b_Enbl_ResetByP3034))) || ((VeSTMC_b_ResetSTMRbyMSS) &&
        (KeSTMR_b_DisblP061BbyMSS))) || (VeSTMC_b_Lv2ResetbyDMAB));

    /* Outputs for Atomic SubSystem: '<S189>/LV2_Turn_On_Delay_Sample' */
    /* Outputs for Atomic SubSystem: '<S168>/MinMaxLimiter' */
    /* Outputs for Atomic SubSystem: '<S168>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S169>/LV2_Stop_Watch_Reset_Enabled' */
    /* Outputs for Atomic SubSystem: '<S166>/LV2_Stop_Watch_Reset_Trigger_Enabled' */
    /* RelationalOperator: '<S166>/Comparison2' incorporates:
     *  Constant: '<S113>/FALSEConstant1'
     *  Constant: '<S113>/FALSEConstant2'
     *  Constant: '<S191>/Calib'
     *  Constant: '<S192>/ConstantValue2'
     *  Constant: '<S199>/Calib'
     *  Constant: '<S217>/Calib'
     *  Logic: '<S166>/Logical'
     *  Logic: '<S166>/Logical2'
     *  Logic: '<S166>/Logical5'
     *  Logic: '<S166>/Logical6'
     *  Logic: '<S166>/Logical7'
     *  Logic: '<S167>/Logical2'
     *  Logic: '<S168>/Logical'
     *  Logic: '<S168>/Logical1'
     *  Logic: '<S168>/Logical2'
     *  Logic: '<S169>/Logical'
     *  Logic: '<S169>/Logical1'
     *  Logic: '<S172>/Logical'
     *  Logic: '<S172>/Logical1'
     *  Logic: '<S172>/Logical5'
     *  Logic: '<S172>/Logical6'
     *  Logic: '<S172>/Logical7'
     *  Logic: '<S185>/AND1'
     *  Logic: '<S185>/OR2'
     *  Logic: '<S188>/Logical1'
     *  Logic: '<S189>/Logical1'
     *  Logic: '<S192>/Cntr_fail'
     *  Logic: '<S212>/NOT'
     *  Logic: '<S212>/OR'
     *  Logic: '<S212>/OR1'
     *  Lookup_n-D: '<S177>/Vector'
     *  Lookup_n-D: '<S178>/Vector'
     *  Lookup_n-D: '<S180>/Vector'
     *  Lookup_n-D: '<S182>/Vector'
     *  MinMax: '<S188>/Min'
     *  MinMax: '<S192>/FixPtMinax'
     *  Product: '<S168>/Multiplication'
     *  Product: '<S193>/Product2'
     *  Product: '<S197>/Product1'
     *  RelationalOperator: '<S166>/Comparison1'
     *  RelationalOperator: '<S166>/Comparison5'
     *  RelationalOperator: '<S169>/Comparison1'
     *  RelationalOperator: '<S172>/Comparison1'
     *  RelationalOperator: '<S172>/Comparison2'
     *  RelationalOperator: '<S188>/Comparison2'
     *  RelationalOperator: '<S188>/Comparison4'
     *  RelationalOperator: '<S189>/Comparison1'
     *  RelationalOperator: '<S189>/Comparison3'
     *  RelationalOperator: '<S192>/Enough_counts_to_Fail'
     *  Sum: '<S113>/Sum1'
     *  Sum: '<S113>/Sum2'
     *  Sum: '<S165>/Sum4'
     *  Sum: '<S165>/Sum5'
     *  Sum: '<S168>/Sum2'
     *  Sum: '<S188>/Sum2'
     *  Sum: '<S188>/Sum3'
     *  Sum: '<S189>/Sum1'
     *  Sum: '<S193>/Sum5'
     *  Sum: '<S197>/Sum5'
     *  Switch: '<S113>/Switch1'
     *  Switch: '<S113>/Switch2'
     *  Switch: '<S113>/Switch5'
     *  Switch: '<S165>/Switch1'
     *  Switch: '<S165>/Switch2'
     *  Switch: '<S165>/Switch3'
     *  Switch: '<S165>/Switch4'
     *  Switch: '<S165>/Switch7'
     *  Switch: '<S165>/Switch8'
     *  Switch: '<S168>/Switch2'
     *  Switch: '<S168>/Switch3'
     *  Switch: '<S168>/Switch4'
     *  Switch: '<S189>/Switch1'
     *  Switch: '<S189>/Switch3'
     *  Switch: '<S192>/Switch2'
     *  Switch: '<S192>/Switch3'
     *  UnitDelay: '<S113>/UnitDelay1'
     *  UnitDelay: '<S169>/UnitDelay2'
     *  UnitDelay: '<S192>/UnitDelay1'
     *  UnitDelay: '<S192>/UnitDelay2'
     *  UnitDelay: '<S193>/UnitDelay'
     *  UnitDelay: '<S193>/UnitDelay1'
     *  UnitDelay: '<S197>/UnitDelay'
     *  UnitDelay: '<S197>/UnitDelay1'
     *  UnitDelay: '<S212>/UnitDelay1'
     */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* RelationalOperator: '<S166>/Comparison2' */
    VeSTMC_b_ShiftInProg2 = (rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea !=
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tar);

    /* RelationalOperator: '<S166>/Comparison5' incorporates:
     *  UnitDelay: '<S166>/UnitDelay2'
     */
    VeSTMC_b_ChngInTrgrtGR_SIP = (STMR_ac_DW.UnitDelay2_DSTATE_i !=
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea);
    rtb_AND_ow = !VeSTMC_b_ShiftInProg2;

    /* Logic: '<S166>/Logical7' incorporates:
     *  UnitDelay: '<S185>/UnitDelay2'
     */
    VeSTMC_b_NoSIPRisingEdg = (rtb_AND_ow || (STMR_ac_DW.UnitDelay2_DSTATE_l));

    /* Logic: '<S166>/Logical' */
    VeSTMC_b_SIP_ChngInTrgtGr = (((VeSTMC_b_ChngInTrgrtGR_SIP) &&
        (VeSTMC_b_ShiftInProg2)) && (VeSTMC_b_NoSIPRisingEdg));

    /* Logic: '<S166>/Logical6' */
    VeSTMC_b_SIP_Tmr_Rst = (rtb_AND_ow || (VeSTMC_b_SIP_ChngInTrgtGr));

    /* Switch: '<S186>/Switch1' incorporates:
     *  Logic: '<S187>/AND1'
     *  Logic: '<S187>/OR2'
     *  Switch: '<S186>/Switch5'
     *  UnitDelay: '<S187>/UnitDelay2'
     */
    if ((VeSTMC_b_SIP_Tmr_Rst) && (!STMR_ac_DW.UnitDelay2_DSTATE_md))
    {
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S186>/ConstantValue2'
         */
        VeSTMC_t_ShftInPrg_Tmr1 = 0.0F;
    }
    else
    {
        if (VeSTMC_b_ShiftInProg2)
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Constant: '<S184>/Calib'
             *  Sum: '<S186>/Subtraction'
             *  Switch: '<S186>/Switch5'
             *  UnitDelay: '<S186>/UnitDelay2'
             */
            VeSTMC_t_ShftInPrg_Tmr1 = KeSTMR_t_dT + VeSTMC_t_ShftInPrg_Tmr1;
        }
    }

    /* End of Switch: '<S186>/Switch1' */

    /* Update for UnitDelay: '<S187>/UnitDelay2' */
    STMR_ac_DW.UnitDelay2_DSTATE_md = VeSTMC_b_SIP_Tmr_Rst;

    /* RelationalOperator: '<S166>/Comparison1' incorporates:
     *  Constant: '<S183>/Calib'
     */
    VeSTMC_b_ExtendedShftInProg = (VeSTMC_t_ShftInPrg_Tmr1 >= KeSTMR_t_OptShftTm);

    /* Logic: '<S166>/Logical2' */
    VeSTMC_b_RstCounter = (((VeSTMI_b_DisblOutTrqMntr) ||
                            rtb_TmpSignalConversionAtVeSSMR_b_EngSpd) ||
                           (VeSTMC_b_ExtendedShftInProg));

    /* Logic: '<S169>/Logical1' */
    VeSTMC_b_RstPauseIntegral = (((VeSTMC_Cnt_ResumeMainCntr_Dly1) ||
        (VeSTMC_b_NoMinMaxError)) || (VeSTMC_b_RstCounter));
    STMR_ac_DW.VeSTMC_b_PauseIntgrl_Ltch_prev = (rtb_AND ||
        ((!VeSTMC_b_RstPauseIntegral) &&
         (STMR_ac_DW.VeSTMC_b_PauseIntgrl_Ltch_prev)));

    /* Switch: '<S213>/Switch3' incorporates:
     *  Switch: '<S213>/Switch1'
     *  UnitDelay: '<S212>/UnitDelay1'
     */
    if (VeSTMC_b_RstPauseIntegral)
    {
        /* Switch: '<S213>/Switch3' incorporates:
         *  Constant: '<S213>/ConstantValue2'
         */
        VeSTMC_t_PauseTime = 0.0F;
    }
    else
    {
        if (STMR_ac_DW.VeSTMC_b_PauseIntgrl_Ltch_prev)
        {
            /* Switch: '<S213>/Switch3' incorporates:
             *  Constant: '<S171>/Calib'
             *  Sum: '<S213>/Subtraction'
             *  Switch: '<S213>/Switch1'
             *  UnitDelay: '<S213>/UnitDelay1'
             */
            VeSTMC_t_PauseTime = KeSTMR_t_dT + VeSTMC_t_PauseTime;
        }
    }

    /* End of Switch: '<S213>/Switch3' */

    /* RelationalOperator: '<S169>/Comparison1' incorporates:
     *  Constant: '<S210>/Calib'
     */
    VeSTMC_b_PauseDlyActv = (VeSTMC_t_PauseTime <= KeSTMR_t_Lv2RdPerfm_Dly);

    /* Logic: '<S169>/Logical' incorporates:
     *  UnitDelay: '<S212>/UnitDelay1'
     */
    VeSTMC_b_RdPerfmMdActv = ((STMR_ac_DW.VeSTMC_b_PauseIntgrl_Ltch_prev) &&
        (VeSTMC_b_PauseDlyActv));

    /* Logic: '<S204>/OR1' */
    rtb_AND = !VeSTMC_b_RdPerfmMdActv;

    /* Logic: '<S168>/Logical1' incorporates:
     *  UnitDelay: '<S168>/UnitDelay2'
     */
    VeSTMC_b_ResetTrqErrorIntegrator =
        ((STMR_ac_DW.VeSTMC_b_Reset_Integrator_Prev) && rtb_AND);

    /* Sum: '<S113>/Sum1' */
    VeSTMC_M_ErrorMax = VeSTMC_M_NetTransTrqCmnd_Arb - VeSTMC_M_Lv2MaxLim_final;
    if (VeSTMC_b_MaxFailing)
    {
        /* Switch: '<S113>/Switch5' */
        VeSTMC_M_ErrorMaxArb = VeSTMC_M_ErrorMax;
    }
    else
    {
        /* Switch: '<S113>/Switch5' incorporates:
         *  Constant: '<S113>/ConstantValue2'
         */
        VeSTMC_M_ErrorMaxArb = 0.0F;
    }

    /* Sum: '<S113>/Sum2' */
    VeSTMC_M_ErrorMin = VeSTMC_M_NetTransTrqCmnd_Arb - VeSTMC_M_Lv2MinLim_final;
    if (VeSTMC_b_TMinLim_FailingCnfrm)
    {
        /* Switch: '<S113>/Switch1' */
        VeSTMC_M_ErrorMinArb = VeSTMC_M_ErrorMin;
    }
    else
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S113>/ConstantValue1'
         */
        VeSTMC_M_ErrorMinArb = 0.0F;
    }

    if (VeSTMC_b_MaxFailing)
    {
        /* Switch: '<S113>/Switch2' */
        VeSTMC_M_Error_Arb = VeSTMC_M_ErrorMaxArb;
    }
    else
    {
        /* Switch: '<S113>/Switch2' */
        VeSTMC_M_Error_Arb = VeSTMC_M_ErrorMinArb;
    }

    /* Sum: '<S165>/Sum4' incorporates:
     *  UnitDelay: '<S165>/UnitDelay2'
     */
    VeSTMC_M_DiffInMaxErr = VeSTMC_M_ErrorMaxArb -
        STMR_ac_DW.VeSTMC_M_Error_Max_Arb_Prev;

    /* Lookup_n-D: '<S177>/Vector' incorporates:
     *  Sum: '<S165>/Sum4'
     */
    VeSTMC_K_Gain_MaxError = look1_iflf_binlca_16a(VeSTMC_M_DiffInMaxErr, ((
        const float32 *)&(KxSTMR_K_MaxErrIntegralGain[0])), ((const float32 *)
        &(KtSTMR_K_MaxErrIntegralGain[0])), 14U);

    /* Sum: '<S165>/Sum5' incorporates:
     *  UnitDelay: '<S165>/UnitDelay1'
     */
    VeSTMC_M_DiffInMinErr = VeSTMC_M_ErrorMinArb -
        STMR_ac_DW.VeSTMC_M_Error_Min_Arb_Prev;

    /* Lookup_n-D: '<S178>/Vector' incorporates:
     *  Sum: '<S165>/Sum5'
     */
    VeSTMC_K_Gain_MinError = look1_iflf_binlca_16a(VeSTMC_M_DiffInMinErr, ((
        const float32 *)&(KxSTMR_K_MinErrIntegralGain[0])), ((const float32 *)
        &(KtSTMR_K_MinErrIntegralGain[0])), 14U);
    if (VeSTMC_b_TMinLim_FailingCnfrm)
    {
        /* Switch: '<S165>/Switch1' */
        VeSTMC_K_Gain_MinError_Arb = VeSTMC_K_Gain_MinError;
    }
    else
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S165>/ConstantValue3'
         */
        VeSTMC_K_Gain_MinError_Arb = 0.0F;
    }

    if (VeSTMC_b_MaxFailing)
    {
        /* Switch: '<S165>/Switch3' */
        VeSTMC_K_Gain_Integral = VeSTMC_K_Gain_MaxError;
    }
    else
    {
        /* Switch: '<S165>/Switch3' */
        VeSTMC_K_Gain_Integral = VeSTMC_K_Gain_MinError_Arb;
    }

    /* Product: '<S168>/Multiplication' incorporates:
     *  Constant: '<S171>/Calib'
     */
    VeSTMC_K_TrqErrIntgrl = (VeSTMC_M_Error_Arb * KeSTMR_t_dT) *
        VeSTMC_K_Gain_Integral;

    /* UnitDelay: '<S169>/UnitDelay2' */
    VeSTMC_K_TrqErrorDuringPause = STMR_ac_DW.VeSTMC_K_TrqErrorDuringPause_Prev;

    /* Logic: '<S204>/AND' incorporates:
     *  UnitDelay: '<S204>/UnitDelay'
     */
    rtb_AND_ow = (rtb_AND && (STMR_ac_DW.VeSTMC_K_IntegralRstFctr_Abs_Prev_b));

    /* Update for UnitDelay: '<S204>/UnitDelay' */
    STMR_ac_DW.VeSTMC_K_IntegralRstFctr_Abs_Prev_b = VeSTMC_b_RdPerfmMdActv;
    if (rtb_AND_ow)
    {
        /* Switch: '<S168>/Switch3' */
        VeSTMC_K_TrqErrIntgrl_Pause = VeSTMC_K_TrqErrorDuringPause;
    }
    else
    {
        /* Switch: '<S168>/Switch3' incorporates:
         *  Constant: '<S168>/ConstantValue4'
         */
        VeSTMC_K_TrqErrIntgrl_Pause = 0.0F;
    }

    /* Sum: '<S168>/Sum2' */
    VeSTMC_K_IntegralOfTrqErr = (VeSTMC_K_TrqErrIntgrl + rtb_UnitDelay1_fe) +
        VeSTMC_K_TrqErrIntgrl_Pause;

    /* Logic: '<S168>/Logical' */
    VeSTMC_b_IntegrateError = ((VeSTMC_b_TMaxMinLimFailing) && rtb_AND);
    if (VeSTMC_b_IntegrateError)
    {
        /* Switch: '<S168>/Switch4' */
        VeSTMC_K_IntegralOfTrqErr_Arb = VeSTMC_K_IntegralOfTrqErr;
    }
    else
    {
        /* Switch: '<S168>/Switch4' */
        VeSTMC_K_IntegralOfTrqErr_Arb = rtb_UnitDelay1_fe;
    }

    if (VeSTMC_b_ResetTrqErrorIntegrator)
    {
        /* Switch: '<S168>/Switch2' */
        VeSTMC_K_TrqErr_NmmS = VeSTMC_K_Integral_Rst_Arb;
    }
    else
    {
        /* Switch: '<S168>/Switch2' */
        VeSTMC_K_TrqErr_NmmS = VeSTMC_K_IntegralOfTrqErr_Arb;
    }

    /* Switch: '<S208>/Switch1' incorporates:
     *  RelationalOperator: '<S208>/RelationalOperator'
     */
    if (VeSTMC_K_TrqErr_NmmS_MxLmt < VeSTMC_K_TrqErr_NmmS)
    {
        /* Lookup_n-D: '<S488>/Vector' */
        rtb_Switch5_l = VeSTMC_K_TrqErr_NmmS_MxLmt;
    }
    else
    {
        /* Lookup_n-D: '<S488>/Vector' */
        rtb_Switch5_l = VeSTMC_K_TrqErr_NmmS;
    }

    /* End of Switch: '<S208>/Switch1' */

    /* Switch: '<S208>/Switch2' incorporates:
     *  Constant: '<S168>/ConstantValue3'
     *  RelationalOperator: '<S208>/RelationalOperator1'
     */
    if (rtb_Switch5_l > 0.0F)
    {
        /* Switch: '<S208>/Switch2' */
        VeSTMC_K_TrqErr_NmmS_Arb = rtb_Switch5_l;
    }
    else
    {
        /* Switch: '<S208>/Switch2' */
        VeSTMC_K_TrqErr_NmmS_Arb = 0.0F;
    }

    /* End of Switch: '<S208>/Switch2' */

    /* Lookup_n-D: '<S180>/Vector' incorporates:
     *  Switch: '<S539>/Switch10'
     */
    VeSTMC_M_MaxLim_RdPrfm_Lmt = look1_iflf_binlca_16a(VeSTMI_r_TorqueTransRatio,
        ((const float32 *)&(KxSTMR_M_UnAcc_LTSH_TTR[0])), ((const float32 *)
        &(KtSTMR_M_UnAcc_LTSH_TTR[0])), 10U);
    if (rtb_TmpSignalConversionAtVeSCMR_b_Torque)
    {
        /* Switch: '<S165>/Switch7' incorporates:
         *  Constant: '<S174>/Calib'
         */
        VeSTMC_M_MaxLim_RdPrfm_Lmt_Arb = KeSTMR_K_MaxErrLmt_RdPrfm;
    }
    else
    {
        /* Switch: '<S165>/Switch7' */
        VeSTMC_M_MaxLim_RdPrfm_Lmt_Arb = VeSTMC_M_MaxLim_RdPrfm_Lmt;
    }

    /* Lookup_n-D: '<S182>/Vector' incorporates:
     *  Switch: '<S539>/Switch10'
     */
    VeSTMC_M_MinLim_RdPrfm_Lmt = look1_iflf_binlca_16a(VeSTMI_r_TorqueTransRatio,
        ((const float32 *)&(KxSTMR_M_UnDeccel_LTSH_TTR[0])), ((const float32 *)
        &(KtSTMR_M_UnDeccel_LTSH_TTR[0])), 10U);
    if (rtb_TmpSignalConversionAtVeSCMR_b_Torque)
    {
        /* Switch: '<S165>/Switch8' incorporates:
         *  Constant: '<S176>/Calib'
         */
        VeSTMC_M_MinLim_RdPrfm_Lmt_Arb = KeSTMR_K_MinErrLmt_RdPrfm;
    }
    else
    {
        /* Switch: '<S165>/Switch8' */
        VeSTMC_M_MinLim_RdPrfm_Lmt_Arb = VeSTMC_M_MinLim_RdPrfm_Lmt;
    }

    if (VeSTMC_b_TMinLim_FailingCnfrm)
    {
        /* Switch: '<S165>/Switch2' */
        VeSTMC_K_MinErr_RdPrfm_Arb = VeSTMC_M_MinLim_RdPrfm_Lmt_Arb;
    }
    else
    {
        /* Switch: '<S165>/Switch2' incorporates:
         *  Constant: '<S165>/ConstantValue4'
         */
        VeSTMC_K_MinErr_RdPrfm_Arb = 0.0F;
    }

    if (VeSTMC_b_MaxFailing)
    {
        /* Switch: '<S165>/Switch4' */
        VeSTMC_K_Err_Thsh_RdPrfm_Arb = VeSTMC_M_MaxLim_RdPrfm_Lmt_Arb;
    }
    else
    {
        /* Switch: '<S165>/Switch4' */
        VeSTMC_K_Err_Thsh_RdPrfm_Arb = VeSTMC_K_MinErr_RdPrfm_Arb;
    }

    STMR_ac_DW.UnitDelay1_DSTATE_eg = ((KeSTMR_b_Lv2ReducePerfModeEnbl) &&
        (VeSTMC_K_TrqErr_NmmS_Arb > VeSTMC_K_Err_Thsh_RdPrfm_Arb));

    /* Logic: '<S99>/AND' incorporates:
     *  Constant: '<S217>/Calib'
     *  UnitDelay: '<S113>/UnitDelay1'
     */
    VeSTMC_b_OutTrqMaxFail_LL_final = ((STMR_ac_DW.UnitDelay1_DSTATE_eg) &&
        (VeSTMC_b_MaxFailing));

    /* RelationalOperator: '<S172>/Comparison2' */
    VeSTMC_b_TrqError_Cnfrmd = (VeSTMC_K_TrqErr_NmmS_Arb > VeSTMC_K_Err_Thsh_Arb);

    /* UnitDelay: '<S132>/UnitDelay1' */
    VeSTMC_b_OutTrqMaxFail_final = ((VeSTMC_b_TrqError_Cnfrmd) &&
        (VeSTMC_b_MaxFailing));

    /* Logic: '<S101>/AND' */
    VeSTMC_b_RdPrfOutTrqMaxFailDist_final = false;

    /* UnitDelay: '<S124>/UnitDelay1' */
    VeSTMC_b_OutTrqMaxFailDist_final = false;

    /* Logic: '<S103>/AND' incorporates:
     *  UnitDelay: '<S113>/UnitDelay1'
     */
    VeSTMC_b_OutTrqMinFail_LL_final = ((STMR_ac_DW.UnitDelay1_DSTATE_eg) &&
        (VeSTMC_b_TMinLim_FailingCnfrm));

    /* UnitDelay: '<S159>/UnitDelay1' */
    VeSTMC_b_OutTrqMinFail_final = ((VeSTMC_b_TrqError_Cnfrmd) &&
        (VeSTMC_b_TMinLim_FailingCnfrm));

    /* UnitDelay: '<S197>/UnitDelay' */
    rtb_UnitDelay_ix = STMR_ac_DW.UnitDelay_DSTATE;

    /* UnitDelay: '<S197>/UnitDelay1' */
    rtb_UnitDelay1_j1 = STMR_ac_DW.UnitDelay1_DSTATE;

    /* Product: '<S197>/Product1' incorporates:
     *  Constant: '<S197>/ConstantValue'
     *  UnitDelay: '<S197>/UnitDelay2'
     */
    VeSTMC_M_AvgLv2Trq = ((rtb_UnitDelay_ix + STMR_ac_DW.UnitDelay1_DSTATE) +
                          STMR_ac_DW.UnitDelay2_DSTATE) / 3.0F;

    /* UnitDelay: '<S193>/UnitDelay' */
    rtb_UnitDelay_hs = STMR_ac_DW.UnitDelay_DSTATE_i;

    /* UnitDelay: '<S193>/UnitDelay1' */
    rtb_UnitDelay1_mw = STMR_ac_DW.UnitDelay1_DSTATE_d;

    /* Product: '<S193>/Product2' incorporates:
     *  Constant: '<S193>/ConstantValue1'
     *  UnitDelay: '<S193>/UnitDelay2'
     */
    VeSTMC_n_AvgP2Spd = ((STMR_ac_DW.UnitDelay_DSTATE_i +
                          STMR_ac_DW.UnitDelay1_DSTATE_d) +
                         STMR_ac_DW.UnitDelay2_DSTATE_c) / 3.0F;

    /* Sum: '<S188>/Sum3' */
    VeSTMC_n_P2SpdErrr = VeSTMI_n_Lv2MtrBSpd - VeSTMC_n_AvgP2Spd;

    /* RelationalOperator: '<S188>/Comparison4' incorporates:
     *  Constant: '<S194>/Calib'
     */
    VeSTMC_b_SpdRising = (VeSTMC_n_P2SpdErrr >= KeSTMR_M_SpdRisecheckThrshld);

    /* MinMax: '<S188>/Min' incorporates:
     *  Constant: '<S196>/Calib'
     */
    VeSTMC_n_IdlSpdTrgtArb = fminf(rtb_TmpSignalConversionAtVeOHSR_n_IdleSp,
        KeSTMR_n_MaxIdleSpd);

    /* RelationalOperator: '<S188>/Comparison2' incorporates:
     *  Constant: '<S195>/Calib'
     */
    VeSTMC_b_Spdhigh = ((VeSTMI_n_Lv2MtrBSpd - VeSTMC_n_IdlSpdTrgtArb) >
                        KeSTMR_n_MaxIdleErrTrgt);

    /* Logic: '<S188>/Logical1' */
    VeSTMC_b_CrpOverSpd = (((VeSTMC_b_SpdRising) && (VeSTMC_b_Spdhigh)) &&
                           (VeSTMI_b_AllModeCreepActv));

    /* RelationalOperator: '<S189>/Comparison3' */
    VeSTMC_b_HighCmnddTrq = (VeSTMC_M_NetTransTrqCmnd_Arb >=
        rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri);

    /* Logic: '<S189>/Logical1' */
    VeSTMC_b_LatchTrqForCheck = ((VeSTMC_b_CrpOverSpd) && (VeSTMC_b_HighCmnddTrq));
    if (!VeSTMC_b_LatchTrqForCheck)
    {
        /* Switch: '<S189>/Switch3' */
        VeSTMC_M_Lv2TrqPriorOvrSpd = VeSTMC_M_NetTransTrqCmnd_Arb;
    }

    if (KeSTMR_b_SlectDeltaTrqErrMthd)
    {
        /* Switch: '<S189>/Switch1' */
        VeSTMC_M_TrqErr1 = VeSTMC_M_AvgLv2Trq;
    }
    else
    {
        /* Switch: '<S189>/Switch1' */
        VeSTMC_M_TrqErr1 = VeSTMC_M_Lv2TrqPriorOvrSpd;
    }

    /* Sum: '<S189>/Sum1' incorporates:
     *  Constant: '<S199>/Calib'
     */
    VeSTMC_M_TrqErr = VeSTMC_M_NetTransTrqCmnd_Arb - VeSTMC_M_TrqErr1;

    /* RelationalOperator: '<S189>/Comparison1' incorporates:
     *  Constant: '<S198>/Calib'
     */
    VeSTMC_b_Trqerr = (VeSTMC_M_TrqErr >= KeSTMR_M_SpdControlTrqError);

    /* Switch: '<S201>/Switch1' incorporates:
     *  Constant: '<S200>/Calib'
     *  Constant: '<S201>/ConstantValue'
     *  Constant: '<S201>/ConstantValue1'
     *  Logic: '<S201>/OR'
     *  Logic: '<S201>/OR1'
     *  Logic: '<S202>/AND1'
     *  Logic: '<S202>/OR2'
     *  MinMax: '<S201>/Minimum'
     *  Sum: '<S201>/Summation'
     *  UnitDelay: '<S201>/UnitDelay2'
     *  UnitDelay: '<S202>/UnitDelay2'
     */
    if ((!VeSTMC_b_Trqerr) || ((VeSTMC_b_Trqerr) &&
                               (!STMR_ac_DW.UnitDelay2_DSTATE_mr)))
    {
        STMR_ac_DW.UnitDelay2_DSTATE_m = 0U;
    }
    else if (KeSTMR_t_HighTrqCheckTime < ((uint16)(((uint32)
                STMR_ac_DW.UnitDelay2_DSTATE_m) + 1U)))
    {
        /* MinMax: '<S201>/Minimum' incorporates:
         *  Constant: '<S200>/Calib'
         */
        STMR_ac_DW.UnitDelay2_DSTATE_m = KeSTMR_t_HighTrqCheckTime;
    }
    else
    {
        /* MinMax: '<S201>/Minimum' incorporates:
         *  Constant: '<S201>/ConstantValue'
         *  Sum: '<S201>/Summation'
         *  UnitDelay: '<S201>/UnitDelay2'
         */
        STMR_ac_DW.UnitDelay2_DSTATE_m = (uint16)(((uint32)
            STMR_ac_DW.UnitDelay2_DSTATE_m) + 1U);
    }

    /* End of Switch: '<S201>/Switch1' */

    /* Update for UnitDelay: '<S202>/UnitDelay2' */
    STMR_ac_DW.UnitDelay2_DSTATE_mr = VeSTMC_b_Trqerr;

    /* Logic: '<S167>/Logical2' incorporates:
     *  Constant: '<S200>/Calib'
     *  Logic: '<S201>/AND'
     *  RelationalOperator: '<S201>/GreaterThan'
     *  UnitDelay: '<S201>/UnitDelay2'
     */
    VeSTMC_b_SpdErrFailing = (((VeSTMC_b_Trqerr) &&
        (STMR_ac_DW.UnitDelay2_DSTATE_m >= KeSTMR_t_HighTrqCheckTime)) &&
        (VeSTMC_b_CrpOverSpd));
    if (VeSTMC_b_SpdErrFailing)
    {
        /* Sum: '<S192>/Inc_Cntr' incorporates:
         *  Constant: '<S190>/Calib'
         */
        rtb_VeSTMC_Cnt_SpdErrMntrFlt_inc_cntr = (uint8)(((uint32)
            STMR_ac_DW.UnitDelay2_DSTATE_g) + ((uint32)
            KeSTMR_Cnt_SpdErrFailCntrInc));

        /* Switch: '<S192>/Switch4' incorporates:
         *  RelationalOperator: '<S192>/GreaterThan1'
         */
        if (rtb_VeSTMC_Cnt_SpdErrMntrFlt_inc_cntr <
                STMR_ac_DW.UnitDelay2_DSTATE_g)
        {
            /* Switch: '<S192>/Switch3' incorporates:
             *  Constant: '<S192>/ConstantValue3'
             */
            rtb_VeSTMC_Cnt_SpdErrMntrFlt_inc_cntr = MAX_uint8_T;
        }

        /* End of Switch: '<S192>/Switch4' */
    }
    else
    {
        if (((sint32)STMR_ac_DW.UnitDelay2_DSTATE_g) > 1)
        {
            /* MinMax: '<S192>/FixPtMinax' */
            rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca =
                STMR_ac_DW.UnitDelay2_DSTATE_g;
        }
        else
        {
            /* MinMax: '<S192>/FixPtMinax' */
            rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = 1U;
        }

        /* Switch: '<S192>/Switch3' incorporates:
         *  Constant: '<S167>/FixedDecrement'
         *  Sum: '<S192>/Dec_Cntr'
         */
        rtb_VeSTMC_Cnt_SpdErrMntrFlt_inc_cntr = (uint8)((sint32)(((sint32)
            rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca) - 1));
    }

    if (rtb_TmpSignalConversionAtVeSSMR_b_EngSpd)
    {
        VeSTMC_b_IdleSpdErrMntrl_final = false;
    }
    else
    {
        VeSTMC_b_IdleSpdErrMntrl_final = ((rtb_VeSTMC_Cnt_SpdErrMntrFlt_inc_cntr
            >= KeSTMR_Cnt_SpdErrFailCntrLim) || (STMR_ac_DW.UnitDelay1_DSTATE_pp));
    }

#endif

    /* End of RelationalOperator: '<S166>/Comparison2' */
    /* End of Outputs for SubSystem: '<S166>/LV2_Stop_Watch_Reset_Trigger_Enabled' */
    /* End of Outputs for SubSystem: '<S169>/LV2_Stop_Watch_Reset_Enabled' */
    /* End of Outputs for SubSystem: '<S168>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S168>/MinMaxLimiter' */
    /* End of Outputs for SubSystem: '<S189>/LV2_Turn_On_Delay_Sample' */

    /* UnitDelay: '<S218>/UnitDelay' */
    rtb_TmpSignalConversionAtVeSCMR_b_Torque = VeSTMC_b_Max_Lv2ReducedPerfMode;

    /* Outputs for Atomic SubSystem: '<S111>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* Logic: '<S111>/Logical19' incorporates:
     *  Logic: '<S151>/OR1'
     */
    rtb_AND = !VeSTMC_b_MaxFailing;

    /* End of Outputs for SubSystem: '<S111>/LV2_Turn_Off_Delay_Sample_Modified' */

    /* Logic: '<S111>/Logical3' incorporates:
     *  UnitDelay: '<S218>/UnitDelay'
     */
    rtb_VariantMerge_For_Variant_Source_V__1 = !VeSTMC_b_Max_Lv2ReducedPerfMode;

    /* Logic: '<S111>/Logical46' incorporates:
     *  Logic: '<S111>/Logical19'
     *  Logic: '<S111>/Logical3'
     */
    VeSTMC_b_RstMntr_NormalMd = (rtb_VariantMerge_For_Variant_Source_V__1 &&
        rtb_AND);

    /* Outputs for Atomic SubSystem: '<S111>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* Switch: '<S149>/Switch' incorporates:
     *  Logic: '<S151>/AND'
     *  MinMax: '<S149>/Minimum1'
     *  UnitDelay: '<S149>/UnitDelay1'
     *  UnitDelay: '<S151>/UnitDelay'
     */
    if (rtb_AND && (STMR_ac_DW.VeSTMC_b_MaxLimFailingDlyd_prev))
    {
        /* MinMax: '<S149>/Minimum1' incorporates:
         *  Constant: '<S140>/Calib'
         *  UnitDelay: '<S149>/UnitDelay1'
         */
        STMR_ac_DW.VeSTMC_Cnt_MaxLimFailingDlyd_prev =
            KeSTMR_Cnt_RdPerfmTrqChkCntr;
    }
    else
    {
        if (((sint32)STMR_ac_DW.VeSTMC_Cnt_MaxLimFailingDlyd_prev) <= 1)
        {
            /* MinMax: '<S149>/Minimum1' */
            STMR_ac_DW.VeSTMC_Cnt_MaxLimFailingDlyd_prev = 1U;
        }

        /* MinMax: '<S149>/Minimum1' incorporates:
         *  Constant: '<S149>/ConstantValue'
         *  Sum: '<S149>/Summation'
         *  UnitDelay: '<S149>/UnitDelay1'
         */
        STMR_ac_DW.VeSTMC_Cnt_MaxLimFailingDlyd_prev = (uint8)((sint32)(((sint32)
            STMR_ac_DW.VeSTMC_Cnt_MaxLimFailingDlyd_prev) - 1));
    }

    /* End of Switch: '<S149>/Switch' */

    /* Logic: '<S149>/AND' incorporates:
     *  Constant: '<S149>/ConstantValue2'
     *  RelationalOperator: '<S149>/GreatherThan1'
     *  UnitDelay: '<S149>/UnitDelay1'
     */
    rtb_AND = ((VeSTMC_b_MaxFailing) || (((sint32)
                 STMR_ac_DW.VeSTMC_Cnt_MaxLimFailingDlyd_prev) > 0));

    /* Update for UnitDelay: '<S151>/UnitDelay' */
    STMR_ac_DW.VeSTMC_b_MaxLimFailingDlyd_prev = VeSTMC_b_MaxFailing;

    /* End of Outputs for SubSystem: '<S111>/LV2_Turn_Off_Delay_Sample_Modified' */

    /* Logic: '<S111>/Logical39' incorporates:
     *  Logic: '<S111>/Logical38'
     *  UnitDelay: '<S111>/UnitDelay7'
     */
    rtb_VariantMerge_For_Variant_Source_V__2 = ((!rtb_AND) &&
        (STMR_ac_DW.VeSTMC_Cnt_MaxLimFailingDlyd_Prev));

    /* Logic: '<S111>/Logical21' incorporates:
     *  Constant: '<S148>/Calib'
     *  UnitDelay: '<S218>/UnitDelay'
     */
    VeSTMC_b_RstMntrRdPrfmMd = (((VeSTMC_b_Max_Lv2ReducedPerfMode) &&
        (KeSTMR_b_UseRdPerfmRst)) && rtb_VariantMerge_For_Variant_Source_V__2);

    /* Outputs for Atomic SubSystem: '<S114>/MinMaxLimiter' */
    /* Logic: '<S117>/Logical4' incorporates:
     *  Constant: '<S128>/ConstantValue'
     *  Constant: '<S128>/ConstantValue1'
     *  Constant: '<S128>/ConstantValue2'
     *  Constant: '<S128>/ConstantValue3'
     *  DataTypeConversion: '<S114>/DataTypeConv_Cnt'
     *  Logic: '<S114>/Logical30'
     *  Logic: '<S114>/Logical43'
     *  Logic: '<S114>/Logical53'
     *  Logic: '<S114>/Logical54'
     *  Logic: '<S114>/Logical58'
     *  Logic: '<S117>/Logical44'
     *  Logic: '<S117>/Logical45'
     *  Logic: '<S123>/NOT'
     *  Logic: '<S123>/OR'
     *  Logic: '<S123>/OR1'
     *  Logic: '<S124>/NOT'
     *  Logic: '<S124>/OR'
     *  Logic: '<S124>/OR1'
     *  Logic: '<S125>/NOT'
     *  Logic: '<S125>/OR'
     *  Logic: '<S125>/OR1'
     *  Logic: '<S128>/AND'
     *  Logic: '<S132>/NOT'
     *  Logic: '<S132>/OR'
     *  Logic: '<S132>/OR1'
     *  Logic: '<S135>/AND1'
     *  Logic: '<S135>/OR2'
     *  Logic: '<S136>/AND1'
     *  Logic: '<S136>/OR2'
     *  Logic: '<S137>/NOT'
     *  Logic: '<S137>/OR'
     *  Logic: '<S137>/OR1'
     *  Product: '<S114>/Product2'
     *  RelationalOperator: '<S114>/MaxLimReached'
     *  RelationalOperator: '<S114>/MaxLimReached1'
     *  RelationalOperator: '<S114>/MaxLimReached2'
     *  RelationalOperator: '<S114>/MaxLimReached3'
     *  RelationalOperator: '<S114>/MaxLimReached4'
     *  RelationalOperator: '<S114>/MaxLimReached5'
     *  RelationalOperator: '<S114>/MaxLimReached6'
     *  RelationalOperator: '<S114>/MaxLimReached7'
     *  RelationalOperator: '<S128>/GreaterThanorEqual'
     *  RelationalOperator: '<S128>/GreaterThaorEqual1'
     *  RelationalOperator: '<S128>/NotEqual'
     *  RelationalOperator: '<S128>/NotEqual1'
     *  RelationalOperator: '<S133>/Enough_counts_to_Fail'
     *  RelationalOperator: '<S133>/Enough_counts_to_Fail1'
     *  RelationalOperator: '<S133>/MaxLimReached'
     *  Sum: '<S114>/Sum12'
     *  Sum: '<S114>/Sum13'
     *  Sum: '<S114>/Sum14'
     *  Sum: '<S114>/Sum15'
     *  Sum: '<S133>/Main_Counter'
     *  Switch: '<S114>/Switch1'
     *  Switch: '<S114>/Switch10'
     *  Switch: '<S114>/Switch11'
     *  Switch: '<S114>/Switch12'
     *  Switch: '<S114>/Switch13'
     *  Switch: '<S114>/Switch2'
     *  Switch: '<S114>/Switch5'
     *  Switch: '<S114>/Switch6'
     *  Switch: '<S114>/Switch7'
     *  Switch: '<S114>/Switch8'
     *  Switch: '<S114>/Switch9'
     *  Switch: '<S117>/Switch4'
     *  Switch: '<S128>/Switch1'
     *  Switch: '<S128>/Switch2'
     *  Switch: '<S128>/Switch3'
     *  Switch: '<S133>/Switch16'
     *  Switch: '<S133>/Switch17'
     *  Switch: '<S133>/Switch18'
     *  Switch: '<S133>/Switch19'
     *  Switch: '<S133>/Switch20'
     *  Switch: '<S133>/Switch7'
     *  UnitDelay: '<S114>/UnitDelay2'
     *  UnitDelay: '<S114>/UnitDelay3'
     *  UnitDelay: '<S114>/UnitDelay6'
     *  UnitDelay: '<S133>/UnitDelay3'
     *  UnitDelay: '<S135>/UnitDelay'
     *  UnitDelay: '<S136>/UnitDelay'
     *  UnitDelay: '<S137>/UnitDelay1'
     *  UnitDelay: '<S218>/UnitDelay'
     */
#if !Rte_SysCon_Variant_STMR_FUNC_4

    VeSTMC_b_RstCntrForMaxLimFail = ((rtb_TmpSignalConversionAtVeSSMR_b_EngSpd ||
        (VeSTMC_b_RstMntr_NormalMd)) || (VeSTMC_b_RstMntrRdPrfmMd));

    /* UnitDelay: '<S133>/UnitDelay3' */
    rtb_UnitDelay3_p = STMR_ac_DW.VeSTMC_b_ResumeCntrPrevVal;
    STMR_ac_DW.VeSTMC_b_PCntrActvLtch_prev = (((VeSTMC_b_Max_Lv2ReducedPerfMode)
        && (!STMR_ac_DW.VeSTMC_b_LtchPCntr_EdgRising_prev)) ||
        ((!STMR_ac_DW.VeSTMC_b_ResumeCntrPrevVal) &&
         (STMR_ac_DW.VeSTMC_b_PCntrActvLtch_prev)));

    /* UnitDelay: '<S506>/Unit Delay' incorporates:
     *  Constant: '<S133>/ConstantValue19'
     *  UnitDelay: '<S135>/UnitDelay'
     *  UnitDelay: '<S137>/UnitDelay1'
     *  UnitDelay: '<S218>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea = (((sint32)
        VeSTMC_Cnt_FinalFailCnts) >= 255);
    if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea)
    {
        /* Switch: '<S133>/Switch17' incorporates:
         *  Constant: '<S133>/ConstantValue20'
         */
        VeSTMC_Cnt_PrevValArb = 0U;
    }
    else
    {
        /* Switch: '<S133>/Switch17' */
        VeSTMC_Cnt_PrevValArb = VeSTMC_Cnt_FinalFailCnts;
    }

    if ((STMR_ac_DW.VeSTMC_b_ResumeCntrPrevVal) &&
            (!STMR_ac_DW.VeSTMC_b_ResumeEdgRising_prev))
    {
        /* Switch: '<S133>/Switch20' */
        VeSTMC_Cnt_PcntrIncVal = VeSTMC_Cnt_PCntrVal;
    }
    else
    {
        /* Switch: '<S133>/Switch20' incorporates:
         *  Constant: '<S133>/ConstantValue21'
         */
        VeSTMC_Cnt_PcntrIncVal = 0U;
    }

    /* Sum: '<S133>/Main_Counter' incorporates:
     *  Constant: '<S133>/ConstantValue4'
     *  UnitDelay: '<S136>/UnitDelay'
     */
    VeSTMC_Cnt_MCntr_FailCnts = (uint8)(((uint32)((uint8)(((uint32)
        VeSTMC_Cnt_PrevValArb) + ((uint32)VeSTMC_Cnt_PcntrIncVal)))) + 1U);
    if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea)
    {
        /* Switch: '<S133>/Switch18' */
        VeSTMC_Cnt_FailCntsAftrMaxChk = VeSTMC_Cnt_FinalFailCnts;
    }
    else
    {
        /* Switch: '<S133>/Switch18' */
        VeSTMC_Cnt_FailCntsAftrMaxChk = VeSTMC_Cnt_MCntr_FailCnts;
    }

    /* Logic: '<S117>/Logical45' incorporates:
     *  Constant: '<S116>/Calib'
     */
    VeSTMC_b_MaxFailing_arb = ((!KeSTMR_b_Ebl_NewReqUnintAccel) &&
        (VeSTMC_b_MaxFailing));
    if (VeSTMC_b_MaxFailing_arb)
    {
        /* Switch: '<S133>/Switch19' */
        VeSTMC_Cnt_FailCntsArb = VeSTMC_Cnt_FailCntsAftrMaxChk;
    }
    else
    {
        /* Switch: '<S133>/Switch19' */
        VeSTMC_Cnt_FailCntsArb = VeSTMC_Cnt_FinalFailCnts;
    }

    if (STMR_ac_DW.VeSTMC_b_PCntrActvLtch_prev)
    {
        /* Switch: '<S133>/Switch7' */
        VeSTMC_Cnt_FailCntsArbAftrPause = VeSTMC_Cnt_FinalFailCnts;
    }
    else
    {
        /* Switch: '<S133>/Switch7' */
        VeSTMC_Cnt_FailCntsArbAftrPause = VeSTMC_Cnt_FailCntsArb;
    }

    if (VeSTMC_b_RstCntrForMaxLimFail)
    {
        /* Switch: '<S133>/Switch16' incorporates:
         *  Constant: '<S133>/ConstantValue18'
         */
        VeSTMC_Cnt_FinalFailCnts = 0U;
    }
    else
    {
        /* Switch: '<S133>/Switch16' */
        VeSTMC_Cnt_FinalFailCnts = VeSTMC_Cnt_FailCntsArbAftrPause;
    }

    /* Logic: '<S99>/AND' incorporates:
     *  Constant: '<S131>/Calib'
     *  UnitDelay: '<S137>/UnitDelay1'
     */
    VeSTMC_b_OutTrqMaxFail_LL_final = (VeSTMC_Cnt_FinalFailCnts >=
        KeSTMR_Cnt_Tmax_LL);
    if (VeSTMI_b_LimpHomeActv)
    {
        /* Switch: '<S117>/Switch4' incorporates:
         *  Constant: '<S130>/Calib'
         */
        VeSTMC_Cnt_TMaxCntrLim_Arb = KeSTMR_Cnt_Tmax_Cntr_Lim_LHom;
    }
    else
    {
        /* Switch: '<S117>/Switch4' incorporates:
         *  Constant: '<S129>/Calib'
         */
        VeSTMC_Cnt_TMaxCntrLim_Arb = KeSTMR_Cnt_Tmax_Cntr_Lim;
    }

    rtb_AND_ow = !rtb_TmpSignalConversionAtVeSSMR_b_EngSpd;

    /* UnitDelay: '<S132>/UnitDelay1' */
    VeSTMC_b_OutTrqMaxFail_final = ((VeSTMC_Cnt_FinalFailCnts >=
        VeSTMC_Cnt_TMaxCntrLim_Arb) || (rtb_AND_ow &&
        (STMR_ac_DW.VeSTMC_b_OutTrq_MaxLimFail_Ltch_prev)));

    /* Logic: '<S114>/Logical54' incorporates:
     *  UnitDelay: '<S114>/UnitDelay5'
     */
    VeSTMC_b_RstRdPerfmCount =
        (((STMR_ac_DW.VeSTMC_b_TorqSumFault_Distbased_Latch_pr) ||
          rtb_TmpSignalConversionAtVeSSMR_b_EngSpd) ||
         rtb_VariantMerge_For_Variant_Source_V__2);

    /* UnitDelay: '<S114>/UnitDelay6' */
    VeSTMC_Cnt_RdPrfTorqFltEble_prev = VeSTMC_Cnt_RdPrfTorqFltEble;

    /* Sum: '<S114>/Sum15' incorporates:
     *  Constant: '<S114>/ConstantValue15'
     */
    VeSTMC_Cnt_RdPrfTorqLmt_Inc = (uint8)(((uint32)
        VeSTMC_Cnt_RdPrfTorqFltEble_prev) + 1U);

    /* UnitDelay: '<S114>/UnitDelay2' */
    VeSTMC_Cnt_Integral_TrqDiff_prev = VeSTMC_Cnt_Integral_TrqDiff;

    /* Sum: '<S114>/Sum12' incorporates:
     *  Constant: '<S114>/ConstantValue1'
     */
    VeSTMC_Cnt_IntegralSum = (uint16)(((uint32)VeSTMC_Cnt_Integral_TrqDiff_prev)
        + 1U);

    /* Switch: '<S126>/LimiterSwitch' incorporates:
     *  Constant: '<S114>/ConstantValue7'
     *  RelationalOperator: '<S126>/GreatherThan'
     */
    if (65534 < ((sint32)VeSTMC_Cnt_IntegralSum))
    {
        /* UnitDelay: '<S293>/UnitDelay' */
        VeSTMC_Cnt_IntegralNumLimited = 65534U;
    }
    else
    {
        /* UnitDelay: '<S293>/UnitDelay' */
        VeSTMC_Cnt_IntegralNumLimited = VeSTMC_Cnt_IntegralSum;
    }

    /* End of Switch: '<S126>/LimiterSwitch' */

    /* Switch: '<S126>/LimiterSwitch1' incorporates:
     *  Constant: '<S114>/ConstantValue6'
     *  RelationalOperator: '<S126>/GreatherThan1'
     */
    if (((sint32)VeSTMC_Cnt_IntegralNumLimited) <= 0)
    {
        /* Switch: '<S126>/LimiterSwitch1' */
        VeSTMC_Cnt_IntegralNumLimited = 0U;
    }

    /* End of Switch: '<S126>/LimiterSwitch1' */

    /* Logic: '<S114>/Logical43' */
    VeSTMC_b_RstCntrForMaxLimFail_Dist = VeSTMC_b_RstCntrForMaxLimFail;

    /* Logic: '<S123>/OR1' */
    VeSTMC_b_IntegralEbl = ((VeSTMC_b_MaxFailing) ||
                            ((!VeSTMC_b_RstCntrForMaxLimFail_Dist) &&
        (VeSTMC_b_IntegralEbl)));
    if (VeSTMC_b_IntegralEbl)
    {
        /* Switch: '<S114>/Switch5' */
        VeSTMC_Cnt_Integral_TrqDiff = VeSTMC_Cnt_IntegralNumLimited;
    }
    else
    {
        /* Switch: '<S114>/Switch5' incorporates:
         *  Constant: '<S114>/ConstantValue20'
         */
        VeSTMC_Cnt_Integral_TrqDiff = 0U;
    }

    /* RelationalOperator: '<S114>/MaxLimReached3' */
    VeSTMC_b_CntInitial_Integral = (((sint32)VeSTMC_Cnt_Integral_TrqDiff) == 0);

    /* Sum: '<S114>/Sum13' */
    VeSTMC_M_TrqDiff_DTRTransTrq = VeSTMC_M_NetTransTrqCmnd_Arb -
        rtb_TmpSignalConversionAtVeDTMR_M_Lv2Dri;

    /* UnitDelay: '<S114>/UnitDelay3' */
    VeSTMC_M_SumTrqDiff_arb_prev = VeSTMC_M_SumTrqDiff_arb;

    /* Sum: '<S114>/Sum14' */
    VeSTMC_M_SumTrqDiff = VeSTMC_M_TrqDiff_DTRTransTrq +
        VeSTMC_M_SumTrqDiff_arb_prev;
    if (VeSTMC_b_IntegralEbl)
    {
        /* Switch: '<S114>/Switch6' */
        VeSTMC_M_SumTrqDiff_arb = VeSTMC_M_SumTrqDiff;
    }
    else
    {
        /* Switch: '<S114>/Switch6' incorporates:
         *  Constant: '<S114>/ConstantValue3'
         */
        VeSTMC_M_SumTrqDiff_arb = 0.0F;
    }

    if (VeSTMC_b_CntInitial_Integral)
    {
        /* Switch: '<S114>/Switch7' incorporates:
         *  Constant: '<S114>/ConstantValue4'
         */
        VeSTMC_M_CMATrqDiff_arb = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S114>/ProtectedDivision1' */
        if ((VeSTMC_M_SumTrqDiff_arb != 0.0F) && (((sint32)
                VeSTMC_Cnt_Integral_TrqDiff) != 0))
        {
            /* Switch: '<S114>/Switch7' incorporates:
             *  DataTypeConversion: '<S114>/DataTypeConv_Cnt'
             *  Product: '<S128>/Division'
             *  Switch: '<S128>/Switch1'
             */
            VeSTMC_M_CMATrqDiff_arb = VeSTMC_M_SumTrqDiff_arb / ((float32)
                VeSTMC_Cnt_Integral_TrqDiff);
        }
        else if (VeSTMC_M_SumTrqDiff_arb > 0.0F)
        {
            /* Switch: '<S114>/Switch7' incorporates:
             *  Constant: '<S128>/MAXFLOAT'
             *  Switch: '<S128>/Switch1'
             *  Switch: '<S128>/Switch2'
             */
            VeSTMC_M_CMATrqDiff_arb = 3.402823466E+38F;
        }
        else if (VeSTMC_M_SumTrqDiff_arb < 0.0F)
        {
            /* Switch: '<S114>/Switch7' incorporates:
             *  Constant: '<S128>/MINFLOAT'
             *  Switch: '<S128>/Switch1'
             *  Switch: '<S128>/Switch2'
             *  Switch: '<S128>/Switch3'
             */
            VeSTMC_M_CMATrqDiff_arb = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S114>/Switch7' incorporates:
             *  Constant: '<S128>/ConstantValue4'
             *  Switch: '<S128>/Switch1'
             *  Switch: '<S128>/Switch2'
             *  Switch: '<S128>/Switch3'
             */
            VeSTMC_M_CMATrqDiff_arb = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S114>/ProtectedDivision1' */
    }

    /* RelationalOperator: '<S114>/MaxLimReached2' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S128>/ConstantValue'
     *  Constant: '<S128>/ConstantValue1'
     *  Constant: '<S128>/ConstantValue2'
     *  Constant: '<S128>/ConstantValue3'
     *  DataTypeConversion: '<S114>/DataTypeConv_Cnt'
     *  Logic: '<S128>/AND'
     *  RelationalOperator: '<S128>/GreaterThanorEqual'
     *  RelationalOperator: '<S128>/GreaterThaorEqual1'
     *  RelationalOperator: '<S128>/NotEqual'
     *  RelationalOperator: '<S128>/NotEqual1'
     *  Switch: '<S128>/Switch1'
     *  Switch: '<S128>/Switch2'
     *  Switch: '<S128>/Switch3'
     */
    VeSTMC_b_RdPrfTorqSumFault_Dist = (VeSTMC_M_CMATrqDiff_arb >
        (VeSTMC_M_MtrTrqCmnd_MaxLim_Distbased * KeSTMR_r_DistRatio_ReducedPerf));

    /* Logic: '<S125>/OR1' */
    VeSTMC_b_RdPrfTorqFlt_Latch = ((VeSTMC_b_RdPrfTorqSumFault_Dist) ||
        ((!VeSTMC_b_RstRdPerfmCount) && (VeSTMC_b_RdPrfTorqFlt_Latch)));
    if (VeSTMC_b_RdPrfTorqFlt_Latch)
    {
        /* Outputs for Atomic SubSystem: '<S114>/MinMaxLimiter1' */
        /* Switch: '<S127>/LimiterSwitch' incorporates:
         *  Constant: '<S114>/ConstantValue17'
         *  RelationalOperator: '<S127>/GreatherThan'
         */
        if (254 < ((sint32)VeSTMC_Cnt_RdPrfTorqLmt_Inc))
        {
            /* Switch: '<S127>/LimiterSwitch' */
            VeSTMC_Cnt_RdPrfTorqLmt_arb = 254U;
        }
        else
        {
            /* Switch: '<S127>/LimiterSwitch' */
            VeSTMC_Cnt_RdPrfTorqLmt_arb = VeSTMC_Cnt_RdPrfTorqLmt_Inc;
        }

        /* End of Switch: '<S127>/LimiterSwitch' */

        /* Switch: '<S127>/LimiterSwitch1' incorporates:
         *  Constant: '<S114>/ConstantValue16'
         *  RelationalOperator: '<S127>/GreatherThan1'
         */
        if (((sint32)VeSTMC_Cnt_RdPrfTorqLmt_arb) <= 0)
        {
            /* Switch: '<S114>/Switch1' */
            VeSTMC_Cnt_RdPrfTorqLmt_arb = 0U;
        }

        /* End of Switch: '<S127>/LimiterSwitch1' */
        /* End of Outputs for SubSystem: '<S114>/MinMaxLimiter1' */
    }
    else
    {
        /* Switch: '<S114>/Switch1' */
        VeSTMC_Cnt_RdPrfTorqLmt_arb = VeSTMC_Cnt_RdPrfTorqFltEble_prev;
    }

    if (VeSTMC_b_RstRdPerfmCount)
    {
        /* Switch: '<S114>/Switch2' incorporates:
         *  Constant: '<S114>/ConstantValue14'
         */
        VeSTMC_Cnt_RdPrfTorqFltEble = 0U;
    }
    else
    {
        /* Switch: '<S114>/Switch2' */
        VeSTMC_Cnt_RdPrfTorqFltEble = VeSTMC_Cnt_RdPrfTorqLmt_arb;
    }

    /* RelationalOperator: '<S114>/MaxLimReached4' incorporates:
     *  Constant: '<S115>/Calib'
     */
    VeSTMC_b_RdPrfTorqFltCnt_CntOn = (VeSTMC_Cnt_RdPrfTorqFltEble <=
        KeSTMR_Cnt_Lv2RdPerfm_Dly);

    /* RelationalOperator: '<S114>/MaxLimReached5' incorporates:
     *  Constant: '<S114>/ConstantValue18'
     */
    VeSTMC_b_RdPrfTorqFltCnt_NotReset = (((sint32)VeSTMC_Cnt_RdPrfTorqFltEble)
        != 0);

    /* Logic: '<S114>/Logical58' */
    VeSTMC_b_RdPrfTorqFltCntActive = ((VeSTMC_b_RdPrfTorqFltCnt_CntOn) &&
        (VeSTMC_b_RdPrfTorqFltCnt_NotReset));

    /* Switch: '<S114>/Switch8' incorporates:
     *  UnitDelay: '<S114>/UnitDelay5'
     */
    VeSTMC_b_RdPrfTorqFltCntActive_arb =
        ((!STMR_ac_DW.VeSTMC_b_TorqSumFault_Distbased_Latch_pr) &&
         (VeSTMC_b_RdPrfTorqFltCntActive));

    /* Switch: '<S114>/Switch9' */
    VeSTMC_b_RdPrfOutTrqMax_Dist = VeSTMC_b_RdPrfTorqFltCntActive_arb;

    /* Logic: '<S101>/AND' incorporates:
     *  Constant: '<S116>/Calib'
     */
    VeSTMC_b_RdPrfOutTrqMaxFailDist_final = ((KeSTMR_b_Ebl_NewReqUnintAccel) &&
        (VeSTMC_b_RdPrfOutTrqMax_Dist));

    /* RelationalOperator: '<S114>/MaxLimReached6' incorporates:
     *  Constant: '<S120>/Calib'
     */
    VeSTMC_b_TrqNeedEarlyFA = (VeSTMC_M_CMATrqDiff_arb >=
        KeSTMR_M_MaxTrq2EarlyTrqFA);

    /* RelationalOperator: '<S114>/MaxLimReached7' incorporates:
     *  Constant: '<S119>/Calib'
     */
    VeSTMC_b_CntMetEarlyFA = (VeSTMC_Cnt_Integral_TrqDiff >= ((uint16)
        KeSTMR_Cnt_MinCnt2EarlyTrqFA));

    /* Logic: '<S114>/Logical30' incorporates:
     *  Constant: '<S121>/Calib'
     */
    VeSTMC_b_EarlyFault_Distbased = (((VeSTMC_b_TrqNeedEarlyFA) &&
        (VeSTMC_b_CntMetEarlyFA)) && (KeSTMR_b_Enbl_EarlyFaultSet));

    /* RelationalOperator: '<S114>/MaxLimReached' incorporates:
     *  Constant: '<S118>/Calib'
     */
    VeSTMC_b_MntrWindow_within = (VeSTMC_Cnt_Integral_TrqDiff <= ((uint16)
        KeSTMR_Cnt_DistMntrWindow));

    /* Logic: '<S114>/Logical53' incorporates:
     *  UnitDelay: '<S218>/UnitDelay'
     */
    VeSTMC_b_DistMntrTorqNoFaultSet = ((VeSTMC_b_MntrWindow_within) ||
        (VeSTMC_b_Max_Lv2ReducedPerfMode));

    /* RelationalOperator: '<S114>/MaxLimReached1' */
    VeSTMC_b_TorqSumFault_Distbased = (VeSTMC_M_CMATrqDiff_arb >=
        VeSTMC_M_MtrTrqCmnd_MaxLim_Distbased);

    /* Switch: '<S114>/Switch11' */
    VeSTMC_b_TorqSumFault_Dist_Normal = ((!VeSTMC_b_DistMntrTorqNoFaultSet) &&
        (VeSTMC_b_TorqSumFault_Distbased));

    /* Switch: '<S114>/Switch13' */
    VeSTMC_b_TorqSumFault_Distbased_arb = ((VeSTMC_b_EarlyFault_Distbased) ||
        (VeSTMC_b_TorqSumFault_Dist_Normal));

    /* Switch: '<S114>/Switch12' incorporates:
     *  Constant: '<S116>/Calib'
     */
    VeSTMC_b_TorqSumFault_Distbased_arb2 = ((KeSTMR_b_Ebl_NewReqUnintAccel) &&
        (VeSTMC_b_TorqSumFault_Distbased_arb));

    /* UnitDelay: '<S124>/UnitDelay1' */
    VeSTMC_b_OutTrqMaxFailDist_final = ((VeSTMC_b_TorqSumFault_Distbased_arb2) ||
        (rtb_AND_ow && (STMR_ac_DW.VeSTMC_b_TorqSumFault_Distbased_Latch__f)));

#endif

    /* End of Logic: '<S117>/Logical4' */
    /* End of Outputs for SubSystem: '<S114>/MinMaxLimiter' */

    /* UnitDelay: '<S218>/UnitDelay1' */
    rtb_AND_ow = VeSTMC_b_Lv2ReducedPerfMode_MinLim;

    /* Logic: '<S153>/Logical32' incorporates:
     *  Logic: '<S153>/Logical47'
     */
#if !Rte_SysCon_Variant_STMR_FUNC_4

    /* Logic: '<S153>/Logical47' incorporates:
     *  UnitDelay: '<S138>/UnitDelay'
     *  UnitDelay: '<S218>/UnitDelay1'
     */
    VeSTMC_b_RstMinMntr_NormalMd = ((!VeSTMC_b_Lv2ReducedPerfMode_MinLim) &&
        (STMR_ac_DW.UnitDelay_DSTATE_ez));

#endif

    /* End of Logic: '<S153>/Logical32' */

    /* Outputs for Atomic SubSystem: '<S111>/LV2_Turn_Off_Delay_Sample_Modified1' */
    /* Switch: '<S150>/Switch' incorporates:
     *  Logic: '<S152>/AND'
     *  Logic: '<S152>/OR1'
     *  MinMax: '<S150>/Minimum1'
     *  UnitDelay: '<S150>/UnitDelay1'
     *  UnitDelay: '<S152>/UnitDelay'
     */
    if ((!VeSTMC_b_TMinLim_FailingCnfrm) &&
            (STMR_ac_DW.VeSTMC_b_MinLimFailingDlyd_prev))
    {
        /* MinMax: '<S150>/Minimum1' incorporates:
         *  Constant: '<S141>/Calib'
         *  UnitDelay: '<S150>/UnitDelay1'
         */
        STMR_ac_DW.VeSTMC_Cnt_MinLimFailingDlyd_prev =
            KeSTMR_Cnt_RdPerfmTrqChkCntr_Min;
    }
    else
    {
        if (((sint32)STMR_ac_DW.VeSTMC_Cnt_MinLimFailingDlyd_prev) <= 1)
        {
            /* MinMax: '<S150>/Minimum1' */
            STMR_ac_DW.VeSTMC_Cnt_MinLimFailingDlyd_prev = 1U;
        }

        /* MinMax: '<S150>/Minimum1' incorporates:
         *  Constant: '<S150>/ConstantValue'
         *  Sum: '<S150>/Summation'
         *  UnitDelay: '<S150>/UnitDelay1'
         */
        STMR_ac_DW.VeSTMC_Cnt_MinLimFailingDlyd_prev = (uint8)((sint32)(((sint32)
            STMR_ac_DW.VeSTMC_Cnt_MinLimFailingDlyd_prev) - 1));
    }

    /* End of Switch: '<S150>/Switch' */

    /* Logic: '<S150>/AND' incorporates:
     *  Constant: '<S150>/ConstantValue2'
     *  RelationalOperator: '<S150>/GreatherThan1'
     *  UnitDelay: '<S150>/UnitDelay1'
     */
    rtb_VariantMerge_For_Variant_Source_V__0 = ((VeSTMC_b_TMinLim_FailingCnfrm) ||
        (((sint32)STMR_ac_DW.VeSTMC_Cnt_MinLimFailingDlyd_prev) > 0));

    /* Update for UnitDelay: '<S152>/UnitDelay' */
    STMR_ac_DW.VeSTMC_b_MinLimFailingDlyd_prev = VeSTMC_b_TMinLim_FailingCnfrm;

    /* End of Outputs for SubSystem: '<S111>/LV2_Turn_Off_Delay_Sample_Modified1' */

    /* Logic: '<S111>/Logical42' incorporates:
     *  Logic: '<S111>/Logical40'
     *  UnitDelay: '<S111>/UnitDelay8'
     */
    VeSTMC_b_NoMinLimFail = ((!rtb_VariantMerge_For_Variant_Source_V__0) &&
        (STMR_ac_DW.VeSTMC_Cnt_MinLimFailingDlyd_Prev));

    /* Logic: '<S153>/Logical31' incorporates:
     *  Abs: '<S168>/Abs'
     *  Constant: '<S133>/ConstantValue16'
     *  Constant: '<S160>/ConstantValue16'
     *  Constant: '<S94>/FALSEConstant'
     *  Logic: '<S113>/Logical3'
     *  Logic: '<S113>/Logical4'
     *  Logic: '<S133>/Logical1'
     *  Logic: '<S133>/Logical2'
     *  Logic: '<S153>/Logical1'
     *  Logic: '<S159>/NOT'
     *  Logic: '<S159>/OR'
     *  Logic: '<S159>/OR1'
     *  Logic: '<S160>/Logical1'
     *  Logic: '<S160>/Logical2'
     *  Logic: '<S162>/AND1'
     *  Logic: '<S162>/OR2'
     *  Logic: '<S163>/AND1'
     *  Logic: '<S163>/OR2'
     *  Logic: '<S164>/NOT'
     *  Logic: '<S164>/OR'
     *  Logic: '<S164>/OR1'
     *  RelationalOperator: '<S133>/MaxLimReached1'
     *  RelationalOperator: '<S133>/MaxLimReached2'
     *  RelationalOperator: '<S160>/Enough_counts_to_Fail'
     *  RelationalOperator: '<S160>/Enough_counts_to_Fail1'
     *  RelationalOperator: '<S160>/MaxLimReached'
     *  RelationalOperator: '<S160>/MaxLimReached1'
     *  RelationalOperator: '<S160>/MaxLimReached2'
     *  RelationalOperator: '<S169>/Comparison'
     *  Sum: '<S133>/Pause_Counter'
     *  Sum: '<S160>/Main_Counter'
     *  Sum: '<S160>/Pause_Counter'
     *  Switch: '<S133>/Switch1'
     *  Switch: '<S133>/Switch4'
     *  Switch: '<S153>/Switch3'
     *  Switch: '<S160>/Switch1'
     *  Switch: '<S160>/Switch16'
     *  Switch: '<S160>/Switch17'
     *  Switch: '<S160>/Switch18'
     *  Switch: '<S160>/Switch19'
     *  Switch: '<S160>/Switch20'
     *  Switch: '<S160>/Switch4'
     *  Switch: '<S160>/Switch7'
     *  Switch: '<S168>/Switch5'
     *  Switch: '<S192>/Switch1'
     *  UnitDelay: '<S137>/UnitDelay1'
     *  UnitDelay: '<S160>/UnitDelay3'
     *  UnitDelay: '<S162>/UnitDelay'
     *  UnitDelay: '<S163>/UnitDelay'
     *  UnitDelay: '<S164>/UnitDelay1'
     *  UnitDelay: '<S218>/UnitDelay1'
     */
#if !Rte_SysCon_Variant_STMR_FUNC_4

    /* Logic: '<S153>/Logical31' incorporates:
     *  Constant: '<S158>/Calib'
     *  UnitDelay: '<S218>/UnitDelay1'
     */
    VeSTMC_b_RstMinMntrRdPrfmMd = (((KeSTMR_b_UseRdPerfmRst_Min) &&
        (VeSTMC_b_Lv2ReducedPerfMode_MinLim)) && (VeSTMC_b_NoMinLimFail));

    /* Logic: '<S153>/Logical1' */
    VeSTMC_b_RstCntrForMinLimFail = ((rtb_TmpSignalConversionAtVeSSMR_b_EngSpd ||
        (VeSTMC_b_RstMinMntr_NormalMd)) || (VeSTMC_b_RstMinMntrRdPrfmMd));

    /* UnitDelay: '<S160>/UnitDelay3' */
    rtb_UnitDelay3_j = STMR_ac_DW.VeSTMC_b_MinResumeCntrPrevVal;
    STMR_ac_DW.VeSTMC_b_Min_PCntrActvLtch_prev =
        (((VeSTMC_b_Lv2ReducedPerfMode_MinLim) &&
          (!STMR_ac_DW.VeSTMC_b_Min_LtchPCntr_EdgRising_prev)) ||
         ((!STMR_ac_DW.VeSTMC_b_MinResumeCntrPrevVal) &&
          (STMR_ac_DW.VeSTMC_b_Min_PCntrActvLtch_prev)));

    /* UnitDelay: '<S506>/Unit Delay' incorporates:
     *  Constant: '<S160>/ConstantValue19'
     *  UnitDelay: '<S162>/UnitDelay'
     *  UnitDelay: '<S164>/UnitDelay1'
     *  UnitDelay: '<S218>/UnitDelay1'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea = (((sint32)
        VeSTMC_Cnt_Min_FinalFailCnts) >= 255);
    if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea)
    {
        /* Switch: '<S160>/Switch17' incorporates:
         *  Constant: '<S160>/ConstantValue20'
         */
        VeSTMC_Cnt_Min_PrevValArb = 0U;
    }
    else
    {
        /* Switch: '<S160>/Switch17' */
        VeSTMC_Cnt_Min_PrevValArb = VeSTMC_Cnt_Min_FinalFailCnts;
    }

    if ((STMR_ac_DW.VeSTMC_b_MinResumeCntrPrevVal) &&
            (!STMR_ac_DW.VeSTMC_b_Min_ResumeEdgRising_prev))
    {
        /* Switch: '<S160>/Switch20' */
        VeSTMC_Cnt_Min_PcntrIncValActv = VeSTMC_Cnt_Min_PCntrVal;
    }
    else
    {
        /* Switch: '<S160>/Switch20' incorporates:
         *  Constant: '<S160>/ConstantValue21'
         */
        VeSTMC_Cnt_Min_PcntrIncValActv = 0U;
    }

    /* Sum: '<S160>/Main_Counter' incorporates:
     *  Constant: '<S160>/ConstantValue4'
     *  UnitDelay: '<S163>/UnitDelay'
     */
    VeSTMC_Cnt_Min_MCntr_FailCnts = (uint8)(((uint32)((uint8)(((uint32)
        VeSTMC_Cnt_Min_PrevValArb) + ((uint32)VeSTMC_Cnt_Min_PcntrIncValActv))))
        + 1U);
    if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea)
    {
        /* Switch: '<S160>/Switch18' */
        VeSTMC_Cnt_Min_FailCntsAftrMaxChk = VeSTMC_Cnt_Min_FinalFailCnts;
    }
    else
    {
        /* Switch: '<S160>/Switch18' */
        VeSTMC_Cnt_Min_FailCntsAftrMaxChk = VeSTMC_Cnt_Min_MCntr_FailCnts;
    }

    if (VeSTMC_b_TMinLim_FailingCnfrm)
    {
        /* Switch: '<S160>/Switch19' */
        VeSTMC_Cnt_Min_FailCntsArb = VeSTMC_Cnt_Min_FailCntsAftrMaxChk;
    }
    else
    {
        /* Switch: '<S160>/Switch19' */
        VeSTMC_Cnt_Min_FailCntsArb = VeSTMC_Cnt_Min_FinalFailCnts;
    }

    if (STMR_ac_DW.VeSTMC_b_Min_PCntrActvLtch_prev)
    {
        /* Switch: '<S160>/Switch7' */
        VeSTMC_Cnt_Min_FailCntsArbAftrPause = VeSTMC_Cnt_Min_FinalFailCnts;
    }
    else
    {
        /* Switch: '<S160>/Switch7' */
        VeSTMC_Cnt_Min_FailCntsArbAftrPause = VeSTMC_Cnt_Min_FailCntsArb;
    }

    if (VeSTMC_b_RstCntrForMinLimFail)
    {
        /* Switch: '<S160>/Switch16' incorporates:
         *  Constant: '<S160>/ConstantValue18'
         */
        VeSTMC_Cnt_Min_FinalFailCnts = 0U;
    }
    else
    {
        /* Switch: '<S160>/Switch16' */
        VeSTMC_Cnt_Min_FinalFailCnts = VeSTMC_Cnt_Min_FailCntsArbAftrPause;
    }

    /* Logic: '<S103>/AND' incorporates:
     *  Constant: '<S157>/Calib'
     *  UnitDelay: '<S164>/UnitDelay1'
     */
    VeSTMC_b_OutTrqMinFail_LL_final = (VeSTMC_Cnt_Min_FinalFailCnts >=
        KeSTMR_Cnt_Tmin_LL);
    if (VeSTMI_b_LimpHomeActv)
    {
        /* Switch: '<S153>/Switch3' incorporates:
         *  Constant: '<S156>/Calib'
         */
        VeSTMC_Cnt_TMinCntrLim_Arb = KeSTMR_Cnt_Tmin_Cntr_Lim_LHom;
    }
    else
    {
        /* Switch: '<S153>/Switch3' incorporates:
         *  Constant: '<S155>/Calib'
         */
        VeSTMC_Cnt_TMinCntrLim_Arb = KeSTMR_Cnt_Tmin_Cntr_Lim;
    }

    /* UnitDelay: '<S159>/UnitDelay1' */
    VeSTMC_b_OutTrqMinFail_final = ((VeSTMC_Cnt_Min_FinalFailCnts >=
        VeSTMC_Cnt_TMinCntrLim_Arb) ||
        ((!rtb_TmpSignalConversionAtVeSSMR_b_EngSpd) &&
         (STMR_ac_DW.VeSTMC_b_OutTrq_MinLimFail_Ltch_prev)));

    /* UnitDelay: '<S192>/UnitDelay1' */
    VeSTMC_b_IdleSpdErrMntrl_final = false;

    /* Switch: '<S133>/Switch1' incorporates:
     *  UnitDelay: '<S137>/UnitDelay1'
     */
    VeSTMC_Cnt_PcntrIncValActv = (uint8)(STMR_ac_DW.VeSTMC_b_PCntrActvLtch_prev ?
        ((uint8)1) : ((uint8)0));
    if ((((sint32)VeSTMC_Cnt_PCntrVal) >= 255) ||
            (!STMR_ac_DW.VeSTMC_b_PCntrActvLtch_prev))
    {
        /* Switch: '<S133>/Switch4' incorporates:
         *  Constant: '<S133>/ConstantValue17'
         */
        VeSTMC_Cnt_PcntrPrevValArb = 0U;
    }
    else
    {
        /* Switch: '<S133>/Switch4' */
        VeSTMC_Cnt_PcntrPrevValArb = VeSTMC_Cnt_PCntrVal;
    }

    /* Sum: '<S133>/Pause_Counter' incorporates:
     *  Constant: '<S133>/ConstantValue16'
     *  UnitDelay: '<S137>/UnitDelay1'
     */
    VeSTMC_Cnt_PCntrVal = (uint8)(((uint32)VeSTMC_Cnt_PcntrIncValActv) +
        ((uint32)VeSTMC_Cnt_PcntrPrevValArb));

    /* RelationalOperator: '<S133>/MaxLimReached2' incorporates:
     *  Constant: '<S115>/Calib'
     */
    rtb_VeSTMC_b_ResumeMCntr = (VeSTMC_Cnt_PCntrVal >= KeSTMR_Cnt_Lv2RdPerfm_Dly);

    /* Switch: '<S160>/Switch1' incorporates:
     *  UnitDelay: '<S164>/UnitDelay1'
     */
    VeSTMC_Cnt_Min_PCntrIncVal = (uint8)
        (STMR_ac_DW.VeSTMC_b_Min_PCntrActvLtch_prev ? ((uint8)1) : ((uint8)0));
    if ((((sint32)VeSTMC_Cnt_Min_PCntrVal) >= 255) ||
            (!STMR_ac_DW.VeSTMC_b_Min_PCntrActvLtch_prev))
    {
        /* Switch: '<S160>/Switch4' incorporates:
         *  Constant: '<S160>/ConstantValue17'
         */
        VeSTMC_Cnt_Min_PcntrPrevValArb = 0U;
    }
    else
    {
        /* Switch: '<S160>/Switch4' */
        VeSTMC_Cnt_Min_PcntrPrevValArb = VeSTMC_Cnt_Min_PCntrVal;
    }

    /* Sum: '<S160>/Pause_Counter' incorporates:
     *  Constant: '<S160>/ConstantValue16'
     *  UnitDelay: '<S164>/UnitDelay1'
     */
    VeSTMC_Cnt_Min_PCntrVal = (uint8)(((uint32)VeSTMC_Cnt_Min_PCntrIncVal) +
        ((uint32)VeSTMC_Cnt_Min_PcntrPrevValArb));

    /* RelationalOperator: '<S160>/MaxLimReached2' incorporates:
     *  Constant: '<S154>/Calib'
     */
    rtb_VeSTMC_b_Min_ResumeMCntr = (VeSTMC_Cnt_Min_PCntrVal >=
        KeSTMR_Cnt_Lv2RdPerfm_MinLimDly);

#else

    /* Outputs for Atomic SubSystem: '<S169>/LV2_Turn_On_Delay_Sample' */
    /* Outputs for Atomic SubSystem: '<S169>/LV2_IntegratorK_Reset_Enabled_Limited' */
    /* Outputs for Atomic SubSystem: '<S168>/EdgeRising' */
    /* Switch: '<S192>/Switch1' incorporates:
     *  Constant: '<S192>/ConstantValue1'
     *  UnitDelay: '<S192>/UnitDelay2'
     */
    if (rtb_TmpSignalConversionAtVeSSMR_b_EngSpd)
    {
        STMR_ac_DW.UnitDelay2_DSTATE_g = 0U;
    }
    else
    {
        STMR_ac_DW.UnitDelay2_DSTATE_g = rtb_VeSTMC_Cnt_SpdErrMntrFlt_inc_cntr;
    }

    /* Logic: '<S113>/Logical4' */
    VeSTMC_b_NoMinMaxTrqError = !VeSTMC_b_TMaxMinLimFailing;

    /* Logic: '<S113>/Logical3' */
    VeSTMC_b_RstMainIntegral = ((VeSTMC_b_NoMinMaxTrqError) ||
        (VeSTMC_b_RstCounter));

    /* Logic: '<S205>/AND' incorporates:
     *  Logic: '<S205>/OR1'
     *  UnitDelay: '<S205>/UnitDelay'
     */
    rtb_VariantMerge_For_Variant_Source_V__3 = ((VeSTMC_b_RstMainIntegral) &&
        (!STMR_ac_DW.UnitDelay_DSTATE_oj));

    /* Update for UnitDelay: '<S205>/UnitDelay' */
    STMR_ac_DW.UnitDelay_DSTATE_oj = VeSTMC_b_RstMainIntegral;

    /* Switch: '<S168>/Switch5' */
    if (rtb_VariantMerge_For_Variant_Source_V__3)
    {
        /* Outputs for Atomic SubSystem: '<S168>/LV2_DivideWithProtection' */
        /* Switch: '<S207>/Switch5' incorporates:
         *  Constant: '<S170>/Calib'
         *  Constant: '<S207>/ConstantValue'
         *  Constant: '<S207>/ConstantValue1'
         *  Constant: '<S207>/ConstantValue2'
         *  Constant: '<S207>/ConstantValue3'
         *  Logic: '<S207>/AND'
         *  RelationalOperator: '<S207>/GreaterThanorEqual'
         *  RelationalOperator: '<S207>/GreaterThanorEqual1'
         *  RelationalOperator: '<S207>/NotEqual'
         *  RelationalOperator: '<S207>/NotEqual1'
         *  Switch: '<S207>/Switch1'
         *  Switch: '<S207>/Switch2'
         */
        if ((rtb_UnitDelay1_fe != 0.0F) && (KeSTMR_t_IntErrRstTm != 0.0F))
        {
            /* Switch: '<S168>/Switch5' incorporates:
             *  Product: '<S207>/Division'
             *  Switch: '<S207>/Switch5'
             */
            VeSTMC_K_IntegralRstFctr_Arb = rtb_UnitDelay1_fe /
                KeSTMR_t_IntErrRstTm;
        }
        else if (rtb_UnitDelay1_fe > 0.0F)
        {
            /* Switch: '<S168>/Switch5' incorporates:
             *  Constant: '<S207>/MAXFLOAT'
             *  Switch: '<S207>/Switch1'
             *  Switch: '<S207>/Switch5'
             */
            VeSTMC_K_IntegralRstFctr_Arb = 3.402823466E+38F;
        }
        else if (rtb_UnitDelay1_fe < 0.0F)
        {
            /* Switch: '<S168>/Switch5' incorporates:
             *  Constant: '<S207>/MINFLOAT'
             *  Switch: '<S207>/Switch1'
             *  Switch: '<S207>/Switch2'
             *  Switch: '<S207>/Switch5'
             */
            VeSTMC_K_IntegralRstFctr_Arb = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S168>/Switch5' incorporates:
             *  Constant: '<S207>/ConstantValue4'
             *  Switch: '<S207>/Switch1'
             *  Switch: '<S207>/Switch2'
             *  Switch: '<S207>/Switch5'
             */
            VeSTMC_K_IntegralRstFctr_Arb = 0.0F;
        }

        /* End of Switch: '<S207>/Switch5' */
        /* End of Outputs for SubSystem: '<S168>/LV2_DivideWithProtection' */
    }
    else
    {
        /* Switch: '<S168>/Switch5' incorporates:
         *  UnitDelay: '<S168>/UnitDelay'
         */
        VeSTMC_K_IntegralRstFctr_Arb =
            STMR_ac_DW.VeSTMC_K_IntegralRstFctr_Abs_Prev;
    }

    /* Abs: '<S168>/Abs' incorporates:
     *  UnitDelay: '<S168>/UnitDelay'
     */
    STMR_ac_DW.VeSTMC_K_IntegralRstFctr_Abs_Prev = fabsf
        (VeSTMC_K_IntegralRstFctr_Arb);

    /* RelationalOperator: '<S169>/Comparison' incorporates:
     *  Constant: '<S210>/Calib'
     */
    VeSTMC_b_ResumeMainCntr_DlyInActv = (VeSTMC_t_PauseTime >
        KeSTMR_t_Lv2RdPerfm_Dly);

    /* Switch: '<S211>/Switch2' incorporates:
     *  Switch: '<S211>/Switch3'
     *  UnitDelay: '<S212>/UnitDelay1'
     */
    if (VeSTMC_Cnt_ResumeMainCntr_Dly1)
    {
        /* Switch: '<S211>/Switch2' incorporates:
         *  Constant: '<S169>/ConstantValue2'
         */
        STMR_ac_DW.VeSTMC_K_TrqErrorDuringPause_prev = 0.0F;
    }
    else
    {
        if (STMR_ac_DW.VeSTMC_b_PauseIntgrl_Ltch_prev)
        {
            /* Switch: '<S211>/Switch3' incorporates:
             *  Constant: '<S171>/Calib'
             *  Product: '<S211>/Multiplication1'
             *  Product: '<S211>/Multiplication2'
             *  Sum: '<S211>/SumSub'
             *  Switch: '<S211>/Switch2'
             *  UnitDelay: '<S211>/UnitDelay2'
             */
            STMR_ac_DW.VeSTMC_K_TrqErrorDuringPause_prev += (KeSTMR_t_dT *
                VeSTMC_K_Gain_Integral) * VeSTMC_M_Error_Arb;
        }
    }

    /* End of Switch: '<S211>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S211>/Limiter' */
    /* Switch: '<S215>/Switch2' incorporates:
     *  RelationalOperator: '<S215>/RelationalOperator'
     */
    if (VeSTMC_K_Err_Thsh_RdPrfm_Arb <
            STMR_ac_DW.VeSTMC_K_TrqErrorDuringPause_prev)
    {
        /* Lookup_n-D: '<S488>/Vector' */
        rtb_Switch5_l = VeSTMC_K_Err_Thsh_RdPrfm_Arb;
    }
    else
    {
        /* Lookup_n-D: '<S488>/Vector' */
        rtb_Switch5_l = STMR_ac_DW.VeSTMC_K_TrqErrorDuringPause_prev;
    }

    /* End of Switch: '<S215>/Switch2' */

    /* Switch: '<S215>/Switch3' incorporates:
     *  Constant: '<S169>/ConstantValue1'
     *  RelationalOperator: '<S215>/RelationalOperator1'
     *  UnitDelay: '<S169>/UnitDelay2'
     */
    if (rtb_Switch5_l > 0.0F)
    {
        STMR_ac_DW.VeSTMC_K_TrqErrorDuringPause_Prev = rtb_Switch5_l;
    }
    else
    {
        STMR_ac_DW.VeSTMC_K_TrqErrorDuringPause_Prev = 0.0F;
    }

    /* End of Switch: '<S215>/Switch3' */
    /* End of Outputs for SubSystem: '<S211>/Limiter' */

    /* Update for UnitDelay: '<S211>/UnitDelay2' incorporates:
     *  UnitDelay: '<S169>/UnitDelay2'
     */
    STMR_ac_DW.VeSTMC_K_TrqErrorDuringPause_prev =
        STMR_ac_DW.VeSTMC_K_TrqErrorDuringPause_Prev;

    /* Outputs for Atomic SubSystem: '<S214>/EdgeRising' */
    /* UnitDelay: '<S506>/Unit Delay' incorporates:
     *  UnitDelay: '<S216>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea = STMR_ac_DW.UnitDelay_DSTATE_o4;

    /* Update for UnitDelay: '<S216>/UnitDelay' */
    STMR_ac_DW.UnitDelay_DSTATE_o4 = VeSTMC_b_ResumeMainCntr_DlyInActv;

    /* Switch: '<S214>/Switch1' incorporates:
     *  Constant: '<S214>/ConstantValue'
     *  Constant: '<S214>/ConstantValue1'
     *  Logic: '<S214>/OR'
     *  Logic: '<S214>/OR1'
     *  Logic: '<S216>/AND'
     *  Logic: '<S216>/OR1'
     *  MinMax: '<S214>/Minimum'
     *  Sum: '<S214>/Summation'
     *  UnitDelay: '<S214>/UnitDelay1'
     */
    if ((!VeSTMC_b_ResumeMainCntr_DlyInActv) ||
            ((VeSTMC_b_ResumeMainCntr_DlyInActv) &&
             (!rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea)))
    {
        STMR_ac_DW.UnitDelay1_DSTATE_b = 0U;
    }
    else if (2 < ((sint32)((uint16)(((uint32)STMR_ac_DW.UnitDelay1_DSTATE_b) +
                1U))))
    {
        /* MinMax: '<S214>/Minimum' */
        STMR_ac_DW.UnitDelay1_DSTATE_b = 2U;
    }
    else
    {
        /* MinMax: '<S214>/Minimum' incorporates:
         *  Constant: '<S214>/ConstantValue'
         *  Sum: '<S214>/Summation'
         *  UnitDelay: '<S214>/UnitDelay1'
         */
        STMR_ac_DW.UnitDelay1_DSTATE_b = (uint16)(((uint32)
            STMR_ac_DW.UnitDelay1_DSTATE_b) + 1U);
    }

    /* End of Switch: '<S214>/Switch1' */
    /* End of Outputs for SubSystem: '<S214>/EdgeRising' */

    /* Logic: '<S214>/AND' incorporates:
     *  Constant: '<S169>/ConstantValue'
     *  RelationalOperator: '<S214>/GreaterThan'
     *  UnitDelay: '<S214>/UnitDelay1'
     */
    VeSTMC_Cnt_ResumeMainCntr_Dly1 = ((VeSTMC_b_ResumeMainCntr_DlyInActv) &&
        (((sint32)STMR_ac_DW.UnitDelay1_DSTATE_b) >= 2));

    /* End of Outputs for SubSystem: '<S168>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S169>/LV2_IntegratorK_Reset_Enabled_Limited' */
    /* End of Outputs for SubSystem: '<S169>/LV2_Turn_On_Delay_Sample' */
#endif

    /* End of Logic: '<S153>/Logical31' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeDTMR_M_Lv2ReducedPrfmTrq_DTRChk' */
    (void)Rte_Read_VeDTMR_M_Lv2ReducedPrfmTrq_DTRChk_Value(&tmpRead_n);

    /* Inport: '<Root>/VeDTMR_b_Lv2ReducedPerfMode_DTRChk' */
    (void)Rte_Read_VeDTMR_b_Lv2ReducedPerfMode_DTRChk_Value(&rtb_Compare);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/STMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMC'
     */
    /* Logic: '<S218>/Logical6' incorporates:
     *  Logic: '<S218>/Logical22'
     */
    rtb_VariantMerge_For_Variant_Source_V__4 = !VeSTMC_b_OutTrqMaxFail_final;

    /* Logic: '<S218>/Logical7' incorporates:
     *  Logic: '<S218>/Logical6'
     */
    VeSTMC_b_MaxLimFail_RedPerf = ((VeSTMC_b_OutTrqMaxFail_LL_final) &&
        rtb_VariantMerge_For_Variant_Source_V__4);

    /* Logic: '<S218>/Logical50' incorporates:
     *  Logic: '<S218>/Logical22'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea = !VeSTMC_b_OutTrqMaxFailDist_final;

    /* Logic: '<S218>/Logical51' incorporates:
     *  Logic: '<S218>/Logical50'
     */
    VeSTMC_b_MaxLimFail_RedPerf_Distbased =
        ((VeSTMC_b_RdPrfOutTrqMaxFailDist_final) &&
         rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea);

    /* Logic: '<S218>/Logical52' */
    VeSTMC_b_Lv2MaxLimFail_RedPerf = ((VeSTMC_b_MaxLimFail_RedPerf) ||
        (VeSTMC_b_MaxLimFail_RedPerf_Distbased));

    /* Logic: '<S218>/Logical22' incorporates:
     *  Logic: '<S218>/Logical27'
     */
    rtb_VariantMerge_For_Variant_Source_V__3 = !VeSTMC_b_Lv2ResetbyDMAB;

    /* Logic: '<S234>/OR1' incorporates:
     *  Logic: '<S218>/Logical22'
     *  Logic: '<S218>/Logical23'
     *  Logic: '<S232>/AND1'
     *  Logic: '<S232>/OR2'
     *  Logic: '<S234>/NOT'
     *  Logic: '<S234>/OR'
     *  UnitDelay: '<S232>/UnitDelay'
     */
    VeSTMC_b_Lv2ReducedPerfModeLtch = (((VeSTMC_b_Lv2MaxLimFail_RedPerf) &&
        (!STMR_ac_DW.VeSTMC_b_RdPerfEdgeRising_MaxLim_prev)) ||
        ((((((!rtb_VariantMerge_For_Variant_Source_V__2) ||
             rtb_VariantMerge_For_Variant_Source_V__1) &&
            rtb_VariantMerge_For_Variant_Source_V__4) &&
           rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea) &&
          rtb_VariantMerge_For_Variant_Source_V__3) &&
         (VeSTMC_b_Lv2ReducedPerfModeLtch)));

    /* Logic: '<S218>/Logical26' incorporates:
     *  Constant: '<S230>/Calib'
     */
    VeSTMC_b_Max_Lv2ReducedPerfMode = ((VeSTMC_b_Lv2ReducedPerfModeLtch) &&
        (KeSTMR_b_UseRdPerfmMd));

    /* Logic: '<S218>/Logical33' incorporates:
     *  UnitDelay: '<S218>/UnitDelay1'
     */
    VeSTMC_b_Lv2ReducedPerfMode_MtrTrqChk = ((VeSTMC_b_Max_Lv2ReducedPerfMode) ||
        (VeSTMC_b_Lv2ReducedPerfMode_MinLim));

    /* Sum: '<S223>/Sum1' incorporates:
     *  Lookup_n-D: '<S237>/Vector'
     *  Product: '<S223>/Product'
     *  Product: '<S538>/Product1'
     */
    VeSTMC_M_RqInRdPerfmTrqArb = rtb_TmpSignalConversionAtVeDTMR_M_Lv2Axl -
        (rtb_TmpSignalConversionAtVeDTMR_M_Lv2Axl * look1_iflf_binlca_16a
         (VeSTMI_n_Lv2TransOutSpd_Arb, ((const float32 *)
           &(KxSTMR_M_Lv2ReducedPerfmMd[0])), ((const float32 *)
           &(KtSTMR_M_Lv2ReducedPerfmMd[0])), 9U));

    /* Outputs for Atomic SubSystem: '<S223>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Lookup_n-D: '<S488>/Vector' incorporates:
     *  UnitDelay: '<S238>/UnitDelay'
     */
    rtb_Switch5_l = STMR_ac_DW.VeSTMC_M_Lv2RdPerfmTrqFiltdPrev_prev;

    /* Switch: '<S238>/Switch1' incorporates:
     *  Constant: '<S236>/Calib'
     *  Product: '<S238>/Multiplication'
     *  Sum: '<S238>/Subtraction'
     *  Sum: '<S238>/Summation'
     */
    VeSTMC_M_Lv2ReducedPerfTrqFiltd = ((VeSTMC_M_RqInRdPerfmTrqArb -
        rtb_Switch5_l) * KeSTMR_K_ReducedPerfCoeff) + rtb_Switch5_l;

    /* Update for UnitDelay: '<S238>/UnitDelay' */
    STMR_ac_DW.VeSTMC_M_Lv2RdPerfmTrqFiltdPrev_prev =
        VeSTMC_M_Lv2ReducedPerfTrqFiltd;

    /* End of Outputs for SubSystem: '<S223>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Logic: '<S218>/Logical8' incorporates:
     *  Logic: '<S218>/Logical27'
     */
    rtb_VariantMerge_For_Variant_Source_V__1 = !VeSTMC_b_OutTrqMinFail_final;

    /* Logic: '<S218>/Logical9' incorporates:
     *  Logic: '<S218>/Logical8'
     */
    VeSTMC_b_Lv2MinLimFail_RedPerf = ((VeSTMC_b_OutTrqMinFail_LL_final) &&
        rtb_VariantMerge_For_Variant_Source_V__1);

    /* Logic: '<S235>/OR1' incorporates:
     *  Logic: '<S218>/Logical27'
     *  Logic: '<S218>/Logical28'
     *  Logic: '<S233>/AND1'
     *  Logic: '<S233>/OR2'
     *  Logic: '<S235>/NOT'
     *  Logic: '<S235>/OR'
     *  UnitDelay: '<S218>/UnitDelay1'
     *  UnitDelay: '<S233>/UnitDelay'
     */
    VeSTMC_b_Lv2ReduPerfMdLtch_MinLim = (((VeSTMC_b_Lv2MinLimFail_RedPerf) &&
        (!STMR_ac_DW.VeSTMC_b_RdPerfEdgeRising_MinLim_prev)) ||
        (((((!VeSTMC_b_NoMinLimFail) || (!VeSTMC_b_Lv2ReducedPerfMode_MinLim)) &&
           rtb_VariantMerge_For_Variant_Source_V__1) &&
          rtb_VariantMerge_For_Variant_Source_V__3) &&
         (VeSTMC_b_Lv2ReduPerfMdLtch_MinLim)));

    /* UnitDelay: '<S506>/Unit Delay' incorporates:
     *  Constant: '<S97>/Calib'
     *  Logic: '<S218>/Logical4'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea = (rtb_Compare &&
        (KeSTMR_b_EblRedPerfModeDTMR));

    /* Logic: '<S218>/Logical29' incorporates:
     *  Constant: '<S231>/Calib'
     */
    VeSTMC_b_Lv2ReducedPerfMode_MinLim = ((VeSTMC_b_Lv2ReduPerfMdLtch_MinLim) &&
        (KeSTMR_b_UseRdPerfmMd_MinLim));

    /* Switch: '<S218>/Switch14' */
    if (VeSTMC_b_Max_Lv2ReducedPerfMode)
    {
        /* Switch: '<S218>/Switch14' */
        VeSTMC_M_Lv2ReducedPrfmTrq_MtrTrqChk = VeSTMC_M_Lv2ReducedPerfTrqFiltd;
    }
    else
    {
        /* Switch: '<S218>/Switch14' incorporates:
         *  Constant: '<S218>/ConstantValue1'
         */
        VeSTMC_M_Lv2ReducedPrfmTrq_MtrTrqChk = 0.0F;
    }

    /* End of Switch: '<S218>/Switch14' */

    /* Switch: '<S218>/Switch11' */
    if (VeSTMC_b_Lv2ReducedPerfMode_MtrTrqChk)
    {
        /* Switch: '<S218>/Switch11' */
        rtb_TmpSignalConversionAtVeDTMR_M_Lv2Axl =
            VeSTMC_M_Lv2ReducedPrfmTrq_MtrTrqChk;
    }
    else
    {
        /* Switch: '<S218>/Switch11' incorporates:
         *  Constant: '<S218>/ConstantValue5'
         */
        rtb_TmpSignalConversionAtVeDTMR_M_Lv2Axl = 0.0F;
    }

    /* End of Switch: '<S218>/Switch11' */

    /* Switch: '<S218>/Switch7' incorporates:
     *  Constant: '<S97>/Calib'
     *  Inport: '<Root>/VeDTMR_b_Lv2MaxLimFail_RedPerf'
     *  Switch: '<S218>/Switch5'
     *  Switch: '<S218>/Switch6'
     */
    if (VeSTMC_b_Lv2MaxLimFail_RedPerf)
    {
        /* Switch: '<S218>/Switch7' incorporates:
         *  Constant: '<S224>/Constant'
         */
        VeSTMC_e_Lv2RdPerfMinMax = CeSTMR_e_RdPerfmMd_Max;
    }
    else if (VeSTMC_b_Lv2MinLimFail_RedPerf)
    {
        /* Switch: '<S218>/Switch7' incorporates:
         *  Constant: '<S225>/Constant'
         *  Switch: '<S218>/Switch6'
         */
        VeSTMC_e_Lv2RdPerfMinMax = CeSTMR_e_RdPerfmMd_Min;
    }
    else if (KeSTMR_b_EblRedPerfModeDTMR)
    {
        (void)Rte_Read_VeDTMR_b_Lv2MaxLimFail_RedPerf_Value(&rtb_AND_dc);

        /* Switch: '<S218>/Switch4' incorporates:
         *  Inport: '<Root>/VeDTMR_b_Lv2MaxLimFail_RedPerf'
         *  Inport: '<Root>/VeDTMR_b_Lv2MinLimFail_RedPerf'
         *  Switch: '<S218>/Switch5'
         *  Switch: '<S218>/Switch6'
         */
        if (rtb_AND_dc)
        {
            /* Switch: '<S218>/Switch7' incorporates:
             *  Constant: '<S227>/Constant'
             *  Switch: '<S218>/Switch4'
             *  Switch: '<S218>/Switch5'
             */
            VeSTMC_e_Lv2RdPerfMinMax = CeSTMR_e_RdPerfmMd_Max;
        }
        else
        {
            (void)Rte_Read_VeDTMR_b_Lv2MinLimFail_RedPerf_Value(&tmpRead_m);

            /* Switch: '<S218>/Switch3' incorporates:
             *  Inport: '<Root>/VeDTMR_b_Lv2MinLimFail_RedPerf'
             */
            if (tmpRead_m)
            {
                /* Switch: '<S218>/Switch7' incorporates:
                 *  Constant: '<S228>/Constant'
                 *  Switch: '<S218>/Switch4'
                 *  Switch: '<S218>/Switch5'
                 */
                VeSTMC_e_Lv2RdPerfMinMax = CeSTMR_e_RdPerfmMd_Min;
            }
            else
            {
                /* Switch: '<S218>/Switch7' incorporates:
                 *  Constant: '<S226>/Constant'
                 *  Switch: '<S218>/Switch4'
                 *  Switch: '<S218>/Switch5'
                 */
                VeSTMC_e_Lv2RdPerfMinMax = CeSTMR_e_NoRdPerfmMdRq;
            }

            /* End of Switch: '<S218>/Switch3' */
        }

        /* End of Switch: '<S218>/Switch4' */
    }
    else
    {
        /* Switch: '<S218>/Switch7' incorporates:
         *  Constant: '<S229>/Constant'
         *  Switch: '<S218>/Switch5'
         *  Switch: '<S218>/Switch6'
         */
        VeSTMC_e_Lv2RdPerfMinMax = CeSTMR_e_NoRdPerfmMdRq;
    }

    /* End of Switch: '<S218>/Switch7' */

    /* Logic: '<S10>/Logical1' */
    VeSTMC_b_ResetP061BTrqDTC = ((VeSTMI_b_Lv2KeyOff) ||
        (VeSTMC_b_Lv2ResetbyDMAB));

    /* Logic: '<S219>/Logical15' incorporates:
     *  Logic: '<S219>/Logical14'
     */
    VeSTMC_b_Lv2MtrTrqCmndChkFailed = (((VeSTMC_b_OutTrqMaxFail_final) ||
        (VeSTMC_b_OutTrqMinFail_final)) || (VeSTMC_b_OutTrqMaxFailDist_final));

    /* Logic: '<S242>/NOT' incorporates:
     *  Logic: '<S243>/NOT'
     *  Logic: '<S244>/NOT'
     */
    rtb_Compare = !VeSTMC_b_ResetP061BTrqDTC;

    /* Logic: '<S242>/OR1' incorporates:
     *  Logic: '<S242>/NOT'
     *  Logic: '<S242>/OR'
     *  UnitDelay: '<S242>/UnitDelay1'
     */
    STMR_ac_DW.VeSTMC_b_TrqCmndFlt_prev = ((VeSTMC_b_Lv2MtrTrqCmndChkFailed) ||
        (rtb_Compare && (STMR_ac_DW.VeSTMC_b_TrqCmndFlt_prev)));

    /* Logic: '<S219>/Logical11' incorporates:
     *  Constant: '<S240>/Calib'
     *  Logic: '<S219>/Logical10'
     */
    VeSTMC_b_Stage1RemActionActv = (((VeSTMC_b_Lv2MaxLimFail_RedPerf) ||
        (VeSTMC_b_Lv2MinLimFail_RedPerf)) && (KeSTMR_b_SetDTCOnRedPerfMd));

    /* Logic: '<S219>/Logical12' incorporates:
     *  Constant: '<S241>/Calib'
     */
    VeSTMC_b_Stage2RemActionActv = ((VeSTMC_b_Lv2MtrTrqCmndChkFailed) &&
        (KeSTMR_b_SetDTC_ZeroTrq));

    /* Logic: '<S219>/Logical13' */
    VeSTMR_b_TrqChkFailed = (((VeSTMC_b_Stage1RemActionActv) ||
        (VeSTMC_b_Stage2RemActionActv)) || (VeSTMC_b_IdleSpdErrMntrl_final));

    /* Logic: '<S219>/Logical25' incorporates:
     *  Constant: '<S239>/Calib'
     */
    VeSTMR_b_SetDTC_MtrTrqChkFailed = ((VeSTMR_b_TrqChkFailed) &&
        (KeSTMR_b_SetDTCForTrqMntFlt));

    /* Logic: '<S243>/OR1' incorporates:
     *  Logic: '<S243>/OR'
     *  UnitDelay: '<S243>/UnitDelay1'
     */
    STMR_ac_DW.VeSTMC_b_SetDTCTrqCmndFlt_prev =
        ((VeSTMR_b_SetDTC_MtrTrqChkFailed) || (rtb_Compare &&
          (STMR_ac_DW.VeSTMC_b_SetDTCTrqCmndFlt_prev)));

    /* Logic: '<S219>/Logical41' */
    VeSTMC_b_Lv2TrqFaulted_ParkNeutral = ((VeSTMC_b_Lv2MtrTrqCmndChkFailed) &&
        (VeSTMC_b_VehInParkNeutralMet));

    /* Logic: '<S244>/OR1' incorporates:
     *  Logic: '<S244>/OR'
     *  UnitDelay: '<S244>/Unit Delay1'
     */
    STMR_ac_DW.VeSTMC_b_TrqCmndFlt_prev_j = ((VeSTMC_b_Lv2TrqFaulted_ParkNeutral)
        || (rtb_Compare && (STMR_ac_DW.VeSTMC_b_TrqCmndFlt_prev_j)));

    /* Logic: '<S245>/Logical1' incorporates:
     *  Constant: '<S253>/Calib'
     *  Logic: '<S245>/Logical4'
     */
    VeSTMC_b_RstCCTrqChkCntr = (((((rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE &&
        rtb_TmpSignalConversionAtVeSSMR_b_VehSpd) || (KeSTMR_b_DisblCCTrqChk)) ||
        (VeSTMI_b_Lv1ResetDTC)) || (VeSTMI_b_Lv2KeyOff)) ||
        (VeSTMC_b_ResetSTMRbyMSS));

    /* RelationalOperator: '<S281>/Compare' incorporates:
     *  Constant: '<S281>/Constant'
     */
    rtb_Compare = (rtb_Compare_iy_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S256>/EdgeFalling' */
    /* Logic: '<S277>/AND' incorporates:
     *  Logic: '<S277>/OR1'
     *  UnitDelay: '<S277>/Unit Delay'
     */
    rtb_AND_dc = ((!rtb_Compare) && (STMR_ac_DW.UnitDelay_DSTATE_jo));

    /* Update for UnitDelay: '<S277>/Unit Delay' */
    STMR_ac_DW.UnitDelay_DSTATE_jo = rtb_Compare;

    /* End of Outputs for SubSystem: '<S256>/EdgeFalling' */

    /* Logic: '<S256>/passDBCparam2' */
    VeSTMC_b_Lv2CCTrqCmprChkFlt_Rst = ((VeSTMC_b_RstCCTrqChkCntr) || rtb_AND_dc);

    /* Sum: '<S245>/Sum1' incorporates:
     *  UnitDelay: '<S245>/UnitDelay'
     */
    VeSTMC_M_CruiseTrqError = VeSTMC_M_NetTransTrqCmnd_Arb -
        STMR_ac_DW.VeSTMC_M_TransTrqCmndArb_Prev;

    /* Outputs for Atomic SubSystem: '<S249>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S271>/Switch1' incorporates:
     *  Constant: '<S259>/Calib'
     *  Product: '<S271>/Multiplication'
     *  Sum: '<S271>/Subtraction'
     *  Sum: '<S271>/Summation'
     *  UnitDelay: '<S271>/UnitDelay'
     */
    STMR_ac_DW.VeSTMC_v_Lv2VehSpdFiltdPrev_prev +=
        (VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc -
         STMR_ac_DW.VeSTMC_v_Lv2VehSpdFiltdPrev_prev) *
        KeSTMR_K_VehAbsSpdFltrCoeff;

    /* End of Outputs for SubSystem: '<S249>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Switch: '<S305>/Switch1' incorporates:
     *  Inport: '<Root>/VeCSMR_v_Lv2CCSetSpd'
     */
    if (rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1)
    {
        /* Switch: '<S460>/Switch6' incorporates:
         *  Inport: '<Root>/VeCSMR_v_ASLSetSpeed'
         */
        (void)Rte_Read_VeCSMR_v_ASLSetSpeed_Value(&rtb_Switch6_f);
    }
    else
    {
        (void)Rte_Read_VeCSMR_v_Lv2CCSetSpd_Value(&tmpRead);

        /* Switch: '<S305>/Switch10' incorporates:
         *  Inport: '<Root>/VeCSMR_v_Lv2CCSetSpd'
         */
        if (rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE)
        {
            /* Switch: '<S460>/Switch6' */
            rtb_Switch6_f = tmpRead;
        }
        else
        {
            /* Switch: '<S460>/Switch6' incorporates:
             *  Constant: '<S305>/ConstantValue1'
             */
            rtb_Switch6_f = 0.0F;
        }

        /* End of Switch: '<S305>/Switch10' */
    }

    /* End of Switch: '<S305>/Switch1' */

    /* Product: '<S305>/Product' incorporates:
     *  Constant: '<S306>/Calib'
     */
    VeSTMC_v_Lv2SetSpeed4TrqEst_Mph = rtb_Switch6_f *
        KeSTMR_v_Kph_To_Mph_ConvFctr;

    /* Lookup_n-D: '<S267>/Vector' incorporates:
     *  Product: '<S305>/Product'
     *  Switch: '<S271>/Switch1'
     *  UnitDelay: '<S271>/UnitDelay'
     */
    VeSTMC_M_TrqRtLt_CCSpdChng = look2_iflf_binlca_16a
        (STMR_ac_DW.VeSTMC_v_Lv2VehSpdFiltdPrev_prev,
         VeSTMC_v_Lv2SetSpeed4TrqEst_Mph, ((const float32 *)
          &(KxSTMR_M_MtrTrqRateLmt_CCSpdChng[0])), ((const float32 *)
          &(KySTMR_M_MtrTrqRateLmt_CCSpdChng[0])), ((const float32 *)
          &(KtSTMR_M_MtrTrqRateLmt_CCSpdChng[0])), STMR_ac_ConstP.pooled10, 14U);

    /* Sum: '<S249>/Sum1' incorporates:
     *  UnitDelay: '<S249>/UnitDelay'
     */
    rtb_Switch6_f = VeSTMC_v_Lv2SetSpeed4TrqEst_Mph -
        STMR_ac_DW.VeSTMC_v_CCSetSpeedPrev;

    /* Switch: '<S269>/LV2_Abs_switch' incorporates:
     *  Constant: '<S269>/ConstantValue1'
     *  Product: '<S269>/Product'
     *  RelationalOperator: '<S269>/Comparison'
     */
    if (rtb_Switch6_f < 0.0F)
    {
        rtb_Switch6_f = -rtb_Switch6_f;
    }

    /* End of Switch: '<S269>/LV2_Abs_switch' */

    /* RelationalOperator: '<S249>/Comparison' incorporates:
     *  Constant: '<S265>/Calib'
     */
    VeSTMC_b_CCSetSpdChngDtctd = (rtb_Switch6_f > KeSTMR_v_CCSetSpdChngThsh);

    /* Logic: '<S273>/AND' incorporates:
     *  Logic: '<S273>/OR1'
     *  UnitDelay: '<S273>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1 = ((!VeSTMC_b_CCSetSpdChngDtctd) &&
        (STMR_ac_DW.VeSTMC_b_CCSetSpdChng_FE_prev));

    /* Outputs for Atomic SubSystem: '<S249>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* Switch: '<S274>/Switch' incorporates:
     *  Logic: '<S275>/AND'
     *  Logic: '<S275>/OR1'
     *  MinMax: '<S274>/Minimum1'
     *  UnitDelay: '<S274>/UnitDelay1'
     *  UnitDelay: '<S275>/UnitDelay'
     */
    if ((!rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1) &&
            (STMR_ac_DW.VeSTMC_b_CCSetSpdChngDly_prev))
    {
        /* MinMax: '<S274>/Minimum1' incorporates:
         *  Constant: '<S257>/Calib'
         *  UnitDelay: '<S274>/UnitDelay1'
         */
        STMR_ac_DW.VeSTMC_Cnt_CCSetSpdChngDly_prev =
            KeSTMR_Cnt_NoChngInCCSetSpdDly;
    }
    else
    {
        if (((sint32)STMR_ac_DW.VeSTMC_Cnt_CCSetSpdChngDly_prev) <= 1)
        {
            /* MinMax: '<S274>/Minimum1' */
            STMR_ac_DW.VeSTMC_Cnt_CCSetSpdChngDly_prev = 1U;
        }

        /* MinMax: '<S274>/Minimum1' incorporates:
         *  Constant: '<S274>/ConstantValue'
         *  Sum: '<S274>/Summation'
         *  UnitDelay: '<S274>/UnitDelay1'
         */
        STMR_ac_DW.VeSTMC_Cnt_CCSetSpdChngDly_prev = (uint16)((sint32)(((sint32)
            STMR_ac_DW.VeSTMC_Cnt_CCSetSpdChngDly_prev) - 1));
    }

    /* End of Switch: '<S274>/Switch' */

    /* Logic: '<S274>/AND' incorporates:
     *  Constant: '<S274>/ConstantValue2'
     *  RelationalOperator: '<S274>/Comparison2'
     *  UnitDelay: '<S274>/UnitDelay1'
     */
    VeSTMC_b_ChangeInCCSetSpeed = (rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1 ||
        (((sint32)STMR_ac_DW.VeSTMC_Cnt_CCSetSpdChngDly_prev) > 0));

    /* Update for UnitDelay: '<S275>/UnitDelay' */
    STMR_ac_DW.VeSTMC_b_CCSetSpdChngDly_prev =
        rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1;

    /* End of Outputs for SubSystem: '<S249>/LV2_Turn_Off_Delay_Sample_Modified' */

    /* Lookup_n-D: '<S268>/Vector' incorporates:
     *  Product: '<S305>/Product'
     *  Switch: '<S271>/Switch1'
     *  UnitDelay: '<S271>/UnitDelay'
     */
    VeSTMC_M_TrqRtLt_VehSpdChng = look2_iflf_binlca_16a
        (STMR_ac_DW.VeSTMC_v_Lv2VehSpdFiltdPrev_prev,
         VeSTMC_v_Lv2SetSpeed4TrqEst_Mph, ((const float32 *)
          &(KxSTMR_M_MtrTrqRateLmt_VehSpdChng[0])), ((const float32 *)
          &(KySTMR_M_MtrTrqRateLmt_VehSpdChng[0])), ((const float32 *)
          &(KtSTMR_M_MtrTrqRateLmt_VehSpdChng[0])), STMR_ac_ConstP.pooled10, 14U);

    /* Sum: '<S249>/Sum2' incorporates:
     *  UnitDelay: '<S271>/UnitDelay'
     */
    rtb_Switch6_f = VeSTMC_v_Lv2SetSpeed4TrqEst_Mph -
        STMR_ac_DW.VeSTMC_v_Lv2VehSpdFiltdPrev_prev;

    /* Switch: '<S270>/LV2_Abs_switch' incorporates:
     *  Constant: '<S270>/ConstantValue1'
     *  RelationalOperator: '<S270>/Comparison'
     */
    if (rtb_Switch6_f < 0.0F)
    {
        /* Switch: '<S270>/LV2_Abs_switch' incorporates:
         *  Product: '<S270>/Product'
         */
        rtb_Switch6_f = -rtb_Switch6_f;
    }

    /* End of Switch: '<S270>/LV2_Abs_switch' */

    /* Switch: '<S249>/Switch1' incorporates:
     *  Constant: '<S249>/ConstantValue1'
     *  Constant: '<S261>/Calib'
     *  Constant: '<S262>/Calib'
     *  Constant: '<S264>/Calib'
     *  Constant: '<S266>/Calib'
     *  Product: '<S249>/Product'
     *  RelationalOperator: '<S249>/Comparison1'
     *  Sum: '<S249>/Sum3'
     *  Switch: '<S249>/Switch11'
     *  UnitDelay: '<S249>/UnitDelay3'
     */
    if (rtb_Switch6_f <= KeSTMR_v_SpdDiffIntgThsh)
    {
        STMR_ac_DW.VeSTMC_l_SpdDiffIntegralArbPrev = 0.0F;
    }
    else
    {
        STMR_ac_DW.VeSTMC_l_SpdDiffIntegralArbPrev += ((rtb_Switch6_f *
            KeSTMR_t_dT) * KeSTMR_k_SpdDiffIntrglCoeff) *
            KeSTMR_k_HourToSecsConvFctr;
    }

    /* End of Switch: '<S249>/Switch1' */

    /* RelationalOperator: '<S249>/Comparison2' incorporates:
     *  Constant: '<S263>/Calib'
     *  UnitDelay: '<S249>/UnitDelay3'
     */
    VeSTMC_b_ChangeInVehSpd = (STMR_ac_DW.VeSTMC_l_SpdDiffIntegralArbPrev >
        KeSTMR_l_SpdDiffCnfrmThsh);

    /* Logic: '<S249>/Logical2' incorporates:
     *  Logic: '<S249>/Logical1'
     *  Switch: '<S249>/Switch3'
     */
    rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1 = !VeSTMC_b_ChangeInCCSetSpeed;

    /* Logic: '<S249>/Logical' incorporates:
     *  Logic: '<S249>/Logical2'
     */
    VeSTMC_b_ChangeInVehSpdDueToGrade =
        (rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1 && (VeSTMC_b_ChangeInVehSpd));

    /* Switch: '<S249>/Switch3' incorporates:
     *  Logic: '<S249>/Logical3'
     *  Logic: '<S249>/Logical4'
     *  Switch: '<S249>/Switch2'
     */
    if (VeSTMC_b_ChangeInVehSpdDueToGrade)
    {
        /* Switch: '<S249>/Switch3' */
        VeSTMC_M_MtrTrqRateLmt_VehSpdChng = VeSTMC_M_TrqRtLt_VehSpdChng;
    }
    else if (rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1 &&
             (!VeSTMC_b_ChangeInVehSpd))
    {
        /* Switch: '<S249>/Switch2' incorporates:
         *  Constant: '<S260>/Calib'
         *  Switch: '<S249>/Switch3'
         */
        VeSTMC_M_MtrTrqRateLmt_VehSpdChng = KeSTMR_M_MtrTrqRateLmt_StdySt;
    }
    else
    {
        /* Switch: '<S249>/Switch3' incorporates:
         *  UnitDelay: '<S249>/UnitDelay2'
         */
        VeSTMC_M_MtrTrqRateLmt_VehSpdChng = VeSTMC_M_MtrTrqRateLmt;
    }

    /* Switch: '<S249>/Switch4' */
    if (VeSTMC_b_ChangeInCCSetSpeed)
    {
        /* Switch: '<S249>/Switch4' */
        VeSTMC_M_MtrTrqRateLmt = VeSTMC_M_TrqRtLt_CCSpdChng;
    }
    else
    {
        /* Switch: '<S249>/Switch4' */
        VeSTMC_M_MtrTrqRateLmt = VeSTMC_M_MtrTrqRateLmt_VehSpdChng;
    }

    /* End of Switch: '<S249>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S249>/LV2_Digital_Lowpass_Reset_Enabled1' */
    /* Lookup_n-D: '<S488>/Vector' incorporates:
     *  UnitDelay: '<S272>/UnitDelay'
     */
    rtb_Switch5_l = STMR_ac_DW.VeSTMC_M_MtrTrqRateLmtPrev_prev;

    /* Switch: '<S272>/Switch1' incorporates:
     *  Constant: '<S258>/Calib'
     *  Product: '<S272>/Multiplication'
     *  Sum: '<S272>/Subtraction'
     *  Sum: '<S272>/Summation'
     */
    VeSTMC_M_MtrTrqRateLmtFltrd = ((VeSTMC_M_MtrTrqRateLmt - rtb_Switch5_l) *
        KeSTMR_K_MtrTrqRateLimFiltCoeff) + rtb_Switch5_l;

    /* Update for UnitDelay: '<S272>/UnitDelay' */
    STMR_ac_DW.VeSTMC_M_MtrTrqRateLmtPrev_prev = VeSTMC_M_MtrTrqRateLmtFltrd;

    /* End of Outputs for SubSystem: '<S249>/LV2_Digital_Lowpass_Reset_Enabled1' */

    /* Switch: '<S255>/LV2_Abs_switch' incorporates:
     *  Constant: '<S255>/ConstantValue1'
     *  Product: '<S255>/Product'
     *  RelationalOperator: '<S255>/Comparison'
     */
    if (VeSTMC_M_CruiseTrqError < 0.0F)
    {
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp = -VeSTMC_M_CruiseTrqError;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSSMR_n_MtrASp = VeSTMC_M_CruiseTrqError;
    }

    /* End of Switch: '<S255>/LV2_Abs_switch' */

    /* Logic: '<S245>/Logical3' incorporates:
     *  Constant: '<S254>/Calib'
     *  RelationalOperator: '<S245>/Comparison'
     */
    VeSTMC_b_CruiseTrqChkFailing = (((rtb_TmpSignalConversionAtVeSSMR_n_MtrASp >
        VeSTMC_M_MtrTrqRateLmtFltrd) && rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE)
        && (KeSTMR_b_Lv2_MntrCCTrqReqEnbl));

    /* Switch: '<S256>/dec_if_Ok_else_inc' incorporates:
     *  MinMax: '<S256>/FixPtMinax'
     *  UnitDelay: '<S256>/UnitDelay'
     */
    if (VeSTMC_b_CruiseTrqChkFailing)
    {
        /* Sum: '<S256>/Inc_Cntr' incorporates:
         *  Constant: '<S251>/Calib'
         *  UnitDelay: '<S256>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = (uint8)(((uint32)
            VeSTMC_Cnt_CC_TrqChk_Fail) + ((uint32)KeSTMR_Cnt_CCTrqChk_Inc));

        /* Switch: '<S256>/Switch1' incorporates:
         *  RelationalOperator: '<S256>/Relational_Operator'
         *  UnitDelay: '<S256>/UnitDelay'
         */
        if (rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca < VeSTMC_Cnt_CC_TrqChk_Fail)
        {
            /* Switch: '<S256>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S256>/CounterMax'
             */
            rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = MAX_uint8_T;
        }

        /* End of Switch: '<S256>/Switch1' */
    }
    else
    {
        if (((sint32)VeSTMC_Cnt_CC_TrqChk_Fail) <= 1)
        {
            /* MinMax: '<S256>/FixPtMinax' */
            VeSTMC_Cnt_CC_TrqChk_Fail = 1U;
        }

        /* Switch: '<S256>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S245>/ConstantValue'
         *  Sum: '<S256>/Dec_Cntr'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = (uint8)((sint32)(((sint32)
            VeSTMC_Cnt_CC_TrqChk_Fail) - 1));
    }

    /* End of Switch: '<S256>/dec_if_Ok_else_inc' */

    /* RelationalOperator: '<S245>/Comparison1' incorporates:
     *  Constant: '<S252>/Calib'
     */
    VeSTMC_b_CruiseTrqStepError = (VeSTMC_M_CruiseTrqError >
        KeSTMR_M_CruiseGrdLmtAllowMax);

    /* Outputs for Atomic SubSystem: '<S246>/Hysteresis2' */
    /* Switch: '<S285>/Switch1' incorporates:
     *  Constant: '<S285>/ConstantValue'
     *  Constant: '<S288>/Calib'
     *  Constant: '<S289>/Calib'
     *  RelationalOperator: '<S285>/GreaterThan'
     *  RelationalOperator: '<S285>/GreaterThan1'
     *  Sum: '<S246>/Sum'
     *  Sum: '<S246>/Sum1'
     *  UnitDelay: '<S285>/UnitDelay'
     */
    if (VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc > (VeSTMC_v_Lv2SetSpeed4TrqEst_Mph +
            KeSTMR_v_VehSpdDiffCC_RSP))
    {
        STMR_ac_DW.UnitDelay_DSTATE_dg = true;
    }
    else
    {
        STMR_ac_DW.UnitDelay_DSTATE_dg = ((VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc >=
            (VeSTMC_v_Lv2SetSpeed4TrqEst_Mph - KeSTMR_v_VehSpdDiffCC_LSP)) &&
            (STMR_ac_DW.UnitDelay_DSTATE_dg));
    }

    /* End of Switch: '<S285>/Switch1' */
    /* End of Outputs for SubSystem: '<S246>/Hysteresis2' */

    /* Logic: '<S246>/Logical' incorporates:
     *  UnitDelay: '<S285>/UnitDelay'
     */
    VeSTMC_b_EnblMtrTrqDeRateMntr = (((STMR_ac_DW.UnitDelay_DSTATE_dg) &&
        rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE) &&
        rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb);

    /* Outputs for Atomic SubSystem: '<S246>/LV2_Turn_On_Delay_Sample' */
    /* Switch: '<S291>/LV2Switch' incorporates:
     *  Constant: '<S286>/Calib'
     *  Constant: '<S291>/ConstantValue'
     *  Constant: '<S291>/ConstantValue1'
     *  Logic: '<S291>/OR'
     *  Logic: '<S291>/OR1'
     *  Logic: '<S304>/AND1'
     *  Logic: '<S304>/OR2'
     *  MinMax: '<S291>/Minimum'
     *  Sum: '<S291>/Summation'
     *  UnitDelay: '<S291>/UnitDelay1'
     *  UnitDelay: '<S304>/UnitDelay'
     */
    if ((!VeSTMC_b_EnblMtrTrqDeRateMntr) || ((VeSTMC_b_EnblMtrTrqDeRateMntr) &&
            (!STMR_ac_DW.VeSTMC_b_MtrTrqDeRateMntrDly_prev)))
    {
        STMR_ac_DW.VeSTMC_Cnt_MtrTrqDeRateMntrDly_prev = 0U;
    }
    else if (KeSTMR_Cnt_MtrTrqDeRateEnDly < ((uint16)(((uint32)
                STMR_ac_DW.VeSTMC_Cnt_MtrTrqDeRateMntrDly_prev) + 1U)))
    {
        /* MinMax: '<S291>/Minimum' incorporates:
         *  Constant: '<S286>/Calib'
         */
        STMR_ac_DW.VeSTMC_Cnt_MtrTrqDeRateMntrDly_prev =
            KeSTMR_Cnt_MtrTrqDeRateEnDly;
    }
    else
    {
        /* MinMax: '<S291>/Minimum' incorporates:
         *  Constant: '<S291>/ConstantValue'
         *  Sum: '<S291>/Summation'
         *  UnitDelay: '<S291>/UnitDelay1'
         */
        STMR_ac_DW.VeSTMC_Cnt_MtrTrqDeRateMntrDly_prev = (uint16)(((uint32)
            STMR_ac_DW.VeSTMC_Cnt_MtrTrqDeRateMntrDly_prev) + 1U);
    }

    /* End of Switch: '<S291>/LV2Switch' */

    /* Update for UnitDelay: '<S304>/UnitDelay' */
    STMR_ac_DW.VeSTMC_b_MtrTrqDeRateMntrDly_prev = VeSTMC_b_EnblMtrTrqDeRateMntr;

    /* End of Outputs for SubSystem: '<S246>/LV2_Turn_On_Delay_Sample' */

    /* Logic: '<S284>/Logical2' incorporates:
     *  Logic: '<S300>/OR2'
     *  UnitDelay: '<S284>/UnitDelay1'
     *  UnitDelay: '<S300>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb =
        ((!STMR_ac_DW.VeSTMC_b_CbTrueER_prev) ||
         (STMR_ac_DW.VeSTMC_b_TrgrCntrEnblSig_Prev));

    /* Outputs for Enabled SubSystem: '<S284>/CountOn' incorporates:
     *  EnablePort: '<S294>/Enable'
     */
    /* Outputs for Enabled SubSystem: '<S284>/CalcAverage' incorporates:
     *  EnablePort: '<S292>/Enable'
     */
    if (rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb)
    {
        /* Outputs for Atomic SubSystem: '<S292>/ProtectedDivision' */
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S301>/Calib'
         *  Constant: '<S302>/ConstantValue'
         *  Constant: '<S302>/ConstantValue1'
         *  Constant: '<S302>/ConstantValue2'
         *  Constant: '<S302>/ConstantValue3'
         *  Logic: '<S302>/AND'
         *  RelationalOperator: '<S302>/GreaterThanorEqual'
         *  RelationalOperator: '<S302>/GreaterThanorEqual1'
         *  RelationalOperator: '<S302>/NotEqual'
         *  RelationalOperator: '<S302>/NotEqual1'
         *  Switch: '<S302>/Switch2'
         *  Switch: '<S302>/Switch3'
         *  UnitDelay: '<S284>/UnitDelay2'
         */
        if ((STMR_ac_DW.VeSTMC_M_TrqCmndAccuValPrev != 0.0F) &&
                (KeSTMR_k_MtrDeRateAvg != 0.0F))
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  Product: '<S302>/Division'
             */
            STMR_ac_B.Switch1 = STMR_ac_DW.VeSTMC_M_TrqCmndAccuValPrev /
                KeSTMR_k_MtrDeRateAvg;
        }
        else if (STMR_ac_DW.VeSTMC_M_TrqCmndAccuValPrev > 0.0F)
        {
            /* Switch: '<S302>/Switch2' incorporates:
             *  Constant: '<S302>/MAXFLOAT'
             *  Switch: '<S302>/Switch1'
             */
            STMR_ac_B.Switch1 = 3.402823466E+38F;
        }
        else if (STMR_ac_DW.VeSTMC_M_TrqCmndAccuValPrev < 0.0F)
        {
            /* Switch: '<S302>/Switch3' incorporates:
             *  Constant: '<S302>/MINFLOAT'
             *  Switch: '<S302>/Switch1'
             *  Switch: '<S302>/Switch2'
             */
            STMR_ac_B.Switch1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  Constant: '<S302>/ConstantValue4'
             *  Switch: '<S302>/Switch2'
             *  Switch: '<S302>/Switch3'
             */
            STMR_ac_B.Switch1 = 0.0F;
        }

        /* End of Switch: '<S302>/Switch1' */
        /* End of Outputs for SubSystem: '<S292>/ProtectedDivision' */

        /* Outputs for Atomic SubSystem: '<S294>/LV2_Counter_Reset_Enabled' */
        /* Switch: '<S303>/Switch2' incorporates:
         *  Logic: '<S294>/Logical2'
         *  RelationalOperator: '<S294>/Comparison2'
         *  Switch: '<S303>/Switch1'
         *  UnitDelay: '<S284>/UnitDelay3'
         */
        if (STMR_ac_B.Switch1 >= STMR_ac_DW.VeSTMC_M_MtrATrqCmndAvgPrev)
        {
            /* Switch: '<S303>/Switch1' incorporates:
             *  Constant: '<S303>/ConstantValue2'
             */
            VeSTMC_Cnt_MtrTrqCmndDecCntrVal = 0U;
        }
        else
        {
            /* Switch: '<S303>/Switch1' incorporates:
             *  Constant: '<S303>/ConstantValue1'
             *  Sum: '<S303>/Subtraction'
             *  Switch: '<S303>/Switch2'
             *  UnitDelay: '<S303>/UnitDelay'
             */
            VeSTMC_Cnt_MtrTrqCmndDecCntrVal = (uint16)(((uint32)
                VeSTMC_Cnt_MtrTrqCmndDecCntrVal) + 1U);
        }

        /* End of Switch: '<S303>/Switch2' */
        /* End of Outputs for SubSystem: '<S294>/LV2_Counter_Reset_Enabled' */
    }

    /* End of Outputs for SubSystem: '<S284>/CalcAverage' */
    /* End of Outputs for SubSystem: '<S284>/CountOn' */

    /* Outputs for Atomic SubSystem: '<S246>/LV2_Turn_On_Delay_Sample' */
    /* Logic: '<S246>/Logical4' incorporates:
     *  Constant: '<S286>/Calib'
     *  Constant: '<S287>/Calib'
     *  Constant: '<S296>/Calib'
     *  Logic: '<S246>/Logical2'
     *  Logic: '<S284>/Logical3'
     *  Logic: '<S291>/AND'
     *  RelationalOperator: '<S284>/Comparison2'
     *  RelationalOperator: '<S291>/Comparison2'
     *  UnitDelay: '<S291>/UnitDelay1'
     */
    VeSTMC_b_TrqDeRateChkFailed = ((((((VeSTMC_b_EnblMtrTrqDeRateMntr) &&
        (STMR_ac_DW.VeSTMC_Cnt_MtrTrqDeRateMntrDly_prev >=
         KeSTMR_Cnt_MtrTrqDeRateEnDly)) && (VeSTMC_Cnt_MtrTrqCmndDecCntrVal <
        KeSTMR_Cnt_MtrTrqDeRateCnfrm)) && (KeSTMR_b_EnblMtrDeRateChk)) &&
        (!VeSTMI_b_Lv1ResetDTC)) && tmpRead_1d);

    /* End of Outputs for SubSystem: '<S246>/LV2_Turn_On_Delay_Sample' */

    /* Logic: '<S246>/Logical6' */
    VeSTMC_b_TrqDeRateChkFailed_CC_Dtcd =
        (rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE &&
         (VeSTMC_b_TrqDeRateChkFailed));

    /* Logic: '<S290>/OR1' incorporates:
     *  Logic: '<S290>/NOT'
     *  Logic: '<S290>/OR'
     */
    VeSTMC_b_Lv2TrqDeRateChkFltCCActv = ((VeSTMC_b_TrqDeRateChkFailed_CC_Dtcd) ||
        ((!VeSTMI_b_Lv2KeyOff) && (VeSTMC_b_Lv2TrqDeRateChkFltCCActv)));

    /* Switch: '<S256>/Switch3' incorporates:
     *  Switch: '<S256>/Switch2'
     *  Switch: '<S276>/Switch1'
     */
    if (VeSTMC_b_Lv2CCTrqCmprChkFlt_Rst)
    {
        /* Switch: '<S256>/Switch3' incorporates:
         *  Constant: '<S256>/ResetZero1'
         */
        VeSTMC_b_CC_TrqChk_Fail = false;

        /* MinMax: '<S256>/FixPtMinax' incorporates:
         *  Constant: '<S256>/ResetZero'
         *  Switch: '<S256>/Switch2'
         */
        VeSTMC_Cnt_CC_TrqChk_Fail = 0U;

        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S279>/Constant'
         */
        VeSTMC_e_Lv2CCTrqCmprChkFlt_DBCsts = CeDFIB_e_Init;
    }
    else
    {
        /* Switch: '<S256>/Switch3' incorporates:
         *  Constant: '<S250>/Calib'
         *  Logic: '<S245>/Logical2'
         *  Logic: '<S256>/Cntr_fail'
         *  RelationalOperator: '<S256>/Enough_counts_to_Fail'
         *  UnitDelay: '<S256>/UnitDelay1'
         */
        VeSTMC_b_CC_TrqChk_Fail = (((rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca >=
            KeSTMR_Cnt_CCTrqChkLmt) || ((VeSTMC_b_CruiseTrqStepError) ||
            (VeSTMC_b_Lv2TrqDeRateChkFltCCActv))) || (VeSTMC_b_CC_TrqChk_Fail));

        /* MinMax: '<S256>/FixPtMinax' incorporates:
         *  Switch: '<S256>/Switch2'
         */
        VeSTMC_Cnt_CC_TrqChk_Fail = rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca;

        /* Switch: '<S276>/Switch2' incorporates:
         *  Constant: '<S282>/Constant'
         *  RelationalOperator: '<S282>/Compare'
         *  Switch: '<S276>/Switch3'
         */
        if (VeSTMC_b_CC_TrqChk_Fail)
        {
            /* Switch: '<S276>/Switch1' incorporates:
             *  Constant: '<S278>/Constant'
             *  Switch: '<S276>/Switch2'
             */
            VeSTMC_e_Lv2CCTrqCmprChkFlt_DBCsts = CeDFIB_e_Fail;
        }
        else if (((sint32)VeSTMC_Cnt_CC_TrqChk_Fail) == 0)
        {
            /* Switch: '<S276>/Switch3' incorporates:
             *  Constant: '<S280>/Constant'
             *  Switch: '<S276>/Switch1'
             */
            VeSTMC_e_Lv2CCTrqCmprChkFlt_DBCsts = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S276>/Switch1' incorporates:
             *  Switch: '<S276>/Switch3'
             *  UnitDelay: '<S276>/UnitDelay'
             */
            VeSTMC_e_Lv2CCTrqCmprChkFlt_DBCsts = STMR_ac_DW.UnitDelay_DSTATE_b3;
        }

        /* End of Switch: '<S276>/Switch2' */
    }

    /* End of Switch: '<S256>/Switch3' */

    /* DataTypeConversion: '<S276>/UNIT8' incorporates:
     *  Switch: '<S276>/Switch1'
     *  UnitDelay: '<S276>/UnitDelay'
     */
    STMR_ac_DW.UnitDelay_DSTATE_b3 = (uint8)VeSTMC_e_Lv2CCTrqCmprChkFlt_DBCsts;

    /* UnitDelay: '<S284>/UnitDelay' incorporates:
     *  UnitDelay: '<S284>/UnitDelay1'
     */
    STMR_ac_DW.VeSTMC_b_TrgrCntrEnblSig_Prev =
        STMR_ac_DW.VeSTMC_b_TrgrCntrRst_Prev;

    /* Outputs for Atomic SubSystem: '<S284>/CntrEnblModified' */
    /* Switch: '<S293>/Switch1' incorporates:
     *  Constant: '<S293>/ConstantValue1'
     *  Constant: '<S293>/ConstantValue2'
     *  Sum: '<S293>/Subtraction'
     *  UnitDelay: '<S284>/UnitDelay1'
     *  UnitDelay: '<S293>/UnitDelay'
     */
    if (STMR_ac_DW.VeSTMC_b_TrgrCntrEnblSig_Prev)
    {
        STMR_ac_DW.VeSTMC_Cnt_TrgrCntrVal_prev = 0U;
    }
    else
    {
        STMR_ac_DW.VeSTMC_Cnt_TrgrCntrVal_prev = (uint16)(((uint32)
            STMR_ac_DW.VeSTMC_Cnt_TrgrCntrVal_prev) + 1U);
    }

    /* End of Switch: '<S293>/Switch1' */
    /* End of Outputs for SubSystem: '<S284>/CntrEnblModified' */

    /* RelationalOperator: '<S284>/Comparison1' incorporates:
     *  Constant: '<S295>/Calib'
     *  UnitDelay: '<S284>/UnitDelay'
     *  UnitDelay: '<S293>/UnitDelay'
     */
    STMR_ac_DW.VeSTMC_b_TrgrCntrRst_Prev =
        (STMR_ac_DW.VeSTMC_Cnt_TrgrCntrVal_prev >= KeSTMR_Cnt_MtrDeRatePeriod);

    /* Outputs for Atomic SubSystem: '<S284>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Lookup_n-D: '<S488>/Vector' incorporates:
     *  UnitDelay: '<S299>/UnitDelay'
     */
    rtb_Switch5_l = STMR_ac_DW.VeSTMC_M_TrqCmndFiltd_prev;

    /* Switch: '<S299>/Switch1' incorporates:
     *  Constant: '<S297>/Calib'
     *  Product: '<S299>/Multiplication'
     *  Sum: '<S299>/Subtraction'
     *  Sum: '<S299>/Summation'
     */
    VeSTMC_M_MtrTrqCmndFiltd = ((VeSTMC_M_NetTransTrqCmnd_Arb - rtb_Switch5_l) *
        KeSTMR_k_MtrTrqCmndFiltrCoeff) + rtb_Switch5_l;

    /* Update for UnitDelay: '<S299>/UnitDelay' */
    STMR_ac_DW.VeSTMC_M_TrqCmndFiltd_prev = VeSTMC_M_MtrTrqCmndFiltd;

    /* End of Outputs for SubSystem: '<S284>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Outputs for Atomic SubSystem: '<S284>/LV2_Accumulator_Reset' */
    /* Switch: '<S298>/Switch1' */
    if (rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb)
    {
        /* Switch: '<S298>/Switch1' incorporates:
         *  Constant: '<S284>/ConstantValue2'
         */
        VeSTMC_M_MtrATrqCmndAccuVal = 0.0F;
    }
    else
    {
        /* Switch: '<S298>/Switch1' incorporates:
         *  Sum: '<S298>/Summation'
         *  UnitDelay: '<S298>/UnitDelay'
         */
        VeSTMC_M_MtrATrqCmndAccuVal = VeSTMC_M_MtrTrqCmndFiltd +
            VeSTMC_M_MtrATrqCmndAccuVal;
    }

    /* End of Switch: '<S298>/Switch1' */
    /* End of Outputs for SubSystem: '<S284>/LV2_Accumulator_Reset' */

    /* Outputs for Atomic SubSystem: '<S3>/MntrRgnTrq' */
    STMR_ac_MntrRgnTrq();

    /* End of Outputs for SubSystem: '<S3>/MntrRgnTrq' */

    /* Lookup_n-D: '<S485>/Vector' incorporates:
     *  Constant: '<S465>/Calib'
     *  Constant: '<S468>/Calib'
     *  Constant: '<S483>/Calib'
     *  Constant: '<S500>/Constant'
     *  Constant: '<S508>/Constant'
     *  DataTypeConversion: '<S497>/UNIT8'
     *  DataTypeConversion: '<S505>/UNIT8'
     *  Inport: '<Root>/VeSCCR_M_FrntAxlAdhMax'
     *  Inport: '<Root>/VeSCCR_M_FrntAxlAdhMin'
     *  Inport: '<Root>/VeSCCR_M_FrntAxlMaxRqPrtctd'
     *  Inport: '<Root>/VeSCCR_M_FrntAxlMinRqPrtctd'
     *  Inport: '<Root>/VeSCCR_M_RrAxlAdhMax'
     *  Inport: '<Root>/VeSCCR_M_RrAxlAdhMin'
     *  Logic: '<S460>/Logical1'
     *  Logic: '<S460>/Logical10'
     *  Logic: '<S460>/Logical11'
     *  Logic: '<S460>/Logical12'
     *  Logic: '<S460>/Logical13'
     *  Logic: '<S460>/Logical14'
     *  Logic: '<S460>/Logical15'
     *  Logic: '<S460>/Logical16'
     *  Logic: '<S460>/Logical17'
     *  Logic: '<S460>/Logical20'
     *  Logic: '<S460>/Logical3'
     *  Logic: '<S460>/Logical30'
     *  Logic: '<S460>/Logical38'
     *  Logic: '<S460>/Logical48'
     *  Logic: '<S460>/Logical59'
     *  Logic: '<S460>/Logical6'
     *  Logic: '<S460>/Logical60'
     *  Logic: '<S460>/Logical7'
     *  Logic: '<S460>/Logical8'
     *  Logic: '<S489>/passDBCparam2'
     *  Logic: '<S490>/passDBCparam2'
     *  Lookup_n-D: '<S486>/Vector'
     *  Lookup_n-D: '<S487>/Vector'
     *  Lookup_n-D: '<S488>/Vector'
     *  MinMax: '<S489>/FixPtMinax'
     *  MinMax: '<S490>/FixPtMinax'
     *  Product: '<S460>/Product1'
     *  Product: '<S460>/Product10'
     *  Product: '<S460>/Product11'
     *  Product: '<S460>/Product12'
     *  Product: '<S460>/Product2'
     *  Product: '<S460>/Product3'
     *  Product: '<S460>/Product4'
     *  Product: '<S460>/Product9'
     *  RelationalOperator: '<S491>/Comparison'
     *  RelationalOperator: '<S494>/Comparison'
     *  RelationalOperator: '<S502>/Compare'
     *  RelationalOperator: '<S510>/Compare'
     *  S-Function (sfix_bitop): '<S489>/Bit6'
     *  S-Function (sfix_bitop): '<S490>/Bit6'
     *  SignalConversion generated from: '<S15>/Variant Source'
     *  Sum: '<S460>/Add'
     *  Sum: '<S460>/Add1'
     *  Sum: '<S460>/Add2'
     *  Sum: '<S460>/Add4'
     *  Sum: '<S460>/Sum16'
     *  Sum: '<S460>/Sum18'
     *  Sum: '<S460>/Sum20'
     *  Sum: '<S460>/Sum22'
     *  Switch: '<S460>/Switch12'
     *  Switch: '<S460>/Switch13'
     *  Switch: '<S460>/Switch14'
     *  Switch: '<S460>/Switch15'
     *  Switch: '<S460>/Switch17'
     *  Switch: '<S460>/Switch19'
     *  Switch: '<S460>/Switch2'
     *  Switch: '<S460>/Switch21'
     *  Switch: '<S460>/Switch23'
     *  Switch: '<S460>/Switch24'
     *  Switch: '<S460>/Switch25'
     *  Switch: '<S460>/Switch26'
     *  Switch: '<S460>/Switch27'
     *  Switch: '<S460>/Switch3'
     *  Switch: '<S460>/Switch4'
     *  Switch: '<S460>/Switch5'
     *  Switch: '<S460>/Switch6'
     *  Switch: '<S460>/Switch7'
     *  Switch: '<S489>/Switch2'
     *  Switch: '<S489>/Switch3'
     *  Switch: '<S489>/dec_if_Ok_else_inc'
     *  Switch: '<S490>/Switch2'
     *  Switch: '<S490>/Switch3'
     *  Switch: '<S490>/dec_if_Ok_else_inc'
     *  Switch: '<S491>/Switch'
     *  Switch: '<S494>/Switch'
     *  Switch: '<S497>/Switch1'
     *  Switch: '<S505>/Switch1'
     *  UnitDelay: '<S489>/UnitDelay'
     *  UnitDelay: '<S489>/UnitDelay1'
     *  UnitDelay: '<S490>/UnitDelay'
     *  UnitDelay: '<S490>/UnitDelay1'
     *  UnitDelay: '<S497>/UnitDelay'
     *  UnitDelay: '<S505>/UnitDelay'
     */
#if !Rte_SysCon_Variant_STMR_FUNC_1 && !Rte_SysCon_Variant_STMR_FUNC_2 && !Rte_SysCon_Variant_STMR_FUNC_3 && !Rte_SysCon_Variant_STMR_FUNC_4

    /* Outputs for Atomic SubSystem: '<S490>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S489>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S460>/Hysteresis3' */
    /* Outputs for Atomic SubSystem: '<S460>/Hysteresis2' */
    /* Outputs for Atomic SubSystem: '<S460>/Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S460>/Hysteresis' */
    /* Product: '<S460>/Product11' incorporates:
     *  Constant: '<S484>/Calib'
     */
    VeSTMC_M_FrontAxleRqBSM_MtrDomain = VeSTMI_M_Lv2FrntAxlRq /
        KeSTMR_k_P4BEV_FDR;
    (void)Rte_Read_VeSCCR_M_FrntAxlAdhMin_Value(&tmpRead_u);

    /* Product: '<S460>/Product3' incorporates:
     *  Constant: '<S484>/Calib'
     *  Inport: '<Root>/VeSCCR_M_FrntAxlAdhMin'
     */
    VeSTMC_M_FrntAxlAdhMin_Mtrbased = tmpRead_u / KeSTMR_k_P4BEV_FDR;
    (void)Rte_Read_VeSCCR_M_FrntAxlAdhMax_Value(&tmpRead_s);

    /* Product: '<S460>/Product1' incorporates:
     *  Constant: '<S484>/Calib'
     *  Inport: '<Root>/VeSCCR_M_FrntAxlAdhMax'
     */
    VeSTMC_M_FrntAxlAdhMax_Mtrbased = tmpRead_s / KeSTMR_k_P4BEV_FDR;
    (void)Rte_Read_VeSCCR_M_FrntAxlMinRqPrtctd_Value(&tmpRead_x);

    /* Product: '<S460>/Product10' incorporates:
     *  Constant: '<S484>/Calib'
     *  Inport: '<Root>/VeSCCR_M_FrntAxlMinRqPrtctd'
     */
    VeSTMC_M_FrntAxlMinRqPrtctd_MtrDomain = tmpRead_x / KeSTMR_k_P4BEV_FDR;
    (void)Rte_Read_VeSCCR_M_FrntAxlMaxRqPrtctd_Value(&tmpRead_w);

    /* Product: '<S460>/Product9' incorporates:
     *  Constant: '<S484>/Calib'
     *  Inport: '<Root>/VeSCCR_M_FrntAxlMaxRqPrtctd'
     */
    VeSTMC_M_FrntAxlMaxRqPrtctd_MtrDomain = tmpRead_w / KeSTMR_k_P4BEV_FDR;
    if (VeSTMI_b_Lv2VehInRev)
    {
        /* Switch: '<S460>/Switch6' */
        rtb_Switch6_f = VeSTMC_M_FrntAxlAdhMin_Mtrbased;

        /* Lookup_n-D: '<S488>/Vector' */
        rtb_Switch5_l = VeSTMC_M_FrntAxlMinRqPrtctd_MtrDomain;
    }
    else
    {
        /* Switch: '<S460>/Switch6' */
        rtb_Switch6_f = VeSTMC_M_FrntAxlAdhMax_Mtrbased;

        /* Lookup_n-D: '<S488>/Vector' */
        rtb_Switch5_l = VeSTMC_M_FrntAxlMaxRqPrtctd_MtrDomain;
    }

    if (rtb_Switch6_f < rtb_Switch5_l)
    {
        /* Switch: '<S494>/Switch' */
        rtb_Switch5_l = rtb_Switch6_f;
    }

    /* Logic: '<S460>/Logical11' */
    VeSTMC_b_FrontAxl_Max_BSMRq_R = ((VeSTMI_b_Lv2VehInRev) &&
        (VeSTMI_b_Lv2FrntAxlMinRq));

    /* Logic: '<S460>/Logical10' */
    VeSTMC_b_FrontAxl_Max_BSM_Arb = ((VeSTMI_b_Lv2FrntAxlMaxRq) ||
        (VeSTMC_b_FrontAxl_Max_BSMRq_R));
    if (VeSTMC_b_FrontAxl_Max_BSM_Arb)
    {
        /* Switch: '<S495>/Switch' incorporates:
         *  RelationalOperator: '<S495>/Comparison'
         */
        if (VeSTMC_M_FrontAxleRqBSM_MtrDomain < rtb_Switch5_l)
        {
            /* Switch: '<S460>/Switch26' */
            VeSTMC_M_FrntMaxLim_Raw = VeSTMC_M_FrontAxleRqBSM_MtrDomain;
        }
        else
        {
            /* Switch: '<S460>/Switch26' */
            VeSTMC_M_FrntMaxLim_Raw = rtb_Switch5_l;
        }

        /* End of Switch: '<S495>/Switch' */
    }
    else
    {
        /* Switch: '<S460>/Switch26' */
        VeSTMC_M_FrntMaxLim_Raw = rtb_Switch5_l;
    }

    /* Sum: '<S460>/Add' incorporates:
     *  Switch: '<S618>/Switch1'
     */
    VeSTMC_M_FrntMaxLim = look1_iflf_binlca_16a
        (VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxSTMR_M_FrntAxlOLMax_Margin[0])), ((const float32 *)
          &(KtSTMR_M_FrntAxlOLMax_Margin[0])), 15U) + VeSTMC_M_FrntMaxLim_Raw;

    /* Product: '<S460>/Product12' incorporates:
     *  Constant: '<S484>/Calib'
     */
    VeSTMC_M_RearAxleRqBSM_MtrDomain = VeSTMI_M_Lv2RrAxlRq / KeSTMR_k_P4BEV_FDR;
    (void)Rte_Read_VeSCCR_M_RrAxlAdhMin_Value(&tmpRead_v);

    /* Product: '<S460>/Product4' incorporates:
     *  Constant: '<S484>/Calib'
     *  Inport: '<Root>/VeSCCR_M_RrAxlAdhMin'
     */
    VeSTMC_M_RrAxlAdhMin_Mtrbased = tmpRead_v / KeSTMR_k_P4BEV_FDR;
    (void)Rte_Read_VeSCCR_M_RrAxlAdhMax_Value(&tmpRead_t);

    /* Product: '<S460>/Product2' incorporates:
     *  Constant: '<S484>/Calib'
     *  Inport: '<Root>/VeSCCR_M_RrAxlAdhMax'
     */
    VeSTMC_M_RrAxlAdhMax_Mtrbased = tmpRead_t / KeSTMR_k_P4BEV_FDR;
    if (VeSTMI_b_Lv2VehInRev)
    {
        /* Switch: '<S460>/Switch4' */
        VeSTMC_M_RrMaxLim_Raw = VeSTMC_M_RrAxlAdhMin_Mtrbased;
    }
    else
    {
        /* Switch: '<S460>/Switch4' */
        VeSTMC_M_RrMaxLim_Raw = VeSTMC_M_RrAxlAdhMax_Mtrbased;
    }

    /* Logic: '<S460>/Logical13' */
    VeSTMC_b_RearAxl_Max_BSMRq_R = ((VeSTMI_b_Lv2VehInRev) &&
        (VeSTMI_b_Lv2RrAxlMinRq));

    /* Logic: '<S460>/Logical12' */
    VeSTMC_b_RearAxl_Max_BSM_Arb = ((VeSTMI_b_Lv2RrAxlMaxRq) ||
        (VeSTMC_b_RearAxl_Max_BSMRq_R));
    if (VeSTMC_b_RearAxl_Max_BSM_Arb)
    {
        /* Switch: '<S496>/Switch' incorporates:
         *  RelationalOperator: '<S496>/Comparison'
         */
        if (VeSTMC_M_RearAxleRqBSM_MtrDomain < VeSTMC_M_RrMaxLim_Raw)
        {
            /* Switch: '<S460>/Switch25' */
            VeSTMC_M_RrMaxLim_Raw = VeSTMC_M_RearAxleRqBSM_MtrDomain;
        }

        /* End of Switch: '<S496>/Switch' */
    }

    /* Sum: '<S460>/Add1' incorporates:
     *  Switch: '<S618>/Switch1'
     */
    VeSTMC_M_RrMaxLim = look1_iflf_binlca_16a(VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc,
        ((const float32 *)&(KxSTMR_M_RrAxlOLMax_Margin[0])), ((const float32 *)
        &(KtSTMR_M_RrAxlOLMax_Margin[0])), 15U) + VeSTMC_M_RrMaxLim_Raw;
    if (VeSTMI_b_Lv2VehInRev)
    {
        /* Switch: '<S460>/Switch5' */
        rtb_Switch5_l = VeSTMC_M_FrntAxlAdhMax_Mtrbased;

        /* Switch: '<S460>/Switch6' */
        rtb_Switch6_f = VeSTMC_M_FrntAxlMaxRqPrtctd_MtrDomain;
    }
    else
    {
        /* Switch: '<S460>/Switch5' */
        rtb_Switch5_l = VeSTMC_M_FrntAxlAdhMin_Mtrbased;

        /* Switch: '<S460>/Switch6' */
        rtb_Switch6_f = VeSTMC_M_FrntAxlMinRqPrtctd_MtrDomain;
    }

    if (rtb_Switch5_l > rtb_Switch6_f)
    {
        /* Switch: '<S491>/Switch' */
        rtb_Switch6_f = rtb_Switch5_l;
    }

    /* Logic: '<S460>/Logical15' */
    VeSTMC_b_FrontAxl_Min_BSMRq_R = ((VeSTMI_b_Lv2VehInRev) &&
        (VeSTMI_b_Lv2FrntAxlMaxRq));

    /* Logic: '<S460>/Logical14' */
    VeSTMC_b_FrontAxl_Min_BSM_Arb = ((VeSTMI_b_Lv2FrntAxlMinRq) ||
        (VeSTMC_b_FrontAxl_Min_BSMRq_R));
    if (VeSTMC_b_FrontAxl_Min_BSM_Arb)
    {
        /* Switch: '<S492>/Switch' incorporates:
         *  RelationalOperator: '<S492>/Comparison'
         */
        if (VeSTMC_M_FrontAxleRqBSM_MtrDomain > rtb_Switch6_f)
        {
            /* Switch: '<S460>/Switch24' */
            VeSTMC_M_FrntMinLim_Raw = VeSTMC_M_FrontAxleRqBSM_MtrDomain;
        }
        else
        {
            /* Switch: '<S460>/Switch24' */
            VeSTMC_M_FrntMinLim_Raw = rtb_Switch6_f;
        }

        /* End of Switch: '<S492>/Switch' */
    }
    else
    {
        /* Switch: '<S460>/Switch24' */
        VeSTMC_M_FrntMinLim_Raw = rtb_Switch6_f;
    }

    /* Sum: '<S460>/Add2' incorporates:
     *  Switch: '<S618>/Switch1'
     */
    VeSTMC_M_FrntMinLim = look1_iflf_binlca_16a
        (VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxSTMR_M_FrntAxlOLMin_Margin[0])), ((const float32 *)
          &(KtSTMR_M_FrntAxlOLMin_Margin[0])), 15U) + VeSTMC_M_FrntMinLim_Raw;
    if (VeSTMI_b_Lv2VehInRev)
    {
        /* Switch: '<S460>/Switch7' */
        VeSTMC_M_RrMinLim_Raw = VeSTMC_M_RrAxlAdhMax_Mtrbased;
    }
    else
    {
        /* Switch: '<S460>/Switch7' */
        VeSTMC_M_RrMinLim_Raw = VeSTMC_M_RrAxlAdhMin_Mtrbased;
    }

    /* Logic: '<S460>/Logical17' */
    VeSTMC_b_RearAxl_Min_BSMRq_R = ((VeSTMI_b_Lv2VehInRev) &&
        (VeSTMI_b_Lv2RrAxlMaxRq));

    /* Logic: '<S460>/Logical16' */
    VeSTMC_b_RearAxl_Min_BSM_Arb = ((VeSTMI_b_Lv2RrAxlMinRq) ||
        (VeSTMC_b_RearAxl_Min_BSMRq_R));
    if (VeSTMC_b_RearAxl_Min_BSM_Arb)
    {
        /* Switch: '<S493>/Switch' incorporates:
         *  RelationalOperator: '<S493>/Comparison'
         */
        if (VeSTMC_M_RearAxleRqBSM_MtrDomain > VeSTMC_M_RrMinLim_Raw)
        {
            /* Switch: '<S460>/Switch23' */
            VeSTMC_M_RrMinLim_Raw = VeSTMC_M_RearAxleRqBSM_MtrDomain;
        }

        /* End of Switch: '<S493>/Switch' */
    }

    /* Sum: '<S460>/Add4' incorporates:
     *  Switch: '<S618>/Switch1'
     */
    VeSTMC_M_RrMinLim = look1_iflf_binlca_16a(VeSTMI_v_Lv2VehSpdFiltd4WhlTrqCalc,
        ((const float32 *)&(KxSTMR_M_RrAxlOLMin_Margin[0])), ((const float32 *)
        &(KtSTMR_M_RrAxlOLMin_Margin[0])), 15U) + VeSTMC_M_RrMinLim_Raw;

    /* Switch: '<S461>/Switch1' incorporates:
     *  Constant: '<S472>/Calib'
     *  RelationalOperator: '<S461>/GreaterThan'
     */
    if (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA >
            (VeSTMC_M_FrntMaxLim + KeSTMR_M_FrntAxlCLMaxLim_RSP))
    {
        /* Switch: '<S461>/Switch1' incorporates:
         *  Constant: '<S461>/ConstantValue'
         */
        VeSTMC_b_FrntMaxASR_Hys_FA = true;
    }
    else
    {
        /* Switch: '<S461>/Switch1' incorporates:
         *  Constant: '<S471>/Calib'
         *  RelationalOperator: '<S461>/GreaterThan1'
         *  Sum: '<S460>/Sum21'
         *  UnitDelay: '<S461>/UnitDelay'
         */
        VeSTMC_b_FrntMaxASR_Hys_FA =
            ((STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA >=
              (VeSTMC_M_FrntMaxLim - KeSTMR_M_FrntAxlCLMaxLim_LSP)) &&
             (VeSTMC_b_FrntMaxASR_Hys_FA));
    }

    /* End of Switch: '<S461>/Switch1' */

    /* Switch: '<S462>/Switch1' incorporates:
     *  Constant: '<S476>/Calib'
     *  RelationalOperator: '<S462>/Greater'
     */
    if (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB > (VeSTMC_M_RrMaxLim
            + KeSTMR_M_RrAxlCLMaxLim_RSP))
    {
        /* Switch: '<S462>/Switch1' incorporates:
         *  Constant: '<S462>/ConstantValue'
         */
        VeSTMC_b_RrMaxASR_Hys_FA = true;
    }
    else
    {
        /* Switch: '<S462>/Switch1' incorporates:
         *  Constant: '<S475>/Calib'
         *  RelationalOperator: '<S462>/GreaterThan'
         *  Sum: '<S460>/Sum17'
         *  UnitDelay: '<S462>/UnitDelay'
         */
        VeSTMC_b_RrMaxASR_Hys_FA =
            ((STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB >=
              (VeSTMC_M_RrMaxLim - KeSTMR_M_RrAxlCLMaxLim_LSP)) &&
             (VeSTMC_b_RrMaxASR_Hys_FA));
    }

    /* End of Switch: '<S462>/Switch1' */

    /* Switch: '<S463>/Switch1' incorporates:
     *  Constant: '<S463>/ConstantValue'
     *  Constant: '<S473>/Calib'
     *  Constant: '<S474>/Calib'
     *  RelationalOperator: '<S463>/GreaterThan'
     *  RelationalOperator: '<S463>/GreaterThan1'
     *  Sum: '<S460>/Sum23'
     *  UnitDelay: '<S463>/UnitDelay'
     */
    if (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA >
            (VeSTMC_M_FrntMinLim + KeSTMR_M_FrntAxlCLMinLim_RSP))
    {
        STMR_ac_DW.UnitDelay_DSTATE_a = true;
    }
    else
    {
        STMR_ac_DW.UnitDelay_DSTATE_a =
            ((STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrA >=
              (VeSTMC_M_FrntMinLim - KeSTMR_M_FrntAxlCLMinLim_LSP)) &&
             (STMR_ac_DW.UnitDelay_DSTATE_a));
    }

    /* End of Switch: '<S463>/Switch1' */

    /* Switch: '<S464>/Switch1' incorporates:
     *  Constant: '<S464>/ConstantValue'
     *  Constant: '<S477>/Calib'
     *  Constant: '<S478>/Calib'
     *  RelationalOperator: '<S464>/GreaterThan'
     *  RelationalOperator: '<S464>/GreaterThan1'
     *  Sum: '<S460>/Sum19'
     *  UnitDelay: '<S464>/UnitDelay'
     */
    if (STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB > (VeSTMC_M_RrMinLim
            + KeSTMR_M_RrAxlCLMinLim_RSP))
    {
        STMR_ac_DW.UnitDelay_DSTATE_nl = true;
    }
    else
    {
        STMR_ac_DW.UnitDelay_DSTATE_nl =
            ((STMR_ac_B.TmpSignalConversionAtVeHTDR_M_Lv2Lv1MtrB >=
              (VeSTMC_M_RrMinLim - KeSTMR_M_RrAxlCLMinLim_LSP)) &&
             (STMR_ac_DW.UnitDelay_DSTATE_nl));
    }

    /* End of Switch: '<S464>/Switch1' */
    if (VeSTMI_b_Lv2FrntAxlRq_FA)
    {
        /* Switch: '<S460>/Switch13' incorporates:
         *  Constant: '<S460>/FALSEConstant4'
         */
        VeSTMC_b_FrntMaxASR_FA = false;
    }
    else if (KeSTMR_b_OnlyCheckBSM_limit)
    {
        /* Switch: '<S460>/Switch12' incorporates:
         *  Switch: '<S460>/Switch11'
         *  Switch: '<S460>/Switch13'
         */
        VeSTMC_b_FrntMaxASR_FA = ((VeSTMI_b_Lv2FrntAxlMaxRq) &&
            (VeSTMC_b_FrntMaxASR_Hys_FA));
    }
    else
    {
        /* Switch: '<S460>/Switch13' incorporates:
         *  Switch: '<S460>/Switch12'
         */
        VeSTMC_b_FrntMaxASR_FA = VeSTMC_b_FrntMaxASR_Hys_FA;
    }

    if (VeSTMI_b_Lv2RrAxlRq_FA)
    {
        /* Switch: '<S460>/Switch14' incorporates:
         *  Constant: '<S460>/FALSEConstant1'
         */
        VeSTMC_b_RrMaxASR_FA = false;
    }
    else if (KeSTMR_b_OnlyCheckBSM_limit)
    {
        /* Switch: '<S460>/Switch15' incorporates:
         *  Switch: '<S460>/Switch14'
         *  Switch: '<S460>/Switch16'
         */
        VeSTMC_b_RrMaxASR_FA = ((VeSTMI_b_Lv2RrAxlMaxRq) &&
                                (VeSTMC_b_RrMaxASR_Hys_FA));
    }
    else
    {
        /* Switch: '<S460>/Switch14' incorporates:
         *  Switch: '<S460>/Switch15'
         */
        VeSTMC_b_RrMaxASR_FA = VeSTMC_b_RrMaxASR_Hys_FA;
    }

    if ((VeSTMC_b_FrntMaxASR_FA) || (VeSTMC_b_RrMaxASR_FA))
    {
        /* Sum: '<S489>/Inc_Cntr' incorporates:
         *  Constant: '<S466>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = (uint8)(((uint32)
            VeSTMC_Cnt_AxleASR_FA_deb) + ((uint32)KeSTMR_Cnt_AxleASRCntrInc));

        /* Switch: '<S489>/Switch1' incorporates:
         *  RelationalOperator: '<S489>/Relational_Operator'
         */
        if (rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca < VeSTMC_Cnt_AxleASR_FA_deb)
        {
            /* Switch: '<S489>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S489>/CounterMax'
             */
            rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = MAX_uint8_T;
        }

        /* End of Switch: '<S489>/Switch1' */
    }
    else
    {
        if (VeSTMC_Cnt_AxleASR_FA_deb <= KeSTMR_Cnt_AxleASRCntrDec)
        {
            /* MinMax: '<S489>/FixPtMinax' incorporates:
             *  Constant: '<S465>/Calib'
             */
            VeSTMC_Cnt_AxleASR_FA_deb = KeSTMR_Cnt_AxleASRCntrDec;
        }

        /* Switch: '<S489>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S465>/Calib'
         *  Sum: '<S489>/Dec_Cntr'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = (uint8)
            (VeSTMC_Cnt_AxleASR_FA_deb - KeSTMR_Cnt_AxleASRCntrDec);
    }

    rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE = ((VeSTMI_b_Lv2FrntAxlRq_FA) ||
        (VeSTMI_b_Lv2RrAxlRq_FA));

    /* Logic: '<S460>/Logical20' incorporates:
     *  Constant: '<S465>/Calib'
     *  Constant: '<S479>/Calib'
     *  Constant: '<S480>/Calib'
     *  Constant: '<S483>/Calib'
     *  MinMax: '<S489>/FixPtMinax'
     *  Switch: '<S460>/Switch12'
     *  Switch: '<S460>/Switch15'
     */
    VeSTMC_b_ResetASR_Debounce = (((((VeSTMI_b_Lv2KeyOff) ||
        (KeSTMR_b_DisblASRMntr)) || (VeSTMI_b_Lv1ResetDTC)) ||
        ((VeSTMC_b_ResetSTMRbyMSS) && (KeSTMR_b_DisblASRbyMSS))) ||
        rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE);

    /* RelationalOperator: '<S502>/Compare' incorporates:
     *  Constant: '<S502>/Constant'
     */
    rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb = (rtb_Compare_iy_tmp == 0U);

    /* Logic: '<S498>/AND' incorporates:
     *  Logic: '<S498>/OR1'
     *  UnitDelay: '<S498>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1 =
        ((!rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb) &&
         (STMR_ac_DW.UnitDelay_DSTATE_b1));

    /* Update for UnitDelay: '<S498>/Unit Delay' */
    STMR_ac_DW.UnitDelay_DSTATE_b1 = rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb;

    /* Logic: '<S489>/passDBCparam2' */
    VeSTMC_b_AxleASR_FA_deb_Rst = ((VeSTMC_b_ResetASR_Debounce) ||
        rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1);
    if (VeSTMC_b_AxleASR_FA_deb_Rst)
    {
        /* MinMax: '<S489>/FixPtMinax' incorporates:
         *  Constant: '<S489>/ResetZero'
         *  Switch: '<S489>/Switch2'
         */
        VeSTMC_Cnt_AxleASR_FA_deb = 0U;

        /* Switch: '<S489>/Switch3' incorporates:
         *  Constant: '<S489>/ResetZero1'
         */
        VeSTMC_b_AxleASR_FA_deb = false;
        VeSTMC_e_AxleASR_FA_deb_DBCsts = CeDFIB_e_Init;
    }
    else
    {
        /* MinMax: '<S489>/FixPtMinax' incorporates:
         *  Switch: '<S489>/Switch2'
         */
        VeSTMC_Cnt_AxleASR_FA_deb = rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca;

        /* Switch: '<S489>/Switch3' incorporates:
         *  Constant: '<S467>/Calib'
         *  Logic: '<S489>/Cntr_fail'
         *  RelationalOperator: '<S489>/Enough_counts_to_Fail'
         */
        VeSTMC_b_AxleASR_FA_deb = ((rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca >=
            KeSTMR_Cnt_AxleASRCntrLim) || (VeSTMC_b_AxleASR_FA_deb));

        /* Switch: '<S497>/Switch2' incorporates:
         *  Constant: '<S503>/Constant'
         *  RelationalOperator: '<S503>/Compare'
         *  Switch: '<S497>/Switch3'
         */
        if (VeSTMC_b_AxleASR_FA_deb)
        {
            /* Switch: '<S497>/Switch2' incorporates:
             *  Constant: '<S499>/Constant'
             */
            VeSTMC_e_AxleASR_FA_deb_DBCsts = CeDFIB_e_Fail;
        }
        else if (((sint32)VeSTMC_Cnt_AxleASR_FA_deb) == 0)
        {
            /* Switch: '<S497>/Switch3' incorporates:
             *  Constant: '<S501>/Constant'
             *  Switch: '<S497>/Switch2'
             */
            VeSTMC_e_AxleASR_FA_deb_DBCsts = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S497>/Switch2' */
            VeSTMC_e_AxleASR_FA_deb_DBCsts = STMR_ac_DW.UnitDelay_DSTATE_e;
        }

        /* End of Switch: '<S497>/Switch2' */
    }

    STMR_ac_DW.UnitDelay_DSTATE_e = (uint8)VeSTMC_e_AxleASR_FA_deb_DBCsts;

    /* Logic: '<S460>/Logical60' incorporates:
     *  Constant: '<S500>/Constant'
     *  Switch: '<S497>/Switch1'
     *  UnitDelay: '<S463>/UnitDelay'
     */
    VeSTMC_b_FrntMinMSR_Hys_FA = !STMR_ac_DW.UnitDelay_DSTATE_a;
    if (VeSTMI_b_Lv2FrntAxlRq_FA)
    {
        /* Switch: '<S460>/Switch17' incorporates:
         *  Constant: '<S460>/FALSEConstant2'
         */
        VeSTMC_b_FrntMaxMSR_FA = false;
    }
    else if (KeSTMR_b_OnlyCheckBSM_limit)
    {
        /* Switch: '<S460>/Switch19' incorporates:
         *  Switch: '<S460>/Switch17'
         *  Switch: '<S460>/Switch20'
         */
        VeSTMC_b_FrntMaxMSR_FA = ((VeSTMI_b_Lv2FrntAxlMinRq) &&
            (VeSTMC_b_FrntMinMSR_Hys_FA));
    }
    else
    {
        /* Switch: '<S460>/Switch17' incorporates:
         *  Switch: '<S460>/Switch19'
         */
        VeSTMC_b_FrntMaxMSR_FA = VeSTMC_b_FrntMinMSR_Hys_FA;
    }

    /* Logic: '<S460>/Logical59' incorporates:
     *  Constant: '<S483>/Calib'
     *  Switch: '<S460>/Switch19'
     *  UnitDelay: '<S464>/UnitDelay'
     */
    VeSTMC_b_RrMinMSR_Hys_FA = !STMR_ac_DW.UnitDelay_DSTATE_nl;
    if (VeSTMI_b_Lv2RrAxlRq_FA)
    {
        /* Switch: '<S460>/Switch27' incorporates:
         *  Constant: '<S460>/FALSEConstant3'
         */
        VeSTMC_b_RrMaxMSR_FA = false;
    }
    else if (KeSTMR_b_OnlyCheckBSM_limit)
    {
        /* Switch: '<S460>/Switch21' incorporates:
         *  Switch: '<S460>/Switch22'
         *  Switch: '<S460>/Switch27'
         */
        VeSTMC_b_RrMaxMSR_FA = ((VeSTMI_b_Lv2RrAxlMinRq) &&
                                (VeSTMC_b_RrMinMSR_Hys_FA));
    }
    else
    {
        /* Switch: '<S460>/Switch27' incorporates:
         *  Switch: '<S460>/Switch21'
         */
        VeSTMC_b_RrMaxMSR_FA = VeSTMC_b_RrMinMSR_Hys_FA;
    }

    if ((VeSTMC_b_FrntMaxMSR_FA) || (VeSTMC_b_RrMaxMSR_FA))
    {
        /* Sum: '<S490>/Inc_Cntr' incorporates:
         *  Constant: '<S469>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = (uint8)(((uint32)
            VeSTMC_Cnt_AxleMSR_FA_deb) + ((uint32)KeSTMR_Cnt_AxleMSRCntrInc));

        /* Switch: '<S490>/Switch1' incorporates:
         *  RelationalOperator: '<S490>/Relational_Operator'
         */
        if (rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca < VeSTMC_Cnt_AxleMSR_FA_deb)
        {
            /* Switch: '<S490>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S490>/CounterMax'
             */
            rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = MAX_uint8_T;
        }

        /* End of Switch: '<S490>/Switch1' */
    }
    else
    {
        if (VeSTMC_Cnt_AxleMSR_FA_deb <= KeSTMR_Cnt_AxleMSRCntrDec)
        {
            /* MinMax: '<S490>/FixPtMinax' incorporates:
             *  Constant: '<S468>/Calib'
             */
            VeSTMC_Cnt_AxleMSR_FA_deb = KeSTMR_Cnt_AxleMSRCntrDec;
        }

        /* Switch: '<S490>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S468>/Calib'
         *  Sum: '<S490>/Dec_Cntr'
         */
        rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca = (uint8)
            (VeSTMC_Cnt_AxleMSR_FA_deb - KeSTMR_Cnt_AxleMSRCntrDec);
    }

    /* Logic: '<S460>/Logical7' incorporates:
     *  Constant: '<S468>/Calib'
     *  Constant: '<S481>/Calib'
     *  Constant: '<S482>/Calib'
     *  Constant: '<S483>/Calib'
     *  MinMax: '<S490>/FixPtMinax'
     *  Switch: '<S460>/Switch21'
     */
    VeSTMC_b_ResetMSR_Debounce = (((((VeSTMI_b_Lv2KeyOff) ||
        (KeSTMR_b_DisblMSRMntr)) || (VeSTMI_b_Lv1ResetDTC)) ||
        ((VeSTMC_b_ResetSTMRbyMSS) && (KeSTMR_b_DisblMSRbyMSS))) ||
        rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE);

    /* RelationalOperator: '<S510>/Compare' incorporates:
     *  Constant: '<S510>/Constant'
     */
    rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE = (rtb_Compare_iy_tmp == 0U);

    /* Logic: '<S506>/AND' incorporates:
     *  Logic: '<S506>/OR1'
     *  UnitDelay: '<S506>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb =
        ((!rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE) &&
         (STMR_ac_DW.UnitDelay_DSTATE_d));

    /* Update for UnitDelay: '<S506>/Unit Delay' */
    STMR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE;

    /* Logic: '<S490>/passDBCparam2' */
    VeSTMC_b_AxleMSR_FA_deb_Rst = ((VeSTMC_b_ResetMSR_Debounce) ||
        rtb_TmpSignalConversionAtVeDTMR_b_Lv2Dsb);
    if (VeSTMC_b_AxleMSR_FA_deb_Rst)
    {
        /* MinMax: '<S490>/FixPtMinax' incorporates:
         *  Constant: '<S490>/ResetZero'
         *  Switch: '<S490>/Switch2'
         */
        VeSTMC_Cnt_AxleMSR_FA_deb = 0U;

        /* Switch: '<S490>/Switch3' incorporates:
         *  Constant: '<S490>/ResetZero1'
         */
        VeSTMC_b_AxleMSR_FA_deb = false;
        VeSTMC_e_AxleMSR_FA_deb_DBCsts = CeDFIB_e_Init;
    }
    else
    {
        /* MinMax: '<S490>/FixPtMinax' incorporates:
         *  Switch: '<S490>/Switch2'
         */
        VeSTMC_Cnt_AxleMSR_FA_deb = rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca;

        /* Switch: '<S490>/Switch3' incorporates:
         *  Constant: '<S470>/Calib'
         *  Logic: '<S490>/Cntr_fail'
         *  RelationalOperator: '<S490>/Enough_counts_to_Fail'
         */
        VeSTMC_b_AxleMSR_FA_deb = ((rtb_TmpSignalConversionAtVeSCMR_e_Lv2Tca >=
            KeSTMR_Cnt_AxleMSRCntrLim) || (VeSTMC_b_AxleMSR_FA_deb));

        /* Switch: '<S505>/Switch2' incorporates:
         *  Constant: '<S511>/Constant'
         *  RelationalOperator: '<S511>/Compare'
         *  Switch: '<S505>/Switch3'
         */
        if (VeSTMC_b_AxleMSR_FA_deb)
        {
            /* Switch: '<S505>/Switch2' incorporates:
             *  Constant: '<S507>/Constant'
             */
            VeSTMC_e_AxleMSR_FA_deb_DBCsts = CeDFIB_e_Fail;
        }
        else if (((sint32)VeSTMC_Cnt_AxleMSR_FA_deb) == 0)
        {
            /* Switch: '<S505>/Switch3' incorporates:
             *  Constant: '<S509>/Constant'
             *  Switch: '<S505>/Switch2'
             */
            VeSTMC_e_AxleMSR_FA_deb_DBCsts = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S505>/Switch2' */
            VeSTMC_e_AxleMSR_FA_deb_DBCsts = STMR_ac_DW.UnitDelay_DSTATE_iq;
        }

        /* End of Switch: '<S505>/Switch2' */
    }

    STMR_ac_DW.UnitDelay_DSTATE_iq = (uint8)VeSTMC_e_AxleMSR_FA_deb_DBCsts;

    /* VariantMerge generated from: '<S15>/Variant Source' incorporates:
     *  Constant: '<S508>/Constant'
     *  Switch: '<S505>/Switch1'
     */
    STMR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
        ((VeSTMC_b_AxleASR_FA_deb) || (VeSTMC_b_AxleMSR_FA_deb));

    /* End of Outputs for SubSystem: '<S460>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S460>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S460>/Hysteresis2' */
    /* End of Outputs for SubSystem: '<S460>/Hysteresis3' */
    /* End of Outputs for SubSystem: '<S489>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S490>/EdgeFalling' */
#elif Rte_SysCon_Variant_STMR_FUNC_1

    /* VariantMerge generated from: '<S15>/Variant Source' incorporates:
     *  Constant: '<S15>/FALSEConstant'
     *  SignalConversion generated from: '<S15>/Variant Source'
     */
    STMR_ac_B.VariantMerge_For_Variant_Source_Variant_ = false;

#endif

    /* End of Lookup_n-D: '<S485>/Vector' */

    /* SignalConversion generated from: '<S15>/Variant Source' */
#if Rte_SysCon_Variant_STMR_FUNC_2

    /* VariantMerge generated from: '<S15>/Variant Source' incorporates:
     *  Constant: '<S15>/FALSEConstant1'
     */
    STMR_ac_B.VariantMerge_For_Variant_Source_Variant_ = false;

#endif

    /* End of SignalConversion generated from: '<S15>/Variant Source' */

    /* SignalConversion generated from: '<S15>/Variant Source' */
#if Rte_SysCon_Variant_STMR_FUNC_3

    /* VariantMerge generated from: '<S15>/Variant Source' incorporates:
     *  Constant: '<S15>/FALSEConstant2'
     */
    STMR_ac_B.VariantMerge_For_Variant_Source_Variant_ = false;

#endif

    /* End of SignalConversion generated from: '<S15>/Variant Source' */

    /* SignalConversion generated from: '<S15>/Variant Source' incorporates:
     *  UnitDelay: '<S165>/UnitDelay1'
     *  UnitDelay: '<S165>/UnitDelay2'
     *  UnitDelay: '<S166>/UnitDelay2'
     *  UnitDelay: '<S168>/UnitDelay2'
     *  UnitDelay: '<S185>/UnitDelay2'
     *  UnitDelay: '<S192>/UnitDelay1'
     *  UnitDelay: '<S193>/UnitDelay'
     *  UnitDelay: '<S193>/UnitDelay1'
     *  UnitDelay: '<S193>/UnitDelay2'
     *  UnitDelay: '<S197>/UnitDelay'
     *  UnitDelay: '<S197>/UnitDelay1'
     *  UnitDelay: '<S197>/UnitDelay2'
     *  UnitDelay: '<S343>/UnitDelay1'
     *  UnitDelay: '<S343>/UnitDelay2'
     */
#if Rte_SysCon_Variant_STMR_FUNC_4

    /* VariantMerge generated from: '<S15>/Variant Source' incorporates:
     *  Constant: '<S15>/FALSEConstant3'
     */
    STMR_ac_B.VariantMerge_For_Variant_Source_Variant_ = false;
    STMR_ac_DW.VeSTMC_r_TTR_Prev = VeSTMC_M_DrvDmndMax_NoUnder;
    STMR_ac_DW.VeSTMC_r_TTR_Prev_i = VeSTMC_M_DrvDmndMin_P1P2;
    STMR_ac_DW.VeSTMC_b_Reset_Integrator_Prev = VeSTMC_b_RstMainIntegral;
    STMR_ac_DW.UnitDelay2_DSTATE_i = rtb_TmpSignalConversionAtVeSCMR_e_Lv2Gea;
    STMR_ac_DW.UnitDelay2_DSTATE_l = VeSTMC_b_ShiftInProg2;
    STMR_ac_DW.VeSTMC_M_Error_Max_Arb_Prev = VeSTMC_M_ErrorMaxArb;
    STMR_ac_DW.VeSTMC_M_Error_Min_Arb_Prev = VeSTMC_M_ErrorMinArb;
    STMR_ac_DW.UnitDelay_DSTATE = VeSTMC_M_NetTransTrqCmnd_Arb;
    STMR_ac_DW.UnitDelay1_DSTATE = rtb_UnitDelay_ix;
    STMR_ac_DW.UnitDelay2_DSTATE = rtb_UnitDelay1_j1;
    STMR_ac_DW.UnitDelay_DSTATE_i = VeSTMI_n_Lv2MtrBSpd;
    STMR_ac_DW.UnitDelay1_DSTATE_d = rtb_UnitDelay_hs;
    STMR_ac_DW.UnitDelay2_DSTATE_c = rtb_UnitDelay1_mw;
    STMR_ac_DW.UnitDelay1_DSTATE_pp = VeSTMC_b_IdleSpdErrMntrl_final;

#endif

    /* End of SignalConversion generated from: '<S15>/Variant Source' */

    /* Update for UnitDelay: '<S111>/UnitDelay7' */
    STMR_ac_DW.VeSTMC_Cnt_MaxLimFailingDlyd_Prev = rtb_AND;

    /* Update for UnitDelay: '<S135>/UnitDelay' incorporates:
     *  UnitDelay: '<S114>/UnitDelay5'
     *  UnitDelay: '<S124>/UnitDelay1'
     *  UnitDelay: '<S132>/UnitDelay1'
     *  UnitDelay: '<S133>/UnitDelay3'
     *  UnitDelay: '<S136>/UnitDelay'
     *  UnitDelay: '<S159>/UnitDelay1'
     *  UnitDelay: '<S160>/UnitDelay3'
     *  UnitDelay: '<S162>/UnitDelay'
     *  UnitDelay: '<S163>/UnitDelay'
     */
#if !Rte_SysCon_Variant_STMR_FUNC_4

    STMR_ac_DW.VeSTMC_b_LtchPCntr_EdgRising_prev =
        rtb_TmpSignalConversionAtVeSCMR_b_Torque;
    STMR_ac_DW.VeSTMC_b_ResumeCntrPrevVal = rtb_VeSTMC_b_ResumeMCntr;
    STMR_ac_DW.VeSTMC_b_ResumeEdgRising_prev = rtb_UnitDelay3_p;
    STMR_ac_DW.VeSTMC_b_OutTrq_MaxLimFail_Ltch_prev =
        VeSTMC_b_OutTrqMaxFail_final;
    STMR_ac_DW.VeSTMC_b_TorqSumFault_Distbased_Latch_pr =
        VeSTMC_b_OutTrqMaxFailDist_final;
    STMR_ac_DW.VeSTMC_b_TorqSumFault_Distbased_Latch__f =
        VeSTMC_b_OutTrqMaxFailDist_final;
    STMR_ac_DW.VeSTMC_b_Min_LtchPCntr_EdgRising_prev = rtb_AND_ow;
    STMR_ac_DW.VeSTMC_b_MinResumeCntrPrevVal = rtb_VeSTMC_b_Min_ResumeMCntr;
    STMR_ac_DW.VeSTMC_b_Min_ResumeEdgRising_prev = rtb_UnitDelay3_j;
    STMR_ac_DW.VeSTMC_b_OutTrq_MinLimFail_Ltch_prev =
        VeSTMC_b_OutTrqMinFail_final;

#endif

    /* End of Update for UnitDelay: '<S135>/UnitDelay' */

    /* Update for UnitDelay: '<S111>/UnitDelay8' */
    STMR_ac_DW.VeSTMC_Cnt_MinLimFailingDlyd_Prev =
        rtb_VariantMerge_For_Variant_Source_V__0;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeDTMR_M_Lv2AccelPdlWhlTrq' */
    (void)Rte_Read_VeDTMR_M_Lv2AccelPdlWhlTrq_Value(&tmpRead_l);

    /* Inport: '<Root>/VeDTMR_M_Lv2NormalMinTrqRaw' */
    (void)Rte_Read_VeDTMR_M_Lv2NormalMinTrqRaw_Value(&tmpRead_k);

    /* Inport: '<Root>/VeDTMR_Pct_Lv2AccelPdlPosRaw' */
    (void)Rte_Read_VeDTMR_Pct_Lv2AccelPdlPosRaw_Value(&tmpRead_j);

    /* Inport: '<Root>/VeDTMR_M_Lv2PtcWhlCcTrqReqRaw' */
    (void)Rte_Read_VeDTMR_M_Lv2PtcWhlCcTrqReqRaw_Value(&tmpRead_i);

    /* Inport: '<Root>/VeDTMR_e_Lv2DrvMdRaw' */
    (void)Rte_Read_VeDTMR_e_Lv2DrvMdRaw_Value(&tmpRead_h);

    /* Inport: '<Root>/VeDTMR_e_BrkPdlStat' */
    (void)Rte_Read_VeDTMR_e_BrkPdlStat_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/STMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMC'
     */
    /* Update for UnitDelay: '<S232>/UnitDelay' */
    STMR_ac_DW.VeSTMC_b_RdPerfEdgeRising_MaxLim_prev =
        VeSTMC_b_Lv2MaxLimFail_RedPerf;

    /* Update for UnitDelay: '<S233>/UnitDelay' */
    STMR_ac_DW.VeSTMC_b_RdPerfEdgeRising_MinLim_prev =
        VeSTMC_b_Lv2MinLimFail_RedPerf;

    /* Update for UnitDelay: '<S245>/UnitDelay' */
    STMR_ac_DW.VeSTMC_M_TransTrqCmndArb_Prev = VeSTMC_M_NetTransTrqCmnd_Arb;

    /* Update for UnitDelay: '<S249>/UnitDelay' */
    STMR_ac_DW.VeSTMC_v_CCSetSpeedPrev = VeSTMC_v_Lv2SetSpeed4TrqEst_Mph;

    /* Update for UnitDelay: '<S273>/UnitDelay' */
    STMR_ac_DW.VeSTMC_b_CCSetSpdChng_FE_prev = VeSTMC_b_CCSetSpdChngDtctd;

    /* Update for UnitDelay: '<S284>/UnitDelay2' */
    STMR_ac_DW.VeSTMC_M_TrqCmndAccuValPrev = VeSTMC_M_MtrATrqCmndAccuVal;

    /* Update for UnitDelay: '<S300>/UnitDelay' incorporates:
     *  Constant: '<S284>/TRUEConstant1'
     */
    STMR_ac_DW.VeSTMC_b_CbTrueER_prev = true;

    /* Update for UnitDelay: '<S284>/UnitDelay3' */
    STMR_ac_DW.VeSTMC_M_MtrATrqCmndAvgPrev = STMR_ac_B.Switch1;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMD'
     */
    /* If: '<S513>/Determine_P061B_Status' incorporates:
     *  Logic: '<S513>/Logical3'
     *  UnitDelay: '<S243>/UnitDelay1'
     *  UnitDelay: '<S244>/Unit Delay1'
     */
    if (VeSTMC_b_ResetP061BTrqDTC)
    {
        /* Outputs for IfAction SubSystem: '<S513>/Event_CM_TorqCalcPerf_ReportTestInit' incorporates:
         *  ActionPort: '<S515>/ActionPort'
         */
        /* DataStoreWrite: '<S515>/VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf' incorporates:
         *  Constant: '<S524>/Constant'
         */
        STMR_ac_DW.VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S513>/Event_CM_TorqCalcPerf_ReportTestInit' */
    }
    else if (((STMR_ac_DW.VeSTMC_b_SetDTCTrqCmndFlt_prev) ||
              (STMR_ac_B.VariantMerge_For_Variant_Source_Variant_)) ||
             (STMR_ac_DW.VeSTMC_b_TrqCmndFlt_prev_j))
    {
        /* Outputs for IfAction SubSystem: '<S513>/Event_CM_TorqCalcPerf_ReportTestFailed' incorporates:
         *  ActionPort: '<S514>/ActionPort'
         */
        /* DataStoreWrite: '<S514>/VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf' incorporates:
         *  Constant: '<S523>/Constant'
         */
        STMR_ac_DW.VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S513>/Event_CM_TorqCalcPerf_ReportTestFailed' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S513>/Event_CM_TorqCalcPerf_ReportTestPassed' incorporates:
         *  ActionPort: '<S516>/ActionPort'
         */
        /* DataStoreWrite: '<S516>/VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf' incorporates:
         *  Constant: '<S525>/Constant'
         */
        STMR_ac_DW.VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf = CeDFIB_e_Pass;

        /* End of Outputs for SubSystem: '<S513>/Event_CM_TorqCalcPerf_ReportTestPassed' */
    }

    /* End of If: '<S513>/Determine_P061B_Status' */

    /* If: '<S513>/Determine_P061A_Status' incorporates:
     *  Constant: '<S520>/Constant'
     *  Constant: '<S521>/Constant'
     *  Constant: '<S522>/Constant'
     *  RelationalOperator: '<S520>/Compare'
     *  RelationalOperator: '<S521>/Compare'
     *  RelationalOperator: '<S522>/Compare'
     */
    if (((uint32)VeSTMC_e_RgnEstMntrFlt_DBCsts) == CeDFIB_e_Init)
    {
        /* Outputs for IfAction SubSystem: '<S513>/Event_CM_TorqPerf_ReportTestInit' incorporates:
         *  ActionPort: '<S518>/ActionPort'
         */
        /* DataStoreWrite: '<S518>/VeSTMR_P44_e_FaultSts_CM_TorqPerf' incorporates:
         *  Constant: '<S527>/Constant'
         */
        STMR_ac_DW.VeSTMR_P44_e_FaultSts_CM_TorqPerf = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S513>/Event_CM_TorqPerf_ReportTestInit' */
    }
    else if (((uint32)VeSTMC_e_RgnEstMntrFlt_DBCsts) == CeDFIB_e_Fail)
    {
        /* Outputs for IfAction SubSystem: '<S513>/Event_CM_TorqPerf_ReportTestFailed' incorporates:
         *  ActionPort: '<S517>/ActionPort'
         */
        /* DataStoreWrite: '<S517>/VeSTMR_P44_e_FaultSts_CM_TorqPerf' incorporates:
         *  Constant: '<S526>/Constant'
         */
        STMR_ac_DW.VeSTMR_P44_e_FaultSts_CM_TorqPerf = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S513>/Event_CM_TorqPerf_ReportTestFailed' */
    }
    else
    {
        if (((uint32)VeSTMC_e_RgnEstMntrFlt_DBCsts) == CeDFIB_e_Pass)
        {
            /* Outputs for IfAction SubSystem: '<S513>/Event_CM_TorqPerf_ReportTestPassed' incorporates:
             *  ActionPort: '<S519>/ActionPort'
             */
            /* DataStoreWrite: '<S519>/VeSTMR_P44_e_FaultSts_CM_TorqPerf' incorporates:
             *  Constant: '<S528>/Constant'
             */
            STMR_ac_DW.VeSTMR_P44_e_FaultSts_CM_TorqPerf = CeDFIB_e_Pass;

            /* End of Outputs for SubSystem: '<S513>/Event_CM_TorqPerf_ReportTestPassed' */
        }
    }

    /* End of If: '<S513>/Determine_P061A_Status' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMO'
     */
    /* Outport: '<Root>/VeSTMR_e_BrkPdlStat' incorporates:
     *  DataTypeConversion: '<S627>/DataTypeConversion'
     *  Inport: '<Root>/VeDTMR_e_BrkPdlStat'
     *  SignalConversion generated from: '<S1>/Lv2BrkPdlStat'
     */
    (void)Rte_Write_VeSTMR_e_BrkPdlStat_Value(tmpRead_g);

    /* Outport: '<Root>/VeSTMR_e_RdPrfmMd_MinMax' incorporates:
     *  DataTypeConversion: '<S629>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/Lv2RdPrfmMd_MinMax'
     *  Switch: '<S218>/Switch7'
     */
    (void)Rte_Write_VeSTMR_e_RdPrfmMd_MinMax_Value(VeSTMC_e_Lv2RdPerfMinMax);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTMR_M_Lv2STMR_ReducedPrfmTrq' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2STMR_ReducedPrfmTrq'
     */
    (void)Rte_Write_VeSTMR_M_Lv2STMR_ReducedPrfmTrq_Value
        (rtb_TmpSignalConversionAtVeDTMR_M_Lv2Axl);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMC'
     */
    /* Outport: '<Root>/VeSTMR_b_Lv2STMR_ReducedPerfMode' incorporates:
     *  Logic: '<S220>/AND'
     *  SignalConversion generated from: '<S1>/Lv2STMR_ReduecedPerfMode'
     */
    (void)Rte_Write_VeSTMR_b_Lv2STMR_ReducedPerfMode_Value
        (VeSTMC_b_Lv2ReducedPerfMode_MtrTrqChk);

    /* Outport: '<Root>/VeSTMR_b_Lv2CruiseTrqChkFailed' incorporates:
     *  Logic: '<S248>/AND'
     *  SignalConversion generated from: '<S1>/Lv2_CruiseTrqChkFailed'
     */
    (void)Rte_Write_VeSTMR_b_Lv2CruiseTrqChkFailed_Value(VeSTMC_b_CC_TrqChk_Fail);

    /* Outport: '<Root>/VeSTMR_b_Lv2ReducedPerfMode' incorporates:
     *  Logic: '<S218>/Logical2'
     *  Logic: '<S220>/AND'
     *  SignalConversion generated from: '<S1>/Lv2_ReducedPerfMode'
     */
    (void)Rte_Write_VeSTMR_b_Lv2ReducedPerfMode_Value
        ((VeSTMC_b_Lv2ReducedPerfMode_MtrTrqChk) ||
         rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea);

    /* Switch: '<S218>/Switch2' */
    if (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Gea)
    {
        /* Outport: '<Root>/VeSTMR_M_Lv2ReducedPrfmTrq' incorporates:
         *  SignalConversion generated from: '<S1>/Lv2_ReducedPrfmTrq'
         */
        (void)Rte_Write_VeSTMR_M_Lv2ReducedPrfmTrq_Value(tmpRead_n);
    }
    else
    {
        /* Outport: '<Root>/VeSTMR_M_Lv2ReducedPrfmTrq' incorporates:
         *  SignalConversion generated from: '<S1>/Lv2_ReducedPrfmTrq'
         */
        (void)Rte_Write_VeSTMR_M_Lv2ReducedPrfmTrq_Value
            (rtb_TmpSignalConversionAtVeDTMR_M_Lv2Axl);
    }

    /* End of Switch: '<S218>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTMR_b_RgnEstMntrFlt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RgnEstMntrFlt'
     *  UnitDelay: '<S439>/UnitDelay1'
     */
    (void)Rte_Write_VeSTMR_b_RgnEstMntrFlt_Value(STMR_ac_DW.UnitDelay1_DSTATE_c);

    /* Outport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_TransOutTrqCmdFlt'
     *  UnitDelay: '<S242>/UnitDelay1'
     */
    (void)Rte_Write_VeSTMR_b_TransOutTrqCmdFlt_Value
        (STMR_ac_DW.VeSTMC_b_TrqCmndFlt_prev);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMO'
     */
    /* Outport: '<Root>/VeSTMR_M_Lv2AccelPdlWhlTrq' incorporates:
     *  Gain: '<S633>/Gain'
     *  SignalConversion generated from: '<S1>/VeSTMR_M_Lv2AccelPdlWhlTrq'
     */
    (void)Rte_Write_VeSTMR_M_Lv2AccelPdlWhlTrq_Value(tmpRead_l);

    /* Outport: '<Root>/VeSTMR_M_Lv2NormalMinTrq' incorporates:
     *  Gain: '<S632>/Gain'
     *  SignalConversion generated from: '<S1>/VeSTMR_M_Lv2NormalMinTrq'
     */
    (void)Rte_Write_VeSTMR_M_Lv2NormalMinTrq_Value(tmpRead_k);

    /* Outport: '<Root>/VeSTMR_M_Lv2PtcWhlCcTrqReq' incorporates:
     *  Gain: '<S630>/Gain'
     *  SignalConversion generated from: '<S1>/VeSTMR_M_Lv2PtcWhlCcTrqReq'
     */
    (void)Rte_Write_VeSTMR_M_Lv2PtcWhlCcTrqReq_Value(tmpRead_i);

    /* Outport: '<Root>/VeSTMR_Pct_Lv2AccelPdlPos' incorporates:
     *  Gain: '<S631>/Gain'
     *  SignalConversion generated from: '<S1>/VeSTMR_Pct_Lv2AccelPdlPos'
     */
    (void)Rte_Write_VeSTMR_Pct_Lv2AccelPdlPos_Value(tmpRead_j);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt_PN' incorporates:
     *  SignalConversion generated from: '<S1>/VeSTMR_b_TransOutTrqCmdFlt_PN'
     *  UnitDelay: '<S244>/Unit Delay1'
     */
    (void)Rte_Write_VeSTMR_b_TransOutTrqCmdFlt_PN_Value
        (STMR_ac_DW.VeSTMC_b_TrqCmndFlt_prev_j);

    /* Outport: '<Root>/VeSTMR_b_TrqSplit_OS_US' incorporates:
     *  SignalConversion generated from: '<S1>/VeSTMR_b_TrqSplit_OS_US'
     */
    (void)Rte_Write_VeSTMR_b_TrqSplit_OS_US_Value
        (STMR_ac_B.VariantMerge_For_Variant_Source_Variant_);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STMO'
     */
    /* Outport: '<Root>/VeSTMR_e_Lv2DrvMd' incorporates:
     *  DataTypeConversion: '<S628>/DataTypeConversion'
     *  Inport: '<Root>/VeDTMR_e_Lv2DrvMdRaw'
     *  SignalConversion generated from: '<S1>/VeSTMR_e_Lv2DrvMd'
     */
    (void)Rte_Write_VeSTMR_e_Lv2DrvMd_Value(tmpRead_h);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTMR_e_FaultSts_CM_TorqCalcPerf' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf'
     */
    (void)Rte_Write_VeSTMR_e_FaultSts_CM_TorqCalcPerf_Value
        (STMR_ac_DW.VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf);

    /* Outport: '<Root>/VeSTMR_e_FaultSts_CM_TorqPerf' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeSTMR_P44_e_FaultSts_CM_TorqPerf'
     */
    (void)Rte_Write_VeSTMR_e_FaultSts_CM_TorqPerf_Value
        (STMR_ac_DW.VeSTMR_P44_e_FaultSts_CM_TorqPerf);

    /* Outputs for Atomic SubSystem: '<S1>/STMR_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S8>/STMR_FastTEF_StopCheckpoint' */
    Rte_Call_STMR_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/STMR_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, STMR_CODE) STMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/STMR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S634>/VeSTMR_e_Lv2DrvMd_Out_Init' incorporates:
     *  Constant: '<S634>/Const1'
     */
    STMR_ac_B.OutportBufferForVeSTMR_e_Lv2DrvMd_Out_In = STMR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S634>/VeSTMR_M_Lv2PtcWhlCcTrqReq_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_M_Lv2PtcWhlCcTrqR = 0.0F;

    /* SignalConversion generated from: '<S634>/VeSTMR_Pct_Lv2AccelPdlPos_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_Pct_Lv2AccelPdlPo = 0.0F;

    /* SignalConversion generated from: '<S634>/VeSTMR_M_Lv2NormalMinTrq_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_M_Lv2NormalMinTrq = 0.0F;

    /* SignalConversion generated from: '<S634>/VeSTMR_M_Lv2AccelPdlWhlTrq_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_M_Lv2AccelPdlWhlT = 0.0F;

    /* SignalConversion generated from: '<S634>/VeSTMR_b_Lv2CruiseTrqChkFailed_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_b_Lv2CruiseTrqChk = false;

    /* SignalConversion generated from: '<S634>/VeSTMR_b_Lv2ReducedPerfMode_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_b_Lv2ReducedPerfM = false;

    /* SignalConversion generated from: '<S634>/VeSTMR_M_Lv2ReducedPrfmTrq_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_M_Lv2ReducedPrfmT = 0.0F;

    /* SignalConversion generated from: '<S634>/VeSTMR_b_TransOutTrqCmdFlt_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_b_TransOutTrqCmdF = false;

    /* SignalConversion generated from: '<S634>/VeSTMR_b_RgnEstMntrFlt_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_b_RgnEstMntrFlt_O = false;

    /* SignalConversion generated from: '<S634>/VeSTMR_e_BrkPdlStat_Out_Init' incorporates:
     *  Constant: '<S634>/Const11'
     */
    STMR_ac_B.OutportBufferForVeSTMR_e_BrkPdlStat_Out_ = STMR_ac_ConstB.Const11;

    /* SignalConversion generated from: '<S634>/VeSTMR_e_RdPrfmMd_MinMax_Out_Init' incorporates:
     *  Constant: '<S634>/Const12'
     */
    STMR_ac_B.OutportBufferForVeSTMR_e_RdPrfmMd_MinMax = STMR_ac_ConstB.Const12;

    /* SignalConversion generated from: '<S634>/VeSTMR_b_TrqSplit_OS_US_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_b_TrqSplit_OS_US_ = false;

    /* SignalConversion generated from: '<S634>/VeSTMR_b_Lv2STMR_ReducedPerfMode_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_b_Lv2STMR_Reduced = false;

    /* SignalConversion generated from: '<S634>/VeSTMR_M_Lv2STMR_ReducedPrfmTrq_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_M_Lv2STMR_Reduced = 0.0F;

    /* SignalConversion generated from: '<S634>/VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf' incorporates:
     *  Constant: '<S636>/Constant'
     */
    STMR_ac_B.OutportBufferForVeSTMR_P44_e_FaultSts_CM = STMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S634>/VeSTMR_P44_e_FaultSts_CM_TorqPerf' incorporates:
     *  Constant: '<S635>/Constant'
     */
    STMR_ac_B.OutportBufferForVeSTMR_P44_e_FaultSts__n =
        STMR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S634>/VeSTMR_b_TransOutTrqCmdFlt_PN_Out_Init' */
    STMR_ac_B.OutportBufferForVeSTMR_b_TransOutTrqCm_l = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSTMR_e_FaultSts_CM_TorqCalcPerf' incorporates:
     *  SignalConversion generated from: '<S2>/R_VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf'
     *  SignalConversion generated from: '<S634>/VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf'
     */
    (void)Rte_Write_VeSTMR_e_FaultSts_CM_TorqCalcPerf_Value
        (STMR_ac_B.OutportBufferForVeSTMR_P44_e_FaultSts_CM);

    /* Outport: '<Root>/VeSTMR_e_FaultSts_CM_TorqPerf' incorporates:
     *  SignalConversion generated from: '<S2>/R_VeSTMR_P44_e_FaultSts_CM_TorqPerf'
     *  SignalConversion generated from: '<S634>/VeSTMR_P44_e_FaultSts_CM_TorqPerf'
     */
    (void)Rte_Write_VeSTMR_e_FaultSts_CM_TorqPerf_Value
        (STMR_ac_B.OutportBufferForVeSTMR_P44_e_FaultSts__n);

    /* Outport: '<Root>/VeSTMR_M_Lv2AccelPdlWhlTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_M_Lv2AccelPdlWhlTrq_Out_Init'
     */
    (void)Rte_Write_VeSTMR_M_Lv2AccelPdlWhlTrq_Value
        (STMR_ac_B.OutportBufferForVeSTMR_M_Lv2AccelPdlWhlT);

    /* Outport: '<Root>/VeSTMR_M_Lv2NormalMinTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_M_Lv2NormalMinTrq_Out_Init'
     */
    (void)Rte_Write_VeSTMR_M_Lv2NormalMinTrq_Value
        (STMR_ac_B.OutportBufferForVeSTMR_M_Lv2NormalMinTrq);

    /* Outport: '<Root>/VeSTMR_M_Lv2PtcWhlCcTrqReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_M_Lv2PtcWhlCcTrqReq_Out_Init'
     */
    (void)Rte_Write_VeSTMR_M_Lv2PtcWhlCcTrqReq_Value
        (STMR_ac_B.OutportBufferForVeSTMR_M_Lv2PtcWhlCcTrqR);

    /* Outport: '<Root>/VeSTMR_M_Lv2ReducedPrfmTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_M_Lv2ReducedPrfmTrq_Out_Init'
     */
    (void)Rte_Write_VeSTMR_M_Lv2ReducedPrfmTrq_Value
        (STMR_ac_B.OutportBufferForVeSTMR_M_Lv2ReducedPrfmT);

    /* Outport: '<Root>/VeSTMR_M_Lv2STMR_ReducedPrfmTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_M_Lv2STMR_ReducedPrfmTrq_Out_Init'
     */
    (void)Rte_Write_VeSTMR_M_Lv2STMR_ReducedPrfmTrq_Value
        (STMR_ac_B.OutportBufferForVeSTMR_M_Lv2STMR_Reduced);

    /* Outport: '<Root>/VeSTMR_Pct_Lv2AccelPdlPos' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_Pct_Lv2AccelPdlPos_Out_Init'
     */
    (void)Rte_Write_VeSTMR_Pct_Lv2AccelPdlPos_Value
        (STMR_ac_B.OutportBufferForVeSTMR_Pct_Lv2AccelPdlPo);

    /* Outport: '<Root>/VeSTMR_b_Lv2CruiseTrqChkFailed' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_b_Lv2CruiseTrqChkFailed_Out_Init'
     */
    (void)Rte_Write_VeSTMR_b_Lv2CruiseTrqChkFailed_Value
        (STMR_ac_B.OutportBufferForVeSTMR_b_Lv2CruiseTrqChk);

    /* Outport: '<Root>/VeSTMR_b_Lv2ReducedPerfMode' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_b_Lv2ReducedPerfMode_Out_Init'
     */
    (void)Rte_Write_VeSTMR_b_Lv2ReducedPerfMode_Value
        (STMR_ac_B.OutportBufferForVeSTMR_b_Lv2ReducedPerfM);

    /* Outport: '<Root>/VeSTMR_b_Lv2STMR_ReducedPerfMode' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_b_Lv2STMR_ReducedPerfMode_Out_Init'
     */
    (void)Rte_Write_VeSTMR_b_Lv2STMR_ReducedPerfMode_Value
        (STMR_ac_B.OutportBufferForVeSTMR_b_Lv2STMR_Reduced);

    /* Outport: '<Root>/VeSTMR_b_RgnEstMntrFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_b_RgnEstMntrFlt_Out_Init'
     */
    (void)Rte_Write_VeSTMR_b_RgnEstMntrFlt_Value
        (STMR_ac_B.OutportBufferForVeSTMR_b_RgnEstMntrFlt_O);

    /* Outport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_b_TransOutTrqCmdFlt_Out_Init'
     */
    (void)Rte_Write_VeSTMR_b_TransOutTrqCmdFlt_Value
        (STMR_ac_B.OutportBufferForVeSTMR_b_TransOutTrqCmdF);

    /* Outport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt_PN' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_b_TransOutTrqCmdFlt_PN_Out_Init'
     */
    (void)Rte_Write_VeSTMR_b_TransOutTrqCmdFlt_PN_Value
        (STMR_ac_B.OutportBufferForVeSTMR_b_TransOutTrqCm_l);

    /* Outport: '<Root>/VeSTMR_b_TrqSplit_OS_US' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_b_TrqSplit_OS_US_Out_Init'
     */
    (void)Rte_Write_VeSTMR_b_TrqSplit_OS_US_Value
        (STMR_ac_B.OutportBufferForVeSTMR_b_TrqSplit_OS_US_);

    /* Outport: '<Root>/VeSTMR_e_BrkPdlStat' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_e_BrkPdlStat_Out_Init'
     *  SignalConversion generated from: '<S634>/VeSTMR_e_BrkPdlStat_Out_Init'
     */
    (void)Rte_Write_VeSTMR_e_BrkPdlStat_Value
        (STMR_ac_B.OutportBufferForVeSTMR_e_BrkPdlStat_Out_);

    /* Outport: '<Root>/VeSTMR_e_Lv2DrvMd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_e_Lv2DrvMd_Out_Init'
     *  SignalConversion generated from: '<S634>/VeSTMR_e_Lv2DrvMd_Out_Init'
     */
    (void)Rte_Write_VeSTMR_e_Lv2DrvMd_Value
        (STMR_ac_B.OutportBufferForVeSTMR_e_Lv2DrvMd_Out_In);

    /* Outport: '<Root>/VeSTMR_e_RdPrfmMd_MinMax' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTMR_e_RdPrfmMd_MinMax_Out_Init'
     *  SignalConversion generated from: '<S634>/VeSTMR_e_RdPrfmMd_MinMax_Out_Init'
     */
    (void)Rte_Write_VeSTMR_e_RdPrfmMd_MinMax_Value
        (STMR_ac_B.OutportBufferForVeSTMR_e_RdPrfmMd_MinMax);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, STMR_CODE) STMR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        STMR_ac_B.OutportBufferForVeSTMR_e_BrkPdlStat_Out_ =
            CeSTMR_e_BrkStat_NotDtrmnd;
    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/STMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S634>/VeSTMR_e_Lv2DrvMd_Out_Init' incorporates:
     *  Constant: '<S634>/Const1'
     */
    STMR_ac_B.OutportBufferForVeSTMR_e_Lv2DrvMd_Out_In = STMR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S634>/VeSTMR_e_BrkPdlStat_Out_Init' incorporates:
     *  Constant: '<S634>/Const11'
     */
    STMR_ac_B.OutportBufferForVeSTMR_e_BrkPdlStat_Out_ = STMR_ac_ConstB.Const11;

    /* SystemInitialize for SignalConversion generated from: '<S634>/VeSTMR_e_RdPrfmMd_MinMax_Out_Init' incorporates:
     *  Constant: '<S634>/Const12'
     */
    STMR_ac_B.OutportBufferForVeSTMR_e_RdPrfmMd_MinMax = STMR_ac_ConstB.Const12;

    /* SystemInitialize for SignalConversion generated from: '<S634>/VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf' incorporates:
     *  Constant: '<S636>/Constant'
     */
    STMR_ac_B.OutportBufferForVeSTMR_P44_e_FaultSts_CM = STMR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S634>/VeSTMR_P44_e_FaultSts_CM_TorqPerf' incorporates:
     *  Constant: '<S635>/Constant'
     */
    STMR_ac_B.OutportBufferForVeSTMR_P44_e_FaultSts__n =
        STMR_ac_ConstB.Constant_d;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeSTMR_e_Lv2DrvMd' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeSTMR_e_Lv2DrvMd_Value(CeSTMR_e_DrvMdM182_Auto);

    /* SystemInitialize for Outport: '<Root>/VeSTMR_e_BrkPdlStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_11'
     */
    (void)Rte_Write_VeSTMR_e_BrkPdlStat_Value(CeSTMR_e_BrkStat_NotDtrmnd);

    /* SystemInitialize for Outport: '<Root>/VeSTMR_e_RdPrfmMd_MinMax' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VeSTMR_e_RdPrfmMd_MinMax_Value(CeSTMR_e_NoRdPerfmMdRq);

    /* SystemInitialize for Outport: '<Root>/VeSTMR_e_FaultSts_CM_TorqCalcPerf' incorporates:
     *  Merge: '<Root>/M_VeSTMR_P44_e_FaultSts_CM_TorqCalcPerf'
     */
    (void)Rte_Write_VeSTMR_e_FaultSts_CM_TorqCalcPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeSTMR_e_FaultSts_CM_TorqPerf' incorporates:
     *  Merge: '<Root>/M_VeSTMR_P44_e_FaultSts_CM_TorqPerf'
     */
    (void)Rte_Write_VeSTMR_e_FaultSts_CM_TorqPerf_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
