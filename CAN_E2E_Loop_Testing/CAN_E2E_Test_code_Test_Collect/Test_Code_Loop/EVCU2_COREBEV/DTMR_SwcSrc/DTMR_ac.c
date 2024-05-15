/*
 * File: DTMR_ac.c
 *
 * Code generated for Simulink model 'DTMR_ac'.
 *
 * Model version                  : 9.1463
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:31:50 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DTMR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_DTMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_DTMR_FUNC_5

static volatile CONST(uint16, DTMR_VAR_INIT) KaDTMR_e_PRND_STAT_Map[256] =
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
} ;                                    /* Referenced by: '<S658>/Calib' */

#endif

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Cf_TransOutSpdCalc = 1.0F;/* Referenced by: '<S637>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_Lv2RdPerfm_Dly = 4U;/* Referenced by: '<S55>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_Lv2RdPerfm_MinLimDly = 4U;/* Referenced by: '<S56>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_MaxRgnTrqDifflCntrLim =
    100U;                              /* Referenced by: '<S115>/Calib' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_OPDActive_ChkLmt = 78U;/* Referenced by: '<S567>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_OPDActive_Inc = 3U;/* Referenced by: '<S568>/Calib' */

#endif

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_RdPerfmTrqChkCntr = 4U;/* Referenced by: '<S57>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_RdPerfmTrqChkCntr_Min =
    4U;                                /* Referenced by: '<S58>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_Cnt_ReachNgtvMtrTrqPeriod =
    8U;                                /* Referenced by: '<S476>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_Cnt_ReachPstvMtrTrqPeriod =
    8U;                                /* Referenced by: '<S477>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_Tmax_Cntr_Lim = 78U;/* Referenced by: '<S59>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_Tmax_Cntr_Lim_LHom = 72U;/* Referenced by: '<S60>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_Tmax_LL = 60U;/* Referenced by: '<S61>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_Tmin_Cntr_Lim = 78U;/* Referenced by: '<S62>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_Tmin_Cntr_Lim_LHom = 72U;/* Referenced by: '<S63>/Calib' */
static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_Tmin_LL = 60U;/* Referenced by: '<S64>/Calib' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_VSSR_ChkLmt = 78U;/* Referenced by: '<S581>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_Cnt_VSSR_Inc = 3U;/* Referenced by: '<S582>/Calib' */

#endif

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_Cnt_VehInParkZeroTrqThresh =
    8U;                                /* Referenced by: '<S382>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_EWhr_BattCapacity =
    16000.0F;                          /* Referenced by: '<S400>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_I_MinCrntForSoCCalc = 10.0F;/* Referenced by: '<S399>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_K_Lv2PtcWhlTrqToPwrFctr =
    0.0009016F;                        /* Referenced by: '<S251>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_K_ReducedPerfCoeff = 0.1F;/* Referenced by: '<S99>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_AccelPdlMaxWhlTrqDflt =
    100.0F;                            /* Referenced by: '<S170>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_AccelPdlMinTrq_Delta =
    10.0F;                             /* Referenced by: '<S166>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_BrkTrqRed_ToNet_LD =
    -1000.0F;                          /* Referenced by: '<S35>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_BrkTrqRed_ToNet_LU =
    1000.0F;                           /* Referenced by: '<S36>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_BrkTrq_CreepLmtLSP =
    200.0F;                            /* Referenced by: '<S211>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_BrkTrq_CreepLmtRSP =
    400.0F;                            /* Referenced by: '<S212>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_CreepCancelTrq = 25.0F;/* Referenced by: '<S181>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_CreepTrqGrdLmt_LD = -2.0F;/* Referenced by: '<S182>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_CreepTrqGrdLmt_LU = 5.0F;/* Referenced by: '<S183>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_DTRMaxLim_VehSpdFA =
    200.0F;                            /* Referenced by: '<S383>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_DTRMinLim_VehSpdFA =
    200.0F;                            /* Referenced by: '<S384>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_DrvrIntndTotBrkTrqDflt =
    0.0F;                              /* Referenced by: '<S184>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_FrmNegRtLimTrqThresh =
    0.0F;                              /* Referenced by: '<S478>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_FrmPosRtLimTrqThresh =
    -20.0F;                            /* Referenced by: '<S479>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_InvalidRegenBrkAxleTrq =
    8190.0F;                           /* Referenced by: '<S638>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_Lv2CreepTrq = 150.0F;/* Referenced by: '<S185>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_Lv2VTVROptToSUM = 20.0F;/* Referenced by: '<S499>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_Lv2minCreep = 1000.0F;/* Referenced by: '<S186>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MaxLim_LTsh_LSP = 0.1F;/* Referenced by: '<S65>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MaxLim_LTsh_RSP = 0.1F;/* Referenced by: '<S66>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MaxRgnTrqDiffMaxLim_LSP =
    1.0F;                              /* Referenced by: '<S116>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MaxRgnTrqDiffMaxLim_RSP =
    500.0F;                            /* Referenced by: '<S117>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MaxRgnTrqDiff_GRD_LD =
    -10.0F;                            /* Referenced by: '<S118>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MaxRgnTrqDiff_GRD_LU =
    100.0F;                            /* Referenced by: '<S119>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MinBrkTrq_ToNet = 0.0F;/* Referenced by: '<S37>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MinLim_LTsh_LSP = 0.1F;/* Referenced by: '<S67>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MinLim_LTsh_RSP = 0.1F;/* Referenced by: '<S68>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_MinTrq_OffSet = 0.0F;/* Referenced by: '<S200>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_NegLashTrqThresh = 150.0F;/* Referenced by: '<S480>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_NegNormalMinTrqComp =
    0.0F;                              /* Referenced by: '<S511>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_PdlMinWhlTrq_D_VehSpdFA =
    0.0F;                              /* Referenced by: '<S201>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_PdlMinWhlTrq_R_VehSpdFA =
    0.0F;                              /* Referenced by: '<S202>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_PosLashTrqThresh = -30.0F;/* Referenced by: '<S481>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_TmaxLim_LHom = 2500.0F;/* Referenced by: '<S385>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_TminLim_LHom = -1000.0F;/* Referenced by: '<S386>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_ToMin_BrkTrqRdct = 350.0F;/* Referenced by: '<S38>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_TotalAxlOLMax_Margin =
    50.0F;                             /* Referenced by: '<S515>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_TotalAxlOLMin_Margin =
    50.0F;                             /* Referenced by: '<S516>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_eCoastLvlDeltaTrqThresh =
    0.1F;                              /* Referenced by: '<S220>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_eCreepRampTrqThresh =
    1.0F;                              /* Referenced by: '<S238>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_M_eCreepTrqThresh = 300.0F;/* Referenced by: '<S141>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_P_BrkPress_CreepLmtLSP =
    200.0F;                            /* Referenced by: '<S142>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_P_BrkPress_CreepLmtRSP =
    400.0F;                            /* Referenced by: '<S143>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_ASLKickdownThrsh =
    99.5F;                             /* Referenced by: '<S247>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_AccPdlNotAppliedLim =
    0.01F;                             /* Referenced by: '<S144>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_AcclPdlNotAppliedLim =
    5.0F;                              /* Referenced by: '<S221>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_BrkTravelSts_LSP = 2.0F;/* Referenced by: '<S606>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_BrkTravelSts_RSP = 4.0F;/* Referenced by: '<S607>/Calib' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_GasPedalNotPresPos =
    10.0F;                             /* Referenced by: '<S342>/Calib' */

#endif

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_MaxPdl_ZeroPedal = 2.0F;/* Referenced by: '<S482>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_PVSThrsh = 0.0F;/* Referenced by: '<S248>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_PctForWhlTrqCalcDflt =
    0.5F;                              /* Referenced by:
                                        * '<S266>/Calib'
                                        * '<S272>/Calib'
                                        */

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_PtcPdlWot = 99.0F;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_VSSR_AccelPdl_OPDLSP =
    0.5F;                              /* Referenced by: '<S583>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_Pct_VSSR_AccelPdl_OPDRSP =
    0.01F;                             /* Referenced by: '<S584>/Calib' */

#endif

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_ASL_Active_Enbl = 1;/* Referenced by: '<S39>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT)
    KeDTMR_b_BrkPdl4ZeroPedalLash_enable = 1;/* Referenced by: '<S483>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_BrkPrssCreepEnbl = 1;/* Referenced by: '<S187>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_CalcBattCap = 0;/* Referenced by: '<S401>/Calib' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_CreepEnblSelection = 1;/* Referenced by: '<S564>/Calib' */

#endif

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_DisblDTRcmndChk = 0;/* Referenced by: '<S69>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_DoNotAllowRgnBrkFault_RA =
    0;                                 /* Referenced by: '<S70>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_DrvMdInhb4eCreepEnbl = 1;/* Referenced by: '<S145>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_DualPedalPress_Enbl = 1;/* Referenced by: '<S40>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EPBHoldStsFA_Enbl = 1;/* Referenced by: '<S213>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Ebl_SetDTCOnNetraulTrqFA =
    1;                                 /* Referenced by: '<S71>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EcoMdInhb4eCreepEnbl = 1;/* Referenced by: '<S146>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnbLv2LashCntrl = 1;/* Referenced by: '<S419>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblCurMinOPDArb = 0;/* Referenced by: '<S167>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblDTRMntrMaxLim = 1;/* Referenced by: '<S72>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblDTRMntrMinLim = 1;/* Referenced by: '<S73>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblLHOM_RgnbrkInh = 0;/* Referenced by: '<S639>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblLimHomActv = 1;/* Referenced by: '<S640>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT)
    KeDTMR_b_EnblLv2AeCoastTrqLowPassFilter = 1;/* Referenced by: '<S120>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT)
    KeDTMR_b_EnblLv2DrvDmndLowPassFilter = 1;/* Referenced by: '<S420>/Calib' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblLv2DrvMdDiag = 0;/* Referenced by: '<S343>/Calib' */

#endif

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblLv2Garage = 1;/* Referenced by: '<S408>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblMaxRgnTrqDiffMntr = 1;/* Referenced by: '<S121>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblMinMaxLv2DrvrTrq = 1;/* Referenced by: '<S387>/Calib' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_EnblSRMRVehSpd_FA = 1;/* Referenced by: '<S559>/Calib' */

#endif

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_MinTrq_eCoast = 1;/* Referenced by:
                                                                      * '<S162>/Calib'
                                                                      * '<S222>/Calib'
                                                                      */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetByCruiseTrqChk =
    1;                                 /* Referenced by: '<S23>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetByP061B = 1;/* Referenced by: '<S24>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetByRgnEstMntr =
    1;                                 /* Referenced by: '<S25>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetBySTMRPrfmMode =
    0;                                 /* Referenced by: '<S26>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetByTrqSplitMntr =
    1;                                 /* Referenced by: '<S27>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetDTMRbyMSS = 0;/* Referenced by: '<S520>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetHardLimp = 0;/* Referenced by: '<S521>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetMedLimp = 0;/* Referenced by: '<S522>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetSoftLimp = 0;/* Referenced by: '<S523>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetStopLimp = 0;/* Referenced by: '<S524>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_ResetUltraHardLimp =
    0;                                 /* Referenced by: '<S525>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_SwitchLv2DTR = 1;/* Referenced by: '<S74>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Enbl_UseRepartitionTrqSum
    = 1;                               /* Referenced by: '<S500>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_IgnoreCANBrkAppld = 0;/* Referenced by: '<S608>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_IgnoreHWBrkAppld = 0;/* Referenced by: '<S609>/Calib' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Lv2OPDInhibitEnbl = 1;/* Referenced by: '<S556>/Calib' */

#endif

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Lv2_MntrCCTrqReqEnbl = 1;/* Referenced by: '<S28>/Calib' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Lv2_MntrOPDOnEnbl = 1;/* Referenced by: '<S569>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_Lv2_MntrVSSREnbl = 1;/* Referenced by: '<S585>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_MaxRegenSelection = 1;/* Referenced by: '<S565>/Calib' */

#endif

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_NegPosLashEnabled = 1;/* Referenced by: '<S484>/Calib' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_OPDInhibitDsbl = 0;/* Referenced by: '<S557>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_RadioFromBCM = 0;/* Referenced by: '<S344>/Calib' */

#endif

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_SetDTCForDTRMntFlt = 1;/* Referenced by: '<S75>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_SetDTCOnDTMRRedPerfMd = 0;/* Referenced by: '<S76>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_SetDTC_DriverReqstTrq = 1;/* Referenced by: '<S77>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_TurtleMdSts4eCreepEnbl =
    1;                                 /* Referenced by: '<S147>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseAxlTrqReqWoMax = 1;/* Referenced by: '<S512>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseCAN_RegenTorqReq = 0;/* Referenced by: '<S409>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseCalTableOLTrqMntr = 1;/* Referenced by: '<S517>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseHTDROutputTorqReq = 1;/* Referenced by: '<S410>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseLegacyCreepTrq = 0;/* Referenced by: '<S188>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseLv2DTRdefault = 0;/* Referenced by: '<S78>/Calib' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UsePropulsionMd = 0;/* Referenced by: '<S319>/Calib' */

#endif

static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseRdPerfmMd = 0;/* Referenced by: '<S79>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseRdPerfmMd_MinLim = 0;/* Referenced by: '<S80>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseRdPerfmRst = 0;/* Referenced by: '<S81>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseRdPerfmRst_Min = 0;/* Referenced by: '<S82>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_UseToReqTable4Lash = 1;/* Referenced by: '<S438>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_ZeroPedalLash_Enbl = 1;/* Referenced by: '<S485>/Calib' */
static volatile CONST(boolean, DTMR_VAR_INIT) KeDTMR_b_eCreepingEna = 1;/* Referenced by: '<S239>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_cnt_Lv2CreepActvDly = 100U;/* Referenced by: '<S189>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_dM_eCreepTrqCancRateLD =
    -5.0F;                             /* Referenced by: '<S240>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_dM_eCreepTrqCancRateLU =
    5.0F;                              /* Referenced by: '<S241>/Calib' */

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Hard_3_1 = 31U;/* Referenced by: '<S533>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Hard_3_2 = 32U;/* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Hard_3_3 = 33U;/* Referenced by: '<S535>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Hard_4_1 = 41U;/* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Hard_4_2 = 42U;/* Referenced by: '<S537>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Hard_4_3 = 43U;/* Referenced by: '<S538>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Med_2_1 = 21U;/* Referenced by: '<S539>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Med_2_2 = 22U;/* Referenced by: '<S540>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Med_2_3 = 23U;/* Referenced by: '<S541>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Soft_1_1 = 11U;/* Referenced by: '<S542>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Soft_1_2 = 12U;/* Referenced by: '<S543>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Soft_1_3 = 13U;/* Referenced by: '<S544>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Stop_5_1 = 51U;/* Referenced by: '<S545>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Stop_5_2 = 52U;/* Referenced by: '<S546>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Limitation_Stop_5_3 = 53U;/* Referenced by: '<S547>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(uint8, DTMR_VAR_INIT) KeDTMR_e_Lv2BrakeMaxRegenNOTReady =
    0U;                                /* Referenced by: '<S560>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_4 || Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Auto = 0U;/* Referenced by:
                                                                      * '<S358>/Calib'
                                                                      * '<S320>/Calib'
                                                                      * '<S333>/Calib'
                                                                      * '<S345>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_CUSTOM = 11U;/* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_City = 7U;/* Referenced by: '<S566>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Drag = 20U;/* Referenced by:
                                                                      * '<S321>/Calib'
                                                                      * '<S335>/Calib'
                                                                      */

#endif

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_ECO = 6U;/* Referenced by:
                                                                      * '<S148>/Calib'
                                                                      * '<S359>/Calib'
                                                                      * '<S322>/Calib'
                                                                      * '<S336>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_MudSand = 19U;/* Referenced by: '<S323>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_NotDefined = 0U;/* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Offroad = 5U;/* Referenced by: '<S360>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Rock = 6U;/* Referenced by:
                                                                      * '<S324>/Calib'
                                                                      * '<S347>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Snow = 4U;/* Referenced by: '<S325>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_4 || Rte_SysCon_Variant_DTMR_FUNC_1

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Sport = 8U;/* Referenced by:
                                                                      * '<S361>/Calib'
                                                                      * '<S326>/Calib'
                                                                      * '<S337>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Street = 1U;/* Referenced by:
                                                                      * '<S327>/Calib'
                                                                      * '<S338>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Tow = 7U;/* Referenced by: '<S328>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Track = 3U;/* Referenced by:
                                                                      * '<S329>/Calib'
                                                                      * '<S339>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_e_Lv2DrvMd_Valet = 5U;/* Referenced by:
                                                                      * '<S330>/Calib'
                                                                      * '<S340>/Calib'
                                                                      * '<S348>/Calib'
                                                                      */

#endif

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_DTRFiltrCoeff = 0.1F;/* Referenced by: '<S30>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_Lv2AeCoastTorqLowPassFilt
    = 0.5F;                            /* Referenced by: '<S122>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Auto =
    1U;                                /* Referenced by: '<S439>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Drag =
    1U;                                /* Referenced by: '<S440>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Eco =
    1U;                                /* Referenced by: '<S441>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_MudSand
    = 1U;                              /* Referenced by: '<S442>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Offroad
    = 1U;                              /* Referenced by: '<S443>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Rock =
    1U;                                /* Referenced by: '<S444>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Snow =
    1U;                                /* Referenced by: '<S445>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Sport =
    1U;                                /* Referenced by: '<S446>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Tow =
    1U;                                /* Referenced by: '<S447>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Track =
    1U;                                /* Referenced by: '<S448>/Calib' */
static volatile CONST(uint16, DTMR_VAR_INIT) KeDTMR_k_Lv2LashCntrlFactor_Valet =
    1U;                                /* Referenced by: '<S449>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_NegLashFac_1 = 1.1F;/* Referenced by: '<S450>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_NegLashFac_2 = 1.4F;/* Referenced by: '<S451>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_NegLashFac_3 = 1.7F;/* Referenced by: '<S452>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_NegLashFac_4 = 1.7F;/* Referenced by: '<S453>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_NotInLashFac_1 = 1.2F;/* Referenced by: '<S454>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_NotInLashFac_2 = 1.5F;/* Referenced by: '<S455>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_NotInLashFac_3 = 1.8F;/* Referenced by: '<S456>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_NotInLashFac_4 = 1.8F;/* Referenced by: '<S457>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_P4BEV_FDR = 9.6F;/* Referenced by:
                                                                      * '<S641>/Calib'
                                                                      * '<S411>/Calib'
                                                                      * '<S417>/Calib'
                                                                      * '<S486>/Calib'
                                                                      */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_PdlMinTrqFiltCoeff = 0.7F;/* Referenced by: '<S203>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_PdlWhlTrqMphFltCoeff =
    0.1F;                              /* Referenced by: '<S642>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_PosLashFac_1 = 1.0F;/* Referenced by: '<S458>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_PosLashFac_2 = 1.3F;/* Referenced by: '<S459>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_PosLashFac_3 = 1.6F;/* Referenced by: '<S460>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_PosLashFac_4 = 1.6F;/* Referenced by: '<S461>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_RevFastRespLowPassFilt =
    0.05F;                             /* Referenced by: '<S421>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_TmaxFltrCoeff = 0.5F;/* Referenced by: '<S388>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_TminFltrCoeff = 0.5F;/* Referenced by: '<S389>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_k_kph_To_mph = 1.0F;/* Referenced by: '<S643>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_Lv2RngMaxTol = 15.0F;/* Referenced by: '<S375>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_NormalRng_LL_Km = 14.0F;/* Referenced by: '<S374>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_RngMinTol = 15.0F;/* Referenced by: '<S376>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_TrtlMd1_LL_Km = 16.0F;/* Referenced by: '<S366>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_TrtlMd1_UL_Km = 24.0F;/* Referenced by: '<S367>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_TrtlMd2_LL_Km = 16.0F;/* Referenced by: '<S368>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_TrtlMd2_UL_Km = 16.0F;/* Referenced by: '<S369>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_TrtlMd3_LL_Km = 0.0F;/* Referenced by: '<S370>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_TrtlMd3_UL_Km = 16.0F;/* Referenced by: '<S371>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_TrtlMd4_LL_Km = 0.5F;/* Referenced by: '<S372>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_l_TrtlMd4_UL_Km = 0.0F;/* Referenced by: '<S373>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_n_MaxNo_ZeroPdlLsh = 100.0F;/* Referenced by: '<S487>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_qAhr_BattCap = 40.0F;/* Referenced by: '<S402>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_r_BrkFailSftNegGrd = -1.0F;/* Referenced by: '<S644>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_r_BrkFailSftPosGrd = 1.0F;/* Referenced by: '<S645>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_r_RIPwhenZeroTrqCmnd = 0.5F;/* Referenced by: '<S501>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_t_BrkAplyd_ZrPdLsh_Delay =
    0.5F;                              /* Referenced by: '<S488>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_t_BrkTrq_Dervtv_CutOffT =
    1.0F;                              /* Referenced by: '<S190>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_t_dT = 0.025F;/* Referenced by:
                                                                    * '<S149>/Calib'
                                                                    * '<S403>/Calib'
                                                                    * '<S489>/Calib'
                                                                    * '<S191>/Calib'
                                                                    */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_t_eCreepMaxTime = 3.0F;/* Referenced by: '<S150>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_v_ASLMaxVehSpdThrsh =
    150.0F;                            /* Referenced by: '<S249>/Calib' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_v_SpdRockMdTh = 10.0F;/* Referenced by: '<S349>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_v_SpdValetMdTh = 10.0F;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_v_VSSR_Spd_OPDLSP = 8.0F;/* Referenced by: '<S586>/Calib' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_v_VSSR_Spd_OPDRSP = 7.0F;/* Referenced by: '<S587>/Calib' */

#endif

static volatile CONST(float32, DTMR_VAR_INIT) KeDTMR_v_VehCreepSpd_Mph = 1.0F;/* Referenced by: '<S192>/Calib' */
static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_K_BrkPrssConvTbl[10] =
{
    1.0F, 0.9688F, 0.8984F, 0.8516F, 0.6016F, 0.4492F, 0.25F, 0.1406F, 0.0F,
    0.0F
} ;                                    /* Referenced by: '<S193>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_K_PtcBrkOffsetMultTbl[18] =
{
    0.9688F, 0.8984F, 0.8516F, 0.6016F, 0.4492F, 0.25F, 0.1406F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S194>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_K_eCreepMult4RoadSlope[19] =
{
    0.0F, 0.0F, 0.1406F, 0.25F, 0.4492F, 0.6016F, 0.8516F, 0.8994F, 0.9688F,
    1.0F, 0.9688F, 0.8984F, 0.8516F, 0.6016F, 0.4492F, 0.25F, 0.1406F, 0.0F,
    0.0F
} ;                                    /* Referenced by: '<S242>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_AccelPdlMaxWhlTrq_D[64] =
{
    2500.0F, 2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F,
    2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F,
    1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F,
    1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F, 1650.0F,
    1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F, 1650.0F, 1350.0F,
    1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F,
    450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F,
    50.0F
} ;                                    /* Referenced by: '<S171>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_AccelPdlMaxWhlTrq_R[24] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 704.0F, 1408.0F, 2112.0F, 2112.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 704.0F, 1408.0F, 2112.0F, 2112.0F, 0.0F, 0.0F, 0.0F, 0.0F, 704.0F,
    1408.0F, 2112.0F, 2112.0F
} ;                                    /* Referenced by: '<S172>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_CreepTorq[7] =
{
    0.0F, 71.8F, 897.5F, 897.5F, 897.5F, 538.5F, 0.0F
} ;                                    /* Referenced by: '<S513>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_DTRcmnd_MaxLim[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S390>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_DTRcmnd_MinLim[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S391>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_InD_OPDMinTrq[9] =
{
    0.0F, 0.0F, -1002.15387F, -927.997192F, -857.979126F, -781.25F, -693.887329F,
    -650.0F, -629.675598F
} ;                                    /* Referenced by: '<S245>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_InD_PdlMinWhlTrq[13] =
{
    43.0F, 52.0F, 74.08F, 75.08F, 65.84F, 290.08F, 0.0F, -60.5F, -91.6F, -113.7F,
    -124.5F, -137.2F, -152.8F
} ;                                    /* Referenced by: '<S223>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_InR_OPDMinTrq[9] =
{
    -536.0F, -574.293579F, -649.645386F, -728.0F, -792.11853F, -851.273315F,
    -893.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S246>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_InR_PdlMinWhlTrq[13] =
{
    43.0F, 52.0F, 74.08F, 75.08F, 65.84F, 290.08F, 0.0F, -60.5F, -91.6F, -113.7F,
    -124.5F, -137.2F, -152.8F
} ;                                    /* Referenced by: '<S224>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_Lv2PdlTrqBias[9] =
{
    250.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F, 650.0F
} ;                                    /* Referenced by: '<S163>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_Lv2ReducedPerfmMd[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.2F, 0.3F, 0.4F, 0.5F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S100>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MinTrqAeC0Tbl[8] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S225>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MinTrqAeC0Tbl_OPD[8] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S226>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MinTrqAeC1Tbl[8] =
{
    400.0F, 50.84F, -400.76F, -430.0F, -525.0F, -740.08F, -750.08F, -650.84F
} ;                                    /* Referenced by: '<S227>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MinTrqAeC1Tbl_OPD[8] =
{
    400.0F, 50.84F, -400.76F, -430.0F, -525.0F, -740.08F, -750.08F, -650.84F
} ;                                    /* Referenced by: '<S228>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MinTrqAeC2Tbl[8] =
{
    480.0F, 61.008F, -480.912F, -516.0F, -630.0F, -888.096F, -900.096F,
    -781.008F
} ;                                    /* Referenced by: '<S229>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MinTrqAeC2Tbl_OPD[8] =
{
    480.0F, 61.008F, -480.912F, -516.0F, -630.0F, -888.096F, -900.096F,
    -781.008F
} ;                                    /* Referenced by: '<S230>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MinTrqAeC3Tbl[8] =
{
    560.0F, 71.176F, -561.064F, -602.0F, -735.0F, -1036.11206F, -1050.11206F,
    -911.176F
} ;                                    /* Referenced by: '<S231>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MinTrqAeC3Tbl_OPD[8] =
{
    560.0F, 71.176F, -561.064F, -602.0F, -735.0F, -1036.11206F, -1050.11206F,
    -911.176F
} ;                                    /* Referenced by: '<S232>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MtrMaxLim_ParkNeutral[16]
    =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S392>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_MtrMinLim_ParkNeutral[16]
    =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S393>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_TotalAxlOLMax_Margin[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S518>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_M_TotalAxlOLMin_Margin[16] =
{
    50.0F, 60.0F, 70.0F, 75.0F, 80.0F, 90.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S519>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KtDTMR_Pct_PctForWhlTrq_CamelLim_M182[289] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.005F, 0.005F, 0.005F, 0.0256187506F, 0.0325F,
    0.04F, 0.040625F, 0.04186875F, 0.043125F, 0.045625F, 0.048125F, 0.05125F,
    0.0587437488F, 0.061875F, 0.0637437478F, 0.0637437478F, 0.0637437478F,
    0.0093625F, 0.0093625F, 0.00999375F, 0.03F, 0.036868751F, 0.0437562503F,
    0.0437562503F, 0.0462562516F, 0.046881251F, 0.0499937497F, 0.05188125F,
    0.0556187518F, 0.062506251F, 0.0656312481F, 0.0675F, 0.0681312531F,
    0.073125F, 0.0174875F, 0.0174875F, 0.0181187503F, 0.038125F, 0.0443812497F,
    0.05188125F, 0.0525062494F, 0.0474937484F, 0.0550062507F, 0.0575062484F,
    0.0600062497F, 0.0631312504F, 0.07F, 0.073125F, 0.075F, 0.075625F, 0.083125F,
    0.02624375F, 0.02624375F, 0.02624375F, 0.0462562516F, 0.0525062494F,
    0.059375F, 0.0600062497F, 0.0612437502F, 0.062506251F, 0.065F, 0.0675F,
    0.0706312507F, 0.078125F, 0.080625F, 0.0824937522F, 0.083125F, 0.0931187496F,
    0.0343687497F, 0.0343687497F, 0.0343687497F, 0.0543812513F, 0.0606125F,
    0.0675F, 0.0681312531F, 0.0693687499F, 0.0706312507F, 0.073125F,
    0.0712562501F, 0.0787562504F, 0.0856187493F, 0.08875F, 0.0900062472F,
    0.0906187519F, 0.1025F, 0.0631125F, 0.0631125F, 0.0631312504F, 0.0818812475F,
    0.0881187469F, 0.0950062498F, 0.0950062498F, 0.0962437466F, 0.0975062475F,
    0.1F, 0.101868749F, 0.0893812478F, 0.108756252F, 0.114993751F, 0.11625F,
    0.116881251F, 0.136868745F, 0.0793625F, 0.0793625F, 0.0799937472F,
    0.0981312469F, 0.103743747F, 0.110625F, 0.110625F, 0.111868747F, 0.113125F,
    0.115625F, 0.117493749F, 0.120618753F, 0.134375F, 0.136868745F, 0.13124375F,
    0.131875F, 0.156881243F, 0.100612499F, 0.100612499F, 0.100631252F, 0.118125F,
    0.12375F, 0.130006254F, 0.130631253F, 0.13124375F, 0.132506251F, 0.135F,
    0.136868745F, 0.14F, 0.145625F, 0.157506257F, 0.167506248F, 0.166243747F,
    0.18125625F, 0.12125F, 0.12125F, 0.12125F, 0.138131246F, 0.143756256F,
    0.14938125F, 0.149993747F, 0.15125F, 0.151881248F, 0.154381245F, 0.15625F,
    0.15875F, 0.16500625F, 0.167506248F, 0.168743744F, 0.178756252F,
    0.205631256F, 0.189362496F, 0.189362496F, 0.189381257F, 0.203743756F,
    0.208756253F, 0.213756248F, 0.214368746F, 0.214993745F, 0.215625F,
    0.217493743F, 0.219381243F, 0.221881256F, 0.226881251F, 0.229375F,
    0.230618745F, 0.230618745F, 0.276868761F, 0.25875F, 0.25875F, 0.259381264F,
    0.271875F, 0.275631249F, 0.28F, 0.28F, 0.281256258F, 0.281868756F, 0.283125F,
    0.284368753F, 0.286881238F, 0.290625F, 0.292493761F, 0.29375F, 0.29375F,
    0.29375F, 0.369987488F, 0.369987488F, 0.370618761F, 0.379368752F,
    0.38186875F, 0.385F, 0.385F, 0.385625F, 0.386256248F, 0.3875F, 0.388125F,
    0.389993757F, 0.392493755F, 0.39375F, 0.394993752F, 0.394993752F,
    0.394993752F, 0.43375F, 0.43375F, 0.434381247F, 0.440618753F, 0.442506254F,
    0.445006251F, 0.445006251F, 0.445631236F, 0.446243763F, 0.446875F, 0.4475F,
    0.448743761F, 0.450631261F, 0.451868743F, 0.4525F, 0.4525F, 0.4525F,
    0.497493744F, 0.497493744F, 0.498125F, 0.502493739F, 0.50375F, 0.505006254F,
    0.505006254F, 0.505618751F, 0.505618751F, 0.50625F, 0.506875F, 0.507506251F,
    0.50875F, 0.509375F, 0.510006249F, 0.510006249F, 0.510006249F, 0.561237514F,
    0.561237514F, 0.561868727F, 0.563756227F, 0.5643875F, 0.564993739F,
    0.564993739F, 0.565625F, 0.565625F, 0.565625F, 0.566256225F, 0.566256225F,
    0.566881239F, 0.567493737F, 0.567493737F, 0.567493737F, 0.576875F, 0.625F,
    0.625F, 0.625F, 0.625F, 0.625F, 0.625F, 0.625F, 0.625F, 0.625F, 0.625F,
    0.625F, 0.625F, 0.625F, 0.625F, 0.625F, 0.625F, 0.625F
} ;                                    /* Referenced by: '<S274>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_Pct_PctForWhlTrq_Drag[289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S275>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KtDTMR_Pct_PctForWhlTrq_EcoMd_M182[289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S276>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_Pct_PctForWhlTrq_MudSand
    [289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S277>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KtDTMR_Pct_PctForWhlTrq_NormalMd_M182[289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S278>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KtDTMR_Pct_PctForWhlTrq_OffroadMd_M182[289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S279>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_Pct_PctForWhlTrq_Rock[289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S280>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_Pct_PctForWhlTrq_Snow[289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S281>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KtDTMR_Pct_PctForWhlTrq_SportMd_M182[289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S282>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_Pct_PctForWhlTrq_Tow[289] =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S283>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_Pct_PctForWhlTrq_Track[289]
    =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S284>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_Pct_PctForWhlTrq_Valet[289]
    =
{
    0.0F, 0.0468F, 0.1132F, 0.1709F, 0.2368F, 0.3021F, 0.3609F, 0.4001F, 0.4388F,
    0.4839F, 0.558F, 0.6402F, 0.7485F, 0.8562F, 0.9118F, 0.9662F, 1.0F, 0.0F,
    0.06F, 0.11F, 0.16F, 0.2299F, 0.2912F, 0.3431F, 0.3903F, 0.4375F, 0.4894F,
    0.5578F, 0.6475F, 0.749F, 0.8532F, 0.9221F, 0.9698F, 1.0F, 0.0F, 0.0625F,
    0.1057F, 0.1502F, 0.1939F, 0.2426F, 0.2844F, 0.3354F, 0.3818F, 0.4468F,
    0.5187F, 0.6232F, 0.7345F, 0.8437F, 0.9248F, 0.9712F, 1.0F, 0.0F, 0.0576F,
    0.0952F, 0.132F, 0.1705F, 0.2118F, 0.2509F, 0.2945F, 0.3495F, 0.4161F,
    0.4896F, 0.6043F, 0.7191F, 0.832F, 0.9247F, 0.9715F, 1.0F, 0.0F, 0.0472F,
    0.0819F, 0.1166F, 0.1513F, 0.1869F, 0.2216F, 0.2618F, 0.3148F, 0.3841F,
    0.4627F, 0.5791F, 0.7046F, 0.8325F, 0.9247F, 0.9712F, 1.0F, 0.0F, 0.0386F,
    0.0688F, 0.1024F, 0.1355F, 0.1691F, 0.2032F, 0.2402F, 0.2944F, 0.3678F,
    0.4504F, 0.5713F, 0.7033F, 0.8329F, 0.9255F, 0.9711F, 0.9999F, 0.0F, 0.036F,
    0.0689F, 0.1018F, 0.1291F, 0.1642F, 0.1959F, 0.2305F, 0.2851F, 0.3542F,
    0.4533F, 0.5787F, 0.7062F, 0.8165F, 0.9118F, 0.9625F, 0.9998F, 0.0F, 0.0369F,
    0.0661F, 0.096F, 0.1259F, 0.1544F, 0.183F, 0.2169F, 0.268F, 0.343F, 0.4426F,
    0.5821F, 0.7082F, 0.8211F, 0.9008F, 0.9672F, 0.9997F, 0.0F, 0.0375F, 0.064F,
    0.0897F, 0.117F, 0.1435F, 0.1692F, 0.2003F, 0.2472F, 0.3177F, 0.4161F,
    0.5562F, 0.7001F, 0.8175F, 0.9008F, 0.969F, 1.0F, 0.0F, 0.0362F, 0.0588F,
    0.0822F, 0.1048F, 0.1283F, 0.1517F, 0.1777F, 0.2212F, 0.2865F, 0.3745F,
    0.521F, 0.6676F, 0.8057F, 0.9104F, 0.99F, 1.0F, 0.0F, 0.0336F, 0.0537F,
    0.0747F, 0.0957F, 0.1167F, 0.1377F, 0.1586F, 0.2034F, 0.2654F, 0.343F,
    0.4935F, 0.6487F, 0.8129F, 0.9407F, 1.0F, 1.0F, 0.0F, 0.0306F, 0.051F,
    0.0694F, 0.0888F, 0.1082F, 0.1276F, 0.146F, 0.1867F, 0.243F, 0.3205F,
    0.4902F, 0.6502F, 0.8151F, 0.9363F, 1.0003F, 1.0003F, 0.0F, 0.0265F, 0.0451F,
    0.0637F, 0.0823F, 0.0999F, 0.1185F, 0.1371F, 0.1701F, 0.229F, 0.3117F,
    0.4873F, 0.6732F, 0.854F, 0.9573F, 0.9997F, 0.9997F, 0.0F, 0.0266F, 0.0445F,
    0.0612F, 0.0791F, 0.097F, 0.1149F, 0.1328F, 0.1663F, 0.2266F, 0.3049F,
    0.4893F, 0.7016F, 0.9028F, 0.9922F, 0.9922F, 0.9922F, 0.0F, 0.0281F, 0.0457F,
    0.0634F, 0.0799F, 0.0976F, 0.1141F, 0.1329F, 0.1648F, 0.2213F, 0.2921F,
    0.4806F, 0.7105F, 0.9521F, 0.9521F, 0.9521F, 0.9521F, 0.0F, 0.0297F, 0.0471F,
    0.0633F, 0.0808F, 0.097F, 0.1144F, 0.1307F, 0.1618F, 0.2217F, 0.3027F,
    0.4897F, 0.7141F, 0.9198F, 0.9198F, 0.9198F, 0.9198F, 0.0F, 0.0328F, 0.0487F,
    0.0646F, 0.0818F, 0.0976F, 0.1148F, 0.1307F, 0.1585F, 0.222F, 0.308F,
    0.5065F, 0.7248F, 0.8849F, 0.8849F, 0.8849F, 0.8849F
} ;                                    /* Referenced by: '<S285>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_dM_InNegLash_LU_PstFil[54] =
{
    64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F, 64.0F, 64.0F, 32.0F,
    16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F, 64.0F, 64.0F, 32.0F, 16.0F, 8.0F,
    0.25F, 8.0F, 16.0F, 32.0F, 64.0F, 64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F,
    16.0F, 32.0F, 64.0F, 64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F,
    64.0F, 64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F, 64.0F
} ;                                    /* Referenced by: '<S490>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_dM_InPosLash_LD_PstFil[54] =
{
    64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F, 64.0F, 64.0F, 32.0F,
    16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F, 64.0F, 64.0F, 32.0F, 16.0F, 8.0F,
    0.25F, 8.0F, 16.0F, 32.0F, 64.0F, 64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F,
    16.0F, 32.0F, 64.0F, 64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F,
    64.0F, 64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F, 64.0F
} ;                                    /* Referenced by: '<S491>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_dM_NotLashToNo_LD_PstFil[40]
    =
{
    -8.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -8.0F, -20.0F,
    -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -8.0F, -20.0F, -20.0F,
    -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -8.0F, -20.0F, -20.0F, -20.0F,
    -20.0F, -20.0F, -20.0F, -20.0F, -8.0F, -20.0F, -20.0F, -20.0F, -20.0F,
    -20.0F, -20.0F, -20.0F
} ;                                    /* Referenced by: '<S492>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_dM_NotLashToNo_LU_PstFil[40]
    =
{
    8.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 8.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 8.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 8.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 8.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S493>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_dM_ZeroPedalLash_LD_PstFil
    [45] =
{
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F
} ;                                    /* Referenced by: '<S494>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_dM_ZeroPedalLash_LU_PstFil
    [45] =
{
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F
} ;                                    /* Referenced by: '<S495>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_NegLashFac_M182_1[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S462>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_NegLashFac_M182_2[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S463>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_NegLashFac_M182_3[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S464>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_NegLashFac_M182_4[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S465>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_NotInLashFac_M182_1[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S466>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_NotInLashFac_M182_2[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S467>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_NotInLashFac_M182_3[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S468>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_NotInLashFac_M182_4[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S469>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_PosLashFac_M182_1[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S470>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_PosLashFac_M182_2[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S471>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_PosLashFac_M182_3[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S472>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_k_PosLashFac_M182_4[16] =
{
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F, 0.0008F
} ;                                    /* Referenced by: '<S473>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_l_RangeBasedonSOC[12] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F
} ;                                    /* Referenced by: '<S377>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_r_HVBatTempRdFctr[18] =
{
    0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S378>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_r_MtrTempRdFctrForRng[31] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S379>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_r_PerformanceFactor[7] =
{
    0.0F, 0.0F, 0.3F, 0.3F, 0.3F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S514>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KtDTMR_r_SpdBsdFctr_ToNet[8] =
{
    1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S41>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_K_BrkPrssConvTbl[10] =
{
    0.0F, 200.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1000.0F, 1200.0F, 1800.0F,
    2000.0F
} ;                                    /* Referenced by: '<S193>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_K_PtcBrkOffsetMultTbl[9] =
{
    200.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1000.0F, 1200.0F, 1800.0F, 2000.0F
} ;                                    /* Referenced by: '<S194>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_K_eCreepMult4RoadSlope[19] =
{
    -100.0F, -18.0F, -12.0F, -10.0F, -8.0F, -7.0F, -6.0F, -5.0F, -4.0F, 0.0F,
    4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 10.0F, 12.0F, 18.0F, 100.0F
} ;                                    /* Referenced by: '<S242>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_AccelPdlMaxWhlTrq_D[8] =
{
    0.0F, 46.0F, 72.0F, 80.0F, 90.0F, 100.0F, 130.0F, 160.0F
} ;                                    /* Referenced by: '<S171>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_AccelPdlMaxWhlTrq_R[8] =
{
    -113.0F, -80.0F, -64.0F, -40.0F, -30.0F, -20.0F, -10.0F, 0.0F
} ;                                    /* Referenced by: '<S172>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_CreepTorq[7] =
{
    -400.0F, -300.0F, -175.0F, 0.0F, 175.0F, 350.0F, 950.0F
} ;                                    /* Referenced by: '<S513>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_DTRcmnd_MaxLim[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S390>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_DTRcmnd_MinLim[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S391>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_InD_OPDMinTrq[9] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 35.0F, 50.0F, 70.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S245>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_InD_PdlMinWhlTrq[13] =
{
    -50.0F, -30.0F, -20.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 20.0F, 30.0F,
    50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S223>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_InR_OPDMinTrq[9] =
{
    -100.0F, -90.0F, -70.0F, -50.0F, -35.0F, -20.0F, -10.0F, -5.0F, 0.0F
} ;                                    /* Referenced by: '<S246>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_InR_PdlMinWhlTrq[13] =
{
    -50.0F, -30.0F, -20.0F, -10.0F, 0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F,
    70.0F, 90.0F, 110.0F
} ;                                    /* Referenced by: '<S224>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_Lv2PdlTrqBias[9] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S163>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_Lv2ReducedPerfmMd[10] =
{
    -1500.0F, -700.0F, -400.0F, -300.0F, -175.0F, 0.0F, 175.0F, 350.0F, 950.0F,
    1500.0F
} ;                                    /* Referenced by: '<S100>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MinTrqAeC0Tbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S225>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MinTrqAeC0Tbl_OPD[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S226>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MinTrqAeC1Tbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S227>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MinTrqAeC1Tbl_OPD[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S228>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MinTrqAeC2Tbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S229>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MinTrqAeC2Tbl_OPD[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S230>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MinTrqAeC3Tbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S231>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MinTrqAeC3Tbl_OPD[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S232>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MtrMaxLim_ParkNeutral[16]
    =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S392>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_MtrMinLim_ParkNeutral[16]
    =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S393>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_TotalAxlOLMax_Margin[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S518>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_M_TotalAxlOLMin_Margin[16] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F
} ;                                    /* Referenced by: '<S519>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KxDTMR_Pct_PctForWhlTrq_CamelLim_M182[17] =
{
    0.0F, 1.5625F, 3.125F, 4.6875F, 6.25F, 9.375F, 12.5F, 15.625F, 18.75F,
    21.875F, 25.0F, 28.125F, 31.25F, 37.5F, 43.75F, 53.125F, 62.5F
} ;                                    /* Referenced by: '<S274>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_Pct_PctForWhlTrq_Drag[17] =
{
    0.0F, 1.5625F, 3.125F, 4.6875F, 6.25F, 9.375F, 12.5F, 15.625F, 18.75F,
    21.875F, 25.0F, 28.125F, 31.25F, 37.5F, 43.75F, 53.125F, 62.5F
} ;                                    /* Referenced by: '<S275>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KxDTMR_Pct_PctForWhlTrq_EcoMd_M182[17] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F,
    60.0F, 75.0F, 80.0F, 90.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S276>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_Pct_PctForWhlTrq_MudSand[17]
    =
{
    0.0F, 1.5625F, 3.125F, 4.6875F, 6.25F, 9.375F, 12.5F, 15.625F, 18.75F,
    21.875F, 25.0F, 28.125F, 31.25F, 37.5F, 43.75F, 53.125F, 62.5F
} ;                                    /* Referenced by: '<S277>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KxDTMR_Pct_PctForWhlTrq_NormalMd_M182[17] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F,
    60.0F, 75.0F, 80.0F, 90.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S278>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KxDTMR_Pct_PctForWhlTrq_OffroadMd_M182[17] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F,
    60.0F, 75.0F, 80.0F, 90.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S279>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_Pct_PctForWhlTrq_Rock[17] =
{
    0.0F, 1.5625F, 3.125F, 4.6875F, 6.25F, 9.375F, 12.5F, 15.625F, 18.75F,
    21.875F, 25.0F, 28.125F, 31.25F, 37.5F, 43.75F, 53.125F, 62.5F
} ;                                    /* Referenced by: '<S280>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_Pct_PctForWhlTrq_Snow[17] =
{
    0.0F, 1.5625F, 3.125F, 4.6875F, 6.25F, 9.375F, 12.5F, 15.625F, 18.75F,
    21.875F, 25.0F, 28.125F, 31.25F, 37.5F, 43.75F, 53.125F, 62.5F
} ;                                    /* Referenced by: '<S281>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KxDTMR_Pct_PctForWhlTrq_SportMd_M182[17] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F,
    60.0F, 75.0F, 80.0F, 90.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S282>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_Pct_PctForWhlTrq_Tow[17] =
{
    0.0F, 1.5625F, 3.125F, 4.6875F, 6.25F, 9.375F, 12.5F, 15.625F, 18.75F,
    21.875F, 25.0F, 28.125F, 31.25F, 37.5F, 43.75F, 53.125F, 62.5F
} ;                                    /* Referenced by: '<S283>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_Pct_PctForWhlTrq_Track[17] =
{
    0.0F, 1.5625F, 3.125F, 4.6875F, 6.25F, 9.375F, 12.5F, 15.625F, 18.75F,
    21.875F, 25.0F, 28.125F, 31.25F, 37.5F, 43.75F, 53.125F, 62.5F
} ;                                    /* Referenced by: '<S284>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_Pct_PctForWhlTrq_Valet[17] =
{
    0.0F, 1.5625F, 3.125F, 4.6875F, 6.25F, 9.375F, 12.5F, 15.625F, 18.75F,
    21.875F, 25.0F, 28.125F, 31.25F, 37.5F, 43.75F, 53.125F, 62.5F
} ;                                    /* Referenced by: '<S285>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_dM_InNegLash_LU_PstFil[9] =
{
    -400.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 400.0F
} ;                                    /* Referenced by: '<S490>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_dM_InPosLash_LD_PstFil[9] =
{
    -400.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 400.0F
} ;                                    /* Referenced by: '<S491>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_dM_NotLashToNo_LD_PstFil[8]
    =
{
    20.0F, 100.0F, 200.0F, 500.0F, 2000.0F, 2001.0F, 2002.0F, 2003.0F
} ;                                    /* Referenced by: '<S492>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_dM_NotLashToNo_LU_PstFil[8]
    =
{
    20.0F, 100.0F, 200.0F, 500.0F, 2000.0F, 2001.0F, 2002.0F, 2003.0F
} ;                                    /* Referenced by: '<S493>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_dM_ZeroPedalLash_LD_PstFil
    [9] =
{
    -300.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 3000.0F
} ;                                    /* Referenced by: '<S494>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_dM_ZeroPedalLash_LU_PstFil
    [9] =
{
    -300.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 3000.0F
} ;                                    /* Referenced by: '<S495>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_NegLashFac_M182_1[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S462>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_NegLashFac_M182_2[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S463>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_NegLashFac_M182_3[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S464>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_NegLashFac_M182_4[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S465>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_NotInLashFac_M182_1[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S466>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_NotInLashFac_M182_2[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S467>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_NotInLashFac_M182_3[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S468>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_NotInLashFac_M182_4[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S469>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_PosLashFac_M182_1[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S470>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_PosLashFac_M182_2[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S471>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_PosLashFac_M182_3[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S472>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_k_PosLashFac_M182_4[16] =
{
    -2.0F, -1.5F, -1.0F, -0.5F, -0.3F, -0.2F, -0.1F, -0.05F, 0.0F, 0.05F, 0.1F,
    0.2F, 0.3F, 0.5F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S473>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_l_RangeBasedonSOC[12] =
{
    0.0F, 10.0F, 20.0F, 25.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F
} ;                                    /* Referenced by: '<S377>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_r_HVBatTempRdFctr[18] =
{
    -60.0F, -50.0F, -40.0F, -20.0F, -10.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F
} ;                                    /* Referenced by: '<S378>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_r_MtrTempRdFctrForRng[31] =
{
    -150.0F, -100.0F, -90.0F, -80.0F, -70.0F, -60.0F, -50.0F, -40.0F, -20.0F,
    -10.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 155.0F, 160.0F, 170.0F,
    180.0F, 190.0F
} ;                                    /* Referenced by: '<S379>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_r_PerformanceFactor[7] =
{
    -625.0F, -500.0F, -250.0F, 0.0F, 250.0F, 500.0F, 625.0F
} ;                                    /* Referenced by: '<S514>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KxDTMR_r_SpdBsdFctr_ToNet[8] =
{
    0.0F, 13.2813F, 26.5625F, 199.218796F, 278.906311F, 411.718811F, 677.343811F,
    1208.59375F
} ;                                    /* Referenced by: '<S41>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_K_PtcBrkOffsetMultTbl[2] =
{
    0.0F, 1.0F
} ;                                    /* Referenced by: '<S194>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_M_AccelPdlMaxWhlTrq_D[8] =
{
    0.0F, 20.0F, 35.0F, 45.0F, 55.0F, 65.0F, 75.0F, 85.0F
} ;                                    /* Referenced by: '<S171>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_M_AccelPdlMaxWhlTrq_R[3] =
{
    0.0F, 20.0F, 35.0F
} ;                                    /* Referenced by: '<S172>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KyDTMR_Pct_PctForWhlTrq_CamelLim_M182[17] =
{
    0.0F, 1.875F, 3.125F, 4.375F, 5.625F, 6.875F, 11.25F, 13.75F, 17.5F, 20.0F,
    26.25F, 31.25F, 37.5F, 43.75F, 50.0F, 56.25F, 62.5F
} ;                                    /* Referenced by: '<S274>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_Pct_PctForWhlTrq_Drag[17] =
{
    0.0F, 1.875F, 3.125F, 4.375F, 5.625F, 6.875F, 11.25F, 13.75F, 17.5F, 20.0F,
    26.25F, 31.25F, 37.5F, 43.75F, 50.0F, 56.25F, 62.5F
} ;                                    /* Referenced by: '<S275>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KyDTMR_Pct_PctForWhlTrq_EcoMd_M182[17] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 160.0F
} ;                                    /* Referenced by: '<S276>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_Pct_PctForWhlTrq_MudSand[17]
    =
{
    0.0F, 1.875F, 3.125F, 4.375F, 5.625F, 6.875F, 11.25F, 13.75F, 17.5F, 20.0F,
    26.25F, 31.25F, 37.5F, 43.75F, 50.0F, 56.25F, 62.5F
} ;                                    /* Referenced by: '<S277>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KyDTMR_Pct_PctForWhlTrq_NormalMd_M182[17] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 160.0F
} ;                                    /* Referenced by: '<S278>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KyDTMR_Pct_PctForWhlTrq_OffroadMd_M182[17] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 160.0F
} ;                                    /* Referenced by: '<S279>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_Pct_PctForWhlTrq_Rock[17] =
{
    0.0F, 1.875F, 3.125F, 4.375F, 5.625F, 6.875F, 11.25F, 13.75F, 17.5F, 20.0F,
    26.25F, 31.25F, 37.5F, 43.75F, 50.0F, 56.25F, 62.5F
} ;                                    /* Referenced by: '<S280>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_Pct_PctForWhlTrq_Snow[17] =
{
    0.0F, 1.875F, 3.125F, 4.375F, 5.625F, 6.875F, 11.25F, 13.75F, 17.5F, 20.0F,
    26.25F, 31.25F, 37.5F, 43.75F, 50.0F, 56.25F, 62.5F
} ;                                    /* Referenced by: '<S281>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT)
    KyDTMR_Pct_PctForWhlTrq_SportMd_M182[17] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 160.0F
} ;                                    /* Referenced by: '<S282>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_Pct_PctForWhlTrq_Tow[17] =
{
    0.0F, 1.875F, 3.125F, 4.375F, 5.625F, 6.875F, 11.25F, 13.75F, 17.5F, 20.0F,
    26.25F, 31.25F, 37.5F, 43.75F, 50.0F, 56.25F, 62.5F
} ;                                    /* Referenced by: '<S283>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_Pct_PctForWhlTrq_Track[17] =
{
    0.0F, 1.875F, 3.125F, 4.375F, 5.625F, 6.875F, 11.25F, 13.75F, 17.5F, 20.0F,
    26.25F, 31.25F, 37.5F, 43.75F, 50.0F, 56.25F, 62.5F
} ;                                    /* Referenced by: '<S284>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_Pct_PctForWhlTrq_Valet[17] =
{
    0.0F, 1.875F, 3.125F, 4.375F, 5.625F, 6.875F, 11.25F, 13.75F, 17.5F, 20.0F,
    26.25F, 31.25F, 37.5F, 43.75F, 50.0F, 56.25F, 62.5F
} ;                                    /* Referenced by: '<S285>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_dM_InNegLash_LU_PstFil[6] =
{
    500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 3001.0F
} ;                                    /* Referenced by: '<S490>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_dM_InPosLash_LD_PstFil[6] =
{
    500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 3001.0F
} ;                                    /* Referenced by: '<S491>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_dM_NotLashToNo_LD_PstFil[5]
    =
{
    50.0F, 100.0F, 1500.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S492>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_dM_NotLashToNo_LU_PstFil[5]
    =
{
    50.0F, 100.0F, 1500.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S493>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_dM_ZeroPedalLash_LD_PstFil
    [5] =
{
    -40.0F, 0.0F, 40.0F, 400.0F, 5000.0F
} ;                                    /* Referenced by: '<S494>/Vector' */

static volatile CONST(float32, DTMR_VAR_INIT) KyDTMR_dM_ZeroPedalLash_LU_PstFil
    [5] =
{
    -40.0F, 0.0F, 40.0F, 400.0F, 5000.0F
} ;                                    /* Referenced by: '<S495>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_DTMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DTMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_FailCntsAftrMaxChk;/* '<S96>/Switch18' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_FailCntsArb;/* '<S96>/Switch19' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_FailCntsArbAftrPause;/* '<S96>/Switch7' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_FinalFailCnts;/* '<S96>/Switch16' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA;/* '<S123>/Switch2' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Lv2VehStndStillReq_FA_DT;/* '<S589>/Switch2' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Lv2_OPD_ON_FA_DT;/* '<S570>/Switch2' */

#endif

static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_MCntr_FailCnts;/* '<S96>/Main_Counter' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_FailCntsAftrMaxChk;/* '<S97>/Switch18' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_FailCntsArb;/* '<S97>/Switch19' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_FailCntsArbAftrPause;/* '<S97>/Switch7' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_FinalFailCnts;/* '<S97>/Switch16' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_MCntr_FailCnts;/* '<S97>/Main_Counter' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_PCntrIncVal;/* '<S97>/Switch20' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_PCntrVal;/* '<S97>/Pause_Counter' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_PcntrIncValActv;/* '<S97>/Switch1' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_PcntrPrevValArb;/* '<S97>/Switch4' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_Min_PrevValArb;/* '<S97>/Switch17' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_PCntrIncVal;/* '<S96>/Switch20' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_PCntrVal;/* '<S96>/Pause_Counter' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_PcntrIncValActv;/* '<S96>/Switch1' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_PcntrPrevValArb;/* '<S96>/Switch4' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_PrevValArb;/* '<S96>/Switch17' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_TMaxCntrLim_Arb;/* '<S11>/Switch4' */
static VAR(uint8, DTMR_VAR_INIT) VeDTMC_Cnt_TMinCntrLim_Arb;/* '<S11>/Switch5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AccelPdlMaxWhlTrq_Arb;/* '<S158>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AccelPdlMaxWhlTrq_D;/* '<S171>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AccelPdlMaxWhlTrq_R;/* '<S172>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk;/* '<S175>/Switch6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk_BF;/* '<S173>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AccelPdlMinWhlTrq_Fltrd;/* '<S204>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AccelPdlMinWhlTrq_FltrdArb;/* '<S174>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AccelPdlMinWhlTrq_Raw;/* '<S174>/Switch6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AccelPdlMinWhlTrq_VehSpdFA;/* '<S174>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_AeCoastOfset;/* '<S178>/Switch7' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_BrkTrqForBrkTrqMult;/* '<S173>/Max' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_CreepArbMinTrq;/* '<S179>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_CreepReqMinTrq;/* '<S179>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_CreepReqMinTrq_Raw;/* '<S179>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_CreepTrqArb;/* '<S179>/Switch6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_CurrentMinTrqLmt;/* '<S169>/LimiterSwitch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_DTRcmnd_MaxLim;/* '<S390>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_DTRcmnd_MaxLim_RawArb;/* '<S396>/Switch' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_DTRcmnd_MinLim;/* '<S391>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_DTRcmnd_MinLim_RawArb;/* '<S397>/Switch' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_DrvrDmndLashTrqDiff;/* '<S425>/Sum5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_FrntOLMax_Arb;/* '<S418>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_FrntOLMin_Arb;/* '<S418>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_InD_OPDMinTrq;/* '<S245>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_InR_OPDMinTrq;/* '<S246>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv1NetDriverTrqReqst_Arb;/* '<S18>/Divide1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv1NetDriverTrqReqst_Axl;/* '<S18>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv1OutTorqReqNetRaw;/* '<S18>/Sum' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2ACC_WhlTrq_SrcArb;/* '<S10>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AccelPdlMaxWhlTrq;/* '<S158>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AccelPdlMaxWhlTrq_Raw;/* '<S158>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AccelPdlMinTrqDiff;/* '<S165>/Sum4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AccelPdlMinTrq_Arb;/* '<S165>/Switch5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AccelPdlWhlTrqArb;/* '<S10>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AccelPdlWhlTrq_Bias;/* '<S161>/Sum2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AccelPdlWhlTrq_NoArb;/* '<S161>/Sum' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AccelPdlWhlTrq_Ratio;/* '<S161>/Product1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AccelPdlWhlTrq_eCoast;/* '<S161>/Sum3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AeCoastOfsetMin;/* '<S161>/Sum6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AeCoastOfsetMin_BiasOff;/* '<S161>/Sum5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AeCoastTorqDiff;/* '<S12>/Abs1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AeCoastTorqDiff_GRD;/* '<S113>/Sum3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AeCoastTorqDiff_LSP;/* '<S12>/Sum2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AeCoastTorqDiff_Lowpath;/* '<S12>/Max' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AeCoastTorqDiff_RSP;/* '<S12>/Sum3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AeCoastTorqDiff_filtd;/* '<S112>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2AxlTrqReqFiltd;/* '<S32>/Gain' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2BrkTrqRdctn;/* '<S29>/Sum2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2BrkTrqRdctn_Arb;/* '<S29>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2BrkTrqRdctn_Fltd;/* '<S34>/Sum3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2BrkTrqRdctn_Min;/* '<S45>/Switch' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2BrkTrqRdctn_Raw;/* '<S29>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CreepTrq;/* '<S513>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CreepTrq_Arb;/* '<S415>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CreepTrq_GL;/* '<S173>/Switch6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CreepTrq_Raw;/* '<S173>/Switch5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CurrentMinTrqClippedMax;/* '<S165>/Max' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CurrentMinTrqClippedMin;/* '<S165>/Min' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CurrentMinTrq_Arb;/* '<S165>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CurrentMinTrq_Clipped;/* '<S165>/Switch6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CurrentMinTrq_ClippedPrev;/* '<S165>/UnitDelay4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CurrentMinTrq_Init;/* '<S165>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CurrentMin_BiasOff;/* '<S161>/Sum4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CurrentMin_Final;/* '<S165>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2CurrentMin_Intrim;/* '<S165>/Switch7' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt;/* '<S422>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt_Signed;/* '<S413>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2DrvrTrqReq;/* '<S29>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2DrvrTrqReqArb;/* '<S10>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2DrvrTrqReqFinal;/* '<S29>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2DrvrTrqReq_ESCEvent;/* '<S10>/Switch5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2DrvrTrqReq_Net;/* '<S29>/Switch5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2DrvrTrqReq_NetArb;/* '<S29>/Sum1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2IntendedTrqReq_Arb;/* '<S415>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2MinMaxDiffAdded;/* '<S161>/Product' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2MinMaxTrqDiff;/* '<S161>/Sum1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2NormalMinTrq;/* '<S174>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2PtcWhlCcTrqReq;/* '<S252>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2ReducedPerfTrqFiltd;/* '<S101>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TorqDiff_CurrMin;/* '<S12>/Sum5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TotAHHTrq_Arb;/* '<S33>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TotBrkTrq_Arb;/* '<S33>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TotBrkTrq_Final;/* '<S29>/Product' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TotBrkTrq_Max;/* '<S44>/Switch' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TotBrkTrq_Max_Arb;/* '<S43>/Switch' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TotalDrvTrqReq_AxlArb;/* '<S414>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TotalDrvTrqReq_AxlMax;/* '<S506>/LimiterSwitch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TotalDrvTrqReq_AxlMin;/* '<S507>/LimiterSwitch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2TotalMtr_TrqReq;/* '<S10>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DTRcmnd_MaxLim;/* '<S16>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DTRcmnd_MaxLim_Fltr;/* '<S394>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DTRcmnd_MinLim;/* '<S16>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DTRcmnd_MinLim_Fltr;/* '<S395>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrqLowpath_Max;/* '<S414>/Max' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrqLowpath_Min;/* '<S414>/Min' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned;/* '<S413>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_Arb;/* '<S414>/Sum1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_ArbMax;/* '<S414>/Sum16' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_ArbMin;/* '<S414>/Sum17' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl;/* '<S413>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_Final;/* '<S414>/Divide1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMax;/* '<S414>/Divide3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMaxArb;/* '<S16>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMin;/* '<S414>/Divide4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMinArb;/* '<S16>/Switch5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_Max;/* '<S414>/Max1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_Min;/* '<S414>/Min1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfLash;/* '<S415>/Switch5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfRegen;/* '<S415>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_Lv2eCreepMult4RoadSlope;/* '<S242>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MaxLim_LTsh_LSP;/* '<S11>/Sum6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MaxLim_LTsh_RSP;/* '<S11>/Sum' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinBrkTrq_ToNet;/* '<S29>/Sum3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinLim_LTsh_LSP;/* '<S11>/Sum5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinLim_LTsh_RSP;/* '<S11>/Sum4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinTrqArb_w_Brk_SpdFA;/* '<S174>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinTrqArb_w_Offset;/* '<S174>/Sum' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_M_MinTrqDiffLv0_arb;/* '<S178>/Switch1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_M_MinTrqDiffLv1_arb;/* '<S178>/Switch2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_M_MinTrqDiffLv2_arb;/* '<S178>/Switch3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_M_MinTrqDiffLv3_arb;/* '<S178>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinTrqDiffPreAbs_Lv0;/* '<S178>/Sum1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinTrqDiffPreAbs_Lv1;/* '<S178>/Sum2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinTrqDiffPreAbs_Lv2;/* '<S178>/Sum3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinTrqDiffPreAbs_Lv3;/* '<S178>/Sum4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinTrqLv0LvXDiff;/* '<S178>/Switch15' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinTrq_eCoast;/* '<S178>/Switch5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinTrq_eCoastPREV;/* '<S178>/UnitDelay' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_MinWhlTrq_BrkTrq;/* '<S173>/Product' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_OL_Max_SUM;/* '<S418>/Sum4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_OL_Min_SUM;/* '<S418>/Sum13' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrqArb_Lv0;/* '<S178>/Switch11' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrqArb_Lv1;/* '<S178>/Switch12' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrqArb_Lv2;/* '<S178>/Switch13' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrqArb_Lv3;/* '<S178>/Switch14' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrqOPD_Lv0;/* '<S226>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrqOPD_Lv1;/* '<S228>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrqOPD_Lv2;/* '<S230>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrqOPD_Lv3;/* '<S232>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrq_Brk;/* '<S173>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrq_Lv0;/* '<S225>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrq_Lv1;/* '<S227>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrq_Lv2;/* '<S229>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_PdlMinWhlTrq_Lv3;/* '<S231>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_RearOLMax_Arb;/* '<S418>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_RearOLMin_Arb;/* '<S418>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_RgnMtrTrqReq;/* '<S414>/Abs' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_RqInRdPerfmTrqArb;/* '<S53>/Sum1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_TotBrkTrq_BrkCAN;/* '<S173>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_TotBrkTrq_PressArb;/* '<S173>/Product1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_M_eCreepWhlTrq;/* '<S179>/Product1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_P_Lv2CcDesiredPwr;/* '<S154>/Divide' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_EstHVBatSoCMaxLmtd;/* '<S398>/Switch6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_HVBatSOCAcc;/* '<S404>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_HVBatSOCArb;/* '<S398>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_HVBatSOCCalc;/* '<S398>/Sum2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Lv2AccelPdlPos;/* '<S250>/Gain' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Lv2EstHVBatSOC;/* '<S398>/Switch' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Lv2EstHVBatSOC_Arb;/* '<S398>/Switch5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Lv2HVBatSoC;/* '<S398>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Lv2Pct4WhlTrqCalc;
                              /* '<S155>/SigConvForSigProp_Variant_Source2_0' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Lv2SOC_Init;/* '<S398>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_CamelLim;/* '<S274>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_Drag;/* '<S275>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_EcoMd;/* '<S276>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_MudSand;/* '<S277>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_NrmlMd;/* '<S278>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_OffRdMd;/* '<S279>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_Rock;/* '<S280>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_Snow;/* '<S281>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_SportMd;/* '<S282>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_Tow;/* '<S283>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_Track;/* '<S284>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_Pct_Pct4WhlTrqCalc_Valet;/* '<S285>/Vector' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_AHH_ModifyAccel_No;/* '<S175>/Logical6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_AccelPdlAppl;/* '<S178>/Comparison2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_AccelPdlAppl_arb;/* '<S178>/Logical9' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_AddOffsetToMinTrq;/* '<S174>/Logical2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_BrakeNoPressured;/* '<S13>/Logical4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_BrkAppld;/* '<S159>/Comparison1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_BrkAppld_No;/* '<S175>/Logical5' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_BrkAppld_No_Arb;/* '<S175>/Logical4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_BrkNotAppld;/* '<S159>/Comparison9' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_CannotValidateLv1Range;/* '<S289>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_ConsiderBrkTrqForMinTrq;/* '<S173>/Logical' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_CruiseTrqChkReset;/* '<S9>/Logical40' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_DTRMntr_MaxLimFail;/* '<S87>/OR1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_DTRMntr_MinLimFail;/* '<S88>/OR1' */

#if Rte_SysCon_Variant_DTMR_FUNC_1

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_DriveMdInSportMd;/* '<S254>/Comparison3' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_DryStylSts_OPDSelect;/* '<S553>/Logical1' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_EPBHoldSts_Appl;/* '<S175>/Logical2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_EPBHoldSts_Appl_Arb;/* '<S175>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_EPBHoldSts_Error_arb;/* '<S175>/Logical8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_EPBHoldSts_NoError;/* '<S175>/Logical7' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_EPB_AHH_Arb;/* '<S175>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_EnblAeCoastOffset;/* '<S178>/Logical8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_EstHVBatSOCGTHundred;/* '<S398>/Comparison1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_EstHVBatSOCLTZero;/* '<S398>/Comparison2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Fail_Thsh_First;/* '<S96>/Enough_counts_to_Fail' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Fail_Thsh_Second;/* '<S96>/Enough_counts_to_Fail1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_HardLimitationEbled;/* '<S20>/Logical11' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv1CreepModeOff;/* '<S553>/Comparison4' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv1CurrentMin_UpDown;/* '<S165>/Switch1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv1DTR_Fltdetected;/* '<S11>/Logical20' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv1NegPosLashCntrl_PstFil;/* '<S425>/Logical9' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv1RaceMdSts;/* '<S306>/Comparison7' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ACC_NotEnbld;/* '<S9>/Logical8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2AHH_Active_Arb;/* '<S33>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2AHH_Apply;/* '<S33>/Logical4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ASLACCMntrDsblCmnd;/* '<S9>/Logical' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ASLPdlOvrdInChrg;/* '<S153>/Switch4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ASL_Active;/* '<S29>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2AccelPdlOvrdActv;/* '<S153>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2AccelPdlPressed;/* '<S153>/Comparison3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2AeCoastTorqDiff_MaxFA;/* '<S114>/Switch1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2Autocruise_RA;/* '<S11>/Logical17' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2BrkAppld_HWVld;/* '<S22>/Logical4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2BrkApply_Arb;/* '<S33>/Logical6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2BrkPdlStat_FA;/* '<S22>/Logical6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2BrkTravelStsVld;/* '<S22>/Logical5' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2CANBrk_Sig;/* '<S22>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2CANErr4SOCCalc;/* '<S17>/Logical' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2CreepActv;/* '<S173>/Comparison7' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2CreepActvDlyd;/* '<S196>/AND' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2CrntLo4BattSocEst;/* '<S17>/Comparison2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2CruisePdlOvrdInChrg;/* '<S153>/Logical5' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2CurrLo4SOCCalc;/* '<S17>/Logical2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DTR_ChkFlt;/* '<S92>/OR1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DTRcmndChkFailed;/* '<S11>/Logical15' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvMode_Auto;/* '<S424>/Comparison14' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvMode_Eco;/* '<S424>/Comparison2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvMode_Offroad;/* '<S424>/Comparison1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvMode_Sport;/* '<S424>/Comparison3' */

#if Rte_SysCon_Variant_DTMR_FUNC_1

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvStylStsFA_Auto;/* '<S292>/Logical' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvStylSts_Eco;/* '<S292>/Comparison12' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvStylSts_Normal;/* '<S292>/Comparison10' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvStylSts_Offroad;/* '<S292>/Comparison11' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvStylSts_Sport;/* '<S292>/Comparison13' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2DrvrTrqReqDflt;/* '<S29>/Comparison4' */

#if Rte_SysCon_Variant_DTMR_FUNC_1

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ECO_Reset2ON;/* '<S292>/Comparison14' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2EnblPdlMntr_Arb;/* '<S11>/Logical34' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2GlobalDrvMdReqFA;/* '<S306>/Switch1' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2HVBatCrntNotFltd;/* '<S17>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2HVBatCrnt_Flt;/* '<S17>/Logical5' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2HVBatSOC_Flt;/* '<S17>/Logical4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2HVBatSoCFA;/* '<S17>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2HVBatVltt_Violation;/* '<S17>/Logical6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2HWBrk_Sig;/* '<S22>/Logical2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2MaxRegenTorqDiff_FA_Rst;/* '<S123>/passDBCparam2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2MaxRgnTrqFailing;/* '<S12>/Logical24' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2MaxVehSpdOvrdInChrg;/* '<S153>/Comparison4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2NegLashCntrl_Enbled;/* '<S425>/Logical6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2NoAccelPdlOvrd;/* '<S9>/Logical2' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2OPDActiveResetChk;/* '<S554>/Logical8' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2OPDActive_Failing;/* '<S554>/Logical6' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2OPDActive_Violation;/* '<S554>/Logical1' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2OPDInhibitHMI_DT;/* '<S555>/Logical1' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2OPDInhibit_Arb;/* '<S552>/Logical1' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2OPDSwitchChange;/* '<S165>/Comparison3' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2OPD_EnblCmnd_DT;/* '<S554>/Logical12' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PosLashCntrl_Enbled;/* '<S425>/Logical7' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PropulsionMd_Cond1;/* '<S305>/Logical7' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PropulsionMd_Cond2;/* '<S305>/Comparison11' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PropulsionMd_Cond3;/* '<S305>/Comparison12' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PropulsionMd_Cond4;/* '<S305>/Logical9' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PtcPdlInChrg;/* '<S153>/Logical4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PtcPdlInChrg1;/* '<S153>/Comparison1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PtcPdlInChrg2;/* '<S153>/Comparison2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PtcPdlInChrgVsACC;/* '<S153>/Logical2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PtcPdlInChrgVsCC;/* '<S153>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2PtcPdlOvrdInChrg;/* '<S153>/Comparison' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ReduPerfMdLtch_MinLim;/* '<S90>/OR1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ReducedPerfModeLtch;/* '<S89>/OR1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ReducedPerfMode_MinLim;/* '<S11>/Logical29' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2RegenSts;/* '<S553>/Comparison3' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ResetDTMRmntrs;/* '<S9>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ResetbyDMAB;/* '<S54>/AND' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2RgnFlt_RA;/* '<S11>/Logical36' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2TerrainMdFA;/* '<S306>/Logical1' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2TerrainMdFA_Diag;/* '<S306>/Logical2' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2Transition_Complete;/* '<S165>/Comparison6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2Transition_CompleteLtch;/* '<S168>/OR1' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2TrnMdRock_Chk;/* '<S306>/Logical3' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2TrnMdValet_PdlChk;/* '<S306>/Logical4' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2TrnMdValet_SpdChk;/* '<S306>/Logical5' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2TrnMd_CustomChk;/* '<S305>/Logical8' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2TrnMd_TotalChk;/* '<S306>/Logical6' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2UseACCWhlTrq;/* '<S10>/Logical9' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2VehStndStillReq_FA_DT;/* '<S589>/Switch3' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2VehStndStillReq_FA_DT_Rst;/* '<S589>/passDBCparam2' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2ZeroPedalLashCntrl_Enbled;/* '<S425>/Logical4' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2_OPD_ON_DT;/* '<S554>/Switch12' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2_OPD_ON_FA_DT;/* '<S570>/Switch3' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2_OPD_ON_FA_DT_Rst;/* '<S570>/passDBCparam2' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2_Unsafe_OPDActive1_Set;/* '<S554>/Logical7' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2_Unsafe_OPDActive2_Set;/* '<S554>/Logical14' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2_Unsafe_VSSR1_Set;/* '<S580>/Logical7' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2_Unsafe_VSSR2_Set;/* '<S580>/Logical14' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Lv2_VSSR_OPD;/* '<S580>/Logical1' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_MCntrMaxLimReached;/* '<S96>/MaxLimReached' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_MSSLimpActivated;/* '<S20>/Logical8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_MaxFailing;/* '<S11>/Logical18' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_MedLimitationEbled;/* '<S20>/Logical5' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_MinMntrNotInRdPrfmMd;/* '<S11>/Logical32' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_MinResumeMcntrDlyd;/* '<S97>/UnitDelay3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_MinTrqDiffExist;/* '<S178>/Comparison' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_MinTrqGTCreepTrq;/* '<S173>/Comparison6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Min_Fail_Thsh_First;/* '<S97>/Enough_counts_to_Fail' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Min_Fail_Thsh_Second;/* '<S97>/Enough_counts_to_Fail1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Min_MCntrMaxLimReached;/* '<S97>/MaxLimReached' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Min_PCntrActv;/* '<S111>/OR1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Min_PCntrMaxLimReached;/* '<S97>/MaxLimReached1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Min_PCntr_Rst;/* '<S97>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Min_RdPerfmMdForCntCntrl;/* '<S11>/UnitDelay1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Min_ResumeMCntr;/* '<S97>/MaxLimReached2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_MntrNotInRdPrfmMd;/* '<S11>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_NegLashCntrl_PstFil;/* '<S425>/Logical10' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_NoMaxLimFail;/* '<S11>/Logical19' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_NoteCoastActive;/* '<S178>/Logical10' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_OPDActive1_RA;/* '<S571>/OR1' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_P061BReset;/* '<S9>/Logical38' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_PCntrActv;/* '<S107>/OR1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_PCntrMaxLimReached;/* '<S96>/MaxLimReached1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_PCntr_Rst;/* '<S96>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_PVSMode5Actv;/* '<S174>/Comparison8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_PosLashCntrl_PstFil;/* '<S425>/Logical11' */

#if Rte_SysCon_Variant_DTMR_FUNC_1

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_PtcPedal_WOT;/* '<S254>/Comparison' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RdPerfmMdForCntCntrl;/* '<S11>/UnitDelay' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_ResetDTMRbyMSS;/* '<S20>/Logical9' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_ResetTrqPcode;/* '<S11>/Logical37' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_ResumeMCntr;/* '<S96>/MaxLimReached2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_ResumeMcntrDlyd;/* '<S96>/UnitDelay3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RgnEstMntrFltReset;/* '<S9>/Logical39' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RngOkForTrtlMd1;/* '<S287>/Logical' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RngOkForTrtlMd2;/* '<S287>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RngOkForTrtlMd3;/* '<S287>/Logical2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RngOkForTrtlMd4;/* '<S287>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Rng_GT_NormalRngLL;/* '<S288>/Comparison9' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Rng_GT_TrtlMd1_LL;/* '<S287>/Comparison1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Rng_GT_TrtlMd2_LL;/* '<S287>/Comparison3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Rng_GT_TrtlMd3_LL;/* '<S287>/Comparison5' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Rng_GT_TrtlMd4_LL;/* '<S287>/Comparison7' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Rng_LT_TrtlMd1_UL;/* '<S287>/Comparison2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Rng_LT_TrtlMd2_UL;/* '<S287>/Comparison4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Rng_LT_TrtlMd3_UL;/* '<S287>/Comparison6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Rng_LT_TrtlMd4_UL;/* '<S287>/Comparison8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RstCntrForMaxLimFail;/* '<S11>/Logical4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RstCntrForMinLimFail;/* '<S11>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RstLv2RdPrfrmMd;/* '<S11>/Logical22' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RstLv2RdPrfrmMd_MinLim;/* '<S11>/Logical27' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RstMinMntrRdPrfmMd;/* '<S11>/Logical31' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RstMinMntr_NormalMd;/* '<S11>/Logical47' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RstMntrRdPrfmMd;/* '<S11>/Logical21' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RstMntr_NormalMd;/* '<S11>/Logical46' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_RstMtrTrqCmndChk;/* '<S11>/Logical2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_SOC_FA_Dlyd;/* '<S398>/UnitDelay2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_STMRPrfmModeReset;/* '<S9>/Logical37' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_SecondThsh_NoFail_Max;/* '<S11>/Logical6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_SecondThsh_NoFail_Min;/* '<S11>/Logical8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_SoftLimitationEbled;/* '<S20>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Stage1RemActionActv;/* '<S11>/Logical11' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Stage1RemActionInit;/* '<S11>/Logical10' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Stage2RemActionActv;/* '<S11>/Logical12' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_Stage2RemActionInit;/* '<S11>/Logical14' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_StopLimitationEbled;/* '<S20>/Logical7' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_SwitchtoLv2DTR;/* '<S11>/Logical30' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_TMinLim_Failing;/* '<S11>/Logical5' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_TMinLim_FailingCnfrm;/* '<S11>/Logical24' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_TrqReduInRdPrfrmMd_MinLim;/* '<S11>/Logical28' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_TrqReductionInRdPrfrmMd;/* '<S11>/Logical23' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_TrqSplitMntrReset;/* '<S9>/Logical41' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_UltraHardLimitationEbled;/* '<S20>/Logical6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_UseBrkTrqForMinTrq;/* '<S173>/Comparison5' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_VSSR_Failing;/* '<S580>/Logical6' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_VSSR_ResetChk;/* '<S580>/Logical8' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_VSSR_Violation;/* '<S580>/Logical2' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_VehSpd_SOC_FA;/* '<S158>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastLv0;/* '<S178>/Comparison3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastLv0_arb;/* '<S178>/Logical4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastLv0_arb2;/* '<S178>/Logical3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_b_eCoastLv0_else;/* '<S178>/Switch8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastLv1;/* '<S178>/Comparison10' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastLv1_arb;/* '<S178>/Logical5' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_b_eCoastLv1_else;/* '<S178>/Switch9' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastLv2;/* '<S178>/Comparison11' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastLv2_arb;/* '<S178>/Logical6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_b_eCoastLv2_else;/* '<S178>/Switch10' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastLv3;/* '<S178>/Comparison12' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastLv3_arb;/* '<S178>/Logical7' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastNotAvail;/* '<S178>/Comparison4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastTrqBias_Enabled;/* '<S161>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCoastTrqBias_Neg;/* '<S161>/Comparison' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCreepAvail;/* '<S13>/Logical8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCreepEna;/* '<S13>/Logical10' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMC_b_eCreepStart;/* '<S13>/Logical1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_dM_Lv2LashCntrlArb_LD;/* '<S425>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_dM_Lv2LashCntrlArb_LU;/* '<S425>/Switch4' */
static VAR(TeDTMR_e_Lv2BrkPdlStat, DTMR_VAR_INIT) VeDTMC_e_Lv2BrkPdlStat;/* '<S22>/Switch3' */
static VAR(TeDTMR_e_Lv2BrkPdlStat, DTMR_VAR_INIT) VeDTMC_e_Lv2Brk_Arb;/* '<S22>/Switch2' */
static VAR(TeDTMR_e_Lv2BrkPdlStat, DTMR_VAR_INIT) VeDTMC_e_Lv2CANBrk_Arb;/* '<S22>/Switch4' */
static VAR(TeDTMR_e_Lv2DrvMd_Total, DTMR_VAR_INIT) VeDTMC_e_Lv2DriverMd_Arb;
                              /* '<S286>/SigConvForSigProp_Variant_Source1_0' */
static VAR(TeDTMR_e_Lv2BrkPdlStat, DTMR_VAR_INIT) VeDTMC_e_Lv2HWBrk_Sig_Arb;/* '<S22>/Switch1' */
static VAR(TeDFIB_e_FaultDebounceStatus, DTMR_VAR_INIT)
    VeDTMC_e_Lv2MaxRegenTorqDiff_FA_DBCsts;/* '<S125>/Switch1' */

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(uint16, DTMR_VAR_INIT) VeDTMC_e_Lv2PropulsionMd;/* '<S305>/Switch6' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(uint16, DTMR_VAR_INIT) VeDTMC_e_Lv2PropulsionMd_Limp;/* '<S305>/Switch5' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(uint16, DTMR_VAR_INIT) VeDTMC_e_Lv2TrnMd_Arb;/* '<S306>/Switch4' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

static VAR(uint16, DTMR_VAR_INIT) VeDTMC_e_Lv2TrnMd_Selected;/* '<S304>/Switch5' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(TeDFIB_e_FaultDebounceStatus, DTMR_VAR_INIT)
    VeDTMC_e_Lv2VehStndStillReq_FA_DT_DBCsts;/* '<S592>/Switch1' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(TeDFIB_e_FaultDebounceStatus, DTMR_VAR_INIT)
    VeDTMC_e_Lv2_OPD_ON_FA_DT_DBCsts;  /* '<S572>/Switch1' */

#endif

static VAR(float32, DTMR_VAR_INIT) VeDTMC_k_BrkTrqMult;/* '<S194>/Vector' */
static VAR(uint16, DTMR_VAR_INIT) VeDTMC_k_Lv2LashCntrlFactor;/* '<S424>/Switch20' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_k_NegLashFactor;/* '<S424>/Switch10' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_k_NotInLashFactor;/* '<S424>/Switch6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_k_PosLashFactor;/* '<S424>/Switch9' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_l_EstRngMaxLim;/* '<S289>/Sum' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_l_EstRngMinLim;/* '<S289>/Sum1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_l_Lv1EstRangeLmtd;/* '<S380>/LimiterSwitch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_l_Lv1EstRng_Arb;/* '<S289>/Switch12' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_l_SOCBasedRangeEst_Arb;/* '<S289>/Product' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_l_SOCBasedRngESt;/* '<S377>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_qAhr_BattCap_AmpHrs;/* '<S398>/Product' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_qAhr_BattCapacity_AmpHrs;/* '<S405>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_qAhr_Lv2BattCap_Arb;/* '<S398>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_r_HVBatTempRdFctr;/* '<S378>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_r_Lv2RedPerfFctr;/* '<S514>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_r_Lv2SpdBsdFctr;/* '<S41>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_r_MtrTempRdFctrForRng;/* '<S379>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMC_r_ReducedPerfmFactor;/* '<S100>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_M_Lv2DrvrIntndTotBrkTrq;/* '<S5>/Product2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb;/* '<S5>/Switch' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_M_Lv2RegenBrkRearOffsetRequest_Arb;/* '<S5>/Switch2' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_M_Lv2RgnBrkAxlTrqReq;/* '<S5>/Switch4' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_M_ReducedDrvrReq;/* '<S53>/Product' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_LimpHomeActv;/* '<S5>/Logical7' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_LimpHomeActvArb;/* '<S5>/Logical9' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv1ResetDTC;/* '<S5>/Logical8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2ACCEnbl_Cond1Ok;/* '<S5>/Logical14' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2ACCEnbld;/* '<S5>/Logical16' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2ACCEngaged;/* '<S5>/Comparison8' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2ACCEngaged_BrkOnly;/* '<S5>/Comparison5' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2ACCNCCEngaged;/* '<S5>/Logical21' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2CANKey_OFF;/* '<S5>/Comparison3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2Drv4OPDMntr;/* '<S5>/Comparison14' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2DrvrIntndTotBrkTrqFA;/* '<S627>/AND' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2ESCEvent;/* '<S5>/Logical20' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2ESCEventInR;/* '<S5>/Logical17' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2HWKey_OFF;/* '<S5>/Logical5' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2KeyOff;/* '<S5>/Switch1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2NCCEngaged;/* '<S5>/Comparison6' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2NoACCCANFlt;/* '<S5>/Logical2' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2Rev4OPDMntr;/* '<S5>/Comparison13' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2RgnBrkAxlTrqReqFront_Invalid;/* '<S5>/Comparison1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2RgnBrkAxlTrqReqRear_Invalid;/* '<S5>/Comparison7' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2RgnBrkAxlTrqReq_Fltd;/* '<S5>/Logical23' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2RgnBrkAxlTrqReq_Invalid;/* '<S5>/Comparison10' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2RgnBrkFltd;/* '<S5>/Logical11' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2RgnBrkFront_Fltd;/* '<S5>/Logical1' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2RgnBrkRear_Fltd;/* '<S5>/Logical4' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2VehACCEngaged;/* '<S5>/Logical3' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2VehACCNCCEngaged;/* '<S5>/Logical22' */

#if !Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2VehInDrive;/* '<S649>/Comparison11' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2VehInNeutral;/* '<S649>/Comparison4' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2VehInPark;/* '<S649>/Comparison2' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2VehInParkNeutral;/* '<S649>/Logical6' */

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_Lv2VehInRev;/* '<S649>/Comparison9' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_VehInDrive_CAN;/* '<S648>/Logical2' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_VehInNeutral_CAN;/* '<S648>/Logical5' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_VehInParkNeutral_CAN;/* '<S648>/Logical1' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_VehInPark_CAN;/* '<S648>/Logical4' */

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(boolean, DTMR_VAR_INIT) VeDTMI_b_VehInRev_CAN;/* '<S648>/Logical6' */

#endif

static VAR(TeSTMR_e_ACCSystemSts_M182, DTMR_VAR_INIT) VeDTMI_e_Lv2ACCSystemSts;/* '<S629>/DataTypeConversion' */
static VAR(TePSMR_e_LV2PVSMode, DTMR_VAR_INIT) VeDTMI_e_Lv2PVMode;/* '<S628>/DataTypeConversion' */

#if !Rte_SysCon_Variant_DTMR_FUNC_5

static VAR(TeGSMR_e_Lv2PRND_Position, DTMR_VAR_INIT) VeDTMI_e_Lv2_VldtdPRNDPos;/* '<S659>/DataTypeConversion' */

#endif

static VAR(TeGSMR_e_Lv2PRND_Position, DTMR_VAR_INIT) VeDTMI_e_Lv2_VldtdPRNDPosRD;/* '<S630>/DataTypeConversion' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_n_Lv2TransOutSpd_Arb;/* '<S5>/Product1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_r_Lv2DrvrIntndTotBrkTrqRatio;/* '<S647>/Sum3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_r_Lv2DrvrIntndTotBrkTrqRatioArb;/* '<S5>/Switch3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_v_Lv2TransOutSpd_bfFDR;/* '<S5>/Divide' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_v_Lv2VehSpd;/* '<S650>/Gain' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc;/* '<S646>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMI_v_VehSpd_mph;/* '<S5>/Product' */
static VAR(float32, DTMR_VAR_INIT) VeDTMR_M_AccelPdlMinWhlTrq_NormalMd;/* '<S178>/Switch' */
static VAR(float32, DTMR_VAR_INIT) VeDTMR_M_CreepReqMinTrq_GRD;/* '<S237>/Sum3' */
static VAR(float32, DTMR_VAR_INIT) VeDTMR_M_InD_PdlMinWhlTrq;/* '<S223>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMR_M_InD_PdlMinWhlTrq_arb;/* '<S178>/Switch6' */
static VAR(float32, DTMR_VAR_INIT) VeDTMR_M_InR_PdlMinWhlTrq;/* '<S224>/Vector' */
static VAR(float32, DTMR_VAR_INIT) VeDTMR_M_Lv2DriverTorqueReqstSTMR_Protected;/* '<S11>/Switch1' */
static VAR(float32, DTMR_VAR_INIT) VeDTMR_M_Lv2PdlTrqBias;/* '<S163>/Vector' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMR_b_DTR_ChkFailed;/* '<S11>/Logical13' */

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

static VAR(boolean, DTMR_VAR_INIT) VeDTMR_b_Lv2_OPD_Active;/* '<S554>/Logical2' */

#endif

static VAR(boolean, DTMR_VAR_INIT) VeDTMR_b_Max_Lv2ReducedPerfMode;/* '<S11>/Logical26' */
static VAR(boolean, DTMR_VAR_INIT) VeDTMR_b_SetDTC_DTR_ChkFailed;/* '<S11>/Logical25' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DTMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_DTMR
#include "MemMap.h"

CONST(ConstB_DTMR_ac_T, DTMR_VAR_INIT) DTMR_ac_ConstB =
{
    CeSTMR_e_DrvMdM182_Auto,           /* '<S666>/Const1' */
    CeSTMR_e_BrkStat_NotDtrmnd,        /* '<S666>/Const6' */
    CeDFIB_e_Init,                     /* '<S667>/Constant' */
    CeDFIB_e_Init                      /* '<S668>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_DTMR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_DTMR
#include "MemMap.h"

CONST(ConstP_DTMR_ac_T, DTMR_VAR_INIT) DTMR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S494>/Vector'
     *   '<S495>/Vector'
     */
    {
        8U, 4U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S490>/Vector'
     *   '<S491>/Vector'
     */
    {
        8U, 5U
    },

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S172>/Vector'
     */
    {
        7U, 2U
    },

    /* Computed Parameter: Vector_maxIndex_e
     * Referenced by: '<S171>/Vector'
     */
    {
        7U, 7U
    },

    /* Computed Parameter: Vector_maxIndex_o
     * Referenced by: '<S194>/Vector'
     */
    {
        8U, 1U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S274>/Vector'
     *   '<S275>/Vector'
     *   '<S276>/Vector'
     *   '<S277>/Vector'
     *   '<S278>/Vector'
     *   '<S279>/Vector'
     *   '<S280>/Vector'
     *   '<S281>/Vector'
     *   '<S282>/Vector'
     *   '<S283>/Vector'
     *   '<S284>/Vector'
     *   '<S285>/Vector'
     */
    {
        16U, 16U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S492>/Vector'
     *   '<S493>/Vector'
     */
    {
        7U, 4U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_DTMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DTMR
#include "MemMap.h"

VAR(B_DTMR_ac_T, DTMR_VAR_INIT) DTMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DTMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DTMR
#include "MemMap.h"

VAR(DW_DTMR_ac_T, DTMR_VAR_INIT) DTMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DTMR
#include "MemMap.h"

/* Forward declaration for local functions */
static uint8 DTMR__safe_cast_to_TeSTMR_e_Lv2PRND_Stat(uint8 input);
static uint8 DTMR__safe_cast_to_TeSTMR_e_Lv2PRND_Stat(uint8 input)
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
FUNC(void, DTMR_CODE) DTMR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 tmpRead;
    float32 tmpRead_4;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;

#if Rte_SysCon_Variant_DTMR_FUNC_1

    boolean tmpRead_9;

#endif

    float32 tmpRead_k;
    float32 tmpRead_l;
    TeLTIR_e_KeySts tmpRead_j;
    uint8 tmpRead_i;
    boolean tmpRead_a;
    boolean tmpRead_b;
    boolean tmpRead_c;
    boolean tmpRead_d;
    boolean tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_g;
    boolean tmpRead_h;
    boolean tmpRead_m;
    boolean tmpRead_n;
    boolean tmpRead_o;
    boolean tmpRead_p;
    boolean tmpRead_q;

#if Rte_SysCon_Variant_DTMR_FUNC_1 || Rte_SysCon_Variant_DTMR_FUNC_6

    float32 tmpRead_r;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1 || Rte_SysCon_Variant_DTMR_FUNC_6

    float32 tmpRead_s;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1 || Rte_SysCon_Variant_DTMR_FUNC_6

    float32 tmpRead_t;

#endif

    TeDMIR_e_eCoastSel tmpRead_x;
    boolean tmpRead_u;
    boolean tmpRead_v;
    boolean tmpRead_w;

#if Rte_SysCon_Variant_DTMR_FUNC_1

    boolean tmpRead_y;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

    TeDTMR_e_Lv2ECO_Mode_Latch tmpRead_z;

#endif

    float32 tmpRead_10;

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    boolean tmpRead_11;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    uint8 tmpRead_12;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    boolean tmpRead_13;

#endif

    float32 tmpRead_18;
    TeHTDR_e_AHH_ApplyReleaseReq tmpRead_15;
    TeSTMR_e_AHH_ReadyStatus tmpRead_17;
    boolean tmpRead_14;
    boolean tmpRead_16;

#if Rte_SysCon_Variant_DTMR_FUNC_1

    TeDTMR_e_LimitMaxPowerSel tmpRead_19;

#endif

    float32 tmpRead_1b;
    float32 tmpRead_1c;
    float32 tmpRead_1d;
    boolean tmpRead_1a;

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    uint16 tmpRead_1e;

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    TeEBMR_e_eBoostStatus tmpRead_1f;

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    uint8 tmpRead_1g;

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    boolean tmpRead_1h;

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    TeDMDR_e_DrvMd tmpRead_1i;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    TeDMIR_e_RegenSts tmpRead_1j;

#endif

    float32 tmpRead_1l;
    boolean tmpRead_1k;

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    TeDMIR_e_CreepSts tmpRead_1m;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_5

    uint8 tmpRead_1n;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_5

    uint8 tmpRead_1o;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_5

    boolean tmpRead_1p;

#endif

    float32 tmpRead_1q;

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    uint16 rtb_DataTypeConversion2;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_5

    boolean rtb_TmpSignalConversionAtVeSCMR_b_PRND_D;

#endif

    float32 rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;
    boolean rtb_Logical3_n;
    boolean rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE;
    boolean rtb_TmpSignalConversionAtVeSSMR_b_VehSpd;

#if Rte_SysCon_Variant_DTMR_FUNC_1 || Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2Dri;

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    uint16 rtb_VeDTMC_e_Lv2GlobalDrvMdReq_arb;

#endif

#if (!Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4) || Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    boolean rtb_VeDTMC_b_NoTurtleMd_arb;

#endif

#if (!Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4) || Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    boolean rtb_TmpSignalConversionAtVeSRAR_b_Inhibi;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    boolean rtb_Logical2_e;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    boolean rtb_Logical10;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_1

    uint8 rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    boolean rtb_TmpSignalConversionAtVeDTRR_b_Lv2Lv1;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    boolean rtb_TmpSignalConversionAtVeDTRR_b_Lv2L_m;

#endif

    float32 rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1;
    float32 rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B;
    float32 rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H;
    float32 rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB;
    float32 rtb_TmpSignalConversionAtVeSCMR_p_Lv2Bra;
    float32 rtb_VeDTMC_M_TotBrkTrq_Arb;
    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;
    boolean rtb_AND_ny;
    boolean rtb_Compare_ls;
    boolean rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2Bra;
    boolean rtb_TmpSignalConversionAtVeSCMR_b_Lv2Brk;
    boolean rtb_UnitDelay_fg;
    boolean rtb_VeDTMC_b_AccPdlNotPressed;
    boolean rtb_VeDTMC_b_DriveMdInNormalMd;
    boolean rtb_VeDTMR_b_Lv2BrkNOTApplied;

#if Rte_SysCon_Variant_DTMR_FUNC_1 || Rte_SysCon_Variant_DTMR_FUNC_6

    float32 rtb_VeDTMC_M_TotAxlCLMinTrqLim;

#endif

    float32 rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g;
    float32 rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1;
    float32 rtb_TmpSignalConversionAtVeWTAR_M_AeCoas;
    float32 rtb_VeDTMC_k_Lv2PosNegFactor_Arb;
    float32 rtb_VeDTMI_r_Lv2DrvrIntndTotBrkTrq_GL_in;
    boolean rtb_AND_d;

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    uint8 rtb_Inc_Cntr_p;

#endif

#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    uint8 rtb_Inc_Cntr;

#endif

    float32 rtb_LimiterSwitch1_j;
    float32 rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1;

#if Rte_SysCon_Variant_DTMR_FUNC_4

    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd;

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    TeTIMR_e_RaceModeSts rtb_TmpSignalConversionAtVeTIMR_e_RaceMo;

#endif

#if !Rte_SysCon_Variant_DTMR_FUNC_1

    TeSRMR_e_LimitationMd rtb_TmpSignalConversionAtVeSRMR_e_Limita;

#endif

    float32 rtb_Switch3_idx_2;
    float32 rtb_VariantMerge_For_Variant_Source_Va_5;
    float32 rtb_VariantMerge_For_Variant_Source_Va_6;
    TeDTMR_e_Lv2DrvMd_Total VeDTMC_e_Lv2DrvMd;
    TeSTMR_e_EPBHoldSts rtb_TmpSignalConversionAtVeSCMR_e_EPBHol;
    boolean rtb_VariantMerge_For_Variant_Source_Va_0;
    boolean rtb_VariantMerge_For_Variant_Source_Va_1;
    boolean rtb_VariantMerge_For_Variant_Source_Va_2;
    boolean rtb_VariantMerge_For_Variant_Source_Va_3;
    boolean rtb_VariantMerge_For_Variant_Source_Va_4;

#if Rte_SysCon_Variant_DTMR_FUNC_5

    TeSTMR_e_Lv2PRND_Stat VeDTMI_b_VehInRev_CAN_tmp;

#endif

    uint32 rtb_Compare_h_tmp;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeSCMR_M_Lv2RegenBrkFrontOffsetRequest' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2RegenBrkFrontOffsetRequest'
     */
    (void)Rte_Read_VeSCMR_M_Lv2RegenBrkFrontOffsetRequest_Value
        ((&(VeDTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb)));

    /* SignalConversion generated from: '<S1>/VeSCMR_M_Lv2RegenBrkRearOffsetRequest' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2RegenBrkRearOffsetRequest'
     */
    (void)Rte_Read_VeSCMR_M_Lv2RegenBrkRearOffsetRequest_Value
        ((&(VeDTMI_M_Lv2RegenBrkRearOffsetRequest_Arb)));

    /* SignalConversion generated from: '<S1>/VeSCMR_M_Lv2RgnBrkAxTrqReq' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2RgnBrkAxTrqReq'
     */
    (void)Rte_Read_VeSCMR_M_Lv2RgnBrkAxTrqReq_Value
        ((&(VeDTMI_M_Lv2RgnBrkAxlTrqReq)));

    /* SignalConversion generated from: '<S1>/VeSCMR_b_PRND_Disp_FA' */
#if Rte_SysCon_Variant_DTMR_FUNC_5

    /* SignalConversion generated from: '<S1>/VeSCMR_b_PRND_Disp_FA' incorporates:
     *  Inport: '<Root>/VeSCMR_b_PRND_Disp_FA'
     */
    (void)Rte_Read_VeSCMR_b_PRND_Disp_FA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_PRND_D);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSCMR_b_PRND_Disp_FA' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeDMIR_e_eCoastingSel' */
    (void)Rte_Read_VeDMIR_e_eCoastingSel_Value(&tmpRead_x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
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

    /* SignalConversion generated from: '<S1>/VeDTRR_M_Lv2Lv1AxleTrqReqMin' incorporates:
     *  Inport: '<Root>/VeDTRR_M_AxleTrqReqMin'
     */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqMin_Value
        (&rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1);

    /* SignalConversion generated from: '<S1>/VeERER_l_Lv2Lv1EstRange' incorporates:
     *  Inport: '<Root>/VeERER_l_EstRange'
     */
    (void)Rte_Read_VeERER_l_EstRange_Value((&(VeDTMC_l_Lv1EstRng_Arb)));

    /* SignalConversion generated from: '<S1>/VePSMR_Pct_Lv2AccelPdlPos' incorporates:
     *  Inport: '<Root>/VePSMR_Pct_Lv2AccelPdlPos'
     */
    (void)Rte_Read_VePSMR_Pct_Lv2AccelPdlPos_Value((&(VeDTMC_Pct_Lv2AccelPdlPos)));

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2Brake_NO_FA' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2Brake_NO_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2Brake_NO_FA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2Bra);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2BrkTravelStsFA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2BrkTravelSts_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2BrkTravelSts_FA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2Brk);

    /* SignalConversion generated from: '<S1>/VeSCMR_I_Lv2HVBatCrnt' incorporates:
     *  Inport: '<Root>/VeSCMR_I_Lv2HV_BatCrnt'
     */
    (void)Rte_Read_VeSCMR_I_Lv2HV_BatCrnt_Value
        (&rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB);

    /* SignalConversion generated from: '<S1>/VeSCMR_M_Lv2ACC_Wheel_Torque' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2ACC_WhlTrq'
     */
    (void)Rte_Read_VeSCMR_M_Lv2ACC_WhlTrq_Value((&(VeDTMC_M_Lv2ACC_WhlTrq_SrcArb)));

    /* SignalConversion generated from: '<S1>/VeSCMR_Pct_Lv2BrkTravelSts' incorporates:
     *  Inport: '<Root>/VeLTIR_Pct_Lv2BrkTravelSts'
     */
    (void)Rte_Read_VeLTIR_Pct_Lv2BrkTravelSts_Value
        (&rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B);

    /* SignalConversion generated from: '<S1>/VeSCMR_Pct_Lv2HVBatSOC' incorporates:
     *  Inport: '<Root>/VeSCMR_Pct_Lv2HV_BatSOC'
     */
    (void)Rte_Read_VeSCMR_Pct_Lv2HV_BatSOC_Value
        (&rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H);

    /* SignalConversion generated from: '<S1>/VeSCMR_U_Lv2HVBatVlt' incorporates:
     *  Inport: '<Root>/VeSCMR_U_Lv2HV_BatVlt'
     */
    (void)Rte_Read_VeSCMR_U_Lv2HV_BatVlt_Value
        (&rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB);

    /* SignalConversion generated from: '<S1>/VeSSMR_b_VehSpdFA' incorporates:
     *  Inport: '<Root>/VeSSMR_b_VehSpdFA'
     */
    (void)Rte_Read_VeSSMR_b_VehSpdFA_Value
        (&rtb_TmpSignalConversionAtVeSSMR_b_VehSpd);

    /* SignalConversion generated from: '<S1>/VeSCCR_M_Lv2Lv1FrntAxlOLMin' incorporates:
     *  Inport: '<Root>/VeSCCR_M_FrntAxlOLMin'
     */
    (void)Rte_Read_VeSCCR_M_FrntAxlOLMin_Value((&(VeDTMC_M_FrntOLMin_Arb)));

    /* SignalConversion generated from: '<S1>/VeSCCR_M_Lv2Lv1FrntAxlOLMax' incorporates:
     *  Inport: '<Root>/VeSCCR_M_FrntAxlOLMax'
     */
    (void)Rte_Read_VeSCCR_M_FrntAxlOLMax_Value
        (&rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1);

    /* SignalConversion generated from: '<S1>/VeSCCR_M_Lv2Lv1RrAxlOLMax' incorporates:
     *  Inport: '<Root>/VeSCCR_M_RrAxlOLMax'
     */
    (void)Rte_Read_VeSCCR_M_RrAxlOLMax_Value
        (&rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g);

    /* SignalConversion generated from: '<S1>/VeSCCR_M_Lv2Lv1RrAxlOLMin' incorporates:
     *  Inport: '<Root>/VeSCCR_M_RrAxlOLMin'
     */
    (void)Rte_Read_VeSCCR_M_RrAxlOLMin_Value((&(VeDTMC_M_RearOLMin_Arb)));

    /* SignalConversion generated from: '<S1>/VeVTVR_M_Lv2Lv1OptToFront' incorporates:
     *  Inport: '<Root>/VeVTVR_M_OptToFront'
     */
    (void)Rte_Read_VeVTVR_M_OptToFront_Value
        (&rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1);

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2DriveStyleStsFA' */
#if Rte_SysCon_Variant_DTMR_FUNC_1 || Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    /* SignalConversion generated from: '<S1>/VeSCMR_b_Lv2DriveStyleStsFA' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2DriveStyleStsFA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2DriveStyleStsFA_Value
        (&rtb_TmpSignalConversionAtVeSCMR_b_Lv2Dri);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSCMR_b_Lv2DriveStyleStsFA' */

    /* SignalConversion generated from: '<S1>/VeDTRR_b_Lv2Lv1OPD_Active' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTRR_b_Lv2Lv1VehStndStillReq_OPD'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    /* SignalConversion generated from: '<S1>/VeDTRR_b_Lv2Lv1OPD_Active' incorporates:
     *  Inport: '<Root>/VeDTRR_b_OPD_Active'
     */
    (void)Rte_Read_VeDTRR_b_OPD_Active_Value
        (&rtb_TmpSignalConversionAtVeDTRR_b_Lv2Lv1);

    /* SignalConversion generated from: '<S1>/VeDTRR_b_Lv2Lv1VehStndStillReq_OPD' incorporates:
     *  Inport: '<Root>/VeDTRR_b_VehStndStillReq_OPD'
     */
    (void)Rte_Read_VeDTRR_b_VehStndStillReq_OPD_Value
        (&rtb_TmpSignalConversionAtVeDTRR_b_Lv2L_m);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDTRR_b_Lv2Lv1OPD_Active' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeHTDR_e_AHH_ApplyRelease_Req' */
    (void)Rte_Read_VeHTDR_e_AHH_ApplyRelease_Req_Value(&tmpRead_15);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeSCMR_e_EPBHoldSts' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2EPB_HoldSts'
     */
    (void)Rte_Read_VeSCMR_e_Lv2EPB_HoldSts_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_EPBHol);

    /* SignalConversion generated from: '<S1>/VeSCMR_e_MSSBEV_Action' */
#if Rte_SysCon_Variant_DTMR_FUNC_1

    /* SignalConversion generated from: '<S1>/VeSCMR_e_MSSBEV_Action' incorporates:
     *  Inport: '<Root>/VeSCMR_e_MSSBEV_Action'
     */
    (void)Rte_Read_VeSCMR_e_MSSBEV_Action_Value
        (&rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSCMR_e_MSSBEV_Action' */

    /* SignalConversion generated from: '<S1>/VeSCMR_p_Lv2BrakeBoostPressure' incorporates:
     *  Inport: '<Root>/VeLTIR_p_Lv2BrakeBoostPressure'
     */
    (void)Rte_Read_VeLTIR_p_Lv2BrakeBoostPressure_Value
        (&rtb_TmpSignalConversionAtVeSCMR_p_Lv2Bra);

    /* SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts' incorporates:
     *  DataTypeConversion: '<S1>/Data Type Conversion2'
     *  Inport: '<Root>/VeSCMR_e_Lv2Trns_DrvMdReq'
     *  SignalConversion generated from: '<S1>/VeSRAR_b_Inhibit_AWD_TerrainMode'
     */
#if !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    /* SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     */
    (void)Rte_Read_VeTIMR_e_RaceModeSts_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_RaceMo);

    /* SignalConversion generated from: '<S1>/VeSRAR_b_Inhibit_AWD_TerrainMode' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Inhibit_AWD_TerrainMode'
     */
    (void)Rte_Read_VeSRAR_b_Inhibit_AWD_TerrainMode_Value
        (&rtb_TmpSignalConversionAtVeSRAR_b_Inhibi);
    (void)Rte_Read_VeSCMR_e_Lv2Trns_DrvMdReq_Value(&tmpRead_1g);

    /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2Trns_DrvMdReq'
     */
    rtb_DataTypeConversion2 = (uint16)tmpRead_1g;

#endif

    /* End of SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts' */

    /* SignalConversion generated from: '<S1>/VeWTAR_M_AeCoastTorqDiff' incorporates:
     *  Inport: '<Root>/VeWTAR_M_AeCoastTorqDiff'
     */
    (void)Rte_Read_VeWTAR_M_AeCoastTorqDiff_Value
        (&rtb_TmpSignalConversionAtVeWTAR_M_AeCoas);

    /* SignalConversion generated from: '<S1>/VeSRMR_e_LimitationMd' */
#if !Rte_SysCon_Variant_DTMR_FUNC_1

    /* SignalConversion generated from: '<S1>/VeSRMR_e_LimitationMd' incorporates:
     *  Inport: '<Root>/VeSRMR_e_LimitationMd'
     */
    (void)Rte_Read_VeSRMR_e_LimitationMd_Value
        (&rtb_TmpSignalConversionAtVeSRMR_e_Limita);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSRMR_e_LimitationMd' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_CM_Drv_TorqCalcPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_Drv_TorqCalcPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_Drv_TorqCalcPerf_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
#if Rte_SysCon_Variant_DTMR_FUNC_4

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' incorporates:
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     */
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value
        (&rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_b_Lv2ESC_FailSts' */
    (void)Rte_Read_VeSCMR_b_Lv2ESC_FailSts_Value(&rtb_Logical3_n);

    /* Inport: '<Root>/VeSCMR_b_Lv2ESC_Active' */
    (void)Rte_Read_VeSCMR_b_Lv2ESC_Active_Value(&tmpRead_w);

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&tmpRead_2);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_1);

    /* Inport: '<Root>/VeDFIR_b_DiagSystemDsbl' */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMR_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S7>/DTMR_FastTEF_StartCheckpoint' */
    Rte_Call_DTMR_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMI'
     */
    /* Logic: '<S5>/Logical8' */
    VeDTMI_b_Lv1ResetDTC = ((tmpRead_0 || tmpRead_1) || tmpRead_2);

    /* Logic: '<S5>/Logical20' incorporates:
     *  Logic: '<S5>/Logical19'
     */
    VeDTMI_b_Lv2ESCEvent = (tmpRead_w && (!rtb_Logical3_n));

    /* Logic: '<S648>/Logical42' incorporates:
     *  Chart: '<S652>/Chart'
     *  Constant: '<S658>/Calib'
     *  DataTypeConversion: '<S659>/DataTypeConversion'
     *  Inport: '<Root>/VeSCMR_b_PRNDL_DISPePTFA'
     *  Inport: '<Root>/VeSCMR_e_Lv2PRND_Disp'
     *  Inport: '<Root>/VeSCMR_e_PRNDL_DISPePT'
     *  Logic: '<S648>/Logical1'
     *  Logic: '<S648>/Logical2'
     *  Logic: '<S648>/Logical3'
     *  Logic: '<S648>/Logical4'
     *  Logic: '<S648>/Logical5'
     *  Logic: '<S648>/Logical6'
     *  Logic: '<S649>/Logical6'
     *  RelationalOperator: '<S648>/Comparison1'
     *  RelationalOperator: '<S648>/Comparison2'
     *  RelationalOperator: '<S648>/Comparison3'
     *  RelationalOperator: '<S648>/Comparison4'
     *  RelationalOperator: '<S649>/Comparison11'
     *  RelationalOperator: '<S649>/Comparison2'
     *  RelationalOperator: '<S649>/Comparison4'
     *  RelationalOperator: '<S649>/Comparison9'
     *  SignalConversion generated from: '<S5>/Variant Source'
     *  Switch: '<S652>/Switch1'
     * */
#if Rte_SysCon_Variant_DTMR_FUNC_5

    (void)Rte_Read_VeSCMR_b_PRNDL_DISPePTFA_Value(&tmpRead_1p);

    /* Logic: '<S648>/Logical3' incorporates:
     *  Inport: '<Root>/VeSCMR_b_PRNDL_DISPePTFA'
     */
    rtb_Logical3_n = ((!tmpRead_1p) ||
                      (!rtb_TmpSignalConversionAtVeSCMR_b_PRND_D));
    (void)Rte_Read_VeSCMR_e_PRNDL_DISPePT_Value(&tmpRead_1o);
    (void)Rte_Read_VeSCMR_e_Lv2PRND_Disp_Value(&tmpRead_1n);

    /* Gateway: DTMR_MedTEB/DTMI/PRNDPos_CAN/Determine_PRNDLSts/Chart */
    /* During: DTMR_MedTEB/DTMI/PRNDPos_CAN/Determine_PRNDLSts/Chart */
    /* Entry Internal: DTMR_MedTEB/DTMI/PRNDPos_CAN/Determine_PRNDLSts/Chart */
    /* Transition: '<S657>:2' */
    /* Transition: '<S657>:6' */
    if (rtb_TmpSignalConversionAtVeSCMR_b_PRND_D)
    {
        tmpRead_1n = tmpRead_1o;
    }

    VeDTMI_b_VehInRev_CAN_tmp = (TeSTMR_e_Lv2PRND_Stat)
        DTMR__safe_cast_to_TeSTMR_e_Lv2PRND_Stat((uint8)KaDTMR_e_PRND_STAT_Map
        [(tmpRead_1n)]);

    /* Logic: '<S648>/Logical6' incorporates:
     *  Constant: '<S655>/Constant'
     *  Constant: '<S658>/Calib'
     *  Inport: '<Root>/VeSCMR_e_Lv2PRND_Disp'
     *  Inport: '<Root>/VeSCMR_e_PRNDL_DISPePT'
     */
    VeDTMI_b_VehInRev_CAN = (rtb_Logical3_n && (((uint32)
        VeDTMI_b_VehInRev_CAN_tmp) == CeSTMR_e_LVR_R));

    /* Logic: '<S648>/Logical4' incorporates:
     *  Constant: '<S653>/Constant'
     */
    VeDTMI_b_VehInPark_CAN = (rtb_Logical3_n && (((uint32)
        VeDTMI_b_VehInRev_CAN_tmp) == CeSTMR_e_LVR_P));

    /* Logic: '<S648>/Logical5' incorporates:
     *  Constant: '<S654>/Constant'
     */
    VeDTMI_b_VehInNeutral_CAN = (rtb_Logical3_n && (((uint32)
        VeDTMI_b_VehInRev_CAN_tmp) == CeSTMR_e_LVR_N));

    /* Logic: '<S648>/Logical1' */
    VeDTMI_b_VehInParkNeutral_CAN = ((VeDTMI_b_VehInPark_CAN) ||
        (VeDTMI_b_VehInNeutral_CAN));

    /* Logic: '<S648>/Logical2' incorporates:
     *  Constant: '<S656>/Constant'
     */
    VeDTMI_b_VehInDrive_CAN = (rtb_Logical3_n && (((uint32)
        VeDTMI_b_VehInRev_CAN_tmp) == CeSTMR_e_LVR_D));

    /* VariantMerge generated from: '<S5>/Variant Source' */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0] =
        VeDTMI_b_VehInRev_CAN;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1] =
        VeDTMI_b_VehInParkNeutral_CAN;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[2] =
        VeDTMI_b_VehInDrive_CAN;

#else

    /* DataTypeConversion: '<S659>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeGSMR_e_VldtdPRNDPos'
     */
    (void)Rte_Read_VeGSMR_e_VldtdPRNDPos_Value((&(VeDTMI_e_Lv2_VldtdPRNDPos)));

    /* RelationalOperator: '<S649>/Comparison9' incorporates:
     *  Constant: '<S662>/Constant'
     *  DataTypeConversion: '<S659>/DataTypeConversion'
     */
    VeDTMI_b_Lv2VehInRev = (((uint32)VeDTMI_e_Lv2_VldtdPRNDPos) ==
                            CeGSMR_e_TransRangeReverse);

    /* RelationalOperator: '<S649>/Comparison2' incorporates:
     *  Constant: '<S660>/Constant'
     *  DataTypeConversion: '<S659>/DataTypeConversion'
     *  RelationalOperator: '<S649>/Comparison9'
     */
    VeDTMI_b_Lv2VehInPark = (((uint32)VeDTMI_e_Lv2_VldtdPRNDPos) ==
        CeGSMR_e_TransRangePark);

    /* RelationalOperator: '<S649>/Comparison4' incorporates:
     *  Constant: '<S661>/Constant'
     *  DataTypeConversion: '<S659>/DataTypeConversion'
     *  RelationalOperator: '<S649>/Comparison9'
     */
    VeDTMI_b_Lv2VehInNeutral = (((uint32)VeDTMI_e_Lv2_VldtdPRNDPos) ==
        CeGSMR_e_TransRangeNeutral);

    /* Logic: '<S649>/Logical6' */
    VeDTMI_b_Lv2VehInParkNeutral = ((VeDTMI_b_Lv2VehInPark) ||
        (VeDTMI_b_Lv2VehInNeutral));

    /* RelationalOperator: '<S649>/Comparison11' incorporates:
     *  Constant: '<S663>/Constant'
     *  DataTypeConversion: '<S659>/DataTypeConversion'
     *  RelationalOperator: '<S649>/Comparison9'
     */
    VeDTMI_b_Lv2VehInDrive = (((uint32)VeDTMI_e_Lv2_VldtdPRNDPos) ==
        CeGSMR_e_TransRangeDrive);

    /* VariantMerge generated from: '<S5>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S5>/Variant Source'
     */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0] = VeDTMI_b_Lv2VehInRev;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1] =
        VeDTMI_b_Lv2VehInParkNeutral;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[2] =
        VeDTMI_b_Lv2VehInDrive;

#endif

    /* End of Logic: '<S648>/Logical42' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeLTIR_b_Lv2RgnBrkAxTrqReq_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2RgnBrkAxTrqReq_FA_Value(&tmpRead_1a);

    /* Logic: '<S627>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2BrkTrqDriver_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2BrkTrqDriver_FA_Value
        ((&(VeDTMI_b_Lv2DrvrIntndTotBrkTrqFA)));

    /* Inport: '<Root>/VeLTIR_M_Lv2BrkTrqDriver' */
    (void)Rte_Read_VeLTIR_M_Lv2BrkTrqDriver_Value(&tmpRead_18);

    /* DataTypeConversion: '<S630>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeGSMR_e_VldtdPRNDPosDR'
     */
    (void)Rte_Read_VeGSMR_e_VldtdPRNDPosDR_Value((&(VeDTMI_e_Lv2_VldtdPRNDPosRD)));

    /* Inport: '<Root>/VeSCMR_b_Lv2RegenBrkRearOffsetRequestFA' */
    (void)Rte_Read_VeSCMR_b_Lv2RegenBrkRearOffsetRequestFA_Value(&tmpRead_v);

    /* Inport: '<Root>/VeSCMR_b_Lv2RegenBrkFrontOffsetRequestFA' */
    (void)Rte_Read_VeSCMR_b_Lv2RegenBrkFrontOffsetRequestFA_Value(&tmpRead_u);

    /* Gain: '<S650>/Gain' incorporates:
     *  Inport: '<Root>/VeSSMR_v_VehSpd'
     */
    (void)Rte_Read_VeSSMR_v_VehSpd_Value((&(VeDTMI_v_Lv2VehSpd)));

    /* Inport: '<Root>/VeSRAR_b_OpnBattCntctr' */
    (void)Rte_Read_VeSRAR_b_OpnBattCntctr_Value(&tmpRead_q);

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnCmnd_Value(&tmpRead_p);

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnBPClsdCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnBPClsdCmnd_Value(&tmpRead_o);

    /* Inport: '<Root>/VeSRAR_b_DsblInvA' */
    (void)Rte_Read_VeSRAR_b_DsblInvA_Value(&tmpRead_n);

    /* Inport: '<Root>/VeSRAR_b_RegenBrkInhb' */
    (void)Rte_Read_VeSRAR_b_RegenBrkInhb_Value(&tmpRead_m);

    /* Inport: '<Root>/VeLTIR_e_Lv2KeySts' */
    (void)Rte_Read_VeLTIR_e_Lv2KeySts_Value(&tmpRead_j);

    /* Inport: '<Root>/VeSCMR_e_Lv2DriveStyleSts' */
    (void)Rte_Read_VeSCMR_e_Lv2DriveStyleSts_Value(&tmpRead_i);

    /* DataTypeConversion: '<S629>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2ACC_SystemSts'
     */
    (void)Rte_Read_VeSCMR_e_Lv2ACC_SystemSts_Value((&(VeDTMI_e_Lv2ACCSystemSts)));

    /* Inport: '<Root>/VeLTIR_b_Lv2KeySts_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2KeySts_FA_Value(&tmpRead_h);

    /* Inport: '<Root>/VeLTIR_b_Lv2ACC_WhlTrqEnbld_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2ACC_WhlTrqEnbld_FA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSCMR_b_Lv2ACC_WhlTrqEnbld' */
    (void)Rte_Read_VeSCMR_b_Lv2ACC_WhlTrqEnbld_Value(&tmpRead_5);

    /* DataTypeConversion: '<S628>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VePSMR_e_Lv2PVSMode'
     */
    (void)Rte_Read_VePSMR_e_Lv2PVSMode_Value((&(VeDTMI_e_Lv2PVMode)));

    /* Inport: '<Root>/VeHWIO_b_Lv2IgnSwitch' */
    (void)Rte_Read_VeHWIO_b_Lv2IgnSwitch_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMI'
     */
    /* Logic: '<S5>/Logical17' */
    VeDTMI_b_Lv2ESCEventInR = ((VeDTMI_b_Lv2ESCEvent) &&
        (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0]));

    /* RelationalOperator: '<S5>/Comparison3' incorporates:
     *  Constant: '<S634>/Constant'
     *  Inport: '<Root>/VeLTIR_e_Lv2KeySts'
     */
    VeDTMI_b_Lv2CANKey_OFF = (((uint32)tmpRead_j) == CeLTIR_e_IGN_LK);

    /* Logic: '<S5>/Logical5' */
    VeDTMI_b_Lv2HWKey_OFF = !tmpRead_3;

    /* Switch: '<S5>/Switch1' */
    if (tmpRead_h)
    {
        /* Switch: '<S5>/Switch1' */
        VeDTMI_b_Lv2KeyOff = VeDTMI_b_Lv2HWKey_OFF;
    }
    else
    {
        /* Switch: '<S5>/Switch1' */
        VeDTMI_b_Lv2KeyOff = VeDTMI_b_Lv2CANKey_OFF;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* RelationalOperator: '<S5>/Comparison1' incorporates:
     *  Constant: '<S638>/Calib'
     */
    VeDTMI_b_Lv2RgnBrkAxlTrqReqFront_Invalid = (KeDTMR_M_InvalidRegenBrkAxleTrq >=
        VeDTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb);

    /* RelationalOperator: '<S5>/Comparison10' incorporates:
     *  Constant: '<S638>/Calib'
     */
    VeDTMI_b_Lv2RgnBrkAxlTrqReq_Invalid = (KeDTMR_M_InvalidRegenBrkAxleTrq >=
        VeDTMI_M_Lv2RgnBrkAxlTrqReq);

    /* RelationalOperator: '<S5>/Comparison7' incorporates:
     *  Constant: '<S638>/Calib'
     */
    VeDTMI_b_Lv2RgnBrkAxlTrqReqRear_Invalid = (KeDTMR_M_InvalidRegenBrkAxleTrq >=
        VeDTMI_M_Lv2RegenBrkRearOffsetRequest_Arb);

    /* Logic: '<S5>/Logical1' */
    VeDTMI_b_Lv2RgnBrkFront_Fltd = (tmpRead_u ||
        (VeDTMI_b_Lv2RgnBrkAxlTrqReqFront_Invalid));

    /* Logic: '<S5>/Logical4' */
    VeDTMI_b_Lv2RgnBrkRear_Fltd = (tmpRead_v ||
        (VeDTMI_b_Lv2RgnBrkAxlTrqReqRear_Invalid));

    /* Logic: '<S5>/Logical23' */
    VeDTMI_b_Lv2RgnBrkAxlTrqReq_Fltd = (tmpRead_1a ||
        (VeDTMI_b_Lv2RgnBrkAxlTrqReq_Invalid));

    /* Logic: '<S5>/Logical11' */
    VeDTMI_b_Lv2RgnBrkFltd = (((VeDTMI_b_Lv2RgnBrkFront_Fltd) ||
        (VeDTMI_b_Lv2RgnBrkRear_Fltd)) || (VeDTMI_b_Lv2RgnBrkAxlTrqReq_Fltd));

    /* Switch: '<S5>/Switch' */
    if (VeDTMI_b_Lv2RgnBrkFront_Fltd)
    {
        /* Switch: '<S5>/Switch' incorporates:
         *  Constant: '<S5>/ConstantValue'
         */
        VeDTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb = 0.0F;
    }

    /* End of Switch: '<S5>/Switch' */

    /* Switch: '<S5>/Switch2' */
    if (VeDTMI_b_Lv2RgnBrkRear_Fltd)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S5>/ConstantValue1'
         */
        VeDTMI_M_Lv2RegenBrkRearOffsetRequest_Arb = 0.0F;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch4' */
    if (VeDTMI_b_Lv2RgnBrkAxlTrqReq_Fltd)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S5>/ConstantValue5'
         */
        VeDTMI_M_Lv2RgnBrkAxlTrqReq = 0.0F;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Logic: '<S5>/Logical9' incorporates:
     *  Constant: '<S639>/Calib'
     *  Logic: '<S5>/Logical10'
     */
    VeDTMI_b_LimpHomeActvArb = (((((tmpRead_m && (KeDTMR_b_EnblLHOM_RgnbrkInh)) ||
        tmpRead_n) || tmpRead_o) || tmpRead_p) || tmpRead_q);

    /* Logic: '<S5>/Logical7' incorporates:
     *  Constant: '<S640>/Calib'
     */
    VeDTMI_b_LimpHomeActv = ((VeDTMI_b_LimpHomeActvArb) &&
        (KeDTMR_b_EnblLimHomActv));

    /* Product: '<S5>/Divide' incorporates:
     *  Constant: '<S641>/Calib'
     */
    VeDTMI_v_Lv2TransOutSpd_bfFDR = VeDTMI_v_Lv2VehSpd / KeDTMR_k_P4BEV_FDR;

    /* Product: '<S5>/Product' incorporates:
     *  Constant: '<S643>/Calib'
     */
    VeDTMI_v_VehSpd_mph = VeDTMI_v_Lv2VehSpd * KeDTMR_k_kph_To_mph;

    /* Outputs for Atomic SubSystem: '<S5>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S646>/Switch1' incorporates:
     *  Constant: '<S642>/Calib'
     *  Product: '<S646>/Multiplication'
     *  Sum: '<S646>/Subtraction'
     *  Sum: '<S646>/Summation'
     *  UnitDelay: '<S646>/UnitDelay'
     */
    VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc = ((VeDTMI_v_VehSpd_mph -
        VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc) * KeDTMR_k_PdlWhlTrqMphFltCoeff) +
        VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc;

    /* End of Outputs for SubSystem: '<S5>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Product: '<S5>/Product1' incorporates:
     *  Constant: '<S637>/Calib'
     */
    VeDTMI_n_Lv2TransOutSpd_Arb = VeDTMI_v_Lv2TransOutSpd_bfFDR *
        KeDTMR_Cf_TransOutSpdCalc;

    /* RelationalOperator: '<S5>/Comparison5' incorporates:
     *  Constant: '<S631>/Constant'
     */
    VeDTMI_b_Lv2ACCEngaged_BrkOnly = (((uint32)VeDTMI_e_Lv2ACCSystemSts) ==
        CeSTMR_e_Engaged_BrakeOnly_M182);

    /* RelationalOperator: '<S5>/Comparison6' incorporates:
     *  Constant: '<S636>/Constant'
     */
    VeDTMI_b_Lv2NCCEngaged = (((uint32)VeDTMI_e_Lv2ACCSystemSts) ==
        CeSTMR_e_NCC_Engaged_M182);

    /* RelationalOperator: '<S5>/Comparison8' incorporates:
     *  Constant: '<S635>/Constant'
     */
    VeDTMI_b_Lv2ACCEngaged = (((uint32)VeDTMI_e_Lv2ACCSystemSts) ==
        CeSTMR_e_Engaged_M182);

    /* Logic: '<S5>/Logical2' */
    VeDTMI_b_Lv2NoACCCANFlt = !tmpRead_6;

    /* Logic: '<S5>/Logical14' */
    VeDTMI_b_Lv2ACCEnbl_Cond1Ok = (tmpRead_5 && (VeDTMI_b_Lv2NoACCCANFlt));

    /* Logic: '<S5>/Logical3' */
    VeDTMI_b_Lv2VehACCEngaged = ((VeDTMI_b_Lv2ACCEngaged) ||
        (VeDTMI_b_Lv2ACCEngaged_BrkOnly));

    /* Logic: '<S5>/Logical21' incorporates:
     *  Logic: '<S5>/Logical22'
     */
    VeDTMI_b_Lv2ACCNCCEngaged = ((VeDTMI_b_Lv2VehACCEngaged) ||
        (VeDTMI_b_Lv2NCCEngaged));

    /* Logic: '<S5>/Logical16' */
    VeDTMI_b_Lv2ACCEnbld = ((VeDTMI_b_Lv2ACCEnbl_Cond1Ok) &&
                            (VeDTMI_b_Lv2ACCNCCEngaged));

    /* Logic: '<S5>/Logical22' */
    VeDTMI_b_Lv2VehACCNCCEngaged = VeDTMI_b_Lv2ACCNCCEngaged;

    /* RelationalOperator: '<S5>/Comparison13' incorporates:
     *  Constant: '<S632>/Constant'
     *  DataTypeConversion: '<S630>/DataTypeConversion'
     */
    VeDTMI_b_Lv2Rev4OPDMntr = (((uint32)VeDTMI_e_Lv2_VldtdPRNDPosRD) ==
        CeGSMR_e_TransRangeReverse);

    /* RelationalOperator: '<S5>/Comparison14' incorporates:
     *  Constant: '<S633>/Constant'
     *  DataTypeConversion: '<S630>/DataTypeConversion'
     *  RelationalOperator: '<S5>/Comparison13'
     */
    VeDTMI_b_Lv2Drv4OPDMntr = (((uint32)VeDTMI_e_Lv2_VldtdPRNDPosRD) ==
        CeGSMR_e_TransRangeDrive);

    /* Switch: '<S5>/Switch3' */
    VeDTMI_r_Lv2DrvrIntndTotBrkTrqRatioArb = (float32)
        ((!VeDTMI_b_Lv2DrvrIntndTotBrkTrqFA) ? 1 : 0);

    /* Outputs for Atomic SubSystem: '<S5>/LV2_GradientLimiter' */
    /* Sum: '<S647>/Sum2' */
    rtb_VeDTMI_r_Lv2DrvrIntndTotBrkTrq_GL_in =
        VeDTMI_r_Lv2DrvrIntndTotBrkTrqRatioArb -
        VeDTMI_r_Lv2DrvrIntndTotBrkTrqRatio;

    /* Outputs for Atomic SubSystem: '<S647>/Limiter' */
    /* Switch: '<S651>/LimiterSwitch' incorporates:
     *  Constant: '<S645>/Calib'
     *  RelationalOperator: '<S651>/Comparison2'
     */
    if (KeDTMR_r_BrkFailSftPosGrd < rtb_VeDTMI_r_Lv2DrvrIntndTotBrkTrq_GL_in)
    {
        /* Switch: '<S651>/LimiterSwitch' */
        rtb_VeDTMI_r_Lv2DrvrIntndTotBrkTrq_GL_in = KeDTMR_r_BrkFailSftPosGrd;
    }

    /* End of Switch: '<S651>/LimiterSwitch' */

    /* Switch: '<S651>/LimiterSwitch1' incorporates:
     *  Constant: '<S644>/Calib'
     *  RelationalOperator: '<S651>/Comparison1'
     */
    if (rtb_VeDTMI_r_Lv2DrvrIntndTotBrkTrq_GL_in <= KeDTMR_r_BrkFailSftNegGrd)
    {
        rtb_VeDTMI_r_Lv2DrvrIntndTotBrkTrq_GL_in = KeDTMR_r_BrkFailSftNegGrd;
    }

    /* End of Switch: '<S651>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S647>/Limiter' */

    /* Sum: '<S647>/Sum3' */
    VeDTMI_r_Lv2DrvrIntndTotBrkTrqRatio =
        rtb_VeDTMI_r_Lv2DrvrIntndTotBrkTrq_GL_in +
        VeDTMI_r_Lv2DrvrIntndTotBrkTrqRatio;

    /* End of Outputs for SubSystem: '<S5>/LV2_GradientLimiter' */

    /* Product: '<S5>/Product2' */
    VeDTMI_M_Lv2DrvrIntndTotBrkTrq = tmpRead_18 *
        VeDTMI_r_Lv2DrvrIntndTotBrkTrqRatio;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* RelationalOperator: '<S153>/Comparison' incorporates:
     *  Constant: '<S247>/Calib'
     */
    VeDTMC_b_Lv2PtcPdlOvrdInChrg = (VeDTMC_Pct_Lv2AccelPdlPos >=
        KeDTMR_Pct_ASLKickdownThrsh);

    /* RelationalOperator: '<S153>/Comparison4' incorporates:
     *  Constant: '<S249>/Calib'
     */
    VeDTMC_b_Lv2MaxVehSpdOvrdInChrg = (VeDTMI_v_Lv2VehSpd <=
        KeDTMR_v_ASLMaxVehSpdThrsh);

    /* Switch: '<S153>/Switch4' */
    if (rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1)
    {
        /* Switch: '<S153>/Switch4' incorporates:
         *  Logic: '<S153>/Logical6'
         */
        VeDTMC_b_Lv2ASLPdlOvrdInChrg = ((VeDTMC_b_Lv2PtcPdlOvrdInChrg) &&
            (VeDTMC_b_Lv2MaxVehSpdOvrdInChrg));
    }
    else
    {
        /* Switch: '<S153>/Switch4' incorporates:
         *  Constant: '<S153>/FALSEConstant'
         */
        VeDTMC_b_Lv2ASLPdlOvrdInChrg = false;
    }

    /* End of Switch: '<S153>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_b_Lv2BMS_HV_SOCV' */
    (void)Rte_Read_VeSCMR_b_Lv2BMS_HV_SOCV_Value(&tmpRead_e);

    /* Inport: '<Root>/VeLTIR_b_Lv2HV_BatSOC_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2HV_BatSOC_FA_Value(&tmpRead_d);

    /* Inport: '<Root>/VeSCMR_b_Lv2BMS_HV_CurrentSts' */
    (void)Rte_Read_VeSCMR_b_Lv2BMS_HV_CurrentSts_Value(&tmpRead_b);

    /* Inport: '<Root>/VeLTIR_b_Lv2HV_BatCrnt_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2HV_BatCrnt_FA_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Logic: '<S17>/Logical4' */
    VeDTMC_b_Lv2HVBatSOC_Flt = (tmpRead_d || tmpRead_e);

    /* Logic: '<S17>/Logical5' */
    VeDTMC_b_Lv2HVBatCrnt_Flt = (tmpRead_a || tmpRead_b);

    /* Logic: '<S17>/Logical' */
    VeDTMC_b_Lv2CANErr4SOCCalc = ((VeDTMC_b_Lv2HVBatSOC_Flt) &&
        (VeDTMC_b_Lv2HVBatCrnt_Flt));

    /* Logic: '<S17>/Logical3' */
    VeDTMC_b_Lv2HVBatCrntNotFltd = !VeDTMC_b_Lv2HVBatCrnt_Flt;

    /* RelationalOperator: '<S17>/Comparison2' incorporates:
     *  Constant: '<S399>/Calib'
     */
    VeDTMC_b_Lv2CrntLo4BattSocEst = (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB <
        KeDTMR_I_MinCrntForSoCCalc);

    /* Logic: '<S17>/Logical2' */
    VeDTMC_b_Lv2CurrLo4SOCCalc = (((VeDTMC_b_Lv2HVBatSOC_Flt) &&
        (VeDTMC_b_Lv2HVBatCrntNotFltd)) && (VeDTMC_b_Lv2CrntLo4BattSocEst));

    /* Logic: '<S17>/Logical1' */
    VeDTMC_b_Lv2HVBatSoCFA = ((VeDTMC_b_Lv2CANErr4SOCCalc) ||
        (VeDTMC_b_Lv2CurrLo4SOCCalc));

    /* Logic: '<S158>/Logical1' */
    VeDTMC_b_VehSpd_SOC_FA = (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd ||
        (VeDTMC_b_Lv2HVBatSoCFA));

    /* Switch: '<S398>/Switch4' incorporates:
     *  Logic: '<S406>/AND1'
     *  Logic: '<S406>/OR2'
     *  UnitDelay: '<S406>/UnitDelay'
     */
    if ((VeDTMC_b_Lv2HVBatSOC_Flt) &&
            (!DTMR_ac_DW.VeDTMC_b_Lv2HVBattSoCFA_ER_prev))
    {
        /* Switch: '<S398>/Switch4' incorporates:
         *  UnitDelay: '<S398>/UnitDelay'
         */
        VeDTMC_Pct_Lv2SOC_Init = DTMR_ac_DW.VeDTMC_Pct_Lv2HVBattSOC_Prev;
    }

    /* End of Switch: '<S398>/Switch4' */

    /* UnitDelay: '<S398>/UnitDelay2' */
    VeDTMC_b_SOC_FA_Dlyd = DTMR_ac_DW.VeDTMC_b_SOC_FA_Trgr_Prev;

    /* Product: '<S398>/Product' incorporates:
     *  Constant: '<S403>/Calib'
     *  Gain: '<S398>/Gain1'
     */
    VeDTMC_qAhr_BattCap_AmpHrs = ((-rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB) *
        KeDTMR_t_dT) * -0.027777778F;

    /* Outputs for Atomic SubSystem: '<S398>/LV2_DivideWithProtection1' */
    /* Switch: '<S405>/Switch1' incorporates:
     *  Constant: '<S400>/Calib'
     *  Constant: '<S405>/ConstantValue'
     *  Constant: '<S405>/ConstantValue1'
     *  Constant: '<S405>/ConstantValue2'
     *  Constant: '<S405>/ConstantValue3'
     *  Logic: '<S405>/AND'
     *  RelationalOperator: '<S405>/Comparison1'
     *  RelationalOperator: '<S405>/Comparison2'
     *  RelationalOperator: '<S405>/Comparison3'
     *  RelationalOperator: '<S405>/Comparison4'
     *  Switch: '<S405>/Switch2'
     *  Switch: '<S405>/Switch3'
     */
    if ((KeDTMR_EWhr_BattCapacity != 0.0F) &&
            (rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB != 0.0F))
    {
        /* Switch: '<S405>/Switch1' incorporates:
         *  Product: '<S405>/Division'
         */
        VeDTMC_qAhr_BattCapacity_AmpHrs = KeDTMR_EWhr_BattCapacity /
            rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB;
    }
    else if (KeDTMR_EWhr_BattCapacity > 0.0F)
    {
        /* Switch: '<S405>/Switch2' incorporates:
         *  Constant: '<S405>/MAXFLOAT'
         *  Switch: '<S405>/Switch1'
         */
        VeDTMC_qAhr_BattCapacity_AmpHrs = 3.402823466E+38F;
    }
    else if (KeDTMR_EWhr_BattCapacity < 0.0F)
    {
        /* Switch: '<S405>/Switch3' incorporates:
         *  Constant: '<S405>/MINFLOAT'
         *  Switch: '<S405>/Switch1'
         *  Switch: '<S405>/Switch2'
         */
        VeDTMC_qAhr_BattCapacity_AmpHrs = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S405>/Switch1' incorporates:
         *  Constant: '<S405>/ConstantValue4'
         *  Switch: '<S405>/Switch2'
         *  Switch: '<S405>/Switch3'
         */
        VeDTMC_qAhr_BattCapacity_AmpHrs = 0.0F;
    }

    /* End of Switch: '<S405>/Switch1' */
    /* End of Outputs for SubSystem: '<S398>/LV2_DivideWithProtection1' */

    /* Switch: '<S398>/Switch2' incorporates:
     *  Constant: '<S401>/Calib'
     */
    if (KeDTMR_b_CalcBattCap)
    {
        /* Switch: '<S398>/Switch2' */
        VeDTMC_qAhr_Lv2BattCap_Arb = VeDTMC_qAhr_BattCapacity_AmpHrs;
    }
    else
    {
        /* Switch: '<S398>/Switch2' incorporates:
         *  Constant: '<S402>/Calib'
         */
        VeDTMC_qAhr_Lv2BattCap_Arb = KeDTMR_qAhr_BattCap;
    }

    /* End of Switch: '<S398>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S398>/LV2_DivideWithProtection' */
    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S404>/ConstantValue'
     *  Constant: '<S404>/ConstantValue1'
     *  Constant: '<S404>/ConstantValue2'
     *  Constant: '<S404>/ConstantValue3'
     *  Logic: '<S404>/AND'
     *  RelationalOperator: '<S404>/Comparison1'
     *  RelationalOperator: '<S404>/Comparison2'
     *  RelationalOperator: '<S404>/Comparison3'
     *  RelationalOperator: '<S404>/Comparison4'
     *  Switch: '<S404>/Switch2'
     *  Switch: '<S404>/Switch3'
     */
    if ((VeDTMC_qAhr_BattCap_AmpHrs != 0.0F) && (VeDTMC_qAhr_Lv2BattCap_Arb !=
            0.0F))
    {
        /* Switch: '<S404>/Switch1' incorporates:
         *  Product: '<S404>/Division'
         */
        VeDTMC_Pct_HVBatSOCAcc = VeDTMC_qAhr_BattCap_AmpHrs /
            VeDTMC_qAhr_Lv2BattCap_Arb;
    }
    else if (VeDTMC_qAhr_BattCap_AmpHrs > 0.0F)
    {
        /* Switch: '<S404>/Switch2' incorporates:
         *  Constant: '<S404>/MAXFLOAT'
         *  Switch: '<S404>/Switch1'
         */
        VeDTMC_Pct_HVBatSOCAcc = 3.402823466E+38F;
    }
    else if (VeDTMC_qAhr_BattCap_AmpHrs < 0.0F)
    {
        /* Switch: '<S404>/Switch3' incorporates:
         *  Constant: '<S404>/MINFLOAT'
         *  Switch: '<S404>/Switch1'
         *  Switch: '<S404>/Switch2'
         */
        VeDTMC_Pct_HVBatSOCAcc = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S404>/Switch1' incorporates:
         *  Constant: '<S404>/ConstantValue4'
         *  Switch: '<S404>/Switch2'
         *  Switch: '<S404>/Switch3'
         */
        VeDTMC_Pct_HVBatSOCAcc = 0.0F;
    }

    /* End of Switch: '<S404>/Switch1' */
    /* End of Outputs for SubSystem: '<S398>/LV2_DivideWithProtection' */

    /* Sum: '<S398>/Sum2' */
    VeDTMC_Pct_HVBatSOCCalc = VeDTMC_Pct_HVBatSOCAcc + VeDTMC_Pct_Lv2EstHVBatSOC;

    /* Switch: '<S398>/Switch1' incorporates:
     *  UnitDelay: '<S398>/UnitDelay4'
     */
    if (DTMR_ac_DW.VeDTMC_b_SOC_FA_Enbl_Prev)
    {
        /* Switch: '<S398>/Switch1' */
        VeDTMC_Pct_HVBatSOCArb = VeDTMC_Pct_HVBatSOCCalc;
    }
    else
    {
        /* Switch: '<S398>/Switch1' incorporates:
         *  Constant: '<S398>/ConstantValue4'
         */
        VeDTMC_Pct_HVBatSOCArb = 0.0F;
    }

    /* End of Switch: '<S398>/Switch1' */

    /* Switch: '<S398>/Switch' incorporates:
     *  Logic: '<S407>/AND1'
     *  Logic: '<S407>/OR2'
     *  UnitDelay: '<S407>/UnitDelay'
     */
    if ((VeDTMC_b_SOC_FA_Dlyd) && (!DTMR_ac_DW.VeDTMC_b_SOC_FA_Dlyd_ER_prev))
    {
        /* Switch: '<S398>/Switch' */
        VeDTMC_Pct_Lv2EstHVBatSOC = VeDTMC_Pct_Lv2SOC_Init;
    }
    else
    {
        /* Switch: '<S398>/Switch' */
        VeDTMC_Pct_Lv2EstHVBatSOC = VeDTMC_Pct_HVBatSOCArb;
    }

    /* End of Switch: '<S398>/Switch' */

    /* RelationalOperator: '<S398>/Comparison2' incorporates:
     *  Constant: '<S398>/ConstantValue2'
     */
    VeDTMC_b_EstHVBatSOCLTZero = (VeDTMC_Pct_Lv2EstHVBatSOC < 0.0F);

    /* RelationalOperator: '<S398>/Comparison1' incorporates:
     *  Constant: '<S398>/ConstantValue5'
     */
    VeDTMC_b_EstHVBatSOCGTHundred = (VeDTMC_Pct_Lv2EstHVBatSOC > 100.0F);

    /* Switch: '<S398>/Switch6' */
    if (VeDTMC_b_EstHVBatSOCGTHundred)
    {
        /* Switch: '<S398>/Switch6' incorporates:
         *  Constant: '<S398>/ConstantValue6'
         */
        VeDTMC_Pct_EstHVBatSoCMaxLmtd = 100.0F;
    }
    else
    {
        /* Switch: '<S398>/Switch6' */
        VeDTMC_Pct_EstHVBatSoCMaxLmtd = VeDTMC_Pct_Lv2EstHVBatSOC;
    }

    /* End of Switch: '<S398>/Switch6' */

    /* Switch: '<S398>/Switch5' */
    if (VeDTMC_b_EstHVBatSOCLTZero)
    {
        /* Switch: '<S398>/Switch5' incorporates:
         *  Constant: '<S398>/ConstantValue3'
         */
        VeDTMC_Pct_Lv2EstHVBatSOC_Arb = 0.0F;
    }
    else
    {
        /* Switch: '<S398>/Switch5' */
        VeDTMC_Pct_Lv2EstHVBatSOC_Arb = VeDTMC_Pct_EstHVBatSoCMaxLmtd;
    }

    /* End of Switch: '<S398>/Switch5' */

    /* Switch: '<S398>/Switch3' */
    if (VeDTMC_b_Lv2HVBatSOC_Flt)
    {
        /* Switch: '<S398>/Switch3' */
        VeDTMC_Pct_Lv2HVBatSoC = VeDTMC_Pct_Lv2EstHVBatSOC_Arb;
    }
    else
    {
        /* Switch: '<S398>/Switch3' */
        VeDTMC_Pct_Lv2HVBatSoC = rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H;
    }

    /* End of Switch: '<S398>/Switch3' */

    /* Lookup_n-D: '<S172>/Vector' incorporates:
     *  Switch: '<S398>/Switch3'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_AccelPdlMaxWhlTrq_R = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2HVBatSoC, ((const
           float32 *)&(KxDTMR_M_AccelPdlMaxWhlTrq_R[0])), ((const float32 *)
          &(KyDTMR_M_AccelPdlMaxWhlTrq_R[0])), ((const float32 *)
          &(KtDTMR_M_AccelPdlMaxWhlTrq_R[0])), DTMR_ac_ConstP.Vector_maxIndex,
         8U);

    /* Lookup_n-D: '<S171>/Vector' incorporates:
     *  Switch: '<S398>/Switch3'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_AccelPdlMaxWhlTrq_D = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2HVBatSoC, ((const
           float32 *)&(KxDTMR_M_AccelPdlMaxWhlTrq_D[0])), ((const float32 *)
          &(KyDTMR_M_AccelPdlMaxWhlTrq_D[0])), ((const float32 *)
          &(KtDTMR_M_AccelPdlMaxWhlTrq_D[0])), DTMR_ac_ConstP.Vector_maxIndex_e,
         8U);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMI'
     */
    /* Switch: '<S158>/Switch1' incorporates:
     *  SignalConversion generated from: '<S5>/Lv2_VehInRev'
     */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0])
    {
        /* Switch: '<S158>/Switch1' */
        VeDTMC_M_AccelPdlMaxWhlTrq_Arb = VeDTMC_M_AccelPdlMaxWhlTrq_R;
    }
    else
    {
        /* Switch: '<S158>/Switch1' */
        VeDTMC_M_AccelPdlMaxWhlTrq_Arb = VeDTMC_M_AccelPdlMaxWhlTrq_D;
    }

    /* End of Switch: '<S158>/Switch1' */

    /* Switch: '<S158>/Switch2' */
    if (VeDTMC_b_VehSpd_SOC_FA)
    {
        /* Switch: '<S158>/Switch2' incorporates:
         *  Constant: '<S170>/Calib'
         */
        VeDTMC_M_Lv2AccelPdlMaxWhlTrq_Raw = KeDTMR_M_AccelPdlMaxWhlTrqDflt;
    }
    else
    {
        /* Switch: '<S158>/Switch2' */
        VeDTMC_M_Lv2AccelPdlMaxWhlTrq_Raw = VeDTMC_M_AccelPdlMaxWhlTrq_Arb;
    }

    /* End of Switch: '<S158>/Switch2' */

    /* Switch: '<S158>/Switch3' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1])
    {
        /* Switch: '<S158>/Switch3' incorporates:
         *  Constant: '<S158>/ConstantValue1'
         */
        VeDTMC_M_Lv2AccelPdlMaxWhlTrq = 0.0F;
    }
    else
    {
        /* Switch: '<S158>/Switch3' */
        VeDTMC_M_Lv2AccelPdlMaxWhlTrq = VeDTMC_M_Lv2AccelPdlMaxWhlTrq_Raw;
    }

    /* End of Switch: '<S158>/Switch3' */

    /* Lookup_n-D: '<S246>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_InR_OPDMinTrq = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_InR_OPDMinTrq[0])), ((const float32 *)
          &(KtDTMR_M_InR_OPDMinTrq[0])), 8U);

    /* Lookup_n-D: '<S245>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_InD_OPDMinTrq = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_InD_OPDMinTrq[0])), ((const float32 *)
          &(KtDTMR_M_InD_OPDMinTrq[0])), 8U);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMI'
     */
    /* Switch: '<S160>/Switch2' incorporates:
     *  SignalConversion generated from: '<S5>/Lv2_VehInRev'
     */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0])
    {
        /* Switch: '<S160>/Switch2' */
        rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB = VeDTMC_M_InR_OPDMinTrq;
    }
    else
    {
        /* Switch: '<S160>/Switch2' */
        rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB = VeDTMC_M_InD_OPDMinTrq;
    }

    /* End of Switch: '<S160>/Switch2' */

    /* RelationalOperator: '<S553>/Comparison3' incorporates:
     *  Inport: '<Root>/VeDMIR_e_CreepSts'
     *  Inport: '<Root>/VeDMIR_e_RegenSts'
     *  RelationalOperator: '<S553>/Comparison4'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    (void)Rte_Read_VeDMIR_e_RegenSts_Value(&tmpRead_1j);

    /* RelationalOperator: '<S553>/Comparison3' incorporates:
     *  Constant: '<S561>/Constant'
     *  Inport: '<Root>/VeDMIR_e_RegenSts'
     */
    VeDTMC_b_Lv2RegenSts = (((uint32)tmpRead_1j) == CeDMIR_e_MaxRegen);
    (void)Rte_Read_VeDMIR_e_CreepSts_Value(&tmpRead_1m);

    /* RelationalOperator: '<S553>/Comparison4' incorporates:
     *  Constant: '<S563>/Constant'
     *  Inport: '<Root>/VeDMIR_e_CreepSts'
     */
    VeDTMC_b_Lv1CreepModeOff = (((uint32)tmpRead_1m) == CeDMIR_e_CreepOff);

#endif

    /* End of RelationalOperator: '<S553>/Comparison3' */

    /* RelationalOperator: '<S292>/Comparison14' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2DriveStyleStsFA_CurrMode'
     *  Inport: '<Root>/VeSCMR_b_Lv2DriveStyleStsFA_PreMode'
     *  Inport: '<Root>/VeSCMR_e_Lv2ECO_ModeLatch'
     *  Logic: '<S292>/Logical'
     *  RelationalOperator: '<S292>/Comparison10'
     *  RelationalOperator: '<S292>/Comparison11'
     *  RelationalOperator: '<S292>/Comparison12'
     *  RelationalOperator: '<S292>/Comparison13'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     *  Switch: '<S292>/Switch1'
     *  UnitDelay: '<S292>/UnitDelay'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_1

    (void)Rte_Read_VeSCMR_e_Lv2ECO_ModeLatch_Value(&tmpRead_z);

    /* RelationalOperator: '<S292>/Comparison14' incorporates:
     *  Constant: '<S355>/Constant'
     *  Inport: '<Root>/VeSCMR_e_Lv2ECO_ModeLatch'
     */
    VeDTMC_b_Lv2ECO_Reset2ON = (((uint32)tmpRead_z) == CeDTMR_e_Reset2ON);

    /* Outputs for Function Call SubSystem: '<S1>/DTMI' */
    /* RelationalOperator: '<S292>/Comparison10' incorporates:
     *  Constant: '<S358>/Calib'
     *  DataTypeConversion: '<S5>/DataTypeConversion'
     */
    VeDTMC_b_Lv2DrvStylSts_Normal = (((uint16)tmpRead_i) ==
        KeDTMR_e_Lv2DrvMd_Auto);

    /* End of Outputs for SubSystem: '<S1>/DTMI' */

    /* Logic: '<S292>/Logical' */
    VeDTMC_b_Lv2DrvStylStsFA_Auto = (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Dri ||
        (VeDTMC_b_Lv2DrvStylSts_Normal));

    /* Outputs for Function Call SubSystem: '<S1>/DTMI' */
    /* RelationalOperator: '<S292>/Comparison11' incorporates:
     *  Constant: '<S360>/Calib'
     *  DataTypeConversion: '<S5>/DataTypeConversion'
     */
    VeDTMC_b_Lv2DrvStylSts_Offroad = (((uint16)tmpRead_i) ==
        KeDTMR_e_Lv2DrvMd_Offroad);

    /* RelationalOperator: '<S292>/Comparison12' incorporates:
     *  Constant: '<S359>/Calib'
     *  DataTypeConversion: '<S5>/DataTypeConversion'
     */
    VeDTMC_b_Lv2DrvStylSts_Eco = (((uint16)tmpRead_i) == KeDTMR_e_Lv2DrvMd_ECO);

    /* RelationalOperator: '<S292>/Comparison13' incorporates:
     *  Constant: '<S361>/Calib'
     *  DataTypeConversion: '<S5>/DataTypeConversion'
     */
    VeDTMC_b_Lv2DrvStylSts_Sport = (((uint16)tmpRead_i) ==
        KeDTMR_e_Lv2DrvMd_Sport);

    /* End of Outputs for SubSystem: '<S1>/DTMI' */
    (void)Rte_Read_VeSCMR_b_Lv2DriveStyleStsFA_PreMode_Value(&tmpRead_y);
    if (tmpRead_y)
    {
        /* Switch: '<S292>/Switch2' incorporates:
         *  Constant: '<S352>/Constant'
         *  Constant: '<S356>/Constant'
         *  Switch: '<S292>/Switch1'
         */
        if (VeDTMC_b_Lv2ECO_Reset2ON)
        {
            DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_M182_Prev = CeDTMR_e_DrvMdTotal_Eco;
        }
        else
        {
            DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_M182_Prev = CeDTMR_e_DrvMdTotal_Auto;
        }

        /* End of Switch: '<S292>/Switch2' */
    }
    else
    {
        (void)Rte_Read_VeSCMR_b_Lv2DriveStyleStsFA_CurrMode_Value(&tmpRead_9);

        /* Switch: '<S292>/Switch3' incorporates:
         *  Inport: '<Root>/VeSCMR_b_Lv2DriveStyleStsFA_CurrMode'
         */
        if (!tmpRead_9)
        {
            /* Switch: '<S292>/Switch7' incorporates:
             *  Switch: '<S292>/Switch4'
             *  Switch: '<S292>/Switch5'
             *  Switch: '<S292>/Switch6'
             */
            if (VeDTMC_b_Lv2DrvStylStsFA_Auto)
            {
                /* Switch: '<S292>/Switch1' incorporates:
                 *  Constant: '<S357>/Constant'
                 *  Switch: '<S292>/Switch3'
                 *  Switch: '<S292>/Switch7'
                 */
                DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_M182_Prev =
                    CeDTMR_e_DrvMdTotal_Auto;
            }
            else if (VeDTMC_b_Lv2DrvStylSts_Offroad)
            {
                /* Switch: '<S292>/Switch1' incorporates:
                 *  Constant: '<S351>/Constant'
                 *  Switch: '<S292>/Switch3'
                 *  Switch: '<S292>/Switch6'
                 */
                DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_M182_Prev =
                    CeDTMR_e_DrvMdTotal_OffRoad;
            }
            else if (VeDTMC_b_Lv2DrvStylSts_Eco)
            {
                /* Switch: '<S292>/Switch1' incorporates:
                 *  Constant: '<S353>/Constant'
                 *  Switch: '<S292>/Switch3'
                 *  Switch: '<S292>/Switch5'
                 *  Switch: '<S292>/Switch6'
                 */
                DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_M182_Prev =
                    CeDTMR_e_DrvMdTotal_Eco;
            }
            else
            {
                if (VeDTMC_b_Lv2DrvStylSts_Sport)
                {
                    /* Switch: '<S292>/Switch1' incorporates:
                     *  Constant: '<S354>/Constant'
                     *  Switch: '<S292>/Switch3'
                     *  Switch: '<S292>/Switch4'
                     *  Switch: '<S292>/Switch5'
                     *  Switch: '<S292>/Switch6'
                     */
                    DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_M182_Prev =
                        CeDTMR_e_DrvMdTotal_Sport;
                }
            }

            /* End of Switch: '<S292>/Switch7' */
        }

        /* End of Switch: '<S292>/Switch3' */
    }

    /* DataTypeConversion: '<S553>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2DriveStyleStsFA_CurrMode'
     *  Inport: '<Root>/VeSCMR_b_Lv2DriveStyleStsFA_PreMode'
     *  Switch: '<S292>/Switch1'
     */
    VeDTMC_e_Lv2DriverMd_Arb = DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_M182_Prev;

#endif

    /* End of RelationalOperator: '<S292>/Comparison14' */

    /* RelationalOperator: '<S293>/Comparison1' incorporates:
     *  Constant: '<S294>/Constant'
     *  Constant: '<S295>/Constant'
     *  Constant: '<S296>/Constant'
     *  Constant: '<S297>/Constant'
     *  Constant: '<S298>/Constant'
     *  Constant: '<S303>/Constant'
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     *  Inport: '<Root>/VeEBMR_e_eBoostStatus'
     *  Inport: '<Root>/VeLTIR_b_Lv2GlobDrvMdRq_BCM_FA'
     *  Inport: '<Root>/VeLTIR_b_Lv2GlobDrvMdRq_FA'
     *  Inport: '<Root>/VeLTIR_b_Lv2Trns_DrvMdReq_FA'
     *  Inport: '<Root>/VeSCMR_e_Lv2GlobDrvMdRq'
     *  Inport: '<Root>/VeSCMR_e_Lv2GlobDrvMdRq_BCM'
     *  Logic: '<S304>/Logical1'
     *  Logic: '<S304>/Logical2'
     *  Logic: '<S305>/Logical2'
     *  Logic: '<S305>/Logical7'
     *  Logic: '<S305>/Logical8'
     *  Logic: '<S305>/Logical9'
     *  Logic: '<S306>/Logical1'
     *  Logic: '<S306>/Logical2'
     *  Logic: '<S306>/Logical3'
     *  Logic: '<S306>/Logical4'
     *  Logic: '<S306>/Logical5'
     *  Logic: '<S306>/Logical6'
     *  RelationalOperator: '<S293>/Comparison10'
     *  RelationalOperator: '<S293>/Comparison11'
     *  RelationalOperator: '<S293>/Comparison12'
     *  RelationalOperator: '<S293>/Comparison9'
     *  RelationalOperator: '<S304>/Comparison1'
     *  RelationalOperator: '<S305>/Comparison10'
     *  RelationalOperator: '<S305>/Comparison11'
     *  RelationalOperator: '<S305>/Comparison12'
     *  RelationalOperator: '<S305>/Comparison13'
     *  RelationalOperator: '<S305>/Comparison14'
     *  RelationalOperator: '<S305>/Comparison15'
     *  RelationalOperator: '<S305>/Comparison16'
     *  RelationalOperator: '<S305>/Comparison8'
     *  RelationalOperator: '<S305>/Comparison9'
     *  RelationalOperator: '<S306>/Comparison1'
     *  RelationalOperator: '<S306>/Comparison2'
     *  RelationalOperator: '<S306>/Comparison3'
     *  RelationalOperator: '<S306>/Comparison4'
     *  RelationalOperator: '<S306>/Comparison5'
     *  RelationalOperator: '<S306>/Comparison6'
     *  RelationalOperator: '<S306>/Comparison7'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     *  Switch: '<S293>/Switch14'
     *  Switch: '<S293>/Switch15'
     *  Switch: '<S293>/Switch16'
     *  Switch: '<S293>/Switch17'
     *  Switch: '<S293>/Switch5'
     *  Switch: '<S304>/Switch13'
     *  Switch: '<S304>/Switch5'
     *  Switch: '<S305>/Switch5'
     *  Switch: '<S305>/Switch6'
     *  Switch: '<S306>/Switch1'
     *  Switch: '<S306>/Switch2'
     *  Switch: '<S306>/Switch3'
     *  Switch: '<S306>/Switch4'
     *  UnitDelay: '<S293>/UnitDelay1'
     *  UnitDelay: '<S304>/UnitDelay1'
     * */
#if Rte_SysCon_Variant_DTMR_FUNC_4

    if (((uint32)rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd) == CeTMDR_e_Auto)
    {
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev = CeDTMR_e_DrvMdTotal_Auto;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd) ==
             CeTMDR_e_Sport)
    {
        /* Switch: '<S293>/Switch5' incorporates:
         *  Constant: '<S299>/Constant'
         *  Switch: '<S293>/Switch14'
         */
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev = CeDTMR_e_DrvMdTotal_Sport;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd) ==
             CeTMDR_e_MudSand)
    {
        /* Switch: '<S293>/Switch5' incorporates:
         *  Constant: '<S302>/Constant'
         *  Switch: '<S293>/Switch14'
         *  Switch: '<S293>/Switch15'
         */
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev = CeDTMR_e_DrvMdTotal_MudSand;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd) == CeTMDR_e_Snow)
    {
        /* Switch: '<S293>/Switch5' incorporates:
         *  Constant: '<S301>/Constant'
         *  Switch: '<S293>/Switch14'
         *  Switch: '<S293>/Switch15'
         *  Switch: '<S293>/Switch16'
         */
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev = CeDTMR_e_DrvMdTotal_Snow;
    }
    else
    {
        if (((uint32)rtb_TmpSignalConversionAtVeTMDR_e_TrrnMd) == CeTMDR_e_Rock)
        {
            /* Switch: '<S293>/Switch5' incorporates:
             *  Constant: '<S300>/Constant'
             *  Switch: '<S293>/Switch14'
             *  Switch: '<S293>/Switch15'
             *  Switch: '<S293>/Switch16'
             *  Switch: '<S293>/Switch17'
             */
            DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev = CeDTMR_e_DrvMdTotal_Rock;
        }
    }

    /* DataTypeConversion: '<S553>/Data Type Conversion' incorporates:
     *  Constant: '<S294>/Constant'
     *  Constant: '<S295>/Constant'
     *  Constant: '<S296>/Constant'
     *  Constant: '<S297>/Constant'
     *  Constant: '<S298>/Constant'
     *  Constant: '<S303>/Constant'
     *  RelationalOperator: '<S293>/Comparison10'
     *  RelationalOperator: '<S293>/Comparison11'
     *  RelationalOperator: '<S293>/Comparison12'
     *  RelationalOperator: '<S293>/Comparison9'
     *  Switch: '<S293>/Switch14'
     *  Switch: '<S293>/Switch15'
     *  Switch: '<S293>/Switch16'
     *  Switch: '<S293>/Switch17'
     *  Switch: '<S293>/Switch5'
     */
    VeDTMC_e_Lv2DriverMd_Arb = DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev;

#elif !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value(&tmpRead_1i);
    (void)Rte_Read_VeLTIR_b_Lv2GlobDrvMdRq_BCM_FA_Value
        (&rtb_VeDTMC_b_NoTurtleMd_arb);
    (void)Rte_Read_VeLTIR_b_Lv2GlobDrvMdRq_FA_Value
        ((&(VeDTMC_b_Lv2GlobalDrvMdReqFA)));
    (void)Rte_Read_VeSCMR_e_Lv2GlobDrvMdRq_BCM_Value(&tmpRead_1e);
    (void)Rte_Read_VeSCMR_e_Lv2GlobDrvMdRq_Value
        (&rtb_VeDTMC_e_Lv2GlobalDrvMdReq_arb);

    /* Switch: '<S306>/Switch1' incorporates:
     *  Constant: '<S344>/Calib'
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     *  Inport: '<Root>/VeLTIR_b_Lv2GlobDrvMdRq_BCM_FA'
     *  Inport: '<Root>/VeLTIR_b_Lv2GlobDrvMdRq_FA'
     *  Inport: '<Root>/VeSCMR_e_Lv2GlobDrvMdRq'
     *  Inport: '<Root>/VeSCMR_e_Lv2GlobDrvMdRq_BCM'
     *  Switch: '<S306>/Switch3'
     */
    if (KeDTMR_b_RadioFromBCM)
    {
        /* Switch: '<S306>/Switch1' */
        VeDTMC_b_Lv2GlobalDrvMdReqFA = rtb_VeDTMC_b_NoTurtleMd_arb;

        /* Switch: '<S306>/Switch2' */
        rtb_VeDTMC_e_Lv2GlobalDrvMdReq_arb = tmpRead_1e;
    }

    /* Logic: '<S306>/Logical1' incorporates:
     *  Constant: '<S346>/Calib'
     *  RelationalOperator: '<S306>/Comparison1'
     */
    VeDTMC_b_Lv2TerrainMdFA = ((VeDTMC_b_Lv2GlobalDrvMdReqFA) ||
        (rtb_VeDTMC_e_Lv2GlobalDrvMdReq_arb == KeDTMR_e_Lv2DrvMd_NotDefined));

    /* Logic: '<S306>/Logical2' incorporates:
     *  Constant: '<S343>/Calib'
     */
    VeDTMC_b_Lv2TerrainMdFA_Diag = ((KeDTMR_b_EnblLv2DrvMdDiag) &&
        (VeDTMC_b_Lv2TerrainMdFA));

    /* Switch: '<S306>/Switch2' */
    if (VeDTMC_b_Lv2TerrainMdFA_Diag)
    {
        /* Switch: '<S306>/Switch2' incorporates:
         *  Constant: '<S345>/Calib'
         */
        rtb_VeDTMC_e_Lv2GlobalDrvMdReq_arb = KeDTMR_e_Lv2DrvMd_Auto;
    }

    /* Logic: '<S306>/Logical3' incorporates:
     *  Constant: '<S347>/Calib'
     *  Constant: '<S349>/Calib'
     *  RelationalOperator: '<S306>/Comparison2'
     *  RelationalOperator: '<S306>/Comparison3'
     */
    VeDTMC_b_Lv2TrnMdRock_Chk = ((VeDTMI_v_Lv2VehSpd > KeDTMR_v_SpdRockMdTh) &&
        (rtb_VeDTMC_e_Lv2GlobalDrvMdReq_arb == KeDTMR_e_Lv2DrvMd_Rock));

    /* Switch: '<S13>/Switch3' incorporates:
     *  Constant: '<S348>/Calib'
     *  RelationalOperator: '<S306>/Comparison5'
     */
    rtb_VeDTMC_b_NoTurtleMd_arb = (rtb_VeDTMC_e_Lv2GlobalDrvMdReq_arb ==
        KeDTMR_e_Lv2DrvMd_Valet);

    /* Logic: '<S306>/Logical4' incorporates:
     *  Constant: '<S342>/Calib'
     *  RelationalOperator: '<S306>/Comparison6'
     */
    VeDTMC_b_Lv2TrnMdValet_PdlChk = ((VeDTMC_Pct_Lv2AccelPdlPos >
        KeDTMR_Pct_GasPedalNotPresPos) && rtb_VeDTMC_b_NoTurtleMd_arb);

    /* Logic: '<S306>/Logical5' incorporates:
     *  Constant: '<S350>/Calib'
     *  RelationalOperator: '<S306>/Comparison4'
     */
    VeDTMC_b_Lv2TrnMdValet_SpdChk = (rtb_VeDTMC_b_NoTurtleMd_arb &&
        (VeDTMI_v_Lv2VehSpd > KeDTMR_v_SpdValetMdTh));

    /* RelationalOperator: '<S306>/Comparison7' incorporates:
     *  Constant: '<S341>/Constant'
     */
    VeDTMC_b_Lv1RaceMdSts = (((uint32)rtb_TmpSignalConversionAtVeTIMR_e_RaceMo) ==
        CeTIMR_e_RaceMode_Active);

    /* Logic: '<S306>/Logical6' */
    VeDTMC_b_Lv2TrnMd_TotalChk = (((((VeDTMC_b_Lv2TrnMdRock_Chk) ||
        (VeDTMC_b_Lv2TrnMdValet_PdlChk)) || (VeDTMC_b_Lv2TrnMdValet_SpdChk)) ||
        (VeDTMC_b_Lv1RaceMdSts)) || rtb_TmpSignalConversionAtVeSRAR_b_Inhibi);

    /* Switch: '<S306>/Switch4' */
    if (!VeDTMC_b_Lv2TrnMd_TotalChk)
    {
        /* Switch: '<S306>/Switch4' */
        VeDTMC_e_Lv2TrnMd_Arb = rtb_VeDTMC_e_Lv2GlobalDrvMdReq_arb;
    }

    /* Switch: '<S305>/Switch5' incorporates:
     *  Constant: '<S336>/Calib'
     *  RelationalOperator: '<S305>/Comparison8'
     */
    if (VeDTMC_e_Lv2TrnMd_Arb == KeDTMR_e_Lv2DrvMd_ECO)
    {
        /* Switch: '<S305>/Switch5' */
        VeDTMC_e_Lv2PropulsionMd_Limp = KeDTMR_e_Lv2DrvMd_ECO;
    }
    else
    {
        /* Switch: '<S305>/Switch5' incorporates:
         *  Constant: '<S338>/Calib'
         */
        VeDTMC_e_Lv2PropulsionMd_Limp = KeDTMR_e_Lv2DrvMd_Street;
    }

    (void)Rte_Read_VeEBMR_e_eBoostStatus_Value(&tmpRead_1f);

    /* Logic: '<S305>/Logical7' incorporates:
     *  Constant: '<S331>/Constant'
     *  Constant: '<S332>/Constant'
     *  Inport: '<Root>/VeEBMR_e_eBoostStatus'
     *  RelationalOperator: '<S305>/Comparison10'
     *  RelationalOperator: '<S305>/Comparison9'
     */
    VeDTMC_b_Lv2PropulsionMd_Cond1 = ((((uint32)
        rtb_TmpSignalConversionAtVeTIMR_e_RaceMo) == CeTIMR_e_RaceMode_Active) ||
        (((uint32)tmpRead_1f) == CeEBMR_e_eBoostEngaged));

    /* RelationalOperator: '<S305>/Comparison11' incorporates:
     *  Constant: '<S340>/Calib'
     */
    VeDTMC_b_Lv2PropulsionMd_Cond2 = (VeDTMC_e_Lv2TrnMd_Arb ==
        KeDTMR_e_Lv2DrvMd_Valet);

    /* RelationalOperator: '<S305>/Comparison12' incorporates:
     *  Constant: '<S333>/Calib'
     */
    VeDTMC_b_Lv2PropulsionMd_Cond3 = (VeDTMC_e_Lv2TrnMd_Arb ==
        KeDTMR_e_Lv2DrvMd_Auto);

    /* Logic: '<S305>/Logical8' incorporates:
     *  Constant: '<S337>/Calib'
     *  Constant: '<S338>/Calib'
     *  Constant: '<S339>/Calib'
     *  RelationalOperator: '<S305>/Comparison13'
     *  RelationalOperator: '<S305>/Comparison14'
     *  RelationalOperator: '<S305>/Comparison15'
     */
    VeDTMC_b_Lv2TrnMd_CustomChk = (((rtb_DataTypeConversion2 ==
        KeDTMR_e_Lv2DrvMd_Sport) || (rtb_DataTypeConversion2 ==
        KeDTMR_e_Lv2DrvMd_Street)) || (rtb_DataTypeConversion2 ==
        KeDTMR_e_Lv2DrvMd_Track));
    (void)Rte_Read_VeLTIR_b_Lv2Trns_DrvMdReq_FA_Value(&tmpRead_1h);

    /* Logic: '<S305>/Logical9' incorporates:
     *  Constant: '<S334>/Calib'
     *  Inport: '<Root>/VeLTIR_b_Lv2Trns_DrvMdReq_FA'
     *  Logic: '<S305>/Logical2'
     *  RelationalOperator: '<S305>/Comparison16'
     */
    VeDTMC_b_Lv2PropulsionMd_Cond4 = (((VeDTMC_b_Lv2TrnMd_CustomChk) &&
        (VeDTMC_e_Lv2TrnMd_Arb == KeDTMR_e_Lv2DrvMd_CUSTOM)) && (!tmpRead_1h));

    /* Switch: '<S305>/Switch6' incorporates:
     *  Switch: '<S305>/Switch1'
     *  Switch: '<S305>/Switch2'
     *  Switch: '<S305>/Switch3'
     *  Switch: '<S305>/Switch4'
     */
    if (rtb_TmpSignalConversionAtVeSRAR_b_Inhibi)
    {
        /* Switch: '<S305>/Switch6' */
        VeDTMC_e_Lv2PropulsionMd = VeDTMC_e_Lv2PropulsionMd_Limp;
    }
    else if (VeDTMC_b_Lv2PropulsionMd_Cond1)
    {
        /* Switch: '<S305>/Switch6' incorporates:
         *  Constant: '<S335>/Calib'
         *  Switch: '<S305>/Switch4'
         */
        VeDTMC_e_Lv2PropulsionMd = KeDTMR_e_Lv2DrvMd_Drag;
    }
    else if (VeDTMC_b_Lv2PropulsionMd_Cond2)
    {
        /* Switch: '<S305>/Switch6' incorporates:
         *  Constant: '<S336>/Calib'
         *  Switch: '<S305>/Switch3'
         *  Switch: '<S305>/Switch4'
         */
        VeDTMC_e_Lv2PropulsionMd = KeDTMR_e_Lv2DrvMd_ECO;
    }
    else if (VeDTMC_b_Lv2PropulsionMd_Cond3)
    {
        /* Switch: '<S305>/Switch6' incorporates:
         *  Constant: '<S338>/Calib'
         *  Switch: '<S305>/Switch2'
         *  Switch: '<S305>/Switch3'
         *  Switch: '<S305>/Switch4'
         */
        VeDTMC_e_Lv2PropulsionMd = KeDTMR_e_Lv2DrvMd_Street;
    }
    else if (VeDTMC_b_Lv2PropulsionMd_Cond4)
    {
        /* Switch: '<S305>/Switch6' incorporates:
         *  Switch: '<S305>/Switch1'
         *  Switch: '<S305>/Switch2'
         *  Switch: '<S305>/Switch3'
         *  Switch: '<S305>/Switch4'
         */
        VeDTMC_e_Lv2PropulsionMd = rtb_DataTypeConversion2;
    }
    else
    {
        /* Switch: '<S305>/Switch6' incorporates:
         *  Switch: '<S305>/Switch1'
         *  Switch: '<S305>/Switch2'
         *  Switch: '<S305>/Switch3'
         *  Switch: '<S305>/Switch4'
         */
        VeDTMC_e_Lv2PropulsionMd = VeDTMC_e_Lv2TrnMd_Arb;
    }

    /* Switch: '<S304>/Switch5' incorporates:
     *  Constant: '<S319>/Calib'
     */
    if (KeDTMR_b_UsePropulsionMd)
    {
        /* Switch: '<S304>/Switch5' */
        VeDTMC_e_Lv2TrnMd_Selected = VeDTMC_e_Lv2PropulsionMd;
    }
    else
    {
        /* Switch: '<S304>/Switch5' */
        VeDTMC_e_Lv2TrnMd_Selected = VeDTMC_e_Lv2TrnMd_Arb;
    }

    /* Switch: '<S304>/Switch13' incorporates:
     *  Constant: '<S310>/Constant'
     *  Constant: '<S312>/Constant'
     *  Constant: '<S319>/Calib'
     *  Constant: '<S320>/Calib'
     *  Constant: '<S323>/Calib'
     *  Constant: '<S324>/Calib'
     *  Constant: '<S325>/Calib'
     *  Constant: '<S326>/Calib'
     *  Constant: '<S327>/Calib'
     *  Constant: '<S328>/Calib'
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     *  Logic: '<S304>/Logical1'
     *  Logic: '<S304>/Logical2'
     *  Logic: '<S304>/Logical3'
     *  RelationalOperator: '<S304>/Comparison1'
     *  RelationalOperator: '<S304>/Comparison2'
     *  RelationalOperator: '<S304>/Comparison3'
     *  RelationalOperator: '<S304>/Comparison4'
     *  RelationalOperator: '<S304>/Comparison5'
     *  RelationalOperator: '<S304>/Comparison6'
     *  RelationalOperator: '<S304>/Comparison7'
     *  RelationalOperator: '<S304>/Comparison8'
     *  Switch: '<S304>/Switch10'
     *  Switch: '<S304>/Switch11'
     *  Switch: '<S304>/Switch12'
     *  Switch: '<S304>/Switch6'
     *  Switch: '<S304>/Switch7'
     *  Switch: '<S304>/Switch8'
     *  Switch: '<S304>/Switch9'
     *  UnitDelay: '<S304>/UnitDelay1'
     */
    if ((!KeDTMR_b_UsePropulsionMd) && (((uint32)tmpRead_1i) ==
            CeDMDR_e_Camel_Mode))
    {
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a = CeDTMR_e_DrvMdTotal_Eco;
    }
    else if ((VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_Auto) ||
             (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_Street))
    {
        /* Switch: '<S304>/Switch12' incorporates:
         *  Constant: '<S313>/Constant'
         */
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a = CeDTMR_e_DrvMdTotal_Auto;
    }
    else if (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_Sport)
    {
        /* Switch: '<S304>/Switch12' incorporates:
         *  Constant: '<S314>/Constant'
         *  Switch: '<S304>/Switch11'
         */
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a = CeDTMR_e_DrvMdTotal_Sport;
    }
    else if (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_Rock)
    {
        /* Switch: '<S304>/Switch12' incorporates:
         *  Constant: '<S315>/Constant'
         *  Switch: '<S304>/Switch10'
         *  Switch: '<S304>/Switch11'
         */
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a = CeDTMR_e_DrvMdTotal_Rock;
    }
    else if (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_Snow)
    {
        /* Switch: '<S304>/Switch12' incorporates:
         *  Constant: '<S316>/Constant'
         *  Switch: '<S304>/Switch10'
         *  Switch: '<S304>/Switch11'
         *  Switch: '<S304>/Switch9'
         */
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a = CeDTMR_e_DrvMdTotal_Snow;
    }
    else if (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_MudSand)
    {
        /* Switch: '<S304>/Switch12' incorporates:
         *  Constant: '<S317>/Constant'
         *  Switch: '<S304>/Switch10'
         *  Switch: '<S304>/Switch11'
         *  Switch: '<S304>/Switch8'
         *  Switch: '<S304>/Switch9'
         */
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a =
            CeDTMR_e_DrvMdTotal_MudSand;
    }
    else if (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_Tow)
    {
        /* Switch: '<S304>/Switch12' incorporates:
         *  Constant: '<S318>/Constant'
         *  Switch: '<S304>/Switch10'
         *  Switch: '<S304>/Switch11'
         *  Switch: '<S304>/Switch7'
         *  Switch: '<S304>/Switch8'
         *  Switch: '<S304>/Switch9'
         */
        DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a = CeDTMR_e_DrvMdTotal_Tow;
    }
    else
    {
        if (KeDTMR_b_UsePropulsionMd)
        {
            /* Switch: '<S304>/Switch4' incorporates:
             *  Constant: '<S321>/Calib'
             *  Constant: '<S322>/Calib'
             *  Constant: '<S329>/Calib'
             *  Constant: '<S330>/Calib'
             *  RelationalOperator: '<S304>/Comparison17'
             *  RelationalOperator: '<S304>/Comparison18'
             *  RelationalOperator: '<S304>/Comparison19'
             *  RelationalOperator: '<S304>/Comparison20'
             *  Switch: '<S304>/Switch1'
             *  Switch: '<S304>/Switch10'
             *  Switch: '<S304>/Switch11'
             *  Switch: '<S304>/Switch12'
             *  Switch: '<S304>/Switch2'
             *  Switch: '<S304>/Switch3'
             *  Switch: '<S304>/Switch6'
             *  Switch: '<S304>/Switch7'
             *  Switch: '<S304>/Switch8'
             *  Switch: '<S304>/Switch9'
             */
            if (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_ECO)
            {
                /* Switch: '<S304>/Switch12' incorporates:
                 *  Constant: '<S307>/Constant'
                 *  Switch: '<S304>/Switch4'
                 *  Switch: '<S304>/Switch6'
                 *  Switch: '<S304>/Switch8'
                 */
                DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a =
                    CeDTMR_e_DrvMdTotal_Eco;
            }
            else if (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_Valet)
            {
                /* Switch: '<S304>/Switch12' incorporates:
                 *  Constant: '<S311>/Constant'
                 *  Switch: '<S304>/Switch3'
                 */
                DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a =
                    CeDTMR_e_DrvMdTotal_Valet;
            }
            else if (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_Track)
            {
                /* Switch: '<S304>/Switch12' incorporates:
                 *  Constant: '<S308>/Constant'
                 *  Switch: '<S304>/Switch2'
                 *  Switch: '<S304>/Switch3'
                 */
                DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a =
                    CeDTMR_e_DrvMdTotal_Track;
            }
            else
            {
                if (VeDTMC_e_Lv2TrnMd_Selected == KeDTMR_e_Lv2DrvMd_Drag)
                {
                    /* Switch: '<S304>/Switch12' incorporates:
                     *  Constant: '<S309>/Constant'
                     *  Switch: '<S304>/Switch1'
                     *  Switch: '<S304>/Switch2'
                     *  Switch: '<S304>/Switch3'
                     */
                    DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a =
                        CeDTMR_e_DrvMdTotal_Drag;
                }
            }

            /* End of Switch: '<S304>/Switch4' */
        }
    }

    /* DataTypeConversion: '<S553>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S286>/Variant Source1'
     *  Switch: '<S304>/Switch13'
     *  UnitDelay: '<S304>/UnitDelay1'
     */
    VeDTMC_e_Lv2DriverMd_Arb = DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a;

#endif

    /* End of RelationalOperator: '<S293>/Comparison1' */

    /* RelationalOperator: '<S553>/Comparison1' incorporates:
     *  Constant: '<S564>/Calib'
     *  Constant: '<S565>/Calib'
     *  DataTypeConversion: '<S553>/Data Type Conversion'
     *  Inport: '<Root>/VeLTIR_b_Lv2BrkMaxRgnReady_FA'
     *  Inport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA'
     *  Inport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA'
     *  Inport: '<Root>/VeSCMR_e_Lv2BrkMaxRgnReady'
     *  Inport: '<Root>/VeSRAR_b_OnePedalDriveDsbl'
     *  Logic: '<S552>/Logical1'
     *  Logic: '<S552>/Logical2'
     *  Logic: '<S552>/Logical3'
     *  Logic: '<S552>/Logical4'
     *  Logic: '<S552>/Logical5'
     *  Logic: '<S553>/Logical1'
     *  Logic: '<S555>/Logical1'
     *  Logic: '<S555>/Logical5'
     *  Logic: '<S580>/Logical10'
     *  RelationalOperator: '<S553>/Comparison2'
     *  RelationalOperator: '<S555>/Comparison1'
     *  RelationalOperator: '<S555>/Comparison2'
     *  Switch: '<S553>/Switch1'
     *  Switch: '<S553>/Switch2'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    /* Logic: '<S553>/Logical1' incorporates:
     *  Constant: '<S562>/Constant'
     *  Constant: '<S566>/Calib'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     */
    VeDTMC_b_DryStylSts_OPDSelect = ((CeDTMR_e_DrvMdTotal_Eco == ((uint32)
        VeDTMC_e_Lv2DriverMd_Arb)) || (VeDTMC_e_Lv2DriverMd_Arb ==
        ((TeDTMR_e_Lv2DrvMd_Total)KeDTMR_e_Lv2DrvMd_City)));
    if (KeDTMR_b_MaxRegenSelection)
    {
        /* Switch: '<S13>/Switch3' */
        rtb_VeDTMC_b_NoTurtleMd_arb = VeDTMC_b_Lv2RegenSts;
    }
    else if (KeDTMR_b_CreepEnblSelection)
    {
        /* Switch: '<S553>/Switch1' incorporates:
         *  Switch: '<S13>/Switch3'
         */
        rtb_VeDTMC_b_NoTurtleMd_arb = VeDTMC_b_Lv1CreepModeOff;
    }
    else
    {
        /* Switch: '<S13>/Switch3' incorporates:
         *  Switch: '<S553>/Switch1'
         */
        rtb_VeDTMC_b_NoTurtleMd_arb = VeDTMC_b_DryStylSts_OPDSelect;
    }

    (void)Rte_Read_VeSCMR_e_Lv2BrkMaxRgnReady_Value(&tmpRead_12);
    (void)Rte_Read_VeSRAR_b_OnePedalDriveDsbl_Value(&tmpRead_13);
    (void)Rte_Read_VeLTIR_b_Lv2BrkMaxRgnReady_FA_Value(&tmpRead_11);

    /* Logic: '<S555>/Logical1' incorporates:
     *  Constant: '<S558>/Constant'
     *  Constant: '<S559>/Calib'
     *  Constant: '<S560>/Calib'
     *  Constant: '<S564>/Calib'
     *  Constant: '<S565>/Calib'
     *  DataTypeConversion: '<S628>/DataTypeConversion'
     *  Inport: '<Root>/VeLTIR_b_Lv2BrkMaxRgnReady_FA'
     *  Inport: '<Root>/VeSCMR_e_Lv2BrkMaxRgnReady'
     *  Inport: '<Root>/VeSRAR_b_OnePedalDriveDsbl'
     *  Switch: '<S553>/Switch1'
     */
    VeDTMC_b_Lv2OPDInhibitHMI_DT = ((((tmpRead_11 || (tmpRead_12 ==
        KeDTMR_e_Lv2BrakeMaxRegenNOTReady)) || (((uint32)VeDTMI_e_Lv2PVMode) !=
        CePSMR_e_NO_Fault)) || tmpRead_13) ||
        (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd && (KeDTMR_b_EnblSRMRVehSpd_FA)));
    (void)Rte_Read_VeLTIR_b_Lv2MtrB_Spd_FA_Value(&rtb_Logical2_e);
    (void)Rte_Read_VeLTIR_b_Lv2MtrA_Spd_FA_Value(&rtb_Logical10);

    /* Logic: '<S552>/Logical1' incorporates:
     *  Constant: '<S556>/Calib'
     *  Inport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA'
     *  Inport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA'
     */
    VeDTMC_b_Lv2OPDInhibit_Arb = ((((((VeDTMC_b_Lv2OPDInhibitHMI_DT) ||
        rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE) ||
        (VeDTMI_b_Lv2VehACCNCCEngaged)) ||
        (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1])) ||
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2Dri) ||
        ((KeDTMR_b_Lv2OPDInhibitEnbl) && (((VeDTMI_b_Lv2RgnBrkFltd) ||
        rtb_Logical10) || rtb_Logical2_e)));

    /* Logic: '<S13>/Logical2' incorporates:
     *  Constant: '<S557>/Calib'
     */
    rtb_Logical2_e = ((!KeDTMR_b_OPDInhibitDsbl) && (VeDTMC_b_Lv2OPDInhibit_Arb));

    /* Logic: '<S580>/Logical10' incorporates:
     *  Constant: '<S585>/Calib'
     */
    rtb_Logical10 = !KeDTMR_b_Lv2_MntrVSSREnbl;

#endif

    /* End of RelationalOperator: '<S553>/Comparison1' */

    /* RelationalOperator: '<S527>/Comparison1' incorporates:
     *  Constant: '<S533>/Calib'
     *  Constant: '<S534>/Calib'
     *  Constant: '<S535>/Calib'
     *  Constant: '<S536>/Calib'
     *  Constant: '<S537>/Calib'
     *  Constant: '<S538>/Calib'
     *  Constant: '<S539>/Calib'
     *  Constant: '<S540>/Calib'
     *  Constant: '<S541>/Calib'
     *  Constant: '<S542>/Calib'
     *  Constant: '<S543>/Calib'
     *  Constant: '<S544>/Calib'
     *  Constant: '<S545>/Calib'
     *  Constant: '<S546>/Calib'
     *  Constant: '<S547>/Calib'
     *  Logic: '<S527>/Logical1'
     *  Logic: '<S527>/Logical10'
     *  Logic: '<S527>/Logical132'
     *  Logic: '<S527>/Logical2'
     *  Logic: '<S527>/Logical4'
     *  RelationalOperator: '<S526>/Comparison1'
     *  RelationalOperator: '<S526>/Comparison12'
     *  RelationalOperator: '<S526>/Comparison13'
     *  RelationalOperator: '<S526>/Comparison14'
     *  RelationalOperator: '<S526>/Comparison6'
     *  RelationalOperator: '<S527>/Comparison10'
     *  RelationalOperator: '<S527>/Comparison11'
     *  RelationalOperator: '<S527>/Comparison12'
     *  RelationalOperator: '<S527>/Comparison13'
     *  RelationalOperator: '<S527>/Comparison14'
     *  RelationalOperator: '<S527>/Comparison15'
     *  RelationalOperator: '<S527>/Comparison2'
     *  RelationalOperator: '<S527>/Comparison3'
     *  RelationalOperator: '<S527>/Comparison4'
     *  RelationalOperator: '<S527>/Comparison5'
     *  RelationalOperator: '<S527>/Comparison6'
     *  RelationalOperator: '<S527>/Comparison7'
     *  RelationalOperator: '<S527>/Comparison8'
     *  RelationalOperator: '<S527>/Comparison9'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_1

    rtb_VariantMerge_For_Variant_Source_Va_0 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Soft_1_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Soft_1_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeDTMR_e_Limitation_Soft_1_3));
    rtb_VariantMerge_For_Variant_Source_Va_1 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Med_2_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Med_2_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeDTMR_e_Limitation_Med_2_3));
    rtb_VariantMerge_For_Variant_Source_Va_2 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Hard_3_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Hard_3_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeDTMR_e_Limitation_Hard_3_3));
    rtb_VariantMerge_For_Variant_Source_Va_3 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Hard_4_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Hard_4_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeDTMR_e_Limitation_Hard_4_3));
    rtb_VariantMerge_For_Variant_Source_Va_4 =
        (((rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Stop_5_1) ||
          (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
           KeDTMR_e_Limitation_Stop_5_2)) ||
         (rtb_TmpSignalConversionAtVeSCMR_e_MSSBEV ==
          KeDTMR_e_Limitation_Stop_5_3));

#else

    /* RelationalOperator: '<S526>/Comparison1' incorporates:
     *  Constant: '<S531>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_Va_0 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) == CeSRMR_e_SoftLimitation);

    /* RelationalOperator: '<S526>/Comparison14' incorporates:
     *  Constant: '<S528>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_Va_1 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) == CeSRMR_e_MedLimitation);

    /* RelationalOperator: '<S526>/Comparison12' incorporates:
     *  Constant: '<S529>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_Va_2 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) == CeSRMR_e_HardLimitation);

    /* RelationalOperator: '<S526>/Comparison6' incorporates:
     *  Constant: '<S530>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_Va_3 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) ==
        CeSRMR_e_UltraHardLimitation);

    /* RelationalOperator: '<S526>/Comparison13' incorporates:
     *  Constant: '<S532>/Constant'
     */
    rtb_VariantMerge_For_Variant_Source_Va_4 = (((uint32)
        rtb_TmpSignalConversionAtVeSRMR_e_Limita) == CeSRMR_e_StopLimitation);

#endif

    /* End of RelationalOperator: '<S527>/Comparison1' */

    /* Logic: '<S20>/Logical3' incorporates:
     *  Constant: '<S523>/Calib'
     */
    VeDTMC_b_SoftLimitationEbled = (rtb_VariantMerge_For_Variant_Source_Va_0 &&
        (KeDTMR_b_Enbl_ResetSoftLimp));

    /* Logic: '<S20>/Logical5' incorporates:
     *  Constant: '<S522>/Calib'
     */
    VeDTMC_b_MedLimitationEbled = (rtb_VariantMerge_For_Variant_Source_Va_1 &&
        (KeDTMR_b_Enbl_ResetMedLimp));

    /* Logic: '<S20>/Logical11' incorporates:
     *  Constant: '<S521>/Calib'
     */
    VeDTMC_b_HardLimitationEbled = (rtb_VariantMerge_For_Variant_Source_Va_2 &&
        (KeDTMR_b_Enbl_ResetHardLimp));

    /* Logic: '<S20>/Logical6' incorporates:
     *  Constant: '<S525>/Calib'
     */
    VeDTMC_b_UltraHardLimitationEbled =
        (rtb_VariantMerge_For_Variant_Source_Va_3 &&
         (KeDTMR_b_Enbl_ResetUltraHardLimp));

    /* Logic: '<S20>/Logical7' incorporates:
     *  Constant: '<S524>/Calib'
     */
    VeDTMC_b_StopLimitationEbled = (rtb_VariantMerge_For_Variant_Source_Va_4 &&
        (KeDTMR_b_Enbl_ResetStopLimp));

    /* Logic: '<S20>/Logical8' */
    VeDTMC_b_MSSLimpActivated = (((((VeDTMC_b_SoftLimitationEbled) ||
        (VeDTMC_b_MedLimitationEbled)) || (VeDTMC_b_HardLimitationEbled)) ||
        (VeDTMC_b_UltraHardLimitationEbled)) || (VeDTMC_b_StopLimitationEbled));

    /* Logic: '<S20>/Logical9' incorporates:
     *  Constant: '<S520>/Calib'
     */
    VeDTMC_b_ResetDTMRbyMSS = ((KeDTMR_b_Enbl_ResetDTMRbyMSS) &&
        (VeDTMC_b_MSSLimpActivated));

    /* Outputs for Atomic SubSystem: '<S570>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S580>/LV2_Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S580>/LV2_Hysteresis' */
    /* Logic: '<S580>/Logical8' incorporates:
     *  Constant: '<S588>/ConstantValue1'
     *  Logic: '<S554>/Logical1'
     *  Logic: '<S554>/Logical10'
     *  Logic: '<S554>/Logical11'
     *  Logic: '<S554>/Logical12'
     *  Logic: '<S554>/Logical13'
     *  Logic: '<S554>/Logical14'
     *  Logic: '<S554>/Logical15'
     *  Logic: '<S554>/Logical2'
     *  Logic: '<S554>/Logical3'
     *  Logic: '<S554>/Logical4'
     *  Logic: '<S554>/Logical5'
     *  Logic: '<S554>/Logical6'
     *  Logic: '<S554>/Logical7'
     *  Logic: '<S554>/Logical8'
     *  Logic: '<S554>/Logical9'
     *  Logic: '<S570>/passDBCparam2'
     *  Logic: '<S571>/NOT'
     *  Logic: '<S571>/OR'
     *  Logic: '<S571>/OR1'
     *  Logic: '<S580>/Logical1'
     *  Logic: '<S580>/Logical14'
     *  Logic: '<S580>/Logical2'
     *  Logic: '<S580>/Logical3'
     *  Logic: '<S580>/Logical4'
     *  Logic: '<S580>/Logical5'
     *  Logic: '<S580>/Logical6'
     *  Logic: '<S580>/Logical7'
     *  Logic: '<S580>/Logical9'
     *  Logic: '<S589>/passDBCparam2'
     *  MinMax: '<S570>/FixPtMinax'
     *  MinMax: '<S589>/FixPtMinax'
     *  RelationalOperator: '<S577>/Compare'
     *  RelationalOperator: '<S588>/Comparison'
     *  RelationalOperator: '<S597>/Compare'
     *  S-Function (sfix_bitop): '<S570>/Bit6'
     *  S-Function (sfix_bitop): '<S589>/Bit6'
     *  Switch: '<S554>/Switch12'
     *  Switch: '<S570>/Switch3'
     *  Switch: '<S570>/dec_if_Ok_else_inc'
     *  Switch: '<S588>/LV2_Abs_switch'
     *  Switch: '<S589>/Switch3'
     *  Switch: '<S589>/dec_if_Ok_else_inc'
     *  UnitDelay: '<S570>/UnitDelay'
     *  UnitDelay: '<S570>/UnitDelay1'
     *  UnitDelay: '<S589>/UnitDelay'
     *  UnitDelay: '<S589>/UnitDelay1'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    /* Outputs for Atomic SubSystem: '<S589>/EdgeFalling' */
    /* Logic: '<S580>/Logical8' */
    VeDTMC_b_VSSR_ResetChk = (((rtb_Logical10 || (VeDTMI_b_Lv1ResetDTC)) ||
        (VeDTMI_b_Lv2KeyOff)) || (VeDTMC_b_ResetDTMRbyMSS));
    rtb_Compare_h_tmp = ((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U;

    /* RelationalOperator: '<S597>/Compare' incorporates:
     *  Constant: '<S597>/Constant'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Dri = (rtb_Compare_h_tmp == 0U);

    /* Logic: '<S593>/AND' incorporates:
     *  Logic: '<S593>/OR1'
     *  UnitDelay: '<S593>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR_b_Inhibi =
        ((!rtb_TmpSignalConversionAtVeSCMR_b_Lv2Dri) &&
         (DTMR_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S593>/Unit Delay' */
    DTMR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeSCMR_b_Lv2Dri;

    /* Logic: '<S589>/passDBCparam2' */
    VeDTMC_b_Lv2VehStndStillReq_FA_DT_Rst = ((VeDTMC_b_VSSR_ResetChk) ||
        rtb_TmpSignalConversionAtVeSRAR_b_Inhibi);
    if (VeDTMI_v_Lv2VehSpd < 0.0F)
    {
        /* Switch: '<S588>/LV2_Abs_switch' incorporates:
         *  Product: '<S588>/Product'
         */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = -VeDTMI_v_Lv2VehSpd;
    }
    else
    {
        /* Switch: '<S588>/LV2_Abs_switch' */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMI_v_Lv2VehSpd;
    }

    /* Switch: '<S590>/Switch1' incorporates:
     *  Constant: '<S586>/Calib'
     *  Constant: '<S587>/Calib'
     *  Constant: '<S588>/ConstantValue1'
     *  Constant: '<S590>/ConstantValue'
     *  RelationalOperator: '<S590>/Comparison1'
     *  RelationalOperator: '<S590>/Comparison2'
     *  UnitDelay: '<S590>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB > KeDTMR_v_VSSR_Spd_OPDRSP)
    {
        DTMR_ac_DW.VeDTMC_b_VSSR_SpdMntrFailing_prev = true;
    }
    else
    {
        DTMR_ac_DW.VeDTMC_b_VSSR_SpdMntrFailing_prev =
            ((rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB >=
              KeDTMR_v_VSSR_Spd_OPDLSP) &&
             (DTMR_ac_DW.VeDTMC_b_VSSR_SpdMntrFailing_prev));
    }

    /* End of Switch: '<S590>/Switch1' */

    /* Switch: '<S591>/Switch1' incorporates:
     *  Constant: '<S583>/Calib'
     *  Constant: '<S584>/Calib'
     *  Constant: '<S591>/ConstantValue'
     *  RelationalOperator: '<S591>/Comparison1'
     *  RelationalOperator: '<S591>/Comparison2'
     *  UnitDelay: '<S591>/UnitDelay'
     */
    if (VeDTMC_Pct_Lv2AccelPdlPos > KeDTMR_Pct_VSSR_AccelPdl_OPDRSP)
    {
        DTMR_ac_DW.VeDTMC_b_VSSR_AccelPdlMntrFailing_prev = true;
    }
    else
    {
        DTMR_ac_DW.VeDTMC_b_VSSR_AccelPdlMntrFailing_prev =
            ((VeDTMC_Pct_Lv2AccelPdlPos >= KeDTMR_Pct_VSSR_AccelPdl_OPDLSP) &&
             (DTMR_ac_DW.VeDTMC_b_VSSR_AccelPdlMntrFailing_prev));
    }

    /* End of Switch: '<S591>/Switch1' */

    /* Logic: '<S554>/Logical2' */
    VeDTMR_b_Lv2_OPD_Active = (rtb_VeDTMC_b_NoTurtleMd_arb && (!rtb_Logical2_e));

    /* Logic: '<S554>/Logical7' */
    VeDTMC_b_Lv2_Unsafe_OPDActive1_Set =
        ((!rtb_TmpSignalConversionAtVeDTRR_b_Lv2Lv1) && (VeDTMR_b_Lv2_OPD_Active));

    /* Logic: '<S554>/Logical14' */
    VeDTMC_b_Lv2_Unsafe_OPDActive2_Set =
        (rtb_TmpSignalConversionAtVeDTRR_b_Lv2Lv1 && (!VeDTMR_b_Lv2_OPD_Active));

    /* Logic: '<S554>/Logical8' incorporates:
     *  Constant: '<S569>/Calib'
     */
    VeDTMC_b_Lv2OPDActiveResetChk = ((((!KeDTMR_b_Lv2_MntrOPDOnEnbl) ||
        (VeDTMI_b_Lv1ResetDTC)) || (VeDTMC_b_ResetDTMRbyMSS)) ||
        (VeDTMI_b_Lv2KeyOff));

    /* RelationalOperator: '<S577>/Compare' incorporates:
     *  Constant: '<S577>/Constant'
     */
    rtb_TmpSignalConversionAtVeDTRR_b_Lv2Lv1 = (rtb_Compare_h_tmp == 0U);

    /* Logic: '<S573>/AND' incorporates:
     *  Logic: '<S573>/OR1'
     *  UnitDelay: '<S573>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Dri =
        ((!rtb_TmpSignalConversionAtVeDTRR_b_Lv2Lv1) &&
         (DTMR_ac_DW.UnitDelay_DSTATE_o0));

    /* Update for UnitDelay: '<S573>/Unit Delay' */
    DTMR_ac_DW.UnitDelay_DSTATE_o0 = rtb_TmpSignalConversionAtVeDTRR_b_Lv2Lv1;

    /* Logic: '<S570>/passDBCparam2' */
    VeDTMC_b_Lv2_OPD_ON_FA_DT_Rst = ((VeDTMC_b_Lv2OPDActiveResetChk) ||
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2Dri);
    VeDTMC_b_Lv2OPDActive_Violation = ((VeDTMC_b_Lv2_Unsafe_OPDActive1_Set) ||
        (VeDTMC_b_Lv2_Unsafe_OPDActive2_Set));

    /* Logic: '<S554>/Logical6' incorporates:
     *  Constant: '<S569>/Calib'
     */
    VeDTMC_b_Lv2OPDActive_Failing = ((((VeDTMI_b_Lv2Rev4OPDMntr) ||
        (VeDTMI_b_Lv2Drv4OPDMntr)) && (KeDTMR_b_Lv2_MntrOPDOnEnbl)) &&
        (VeDTMC_b_Lv2OPDActive_Violation));
    if (VeDTMC_b_Lv2OPDActive_Failing)
    {
        /* Sum: '<S570>/Inc_Cntr' incorporates:
         *  Constant: '<S568>/Calib'
         */
        rtb_Inc_Cntr_p = (uint8)(((uint32)VeDTMC_Cnt_Lv2_OPD_ON_FA_DT) +
            ((uint32)KeDTMR_Cnt_OPDActive_Inc));

        /* Switch: '<S570>/Switch1' incorporates:
         *  RelationalOperator: '<S570>/Relational_Operator'
         */
        if (rtb_Inc_Cntr_p < VeDTMC_Cnt_Lv2_OPD_ON_FA_DT)
        {
            /* Switch: '<S570>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S570>/CounterMax'
             */
            rtb_Inc_Cntr_p = MAX_uint8_T;
        }

        /* End of Switch: '<S570>/Switch1' */
    }
    else
    {
        if (((sint32)VeDTMC_Cnt_Lv2_OPD_ON_FA_DT) > 1)
        {
            /* MinMax: '<S570>/FixPtMinax' */
            rtb_Inc_Cntr = VeDTMC_Cnt_Lv2_OPD_ON_FA_DT;
        }
        else
        {
            /* MinMax: '<S570>/FixPtMinax' */
            rtb_Inc_Cntr = 1U;
        }

        /* Switch: '<S570>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S554>/FixedDecrement'
         *  Sum: '<S570>/Dec_Cntr'
         */
        rtb_Inc_Cntr_p = (uint8)((sint32)(((sint32)rtb_Inc_Cntr) - 1));
    }

    if (VeDTMC_b_Lv2_OPD_ON_FA_DT_Rst)
    {
        /* Switch: '<S570>/Switch3' incorporates:
         *  Constant: '<S570>/ResetZero1'
         */
        VeDTMC_b_Lv2_OPD_ON_FA_DT = false;
    }
    else
    {
        /* Switch: '<S570>/Switch3' incorporates:
         *  Constant: '<S567>/Calib'
         *  Logic: '<S570>/Cntr_fail'
         *  RelationalOperator: '<S570>/Enough_counts_to_Fail'
         */
        VeDTMC_b_Lv2_OPD_ON_FA_DT = ((rtb_Inc_Cntr_p >=
            KeDTMR_Cnt_OPDActive_ChkLmt) || (VeDTMC_b_Lv2_OPD_ON_FA_DT));
    }

    /* Logic: '<S571>/OR1' incorporates:
     *  MinMax: '<S570>/FixPtMinax'
     */
    VeDTMC_b_OPDActive1_RA = (((VeDTMC_b_Lv2OPDActive_Violation) &&
        (VeDTMC_b_Lv2_OPD_ON_FA_DT)) || ((!VeDTMI_b_Lv2KeyOff) &&
        (VeDTMC_b_OPDActive1_RA)));

    /* Switch: '<S554>/Switch12' */
    VeDTMC_b_Lv2_OPD_ON_DT = ((!VeDTMC_b_OPDActive1_RA) &&
        (VeDTMR_b_Lv2_OPD_Active));

    /* Logic: '<S554>/Logical12' */
    VeDTMC_b_Lv2OPD_EnblCmnd_DT = ((VeDTMC_b_Lv2_OPD_ON_DT) &&
        (!VeDTMC_b_Lv2_OPD_ON_FA_DT));

    /* Logic: '<S580>/Logical1' incorporates:
     *  UnitDelay: '<S590>/UnitDelay'
     *  UnitDelay: '<S591>/UnitDelay'
     */
    VeDTMC_b_Lv2_VSSR_OPD = (((!DTMR_ac_DW.VeDTMC_b_VSSR_SpdMntrFailing_prev) &&
        (!DTMR_ac_DW.VeDTMC_b_VSSR_AccelPdlMntrFailing_prev)) &&
        (VeDTMC_b_Lv2OPD_EnblCmnd_DT));

    /* Logic: '<S580>/Logical7' */
    VeDTMC_b_Lv2_Unsafe_VSSR1_Set = ((!VeDTMC_b_Lv2_VSSR_OPD) &&
        rtb_TmpSignalConversionAtVeDTRR_b_Lv2L_m);

    /* Logic: '<S580>/Logical14' */
    VeDTMC_b_Lv2_Unsafe_VSSR2_Set = ((VeDTMC_b_Lv2_VSSR_OPD) &&
        (!rtb_TmpSignalConversionAtVeDTRR_b_Lv2L_m));

    /* Logic: '<S580>/Logical2' */
    VeDTMC_b_VSSR_Violation = ((VeDTMC_b_Lv2_Unsafe_VSSR1_Set) ||
        (VeDTMC_b_Lv2_Unsafe_VSSR2_Set));

    /* Logic: '<S580>/Logical6' incorporates:
     *  Constant: '<S585>/Calib'
     */
    VeDTMC_b_VSSR_Failing = ((KeDTMR_b_Lv2_MntrVSSREnbl) &&
        (VeDTMC_b_VSSR_Violation));
    if (VeDTMC_b_VSSR_Failing)
    {
        /* Sum: '<S589>/Inc_Cntr' incorporates:
         *  Constant: '<S582>/Calib'
         */
        rtb_Inc_Cntr = (uint8)(((uint32)VeDTMC_Cnt_Lv2VehStndStillReq_FA_DT) +
                               ((uint32)KeDTMR_Cnt_VSSR_Inc));

        /* Switch: '<S589>/Switch1' incorporates:
         *  RelationalOperator: '<S589>/Relational_Operator'
         */
        if (rtb_Inc_Cntr < VeDTMC_Cnt_Lv2VehStndStillReq_FA_DT)
        {
            /* Switch: '<S589>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S589>/CounterMax'
             */
            rtb_Inc_Cntr = MAX_uint8_T;
        }

        /* End of Switch: '<S589>/Switch1' */
    }
    else
    {
        if (((sint32)VeDTMC_Cnt_Lv2VehStndStillReq_FA_DT) > 1)
        {
            /* MinMax: '<S589>/FixPtMinax' */
            rtb_Inc_Cntr = VeDTMC_Cnt_Lv2VehStndStillReq_FA_DT;
        }
        else
        {
            /* MinMax: '<S589>/FixPtMinax' */
            rtb_Inc_Cntr = 1U;
        }

        /* Switch: '<S589>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S580>/FixedDecrement'
         *  Sum: '<S589>/Dec_Cntr'
         */
        rtb_Inc_Cntr = (uint8)((sint32)(((sint32)rtb_Inc_Cntr) - 1));
    }

    if (VeDTMC_b_Lv2VehStndStillReq_FA_DT_Rst)
    {
        /* Switch: '<S589>/Switch3' incorporates:
         *  Constant: '<S589>/ResetZero1'
         */
        VeDTMC_b_Lv2VehStndStillReq_FA_DT = false;
    }
    else
    {
        /* Switch: '<S589>/Switch3' incorporates:
         *  Constant: '<S581>/Calib'
         *  Logic: '<S589>/Cntr_fail'
         *  RelationalOperator: '<S589>/Enough_counts_to_Fail'
         */
        VeDTMC_b_Lv2VehStndStillReq_FA_DT = ((rtb_Inc_Cntr >=
            KeDTMR_Cnt_VSSR_ChkLmt) || (VeDTMC_b_Lv2VehStndStillReq_FA_DT));
    }

    /* End of Outputs for SubSystem: '<S589>/EdgeFalling' */
#endif

    /* End of Logic: '<S580>/Logical8' */
    /* End of Outputs for SubSystem: '<S580>/LV2_Hysteresis' */
    /* End of Outputs for SubSystem: '<S580>/LV2_Hysteresis1' */
    /* End of Outputs for SubSystem: '<S570>/EdgeFalling' */

    /* SignalConversion generated from: '<S21>/Variant Source2' */
#if Rte_SysCon_Variant_DTMR_FUNC_2

    /* VariantMerge generated from: '<S21>/Variant Source2' */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] =
        rtb_VeDTMC_b_NoTurtleMd_arb;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = rtb_Logical2_e;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[2] =
        VeDTMC_b_Lv2VehStndStillReq_FA_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[3] =
        VeDTMC_b_Lv2OPDInhibitHMI_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[4] =
        VeDTMC_b_Lv2_OPD_ON_FA_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5] =
        VeDTMC_b_Lv2_OPD_ON_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[6] =
        VeDTMC_b_Lv2OPD_EnblCmnd_DT;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source2' */

    /* SignalConversion generated from: '<S21>/Variant Source2' */
#if Rte_SysCon_Variant_DTMR_FUNC_3

    /* VariantMerge generated from: '<S21>/Variant Source2' */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] =
        rtb_VeDTMC_b_NoTurtleMd_arb;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = rtb_Logical2_e;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[2] =
        VeDTMC_b_Lv2VehStndStillReq_FA_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[3] =
        VeDTMC_b_Lv2OPDInhibitHMI_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[4] =
        VeDTMC_b_Lv2_OPD_ON_FA_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5] =
        VeDTMC_b_Lv2_OPD_ON_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[6] =
        VeDTMC_b_Lv2OPD_EnblCmnd_DT;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source2' */

    /* SignalConversion generated from: '<S21>/Variant Source2' */
#if Rte_SysCon_Variant_DTMR_FUNC_6

    /* VariantMerge generated from: '<S21>/Variant Source2' */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] =
        rtb_VeDTMC_b_NoTurtleMd_arb;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = rtb_Logical2_e;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[2] =
        VeDTMC_b_Lv2VehStndStillReq_FA_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[3] =
        VeDTMC_b_Lv2OPDInhibitHMI_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[4] =
        VeDTMC_b_Lv2_OPD_ON_FA_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5] =
        VeDTMC_b_Lv2_OPD_ON_DT;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[6] =
        VeDTMC_b_Lv2OPD_EnblCmnd_DT;

#elif !Rte_SysCon_Variant_DTMR_FUNC_2 && !Rte_SysCon_Variant_DTMR_FUNC_3 && !Rte_SysCon_Variant_DTMR_FUNC_6

    /* VariantMerge generated from: '<S21>/Variant Source2' incorporates:
     *  Constant: '<S549>/FALSEConstant'
     *  Constant: '<S549>/FALSEConstant1'
     *  Constant: '<S549>/FALSEConstant2'
     *  Constant: '<S549>/FALSEConstant3'
     *  Constant: '<S549>/FALSEConstant4'
     *  Constant: '<S549>/TRUEConstant'
     *  Constant: '<S549>/TRUEConstant1'
     *  SignalConversion generated from: '<S21>/Variant Source2'
     */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] = false;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = true;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[2] = false;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[3] = true;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[4] = false;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5] = false;
    DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[6] = false;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMI'
     */
    /* Switch: '<S174>/Switch2' incorporates:
     *  SignalConversion generated from: '<S5>/Lv2_VehInRev'
     */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0])
    {
        /* Switch: '<S174>/Switch2' incorporates:
         *  Constant: '<S202>/Calib'
         */
        VeDTMC_M_AccelPdlMinWhlTrq_VehSpdFA = KeDTMR_M_PdlMinWhlTrq_R_VehSpdFA;
    }
    else
    {
        /* Switch: '<S174>/Switch2' incorporates:
         *  Constant: '<S201>/Calib'
         */
        VeDTMC_M_AccelPdlMinWhlTrq_VehSpdFA = KeDTMR_M_PdlMinWhlTrq_D_VehSpdFA;
    }

    /* End of Switch: '<S174>/Switch2' */

    /* RelationalOperator: '<S173>/Comparison7' incorporates:
     *  Constant: '<S192>/Calib'
     */
    VeDTMC_b_Lv2CreepActv = (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc <=
        KeDTMR_v_VehCreepSpd_Mph);

    /* Outputs for Atomic SubSystem: '<S173>/LV2_Turn_On_Delay_Sample' */
    /* Switch: '<S196>/LV2Switch' incorporates:
     *  Constant: '<S189>/Calib'
     *  Constant: '<S196>/ConstantValue'
     *  Constant: '<S196>/ConstantValue1'
     *  Logic: '<S196>/OR'
     *  Logic: '<S196>/OR1'
     *  Logic: '<S198>/AND1'
     *  Logic: '<S198>/OR2'
     *  MinMax: '<S196>/Minimum'
     *  Sum: '<S196>/Summation'
     *  UnitDelay: '<S196>/UnitDelay1'
     *  UnitDelay: '<S198>/UnitDelay'
     */
    if ((!VeDTMC_b_Lv2CreepActv) || ((VeDTMC_b_Lv2CreepActv) &&
            (!DTMR_ac_DW.VeDTMC_b_Lv2CreepActvDly_prev)))
    {
        DTMR_ac_DW.VeDTMC_Cnt_Lv2CreepActvDly_prev = 0U;
    }
    else if (KeDTMR_cnt_Lv2CreepActvDly < ((uint16)(((uint32)
                DTMR_ac_DW.VeDTMC_Cnt_Lv2CreepActvDly_prev) + 1U)))
    {
        /* MinMax: '<S196>/Minimum' incorporates:
         *  Constant: '<S189>/Calib'
         */
        DTMR_ac_DW.VeDTMC_Cnt_Lv2CreepActvDly_prev = KeDTMR_cnt_Lv2CreepActvDly;
    }
    else
    {
        /* MinMax: '<S196>/Minimum' incorporates:
         *  Constant: '<S196>/ConstantValue'
         *  Sum: '<S196>/Summation'
         *  UnitDelay: '<S196>/UnitDelay1'
         */
        DTMR_ac_DW.VeDTMC_Cnt_Lv2CreepActvDly_prev = (uint16)(((uint32)
            DTMR_ac_DW.VeDTMC_Cnt_Lv2CreepActvDly_prev) + 1U);
    }

    /* End of Switch: '<S196>/LV2Switch' */
    /* End of Outputs for SubSystem: '<S173>/LV2_Turn_On_Delay_Sample' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeLTIR_b_Lv2EPB_HoldSts_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2EPB_HoldSts_FA_Value(&tmpRead_14);

    /* Inport: '<Root>/VeLTIR_M_Lv2BrkTrq' */
    (void)Rte_Read_VeLTIR_M_Lv2BrkTrq_Value(&rtb_VeDTMC_M_TotBrkTrq_Arb);

    /* Inport: '<Root>/VeLTIR_b_Lv2BrkTrq_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2BrkTrq_FA_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Outputs for Atomic SubSystem: '<S173>/LV2_Turn_On_Delay_Sample' */
    /* Logic: '<S196>/AND' incorporates:
     *  Constant: '<S189>/Calib'
     *  RelationalOperator: '<S196>/Comparison5'
     *  UnitDelay: '<S196>/UnitDelay1'
     */
    VeDTMC_b_Lv2CreepActvDlyd = ((VeDTMC_b_Lv2CreepActv) &&
        (DTMR_ac_DW.VeDTMC_Cnt_Lv2CreepActvDly_prev >=
         KeDTMR_cnt_Lv2CreepActvDly));

    /* Update for UnitDelay: '<S198>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_Lv2CreepActvDly_prev = VeDTMC_b_Lv2CreepActv;

    /* End of Outputs for SubSystem: '<S173>/LV2_Turn_On_Delay_Sample' */

    /* Switch: '<S173>/Switch5' */
    if (VeDTMC_b_Lv2CreepActvDlyd)
    {
        /* Switch: '<S173>/Switch5' incorporates:
         *  Constant: '<S181>/Calib'
         */
        VeDTMC_M_Lv2CreepTrq_Raw = KeDTMR_M_CreepCancelTrq;
    }
    else
    {
        /* Switch: '<S173>/Switch5' incorporates:
         *  Constant: '<S185>/Calib'
         */
        VeDTMC_M_Lv2CreepTrq_Raw = KeDTMR_M_Lv2CreepTrq;
    }

    /* End of Switch: '<S173>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S173>/LV2_GradientLimiter' */
    /* Sum: '<S195>/Sum2' incorporates:
     *  UnitDelay: '<S195>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMC_M_Lv2CreepTrq_Raw -
        DTMR_ac_DW.VeDTMC_M_Lv2CreepTrq_GL_Prev_prev;

    /* Outputs for Atomic SubSystem: '<S195>/Limiter' */
    /* Switch: '<S197>/LimiterSwitch' incorporates:
     *  Constant: '<S183>/Calib'
     *  RelationalOperator: '<S197>/Comparison1'
     */
    if (KeDTMR_M_CreepTrqGrdLmt_LU < rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB)
    {
        /* Switch: '<S124>/Switch1' */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_M_CreepTrqGrdLmt_LU;
    }

    /* End of Switch: '<S197>/LimiterSwitch' */

    /* Switch: '<S197>/LimiterSwitch1' incorporates:
     *  Constant: '<S182>/Calib'
     *  RelationalOperator: '<S197>/Comparison5'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB <= KeDTMR_M_CreepTrqGrdLmt_LD)
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_M_CreepTrqGrdLmt_LD;
    }

    /* End of Switch: '<S197>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S195>/Limiter' */

    /* Sum: '<S195>/Sum3' incorporates:
     *  UnitDelay: '<S195>/UnitDelay'
     */
    DTMR_ac_DW.VeDTMC_M_Lv2CreepTrq_GL_Prev_prev +=
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;

    /* End of Outputs for SubSystem: '<S173>/LV2_GradientLimiter' */

    /* Switch: '<S173>/Switch6' incorporates:
     *  Constant: '<S188>/Calib'
     */
    if (KeDTMR_b_UseLegacyCreepTrq)
    {
        /* Switch: '<S173>/Switch6' incorporates:
         *  UnitDelay: '<S195>/UnitDelay'
         */
        VeDTMC_M_Lv2CreepTrq_GL = DTMR_ac_DW.VeDTMC_M_Lv2CreepTrq_GL_Prev_prev;
    }
    else
    {
        /* Switch: '<S173>/Switch6' incorporates:
         *  Constant: '<S186>/Calib'
         */
        VeDTMC_M_Lv2CreepTrq_GL = KeDTMR_M_Lv2minCreep;
    }

    /* End of Switch: '<S173>/Switch6' */

    /* Logic: '<S175>/Logical2' incorporates:
     *  Constant: '<S206>/Constant'
     *  Constant: '<S207>/Constant'
     *  Constant: '<S208>/Constant'
     *  Constant: '<S209>/Constant'
     *  Constant: '<S210>/Constant'
     *  RelationalOperator: '<S175>/Comparison1'
     *  RelationalOperator: '<S175>/Comparison2'
     *  RelationalOperator: '<S175>/Comparison3'
     *  RelationalOperator: '<S175>/Comparison4'
     *  RelationalOperator: '<S175>/Comparison5'
     */
    VeDTMC_b_EPBHoldSts_Appl = (((((((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_EPBHol) == CeSTMR_e_EPBHoldSts_APPLIED)
        || (((uint32)rtb_TmpSignalConversionAtVeSCMR_e_EPBHol) ==
            CeSTMR_e_EPBHoldSts_ReClamping)) || (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_EPBHol) ==
        CeSTMR_e_EPBHoldSts_Flt_EPBAppl)) || (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_EPBHol) ==
        CeSTMR_e_EPBHoldSts_DynamBrkEPB)) || (((uint32)
        rtb_TmpSignalConversionAtVeSCMR_e_EPBHol) ==
        CeSTMR_e_EPBHoldSts_Flt_Prsnt));

    /* Logic: '<S175>/Logical8' incorporates:
     *  Constant: '<S213>/Calib'
     */
    VeDTMC_b_EPBHoldSts_Error_arb = (tmpRead_14 && (KeDTMR_b_EPBHoldStsFA_Enbl));

    /* Logic: '<S175>/Logical7' */
    VeDTMC_b_EPBHoldSts_NoError = !VeDTMC_b_EPBHoldSts_Error_arb;

    /* Logic: '<S175>/Logical1' */
    VeDTMC_b_EPBHoldSts_Appl_Arb = ((VeDTMC_b_EPBHoldSts_Appl) &&
        (VeDTMC_b_EPBHoldSts_NoError));

    /* Product: '<S173>/Product1' incorporates:
     *  Lookup_n-D: '<S193>/Vector'
     *  SignalConversion generated from: '<S1>/VeSCMR_p_Lv2BrakeBoostPressure'
     */
    VeDTMC_M_TotBrkTrq_PressArb = rtb_TmpSignalConversionAtVeSCMR_p_Lv2Bra *
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeSCMR_p_Lv2Bra, ((const
        float32 *)&(KxDTMR_K_BrkPrssConvTbl[0])), ((const float32 *)
        &(KtDTMR_K_BrkPrssConvTbl[0])), 9U);

    /* MinMax: '<S173>/Max' */
    VeDTMC_M_BrkTrqForBrkTrqMult = fmaxf(VeDTMI_M_Lv2DrvrIntndTotBrkTrq,
        rtb_VeDTMC_M_TotBrkTrq_Arb);

    /* Switch: '<S173>/Switch3' incorporates:
     *  Logic: '<S173>/Logical1'
     */
    if (tmpRead_8 || (VeDTMI_b_Lv2DrvrIntndTotBrkTrqFA))
    {
        /* Switch: '<S173>/Switch3' incorporates:
         *  Constant: '<S184>/Calib'
         */
        VeDTMC_M_TotBrkTrq_BrkCAN = KeDTMR_M_DrvrIntndTotBrkTrqDflt;
    }
    else
    {
        /* Switch: '<S173>/Switch3' */
        VeDTMC_M_TotBrkTrq_BrkCAN = VeDTMC_M_BrkTrqForBrkTrqMult;
    }

    /* End of Switch: '<S173>/Switch3' */

    /* Switch: '<S173>/Switch1' incorporates:
     *  Constant: '<S187>/Calib'
     */
    if (KeDTMR_b_BrkPrssCreepEnbl)
    {
        /* Switch: '<S173>/Switch1' */
        rtb_VeDTMC_M_TotBrkTrq_Arb = VeDTMC_M_TotBrkTrq_PressArb;
    }
    else
    {
        /* Switch: '<S173>/Switch1' */
        rtb_VeDTMC_M_TotBrkTrq_Arb = VeDTMC_M_TotBrkTrq_BrkCAN;
    }

    /* End of Switch: '<S173>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S175>/LV2_Hysteresis' */
    /* Switch: '<S214>/Switch1' incorporates:
     *  Constant: '<S211>/Calib'
     *  Constant: '<S212>/Calib'
     *  Constant: '<S214>/ConstantValue'
     *  RelationalOperator: '<S214>/Comparison1'
     *  RelationalOperator: '<S214>/Comparison5'
     *  UnitDelay: '<S214>/UnitDelay'
     */
    if (rtb_VeDTMC_M_TotBrkTrq_Arb > KeDTMR_M_BrkTrq_CreepLmtRSP)
    {
        DTMR_ac_DW.VeDTMC_b_TotBrkTrq_prev = true;
    }
    else
    {
        DTMR_ac_DW.VeDTMC_b_TotBrkTrq_prev = ((rtb_VeDTMC_M_TotBrkTrq_Arb >=
            KeDTMR_M_BrkTrq_CreepLmtLSP) && (DTMR_ac_DW.VeDTMC_b_TotBrkTrq_prev));
    }

    /* End of Switch: '<S214>/Switch1' */
    /* End of Outputs for SubSystem: '<S175>/LV2_Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S22>/LV2_Hysteresis' */
    /* Switch: '<S610>/Switch1' incorporates:
     *  Constant: '<S606>/Calib'
     *  Constant: '<S607>/Calib'
     *  Constant: '<S610>/ConstantValue'
     *  RelationalOperator: '<S610>/Comparison1'
     *  RelationalOperator: '<S610>/Comparison2'
     *  UnitDelay: '<S610>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B > KeDTMR_Pct_BrkTravelSts_RSP)
    {
        DTMR_ac_DW.VeDTMC_b_Lv2BrkTravelSts_prev = true;
    }
    else
    {
        DTMR_ac_DW.VeDTMC_b_Lv2BrkTravelSts_prev =
            ((rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B >=
              KeDTMR_Pct_BrkTravelSts_LSP) &&
             (DTMR_ac_DW.VeDTMC_b_Lv2BrkTravelSts_prev));
    }

    /* End of Switch: '<S610>/Switch1' */
    /* End of Outputs for SubSystem: '<S22>/LV2_Hysteresis' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeHTDR_b_AHH_ModifyAccel_Req' */
    (void)Rte_Read_VeHTDR_b_AHH_ModifyAccel_Req_Value
        (&rtb_VeDTMC_b_AccPdlNotPressed);

    /* Inport: '<Root>/VeSCMR_b_Lv2Brake_NO' */
    (void)Rte_Read_VeSCMR_b_Lv2Brake_NO_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Logic: '<S22>/Logical3' incorporates:
     *  Constant: '<S608>/Calib'
     *  UnitDelay: '<S610>/UnitDelay'
     */
    VeDTMC_b_Lv2CANBrk_Sig = ((DTMR_ac_DW.VeDTMC_b_Lv2BrkTravelSts_prev) ||
        (KeDTMR_b_IgnoreCANBrkAppld));

    /* Switch: '<S22>/Switch4' */
    if (VeDTMC_b_Lv2CANBrk_Sig)
    {
        /* Switch: '<S22>/Switch4' incorporates:
         *  Constant: '<S603>/Constant'
         */
        VeDTMC_e_Lv2CANBrk_Arb = CeDTMR_e_BrakeAppld;
    }
    else
    {
        /* Switch: '<S22>/Switch4' incorporates:
         *  Constant: '<S604>/Constant'
         */
        VeDTMC_e_Lv2CANBrk_Arb = CeDTMR_e_BrkNotAppld;
    }

    /* End of Switch: '<S22>/Switch4' */

    /* Logic: '<S22>/Logical5' */
    VeDTMC_b_Lv2BrkTravelStsVld = !rtb_TmpSignalConversionAtVeSCMR_b_Lv2Brk;

    /* Logic: '<S22>/Logical2' incorporates:
     *  Constant: '<S609>/Calib'
     */
    VeDTMC_b_Lv2HWBrk_Sig = (tmpRead_7 || (KeDTMR_b_IgnoreHWBrkAppld));

    /* Switch: '<S22>/Switch1' */
    if (VeDTMC_b_Lv2HWBrk_Sig)
    {
        /* Switch: '<S22>/Switch1' incorporates:
         *  Constant: '<S602>/Constant'
         */
        VeDTMC_e_Lv2HWBrk_Sig_Arb = CeDTMR_e_BrakeAppld;
    }
    else
    {
        /* Switch: '<S22>/Switch1' incorporates:
         *  Constant: '<S605>/Constant'
         */
        VeDTMC_e_Lv2HWBrk_Sig_Arb = CeDTMR_e_BrkNotAppld;
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Logic: '<S22>/Logical4' */
    VeDTMC_b_Lv2BrkAppld_HWVld = !rtb_TmpSignalConversionAtVeSCMR_b_Lv2Bra;

    /* Switch: '<S22>/Switch2' */
    if (VeDTMC_b_Lv2BrkAppld_HWVld)
    {
        /* Switch: '<S22>/Switch2' incorporates:
         *  Switch: '<S22>/Switch1'
         */
        VeDTMC_e_Lv2Brk_Arb = VeDTMC_e_Lv2HWBrk_Sig_Arb;
    }
    else
    {
        /* Switch: '<S22>/Switch2' incorporates:
         *  Constant: '<S601>/Constant'
         */
        VeDTMC_e_Lv2Brk_Arb = CeDTMR_e_BrkStat_NotDtrmnd;
    }

    /* End of Switch: '<S22>/Switch2' */

    /* Switch: '<S22>/Switch3' */
    if (VeDTMC_b_Lv2BrkTravelStsVld)
    {
        /* RelationalOperator: '<S159>/Comparison1' incorporates:
         *  Switch: '<S22>/Switch3'
         *  Switch: '<S22>/Switch4'
         */
        VeDTMC_e_Lv2BrkPdlStat = VeDTMC_e_Lv2CANBrk_Arb;
    }
    else
    {
        /* RelationalOperator: '<S159>/Comparison1' incorporates:
         *  Switch: '<S22>/Switch2'
         *  Switch: '<S22>/Switch3'
         */
        VeDTMC_e_Lv2BrkPdlStat = VeDTMC_e_Lv2Brk_Arb;
    }

    /* End of Switch: '<S22>/Switch3' */

    /* RelationalOperator: '<S159>/Comparison1' incorporates:
     *  Constant: '<S176>/Constant'
     */
    VeDTMC_b_BrkAppld = (((uint32)VeDTMC_e_Lv2BrkPdlStat) == CeDTMR_e_BrakeAppld);

    /* Logic: '<S175>/Logical5' */
    VeDTMC_b_BrkAppld_No = !VeDTMC_b_BrkAppld;

    /* Logic: '<S175>/Logical6' */
    VeDTMC_b_AHH_ModifyAccel_No = !rtb_VeDTMC_b_AccPdlNotPressed;

    /* Logic: '<S175>/Logical4' incorporates:
     *  UnitDelay: '<S214>/UnitDelay'
     */
    VeDTMC_b_BrkAppld_No_Arb = (((DTMR_ac_DW.VeDTMC_b_TotBrkTrq_prev) &&
        (VeDTMC_b_BrkAppld_No)) && (VeDTMC_b_AHH_ModifyAccel_No));

    /* Logic: '<S175>/Logical3' */
    VeDTMC_b_EPB_AHH_Arb = ((VeDTMC_b_EPBHoldSts_Appl_Arb) ||
                            (VeDTMC_b_BrkAppld_No_Arb));

    /* Abs: '<S425>/Abs' incorporates:
     *  Constant: '<S180>/ConstantValue1'
     *  Constant: '<S191>/Calib'
     *  Product: '<S180>/Multiplication3'
     */
    rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B = KeDTMR_t_dT / 2.0F;

    /* Product: '<S180>/Multiplication2' incorporates:
     *  Constant: '<S190>/Calib'
     *  Product: '<S180>/Multiplication4'
     *  Sum: '<S180>/Summation'
     *  Sum: '<S180>/Summation1'
     *  Sum: '<S180>/Summation2'
     *  UnitDelay: '<S180>/UnitDelay'
     *  UnitDelay: '<S180>/UnitDelay1'
     */
    DTMR_ac_DW.UnitDelay1_DSTATE = ((rtb_VeDTMC_M_TotBrkTrq_Arb -
        ((rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B -
          KeDTMR_t_BrkTrq_Dervtv_CutOffT) * DTMR_ac_DW.UnitDelay1_DSTATE)) -
        DTMR_ac_DW.UnitDelay_DSTATE) / (rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B
        + KeDTMR_t_BrkTrq_Dervtv_CutOffT);

    /* Lookup_n-D: '<S194>/Vector' incorporates:
     *  Product: '<S180>/Multiplication2'
     *  Switch: '<S173>/Switch1'
     *  UnitDelay: '<S180>/UnitDelay1'
     */
    VeDTMC_k_BrkTrqMult = look2_iflf_binlca_16a(rtb_VeDTMC_M_TotBrkTrq_Arb,
        DTMR_ac_DW.UnitDelay1_DSTATE, ((const float32 *)
        &(KxDTMR_K_PtcBrkOffsetMultTbl[0])), ((const float32 *)
        &(KyDTMR_K_PtcBrkOffsetMultTbl[0])), ((const float32 *)
        &(KtDTMR_K_PtcBrkOffsetMultTbl[0])), DTMR_ac_ConstP.Vector_maxIndex_o,
        9U);

    /* Lookup_n-D: '<S224>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMR_M_InR_PdlMinWhlTrq = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_InR_PdlMinWhlTrq[0])), ((const float32 *)
          &(KtDTMR_M_InR_PdlMinWhlTrq[0])), 12U);

    /* Lookup_n-D: '<S223>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMR_M_InD_PdlMinWhlTrq = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_InD_PdlMinWhlTrq[0])), ((const float32 *)
          &(KtDTMR_M_InD_PdlMinWhlTrq[0])), 12U);

    /* Lookup_n-D: '<S226>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_PdlMinWhlTrqOPD_Lv0 = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_MinTrqAeC0Tbl_OPD[0])), ((const float32 *)
          &(KtDTMR_M_MinTrqAeC0Tbl_OPD[0])), 7U);

    /* Lookup_n-D: '<S225>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_PdlMinWhlTrq_Lv0 = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_MinTrqAeC0Tbl[0])), ((const float32 *)
          &(KtDTMR_M_MinTrqAeC0Tbl[0])), 7U);

    /* Switch: '<S178>/Switch11' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5])
    {
        /* Switch: '<S178>/Switch11' */
        VeDTMC_M_PdlMinWhlTrqArb_Lv0 = VeDTMC_M_PdlMinWhlTrqOPD_Lv0;
    }
    else
    {
        /* Switch: '<S178>/Switch11' */
        VeDTMC_M_PdlMinWhlTrqArb_Lv0 = VeDTMC_M_PdlMinWhlTrq_Lv0;
    }

    /* End of Switch: '<S178>/Switch11' */

    /* RelationalOperator: '<S178>/Comparison4' incorporates:
     *  Constant: '<S219>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  Inport: '<Root>/VeDMIR_e_eCoastingSel'
     */
    VeDTMC_b_eCoastNotAvail = (((uint32)tmpRead_x) == CeDTMR_e_NotAvail);

    /* RelationalOperator: '<S178>/Comparison3' incorporates:
     *  Constant: '<S215>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  Inport: '<Root>/VeDMIR_e_eCoastingSel'
     */
    VeDTMC_b_eCoastLv0 = (((uint32)tmpRead_x) == CeDTMR_e_Level0);

    /* UnitDelay: '<S178>/UnitDelay' */
    VeDTMC_M_MinTrq_eCoastPREV = VeDTMC_M_MinTrq_eCoast;

    /* Sum: '<S178>/Sum1' */
    VeDTMC_M_MinTrqDiffPreAbs_Lv0 = VeDTMC_M_PdlMinWhlTrqArb_Lv0 -
        VeDTMC_M_MinTrq_eCoastPREV;

    /* RelationalOperator: '<S178>/Comparison2' incorporates:
     *  Constant: '<S221>/Calib'
     */
    VeDTMC_b_AccelPdlAppl = (VeDTMC_Pct_Lv2AccelPdlPos >=
        KeDTMR_Pct_AcclPdlNotAppliedLim);

    /* Logic: '<S178>/Logical10' incorporates:
     *  Constant: '<S222>/Calib'
     */
    VeDTMC_b_NoteCoastActive = !KeDTMR_b_Enbl_MinTrq_eCoast;

    /* Logic: '<S178>/Logical9' */
    VeDTMC_b_AccelPdlAppl_arb = ((VeDTMC_b_AccelPdlAppl) &&
        (VeDTMC_b_NoteCoastActive));

    /* Switch: '<S178>/Switch1' */
    if (VeDTMC_b_AccelPdlAppl_arb)
    {
        /* Switch: '<S233>/LV2_Abs_switch' incorporates:
         *  Constant: '<S233>/ConstantValue1'
         *  Product: '<S233>/Product'
         *  RelationalOperator: '<S233>/Comparison'
         */
        if (VeDTMC_M_MinTrqDiffPreAbs_Lv0 < 0.0F)
        {
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                -VeDTMC_M_MinTrqDiffPreAbs_Lv0;
        }
        else
        {
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                VeDTMC_M_MinTrqDiffPreAbs_Lv0;
        }

        /* End of Switch: '<S233>/LV2_Abs_switch' */

        /* Switch: '<S178>/Switch1' incorporates:
         *  Constant: '<S220>/Calib'
         *  RelationalOperator: '<S178>/Comparison13'
         */
        VeDTMC_M_MinTrqDiffLv0_arb = (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB <=
            KeDTMR_M_eCoastLvlDeltaTrqThresh);
    }
    else
    {
        /* Switch: '<S178>/Switch1' incorporates:
         *  Constant: '<S178>/TRUEConstant1'
         */
        VeDTMC_M_MinTrqDiffLv0_arb = true;
    }

    /* End of Switch: '<S178>/Switch1' */

    /* Logic: '<S178>/Logical3' */
    VeDTMC_b_eCoastLv0_arb2 = ((VeDTMC_b_eCoastLv0) &&
        (VeDTMC_M_MinTrqDiffLv0_arb));

    /* Logic: '<S178>/Logical4' */
    VeDTMC_b_eCoastLv0_arb = ((VeDTMC_b_eCoastNotAvail) ||
        (VeDTMC_b_eCoastLv0_arb2));

    /* Lookup_n-D: '<S228>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_PdlMinWhlTrqOPD_Lv1 = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_MinTrqAeC1Tbl_OPD[0])), ((const float32 *)
          &(KtDTMR_M_MinTrqAeC1Tbl_OPD[0])), 7U);

    /* Lookup_n-D: '<S227>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_PdlMinWhlTrq_Lv1 = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_MinTrqAeC1Tbl[0])), ((const float32 *)
          &(KtDTMR_M_MinTrqAeC1Tbl[0])), 7U);

    /* Switch: '<S178>/Switch12' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5])
    {
        /* Switch: '<S178>/Switch12' */
        VeDTMC_M_PdlMinWhlTrqArb_Lv1 = VeDTMC_M_PdlMinWhlTrqOPD_Lv1;
    }
    else
    {
        /* Switch: '<S178>/Switch12' */
        VeDTMC_M_PdlMinWhlTrqArb_Lv1 = VeDTMC_M_PdlMinWhlTrq_Lv1;
    }

    /* End of Switch: '<S178>/Switch12' */

    /* RelationalOperator: '<S178>/Comparison10' incorporates:
     *  Constant: '<S216>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  Inport: '<Root>/VeDMIR_e_eCoastingSel'
     */
    VeDTMC_b_eCoastLv1 = (((uint32)tmpRead_x) == CeDTMR_e_Level1);

    /* Sum: '<S178>/Sum2' */
    VeDTMC_M_MinTrqDiffPreAbs_Lv1 = VeDTMC_M_PdlMinWhlTrqArb_Lv1 -
        VeDTMC_M_MinTrq_eCoastPREV;

    /* Switch: '<S178>/Switch2' */
    if (VeDTMC_b_AccelPdlAppl_arb)
    {
        /* Switch: '<S234>/LV2_Abs_switch' incorporates:
         *  Constant: '<S234>/ConstantValue1'
         *  Product: '<S234>/Product'
         *  RelationalOperator: '<S234>/Comparison'
         */
        if (VeDTMC_M_MinTrqDiffPreAbs_Lv1 < 0.0F)
        {
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                -VeDTMC_M_MinTrqDiffPreAbs_Lv1;
        }
        else
        {
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                VeDTMC_M_MinTrqDiffPreAbs_Lv1;
        }

        /* End of Switch: '<S234>/LV2_Abs_switch' */

        /* Switch: '<S178>/Switch2' incorporates:
         *  Constant: '<S220>/Calib'
         *  RelationalOperator: '<S178>/Comparison14'
         */
        VeDTMC_M_MinTrqDiffLv1_arb = (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB <=
            KeDTMR_M_eCoastLvlDeltaTrqThresh);
    }
    else
    {
        /* Switch: '<S178>/Switch2' incorporates:
         *  Constant: '<S178>/TRUEConstant2'
         */
        VeDTMC_M_MinTrqDiffLv1_arb = true;
    }

    /* End of Switch: '<S178>/Switch2' */

    /* Logic: '<S178>/Logical5' */
    VeDTMC_b_eCoastLv1_arb = ((VeDTMC_b_eCoastLv1) &&
        (VeDTMC_M_MinTrqDiffLv1_arb));

    /* Lookup_n-D: '<S230>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_PdlMinWhlTrqOPD_Lv2 = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_MinTrqAeC2Tbl_OPD[0])), ((const float32 *)
          &(KtDTMR_M_MinTrqAeC2Tbl_OPD[0])), 7U);

    /* Lookup_n-D: '<S229>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_PdlMinWhlTrq_Lv2 = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_MinTrqAeC2Tbl[0])), ((const float32 *)
          &(KtDTMR_M_MinTrqAeC2Tbl[0])), 7U);

    /* Switch: '<S178>/Switch13' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5])
    {
        /* Switch: '<S178>/Switch13' */
        VeDTMC_M_PdlMinWhlTrqArb_Lv2 = VeDTMC_M_PdlMinWhlTrqOPD_Lv2;
    }
    else
    {
        /* Switch: '<S178>/Switch13' */
        VeDTMC_M_PdlMinWhlTrqArb_Lv2 = VeDTMC_M_PdlMinWhlTrq_Lv2;
    }

    /* End of Switch: '<S178>/Switch13' */

    /* RelationalOperator: '<S178>/Comparison11' incorporates:
     *  Constant: '<S217>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  Inport: '<Root>/VeDMIR_e_eCoastingSel'
     */
    VeDTMC_b_eCoastLv2 = (((uint32)tmpRead_x) == CeDTMR_e_Level2);

    /* Sum: '<S178>/Sum3' */
    VeDTMC_M_MinTrqDiffPreAbs_Lv2 = VeDTMC_M_PdlMinWhlTrqArb_Lv2 -
        VeDTMC_M_MinTrq_eCoastPREV;

    /* Switch: '<S178>/Switch3' */
    if (VeDTMC_b_AccelPdlAppl_arb)
    {
        /* Switch: '<S235>/LV2_Abs_switch' incorporates:
         *  Constant: '<S235>/ConstantValue1'
         *  Product: '<S235>/Product'
         *  RelationalOperator: '<S235>/Comparison'
         */
        if (VeDTMC_M_MinTrqDiffPreAbs_Lv2 < 0.0F)
        {
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                -VeDTMC_M_MinTrqDiffPreAbs_Lv2;
        }
        else
        {
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                VeDTMC_M_MinTrqDiffPreAbs_Lv2;
        }

        /* End of Switch: '<S235>/LV2_Abs_switch' */

        /* Switch: '<S178>/Switch3' incorporates:
         *  Constant: '<S220>/Calib'
         *  RelationalOperator: '<S178>/Comparison15'
         */
        VeDTMC_M_MinTrqDiffLv2_arb = (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB <=
            KeDTMR_M_eCoastLvlDeltaTrqThresh);
    }
    else
    {
        /* Switch: '<S178>/Switch3' incorporates:
         *  Constant: '<S178>/TRUEConstant3'
         */
        VeDTMC_M_MinTrqDiffLv2_arb = true;
    }

    /* End of Switch: '<S178>/Switch3' */

    /* Logic: '<S178>/Logical6' */
    VeDTMC_b_eCoastLv2_arb = ((VeDTMC_b_eCoastLv2) &&
        (VeDTMC_M_MinTrqDiffLv2_arb));

    /* Lookup_n-D: '<S232>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_PdlMinWhlTrqOPD_Lv3 = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_MinTrqAeC3Tbl_OPD[0])), ((const float32 *)
          &(KtDTMR_M_MinTrqAeC3Tbl_OPD[0])), 7U);

    /* Lookup_n-D: '<S231>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_PdlMinWhlTrq_Lv3 = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_MinTrqAeC3Tbl[0])), ((const float32 *)
          &(KtDTMR_M_MinTrqAeC3Tbl[0])), 7U);

    /* Switch: '<S178>/Switch14' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5])
    {
        /* Switch: '<S178>/Switch14' */
        VeDTMC_M_PdlMinWhlTrqArb_Lv3 = VeDTMC_M_PdlMinWhlTrqOPD_Lv3;
    }
    else
    {
        /* Switch: '<S178>/Switch14' */
        VeDTMC_M_PdlMinWhlTrqArb_Lv3 = VeDTMC_M_PdlMinWhlTrq_Lv3;
    }

    /* End of Switch: '<S178>/Switch14' */

    /* RelationalOperator: '<S178>/Comparison12' incorporates:
     *  Constant: '<S218>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  Inport: '<Root>/VeDMIR_e_eCoastingSel'
     */
    VeDTMC_b_eCoastLv3 = (((uint32)tmpRead_x) == CeDTMR_e_Level3);

    /* Sum: '<S178>/Sum4' */
    VeDTMC_M_MinTrqDiffPreAbs_Lv3 = VeDTMC_M_PdlMinWhlTrqArb_Lv3 -
        VeDTMC_M_MinTrq_eCoastPREV;

    /* Switch: '<S178>/Switch4' */
    if (VeDTMC_b_AccelPdlAppl_arb)
    {
        /* Switch: '<S236>/LV2_Abs_switch' incorporates:
         *  Constant: '<S236>/ConstantValue1'
         *  Product: '<S236>/Product'
         *  RelationalOperator: '<S236>/Comparison'
         */
        if (VeDTMC_M_MinTrqDiffPreAbs_Lv3 < 0.0F)
        {
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                -VeDTMC_M_MinTrqDiffPreAbs_Lv3;
        }
        else
        {
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                VeDTMC_M_MinTrqDiffPreAbs_Lv3;
        }

        /* End of Switch: '<S236>/LV2_Abs_switch' */

        /* Switch: '<S178>/Switch4' incorporates:
         *  Constant: '<S220>/Calib'
         *  RelationalOperator: '<S178>/Comparison16'
         */
        VeDTMC_M_MinTrqDiffLv3_arb = (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB <=
            KeDTMR_M_eCoastLvlDeltaTrqThresh);
    }
    else
    {
        /* Switch: '<S178>/Switch4' incorporates:
         *  Constant: '<S178>/TRUEConstant4'
         */
        VeDTMC_M_MinTrqDiffLv3_arb = true;
    }

    /* End of Switch: '<S178>/Switch4' */

    /* Logic: '<S178>/Logical7' */
    VeDTMC_b_eCoastLv3_arb = ((VeDTMC_b_eCoastLv3) &&
        (VeDTMC_M_MinTrqDiffLv3_arb));

    /* Switch: '<S178>/Switch10' */
    if (VeDTMC_b_eCoastLv3_arb)
    {
        /* Switch: '<S178>/Switch10' */
        VeDTMC_b_eCoastLv2_else = VeDTMC_M_PdlMinWhlTrqArb_Lv3;
    }
    else
    {
        /* Switch: '<S178>/Switch10' */
        VeDTMC_b_eCoastLv2_else = VeDTMC_M_MinTrq_eCoastPREV;
    }

    /* End of Switch: '<S178>/Switch10' */

    /* Switch: '<S178>/Switch9' */
    if (VeDTMC_b_eCoastLv2_arb)
    {
        /* Switch: '<S178>/Switch9' */
        VeDTMC_b_eCoastLv1_else = VeDTMC_M_PdlMinWhlTrqArb_Lv2;
    }
    else
    {
        /* Switch: '<S178>/Switch9' */
        VeDTMC_b_eCoastLv1_else = VeDTMC_b_eCoastLv2_else;
    }

    /* End of Switch: '<S178>/Switch9' */

    /* Switch: '<S178>/Switch8' */
    if (VeDTMC_b_eCoastLv1_arb)
    {
        /* Switch: '<S178>/Switch8' */
        VeDTMC_b_eCoastLv0_else = VeDTMC_M_PdlMinWhlTrqArb_Lv1;
    }
    else
    {
        /* Switch: '<S178>/Switch8' */
        VeDTMC_b_eCoastLv0_else = VeDTMC_b_eCoastLv1_else;
    }

    /* End of Switch: '<S178>/Switch8' */

    /* Switch: '<S178>/Switch5' */
    if (VeDTMC_b_eCoastLv0_arb)
    {
        /* Switch: '<S178>/Switch5' */
        VeDTMC_M_MinTrq_eCoast = VeDTMC_M_PdlMinWhlTrqArb_Lv0;
    }
    else
    {
        /* Switch: '<S178>/Switch5' */
        VeDTMC_M_MinTrq_eCoast = VeDTMC_b_eCoastLv0_else;
    }

    /* End of Switch: '<S178>/Switch5' */

    /* Switch: '<S178>/Switch15' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5])
    {
        /* Switch: '<S178>/Switch15' incorporates:
         *  Sum: '<S178>/Sum7'
         */
        VeDTMC_M_MinTrqLv0LvXDiff = VeDTMC_M_PdlMinWhlTrqOPD_Lv0 -
            VeDTMC_M_MinTrq_eCoast;
    }
    else
    {
        /* Switch: '<S178>/Switch15' incorporates:
         *  Sum: '<S178>/Sum6'
         */
        VeDTMC_M_MinTrqLv0LvXDiff = VeDTMC_M_PdlMinWhlTrq_Lv0 -
            VeDTMC_M_MinTrq_eCoast;
    }

    /* End of Switch: '<S178>/Switch15' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VePLTR_Pct_EstSlopeAnglePct' */
    (void)Rte_Read_VePLTR_Pct_EstSlopeAnglePct_Value(&tmpRead_1b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* RelationalOperator: '<S178>/Comparison' incorporates:
     *  Constant: '<S178>/ConstantValue2'
     */
    VeDTMC_b_MinTrqDiffExist = (VeDTMC_M_MinTrqLv0LvXDiff >= 0.0F);

    /* Logic: '<S178>/Logical8' incorporates:
     *  Constant: '<S222>/Calib'
     */
    VeDTMC_b_EnblAeCoastOffset = ((KeDTMR_b_Enbl_MinTrq_eCoast) &&
        (VeDTMC_b_MinTrqDiffExist));

    /* Switch: '<S178>/Switch6' incorporates:
     *  Logic: '<S178>/Logical1'
     */
    if ((DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5]) ||
            (VeDTMC_b_EnblAeCoastOffset))
    {
        /* Switch: '<S178>/Switch6' */
        VeDTMR_M_InD_PdlMinWhlTrq_arb = VeDTMR_M_InD_PdlMinWhlTrq;
    }
    else
    {
        /* Switch: '<S178>/Switch6' */
        VeDTMR_M_InD_PdlMinWhlTrq_arb = VeDTMC_M_MinTrq_eCoast;
    }

    /* End of Switch: '<S178>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMI'
     */
    /* Switch: '<S178>/Switch' incorporates:
     *  SignalConversion generated from: '<S5>/Lv2_VehInRev'
     */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0])
    {
        /* Switch: '<S178>/Switch' */
        VeDTMR_M_AccelPdlMinWhlTrq_NormalMd = VeDTMR_M_InR_PdlMinWhlTrq;
    }
    else
    {
        /* Switch: '<S178>/Switch' */
        VeDTMR_M_AccelPdlMinWhlTrq_NormalMd = VeDTMR_M_InD_PdlMinWhlTrq_arb;
    }

    /* End of Switch: '<S178>/Switch' */

    /* Product: '<S173>/Product' */
    VeDTMC_M_MinWhlTrq_BrkTrq = VeDTMC_k_BrkTrqMult *
        VeDTMR_M_AccelPdlMinWhlTrq_NormalMd;

    /* RelationalOperator: '<S173>/Comparison5' */
    VeDTMC_b_UseBrkTrqForMinTrq = (VeDTMC_M_MinWhlTrq_BrkTrq >=
        VeDTMC_M_Lv2CreepTrq_GL);

    /* Switch: '<S173>/Switch4' */
    if (VeDTMC_b_UseBrkTrqForMinTrq)
    {
        /* Switch: '<S173>/Switch4' */
        VeDTMC_M_PdlMinWhlTrq_Brk = VeDTMC_M_MinWhlTrq_BrkTrq;
    }
    else
    {
        /* Switch: '<S173>/Switch4' */
        VeDTMC_M_PdlMinWhlTrq_Brk = VeDTMC_M_Lv2CreepTrq_GL;
    }

    /* End of Switch: '<S173>/Switch4' */

    /* RelationalOperator: '<S173>/Comparison6' */
    VeDTMC_b_MinTrqGTCreepTrq = (VeDTMR_M_AccelPdlMinWhlTrq_NormalMd >
        VeDTMC_M_Lv2CreepTrq_GL);

    /* Logic: '<S173>/Logical' */
    VeDTMC_b_ConsiderBrkTrqForMinTrq = ((VeDTMC_b_BrkAppld) &&
        (VeDTMC_b_MinTrqGTCreepTrq));

    /* Switch: '<S173>/Switch2' */
    if (VeDTMC_b_ConsiderBrkTrqForMinTrq)
    {
        /* Switch: '<S173>/Switch2' */
        VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk_BF = VeDTMC_M_PdlMinWhlTrq_Brk;
    }
    else
    {
        /* Switch: '<S173>/Switch2' */
        VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk_BF =
            VeDTMR_M_AccelPdlMinWhlTrq_NormalMd;
    }

    /* End of Switch: '<S173>/Switch2' */

    /* Lookup_n-D: '<S242>/Vector' incorporates:
     *  Inport: '<Root>/VePLTR_Pct_EstSlopeAnglePct'
     */
    VeDTMC_M_Lv2eCreepMult4RoadSlope = look1_iflf_binlca_16a(tmpRead_1b, ((const
        float32 *)&(KxDTMR_K_eCreepMult4RoadSlope[0])), ((const float32 *)
        &(KtDTMR_K_eCreepMult4RoadSlope[0])), 18U);

    /* Product: '<S179>/Product1' */
    VeDTMC_M_eCreepWhlTrq = VeDTMC_M_Lv2eCreepMult4RoadSlope *
        VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk_BF;

    /* Outputs for Atomic SubSystem: '<S13>/Hysteresis' */
    /* Switch: '<S140>/Switch1' incorporates:
     *  Constant: '<S140>/ConstantValue'
     *  Constant: '<S142>/Calib'
     *  Constant: '<S143>/Calib'
     *  RelationalOperator: '<S140>/GreaterThan'
     *  RelationalOperator: '<S140>/GreaterThan1'
     *  UnitDelay: '<S140>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_p_Lv2Bra > KeDTMR_P_BrkPress_CreepLmtRSP)
    {
        DTMR_ac_DW.UnitDelay_DSTATE_b = true;
    }
    else
    {
        DTMR_ac_DW.UnitDelay_DSTATE_b =
            ((rtb_TmpSignalConversionAtVeSCMR_p_Lv2Bra >=
              KeDTMR_P_BrkPress_CreepLmtLSP) && (DTMR_ac_DW.UnitDelay_DSTATE_b));
    }

    /* End of Switch: '<S140>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Hysteresis' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_T_Lv2MCPA_Temp' */
    (void)Rte_Read_VeSCMR_T_Lv2MCPA_Temp_Value(&tmpRead_l);

    /* Inport: '<Root>/VeSCMR_T_Lv2HV_BatModTempMin' */
    (void)Rte_Read_VeSCMR_T_Lv2HV_BatModTempMin_Value(&tmpRead_k);

    /* Inport: '<Root>/VeLTIR_b_Lv2MCPA_Temp_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MCPA_Temp_FA_Value(&rtb_AND_ny);

    /* Inport: '<Root>/VeLTIR_b_Lv2HV_BatModTempMin_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2HV_BatModTempMin_FA_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Logic: '<S13>/Logical4' incorporates:
     *  UnitDelay: '<S140>/UnitDelay'
     */
    VeDTMC_b_BrakeNoPressured = !DTMR_ac_DW.UnitDelay_DSTATE_b;

    /* RelationalOperator: '<S13>/Comparison5' incorporates:
     *  Constant: '<S144>/Calib'
     */
    rtb_VeDTMC_b_AccPdlNotPressed = (VeDTMC_Pct_Lv2AccelPdlPos <
        KeDTMR_Pct_AccPdlNotAppliedLim);

    /* Logic: '<S289>/Logical1' */
    VeDTMC_b_CannotValidateLv1Range = (((VeDTMC_b_Lv2HVBatSoCFA) || tmpRead_c) ||
        rtb_AND_ny);

    /* Lookup_n-D: '<S377>/Vector' incorporates:
     *  Switch: '<S398>/Switch3'
     */
    VeDTMC_l_SOCBasedRngESt = look1_iflf_binlca_16a(VeDTMC_Pct_Lv2HVBatSoC, ((
        const float32 *)&(KxDTMR_l_RangeBasedonSOC[0])), ((const float32 *)
        &(KtDTMR_l_RangeBasedonSOC[0])), 11U);

    /* Lookup_n-D: '<S378>/Vector' incorporates:
     *  Inport: '<Root>/VeSCMR_T_Lv2HV_BatModTempMin'
     */
    VeDTMC_r_HVBatTempRdFctr = look1_iflf_binlca_16a(tmpRead_k, ((const float32 *)
        &(KxDTMR_r_HVBatTempRdFctr[0])), ((const float32 *)
        &(KtDTMR_r_HVBatTempRdFctr[0])), 17U);

    /* Lookup_n-D: '<S379>/Vector' incorporates:
     *  Inport: '<Root>/VeSCMR_T_Lv2MCPA_Temp'
     */
    VeDTMC_r_MtrTempRdFctrForRng = look1_iflf_binlca_16a(tmpRead_l, ((const
        float32 *)&(KxDTMR_r_MtrTempRdFctrForRng[0])), ((const float32 *)
        &(KtDTMR_r_MtrTempRdFctrForRng[0])), 30U);

    /* Product: '<S289>/Product' */
    VeDTMC_l_SOCBasedRangeEst_Arb = (VeDTMC_l_SOCBasedRngESt *
        VeDTMC_r_HVBatTempRdFctr) * VeDTMC_r_MtrTempRdFctrForRng;

    /* Sum: '<S289>/Sum' incorporates:
     *  Constant: '<S375>/Calib'
     */
    VeDTMC_l_EstRngMaxLim = VeDTMC_l_SOCBasedRangeEst_Arb +
        KeDTMR_l_Lv2RngMaxTol;

    /* Sum: '<S289>/Sum1' incorporates:
     *  Constant: '<S376>/Calib'
     */
    VeDTMC_l_EstRngMinLim = VeDTMC_l_SOCBasedRangeEst_Arb - KeDTMR_l_RngMinTol;

    /* Outputs for Atomic SubSystem: '<S289>/MinMaxLimiter' */
    /* Switch: '<S380>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S380>/logicals'
     */
    if (VeDTMC_l_EstRngMaxLim < VeDTMC_l_Lv1EstRng_Arb)
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_l_EstRngMaxLim;
    }
    else
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_l_Lv1EstRng_Arb;
    }

    /* End of Switch: '<S380>/LimiterSwitch' */

    /* Switch: '<S380>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S380>/logicals1'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb > VeDTMC_l_EstRngMinLim)
    {
        /* Switch: '<S380>/LimiterSwitch1' */
        VeDTMC_l_Lv1EstRangeLmtd = VeDTMC_M_DTRcmnd_MinLim_RawArb;
    }
    else
    {
        /* Switch: '<S380>/LimiterSwitch1' */
        VeDTMC_l_Lv1EstRangeLmtd = VeDTMC_l_EstRngMinLim;
    }

    /* End of Switch: '<S380>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S289>/MinMaxLimiter' */

    /* Switch: '<S289>/Switch12' */
    if (!VeDTMC_b_CannotValidateLv1Range)
    {
        /* Switch: '<S289>/Switch12' */
        VeDTMC_l_Lv1EstRng_Arb = VeDTMC_l_Lv1EstRangeLmtd;
    }

    /* End of Switch: '<S289>/Switch12' */

    /* RelationalOperator: '<S288>/Comparison9' incorporates:
     *  Constant: '<S374>/Calib'
     */
    VeDTMC_b_Rng_GT_NormalRngLL = (VeDTMC_l_Lv1EstRng_Arb >
        KeDTMR_l_NormalRng_LL_Km);

    /* RelationalOperator: '<S287>/Comparison2' incorporates:
     *  Constant: '<S367>/Calib'
     */
    VeDTMC_b_Rng_LT_TrtlMd1_UL = (VeDTMC_l_Lv1EstRng_Arb <=
        KeDTMR_l_TrtlMd1_UL_Km);

    /* RelationalOperator: '<S287>/Comparison1' incorporates:
     *  Constant: '<S366>/Calib'
     */
    VeDTMC_b_Rng_GT_TrtlMd1_LL = (VeDTMC_l_Lv1EstRng_Arb >=
        KeDTMR_l_TrtlMd1_LL_Km);

    /* Logic: '<S287>/Logical' */
    VeDTMC_b_RngOkForTrtlMd1 = ((VeDTMC_b_Rng_LT_TrtlMd1_UL) &&
        (VeDTMC_b_Rng_GT_TrtlMd1_LL));

    /* RelationalOperator: '<S287>/Comparison4' incorporates:
     *  Constant: '<S369>/Calib'
     */
    VeDTMC_b_Rng_LT_TrtlMd2_UL = (VeDTMC_l_Lv1EstRng_Arb <=
        KeDTMR_l_TrtlMd2_UL_Km);

    /* RelationalOperator: '<S287>/Comparison3' incorporates:
     *  Constant: '<S368>/Calib'
     */
    VeDTMC_b_Rng_GT_TrtlMd2_LL = (VeDTMC_l_Lv1EstRng_Arb >=
        KeDTMR_l_TrtlMd2_LL_Km);

    /* Logic: '<S287>/Logical1' */
    VeDTMC_b_RngOkForTrtlMd2 = ((VeDTMC_b_Rng_LT_TrtlMd2_UL) &&
        (VeDTMC_b_Rng_GT_TrtlMd2_LL));

    /* RelationalOperator: '<S287>/Comparison6' incorporates:
     *  Constant: '<S371>/Calib'
     */
    VeDTMC_b_Rng_LT_TrtlMd3_UL = (VeDTMC_l_Lv1EstRng_Arb <=
        KeDTMR_l_TrtlMd3_UL_Km);

    /* RelationalOperator: '<S287>/Comparison5' incorporates:
     *  Constant: '<S370>/Calib'
     */
    VeDTMC_b_Rng_GT_TrtlMd3_LL = (VeDTMC_l_Lv1EstRng_Arb >=
        KeDTMR_l_TrtlMd3_LL_Km);

    /* Logic: '<S287>/Logical2' */
    VeDTMC_b_RngOkForTrtlMd3 = ((VeDTMC_b_Rng_LT_TrtlMd3_UL) &&
        (VeDTMC_b_Rng_GT_TrtlMd3_LL));

    /* RelationalOperator: '<S287>/Comparison8' incorporates:
     *  Constant: '<S372>/Calib'
     */
    VeDTMC_b_Rng_LT_TrtlMd4_UL = (VeDTMC_l_Lv1EstRng_Arb <=
        KeDTMR_l_TrtlMd4_LL_Km);

    /* RelationalOperator: '<S287>/Comparison7' incorporates:
     *  Constant: '<S373>/Calib'
     */
    VeDTMC_b_Rng_GT_TrtlMd4_LL = (VeDTMC_l_Lv1EstRng_Arb >=
        KeDTMR_l_TrtlMd4_UL_Km);

    /* Logic: '<S287>/Logical3' */
    VeDTMC_b_RngOkForTrtlMd4 = ((VeDTMC_b_Rng_LT_TrtlMd4_UL) &&
        (VeDTMC_b_Rng_GT_TrtlMd4_LL));

    /* Switch: '<S287>/Switch3' incorporates:
     *  Constant: '<S362>/Constant'
     *  Switch: '<S287>/Switch1'
     *  Switch: '<S287>/Switch12'
     *  Switch: '<S287>/Switch2'
     *  UnitDelay: '<S287>/UnitDelay1'
     */
    if (VeDTMC_b_RngOkForTrtlMd1)
    {
        DTMR_ac_DW.VeDTMC_e_DrvMd_Rng_Prev = CeDTMR_e_DrvMdTotal_Turtle1;
    }
    else if (VeDTMC_b_RngOkForTrtlMd2)
    {
        /* Switch: '<S287>/Switch2' incorporates:
         *  Constant: '<S363>/Constant'
         *  Switch: '<S287>/Switch3'
         *  UnitDelay: '<S287>/UnitDelay1'
         */
        DTMR_ac_DW.VeDTMC_e_DrvMd_Rng_Prev = CeDTMR_e_DrvMdTotal_Turtle2;
    }
    else if (VeDTMC_b_RngOkForTrtlMd3)
    {
        /* Switch: '<S287>/Switch1' incorporates:
         *  Constant: '<S364>/Constant'
         *  Switch: '<S287>/Switch2'
         *  Switch: '<S287>/Switch3'
         *  UnitDelay: '<S287>/UnitDelay1'
         */
        DTMR_ac_DW.VeDTMC_e_DrvMd_Rng_Prev = CeDTMR_e_DrvMdTotal_Turtle3;
    }
    else
    {
        if (VeDTMC_b_RngOkForTrtlMd4)
        {
            /* Switch: '<S287>/Switch12' incorporates:
             *  Constant: '<S365>/Constant'
             *  Switch: '<S287>/Switch1'
             *  Switch: '<S287>/Switch2'
             *  Switch: '<S287>/Switch3'
             *  UnitDelay: '<S287>/UnitDelay1'
             */
            DTMR_ac_DW.VeDTMC_e_DrvMd_Rng_Prev = CeDTMR_e_DrvMdTotal_Turtle4;
        }
    }

    /* End of Switch: '<S287>/Switch3' */

    /* Switch: '<S288>/Switch3' */
    if (VeDTMC_b_Rng_GT_NormalRngLL)
    {
        /* Switch: '<S288>/Switch3' incorporates:
         *  SignalConversion generated from: '<S286>/Variant Source1'
         */
        VeDTMC_e_Lv2DrvMd = VeDTMC_e_Lv2DriverMd_Arb;
    }
    else
    {
        /* Switch: '<S288>/Switch3' incorporates:
         *  Switch: '<S287>/Switch3'
         *  UnitDelay: '<S287>/UnitDelay1'
         */
        VeDTMC_e_Lv2DrvMd = DTMR_ac_DW.VeDTMC_e_DrvMd_Rng_Prev;
    }

    /* End of Switch: '<S288>/Switch3' */

    /* Switch: '<S13>/Switch2' incorporates:
     *  Constant: '<S145>/Calib'
     *  Inport: '<Root>/VeSRAR_b_Inhibit_DriveMode'
     */
    if (KeDTMR_b_DrvMdInhb4eCreepEnbl)
    {
        (void)Rte_Read_VeSRAR_b_Inhibit_DriveMode_Value(&rtb_UnitDelay_fg);

        /* UnitDelay: '<S126>/Unit Delay' incorporates:
         *  Inport: '<Root>/VeSRAR_b_Inhibit_DriveMode'
         *  RelationalOperator: '<S13>/Comparison11'
         */
        rtb_UnitDelay_fg = !rtb_UnitDelay_fg;
    }
    else
    {
        /* UnitDelay: '<S126>/Unit Delay' incorporates:
         *  Constant: '<S13>/FALSEConstant3'
         */
        rtb_UnitDelay_fg = true;
    }

    /* End of Switch: '<S13>/Switch2' */

    /* Switch: '<S13>/Switch3' incorporates:
     *  Constant: '<S135>/Constant'
     *  Constant: '<S137>/Constant'
     *  Constant: '<S138>/Constant'
     *  Constant: '<S139>/Constant'
     *  Constant: '<S13>/FALSEConstant2'
     *  Constant: '<S147>/Calib'
     *  Logic: '<S13>/Logical5'
     *  RelationalOperator: '<S13>/Comparison1'
     *  RelationalOperator: '<S13>/Comparison2'
     *  RelationalOperator: '<S13>/Comparison3'
     *  RelationalOperator: '<S13>/Comparison6'
     *  Switch: '<S288>/Switch3'
     */
    if (KeDTMR_b_TurtleMdSts4eCreepEnbl)
    {
        rtb_AND_ny = ((((((uint32)VeDTMC_e_Lv2DrvMd) !=
                         CeDTMR_e_DrvMdTotal_Turtle1) && (((uint32)
                          VeDTMC_e_Lv2DrvMd) != CeDTMR_e_DrvMdTotal_Turtle2)) &&
                       (((uint32)VeDTMC_e_Lv2DrvMd) !=
                        CeDTMR_e_DrvMdTotal_Turtle3)) && (((uint32)
                        VeDTMC_e_Lv2DrvMd) != CeDTMR_e_DrvMdTotal_Turtle4));
    }
    else
    {
        rtb_AND_ny = true;
    }

    /* End of Switch: '<S13>/Switch3' */

    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/FALSEConstant1'
     *  Constant: '<S146>/Calib'
     *  Constant: '<S148>/Calib'
     *  DataTypeConversion: '<S5>/DataTypeConversion'
     *  RelationalOperator: '<S13>/Comparison8'
     */
    if (KeDTMR_b_EcoMdInhb4eCreepEnbl)
    {
        /* Outputs for Function Call SubSystem: '<S1>/DTMI' */
        tmpRead_c = (((uint16)tmpRead_i) != KeDTMR_e_Lv2DrvMd_ECO);

        /* End of Outputs for SubSystem: '<S1>/DTMI' */
    }
    else
    {
        tmpRead_c = true;
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Logic: '<S13>/Logical10' incorporates:
     *  Constant: '<S136>/Constant'
     *  Logic: '<S13>/Logical2'
     *  Logic: '<S13>/Logical3'
     *  RelationalOperator: '<S13>/Comparison4'
     */
    VeDTMC_b_eCreepEna =
        ((((((((!DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1]) &&
               (!VeDTMI_b_Lv2ACCEnbld)) && (((uint32)
                rtb_TmpSignalConversionAtVeSCMR_e_EPBHol) ==
               CeSTMR_e_EPBHoldSts_REL)) && (VeDTMC_b_BrakeNoPressured)) &&
            rtb_VeDTMC_b_AccPdlNotPressed) && rtb_AND_ny) && tmpRead_c) &&
         rtb_UnitDelay_fg);

    /* Outputs for Atomic SubSystem: '<S13>/StopWatchResetEnabled' */
    /* Switch: '<S151>/Switch2' incorporates:
     *  Constant: '<S141>/Calib'
     *  Constant: '<S151>/ConstantValue2'
     *  Logic: '<S13>/Logical6'
     *  Logic: '<S13>/Logical7'
     *  RelationalOperator: '<S13>/Comparison7'
     *  Switch: '<S151>/Switch'
     *  UnitDelay: '<S151>/UnitDelay'
     *  UnitDelay: '<S179>/UnitDelay'
     */
    if ((DTMR_ac_DW.VeDTMC_M_eCreepWhlTrq_prev < KeDTMR_M_eCreepTrqThresh) ||
            (!VeDTMC_b_eCreepEna))
    {
        DTMR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S151>/UnitDelay' incorporates:
         *  Constant: '<S149>/Calib'
         *  Sum: '<S151>/Subtraction'
         *  Switch: '<S151>/Switch2'
         */
        DTMR_ac_DW.UnitDelay_DSTATE_f += KeDTMR_t_dT;
    }

    /* End of Switch: '<S151>/Switch2' */
    /* End of Outputs for SubSystem: '<S13>/StopWatchResetEnabled' */

    /* Logic: '<S13>/Logical8' incorporates:
     *  Constant: '<S150>/Calib'
     *  Logic: '<S13>/Logical9'
     *  RelationalOperator: '<S13>/Comparison9'
     *  UnitDelay: '<S151>/UnitDelay'
     */
    VeDTMC_b_eCreepAvail = ((VeDTMC_b_eCreepEna) &&
                            (DTMR_ac_DW.UnitDelay_DSTATE_f <
        KeDTMR_t_eCreepMaxTime));

    /* Switch: '<S179>/Switch2' */
    if (VeDTMC_b_eCreepAvail)
    {
        /* Switch: '<S179>/Switch2' */
        VeDTMC_M_CreepReqMinTrq = VeDTMC_M_eCreepWhlTrq;
    }
    else
    {
        /* Switch: '<S179>/Switch2' incorporates:
         *  Constant: '<S179>/ConstantValue3'
         */
        VeDTMC_M_CreepReqMinTrq = 0.0F;
    }

    /* End of Switch: '<S179>/Switch2' */

    /* Switch: '<S179>/Switch3' */
    if (VeDTMC_b_AccelPdlAppl)
    {
        /* Switch: '<S179>/Switch3' */
        VeDTMC_M_CreepReqMinTrq_Raw = VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk_BF;
    }
    else
    {
        /* Switch: '<S179>/Switch3' */
        VeDTMC_M_CreepReqMinTrq_Raw = VeDTMC_M_CreepReqMinTrq;
    }

    /* End of Switch: '<S179>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S179>/GradientLimiter' */
    /* Sum: '<S237>/Sum2' incorporates:
     *  UnitDelay: '<S237>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMC_M_CreepReqMinTrq_Raw -
        VeDTMR_M_CreepReqMinTrq_GRD;

    /* Outputs for Atomic SubSystem: '<S237>/Limiter' */
    /* Switch: '<S244>/Switch1' incorporates:
     *  Constant: '<S241>/Calib'
     *  RelationalOperator: '<S244>/RelationalOperator'
     */
    if (KeDTMR_dM_eCreepTrqCancRateLU < rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB)
    {
        /* Switch: '<S124>/Switch1' */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_dM_eCreepTrqCancRateLU;
    }

    /* End of Switch: '<S244>/Switch1' */

    /* Switch: '<S244>/Switch' incorporates:
     *  Constant: '<S240>/Calib'
     *  RelationalOperator: '<S244>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB <=
            KeDTMR_dM_eCreepTrqCancRateLD)
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_dM_eCreepTrqCancRateLD;
    }

    /* End of Switch: '<S244>/Switch' */
    /* End of Outputs for SubSystem: '<S237>/Limiter' */

    /* Sum: '<S237>/Sum3' incorporates:
     *  UnitDelay: '<S237>/UnitDelay'
     */
    VeDTMR_M_CreepReqMinTrq_GRD = rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB +
        VeDTMR_M_CreepReqMinTrq_GRD;

    /* End of Outputs for SubSystem: '<S179>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising' */
    /* Logic: '<S134>/OR1' incorporates:
     *  UnitDelay: '<S134>/UnitDelay'
     */
    rtb_UnitDelay_fg = !DTMR_ac_DW.UnitDelay_DSTATE_m;

    /* Update for UnitDelay: '<S134>/UnitDelay' */
    DTMR_ac_DW.UnitDelay_DSTATE_m = VeDTMC_b_eCreepAvail;

    /* End of Outputs for SubSystem: '<S13>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S13>/EdgeFalling' */
    /* Logic: '<S133>/AND' incorporates:
     *  Logic: '<S133>/OR1'
     *  UnitDelay: '<S133>/UnitDelay'
     */
    rtb_AND_ny = ((!rtb_VeDTMC_b_AccPdlNotPressed) &&
                  (DTMR_ac_DW.UnitDelay_DSTATE_ow));

    /* Update for UnitDelay: '<S133>/UnitDelay' */
    DTMR_ac_DW.UnitDelay_DSTATE_ow = rtb_VeDTMC_b_AccPdlNotPressed;

    /* End of Outputs for SubSystem: '<S13>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising' */
    /* Logic: '<S13>/Logical1' incorporates:
     *  Logic: '<S134>/AND'
     */
    VeDTMC_b_eCreepStart = (((VeDTMC_b_eCreepAvail) && rtb_UnitDelay_fg) ||
                            rtb_AND_ny);

    /* End of Outputs for SubSystem: '<S13>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S179>/SignalLatchOnWithReset' */
    /* Logic: '<S243>/OR1' incorporates:
     *  Abs: '<S179>/Abs'
     *  Constant: '<S238>/Calib'
     *  Logic: '<S243>/NOT'
     *  Logic: '<S243>/OR'
     *  RelationalOperator: '<S179>/Comparison20'
     *  Sum: '<S179>/Sum6'
     *  UnitDelay: '<S243>/Unit Delay'
     */
    DTMR_ac_DW.UnitDelay_DSTATE_p2 = ((VeDTMC_b_eCreepStart) || ((fabsf
        (VeDTMC_M_CreepReqMinTrq_Raw - VeDTMC_M_CreepArbMinTrq) >
        KeDTMR_M_eCreepRampTrqThresh) && (DTMR_ac_DW.UnitDelay_DSTATE_p2)));

    /* End of Outputs for SubSystem: '<S179>/SignalLatchOnWithReset' */

    /* Switch: '<S179>/Switch1' */
    if (DTMR_ac_DW.UnitDelay_DSTATE_p2)
    {
        /* Switch: '<S179>/Switch1' */
        VeDTMC_M_CreepArbMinTrq = VeDTMR_M_CreepReqMinTrq_GRD;
    }
    else
    {
        /* Switch: '<S179>/Switch1' */
        VeDTMC_M_CreepArbMinTrq = VeDTMC_M_CreepReqMinTrq_Raw;
    }

    /* End of Switch: '<S179>/Switch1' */

    /* Switch: '<S179>/Switch6' incorporates:
     *  Constant: '<S239>/Calib'
     */
    if (KeDTMR_b_eCreepingEna)
    {
        /* Switch: '<S179>/Switch6' */
        VeDTMC_M_CreepTrqArb = VeDTMC_M_CreepArbMinTrq;
    }
    else
    {
        /* Switch: '<S179>/Switch6' */
        VeDTMC_M_CreepTrqArb = VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk_BF;
    }

    /* End of Switch: '<S179>/Switch6' */

    /* Switch: '<S175>/Switch6' */
    if (VeDTMC_b_EPB_AHH_Arb)
    {
        /* Switch: '<S175>/Switch6' */
        VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk = VeDTMC_M_Lv2CreepTrq_GL;
    }
    else
    {
        /* Switch: '<S175>/Switch6' */
        VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk = VeDTMC_M_CreepTrqArb;
    }

    /* End of Switch: '<S175>/Switch6' */

    /* Switch: '<S174>/Switch1' */
    if (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd)
    {
        /* Switch: '<S174>/Switch1' */
        VeDTMC_M_MinTrqArb_w_Brk_SpdFA = VeDTMC_M_AccelPdlMinWhlTrq_VehSpdFA;
    }
    else
    {
        /* Switch: '<S174>/Switch1' */
        VeDTMC_M_MinTrqArb_w_Brk_SpdFA = VeDTMC_M_AccelPdlMinWhlTrq_ArbBrk;
    }

    /* End of Switch: '<S174>/Switch1' */

    /* Sum: '<S174>/Sum' incorporates:
     *  Constant: '<S200>/Calib'
     */
    VeDTMC_M_MinTrqArb_w_Offset = KeDTMR_M_MinTrq_OffSet +
        VeDTMC_M_MinTrqArb_w_Brk_SpdFA;

    /* RelationalOperator: '<S159>/Comparison9' incorporates:
     *  Constant: '<S177>/Constant'
     */
    VeDTMC_b_BrkNotAppld = (((uint32)VeDTMC_e_Lv2BrkPdlStat) ==
                            CeDTMR_e_BrkNotAppld);

    /* RelationalOperator: '<S174>/Comparison8' incorporates:
     *  Constant: '<S199>/Constant'
     *  DataTypeConversion: '<S628>/DataTypeConversion'
     */
    VeDTMC_b_PVSMode5Actv = (((uint32)VeDTMI_e_Lv2PVMode) ==
        CePSMR_e_Lv2PVSZeroTrqReq);

    /* Logic: '<S174>/Logical2' */
    VeDTMC_b_AddOffsetToMinTrq = ((VeDTMC_b_BrkNotAppld) &&
        (VeDTMC_b_PVSMode5Actv));

    /* Switch: '<S174>/Switch6' */
    if (VeDTMC_b_AddOffsetToMinTrq)
    {
        /* Switch: '<S174>/Switch6' */
        VeDTMC_M_AccelPdlMinWhlTrq_Raw = VeDTMC_M_MinTrqArb_w_Offset;
    }
    else
    {
        /* Switch: '<S174>/Switch6' */
        VeDTMC_M_AccelPdlMinWhlTrq_Raw = VeDTMC_M_MinTrqArb_w_Brk_SpdFA;
    }

    /* End of Switch: '<S174>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S174>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S204>/Switch1' incorporates:
     *  Constant: '<S203>/Calib'
     *  Product: '<S204>/Multiplication'
     *  Sum: '<S204>/Subtraction'
     *  Sum: '<S204>/Summation'
     *  UnitDelay: '<S204>/UnitDelay'
     */
    VeDTMC_M_AccelPdlMinWhlTrq_Fltrd = ((VeDTMC_M_AccelPdlMinWhlTrq_Raw -
        VeDTMC_M_AccelPdlMinWhlTrq_Fltrd) * KeDTMR_k_PdlMinTrqFiltCoeff) +
        VeDTMC_M_AccelPdlMinWhlTrq_Fltrd;

    /* End of Outputs for SubSystem: '<S174>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Switch: '<S174>/Switch4' incorporates:
     *  Logic: '<S205>/AND'
     *  Logic: '<S205>/OR1'
     *  UnitDelay: '<S205>/UnitDelay'
     */
    if ((!rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE) &&
            (DTMR_ac_DW.VeDTMC_b_CC_Engd_TurnOff_prev))
    {
        /* Switch: '<S174>/Switch4' */
        VeDTMC_M_AccelPdlMinWhlTrq_FltrdArb = VeDTMC_M_AccelPdlMinWhlTrq_Raw;
    }
    else
    {
        /* Switch: '<S174>/Switch4' */
        VeDTMC_M_AccelPdlMinWhlTrq_FltrdArb = VeDTMC_M_AccelPdlMinWhlTrq_Fltrd;
    }

    /* End of Switch: '<S174>/Switch4' */

    /* Switch: '<S174>/Switch3' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1])
    {
        /* Switch: '<S174>/Switch3' incorporates:
         *  Constant: '<S174>/ConstantValue1'
         */
        VeDTMC_M_Lv2NormalMinTrq = 0.0F;
    }
    else
    {
        /* Switch: '<S174>/Switch3' */
        VeDTMC_M_Lv2NormalMinTrq = VeDTMC_M_AccelPdlMinWhlTrq_FltrdArb;
    }

    /* End of Switch: '<S174>/Switch3' */

    /* Switch: '<S165>/Switch5' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5])
    {
        /* Switch: '<S165>/Switch5' */
        VeDTMC_M_Lv2AccelPdlMinTrq_Arb =
            rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB;
    }
    else
    {
        /* Switch: '<S165>/Switch5' */
        VeDTMC_M_Lv2AccelPdlMinTrq_Arb = VeDTMC_M_Lv2NormalMinTrq;
    }

    /* End of Switch: '<S165>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S165>/MinMaxLimiter1' */
    /* Switch: '<S169>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S169>/Comparison3'
     */
    if (VeDTMC_M_Lv2NormalMinTrq < rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1)
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_Lv2NormalMinTrq;
    }
    else
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb =
            rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1;
    }

    /* End of Switch: '<S169>/LimiterSwitch' */

    /* Switch: '<S169>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S169>/Comparison1'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb >
            rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB)
    {
        /* Switch: '<S169>/LimiterSwitch1' */
        VeDTMC_M_CurrentMinTrqLmt = VeDTMC_M_DTRcmnd_MinLim_RawArb;
    }
    else
    {
        /* Switch: '<S169>/LimiterSwitch1' */
        VeDTMC_M_CurrentMinTrqLmt = rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB;
    }

    /* End of Switch: '<S169>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S165>/MinMaxLimiter1' */

    /* RelationalOperator: '<S165>/Comparison3' incorporates:
     *  UnitDelay: '<S165>/UnitDelay5'
     */
    VeDTMC_b_Lv2OPDSwitchChange = (DTMR_ac_DW.VeDTMC_b_OPDSwitchChange_Prev !=
        DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5]);

    /* UnitDelay: '<S165>/UnitDelay4' */
    VeDTMC_M_Lv2CurrentMinTrq_ClippedPrev = VeDTMC_M_Lv2CurrentMinTrq_Clipped;

    /* Switch: '<S165>/Switch1' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5])
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  RelationalOperator: '<S165>/Comparison5'
         */
        VeDTMC_b_Lv1CurrentMin_UpDown = (VeDTMC_M_Lv2CurrentMinTrq_ClippedPrev >
            VeDTMC_M_CurrentMinTrqLmt);
    }
    else
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  RelationalOperator: '<S165>/Comparison2'
         */
        VeDTMC_b_Lv1CurrentMin_UpDown = (VeDTMC_M_Lv2CurrentMinTrq_ClippedPrev <
            VeDTMC_M_CurrentMinTrqLmt);
    }

    /* End of Switch: '<S165>/Switch1' */

    /* Switch: '<S165>/Switch3' */
    if (VeDTMC_b_Lv1CurrentMin_UpDown)
    {
        /* Switch: '<S165>/Switch3' */
        VeDTMC_M_Lv2CurrentMinTrq_Arb = VeDTMC_M_CurrentMinTrqLmt;
    }
    else
    {
        /* Switch: '<S165>/Switch3' */
        VeDTMC_M_Lv2CurrentMinTrq_Arb = VeDTMC_M_Lv2CurrentMinTrq_ClippedPrev;
    }

    /* End of Switch: '<S165>/Switch3' */

    /* Switch: '<S165>/Switch4' */
    if (VeDTMC_b_Lv2OPDSwitchChange)
    {
        /* Switch: '<S165>/Switch4' */
        VeDTMC_M_Lv2CurrentMinTrq_Init = VeDTMC_M_CurrentMinTrqLmt;
    }
    else
    {
        /* Switch: '<S165>/Switch4' */
        VeDTMC_M_Lv2CurrentMinTrq_Init = VeDTMC_M_Lv2CurrentMinTrq_Arb;
    }

    /* End of Switch: '<S165>/Switch4' */

    /* MinMax: '<S165>/Max' */
    VeDTMC_M_Lv2CurrentMinTrqClippedMax = fmaxf
        (rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB,
         VeDTMC_M_Lv2CurrentMinTrq_Init);

    /* MinMax: '<S165>/Min' */
    VeDTMC_M_Lv2CurrentMinTrqClippedMin = fminf(VeDTMC_M_Lv2NormalMinTrq,
        VeDTMC_M_Lv2CurrentMinTrq_Init);

    /* Switch: '<S165>/Switch6' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5])
    {
        /* Switch: '<S165>/Switch6' */
        VeDTMC_M_Lv2CurrentMinTrq_Clipped = VeDTMC_M_Lv2CurrentMinTrqClippedMax;
    }
    else
    {
        /* Switch: '<S165>/Switch6' */
        VeDTMC_M_Lv2CurrentMinTrq_Clipped = VeDTMC_M_Lv2CurrentMinTrqClippedMin;
    }

    /* End of Switch: '<S165>/Switch6' */

    /* Sum: '<S165>/Sum4' */
    VeDTMC_M_Lv2AccelPdlMinTrqDiff = VeDTMC_M_Lv2CurrentMinTrq_Clipped -
        VeDTMC_M_Lv2AccelPdlMinTrq_Arb;

    /* Abs: '<S425>/Abs' incorporates:
     *  Abs: '<S165>/Abs'
     */
    rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B = fabsf
        (VeDTMC_M_Lv2AccelPdlMinTrqDiff);

    /* RelationalOperator: '<S165>/Comparison6' incorporates:
     *  Constant: '<S166>/Calib'
     */
    VeDTMC_b_Lv2Transition_Complete = (rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B <
        KeDTMR_M_AccelPdlMinTrq_Delta);

    /* Logic: '<S168>/OR1' incorporates:
     *  Logic: '<S168>/NOT'
     *  Logic: '<S168>/OR'
     */
    VeDTMC_b_Lv2Transition_CompleteLtch = ((VeDTMC_b_Lv2Transition_Complete) ||
        ((!VeDTMC_b_Lv2OPDSwitchChange) && (VeDTMC_b_Lv2Transition_CompleteLtch)));

    /* Switch: '<S165>/Switch7' */
    if (VeDTMC_b_Lv2Transition_CompleteLtch)
    {
        /* Switch: '<S165>/Switch7' */
        VeDTMC_M_Lv2CurrentMin_Intrim = VeDTMC_M_Lv2AccelPdlMinTrq_Arb;
    }
    else
    {
        /* Switch: '<S165>/Switch7' */
        VeDTMC_M_Lv2CurrentMin_Intrim = VeDTMC_M_Lv2CurrentMinTrq_Init;
    }

    /* End of Switch: '<S165>/Switch7' */

    /* Switch: '<S165>/Switch2' incorporates:
     *  Constant: '<S167>/Calib'
     */
    if (KeDTMR_b_EnblCurMinOPDArb)
    {
        /* Switch: '<S165>/Switch2' */
        VeDTMC_M_Lv2CurrentMin_Final = VeDTMC_M_Lv2CurrentMin_Intrim;
    }
    else
    {
        /* Switch: '<S165>/Switch2' */
        VeDTMC_M_Lv2CurrentMin_Final = VeDTMC_M_Lv2NormalMinTrq;
    }

    /* End of Switch: '<S165>/Switch2' */

    /* Sum: '<S161>/Sum1' */
    VeDTMC_M_Lv2MinMaxTrqDiff = VeDTMC_M_Lv2AccelPdlMaxWhlTrq -
        VeDTMC_M_Lv2CurrentMin_Final;

    /* Lookup_n-D: '<S278>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_NrmlMd = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_NormalMd_M182[0])), ((const
           float32 *)&(KyDTMR_Pct_PctForWhlTrq_NormalMd_M182[0])), ((const
           float32 *)&(KtDTMR_Pct_PctForWhlTrq_NormalMd_M182[0])),
         DTMR_ac_ConstP.pooled10, 17U);

    /* Lookup_n-D: '<S279>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_OffRdMd = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_OffroadMd_M182[0])), ((const
           float32 *)&(KyDTMR_Pct_PctForWhlTrq_OffroadMd_M182[0])), ((const
           float32 *)&(KtDTMR_Pct_PctForWhlTrq_OffroadMd_M182[0])),
         DTMR_ac_ConstP.pooled10, 17U);

    /* Lookup_n-D: '<S274>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_CamelLim = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_CamelLim_M182[0])), ((const
           float32 *)&(KyDTMR_Pct_PctForWhlTrq_CamelLim_M182[0])), ((const
           float32 *)&(KtDTMR_Pct_PctForWhlTrq_CamelLim_M182[0])),
         DTMR_ac_ConstP.pooled10, 17U);

    /* RelationalOperator: '<S254>/Comparison4' incorporates:
     *  RelationalOperator: '<S254>/Comparison'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_1

    /* RelationalOperator: '<S254>/Comparison4' incorporates:
     *  Constant: '<S270>/Constant'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     */
    rtb_VeDTMC_b_DriveMdInNormalMd = (((uint32)VeDTMC_e_Lv2DriverMd_Arb) ==
        CeDTMR_e_DrvMdTotal_Auto);

    /* RelationalOperator: '<S254>/Comparison' incorporates:
     *  Constant: '<S273>/Calib'
     */
    VeDTMC_b_PtcPedal_WOT = (VeDTMC_Pct_Lv2AccelPdlPos > KeDTMR_Pct_PtcPdlWot);

#endif

    /* End of RelationalOperator: '<S254>/Comparison4' */

    /* Lookup_n-D: '<S276>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_EcoMd = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_EcoMd_M182[0])), ((const float32 *)
          &(KyDTMR_Pct_PctForWhlTrq_EcoMd_M182[0])), ((const float32 *)
          &(KtDTMR_Pct_PctForWhlTrq_EcoMd_M182[0])), DTMR_ac_ConstP.pooled10,
         17U);

    /* Lookup_n-D: '<S282>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_SportMd = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_SportMd_M182[0])), ((const
           float32 *)&(KyDTMR_Pct_PctForWhlTrq_SportMd_M182[0])), ((const
           float32 *)&(KtDTMR_Pct_PctForWhlTrq_SportMd_M182[0])),
         DTMR_ac_ConstP.pooled10, 17U);

    /* RelationalOperator: '<S254>/Comparison3' incorporates:
     *  Constant: '<S267>/Constant'
     *  Constant: '<S269>/Constant'
     *  Inport: '<Root>/VeSCMR_e_Lv2Limit_Max_Power_Sel'
     *  RelationalOperator: '<S254>/Comparison1'
     *  RelationalOperator: '<S254>/Comparison2'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     *  Switch: '<S254>/Switch1'
     *  Switch: '<S254>/Switch3'
     *  Switch: '<S254>/Switch4'
     *  Switch: '<S254>/Switch5'
     *  Switch: '<S254>/Switch6'
     *  UnitDelay: '<S254>/UnitDelay'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_1

    /* RelationalOperator: '<S254>/Comparison3' incorporates:
     *  Constant: '<S268>/Constant'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     */
    VeDTMC_b_DriveMdInSportMd = (((uint32)VeDTMC_e_Lv2DriverMd_Arb) ==
        CeDTMR_e_DrvMdTotal_Sport);
    if (rtb_VeDTMC_b_DriveMdInNormalMd)
    {
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqCalc_Arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_NrmlMd;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_OffRoad)
    {
        /* Switch: '<S254>/Switch5' */
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqCalc_Arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_OffRdMd;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Eco)
    {
        (void)Rte_Read_VeSCMR_e_Lv2Limit_Max_Power_Sel_Value(&tmpRead_19);

        /* Switch: '<S254>/Switch2' incorporates:
         *  Constant: '<S271>/Constant'
         *  Inport: '<Root>/VeSCMR_e_Lv2Limit_Max_Power_Sel'
         *  Logic: '<S254>/Logical1'
         *  Logic: '<S254>/Logical2'
         *  RelationalOperator: '<S254>/Comparison6'
         *  Switch: '<S254>/Switch3'
         *  Switch: '<S254>/Switch5'
         */
        if ((((uint32)tmpRead_19) == CeDTMR_e_Active) && (!VeDTMC_b_PtcPedal_WOT))
        {
            /* Switch: '<S254>/Switch5' incorporates:
             *  Switch: '<S254>/Switch3'
             */
            DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqCalc_Arb1_prev =
                VeDTMC_Pct_Pct4WhlTrqCalc_CamelLim;
        }
        else
        {
            /* Switch: '<S254>/Switch5' incorporates:
             *  Switch: '<S254>/Switch3'
             */
            DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqCalc_Arb1_prev =
                VeDTMC_Pct_Pct4WhlTrqCalc_EcoMd;
        }

        /* End of Switch: '<S254>/Switch2' */
    }
    else
    {
        if (VeDTMC_b_DriveMdInSportMd)
        {
            /* Switch: '<S254>/Switch5' incorporates:
             *  Switch: '<S254>/Switch1'
             *  Switch: '<S254>/Switch3'
             */
            DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqCalc_Arb1_prev =
                VeDTMC_Pct_Pct4WhlTrqCalc_SportMd;
        }
    }

    if (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd)
    {
        /* Abs: '<S425>/Abs' incorporates:
         *  Constant: '<S272>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B =
            KeDTMR_Pct_PctForWhlTrqCalcDflt;
    }
    else
    {
        /* Abs: '<S425>/Abs' */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B =
            DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqCalc_Arb1_prev;
    }

#endif

    /* End of RelationalOperator: '<S254>/Comparison3' */

    /* Lookup_n-D: '<S280>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_Rock = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_Rock[0])), ((const float32 *)
          &(KyDTMR_Pct_PctForWhlTrq_Rock[0])), ((const float32 *)
          &(KtDTMR_Pct_PctForWhlTrq_Rock[0])), DTMR_ac_ConstP.pooled10, 17U);

    /* Lookup_n-D: '<S281>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_Snow = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_Snow[0])), ((const float32 *)
          &(KyDTMR_Pct_PctForWhlTrq_Snow[0])), ((const float32 *)
          &(KtDTMR_Pct_PctForWhlTrq_Snow[0])), DTMR_ac_ConstP.pooled10, 17U);

    /* Lookup_n-D: '<S277>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_MudSand = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_MudSand[0])), ((const float32 *)
          &(KyDTMR_Pct_PctForWhlTrq_MudSand[0])), ((const float32 *)
          &(KtDTMR_Pct_PctForWhlTrq_MudSand[0])), DTMR_ac_ConstP.pooled10, 17U);

    /* Lookup_n-D: '<S283>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_Tow = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_Tow[0])), ((const float32 *)
          &(KyDTMR_Pct_PctForWhlTrq_Tow[0])), ((const float32 *)
          &(KtDTMR_Pct_PctForWhlTrq_Tow[0])), DTMR_ac_ConstP.pooled10, 17U);

    /* Lookup_n-D: '<S285>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_Valet = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_Valet[0])), ((const float32 *)
          &(KyDTMR_Pct_PctForWhlTrq_Valet[0])), ((const float32 *)
          &(KtDTMR_Pct_PctForWhlTrq_Valet[0])), DTMR_ac_ConstP.pooled10, 17U);

    /* Lookup_n-D: '<S284>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_Track = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_Track[0])), ((const float32 *)
          &(KyDTMR_Pct_PctForWhlTrq_Track[0])), ((const float32 *)
          &(KtDTMR_Pct_PctForWhlTrq_Track[0])), DTMR_ac_ConstP.pooled10, 17U);

    /* Lookup_n-D: '<S275>/Vector' incorporates:
     *  Gain: '<S250>/Gain'
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_Pct_Pct4WhlTrqCalc_Drag = look2_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, VeDTMC_Pct_Lv2AccelPdlPos, ((const
           float32 *)&(KxDTMR_Pct_PctForWhlTrq_Drag[0])), ((const float32 *)
          &(KyDTMR_Pct_PctForWhlTrq_Drag[0])), ((const float32 *)
          &(KtDTMR_Pct_PctForWhlTrq_Drag[0])), DTMR_ac_ConstP.pooled10, 17U);

    /* RelationalOperator: '<S253>/Comparison4' incorporates:
     *  Constant: '<S256>/Constant'
     *  Constant: '<S257>/Constant'
     *  Constant: '<S258>/Constant'
     *  Constant: '<S259>/Constant'
     *  Constant: '<S261>/Constant'
     *  Constant: '<S262>/Constant'
     *  Constant: '<S263>/Constant'
     *  Constant: '<S264>/Constant'
     *  Constant: '<S265>/Constant'
     *  RelationalOperator: '<S253>/Comparison1'
     *  RelationalOperator: '<S253>/Comparison10'
     *  RelationalOperator: '<S253>/Comparison2'
     *  RelationalOperator: '<S253>/Comparison3'
     *  RelationalOperator: '<S253>/Comparison5'
     *  RelationalOperator: '<S253>/Comparison6'
     *  RelationalOperator: '<S253>/Comparison7'
     *  RelationalOperator: '<S253>/Comparison8'
     *  RelationalOperator: '<S253>/Comparison9'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     *  Switch: '<S253>/Switch1'
     *  Switch: '<S253>/Switch10'
     *  Switch: '<S253>/Switch11'
     *  Switch: '<S253>/Switch2'
     *  Switch: '<S253>/Switch3'
     *  Switch: '<S253>/Switch4'
     *  Switch: '<S253>/Switch5'
     *  Switch: '<S253>/Switch6'
     *  Switch: '<S253>/Switch7'
     *  Switch: '<S253>/Switch8'
     *  Switch: '<S253>/Switch9'
     *  UnitDelay: '<S253>/UnitDelay'
     */
#if !Rte_SysCon_Variant_DTMR_FUNC_1

    /* RelationalOperator: '<S253>/Comparison4' incorporates:
     *  Constant: '<S260>/Constant'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     */
    rtb_VeDTMC_b_DriveMdInNormalMd = (((uint32)VeDTMC_e_Lv2DriverMd_Arb) ==
        CeDTMR_e_DrvMdTotal_Auto);
    if (rtb_VeDTMC_b_DriveMdInNormalMd)
    {
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_NrmlMd;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Sport)
    {
        /* Switch: '<S253>/Switch9' */
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_SportMd;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Rock)
    {
        /* Switch: '<S253>/Switch9' incorporates:
         *  Switch: '<S253>/Switch8'
         */
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_Rock;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Snow)
    {
        /* Switch: '<S253>/Switch9' incorporates:
         *  Switch: '<S253>/Switch7'
         *  Switch: '<S253>/Switch8'
         */
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_Snow;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_MudSand)
    {
        /* Switch: '<S253>/Switch9' incorporates:
         *  Switch: '<S253>/Switch6'
         *  Switch: '<S253>/Switch7'
         *  Switch: '<S253>/Switch8'
         */
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_MudSand;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Tow)
    {
        /* Switch: '<S253>/Switch9' incorporates:
         *  Switch: '<S253>/Switch5'
         *  Switch: '<S253>/Switch6'
         *  Switch: '<S253>/Switch7'
         *  Switch: '<S253>/Switch8'
         */
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_Tow;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Eco)
    {
        /* Switch: '<S253>/Switch9' incorporates:
         *  Switch: '<S253>/Switch3'
         *  Switch: '<S253>/Switch5'
         *  Switch: '<S253>/Switch6'
         *  Switch: '<S253>/Switch7'
         *  Switch: '<S253>/Switch8'
         */
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_EcoMd;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Valet)
    {
        /* Switch: '<S253>/Switch9' incorporates:
         *  Switch: '<S253>/Switch2'
         *  Switch: '<S253>/Switch3'
         *  Switch: '<S253>/Switch5'
         *  Switch: '<S253>/Switch6'
         *  Switch: '<S253>/Switch7'
         *  Switch: '<S253>/Switch8'
         */
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_Valet;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Track)
    {
        /* Switch: '<S253>/Switch9' incorporates:
         *  Switch: '<S253>/Switch1'
         *  Switch: '<S253>/Switch2'
         *  Switch: '<S253>/Switch3'
         *  Switch: '<S253>/Switch5'
         *  Switch: '<S253>/Switch6'
         *  Switch: '<S253>/Switch7'
         *  Switch: '<S253>/Switch8'
         */
        DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
            VeDTMC_Pct_Pct4WhlTrqCalc_Track;
    }
    else
    {
        if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Drag)
        {
            /* Switch: '<S253>/Switch9' incorporates:
             *  Switch: '<S253>/Switch1'
             *  Switch: '<S253>/Switch2'
             *  Switch: '<S253>/Switch3'
             *  Switch: '<S253>/Switch4'
             *  Switch: '<S253>/Switch5'
             *  Switch: '<S253>/Switch6'
             *  Switch: '<S253>/Switch7'
             *  Switch: '<S253>/Switch8'
             */
            DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev =
                VeDTMC_Pct_Pct4WhlTrqCalc_Drag;
        }
    }

    if (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd)
    {
        /* Abs: '<S425>/Abs' incorporates:
         *  Constant: '<S266>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B =
            KeDTMR_Pct_PctForWhlTrqCalcDflt;
    }
    else
    {
        /* Abs: '<S425>/Abs' */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B =
            DTMR_ac_DW.VeDTMC_Pct_PctForWhlTrqSTLA_arb1_prev;
    }

#endif

    /* End of RelationalOperator: '<S253>/Comparison4' */

    /* SignalConversion generated from: '<S155>/Variant Source2' */
    VeDTMC_Pct_Lv2Pct4WhlTrqCalc = rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B;

    /* Product: '<S161>/Product' */
    VeDTMC_M_Lv2MinMaxDiffAdded = VeDTMC_M_Lv2MinMaxTrqDiff *
        VeDTMC_Pct_Lv2Pct4WhlTrqCalc;

    /* Sum: '<S161>/Sum' */
    VeDTMC_M_Lv2AccelPdlWhlTrq_NoArb = VeDTMC_M_Lv2MinMaxDiffAdded +
        VeDTMC_M_Lv2CurrentMin_Final;

    /* Lookup_n-D: '<S163>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMR_M_Lv2PdlTrqBias = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_Lv2PdlTrqBias[0])), ((const float32 *)
          &(KtDTMR_M_Lv2PdlTrqBias[0])), 8U);

    /* Sum: '<S161>/Sum2' */
    VeDTMC_M_Lv2AccelPdlWhlTrq_Bias = VeDTMC_M_Lv2AccelPdlWhlTrq_NoArb -
        VeDTMR_M_Lv2PdlTrqBias;

    /* Switch: '<S178>/Switch7' */
    if (VeDTMC_b_EnblAeCoastOffset)
    {
        /* Switch: '<S178>/Switch7' */
        VeDTMC_M_AeCoastOfset = VeDTMC_M_MinTrqLv0LvXDiff;
    }
    else
    {
        /* Switch: '<S178>/Switch7' incorporates:
         *  Constant: '<S178>/ConstantValue2'
         */
        VeDTMC_M_AeCoastOfset = 0.0F;
    }

    /* End of Switch: '<S178>/Switch7' */

    /* Sum: '<S161>/Sum6' */
    VeDTMC_M_Lv2AeCoastOfsetMin = VeDTMC_M_Lv2CurrentMin_Final -
        VeDTMC_M_AeCoastOfset;

    /* Sum: '<S161>/Sum5' */
    VeDTMC_M_Lv2AeCoastOfsetMin_BiasOff = VeDTMC_M_Lv2AeCoastOfsetMin -
        VeDTMR_M_Lv2PdlTrqBias;

    /* Sum: '<S161>/Sum4' */
    VeDTMC_M_Lv2CurrentMin_BiasOff = VeDTMC_M_Lv2CurrentMin_Final -
        VeDTMR_M_Lv2PdlTrqBias;

    /* Outputs for Atomic SubSystem: '<S161>/LV2_DivideWithProtection' */
    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S164>/ConstantValue'
     *  Constant: '<S164>/ConstantValue1'
     *  Constant: '<S164>/ConstantValue2'
     *  Constant: '<S164>/ConstantValue3'
     *  Logic: '<S164>/AND'
     *  RelationalOperator: '<S164>/Comparison'
     *  RelationalOperator: '<S164>/Comparison1'
     *  RelationalOperator: '<S164>/Comparison2'
     *  RelationalOperator: '<S164>/Comparison3'
     *  Switch: '<S164>/Switch2'
     *  Switch: '<S164>/Switch3'
     */
    if ((VeDTMC_M_Lv2AeCoastOfsetMin_BiasOff != 0.0F) &&
            (VeDTMC_M_Lv2CurrentMin_BiasOff != 0.0F))
    {
        /* Switch: '<S164>/Switch1' incorporates:
         *  Product: '<S164>/Division'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 =
            VeDTMC_M_Lv2AeCoastOfsetMin_BiasOff / VeDTMC_M_Lv2CurrentMin_BiasOff;
    }
    else if (VeDTMC_M_Lv2AeCoastOfsetMin_BiasOff > 0.0F)
    {
        /* Switch: '<S164>/Switch2' incorporates:
         *  Constant: '<S164>/MAXFLOAT'
         *  Switch: '<S164>/Switch1'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 = 3.402823466E+38F;
    }
    else if (VeDTMC_M_Lv2AeCoastOfsetMin_BiasOff < 0.0F)
    {
        /* Switch: '<S164>/Switch3' incorporates:
         *  Constant: '<S164>/MINFLOAT'
         *  Switch: '<S164>/Switch1'
         *  Switch: '<S164>/Switch2'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S164>/Switch1' incorporates:
         *  Constant: '<S164>/ConstantValue4'
         *  Switch: '<S164>/Switch2'
         *  Switch: '<S164>/Switch3'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 = 0.0F;
    }

    /* End of Switch: '<S164>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/LV2_DivideWithProtection' */

    /* Product: '<S161>/Product1' */
    VeDTMC_M_Lv2AccelPdlWhlTrq_Ratio = VeDTMC_M_Lv2AccelPdlWhlTrq_Bias *
        rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1;

    /* Sum: '<S161>/Sum3' */
    VeDTMC_M_Lv2AccelPdlWhlTrq_eCoast = VeDTMC_M_Lv2AccelPdlWhlTrq_Ratio +
        VeDTMR_M_Lv2PdlTrqBias;

    /* RelationalOperator: '<S161>/Comparison' incorporates:
     *  Constant: '<S161>/ConstantValue'
     */
    VeDTMC_b_eCoastTrqBias_Neg = (VeDTMC_M_Lv2AccelPdlWhlTrq_Bias < 0.0F);

    /* Logic: '<S161>/Logical1' incorporates:
     *  Constant: '<S162>/Calib'
     */
    VeDTMC_b_eCoastTrqBias_Enabled = ((VeDTMC_b_eCoastTrqBias_Neg) &&
        (KeDTMR_b_Enbl_MinTrq_eCoast));

    /* Switch: '<S161>/Switch1' incorporates:
     *  Switch: '<S161>/Switch2'
     */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1])
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S161>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 = 0.0F;
    }
    else if (VeDTMC_b_eCoastTrqBias_Enabled)
    {
        /* Switch: '<S161>/Switch2' incorporates:
         *  Switch: '<S161>/Switch1'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 =
            VeDTMC_M_Lv2AccelPdlWhlTrq_eCoast;
    }
    else
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Switch: '<S161>/Switch2'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 =
            VeDTMC_M_Lv2AccelPdlWhlTrq_NoArb;
    }

    /* End of Switch: '<S161>/Switch1' */

    /* Switch: '<S161>/Switch4' */
    if (VeDTMI_b_Lv2ESCEventInR)
    {
        /* Switch: '<S161>/Switch4' incorporates:
         *  Gain: '<S161>/Gain1'
         */
        rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 =
            -rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1;
    }

    /* End of Switch: '<S161>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeCCTR_P_CcDesiredPwr' */
    (void)Rte_Read_VeCCTR_P_CcDesiredPwr_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* RelationalOperator: '<S153>/Comparison1' */
    VeDTMC_b_Lv2PtcPdlInChrg1 = (rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 >
        VeDTMC_M_Lv2ACC_WhlTrq_SrcArb);

    /* Logic: '<S153>/Logical2' */
    VeDTMC_b_Lv2PtcPdlInChrgVsACC = ((VeDTMI_b_Lv2ACCEnbld) &&
        (VeDTMC_b_Lv2PtcPdlInChrg1));

    /* Product: '<S154>/Divide' incorporates:
     *  Constant: '<S251>/Calib'
     */
    VeDTMC_P_Lv2CcDesiredPwr = tmpRead / KeDTMR_K_Lv2PtcWhlTrqToPwrFctr;

    /* Outputs for Atomic SubSystem: '<S154>/LV2_DivideWithProtection1' */
    /* Switch: '<S252>/Switch1' incorporates:
     *  Constant: '<S252>/ConstantValue'
     *  Constant: '<S252>/ConstantValue1'
     *  Constant: '<S252>/ConstantValue2'
     *  Constant: '<S252>/ConstantValue3'
     *  Logic: '<S252>/AND'
     *  RelationalOperator: '<S252>/Comparison'
     *  RelationalOperator: '<S252>/Comparison1'
     *  RelationalOperator: '<S252>/Comparison2'
     *  RelationalOperator: '<S252>/Comparison3'
     *  Switch: '<S252>/Switch2'
     *  Switch: '<S252>/Switch3'
     */
    if ((VeDTMC_P_Lv2CcDesiredPwr != 0.0F) &&
            (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc != 0.0F))
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Product: '<S252>/Division'
         */
        VeDTMC_M_Lv2PtcWhlCcTrqReq = VeDTMC_P_Lv2CcDesiredPwr /
            VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc;
    }
    else if (VeDTMC_P_Lv2CcDesiredPwr > 0.0F)
    {
        /* Switch: '<S252>/Switch2' incorporates:
         *  Constant: '<S252>/MAXFLOAT'
         *  Switch: '<S252>/Switch1'
         */
        VeDTMC_M_Lv2PtcWhlCcTrqReq = 3.402823466E+38F;
    }
    else if (VeDTMC_P_Lv2CcDesiredPwr < 0.0F)
    {
        /* Switch: '<S252>/Switch3' incorporates:
         *  Constant: '<S252>/MINFLOAT'
         *  Switch: '<S252>/Switch1'
         *  Switch: '<S252>/Switch2'
         */
        VeDTMC_M_Lv2PtcWhlCcTrqReq = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S252>/ConstantValue4'
         *  Switch: '<S252>/Switch2'
         *  Switch: '<S252>/Switch3'
         */
        VeDTMC_M_Lv2PtcWhlCcTrqReq = 0.0F;
    }

    /* End of Switch: '<S252>/Switch1' */
    /* End of Outputs for SubSystem: '<S154>/LV2_DivideWithProtection1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_M_Lv2ACC_WhlTrq_ADAS' */
    (void)Rte_Read_VeSCMR_M_Lv2ACC_WhlTrq_ADAS_Value(&tmpRead_1l);

    /* Inport: '<Root>/VeLTIR_b_Lv2ACC_WhlTrq_ADAS_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2ACC_WhlTrq_ADAS_FA_Value(&tmpRead_1k);

    /* Inport: '<Root>/VeATRR_M_OutTrqReqHTDR_ASL' */
    (void)Rte_Read_VeATRR_M_OutTrqReqHTDR_ASL_Value
        ((&(VeDTMC_M_Lv2AccelPdlWhlTrqArb)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* RelationalOperator: '<S153>/Comparison2' */
    VeDTMC_b_Lv2PtcPdlInChrg2 = (rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 >
        VeDTMC_M_Lv2PtcWhlCcTrqReq);

    /* Logic: '<S153>/Logical3' */
    VeDTMC_b_Lv2PtcPdlInChrgVsCC = (rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE &&
        (VeDTMC_b_Lv2PtcPdlInChrg2));

    /* Logic: '<S153>/Logical4' */
    VeDTMC_b_Lv2PtcPdlInChrg = ((VeDTMC_b_Lv2PtcPdlInChrgVsACC) ||
        (VeDTMC_b_Lv2PtcPdlInChrgVsCC));

    /* RelationalOperator: '<S153>/Comparison3' incorporates:
     *  Constant: '<S248>/Calib'
     */
    VeDTMC_b_Lv2AccelPdlPressed = (VeDTMC_Pct_Lv2AccelPdlPos >
        KeDTMR_Pct_PVSThrsh);

    /* Logic: '<S153>/Logical5' */
    VeDTMC_b_Lv2CruisePdlOvrdInChrg = ((VeDTMC_b_Lv2PtcPdlInChrg) &&
        (VeDTMC_b_Lv2AccelPdlPressed));

    /* Logic: '<S153>/Logical1' */
    VeDTMC_b_Lv2AccelPdlOvrdActv = ((VeDTMC_b_Lv2ASLPdlOvrdInChrg) ||
        (VeDTMC_b_Lv2CruisePdlOvrdInChrg));

    /* Logic: '<S9>/Logical2' incorporates:
     *  Logic: '<S10>/Logical10'
     */
    VeDTMC_b_Lv2NoAccelPdlOvrd = !VeDTMC_b_Lv2AccelPdlOvrdActv;

    /* Logic: '<S9>/Logical8' */
    VeDTMC_b_Lv2ACC_NotEnbld = !rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1;

    /* Logic: '<S9>/Logical' incorporates:
     *  Constant: '<S28>/Calib'
     *  Logic: '<S9>/Logical5'
     *  Logic: '<S9>/Logical6'
     */
    VeDTMC_b_Lv2ASLACCMntrDsblCmnd = (((((KeDTMR_b_Lv2_MntrCCTrqReqEnbl) &&
        rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE) || (VeDTMI_b_Lv2ACCEnbld)) &&
        (VeDTMC_b_Lv2NoAccelPdlOvrd)) && (VeDTMC_b_Lv2ACC_NotEnbld));

    /* Logic: '<S9>/Logical3' incorporates:
     *  Constant: '<S28>/Calib'
     *  Logic: '<S9>/Logical4'
     *  Logic: '<S9>/Logical7'
     */
    rtb_VeDTMC_b_DriveMdInNormalMd = (((!KeDTMR_b_Lv2_MntrCCTrqReqEnbl) &&
        rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE) ||
        (VeDTMC_b_Lv2ASLACCMntrDsblCmnd));

    /* Logic: '<S9>/Logical37' incorporates:
     *  Constant: '<S26>/Calib'
     *  UnitDelay: '<S9>/UnitDelay2'
     */
    VeDTMC_b_STMRPrfmModeReset = ((DTMR_ac_DW.VeDTMR_b_Lv2ReducePerfModePrev) &&
        (KeDTMR_b_Enbl_ResetBySTMRPrfmMode));

    /* Logic: '<S9>/Logical38' incorporates:
     *  Constant: '<S24>/Calib'
     *  UnitDelay: '<S9>/UnitDelay3'
     */
    VeDTMC_b_P061BReset = ((DTMR_ac_DW.VeDTMR_b_TransOutTrqCmndFlt_prev) &&
                           (KeDTMR_b_Enbl_ResetByP061B));

    /* Logic: '<S9>/Logical39' incorporates:
     *  Constant: '<S25>/Calib'
     *  UnitDelay: '<S9>/UnitDelay4'
     */
    VeDTMC_b_RgnEstMntrFltReset = ((DTMR_ac_DW.VeDTMR_b_RgnEstMntrFlt_prev) &&
        (KeDTMR_b_Enbl_ResetByRgnEstMntr));

    /* Logic: '<S9>/Logical40' incorporates:
     *  Constant: '<S23>/Calib'
     *  UnitDelay: '<S9>/UnitDelay5'
     */
    VeDTMC_b_CruiseTrqChkReset = ((DTMR_ac_DW.VeDTMR_b_Lv2CruiseTrqChkFaile_prev)
        && (KeDTMR_b_Enbl_ResetByCruiseTrqChk));

    /* Logic: '<S9>/Logical41' incorporates:
     *  Constant: '<S27>/Calib'
     *  UnitDelay: '<S9>/UnitDelay6'
     */
    VeDTMC_b_TrqSplitMntrReset = ((DTMR_ac_DW.VeDTMR_b_TrqSplit_OS_US_prev) &&
        (KeDTMR_b_Enbl_ResetByTrqSplitMntr));

    /* Logic: '<S9>/Logical1' */
    VeDTMC_b_Lv2ResetDTMRmntrs = ((((((((VeDTMI_b_Lv2KeyOff) ||
        (VeDTMI_b_Lv1ResetDTC)) || (VeDTMC_b_ResetDTMRbyMSS)) ||
        (VeDTMC_b_STMRPrfmModeReset)) || (VeDTMC_b_P061BReset)) ||
        (VeDTMC_b_RgnEstMntrFltReset)) || (VeDTMC_b_CruiseTrqChkReset)) ||
        (VeDTMC_b_TrqSplitMntrReset));

    /* Switch: '<S10>/Switch2' */
    if (tmpRead_1k)
    {
        /* Switch: '<S10>/Switch2' */
        VeDTMC_M_Lv2ACC_WhlTrq_SrcArb = tmpRead_1l;
    }

    /* End of Switch: '<S10>/Switch2' */

    /* Logic: '<S10>/Logical9' */
    VeDTMC_b_Lv2UseACCWhlTrq = ((VeDTMC_b_Lv2NoAccelPdlOvrd) &&
        (VeDTMI_b_Lv2ACCEnbld));

    /* Switch: '<S10>/Switch1' */
    if (!rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1)
    {
        /* Switch: '<S10>/Switch1' incorporates:
         *  Inport: '<Root>/VeATRR_M_OutTrqReqHTDR_ASL'
         */
        VeDTMC_M_Lv2AccelPdlWhlTrqArb = rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1;
    }

    /* End of Switch: '<S10>/Switch1' */

    /* Switch: '<S10>/Switch3' */
    if (VeDTMC_b_Lv2UseACCWhlTrq)
    {
        /* Switch: '<S10>/Switch3' */
        VeDTMC_M_Lv2DrvrTrqReqArb = VeDTMC_M_Lv2ACC_WhlTrq_SrcArb;
    }
    else
    {
        /* Switch: '<S10>/Switch3' */
        VeDTMC_M_Lv2DrvrTrqReqArb = VeDTMC_M_Lv2AccelPdlWhlTrqArb;
    }

    /* End of Switch: '<S10>/Switch3' */

    /* Switch: '<S29>/Switch4' */
    if (VeDTMI_b_Lv2ESCEventInR)
    {
        /* Switch: '<S29>/Switch4' incorporates:
         *  Gain: '<S29>/Gain1'
         */
        VeDTMC_M_Lv2DrvrTrqReqFinal = -VeDTMC_M_Lv2DrvrTrqReqArb;
    }
    else
    {
        /* Switch: '<S29>/Switch4' */
        VeDTMC_M_Lv2DrvrTrqReqFinal = VeDTMC_M_Lv2DrvrTrqReqArb;
    }

    /* End of Switch: '<S29>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_e_Lv2AHH_Ready_Status' */
    (void)Rte_Read_VeSCMR_e_Lv2AHH_Ready_Status_Value(&tmpRead_17);

    /* Inport: '<Root>/VeLTIR_b_Lv2AHH_Ready_Status_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2AHH_Ready_Status_FA_Value(&tmpRead_16);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* RelationalOperator: '<S29>/Comparison4' incorporates:
     *  Constant: '<S38>/Calib'
     */
    VeDTMC_b_Lv2DrvrTrqReqDflt = (VeDTMC_M_Lv2DrvrTrqReqFinal <
        KeDTMR_M_ToMin_BrkTrqRdct);

    /* Sum: '<S29>/Sum2' */
    VeDTMC_M_Lv2BrkTrqRdctn = VeDTMC_M_Lv2DrvrTrqReqFinal -
        VeDTMC_M_Lv2CurrentMin_Final;

    /* Logic: '<S33>/Logical4' incorporates:
     *  Constant: '<S48>/Constant'
     *  Constant: '<S49>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion1'
     *  Inport: '<Root>/VeHTDR_e_AHH_ApplyRelease_Req'
     *  RelationalOperator: '<S33>/Comparison2'
     *  RelationalOperator: '<S33>/Comparison4'
     */
    VeDTMC_b_Lv2AHH_Apply = ((((uint32)tmpRead_15) == CeSTMR_e_AHH_Apply) ||
        (((uint32)tmpRead_15) == CeSTMR_e_AHH_EPB_Apply));

    /* Logic: '<S22>/Logical6' */
    VeDTMC_b_Lv2BrkPdlStat_FA = (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Brk &&
        rtb_TmpSignalConversionAtVeSCMR_b_Lv2Bra);

    /* Logic: '<S33>/Logical6' incorporates:
     *  Constant: '<S47>/Constant'
     *  Logic: '<S33>/Logical1'
     *  Logic: '<S33>/Logical2'
     *  RelationalOperator: '<S33>/Comparison1'
     */
    VeDTMC_b_Lv2BrkApply_Arb = ((VeDTMC_b_Lv2AHH_Apply) || ((((uint32)
        VeDTMC_e_Lv2BrkPdlStat) == CeDTMR_e_BrakeAppld) &&
        (!VeDTMC_b_Lv2BrkPdlStat_FA)));

    /* Switch: '<S33>/Switch1' */
    if (VeDTMC_b_Lv2BrkApply_Arb)
    {
        /* Switch: '<S33>/Switch1' */
        VeDTMC_M_Lv2TotBrkTrq_Arb = VeDTMI_M_Lv2DrvrIntndTotBrkTrq;
    }
    else
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S33>/ConstantValue5'
         */
        VeDTMC_M_Lv2TotBrkTrq_Arb = 0.0F;
    }

    /* End of Switch: '<S33>/Switch1' */

    /* Sum: '<S29>/Sum3' incorporates:
     *  Constant: '<S37>/Calib'
     */
    VeDTMC_M_MinBrkTrq_ToNet = VeDTMC_M_Lv2TotBrkTrq_Arb -
        KeDTMR_M_MinBrkTrq_ToNet;

    /* Logic: '<S33>/Logical3' incorporates:
     *  Constant: '<S50>/Constant'
     *  Inport: '<Root>/VeSCMR_e_Lv2AHH_Ready_Status'
     *  Logic: '<S33>/Logical5'
     *  RelationalOperator: '<S33>/Comparison3'
     */
    VeDTMC_b_Lv2AHH_Active_Arb = (((VeDTMC_b_Lv2AHH_Apply) && (!tmpRead_16)) &&
        (((uint32)tmpRead_17) == CeSTMR_e_AHH_Active));

    /* Switch: '<S33>/Switch4' */
    if (VeDTMC_b_Lv2AHH_Active_Arb)
    {
        /* Switch: '<S33>/Switch4' incorporates:
         *  Constant: '<S33>/ConstantValue2'
         */
        VeDTMC_M_Lv2TotAHHTrq_Arb = 10000.0F;
    }
    else
    {
        /* Switch: '<S33>/Switch4' incorporates:
         *  Constant: '<S33>/ConstantValue3'
         */
        VeDTMC_M_Lv2TotAHHTrq_Arb = 0.0F;
    }

    /* End of Switch: '<S33>/Switch4' */

    /* Switch: '<S43>/Switch' incorporates:
     *  RelationalOperator: '<S43>/Comparison'
     */
    if (VeDTMC_M_MinBrkTrq_ToNet > VeDTMC_M_Lv2TotAHHTrq_Arb)
    {
        /* Switch: '<S43>/Switch' */
        VeDTMC_M_Lv2TotBrkTrq_Max_Arb = VeDTMC_M_MinBrkTrq_ToNet;
    }
    else
    {
        /* Switch: '<S43>/Switch' */
        VeDTMC_M_Lv2TotBrkTrq_Max_Arb = VeDTMC_M_Lv2TotAHHTrq_Arb;
    }

    /* End of Switch: '<S43>/Switch' */

    /* Switch: '<S44>/Switch' incorporates:
     *  Constant: '<S29>/ConstantValue2'
     *  RelationalOperator: '<S44>/Comparison'
     */
    if (0.0F > VeDTMC_M_Lv2TotBrkTrq_Max_Arb)
    {
        /* Switch: '<S44>/Switch' */
        VeDTMC_M_Lv2TotBrkTrq_Max = 0.0F;
    }
    else
    {
        /* Switch: '<S44>/Switch' */
        VeDTMC_M_Lv2TotBrkTrq_Max = VeDTMC_M_Lv2TotBrkTrq_Max_Arb;
    }

    /* End of Switch: '<S44>/Switch' */

    /* Switch: '<S42>/LV2_Abs_switch' incorporates:
     *  Constant: '<S42>/ConstantValue1'
     *  Product: '<S42>/Product'
     *  RelationalOperator: '<S42>/Comparison'
     */
    if (VeDTMI_n_Lv2TransOutSpd_Arb < 0.0F)
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = -VeDTMI_n_Lv2TransOutSpd_Arb;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMI_n_Lv2TransOutSpd_Arb;
    }

    /* End of Switch: '<S42>/LV2_Abs_switch' */

    /* Lookup_n-D: '<S41>/Vector' */
    VeDTMC_r_Lv2SpdBsdFctr = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB, ((const float32 *)
          &(KxDTMR_r_SpdBsdFctr_ToNet[0])), ((const float32 *)
          &(KtDTMR_r_SpdBsdFctr_ToNet[0])), 7U);

    /* Product: '<S29>/Product' */
    VeDTMC_M_Lv2TotBrkTrq_Final = VeDTMC_M_Lv2TotBrkTrq_Max *
        VeDTMC_r_Lv2SpdBsdFctr;

    /* Switch: '<S45>/Switch' incorporates:
     *  RelationalOperator: '<S45>/Comparison'
     */
    if (VeDTMC_M_Lv2BrkTrqRdctn < VeDTMC_M_Lv2TotBrkTrq_Final)
    {
        /* Switch: '<S45>/Switch' */
        VeDTMC_M_Lv2BrkTrqRdctn_Min = VeDTMC_M_Lv2BrkTrqRdctn;
    }
    else
    {
        /* Switch: '<S45>/Switch' */
        VeDTMC_M_Lv2BrkTrqRdctn_Min = VeDTMC_M_Lv2TotBrkTrq_Final;
    }

    /* End of Switch: '<S45>/Switch' */

    /* Switch: '<S29>/Switch1' */
    if (VeDTMC_b_Lv2DrvrTrqReqDflt)
    {
        /* Switch: '<S29>/Switch1' incorporates:
         *  Constant: '<S29>/ConstantValue5'
         */
        VeDTMC_M_Lv2BrkTrqRdctn_Raw = 0.0F;
    }
    else
    {
        /* Switch: '<S29>/Switch1' */
        VeDTMC_M_Lv2BrkTrqRdctn_Raw = VeDTMC_M_Lv2BrkTrqRdctn_Min;
    }

    /* End of Switch: '<S29>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S29>/GradientLimiter' */
    /* Sum: '<S34>/Sum2' incorporates:
     *  UnitDelay: '<S34>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMC_M_Lv2BrkTrqRdctn_Raw -
        VeDTMC_M_Lv2BrkTrqRdctn_Fltd;

    /* Outputs for Atomic SubSystem: '<S34>/Limiter' */
    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S36>/Calib'
     *  RelationalOperator: '<S46>/RelationalOperator'
     */
    if (KeDTMR_M_BrkTrqRed_ToNet_LU < rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB)
    {
        /* Switch: '<S124>/Switch1' */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_M_BrkTrqRed_ToNet_LU;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* Switch: '<S46>/Switch' incorporates:
     *  Constant: '<S35>/Calib'
     *  RelationalOperator: '<S46>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB > KeDTMR_M_BrkTrqRed_ToNet_LD)
    {
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B =
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B = KeDTMR_M_BrkTrqRed_ToNet_LD;
    }

    /* End of Switch: '<S46>/Switch' */
    /* End of Outputs for SubSystem: '<S34>/Limiter' */

    /* Sum: '<S34>/Sum3' incorporates:
     *  UnitDelay: '<S34>/UnitDelay'
     */
    VeDTMC_M_Lv2BrkTrqRdctn_Fltd = rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B +
        VeDTMC_M_Lv2BrkTrqRdctn_Fltd;

    /* End of Outputs for SubSystem: '<S29>/GradientLimiter' */

    /* Logic: '<S29>/Logical3' incorporates:
     *  Constant: '<S39>/Calib'
     */
    VeDTMC_b_Lv2ASL_Active = (rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1 &&
        (KeDTMR_b_ASL_Active_Enbl));

    /* Switch: '<S29>/Switch2' */
    if (VeDTMI_b_Lv2ESCEventInR)
    {
        /* Switch: '<S29>/Switch2' incorporates:
         *  Gain: '<S29>/Gain2'
         */
        VeDTMC_M_Lv2BrkTrqRdctn_Arb = -VeDTMC_M_Lv2BrkTrqRdctn_Fltd;
    }
    else
    {
        /* Switch: '<S29>/Switch2' */
        VeDTMC_M_Lv2BrkTrqRdctn_Arb = VeDTMC_M_Lv2BrkTrqRdctn_Fltd;
    }

    /* End of Switch: '<S29>/Switch2' */

    /* Sum: '<S29>/Sum1' */
    VeDTMC_M_Lv2DrvrTrqReq_NetArb = VeDTMC_M_Lv2DrvrTrqReqArb -
        VeDTMC_M_Lv2BrkTrqRdctn_Arb;

    /* Switch: '<S29>/Switch5' */
    if (VeDTMC_b_Lv2ASL_Active)
    {
        /* Switch: '<S29>/Switch5' */
        VeDTMC_M_Lv2DrvrTrqReq_Net = VeDTMC_M_Lv2DrvrTrqReqArb;
    }
    else
    {
        /* Switch: '<S29>/Switch5' */
        VeDTMC_M_Lv2DrvrTrqReq_Net = VeDTMC_M_Lv2DrvrTrqReq_NetArb;
    }

    /* End of Switch: '<S29>/Switch5' */

    /* Switch: '<S29>/Switch3' incorporates:
     *  Constant: '<S40>/Calib'
     */
    if (KeDTMR_b_DualPedalPress_Enbl)
    {
        /* Switch: '<S29>/Switch3' */
        VeDTMC_M_Lv2DrvrTrqReq = VeDTMC_M_Lv2DrvrTrqReq_Net;
    }
    else
    {
        /* Switch: '<S29>/Switch3' */
        VeDTMC_M_Lv2DrvrTrqReq = VeDTMC_M_Lv2DrvrTrqReqArb;
    }

    /* End of Switch: '<S29>/Switch3' */

    /* Switch: '<S10>/Switch5' */
    if (VeDTMI_b_Lv2ESCEventInR)
    {
        /* Switch: '<S10>/Switch5' incorporates:
         *  Gain: '<S10>/Gain1'
         */
        VeDTMC_M_Lv2DrvrTrqReq_ESCEvent = -VeDTMC_M_Lv2DrvrTrqReq;
    }
    else
    {
        /* Switch: '<S10>/Switch5' */
        VeDTMC_M_Lv2DrvrTrqReq_ESCEvent = VeDTMC_M_Lv2DrvrTrqReq;
    }

    /* End of Switch: '<S10>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S10>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S30>/Calib'
     *  Product: '<S31>/Multiplication'
     *  Sum: '<S31>/Subtraction'
     *  Sum: '<S31>/Summation'
     *  UnitDelay: '<S31>/UnitDelay'
     */
    DTMR_ac_DW.VeDTMC_M_Lv2DrvrTrqReq_Whls_prev +=
        (VeDTMC_M_Lv2DrvrTrqReq_ESCEvent -
         DTMR_ac_DW.VeDTMC_M_Lv2DrvrTrqReq_Whls_prev) * KeDTMR_k_DTRFiltrCoeff;

    /* End of Outputs for SubSystem: '<S10>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Gain: '<S32>/Gain' incorporates:
     *  UnitDelay: '<S31>/UnitDelay'
     */
    VeDTMC_M_Lv2AxlTrqReqFiltd = DTMR_ac_DW.VeDTMC_M_Lv2DrvrTrqReq_Whls_prev;

    /* Switch: '<S10>/Switch4' */
    if (DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1])
    {
        /* Switch: '<S10>/Switch4' incorporates:
         *  Constant: '<S10>/Constantvalue2'
         */
        VeDTMC_M_Lv2TotalMtr_TrqReq = 0.0F;
    }
    else
    {
        /* Switch: '<S10>/Switch4' */
        VeDTMC_M_Lv2TotalMtr_TrqReq = VeDTMC_M_Lv2AxlTrqReqFiltd;
    }

    /* End of Switch: '<S10>/Switch4' */

    /* Lookup_n-D: '<S100>/Vector' incorporates:
     *  Product: '<S5>/Product1'
     */
    VeDTMC_r_ReducedPerfmFactor = look1_iflf_binlca_16a
        (VeDTMI_n_Lv2TransOutSpd_Arb, ((const float32 *)
          &(KxDTMR_M_Lv2ReducedPerfmMd[0])), ((const float32 *)
          &(KtDTMR_M_Lv2ReducedPerfmMd[0])), 9U);

    /* Product: '<S53>/Product' */
    VeDTMI_M_ReducedDrvrReq = VeDTMC_M_Lv2TotalMtr_TrqReq *
        VeDTMC_r_ReducedPerfmFactor;

    /* Sum: '<S53>/Sum1' */
    VeDTMC_M_RqInRdPerfmTrqArb = VeDTMC_M_Lv2TotalMtr_TrqReq -
        VeDTMI_M_ReducedDrvrReq;

    /* Outputs for Atomic SubSystem: '<S53>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S101>/Switch1' incorporates:
     *  Constant: '<S99>/Calib'
     *  Product: '<S101>/Multiplication'
     *  Sum: '<S101>/Subtraction'
     *  Sum: '<S101>/Summation'
     *  UnitDelay: '<S101>/UnitDelay'
     */
    VeDTMC_M_Lv2ReducedPerfTrqFiltd = ((VeDTMC_M_RqInRdPerfmTrqArb -
        VeDTMC_M_Lv2ReducedPerfTrqFiltd) * KeDTMR_K_ReducedPerfCoeff) +
        VeDTMC_M_Lv2ReducedPerfTrqFiltd;

    /* End of Outputs for SubSystem: '<S53>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* S-Function (sfix_bitop): '<S11>/Bit6' incorporates:
     *  S-Function (sfix_bitop): '<S123>/Bit6'
     */
    rtb_Compare_h_tmp = ((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U;

    /* RelationalOperator: '<S98>/Compare' incorporates:
     *  Constant: '<S98>/Constant'
     *  S-Function (sfix_bitop): '<S11>/Bit6'
     */
    rtb_UnitDelay_fg = (rtb_Compare_h_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S11>/EdgeFalling' */
    /* Logic: '<S54>/AND' incorporates:
     *  Logic: '<S54>/OR1'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    VeDTMC_b_Lv2ResetbyDMAB = ((!rtb_UnitDelay_fg) &&
        (DTMR_ac_DW.UnitDelay_DSTATE_op));

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    DTMR_ac_DW.UnitDelay_DSTATE_op = rtb_UnitDelay_fg;

    /* End of Outputs for SubSystem: '<S11>/EdgeFalling' */

    /* Logic: '<S11>/Logical2' incorporates:
     *  Constant: '<S69>/Calib'
     */
    VeDTMC_b_RstMtrTrqCmndChk = (((KeDTMR_b_DisblDTRcmndChk) ||
        (VeDTMC_b_Lv2ResetDTMRmntrs)) || (VeDTMC_b_Lv2ResetbyDMAB));

    /* UnitDelay: '<S11>/UnitDelay' */
    VeDTMC_b_RdPerfmMdForCntCntrl = VeDTMR_b_Max_Lv2ReducedPerfMode;

    /* Logic: '<S11>/Logical3' */
    VeDTMC_b_MntrNotInRdPrfmMd = !VeDTMC_b_RdPerfmMdForCntCntrl;

    /* Sum: '<S418>/Sum7' incorporates:
     *  Inport: '<Root>/VeSCCR_M_FrntAxlCLMin'
     *  Inport: '<Root>/VeSCCR_M_RrAxlCLMin'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_1 || Rte_SysCon_Variant_DTMR_FUNC_6

    (void)Rte_Read_VeSCCR_M_RrAxlCLMin_Value(&rtb_VeDTMC_M_TotAxlCLMinTrqLim);
    (void)Rte_Read_VeSCCR_M_FrntAxlCLMin_Value(&tmpRead_s);

    /* Sum: '<S418>/Sum7' incorporates:
     *  Inport: '<Root>/VeSCCR_M_FrntAxlCLMin'
     *  Inport: '<Root>/VeSCCR_M_RrAxlCLMin'
     */
    rtb_VeDTMC_M_TotAxlCLMinTrqLim += tmpRead_s;

#endif

    /* End of Sum: '<S418>/Sum7' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeHTDR_M_MtrB_TorqCmnd' */
    (void)Rte_Read_VeHTDR_M_MtrB_TorqCmnd_Value(&rtb_Switch3_idx_2);

    /* Inport: '<Root>/VeLTIR_M_Lv2MtrA_TrqCmnd' */
    (void)Rte_Read_VeLTIR_M_Lv2MtrA_TrqCmnd_Value(&tmpRead_1c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Abs: '<S425>/Abs' incorporates:
     *  Sum: '<S425>/Sum'
     */
    rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B = tmpRead_1c + rtb_Switch3_idx_2;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outputs for Atomic SubSystem: '<S425>/CounterResetEnabled2' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMI'
     */
    /* Switch: '<S475>/Switch2' incorporates:
     *  Constant: '<S475>/ConstantValue2'
     *  Logic: '<S425>/Logical2'
     *  SignalConversion generated from: '<S5>/Lv2_VehInRev'
     *  Switch: '<S475>/Switch'
     *  UnitDelay: '<S475>/UnitDelay'
     */
    if (!DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0])
    {
        DTMR_ac_DW.UnitDelay_DSTATE_d = 0U;
    }
    else
    {
        /* UnitDelay: '<S475>/UnitDelay' incorporates:
         *  Constant: '<S475>/ConstantValue1'
         *  Sum: '<S475>/Subtraction'
         *  Switch: '<S475>/Switch2'
         */
        DTMR_ac_DW.UnitDelay_DSTATE_d = (uint16)(((uint32)
            DTMR_ac_DW.UnitDelay_DSTATE_d) + 1U);
    }

    /* End of Switch: '<S475>/Switch2' */
    /* End of Outputs for SubSystem: '<S425>/CounterResetEnabled2' */

    /* Logic: '<S425>/Logical6' incorporates:
     *  Constant: '<S425>/ConstantValue3'
     *  Constant: '<S476>/Calib'
     *  Logic: '<S425>/Logical14'
     *  RelationalOperator: '<S425>/Comparison1'
     *  RelationalOperator: '<S425>/Comparison4'
     *  SignalConversion generated from: '<S5>/Lv2_VehInRev'
     *  UnitDelay: '<S475>/UnitDelay'
     */
    VeDTMC_b_Lv2NegLashCntrl_Enbled =
        ((DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0]) &&
         ((rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B <= 0.0F) ||
          (DTMR_ac_DW.UnitDelay_DSTATE_d >= KeDTMR_Cnt_ReachNgtvMtrTrqPeriod)));

    /* Outputs for Atomic SubSystem: '<S425>/CounterResetEnabled1' */
    /* Switch: '<S474>/Switch2' incorporates:
     *  Constant: '<S474>/ConstantValue2'
     *  Logic: '<S425>/Logical5'
     *  SignalConversion generated from: '<S5>/Lv2_VehInDrive'
     *  Switch: '<S474>/Switch'
     *  UnitDelay: '<S474>/UnitDelay'
     */
    if (!DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[2])
    {
        DTMR_ac_DW.UnitDelay_DSTATE_k1 = 0U;
    }
    else
    {
        /* UnitDelay: '<S474>/UnitDelay' incorporates:
         *  Constant: '<S474>/ConstantValue1'
         *  Sum: '<S474>/Subtraction'
         *  Switch: '<S474>/Switch2'
         */
        DTMR_ac_DW.UnitDelay_DSTATE_k1 = (uint16)(((uint32)
            DTMR_ac_DW.UnitDelay_DSTATE_k1) + 1U);
    }

    /* End of Switch: '<S474>/Switch2' */
    /* End of Outputs for SubSystem: '<S425>/CounterResetEnabled1' */

    /* Logic: '<S425>/Logical7' incorporates:
     *  Constant: '<S425>/ConstantValue1'
     *  Constant: '<S477>/Calib'
     *  Logic: '<S425>/Logical13'
     *  RelationalOperator: '<S425>/Comparison2'
     *  RelationalOperator: '<S425>/Comparison5'
     *  SignalConversion generated from: '<S5>/Lv2_VehInDrive'
     *  UnitDelay: '<S474>/UnitDelay'
     */
    VeDTMC_b_Lv2PosLashCntrl_Enbled =
        ((DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[2]) &&
         ((rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B > 0.0F) ||
          (DTMR_ac_DW.UnitDelay_DSTATE_k1 >= KeDTMR_Cnt_ReachPstvMtrTrqPeriod)));

    /* Outputs for Atomic SubSystem: '<S425>/SignalLatchOnWithReset' */
    /* Logic: '<S496>/OR1' incorporates:
     *  Logic: '<S496>/NOT'
     *  Logic: '<S496>/OR'
     *  UnitDelay: '<S496>/UnitDelay'
     */
    DTMR_ac_DW.UnitDelay_DSTATE_fb = ((VeDTMC_b_Lv2NegLashCntrl_Enbled) ||
        ((!VeDTMC_b_Lv2PosLashCntrl_Enbled) && (DTMR_ac_DW.UnitDelay_DSTATE_fb)));

    /* End of Outputs for SubSystem: '<S425>/SignalLatchOnWithReset' */

    /* Sum: '<S418>/Sum6' incorporates:
     *  Inport: '<Root>/VeSCCR_M_FrntAxlCLMax'
     *  Inport: '<Root>/VeSCCR_M_RrAxlCLMax'
     *  Switch: '<S418>/Switch7'
     *  Switch: '<S418>/Switch8'
     *  UnitDelay: '<S496>/UnitDelay'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_1 || Rte_SysCon_Variant_DTMR_FUNC_6

    (void)Rte_Read_VeSCCR_M_RrAxlCLMax_Value(&tmpRead_t);
    (void)Rte_Read_VeSCCR_M_FrntAxlCLMax_Value(&tmpRead_r);
    if (DTMR_ac_DW.UnitDelay_DSTATE_fb)
    {
        /* Abs: '<S425>/Abs' incorporates:
         *  Gain: '<S418>/Gain1'
         */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B =
            -rtb_VeDTMC_M_TotAxlCLMinTrqLim;

        /* Switch: '<S124>/Switch1' incorporates:
         *  Gain: '<S418>/Gain6'
         */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = -(tmpRead_r + tmpRead_t);
    }
    else
    {
        /* Abs: '<S425>/Abs' */
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B = tmpRead_r + tmpRead_t;

        /* Switch: '<S124>/Switch1' */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
            rtb_VeDTMC_M_TotAxlCLMinTrqLim;
    }

#endif

    /* End of Sum: '<S418>/Sum6' */

    /* SignalConversion generated from: '<S418>/Variant Source1' */
#if Rte_SysCon_Variant_DTMR_FUNC_1

    /* VariantMerge generated from: '<S418>/Variant Source1' */
    rtb_VariantMerge_For_Variant_Source_Va_5 =
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B;
    rtb_VariantMerge_For_Variant_Source_Va_6 =
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;

#endif

    /* End of SignalConversion generated from: '<S418>/Variant Source1' */

    /* SignalConversion generated from: '<S418>/Variant Source1' */
#if Rte_SysCon_Variant_DTMR_FUNC_6

    /* VariantMerge generated from: '<S418>/Variant Source1' */
    rtb_VariantMerge_For_Variant_Source_Va_5 =
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B;
    rtb_VariantMerge_For_Variant_Source_Va_6 =
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;

#elif !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_6

    /* VariantMerge generated from: '<S418>/Variant Source1' incorporates:
     *  Constant: '<S418>/ConstantValue2'
     *  Constant: '<S418>/ConstantValue4'
     *  SignalConversion generated from: '<S418>/Variant Source1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_5 = 99999.0F;
    rtb_VariantMerge_For_Variant_Source_Va_6 = -99999.0F;

#endif

    /* End of SignalConversion generated from: '<S418>/Variant Source1' */

    /* Switch: '<S418>/Switch3' incorporates:
     *  Switch: '<S418>/Switch2'
     *  UnitDelay: '<S496>/UnitDelay'
     */
    if (DTMR_ac_DW.UnitDelay_DSTATE_fb)
    {
        /* Switch: '<S418>/Switch3' incorporates:
         *  Gain: '<S418>/Gain2'
         */
        VeDTMC_M_FrntOLMax_Arb = -VeDTMC_M_FrntOLMin_Arb;

        /* Switch: '<S418>/Switch2' incorporates:
         *  Gain: '<S418>/Gain4'
         */
        VeDTMC_M_RearOLMax_Arb = -VeDTMC_M_RearOLMin_Arb;
    }
    else
    {
        /* Switch: '<S418>/Switch3' */
        VeDTMC_M_FrntOLMax_Arb = rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1;

        /* Switch: '<S418>/Switch2' */
        VeDTMC_M_RearOLMax_Arb = rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g;
    }

    /* End of Switch: '<S418>/Switch3' */

    /* UnitDelay: '<S126>/Unit Delay' incorporates:
     *  Constant: '<S517>/Calib'
     *  Logic: '<S418>/Logical42'
     *  Logic: '<S418>/Logical49'
     */
    rtb_UnitDelay_fg = ((KeDTMR_b_UseCalTableOLTrqMntr) &&
                        (!rtb_TmpSignalConversionAtVeSSMR_b_VehSpd));

    /* Switch: '<S418>/Switch5' incorporates:
     *  Constant: '<S515>/Calib'
     *  Lookup_n-D: '<S518>/Vector'
     *  Switch: '<S646>/Switch1'
     */
    if (rtb_UnitDelay_fg)
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = look1_iflf_binlca_16a
            (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
              &(KxDTMR_M_TotalAxlOLMax_Margin[0])), ((const float32 *)
              &(KtDTMR_M_TotalAxlOLMax_Margin[0])), 15U);
    }
    else
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_M_TotalAxlOLMax_Margin;
    }

    /* End of Switch: '<S418>/Switch5' */

    /* Sum: '<S418>/Sum4' */
    VeDTMC_M_OL_Max_SUM = (VeDTMC_M_FrntOLMax_Arb + VeDTMC_M_RearOLMax_Arb) +
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;

    /* Switch: '<S418>/Switch1' incorporates:
     *  Switch: '<S418>/Switch4'
     *  UnitDelay: '<S496>/UnitDelay'
     */
    if (DTMR_ac_DW.UnitDelay_DSTATE_fb)
    {
        /* Switch: '<S418>/Switch1' incorporates:
         *  Gain: '<S418>/Gain3'
         */
        VeDTMC_M_FrntOLMin_Arb = -rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1;

        /* Switch: '<S418>/Switch4' incorporates:
         *  Gain: '<S418>/Gain5'
         */
        VeDTMC_M_RearOLMin_Arb = -rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g;
    }

    /* End of Switch: '<S418>/Switch1' */

    /* Switch: '<S418>/Switch6' incorporates:
     *  Constant: '<S516>/Calib'
     *  Lookup_n-D: '<S519>/Vector'
     *  Switch: '<S646>/Switch1'
     */
    if (rtb_UnitDelay_fg)
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = look1_iflf_binlca_16a
            (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
              &(KxDTMR_M_TotalAxlOLMin_Margin[0])), ((const float32 *)
              &(KtDTMR_M_TotalAxlOLMin_Margin[0])), 15U);
    }
    else
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_M_TotalAxlOLMin_Margin;
    }

    /* End of Switch: '<S418>/Switch6' */

    /* Sum: '<S418>/Sum13' */
    VeDTMC_M_OL_Min_SUM = (VeDTMC_M_FrntOLMin_Arb + VeDTMC_M_RearOLMin_Arb) -
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;

    /* UnitDelay: '<S126>/Unit Delay' incorporates:
     *  Constant: '<S416>/Constant'
     *  RelationalOperator: '<S19>/Comparison1'
     */
    rtb_UnitDelay_fg = (((uint32)VeDTMC_e_Lv2BrkPdlStat) == CeDTMR_e_BrakeAppld);

    /* Lookup_n-D: '<S513>/Vector' incorporates:
     *  Product: '<S5>/Product1'
     */
    VeDTMC_M_Lv2CreepTrq = look1_iflf_binlca_16a(VeDTMI_n_Lv2TransOutSpd_Arb, ((
        const float32 *)&(KxDTMR_M_CreepTorq[0])), ((const float32 *)
        &(KtDTMR_M_CreepTorq[0])), 6U);

    /* Switch: '<S415>/Switch3' */
    if (rtb_UnitDelay_fg)
    {
        /* Switch: '<S415>/Switch3' incorporates:
         *  Constant: '<S415>/ConstantValue4'
         */
        VeDTMC_M_Lv2CreepTrq_Arb = 0.0F;
    }
    else
    {
        /* Switch: '<S415>/Switch3' incorporates:
         *  Constant: '<S417>/Calib'
         *  Product: '<S415>/Product5'
         */
        VeDTMC_M_Lv2CreepTrq_Arb = VeDTMC_M_Lv2CreepTrq * KeDTMR_k_P4BEV_FDR;
    }

    /* End of Switch: '<S415>/Switch3' */

    /* Lookup_n-D: '<S514>/Vector' incorporates:
     *  Product: '<S5>/Product1'
     */
    VeDTMC_r_Lv2RedPerfFctr = look1_iflf_binlca_16a(VeDTMI_n_Lv2TransOutSpd_Arb,
        ((const float32 *)&(KxDTMR_r_PerformanceFactor[0])), ((const float32 *)
        &(KtDTMR_r_PerformanceFactor[0])), 6U);

    /* Switch: '<S415>/Switch1' incorporates:
     *  Constant: '<S511>/Calib'
     *  Constant: '<S512>/Calib'
     *  RelationalOperator: '<S415>/Comparison2'
     *  Switch: '<S415>/Switch2'
     */
    if (KeDTMR_b_UseAxlTrqReqWoMax)
    {
        /* Switch: '<S415>/Switch1' */
        VeDTMC_M_Lv2IntendedTrqReq_Arb = VeDTMC_M_Lv2TotalMtr_TrqReq;
    }
    else if (VeDTMC_M_Lv2NormalMinTrq <= KeDTMR_M_NegNormalMinTrqComp)
    {
        /* Switch: '<S415>/Switch2' incorporates:
         *  Switch: '<S415>/Switch1'
         */
        VeDTMC_M_Lv2IntendedTrqReq_Arb = VeDTMC_M_Lv2TotalMtr_TrqReq;
    }
    else
    {
        /* Switch: '<S415>/Switch1' incorporates:
         *  MinMax: '<S415>/Max'
         *  Switch: '<S415>/Switch2'
         */
        VeDTMC_M_Lv2IntendedTrqReq_Arb = fmaxf(VeDTMC_M_Lv2NormalMinTrq,
            VeDTMC_M_Lv2TotalMtr_TrqReq);
    }

    /* End of Switch: '<S415>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSRAR_b_ReducedPerfMode' */
    (void)Rte_Read_VeSRAR_b_ReducedPerfMode_Value(&rtb_VeDTMR_b_Lv2BrkNOTApplied);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Switch: '<S415>/Switch4' */
    if (rtb_VeDTMR_b_Lv2BrkNOTApplied)
    {
        /* Switch: '<S415>/Switch4' incorporates:
         *  Product: '<S415>/Product'
         */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfRegen = VeDTMC_r_Lv2RedPerfFctr *
            VeDTMC_M_Lv2IntendedTrqReq_Arb;
    }
    else
    {
        /* Switch: '<S415>/Switch4' */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfRegen = VeDTMC_M_Lv2IntendedTrqReq_Arb;
    }

    /* End of Switch: '<S415>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSRAR_b_CreepTorqMode' */
    (void)Rte_Read_VeSRAR_b_CreepTorqMode_Value(&rtb_AND_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Switch: '<S415>/Switch5' */
    if (rtb_AND_d)
    {
        /* Switch: '<S415>/Switch5' */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfLash = VeDTMC_M_Lv2CreepTrq_Arb;
    }
    else
    {
        /* Switch: '<S415>/Switch5' */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfLash = VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfRegen;
    }

    /* End of Switch: '<S415>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S413>/LV2_Digital_Lowpass_Reset_Enabled2' */
    /* Switch: '<S422>/Switch2' incorporates:
     *  Constant: '<S420>/Calib'
     *  Logic: '<S413>/Logical2'
     *  Switch: '<S422>/Switch1'
     */
    if (!KeDTMR_b_EnblLv2DrvDmndLowPassFilter)
    {
        /* Switch: '<S422>/Switch1' */
        VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt =
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfLash;
    }
    else
    {
        /* Switch: '<S422>/Switch1' incorporates:
         *  Constant: '<S421>/Calib'
         *  Product: '<S422>/Multiplication'
         *  Sum: '<S422>/Subtraction'
         *  Sum: '<S422>/Summation'
         *  Switch: '<S422>/Switch2'
         *  UnitDelay: '<S422>/UnitDelay'
         */
        VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt =
            ((VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfLash -
              VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt) *
             KeDTMR_k_RevFastRespLowPassFilt) +
            VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt;
    }

    /* End of Switch: '<S422>/Switch2' */
    /* End of Outputs for SubSystem: '<S413>/LV2_Digital_Lowpass_Reset_Enabled2' */

    /* MinMax: '<S414>/Max' */
    VeDTMC_M_Lv2_DrvrDmndMtrTrqLowpath_Max = fmaxf
        (VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfLash,
         VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt);

    /* Logic: '<S425>/Logical1' */
    rtb_VeDTMR_b_Lv2BrkNOTApplied = !rtb_UnitDelay_fg;

    /* Outputs for Atomic SubSystem: '<S425>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S497>/EdgeRising' */
    /* Logic: '<S498>/AND' incorporates:
     *  Logic: '<S498>/OR1'
     *  UnitDelay: '<S498>/Unit Delay'
     */
    rtb_AND_d = (rtb_VeDTMR_b_Lv2BrkNOTApplied &&
                 (!DTMR_ac_DW.UnitDelay_DSTATE_p5));

    /* Update for UnitDelay: '<S498>/Unit Delay' */
    DTMR_ac_DW.UnitDelay_DSTATE_p5 = rtb_VeDTMR_b_Lv2BrkNOTApplied;

    /* End of Outputs for SubSystem: '<S497>/EdgeRising' */

    /* Switch: '<S497>/Switch1' incorporates:
     *  Constant: '<S488>/Calib'
     *  Constant: '<S489>/Calib'
     *  Constant: '<S497>/ConstantValue1'
     *  Logic: '<S497>/OR'
     *  Logic: '<S497>/OR1'
     *  MinMax: '<S497>/Minimum'
     *  Sum: '<S497>/Summation'
     *  UnitDelay: '<S497>/UnitDelay'
     */
    if ((!rtb_VeDTMR_b_Lv2BrkNOTApplied) || rtb_AND_d)
    {
        DTMR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        DTMR_ac_DW.UnitDelay_DSTATE_k = fminf(KeDTMR_t_BrkAplyd_ZrPdLsh_Delay,
            KeDTMR_t_dT + DTMR_ac_DW.UnitDelay_DSTATE_k);
    }

    /* End of Switch: '<S497>/Switch1' */

    /* Logic: '<S425>/Logical4' incorporates:
     *  Constant: '<S482>/Calib'
     *  Constant: '<S483>/Calib'
     *  Constant: '<S485>/Calib'
     *  Constant: '<S487>/Calib'
     *  Constant: '<S488>/Calib'
     *  Logic: '<S425>/Logical3'
     *  Logic: '<S497>/AND'
     *  RelationalOperator: '<S425>/Comparison10'
     *  RelationalOperator: '<S425>/Comparison9'
     *  RelationalOperator: '<S497>/GreaterThan'
     *  UnitDelay: '<S497>/UnitDelay'
     */
    VeDTMC_b_Lv2ZeroPedalLashCntrl_Enbled =
        (((((KeDTMR_b_BrkPdl4ZeroPedalLash_enable) ||
            (rtb_VeDTMR_b_Lv2BrkNOTApplied && (DTMR_ac_DW.UnitDelay_DSTATE_k >=
              KeDTMR_t_BrkAplyd_ZrPdLsh_Delay))) && (KeDTMR_b_ZeroPedalLash_Enbl))
          && (VeDTMC_Pct_Lv2AccelPdlPos < KeDTMR_Pct_MaxPdl_ZeroPedal)) &&
         (VeDTMI_n_Lv2TransOutSpd_Arb < KeDTMR_n_MaxNo_ZeroPdlLsh));

    /* End of Outputs for SubSystem: '<S425>/TurnOnDelayTime' */

    /* Switch: '<S424>/Switch3' incorporates:
     *  Constant: '<S438>/Calib'
     */
    if (KeDTMR_b_UseToReqTable4Lash)
    {
        /* Switch: '<S424>/Switch3' incorporates:
         *  Lookup_n-D: '<S462>/Vector'
         *  Lookup_n-D: '<S463>/Vector'
         *  Lookup_n-D: '<S464>/Vector'
         *  Lookup_n-D: '<S465>/Vector'
         *  Switch: '<S10>/Switch4'
         */
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1 = look1_iflf_binlca_16a
            (VeDTMC_M_Lv2TotalMtr_TrqReq, ((const float32 *)
              &(KxDTMR_k_NegLashFac_M182_1[0])), ((const float32 *)
              &(KtDTMR_k_NegLashFac_M182_1[0])), 15U);
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g = look1_iflf_binlca_16a
            (VeDTMC_M_Lv2TotalMtr_TrqReq, ((const float32 *)
              &(KxDTMR_k_NegLashFac_M182_2[0])), ((const float32 *)
              &(KtDTMR_k_NegLashFac_M182_2[0])), 15U);
        rtb_Switch3_idx_2 = look1_iflf_binlca_16a(VeDTMC_M_Lv2TotalMtr_TrqReq,
            ((const float32 *)&(KxDTMR_k_NegLashFac_M182_3[0])), ((const float32
            *)&(KtDTMR_k_NegLashFac_M182_3[0])), 15U);
        VeDTMC_k_NotInLashFactor = look1_iflf_binlca_16a
            (VeDTMC_M_Lv2TotalMtr_TrqReq, ((const float32 *)
              &(KxDTMR_k_NegLashFac_M182_4[0])), ((const float32 *)
              &(KtDTMR_k_NegLashFac_M182_4[0])), 15U);
    }
    else
    {
        /* Switch: '<S424>/Switch3' incorporates:
         *  Constant: '<S450>/Calib'
         *  Constant: '<S451>/Calib'
         *  Constant: '<S452>/Calib'
         *  Constant: '<S453>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1 = KeDTMR_k_NegLashFac_1;
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g = KeDTMR_k_NegLashFac_2;
        rtb_Switch3_idx_2 = KeDTMR_k_NegLashFac_3;
        VeDTMC_k_NotInLashFactor = KeDTMR_k_NegLashFac_4;
    }

    /* End of Switch: '<S424>/Switch3' */

    /* RelationalOperator: '<S424>/Comparison14' incorporates:
     *  Constant: '<S427>/Constant'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     */
    VeDTMC_b_Lv2DrvMode_Auto = (((uint32)VeDTMC_e_Lv2DriverMd_Arb) ==
        CeDTMR_e_DrvMdTotal_Auto);

    /* RelationalOperator: '<S424>/Comparison1' incorporates:
     *  Constant: '<S430>/Constant'
     *  RelationalOperator: '<S424>/Comparison14'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     */
    VeDTMC_b_Lv2DrvMode_Offroad = (((uint32)VeDTMC_e_Lv2DriverMd_Arb) ==
        CeDTMR_e_DrvMdTotal_OffRoad);

    /* RelationalOperator: '<S424>/Comparison2' incorporates:
     *  Constant: '<S431>/Constant'
     *  RelationalOperator: '<S424>/Comparison14'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     */
    VeDTMC_b_Lv2DrvMode_Eco = (((uint32)VeDTMC_e_Lv2DriverMd_Arb) ==
        CeDTMR_e_DrvMdTotal_Eco);

    /* RelationalOperator: '<S424>/Comparison3' incorporates:
     *  Constant: '<S432>/Constant'
     *  RelationalOperator: '<S424>/Comparison14'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     */
    VeDTMC_b_Lv2DrvMode_Sport = (((uint32)VeDTMC_e_Lv2DriverMd_Arb) ==
        CeDTMR_e_DrvMdTotal_Sport);

    /* Switch: '<S424>/Switch20' incorporates:
     *  Constant: '<S428>/Constant'
     *  Constant: '<S429>/Constant'
     *  Constant: '<S433>/Constant'
     *  Constant: '<S434>/Constant'
     *  Constant: '<S435>/Constant'
     *  Constant: '<S436>/Constant'
     *  Constant: '<S437>/Constant'
     *  RelationalOperator: '<S424>/Comparison14'
     *  RelationalOperator: '<S424>/Comparison18'
     *  RelationalOperator: '<S424>/Comparison19'
     *  RelationalOperator: '<S424>/Comparison20'
     *  RelationalOperator: '<S424>/Comparison4'
     *  RelationalOperator: '<S424>/Comparison5'
     *  RelationalOperator: '<S424>/Comparison6'
     *  RelationalOperator: '<S424>/Comparison7'
     *  SignalConversion generated from: '<S286>/Variant Source1'
     *  Switch: '<S424>/Switch13'
     *  Switch: '<S424>/Switch14'
     *  Switch: '<S424>/Switch15'
     *  Switch: '<S424>/Switch16'
     *  Switch: '<S424>/Switch17'
     *  Switch: '<S424>/Switch18'
     *  Switch: '<S424>/Switch19'
     *  Switch: '<S424>/Switch21'
     *  Switch: '<S424>/Switch22'
     *  Switch: '<S424>/Switch23'
     */
    if (VeDTMC_b_Lv2DrvMode_Auto)
    {
        /* Switch: '<S424>/Switch20' incorporates:
         *  Constant: '<S439>/Calib'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Auto;
    }
    else if (VeDTMC_b_Lv2DrvMode_Offroad)
    {
        /* Switch: '<S424>/Switch21' incorporates:
         *  Constant: '<S443>/Calib'
         *  Switch: '<S424>/Switch20'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Offroad;
    }
    else if (VeDTMC_b_Lv2DrvMode_Eco)
    {
        /* Switch: '<S424>/Switch22' incorporates:
         *  Constant: '<S441>/Calib'
         *  Switch: '<S424>/Switch20'
         *  Switch: '<S424>/Switch21'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Eco;
    }
    else if (VeDTMC_b_Lv2DrvMode_Sport)
    {
        /* Switch: '<S424>/Switch23' incorporates:
         *  Constant: '<S446>/Calib'
         *  Switch: '<S424>/Switch20'
         *  Switch: '<S424>/Switch21'
         *  Switch: '<S424>/Switch22'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Sport;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Rock)
    {
        /* Switch: '<S424>/Switch19' incorporates:
         *  Constant: '<S444>/Calib'
         *  Switch: '<S424>/Switch20'
         *  Switch: '<S424>/Switch21'
         *  Switch: '<S424>/Switch22'
         *  Switch: '<S424>/Switch23'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Rock;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Snow)
    {
        /* Switch: '<S424>/Switch18' incorporates:
         *  Constant: '<S445>/Calib'
         *  Switch: '<S424>/Switch19'
         *  Switch: '<S424>/Switch20'
         *  Switch: '<S424>/Switch21'
         *  Switch: '<S424>/Switch22'
         *  Switch: '<S424>/Switch23'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Snow;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_MudSand)
    {
        /* Switch: '<S424>/Switch17' incorporates:
         *  Constant: '<S442>/Calib'
         *  Switch: '<S424>/Switch18'
         *  Switch: '<S424>/Switch19'
         *  Switch: '<S424>/Switch20'
         *  Switch: '<S424>/Switch21'
         *  Switch: '<S424>/Switch22'
         *  Switch: '<S424>/Switch23'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_MudSand;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Tow)
    {
        /* Switch: '<S424>/Switch16' incorporates:
         *  Constant: '<S447>/Calib'
         *  Switch: '<S424>/Switch17'
         *  Switch: '<S424>/Switch18'
         *  Switch: '<S424>/Switch19'
         *  Switch: '<S424>/Switch20'
         *  Switch: '<S424>/Switch21'
         *  Switch: '<S424>/Switch22'
         *  Switch: '<S424>/Switch23'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Tow;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Valet)
    {
        /* Switch: '<S424>/Switch15' incorporates:
         *  Constant: '<S449>/Calib'
         *  Switch: '<S424>/Switch16'
         *  Switch: '<S424>/Switch17'
         *  Switch: '<S424>/Switch18'
         *  Switch: '<S424>/Switch19'
         *  Switch: '<S424>/Switch20'
         *  Switch: '<S424>/Switch21'
         *  Switch: '<S424>/Switch22'
         *  Switch: '<S424>/Switch23'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Valet;
    }
    else if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Track)
    {
        /* Switch: '<S424>/Switch14' incorporates:
         *  Constant: '<S448>/Calib'
         *  Switch: '<S424>/Switch15'
         *  Switch: '<S424>/Switch16'
         *  Switch: '<S424>/Switch17'
         *  Switch: '<S424>/Switch18'
         *  Switch: '<S424>/Switch19'
         *  Switch: '<S424>/Switch20'
         *  Switch: '<S424>/Switch21'
         *  Switch: '<S424>/Switch22'
         *  Switch: '<S424>/Switch23'
         */
        VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Track;
    }
    else
    {
        if (((uint32)VeDTMC_e_Lv2DriverMd_Arb) == CeDTMR_e_DrvMdTotal_Drag)
        {
            /* Switch: '<S424>/Switch13' incorporates:
             *  Constant: '<S440>/Calib'
             *  Switch: '<S424>/Switch14'
             *  Switch: '<S424>/Switch15'
             *  Switch: '<S424>/Switch16'
             *  Switch: '<S424>/Switch17'
             *  Switch: '<S424>/Switch18'
             *  Switch: '<S424>/Switch19'
             *  Switch: '<S424>/Switch20'
             *  Switch: '<S424>/Switch21'
             *  Switch: '<S424>/Switch22'
             *  Switch: '<S424>/Switch23'
             */
            VeDTMC_k_Lv2LashCntrlFactor = KeDTMR_k_Lv2LashCntrlFactor_Drag;
        }
    }

    /* End of Switch: '<S424>/Switch20' */

    /* Switch: '<S424>/Switch10' incorporates:
     *  Constant: '<S424>/ConstantValue4'
     *  Constant: '<S424>/ConstantValue6'
     *  Constant: '<S424>/ConstantValue7'
     *  RelationalOperator: '<S424>/Comparison15'
     *  RelationalOperator: '<S424>/Comparison16'
     *  RelationalOperator: '<S424>/Comparison17'
     *  Switch: '<S424>/Switch11'
     *  Switch: '<S424>/Switch12'
     */
    if (((sint32)VeDTMC_k_Lv2LashCntrlFactor) == 1)
    {
        /* Switch: '<S424>/Switch10' */
        VeDTMC_k_NegLashFactor = rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1;
    }
    else if (((sint32)VeDTMC_k_Lv2LashCntrlFactor) == 2)
    {
        /* Switch: '<S424>/Switch11' incorporates:
         *  Switch: '<S424>/Switch10'
         */
        VeDTMC_k_NegLashFactor = rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g;
    }
    else if (((sint32)VeDTMC_k_Lv2LashCntrlFactor) == 3)
    {
        /* Switch: '<S424>/Switch12' incorporates:
         *  Switch: '<S424>/Switch10'
         *  Switch: '<S424>/Switch11'
         */
        VeDTMC_k_NegLashFactor = rtb_Switch3_idx_2;
    }
    else
    {
        /* Switch: '<S424>/Switch10' incorporates:
         *  Switch: '<S424>/Switch11'
         *  Switch: '<S424>/Switch12'
         */
        VeDTMC_k_NegLashFactor = VeDTMC_k_NotInLashFactor;
    }

    /* End of Switch: '<S424>/Switch10' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_M_Lv2MtrB_TrqAchieved' */
    (void)Rte_Read_VeSCMR_M_Lv2MtrB_TrqAchieved_Value
        (&rtb_VeDTMC_k_Lv2PosNegFactor_Arb);

    /* Inport: '<Root>/VeSCMR_M_Lv2MtrA_TrqAchieved' */
    (void)Rte_Read_VeSCMR_M_Lv2MtrA_TrqAchieved_Value(&tmpRead_1d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Switch: '<S124>/Switch1' incorporates:
     *  Constant: '<S486>/Calib'
     *  Product: '<S425>/Product4'
     *  Sum: '<S425>/Sum1'
     */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = (tmpRead_1d +
        rtb_VeDTMC_k_Lv2PosNegFactor_Arb) * KeDTMR_k_P4BEV_FDR;

    /* Logic: '<S425>/Logical10' incorporates:
     *  Constant: '<S478>/Calib'
     *  Constant: '<S480>/Calib'
     *  RelationalOperator: '<S425>/Comparison3'
     *  RelationalOperator: '<S425>/Comparison6'
     *  UnitDelay: '<S413>/Unit Delay'
     */
    VeDTMC_b_NegLashCntrl_PstFil = ((rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB <
        KeDTMR_M_NegLashTrqThresh) && (VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned >
        KeDTMR_M_FrmNegRtLimTrqThresh));

    /* Switch: '<S424>/Switch1' incorporates:
     *  Constant: '<S438>/Calib'
     */
    if (KeDTMR_b_UseToReqTable4Lash)
    {
        /* Switch: '<S424>/Switch1' incorporates:
         *  Lookup_n-D: '<S470>/Vector'
         *  Lookup_n-D: '<S471>/Vector'
         *  Lookup_n-D: '<S472>/Vector'
         *  Switch: '<S10>/Switch4'
         */
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1 = look1_iflf_binlca_16a
            (VeDTMC_M_Lv2TotalMtr_TrqReq, ((const float32 *)
              &(KxDTMR_k_PosLashFac_M182_1[0])), ((const float32 *)
              &(KtDTMR_k_PosLashFac_M182_1[0])), 15U);
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g = look1_iflf_binlca_16a
            (VeDTMC_M_Lv2TotalMtr_TrqReq, ((const float32 *)
              &(KxDTMR_k_PosLashFac_M182_2[0])), ((const float32 *)
              &(KtDTMR_k_PosLashFac_M182_2[0])), 15U);
        rtb_Switch3_idx_2 = look1_iflf_binlca_16a(VeDTMC_M_Lv2TotalMtr_TrqReq,
            ((const float32 *)&(KxDTMR_k_PosLashFac_M182_3[0])), ((const float32
            *)&(KtDTMR_k_PosLashFac_M182_3[0])), 15U);

        /* Switch: '<S424>/Switch3' incorporates:
         *  Lookup_n-D: '<S473>/Vector'
         *  Switch: '<S10>/Switch4'
         *  Switch: '<S424>/Switch1'
         */
        VeDTMC_k_NotInLashFactor = look1_iflf_binlca_16a
            (VeDTMC_M_Lv2TotalMtr_TrqReq, ((const float32 *)
              &(KxDTMR_k_PosLashFac_M182_4[0])), ((const float32 *)
              &(KtDTMR_k_PosLashFac_M182_4[0])), 15U);
    }
    else
    {
        /* Switch: '<S424>/Switch1' incorporates:
         *  Constant: '<S458>/Calib'
         *  Constant: '<S459>/Calib'
         *  Constant: '<S460>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1 = KeDTMR_k_PosLashFac_1;
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g = KeDTMR_k_PosLashFac_2;
        rtb_Switch3_idx_2 = KeDTMR_k_PosLashFac_3;

        /* Switch: '<S424>/Switch3' incorporates:
         *  Constant: '<S461>/Calib'
         *  Switch: '<S424>/Switch1'
         */
        VeDTMC_k_NotInLashFactor = KeDTMR_k_PosLashFac_4;
    }

    /* End of Switch: '<S424>/Switch1' */

    /* Switch: '<S424>/Switch9' incorporates:
     *  Constant: '<S424>/ConstantValue3'
     *  Constant: '<S424>/ConstantValue5'
     *  Constant: '<S424>/ConstantValue9'
     *  RelationalOperator: '<S424>/Comparison11'
     *  RelationalOperator: '<S424>/Comparison12'
     *  RelationalOperator: '<S424>/Comparison13'
     *  Switch: '<S424>/Switch7'
     *  Switch: '<S424>/Switch8'
     */
    if (((sint32)VeDTMC_k_Lv2LashCntrlFactor) == 1)
    {
        /* Switch: '<S424>/Switch9' */
        VeDTMC_k_PosLashFactor = rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1;
    }
    else if (((sint32)VeDTMC_k_Lv2LashCntrlFactor) == 2)
    {
        /* Switch: '<S424>/Switch8' incorporates:
         *  Switch: '<S424>/Switch9'
         */
        VeDTMC_k_PosLashFactor = rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g;
    }
    else if (((sint32)VeDTMC_k_Lv2LashCntrlFactor) == 3)
    {
        /* Switch: '<S424>/Switch7' incorporates:
         *  Switch: '<S424>/Switch8'
         *  Switch: '<S424>/Switch9'
         */
        VeDTMC_k_PosLashFactor = rtb_Switch3_idx_2;
    }
    else
    {
        /* Switch: '<S424>/Switch9' incorporates:
         *  Switch: '<S424>/Switch7'
         *  Switch: '<S424>/Switch8'
         */
        VeDTMC_k_PosLashFactor = VeDTMC_k_NotInLashFactor;
    }

    /* End of Switch: '<S424>/Switch9' */

    /* Switch: '<S425>/Switch7' */
    if (VeDTMC_b_NegLashCntrl_PstFil)
    {
        /* Switch: '<S425>/Switch7' */
        rtb_VeDTMC_k_Lv2PosNegFactor_Arb = VeDTMC_k_NegLashFactor;
    }
    else
    {
        /* Switch: '<S425>/Switch7' */
        rtb_VeDTMC_k_Lv2PosNegFactor_Arb = VeDTMC_k_PosLashFactor;
    }

    /* End of Switch: '<S425>/Switch7' */

    /* Logic: '<S425>/Logical11' incorporates:
     *  Constant: '<S479>/Calib'
     *  Constant: '<S481>/Calib'
     *  RelationalOperator: '<S425>/Comparison7'
     *  RelationalOperator: '<S425>/Comparison8'
     *  UnitDelay: '<S413>/Unit Delay'
     */
    VeDTMC_b_PosLashCntrl_PstFil = ((rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB >
        KeDTMR_M_PosLashTrqThresh) && (VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned <
        KeDTMR_M_FrmPosRtLimTrqThresh));

    /* Logic: '<S425>/Logical9' */
    VeDTMC_b_Lv1NegPosLashCntrl_PstFil = ((VeDTMC_b_NegLashCntrl_PstFil) ||
        (VeDTMC_b_PosLashCntrl_PstFil));

    /* Switch: '<S413>/Switch3' incorporates:
     *  UnitDelay: '<S496>/UnitDelay'
     */
    if (DTMR_ac_DW.UnitDelay_DSTATE_fb)
    {
        /* Switch: '<S413>/Switch3' incorporates:
         *  Gain: '<S413>/Gain7'
         */
        VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt_Signed =
            -VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt;
    }
    else
    {
        /* Switch: '<S413>/Switch3' */
        VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt_Signed =
            VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt;
    }

    /* End of Switch: '<S413>/Switch3' */

    /* Sum: '<S425>/Sum5' incorporates:
     *  UnitDelay: '<S413>/Unit Delay'
     */
    VeDTMC_M_DrvrDmndLashTrqDiff = VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned -
        VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt_Signed;

    /* Switch: '<S124>/Switch1' incorporates:
     *  Abs: '<S425>/Abs1'
     */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = fabsf
        (VeDTMC_M_DrvrDmndLashTrqDiff);

    /* Abs: '<S425>/Abs' */
    rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B = fabsf(VeDTMI_n_Lv2TransOutSpd_Arb);

    /* Switch: '<S424>/Switch2' incorporates:
     *  Constant: '<S438>/Calib'
     */
    if (KeDTMR_b_UseToReqTable4Lash)
    {
        /* Switch: '<S424>/Switch2' incorporates:
         *  Lookup_n-D: '<S466>/Vector'
         *  Lookup_n-D: '<S467>/Vector'
         *  Lookup_n-D: '<S468>/Vector'
         *  Switch: '<S10>/Switch4'
         */
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1 = look1_iflf_binlca_16a
            (VeDTMC_M_Lv2TotalMtr_TrqReq, ((const float32 *)
              &(KxDTMR_k_NotInLashFac_M182_1[0])), ((const float32 *)
              &(KtDTMR_k_NotInLashFac_M182_1[0])), 15U);
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g = look1_iflf_binlca_16a
            (VeDTMC_M_Lv2TotalMtr_TrqReq, ((const float32 *)
              &(KxDTMR_k_NotInLashFac_M182_2[0])), ((const float32 *)
              &(KtDTMR_k_NotInLashFac_M182_2[0])), 15U);
        rtb_Switch3_idx_2 = look1_iflf_binlca_16a(VeDTMC_M_Lv2TotalMtr_TrqReq,
            ((const float32 *)&(KxDTMR_k_NotInLashFac_M182_3[0])), ((const
            float32 *)&(KtDTMR_k_NotInLashFac_M182_3[0])), 15U);

        /* Switch: '<S424>/Switch3' incorporates:
         *  Lookup_n-D: '<S469>/Vector'
         *  Switch: '<S10>/Switch4'
         *  Switch: '<S424>/Switch2'
         */
        VeDTMC_k_NotInLashFactor = look1_iflf_binlca_16a
            (VeDTMC_M_Lv2TotalMtr_TrqReq, ((const float32 *)
              &(KxDTMR_k_NotInLashFac_M182_4[0])), ((const float32 *)
              &(KtDTMR_k_NotInLashFac_M182_4[0])), 15U);
    }
    else
    {
        /* Switch: '<S424>/Switch2' incorporates:
         *  Constant: '<S454>/Calib'
         *  Constant: '<S455>/Calib'
         *  Constant: '<S456>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1 = KeDTMR_k_NotInLashFac_1;
        rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g = KeDTMR_k_NotInLashFac_2;
        rtb_Switch3_idx_2 = KeDTMR_k_NotInLashFac_3;

        /* Switch: '<S424>/Switch3' incorporates:
         *  Constant: '<S457>/Calib'
         *  Switch: '<S424>/Switch2'
         */
        VeDTMC_k_NotInLashFactor = KeDTMR_k_NotInLashFac_4;
    }

    /* End of Switch: '<S424>/Switch2' */

    /* Switch: '<S424>/Switch6' incorporates:
     *  Constant: '<S424>/ConstantValue'
     *  Constant: '<S424>/ConstantValue1'
     *  Constant: '<S424>/ConstantValue2'
     *  RelationalOperator: '<S424>/Comparison10'
     *  RelationalOperator: '<S424>/Comparison8'
     *  RelationalOperator: '<S424>/Comparison9'
     *  Switch: '<S424>/Switch4'
     *  Switch: '<S424>/Switch5'
     */
    if (((sint32)VeDTMC_k_Lv2LashCntrlFactor) == 1)
    {
        /* Switch: '<S424>/Switch3' incorporates:
         *  Switch: '<S424>/Switch6'
         */
        VeDTMC_k_NotInLashFactor = rtb_TmpSignalConversionAtVeSCCR_M_Lv2_h1;
    }
    else if (((sint32)VeDTMC_k_Lv2LashCntrlFactor) == 2)
    {
        /* Switch: '<S424>/Switch3' incorporates:
         *  Switch: '<S424>/Switch5'
         *  Switch: '<S424>/Switch6'
         */
        VeDTMC_k_NotInLashFactor = rtb_TmpSignalConversionAtVeSCCR_M_Lv2L_g;
    }
    else
    {
        if (((sint32)VeDTMC_k_Lv2LashCntrlFactor) == 3)
        {
            /* Switch: '<S424>/Switch3' incorporates:
             *  Switch: '<S424>/Switch4'
             *  Switch: '<S424>/Switch5'
             *  Switch: '<S424>/Switch6'
             */
            VeDTMC_k_NotInLashFactor = rtb_Switch3_idx_2;
        }
    }

    /* End of Switch: '<S424>/Switch6' */

    /* Product: '<S425>/Product1' incorporates:
     *  Abs: '<S425>/Abs'
     *  Lookup_n-D: '<S493>/Vector'
     *  Switch: '<S124>/Switch1'
     */
    VeDTMC_dM_Lv2LashCntrlArb_LU = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB,
         rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B, ((const float32 *)
          &(KxDTMR_dM_NotLashToNo_LU_PstFil[0])), ((const float32 *)
          &(KyDTMR_dM_NotLashToNo_LU_PstFil[0])), ((const float32 *)
          &(KtDTMR_dM_NotLashToNo_LU_PstFil[0])), DTMR_ac_ConstP.pooled11, 8U) *
        VeDTMC_k_NotInLashFactor;

    /* Switch: '<S124>/Switch1' incorporates:
     *  Abs: '<S425>/Abs'
     *  Lookup_n-D: '<S492>/Vector'
     */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB,
         rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B, ((const float32 *)
          &(KxDTMR_dM_NotLashToNo_LD_PstFil[0])), ((const float32 *)
          &(KyDTMR_dM_NotLashToNo_LD_PstFil[0])), ((const float32 *)
          &(KtDTMR_dM_NotLashToNo_LD_PstFil[0])), DTMR_ac_ConstP.pooled11, 8U);

    /* Product: '<S425>/Product2' */
    VeDTMC_dM_Lv2LashCntrlArb_LD = rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB *
        VeDTMC_k_NotInLashFactor;

    /* Switch: '<S425>/Switch4' incorporates:
     *  Constant: '<S484>/Calib'
     *  Switch: '<S425>/Switch2'
     *  Switch: '<S425>/Switch5'
     */
    if (VeDTMC_b_Lv2ZeroPedalLashCntrl_Enbled)
    {
        /* Switch: '<S425>/Switch4' incorporates:
         *  Lookup_n-D: '<S495>/Vector'
         *  Product: '<S5>/Product1'
         *  UnitDelay: '<S413>/Unit Delay'
         */
        VeDTMC_dM_Lv2LashCntrlArb_LU = look2_iflf_binlca_16a
            (VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned,
             VeDTMI_n_Lv2TransOutSpd_Arb, ((const float32 *)
              &(KxDTMR_dM_ZeroPedalLash_LU_PstFil[0])), ((const float32 *)
              &(KyDTMR_dM_ZeroPedalLash_LU_PstFil[0])), ((const float32 *)
              &(KtDTMR_dM_ZeroPedalLash_LU_PstFil[0])), DTMR_ac_ConstP.pooled8,
             9U);

        /* Switch: '<S425>/Switch2' incorporates:
         *  Lookup_n-D: '<S494>/Vector'
         *  Product: '<S5>/Product1'
         *  UnitDelay: '<S413>/Unit Delay'
         */
        VeDTMC_dM_Lv2LashCntrlArb_LD = look2_iflf_binlca_16a
            (VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned,
             VeDTMI_n_Lv2TransOutSpd_Arb, ((const float32 *)
              &(KxDTMR_dM_ZeroPedalLash_LD_PstFil[0])), ((const float32 *)
              &(KyDTMR_dM_ZeroPedalLash_LD_PstFil[0])), ((const float32 *)
              &(KtDTMR_dM_ZeroPedalLash_LD_PstFil[0])), DTMR_ac_ConstP.pooled8,
             9U);
    }
    else
    {
        if (KeDTMR_b_NegPosLashEnabled)
        {
            /* Switch: '<S425>/Switch6' incorporates:
             *  Switch: '<S425>/Switch5'
             */
            if (VeDTMC_b_Lv1NegPosLashCntrl_PstFil)
            {
                /* Switch: '<S425>/Switch4' incorporates:
                 *  Lookup_n-D: '<S490>/Vector'
                 *  Product: '<S425>/Product3'
                 *  Product: '<S5>/Product1'
                 *  Switch: '<S425>/Switch6'
                 *  UnitDelay: '<S413>/Unit Delay'
                 */
                VeDTMC_dM_Lv2LashCntrlArb_LU = look2_iflf_binlca_16a
                    (VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned,
                     VeDTMI_n_Lv2TransOutSpd_Arb, ((const float32 *)
                      &(KxDTMR_dM_InNegLash_LU_PstFil[0])), ((const float32 *)
                      &(KyDTMR_dM_InNegLash_LU_PstFil[0])), ((const float32 *)
                      &(KtDTMR_dM_InNegLash_LU_PstFil[0])),
                     DTMR_ac_ConstP.pooled9, 9U) *
                    rtb_VeDTMC_k_Lv2PosNegFactor_Arb;
            }

            /* End of Switch: '<S425>/Switch6' */
        }

        /* Switch: '<S425>/Switch1' incorporates:
         *  Constant: '<S484>/Calib'
         */
        if (KeDTMR_b_NegPosLashEnabled)
        {
            /* Switch: '<S425>/Switch3' */
            if (VeDTMC_b_Lv1NegPosLashCntrl_PstFil)
            {
                /* Switch: '<S425>/Switch2' incorporates:
                 *  Lookup_n-D: '<S491>/Vector'
                 *  Product: '<S425>/Product6'
                 *  Product: '<S5>/Product1'
                 *  Switch: '<S425>/Switch3'
                 *  UnitDelay: '<S413>/Unit Delay'
                 */
                VeDTMC_dM_Lv2LashCntrlArb_LD = look2_iflf_binlca_16a
                    (VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned,
                     VeDTMI_n_Lv2TransOutSpd_Arb, ((const float32 *)
                      &(KxDTMR_dM_InPosLash_LD_PstFil[0])), ((const float32 *)
                      &(KyDTMR_dM_InPosLash_LD_PstFil[0])), ((const float32 *)
                      &(KtDTMR_dM_InPosLash_LD_PstFil[0])),
                     DTMR_ac_ConstP.pooled9, 9U) *
                    rtb_VeDTMC_k_Lv2PosNegFactor_Arb;
            }

            /* End of Switch: '<S425>/Switch3' */
        }

        /* End of Switch: '<S425>/Switch1' */
    }

    /* End of Switch: '<S425>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S413>/LV2_GradientLimiter' */
    /* Sum: '<S423>/Sum2' incorporates:
     *  UnitDelay: '<S423>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
        VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt_Signed -
        DTMR_ac_DW.VeDTMC_M_Lv2_DrvrDmndMtrTrq_GRD_prev;

    /* Outputs for Atomic SubSystem: '<S423>/Limiter' */
    /* Switch: '<S426>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S426>/Comparison2'
     */
    if (VeDTMC_dM_Lv2LashCntrlArb_LU < rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB)
    {
        /* Switch: '<S124>/Switch1' */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMC_dM_Lv2LashCntrlArb_LU;
    }

    /* End of Switch: '<S426>/LimiterSwitch' */

    /* Switch: '<S426>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S426>/Comparison1'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB > VeDTMC_dM_Lv2LashCntrlArb_LD)
    {
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B =
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B = VeDTMC_dM_Lv2LashCntrlArb_LD;
    }

    /* End of Switch: '<S426>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S423>/Limiter' */

    /* Sum: '<S423>/Sum3' incorporates:
     *  UnitDelay: '<S423>/UnitDelay'
     */
    DTMR_ac_DW.VeDTMC_M_Lv2_DrvrDmndMtrTrq_GRD_prev +=
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2B;

    /* End of Outputs for SubSystem: '<S413>/LV2_GradientLimiter' */

    /* Switch: '<S413>/Switch2' incorporates:
     *  Constant: '<S419>/Calib'
     */
    if (KeDTMR_b_EnbLv2LashCntrl)
    {
        /* Switch: '<S413>/Switch2' incorporates:
         *  UnitDelay: '<S423>/UnitDelay'
         */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned =
            DTMR_ac_DW.VeDTMC_M_Lv2_DrvrDmndMtrTrq_GRD_prev;
    }
    else
    {
        /* Switch: '<S413>/Switch2' */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned =
            VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt_Signed;
    }

    /* End of Switch: '<S413>/Switch2' */

    /* Switch: '<S413>/Switch1' incorporates:
     *  UnitDelay: '<S496>/UnitDelay'
     */
    if (DTMR_ac_DW.UnitDelay_DSTATE_fb)
    {
        /* Switch: '<S413>/Switch1' incorporates:
         *  Gain: '<S413>/Gain8'
         */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl =
            -VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned;
    }
    else
    {
        /* Switch: '<S413>/Switch1' */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl =
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_AfLashSigned;
    }

    /* End of Switch: '<S413>/Switch1' */

    /* MinMax: '<S414>/Max1' */
    VeDTMC_M_Lv2_DrvrDmndMtrTrq_Max = fmaxf
        (VeDTMC_M_Lv2_DrvrDmndMtrTrqLowpath_Max, VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl);

    /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter5' */
    /* Switch: '<S506>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S506>/Comparison3'
     */
    if (VeDTMC_M_OL_Max_SUM < VeDTMC_M_Lv2_DrvrDmndMtrTrq_Max)
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_OL_Max_SUM;
    }
    else
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_Lv2_DrvrDmndMtrTrq_Max;
    }

    /* End of Switch: '<S506>/LimiterSwitch' */

    /* Switch: '<S506>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S506>/Comparison1'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb > VeDTMC_M_OL_Min_SUM)
    {
        /* Switch: '<S506>/LimiterSwitch1' */
        VeDTMC_M_Lv2TotalDrvTrqReq_AxlMax = VeDTMC_M_DTRcmnd_MinLim_RawArb;
    }
    else
    {
        /* Switch: '<S506>/LimiterSwitch1' */
        VeDTMC_M_Lv2TotalDrvTrqReq_AxlMax = VeDTMC_M_OL_Min_SUM;
    }

    /* End of Switch: '<S506>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter5' */

    /* Sum: '<S414>/Sum11' */
#if Rte_SysCon_Variant_DTMR_FUNC_1 || Rte_SysCon_Variant_DTMR_FUNC_6

    /* Switch: '<S504>/LimiterSwitch1' incorporates:
     *  UnitDelay: '<S113>/UnitDelay'
     */
    VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMI_M_Lv2RegenBrkFrontOffsetRequest_Arb
        + VeDTMI_M_Lv2RegenBrkRearOffsetRequest_Arb;

#endif

    /* End of Sum: '<S414>/Sum11' */

    /* SignalConversion generated from: '<S414>/Variant Source' */
#if Rte_SysCon_Variant_DTMR_FUNC_1

    /* Switch: '<S124>/Switch1' */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMC_M_DTRcmnd_MinLim_RawArb;

#endif

    /* End of SignalConversion generated from: '<S414>/Variant Source' */

    /* SignalConversion generated from: '<S414>/Variant Source' */
#if Rte_SysCon_Variant_DTMR_FUNC_6

    /* Switch: '<S124>/Switch1' */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMC_M_DTRcmnd_MinLim_RawArb;

#elif !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_6

    /* Switch: '<S124>/Switch1' incorporates:
     *  SignalConversion generated from: '<S414>/Variant Source'
     */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMI_M_Lv2RgnBrkAxlTrqReq;

#endif

    /* End of SignalConversion generated from: '<S414>/Variant Source' */

    /* Abs: '<S414>/Abs' */
    VeDTMC_M_RgnMtrTrqReq = fabsf(rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB);

    /* Sum: '<S414>/Sum16' */
    VeDTMC_M_Lv2_DrvrDmndMtrTrq_ArbMax = VeDTMC_M_Lv2TotalDrvTrqReq_AxlMax -
        VeDTMC_M_RgnMtrTrqReq;

    /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter3' */
    /* Switch: '<S504>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S504>/Comparison3'
     */
    if (rtb_VariantMerge_For_Variant_Source_Va_5 <
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_ArbMax)
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb =
            rtb_VariantMerge_For_Variant_Source_Va_5;
    }
    else
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_Lv2_DrvrDmndMtrTrq_ArbMax;
    }

    /* End of Switch: '<S504>/LimiterSwitch' */

    /* Switch: '<S504>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S504>/Comparison1'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb <=
            rtb_VariantMerge_For_Variant_Source_Va_6)
    {
        VeDTMC_M_DTRcmnd_MinLim_RawArb =
            rtb_VariantMerge_For_Variant_Source_Va_6;
    }

    /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter3' */

    /* Product: '<S414>/Divide3' incorporates:
     *  Constant: '<S417>/Calib'
     */
    VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMax = VeDTMC_M_DTRcmnd_MinLim_RawArb /
        KeDTMR_k_P4BEV_FDR;

    /* Switch: '<S414>/Switch3' incorporates:
     *  Constant: '<S500>/Calib'
     *  Inport: '<Root>/VeSCCR_b_PerfAWDFlag'
     *  RelationalOperator: '<S503>/Comparison3'
     *  Switch: '<S503>/LimiterSwitch'
     */
    if (KeDTMR_b_Enbl_UseRepartitionTrqSum)
    {
        (void)Rte_Read_VeSCCR_b_PerfAWDFlag_Value(&rtb_Compare_ls);

        /* Switch: '<S414>/Switch2' incorporates:
         *  Inport: '<Root>/VeSCCR_b_PerfAWDFlag'
         *  Inport: '<Root>/VeVTVR_M_OptToRear'
         */
        if (rtb_Compare_ls)
        {
            /* Switch: '<S414>/Switch1' incorporates:
             *  Inport: '<Root>/VeSCCR_r_RipAWD'
             *  Inport: '<Root>/VeSCCR_r_RipRegen'
             *  UnitDelay: '<S496>/UnitDelay'
             */
            if (DTMR_ac_DW.UnitDelay_DSTATE_fb)
            {
                (void)Rte_Read_VeSCCR_r_RipRegen_Value(&rtb_LimiterSwitch1_j);

                /* Switch: '<S414>/Switch2' incorporates:
                 *  Inport: '<Root>/VeSCCR_r_RipRegen'
                 *  Product: '<S414>/Product2'
                 *  Switch: '<S414>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = rtb_LimiterSwitch1_j *
                    VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl;
            }
            else
            {
                (void)Rte_Read_VeSCCR_r_RipAWD_Value(&rtb_LimiterSwitch1_j);

                /* Switch: '<S414>/Switch2' incorporates:
                 *  Inport: '<Root>/VeSCCR_r_RipAWD'
                 *  Product: '<S414>/Product1'
                 *  Switch: '<S414>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = rtb_LimiterSwitch1_j *
                    VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl;
            }

            /* End of Switch: '<S414>/Switch1' */
        }
        else
        {
            (void)Rte_Read_VeVTVR_M_OptToRear_Value(&rtb_LimiterSwitch1_j);

            /* Sum: '<S414>/Sum8' incorporates:
             *  Inport: '<Root>/VeVTVR_M_OptToRear'
             */
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 + rtb_LimiterSwitch1_j;

            /* Switch: '<S414>/Switch7' incorporates:
             *  Abs: '<S414>/Abs1'
             *  Constant: '<S499>/Calib'
             *  Constant: '<S510>/ConstantValue'
             *  Constant: '<S510>/ConstantValue1'
             *  Constant: '<S510>/ConstantValue2'
             *  Constant: '<S510>/ConstantValue3'
             *  Logic: '<S510>/AND'
             *  RelationalOperator: '<S414>/Comparison3'
             *  RelationalOperator: '<S510>/GreaterThanorEqual'
             *  RelationalOperator: '<S510>/GreaterThanorEqual1'
             *  RelationalOperator: '<S510>/NotEqual'
             *  RelationalOperator: '<S510>/NotEqual1'
             *  Switch: '<S510>/Switch1'
             *  Switch: '<S510>/Switch2'
             *  Switch: '<S510>/Switch3'
             */
            if (fabsf(rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB) <
                    KeDTMR_M_Lv2VTVROptToSUM)
            {
                /* Switch: '<S414>/Switch7' incorporates:
                 *  Constant: '<S501>/Calib'
                 */
                rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                    KeDTMR_r_RIPwhenZeroTrqCmnd;
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S414>/ProtectedDivision' */
                if ((rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 != 0.0F) &&
                        (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB != 0.0F))
                {
                    /* Switch: '<S414>/Switch7' incorporates:
                     *  Product: '<S510>/Division'
                     *  Switch: '<S510>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
                        rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 /
                        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;
                }
                else if (rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 > 0.0F)
                {
                    /* Switch: '<S510>/Switch2' incorporates:
                     *  Constant: '<S510>/MAXFLOAT'
                     *  Switch: '<S414>/Switch7'
                     *  Switch: '<S510>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = 3.402823466E+38F;
                }
                else if (rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 < 0.0F)
                {
                    /* Switch: '<S510>/Switch3' incorporates:
                     *  Constant: '<S510>/MINFLOAT'
                     *  Switch: '<S414>/Switch7'
                     *  Switch: '<S510>/Switch1'
                     *  Switch: '<S510>/Switch2'
                     */
                    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = -3.402823466E+38F;
                }
                else
                {
                    /* Switch: '<S414>/Switch7' incorporates:
                     *  Constant: '<S510>/ConstantValue4'
                     *  Switch: '<S510>/Switch1'
                     *  Switch: '<S510>/Switch2'
                     *  Switch: '<S510>/Switch3'
                     */
                    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = 0.0F;
                }

                /* End of Outputs for SubSystem: '<S414>/ProtectedDivision' */
            }

            /* End of Switch: '<S414>/Switch7' */

            /* Switch: '<S414>/Switch2' incorporates:
             *  Product: '<S414>/Product7'
             */
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB *=
                VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl;
        }

        /* End of Switch: '<S414>/Switch2' */

        /* Sum: '<S414>/Sum5' */
        rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 =
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl -
            rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;

        /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter1' */
        /* Switch: '<S502>/LimiterSwitch' incorporates:
         *  RelationalOperator: '<S502>/Comparison3'
         */
        if (VeDTMC_M_RearOLMax_Arb < rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1)
        {
            /* Switch: '<S508>/LimiterSwitch' */
            rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 = VeDTMC_M_RearOLMax_Arb;
        }

        /* End of Switch: '<S502>/LimiterSwitch' */

        /* Switch: '<S502>/LimiterSwitch1' incorporates:
         *  RelationalOperator: '<S502>/Comparison1'
         */
        if (rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 > VeDTMC_M_RearOLMin_Arb)
        {
            /* Switch: '<S502>/LimiterSwitch1' */
            rtb_LimiterSwitch1_j = rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1;
        }
        else
        {
            /* Switch: '<S502>/LimiterSwitch1' */
            rtb_LimiterSwitch1_j = VeDTMC_M_RearOLMin_Arb;
        }

        /* End of Switch: '<S502>/LimiterSwitch1' */
        /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter1' */

        /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter8' */
        /* Switch: '<S508>/LimiterSwitch' incorporates:
         *  RelationalOperator: '<S508>/Comparison3'
         */
        if (VeDTMC_M_FrntOLMax_Arb < rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB)
        {
            /* Switch: '<S508>/LimiterSwitch' */
            rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 = VeDTMC_M_FrntOLMax_Arb;
        }
        else
        {
            /* Switch: '<S508>/LimiterSwitch' */
            rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 =
                rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;
        }

        /* End of Switch: '<S508>/LimiterSwitch' */

        /* Switch: '<S508>/LimiterSwitch1' incorporates:
         *  RelationalOperator: '<S508>/Comparison1'
         */
        if (rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 <= VeDTMC_M_FrntOLMin_Arb)
        {
            rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 = VeDTMC_M_FrntOLMin_Arb;
        }

        /* End of Switch: '<S508>/LimiterSwitch1' */
        /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter8' */

        /* Switch: '<S414>/Switch3' incorporates:
         *  Sum: '<S414>/Sum10'
         */
        VeDTMC_M_Lv2TotalDrvTrqReq_AxlArb =
            rtb_TmpSignalConversionAtVeVTVR_M_Lv2Lv1 + rtb_LimiterSwitch1_j;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter2' */
        if (VeDTMC_M_OL_Max_SUM < VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl)
        {
            /* Switch: '<S503>/LimiterSwitch' */
            VeDTMC_M_Lv2TotalDrvTrqReq_AxlArb = VeDTMC_M_OL_Max_SUM;
        }
        else
        {
            /* Switch: '<S503>/LimiterSwitch' */
            VeDTMC_M_Lv2TotalDrvTrqReq_AxlArb = VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl;
        }

        /* Switch: '<S503>/LimiterSwitch1' incorporates:
         *  RelationalOperator: '<S503>/Comparison1'
         */
        if (VeDTMC_M_Lv2TotalDrvTrqReq_AxlArb <= VeDTMC_M_OL_Min_SUM)
        {
            /* Switch: '<S414>/Switch3' */
            VeDTMC_M_Lv2TotalDrvTrqReq_AxlArb = VeDTMC_M_OL_Min_SUM;
        }

        /* End of Switch: '<S503>/LimiterSwitch1' */
        /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter2' */
    }

    /* End of Switch: '<S414>/Switch3' */

    /* Sum: '<S414>/Sum1' */
    VeDTMC_M_Lv2_DrvrDmndMtrTrq_Arb = VeDTMC_M_Lv2TotalDrvTrqReq_AxlArb -
        VeDTMC_M_RgnMtrTrqReq;

    /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter9' */
    /* Switch: '<S509>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S509>/Comparison3'
     */
    if (rtb_VariantMerge_For_Variant_Source_Va_5 <
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_Arb)
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb =
            rtb_VariantMerge_For_Variant_Source_Va_5;
    }
    else
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_Lv2_DrvrDmndMtrTrq_Arb;
    }

    /* End of Switch: '<S509>/LimiterSwitch' */

    /* Switch: '<S509>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S509>/Comparison1'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb <=
            rtb_VariantMerge_For_Variant_Source_Va_6)
    {
        /* Switch: '<S504>/LimiterSwitch1' */
        VeDTMC_M_DTRcmnd_MinLim_RawArb =
            rtb_VariantMerge_For_Variant_Source_Va_6;
    }

    /* End of Switch: '<S509>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter9' */

    /* Product: '<S414>/Divide1' incorporates:
     *  Constant: '<S417>/Calib'
     */
    VeDTMC_M_Lv2_DrvrDmndMtrTrq_Final = VeDTMC_M_DTRcmnd_MinLim_RawArb /
        KeDTMR_k_P4BEV_FDR;

    /* Switch: '<S16>/Switch1' incorporates:
     *  Constant: '<S387>/Calib'
     */
    if (KeDTMR_b_EnblMinMaxLv2DrvrTrq)
    {
        /* Switch: '<S16>/Switch1' */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMaxArb =
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMax;
    }
    else
    {
        /* Switch: '<S16>/Switch1' */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMaxArb =
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_Final;
    }

    /* End of Switch: '<S16>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S16>/CounterResetEnabled' */
    /* Switch: '<S381>/Switch2' incorporates:
     *  Constant: '<S381>/ConstantValue2'
     *  Logic: '<S16>/Logical5'
     *  Switch: '<S381>/Switch'
     *  UnitDelay: '<S381>/UnitDelay'
     */
    if (!DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1])
    {
        DTMR_ac_DW.UnitDelay_DSTATE_fr = 0U;
    }
    else
    {
        /* UnitDelay: '<S381>/UnitDelay' incorporates:
         *  Constant: '<S381>/ConstantValue1'
         *  Sum: '<S381>/Subtraction'
         *  Switch: '<S381>/Switch2'
         */
        DTMR_ac_DW.UnitDelay_DSTATE_fr = (uint16)(((uint32)
            DTMR_ac_DW.UnitDelay_DSTATE_fr) + 1U);
    }

    /* End of Switch: '<S381>/Switch2' */
    /* End of Outputs for SubSystem: '<S16>/CounterResetEnabled' */

    /* UnitDelay: '<S126>/Unit Delay' incorporates:
     *  Constant: '<S382>/Calib'
     *  RelationalOperator: '<S16>/Comparison5'
     *  UnitDelay: '<S381>/UnitDelay'
     */
    rtb_UnitDelay_fg = (DTMR_ac_DW.UnitDelay_DSTATE_fr >
                        KeDTMR_Cnt_VehInParkZeroTrqThresh);

    /* Lookup_n-D: '<S390>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_DTRcmnd_MaxLim = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_DTRcmnd_MaxLim[0])), ((const float32 *)
          &(KtDTMR_M_DTRcmnd_MaxLim[0])), 15U);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeATRR_M_OutputTorqReqPot' */
    (void)Rte_Read_VeATRR_M_OutputTorqReqPot_Value(&tmpRead_1q);

    /* Inport: '<Root>/VeATRR_M_OutputTorqReqImmedHTDR' */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmedHTDR_Value(&tmpRead_10);

    /* Inport: '<Root>/VeRGNR_M_EstRegenBrkAxTorq' */
    (void)Rte_Read_VeRGNR_M_EstRegenBrkAxTorq_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Switch: '<S16>/Switch8' incorporates:
     *  DataTypeConversion: '<S16>/DataTypeConversion1'
     *  Lookup_n-D: '<S392>/Vector'
     *  Switch: '<S16>/Switch2'
     *  UnitDelay: '<S381>/UnitDelay'
     */
    if (rtb_UnitDelay_fg)
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = look1_iflf_binlca_16a
            ((float32)DTMR_ac_DW.UnitDelay_DSTATE_fr, ((const float32 *)
              &(KxDTMR_M_MtrMaxLim_ParkNeutral[0])), ((const float32 *)
              &(KtDTMR_M_MtrMaxLim_ParkNeutral[0])), 15U);
    }
    else if (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd)
    {
        /* Switch: '<S16>/Switch2' incorporates:
         *  Constant: '<S383>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_M_DTRMaxLim_VehSpdFA;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMC_M_DTRcmnd_MaxLim;
    }

    /* End of Switch: '<S16>/Switch8' */

    /* Switch: '<S504>/LimiterSwitch1' incorporates:
     *  Sum: '<S16>/Sum2'
     *  UnitDelay: '<S113>/UnitDelay'
     */
    VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMaxArb +
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;

    /* Switch: '<S396>/Switch' incorporates:
     *  Constant: '<S16>/ConstantValue2'
     *  RelationalOperator: '<S396>/Comparison'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb > 0.0F)
    {
        /* Switch: '<S396>/Switch' */
        VeDTMC_M_DTRcmnd_MaxLim_RawArb = VeDTMC_M_DTRcmnd_MinLim_RawArb;
    }
    else
    {
        /* Switch: '<S396>/Switch' */
        VeDTMC_M_DTRcmnd_MaxLim_RawArb = 0.0F;
    }

    /* End of Switch: '<S396>/Switch' */

    /* Outputs for Atomic SubSystem: '<S16>/LV2_Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S394>/Switch1' incorporates:
     *  Constant: '<S388>/Calib'
     *  Product: '<S394>/Multiplication'
     *  Sum: '<S394>/Subtraction'
     *  Sum: '<S394>/Summation'
     *  UnitDelay: '<S394>/UnitDelay'
     */
    VeDTMC_M_Lv2_DTRcmnd_MaxLim_Fltr = ((VeDTMC_M_DTRcmnd_MaxLim_RawArb -
        VeDTMC_M_Lv2_DTRcmnd_MaxLim_Fltr) * KeDTMR_k_TmaxFltrCoeff) +
        VeDTMC_M_Lv2_DTRcmnd_MaxLim_Fltr;

    /* End of Outputs for SubSystem: '<S16>/LV2_Digital_Lowpass_Reset_Enabled' */

    /* Switch: '<S16>/Switch3' */
    if (VeDTMI_b_LimpHomeActv)
    {
        /* Switch: '<S16>/Switch3' incorporates:
         *  Constant: '<S385>/Calib'
         */
        VeDTMC_M_Lv2_DTRcmnd_MaxLim = KeDTMR_M_TmaxLim_LHom;
    }
    else
    {
        /* Switch: '<S16>/Switch3' */
        VeDTMC_M_Lv2_DTRcmnd_MaxLim = VeDTMC_M_Lv2_DTRcmnd_MaxLim_Fltr;
    }

    /* End of Switch: '<S16>/Switch3' */

    /* Sum: '<S11>/Sum6' incorporates:
     *  Constant: '<S65>/Calib'
     */
    VeDTMC_M_MaxLim_LTsh_LSP = VeDTMC_M_Lv2_DTRcmnd_MaxLim -
        KeDTMR_M_MaxLim_LTsh_LSP;

    /* Sum: '<S11>/Sum' incorporates:
     *  Constant: '<S66>/Calib'
     */
    VeDTMC_M_MaxLim_LTsh_RSP = VeDTMC_M_Lv2_DTRcmnd_MaxLim +
        KeDTMR_M_MaxLim_LTsh_RSP;

    /* Switch: '<S18>/Switch3' incorporates:
     *  Constant: '<S410>/Calib'
     */
    if (KeDTMR_b_UseHTDROutputTorqReq)
    {
        tmpRead_1q = tmpRead_10;
    }

    /* End of Switch: '<S18>/Switch3' */

    /* Switch: '<S18>/Switch4' incorporates:
     *  Constant: '<S409>/Calib'
     */
    if (KeDTMR_b_UseCAN_RegenTorqReq)
    {
        tmpRead_4 = VeDTMI_M_Lv2RgnBrkAxlTrqReq;
    }

    /* End of Switch: '<S18>/Switch4' */

    /* Sum: '<S18>/Sum' */
    VeDTMC_M_Lv1OutTorqReqNetRaw = tmpRead_1q - tmpRead_4;

    /* Switch: '<S18>/Switch2' incorporates:
     *  Constant: '<S408>/Calib'
     *  SignalConversion generated from: '<S5>/Lv2_VehInRev'
     *  UnitDelay: '<S496>/UnitDelay'
     */
    if (KeDTMR_b_EnblLv2Garage)
    {
        rtb_AND_ny = DTMR_ac_DW.UnitDelay_DSTATE_fb;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/DTMI' */
        rtb_AND_ny = DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0];

        /* End of Outputs for SubSystem: '<S1>/DTMI' */
    }

    /* End of Switch: '<S18>/Switch2' */

    /* Switch: '<S18>/Switch1' */
    if (rtb_AND_ny)
    {
        /* Switch: '<S18>/Switch1' incorporates:
         *  Gain: '<S18>/Gain'
         */
        VeDTMC_M_Lv1NetDriverTrqReqst_Axl = -VeDTMC_M_Lv1OutTorqReqNetRaw;
    }
    else
    {
        /* Switch: '<S18>/Switch1' */
        VeDTMC_M_Lv1NetDriverTrqReqst_Axl = VeDTMC_M_Lv1OutTorqReqNetRaw;
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S18>/MinMaxLimiter1' */
    /* Switch: '<S412>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S412>/Comparison2'
     */
    if (rtb_VariantMerge_For_Variant_Source_Va_5 <
            VeDTMC_M_Lv1NetDriverTrqReqst_Axl)
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb =
            rtb_VariantMerge_For_Variant_Source_Va_5;
    }
    else
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_Lv1NetDriverTrqReqst_Axl;
    }

    /* End of Switch: '<S412>/LimiterSwitch' */

    /* Switch: '<S412>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S412>/Comparison1'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb <=
            rtb_VariantMerge_For_Variant_Source_Va_6)
    {
        /* Switch: '<S504>/LimiterSwitch1' */
        VeDTMC_M_DTRcmnd_MinLim_RawArb =
            rtb_VariantMerge_For_Variant_Source_Va_6;
    }

    /* End of Switch: '<S412>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S18>/MinMaxLimiter1' */

    /* Product: '<S18>/Divide1' incorporates:
     *  Constant: '<S411>/Calib'
     */
    VeDTMC_M_Lv1NetDriverTrqReqst_Arb = VeDTMC_M_DTRcmnd_MinLim_RawArb /
        KeDTMR_k_P4BEV_FDR;

    /* Outputs for Atomic SubSystem: '<S11>/LV2_Hysteresis' */
    /* Switch: '<S85>/Switch1' incorporates:
     *  Constant: '<S85>/ConstantValue'
     *  RelationalOperator: '<S85>/Comparison1'
     *  RelationalOperator: '<S85>/Comparison2'
     *  UnitDelay: '<S85>/UnitDelay'
     */
    if (VeDTMC_M_Lv1NetDriverTrqReqst_Arb > VeDTMC_M_MaxLim_LTsh_RSP)
    {
        DTMR_ac_DW.VeDTMC_b_DTRMaxMntrFailing_prev = true;
    }
    else
    {
        DTMR_ac_DW.VeDTMC_b_DTRMaxMntrFailing_prev =
            ((VeDTMC_M_Lv1NetDriverTrqReqst_Arb >= VeDTMC_M_MaxLim_LTsh_LSP) &&
             (DTMR_ac_DW.VeDTMC_b_DTRMaxMntrFailing_prev));
    }

    /* End of Switch: '<S85>/Switch1' */
    /* End of Outputs for SubSystem: '<S11>/LV2_Hysteresis' */

    /* Logic: '<S11>/Logical17' incorporates:
     *  Logic: '<S11>/Logical16'
     */
    VeDTMC_b_Lv2Autocruise_RA = ((!rtb_VeDTMC_b_DriveMdInNormalMd) ||
        rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1);

    /* Logic: '<S11>/Logical35' incorporates:
     *  Logic: '<S12>/Logical35'
     */
    rtb_Compare_ls = !VeDTMI_b_Lv2RgnBrkFltd;

    /* Logic: '<S11>/Logical36' incorporates:
     *  Constant: '<S70>/Calib'
     *  Logic: '<S11>/Logical35'
     */
    VeDTMC_b_Lv2RgnFlt_RA = (rtb_Compare_ls ||
        (KeDTMR_b_DoNotAllowRgnBrkFault_RA));

    /* Logic: '<S11>/Logical34' */
    VeDTMC_b_Lv2EnblPdlMntr_Arb = ((VeDTMC_b_Lv2Autocruise_RA) &&
        (VeDTMC_b_Lv2RgnFlt_RA));

    /* Logic: '<S11>/Logical18' incorporates:
     *  Constant: '<S72>/Calib'
     *  UnitDelay: '<S85>/UnitDelay'
     */
    VeDTMC_b_MaxFailing = (((DTMR_ac_DW.VeDTMC_b_DTRMaxMntrFailing_prev) &&
                            (KeDTMR_b_EnblDTRMntrMaxLim)) &&
                           (VeDTMC_b_Lv2EnblPdlMntr_Arb));

    /* Outputs for Atomic SubSystem: '<S11>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* Logic: '<S11>/Logical19' incorporates:
     *  Logic: '<S102>/OR1'
     */
    VeDTMC_b_NoMaxLimFail = !VeDTMC_b_MaxFailing;

    /* End of Outputs for SubSystem: '<S11>/LV2_Turn_Off_Delay_Sample_Modified' */

    /* Logic: '<S11>/Logical46' */
    VeDTMC_b_RstMntr_NormalMd = ((VeDTMC_b_MntrNotInRdPrfmMd) &&
        (VeDTMC_b_NoMaxLimFail));

    /* Outputs for Atomic SubSystem: '<S11>/LV2_Turn_Off_Delay_Sample_Modified' */
    /* Switch: '<S94>/Switch' incorporates:
     *  Logic: '<S102>/AND'
     *  MinMax: '<S94>/Minimum1'
     *  UnitDelay: '<S102>/UnitDelay'
     *  UnitDelay: '<S94>/UnitDelay1'
     */
    if ((VeDTMC_b_NoMaxLimFail) && (DTMR_ac_DW.VeDTMC_b_MaxLimFailingDlyd_prev))
    {
        /* MinMax: '<S94>/Minimum1' incorporates:
         *  Constant: '<S57>/Calib'
         *  UnitDelay: '<S94>/UnitDelay1'
         */
        DTMR_ac_DW.VeDTMC_Cnt_MaxLimFailingDlyd_prev =
            KeDTMR_Cnt_RdPerfmTrqChkCntr;
    }
    else
    {
        if (((sint32)DTMR_ac_DW.VeDTMC_Cnt_MaxLimFailingDlyd_prev) <= 1)
        {
            /* MinMax: '<S94>/Minimum1' */
            DTMR_ac_DW.VeDTMC_Cnt_MaxLimFailingDlyd_prev = 1U;
        }

        /* MinMax: '<S94>/Minimum1' incorporates:
         *  Constant: '<S94>/ConstantValue'
         *  Sum: '<S94>/Summation'
         *  UnitDelay: '<S94>/UnitDelay1'
         */
        DTMR_ac_DW.VeDTMC_Cnt_MaxLimFailingDlyd_prev = (uint8)((sint32)(((sint32)
            DTMR_ac_DW.VeDTMC_Cnt_MaxLimFailingDlyd_prev) - 1));
    }

    /* End of Switch: '<S94>/Switch' */

    /* Logic: '<S94>/AND' incorporates:
     *  Constant: '<S94>/ConstantValue2'
     *  RelationalOperator: '<S94>/Comparison1'
     *  UnitDelay: '<S94>/UnitDelay1'
     */
    rtb_VeDTMR_b_Lv2BrkNOTApplied = ((VeDTMC_b_MaxFailing) || (((sint32)
        DTMR_ac_DW.VeDTMC_Cnt_MaxLimFailingDlyd_prev) > 0));

    /* Update for UnitDelay: '<S102>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_MaxLimFailingDlyd_prev = VeDTMC_b_MaxFailing;

    /* End of Outputs for SubSystem: '<S11>/LV2_Turn_Off_Delay_Sample_Modified' */

    /* Logic: '<S11>/Logical21' incorporates:
     *  Constant: '<S81>/Calib'
     */
    VeDTMC_b_RstMntrRdPrfmMd = (((VeDTMC_b_RdPerfmMdForCntCntrl) &&
        (KeDTMR_b_UseRdPerfmRst)) && rtb_VeDTMR_b_Lv2BrkNOTApplied);

    /* Logic: '<S11>/Logical4' */
    VeDTMC_b_RstCntrForMaxLimFail = (((VeDTMC_b_RstMtrTrqCmndChk) ||
        (VeDTMC_b_RstMntr_NormalMd)) || (VeDTMC_b_RstMntrRdPrfmMd));

    /* UnitDelay: '<S96>/UnitDelay3' */
    VeDTMC_b_ResumeMcntrDlyd = VeDTMC_b_ResumeMCntr;

    /* Logic: '<S107>/OR1' incorporates:
     *  Logic: '<S105>/AND1'
     *  Logic: '<S105>/OR2'
     *  Logic: '<S107>/NOT'
     *  Logic: '<S107>/OR'
     *  UnitDelay: '<S105>/UnitDelay'
     */
    VeDTMC_b_PCntrActv = (((VeDTMC_b_RdPerfmMdForCntCntrl) &&
                           (!DTMR_ac_DW.VeDTMC_b_LtchPCntr_EdgRising_prev)) ||
                          ((!VeDTMC_b_ResumeMcntrDlyd) && (VeDTMC_b_PCntrActv)));

    /* RelationalOperator: '<S96>/MaxLimReached' incorporates:
     *  Constant: '<S96>/ConstantValue19'
     */
    VeDTMC_b_MCntrMaxLimReached = (((sint32)VeDTMC_Cnt_FinalFailCnts) >= 255);

    /* Switch: '<S96>/Switch17' */
    if (VeDTMC_b_MCntrMaxLimReached)
    {
        /* Switch: '<S96>/Switch17' incorporates:
         *  Constant: '<S96>/ConstantValue20'
         */
        VeDTMC_Cnt_PrevValArb = 0U;
    }
    else
    {
        /* Switch: '<S96>/Switch17' */
        VeDTMC_Cnt_PrevValArb = VeDTMC_Cnt_FinalFailCnts;
    }

    /* End of Switch: '<S96>/Switch17' */

    /* Switch: '<S96>/Switch20' incorporates:
     *  Logic: '<S106>/AND1'
     *  Logic: '<S106>/OR2'
     *  UnitDelay: '<S106>/UnitDelay'
     */
    if ((VeDTMC_b_ResumeMcntrDlyd) && (!DTMR_ac_DW.VeDTMC_b_ResumeEdgRising_prev))
    {
        /* Switch: '<S96>/Switch20' */
        VeDTMC_Cnt_PCntrIncVal = VeDTMC_Cnt_PCntrVal;
    }
    else
    {
        /* Switch: '<S96>/Switch20' incorporates:
         *  Constant: '<S96>/ConstantValue21'
         */
        VeDTMC_Cnt_PCntrIncVal = 0U;
    }

    /* End of Switch: '<S96>/Switch20' */

    /* Sum: '<S96>/Main_Counter' incorporates:
     *  Constant: '<S96>/ConstantValue4'
     */
    VeDTMC_Cnt_MCntr_FailCnts = (uint8)(((uint32)((uint8)(((uint32)
        VeDTMC_Cnt_PrevValArb) + ((uint32)VeDTMC_Cnt_PCntrIncVal)))) + 1U);

    /* Switch: '<S96>/Switch18' */
    if (VeDTMC_b_MCntrMaxLimReached)
    {
        /* Switch: '<S96>/Switch18' */
        VeDTMC_Cnt_FailCntsAftrMaxChk = VeDTMC_Cnt_FinalFailCnts;
    }
    else
    {
        /* Switch: '<S96>/Switch18' */
        VeDTMC_Cnt_FailCntsAftrMaxChk = VeDTMC_Cnt_MCntr_FailCnts;
    }

    /* End of Switch: '<S96>/Switch18' */

    /* Switch: '<S96>/Switch19' */
    if (VeDTMC_b_MaxFailing)
    {
        /* Switch: '<S96>/Switch19' */
        VeDTMC_Cnt_FailCntsArb = VeDTMC_Cnt_FailCntsAftrMaxChk;
    }
    else
    {
        /* Switch: '<S96>/Switch19' */
        VeDTMC_Cnt_FailCntsArb = VeDTMC_Cnt_FinalFailCnts;
    }

    /* End of Switch: '<S96>/Switch19' */

    /* Switch: '<S96>/Switch7' */
    if (VeDTMC_b_PCntrActv)
    {
        /* Switch: '<S96>/Switch7' */
        VeDTMC_Cnt_FailCntsArbAftrPause = VeDTMC_Cnt_FinalFailCnts;
    }
    else
    {
        /* Switch: '<S96>/Switch7' */
        VeDTMC_Cnt_FailCntsArbAftrPause = VeDTMC_Cnt_FailCntsArb;
    }

    /* End of Switch: '<S96>/Switch7' */

    /* Switch: '<S96>/Switch16' */
    if (VeDTMC_b_RstCntrForMaxLimFail)
    {
        /* Switch: '<S96>/Switch16' incorporates:
         *  Constant: '<S96>/ConstantValue18'
         */
        VeDTMC_Cnt_FinalFailCnts = 0U;
    }
    else
    {
        /* Switch: '<S96>/Switch16' */
        VeDTMC_Cnt_FinalFailCnts = VeDTMC_Cnt_FailCntsArbAftrPause;
    }

    /* End of Switch: '<S96>/Switch16' */

    /* RelationalOperator: '<S96>/Enough_counts_to_Fail' incorporates:
     *  Constant: '<S61>/Calib'
     */
    VeDTMC_b_Fail_Thsh_First = (VeDTMC_Cnt_FinalFailCnts >= KeDTMR_Cnt_Tmax_LL);

    /* Switch: '<S11>/Switch4' */
    if (VeDTMI_b_LimpHomeActv)
    {
        /* Switch: '<S11>/Switch4' incorporates:
         *  Constant: '<S60>/Calib'
         */
        VeDTMC_Cnt_TMaxCntrLim_Arb = KeDTMR_Cnt_Tmax_Cntr_Lim_LHom;
    }
    else
    {
        /* Switch: '<S11>/Switch4' incorporates:
         *  Constant: '<S59>/Calib'
         */
        VeDTMC_Cnt_TMaxCntrLim_Arb = KeDTMR_Cnt_Tmax_Cntr_Lim;
    }

    /* End of Switch: '<S11>/Switch4' */

    /* RelationalOperator: '<S96>/Enough_counts_to_Fail1' */
    VeDTMC_b_Fail_Thsh_Second = (VeDTMC_Cnt_FinalFailCnts >=
        VeDTMC_Cnt_TMaxCntrLim_Arb);

    /* Logic: '<S87>/NOT' incorporates:
     *  Logic: '<S88>/NOT'
     */
    rtb_TmpSignalConversionAtVeSCMR_b_Lv2Bra = !VeDTMC_b_RstMtrTrqCmndChk;

    /* Logic: '<S87>/OR1' incorporates:
     *  Logic: '<S87>/NOT'
     *  Logic: '<S87>/OR'
     */
    VeDTMC_b_DTRMntr_MaxLimFail = ((VeDTMC_b_Fail_Thsh_Second) ||
        (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Bra &&
         (VeDTMC_b_DTRMntr_MaxLimFail)));

    /* Logic: '<S11>/Logical6' */
    VeDTMC_b_SecondThsh_NoFail_Max = !VeDTMC_b_DTRMntr_MaxLimFail;

    /* Logic: '<S11>/Logical7' */
    rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1 = ((VeDTMC_b_Fail_Thsh_First) &&
        (VeDTMC_b_SecondThsh_NoFail_Max));

    /* UnitDelay: '<S11>/UnitDelay1' */
    VeDTMC_b_Min_RdPerfmMdForCntCntrl = VeDTMC_b_Lv2ReducedPerfMode_MinLim;

    /* Logic: '<S11>/Logical32' */
    VeDTMC_b_MinMntrNotInRdPrfmMd = !VeDTMC_b_Min_RdPerfmMdForCntCntrl;

    /* MinMax: '<S414>/Min' */
    VeDTMC_M_Lv2_DrvrDmndMtrTrqLowpath_Min = fminf
        (VeDTMC_M_Lv2_DrvrDmndMtrTrq_bfLash,
         VeDTMC_M_Lv2DrvDmndMtrTrqLowPassFilt);

    /* MinMax: '<S414>/Min1' */
    VeDTMC_M_Lv2_DrvrDmndMtrTrq_Min = fminf
        (VeDTMC_M_Lv2_DrvrDmndMtrTrqLowpath_Min, VeDTMC_M_Lv2_DrvrDmndMtrTrq_Axl);

    /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter6' */
    /* Switch: '<S507>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S507>/Comparison3'
     */
    if (VeDTMC_M_OL_Max_SUM < VeDTMC_M_Lv2_DrvrDmndMtrTrq_Min)
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_OL_Max_SUM;
    }
    else
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_Lv2_DrvrDmndMtrTrq_Min;
    }

    /* End of Switch: '<S507>/LimiterSwitch' */

    /* Switch: '<S507>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S507>/Comparison1'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb > VeDTMC_M_OL_Min_SUM)
    {
        /* Switch: '<S507>/LimiterSwitch1' */
        VeDTMC_M_Lv2TotalDrvTrqReq_AxlMin = VeDTMC_M_DTRcmnd_MinLim_RawArb;
    }
    else
    {
        /* Switch: '<S507>/LimiterSwitch1' */
        VeDTMC_M_Lv2TotalDrvTrqReq_AxlMin = VeDTMC_M_OL_Min_SUM;
    }

    /* End of Switch: '<S507>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter6' */

    /* Sum: '<S414>/Sum17' */
    VeDTMC_M_Lv2_DrvrDmndMtrTrq_ArbMin = VeDTMC_M_Lv2TotalDrvTrqReq_AxlMin -
        VeDTMC_M_RgnMtrTrqReq;

    /* Outputs for Atomic SubSystem: '<S414>/MinMaxLimiter4' */
    /* Switch: '<S505>/LimiterSwitch' incorporates:
     *  RelationalOperator: '<S505>/Comparison3'
     */
    if (rtb_VariantMerge_For_Variant_Source_Va_5 <
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_ArbMin)
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb =
            rtb_VariantMerge_For_Variant_Source_Va_5;
    }
    else
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  UnitDelay: '<S113>/UnitDelay'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_Lv2_DrvrDmndMtrTrq_ArbMin;
    }

    /* End of Switch: '<S505>/LimiterSwitch' */

    /* Switch: '<S505>/LimiterSwitch1' incorporates:
     *  RelationalOperator: '<S505>/Comparison1'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb >
            rtb_VariantMerge_For_Variant_Source_Va_6)
    {
        rtb_VariantMerge_For_Variant_Source_Va_6 =
            VeDTMC_M_DTRcmnd_MinLim_RawArb;
    }

    /* End of Switch: '<S505>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S414>/MinMaxLimiter4' */

    /* Product: '<S414>/Divide4' incorporates:
     *  Constant: '<S417>/Calib'
     */
    VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMin =
        rtb_VariantMerge_For_Variant_Source_Va_6 / KeDTMR_k_P4BEV_FDR;

    /* Switch: '<S16>/Switch5' incorporates:
     *  Constant: '<S387>/Calib'
     */
    if (KeDTMR_b_EnblMinMaxLv2DrvrTrq)
    {
        /* Switch: '<S16>/Switch5' */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMinArb =
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMin;
    }
    else
    {
        /* Switch: '<S16>/Switch5' */
        VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMinArb =
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_Final;
    }

    /* End of Switch: '<S16>/Switch5' */

    /* Lookup_n-D: '<S391>/Vector' incorporates:
     *  Switch: '<S646>/Switch1'
     */
    VeDTMC_M_DTRcmnd_MinLim = look1_iflf_binlca_16a
        (VeDTMI_v_Lv2VehSpdFiltd4WhlTrqCalc, ((const float32 *)
          &(KxDTMR_M_DTRcmnd_MinLim[0])), ((const float32 *)
          &(KtDTMR_M_DTRcmnd_MinLim[0])), 15U);

    /* Switch: '<S16>/Switch7' incorporates:
     *  DataTypeConversion: '<S16>/DataTypeConversion1'
     *  Lookup_n-D: '<S393>/Vector'
     *  Switch: '<S16>/Switch6'
     *  UnitDelay: '<S381>/UnitDelay'
     */
    if (rtb_UnitDelay_fg)
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = look1_iflf_binlca_16a
            ((float32)DTMR_ac_DW.UnitDelay_DSTATE_fr, ((const float32 *)
              &(KxDTMR_M_MtrMinLim_ParkNeutral[0])), ((const float32 *)
              &(KtDTMR_M_MtrMinLim_ParkNeutral[0])), 15U);
    }
    else if (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd)
    {
        /* Switch: '<S16>/Switch6' incorporates:
         *  Constant: '<S384>/Calib'
         */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_M_DTRMinLim_VehSpdFA;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = VeDTMC_M_DTRcmnd_MinLim;
    }

    /* End of Switch: '<S16>/Switch7' */

    /* Switch: '<S504>/LimiterSwitch1' incorporates:
     *  Sum: '<S16>/Sum3'
     *  UnitDelay: '<S113>/UnitDelay'
     */
    VeDTMC_M_DTRcmnd_MinLim_RawArb = VeDTMC_M_Lv2_DrvrDmndMtrTrq_FinalMinArb -
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB;

    /* Switch: '<S397>/Switch' incorporates:
     *  Constant: '<S16>/ConstantValue3'
     *  RelationalOperator: '<S397>/Comparison'
     */
    if (VeDTMC_M_DTRcmnd_MinLim_RawArb <= 0.0F)
    {
        /* Switch: '<S504>/LimiterSwitch1' incorporates:
         *  Switch: '<S397>/Switch'
         */
        VeDTMC_M_DTRcmnd_MinLim_RawArb = 0.0F;
    }

    /* End of Switch: '<S397>/Switch' */

    /* Outputs for Atomic SubSystem: '<S16>/LV2_Digital_Lowpass_Reset_Enabled1' */
    /* Switch: '<S395>/Switch1' incorporates:
     *  Constant: '<S389>/Calib'
     *  Product: '<S395>/Multiplication'
     *  Sum: '<S395>/Subtraction'
     *  Sum: '<S395>/Summation'
     *  UnitDelay: '<S395>/UnitDelay'
     */
    VeDTMC_M_Lv2_DTRcmnd_MinLim_Fltr = ((VeDTMC_M_DTRcmnd_MinLim_RawArb -
        VeDTMC_M_Lv2_DTRcmnd_MinLim_Fltr) * KeDTMR_k_TminFltrCoeff) +
        VeDTMC_M_Lv2_DTRcmnd_MinLim_Fltr;

    /* End of Outputs for SubSystem: '<S16>/LV2_Digital_Lowpass_Reset_Enabled1' */

    /* Switch: '<S16>/Switch4' */
    if (VeDTMI_b_LimpHomeActv)
    {
        /* Switch: '<S16>/Switch4' incorporates:
         *  Constant: '<S386>/Calib'
         */
        VeDTMC_M_Lv2_DTRcmnd_MinLim = KeDTMR_M_TminLim_LHom;
    }
    else
    {
        /* Switch: '<S16>/Switch4' */
        VeDTMC_M_Lv2_DTRcmnd_MinLim = VeDTMC_M_Lv2_DTRcmnd_MinLim_Fltr;
    }

    /* End of Switch: '<S16>/Switch4' */

    /* Sum: '<S11>/Sum5' incorporates:
     *  Constant: '<S67>/Calib'
     */
    VeDTMC_M_MinLim_LTsh_LSP = VeDTMC_M_Lv2_DTRcmnd_MinLim -
        KeDTMR_M_MinLim_LTsh_LSP;

    /* Sum: '<S11>/Sum4' incorporates:
     *  Constant: '<S68>/Calib'
     */
    VeDTMC_M_MinLim_LTsh_RSP = VeDTMC_M_Lv2_DTRcmnd_MinLim +
        KeDTMR_M_MinLim_LTsh_RSP;

    /* Outputs for Atomic SubSystem: '<S11>/LV2_Hysteresis1' */
    /* Switch: '<S86>/Switch1' incorporates:
     *  Constant: '<S86>/ConstantValue'
     *  RelationalOperator: '<S86>/Comparison1'
     *  RelationalOperator: '<S86>/Comparison2'
     *  UnitDelay: '<S86>/UnitDelay'
     */
    if (VeDTMC_M_Lv1NetDriverTrqReqst_Arb > VeDTMC_M_MinLim_LTsh_RSP)
    {
        DTMR_ac_DW.VeDTMC_b_DTRMinMntrNOFailing_prev = true;
    }
    else
    {
        DTMR_ac_DW.VeDTMC_b_DTRMinMntrNOFailing_prev =
            ((VeDTMC_M_Lv1NetDriverTrqReqst_Arb >= VeDTMC_M_MinLim_LTsh_LSP) &&
             (DTMR_ac_DW.VeDTMC_b_DTRMinMntrNOFailing_prev));
    }

    /* End of Switch: '<S86>/Switch1' */
    /* End of Outputs for SubSystem: '<S11>/LV2_Hysteresis1' */

    /* Logic: '<S11>/Logical47' incorporates:
     *  UnitDelay: '<S86>/UnitDelay'
     */
    VeDTMC_b_RstMinMntr_NormalMd = ((VeDTMC_b_MinMntrNotInRdPrfmMd) &&
        (DTMR_ac_DW.VeDTMC_b_DTRMinMntrNOFailing_prev));

    /* Logic: '<S11>/Logical5' incorporates:
     *  UnitDelay: '<S86>/UnitDelay'
     */
    VeDTMC_b_TMinLim_Failing = !DTMR_ac_DW.VeDTMC_b_DTRMinMntrNOFailing_prev;

    /* Logic: '<S11>/Logical24' incorporates:
     *  Constant: '<S73>/Calib'
     */
    VeDTMC_b_TMinLim_FailingCnfrm = (((VeDTMC_b_TMinLim_Failing) &&
        (KeDTMR_b_EnblDTRMntrMinLim)) && (VeDTMC_b_Lv2EnblPdlMntr_Arb));

    /* Outputs for Atomic SubSystem: '<S11>/LV2_Turn_Off_Delay_Sample_Modified1' */
    /* Switch: '<S95>/Switch' incorporates:
     *  Logic: '<S103>/AND'
     *  Logic: '<S103>/OR1'
     *  MinMax: '<S95>/Minimum1'
     *  UnitDelay: '<S103>/UnitDelay'
     *  UnitDelay: '<S95>/UnitDelay1'
     */
    if ((!VeDTMC_b_TMinLim_FailingCnfrm) &&
            (DTMR_ac_DW.VeDTMC_b_MinLimFailingDlyd_prev))
    {
        /* MinMax: '<S95>/Minimum1' incorporates:
         *  Constant: '<S58>/Calib'
         *  UnitDelay: '<S95>/UnitDelay1'
         */
        DTMR_ac_DW.VeDTMC_Cnt_MinLimFailingDlyd_prev =
            KeDTMR_Cnt_RdPerfmTrqChkCntr_Min;
    }
    else
    {
        if (((sint32)DTMR_ac_DW.VeDTMC_Cnt_MinLimFailingDlyd_prev) <= 1)
        {
            /* MinMax: '<S95>/Minimum1' */
            DTMR_ac_DW.VeDTMC_Cnt_MinLimFailingDlyd_prev = 1U;
        }

        /* MinMax: '<S95>/Minimum1' incorporates:
         *  Constant: '<S95>/ConstantValue'
         *  Sum: '<S95>/Summation'
         *  UnitDelay: '<S95>/UnitDelay1'
         */
        DTMR_ac_DW.VeDTMC_Cnt_MinLimFailingDlyd_prev = (uint8)((sint32)(((sint32)
            DTMR_ac_DW.VeDTMC_Cnt_MinLimFailingDlyd_prev) - 1));
    }

    /* End of Switch: '<S95>/Switch' */

    /* Logic: '<S95>/AND' incorporates:
     *  Constant: '<S95>/ConstantValue2'
     *  RelationalOperator: '<S95>/Comparison1'
     *  UnitDelay: '<S95>/UnitDelay1'
     */
    rtb_AND_d = ((VeDTMC_b_TMinLim_FailingCnfrm) || (((sint32)
                   DTMR_ac_DW.VeDTMC_Cnt_MinLimFailingDlyd_prev) > 0));

    /* Update for UnitDelay: '<S103>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_MinLimFailingDlyd_prev = VeDTMC_b_TMinLim_FailingCnfrm;

    /* End of Outputs for SubSystem: '<S11>/LV2_Turn_Off_Delay_Sample_Modified1' */

    /* Logic: '<S11>/Logical31' incorporates:
     *  Constant: '<S82>/Calib'
     */
    VeDTMC_b_RstMinMntrRdPrfmMd = (((KeDTMR_b_UseRdPerfmRst_Min) &&
        (VeDTMC_b_Min_RdPerfmMdForCntCntrl)) && rtb_AND_d);

    /* Logic: '<S11>/Logical1' */
    VeDTMC_b_RstCntrForMinLimFail = (((VeDTMC_b_RstMtrTrqCmndChk) ||
        (VeDTMC_b_RstMinMntr_NormalMd)) || (VeDTMC_b_RstMinMntrRdPrfmMd));

    /* UnitDelay: '<S97>/UnitDelay3' */
    VeDTMC_b_MinResumeMcntrDlyd = VeDTMC_b_Min_ResumeMCntr;

    /* Logic: '<S111>/OR1' incorporates:
     *  Logic: '<S109>/AND1'
     *  Logic: '<S109>/OR2'
     *  Logic: '<S111>/NOT'
     *  Logic: '<S111>/OR'
     *  UnitDelay: '<S109>/UnitDelay'
     */
    VeDTMC_b_Min_PCntrActv = (((VeDTMC_b_Min_RdPerfmMdForCntCntrl) &&
        (!DTMR_ac_DW.VeDTMC_b_Min_LtchPCntr_EdgRising_prev)) ||
        ((!VeDTMC_b_MinResumeMcntrDlyd) && (VeDTMC_b_Min_PCntrActv)));

    /* RelationalOperator: '<S97>/MaxLimReached' incorporates:
     *  Constant: '<S97>/ConstantValue19'
     */
    VeDTMC_b_Min_MCntrMaxLimReached = (((sint32)VeDTMC_Cnt_Min_FinalFailCnts) >=
        255);

    /* Switch: '<S97>/Switch17' */
    if (VeDTMC_b_Min_MCntrMaxLimReached)
    {
        /* Switch: '<S97>/Switch17' incorporates:
         *  Constant: '<S97>/ConstantValue20'
         */
        VeDTMC_Cnt_Min_PrevValArb = 0U;
    }
    else
    {
        /* Switch: '<S97>/Switch17' */
        VeDTMC_Cnt_Min_PrevValArb = VeDTMC_Cnt_Min_FinalFailCnts;
    }

    /* End of Switch: '<S97>/Switch17' */

    /* Switch: '<S97>/Switch20' incorporates:
     *  Logic: '<S110>/AND1'
     *  Logic: '<S110>/OR2'
     *  UnitDelay: '<S110>/UnitDelay'
     */
    if ((VeDTMC_b_MinResumeMcntrDlyd) &&
            (!DTMR_ac_DW.VeDTMC_b_Min_ResumeEdgRising_prev))
    {
        /* Switch: '<S97>/Switch20' */
        VeDTMC_Cnt_Min_PCntrIncVal = VeDTMC_Cnt_Min_PCntrVal;
    }
    else
    {
        /* Switch: '<S97>/Switch20' incorporates:
         *  Constant: '<S97>/ConstantValue21'
         */
        VeDTMC_Cnt_Min_PCntrIncVal = 0U;
    }

    /* End of Switch: '<S97>/Switch20' */

    /* Sum: '<S97>/Main_Counter' incorporates:
     *  Constant: '<S97>/ConstantValue4'
     */
    VeDTMC_Cnt_Min_MCntr_FailCnts = (uint8)(((uint32)((uint8)(((uint32)
        VeDTMC_Cnt_Min_PrevValArb) + ((uint32)VeDTMC_Cnt_Min_PCntrIncVal)))) +
        1U);

    /* Switch: '<S97>/Switch18' */
    if (VeDTMC_b_Min_MCntrMaxLimReached)
    {
        /* Switch: '<S97>/Switch18' */
        VeDTMC_Cnt_Min_FailCntsAftrMaxChk = VeDTMC_Cnt_Min_FinalFailCnts;
    }
    else
    {
        /* Switch: '<S97>/Switch18' */
        VeDTMC_Cnt_Min_FailCntsAftrMaxChk = VeDTMC_Cnt_Min_MCntr_FailCnts;
    }

    /* End of Switch: '<S97>/Switch18' */

    /* Switch: '<S97>/Switch19' */
    if (VeDTMC_b_TMinLim_FailingCnfrm)
    {
        /* Switch: '<S97>/Switch19' */
        VeDTMC_Cnt_Min_FailCntsArb = VeDTMC_Cnt_Min_FailCntsAftrMaxChk;
    }
    else
    {
        /* Switch: '<S97>/Switch19' */
        VeDTMC_Cnt_Min_FailCntsArb = VeDTMC_Cnt_Min_FinalFailCnts;
    }

    /* End of Switch: '<S97>/Switch19' */

    /* Switch: '<S97>/Switch7' */
    if (VeDTMC_b_Min_PCntrActv)
    {
        /* Switch: '<S97>/Switch7' */
        VeDTMC_Cnt_Min_FailCntsArbAftrPause = VeDTMC_Cnt_Min_FinalFailCnts;
    }
    else
    {
        /* Switch: '<S97>/Switch7' */
        VeDTMC_Cnt_Min_FailCntsArbAftrPause = VeDTMC_Cnt_Min_FailCntsArb;
    }

    /* End of Switch: '<S97>/Switch7' */

    /* Switch: '<S97>/Switch16' */
    if (VeDTMC_b_RstCntrForMinLimFail)
    {
        /* Switch: '<S97>/Switch16' incorporates:
         *  Constant: '<S97>/ConstantValue18'
         */
        VeDTMC_Cnt_Min_FinalFailCnts = 0U;
    }
    else
    {
        /* Switch: '<S97>/Switch16' */
        VeDTMC_Cnt_Min_FinalFailCnts = VeDTMC_Cnt_Min_FailCntsArbAftrPause;
    }

    /* End of Switch: '<S97>/Switch16' */

    /* RelationalOperator: '<S97>/Enough_counts_to_Fail' incorporates:
     *  Constant: '<S64>/Calib'
     */
    VeDTMC_b_Min_Fail_Thsh_First = (VeDTMC_Cnt_Min_FinalFailCnts >=
        KeDTMR_Cnt_Tmin_LL);

    /* Switch: '<S11>/Switch5' */
    if (VeDTMI_b_LimpHomeActv)
    {
        /* Switch: '<S11>/Switch5' incorporates:
         *  Constant: '<S63>/Calib'
         */
        VeDTMC_Cnt_TMinCntrLim_Arb = KeDTMR_Cnt_Tmin_Cntr_Lim_LHom;
    }
    else
    {
        /* Switch: '<S11>/Switch5' incorporates:
         *  Constant: '<S62>/Calib'
         */
        VeDTMC_Cnt_TMinCntrLim_Arb = KeDTMR_Cnt_Tmin_Cntr_Lim;
    }

    /* End of Switch: '<S11>/Switch5' */

    /* RelationalOperator: '<S97>/Enough_counts_to_Fail1' */
    VeDTMC_b_Min_Fail_Thsh_Second = (VeDTMC_Cnt_Min_FinalFailCnts >=
        VeDTMC_Cnt_TMinCntrLim_Arb);

    /* Logic: '<S88>/OR1' incorporates:
     *  Logic: '<S88>/OR'
     */
    VeDTMC_b_DTRMntr_MinLimFail = ((VeDTMC_b_Min_Fail_Thsh_Second) ||
        (rtb_TmpSignalConversionAtVeSCMR_b_Lv2Bra &&
         (VeDTMC_b_DTRMntr_MinLimFail)));

    /* Logic: '<S11>/Logical8' */
    VeDTMC_b_SecondThsh_NoFail_Min = !VeDTMC_b_DTRMntr_MinLimFail;

    /* Logic: '<S11>/Logical9' */
    rtb_TmpSignalConversionAtVeSSMR_b_VehSpd = ((VeDTMC_b_Min_Fail_Thsh_First) &&
        (VeDTMC_b_SecondThsh_NoFail_Min));

    /* Logic: '<S11>/Logical23' */
    VeDTMC_b_TrqReductionInRdPrfrmMd = (rtb_VeDTMR_b_Lv2BrkNOTApplied &&
        (VeDTMC_b_RdPerfmMdForCntCntrl));

    /* Logic: '<S11>/Logical37' */
    VeDTMC_b_ResetTrqPcode = ((VeDTMI_b_Lv2KeyOff) || (VeDTMC_b_Lv2ResetbyDMAB));

    /* Logic: '<S11>/Logical22' */
    VeDTMC_b_RstLv2RdPrfrmMd = (((VeDTMC_b_TrqReductionInRdPrfrmMd) ||
        (VeDTMC_b_DTRMntr_MaxLimFail)) || (VeDTMC_b_ResetTrqPcode));

    /* Logic: '<S89>/OR1' incorporates:
     *  Logic: '<S83>/AND1'
     *  Logic: '<S83>/OR2'
     *  Logic: '<S89>/NOT'
     *  Logic: '<S89>/OR'
     *  UnitDelay: '<S83>/UnitDelay'
     */
    VeDTMC_b_Lv2ReducedPerfModeLtch = ((rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1
        && (!DTMR_ac_DW.VeDTMC_b_RdPerfEdgeRising_MaxLim_prev)) ||
        ((!VeDTMC_b_RstLv2RdPrfrmMd) && (VeDTMC_b_Lv2ReducedPerfModeLtch)));

    /* Logic: '<S11>/Logical28' */
    VeDTMC_b_TrqReduInRdPrfrmMd_MinLim = (rtb_AND_d &&
        (VeDTMC_b_Min_RdPerfmMdForCntCntrl));

    /* Logic: '<S11>/Logical27' */
    VeDTMC_b_RstLv2RdPrfrmMd_MinLim = (((VeDTMC_b_TrqReduInRdPrfrmMd_MinLim) ||
        (VeDTMC_b_DTRMntr_MinLimFail)) || (VeDTMC_b_ResetTrqPcode));

    /* Logic: '<S90>/OR1' incorporates:
     *  Logic: '<S84>/AND1'
     *  Logic: '<S84>/OR2'
     *  Logic: '<S90>/NOT'
     *  Logic: '<S90>/OR'
     *  UnitDelay: '<S84>/UnitDelay'
     */
    VeDTMC_b_Lv2ReduPerfMdLtch_MinLim =
        ((rtb_TmpSignalConversionAtVeSSMR_b_VehSpd &&
          (!DTMR_ac_DW.VeDTMC_b_RdPerfEdgeRising_MinLim_prev)) ||
         ((!VeDTMC_b_RstLv2RdPrfrmMd_MinLim) &&
          (VeDTMC_b_Lv2ReduPerfMdLtch_MinLim)));

    /* Logic: '<S11>/Logical15' incorporates:
     *  Logic: '<S11>/Logical14'
     */
    VeDTMC_b_Lv2DTRcmndChkFailed = ((VeDTMC_b_DTRMntr_MaxLimFail) ||
        (VeDTMC_b_DTRMntr_MinLimFail));

    /* Logic: '<S91>/NOT' incorporates:
     *  Logic: '<S92>/NOT'
     *  Logic: '<S93>/NOT'
     */
    rtb_VeDTMR_b_Lv2BrkNOTApplied = !VeDTMC_b_ResetTrqPcode;

    /* Logic: '<S91>/OR1' incorporates:
     *  Logic: '<S91>/NOT'
     *  Logic: '<S91>/OR'
     *  UnitDelay: '<S91>/UnitDelay1'
     */
    DTMR_ac_DW.VeDTMC_b_DTRcmndFlt_Latch_prev = ((VeDTMC_b_Lv2DTRcmndChkFailed) ||
        (rtb_VeDTMR_b_Lv2BrkNOTApplied &&
         (DTMR_ac_DW.VeDTMC_b_DTRcmndFlt_Latch_prev)));

    /* Logic: '<S11>/Logical10' */
    VeDTMC_b_Stage1RemActionInit = (rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1 ||
        rtb_TmpSignalConversionAtVeSSMR_b_VehSpd);

    /* Logic: '<S11>/Logical11' incorporates:
     *  Constant: '<S76>/Calib'
     */
    VeDTMC_b_Stage1RemActionActv = ((VeDTMC_b_Stage1RemActionInit) &&
        (KeDTMR_b_SetDTCOnDTMRRedPerfMd));

    /* Logic: '<S11>/Logical14' */
    VeDTMC_b_Stage2RemActionInit = VeDTMC_b_Lv2DTRcmndChkFailed;

    /* Logic: '<S11>/Logical12' incorporates:
     *  Constant: '<S77>/Calib'
     */
    VeDTMC_b_Stage2RemActionActv = ((VeDTMC_b_Stage2RemActionInit) &&
        (KeDTMR_b_SetDTC_DriverReqstTrq));

    /* Logic: '<S11>/Logical13' */
    VeDTMR_b_DTR_ChkFailed = ((VeDTMC_b_Stage1RemActionActv) ||
        (VeDTMC_b_Stage2RemActionActv));

    /* Logic: '<S11>/Logical25' incorporates:
     *  Constant: '<S75>/Calib'
     */
    VeDTMR_b_SetDTC_DTR_ChkFailed = ((VeDTMR_b_DTR_ChkFailed) &&
        (KeDTMR_b_SetDTCForDTRMntFlt));

    /* Logic: '<S92>/OR1' incorporates:
     *  Logic: '<S92>/OR'
     *  UnitDelay: '<S92>/UnitDelay1'
     */
    VeDTMC_b_Lv2DTR_ChkFlt = ((VeDTMR_b_SetDTC_DTR_ChkFailed) ||
        (rtb_VeDTMR_b_Lv2BrkNOTApplied && (VeDTMC_b_Lv2DTR_ChkFlt)));

    /* Logic: '<S93>/OR1' incorporates:
     *  Constant: '<S71>/Calib'
     *  Logic: '<S11>/Logical42'
     *  Logic: '<S93>/OR'
     *  UnitDelay: '<S93>/UnitDelay1'
     */
    DTMR_ac_DW.VeDTMR_b_TransOutTrqCmdFlt_PNLatch_prev =
        ((((VeDTMC_b_Lv2DTRcmndChkFailed) && rtb_UnitDelay_fg) &&
          (KeDTMR_b_Ebl_SetDTCOnNetraulTrqFA)) || (rtb_VeDTMR_b_Lv2BrkNOTApplied
          && (DTMR_ac_DW.VeDTMR_b_TransOutTrqCmdFlt_PNLatch_prev)));

    /* Logic: '<S11>/Logical26' incorporates:
     *  Constant: '<S79>/Calib'
     */
    VeDTMR_b_Max_Lv2ReducedPerfMode = ((VeDTMC_b_Lv2ReducedPerfModeLtch) &&
        (KeDTMR_b_UseRdPerfmMd));

    /* Logic: '<S11>/Logical20' incorporates:
     *  UnitDelay: '<S91>/UnitDelay1'
     */
    VeDTMC_b_Lv1DTR_Fltdetected = (((VeDTMR_b_Max_Lv2ReducedPerfMode) ||
        (VeDTMC_b_Min_RdPerfmMdForCntCntrl)) ||
        (DTMR_ac_DW.VeDTMC_b_DTRcmndFlt_Latch_prev));

    /* Logic: '<S11>/Logical29' incorporates:
     *  Constant: '<S80>/Calib'
     */
    VeDTMC_b_Lv2ReducedPerfMode_MinLim = ((VeDTMC_b_Lv2ReduPerfMdLtch_MinLim) &&
        (KeDTMR_b_UseRdPerfmMd_MinLim));

    /* Logic: '<S11>/Logical30' incorporates:
     *  Constant: '<S74>/Calib'
     */
    VeDTMC_b_SwitchtoLv2DTR = ((KeDTMR_b_Enbl_SwitchLv2DTR) &&
        (VeDTMC_b_Lv1DTR_Fltdetected));

    /* RelationalOperator: '<S96>/MaxLimReached1' incorporates:
     *  Constant: '<S96>/ConstantValue16'
     */
    VeDTMC_b_PCntrMaxLimReached = (((sint32)VeDTMC_Cnt_PCntrVal) >= 255);

    /* Logic: '<S96>/Logical1' incorporates:
     *  Logic: '<S96>/Logical2'
     */
    VeDTMC_b_PCntr_Rst = ((VeDTMC_b_PCntrMaxLimReached) || (!VeDTMC_b_PCntrActv));

    /* Switch: '<S96>/Switch1' */
    VeDTMC_Cnt_PcntrIncValActv = (uint8)(VeDTMC_b_PCntrActv ? ((uint8)1) :
        ((uint8)0));

    /* Switch: '<S96>/Switch4' */
    if (VeDTMC_b_PCntr_Rst)
    {
        /* Switch: '<S96>/Switch4' incorporates:
         *  Constant: '<S96>/ConstantValue17'
         */
        VeDTMC_Cnt_PcntrPrevValArb = 0U;
    }
    else
    {
        /* Switch: '<S96>/Switch4' */
        VeDTMC_Cnt_PcntrPrevValArb = VeDTMC_Cnt_PCntrVal;
    }

    /* End of Switch: '<S96>/Switch4' */

    /* Sum: '<S96>/Pause_Counter' */
    VeDTMC_Cnt_PCntrVal = (uint8)(((uint32)VeDTMC_Cnt_PcntrIncValActv) +
        ((uint32)VeDTMC_Cnt_PcntrPrevValArb));

    /* RelationalOperator: '<S96>/MaxLimReached2' incorporates:
     *  Constant: '<S55>/Calib'
     */
    VeDTMC_b_ResumeMCntr = (VeDTMC_Cnt_PCntrVal >= KeDTMR_Cnt_Lv2RdPerfm_Dly);

    /* RelationalOperator: '<S97>/MaxLimReached1' incorporates:
     *  Constant: '<S97>/ConstantValue16'
     */
    VeDTMC_b_Min_PCntrMaxLimReached = (((sint32)VeDTMC_Cnt_Min_PCntrVal) >= 255);

    /* Logic: '<S97>/Logical1' incorporates:
     *  Logic: '<S97>/Logical2'
     */
    VeDTMC_b_Min_PCntr_Rst = ((VeDTMC_b_Min_PCntrMaxLimReached) ||
        (!VeDTMC_b_Min_PCntrActv));

    /* Switch: '<S97>/Switch1' */
    VeDTMC_Cnt_Min_PcntrIncValActv = (uint8)(VeDTMC_b_Min_PCntrActv ? ((uint8)1)
        : ((uint8)0));

    /* Switch: '<S97>/Switch4' */
    if (VeDTMC_b_Min_PCntr_Rst)
    {
        /* Switch: '<S97>/Switch4' incorporates:
         *  Constant: '<S97>/ConstantValue17'
         */
        VeDTMC_Cnt_Min_PcntrPrevValArb = 0U;
    }
    else
    {
        /* Switch: '<S97>/Switch4' */
        VeDTMC_Cnt_Min_PcntrPrevValArb = VeDTMC_Cnt_Min_PCntrVal;
    }

    /* End of Switch: '<S97>/Switch4' */

    /* Sum: '<S97>/Pause_Counter' */
    VeDTMC_Cnt_Min_PCntrVal = (uint8)(((uint32)VeDTMC_Cnt_Min_PcntrIncValActv) +
        ((uint32)VeDTMC_Cnt_Min_PcntrPrevValArb));

    /* RelationalOperator: '<S97>/MaxLimReached2' incorporates:
     *  Constant: '<S56>/Calib'
     */
    VeDTMC_b_Min_ResumeMCntr = (VeDTMC_Cnt_Min_PCntrVal >=
        KeDTMR_Cnt_Lv2RdPerfm_MinLimDly);

    /* Switch: '<S11>/Switch1' */
    if (VeDTMC_b_SwitchtoLv2DTR)
    {
        /* Switch: '<S11>/Switch1' */
        VeDTMR_M_Lv2DriverTorqueReqstSTMR_Protected =
            VeDTMC_M_Lv2_DrvrDmndMtrTrq_Final;
    }
    else
    {
        /* Switch: '<S11>/Switch1' */
        VeDTMR_M_Lv2DriverTorqueReqstSTMR_Protected =
            VeDTMC_M_Lv1NetDriverTrqReqst_Arb;
    }

    /* End of Switch: '<S11>/Switch1' */

    /* Sum: '<S12>/Sum5' */
    VeDTMC_M_Lv2TorqDiff_CurrMin = rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1 -
        VeDTMC_M_Lv2CurrentMin_Final;

    /* Abs: '<S12>/Abs1' incorporates:
     *  Abs: '<S12>/Abs'
     *  Constant: '<S12>/ConstantValue2'
     *  Product: '<S12>/Divide'
     *  Sum: '<S12>/Sum1'
     */
    VeDTMC_M_Lv2AeCoastTorqDiff = fabsf((VeDTMC_M_Lv2TorqDiff_CurrMin - fabsf
        (VeDTMC_M_Lv2TorqDiff_CurrMin)) / 2.0F);

    /* Outputs for Atomic SubSystem: '<S12>/DigitalLowpassResetEnabled' */
    /* Switch: '<S112>/Switch2' incorporates:
     *  Constant: '<S120>/Calib'
     *  Logic: '<S12>/Logical1'
     *  Switch: '<S112>/Switch1'
     */
    if (!KeDTMR_b_EnblLv2AeCoastTrqLowPassFilter)
    {
        /* Switch: '<S112>/Switch1' */
        VeDTMC_M_Lv2AeCoastTorqDiff_filtd = VeDTMC_M_Lv2AeCoastTorqDiff;
    }
    else
    {
        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S122>/Calib'
         *  Product: '<S112>/Multiplication'
         *  Sum: '<S112>/Subtraction'
         *  Sum: '<S112>/Summation'
         *  Switch: '<S112>/Switch2'
         *  UnitDelay: '<S112>/UnitDelay'
         */
        VeDTMC_M_Lv2AeCoastTorqDiff_filtd = ((VeDTMC_M_Lv2AeCoastTorqDiff -
            VeDTMC_M_Lv2AeCoastTorqDiff_filtd) *
            KeDTMR_k_Lv2AeCoastTorqLowPassFilt) +
            VeDTMC_M_Lv2AeCoastTorqDiff_filtd;
    }

    /* End of Switch: '<S112>/Switch2' */
    /* End of Outputs for SubSystem: '<S12>/DigitalLowpassResetEnabled' */

    /* MinMax: '<S12>/Max' */
    VeDTMC_M_Lv2AeCoastTorqDiff_Lowpath = fmaxf(VeDTMC_M_Lv2AeCoastTorqDiff,
        VeDTMC_M_Lv2AeCoastTorqDiff_filtd);

    /* Outputs for Atomic SubSystem: '<S12>/GradientLimiter' */
    /* Sum: '<S113>/Sum2' incorporates:
     *  UnitDelay: '<S113>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
        VeDTMC_M_Lv2AeCoastTorqDiff_Lowpath - VeDTMC_M_Lv2AeCoastTorqDiff_GRD;

    /* Outputs for Atomic SubSystem: '<S113>/Limiter' */
    /* Switch: '<S124>/Switch1' incorporates:
     *  Constant: '<S119>/Calib'
     *  RelationalOperator: '<S124>/RelationalOperator'
     */
    if (KeDTMR_M_MaxRgnTrqDiff_GRD_LU < rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB)
    {
        /* Switch: '<S124>/Switch1' */
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_M_MaxRgnTrqDiff_GRD_LU;
    }

    /* End of Switch: '<S124>/Switch1' */

    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S118>/Calib'
     *  RelationalOperator: '<S124>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB <=
            KeDTMR_M_MaxRgnTrqDiff_GRD_LD)
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = KeDTMR_M_MaxRgnTrqDiff_GRD_LD;
    }

    /* End of Switch: '<S124>/Switch' */
    /* End of Outputs for SubSystem: '<S113>/Limiter' */

    /* Sum: '<S113>/Sum3' incorporates:
     *  UnitDelay: '<S113>/UnitDelay'
     */
    VeDTMC_M_Lv2AeCoastTorqDiff_GRD = rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB +
        VeDTMC_M_Lv2AeCoastTorqDiff_GRD;

    /* End of Outputs for SubSystem: '<S12>/GradientLimiter' */

    /* Sum: '<S12>/Sum2' incorporates:
     *  Constant: '<S116>/Calib'
     */
    VeDTMC_M_Lv2AeCoastTorqDiff_LSP = KeDTMR_M_MaxRgnTrqDiffMaxLim_LSP +
        VeDTMC_M_Lv2AeCoastTorqDiff_GRD;

    /* Sum: '<S12>/Sum3' incorporates:
     *  Constant: '<S117>/Calib'
     */
    VeDTMC_M_Lv2AeCoastTorqDiff_RSP = KeDTMR_M_MaxRgnTrqDiffMaxLim_RSP +
        VeDTMC_M_Lv2AeCoastTorqDiff_GRD;

    /* Outputs for Atomic SubSystem: '<S12>/Hysteresis_1' */
    /* Switch: '<S114>/Switch1' incorporates:
     *  RelationalOperator: '<S114>/GreaterThan'
     */
    if (rtb_TmpSignalConversionAtVeWTAR_M_AeCoas >=
            VeDTMC_M_Lv2AeCoastTorqDiff_RSP)
    {
        /* Switch: '<S114>/Switch1' incorporates:
         *  Constant: '<S114>/ConstantValue'
         */
        VeDTMC_b_Lv2AeCoastTorqDiff_MaxFA = true;
    }
    else
    {
        /* Switch: '<S114>/Switch1' incorporates:
         *  RelationalOperator: '<S114>/GreaterThan1'
         *  UnitDelay: '<S114>/UnitDelay'
         */
        VeDTMC_b_Lv2AeCoastTorqDiff_MaxFA =
            ((rtb_TmpSignalConversionAtVeWTAR_M_AeCoas >
              VeDTMC_M_Lv2AeCoastTorqDiff_LSP) &&
             (VeDTMC_b_Lv2AeCoastTorqDiff_MaxFA));
    }

    /* End of Switch: '<S114>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Hysteresis_1' */

    /* Logic: '<S12>/Logical24' incorporates:
     *  Constant: '<S121>/Calib'
     */
    VeDTMC_b_Lv2MaxRgnTrqFailing = (((KeDTMR_b_EnblMaxRgnTrqDiffMntr) &&
        (VeDTMC_b_Lv2AeCoastTorqDiff_MaxFA)) && rtb_Compare_ls);

    /* Switch: '<S123>/dec_if_Ok_else_inc' incorporates:
     *  MinMax: '<S123>/FixPtMinax'
     *  UnitDelay: '<S123>/UnitDelay'
     */
    if (VeDTMC_b_Lv2MaxRgnTrqFailing)
    {
        /* Switch: '<S123>/Switch1' incorporates:
         *  Constant: '<S12>/FixedDecrement1'
         *  RelationalOperator: '<S123>/Relational_Operator'
         *  Sum: '<S123>/Inc_Cntr'
         *  UnitDelay: '<S123>/UnitDelay'
         */
        if (((uint8)(((uint32)VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA) + 1U)) <
                VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA)
        {
            /* MinMax: '<S123>/FixPtMinax' incorporates:
             *  Constant: '<S123>/CounterMax'
             *  Switch: '<S123>/dec_if_Ok_else_inc'
             */
            VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA = MAX_uint8_T;
        }
        else
        {
            /* MinMax: '<S123>/FixPtMinax' incorporates:
             *  Switch: '<S123>/dec_if_Ok_else_inc'
             */
            VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA = (uint8)(((uint32)
                VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA) + 1U);
        }

        /* End of Switch: '<S123>/Switch1' */
    }
    else
    {
        if (((sint32)VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA) <= 1)
        {
            /* MinMax: '<S123>/FixPtMinax' */
            VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA = 1U;
        }

        /* MinMax: '<S123>/FixPtMinax' incorporates:
         *  Constant: '<S12>/FixedDecrement'
         *  Sum: '<S123>/Dec_Cntr'
         *  Switch: '<S123>/dec_if_Ok_else_inc'
         */
        VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA = (uint8)((sint32)(((sint32)
            VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA) - 1));
    }

    /* End of Switch: '<S123>/dec_if_Ok_else_inc' */

    /* RelationalOperator: '<S130>/Compare' incorporates:
     *  Constant: '<S130>/Constant'
     */
    rtb_Compare_ls = (rtb_Compare_h_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S123>/EdgeFalling' */
    /* Logic: '<S126>/AND' incorporates:
     *  Logic: '<S126>/OR1'
     *  UnitDelay: '<S126>/Unit Delay'
     */
    rtb_VeDTMR_b_Lv2BrkNOTApplied = ((!rtb_Compare_ls) &&
        (DTMR_ac_DW.UnitDelay_DSTATE_js));

    /* Update for UnitDelay: '<S126>/Unit Delay' */
    DTMR_ac_DW.UnitDelay_DSTATE_js = rtb_Compare_ls;

    /* End of Outputs for SubSystem: '<S123>/EdgeFalling' */

    /* Logic: '<S123>/passDBCparam2' */
    VeDTMC_b_Lv2MaxRegenTorqDiff_FA_Rst = ((VeDTMC_b_Lv2ResetDTMRmntrs) ||
        rtb_VeDTMR_b_Lv2BrkNOTApplied);

    /* Switch: '<S123>/Switch2' incorporates:
     *  Constant: '<S115>/Calib'
     *  Constant: '<S123>/ResetZero1'
     *  Logic: '<S123>/Cntr_fail'
     *  RelationalOperator: '<S123>/Enough_counts_to_Fail'
     *  Switch: '<S123>/Switch3'
     *  Switch: '<S125>/Switch1'
     *  UnitDelay: '<S123>/UnitDelay1'
     */
    if (VeDTMC_b_Lv2MaxRegenTorqDiff_FA_Rst)
    {
        /* MinMax: '<S123>/FixPtMinax' incorporates:
         *  Constant: '<S123>/ResetZero'
         *  Switch: '<S123>/Switch2'
         */
        VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA = 0U;
        DTMR_ac_DW.UnitDelay1_DSTATE_as = false;

        /* Switch: '<S125>/Switch1' incorporates:
         *  Constant: '<S123>/ResetZero1'
         *  Constant: '<S128>/Constant'
         *  UnitDelay: '<S123>/UnitDelay1'
         */
        VeDTMC_e_Lv2MaxRegenTorqDiff_FA_DBCsts = CeDFIB_e_Init;
    }
    else
    {
        DTMR_ac_DW.UnitDelay1_DSTATE_as = ((VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA >=
            KeDTMR_Cnt_MaxRgnTrqDifflCntrLim) ||
            (DTMR_ac_DW.UnitDelay1_DSTATE_as));

        /* Switch: '<S125>/Switch2' incorporates:
         *  Constant: '<S115>/Calib'
         *  Constant: '<S131>/Constant'
         *  Logic: '<S123>/Cntr_fail'
         *  RelationalOperator: '<S123>/Enough_counts_to_Fail'
         *  RelationalOperator: '<S131>/Compare'
         *  Switch: '<S125>/Switch3'
         *  UnitDelay: '<S123>/UnitDelay1'
         */
        if (DTMR_ac_DW.UnitDelay1_DSTATE_as)
        {
            /* Switch: '<S125>/Switch1' incorporates:
             *  Constant: '<S127>/Constant'
             *  Switch: '<S125>/Switch2'
             */
            VeDTMC_e_Lv2MaxRegenTorqDiff_FA_DBCsts = CeDFIB_e_Fail;
        }
        else if (((sint32)VeDTMC_Cnt_Lv2MaxRegenTorqDiff_FA) == 0)
        {
            /* Switch: '<S125>/Switch3' incorporates:
             *  Constant: '<S129>/Constant'
             *  Switch: '<S125>/Switch1'
             */
            VeDTMC_e_Lv2MaxRegenTorqDiff_FA_DBCsts = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S125>/Switch1' incorporates:
             *  Switch: '<S125>/Switch3'
             *  UnitDelay: '<S125>/UnitDelay'
             */
            VeDTMC_e_Lv2MaxRegenTorqDiff_FA_DBCsts =
                DTMR_ac_DW.UnitDelay_DSTATE_g;
        }

        /* End of Switch: '<S125>/Switch2' */
    }

    /* End of Switch: '<S123>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCMR_b_Lv2BMS_HV_VoltageSts' */
    (void)Rte_Read_VeSCMR_b_Lv2BMS_HV_VoltageSts_Value(&tmpRead_g);

    /* Inport: '<Root>/VeLTIR_b_Lv2HV_BatVlt_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2HV_BatVlt_FA_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* DataTypeConversion: '<S125>/UNIT8' incorporates:
     *  Switch: '<S125>/Switch1'
     *  UnitDelay: '<S125>/UnitDelay'
     */
    DTMR_ac_DW.UnitDelay_DSTATE_g = (uint8)
        VeDTMC_e_Lv2MaxRegenTorqDiff_FA_DBCsts;

    /* Logic: '<S17>/Logical6' */
    VeDTMC_b_Lv2HVBatVltt_Violation = (tmpRead_f || tmpRead_g);

    /* Switch: '<S570>/Switch2' incorporates:
     *  Constant: '<S575>/Constant'
     *  DataTypeConversion: '<S572>/UNIT8'
     *  DataTypeConversion: '<S592>/UNIT8'
     *  Switch: '<S572>/Switch1'
     *  Switch: '<S589>/Switch2'
     *  Switch: '<S592>/Switch1'
     *  UnitDelay: '<S572>/UnitDelay'
     *  UnitDelay: '<S592>/UnitDelay'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_2 || Rte_SysCon_Variant_DTMR_FUNC_3 || Rte_SysCon_Variant_DTMR_FUNC_6

    if (VeDTMC_b_Lv2_OPD_ON_FA_DT_Rst)
    {
        /* Switch: '<S570>/Switch2' incorporates:
         *  Constant: '<S570>/ResetZero'
         */
        VeDTMC_Cnt_Lv2_OPD_ON_FA_DT = 0U;
        VeDTMC_e_Lv2_OPD_ON_FA_DT_DBCsts = CeDFIB_e_Init;
    }
    else
    {
        /* Switch: '<S570>/Switch2' */
        VeDTMC_Cnt_Lv2_OPD_ON_FA_DT = rtb_Inc_Cntr_p;

        /* Switch: '<S572>/Switch2' incorporates:
         *  Constant: '<S578>/Constant'
         *  RelationalOperator: '<S578>/Compare'
         *  Switch: '<S572>/Switch3'
         */
        if (VeDTMC_b_Lv2_OPD_ON_FA_DT)
        {
            /* Switch: '<S572>/Switch2' incorporates:
             *  Constant: '<S574>/Constant'
             */
            VeDTMC_e_Lv2_OPD_ON_FA_DT_DBCsts = CeDFIB_e_Fail;
        }
        else if (((sint32)VeDTMC_Cnt_Lv2_OPD_ON_FA_DT) == 0)
        {
            /* Switch: '<S572>/Switch3' incorporates:
             *  Constant: '<S576>/Constant'
             *  Switch: '<S572>/Switch2'
             */
            VeDTMC_e_Lv2_OPD_ON_FA_DT_DBCsts = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S572>/Switch2' */
            VeDTMC_e_Lv2_OPD_ON_FA_DT_DBCsts = DTMR_ac_DW.UnitDelay_DSTATE_km;
        }

        /* End of Switch: '<S572>/Switch2' */
    }

    DTMR_ac_DW.UnitDelay_DSTATE_km = (uint8)VeDTMC_e_Lv2_OPD_ON_FA_DT_DBCsts;
    if (VeDTMC_b_Lv2VehStndStillReq_FA_DT_Rst)
    {
        /* Switch: '<S589>/Switch2' incorporates:
         *  Constant: '<S589>/ResetZero'
         */
        VeDTMC_Cnt_Lv2VehStndStillReq_FA_DT = 0U;

        /* Switch: '<S592>/Switch1' incorporates:
         *  Constant: '<S595>/Constant'
         */
        VeDTMC_e_Lv2VehStndStillReq_FA_DT_DBCsts = CeDFIB_e_Init;
    }
    else
    {
        /* Switch: '<S589>/Switch2' */
        VeDTMC_Cnt_Lv2VehStndStillReq_FA_DT = rtb_Inc_Cntr;

        /* Switch: '<S592>/Switch2' incorporates:
         *  Constant: '<S598>/Constant'
         *  RelationalOperator: '<S598>/Compare'
         *  Switch: '<S592>/Switch3'
         */
        if (VeDTMC_b_Lv2VehStndStillReq_FA_DT)
        {
            /* Switch: '<S592>/Switch1' incorporates:
             *  Constant: '<S594>/Constant'
             *  Switch: '<S592>/Switch2'
             */
            VeDTMC_e_Lv2VehStndStillReq_FA_DT_DBCsts = CeDFIB_e_Fail;
        }
        else if (((sint32)VeDTMC_Cnt_Lv2VehStndStillReq_FA_DT) == 0)
        {
            /* Switch: '<S592>/Switch1' incorporates:
             *  Constant: '<S596>/Constant'
             *  Switch: '<S592>/Switch2'
             *  Switch: '<S592>/Switch3'
             */
            VeDTMC_e_Lv2VehStndStillReq_FA_DT_DBCsts = CeDFIB_e_Pass;
        }
        else
        {
            /* Switch: '<S592>/Switch1' incorporates:
             *  Switch: '<S592>/Switch2'
             */
            VeDTMC_e_Lv2VehStndStillReq_FA_DT_DBCsts =
                DTMR_ac_DW.UnitDelay_DSTATE_j;
        }

        /* End of Switch: '<S592>/Switch2' */
    }

    DTMR_ac_DW.UnitDelay_DSTATE_j = (uint8)
        VeDTMC_e_Lv2VehStndStillReq_FA_DT_DBCsts;

#endif

    /* End of Switch: '<S570>/Switch2' */

    /* SignalConversion generated from: '<S21>/Variant Source1' */
#if Rte_SysCon_Variant_DTMR_FUNC_2

    /* RelationalOperator: '<S619>/Compare' incorporates:
     *  Switch: '<S572>/Switch1'
     *  VariantMerge generated from: '<S21>/Variant Source1'
     */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        VeDTMC_e_Lv2_OPD_ON_FA_DT_DBCsts;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source1' */

    /* SignalConversion generated from: '<S21>/Variant Source1' */
#if Rte_SysCon_Variant_DTMR_FUNC_3

    /* RelationalOperator: '<S619>/Compare' incorporates:
     *  Switch: '<S572>/Switch1'
     *  VariantMerge generated from: '<S21>/Variant Source1'
     */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        VeDTMC_e_Lv2_OPD_ON_FA_DT_DBCsts;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source1' */

    /* SignalConversion generated from: '<S21>/Variant Source1' */
#if Rte_SysCon_Variant_DTMR_FUNC_6

    /* RelationalOperator: '<S619>/Compare' incorporates:
     *  Switch: '<S572>/Switch1'
     *  VariantMerge generated from: '<S21>/Variant Source1'
     */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        VeDTMC_e_Lv2_OPD_ON_FA_DT_DBCsts;

#elif !Rte_SysCon_Variant_DTMR_FUNC_2 && !Rte_SysCon_Variant_DTMR_FUNC_3 && !Rte_SysCon_Variant_DTMR_FUNC_6

    /* RelationalOperator: '<S619>/Compare' incorporates:
     *  Constant: '<S600>/Constant'
     *  SignalConversion generated from: '<S21>/Variant Source1'
     *  VariantMerge generated from: '<S21>/Variant Source1'
     */
    DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g = CeDFIB_e_Pass;

#endif

    /* End of SignalConversion generated from: '<S21>/Variant Source1' */

    /* Update for UnitDelay: '<S9>/UnitDelay6' incorporates:
     *  Inport: '<Root>/VeSTMR_b_TrqSplit_OS_US'
     */
    (void)Rte_Read_VeSTMR_b_TrqSplit_OS_US_Value
        (&DTMR_ac_DW.VeDTMR_b_TrqSplit_OS_US_prev);

    /* Update for UnitDelay: '<S9>/UnitDelay5' incorporates:
     *  Inport: '<Root>/VeSTMR_b_Lv2CruiseTrqChkFailed'
     */
    (void)Rte_Read_VeSTMR_b_Lv2CruiseTrqChkFailed_Value
        (&DTMR_ac_DW.VeDTMR_b_Lv2CruiseTrqChkFaile_prev);

    /* Update for UnitDelay: '<S9>/UnitDelay4' incorporates:
     *  Inport: '<Root>/VeSTMR_b_RgnEstMntrFlt'
     */
    (void)Rte_Read_VeSTMR_b_RgnEstMntrFlt_Value
        (&DTMR_ac_DW.VeDTMR_b_RgnEstMntrFlt_prev);

    /* Update for UnitDelay: '<S9>/UnitDelay3' incorporates:
     *  Inport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt'
     */
    (void)Rte_Read_VeSTMR_b_TransOutTrqCmdFlt_Value
        (&DTMR_ac_DW.VeDTMR_b_TransOutTrqCmndFlt_prev);

    /* Update for UnitDelay: '<S9>/UnitDelay2' incorporates:
     *  Inport: '<Root>/VeSTMR_b_Lv2STMR_ReducedPerfMode'
     */
    (void)Rte_Read_VeSTMR_b_Lv2STMR_ReducedPerfMode_Value
        (&DTMR_ac_DW.VeDTMR_b_Lv2ReducePerfModePrev);

    /* Update for UnitDelay: '<S398>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_Pct_Lv2HVBattSOC_Prev =
        rtb_TmpSignalConversionAtVeSCMR_Pct_Lv2H;

    /* Update for UnitDelay: '<S406>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_Lv2HVBattSoCFA_ER_prev = VeDTMC_b_Lv2HVBatSOC_Flt;

    /* Update for UnitDelay: '<S398>/UnitDelay2' */
    DTMR_ac_DW.VeDTMC_b_SOC_FA_Trgr_Prev = VeDTMC_b_Lv2HVBatSOC_Flt;

    /* Update for UnitDelay: '<S407>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_SOC_FA_Dlyd_ER_prev = VeDTMC_b_SOC_FA_Dlyd;

    /* Update for UnitDelay: '<S398>/UnitDelay4' */
    DTMR_ac_DW.VeDTMC_b_SOC_FA_Enbl_Prev = VeDTMC_b_Lv2HVBatSOC_Flt;

    /* Update for UnitDelay: '<S180>/UnitDelay' */
    DTMR_ac_DW.UnitDelay_DSTATE = rtb_VeDTMC_M_TotBrkTrq_Arb;

    /* Update for UnitDelay: '<S179>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_M_eCreepWhlTrq_prev = VeDTMC_M_eCreepWhlTrq;

    /* Update for UnitDelay: '<S205>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_CC_Engd_TurnOff_prev =
        rtb_TmpSignalConversionAtVeCSMR_b_Lv2CCE;

    /* Update for UnitDelay: '<S165>/UnitDelay5' */
    DTMR_ac_DW.VeDTMC_b_OPDSwitchChange_Prev =
        DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5];

    /* Update for UnitDelay: '<S105>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_LtchPCntr_EdgRising_prev = VeDTMC_b_RdPerfmMdForCntCntrl;

    /* Update for UnitDelay: '<S106>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_ResumeEdgRising_prev = VeDTMC_b_ResumeMcntrDlyd;

    /* Update for UnitDelay: '<S83>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_RdPerfEdgeRising_MaxLim_prev =
        rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1;

    /* Update for UnitDelay: '<S109>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_Min_LtchPCntr_EdgRising_prev =
        VeDTMC_b_Min_RdPerfmMdForCntCntrl;

    /* Update for UnitDelay: '<S110>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_Min_ResumeEdgRising_prev = VeDTMC_b_MinResumeMcntrDlyd;

    /* Update for UnitDelay: '<S84>/UnitDelay' */
    DTMR_ac_DW.VeDTMC_b_RdPerfEdgeRising_MinLim_prev =
        rtb_TmpSignalConversionAtVeSSMR_b_VehSpd;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMD'
     */
    /* If: '<S611>/Determine_P3044_Status' */
    if (VeDTMC_b_ResetTrqPcode)
    {
        /* Outputs for IfAction SubSystem: '<S611>/Event_CM_Drv_TorqCalcPerf_ReportTestInit' incorporates:
         *  ActionPort: '<S613>/ActionPort'
         */
        /* DataStoreWrite: '<S613>/VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPerf' incorporates:
         *  Constant: '<S622>/Constant'
         */
        DTMR_ac_DW.VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPe = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S611>/Event_CM_Drv_TorqCalcPerf_ReportTestInit' */
    }
    else if (VeDTMC_b_Lv2DTR_ChkFlt)
    {
        /* Outputs for IfAction SubSystem: '<S611>/Event_CM_Drv_TorqCalcPerf_ReportTestFailed' incorporates:
         *  ActionPort: '<S612>/ActionPort'
         */
        /* DataStoreWrite: '<S612>/VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPerf' incorporates:
         *  Constant: '<S621>/Constant'
         */
        DTMR_ac_DW.VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPe = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S611>/Event_CM_Drv_TorqCalcPerf_ReportTestFailed' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S611>/Event_CM_Drv_TorqCalcPerf_ReportTestPassed' incorporates:
         *  ActionPort: '<S614>/ActionPort'
         */
        /* DataStoreWrite: '<S614>/VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPerf' incorporates:
         *  Constant: '<S623>/Constant'
         */
        DTMR_ac_DW.VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPe = CeDFIB_e_Pass;

        /* End of Outputs for SubSystem: '<S611>/Event_CM_Drv_TorqCalcPerf_ReportTestPassed' */
    }

    /* End of If: '<S611>/Determine_P3044_Status' */

    /* If: '<S611>/Determine_P060A_Status' incorporates:
     *  Constant: '<S618>/Constant'
     *  Constant: '<S619>/Constant'
     *  Constant: '<S620>/Constant'
     *  RelationalOperator: '<S618>/Compare'
     *  RelationalOperator: '<S619>/Compare'
     *  RelationalOperator: '<S620>/Compare'
     */
    if (((uint32)DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g) ==
            CeDFIB_e_Init)
    {
        /* Outputs for IfAction SubSystem: '<S611>/Event_CM_OPDActivePerf_ReportTestInit' incorporates:
         *  ActionPort: '<S616>/ActionPort'
         */
        /* DataStoreWrite: '<S616>/VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf' incorporates:
         *  Constant: '<S625>/Constant'
         */
        DTMR_ac_DW.VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S611>/Event_CM_OPDActivePerf_ReportTestInit' */
    }
    else if (((uint32)DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g) ==
             CeDFIB_e_Fail)
    {
        /* Outputs for IfAction SubSystem: '<S611>/Event_CM_OPDActivePerf_ReportTestFailed' incorporates:
         *  ActionPort: '<S615>/ActionPort'
         */
        /* DataStoreWrite: '<S615>/VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf' incorporates:
         *  Constant: '<S624>/Constant'
         */
        DTMR_ac_DW.VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S611>/Event_CM_OPDActivePerf_ReportTestFailed' */
    }
    else
    {
        if (((uint32)DTMR_ac_B.VariantMerge_For_Variant_Source_Varian_g) ==
                CeDFIB_e_Pass)
        {
            /* Outputs for IfAction SubSystem: '<S611>/Event_CM_OPDActivePerf_ReportTestPassed' incorporates:
             *  ActionPort: '<S617>/ActionPort'
             */
            /* DataStoreWrite: '<S617>/VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf' incorporates:
             *  Constant: '<S626>/Constant'
             */
            DTMR_ac_DW.VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf = CeDFIB_e_Pass;

            /* End of Outputs for SubSystem: '<S611>/Event_CM_OPDActivePerf_ReportTestPassed' */
        }
    }

    /* End of If: '<S611>/Determine_P060A_Status' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDTMR_M_Lv2AxlTrqReq' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2AxlTrqReq'
     */
    (void)Rte_Write_VeDTMR_M_Lv2AxlTrqReq_Value(VeDTMC_M_Lv2TotalMtr_TrqReq);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMO'
     */
    /* Outport: '<Root>/VeDTMR_e_BrkPdlStat' incorporates:
     *  DataTypeConversion: '<S664>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/Lv2BrkPdlStat'
     *  Switch: '<S22>/Switch3'
     */
    (void)Rte_Write_VeDTMR_e_BrkPdlStat_Value((TeSTMR_e_Lv2BrkPdlStat)
        VeDTMC_e_Lv2BrkPdlStat);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDTMR_M_Lv2AccelPdlWhlTrq' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_AccelPdlWhlTrq'
     */
    (void)Rte_Write_VeDTMR_M_Lv2AccelPdlWhlTrq_Value
        (rtb_TmpSignalConversionAtVeDTRR_M_Lv2Lv1);

    /* Outport: '<Root>/VeDTMR_b_Lv2DsblAccelPdlRelatedMntr' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_DsblAccelPdlRelatedMntr'
     */
    (void)Rte_Write_VeDTMR_b_Lv2DsblAccelPdlRelatedMntr_Value
        (rtb_VeDTMC_b_DriveMdInNormalMd);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Outport: '<Root>/VeDTMR_b_Lv2OPDInhibit' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_OPDInhibit'
     *  SignalConversion generated from: '<S3>/Lv2_OPDInhibit'
     */
    (void)Rte_Write_VeDTMR_b_Lv2OPDInhibit_Value
        (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[1]);

    /* Outport: '<Root>/VeDTMR_b_Lv2OPDInhibitHMI' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_OPDInhibitHMI'
     *  SignalConversion generated from: '<S3>/Lv2_OPDInhibitHMI'
     */
    (void)Rte_Write_VeDTMR_b_Lv2OPDInhibitHMI_Value
        (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[3]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDTMR_M_Lv2OPDMinTrq' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_OPDMinTrq'
     */
    (void)Rte_Write_VeDTMR_M_Lv2OPDMinTrq_Value
        (rtb_TmpSignalConversionAtVeSCMR_U_Lv2HVB);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Outport: '<Root>/VeDTMR_b_Lv2OPD_EnblCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_OPD_EnblCmnd'
     *  SignalConversion generated from: '<S3>/Lv2_OPD_EnblCmnd'
     */
    (void)Rte_Write_VeDTMR_b_Lv2OPD_EnblCmnd_Value
        (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[6]);

    /* Outport: '<Root>/VeDTMR_b_Lv2_OPD_ON' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_OPD_ON'
     *  SignalConversion generated from: '<S3>/Lv2_OPD_ON'
     */
    (void)Rte_Write_VeDTMR_b_Lv2_OPD_ON_Value
        (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[5]);

    /* Outport: '<Root>/VeDTMR_b_Lv2_OPD_ON_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_OPD_ON_FA'
     *  SignalConversion generated from: '<S3>/Lv2_OPD_ON_FA'
     */
    (void)Rte_Write_VeDTMR_b_Lv2_OPD_ON_FA_Value
        (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[4]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDTMR_b_Lv2OPD_Selection' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_OPD_Selection'
     */
    (void)Rte_Write_VeDTMR_b_Lv2OPD_Selection_Value
        (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[0]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Outport: '<Root>/VeDTMR_b_Lv2VehStndStillReq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_VehStndStillReqOPD_FA'
     *  SignalConversion generated from: '<S3>/Lv2_VehStndStillReqOPD_FA'
     */
    (void)Rte_Write_VeDTMR_b_Lv2VehStndStillReq_FA_Value
        (DTMR_ac_B.VariantMerge_For_Variant_Source_Variant_[2]);

    /* Switch: '<S11>/Switch2' incorporates:
     *  Constant: '<S78>/Calib'
     */
    if (KeDTMR_b_UseLv2DTRdefault)
    {
        /* Outport: '<Root>/VeDTMR_M_Lv2DriverTorqueReqstSTMR' incorporates:
         *  SignalConversion generated from: '<S1>/VeDTMR_M_Lv2DriverTorqueReqstSTMR'
         */
        (void)Rte_Write_VeDTMR_M_Lv2DriverTorqueReqstSTMR_Value
            (VeDTMC_M_Lv2_DrvrDmndMtrTrq_Final);
    }
    else
    {
        /* Outport: '<Root>/VeDTMR_M_Lv2DriverTorqueReqstSTMR' incorporates:
         *  SignalConversion generated from: '<S1>/VeDTMR_M_Lv2DriverTorqueReqstSTMR'
         */
        (void)Rte_Write_VeDTMR_M_Lv2DriverTorqueReqstSTMR_Value
            (VeDTMR_M_Lv2DriverTorqueReqstSTMR_Protected);
    }

    /* End of Switch: '<S11>/Switch2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMO'
     */
    /* Outport: '<Root>/VeDTMR_M_Lv2NormalMinTrqRaw' incorporates:
     *  Gain: '<S6>/Gain1'
     *  SignalConversion generated from: '<S1>/VeDTMR_M_Lv2NormalMinTrqRaw'
     */
    (void)Rte_Write_VeDTMR_M_Lv2NormalMinTrqRaw_Value(VeDTMC_M_Lv2NormalMinTrq);

    /* Outport: '<Root>/VeDTMR_M_Lv2PtcWhlCcTrqReqRaw' incorporates:
     *  Gain: '<S6>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTMR_M_Lv2PtcWhlCcTrqReqRaw'
     */
    (void)Rte_Write_VeDTMR_M_Lv2PtcWhlCcTrqReqRaw_Value
        (VeDTMC_M_Lv2PtcWhlCcTrqReq);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Switch: '<S11>/Switch3' incorporates:
     *  Constant: '<S11>/ConstantValue5'
     */
    if (VeDTMR_b_Max_Lv2ReducedPerfMode)
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB =
            VeDTMC_M_Lv2ReducedPerfTrqFiltd;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB = 0.0F;
    }

    /* End of Switch: '<S11>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDTMR_M_Lv2ReducedPrfmTrq_DTRChk' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTMR_M_Lv2ReducedPrfmTrq_DTRChk'
     */
    (void)Rte_Write_VeDTMR_M_Lv2ReducedPrfmTrq_DTRChk_Value
        (rtb_TmpSignalConversionAtVeSCMR_I_Lv2HVB);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMO'
     */
    /* Outport: '<Root>/VeDTMR_Pct_Lv2AccelPdlPosRaw' incorporates:
     *  Gain: '<S6>/Gain2'
     *  SignalConversion generated from: '<S1>/VeDTMR_Pct_Lv2AccelPdlPosRaw'
     */
    (void)Rte_Write_VeDTMR_Pct_Lv2AccelPdlPosRaw_Value(VeDTMC_Pct_Lv2AccelPdlPos);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDTMR_b_DTRcmdFlt' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTMR_b_DTRcmdFlt'
     *  UnitDelay: '<S91>/UnitDelay1'
     */
    (void)Rte_Write_VeDTMR_b_DTRcmdFlt_Value
        (DTMR_ac_DW.VeDTMC_b_DTRcmndFlt_Latch_prev);

    /* Outport: '<Root>/VeDTMR_b_Lv2MaxLimFail_RedPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTMR_b_Lv2MaxLimFail_RedPerf'
     */
    (void)Rte_Write_VeDTMR_b_Lv2MaxLimFail_RedPerf_Value
        (rtb_TmpSignalConversionAtVeATRR_b_Lv2Lv1);

    /* Outport: '<Root>/VeDTMR_b_Lv2MaxRegenTorqDiff_FA' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTMR_b_Lv2MaxRegenTorqDiff_FA'
     *  UnitDelay: '<S123>/UnitDelay1'
     */
    (void)Rte_Write_VeDTMR_b_Lv2MaxRegenTorqDiff_FA_Value
        (DTMR_ac_DW.UnitDelay1_DSTATE_as);

    /* Outport: '<Root>/VeDTMR_b_Lv2MinLimFail_RedPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTMR_b_Lv2MinLimFail_RedPerf'
     */
    (void)Rte_Write_VeDTMR_b_Lv2MinLimFail_RedPerf_Value
        (rtb_TmpSignalConversionAtVeSSMR_b_VehSpd);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* Outport: '<Root>/VeDTMR_b_Lv2ReducedPerfMode_DTRChk' incorporates:
     *  Logic: '<S11>/Logical33'
     *  SignalConversion generated from: '<S1>/VeDTMR_b_Lv2ReducedPerfMode_DTRChk'
     */
    (void)Rte_Write_VeDTMR_b_Lv2ReducedPerfMode_DTRChk_Value
        ((VeDTMR_b_Max_Lv2ReducedPerfMode) || (VeDTMC_b_Min_RdPerfmMdForCntCntrl));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDTMR_b_TransOutTrqCmdFlt_PN' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTMR_b_TransOutTrqCmdFlt_PN'
     *  UnitDelay: '<S93>/UnitDelay1'
     */
    (void)Rte_Write_VeDTMR_b_TransOutTrqCmdFlt_PN_Value
        (DTMR_ac_DW.VeDTMR_b_TransOutTrqCmdFlt_PNLatch_prev);

    /* Outport: '<Root>/VeDTMR_b_VehIn_Lv2LashCntrl' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTMR_b_VehIn_Lv2LashCntrl'
     *  UnitDelay: '<S496>/UnitDelay'
     */
    (void)Rte_Write_VeDTMR_b_VehIn_Lv2LashCntrl_Value
        (DTMR_ac_DW.UnitDelay_DSTATE_fb);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMO'
     */
    /* Outport: '<Root>/VeDTMR_e_Lv2DrvMdRaw' incorporates:
     *  DataTypeConversion: '<S665>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDTMR_e_Lv2DrvMdRaw'
     *  Switch: '<S288>/Switch3'
     */
    (void)Rte_Write_VeDTMR_e_Lv2DrvMdRaw_Value((TeSTMR_e_Lv2M182DrvMd)
        VeDTMC_e_Lv2DrvMd);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDTMR_e_FaultSts_CM_Drv_TorqCalcPerf' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPerf'
     */
    (void)Rte_Write_VeDTMR_e_FaultSts_CM_Drv_TorqCalcPerf_Value
        (DTMR_ac_DW.VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPe);

    /* Outport: '<Root>/VeDTMR_e_FaultSts_CM_OPDActivePerf' incorporates:
     *  DataStoreRead: '<S1>/DSR_VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf'
     */
    (void)Rte_Write_VeDTMR_e_FaultSts_CM_OPDActivePerf_Value
        (DTMR_ac_DW.VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf);

    /* Outputs for Atomic SubSystem: '<S1>/DTMR_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S8>/DTMR_FastTEF_StopCheckpoint' */
    Rte_Call_DTMR_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/DTMR_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, DTMR_CODE) DTMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/DTMR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S666>/VeDTMR_e_Lv2DrvMdRaw_Out_Init' incorporates:
     *  Constant: '<S666>/Const1'
     */
    DTMR_ac_B.OutportBufferForVeDTMR_e_Lv2DrvMdRaw_Out = DTMR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S666>/VeDTMR_M_Lv2PtcWhlCcTrqReqRaw_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2PtcWhlCcTrqR = 0.0F;

    /* SignalConversion generated from: '<S666>/VeDTMR_Pct_Lv2AccelPdlPosRaw_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_Pct_Lv2AccelPdlPo = 0.0F;

    /* SignalConversion generated from: '<S666>/VeDTMR_M_Lv2NormalMinTrqRaw_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2NormalMinTrq = 0.0F;

    /* SignalConversion generated from: '<S666>/VeDTMR_M_Lv2AccelPdlWhlTrq_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2AccelPdlWhlT = 0.0F;

    /* SignalConversion generated from: '<S666>/VeDTMR_e_BrkPdlStat_Out_Init' incorporates:
     *  Constant: '<S666>/Const6'
     */
    DTMR_ac_B.OutportBufferForVeDTMR_e_BrkPdlStat_Out_ = DTMR_ac_ConstB.Const6;

    /* SignalConversion generated from: '<S666>/VeDTMR_M_Lv2AxlTrqReq_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2AxlTrqReq_Ou = 0.0F;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2DsblAccelPdlRelatedMntr_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2DsblAccelPdl = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2MaxLimFail_RedPerf_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2MaxLimFail_R = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2MinLimFail_RedPerf_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2MinLimFail_R = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2ReducedPerfMode_DTRChk_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2ReducedPerfM = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_M_Lv2ReducedPrfmTrq_DTRChk_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2ReducedPrfmT = 0.0F;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_DTRcmdFlt_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_DTRcmdFlt_Out_I = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_M_Lv2DriverTorqueReqstSTMR_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2DriverTorque = 0.0F;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2OPD_Selection_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2OPD_Selectio = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2OPDInhibit_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2OPDInhibit_O = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2OPDInhibitHMI_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2OPDInhibitHM = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2_OPD_ON_FA_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2_OPD_ON_FA_O = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2_OPD_ON_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2_OPD_ON_Out_ = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2OPD_EnblCmnd_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2OPD_EnblCmnd = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_M_Lv2OPDMinTrq_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2OPDMinTrq_Ou = 0.0F;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2VehStndStillReq_FA_Out_Init' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2VehStndStill = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPerf' incorporates:
     *  Constant: '<S667>/Constant'
     */
    DTMR_ac_B.OutportBufferForVeDTMR_FUNC_e_FaultSts_C = DTMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S666>/VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf' incorporates:
     *  Constant: '<S668>/Constant'
     */
    DTMR_ac_B.OutportBufferForVeDTMR_FUNC_e_FaultSts_p =
        DTMR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_TransOutTrqCmdFlt_PN' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_TransOutTrqCmdF = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_VehIn_Lv2LashCntrl' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_VehIn_Lv2LashCn = false;

    /* SignalConversion generated from: '<S666>/VeDTMR_b_Lv2MaxRegenTorqDiff_FA_OutInit' */
    DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2MaxRegenTorq = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeDTMR_e_FaultSts_CM_Drv_TorqCalcPerf' incorporates:
     *  SignalConversion generated from: '<S2>/R_VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPerf'
     *  SignalConversion generated from: '<S666>/VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPerf'
     */
    (void)Rte_Write_VeDTMR_e_FaultSts_CM_Drv_TorqCalcPerf_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_FUNC_e_FaultSts_C);

    /* Outport: '<Root>/VeDTMR_e_FaultSts_CM_OPDActivePerf' incorporates:
     *  SignalConversion generated from: '<S2>/R_VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf'
     *  SignalConversion generated from: '<S666>/VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf'
     */
    (void)Rte_Write_VeDTMR_e_FaultSts_CM_OPDActivePerf_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_FUNC_e_FaultSts_p);

    /* Outport: '<Root>/VeDTMR_M_Lv2AccelPdlWhlTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_M_Lv2AccelPdlWhlTrq_Out_Init'
     */
    (void)Rte_Write_VeDTMR_M_Lv2AccelPdlWhlTrq_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2AccelPdlWhlT);

    /* Outport: '<Root>/VeDTMR_M_Lv2AxlTrqReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_M_Lv2AxlTrqReq_Out_Init'
     */
    (void)Rte_Write_VeDTMR_M_Lv2AxlTrqReq_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2AxlTrqReq_Ou);

    /* Outport: '<Root>/VeDTMR_M_Lv2DriverTorqueReqstSTMR' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_M_Lv2DriverTorqueReqstSTMR_Out_Init'
     */
    (void)Rte_Write_VeDTMR_M_Lv2DriverTorqueReqstSTMR_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2DriverTorque);

    /* Outport: '<Root>/VeDTMR_M_Lv2NormalMinTrqRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_M_Lv2NormalMinTrqRaw_Out_Init'
     */
    (void)Rte_Write_VeDTMR_M_Lv2NormalMinTrqRaw_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2NormalMinTrq);

    /* Outport: '<Root>/VeDTMR_M_Lv2OPDMinTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_M_Lv2OPDMinTrq_Out_Init'
     */
    (void)Rte_Write_VeDTMR_M_Lv2OPDMinTrq_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2OPDMinTrq_Ou);

    /* Outport: '<Root>/VeDTMR_M_Lv2PtcWhlCcTrqReqRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_M_Lv2PtcWhlCcTrqReqRaw_Out_Init'
     */
    (void)Rte_Write_VeDTMR_M_Lv2PtcWhlCcTrqReqRaw_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2PtcWhlCcTrqR);

    /* Outport: '<Root>/VeDTMR_M_Lv2ReducedPrfmTrq_DTRChk' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_M_Lv2ReducedPrfmTrq_DTRChk_Out_Init'
     */
    (void)Rte_Write_VeDTMR_M_Lv2ReducedPrfmTrq_DTRChk_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_M_Lv2ReducedPrfmT);

    /* Outport: '<Root>/VeDTMR_Pct_Lv2AccelPdlPosRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_Pct_Lv2AccelPdlPosRaw_Out_Init'
     */
    (void)Rte_Write_VeDTMR_Pct_Lv2AccelPdlPosRaw_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_Pct_Lv2AccelPdlPo);

    /* Outport: '<Root>/VeDTMR_b_DTRcmdFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_DTRcmdFlt_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_DTRcmdFlt_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_DTRcmdFlt_Out_I);

    /* Outport: '<Root>/VeDTMR_b_Lv2DsblAccelPdlRelatedMntr' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2DsblAccelPdlRelatedMntr_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2DsblAccelPdlRelatedMntr_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2DsblAccelPdl);

    /* Outport: '<Root>/VeDTMR_b_Lv2MaxLimFail_RedPerf' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2MaxLimFail_RedPerf_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2MaxLimFail_RedPerf_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2MaxLimFail_R);

    /* Outport: '<Root>/VeDTMR_b_Lv2MaxRegenTorqDiff_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2MaxRegenTorqDiff_FA_OutInit'
     */
    (void)Rte_Write_VeDTMR_b_Lv2MaxRegenTorqDiff_FA_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2MaxRegenTorq);

    /* Outport: '<Root>/VeDTMR_b_Lv2MinLimFail_RedPerf' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2MinLimFail_RedPerf_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2MinLimFail_RedPerf_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2MinLimFail_R);

    /* Outport: '<Root>/VeDTMR_b_Lv2OPDInhibitHMI' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2OPDInhibitHMI_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2OPDInhibitHMI_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2OPDInhibitHM);

    /* Outport: '<Root>/VeDTMR_b_Lv2OPDInhibit' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2OPDInhibit_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2OPDInhibit_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2OPDInhibit_O);

    /* Outport: '<Root>/VeDTMR_b_Lv2OPD_EnblCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2OPD_EnblCmnd_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2OPD_EnblCmnd_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2OPD_EnblCmnd);

    /* Outport: '<Root>/VeDTMR_b_Lv2OPD_Selection' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2OPD_Selection_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2OPD_Selection_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2OPD_Selectio);

    /* Outport: '<Root>/VeDTMR_b_Lv2ReducedPerfMode_DTRChk' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2ReducedPerfMode_DTRChk_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2ReducedPerfMode_DTRChk_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2ReducedPerfM);

    /* Outport: '<Root>/VeDTMR_b_Lv2VehStndStillReq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2VehStndStillReq_FA_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2VehStndStillReq_FA_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2VehStndStill);

    /* Outport: '<Root>/VeDTMR_b_Lv2_OPD_ON_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2_OPD_ON_FA_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2_OPD_ON_FA_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2_OPD_ON_FA_O);

    /* Outport: '<Root>/VeDTMR_b_Lv2_OPD_ON' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_Lv2_OPD_ON_Out_Init'
     */
    (void)Rte_Write_VeDTMR_b_Lv2_OPD_ON_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_Lv2_OPD_ON_Out_);

    /* Outport: '<Root>/VeDTMR_b_TransOutTrqCmdFlt_PN' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_TransOutTrqCmdFlt_PN'
     */
    (void)Rte_Write_VeDTMR_b_TransOutTrqCmdFlt_PN_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_TransOutTrqCmdF);

    /* Outport: '<Root>/VeDTMR_b_VehIn_Lv2LashCntrl' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_b_VehIn_Lv2LashCntrl'
     */
    (void)Rte_Write_VeDTMR_b_VehIn_Lv2LashCntrl_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_b_VehIn_Lv2LashCn);

    /* Outport: '<Root>/VeDTMR_e_BrkPdlStat' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_e_BrkPdlStat_Out_Init'
     *  SignalConversion generated from: '<S666>/VeDTMR_e_BrkPdlStat_Out_Init'
     */
    (void)Rte_Write_VeDTMR_e_BrkPdlStat_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_e_BrkPdlStat_Out_);

    /* Outport: '<Root>/VeDTMR_e_Lv2DrvMdRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTMR_e_Lv2DrvMdRaw_Out_Init'
     *  SignalConversion generated from: '<S666>/VeDTMR_e_Lv2DrvMdRaw_Out_Init'
     */
    (void)Rte_Write_VeDTMR_e_Lv2DrvMdRaw_Value
        (DTMR_ac_B.OutportBufferForVeDTMR_e_Lv2DrvMdRaw_Out);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, DTMR_CODE) DTMR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        DTMR_ac_B.OutportBufferForVeDTMR_e_BrkPdlStat_Out_ =
            CeSTMR_e_BrkStat_NotDtrmnd;
    }

    /* custom signals */
    VeDTMC_e_Lv2DriverMd_Arb = CeDTMR_e_DrvMdTotal_Auto;
    VeDTMC_e_Lv2CANBrk_Arb = CeDTMR_e_BrkStat_NotDtrmnd;
    VeDTMC_e_Lv2HWBrk_Sig_Arb = CeDTMR_e_BrkStat_NotDtrmnd;
    VeDTMC_e_Lv2Brk_Arb = CeDTMR_e_BrkStat_NotDtrmnd;
    VeDTMC_e_Lv2BrkPdlStat = CeDTMR_e_BrkStat_NotDtrmnd;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/DTMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S666>/VeDTMR_e_Lv2DrvMdRaw_Out_Init' incorporates:
     *  Constant: '<S666>/Const1'
     */
    DTMR_ac_B.OutportBufferForVeDTMR_e_Lv2DrvMdRaw_Out = DTMR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S666>/VeDTMR_e_BrkPdlStat_Out_Init' incorporates:
     *  Constant: '<S666>/Const6'
     */
    DTMR_ac_B.OutportBufferForVeDTMR_e_BrkPdlStat_Out_ = DTMR_ac_ConstB.Const6;

    /* SystemInitialize for SignalConversion generated from: '<S666>/VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPerf' incorporates:
     *  Constant: '<S667>/Constant'
     */
    DTMR_ac_B.OutportBufferForVeDTMR_FUNC_e_FaultSts_C = DTMR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S666>/VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf' incorporates:
     *  Constant: '<S668>/Constant'
     */
    DTMR_ac_B.OutportBufferForVeDTMR_FUNC_e_FaultSts_p =
        DTMR_ac_ConstB.Constant_k;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DTMR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTMC'
     */
    /* InitializeConditions for UnitDelay: '<S292>/UnitDelay' */
#if Rte_SysCon_Variant_DTMR_FUNC_1

    DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_M182_Prev = CeDTMR_e_DrvMdTotal_Auto;

#endif

    /* End of InitializeConditions for UnitDelay: '<S292>/UnitDelay' */

    /* InitializeConditions for UnitDelay: '<S293>/UnitDelay1' incorporates:
     *  UnitDelay: '<S304>/UnitDelay1'
     */
#if Rte_SysCon_Variant_DTMR_FUNC_4

    DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev = CeDTMR_e_DrvMdTotal_Auto;

#elif !Rte_SysCon_Variant_DTMR_FUNC_1 && !Rte_SysCon_Variant_DTMR_FUNC_4

    /* InitializeConditions for UnitDelay: '<S304>/UnitDelay1' */
    DTMR_ac_DW.VeDTMC_e_Lv2DriverMd_DTLB_prev_a = CeDTMR_e_DrvMdTotal_Auto;

#endif

    /* End of InitializeConditions for UnitDelay: '<S293>/UnitDelay1' */

    /* InitializeConditions for UnitDelay: '<S287>/UnitDelay1' */
    DTMR_ac_DW.VeDTMC_e_DrvMd_Rng_Prev = CeDTMR_e_DrvMdTotal_Auto;

    /* SystemInitialize for RelationalOperator: '<S159>/Comparison1' incorporates:
     *  Outport: '<S3>/Lv2_BrkPdlStat'
     *  Switch: '<S22>/Switch3'
     */
    VeDTMC_e_Lv2BrkPdlStat = CeDTMR_e_BrkStat_NotDtrmnd;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VeDTMR_e_Lv2DrvMdRaw' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeDTMR_e_Lv2DrvMdRaw_Value(CeSTMR_e_DrvMdM182_Auto);

    /* SystemInitialize for Outport: '<Root>/VeDTMR_e_BrkPdlStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_6'
     */
    (void)Rte_Write_VeDTMR_e_BrkPdlStat_Value(CeSTMR_e_BrkStat_NotDtrmnd);

    /* SystemInitialize for Outport: '<Root>/VeDTMR_e_FaultSts_CM_Drv_TorqCalcPerf' incorporates:
     *  Merge: '<Root>/M_VeDTMR_FUNC_e_FaultSts_CM_Drv_TorqCalcPerf'
     */
    (void)Rte_Write_VeDTMR_e_FaultSts_CM_Drv_TorqCalcPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDTMR_e_FaultSts_CM_OPDActivePerf' incorporates:
     *  Merge: '<Root>/M_VeDTMR_FUNC_e_FaultSts_CM_OPDActivePerf'
     */
    (void)Rte_Write_VeDTMR_e_FaultSts_CM_OPDActivePerf_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
