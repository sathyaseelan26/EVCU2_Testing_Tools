/*
 * File: CCCR_ac.c
 *
 * Code generated for Simulink model 'CCCR_ac'.
 *
 * Model version                  : 9.496
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:12:50 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CCCR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* Named constants for Chart: '<S26>/StateflowChart' */
#if Rte_SysCon_Variant_CCCR_FUNC
#define CCCR_ac_IN_ConstantPowerStage  ((uint8)1U)
#endif

#if Rte_SysCon_Variant_CCCR_FUNC
#define CCCR_ac_IN_ConstantVoltageStage ((uint8)2U)
#endif

#if Rte_SysCon_Variant_CCCR_FUNC
#define CCCR_ac_IN_Default             ((uint8)1U)
#endif

#if Rte_SysCon_Variant_CCCR_FUNC
#define CCCR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_CCCR_FUNC
#define CCCR_ac_IN_Plugged_In          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_CCCR_FUNC
#define CCCR_ac_IN_RelaxStage          ((uint8)3U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CCCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) HeCCCR_b_EnhancedPLS_Enbl = 0;/* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) HeCCCR_t_FnctRate = 0.02F;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) HeCCCR_t_FunCallRate = 0.02F;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) HeCCCR_t_PI_ExecutionRate = 0.02F;/* Referenced by:
                                                                      * '<S110>/Calib'
                                                                      * '<S83>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) HeCCCR_t_dT = 0.02F;/* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KaCCCR_k_LvlPerc[6] =
{
    0.0F, 0.2F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_BPCMChrgCmplt_Dbnc = 0U;/* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_BatFullCheck = 40U;/* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_BattSideCurrCondDbnc =
    16U;                               /* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_DbncCellVltCond = 60U;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_DbncCellVltUprCond = 60U;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_DbncChrgCmplt_BST = 10U;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_DbncPwrChange = 60U;/* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_DbncPwrLimPSA = 0U;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_DbncUnplugPLS = 20U;/* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_Dbnc_BatFull = 2U;/* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_EngOnHighSOC = 120U;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_FrzPIDbnc = 20U;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_HystInitValue = 40U;/* Referenced by:
                                                                      * '<S202>/Calib'
                                                                      * '<S215>/Calib'
                                                                      * '<S231>/Calib'
                                                                      * '<S244>/Calib'
                                                                      * '<S260>/Calib'
                                                                      * '<S273>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_PLS_MaxtToUpdate = 400U;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_PLSdelayProc = 40U;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_SOCCheckDelayCntCP = 50U;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(uint16, CCCR_VAR_INIT) KeCCCR_Cnt_SOCMaxLvl = 5U;/* Referenced by:
                                                                      * '<S42>/Calib'
                                                                      * '<S438>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_BPCMFiltMN = 80.0F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_BatCurrMaxVal = 395.0F;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_BatCurrMinVal = -395.0F;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_BattCrntLimLD = -0.5F;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_BattCrntLimLU = 0.5F;/* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_CV_IV = 6.0F;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_CV_IV_DC = 7.0F;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_ChrgCrntOvrdVal = 3.0F;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_ChrgCrntOvrdValStp3 =
    0.0F;                              /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_DC_CurrTolerance = 0.0F;/* Referenced by: '<S379>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_DischargeCurrHighSOC =
    -30.0F;                            /* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_EVMax_I_Limit = 395.0F;/* Referenced by: '<S380>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_EVSEMaxCurrLmtOvrdVal =
    0.0F;                              /* Referenced by: '<S467>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_ErrorDeb = 0.0F;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_IntegratorFrzdrain =
    -1.0F;                             /* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_KiTerm = 0.75F;/* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_KpTerm = 0.25F;/* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_LD_BatryCmndCurr =
    -0.025F;                           /* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_LD_CurrRq = -100.0F;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_LU_BatryCmndCurr = 0.195F;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_LU_CurrRq = 0.2F;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_LU_CurrRq_DC = 0.4F;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_MaxAllowChrgCrntOvrd =
    185.0F;                            /* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_MinChrgCurr = 3.0F;/* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_MinCurrChrgComplt = -1.7F;/* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_MinIDCMCurrRspThr = 0.15F;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_Step2CC = -0.25F;
                                     /* Referenced by: '<S26>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_V2GPerfLimChrgCurr =
    20.0F;                             /* Referenced by: '<S13>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_I_WiringCrntLim = 395.0F;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_P_EVSEMaxPwrLmtOvrdVal =
    0.0F;                              /* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_P_MinPwrPSAChrg_LSP =
    -999.0F;                           /* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_P_MinPwrPSAChrg_RSP =
    -999.0F;                           /* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_P_PLSminPower = 0.6F;/* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_P_ProgramLimit = 150000.0F;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_BPCMLimitFiltSOC =
    10.0F;                             /* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_EngOnMaxSOC_LSP = 40.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_EngOnMaxSOC_RSP = 45.0F;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_MaxSOC2allowCCStep =
    90.0F;                           /* Referenced by: '<S26>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_MaxSOCAlwd4CP_LSP =
    97.0F;                             /* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_MaxSOCAlwd4CP_RSP =
    98.0F;                             /* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_MaxSOCChrgCmpt_LSP =
    98.0F;                             /* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_MaxSOCChrgCmpt_RSP =
    98.0F;                             /* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_MaxSOC_NoChrg = 99.0F;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_SOCMaxLvlReqZero_LSP =
    79.0F;                             /* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_SOCMaxLvlReqZero_RSP =
    80.0F;                             /* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_SOCMaxLvl_LSP = 79.0F;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_Pct_SOCMaxLvl_RSP = 80.0F;/* Referenced by: '<S444>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_T_BPCMFiltTempHi = 50.0F;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_T_BPCMFiltTempLo = 18.0F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_T_BattHystThresh = 10.0F;/* Referenced by:
                                                                      * '<S197>/Calib'
                                                                      * '<S226>/Calib'
                                                                      * '<S255>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_T_BattHyst_Decr = 1.0F;/* Referenced by:
                                                                      * '<S208>/Calib'
                                                                      * '<S237>/Calib'
                                                                      * '<S266>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_T_BattHyst_Incr = 1.0F;/* Referenced by:
                                                                      * '<S221>/Calib'
                                                                      * '<S250>/Calib'
                                                                      * '<S279>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_BPCMLimitFiltCellVolt =
    3.6F;                              /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_ChrgrVoltReqDefaultVal =
    408.0F;                          /* Referenced by: '<S26>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_EVSEOutputVoltOvrdVal =
    0.0F;                              /* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_KiTerm = 3.0F;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_KiTermDC = 3.0F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_KpTerm = 0.25F;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_KpTermDC = 0.25F;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_LSPCellBalancingValue =
    3.95F;                             /* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MaxCellVlt4CP_LSP = 4.09F;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MaxCellVlt4CP_RSP = 4.19F;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MaxCellVltUprBound =
    4.18F;                             /* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MaxCellVlt_NoChrg =
    4.174F;                            /* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MaxCurrDiff_CV = 10.0F;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MaxCurrDiff_CV_DC = 10.0F;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MaxPackVoltChrg = 383.0F;/* Referenced by: '<S446>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MinCurrDiff_CV = -10.0F;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MinCurrDiff_CV_DC =
    -10.0F;                            /* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_MinVoltB4Step3Alwd =
    4.172F;                          /* Referenced by: '<S26>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_RSPCellBalancingValue =
    4.05F;                             /* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_TrgtCellVlt = 4.172F;/* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_U_TrgtCellVltDC = 4.172F;/* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_AllowBPCMFilt = 1;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_AllowEVSEPwrLim = 1;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_BPCM_ChrgStatOvrd = 0;/* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_BattHyst_Dsbl = 0;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_CITR_PwrLimOvrd = 0;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_CITR_PwrLimReq_FAOvrd = 0;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_CITR_PwrLimReq_FAVal = 0;/* Referenced by: '<S473>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_CabPrecDny_BattCond_Ovrd =
    0;                                 /* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_CabPrecDny_BattCond_Val =
    0;                                 /* Referenced by: '<S475>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_CellBalancingOvrd = 1;/* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_ChrgCmplteCondtnMetOvd =
    0;                                 /* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_ChrgCmplteCondtnMetOvdVal
    = 0;                               /* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_ChrgCrntOvrd = 0;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_ChrgCrntOvrdstp3 = 0;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_EVSEMaxCurrLmtOvrd = 0;/* Referenced by: '<S476>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_EVSEMaxPwrLmtOvrd = 0;/* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_EVSEOutputVoltOvrd = 0;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_EVSE_ProxStat_Ovrd = 0;/* Referenced by: '<S479>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_EnblDsblProxPlgOvrd = 0;/* Referenced by: '<S9>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_FrzPIEnbl = 1;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_HVPerWUTherm_Ovrd = 0;/* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_HVPerWUTherm_Val = 0;/* Referenced by: '<S481>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_PLSCorrectionEnbl = 0;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_PSAOvrd = 0;/* Referenced by: '<S482>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_PSAVal = 0;/* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_PwrLimReq_SgnlRcvdOvrd =
    0;                                 /* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_PwrLimReq_SgnlRcvdVal = 0;/* Referenced by: '<S485>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_RelaxStageEnbl = 0;/* Referenced by:
                                                                      * '<S26>/StateflowChart'
                                                                      * '<S71>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_THMR_Rdy4ShtDwn = 0;/* Referenced by: '<S486>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(boolean, CCCR_VAR_INIT) KeCCCR_b_THMR_RdyOvrd = 0;/* Referenced by: '<S487>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(TeOBCR_e_ChargingStat_BPCM, CCCR_VAR_INIT)
    KeCCCR_e_BPCM_ChrgStatVal = CeOBCR_e_BattNotReady;/* Referenced by: '<S488>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(TeOBCR_e_PwrLimReq, CCCR_VAR_INIT)
    KeCCCR_e_CITR_PwrLimReqVal = CeOBCR_e_PwrLimReq_NoChange;/* Referenced by: '<S489>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(TeOBCR_e_ProxStat_OBCM, CCCR_VAR_INIT)
    KeCCCR_e_EVSE_ProxStat_Val = CeOBCR_e_ProxLo_OBCM;/* Referenced by: '<S490>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_k_BPCMFiltLD = -0.4F;/* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_k_BPCMFiltLU = 100.0F;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_k_LPF_MaxCellVoltCoef =
    0.85F;                             /* Referenced by: '<S491>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_k_PLS_FilterConstD = 0.8F;/* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_k_PLS_FilterConstT = 0.2F;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_t_ChrgCmplteDbnceTime =
    10.0F;                             /* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_t_DbncTimeB4Stp3Alwd = 2.0F;
                                     /* Referenced by: '<S26>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_t_MaxTimeAlwdStp2 = 120.0F;
                                     /* Referenced by: '<S26>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_t_MinTimeB4LatchingRelxStp =
    60.0F;                           /* Referenced by: '<S26>/StateflowChart' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KeCCCR_t_Time4AvgCurrCalc = 30.0F;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KtCCCR_I_BattChrgCrntLimit[28] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 6.75F, 44.1F, 45.0F, 150.0F,
    89.1F, 89.1F, 90.0F, 80.0F, 117.0F, 115.83F, 112.32F, 106.47F, 98.28F,
    87.75F, 74.88F, 59.67F, 42.12F, 22.23F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S302>/Vector'
                                        * '<S303>/Vector'
                                        * '<S304>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KtCCCR_I_ChrgCrntTaper[5] =
{
    90.0F, 45.0F, 27.0F, 18.0F, 0.0F
} ;                                    /* Referenced by: '<S150>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KtCCCR_I_ChrgCrntTaperPk[11] =
{
    90.0F, 81.0F, 72.0F, 63.0F, 54.0F, 45.0F, 36.0F, 34.2F, 32.4F, 16.2F, 15.3F
} ;                                    /* Referenced by: '<S151>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KtCCCR_I_ChrgTypeCrntLim[10] =
{
    0.0F, 12.0F, 16.0F, 0.0F, 0.0F, 150.0F, 0.0F, 12.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S310>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KtCCCR_I_MaxCellCurrTarg[42] =
{
    4.089F, 4.089F, 4.089F, 4.089F, 4.089F, 4.089F, 4.089F, 4.094F, 4.094F,
    4.094F, 4.094F, 4.094F, 4.094F, 4.094F, 4.099F, 4.099F, 4.099F, 4.099F,
    4.099F, 4.099F, 4.099F, 4.104F, 4.104F, 4.104F, 4.104F, 4.104F, 4.104F,
    4.104F, 4.109F, 4.109F, 4.109F, 4.109F, 4.109F, 4.109F, 4.109F, 4.114F,
    4.114F, 4.114F, 4.114F, 4.114F, 4.114F, 4.114F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KtCCCR_I_MinCellCrntTaper[3] =
{
    18.0F, 67.5F, 90.0F
} ;                                    /* Referenced by: '<S152>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KtCCCR_I_SOC_Taper[12] =
{
    90.0F, 81.0F, 72.0F, 67.5F, 63.0F, 58.5F, 54.0F, 45.0F, 36.0F, 27.0F, 18.0F,
    11.7F
} ;                                    /* Referenced by: '<S153>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KxCCCR_I_BattChrgCrntLimit[28] =
{
    -40.0F, -39.0F, -38.0F, -36.0F, -35.0F, -32.0F, -31.0F, -30.0F, -25.0F,
    -10.5F, -10.0F, 0.0F, 5.0F, 10.0F, 10.5F, 25.0F, 35.0F, 36.0F, 37.0F, 38.0F,
    39.0F, 40.0F, 41.0F, 42.0F, 43.0F, 44.0F, 45.0F, 50.0F
} ;                                    /* Referenced by:
                                        * '<S302>/Vector'
                                        * '<S303>/Vector'
                                        * '<S304>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KxCCCR_I_ChrgCrntTaper[5] =
{
    4.11F, 4.12F, 4.13F, 4.14F, 4.145F
} ;                                    /* Referenced by: '<S150>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KxCCCR_I_ChrgCrntTaperPk[11] =
{
    457.01F, 457.2F, 457.4F, 457.6F, 457.8F, 458.0F, 458.2F, 458.4F, 458.6F,
    458.8F, 459.0F
} ;                                    /* Referenced by: '<S151>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KxCCCR_I_ChrgTypeCrntLim[10] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 15.0F
} ;                                    /* Referenced by: '<S310>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KxCCCR_I_MaxCellCurrTarg[7] =
{
    -30.0F, -10.0F, 0.0F, 21.0F, 30.0F, 41.0F, 50.0F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KxCCCR_I_MinCellCrntTaper[3] =
{
    2.8F, 2.9F, 2.99F
} ;                                    /* Referenced by: '<S152>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KxCCCR_I_SOC_Taper[12] =
{
    90.0F, 91.0F, 91.5F, 92.0F, 92.5F, 93.0F, 93.5F, 94.0F, 94.5F, 95.0F, 95.5F,
    96.0F
} ;                                    /* Referenced by: '<S153>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static volatile CONST(float32, CCCR_VAR_INIT) KyCCCR_I_MaxCellCurrTarg[6] =
{
    0.0F, 2.1F, 4.0F, 6.0F, 8.1F, 10.0F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CCCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VaCCCR_k_PLS_RawPwrLev[5];/* '<S328>/Switch4' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_BPCMFilt;/* '<S169>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_BPCMLimFlt;/* '<S168>/Sum3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_BatCurrAfterFilter;/* '<S108>/Sum3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_BattLimCrnt;/* '<S287>/Merge' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_ChargingErrorDebounce;/* '<S107>/Switch' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_ChrgCrntReqDeltaStep3;/* '<S63>/Switch6' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_ChrgSysStatTestSig1;/* '<S163>/Abs' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_ChrgSysStatTestSig2;/* '<S183>/Switch3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_ChrgrLimCrnt;/* '<S384>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_CurrPID_Output;/* '<S130>/Switch' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_CurrPID_Output_DragAndDrop;/* '<S99>/Switch' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_EVSEMaxCurrLmt;/* '<S5>/Switch31' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_HWBounds;/* '<S11>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_Input2Integrator;/* '<S27>/Product3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_IntegratorOutput;/* '<S136>/Switch' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_MaxAllwCurr;/* '<S25>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_MaxCellCurrTargCal;/* '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_MiscLimCrnt;/* '<S318>/Merge' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_ModLimCrnt;/* '<S386>/Merge' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_PTermOutput;/* '<S27>/Product2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_PwrLimCurrent;/* '<S327>/Switch5' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_I_TargetCurr;/* '<S38>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_K_ChargingSystemDtrm;/* '<S76>/Gain' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_P_EVSEMaxPwrLmt;/* '<S5>/Switch28' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_P_PLS_MaxPnoFilter;/* '<S328>/Switch3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_P_PLS_MaxPower;/* '<S328>/Switch2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_P_PLS_MinPower;/* '<S328>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_BatMaxTempFilt;/* '<S164>/Switch2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_BatMinTempFilt;/* '<S164>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_BatModTempFilt;/* '<S164>/Switch' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_BattTempFiltAvg;/* '<S196>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_BattTempFiltMax;/* '<S225>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_BattTempFiltMin;/* '<S254>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_Hyst_Cold;/* '<S194>/Merge6' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_Hyst_Cold10;/* '<S194>/MinMax2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_Cold12;/* '<S194>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_Cold13;/* '<S194>/Comparison3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_Cold3;/* '<S194>/Merge1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_Cold4;/* '<S194>/Merge2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_Hyst_Cold9;/* '<S198>/Merge' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_Hyst_Hot;/* '<S195>/Merge2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_Hyst_MaxCold;/* '<S223>/Merge6' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_MaxCold12;/* '<S223>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_MaxCold13;/* '<S223>/Comparison3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_MaxCold3;/* '<S223>/Merge1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_MaxCold4;/* '<S223>/Merge2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_Hyst_MaxHot;/* '<S224>/Merge2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_Hyst_MinCold;/* '<S252>/Merge6' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_MinCold12;/* '<S252>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_MinCold13;/* '<S252>/Comparison3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_MinCold3;/* '<S252>/Merge1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_T_Hyst_MinCold4;/* '<S252>/Merge2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_T_Hyst_MinHot;/* '<S253>/Merge2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_U_EVSEOutputVolt;/* '<S5>/Switch24' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_U_HV_BatVoltModMaxArbFil;/* '<S466>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_U_Input2IntegratorV;/* '<S63>/Product3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_U_IntegratorOutputV;/* '<S100>/Switch' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_U_PTermOutput;/* '<S63>/Product2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_AllowBPCMFilt;/* '<S162>/Logical3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_BatFull_Test2;/* '<S455>/AND' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_BatFull_Test3;/* '<S395>/Logical18' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_BatFull_Test4;/* '<S395>/Logical1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_BatFull_Test6;/* '<S452>/OR1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_CV_Mode;/* '<S72>/Gain' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_CellVltCondMet;/* '<S80>/AND' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet1;/* '<S395>/Logical2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet10;/* '<S395>/Logical16' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet11;/* '<S395>/Logical' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet2;/* '<S395>/Logical9' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet3;/* '<S395>/Comparison10' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet4;/* '<S395>/Logical26' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet5;/* '<S395>/Logical5' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet6;/* '<S395>/Logical6' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet8;/* '<S432>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ChrgCmplteCondtnMet9;/* '<S453>/OR1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_EnableCurrRq;/* '<S37>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_FrzSignal;/* '<S132>/AND' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_HVBatPerWUThermal;/* '<S5>/Logical1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Debug12;/* '<S195>/Comparison' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Debug13;/* '<S195>/Comparison3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Debug3;/* '<S195>/Merge' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Debug4;/* '<S195>/Merge1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Max12;/* '<S224>/Comparison' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Max13;/* '<S224>/Comparison3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Max3;/* '<S224>/Merge' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Max4;/* '<S224>/Merge1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Min12;/* '<S253>/Comparison' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Min13;/* '<S253>/Comparison3' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Min3;/* '<S253>/Merge' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_Hyst_Min4;/* '<S253>/Merge1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_NoChargeComplete;/* '<S395>/Logical8' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PLS_OkToCalc;/* '<S363>/AND' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PLS_UpdateLevels;/* '<S328>/Logical2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PSAChrgTest1;/* '<S34>/Switch1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PSAChrgTest2;/* '<S55>/AND' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PSAChrgTest3;/* '<S25>/Logical9' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PSAChrgTest5;/* '<S25>/Logical2' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PSAChrgTest6;/* '<S25>/Switch5' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PSA_Test;/* '<S25>/Logical1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PropSysActv;/* '<S5>/Switch4' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PwrLimReq_FA;/* '<S5>/Switch17' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_PwrLimReq_SgnlRcvd;/* '<S5>/Switch20' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_ReqZero;/* '<S25>/Logical11' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(boolean, CCCR_VAR_INIT) VeCCCR_b_THMR_RdyForShtDwn;/* '<S5>/Switch8' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(TeOBCR_e_ChargingStat_BPCM, CCCR_VAR_INIT) VeCCCR_e_BPCM_ChrgStat_In;/* '<S5>/Switch15' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(TeOBCR_e_OB_ChrgPwrLimID, CCCR_VAR_INIT) VeCCCR_e_BattLimID_Min;/* '<S287>/Merge1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(TeOBCR_e_ProxStat_OBCM, CCCR_VAR_INIT) VeCCCR_e_EVSE_ProxStat_In;/* '<S5>/Switch59' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(TeOBCR_e_OB_ChrgPwrLimID, CCCR_VAR_INIT) VeCCCR_e_MiscLimCrntID;/* '<S318>/Merge1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(TeOBCR_e_OB_ChrgPwrLimID, CCCR_VAR_INIT) VeCCCR_e_ModLimID;/* '<S386>/Merge1' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(TeOBCR_e_PwrLimReq, CCCR_VAR_INIT) VeCCCR_e_PwrLimReq;/* '<S5>/Switch16' */

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static VAR(float32, CCCR_VAR_INIT) VeCCCR_k_PLS_ChosenPwrLev;/* '<S328>/Merge' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CCCR
#include "MemMap.h"

CONST(ConstB_CCCR_ac_T, CCCR_VAR_INIT) CCCR_ac_ConstB =
{

#if Rte_SysCon_Variant_CCCR_FUNC

    CeOBCR_e_MaxCellVolt_NotReached,   /* '<S430>/Constant' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S253>/If Action Subsystem1' */
    {
        /* Start of '<S212>/If Action Subsystem1' */
        {
            1                          /* '<S278>/TRUE Constant' */
        }
        /* End of '<S212>/If Action Subsystem1' */
    }
    ,

    /* End of '<S253>/If Action Subsystem1' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S253>/If Action Subsystem' */
    {
        1                              /* '<S276>/TRUE Constant' */
    }
    ,

    /* End of '<S253>/If Action Subsystem' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S252>/If Action Subsystem2' */
    {
        1                              /* '<S265>/TRUE Constant' */
    }
    ,

    /* End of '<S252>/If Action Subsystem2' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S252>/If Action Subsystem1' */
    {
        /* Start of '<S227>/If Action Subsystem1' */
        {
            1                          /* '<S263>/TRUE Constant' */
        }
        /* End of '<S227>/If Action Subsystem1' */
    }
    ,

    /* End of '<S252>/If Action Subsystem1' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S224>/If Action Subsystem1' */
    {
        /* Start of '<S212>/If Action Subsystem1' */
        {
            1                          /* '<S249>/TRUE Constant' */
        }
        /* End of '<S212>/If Action Subsystem1' */
    }
    ,

    /* End of '<S224>/If Action Subsystem1' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S224>/If Action Subsystem' */
    {
        1                              /* '<S247>/TRUE Constant' */
    }
    ,

    /* End of '<S224>/If Action Subsystem' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S223>/If Action Subsystem2' */
    {
        1                              /* '<S236>/TRUE Constant' */
    }
    ,

    /* End of '<S223>/If Action Subsystem2' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S223>/If Action Subsystem1' */
    {
        /* Start of '<S227>/If Action Subsystem1' */
        {
            1                          /* '<S234>/TRUE Constant' */
        }
        /* End of '<S227>/If Action Subsystem1' */
    }
    ,

    /* End of '<S223>/If Action Subsystem1' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S195>/If Action Subsystem1' */
    {
        /* Start of '<S212>/If Action Subsystem1' */
        {
            1                          /* '<S220>/TRUE Constant' */
        }
        /* End of '<S212>/If Action Subsystem1' */
    }
    ,

    /* End of '<S195>/If Action Subsystem1' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S195>/If Action Subsystem' */
    {
        1                              /* '<S218>/TRUE Constant' */
    }
    ,

    /* End of '<S195>/If Action Subsystem' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S194>/If Action Subsystem2' */
    {
        1                              /* '<S207>/TRUE Constant' */
    }
    ,

    /* End of '<S194>/If Action Subsystem2' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Start of '<S198>/If Action Subsystem1' */
    {
        1                              /* '<S205>/TRUE Constant' */
    }
    /* End of '<S198>/If Action Subsystem1' */
#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif
#ifndef CONSTB_CCCR_AC_T_VARIANT_EXISTS
    0
#endif                           /* CONSTB_CCCR_AC_T_VARIANT_EXISTS undefined */
};

#define STOP_SEC_CONST_UNSPECIFIED_CCCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CCCR
#include "MemMap.h"

CONST(ConstP_CCCR_ac_T, CCCR_VAR_INIT) CCCR_ac_ConstP =
{

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S182>/Vector'
     */
    {
        6U, 5U
    },

#endif

#ifndef CONSTP_CCCR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_CCCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"

VAR(B_CCCR_ac_T, CCCR_VAR_INIT) CCCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"

VAR(DW_CCCR_ac_T, CCCR_VAR_INIT) CCCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem3(VAR(float32,
    AUTOMATIC) rtu_Init_Temp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Init_Temp);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem1_Init(P2VAR
    (B_IfActionSubsystem1_CCCR_ac_T, AUTOMATIC, CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem1(VAR(float32,
    AUTOMATIC) rtu_OutTemp, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_OutTemp_Out, P2VAR(B_IfActionSubsystem1_CCCR_ac_T, AUTOMATIC,
    CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem2_Init(P2VAR
    (B_IfActionSubsystem2_CCCR_ac_T, AUTOMATIC, CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem2(VAR(float32,
    AUTOMATIC) rtu_OutTemp_In, VAR(boolean, AUTOMATIC) rtu_FirstIncrFlag, VAR
    (float32, AUTOMATIC) rtu_ActTemp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Temp, P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstDecrFlag_Out,
    P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstIncrFlag_Out, P2VAR
    (B_IfActionSubsystem2_CCCR_ac_T, AUTOMATIC, CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_a_IfActionSubsystem_o_Init(P2VAR
    (B_IfActionSubsystem_CCCR_ac_j_T, AUTOMATIC, CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem_b(VAR(boolean,
    AUTOMATIC) rtu_FirstIncrFlag, VAR(float32, AUTOMATIC) rtu_OutTemp_In, VAR
    (float32, AUTOMATIC) rtu_ActTemp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Temp, P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstIncrFlag_Out,
    P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstDecrFlag_Out, P2VAR
    (B_IfActionSubsystem_CCCR_ac_j_T, AUTOMATIC, CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR__IfActionSubsystem1_m_Init(P2VAR
    (B_IfActionSubsystem1_CCCR_a_f_T, AUTOMATIC, CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem1_g(VAR(float32,
    AUTOMATIC) rtu_OutTemp_In, VAR(boolean, AUTOMATIC) rtu_FirstDecrFlag, VAR
    (float32, AUTOMATIC) rtu_ActTemp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Temp, P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstIncrFlag_Out,
    P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstDecrFlag_Out, P2VAR
    (B_IfActionSubsystem1_CCCR_a_f_T, AUTOMATIC, CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem2_n(VAR(float32,
    AUTOMATIC) rtu_OutTemp, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_OutTemp_Out);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR__IfActionSubsystem1_j_Init(P2VAR
    (B_IfActionSubsystem1_CCCR_a_i_T, AUTOMATIC, CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem1_j(VAR(boolean,
    AUTOMATIC) rtu_FirstDecrFlag, VAR(float32, AUTOMATIC) rtu_OutTemp_In, VAR
    (float32, AUTOMATIC) rtu_ActTemp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Temp, P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstDecrFlag_Out,
    P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstIncrFlag_Out, P2VAR
    (B_IfActionSubsystem1_CCCR_a_i_T, AUTOMATIC, CCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_SwitchCaseActionSubsystem6(VAR(float32,
    AUTOMATIC) rtu_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT) rty_Out);

#endif

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_FUNC_Init(P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_ChrgCrntReqDelta_O, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_U_VoltRq_Out_Init, P2VAR(TeOBCR_e_HVBattBalReq,
    AUTOMATIC, CCCR_VAR_INIT) rty_VeCCCR_e_HVBattBalReq_Out_I, P2VAR(float32,
    AUTOMATIC, CCCR_VAR_INIT) rty_VeCCCR_I_MaxAllowedCurr_Out, P2VAR
    (TeOBCR_e_BattPckVoltRchdBST, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_e_BattPckVoltRchd_BS, P2VAR(TeOBCR_e_SOCReachedBST, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_e_SOCRchd_BST_Out_In, P2VAR
    (TeOBCR_e_MaxCellVoltRchdBST, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_e_MaxCellVoltRchd_BS, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev1_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev2_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev3_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev4_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev5_Out_In, P2VAR(TeOBCR_e_PwrLimReq, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_e_PwrLevSet_Out_Init, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_ChrgCmplteCondtnMe, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_ChrgTypeHWLim_Out_, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_BattCommandedCurr_, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_PwrLevActive_Out_I, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_HWCurrentBound_Out, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_PLS_ReducedCurr_Ou, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_SOC_LvlSet_80_Out_);
static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_FUNC(P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_ChrgCrntReqDelta_O, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_U_VoltRq_Out_Init, P2VAR(TeOBCR_e_HVBattBalReq,
    AUTOMATIC, CCCR_VAR_INIT) rty_VeCCCR_e_HVBattBalReq_Out_I, P2VAR(float32,
    AUTOMATIC, CCCR_VAR_INIT) rty_VeCCCR_I_MaxAllowedCurr_Out, P2VAR
    (TeOBCR_e_BattPckVoltRchdBST, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_e_BattPckVoltRchd_BS, P2VAR(TeOBCR_e_SOCReachedBST, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_e_SOCRchd_BST_Out_In, P2VAR
    (TeOBCR_e_MaxCellVoltRchdBST, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_e_MaxCellVoltRchd_BS, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev1_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev2_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev3_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev4_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev5_Out_In, P2VAR(TeOBCR_e_PwrLimReq, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_e_PwrLevSet_Out_Init, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_ChrgCmplteCondtnMe, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_ChrgTypeHWLim_Out_, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_BattCommandedCurr_, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_PwrLevActive_Out_I, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_HWCurrentBound_Out, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_PLS_ReducedCurr_Ou, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_SOC_LvlSet_80_Out_);

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_ChrgComplDet_Update(void);

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_ChrgComplDet(void);

#endif

/*
 * Output and update for action system:
 *    '<S194>/If Action Subsystem3'
 *    '<S195>/If Action Subsystem3'
 *    '<S223>/If Action Subsystem3'
 *    '<S224>/If Action Subsystem3'
 *    '<S252>/If Action Subsystem3'
 *    '<S253>/If Action Subsystem3'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem3(VAR(float32,
    AUTOMATIC) rtu_Init_Temp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Init_Temp)
{
    /* Inport: '<S200>/Init_Temp_In' */
    *rty_Init_Temp = rtu_Init_Temp_In;
}

#endif

/*
 * Output and update for action system:
 *    '<S198>/If Action Subsystem'
 *    '<S199>/If Action Subsystem'
 *    '<S211>/If Action Subsystem'
 *    '<S212>/If Action Subsystem'
 *    '<S227>/If Action Subsystem'
 *    '<S228>/If Action Subsystem'
 *    '<S240>/If Action Subsystem'
 *    '<S241>/If Action Subsystem'
 *    '<S256>/If Action Subsystem'
 *    '<S257>/If Action Subsystem'
 *    ...
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S204>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/*
 * System initialize for action system:
 *    '<S198>/If Action Subsystem1'
 *    '<S212>/If Action Subsystem1'
 *    '<S227>/If Action Subsystem1'
 *    '<S241>/If Action Subsystem1'
 *    '<S256>/If Action Subsystem1'
 *    '<S270>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem1_Init(P2VAR
    (B_IfActionSubsystem1_CCCR_ac_T, AUTOMATIC, CCCR_VAR_INIT) localB)
{
    /* SystemInitialize for SignalConversion generated from: '<S205>/FirstDecrFlag_Out' */
    localB->OutportBufferForFirstDecrFlag_O = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S198>/If Action Subsystem1'
 *    '<S212>/If Action Subsystem1'
 *    '<S227>/If Action Subsystem1'
 *    '<S241>/If Action Subsystem1'
 *    '<S256>/If Action Subsystem1'
 *    '<S270>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem1(VAR(float32,
    AUTOMATIC) rtu_OutTemp, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_OutTemp_Out, P2VAR(B_IfActionSubsystem1_CCCR_ac_T, AUTOMATIC,
    CCCR_VAR_INIT) localB)
{
    /* Inport: '<S205>/OutTemp' */
    *rty_OutTemp_Out = rtu_OutTemp;

    /* SignalConversion generated from: '<S205>/FirstDecrFlag_Out' */
    localB->OutportBufferForFirstDecrFlag_O = true;
}

#endif

/*
 * System initialize for action system:
 *    '<S194>/If Action Subsystem2'
 *    '<S223>/If Action Subsystem2'
 *    '<S252>/If Action Subsystem2'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem2_Init(P2VAR
    (B_IfActionSubsystem2_CCCR_ac_T, AUTOMATIC, CCCR_VAR_INIT) localB)
{
    /* SystemInitialize for IfAction SubSystem: '<S199>/If Action Subsystem1' */
    /* SystemInitialize for SignalConversion generated from: '<S207>/FirstIncrFlag_Out' */
    localB->OutportBufferForFirstIncrFlag_O = true;

    /* End of SystemInitialize for SubSystem: '<S199>/If Action Subsystem1' */
}

#endif

/*
 * Output and update for action system:
 *    '<S194>/If Action Subsystem2'
 *    '<S223>/If Action Subsystem2'
 *    '<S252>/If Action Subsystem2'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem2(VAR(float32,
    AUTOMATIC) rtu_OutTemp_In, VAR(boolean, AUTOMATIC) rtu_FirstIncrFlag, VAR
    (float32, AUTOMATIC) rtu_ActTemp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Temp, P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstDecrFlag_Out,
    P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstIncrFlag_Out, P2VAR
    (B_IfActionSubsystem2_CCCR_ac_T, AUTOMATIC, CCCR_VAR_INIT) localB)
{
    /* If: '<S199>/If' incorporates:
     *  Constant: '<S208>/Calib'
     *  Sum: '<S199>/Sum1'
     */
    if (rtu_FirstIncrFlag)
    {
        /* Outputs for IfAction SubSystem: '<S199>/If Action Subsystem' incorporates:
         *  ActionPort: '<S206>/Action Port'
         */
        CCCR_ac_IfActionSubsystem(rtu_ActTemp_In - KeCCCR_T_BattHyst_Decr,
            rty_Temp);

        /* End of Outputs for SubSystem: '<S199>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S199>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S207>/Action Port'
         */
        /* Gain: '<S209>/Gain' */
        *rty_Temp = rtu_OutTemp_In;

        /* SignalConversion generated from: '<S207>/FirstIncrFlag_Out' */
        localB->OutportBufferForFirstIncrFlag_O = true;

        /* End of Outputs for SubSystem: '<S199>/If Action Subsystem1' */
    }

    /* End of If: '<S199>/If' */

    /* SignalConversion generated from: '<S199>/FirstIncrFlag_Out' */
    *rty_FirstIncrFlag_Out = localB->OutportBufferForFirstIncrFlag_O;

    /* SignalConversion generated from: '<S199>/FirstDecrFlag_Out' incorporates:
     *  Constant: '<S199>/FALSE Constant'
     */
    *rty_FirstDecrFlag_Out = false;
}

#endif

/*
 * System initialize for action system:
 *    '<S195>/If Action Subsystem'
 *    '<S224>/If Action Subsystem'
 *    '<S253>/If Action Subsystem'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_a_IfActionSubsystem_o_Init(P2VAR
    (B_IfActionSubsystem_CCCR_ac_j_T, AUTOMATIC, CCCR_VAR_INIT) localB)
{
    /* SystemInitialize for IfAction SubSystem: '<S211>/If Action Subsystem1' */
    /* SystemInitialize for SignalConversion generated from: '<S218>/FirstIncrFlag_Out' */
    localB->OutportBufferForFirstIncrFlag_O = true;

    /* End of SystemInitialize for SubSystem: '<S211>/If Action Subsystem1' */
}

#endif

/*
 * Output and update for action system:
 *    '<S195>/If Action Subsystem'
 *    '<S224>/If Action Subsystem'
 *    '<S253>/If Action Subsystem'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem_b(VAR(boolean,
    AUTOMATIC) rtu_FirstIncrFlag, VAR(float32, AUTOMATIC) rtu_OutTemp_In, VAR
    (float32, AUTOMATIC) rtu_ActTemp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Temp, P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstIncrFlag_Out,
    P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstDecrFlag_Out, P2VAR
    (B_IfActionSubsystem_CCCR_ac_j_T, AUTOMATIC, CCCR_VAR_INIT) localB)
{
    /* If: '<S211>/If' incorporates:
     *  Inport: '<S218>/OutTemp'
     */
    if (rtu_FirstIncrFlag)
    {
        /* Outputs for IfAction SubSystem: '<S211>/If Action Subsystem' incorporates:
         *  ActionPort: '<S217>/Action Port'
         */
        CCCR_ac_IfActionSubsystem(rtu_ActTemp_In, rty_Temp);

        /* End of Outputs for SubSystem: '<S211>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S211>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S218>/Action Port'
         */
        *rty_Temp = rtu_OutTemp_In;

        /* SignalConversion generated from: '<S218>/FirstIncrFlag_Out' incorporates:
         *  Inport: '<S218>/OutTemp'
         */
        localB->OutportBufferForFirstIncrFlag_O = true;

        /* End of Outputs for SubSystem: '<S211>/If Action Subsystem1' */
    }

    /* End of If: '<S211>/If' */

    /* SignalConversion generated from: '<S211>/FirstIncrFlag_Out' */
    *rty_FirstIncrFlag_Out = localB->OutportBufferForFirstIncrFlag_O;

    /* SignalConversion generated from: '<S211>/FirstDecrFlag_Out' incorporates:
     *  Constant: '<S211>/FALSE Constant'
     */
    *rty_FirstDecrFlag_Out = false;
}

#endif

/*
 * System initialize for action system:
 *    '<S195>/If Action Subsystem1'
 *    '<S224>/If Action Subsystem1'
 *    '<S253>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR__IfActionSubsystem1_m_Init(P2VAR
    (B_IfActionSubsystem1_CCCR_a_f_T, AUTOMATIC, CCCR_VAR_INIT) localB)
{
    /* SystemInitialize for IfAction SubSystem: '<S212>/If Action Subsystem1' */
    CCCR_ac_IfActionSubsystem1_Init(&localB->IfActionSubsystem1);

    /* End of SystemInitialize for SubSystem: '<S212>/If Action Subsystem1' */
}

#endif

/*
 * Output and update for action system:
 *    '<S195>/If Action Subsystem1'
 *    '<S224>/If Action Subsystem1'
 *    '<S253>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem1_g(VAR(float32,
    AUTOMATIC) rtu_OutTemp_In, VAR(boolean, AUTOMATIC) rtu_FirstDecrFlag, VAR
    (float32, AUTOMATIC) rtu_ActTemp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Temp, P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstIncrFlag_Out,
    P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstDecrFlag_Out, P2VAR
    (B_IfActionSubsystem1_CCCR_a_f_T, AUTOMATIC, CCCR_VAR_INIT) localB)
{
    /* If: '<S212>/If' incorporates:
     *  Constant: '<S221>/Calib'
     *  Sum: '<S212>/Sum1'
     */
    if (rtu_FirstDecrFlag)
    {
        /* Outputs for IfAction SubSystem: '<S212>/If Action Subsystem' incorporates:
         *  ActionPort: '<S219>/Action Port'
         */
        CCCR_ac_IfActionSubsystem(rtu_ActTemp_In + KeCCCR_T_BattHyst_Incr,
            rty_Temp);

        /* End of Outputs for SubSystem: '<S212>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S212>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S220>/Action Port'
         */
        CCCR_ac_IfActionSubsystem1(rtu_OutTemp_In, rty_Temp,
            &localB->IfActionSubsystem1);

        /* End of Outputs for SubSystem: '<S212>/If Action Subsystem1' */
    }

    /* End of If: '<S212>/If' */

    /* SignalConversion generated from: '<S212>/FirstDecrFlag_Out' */
    *rty_FirstDecrFlag_Out =
        localB->IfActionSubsystem1.OutportBufferForFirstDecrFlag_O;

    /* SignalConversion generated from: '<S212>/FirstIncrFlag_Out' incorporates:
     *  Constant: '<S212>/FALSE Constant'
     */
    *rty_FirstIncrFlag_Out = false;
}

#endif

/*
 * Output and update for action system:
 *    '<S195>/If Action Subsystem2'
 *    '<S223>/If Action Subsystem6'
 *    '<S224>/If Action Subsystem2'
 *    '<S252>/If Action Subsystem6'
 *    '<S253>/If Action Subsystem2'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem2_n(VAR(float32,
    AUTOMATIC) rtu_OutTemp, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_OutTemp_Out)
{
    /* Inport: '<S213>/OutTemp' */
    *rty_OutTemp_Out = rtu_OutTemp;
}

#endif

/*
 * System initialize for action system:
 *    '<S223>/If Action Subsystem1'
 *    '<S252>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR__IfActionSubsystem1_j_Init(P2VAR
    (B_IfActionSubsystem1_CCCR_a_i_T, AUTOMATIC, CCCR_VAR_INIT) localB)
{
    /* SystemInitialize for IfAction SubSystem: '<S227>/If Action Subsystem1' */
    CCCR_ac_IfActionSubsystem1_Init(&localB->IfActionSubsystem1);

    /* End of SystemInitialize for SubSystem: '<S227>/If Action Subsystem1' */
}

#endif

/*
 * Output and update for action system:
 *    '<S223>/If Action Subsystem1'
 *    '<S252>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_IfActionSubsystem1_j(VAR(boolean,
    AUTOMATIC) rtu_FirstDecrFlag, VAR(float32, AUTOMATIC) rtu_OutTemp_In, VAR
    (float32, AUTOMATIC) rtu_ActTemp_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_Temp, P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstDecrFlag_Out,
    P2VAR(boolean, AUTOMATIC, CCCR_VAR_INIT) rty_FirstIncrFlag_Out, P2VAR
    (B_IfActionSubsystem1_CCCR_a_i_T, AUTOMATIC, CCCR_VAR_INIT) localB)
{
    /* If: '<S227>/If' */
    if (rtu_FirstDecrFlag)
    {
        /* Outputs for IfAction SubSystem: '<S227>/If Action Subsystem' incorporates:
         *  ActionPort: '<S233>/Action Port'
         */
        CCCR_ac_IfActionSubsystem(rtu_ActTemp_In, rty_Temp);

        /* End of Outputs for SubSystem: '<S227>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S227>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S234>/Action Port'
         */
        CCCR_ac_IfActionSubsystem1(rtu_OutTemp_In, rty_Temp,
            &localB->IfActionSubsystem1);

        /* End of Outputs for SubSystem: '<S227>/If Action Subsystem1' */
    }

    /* End of If: '<S227>/If' */

    /* SignalConversion generated from: '<S227>/FirstDecrFlag_Out' */
    *rty_FirstDecrFlag_Out =
        localB->IfActionSubsystem1.OutportBufferForFirstDecrFlag_O;

    /* SignalConversion generated from: '<S227>/FirstIncrFlag_Out' incorporates:
     *  Constant: '<S227>/FALSE Constant'
     */
    *rty_FirstIncrFlag_Out = false;
}

#endif

/*
 * Output and update for action system:
 *    '<S328>/Switch Case Action Subsystem6'
 *    '<S328>/Switch Case Action Subsystem2'
 *    '<S328>/Switch Case Action Subsystem3'
 *    '<S328>/Switch Case Action Subsystem4'
 *    '<S328>/Switch Case Action Subsystem5'
 *    '<S328>/Switch Case Action Subsystem1'
 */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_SwitchCaseActionSubsystem6(VAR(float32,
    AUTOMATIC) rtu_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT) rty_Out)
{
    /* Inport: '<S362>/In' */
    *rty_Out = rtu_In;
}

#endif

/* Outputs for atomic system: '<S7>/ChrgComplDet' */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_ChrgComplDet(void)
{
    float32 rtb_Switch1;
    uint16 rtb_FloatToFix;
    uint16 u1;
    TeOBCR_e_ChargingLevel VeCCCR_b_ChrgCmplteCondtnMet1_t;
    TeOBCR_e_ChrgSysStat rtb_Logical1_tmp;
    TePMDR_e_PowerMode Logical12_tmp;
    boolean Switch1_f;
    boolean rtb_AND_aq;
    boolean rtb_Comparison19;
    boolean rtb_Logical1;
    boolean rtb_Logical15;
    boolean rtb_OR1_e1;
    boolean rtb_OR1_h4;
    boolean rtb_OR1_nje;

    /* RelationalOperator: '<S12>/Comparison11' incorporates:
     *  RelationalOperator: '<S12>/Comparison2'
     *  RelationalOperator: '<S395>/Comparison14'
     *  RelationalOperator: '<S395>/Comparison16'
     *  RelationalOperator: '<S395>/Comparison20'
     *  RelationalOperator: '<S395>/Comparison26'
     *  RelationalOperator: '<S395>/Comparison3'
     *  UnitDelay: '<S12>/Unit Delay1'
     */
    rtb_Logical1_tmp = CCCR_ac_DW.UnitDelay1_DSTATE_a;

    /* Logic: '<S12>/Logical1' incorporates:
     *  Constant: '<S396>/Constant'
     *  Constant: '<S397>/Constant'
     *  RelationalOperator: '<S12>/Comparison11'
     *  RelationalOperator: '<S12>/Comparison2'
     */
    rtb_Logical1 = ((CeOBCR_e_ChargingPaused == ((uint32)rtb_Logical1_tmp)) ||
                    (((uint32)rtb_Logical1_tmp) == CeOBCR_e_Charging));

    /* If: '<S394>/If' */
    if (rtb_Logical1)
    {
        /* Outputs for IfAction SubSystem: '<S394>/RequestON' incorporates:
         *  ActionPort: '<S399>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S399>/Hysteresis' */
        /* Switch: '<S400>/Switch1' incorporates:
         *  Constant: '<S403>/Calib'
         *  RelationalOperator: '<S400>/Greater  Than'
         */
        if (VeCCCR_U_HV_BatVoltModMaxArbFil > KeCCCR_U_RSPCellBalancingValue)
        {
            /* Switch: '<S400>/Switch1' incorporates:
             *  Constant: '<S400>/Constant Value'
             */
            Switch1_f = true;
        }
        else
        {
            /* Switch: '<S400>/Switch1' incorporates:
             *  Constant: '<S402>/Calib'
             *  RelationalOperator: '<S400>/Greater  Than1'
             *  UnitDelay: '<S400>/Unit Delay'
             */
            Switch1_f = ((VeCCCR_U_HV_BatVoltModMaxArbFil >=
                          KeCCCR_U_LSPCellBalancingValue) &&
                         (CCCR_ac_DW.UnitDelay_DSTATE_em));
        }

        /* End of Switch: '<S400>/Switch1' */

        /* Update for UnitDelay: '<S400>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_em = Switch1_f;

        /* End of Outputs for SubSystem: '<S399>/Hysteresis' */

        /* Switch: '<S399>/Switch' incorporates:
         *  Constant: '<S404>/Calib'
         *  Switch: '<S401>/Switch1'
         */
        if (KeCCCR_b_CellBalancingOvrd)
        {
            /* Merge: '<S4>/Merge4' incorporates:
             *  Constant: '<S399>/Constant Value2'
             */
            CCCR_ac_B.Merge4 = CeOBCR_e_NoRequest;
        }
        else if (Switch1_f)
        {
            /* Switch: '<S401>/Switch1' incorporates:
             *  Constant: '<S399>/Constant Value'
             *  Merge: '<S4>/Merge4'
             */
            CCCR_ac_B.Merge4 = CeOBCR_e_RequestNotBalance;
        }
        else
        {
            /* Merge: '<S4>/Merge4' incorporates:
             *  Constant: '<S399>/Constant Value1'
             *  Switch: '<S401>/Switch1'
             */
            CCCR_ac_B.Merge4 = CeOBCR_e_RequestBalance;
        }

        /* End of Switch: '<S399>/Switch' */
        /* End of Outputs for SubSystem: '<S394>/RequestON' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S394>/RequestOFF' incorporates:
         *  ActionPort: '<S398>/Action Port'
         */
        /* Merge: '<S4>/Merge4' incorporates:
         *  Constant: '<S398>/Constant Value'
         *  SignalConversion generated from: '<S398>/OutputParameter'
         */
        CCCR_ac_B.Merge4 = CeOBCR_e_NoRequest;

        /* End of Outputs for SubSystem: '<S394>/RequestOFF' */
    }

    /* End of If: '<S394>/If' */

    /* RelationalOperator: '<S395>/Comparison10' incorporates:
     *  Constant: '<S446>/Calib'
     */
    VeCCCR_b_ChrgCmplteCondtnMet3 = (CCCR_ac_B.TmpSignalConversionAtVeHVTR_U_H >=
        KeCCCR_U_MaxPackVoltChrg);

    /* RelationalOperator: '<S395>/Comparison14' incorporates:
     *  Constant: '<S414>/Constant'
     */
    Switch1_f = (((uint32)rtb_Logical1_tmp) == CeOBCR_e_Charging);

    /* RelationalOperator: '<S395>/Comparison5' incorporates:
     *  Constant: '<S422>/Constant'
     *  RelationalOperator: '<S395>/Comparison15'
     *  Switch: '<S5>/Switch59'
     */
    CCCR_ac_B.Comparison5 = (((uint32)VeCCCR_e_EVSE_ProxStat_In) !=
        CeOBCR_e_ProxIn_OBCM);

    /* RelationalOperator: '<S395>/Comparison17' incorporates:
     *  RelationalOperator: '<S395>/Comparison18'
     *  RelationalOperator: '<S395>/Comparison6'
     *  RelationalOperator: '<S395>/Comparison7'
     *  RelationalOperator: '<S395>/Comparison8'
     *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
     */
    Logical12_tmp = CCCR_ac_B.TmpSignalConversionAtVePMDR_e_P;

    /* Logic: '<S395>/Logical12' incorporates:
     *  Constant: '<S419>/Constant'
     *  RelationalOperator: '<S395>/Comparison17'
     */
    CCCR_ac_B.Logical12 = (((uint32)Logical12_tmp) == CePMDR_e_PowerMode_Off);

    /* Outputs for Atomic SubSystem: '<S395>/EdgeRising3' */
    /* Logic: '<S409>/OR1' incorporates:
     *  UnitDelay: '<S409>/Unit Delay'
     */
    rtb_OR1_nje = !CCCR_ac_DW.UnitDelay_DSTATE_jo;

    /* Update for UnitDelay: '<S409>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_jo = CCCR_ac_B.Comparison5;

    /* End of Outputs for SubSystem: '<S395>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S395>/EdgeRising1' */
    /* Logic: '<S407>/OR1' incorporates:
     *  UnitDelay: '<S407>/Unit Delay'
     */
    rtb_OR1_h4 = !CCCR_ac_DW.UnitDelay_DSTATE_au;

    /* Update for UnitDelay: '<S407>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_au = CCCR_ac_B.Logical12;

    /* Outputs for Atomic SubSystem: '<S395>/EdgeRising3' */
    /* Logic: '<S395>/Logical15' incorporates:
     *  Constant: '<S418>/Constant'
     *  Logic: '<S407>/AND'
     *  Logic: '<S409>/AND'
     *  RelationalOperator: '<S395>/Comparison16'
     */
    rtb_Logical15 = ((((CCCR_ac_B.Comparison5) && rtb_OR1_nje) ||
                      ((CCCR_ac_B.Logical12) && rtb_OR1_h4)) || (((uint32)
                       rtb_Logical1_tmp) == CeOBCR_e_PowerUp));

    /* End of Outputs for SubSystem: '<S395>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S395>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S395>/Counter Reset  Enabled ' */
    /* Switch: '<S405>/Switch1' incorporates:
     *  Switch: '<S405>/Switch2'
     */
    if (rtb_Logical15)
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Constant: '<S405>/Constant Value2'
         */
        CCCR_ac_B.Switch1 = 0U;
    }
    else if (Switch1_f)
    {
        /* UnitDelay: '<S405>/Unit Delay' */
        u1 = CCCR_ac_DW.UnitDelay_DSTATE_lr;

        /* MinMax: '<S405>/MinMax' incorporates:
         *  Switch: '<S405>/Switch2'
         */
        if (1000 < ((sint32)u1))
        {
            u1 = 1000U;
        }

        /* End of MinMax: '<S405>/MinMax' */

        /* Switch: '<S457>/Switch1' incorporates:
         *  Constant: '<S405>/Constant Value1'
         *  Sum: '<S405>/Subtraction'
         *  Switch: '<S405>/Switch2'
         */
        CCCR_ac_B.Switch1 = (uint16)(((uint32)u1) + 1U);
    }
    else
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Switch: '<S405>/Switch2'
         *  UnitDelay: '<S405>/Unit Delay'
         */
        CCCR_ac_B.Switch1 = CCCR_ac_DW.UnitDelay_DSTATE_lr;
    }

    /* End of Switch: '<S405>/Switch1' */

    /* Update for UnitDelay: '<S405>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_lr = CCCR_ac_B.Switch1;

    /* End of Outputs for SubSystem: '<S395>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S395>/Comparison19' incorporates:
     *  Constant: '<S435>/Calib'
     */
    rtb_Comparison19 = (CCCR_ac_B.Switch1 < KeCCCR_Cnt_BatFullCheck);

    /* Logic: '<S395>/Logical12' incorporates:
     *  Constant: '<S421>/Constant'
     *  RelationalOperator: '<S395>/Comparison20'
     */
    CCCR_ac_B.Logical12 = (((uint32)rtb_Logical1_tmp) == CeOBCR_e_CloseS2);

    /* Outputs for Atomic SubSystem: '<S395>/Turn On Delay Sample4' */
    /* Outputs for Atomic SubSystem: '<S458>/EdgeRising' */
    /* UnitDelay: '<S463>/Unit Delay' incorporates:
     *  UnitDelay: '<S464>/Unit Delay'
     */
    rtb_OR1_nje = CCCR_ac_DW.UnitDelay_DSTATE_n;

    /* Update for UnitDelay: '<S464>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_n = CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S;

    /* Switch: '<S458>/Switch1' incorporates:
     *  Logic: '<S458>/OR'
     *  Logic: '<S458>/OR1'
     *  Logic: '<S464>/AND'
     *  Logic: '<S464>/OR1'
     */
    if ((!CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S) ||
            ((CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S) && (!rtb_OR1_nje)))
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Constant: '<S458>/Constant Value1'
         */
        CCCR_ac_B.Switch1 = 0U;
    }
    else
    {
        /* Sum: '<S458>/Summation' incorporates:
         *  Constant: '<S458>/Constant Value'
         *  UnitDelay: '<S458>/Unit Delay'
         */
        u1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_ji) + 1U);

        /* MinMax: '<S458>/Minimum' incorporates:
         *  Constant: '<S438>/Calib'
         */
        if (KeCCCR_Cnt_SOCMaxLvl < u1)
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = KeCCCR_Cnt_SOCMaxLvl;
        }
        else
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = u1;
        }

        /* End of MinMax: '<S458>/Minimum' */
    }

    /* End of Switch: '<S458>/Switch1' */
    /* End of Outputs for SubSystem: '<S458>/EdgeRising' */

    /* Logic: '<S458>/AND' incorporates:
     *  Constant: '<S438>/Calib'
     *  RelationalOperator: '<S458>/Greater  Than'
     */
    CCCR_ac_B.AND_c = ((CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S) &&
                       (CCCR_ac_B.Switch1 >= KeCCCR_Cnt_SOCMaxLvl));

    /* Update for UnitDelay: '<S458>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_ji = CCCR_ac_B.Switch1;

    /* End of Outputs for SubSystem: '<S395>/Turn On Delay Sample4' */

    /* RelationalOperator: '<S395>/Comparison5' incorporates:
     *  Constant: '<S417>/Constant'
     *  Switch: '<S5>/Switch15'
     */
    CCCR_ac_B.Comparison5 = (((uint32)VeCCCR_e_BPCM_ChrgStat_In) ==
        CeOBCR_e_Complete);

    /* Outputs for Atomic SubSystem: '<S395>/EdgeRising' */
    /* Logic: '<S406>/AND' incorporates:
     *  Logic: '<S406>/OR1'
     *  UnitDelay: '<S406>/Unit Delay'
     */
    rtb_OR1_h4 = ((CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S) &&
                  (!CCCR_ac_DW.UnitDelay_DSTATE_ma));

    /* Update for UnitDelay: '<S406>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_ma = CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S;

    /* End of Outputs for SubSystem: '<S395>/EdgeRising' */

    /* Logic: '<S395>/Logical11' incorporates:
     *  Constant: '<S411>/Constant'
     *  Constant: '<S412>/Constant'
     *  Logic: '<S395>/Logical4'
     *  RelationalOperator: '<S395>/Comparison26'
     *  RelationalOperator: '<S395>/Comparison3'
     */
    CCCR_ac_B.Logical11 = ((CeOBCR_e_ChargingPaused == ((uint32)rtb_Logical1_tmp))
                           || (((uint32)rtb_Logical1_tmp) == CeOBCR_e_Charging));

    /* Outputs for Atomic SubSystem: '<S395>/EdgeRising2' */
    /* Logic: '<S408>/AND' incorporates:
     *  Logic: '<S408>/OR1'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    rtb_AND_aq = ((CCCR_ac_B.Logical11) && (!CCCR_ac_DW.UnitDelay_DSTATE_pa));

    /* Update for UnitDelay: '<S408>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_pa = CCCR_ac_B.Logical11;

    /* End of Outputs for SubSystem: '<S395>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S395>/EdgeRising4' */
    /* Logic: '<S410>/OR1' incorporates:
     *  UnitDelay: '<S410>/Unit Delay'
     */
    rtb_OR1_e1 = !CCCR_ac_DW.UnitDelay_DSTATE_gf;

    /* Update for UnitDelay: '<S410>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_gf = CCCR_ac_B.Logical12;

    /* End of Outputs for SubSystem: '<S395>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S395>/Protected Division' */
    /* Switch: '<S450>/Switch1' incorporates:
     *  Constant: '<S431>/Calib'
     *  Constant: '<S449>/Calib'
     *  Constant: '<S450>/Constant Value'
     *  Constant: '<S450>/Constant Value1'
     *  Constant: '<S450>/Constant Value2'
     *  Constant: '<S450>/Constant Value3'
     *  Logic: '<S450>/AND'
     *  RelationalOperator: '<S450>/Greater Than or Equal '
     *  RelationalOperator: '<S450>/Greater Than or Equal 1'
     *  RelationalOperator: '<S450>/Not Equal'
     *  RelationalOperator: '<S450>/Not Equal1'
     *  Switch: '<S450>/Switch2'
     *  Switch: '<S450>/Switch3'
     */
    if ((KeCCCR_t_ChrgCmplteDbnceTime != 0.0F) && (HeCCCR_t_FunCallRate != 0.0F))
    {
        /* Switch: '<S450>/Switch1' incorporates:
         *  Product: '<S450>/Division'
         */
        rtb_Switch1 = KeCCCR_t_ChrgCmplteDbnceTime / HeCCCR_t_FunCallRate;
    }
    else if (KeCCCR_t_ChrgCmplteDbnceTime > 0.0F)
    {
        /* Switch: '<S450>/Switch2' incorporates:
         *  Constant: '<S450>/MAXFLOAT'
         *  Switch: '<S450>/Switch1'
         */
        rtb_Switch1 = 3.402823466E+38F;
    }
    else if (KeCCCR_t_ChrgCmplteDbnceTime < 0.0F)
    {
        /* Switch: '<S450>/Switch3' incorporates:
         *  Constant: '<S450>/MINFLOAT'
         *  Switch: '<S450>/Switch1'
         *  Switch: '<S450>/Switch2'
         */
        rtb_Switch1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S450>/Switch1' incorporates:
         *  Constant: '<S450>/Constant Value4'
         *  Switch: '<S450>/Switch2'
         *  Switch: '<S450>/Switch3'
         */
        rtb_Switch1 = 0.0F;
    }

    /* End of Switch: '<S450>/Switch1' */
    /* End of Outputs for SubSystem: '<S395>/Protected Division' */

    /* DataTypeConversion: '<S395>/FloatToFix' */
    rtb_Switch1 = fmodf(floorf(rtb_Switch1), 65536.0F);

    /* DataTypeConversion: '<S395>/FloatToFix' */
    rtb_FloatToFix = (uint16)((sint32)((rtb_Switch1 < 0.0F) ? ((sint32)((uint16)
        ((sint32)(-((sint32)((sint16)((uint16)((float32)(-rtb_Switch1))))))))) :
        ((sint32)((uint16)rtb_Switch1))));

    /* Outputs for Atomic SubSystem: '<S395>/Hysteresis' */
    /* Switch: '<S432>/Switch1' incorporates:
     *  Constant: '<S441>/Calib'
     *  RelationalOperator: '<S432>/Greater  Than'
     */
    if (CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct >
            KeCCCR_Pct_MaxSOCChrgCmpt_RSP)
    {
        /* Switch: '<S432>/Switch1' incorporates:
         *  Constant: '<S432>/Constant Value'
         */
        VeCCCR_b_ChrgCmplteCondtnMet8 = true;
    }
    else
    {
        /* Switch: '<S432>/Switch1' incorporates:
         *  Constant: '<S440>/Calib'
         *  RelationalOperator: '<S432>/Greater  Than1'
         *  UnitDelay: '<S432>/Unit Delay'
         */
        VeCCCR_b_ChrgCmplteCondtnMet8 =
            ((CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct >=
              KeCCCR_Pct_MaxSOCChrgCmpt_LSP) && (VeCCCR_b_ChrgCmplteCondtnMet8));
    }

    /* End of Switch: '<S432>/Switch1' */
    /* End of Outputs for SubSystem: '<S395>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S395>/Hysteresis1' */
    /* Switch: '<S433>/Switch1' incorporates:
     *  Constant: '<S444>/Calib'
     *  RelationalOperator: '<S433>/Greater  Than'
     */
    if (CCCR_ac_B.TmpSignalConversionAtVeHMIR_Pct >= KeCCCR_Pct_SOCMaxLvl_RSP)
    {
        /* Logic: '<S395>/Logical11' incorporates:
         *  Constant: '<S433>/Constant Value'
         */
        CCCR_ac_B.Logical11 = true;
    }
    else
    {
        /* Logic: '<S395>/Logical11' incorporates:
         *  Constant: '<S443>/Calib'
         *  RelationalOperator: '<S433>/Greater  Than1'
         *  UnitDelay: '<S433>/Unit Delay'
         */
        CCCR_ac_B.Logical11 = ((CCCR_ac_B.TmpSignalConversionAtVeHMIR_Pct >=
                                KeCCCR_Pct_SOCMaxLvl_LSP) &&
                               (CCCR_ac_DW.UnitDelay_DSTATE_i4e));
    }

    /* End of Switch: '<S433>/Switch1' */

    /* Update for UnitDelay: '<S433>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_i4e = CCCR_ac_B.Logical11;

    /* End of Outputs for SubSystem: '<S395>/Hysteresis1' */

    /* Logic: '<S395>/Logical' incorporates:
     *  RelationalOperator: '<S395>/Comparison21'
     */
    VeCCCR_b_ChrgCmplteCondtnMet11 = ((CCCR_ac_B.Logical11) && (!CCCR_ac_B.AND_c));

    /* Logic: '<S395>/Logical11' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S445>/Calib'
     *  Logic: '<S395>/Logical20'
     *  RelationalOperator: '<S395>/Comparison11'
     *  RelationalOperator: '<S395>/Comparison2'
     */
    CCCR_ac_B.Logical11 = ((VeCCCR_U_HV_BatVoltModMaxArbFil >
                            KeCCCR_U_MaxCellVlt_NoChrg) &&
                           (CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct >
                            KeCCCR_Pct_MaxSOC_NoChrg));

    /* Outputs for Atomic SubSystem: '<S395>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S455>/EdgeRising' */
    /* UnitDelay: '<S463>/Unit Delay' incorporates:
     *  UnitDelay: '<S461>/Unit Delay'
     */
    rtb_OR1_nje = CCCR_ac_DW.UnitDelay_DSTATE_jj;

    /* Update for UnitDelay: '<S461>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_jj = CCCR_ac_B.Logical11;

    /* Switch: '<S455>/Switch1' incorporates:
     *  Logic: '<S455>/OR'
     *  Logic: '<S455>/OR1'
     *  Logic: '<S461>/AND'
     *  Logic: '<S461>/OR1'
     */
    if ((!CCCR_ac_B.Logical11) || ((CCCR_ac_B.Logical11) && (!rtb_OR1_nje)))
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Constant: '<S455>/Constant Value1'
         */
        CCCR_ac_B.Switch1 = 0U;
    }
    else
    {
        /* Sum: '<S455>/Summation' incorporates:
         *  Constant: '<S455>/Constant Value'
         *  UnitDelay: '<S455>/Unit Delay'
         */
        u1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_oa) + 1U);

        /* MinMax: '<S455>/Minimum' incorporates:
         *  Constant: '<S437>/Calib'
         */
        if (KeCCCR_Cnt_Dbnc_BatFull < u1)
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = KeCCCR_Cnt_Dbnc_BatFull;
        }
        else
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = u1;
        }

        /* End of MinMax: '<S455>/Minimum' */
    }

    /* End of Switch: '<S455>/Switch1' */
    /* End of Outputs for SubSystem: '<S455>/EdgeRising' */

    /* Logic: '<S455>/AND' incorporates:
     *  Constant: '<S437>/Calib'
     *  RelationalOperator: '<S455>/Greater  Than'
     */
    VeCCCR_b_BatFull_Test2 = ((CCCR_ac_B.Logical11) && (CCCR_ac_B.Switch1 >=
        KeCCCR_Cnt_Dbnc_BatFull));

    /* Update for UnitDelay: '<S455>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_oa = CCCR_ac_B.Switch1;

    /* End of Outputs for SubSystem: '<S395>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S395>/EdgeRising4' */
    /* Logic: '<S395>/Logical18' incorporates:
     *  Logic: '<S395>/Logical17'
     *  Logic: '<S410>/AND'
     */
    VeCCCR_b_BatFull_Test3 = (((CCCR_ac_B.Logical12) && rtb_OR1_e1) ||
        (Switch1_f && rtb_Comparison19));

    /* End of Outputs for SubSystem: '<S395>/EdgeRising4' */

    /* Logic: '<S395>/Logical1' */
    VeCCCR_b_BatFull_Test4 = ((VeCCCR_b_BatFull_Test2) &&
        (VeCCCR_b_BatFull_Test3));

    /* RelationalOperator: '<S395>/Comparison12' incorporates:
     *  RelationalOperator: '<S395>/Comparison13'
     *  RelationalOperator: '<S395>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel'
     */
    VeCCCR_b_ChrgCmplteCondtnMet1_t = CCCR_ac_B.TmpSignalConversionAtVeOBCR_e_d;

    /* Logic: '<S395>/Logical2' incorporates:
     *  Constant: '<S424>/Constant'
     *  Constant: '<S425>/Constant'
     *  Constant: '<S439>/Calib'
     *  Logic: '<S395>/Logical14'
     *  RelationalOperator: '<S395>/Comparison1'
     *  RelationalOperator: '<S395>/Comparison12'
     *  RelationalOperator: '<S395>/Comparison13'
     *  UnitDelay: '<S12>/Unit Delay'
     */
    VeCCCR_b_ChrgCmplteCondtnMet1 = (((CCCR_ac_DW.UnitDelay_DSTATE_pd) &&
        (CCCR_ac_B.TmpSignalConversionAtVeHVTR_I_S > KeCCCR_I_MinCurrChrgComplt))
        && ((((uint32)VeCCCR_b_ChrgCmplteCondtnMet1_t) ==
             CeOBCR_e_ChargingLvlAC2) || (((uint32)
        VeCCCR_b_ChrgCmplteCondtnMet1_t) == CeOBCR_e_ChargingLvlDC2)));

    /* Logic: '<S395>/Logical9' incorporates:
     *  Constant: '<S423>/Constant'
     *  RelationalOperator: '<S395>/Comparison4'
     *  RelationalOperator: '<S395>/Comparison9'
     */
    VeCCCR_b_ChrgCmplteCondtnMet2 = ((((uint32)VeCCCR_b_ChrgCmplteCondtnMet1_t) ==
        CeOBCR_e_ChargingLvlAC1) && (VeCCCR_U_HV_BatVoltModMaxArbFil >=
        VeCCCR_I_MaxCellCurrTargCal));

    /* Logic: '<S395>/Logical11' incorporates:
     *  Constant: '<S413>/Constant'
     *  Constant: '<S415>/Constant'
     *  Constant: '<S416>/Constant'
     *  RelationalOperator: '<S395>/Comparison6'
     *  RelationalOperator: '<S395>/Comparison7'
     *  RelationalOperator: '<S395>/Comparison8'
     */
    CCCR_ac_B.Logical11 = (((((uint32)Logical12_tmp) == CePMDR_e_PowerMode_Crank)
                            || (((uint32)Logical12_tmp) ==
        CePMDR_e_PowerMode_Acc)) || (((uint32)Logical12_tmp) ==
                            CePMDR_e_PowerMode_Run));

    /* Outputs for Atomic SubSystem: '<S395>/Signal Latch On' */
    /* Logic: '<S395>/Logical12' incorporates:
     *  Logic: '<S451>/OR2'
     *  UnitDelay: '<S451>/Unit Delay'
     */
    CCCR_ac_B.Logical12 = ((VeCCCR_b_THMR_RdyForShtDwn) ||
                           (CCCR_ac_DW.UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S451>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_k = CCCR_ac_B.Logical12;

    /* End of Outputs for SubSystem: '<S395>/Signal Latch On' */

    /* Logic: '<S395>/Logical12' incorporates:
     *  Logic: '<S395>/Logical13'
     */
    CCCR_ac_B.Logical12 = ((VeCCCR_b_HVBatPerWUThermal) && (!CCCR_ac_B.Logical12));

    /* Outputs for Atomic SubSystem: '<S395>/Signal Latch On With Reset1' */
    /* Logic: '<S452>/OR1' incorporates:
     *  Logic: '<S452>/NOT'
     *  Logic: '<S452>/OR'
     *  UnitDelay: '<S452>/Unit Delay'
     */
    VeCCCR_b_BatFull_Test6 = ((VeCCCR_b_BatFull_Test4) || ((!rtb_Logical15) &&
        (VeCCCR_b_BatFull_Test6)));

    /* End of Outputs for SubSystem: '<S395>/Signal Latch On With Reset1' */

    /* Logic: '<S395>/Logical8' */
    VeCCCR_b_NoChargeComplete = ((CCCR_ac_B.Logical12) || (CCCR_ac_B.Logical11));

    /* Logic: '<S395>/Logical21' incorporates:
     *  Logic: '<S395>/Logical7'
     */
    rtb_Logical15 = !VeCCCR_b_NoChargeComplete;

    /* Logic: '<S395>/Logical16' incorporates:
     *  Constant: '<S420>/Constant'
     *  Logic: '<S395>/Logical21'
     *  RelationalOperator: '<S395>/Comparison18'
     */
    VeCCCR_b_ChrgCmplteCondtnMet10 = (((VeCCCR_b_BatFull_Test6) && rtb_Logical15)
        && (((uint32)Logical12_tmp) == CePMDR_e_PowerMode_Off));

    /* Outputs for Atomic SubSystem: '<S395>/Turn On Delay Sample5' */
    /* Outputs for Atomic SubSystem: '<S459>/EdgeRising' */
    /* UnitDelay: '<S463>/Unit Delay' incorporates:
     *  UnitDelay: '<S465>/Unit Delay'
     */
    rtb_OR1_nje = CCCR_ac_DW.UnitDelay_DSTATE_ej;

    /* Update for UnitDelay: '<S465>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_ej = CCCR_ac_B.Comparison5;

    /* Switch: '<S459>/Switch1' incorporates:
     *  Logic: '<S459>/OR'
     *  Logic: '<S459>/OR1'
     *  Logic: '<S465>/AND'
     *  Logic: '<S465>/OR1'
     */
    if ((!CCCR_ac_B.Comparison5) || ((CCCR_ac_B.Comparison5) && (!rtb_OR1_nje)))
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Constant: '<S459>/Constant Value1'
         */
        CCCR_ac_B.Switch1 = 0U;
    }
    else
    {
        /* Sum: '<S459>/Summation' incorporates:
         *  Constant: '<S459>/Constant Value'
         *  UnitDelay: '<S459>/Unit Delay'
         */
        u1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_j) + 1U);

        /* MinMax: '<S459>/Minimum' incorporates:
         *  Constant: '<S434>/Calib'
         */
        if (KeCCCR_Cnt_BPCMChrgCmplt_Dbnc < u1)
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = KeCCCR_Cnt_BPCMChrgCmplt_Dbnc;
        }
        else
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = u1;
        }

        /* End of MinMax: '<S459>/Minimum' */
    }

    /* End of Switch: '<S459>/Switch1' */
    /* End of Outputs for SubSystem: '<S459>/EdgeRising' */

    /* RelationalOperator: '<S459>/Greater  Than' incorporates:
     *  Constant: '<S434>/Calib'
     */
    Switch1_f = (CCCR_ac_B.Switch1 >= KeCCCR_Cnt_BPCMChrgCmplt_Dbnc);

    /* Update for UnitDelay: '<S459>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_j = CCCR_ac_B.Switch1;

    /* End of Outputs for SubSystem: '<S395>/Turn On Delay Sample5' */

    /* Logic: '<S395>/Logical3' incorporates:
     *  Logic: '<S395>/Logical Operator'
     */
    rtb_AND_aq = !rtb_AND_aq;

    /* Logic: '<S395>/Logical26' incorporates:
     *  Logic: '<S395>/Logical10'
     *  Logic: '<S395>/Logical3'
     */
    VeCCCR_b_ChrgCmplteCondtnMet4 = (((((((VeCCCR_b_ChrgCmplteCondtnMet1) ||
        (VeCCCR_b_ChrgCmplteCondtnMet2)) || (VeCCCR_b_ChrgCmplteCondtnMet3)) ||
        (VeCCCR_b_ChrgCmplteCondtnMet8)) || (VeCCCR_b_ChrgCmplteCondtnMet11)) &&
        rtb_Logical1) && rtb_AND_aq);

    /* Outputs for Atomic SubSystem: '<S395>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S454>/EdgeRising' */
    /* UnitDelay: '<S463>/Unit Delay' incorporates:
     *  UnitDelay: '<S460>/Unit Delay'
     */
    rtb_OR1_nje = CCCR_ac_DW.UnitDelay_DSTATE_nf;

    /* Update for UnitDelay: '<S460>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_nf = VeCCCR_b_ChrgCmplteCondtnMet4;

    /* Switch: '<S454>/Switch1' incorporates:
     *  Logic: '<S454>/OR'
     *  Logic: '<S454>/OR1'
     *  Logic: '<S460>/AND'
     *  Logic: '<S460>/OR1'
     */
    if ((!VeCCCR_b_ChrgCmplteCondtnMet4) || ((VeCCCR_b_ChrgCmplteCondtnMet4) &&
            (!rtb_OR1_nje)))
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Constant: '<S454>/Constant Value1'
         */
        CCCR_ac_B.Switch1 = 0U;
    }
    else
    {
        /* Sum: '<S454>/Summation' incorporates:
         *  Constant: '<S454>/Constant Value'
         *  UnitDelay: '<S454>/Unit Delay'
         */
        u1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_gj) + 1U);

        /* MinMax: '<S454>/Minimum' */
        if (rtb_FloatToFix < u1)
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = rtb_FloatToFix;
        }
        else
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = u1;
        }

        /* End of MinMax: '<S454>/Minimum' */
    }

    /* End of Switch: '<S454>/Switch1' */
    /* End of Outputs for SubSystem: '<S454>/EdgeRising' */

    /* Update for UnitDelay: '<S454>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_gj = CCCR_ac_B.Switch1;

    /* Outputs for Atomic SubSystem: '<S395>/Turn On Delay Sample5' */
    /* Logic: '<S395>/Logical5' incorporates:
     *  Logic: '<S454>/AND'
     *  Logic: '<S459>/AND'
     *  RelationalOperator: '<S454>/Greater  Than'
     */
    VeCCCR_b_ChrgCmplteCondtnMet5 = (((CCCR_ac_B.Comparison5) && Switch1_f) ||
        ((VeCCCR_b_ChrgCmplteCondtnMet4) && (CCCR_ac_B.Switch1 >= rtb_FloatToFix)));

    /* End of Outputs for SubSystem: '<S395>/Turn On Delay Sample5' */
    /* End of Outputs for SubSystem: '<S395>/Turn On Delay Sample' */

    /* Logic: '<S395>/Logical6' */
    VeCCCR_b_ChrgCmplteCondtnMet6 = (rtb_Logical15 &&
        (VeCCCR_b_ChrgCmplteCondtnMet5));

    /* Outputs for Atomic SubSystem: '<S395>/Signal Latch On With Reset2' */
    /* Logic: '<S453>/OR1' incorporates:
     *  Logic: '<S395>/Logical Operator'
     *  Logic: '<S453>/NOT'
     *  Logic: '<S453>/OR'
     *  UnitDelay: '<S453>/Unit Delay'
     */
    VeCCCR_b_ChrgCmplteCondtnMet9 = ((VeCCCR_b_ChrgCmplteCondtnMet6) ||
        ((rtb_AND_aq && (!rtb_OR1_h4)) && (VeCCCR_b_ChrgCmplteCondtnMet9)));

    /* End of Outputs for SubSystem: '<S395>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S395>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S456>/EdgeRising' */
    /* UnitDelay: '<S463>/Unit Delay' incorporates:
     *  UnitDelay: '<S462>/Unit Delay'
     */
    rtb_OR1_nje = CCCR_ac_DW.UnitDelay_DSTATE_hm;

    /* Update for UnitDelay: '<S462>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_hm = VeCCCR_b_ChrgCmplteCondtnMet3;

    /* Switch: '<S456>/Switch1' incorporates:
     *  Logic: '<S456>/OR'
     *  Logic: '<S456>/OR1'
     *  Logic: '<S462>/AND'
     *  Logic: '<S462>/OR1'
     */
    if ((!VeCCCR_b_ChrgCmplteCondtnMet3) || ((VeCCCR_b_ChrgCmplteCondtnMet3) &&
            (!rtb_OR1_nje)))
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Constant: '<S456>/Constant Value1'
         */
        CCCR_ac_B.Switch1 = 0U;
    }
    else
    {
        /* Sum: '<S456>/Summation' incorporates:
         *  Constant: '<S456>/Constant Value'
         *  UnitDelay: '<S456>/Unit Delay'
         */
        u1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_l) + 1U);

        /* MinMax: '<S456>/Minimum' incorporates:
         *  Constant: '<S436>/Calib'
         */
        if (KeCCCR_Cnt_DbncChrgCmplt_BST < u1)
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = KeCCCR_Cnt_DbncChrgCmplt_BST;
        }
        else
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = u1;
        }

        /* End of MinMax: '<S456>/Minimum' */
    }

    /* End of Switch: '<S456>/Switch1' */
    /* End of Outputs for SubSystem: '<S456>/EdgeRising' */

    /* Logic: '<S456>/AND' incorporates:
     *  Constant: '<S436>/Calib'
     *  RelationalOperator: '<S456>/Greater  Than'
     */
    Switch1_f = ((VeCCCR_b_ChrgCmplteCondtnMet3) && (CCCR_ac_B.Switch1 >=
                  KeCCCR_Cnt_DbncChrgCmplt_BST));

    /* Update for UnitDelay: '<S456>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_l = CCCR_ac_B.Switch1;

    /* End of Outputs for SubSystem: '<S395>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S395>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S457>/EdgeRising' */
    /* UnitDelay: '<S463>/Unit Delay' */
    rtb_OR1_nje = CCCR_ac_DW.UnitDelay_DSTATE_ay;

    /* Update for UnitDelay: '<S463>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_ay = VeCCCR_b_ChrgCmplteCondtnMet8;

    /* Switch: '<S457>/Switch1' incorporates:
     *  Logic: '<S457>/OR'
     *  Logic: '<S457>/OR1'
     *  Logic: '<S463>/AND'
     *  Logic: '<S463>/OR1'
     */
    if ((!VeCCCR_b_ChrgCmplteCondtnMet8) || ((VeCCCR_b_ChrgCmplteCondtnMet8) &&
            (!rtb_OR1_nje)))
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Constant: '<S457>/Constant Value1'
         */
        CCCR_ac_B.Switch1 = 0U;
    }
    else
    {
        /* Sum: '<S457>/Summation' incorporates:
         *  Constant: '<S457>/Constant Value'
         *  UnitDelay: '<S457>/Unit Delay'
         */
        u1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_mk) + 1U);

        /* MinMax: '<S457>/Minimum' incorporates:
         *  Constant: '<S436>/Calib'
         */
        if (KeCCCR_Cnt_DbncChrgCmplt_BST < u1)
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = KeCCCR_Cnt_DbncChrgCmplt_BST;
        }
        else
        {
            /* Switch: '<S457>/Switch1' */
            CCCR_ac_B.Switch1 = u1;
        }

        /* End of MinMax: '<S457>/Minimum' */
    }

    /* End of Switch: '<S457>/Switch1' */
    /* End of Outputs for SubSystem: '<S457>/EdgeRising' */

    /* Update for UnitDelay: '<S457>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_mk = CCCR_ac_B.Switch1;

    /* End of Outputs for SubSystem: '<S395>/Turn On Delay Sample3' */

    /* Switch: '<S395>/Switch' incorporates:
     *  Constant: '<S447>/Calib'
     */
    if (KeCCCR_b_ChrgCmplteCondtnMetOvd)
    {
        /* Merge: '<S4>/Merge3' incorporates:
         *  Constant: '<S448>/Calib'
         */
        CCCR_ac_B.Merge3 = KeCCCR_b_ChrgCmplteCondtnMetOvdVal;
    }
    else
    {
        /* Merge: '<S4>/Merge3' incorporates:
         *  Logic: '<S395>/Logical19'
         */
        CCCR_ac_B.Merge3 = ((VeCCCR_b_ChrgCmplteCondtnMet9) ||
                            (VeCCCR_b_ChrgCmplteCondtnMet10));
    }

    /* End of Switch: '<S395>/Switch' */

    /* Switch: '<S395>/Switch1' incorporates:
     *  Logic: '<S395>/Logical22'
     */
    if (rtb_Logical1 && Switch1_f)
    {
        /* Merge: '<S4>/Merge11' incorporates:
         *  Constant: '<S429>/Constant'
         */
        CCCR_ac_B.Merge11 = CeOBCR_e_BattPckVolt_Reached;
    }
    else
    {
        /* Merge: '<S4>/Merge11' incorporates:
         *  Constant: '<S428>/Constant'
         */
        CCCR_ac_B.Merge11 = CeOBCR_e_BattPckVolt_NotReached;
    }

    /* End of Switch: '<S395>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S395>/Turn On Delay Sample3' */
    /* Switch: '<S395>/Switch2' incorporates:
     *  Constant: '<S436>/Calib'
     *  Logic: '<S395>/Logical23'
     *  Logic: '<S457>/AND'
     *  RelationalOperator: '<S457>/Greater  Than'
     */
    if (((VeCCCR_b_ChrgCmplteCondtnMet8) && (CCCR_ac_B.Switch1 >=
            KeCCCR_Cnt_DbncChrgCmplt_BST)) && rtb_Logical1)
    {
        /* Merge: '<S4>/Merge12' incorporates:
         *  Constant: '<S427>/Constant'
         */
        CCCR_ac_B.Merge12 = CeOBCR_e_SOC_Reached;
    }
    else
    {
        /* Merge: '<S4>/Merge12' incorporates:
         *  Constant: '<S426>/Constant'
         */
        CCCR_ac_B.Merge12 = CeOBCR_e_SOC_NotReached;
    }

    /* End of Switch: '<S395>/Switch2' */
    /* End of Outputs for SubSystem: '<S395>/Turn On Delay Sample3' */
}

#endif

/* Update for atomic system: '<S7>/ChrgComplDet' */
#if Rte_SysCon_Variant_CCCR_FUNC

static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_ChrgComplDet_Update(void)
{
    /* Update for UnitDelay: '<S12>/Unit Delay1' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChrgSysStat_SF'
     */
    CCCR_ac_DW.UnitDelay1_DSTATE_a = CCCR_ac_B.TmpSignalConversionAtVeOBCR_e_C;

    /* Update for UnitDelay: '<S12>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_pd = VeCCCR_b_CV_Mode;
}

#endif

/*
 * System initialize for atomic system:
 *    '<S514>/FUNC'
 *    '<S514>/NF'
 */
static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_FUNC_Init(P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_ChrgCrntReqDelta_O, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_U_VoltRq_Out_Init, P2VAR(TeOBCR_e_HVBattBalReq,
    AUTOMATIC, CCCR_VAR_INIT) rty_VeCCCR_e_HVBattBalReq_Out_I, P2VAR(float32,
    AUTOMATIC, CCCR_VAR_INIT) rty_VeCCCR_I_MaxAllowedCurr_Out, P2VAR
    (TeOBCR_e_BattPckVoltRchdBST, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_e_BattPckVoltRchd_BS, P2VAR(TeOBCR_e_SOCReachedBST, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_e_SOCRchd_BST_Out_In, P2VAR
    (TeOBCR_e_MaxCellVoltRchdBST, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_e_MaxCellVoltRchd_BS, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev1_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev2_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev3_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev4_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev5_Out_In, P2VAR(TeOBCR_e_PwrLimReq, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_e_PwrLevSet_Out_Init, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_ChrgCmplteCondtnMe, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_ChrgTypeHWLim_Out_, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_BattCommandedCurr_, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_PwrLevActive_Out_I, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_HWCurrentBound_Out, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_PLS_ReducedCurr_Ou, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_SOC_LvlSet_80_Out_)
{
    /* Start for Constant: '<S515>/Const7' */
    *rty_VeCCCR_I_ChrgCrntReqDelta_O = 0.0F;

    /* Start for Constant: '<S515>/Const8' */
    *rty_VeCCCR_U_VoltRq_Out_Init = 0.0F;

    /* Start for Constant: '<S515>/Const11' */
    *rty_VeCCCR_e_HVBattBalReq_Out_I = CeOBCR_e_NoRequest;

    /* Start for Constant: '<S515>/Const66' */
    *rty_VeCCCR_I_MaxAllowedCurr_Out = 0.0F;

    /* Start for Constant: '<S515>/Const79' */
    *rty_VeCCCR_e_BattPckVoltRchd_BS = CeOBCR_e_BattPckVolt_NotReached;

    /* Start for Constant: '<S515>/Const80' */
    *rty_VeCCCR_e_SOCRchd_BST_Out_In = CeOBCR_e_SOC_NotReached;

    /* Start for Constant: '<S515>/Const83' */
    *rty_VeCCCR_e_MaxCellVoltRchd_BS = CeOBCR_e_MaxCellVolt_NotReached;

    /* Start for Constant: '<S515>/Const84' */
    *rty_VeCCCR_P_PLS_PwrLev1_Out_In = 0.0F;

    /* Start for Constant: '<S515>/Const85' */
    *rty_VeCCCR_P_PLS_PwrLev2_Out_In = 0.0F;

    /* Start for Constant: '<S515>/Const86' */
    *rty_VeCCCR_P_PLS_PwrLev3_Out_In = 0.0F;

    /* Start for Constant: '<S515>/Const87' */
    *rty_VeCCCR_P_PLS_PwrLev4_Out_In = 0.0F;

    /* Start for Constant: '<S515>/Const88' */
    *rty_VeCCCR_P_PLS_PwrLev5_Out_In = 0.0F;

    /* Start for Constant: '<S515>/Const94' */
    *rty_VeCCCR_e_PwrLevSet_Out_Init = CeOBCR_e_PwrLimReq_SNA;

    /* Start for Constant: '<S515>/Const9' */
    *rty_VeCCCR_b_ChrgCmplteCondtnMe = false;

    /* Start for Constant: '<S515>/Const1' */
    *rty_VeCCCR_I_ChrgTypeHWLim_Out_ = 0.0F;

    /* Start for Constant: '<S515>/Const2' */
    *rty_VeCCCR_I_BattCommandedCurr_ = 0.0F;

    /* Start for Constant: '<S515>/Const3' */
    *rty_VeCCCR_b_PwrLevActive_Out_I = false;

    /* Start for Constant: '<S515>/Const4' */
    *rty_VeCCCR_I_HWCurrentBound_Out = 0.0F;

    /* Start for Constant: '<S515>/Const5' */
    *rty_VeCCCR_I_PLS_ReducedCurr_Ou = 0.0F;

    /* Start for Constant: '<S515>/Const6' */
    *rty_VeCCCR_b_SOC_LvlSet_80_Out_ = false;
}

/*
 * Output and update for atomic system:
 *    '<S514>/FUNC'
 *    '<S514>/NF'
 */
static FUNC(void, CCCR_CODE_LOCAL) CCCR_ac_FUNC(P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_ChrgCrntReqDelta_O, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_U_VoltRq_Out_Init, P2VAR(TeOBCR_e_HVBattBalReq,
    AUTOMATIC, CCCR_VAR_INIT) rty_VeCCCR_e_HVBattBalReq_Out_I, P2VAR(float32,
    AUTOMATIC, CCCR_VAR_INIT) rty_VeCCCR_I_MaxAllowedCurr_Out, P2VAR
    (TeOBCR_e_BattPckVoltRchdBST, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_e_BattPckVoltRchd_BS, P2VAR(TeOBCR_e_SOCReachedBST, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_e_SOCRchd_BST_Out_In, P2VAR
    (TeOBCR_e_MaxCellVoltRchdBST, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_e_MaxCellVoltRchd_BS, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev1_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev2_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev3_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev4_Out_In, P2VAR(float32, AUTOMATIC, CCCR_VAR_INIT)
    rty_VeCCCR_P_PLS_PwrLev5_Out_In, P2VAR(TeOBCR_e_PwrLimReq, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_e_PwrLevSet_Out_Init, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_ChrgCmplteCondtnMe, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_ChrgTypeHWLim_Out_, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_BattCommandedCurr_, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_PwrLevActive_Out_I, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_HWCurrentBound_Out, P2VAR(float32, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_I_PLS_ReducedCurr_Ou, P2VAR(boolean, AUTOMATIC,
    CCCR_VAR_INIT) rty_VeCCCR_b_SOC_LvlSet_80_Out_)
{
    /* Constant: '<S515>/Const7' */
    *rty_VeCCCR_I_ChrgCrntReqDelta_O = 0.0F;

    /* Constant: '<S515>/Const8' */
    *rty_VeCCCR_U_VoltRq_Out_Init = 0.0F;

    /* Constant: '<S515>/Const11' */
    *rty_VeCCCR_e_HVBattBalReq_Out_I = CeOBCR_e_NoRequest;

    /* Constant: '<S515>/Const66' */
    *rty_VeCCCR_I_MaxAllowedCurr_Out = 0.0F;

    /* Constant: '<S515>/Const79' */
    *rty_VeCCCR_e_BattPckVoltRchd_BS = CeOBCR_e_BattPckVolt_NotReached;

    /* Constant: '<S515>/Const80' */
    *rty_VeCCCR_e_SOCRchd_BST_Out_In = CeOBCR_e_SOC_NotReached;

    /* Constant: '<S515>/Const83' */
    *rty_VeCCCR_e_MaxCellVoltRchd_BS = CeOBCR_e_MaxCellVolt_NotReached;

    /* Constant: '<S515>/Const84' */
    *rty_VeCCCR_P_PLS_PwrLev1_Out_In = 0.0F;

    /* Constant: '<S515>/Const85' */
    *rty_VeCCCR_P_PLS_PwrLev2_Out_In = 0.0F;

    /* Constant: '<S515>/Const86' */
    *rty_VeCCCR_P_PLS_PwrLev3_Out_In = 0.0F;

    /* Constant: '<S515>/Const87' */
    *rty_VeCCCR_P_PLS_PwrLev4_Out_In = 0.0F;

    /* Constant: '<S515>/Const88' */
    *rty_VeCCCR_P_PLS_PwrLev5_Out_In = 0.0F;

    /* Constant: '<S515>/Const94' */
    *rty_VeCCCR_e_PwrLevSet_Out_Init = CeOBCR_e_PwrLimReq_SNA;

    /* Constant: '<S515>/Const9' */
    *rty_VeCCCR_b_ChrgCmplteCondtnMe = false;

    /* Constant: '<S515>/Const1' */
    *rty_VeCCCR_I_ChrgTypeHWLim_Out_ = 0.0F;

    /* Constant: '<S515>/Const2' */
    *rty_VeCCCR_I_BattCommandedCurr_ = 0.0F;

    /* Constant: '<S515>/Const3' */
    *rty_VeCCCR_b_PwrLevActive_Out_I = false;

    /* Constant: '<S515>/Const4' */
    *rty_VeCCCR_I_HWCurrentBound_Out = 0.0F;

    /* Constant: '<S515>/Const5' */
    *rty_VeCCCR_I_PLS_ReducedCurr_Ou = 0.0F;

    /* Constant: '<S515>/Const6' */
    *rty_VeCCCR_b_SOC_LvlSet_80_Out_ = false;
}

/* Model step function for TID1 */
#if Rte_SysCon_Variant_CCCR_FUNC

FUNC(void, CCCR_CODE) CCCR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ProxStat_OBCM tmpRead_0;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ChrgrModeStat_OBCM tmpRead_1;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ChargingStat_BPCM tmpRead_2;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean tmpRead_3;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeESSR_e_EngStartStopSt tmpRead_6;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_PwrLimReq tmpRead_7;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 tmpRead_8;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeTIMR_e_RacePrep tmpRead_9;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ChargingSystemSts tmpRead_a;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean tmpRead_b;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    sint8 rtAction;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_Switch2_na;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeBP_f;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeBP_e;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeBP_i;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeBPCR;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_Vector_a;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeID_k;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean rtb_VeCCCR_b_PwrLevActive;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeDCCR;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeTHMR;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeOFCR;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeESMR;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean rtb_Comparison5_l;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean rtb_AND_is;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_VeCCCR_T_Hyst_Debug11;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_VeCCCR_T_Hyst_MaxCold11;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_VeCCCR_T_Hyst_MinCold11;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean rtb_TmpSignalConversionAtVeOBCR;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean rtb_AND_psp;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_Product1;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_TmpSignalConversionAtVeIDCR;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean rtb_AND_os;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_Switch_n;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean rtb_TmpSignalConversionAtVeDC_d;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean rtb_AND_do;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean rtb_AND_kz;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_Switch3_nq;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 rtb_Multiplication1;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ChargeType rtb_TmpSignalConversionAtVeOB_k;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_OB_ChrgPwrLimID rtb_Merge1;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    sint32 i;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TePMDR_e_PowerMode VeCCCR_b_EnableCurrRq_tmp;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ChargingLevel rtb_Product1_tmp;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ChrgSysStat VeCCCR_b_ReqZero_tmp;

#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VeOBCR_b_EnblDsblProxPlg' */
    (void)Rte_Read_VeOBCR_b_EnblDsblProxPlg_Value(&rtb_AND_is);

    /* Inport: '<Root>/VeSSDR_b_CabPrecDny_BattCond' */
    (void)Rte_Read_VeSSDR_b_CabPrecDny_BattCond_Value(&rtb_AND_psp);

    /* Inport: '<Root>/VeIDCR_I_EVSEMaxCurrLmt' */
    (void)Rte_Read_VeIDCR_I_EVSEMaxCurrLmt_Value(&tmpRead_8);

    /* Inport: '<Root>/VeIDCR_P_EVSEMaxPwrLmt' */
    (void)Rte_Read_VeIDCR_P_EVSEMaxPwrLmt_Value(&rtb_VeCCCR_T_Hyst_Debug11);

    /* Inport: '<Root>/VeIDCR_U_EVSEOutputVolt' */
    (void)Rte_Read_VeIDCR_U_EVSEOutputVolt_Value(&rtb_VeCCCR_T_Hyst_MaxCold11);

    /* Inport: '<Root>/VeCITR_b_PwrLimReq_SgnlRcvd' */
    (void)Rte_Read_VeCITR_b_PwrLimReq_SgnlRcvd_Value(&rtb_AND_do);

    /* Inport: '<Root>/VeCITR_b_PwrLimReq_FA' */
    (void)Rte_Read_VeCITR_b_PwrLimReq_FA_Value(&rtb_AND_kz);

    /* Inport: '<Root>/VeCITR_e_PwrLimReq' */
    (void)Rte_Read_VeCITR_e_PwrLimReq_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTHMR_b_RdyForShtDwn' */
    (void)Rte_Read_VeTHMR_b_RdyForShtDwn_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSSDR_b_HVBatPerWUThermal' */
    (void)Rte_Read_VeSSDR_b_HVBatPerWUThermal_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb' */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMaxArb_Value
        (&rtb_VeCCCR_T_Hyst_MinCold11);

    /* Inport: '<Root>/VeBPCR_e_ChargingStat_BPCM' */
    (void)Rte_Read_VeBPCR_e_ChargingStat_BPCM_Value(&tmpRead_2);

    /* Inport: '<Root>/VeIDCR_e_ProxStat' */
    (void)Rte_Read_VeIDCR_e_ProxStat_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<Root>/CCCR_MedTED' */
    /* SignalConversion generated from: '<S1>/VeIDCR_I_ChrgCrntAvail' incorporates:
     *  Inport: '<Root>/VeIDCR_I_ChrgCrntAvail'
     */
    (void)Rte_Read_VeIDCR_I_ChrgCrntAvail_Value(&rtb_TmpSignalConversionAtVeIDCR);

    /* SignalConversion generated from: '<S1>/VeBPCR_I_MaxChrgCurrAlwd' incorporates:
     *  Inport: '<Root>/VeBPCR_I_MaxChrgCurrAlwd'
     */
    (void)Rte_Read_VeBPCR_I_MaxChrgCurrAlwd_Value
        (&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&CCCR_ac_B.TmpSignalConversionAtVePMDR_e_P);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct);

    /* SignalConversion generated from: '<S1>/VeBPCR_T_HV_BatModTempMin' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempMin'
     */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMin_Value
        (&rtb_TmpSignalConversionAtVeBP_i);

    /* SignalConversion generated from: '<S1>/VeBPCR_T_HV_BatModTempMax' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempMax'
     */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMax_Value
        (&rtb_TmpSignalConversionAtVeBP_e);

    /* SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_TmpSignalConversionAtVeBP_f);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BattLTMinLim' incorporates:
     *  Inport: '<Root>/VeESMR_P_BattLTMinLim'
     */
    (void)Rte_Read_VeESMR_P_BattLTMinLim_Value(&rtb_TmpSignalConversionAtVeESMR);

    /* SignalConversion generated from: '<S1>/VeIDCR_I_ChrgCurrent' incorporates:
     *  Inport: '<Root>/VeIDCR_I_ChrgCurrent'
     */
    (void)Rte_Read_VeIDCR_I_ChrgCurrent_Value(&rtb_TmpSignalConversionAtVeID_k);

    /* SignalConversion generated from: '<S1>/VeOFCR_I_ChrgPortOTCrnt' incorporates:
     *  Inport: '<Root>/VeOFCR_I_ChrgPortOTCrnt'
     */
    (void)Rte_Read_VeOFCR_I_ChrgPortOTCrnt_Value
        (&rtb_TmpSignalConversionAtVeOFCR);

    /* SignalConversion generated from: '<S1>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
     */
    (void)Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value
        (&CCCR_ac_B.TmpSignalConversionAtVeHMIR_Pct);

    /* SignalConversion generated from: '<S1>/VeCITR_b_SOC_Max_Lev' incorporates:
     *  Inport: '<Root>/VeCITR_b_SOC_Max_Lev'
     */
    (void)Rte_Read_VeCITR_b_SOC_Max_Lev_Value
        (&CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S);

    /* SignalConversion generated from: '<S1>/VeTHMR_I_ChargeCurrentLim' incorporates:
     *  Inport: '<Root>/VeTHMR_I_ChargeCurrentLim'
     */
    (void)Rte_Read_VeTHMR_I_ChargeCurrentLim_Value
        (&rtb_TmpSignalConversionAtVeTHMR);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value
        (&CCCR_ac_B.TmpSignalConversionAtVeOBCR_e_d);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChrgSysStat_SF' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChrgSysStat_SF'
     */
    (void)Rte_Read_VeOBCR_e_ChrgSysStat_SF_Value
        (&CCCR_ac_B.TmpSignalConversionAtVeOBCR_e_C);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargeType'
     */
    (void)Rte_Read_VeOBCR_e_ChargeType_Value(&rtb_TmpSignalConversionAtVeOB_k);

    /* SignalConversion generated from: '<S1>/VeDCCR_I_DCChrgEOL_TestCrnt' incorporates:
     *  Inport: '<Root>/VeDCCR_I_DCChrgEOL_TestCrnt'
     */
    (void)Rte_Read_VeDCCR_I_DCChrgEOL_TestCrnt_Value
        (&rtb_TmpSignalConversionAtVeDCCR);

    /* SignalConversion generated from: '<S1>/VeDCCR_b_V2GPilotEnable' incorporates:
     *  Inport: '<Root>/VeDCCR_b_V2GPilotEnable'
     */
    (void)Rte_Read_VeDCCR_b_V2GPilotEnable_Value
        (&rtb_TmpSignalConversionAtVeDC_d);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_PluggedIn' incorporates:
     *  Inport: '<Root>/VeOBCR_b_PluggedIn'
     */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value(&rtb_TmpSignalConversionAtVeOBCR);

    /* SignalConversion generated from: '<S1>/VeHVTR_I_StringsCurrFdbk' incorporates:
     *  Inport: '<Root>/VeHVTR_I_StringsCurrFdbk'
     */
    (void)Rte_Read_VeHVTR_I_StringsCurrFdbk_Value
        (&CCCR_ac_B.TmpSignalConversionAtVeHVTR_I_S);

    /* SignalConversion generated from: '<S1>/VeHVTR_U_HvBattVolt_Max' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HvBattVolt_Max'
     */
    (void)Rte_Read_VeHVTR_U_HvBattVolt_Max_Value
        (&CCCR_ac_B.TmpSignalConversionAtVeHVTR_U_H);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CCCI'
     */
    /* Switch: '<S5>/Switch59' incorporates:
     *  Constant: '<S479>/Calib'
     *  Constant: '<S490>/Calib'
     *  Inport: '<Root>/VeIDCR_e_ProxStat'
     */
    if (KeCCCR_b_EVSE_ProxStat_Ovrd)
    {
        VeCCCR_e_EVSE_ProxStat_In = KeCCCR_e_EVSE_ProxStat_Val;
    }
    else
    {
        VeCCCR_e_EVSE_ProxStat_In = tmpRead_0;
    }

    /* End of Switch: '<S5>/Switch59' */

    /* Switch: '<S5>/Switch15' incorporates:
     *  Constant: '<S470>/Calib'
     *  Constant: '<S488>/Calib'
     *  Inport: '<Root>/VeBPCR_e_ChargingStat_BPCM'
     */
    if (KeCCCR_b_BPCM_ChrgStatOvrd)
    {
        VeCCCR_e_BPCM_ChrgStat_In = KeCCCR_e_BPCM_ChrgStatVal;
    }
    else
    {
        VeCCCR_e_BPCM_ChrgStat_In = tmpRead_2;
    }

    /* End of Switch: '<S5>/Switch15' */

    /* Outputs for Atomic SubSystem: '<S5>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S466>/Switch2' incorporates:
     *  UnitDelay: '<S466>/Unit Delay'
     */
    rtb_Switch2_na = CCCR_ac_DW.UnitDelay_DSTATE_mf;

    /* Switch: '<S466>/Switch1' incorporates:
     *  Constant: '<S491>/Calib'
     *  Product: '<S466>/Multiplication'
     *  Sum: '<S466>/Subtraction'
     *  Sum: '<S466>/Summation'
     */
    VeCCCR_U_HV_BatVoltModMaxArbFil = ((rtb_VeCCCR_T_Hyst_MinCold11 -
        rtb_Switch2_na) * KeCCCR_k_LPF_MaxCellVoltCoef) + rtb_Switch2_na;

    /* Update for UnitDelay: '<S466>/Unit Delay' */
    CCCR_ac_DW.UnitDelay_DSTATE_mf = VeCCCR_U_HV_BatVoltModMaxArbFil;

    /* End of Outputs for SubSystem: '<S5>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S482>/Calib'
     */
    if (KeCCCR_b_PSAOvrd)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S483>/Calib'
         */
        VeCCCR_b_PropSysActv = KeCCCR_b_PSAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch4' */
        VeCCCR_b_PropSysActv = tmpRead_3;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Switch: '<S5>/Switch6' incorporates:
     *  Constant: '<S480>/Calib'
     *  Constant: '<S481>/Calib'
     */
    if (KeCCCR_b_HVPerWUTherm_Ovrd)
    {
        tmpRead_4 = KeCCCR_b_HVPerWUTherm_Val;
    }

    /* End of Switch: '<S5>/Switch6' */

    /* Switch: '<S5>/Switch7' incorporates:
     *  Constant: '<S474>/Calib'
     *  Constant: '<S475>/Calib'
     */
    if (KeCCCR_b_CabPrecDny_BattCond_Ovrd)
    {
        rtb_AND_psp = KeCCCR_b_CabPrecDny_BattCond_Val;
    }

    /* End of Switch: '<S5>/Switch7' */

    /* Logic: '<S5>/Logical1' */
    VeCCCR_b_HVBatPerWUThermal = (tmpRead_4 || rtb_AND_psp);

    /* Switch: '<S5>/Switch8' incorporates:
     *  Constant: '<S486>/Calib'
     *  Constant: '<S487>/Calib'
     */
    if (KeCCCR_b_THMR_RdyOvrd)
    {
        VeCCCR_b_THMR_RdyForShtDwn = KeCCCR_b_THMR_Rdy4ShtDwn;
    }
    else
    {
        VeCCCR_b_THMR_RdyForShtDwn = tmpRead_5;
    }

    /* End of Switch: '<S5>/Switch8' */

    /* Switch: '<S5>/Switch16' incorporates:
     *  Constant: '<S471>/Calib'
     */
    if (KeCCCR_b_CITR_PwrLimOvrd)
    {
        /* Switch: '<S5>/Switch16' incorporates:
         *  Constant: '<S489>/Calib'
         */
        VeCCCR_e_PwrLimReq = KeCCCR_e_CITR_PwrLimReqVal;
    }
    else
    {
        /* Switch: '<S5>/Switch16' incorporates:
         *  Inport: '<Root>/VeCITR_e_PwrLimReq'
         */
        VeCCCR_e_PwrLimReq = tmpRead_7;
    }

    /* End of Switch: '<S5>/Switch16' */

    /* Switch: '<S5>/Switch17' incorporates:
     *  Constant: '<S472>/Calib'
     */
    if (KeCCCR_b_CITR_PwrLimReq_FAOvrd)
    {
        /* Switch: '<S5>/Switch17' incorporates:
         *  Constant: '<S473>/Calib'
         */
        VeCCCR_b_PwrLimReq_FA = KeCCCR_b_CITR_PwrLimReq_FAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch17' */
        VeCCCR_b_PwrLimReq_FA = rtb_AND_kz;
    }

    /* End of Switch: '<S5>/Switch17' */

    /* Switch: '<S5>/Switch20' incorporates:
     *  Constant: '<S484>/Calib'
     */
    if (KeCCCR_b_PwrLimReq_SgnlRcvdOvrd)
    {
        /* Switch: '<S5>/Switch20' incorporates:
         *  Constant: '<S485>/Calib'
         */
        VeCCCR_b_PwrLimReq_SgnlRcvd = KeCCCR_b_PwrLimReq_SgnlRcvdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch20' */
        VeCCCR_b_PwrLimReq_SgnlRcvd = rtb_AND_do;
    }

    /* End of Switch: '<S5>/Switch20' */

    /* Switch: '<S5>/Switch24' incorporates:
     *  Constant: '<S478>/Calib'
     */
    if (KeCCCR_b_EVSEOutputVoltOvrd)
    {
        /* Switch: '<S5>/Switch24' incorporates:
         *  Constant: '<S469>/Calib'
         */
        VeCCCR_U_EVSEOutputVolt = KeCCCR_U_EVSEOutputVoltOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch24' */
        VeCCCR_U_EVSEOutputVolt = rtb_VeCCCR_T_Hyst_MaxCold11;
    }

    /* End of Switch: '<S5>/Switch24' */

    /* Switch: '<S5>/Switch28' incorporates:
     *  Constant: '<S477>/Calib'
     */
    if (KeCCCR_b_EVSEMaxPwrLmtOvrd)
    {
        /* Switch: '<S5>/Switch28' incorporates:
         *  Constant: '<S468>/Calib'
         */
        VeCCCR_P_EVSEMaxPwrLmt = KeCCCR_P_EVSEMaxPwrLmtOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch28' */
        VeCCCR_P_EVSEMaxPwrLmt = rtb_VeCCCR_T_Hyst_Debug11;
    }

    /* End of Switch: '<S5>/Switch28' */

    /* Switch: '<S5>/Switch31' incorporates:
     *  Constant: '<S476>/Calib'
     */
    if (KeCCCR_b_EVSEMaxCurrLmtOvrd)
    {
        /* Switch: '<S5>/Switch31' incorporates:
         *  Constant: '<S467>/Calib'
         */
        VeCCCR_I_EVSEMaxCurrLmt = KeCCCR_I_EVSEMaxCurrLmtOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch31' */
        VeCCCR_I_EVSEMaxCurrLmt = tmpRead_8;
    }

    /* End of Switch: '<S5>/Switch31' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CCCC'
     */
    /* If: '<S4>/If' incorporates:
     *  Constant: '<S329>/Calib'
     *  Constant: '<S9>/Calib'
     *  Delay: '<S328>/Integer Delay2'
     *  Inport: '<Root>/VeCPLR_b_Lock_Status'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeFCPR_b_FCPS_HV_AfterRunSts'
     *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb'
     *  Inport: '<Root>/VeIDCR_I_BattSide_Curr'
     *  Inport: '<Root>/VeIDCR_I_J1772InputCrntAval'
     *  Inport: '<Root>/VeIDCR_U_ACSideVolt_L2'
     *  Inport: '<Root>/VeIDCR_U_ACSideVolt_L3'
     *  Inport: '<Root>/VeIDCR_U_AC_InputVltOBCM'
     *  Inport: '<Root>/VeIDCR_b_ChrgCurrent_FA'
     *  Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     *  Logic: '<S4>/Logical Operator'
     */
    rtPrevAction = CCCR_ac_DW.If_ActiveSubsystem;
    rtAction = (sint8)(((!KeCCCR_b_EnblDsblProxPlgOvrd) && (!rtb_AND_is)) ? 1 :
                       0);
    CCCR_ac_DW.If_ActiveSubsystem = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0))
    {
        /* Disable for If: '<S26>/If' */
        CCCR_ac_DW.If_ActiveSubsystem_g = -1;
    }

    if (rtAction == 0)
    {
        /* Outputs for IfAction SubSystem: '<S4>/CurrRq_ChrgCompl' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S194>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S203>/EdgeRising' */
        /* Logic: '<S210>/AND' incorporates:
         *  Logic: '<S210>/OR1'
         *  UnitDelay: '<S210>/Unit Delay'
         */
        rtb_AND_is = !CCCR_ac_DW.UnitDelay_DSTATE_kf;

        /* Update for UnitDelay: '<S210>/Unit Delay' incorporates:
         *  Constant: '<S194>/TRUE Constant'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_kf = true;

        /* End of Outputs for SubSystem: '<S203>/EdgeRising' */

        /* Switch: '<S203>/Switch1' incorporates:
         *  Constant: '<S202>/Calib'
         *  Constant: '<S203>/Constant Value'
         *  Logic: '<S203>/OR'
         *  MinMax: '<S203>/Minimum'
         *  Sum: '<S203>/Summation'
         *  UnitDelay: '<S203>/Unit Delay'
         */
        if (rtb_AND_is)
        {
            /* Switch: '<S203>/Switch1' incorporates:
             *  Constant: '<S203>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_HystInitValue < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_p) + 1U)))
        {
            /* MinMax: '<S203>/Minimum' incorporates:
             *  Constant: '<S202>/Calib'
             *  Switch: '<S203>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_HystInitValue;
        }
        else
        {
            /* Switch: '<S203>/Switch1' incorporates:
             *  Constant: '<S203>/Constant Value'
             *  MinMax: '<S203>/Minimum'
             *  Sum: '<S203>/Summation'
             *  UnitDelay: '<S203>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_p) + 1U);
        }

        /* End of Switch: '<S203>/Switch1' */

        /* Update for UnitDelay: '<S203>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S194>/Turn On Delay Sample' */

        /* Rounding: '<S194>/Rounding2' incorporates:
         *  Rounding: '<S195>/Rounding2'
         */
        tmpRead_8 = roundf(rtb_TmpSignalConversionAtVeBP_f);

        /* RelationalOperator: '<S194>/Comparison1' incorporates:
         *  Rounding: '<S194>/Rounding2'
         *  UnitDelay: '<S194>/Unit Delay'
         */
        VeCCCR_T_Hyst_Cold12 = (tmpRead_8 < CCCR_ac_DW.UnitDelay_DSTATE);

        /* RelationalOperator: '<S194>/Comparison3' incorporates:
         *  Rounding: '<S194>/Rounding2'
         *  UnitDelay: '<S194>/Unit Delay'
         */
        VeCCCR_T_Hyst_Cold13 = (tmpRead_8 > CCCR_ac_DW.UnitDelay_DSTATE);

        /* MinMax: '<S194>/MinMax2' incorporates:
         *  Rounding: '<S194>/Rounding2'
         *  UnitDelay: '<S194>/Unit Delay2'
         */
        VeCCCR_T_Hyst_Cold10 = fminf(CCCR_ac_DW.UnitDelay2_DSTATE, tmpRead_8);

        /* Outputs for Atomic SubSystem: '<S194>/Turn On Delay Sample' */
        /* If: '<S194>/If2' incorporates:
         *  Constant: '<S202>/Calib'
         *  RelationalOperator: '<S203>/Greater  Than'
         *  Rounding: '<S194>/Rounding2'
         *  UnitDelay: '<S194>/Unit Delay4'
         */
        if (rtb_Switch1 < KeCCCR_Cnt_HystInitValue)
        {
            /* Outputs for IfAction SubSystem: '<S194>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S200>/Action Port'
             */
            CCCR_ac_IfActionSubsystem3(tmpRead_8, (&(VeCCCR_T_Hyst_Cold)));

            /* End of Outputs for SubSystem: '<S194>/If Action Subsystem3' */
        }
        else if (VeCCCR_T_Hyst_Cold12)
        {
            /* Outputs for IfAction SubSystem: '<S194>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S198>/Action Port'
             */
            /* If: '<S198>/If' incorporates:
             *  Rounding: '<S194>/Rounding2'
             *  UnitDelay: '<S194>/Unit Delay1'
             */
            if (CCCR_ac_DW.UnitDelay1_DSTATE_h)
            {
                /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem' incorporates:
                 *  ActionPort: '<S204>/Action Port'
                 */
                CCCR_ac_IfActionSubsystem(tmpRead_8, (&(VeCCCR_T_Hyst_Cold9)));

                /* End of Outputs for SubSystem: '<S198>/If Action Subsystem' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem1' incorporates:
                 *  ActionPort: '<S205>/Action Port'
                 */
                CCCR_ac_IfActionSubsystem1(VeCCCR_T_Hyst_Cold10,
                    (&(VeCCCR_T_Hyst_Cold9)), &CCCR_ac_B.IfActionSubsystem1_k);

                /* End of Outputs for SubSystem: '<S198>/If Action Subsystem1' */
            }

            /* End of If: '<S198>/If' */

            /* Merge: '<S194>/Merge2' incorporates:
             *  SignalConversion generated from: '<S198>/FirstDecrFlag_Out'
             */
            VeCCCR_T_Hyst_Cold4 =
                CCCR_ac_B.IfActionSubsystem1_k.OutportBufferForFirstDecrFlag_O;

            /* Merge: '<S194>/Merge6' incorporates:
             *  SignalConversion: '<S198>/Signal Conversion'
             */
            VeCCCR_T_Hyst_Cold = VeCCCR_T_Hyst_Cold9;

            /* Merge: '<S194>/Merge1' incorporates:
             *  Constant: '<S198>/FALSE Constant'
             *  SignalConversion generated from: '<S198>/FirstIncrFlag_Out'
             */
            VeCCCR_T_Hyst_Cold3 = false;

            /* End of Outputs for SubSystem: '<S194>/If Action Subsystem1' */
        }
        else if (VeCCCR_T_Hyst_Cold13)
        {
            /* Outputs for IfAction SubSystem: '<S194>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S199>/Action Port'
             */
            CCCR_ac_IfActionSubsystem2(VeCCCR_T_Hyst_Cold10,
                CCCR_ac_DW.UnitDelay4_DSTATE_i, tmpRead_8, (&(VeCCCR_T_Hyst_Cold)),
                (&(VeCCCR_T_Hyst_Cold4)), (&(VeCCCR_T_Hyst_Cold3)),
                &CCCR_ac_B.IfActionSubsystem2);

            /* End of Outputs for SubSystem: '<S194>/If Action Subsystem2' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S194>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S201>/Action Port'
             */
            /* Merge: '<S194>/Merge6' incorporates:
             *  SignalConversion: '<S201>/Signal Conversion'
             */
            VeCCCR_T_Hyst_Cold = VeCCCR_T_Hyst_Cold10;

            /* End of Outputs for SubSystem: '<S194>/If Action Subsystem6' */
        }

        /* End of If: '<S194>/If2' */
        /* End of Outputs for SubSystem: '<S194>/Turn On Delay Sample' */

        /* DataStoreWrite: '<S194>/Data Store Write1' */
        CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_Cold = VeCCCR_T_Hyst_Cold3;

        /* DataStoreWrite: '<S194>/Data Store Write4' */
        CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_Cold = VeCCCR_T_Hyst_Cold4;

        /* Outputs for Atomic SubSystem: '<S195>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S216>/EdgeRising' */
        /* Logic: '<S222>/AND' incorporates:
         *  Logic: '<S222>/OR1'
         *  UnitDelay: '<S222>/Unit Delay'
         */
        rtb_AND_is = !CCCR_ac_DW.UnitDelay_DSTATE_l4;

        /* Update for UnitDelay: '<S222>/Unit Delay' incorporates:
         *  Constant: '<S195>/TRUE Constant'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_l4 = true;

        /* End of Outputs for SubSystem: '<S216>/EdgeRising' */

        /* Switch: '<S216>/Switch1' incorporates:
         *  Constant: '<S215>/Calib'
         *  Constant: '<S216>/Constant Value'
         *  Logic: '<S216>/OR'
         *  MinMax: '<S216>/Minimum'
         *  Sum: '<S216>/Summation'
         *  UnitDelay: '<S216>/Unit Delay'
         */
        if (rtb_AND_is)
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Constant: '<S216>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_HystInitValue < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_fw) + 1U)))
        {
            /* MinMax: '<S216>/Minimum' incorporates:
             *  Constant: '<S215>/Calib'
             *  Switch: '<S216>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_HystInitValue;
        }
        else
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Constant: '<S216>/Constant Value'
             *  MinMax: '<S216>/Minimum'
             *  Sum: '<S216>/Summation'
             *  UnitDelay: '<S216>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_fw) + 1U);
        }

        /* End of Switch: '<S216>/Switch1' */

        /* Update for UnitDelay: '<S216>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_fw = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S195>/Turn On Delay Sample' */

        /* RelationalOperator: '<S195>/Comparison' incorporates:
         *  UnitDelay: '<S195>/Unit Delay'
         */
        VeCCCR_b_Hyst_Debug12 = (tmpRead_8 > CCCR_ac_DW.UnitDelay_DSTATE_f);

        /* RelationalOperator: '<S195>/Comparison3' incorporates:
         *  UnitDelay: '<S195>/Unit Delay'
         */
        VeCCCR_b_Hyst_Debug13 = (tmpRead_8 < CCCR_ac_DW.UnitDelay_DSTATE_f);

        /* MinMax: '<S195>/MinMax2' incorporates:
         *  UnitDelay: '<S195>/Unit Delay7'
         */
        rtb_VeCCCR_T_Hyst_Debug11 = fmaxf(CCCR_ac_DW.UnitDelay7_DSTATE,
            tmpRead_8);

        /* Outputs for Atomic SubSystem: '<S195>/Turn On Delay Sample' */
        /* If: '<S195>/If' incorporates:
         *  Constant: '<S215>/Calib'
         *  RelationalOperator: '<S216>/Greater  Than'
         *  UnitDelay: '<S195>/Unit Delay5'
         *  UnitDelay: '<S195>/Unit Delay6'
         */
        if (rtb_Switch1 < KeCCCR_Cnt_HystInitValue)
        {
            /* Outputs for IfAction SubSystem: '<S195>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S214>/Action Port'
             */
            CCCR_ac_IfActionSubsystem3(tmpRead_8, (&(VeCCCR_T_Hyst_Hot)));

            /* End of Outputs for SubSystem: '<S195>/If Action Subsystem3' */
        }
        else if (VeCCCR_b_Hyst_Debug12)
        {
            /* Outputs for IfAction SubSystem: '<S195>/If Action Subsystem' incorporates:
             *  ActionPort: '<S211>/Action Port'
             */
            CCCR_ac_IfActionSubsystem_b(CCCR_ac_DW.UnitDelay6_DSTATE_o,
                rtb_VeCCCR_T_Hyst_Debug11, tmpRead_8, (&(VeCCCR_T_Hyst_Hot)),
                (&(VeCCCR_b_Hyst_Debug3)), (&(VeCCCR_b_Hyst_Debug4)),
                &CCCR_ac_B.IfActionSubsystem);

            /* End of Outputs for SubSystem: '<S195>/If Action Subsystem' */
        }
        else if (VeCCCR_b_Hyst_Debug13)
        {
            /* Outputs for IfAction SubSystem: '<S195>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S212>/Action Port'
             */
            CCCR_ac_IfActionSubsystem1_g(rtb_VeCCCR_T_Hyst_Debug11,
                CCCR_ac_DW.UnitDelay5_DSTATE, tmpRead_8, (&(VeCCCR_T_Hyst_Hot)),
                (&(VeCCCR_b_Hyst_Debug3)), (&(VeCCCR_b_Hyst_Debug4)),
                &CCCR_ac_B.IfActionSubsystem1_g);

            /* End of Outputs for SubSystem: '<S195>/If Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S195>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S213>/Action Port'
             */
            CCCR_ac_IfActionSubsystem2_n(rtb_VeCCCR_T_Hyst_Debug11,
                (&(VeCCCR_T_Hyst_Hot)));

            /* End of Outputs for SubSystem: '<S195>/If Action Subsystem2' */
        }

        /* End of If: '<S195>/If' */
        /* End of Outputs for SubSystem: '<S195>/Turn On Delay Sample' */

        /* DataStoreWrite: '<S195>/Data Store Write' */
        CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_Hot = VeCCCR_b_Hyst_Debug4;

        /* DataStoreWrite: '<S195>/Data Store Write1' */
        CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_Hot = VeCCCR_b_Hyst_Debug3;

        /* Switch: '<S196>/Switch1' incorporates:
         *  Constant: '<S197>/Calib'
         *  RelationalOperator: '<S190>/Comparison'
         */
        if (rtb_TmpSignalConversionAtVeBP_f > KeCCCR_T_BattHystThresh)
        {
            /* Switch: '<S196>/Switch1' */
            VeCCCR_T_BattTempFiltAvg = VeCCCR_T_Hyst_Hot;
        }
        else
        {
            /* Switch: '<S196>/Switch1' */
            VeCCCR_T_BattTempFiltAvg = VeCCCR_T_Hyst_Cold;
        }

        /* End of Switch: '<S196>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S223>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S232>/EdgeRising' */
        /* Logic: '<S239>/AND' incorporates:
         *  Logic: '<S239>/OR1'
         *  UnitDelay: '<S239>/Unit Delay'
         */
        rtb_AND_is = !CCCR_ac_DW.UnitDelay_DSTATE_lrk;

        /* Update for UnitDelay: '<S239>/Unit Delay' incorporates:
         *  Constant: '<S223>/TRUE Constant'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_lrk = true;

        /* End of Outputs for SubSystem: '<S232>/EdgeRising' */

        /* Switch: '<S232>/Switch1' incorporates:
         *  Constant: '<S231>/Calib'
         *  Constant: '<S232>/Constant Value'
         *  Logic: '<S232>/OR'
         *  MinMax: '<S232>/Minimum'
         *  Sum: '<S232>/Summation'
         *  UnitDelay: '<S232>/Unit Delay'
         */
        if (rtb_AND_is)
        {
            /* Switch: '<S232>/Switch1' incorporates:
             *  Constant: '<S232>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_HystInitValue < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_ch) + 1U)))
        {
            /* MinMax: '<S232>/Minimum' incorporates:
             *  Constant: '<S231>/Calib'
             *  Switch: '<S232>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_HystInitValue;
        }
        else
        {
            /* Switch: '<S232>/Switch1' incorporates:
             *  Constant: '<S232>/Constant Value'
             *  MinMax: '<S232>/Minimum'
             *  Sum: '<S232>/Summation'
             *  UnitDelay: '<S232>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_ch) + 1U);
        }

        /* End of Switch: '<S232>/Switch1' */

        /* Update for UnitDelay: '<S232>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_ch = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S223>/Turn On Delay Sample' */

        /* Rounding: '<S223>/Rounding2' incorporates:
         *  Rounding: '<S224>/Rounding2'
         */
        rtb_VeCCCR_T_Hyst_Debug11 = roundf(rtb_TmpSignalConversionAtVeBP_e);

        /* RelationalOperator: '<S223>/Comparison1' incorporates:
         *  Rounding: '<S223>/Rounding2'
         *  UnitDelay: '<S223>/Unit Delay'
         */
        VeCCCR_T_Hyst_MaxCold12 = (rtb_VeCCCR_T_Hyst_Debug11 <
            CCCR_ac_DW.UnitDelay_DSTATE_a);

        /* RelationalOperator: '<S223>/Comparison3' incorporates:
         *  Rounding: '<S223>/Rounding2'
         *  UnitDelay: '<S223>/Unit Delay'
         */
        VeCCCR_T_Hyst_MaxCold13 = (rtb_VeCCCR_T_Hyst_Debug11 >
            CCCR_ac_DW.UnitDelay_DSTATE_a);

        /* MinMax: '<S223>/MinMax2' incorporates:
         *  Rounding: '<S223>/Rounding2'
         *  UnitDelay: '<S223>/Unit Delay2'
         */
        rtb_VeCCCR_T_Hyst_MaxCold11 = fminf(CCCR_ac_DW.UnitDelay2_DSTATE_j,
            rtb_VeCCCR_T_Hyst_Debug11);

        /* Outputs for Atomic SubSystem: '<S223>/Turn On Delay Sample' */
        /* If: '<S223>/If2' incorporates:
         *  Constant: '<S231>/Calib'
         *  RelationalOperator: '<S232>/Greater  Than'
         *  Rounding: '<S223>/Rounding2'
         *  UnitDelay: '<S223>/Unit Delay1'
         *  UnitDelay: '<S223>/Unit Delay4'
         */
        if (rtb_Switch1 < KeCCCR_Cnt_HystInitValue)
        {
            /* Outputs for IfAction SubSystem: '<S223>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S229>/Action Port'
             */
            CCCR_ac_IfActionSubsystem3(rtb_VeCCCR_T_Hyst_Debug11,
                (&(VeCCCR_T_Hyst_MaxCold)));

            /* End of Outputs for SubSystem: '<S223>/If Action Subsystem3' */
        }
        else if (VeCCCR_T_Hyst_MaxCold12)
        {
            /* Outputs for IfAction SubSystem: '<S223>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S227>/Action Port'
             */
            CCCR_ac_IfActionSubsystem1_j(CCCR_ac_DW.UnitDelay1_DSTATE_e,
                rtb_VeCCCR_T_Hyst_MaxCold11, rtb_VeCCCR_T_Hyst_Debug11,
                (&(VeCCCR_T_Hyst_MaxCold)), (&(VeCCCR_T_Hyst_MaxCold4)),
                (&(VeCCCR_T_Hyst_MaxCold3)), &CCCR_ac_B.IfActionSubsystem1_j);

            /* End of Outputs for SubSystem: '<S223>/If Action Subsystem1' */
        }
        else if (VeCCCR_T_Hyst_MaxCold13)
        {
            /* Outputs for IfAction SubSystem: '<S223>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S228>/Action Port'
             */
            CCCR_ac_IfActionSubsystem2(rtb_VeCCCR_T_Hyst_MaxCold11,
                CCCR_ac_DW.UnitDelay4_DSTATE_f, rtb_VeCCCR_T_Hyst_Debug11,
                (&(VeCCCR_T_Hyst_MaxCold)), (&(VeCCCR_T_Hyst_MaxCold4)),
                (&(VeCCCR_T_Hyst_MaxCold3)), &CCCR_ac_B.IfActionSubsystem2_h);

            /* End of Outputs for SubSystem: '<S223>/If Action Subsystem2' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S223>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S230>/Action Port'
             */
            CCCR_ac_IfActionSubsystem2_n(rtb_VeCCCR_T_Hyst_MaxCold11,
                (&(VeCCCR_T_Hyst_MaxCold)));

            /* End of Outputs for SubSystem: '<S223>/If Action Subsystem6' */
        }

        /* End of If: '<S223>/If2' */
        /* End of Outputs for SubSystem: '<S223>/Turn On Delay Sample' */

        /* DataStoreWrite: '<S223>/Data Store Write1' */
        CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MaxCold = VeCCCR_T_Hyst_MaxCold3;

        /* DataStoreWrite: '<S223>/Data Store Write4' */
        CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MaxCold = VeCCCR_T_Hyst_MaxCold4;

        /* Outputs for Atomic SubSystem: '<S224>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S245>/EdgeRising' */
        /* Logic: '<S251>/AND' incorporates:
         *  Logic: '<S251>/OR1'
         *  UnitDelay: '<S251>/Unit Delay'
         */
        rtb_AND_is = !CCCR_ac_DW.UnitDelay_DSTATE_gm;

        /* Update for UnitDelay: '<S251>/Unit Delay' incorporates:
         *  Constant: '<S224>/TRUE Constant'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_gm = true;

        /* End of Outputs for SubSystem: '<S245>/EdgeRising' */

        /* Switch: '<S245>/Switch1' incorporates:
         *  Constant: '<S244>/Calib'
         *  Constant: '<S245>/Constant Value'
         *  Logic: '<S245>/OR'
         *  MinMax: '<S245>/Minimum'
         *  Sum: '<S245>/Summation'
         *  UnitDelay: '<S245>/Unit Delay'
         */
        if (rtb_AND_is)
        {
            /* Switch: '<S245>/Switch1' incorporates:
             *  Constant: '<S245>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_HystInitValue < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_i4) + 1U)))
        {
            /* MinMax: '<S245>/Minimum' incorporates:
             *  Constant: '<S244>/Calib'
             *  Switch: '<S245>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_HystInitValue;
        }
        else
        {
            /* Switch: '<S245>/Switch1' incorporates:
             *  Constant: '<S245>/Constant Value'
             *  MinMax: '<S245>/Minimum'
             *  Sum: '<S245>/Summation'
             *  UnitDelay: '<S245>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_i4) + 1U);
        }

        /* End of Switch: '<S245>/Switch1' */

        /* Update for UnitDelay: '<S245>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_i4 = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S224>/Turn On Delay Sample' */

        /* RelationalOperator: '<S224>/Comparison' incorporates:
         *  UnitDelay: '<S224>/Unit Delay'
         */
        VeCCCR_b_Hyst_Max12 = (rtb_VeCCCR_T_Hyst_Debug11 >
                               CCCR_ac_DW.UnitDelay_DSTATE_o);

        /* RelationalOperator: '<S224>/Comparison3' incorporates:
         *  UnitDelay: '<S224>/Unit Delay'
         */
        VeCCCR_b_Hyst_Max13 = (rtb_VeCCCR_T_Hyst_Debug11 <
                               CCCR_ac_DW.UnitDelay_DSTATE_o);

        /* MinMax: '<S224>/MinMax2' incorporates:
         *  UnitDelay: '<S224>/Unit Delay7'
         */
        rtb_VeCCCR_T_Hyst_MaxCold11 = fmaxf(CCCR_ac_DW.UnitDelay7_DSTATE_f,
            rtb_VeCCCR_T_Hyst_Debug11);

        /* Outputs for Atomic SubSystem: '<S224>/Turn On Delay Sample' */
        /* If: '<S224>/If' incorporates:
         *  Constant: '<S244>/Calib'
         *  RelationalOperator: '<S245>/Greater  Than'
         *  UnitDelay: '<S224>/Unit Delay5'
         *  UnitDelay: '<S224>/Unit Delay6'
         */
        if (rtb_Switch1 < KeCCCR_Cnt_HystInitValue)
        {
            /* Outputs for IfAction SubSystem: '<S224>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S243>/Action Port'
             */
            CCCR_ac_IfActionSubsystem3(rtb_VeCCCR_T_Hyst_Debug11,
                (&(VeCCCR_T_Hyst_MaxHot)));

            /* End of Outputs for SubSystem: '<S224>/If Action Subsystem3' */
        }
        else if (VeCCCR_b_Hyst_Max12)
        {
            /* Outputs for IfAction SubSystem: '<S224>/If Action Subsystem' incorporates:
             *  ActionPort: '<S240>/Action Port'
             */
            CCCR_ac_IfActionSubsystem_b(CCCR_ac_DW.UnitDelay6_DSTATE_i,
                rtb_VeCCCR_T_Hyst_MaxCold11, rtb_VeCCCR_T_Hyst_Debug11,
                (&(VeCCCR_T_Hyst_MaxHot)), (&(VeCCCR_b_Hyst_Max3)),
                (&(VeCCCR_b_Hyst_Max4)), &CCCR_ac_B.IfActionSubsystem_h);

            /* End of Outputs for SubSystem: '<S224>/If Action Subsystem' */
        }
        else if (VeCCCR_b_Hyst_Max13)
        {
            /* Outputs for IfAction SubSystem: '<S224>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S241>/Action Port'
             */
            CCCR_ac_IfActionSubsystem1_g(rtb_VeCCCR_T_Hyst_MaxCold11,
                CCCR_ac_DW.UnitDelay5_DSTATE_m, rtb_VeCCCR_T_Hyst_Debug11,
                (&(VeCCCR_T_Hyst_MaxHot)), (&(VeCCCR_b_Hyst_Max3)),
                (&(VeCCCR_b_Hyst_Max4)), &CCCR_ac_B.IfActionSubsystem1_d);

            /* End of Outputs for SubSystem: '<S224>/If Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S224>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S242>/Action Port'
             */
            CCCR_ac_IfActionSubsystem2_n(rtb_VeCCCR_T_Hyst_MaxCold11,
                (&(VeCCCR_T_Hyst_MaxHot)));

            /* End of Outputs for SubSystem: '<S224>/If Action Subsystem2' */
        }

        /* End of If: '<S224>/If' */
        /* End of Outputs for SubSystem: '<S224>/Turn On Delay Sample' */

        /* DataStoreWrite: '<S224>/Data Store Write' */
        CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MaxHot = VeCCCR_b_Hyst_Max4;

        /* DataStoreWrite: '<S224>/Data Store Write1' */
        CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MaxHot = VeCCCR_b_Hyst_Max3;

        /* Switch: '<S225>/Switch1' incorporates:
         *  Constant: '<S226>/Calib'
         *  RelationalOperator: '<S191>/Comparison'
         */
        if (rtb_TmpSignalConversionAtVeBP_e > KeCCCR_T_BattHystThresh)
        {
            /* Switch: '<S225>/Switch1' */
            VeCCCR_T_BattTempFiltMax = VeCCCR_T_Hyst_MaxHot;
        }
        else
        {
            /* Switch: '<S225>/Switch1' */
            VeCCCR_T_BattTempFiltMax = VeCCCR_T_Hyst_MaxCold;
        }

        /* End of Switch: '<S225>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S252>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S261>/EdgeRising' */
        /* Logic: '<S268>/AND' incorporates:
         *  Logic: '<S268>/OR1'
         *  UnitDelay: '<S268>/Unit Delay'
         */
        rtb_AND_is = !CCCR_ac_DW.UnitDelay_DSTATE_lj;

        /* Update for UnitDelay: '<S268>/Unit Delay' incorporates:
         *  Constant: '<S252>/TRUE Constant'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_lj = true;

        /* End of Outputs for SubSystem: '<S261>/EdgeRising' */

        /* Switch: '<S261>/Switch1' incorporates:
         *  Constant: '<S260>/Calib'
         *  Constant: '<S261>/Constant Value'
         *  Logic: '<S261>/OR'
         *  MinMax: '<S261>/Minimum'
         *  Sum: '<S261>/Summation'
         *  UnitDelay: '<S261>/Unit Delay'
         */
        if (rtb_AND_is)
        {
            /* Switch: '<S261>/Switch1' incorporates:
             *  Constant: '<S261>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_HystInitValue < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_mm) + 1U)))
        {
            /* MinMax: '<S261>/Minimum' incorporates:
             *  Constant: '<S260>/Calib'
             *  Switch: '<S261>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_HystInitValue;
        }
        else
        {
            /* Switch: '<S261>/Switch1' incorporates:
             *  Constant: '<S261>/Constant Value'
             *  MinMax: '<S261>/Minimum'
             *  Sum: '<S261>/Summation'
             *  UnitDelay: '<S261>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_mm) + 1U);
        }

        /* End of Switch: '<S261>/Switch1' */

        /* Update for UnitDelay: '<S261>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_mm = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S252>/Turn On Delay Sample' */

        /* Rounding: '<S252>/Rounding2' incorporates:
         *  Rounding: '<S253>/Rounding2'
         */
        rtb_VeCCCR_T_Hyst_MaxCold11 = roundf(rtb_TmpSignalConversionAtVeBP_i);

        /* RelationalOperator: '<S252>/Comparison1' incorporates:
         *  Rounding: '<S252>/Rounding2'
         *  UnitDelay: '<S252>/Unit Delay'
         */
        VeCCCR_T_Hyst_MinCold12 = (rtb_VeCCCR_T_Hyst_MaxCold11 <
            CCCR_ac_DW.UnitDelay_DSTATE_c);

        /* RelationalOperator: '<S252>/Comparison3' incorporates:
         *  Rounding: '<S252>/Rounding2'
         *  UnitDelay: '<S252>/Unit Delay'
         */
        VeCCCR_T_Hyst_MinCold13 = (rtb_VeCCCR_T_Hyst_MaxCold11 >
            CCCR_ac_DW.UnitDelay_DSTATE_c);

        /* MinMax: '<S252>/MinMax2' incorporates:
         *  Rounding: '<S252>/Rounding2'
         *  UnitDelay: '<S252>/Unit Delay2'
         */
        rtb_VeCCCR_T_Hyst_MinCold11 = fminf(CCCR_ac_DW.UnitDelay2_DSTATE_h,
            rtb_VeCCCR_T_Hyst_MaxCold11);

        /* Outputs for Atomic SubSystem: '<S252>/Turn On Delay Sample' */
        /* If: '<S252>/If2' incorporates:
         *  Constant: '<S260>/Calib'
         *  RelationalOperator: '<S261>/Greater  Than'
         *  Rounding: '<S252>/Rounding2'
         *  UnitDelay: '<S252>/Unit Delay1'
         *  UnitDelay: '<S252>/Unit Delay4'
         */
        if (rtb_Switch1 < KeCCCR_Cnt_HystInitValue)
        {
            /* Outputs for IfAction SubSystem: '<S252>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S258>/Action Port'
             */
            CCCR_ac_IfActionSubsystem3(rtb_VeCCCR_T_Hyst_MaxCold11,
                (&(VeCCCR_T_Hyst_MinCold)));

            /* End of Outputs for SubSystem: '<S252>/If Action Subsystem3' */
        }
        else if (VeCCCR_T_Hyst_MinCold12)
        {
            /* Outputs for IfAction SubSystem: '<S252>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S256>/Action Port'
             */
            CCCR_ac_IfActionSubsystem1_j(CCCR_ac_DW.UnitDelay1_DSTATE_i,
                rtb_VeCCCR_T_Hyst_MinCold11, rtb_VeCCCR_T_Hyst_MaxCold11,
                (&(VeCCCR_T_Hyst_MinCold)), (&(VeCCCR_T_Hyst_MinCold4)),
                (&(VeCCCR_T_Hyst_MinCold3)), &CCCR_ac_B.IfActionSubsystem1_b);

            /* End of Outputs for SubSystem: '<S252>/If Action Subsystem1' */
        }
        else if (VeCCCR_T_Hyst_MinCold13)
        {
            /* Outputs for IfAction SubSystem: '<S252>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S257>/Action Port'
             */
            CCCR_ac_IfActionSubsystem2(rtb_VeCCCR_T_Hyst_MinCold11,
                CCCR_ac_DW.UnitDelay4_DSTATE_iy, rtb_VeCCCR_T_Hyst_MaxCold11,
                (&(VeCCCR_T_Hyst_MinCold)), (&(VeCCCR_T_Hyst_MinCold4)),
                (&(VeCCCR_T_Hyst_MinCold3)), &CCCR_ac_B.IfActionSubsystem2_nk);

            /* End of Outputs for SubSystem: '<S252>/If Action Subsystem2' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S252>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S259>/Action Port'
             */
            CCCR_ac_IfActionSubsystem2_n(rtb_VeCCCR_T_Hyst_MinCold11,
                (&(VeCCCR_T_Hyst_MinCold)));

            /* End of Outputs for SubSystem: '<S252>/If Action Subsystem6' */
        }

        /* End of If: '<S252>/If2' */
        /* End of Outputs for SubSystem: '<S252>/Turn On Delay Sample' */

        /* DataStoreWrite: '<S252>/Data Store Write1' */
        CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MinCold = VeCCCR_T_Hyst_MinCold3;

        /* DataStoreWrite: '<S252>/Data Store Write4' */
        CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MinCold = VeCCCR_T_Hyst_MinCold4;

        /* Outputs for Atomic SubSystem: '<S253>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S274>/EdgeRising' */
        /* Logic: '<S280>/AND' incorporates:
         *  Logic: '<S280>/OR1'
         *  UnitDelay: '<S280>/Unit Delay'
         */
        rtb_AND_is = !CCCR_ac_DW.UnitDelay_DSTATE_kp;

        /* Update for UnitDelay: '<S280>/Unit Delay' incorporates:
         *  Constant: '<S253>/TRUE Constant'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_kp = true;

        /* End of Outputs for SubSystem: '<S274>/EdgeRising' */

        /* Switch: '<S274>/Switch1' incorporates:
         *  Constant: '<S273>/Calib'
         *  Constant: '<S274>/Constant Value'
         *  Logic: '<S274>/OR'
         *  MinMax: '<S274>/Minimum'
         *  Sum: '<S274>/Summation'
         *  UnitDelay: '<S274>/Unit Delay'
         */
        if (rtb_AND_is)
        {
            /* Switch: '<S274>/Switch1' incorporates:
             *  Constant: '<S274>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_HystInitValue < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_e) + 1U)))
        {
            /* MinMax: '<S274>/Minimum' incorporates:
             *  Constant: '<S273>/Calib'
             *  Switch: '<S274>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_HystInitValue;
        }
        else
        {
            /* Switch: '<S274>/Switch1' incorporates:
             *  Constant: '<S274>/Constant Value'
             *  MinMax: '<S274>/Minimum'
             *  Sum: '<S274>/Summation'
             *  UnitDelay: '<S274>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_e) + 1U);
        }

        /* End of Switch: '<S274>/Switch1' */

        /* Update for UnitDelay: '<S274>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S253>/Turn On Delay Sample' */

        /* RelationalOperator: '<S253>/Comparison' incorporates:
         *  UnitDelay: '<S253>/Unit Delay'
         */
        VeCCCR_b_Hyst_Min12 = (rtb_VeCCCR_T_Hyst_MaxCold11 >
                               CCCR_ac_DW.UnitDelay_DSTATE_m);

        /* RelationalOperator: '<S253>/Comparison3' incorporates:
         *  UnitDelay: '<S253>/Unit Delay'
         */
        VeCCCR_b_Hyst_Min13 = (rtb_VeCCCR_T_Hyst_MaxCold11 <
                               CCCR_ac_DW.UnitDelay_DSTATE_m);

        /* MinMax: '<S253>/MinMax2' incorporates:
         *  UnitDelay: '<S253>/Unit Delay7'
         */
        rtb_VeCCCR_T_Hyst_MinCold11 = fmaxf(CCCR_ac_DW.UnitDelay7_DSTATE_m,
            rtb_VeCCCR_T_Hyst_MaxCold11);

        /* Outputs for Atomic SubSystem: '<S253>/Turn On Delay Sample' */
        /* If: '<S253>/If' incorporates:
         *  Constant: '<S273>/Calib'
         *  RelationalOperator: '<S274>/Greater  Than'
         *  UnitDelay: '<S253>/Unit Delay5'
         *  UnitDelay: '<S253>/Unit Delay6'
         */
        if (rtb_Switch1 < KeCCCR_Cnt_HystInitValue)
        {
            /* Outputs for IfAction SubSystem: '<S253>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S272>/Action Port'
             */
            CCCR_ac_IfActionSubsystem3(rtb_VeCCCR_T_Hyst_MaxCold11,
                (&(VeCCCR_T_Hyst_MinHot)));

            /* End of Outputs for SubSystem: '<S253>/If Action Subsystem3' */
        }
        else if (VeCCCR_b_Hyst_Min12)
        {
            /* Outputs for IfAction SubSystem: '<S253>/If Action Subsystem' incorporates:
             *  ActionPort: '<S269>/Action Port'
             */
            CCCR_ac_IfActionSubsystem_b(CCCR_ac_DW.UnitDelay6_DSTATE_c,
                rtb_VeCCCR_T_Hyst_MinCold11, rtb_VeCCCR_T_Hyst_MaxCold11,
                (&(VeCCCR_T_Hyst_MinHot)), (&(VeCCCR_b_Hyst_Min3)),
                (&(VeCCCR_b_Hyst_Min4)), &CCCR_ac_B.IfActionSubsystem_o);

            /* End of Outputs for SubSystem: '<S253>/If Action Subsystem' */
        }
        else if (VeCCCR_b_Hyst_Min13)
        {
            /* Outputs for IfAction SubSystem: '<S253>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S270>/Action Port'
             */
            CCCR_ac_IfActionSubsystem1_g(rtb_VeCCCR_T_Hyst_MinCold11,
                CCCR_ac_DW.UnitDelay5_DSTATE_c, rtb_VeCCCR_T_Hyst_MaxCold11,
                (&(VeCCCR_T_Hyst_MinHot)), (&(VeCCCR_b_Hyst_Min3)),
                (&(VeCCCR_b_Hyst_Min4)), &CCCR_ac_B.IfActionSubsystem1_f);

            /* End of Outputs for SubSystem: '<S253>/If Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S253>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S271>/Action Port'
             */
            CCCR_ac_IfActionSubsystem2_n(rtb_VeCCCR_T_Hyst_MinCold11,
                (&(VeCCCR_T_Hyst_MinHot)));

            /* End of Outputs for SubSystem: '<S253>/If Action Subsystem2' */
        }

        /* End of If: '<S253>/If' */
        /* End of Outputs for SubSystem: '<S253>/Turn On Delay Sample' */

        /* DataStoreWrite: '<S253>/Data Store Write' */
        CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MinHot = VeCCCR_b_Hyst_Min4;

        /* DataStoreWrite: '<S253>/Data Store Write1' */
        CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MinHot = VeCCCR_b_Hyst_Min3;

        /* Switch: '<S254>/Switch1' incorporates:
         *  Constant: '<S255>/Calib'
         *  RelationalOperator: '<S192>/Comparison'
         */
        if (rtb_TmpSignalConversionAtVeBP_i > KeCCCR_T_BattHystThresh)
        {
            /* Switch: '<S254>/Switch1' */
            VeCCCR_T_BattTempFiltMin = VeCCCR_T_Hyst_MinHot;
        }
        else
        {
            /* Switch: '<S254>/Switch1' */
            VeCCCR_T_BattTempFiltMin = VeCCCR_T_Hyst_MinCold;
        }

        /* End of Switch: '<S254>/Switch1' */

        /* Switch: '<S164>/Switch' incorporates:
         *  Constant: '<S193>/Calib'
         *  Switch: '<S164>/Switch1'
         *  Switch: '<S164>/Switch2'
         */
        if (KeCCCR_b_BattHyst_Dsbl)
        {
            /* Switch: '<S164>/Switch' */
            VeCCCR_T_BatModTempFilt = rtb_TmpSignalConversionAtVeBP_f;

            /* Switch: '<S164>/Switch1' */
            VeCCCR_T_BatMinTempFilt = rtb_TmpSignalConversionAtVeBP_i;

            /* Switch: '<S164>/Switch2' */
            VeCCCR_T_BatMaxTempFilt = rtb_TmpSignalConversionAtVeBP_e;
        }
        else
        {
            /* Switch: '<S164>/Switch' */
            VeCCCR_T_BatModTempFilt = VeCCCR_T_BattTempFiltAvg;

            /* Switch: '<S164>/Switch1' */
            VeCCCR_T_BatMinTempFilt = VeCCCR_T_BattTempFiltMin;

            /* Switch: '<S164>/Switch2' */
            VeCCCR_T_BatMaxTempFilt = VeCCCR_T_BattTempFiltMax;
        }

        /* End of Switch: '<S164>/Switch' */

        /* Outputs for Enabled SubSystem: '<S312>/EnhancedPLS' incorporates:
         *  EnablePort: '<S328>/Enable'
         */
        /* Outputs for Atomic SubSystem: '<S162>/EdgeFalling' */
        /* Logic: '<S166>/OR1' incorporates:
         *  Logic: '<S328>/Logical3'
         */
        tmpRead_5 = !rtb_TmpSignalConversionAtVeOBCR;

        /* End of Outputs for SubSystem: '<S312>/EnhancedPLS' */

        /* Logic: '<S166>/AND' incorporates:
         *  Logic: '<S166>/OR1'
         *  UnitDelay: '<S166>/Unit Delay'
         */
        rtb_AND_is = (tmpRead_5 && (CCCR_ac_DW.UnitDelay_DSTATE_ef));

        /* Update for UnitDelay: '<S166>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_ef = rtb_TmpSignalConversionAtVeOBCR;

        /* End of Outputs for SubSystem: '<S162>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S162>/GradientLimiter' */
        /* UnitDelay: '<S109>/Unit Delay' incorporates:
         *  UnitDelay: '<S168>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBP_i = CCCR_ac_DW.UnitDelay_DSTATE_i;

        /* Sum: '<S168>/Sum2' */
        rtb_TmpSignalConversionAtVeBP_e = rtb_TmpSignalConversionAtVeBPCR -
            rtb_TmpSignalConversionAtVeBP_i;

        /* Outputs for Atomic SubSystem: '<S168>/Limiter' */
        /* Switch: '<S179>/Switch1' incorporates:
         *  Constant: '<S177>/Calib'
         *  RelationalOperator: '<S179>/Relational Operator'
         */
        if (KeCCCR_k_BPCMFiltLU < rtb_TmpSignalConversionAtVeBP_e)
        {
            /* Switch: '<S135>/Switch1' */
            rtb_TmpSignalConversionAtVeBP_e = KeCCCR_k_BPCMFiltLU;
        }

        /* End of Switch: '<S179>/Switch1' */

        /* Switch: '<S179>/Switch' incorporates:
         *  Constant: '<S176>/Calib'
         *  RelationalOperator: '<S179>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeBP_e <= KeCCCR_k_BPCMFiltLD)
        {
            rtb_TmpSignalConversionAtVeBP_e = KeCCCR_k_BPCMFiltLD;
        }

        /* End of Switch: '<S179>/Switch' */
        /* End of Outputs for SubSystem: '<S168>/Limiter' */

        /* Sum: '<S168>/Sum3' */
        VeCCCR_I_BPCMLimFlt = rtb_TmpSignalConversionAtVeBP_e +
            rtb_TmpSignalConversionAtVeBP_i;

        /* Update for UnitDelay: '<S168>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_i = VeCCCR_I_BPCMLimFlt;

        /* End of Outputs for SubSystem: '<S162>/GradientLimiter' */

        /* Outputs for Atomic SubSystem: '<S162>/ClosedInterval1' */
        /* Logic: '<S162>/Logical3' incorporates:
         *  Constant: '<S167>/Constant'
         *  Constant: '<S170>/Calib'
         *  Constant: '<S171>/Calib'
         *  Constant: '<S172>/Calib'
         *  Constant: '<S173>/Calib'
         *  Constant: '<S174>/Calib'
         *  Constant: '<S175>/Calib'
         *  Logic: '<S162>/Logical1'
         *  Logic: '<S165>/Logical Operator'
         *  RelationalOperator: '<S162>/Comparison1'
         *  RelationalOperator: '<S162>/Comparison2'
         *  RelationalOperator: '<S162>/Comparison3'
         *  RelationalOperator: '<S162>/Comparison4'
         *  RelationalOperator: '<S165>/Relatonal Operator'
         *  RelationalOperator: '<S165>/Relatonal Operator1'
         */
        VeCCCR_b_AllowBPCMFilt = (((((KeCCCR_b_AllowBPCMFilt) &&
            ((CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct >=
              KeCCCR_Pct_BPCMLimitFiltSOC) || (VeCCCR_U_HV_BatVoltModMaxArbFil >=
            KeCCCR_U_BPCMLimitFiltCellVolt))) &&
            ((rtb_TmpSignalConversionAtVeBP_f >= KeCCCR_T_BPCMFiltTempLo) &&
             (rtb_TmpSignalConversionAtVeBP_f <= KeCCCR_T_BPCMFiltTempHi))) &&
            (rtb_TmpSignalConversionAtVeBPCR >= KeCCCR_I_BPCMFiltMN)) &&
            (((uint32)rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_DC));

        /* End of Outputs for SubSystem: '<S162>/ClosedInterval1' */

        /* Outputs for Atomic SubSystem: '<S162>/Signal Latch On With Reset' */
        /* Logic: '<S178>/OR1' incorporates:
         *  Logic: '<S178>/NOT'
         *  Logic: '<S178>/OR'
         *  UnitDelay: '<S178>/Unit Delay'
         */
        rtb_AND_is = ((VeCCCR_b_AllowBPCMFilt) || ((!rtb_AND_is) &&
                       (CCCR_ac_DW.UnitDelay_DSTATE_ho)));

        /* Update for UnitDelay: '<S178>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_ho = rtb_AND_is;

        /* End of Outputs for SubSystem: '<S162>/Signal Latch On With Reset' */

        /* Switch: '<S169>/Switch1' */
        if (rtb_AND_is)
        {
            /* Switch: '<S169>/Switch1' */
            VeCCCR_I_BPCMFilt = VeCCCR_I_BPCMLimFlt;
        }
        else
        {
            /* Switch: '<S169>/Switch1' */
            VeCCCR_I_BPCMFilt = rtb_TmpSignalConversionAtVeBPCR;
        }

        /* End of Switch: '<S169>/Switch1' */

        /* Abs: '<S163>/Abs' incorporates:
         *  Constant: '<S163>/Constant Value'
         *  MinMax: '<S163>/MinMax2'
         */
        VeCCCR_I_ChrgSysStatTestSig1 = fabsf(fminf(0.0F,
            CCCR_ac_B.TmpSignalConversionAtVeHVTR_I_S));

        /* Outputs for Atomic SubSystem: '<S183>/EdgeRising2' */
        /* Logic: '<S186>/OR1' incorporates:
         *  UnitDelay: '<S186>/Unit Delay'
         */
        rtb_AND_is = !CCCR_ac_DW.UnitDelay_DSTATE_ik;

        /* Update for UnitDelay: '<S186>/Unit Delay' incorporates:
         *  Constant: '<S183>/TRUE Constant'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_ik = true;

        /* End of Outputs for SubSystem: '<S183>/EdgeRising2' */

        /* Outputs for Atomic SubSystem: '<S183>/EdgeRising' */
        /* Logic: '<S184>/AND' incorporates:
         *  Logic: '<S184>/OR1'
         *  UnitDelay: '<S183>/Unit Delay4'
         *  UnitDelay: '<S184>/Unit Delay'
         */
        rtb_AND_psp = ((CCCR_ac_DW.UnitDelay4_DSTATE_a) &&
                       (!CCCR_ac_DW.UnitDelay_DSTATE_e0));

        /* Update for UnitDelay: '<S184>/Unit Delay' incorporates:
         *  UnitDelay: '<S183>/Unit Delay4'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_e0 = CCCR_ac_DW.UnitDelay4_DSTATE_a;

        /* End of Outputs for SubSystem: '<S183>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S183>/EdgeRising2' */
        /* Switch: '<S183>/Switch3' incorporates:
         *  Logic: '<S186>/AND'
         *  Switch: '<S183>/Switch1'
         */
        if (rtb_AND_is)
        {
            /* Switch: '<S183>/Switch3' incorporates:
             *  Constant: '<S163>/Constant Value2'
             */
            VeCCCR_I_ChrgSysStatTestSig2 = 0.0F;
        }
        else if (rtb_AND_psp)
        {
            /* Switch: '<S183>/Switch1' incorporates:
             *  Switch: '<S183>/Switch3'
             *  UnitDelay: '<S183>/Unit Delay1'
             */
            VeCCCR_I_ChrgSysStatTestSig2 = CCCR_ac_DW.UnitDelay1_DSTATE;
        }
        else
        {
            /* Switch: '<S183>/Switch3' incorporates:
             *  UnitDelay: '<S183>/Unit Delay6'
             */
            VeCCCR_I_ChrgSysStatTestSig2 = CCCR_ac_DW.UnitDelay6_DSTATE;
        }

        /* End of Switch: '<S183>/Switch3' */
        /* End of Outputs for SubSystem: '<S183>/EdgeRising2' */

        /* Lookup_n-D: '<S182>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
         *  Switch: '<S183>/Switch3'
         */
        VeCCCR_I_MaxCellCurrTargCal = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeBP_f, VeCCCR_I_ChrgSysStatTestSig2, ((
               const float32 *)&(KxCCCR_I_MaxCellCurrTarg[0])), ((const float32 *)
              &(KyCCCR_I_MaxCellCurrTarg[0])), ((const float32 *)
              &(KtCCCR_I_MaxCellCurrTarg[0])), CCCR_ac_ConstP.Vector_maxIndex,
             7U);

        /* Outputs for Atomic SubSystem: '<S183>/EdgeRising1' */
        /* Logic: '<S185>/OR1' incorporates:
         *  UnitDelay: '<S185>/Unit Delay'
         */
        rtb_AND_is = !CCCR_ac_DW.UnitDelay_DSTATE_nj;

        /* Update for UnitDelay: '<S185>/Unit Delay' incorporates:
         *  UnitDelay: '<S183>/Unit Delay4'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_nj = CCCR_ac_DW.UnitDelay4_DSTATE_a;

        /* Outputs for Atomic SubSystem: '<S183>/Stop Watch Reset Enabled' */
        /* Switch: '<S189>/Switch1' incorporates:
         *  Logic: '<S183>/Logical2'
         *  Logic: '<S185>/AND'
         *  Switch: '<S189>/Switch2'
         *  UnitDelay: '<S183>/Unit Delay4'
         */
        if ((CCCR_ac_DW.UnitDelay4_DSTATE_a) && rtb_AND_is)
        {
            /* Switch: '<S189>/Switch1' incorporates:
             *  Constant: '<S189>/Constant Value2'
             */
            rtb_TmpSignalConversionAtVeBPCR = 0.0F;
        }
        else if (!CCCR_ac_DW.UnitDelay4_DSTATE_a)
        {
            /* Switch: '<S189>/Switch2' incorporates:
             *  Constant: '<S180>/Calib'
             *  Sum: '<S189>/Subtraction'
             *  Switch: '<S189>/Switch1'
             *  UnitDelay: '<S189>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeBPCR = HeCCCR_t_FnctRate +
                CCCR_ac_DW.UnitDelay_DSTATE_o2;
        }
        else
        {
            /* Switch: '<S189>/Switch1' incorporates:
             *  Switch: '<S189>/Switch2'
             *  UnitDelay: '<S189>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeBPCR = CCCR_ac_DW.UnitDelay_DSTATE_o2;
        }

        /* End of Switch: '<S189>/Switch1' */
        /* End of Outputs for SubSystem: '<S183>/EdgeRising1' */

        /* Update for UnitDelay: '<S189>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_o2 = rtb_TmpSignalConversionAtVeBPCR;

        /* End of Outputs for SubSystem: '<S183>/Stop Watch Reset Enabled' */

        /* Outputs for Atomic SubSystem: '<S183>/Protected Division' */
        /* Switch: '<S187>/Switch1' incorporates:
         *  Constant: '<S180>/Calib'
         *  Constant: '<S181>/Calib'
         *  Constant: '<S187>/Constant Value'
         *  Constant: '<S187>/Constant Value1'
         *  Constant: '<S187>/Constant Value2'
         *  Constant: '<S187>/Constant Value3'
         *  Logic: '<S187>/AND'
         *  RelationalOperator: '<S187>/Greater Than or Equal '
         *  RelationalOperator: '<S187>/Greater Than or Equal 1'
         *  RelationalOperator: '<S187>/Not Equal'
         *  RelationalOperator: '<S187>/Not Equal1'
         *  Switch: '<S187>/Switch2'
         *  Switch: '<S187>/Switch3'
         */
        if ((KeCCCR_t_Time4AvgCurrCalc != 0.0F) && (HeCCCR_t_FnctRate != 0.0F))
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Product: '<S187>/Division'
             */
            rtb_TmpSignalConversionAtVeBP_i = KeCCCR_t_Time4AvgCurrCalc /
                HeCCCR_t_FnctRate;
        }
        else if (KeCCCR_t_Time4AvgCurrCalc > 0.0F)
        {
            /* Switch: '<S187>/Switch2' incorporates:
             *  Constant: '<S187>/MAXFLOAT'
             *  Switch: '<S187>/Switch1'
             */
            rtb_TmpSignalConversionAtVeBP_i = 3.402823466E+38F;
        }
        else if (KeCCCR_t_Time4AvgCurrCalc < 0.0F)
        {
            /* Switch: '<S187>/Switch3' incorporates:
             *  Constant: '<S187>/MINFLOAT'
             *  Switch: '<S187>/Switch1'
             *  Switch: '<S187>/Switch2'
             */
            rtb_TmpSignalConversionAtVeBP_i = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Constant: '<S187>/Constant Value4'
             *  Switch: '<S187>/Switch2'
             *  Switch: '<S187>/Switch3'
             */
            rtb_TmpSignalConversionAtVeBP_i = 0.0F;
        }

        /* End of Switch: '<S187>/Switch1' */
        /* End of Outputs for SubSystem: '<S183>/Protected Division' */

        /* Switch: '<S183>/Switch5' incorporates:
         *  Constant: '<S183>/Constant Value2'
         *  UnitDelay: '<S183>/Unit Delay4'
         */
        if (CCCR_ac_DW.UnitDelay4_DSTATE_a)
        {
            rtb_VeCCCR_T_Hyst_MinCold11 = 0.0F;
        }
        else
        {
            rtb_VeCCCR_T_Hyst_MinCold11 = VeCCCR_I_ChrgSysStatTestSig1;
        }

        /* End of Switch: '<S183>/Switch5' */

        /* Sum: '<S183>/Sum' incorporates:
         *  Product: '<S183>/Product2'
         *  UnitDelay: '<S183>/Unit Delay'
         *  UnitDelay: '<S183>/Unit Delay4'
         */
        rtb_TmpSignalConversionAtVeBP_f = (CCCR_ac_DW.UnitDelay_DSTATE_mi *
            ((float32)((!CCCR_ac_DW.UnitDelay4_DSTATE_a) ? 1 : 0))) +
            rtb_VeCCCR_T_Hyst_MinCold11;

        /* Outputs for Atomic SubSystem: '<S183>/Protected Division1' */
        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S188>/Constant Value'
         *  Constant: '<S188>/Constant Value1'
         *  Constant: '<S188>/Constant Value2'
         *  Constant: '<S188>/Constant Value3'
         *  Logic: '<S188>/AND'
         *  RelationalOperator: '<S188>/Greater Than or Equal '
         *  RelationalOperator: '<S188>/Greater Than or Equal 1'
         *  RelationalOperator: '<S188>/Not Equal'
         *  RelationalOperator: '<S188>/Not Equal1'
         *  Switch: '<S188>/Switch2'
         *  Switch: '<S188>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeBP_f != 0.0F) &&
                (rtb_TmpSignalConversionAtVeBP_i != 0.0F))
        {
            /* Update for UnitDelay: '<S183>/Unit Delay1' incorporates:
             *  Product: '<S188>/Division'
             *  Switch: '<S188>/Switch1'
             */
            CCCR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeBP_f /
                rtb_TmpSignalConversionAtVeBP_i;
        }
        else if (rtb_TmpSignalConversionAtVeBP_f > 0.0F)
        {
            /* Switch: '<S188>/Switch2' incorporates:
             *  Constant: '<S188>/MAXFLOAT'
             *  Switch: '<S188>/Switch1'
             *  UnitDelay: '<S183>/Unit Delay1'
             */
            CCCR_ac_DW.UnitDelay1_DSTATE = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeBP_f < 0.0F)
        {
            /* Switch: '<S188>/Switch3' incorporates:
             *  Constant: '<S188>/MINFLOAT'
             *  Switch: '<S188>/Switch1'
             *  Switch: '<S188>/Switch2'
             *  UnitDelay: '<S183>/Unit Delay1'
             */
            CCCR_ac_DW.UnitDelay1_DSTATE = -3.402823466E+38F;
        }
        else
        {
            /* Update for UnitDelay: '<S183>/Unit Delay1' incorporates:
             *  Constant: '<S188>/Constant Value4'
             *  Switch: '<S188>/Switch1'
             *  Switch: '<S188>/Switch2'
             *  Switch: '<S188>/Switch3'
             */
            CCCR_ac_DW.UnitDelay1_DSTATE = 0.0F;
        }

        /* End of Switch: '<S188>/Switch1' */
        /* End of Outputs for SubSystem: '<S183>/Protected Division1' */

        /* Lookup_n-D: '<S151>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeHVTR_U_HvBattVolt_Max'
         */
        rtb_TmpSignalConversionAtVeBP_e = look1_iflf_binlcapw
            (CCCR_ac_B.TmpSignalConversionAtVeHVTR_U_H, ((const float32 *)
              &(KxCCCR_I_ChrgCrntTaperPk[0])), ((const float32 *)
              &(KtCCCR_I_ChrgCrntTaperPk[0])), 10U);

        /* If: '<S286>/If' */
        if (VeCCCR_I_BPCMFilt <= rtb_TmpSignalConversionAtVeBP_e)
        {
            /* Outputs for IfAction SubSystem: '<S286>/If Action Subsystem' incorporates:
             *  ActionPort: '<S298>/Action Port'
             */
            /* Merge: '<S286>/Merge' incorporates:
             *  Inport: '<S298>/In1'
             */
            rtb_TmpSignalConversionAtVeBP_e = VeCCCR_I_BPCMFilt;

            /* Merge: '<S286>/Merge1' incorporates:
             *  Constant: '<S145>/Constant'
             *  Inport: '<S298>/In2'
             */
            rtb_Merge1 = CeOBCR_e_BP_BPCMCurrent;

            /* End of Outputs for SubSystem: '<S286>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S286>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S299>/Action Port'
             */
            /* Merge: '<S286>/Merge1' incorporates:
             *  Constant: '<S149>/Constant'
             *  Inport: '<S299>/In2'
             */
            rtb_Merge1 = CeOBCR_e_BP_Voltage;

            /* End of Outputs for SubSystem: '<S286>/If Action Subsystem1' */
        }

        /* End of If: '<S286>/If' */

        /* Lookup_n-D: '<S304>/Vector' incorporates:
         *  Switch: '<S164>/Switch'
         */
        rtb_TmpSignalConversionAtVeBP_i = look1_iflf_binlcapw
            (VeCCCR_T_BatModTempFilt, ((const float32 *)
              &(KxCCCR_I_BattChrgCrntLimit[0])), ((const float32 *)
              &(KtCCCR_I_BattChrgCrntLimit[0])), 27U);

        /* If: '<S285>/If' */
        if (rtb_TmpSignalConversionAtVeBP_e <= rtb_TmpSignalConversionAtVeBP_i)
        {
            /* Outputs for IfAction SubSystem: '<S285>/If Action Subsystem' incorporates:
             *  ActionPort: '<S296>/Action Port'
             */
            /* Merge: '<S285>/Merge' incorporates:
             *  Inport: '<S296>/In1'
             */
            rtb_TmpSignalConversionAtVeBP_i = rtb_TmpSignalConversionAtVeBP_e;

            /* End of Outputs for SubSystem: '<S285>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S285>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S297>/Action Port'
             */
            /* Merge: '<S285>/Merge1' incorporates:
             *  Constant: '<S148>/Constant'
             *  Inport: '<S297>/In2'
             */
            rtb_Merge1 = CeOBCR_e_BP_Temp;

            /* End of Outputs for SubSystem: '<S285>/If Action Subsystem1' */
        }

        /* End of If: '<S285>/If' */

        /* Lookup_n-D: '<S150>/Vector' incorporates:
         *  Switch: '<S466>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBP_e = look1_iflf_binlcapw
            (VeCCCR_U_HV_BatVoltModMaxArbFil, ((const float32 *)
              &(KxCCCR_I_ChrgCrntTaper[0])), ((const float32 *)
              &(KtCCCR_I_ChrgCrntTaper[0])), 4U);

        /* If: '<S284>/If' */
        if (rtb_TmpSignalConversionAtVeBP_i <= rtb_TmpSignalConversionAtVeBP_e)
        {
            /* Outputs for IfAction SubSystem: '<S284>/If Action Subsystem' incorporates:
             *  ActionPort: '<S294>/Action Port'
             */
            /* Merge: '<S284>/Merge' incorporates:
             *  Inport: '<S294>/In1'
             */
            rtb_TmpSignalConversionAtVeBP_e = rtb_TmpSignalConversionAtVeBP_i;

            /* End of Outputs for SubSystem: '<S284>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S284>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S295>/Action Port'
             */
            /* Merge: '<S284>/Merge1' incorporates:
             *  Constant: '<S156>/Constant'
             *  Inport: '<S295>/In2'
             */
            rtb_Merge1 = CeOBCR_e_BP_MaxCellVolt;

            /* End of Outputs for SubSystem: '<S284>/If Action Subsystem1' */
        }

        /* End of If: '<S284>/If' */
        /* End of Outputs for SubSystem: '<S4>/CurrRq_ChrgCompl' */
        (void)Rte_Read_VeHVTR_U_HV_BatVoltModMinArb_Value(&rtb_Vector_a);

        /* Outputs for IfAction SubSystem: '<S4>/CurrRq_ChrgCompl' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Lookup_n-D: '<S152>/Vector' incorporates:
         *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb'
         */
        rtb_Vector_a = look1_iflf_binlcapw(rtb_Vector_a, ((const float32 *)
            &(KxCCCR_I_MinCellCrntTaper[0])), ((const float32 *)
            &(KtCCCR_I_MinCellCrntTaper[0])), 2U);

        /* If: '<S283>/If' */
        if (rtb_TmpSignalConversionAtVeBP_e <= rtb_Vector_a)
        {
            /* Outputs for IfAction SubSystem: '<S283>/If Action Subsystem' incorporates:
             *  ActionPort: '<S292>/Action Port'
             */
            /* Merge: '<S283>/Merge' incorporates:
             *  Inport: '<S292>/In1'
             */
            rtb_Vector_a = rtb_TmpSignalConversionAtVeBP_e;

            /* End of Outputs for SubSystem: '<S283>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S283>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S293>/Action Port'
             */
            /* Merge: '<S283>/Merge1' incorporates:
             *  Constant: '<S159>/Constant'
             *  Inport: '<S293>/In2'
             */
            rtb_Merge1 = CeOBCR_e_BP_MinCellVolt;

            /* End of Outputs for SubSystem: '<S283>/If Action Subsystem1' */
        }

        /* End of If: '<S283>/If' */

        /* Lookup_n-D: '<S303>/Vector' incorporates:
         *  Switch: '<S164>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBP_i = look1_iflf_binlcapw
            (VeCCCR_T_BatMinTempFilt, ((const float32 *)
              &(KxCCCR_I_BattChrgCrntLimit[0])), ((const float32 *)
              &(KtCCCR_I_BattChrgCrntLimit[0])), 27U);

        /* If: '<S282>/If' */
        if (rtb_Vector_a <= rtb_TmpSignalConversionAtVeBP_i)
        {
            /* Outputs for IfAction SubSystem: '<S282>/If Action Subsystem' incorporates:
             *  ActionPort: '<S290>/Action Port'
             */
            /* Merge: '<S282>/Merge' incorporates:
             *  Inport: '<S290>/In1'
             */
            rtb_TmpSignalConversionAtVeBP_i = rtb_Vector_a;

            /* End of Outputs for SubSystem: '<S282>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S282>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S291>/Action Port'
             */
            /* Merge: '<S282>/Merge1' incorporates:
             *  Constant: '<S158>/Constant'
             *  Inport: '<S291>/In2'
             */
            rtb_Merge1 = CeOBCR_e_BP_MinCellTemp;

            /* End of Outputs for SubSystem: '<S282>/If Action Subsystem1' */
        }

        /* End of If: '<S282>/If' */

        /* Lookup_n-D: '<S302>/Vector' incorporates:
         *  Switch: '<S164>/Switch2'
         */
        rtb_Vector_a = look1_iflf_binlcapw(VeCCCR_T_BatMaxTempFilt, ((const
            float32 *)&(KxCCCR_I_BattChrgCrntLimit[0])), ((const float32 *)
            &(KtCCCR_I_BattChrgCrntLimit[0])), 27U);

        /* If: '<S281>/If' */
        if (rtb_TmpSignalConversionAtVeBP_i <= rtb_Vector_a)
        {
            /* Outputs for IfAction SubSystem: '<S281>/If Action Subsystem' incorporates:
             *  ActionPort: '<S288>/Action Port'
             */
            /* Merge: '<S281>/Merge' incorporates:
             *  Inport: '<S288>/In1'
             */
            rtb_Vector_a = rtb_TmpSignalConversionAtVeBP_i;

            /* End of Outputs for SubSystem: '<S281>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S281>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S289>/Action Port'
             */
            /* Merge: '<S281>/Merge1' incorporates:
             *  Constant: '<S155>/Constant'
             *  Inport: '<S289>/In2'
             */
            rtb_Merge1 = CeOBCR_e_BP_MaxCellTemp;

            /* End of Outputs for SubSystem: '<S281>/If Action Subsystem1' */
        }

        /* End of If: '<S281>/If' */

        /* Lookup_n-D: '<S153>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        rtb_TmpSignalConversionAtVeBP_i = look1_iflf_binlcapw
            (CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct, ((const float32 *)
              &(KxCCCR_I_SOC_Taper[0])), ((const float32 *)&(KtCCCR_I_SOC_Taper
               [0])), 11U);

        /* If: '<S287>/If' */
        if (rtb_Vector_a <= rtb_TmpSignalConversionAtVeBP_i)
        {
            /* Outputs for IfAction SubSystem: '<S287>/If Action Subsystem' incorporates:
             *  ActionPort: '<S300>/Action Port'
             */
            /* Merge: '<S287>/Merge' incorporates:
             *  Inport: '<S300>/In1'
             */
            VeCCCR_I_BattLimCrnt = rtb_Vector_a;

            /* Merge: '<S287>/Merge1' incorporates:
             *  Inport: '<S300>/In2'
             *  Merge: '<S281>/Merge1'
             */
            VeCCCR_e_BattLimID_Min = rtb_Merge1;

            /* End of Outputs for SubSystem: '<S287>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S287>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S301>/Action Port'
             */
            /* Merge: '<S287>/Merge' incorporates:
             *  Inport: '<S301>/In1'
             */
            VeCCCR_I_BattLimCrnt = rtb_TmpSignalConversionAtVeBP_i;

            /* Merge: '<S287>/Merge1' incorporates:
             *  Constant: '<S160>/Constant'
             *  Inport: '<S301>/In2'
             */
            VeCCCR_e_BattLimID_Min = CeOBCR_e_BP_SOC;

            /* End of Outputs for SubSystem: '<S287>/If Action Subsystem1' */
        }

        /* End of If: '<S287>/If' */

        /* Switch: '<S327>/Switch4' incorporates:
         *  Inport: '<Root>/VeTIMR_e_RacePrep'
         *  Logic: '<S327>/Logical2'
         *  Logic: '<S327>/Logical3'
         */
        if ((VeCCCR_b_PwrLimReq_SgnlRcvd) && (!VeCCCR_b_PwrLimReq_FA))
        {
            (void)Rte_Read_VeTIMR_e_RacePrep_Value(&tmpRead_9);

            /* Switch: '<S335>/Switch1' incorporates:
             *  Constant: '<S332>/Constant'
             *  Constant: '<S333>/Constant'
             *  Constant: '<S334>/Constant'
             *  DataStoreWrite: '<S327>/Data Store Write1'
             *  Inport: '<Root>/VeTIMR_e_RacePrep'
             *  Logic: '<S327>/Logical6'
             *  RelationalOperator: '<S327>/Comparison1'
             *  RelationalOperator: '<S327>/Comparison2'
             *  Switch: '<S327>/Switch4'
             *  Switch: '<S5>/Switch16'
             */
            if ((((uint32)rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_DC) ||
                    (((uint32)tmpRead_9) == CeTIMR_e_RacePrep_Active))
            {
                CCCR_ac_DW.NeCCCR_e_PwrLvlSet = CeOBCR_e_PwrLimReq_Max;
            }
            else
            {
                CCCR_ac_DW.NeCCCR_e_PwrLvlSet = VeCCCR_e_PwrLimReq;
            }

            /* End of Switch: '<S335>/Switch1' */
        }

        /* End of Switch: '<S327>/Switch4' */
        /* End of Outputs for SubSystem: '<S4>/CurrRq_ChrgCompl' */
        (void)Rte_Read_VeIDCR_b_ChrgCurrent_FA_Value(&rtb_VeCCCR_b_PwrLevActive);

        /* Outputs for IfAction SubSystem: '<S4>/CurrRq_ChrgCompl' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* RelationalOperator: '<S327>/Comparison4' incorporates:
         *  DataStoreRead: '<S327>/Data Store Read1'
         *  DataTypeConversion: '<S327>/Data Type Conversion'
         *  Inport: '<Root>/VeIDCR_b_ChrgCurrent_FA'
         *  Selector: '<S327>/Selector1'
         *  Switch: '<S327>/Switch5'
         */
        tmpRead_7 = CCCR_ac_DW.NeCCCR_e_PwrLvlSet;

        /* Logic: '<S327>/Logical5' incorporates:
         *  Constant: '<S331>/Constant'
         *  Logic: '<S327>/Logical1'
         *  RelationalOperator: '<S327>/Comparison4'
         */
        rtb_VeCCCR_b_PwrLevActive = ((!rtb_VeCCCR_b_PwrLevActive) && (((uint32)
            tmpRead_7) != CeOBCR_e_PwrLimReq_NoChange));

        /* Switch: '<S327>/Switch5' incorporates:
         *  Constant: '<S327>/ZeroCurrent'
         *  Logic: '<S327>/Logical4'
         *  RelationalOperator: '<S327>/Comparison3'
         */
        if ((rtb_TmpSignalConversionAtVeID_k > 0.0F) &&
                rtb_VeCCCR_b_PwrLevActive)
        {
            /* Switch: '<S327>/Switch5' incorporates:
             *  Constant: '<S336>/Calib'
             *  Constant: '<S337>/Calib'
             *  MinMax: '<S327>/MinMax1'
             *  Product: '<S327>/Product1'
             *  Selector: '<S327>/Selector1'
             */
            VeCCCR_I_PwrLimCurrent = fmaxf(rtb_TmpSignalConversionAtVeID_k *
                KaCCCR_k_LvlPerc[(tmpRead_7)], KeCCCR_I_MinChrgCurr);
        }
        else
        {
            /* Switch: '<S327>/Switch5' incorporates:
             *  Constant: '<S327>/IgnoreStrategyMax'
             */
            VeCCCR_I_PwrLimCurrent = 10000.0F;
        }

        /* Outputs for Enabled SubSystem: '<S312>/EnhancedPLS' incorporates:
         *  EnablePort: '<S328>/Enable'
         */
        if (HeCCCR_b_EnhancedPLS_Enbl)
        {
            /* Logic: '<S328>/Logical' incorporates:
             *  Constant: '<S328>/KeSCPR_P_ThrhldToChange5'
             *  Constant: '<S343>/Constant'
             *  DataStoreRead: '<S328>/Data Store Read1'
             *  RelationalOperator: '<S328>/Comparison5'
             *  RelationalOperator: '<S328>/Comparison6'
             *  UnitDelay: '<S328>/Unit Delay1'
             */
            rtb_AND_is = (((rtb_TmpSignalConversionAtVeOBCR &&
                            rtb_VeCCCR_b_PwrLevActive) &&
                           ((CCCR_ac_DW.NeCCCR_P_PLSMaxPower > 0.169F) ||
                            (CCCR_ac_DW.UnitDelay1_DSTATE_n))) && (((uint32)
                            rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_AC));

            /* Outputs for Atomic SubSystem: '<S328>/Turn On Delay Sample' */
            /* Outputs for Atomic SubSystem: '<S363>/EdgeRising' */
            /* Logic: '<S367>/AND' incorporates:
             *  Logic: '<S367>/OR1'
             *  UnitDelay: '<S367>/Unit Delay'
             */
            rtb_AND_psp = (rtb_AND_is && (!CCCR_ac_DW.UnitDelay_DSTATE_bz));

            /* Update for UnitDelay: '<S367>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_bz = rtb_AND_is;

            /* End of Outputs for SubSystem: '<S363>/EdgeRising' */

            /* Switch: '<S363>/Switch1' incorporates:
             *  Constant: '<S348>/Calib'
             *  Constant: '<S363>/Constant Value'
             *  Logic: '<S363>/OR'
             *  Logic: '<S363>/OR1'
             *  MinMax: '<S363>/Minimum'
             *  Sum: '<S363>/Summation'
             *  UnitDelay: '<S363>/Unit Delay'
             */
            if ((!rtb_AND_is) || rtb_AND_psp)
            {
                /* Switch: '<S363>/Switch1' incorporates:
                 *  Constant: '<S363>/Constant Value1'
                 */
                rtb_Switch1 = 0U;
            }
            else if (KeCCCR_Cnt_PLSdelayProc < ((uint16)(((uint32)
                        CCCR_ac_DW.UnitDelay_DSTATE_gq) + 1U)))
            {
                /* MinMax: '<S363>/Minimum' incorporates:
                 *  Constant: '<S348>/Calib'
                 *  Switch: '<S363>/Switch1'
                 */
                rtb_Switch1 = KeCCCR_Cnt_PLSdelayProc;
            }
            else
            {
                /* Switch: '<S363>/Switch1' incorporates:
                 *  Constant: '<S363>/Constant Value'
                 *  MinMax: '<S363>/Minimum'
                 *  Sum: '<S363>/Summation'
                 *  UnitDelay: '<S363>/Unit Delay'
                 */
                rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_gq)
                                       + 1U);
            }

            /* End of Switch: '<S363>/Switch1' */
            /* End of Outputs for SubSystem: '<S328>/Turn On Delay Sample' */
            (void)Rte_Read_VeIDCR_U_ACSideVolt_L3_Value(&rtb_Product1);
            (void)Rte_Read_VeIDCR_U_ACSideVolt_L2_Value(&rtb_Switch3_nq);
            (void)Rte_Read_VeIDCR_U_AC_InputVltOBCM_Value(&rtb_Multiplication1);
            (void)Rte_Read_VeIDCR_I_J1772InputCrntAval_Value(&tmpRead);

            /* Outputs for Atomic SubSystem: '<S328>/Turn On Delay Sample' */
            /* Logic: '<S363>/AND' incorporates:
             *  Constant: '<S348>/Calib'
             *  Inport: '<Root>/VeIDCR_I_J1772InputCrntAval'
             *  Inport: '<Root>/VeIDCR_U_ACSideVolt_L2'
             *  Inport: '<Root>/VeIDCR_U_ACSideVolt_L3'
             *  Inport: '<Root>/VeIDCR_U_AC_InputVltOBCM'
             *  RelationalOperator: '<S363>/Greater  Than'
             */
            VeCCCR_b_PLS_OkToCalc = (rtb_AND_is && (rtb_Switch1 >=
                KeCCCR_Cnt_PLSdelayProc));

            /* Update for UnitDelay: '<S363>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_gq = rtb_Switch1;

            /* End of Outputs for SubSystem: '<S328>/Turn On Delay Sample' */

            /* Outputs for Atomic SubSystem: '<S328>/Signal Latch On With Reset1' */
            /* Logic: '<S355>/OR1' incorporates:
             *  Constant: '<S328>/KeSCPR_P_ThrhldToChange1'
             *  DataStoreRead: '<S328>/Data Store Read'
             *  Logic: '<S328>/Logical11'
             *  Logic: '<S328>/Logical12'
             *  Logic: '<S328>/Logical5'
             *  Logic: '<S328>/Logical6'
             *  Logic: '<S355>/OR'
             *  RelationalOperator: '<S328>/Comparison4'
             *  UnitDelay: '<S355>/Unit Delay'
             */
            rtb_AND_is = (((CCCR_ac_DW.NeCCCR_P_PLSMaxPower > 0.169F) &&
                           ((!VeCCCR_b_PLS_OkToCalc) &&
                            rtb_TmpSignalConversionAtVeOBCR)) ||
                          (rtb_TmpSignalConversionAtVeOBCR &&
                           (CCCR_ac_DW.UnitDelay_DSTATE_op)));

            /* Update for UnitDelay: '<S355>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_op = rtb_AND_is;

            /* End of Outputs for SubSystem: '<S328>/Signal Latch On With Reset1' */

            /* Product: '<S328>/Product1' incorporates:
             *  Constant: '<S328>/EfficiencyFactor'
             *  Constant: '<S328>/KeSCPR_P_ThrhldToChange4'
             *  Sum: '<S328>/Sum6'
             */
            rtb_Product1 = (((rtb_Multiplication1 + rtb_Switch3_nq) +
                             rtb_Product1) * (tmpRead / 1000.0F)) * 0.97F;

            /* Switch: '<S328>/Switch3' incorporates:
             *  RelationalOperator: '<S328>/Comparison10'
             *  UnitDelay: '<S328>/Unit Delay6'
             */
            if (rtb_Product1 > CCCR_ac_DW.UnitDelay6_DSTATE_d)
            {
                /* Switch: '<S328>/Switch3' incorporates:
                 *  Delay: '<S328>/Integer Delay3'
                 */
                VeCCCR_P_PLS_MaxPnoFilter = CCCR_ac_DW.IntegerDelay3_DSTATE[0];
            }
            else
            {
                /* Switch: '<S328>/Switch3' incorporates:
                 *  UnitDelay: '<S328>/Unit Delay4'
                 */
                VeCCCR_P_PLS_MaxPnoFilter = CCCR_ac_DW.UnitDelay4_DSTATE;
            }

            /* End of Switch: '<S328>/Switch3' */

            /* Outputs for Atomic SubSystem: '<S328>/EdgeRising1' */
            /* Logic: '<S339>/AND' incorporates:
             *  Logic: '<S339>/OR1'
             *  UnitDelay: '<S339>/Unit Delay'
             */
            rtb_AND_psp = !CCCR_ac_DW.UnitDelay_DSTATE_pi;

            /* Update for UnitDelay: '<S339>/Unit Delay' incorporates:
             *  Constant: '<S328>/TRUE Constant3'
             */
            CCCR_ac_DW.UnitDelay_DSTATE_pi = true;

            /* End of Outputs for SubSystem: '<S328>/EdgeRising1' */

            /* Outputs for Atomic SubSystem: '<S328>/Lowpass Second Order Enabled1' */
            /* Switch: '<S353>/Switch3' incorporates:
             *  Switch: '<S353>/Switch1'
             */
            if (rtb_AND_psp)
            {
                /* Switch: '<S353>/Switch3' */
                rtb_Switch3_nq = VeCCCR_P_PLS_MaxPnoFilter;

                /* Switch: '<S353>/Switch1' */
                rtb_Multiplication1 = VeCCCR_P_PLS_MaxPnoFilter;
            }
            else
            {
                /* Switch: '<S353>/Switch3' incorporates:
                 *  UnitDelay: '<S353>/x2'
                 */
                rtb_Switch3_nq = CCCR_ac_DW.x2_DSTATE;

                /* Product: '<S353>/Multiplication1' incorporates:
                 *  Constant: '<S344>/Calib'
                 *  Constant: '<S352>/Calib'
                 *  MinMax: '<S353>/Maximum'
                 */
                rtb_Multiplication1 = (1.0F / fmaxf(KeCCCR_k_PLS_FilterConstT,
                                        HeCCCR_t_dT)) * HeCCCR_t_dT;

                /* Switch: '<S353>/Switch1' incorporates:
                 *  Constant: '<S351>/Calib'
                 *  Gain: '<S353>/Gain'
                 *  Gain: '<S353>/Gain1'
                 *  Math: '<S353>/Square'
                 *  Product: '<S353>/Multiplication2'
                 *  Product: '<S353>/Multiplication3'
                 *  Sum: '<S353>/Subtraction'
                 *  Sum: '<S353>/Subtraction1'
                 *  Sum: '<S353>/Summation'
                 *  UnitDelay: '<S353>/temp'
                 *  UnitDelay: '<S353>/x2'
                 */
                rtb_Multiplication1 = (((((CCCR_ac_DW.temp_DSTATE -
                    CCCR_ac_DW.x2_DSTATE) * (2.0F * KeCCCR_k_PLS_FilterConstD)) *
                    rtb_Multiplication1) + ((rtb_Multiplication1 *
                    rtb_Multiplication1) * (VeCCCR_P_PLS_MaxPnoFilter -
                    CCCR_ac_DW.temp_DSTATE))) - CCCR_ac_DW.temp_DSTATE) + (2.0F *
                    CCCR_ac_DW.x2_DSTATE);
            }

            /* End of Switch: '<S353>/Switch3' */

            /* Update for UnitDelay: '<S353>/x2' */
            CCCR_ac_DW.x2_DSTATE = rtb_Multiplication1;

            /* Update for UnitDelay: '<S353>/temp' */
            CCCR_ac_DW.temp_DSTATE = rtb_Switch3_nq;

            /* End of Outputs for SubSystem: '<S328>/Lowpass Second Order Enabled1' */

            /* Switch: '<S328>/Switch2' */
            if (rtb_AND_is)
            {
                /* Switch: '<S328>/Switch2' incorporates:
                 *  DataStoreRead: '<S328>/Data Store Read'
                 */
                VeCCCR_P_PLS_MaxPower = CCCR_ac_DW.NeCCCR_P_PLSMaxPower;
            }
            else
            {
                /* Switch: '<S328>/Switch2' */
                VeCCCR_P_PLS_MaxPower = rtb_Multiplication1;
            }

            /* End of Switch: '<S328>/Switch2' */

            /* MinMax: '<S328>/MinMax1' incorporates:
             *  Constant: '<S328>/DefaultPower2'
             *  Constant: '<S349>/Calib'
             *  Product: '<S328>/Product2'
             */
            VeCCCR_P_PLS_MinPower = fmaxf(KeCCCR_P_PLSminPower,
                VeCCCR_P_PLS_MaxPower / 5.0F);

            /* Switch: '<S328>/Switch4' */
            if (VeCCCR_b_PLS_OkToCalc)
            {
                /* Product: '<S328>/Product3' incorporates:
                 *  Constant: '<S328>/DefaultPower3'
                 *  Sum: '<S328>/Sum1'
                 */
                rtb_Switch3_nq = (VeCCCR_P_PLS_MaxPower - VeCCCR_P_PLS_MinPower)
                    / 4.0F;

                /* Switch: '<S328>/Switch4' incorporates:
                 *  Constant: '<S328>/DefaultPower4'
                 *  Constant: '<S328>/DefaultPower5'
                 *  Product: '<S328>/Product5'
                 *  Product: '<S328>/Product6'
                 *  Sum: '<S328>/Sum2'
                 *  Sum: '<S328>/Sum3'
                 *  Sum: '<S328>/Sum4'
                 */
                VaCCCR_k_PLS_RawPwrLev[0] = VeCCCR_P_PLS_MinPower;
                VaCCCR_k_PLS_RawPwrLev[1] = rtb_Switch3_nq +
                    VeCCCR_P_PLS_MinPower;
                VaCCCR_k_PLS_RawPwrLev[2] = (rtb_Switch3_nq * 2.0F) +
                    VeCCCR_P_PLS_MinPower;
                VaCCCR_k_PLS_RawPwrLev[3] = (rtb_Switch3_nq * 3.0F) +
                    VeCCCR_P_PLS_MinPower;
                VaCCCR_k_PLS_RawPwrLev[4] = VeCCCR_P_PLS_MaxPower;
            }
            else
            {
                /* Switch: '<S328>/Switch4' incorporates:
                 *  Constant: '<S328>/DefaultPower'
                 */
                for (i = 0; i < 5; i++)
                {
                    VaCCCR_k_PLS_RawPwrLev[(i)] = 0.0F;
                }
            }

            /* End of Switch: '<S328>/Switch4' */

            /* Outputs for Atomic SubSystem: '<S328>/Signal Latch On With Reset' */
            /* UnitDelay: '<S354>/Unit Delay2' */
            rtb_AND_is = CCCR_ac_DW.UnitDelay2_DSTATE_b;
            for (i = 0; i < 5; i++)
            {
                /* UnitDelay: '<S354>/Unit Delay1' */
                rtb_TmpSignalConversionAtVeBP_i =
                    CCCR_ac_DW.UnitDelay1_DSTATE_k[i];

                /* Switch: '<S354>/Switch' incorporates:
                 *  Logic: '<S354>/OR1'
                 *  RelationalOperator: '<S354>/Comparison5'
                 */
                if ((VaCCCR_k_PLS_RawPwrLev[(i)] ==
                        rtb_TmpSignalConversionAtVeBP_i) || rtb_AND_is)
                {
                    /* Switch: '<S354>/Switch' */
                    CCCR_ac_B.Switch[i] = VaCCCR_k_PLS_RawPwrLev[(i)];
                }
                else
                {
                    /* Switch: '<S354>/Switch' */
                    CCCR_ac_B.Switch[i] = rtb_TmpSignalConversionAtVeBP_i;
                }

                /* End of Switch: '<S354>/Switch' */
            }

            /* End of Outputs for SubSystem: '<S328>/Signal Latch On With Reset' */

            /* Outputs for Enabled SubSystem: '<S328>/Subsystem' incorporates:
             *  EnablePort: '<S356>/Enable'
             */
            if (CCCR_ac_DW.IntegerDelay2_DSTATE[0U])
            {
                /* DataStoreWrite: '<S356>/Data Store Write' */
                CCCR_ac_DW.NeCCCR_P_PLSMaxPower = CCCR_ac_B.Switch[4];
            }

            /* End of Outputs for SubSystem: '<S328>/Subsystem' */
            (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead_a);

            /* Outputs for Atomic SubSystem: '<S328>/Counter Reset  Enabled 1' */
            /* Outputs for Atomic SubSystem: '<S338>/EdgeRising2' */
            /* Logic: '<S366>/OR1' incorporates:
             *  Delay: '<S328>/Integer Delay2'
             *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
             *  UnitDelay: '<S366>/Unit Delay'
             */
            rtb_AND_psp = !CCCR_ac_DW.UnitDelay_DSTATE_ly;

            /* Update for UnitDelay: '<S366>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_ly = VeCCCR_b_PLS_OkToCalc;

            /* End of Outputs for SubSystem: '<S338>/EdgeRising2' */

            /* Logic: '<S338>/Logical1' incorporates:
             *  UnitDelay: '<S338>/Unit Delay1'
             */
            rtb_AND_is = ((VeCCCR_b_PLS_OkToCalc) &&
                          (CCCR_ac_DW.UnitDelay1_DSTATE_im));

            /* Outputs for Atomic SubSystem: '<S338>/EdgeRising2' */
            /* Switch: '<S338>/Switch4' incorporates:
             *  Logic: '<S366>/AND'
             *  Switch: '<S338>/Switch2'
             */
            if ((VeCCCR_b_PLS_OkToCalc) && rtb_AND_psp)
            {
                /* Switch: '<S338>/Switch4' incorporates:
                 *  Constant: '<S338>/Constant Value3'
                 */
                rtb_Switch1 = 0U;
            }
            else if (rtb_AND_is)
            {
                /* Switch: '<S338>/Switch2' incorporates:
                 *  Constant: '<S338>/Constant Value1'
                 *  Sum: '<S338>/Subtraction'
                 *  Switch: '<S338>/Switch4'
                 *  UnitDelay: '<S338>/Unit Delay'
                 */
                rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_lrm)
                                       + 1U);
            }
            else
            {
                /* Switch: '<S338>/Switch4' incorporates:
                 *  Switch: '<S338>/Switch2'
                 *  UnitDelay: '<S338>/Unit Delay'
                 */
                rtb_Switch1 = CCCR_ac_DW.UnitDelay_DSTATE_lrm;
            }

            /* End of Switch: '<S338>/Switch4' */
            /* End of Outputs for SubSystem: '<S338>/EdgeRising2' */

            /* Update for UnitDelay: '<S338>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_lrm = rtb_Switch1;

            /* Update for UnitDelay: '<S338>/Unit Delay1' incorporates:
             *  Constant: '<S347>/Calib'
             *  RelationalOperator: '<S338>/Comparison1'
             */
            CCCR_ac_DW.UnitDelay1_DSTATE_im = (rtb_Switch1 <
                KeCCCR_Cnt_PLS_MaxtToUpdate);

            /* End of Outputs for SubSystem: '<S328>/Counter Reset  Enabled 1' */

            /* Logic: '<S328>/Logical8' incorporates:
             *  Abs: '<S328>/Abs'
             *  Constant: '<S328>/KeSCPR_P_ThrhldToChange'
             *  Constant: '<S328>/KeSCPR_P_ThrhldToChange3'
             *  RelationalOperator: '<S328>/Comparison2'
             *  RelationalOperator: '<S328>/Comparison3'
             *  RelationalOperator: '<S328>/Comparison9'
             *  Sum: '<S328>/Sum5'
             */
            rtb_AND_psp = (((fabsf(CCCR_ac_B.Switch[4] - VeCCCR_P_PLS_MaxPower) >=
                             0.3F) && (CCCR_ac_B.Switch[4] > 0.169F)) &&
                           (VeCCCR_P_PLS_MaxPower > VeCCCR_P_PLS_MinPower));

            /* Outputs for Atomic SubSystem: '<S328>/Turn On Delay Sample2' */
            /* Outputs for Atomic SubSystem: '<S365>/EdgeRising' */
            /* Logic: '<S369>/AND' incorporates:
             *  Logic: '<S369>/OR1'
             *  UnitDelay: '<S369>/Unit Delay'
             */
            rtb_AND_do = (rtb_AND_psp && (!CCCR_ac_DW.UnitDelay_DSTATE_kh));

            /* Update for UnitDelay: '<S369>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_kh = rtb_AND_psp;

            /* End of Outputs for SubSystem: '<S365>/EdgeRising' */

            /* Switch: '<S365>/Switch1' incorporates:
             *  Constant: '<S345>/Calib'
             *  Constant: '<S365>/Constant Value'
             *  Logic: '<S365>/OR'
             *  Logic: '<S365>/OR1'
             *  MinMax: '<S365>/Minimum'
             *  Sum: '<S365>/Summation'
             *  UnitDelay: '<S365>/Unit Delay'
             */
            if ((!rtb_AND_psp) || rtb_AND_do)
            {
                /* Switch: '<S365>/Switch1' incorporates:
                 *  Constant: '<S365>/Constant Value1'
                 */
                rtb_Switch1 = 0U;
            }
            else if (KeCCCR_Cnt_DbncPwrChange < ((uint16)(((uint32)
                        CCCR_ac_DW.UnitDelay_DSTATE_jv) + 1U)))
            {
                /* MinMax: '<S365>/Minimum' incorporates:
                 *  Constant: '<S345>/Calib'
                 *  Switch: '<S365>/Switch1'
                 */
                rtb_Switch1 = KeCCCR_Cnt_DbncPwrChange;
            }
            else
            {
                /* Switch: '<S365>/Switch1' incorporates:
                 *  Constant: '<S365>/Constant Value'
                 *  MinMax: '<S365>/Minimum'
                 *  Sum: '<S365>/Summation'
                 *  UnitDelay: '<S365>/Unit Delay'
                 */
                rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_jv)
                                       + 1U);
            }

            /* End of Switch: '<S365>/Switch1' */

            /* Update for UnitDelay: '<S365>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_jv = rtb_Switch1;

            /* Logic: '<S328>/Logical1' incorporates:
             *  Constant: '<S342>/Constant'
             *  Constant: '<S345>/Calib'
             *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
             *  Logic: '<S365>/AND'
             *  RelationalOperator: '<S328>/Comparison1'
             *  RelationalOperator: '<S365>/Greater  Than'
             */
            rtb_AND_is = (((rtb_AND_psp && (rtb_Switch1 >=
                             KeCCCR_Cnt_DbncPwrChange)) && rtb_AND_is) &&
                          (((uint32)tmpRead_a) != CeOBCR_e_ChargingSts_Charging));

            /* End of Outputs for SubSystem: '<S328>/Turn On Delay Sample2' */

            /* Outputs for Atomic SubSystem: '<S328>/EdgeRising2' */
            /* Logic: '<S340>/OR1' incorporates:
             *  UnitDelay: '<S340>/Unit Delay'
             */
            rtb_AND_psp = !CCCR_ac_DW.UnitDelay_DSTATE_kl;

            /* Update for UnitDelay: '<S340>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_kl = rtb_AND_is;

            /* End of Outputs for SubSystem: '<S328>/EdgeRising2' */

            /* Outputs for Atomic SubSystem: '<S328>/EdgeRising3' */
            /* Logic: '<S341>/OR1' incorporates:
             *  UnitDelay: '<S341>/Unit Delay'
             */
            rtb_AND_do = !CCCR_ac_DW.UnitDelay_DSTATE_mg;

            /* Update for UnitDelay: '<S341>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_mg = VeCCCR_b_PLS_OkToCalc;

            /* End of Outputs for SubSystem: '<S328>/EdgeRising3' */

            /* Outputs for Atomic SubSystem: '<S328>/Turn On Delay Sample1' */
            /* Outputs for Atomic SubSystem: '<S364>/EdgeRising' */
            /* Logic: '<S368>/AND' incorporates:
             *  Logic: '<S368>/OR1'
             *  UnitDelay: '<S368>/Unit Delay'
             */
            rtb_AND_kz = (tmpRead_5 && (!CCCR_ac_DW.UnitDelay_DSTATE_cx));

            /* Update for UnitDelay: '<S368>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_cx = tmpRead_5;

            /* End of Outputs for SubSystem: '<S364>/EdgeRising' */

            /* Switch: '<S364>/Switch1' incorporates:
             *  Constant: '<S346>/Calib'
             *  Constant: '<S364>/Constant Value'
             *  Logic: '<S364>/OR'
             *  Logic: '<S364>/OR1'
             *  MinMax: '<S364>/Minimum'
             *  Sum: '<S364>/Summation'
             *  UnitDelay: '<S364>/Unit Delay'
             */
            if ((!tmpRead_5) || rtb_AND_kz)
            {
                /* Switch: '<S364>/Switch1' incorporates:
                 *  Constant: '<S364>/Constant Value1'
                 */
                rtb_Switch1 = 0U;
            }
            else if (KeCCCR_Cnt_DbncUnplugPLS < ((uint16)(((uint32)
                        CCCR_ac_DW.UnitDelay_DSTATE_a4) + 1U)))
            {
                /* MinMax: '<S364>/Minimum' incorporates:
                 *  Constant: '<S346>/Calib'
                 *  Switch: '<S364>/Switch1'
                 */
                rtb_Switch1 = KeCCCR_Cnt_DbncUnplugPLS;
            }
            else
            {
                /* Switch: '<S364>/Switch1' incorporates:
                 *  Constant: '<S364>/Constant Value'
                 *  MinMax: '<S364>/Minimum'
                 *  Sum: '<S364>/Summation'
                 *  UnitDelay: '<S364>/Unit Delay'
                 */
                rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_a4)
                                       + 1U);
            }

            /* End of Switch: '<S364>/Switch1' */

            /* Update for UnitDelay: '<S364>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_a4 = rtb_Switch1;

            /* Outputs for Atomic SubSystem: '<S328>/EdgeRising2' */
            /* Outputs for Atomic SubSystem: '<S328>/EdgeRising3' */
            /* Logic: '<S328>/Logical2' incorporates:
             *  Constant: '<S346>/Calib'
             *  Logic: '<S340>/AND'
             *  Logic: '<S341>/AND'
             *  Logic: '<S364>/AND'
             *  RelationalOperator: '<S364>/Greater  Than'
             */
            VeCCCR_b_PLS_UpdateLevels = (((tmpRead_5 && (rtb_Switch1 >=
                KeCCCR_Cnt_DbncUnplugPLS)) || (rtb_AND_is && rtb_AND_psp)) ||
                ((VeCCCR_b_PLS_OkToCalc) && rtb_AND_do));

            /* End of Outputs for SubSystem: '<S328>/EdgeRising3' */
            /* End of Outputs for SubSystem: '<S328>/EdgeRising2' */
            /* End of Outputs for SubSystem: '<S328>/Turn On Delay Sample1' */

            /* Switch: '<S328>/Switch1' incorporates:
             *  Constant: '<S350>/Calib'
             */
            if (KeCCCR_b_PLSCorrectionEnbl)
            {
                /* Switch: '<S328>/Switch1' incorporates:
                 *  Constant: '<S328>/Constant3'
                 *  Constant: '<S328>/Constant4'
                 *  Constant: '<S328>/Constant5'
                 */
                rtb_TmpSignalConversionAtVeBP_i = 0.8F;
                rtb_Vector_a = 0.88F;
                rtb_Switch3_nq = 0.96F;
            }
            else
            {
                /* Switch: '<S328>/Switch1' incorporates:
                 *  Constant: '<S328>/Constant6'
                 */
                rtb_TmpSignalConversionAtVeBP_i = 1.0F;
                rtb_Vector_a = 1.0F;
                rtb_Switch3_nq = 1.0F;
            }

            /* End of Switch: '<S328>/Switch1' */

            /* Product: '<S328>/Product10' */
            CCCR_ac_B.Product10 = CCCR_ac_B.Switch[3] * rtb_Switch3_nq;

            /* Product: '<S328>/Product9' */
            CCCR_ac_B.Product9 = CCCR_ac_B.Switch[2] * rtb_Vector_a;

            /* Product: '<S328>/Product8' */
            CCCR_ac_B.Product8 = CCCR_ac_B.Switch[1] *
                rtb_TmpSignalConversionAtVeBP_i;

            /* SwitchCase: '<S328>/Switch_Case' incorporates:
             *  Constant: '<S328>/DefaultPower7'
             *  DataStoreWrite: '<S327>/Data Store Write1'
             *  DataTypeConversion: '<S328>/Data Type Conversion'
             *  Switch: '<S327>/Switch4'
             */
            switch (CCCR_ac_DW.NeCCCR_e_PwrLvlSet)
            {
              case 1:
                /* Outputs for IfAction SubSystem: '<S328>/Switch Case Action Subsystem6' incorporates:
                 *  ActionPort: '<S362>/Action Port'
                 */
                CCCR_SwitchCaseActionSubsystem6(CCCR_ac_B.Switch[0],
                    (&(VeCCCR_k_PLS_ChosenPwrLev)));

                /* End of Outputs for SubSystem: '<S328>/Switch Case Action Subsystem6' */
                break;

              case 2:
                /* Outputs for IfAction SubSystem: '<S328>/Switch Case Action Subsystem2' incorporates:
                 *  ActionPort: '<S358>/Action Port'
                 */
                CCCR_SwitchCaseActionSubsystem6(CCCR_ac_B.Product8,
                    (&(VeCCCR_k_PLS_ChosenPwrLev)));

                /* End of Outputs for SubSystem: '<S328>/Switch Case Action Subsystem2' */
                break;

              case 3:
                /* Outputs for IfAction SubSystem: '<S328>/Switch Case Action Subsystem3' incorporates:
                 *  ActionPort: '<S359>/Action Port'
                 */
                CCCR_SwitchCaseActionSubsystem6(CCCR_ac_B.Product9,
                    (&(VeCCCR_k_PLS_ChosenPwrLev)));

                /* End of Outputs for SubSystem: '<S328>/Switch Case Action Subsystem3' */
                break;

              case 4:
                /* Outputs for IfAction SubSystem: '<S328>/Switch Case Action Subsystem4' incorporates:
                 *  ActionPort: '<S360>/Action Port'
                 */
                CCCR_SwitchCaseActionSubsystem6(CCCR_ac_B.Product10,
                    (&(VeCCCR_k_PLS_ChosenPwrLev)));

                /* End of Outputs for SubSystem: '<S328>/Switch Case Action Subsystem4' */
                break;

              case 5:
                /* Outputs for IfAction SubSystem: '<S328>/Switch Case Action Subsystem5' incorporates:
                 *  ActionPort: '<S361>/Action Port'
                 */
                CCCR_SwitchCaseActionSubsystem6(CCCR_ac_B.Switch[4],
                    (&(VeCCCR_k_PLS_ChosenPwrLev)));

                /* End of Outputs for SubSystem: '<S328>/Switch Case Action Subsystem5' */
                break;

              default:
                /* Outputs for IfAction SubSystem: '<S328>/Switch Case Action Subsystem1' incorporates:
                 *  ActionPort: '<S357>/Action Port'
                 */
                CCCR_SwitchCaseActionSubsystem6(0.0F,
                    (&(VeCCCR_k_PLS_ChosenPwrLev)));

                /* End of Outputs for SubSystem: '<S328>/Switch Case Action Subsystem1' */
                break;
            }

            /* End of SwitchCase: '<S328>/Switch_Case' */

            /* SignalConversion generated from: '<S328>/PwrLev_Lv5' */
            CCCR_ac_B.OutportBufferForPwrLev_Lv5 = CCCR_ac_B.Switch[4];

            /* Update for UnitDelay: '<S328>/Unit Delay1' incorporates:
             *  Constant: '<S328>/KeSCPR_P_ThrhldToChange2'
             *  RelationalOperator: '<S328>/Comparison8'
             */
            CCCR_ac_DW.UnitDelay1_DSTATE_n = (VeCCCR_P_PLS_MaxPower > 0.169F);

            /* Update for Delay: '<S328>/Integer Delay3' */
            for (i = 0; i < 9; i++)
            {
                CCCR_ac_DW.IntegerDelay3_DSTATE[i] =
                    CCCR_ac_DW.IntegerDelay3_DSTATE[i + 1];
            }

            CCCR_ac_DW.IntegerDelay3_DSTATE[9] = rtb_Product1;

            /* End of Update for Delay: '<S328>/Integer Delay3' */

            /* Update for UnitDelay: '<S328>/Unit Delay6' */
            CCCR_ac_DW.UnitDelay6_DSTATE_d = VeCCCR_P_PLS_MinPower;

            /* Update for UnitDelay: '<S328>/Unit Delay4' */
            CCCR_ac_DW.UnitDelay4_DSTATE = rtb_Multiplication1;

            /* Update for Atomic SubSystem: '<S328>/Signal Latch On With Reset' */
            /* Update for UnitDelay: '<S354>/Unit Delay1' */
            for (i = 0; i < 5; i++)
            {
                CCCR_ac_DW.UnitDelay1_DSTATE_k[i] = CCCR_ac_B.Switch[i];
            }

            /* End of Update for UnitDelay: '<S354>/Unit Delay1' */

            /* Update for UnitDelay: '<S354>/Unit Delay2' */
            CCCR_ac_DW.UnitDelay2_DSTATE_b = VeCCCR_b_PLS_UpdateLevels;

            /* End of Update for SubSystem: '<S328>/Signal Latch On With Reset' */

            /* Update for Delay: '<S328>/Integer Delay2' */
            CCCR_ac_DW.IntegerDelay2_DSTATE[0] =
                CCCR_ac_DW.IntegerDelay2_DSTATE[1];
            CCCR_ac_DW.IntegerDelay2_DSTATE[1] = VeCCCR_b_PLS_UpdateLevels;
        }

        /* End of Outputs for SubSystem: '<S312>/EnhancedPLS' */

        /* Switch: '<S330>/Switch5' incorporates:
         *  Constant: '<S329>/Calib'
         *  Constant: '<S330>/Constant1'
         *  Delay: '<S328>/Integer Delay2'
         *  Inport: '<Root>/VeIDCR_I_J1772InputCrntAval'
         *  Inport: '<Root>/VeIDCR_U_ACSideVolt_L2'
         *  Inport: '<Root>/VeIDCR_U_ACSideVolt_L3'
         *  Inport: '<Root>/VeIDCR_U_AC_InputVltOBCM'
         *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
         *  Logic: '<S330>/Logical4'
         *  RelationalOperator: '<S330>/Comparison7'
         */
        if ((VeCCCR_b_PLS_OkToCalc) && (VeCCCR_k_PLS_ChosenPwrLev > 0.0F))
        {
            /* Switch: '<S330>/Switch5' incorporates:
             *  Constant: '<S330>/Constant3'
             *  MinMax: '<S330>/MinMax1'
             *  Product: '<S330>/Product4'
             *  Product: '<S330>/Product7'
             */
            rtb_TmpSignalConversionAtVeID_k *= VeCCCR_k_PLS_ChosenPwrLev / fmaxf
                (CCCR_ac_B.OutportBufferForPwrLev_Lv5, 0.169F);
        }
        else
        {
            /* Switch: '<S330>/Switch5' */
            rtb_TmpSignalConversionAtVeID_k = VeCCCR_I_PwrLimCurrent;
        }

        /* End of Switch: '<S330>/Switch5' */

        /* DataTypeConversion: '<S143>/Data Type Conversion' incorporates:
         *  RelationalOperator: '<S26>/Comparison2'
         *  RelationalOperator: '<S26>/Comparison3'
         *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel'
         */
        rtb_Product1_tmp = CCCR_ac_B.TmpSignalConversionAtVeOBCR_e_d;

        /* Lookup_n-D: '<S310>/Vector' incorporates:
         *  DataTypeConversion: '<S143>/Data Type Conversion'
         *  DataTypeConversion: '<S143>/FixToFloat'
         */
        rtb_Product1 = look1_iflf_binlcapw((float32)rtb_Product1_tmp, ((const
            float32 *)&(KxCCCR_I_ChrgTypeCrntLim[0])), ((const float32 *)
            &(KtCCCR_I_ChrgTypeCrntLim[0])), 9U);

        /* If: '<S316>/If' */
        if (rtb_Product1 <= rtb_TmpSignalConversionAtVeID_k)
        {
            /* Outputs for IfAction SubSystem: '<S316>/If Action Subsystem' incorporates:
             *  ActionPort: '<S321>/Action Port'
             */
            /* Merge: '<S316>/Merge1' incorporates:
             *  Constant: '<S306>/Constant'
             *  Inport: '<S321>/In2'
             */
            rtb_Merge1 = CeOBCR_e_ChargeType_CrntLim;

            /* End of Outputs for SubSystem: '<S316>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S316>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S322>/Action Port'
             */
            /* Merge: '<S316>/Merge' incorporates:
             *  Inport: '<S322>/In1'
             */
            rtb_Product1 = rtb_TmpSignalConversionAtVeID_k;

            /* Merge: '<S316>/Merge1' incorporates:
             *  Constant: '<S313>/Constant'
             *  Inport: '<S322>/In2'
             */
            rtb_Merge1 = CeOBCR_e_PwrLvlSetting;

            /* End of Outputs for SubSystem: '<S316>/If Action Subsystem1' */
        }

        /* End of If: '<S316>/If' */

        /* If: '<S317>/If' incorporates:
         *  Constant: '<S309>/Calib'
         */
        if (rtb_Product1 > KeCCCR_I_WiringCrntLim)
        {
            /* Outputs for IfAction SubSystem: '<S317>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S324>/Action Port'
             */
            /* Merge: '<S317>/Merge' incorporates:
             *  Inport: '<S324>/In1'
             */
            rtb_Product1 = KeCCCR_I_WiringCrntLim;

            /* Merge: '<S317>/Merge1' incorporates:
             *  Constant: '<S314>/Constant'
             *  Inport: '<S324>/In2'
             */
            rtb_Merge1 = CeOBCR_e_WiringCrnt;

            /* End of Outputs for SubSystem: '<S317>/If Action Subsystem1' */
        }

        /* End of If: '<S317>/If' */

        /* If: '<S315>/If' */
        if (rtb_Product1 <= rtb_TmpSignalConversionAtVeDCCR)
        {
            /* Outputs for IfAction SubSystem: '<S315>/If Action Subsystem' incorporates:
             *  ActionPort: '<S319>/Action Port'
             */
            /* Merge: '<S315>/Merge' incorporates:
             *  Inport: '<S319>/In1'
             */
            rtb_TmpSignalConversionAtVeDCCR = rtb_Product1;

            /* End of Outputs for SubSystem: '<S315>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S315>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S320>/Action Port'
             */
            /* Merge: '<S315>/Merge1' incorporates:
             *  Constant: '<S307>/Constant'
             *  Inport: '<S320>/In2'
             */
            rtb_Merge1 = CeOBCR_e_DCChrgTest_EOL;

            /* End of Outputs for SubSystem: '<S315>/If Action Subsystem1' */
        }

        /* End of If: '<S315>/If' */

        /* If: '<S318>/If' */
        if (rtb_TmpSignalConversionAtVeDCCR <= rtb_TmpSignalConversionAtVeTHMR)
        {
            /* Outputs for IfAction SubSystem: '<S318>/If Action Subsystem' incorporates:
             *  ActionPort: '<S325>/Action Port'
             */
            /* Merge: '<S318>/Merge' incorporates:
             *  Inport: '<S325>/In1'
             */
            VeCCCR_I_MiscLimCrnt = rtb_TmpSignalConversionAtVeDCCR;

            /* Merge: '<S318>/Merge1' incorporates:
             *  Inport: '<S325>/In2'
             *  Merge: '<S315>/Merge1'
             */
            VeCCCR_e_MiscLimCrntID = rtb_Merge1;

            /* End of Outputs for SubSystem: '<S318>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S318>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S326>/Action Port'
             */
            /* Merge: '<S318>/Merge' incorporates:
             *  Inport: '<S326>/In1'
             */
            VeCCCR_I_MiscLimCrnt = rtb_TmpSignalConversionAtVeTHMR;

            /* Merge: '<S318>/Merge1' incorporates:
             *  Constant: '<S308>/Constant'
             *  Inport: '<S326>/In2'
             */
            VeCCCR_e_MiscLimCrntID = CeOBCR_e_ThrmlCurrLim;

            /* End of Outputs for SubSystem: '<S318>/If Action Subsystem1' */
        }

        /* End of If: '<S318>/If' */

        /* Switch: '<S378>/Switch1' incorporates:
         *  Constant: '<S374>/Constant'
         *  RelationalOperator: '<S144>/Relational Operator2'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeOB_k) != CeOBCR_e_AC)
        {
            /* Switch: '<S378>/Switch2' incorporates:
             *  Constant: '<S375>/Constant'
             *  RelationalOperator: '<S144>/Relational Operator1'
             */
            if (((uint32)rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_DC)
            {
                /* Switch: '<S144>/Switch2' */
                if (rtb_TmpSignalConversionAtVeDC_d)
                {
                    /* Switch: '<S378>/Switch1' incorporates:
                     *  Constant: '<S380>/Calib'
                     *  Switch: '<S144>/Switch2'
                     */
                    rtb_TmpSignalConversionAtVeIDCR = KeCCCR_I_EVMax_I_Limit;
                }
                else
                {
                    /* Switch: '<S378>/Switch1' incorporates:
                     *  Constant: '<S379>/Calib'
                     *  Sum: '<S144>/Sum1'
                     *  Switch: '<S144>/Switch2'
                     */
                    rtb_TmpSignalConversionAtVeIDCR = VeCCCR_I_EVSEMaxCurrLmt -
                        KeCCCR_I_DC_CurrTolerance;
                }

                /* End of Switch: '<S144>/Switch2' */
            }

            /* End of Switch: '<S378>/Switch2' */
        }

        /* End of Switch: '<S378>/Switch1' */

        /* If: '<S387>/If' */
        if (rtb_TmpSignalConversionAtVeIDCR <= rtb_TmpSignalConversionAtVeOFCR)
        {
            /* Outputs for IfAction SubSystem: '<S387>/If Action Subsystem' incorporates:
             *  ActionPort: '<S392>/Action Port'
             */
            /* Merge: '<S387>/Merge' incorporates:
             *  Inport: '<S392>/In1'
             */
            rtb_TmpSignalConversionAtVeOFCR = rtb_TmpSignalConversionAtVeIDCR;

            /* Merge: '<S387>/Merge1' incorporates:
             *  Constant: '<S371>/Constant'
             *  Inport: '<S392>/In2'
             */
            rtb_Merge1 = CeOBCR_e_ChargeTypeHW_CrntLim;

            /* End of Outputs for SubSystem: '<S387>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S387>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S393>/Action Port'
             */
            /* Merge: '<S387>/Merge1' incorporates:
             *  Constant: '<S370>/Constant'
             *  Inport: '<S393>/In2'
             */
            rtb_Merge1 = CeOBCR_e_ChrgPortDerate;

            /* End of Outputs for SubSystem: '<S387>/If Action Subsystem1' */
        }

        /* End of If: '<S387>/If' */

        /* Outputs for Atomic SubSystem: '<S144>/Protected Division1' */
        /* Switch: '<S384>/Switch1' incorporates:
         *  Constant: '<S381>/Calib'
         *  Constant: '<S384>/Constant Value'
         *  Constant: '<S384>/Constant Value1'
         *  Constant: '<S384>/Constant Value2'
         *  Constant: '<S384>/Constant Value3'
         *  Logic: '<S384>/AND'
         *  RelationalOperator: '<S384>/Greater Than or Equal '
         *  RelationalOperator: '<S384>/Greater Than or Equal 1'
         *  RelationalOperator: '<S384>/Not Equal'
         *  RelationalOperator: '<S384>/Not Equal1'
         *  Switch: '<S384>/Switch2'
         *  Switch: '<S384>/Switch3'
         */
        if ((KeCCCR_P_ProgramLimit != 0.0F) &&
                (CCCR_ac_B.TmpSignalConversionAtVeHVTR_U_H != 0.0F))
        {
            /* Switch: '<S384>/Switch1' incorporates:
             *  Product: '<S384>/Division'
             */
            VeCCCR_I_ChrgrLimCrnt = KeCCCR_P_ProgramLimit /
                CCCR_ac_B.TmpSignalConversionAtVeHVTR_U_H;
        }
        else if (KeCCCR_P_ProgramLimit > 0.0F)
        {
            /* Switch: '<S384>/Switch2' incorporates:
             *  Constant: '<S384>/MAXFLOAT'
             *  Switch: '<S384>/Switch1'
             */
            VeCCCR_I_ChrgrLimCrnt = 3.402823466E+38F;
        }
        else if (KeCCCR_P_ProgramLimit < 0.0F)
        {
            /* Switch: '<S384>/Switch3' incorporates:
             *  Constant: '<S384>/MINFLOAT'
             *  Switch: '<S384>/Switch1'
             *  Switch: '<S384>/Switch2'
             */
            VeCCCR_I_ChrgrLimCrnt = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S384>/Switch1' incorporates:
             *  Constant: '<S384>/Constant Value4'
             *  Switch: '<S384>/Switch2'
             *  Switch: '<S384>/Switch3'
             */
            VeCCCR_I_ChrgrLimCrnt = 0.0F;
        }

        /* End of Switch: '<S384>/Switch1' */
        /* End of Outputs for SubSystem: '<S144>/Protected Division1' */

        /* If: '<S385>/If' */
        if (rtb_TmpSignalConversionAtVeOFCR > VeCCCR_I_ChrgrLimCrnt)
        {
            /* Outputs for IfAction SubSystem: '<S385>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S389>/Action Port'
             */
            /* Merge: '<S385>/Merge' incorporates:
             *  Inport: '<S389>/In1'
             */
            rtb_TmpSignalConversionAtVeOFCR = VeCCCR_I_ChrgrLimCrnt;

            /* Merge: '<S385>/Merge1' incorporates:
             *  Constant: '<S372>/Constant'
             *  Inport: '<S389>/In2'
             */
            rtb_Merge1 = CeOBCR_e_ProgramPwrLimit;

            /* End of Outputs for SubSystem: '<S385>/If Action Subsystem1' */
        }

        /* End of If: '<S385>/If' */

        /* Switch: '<S144>/Switch1' incorporates:
         *  Constant: '<S376>/Constant'
         *  Constant: '<S382>/Calib'
         *  Logic: '<S144>/Logical'
         *  RelationalOperator: '<S144>/Relational Operator3'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_DC) &&
                (KeCCCR_b_AllowEVSEPwrLim))
        {
            /* Outputs for Atomic SubSystem: '<S144>/Protected Division' */
            /* Switch: '<S383>/Switch1' incorporates:
             *  Constant: '<S383>/Constant Value'
             *  Constant: '<S383>/Constant Value1'
             *  Constant: '<S383>/Constant Value2'
             *  Constant: '<S383>/Constant Value3'
             *  Logic: '<S383>/AND'
             *  RelationalOperator: '<S383>/Greater Than or Equal '
             *  RelationalOperator: '<S383>/Greater Than or Equal 1'
             *  RelationalOperator: '<S383>/Not Equal'
             *  RelationalOperator: '<S383>/Not Equal1'
             *  Switch: '<S383>/Switch2'
             *  Switch: '<S383>/Switch3'
             */
            if ((VeCCCR_P_EVSEMaxPwrLmt != 0.0F) && (VeCCCR_U_EVSEOutputVolt !=
                    0.0F))
            {
                /* Switch: '<S144>/Switch1' incorporates:
                 *  Product: '<S383>/Division'
                 *  Switch: '<S383>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeTHMR = VeCCCR_P_EVSEMaxPwrLmt /
                    VeCCCR_U_EVSEOutputVolt;
            }
            else if (VeCCCR_P_EVSEMaxPwrLmt > 0.0F)
            {
                /* Switch: '<S383>/Switch2' incorporates:
                 *  Constant: '<S383>/MAXFLOAT'
                 *  Switch: '<S144>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeTHMR = 3.402823466E+38F;
            }
            else if (VeCCCR_P_EVSEMaxPwrLmt < 0.0F)
            {
                /* Switch: '<S383>/Switch3' incorporates:
                 *  Constant: '<S383>/MINFLOAT'
                 *  Switch: '<S144>/Switch1'
                 *  Switch: '<S383>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeTHMR = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S144>/Switch1' incorporates:
                 *  Constant: '<S383>/Constant Value4'
                 *  Switch: '<S383>/Switch2'
                 *  Switch: '<S383>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeTHMR = 0.0F;
            }

            /* End of Switch: '<S383>/Switch1' */
            /* End of Outputs for SubSystem: '<S144>/Protected Division' */
        }
        else
        {
            /* Switch: '<S144>/Switch1' incorporates:
             *  Constant: '<S144>/Constant Value2'
             */
            rtb_TmpSignalConversionAtVeTHMR = 1000.0F;
        }

        /* End of Switch: '<S144>/Switch1' */

        /* If: '<S386>/If' */
        if (rtb_TmpSignalConversionAtVeOFCR <= rtb_TmpSignalConversionAtVeTHMR)
        {
            /* Outputs for IfAction SubSystem: '<S386>/If Action Subsystem' incorporates:
             *  ActionPort: '<S390>/Action Port'
             */
            /* Merge: '<S386>/Merge' incorporates:
             *  Inport: '<S390>/In1'
             */
            VeCCCR_I_ModLimCrnt = rtb_TmpSignalConversionAtVeOFCR;

            /* Merge: '<S386>/Merge1' incorporates:
             *  Inport: '<S390>/In2'
             *  Merge: '<S385>/Merge1'
             */
            VeCCCR_e_ModLimID = rtb_Merge1;

            /* End of Outputs for SubSystem: '<S386>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S386>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S391>/Action Port'
             */
            /* Merge: '<S386>/Merge' incorporates:
             *  Inport: '<S391>/In1'
             */
            VeCCCR_I_ModLimCrnt = rtb_TmpSignalConversionAtVeTHMR;

            /* Merge: '<S386>/Merge1' incorporates:
             *  Constant: '<S373>/Constant'
             *  Inport: '<S391>/In2'
             */
            VeCCCR_e_ModLimID = CeOBCR_e_EVSEPwrLimit;

            /* End of Outputs for SubSystem: '<S386>/If Action Subsystem1' */
        }

        /* End of If: '<S386>/If' */
        /* End of Outputs for SubSystem: '<S4>/CurrRq_ChrgCompl' */
        (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_6);

        /* Outputs for IfAction SubSystem: '<S4>/CurrRq_ChrgCompl' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* MinMax: '<S11>/MinMax' incorporates:
         *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
         */
        rtb_TmpSignalConversionAtVeOFCR = fminf(VeCCCR_I_MiscLimCrnt,
            VeCCCR_I_ModLimCrnt);

        /* Outputs for Atomic SubSystem: '<S11>/GradientLimiter' */
        /* Sum: '<S140>/Sum2' incorporates:
         *  UnitDelay: '<S140>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTHMR = rtb_TmpSignalConversionAtVeOFCR -
            CCCR_ac_DW.UnitDelay_DSTATE_fg;

        /* Outputs for Atomic SubSystem: '<S140>/Limiter' */
        /* Switch: '<S305>/Switch1' incorporates:
         *  Constant: '<S142>/Calib'
         *  RelationalOperator: '<S305>/Relational Operator'
         */
        if (KeCCCR_I_LU_BatryCmndCurr < rtb_TmpSignalConversionAtVeTHMR)
        {
            /* Switch: '<S135>/Switch1' */
            rtb_TmpSignalConversionAtVeBP_e = KeCCCR_I_LU_BatryCmndCurr;
        }
        else
        {
            /* Switch: '<S135>/Switch1' */
            rtb_TmpSignalConversionAtVeBP_e = rtb_TmpSignalConversionAtVeTHMR;
        }

        /* End of Switch: '<S305>/Switch1' */

        /* Switch: '<S305>/Switch' incorporates:
         *  Constant: '<S141>/Calib'
         *  RelationalOperator: '<S305>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeBP_e <= KeCCCR_I_LD_BatryCmndCurr)
        {
            rtb_TmpSignalConversionAtVeBP_e = KeCCCR_I_LD_BatryCmndCurr;
        }

        /* End of Switch: '<S305>/Switch' */
        /* End of Outputs for SubSystem: '<S140>/Limiter' */

        /* Sum: '<S140>/Sum3' incorporates:
         *  UnitDelay: '<S140>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTHMR = rtb_TmpSignalConversionAtVeBP_e +
            CCCR_ac_DW.UnitDelay_DSTATE_fg;

        /* Update for UnitDelay: '<S140>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_fg = rtb_TmpSignalConversionAtVeTHMR;

        /* End of Outputs for SubSystem: '<S11>/GradientLimiter' */

        /* MinMax: '<S11>/MinMax1' incorporates:
         *  Constant: '<S11>/Constant Value'
         */
        VeCCCR_I_HWBounds = fmaxf(0.0F, rtb_TmpSignalConversionAtVeTHMR);

        /* Outputs for Atomic SubSystem: '<S25>/Hysteresis' */
        /* Switch: '<S32>/Switch1' incorporates:
         *  Constant: '<S50>/Calib'
         *  RelationalOperator: '<S32>/Greater  Than'
         */
        if (CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct >
                KeCCCR_Pct_MaxSOCAlwd4CP_RSP)
        {
            /* Switch: '<S32>/Switch1' incorporates:
             *  Constant: '<S32>/Constant Value'
             */
            rtb_AND_is = true;
        }
        else
        {
            /* Switch: '<S32>/Switch1' incorporates:
             *  Constant: '<S49>/Calib'
             *  RelationalOperator: '<S32>/Greater  Than1'
             *  UnitDelay: '<S32>/Unit Delay'
             */
            rtb_AND_is = ((CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct >=
                           KeCCCR_Pct_MaxSOCAlwd4CP_LSP) &&
                          (CCCR_ac_DW.UnitDelay_DSTATE_j4z));
        }

        /* End of Switch: '<S32>/Switch1' */

        /* Update for UnitDelay: '<S32>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_j4z = rtb_AND_is;

        /* End of Outputs for SubSystem: '<S25>/Hysteresis' */

        /* Outputs for Atomic SubSystem: '<S25>/Hysteresis1' */
        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S54>/Calib'
         *  RelationalOperator: '<S33>/Greater  Than'
         */
        if (VeCCCR_U_HV_BatVoltModMaxArbFil > KeCCCR_U_MaxCellVlt4CP_RSP)
        {
            /* Switch: '<S33>/Switch1' incorporates:
             *  Constant: '<S33>/Constant Value'
             */
            rtb_AND_psp = true;
        }
        else
        {
            /* Switch: '<S33>/Switch1' incorporates:
             *  Constant: '<S53>/Calib'
             *  RelationalOperator: '<S33>/Greater  Than1'
             *  UnitDelay: '<S33>/Unit Delay'
             */
            rtb_AND_psp = ((VeCCCR_U_HV_BatVoltModMaxArbFil >=
                            KeCCCR_U_MaxCellVlt4CP_LSP) &&
                           (CCCR_ac_DW.UnitDelay_DSTATE_d));
        }

        /* End of Switch: '<S33>/Switch1' */

        /* Update for UnitDelay: '<S33>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_d = rtb_AND_psp;

        /* End of Outputs for SubSystem: '<S25>/Hysteresis1' */

        /* Switch: '<S25>/Switch4' incorporates:
         *  Constant: '<S25>/Constant Value3'
         *  RelationalOperator: '<S25>/Comparison'
         */
        if (rtb_TmpSignalConversionAtVeESMR > 0.0F)
        {
            /* Switch: '<S25>/Switch4' incorporates:
             *  Constant: '<S25>/Constant Value4'
             */
            rtb_TmpSignalConversionAtVeESMR = 0.0F;
        }
        else
        {
            /* Switch: '<S25>/Switch4' incorporates:
             *  Abs: '<S25>/Abs'
             */
            rtb_TmpSignalConversionAtVeESMR = fabsf
                (rtb_TmpSignalConversionAtVeESMR);
        }

        /* End of Switch: '<S25>/Switch4' */

        /* Outputs for Atomic SubSystem: '<S25>/Hysteresis2' */
        /* Switch: '<S34>/Switch1' incorporates:
         *  Constant: '<S46>/Calib'
         *  RelationalOperator: '<S34>/Greater  Than'
         */
        if (rtb_TmpSignalConversionAtVeESMR > KeCCCR_P_MinPwrPSAChrg_RSP)
        {
            /* Switch: '<S34>/Switch1' incorporates:
             *  Constant: '<S34>/Constant Value'
             */
            VeCCCR_b_PSAChrgTest1 = true;
        }
        else
        {
            /* Switch: '<S34>/Switch1' incorporates:
             *  Constant: '<S45>/Calib'
             *  RelationalOperator: '<S34>/Greater  Than1'
             *  UnitDelay: '<S34>/Unit Delay'
             */
            VeCCCR_b_PSAChrgTest1 = ((rtb_TmpSignalConversionAtVeESMR >=
                KeCCCR_P_MinPwrPSAChrg_LSP) && (CCCR_ac_DW.UnitDelay_DSTATE_cxl));
        }

        /* End of Switch: '<S34>/Switch1' */

        /* Update for UnitDelay: '<S34>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_cxl = VeCCCR_b_PSAChrgTest1;

        /* End of Outputs for SubSystem: '<S25>/Hysteresis2' */

        /* Outputs for Atomic SubSystem: '<S25>/Hysteresis3' */
        /* Switch: '<S35>/Switch1' incorporates:
         *  Constant: '<S48>/Calib'
         *  RelationalOperator: '<S35>/Greater  Than'
         */
        if (CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct >
                KeCCCR_Pct_EngOnMaxSOC_RSP)
        {
            /* Switch: '<S35>/Switch1' incorporates:
             *  Constant: '<S35>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeOBCR = true;
        }
        else
        {
            /* Switch: '<S35>/Switch1' incorporates:
             *  Constant: '<S47>/Calib'
             *  RelationalOperator: '<S35>/Greater  Than1'
             *  UnitDelay: '<S35>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeOBCR =
                ((CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct >=
                  KeCCCR_Pct_EngOnMaxSOC_LSP) && (CCCR_ac_DW.UnitDelay_DSTATE_el));
        }

        /* End of Switch: '<S35>/Switch1' */

        /* Update for UnitDelay: '<S35>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_el = rtb_TmpSignalConversionAtVeOBCR;

        /* End of Outputs for SubSystem: '<S25>/Hysteresis3' */

        /* Outputs for Atomic SubSystem: '<S25>/Hysteresis4' */
        /* Switch: '<S36>/Switch1' incorporates:
         *  Constant: '<S52>/Calib'
         *  RelationalOperator: '<S36>/Greater  Than'
         */
        if (CCCR_ac_B.TmpSignalConversionAtVeHMIR_Pct >=
                KeCCCR_Pct_SOCMaxLvlReqZero_RSP)
        {
            /* Switch: '<S36>/Switch1' incorporates:
             *  Constant: '<S36>/Constant Value'
             */
            rtb_AND_do = true;
        }
        else
        {
            /* Switch: '<S36>/Switch1' incorporates:
             *  Constant: '<S51>/Calib'
             *  RelationalOperator: '<S36>/Greater  Than1'
             *  UnitDelay: '<S36>/Unit Delay'
             */
            rtb_AND_do = ((CCCR_ac_B.TmpSignalConversionAtVeHMIR_Pct >=
                           KeCCCR_Pct_SOCMaxLvlReqZero_LSP) &&
                          (CCCR_ac_DW.UnitDelay_DSTATE_ow));
        }

        /* End of Switch: '<S36>/Switch1' */

        /* Update for UnitDelay: '<S36>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_ow = rtb_AND_do;

        /* End of Outputs for SubSystem: '<S25>/Hysteresis4' */

        /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S55>/EdgeRising' */
        /* UnitDelay: '<S138>/Unit Delay' incorporates:
         *  UnitDelay: '<S59>/Unit Delay'
         */
        rtb_AND_kz = CCCR_ac_DW.UnitDelay_DSTATE_a2;

        /* Update for UnitDelay: '<S59>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_a2 = VeCCCR_b_PSAChrgTest1;

        /* Switch: '<S55>/Switch1' incorporates:
         *  Constant: '<S39>/Calib'
         *  Constant: '<S55>/Constant Value'
         *  Logic: '<S55>/OR'
         *  Logic: '<S55>/OR1'
         *  Logic: '<S59>/AND'
         *  Logic: '<S59>/OR1'
         *  MinMax: '<S55>/Minimum'
         *  Sum: '<S55>/Summation'
         *  UnitDelay: '<S55>/Unit Delay'
         */
        if ((!VeCCCR_b_PSAChrgTest1) || ((VeCCCR_b_PSAChrgTest1) && (!rtb_AND_kz)))
        {
            /* Switch: '<S55>/Switch1' incorporates:
             *  Constant: '<S55>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_DbncPwrLimPSA < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_ai) + 1U)))
        {
            /* MinMax: '<S55>/Minimum' incorporates:
             *  Constant: '<S39>/Calib'
             *  Switch: '<S55>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_DbncPwrLimPSA;
        }
        else
        {
            /* Switch: '<S55>/Switch1' incorporates:
             *  Constant: '<S55>/Constant Value'
             *  MinMax: '<S55>/Minimum'
             *  Sum: '<S55>/Summation'
             *  UnitDelay: '<S55>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_ai) + 1U);
        }

        /* End of Switch: '<S55>/Switch1' */
        /* End of Outputs for SubSystem: '<S55>/EdgeRising' */

        /* Logic: '<S55>/AND' incorporates:
         *  Constant: '<S39>/Calib'
         *  RelationalOperator: '<S55>/Greater  Than'
         */
        VeCCCR_b_PSAChrgTest2 = ((VeCCCR_b_PSAChrgTest1) && (rtb_Switch1 >=
            KeCCCR_Cnt_DbncPwrLimPSA));

        /* Update for UnitDelay: '<S55>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_ai = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample1' */

        /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample4' */
        /* Outputs for Atomic SubSystem: '<S58>/EdgeRising' */
        /* UnitDelay: '<S138>/Unit Delay' incorporates:
         *  UnitDelay: '<S62>/Unit Delay'
         */
        rtb_AND_kz = CCCR_ac_DW.UnitDelay_DSTATE_nm;

        /* Update for UnitDelay: '<S62>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_nm =
            CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S;

        /* Switch: '<S58>/Switch1' incorporates:
         *  Constant: '<S42>/Calib'
         *  Constant: '<S58>/Constant Value'
         *  Logic: '<S58>/OR'
         *  Logic: '<S58>/OR1'
         *  Logic: '<S62>/AND'
         *  Logic: '<S62>/OR1'
         *  MinMax: '<S58>/Minimum'
         *  Sum: '<S58>/Summation'
         *  UnitDelay: '<S58>/Unit Delay'
         */
        if ((!CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S) ||
                ((CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S) && (!rtb_AND_kz)))
        {
            /* Switch: '<S58>/Switch1' incorporates:
             *  Constant: '<S58>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_SOCMaxLvl < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_ah) + 1U)))
        {
            /* MinMax: '<S58>/Minimum' incorporates:
             *  Constant: '<S42>/Calib'
             *  Switch: '<S58>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_SOCMaxLvl;
        }
        else
        {
            /* Switch: '<S58>/Switch1' incorporates:
             *  Constant: '<S58>/Constant Value'
             *  MinMax: '<S58>/Minimum'
             *  Sum: '<S58>/Summation'
             *  UnitDelay: '<S58>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_ah) + 1U);
        }

        /* End of Switch: '<S58>/Switch1' */
        /* End of Outputs for SubSystem: '<S58>/EdgeRising' */

        /* Update for UnitDelay: '<S58>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_ah = rtb_Switch1;

        /* Switch: '<S25>/Switch' incorporates:
         *  Constant: '<S42>/Calib'
         *  Logic: '<S58>/AND'
         *  RelationalOperator: '<S58>/Greater  Than'
         */
        if ((CCCR_ac_B.TmpSignalConversionAtVeCITR_b_S) && (rtb_Switch1 >=
                KeCCCR_Cnt_SOCMaxLvl))
        {
            rtb_AND_do = rtb_AND_is;
        }

        /* End of Switch: '<S25>/Switch' */
        /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample4' */

        /* Logic: '<S25>/Logical31' */
        rtb_AND_is = (rtb_AND_do || rtb_AND_psp);

        /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample2' */
        /* Outputs for Atomic SubSystem: '<S56>/EdgeRising' */
        /* Logic: '<S60>/AND' incorporates:
         *  Logic: '<S60>/OR1'
         *  UnitDelay: '<S60>/Unit Delay'
         */
        rtb_AND_psp = (rtb_AND_is && (!CCCR_ac_DW.UnitDelay_DSTATE_jh));

        /* Update for UnitDelay: '<S60>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_jh = rtb_AND_is;

        /* End of Outputs for SubSystem: '<S56>/EdgeRising' */

        /* Logic: '<S56>/OR1' incorporates:
         *  Logic: '<S56>/AND'
         */
        rtb_AND_do = !rtb_AND_is;

        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S41>/Calib'
         *  Constant: '<S56>/Constant Value'
         *  Logic: '<S56>/OR'
         *  Logic: '<S56>/OR1'
         *  MinMax: '<S56>/Minimum'
         *  Sum: '<S56>/Summation'
         *  UnitDelay: '<S56>/Unit Delay'
         */
        if (rtb_AND_do || rtb_AND_psp)
        {
            /* Switch: '<S56>/Switch1' incorporates:
             *  Constant: '<S56>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_SOCCheckDelayCntCP < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_jvc) + 1U)))
        {
            /* MinMax: '<S56>/Minimum' incorporates:
             *  Constant: '<S41>/Calib'
             *  Switch: '<S56>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_SOCCheckDelayCntCP;
        }
        else
        {
            /* Switch: '<S56>/Switch1' incorporates:
             *  Constant: '<S56>/Constant Value'
             *  MinMax: '<S56>/Minimum'
             *  Sum: '<S56>/Summation'
             *  UnitDelay: '<S56>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_jvc) +
                                   1U);
        }

        /* End of Switch: '<S56>/Switch1' */

        /* Update for UnitDelay: '<S56>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_jvc = rtb_Switch1;

        /* Logic: '<S25>/Logical9' incorporates:
         *  Constant: '<S41>/Calib'
         *  Logic: '<S56>/AND'
         *  RelationalOperator: '<S56>/Greater  Than'
         */
        VeCCCR_b_PSAChrgTest3 = (rtb_AND_do || (rtb_Switch1 <
            KeCCCR_Cnt_SOCCheckDelayCntCP));

        /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample2' */

        /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample3' */
        /* Outputs for Atomic SubSystem: '<S57>/EdgeRising' */
        /* Logic: '<S61>/AND' incorporates:
         *  Logic: '<S61>/OR1'
         *  UnitDelay: '<S61>/Unit Delay'
         */
        rtb_AND_is = (rtb_TmpSignalConversionAtVeOBCR &&
                      (!CCCR_ac_DW.UnitDelay_DSTATE_p3));

        /* Update for UnitDelay: '<S61>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_p3 = rtb_TmpSignalConversionAtVeOBCR;

        /* End of Outputs for SubSystem: '<S57>/EdgeRising' */

        /* Logic: '<S57>/OR1' incorporates:
         *  Logic: '<S57>/AND'
         */
        rtb_AND_do = !rtb_TmpSignalConversionAtVeOBCR;

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S40>/Calib'
         *  Constant: '<S57>/Constant Value'
         *  Logic: '<S57>/OR'
         *  Logic: '<S57>/OR1'
         *  MinMax: '<S57>/Minimum'
         *  Sum: '<S57>/Summation'
         *  UnitDelay: '<S57>/Unit Delay'
         */
        if (rtb_AND_do || rtb_AND_is)
        {
            /* Switch: '<S57>/Switch1' incorporates:
             *  Constant: '<S57>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_EngOnHighSOC < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_gd) + 1U)))
        {
            /* MinMax: '<S57>/Minimum' incorporates:
             *  Constant: '<S40>/Calib'
             *  Switch: '<S57>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_EngOnHighSOC;
        }
        else
        {
            /* Switch: '<S57>/Switch1' incorporates:
             *  Constant: '<S57>/Constant Value'
             *  MinMax: '<S57>/Minimum'
             *  Sum: '<S57>/Summation'
             *  UnitDelay: '<S57>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_gd) + 1U);
        }

        /* End of Switch: '<S57>/Switch1' */

        /* Update for UnitDelay: '<S57>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_gd = rtb_Switch1;

        /* Logic: '<S25>/Logical2' incorporates:
         *  Constant: '<S40>/Calib'
         *  Logic: '<S57>/AND'
         *  RelationalOperator: '<S57>/Greater  Than'
         */
        VeCCCR_b_PSAChrgTest5 = (rtb_AND_do || (rtb_Switch1 <
            KeCCCR_Cnt_EngOnHighSOC));

        /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample3' */

        /* Switch: '<S25>/Switch5' incorporates:
         *  Constant: '<S31>/Constant'
         *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
         *  RelationalOperator: '<S25>/Comparison1'
         */
        VeCCCR_b_PSAChrgTest6 = ((((uint32)tmpRead_6) != CeESSR_e_EngRunning) ||
            (VeCCCR_b_PSAChrgTest5));

        /* Logic: '<S25>/Logical1' */
        VeCCCR_b_PSA_Test = (((VeCCCR_b_PSAChrgTest2) && (VeCCCR_b_PSAChrgTest3))
                             && (VeCCCR_b_PSAChrgTest6));

        /* Switch: '<S37>/Switch1' */
        if (VeCCCR_b_PropSysActv)
        {
            /* Switch: '<S37>/Switch1' */
            VeCCCR_b_EnableCurrRq = VeCCCR_b_PSA_Test;
        }
        else
        {
            /* RelationalOperator: '<S25>/Comparison2' incorporates:
             *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
             */
            VeCCCR_b_EnableCurrRq_tmp =
                CCCR_ac_B.TmpSignalConversionAtVePMDR_e_P;

            /* Switch: '<S37>/Switch1' incorporates:
             *  Constant: '<S30>/Constant'
             *  RelationalOperator: '<S25>/Comparison2'
             *  Switch: '<S37>/Switch2'
             */
            VeCCCR_b_EnableCurrRq = ((((uint32)VeCCCR_b_EnableCurrRq_tmp) ==
                CePMDR_e_PowerMode_Off) || (VeCCCR_b_PSAChrgTest3));
        }

        /* End of Switch: '<S37>/Switch1' */
        /* End of Outputs for SubSystem: '<S4>/CurrRq_ChrgCompl' */
        (void)Rte_Read_VeCPLR_b_Lock_Status_Value(&rtb_Comparison5_l);
        (void)Rte_Read_VeFCPR_b_FCPS_HV_AfterRunSts_Value(&rtb_AND_os);

        /* Outputs for IfAction SubSystem: '<S4>/CurrRq_ChrgCompl' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S7>/ChrgComplDet' */
        CCCR_ac_ChrgComplDet();

        /* End of Outputs for SubSystem: '<S7>/ChrgComplDet' */

        /* RelationalOperator: '<S25>/Comparison5' incorporates:
         *  Chart: '<S26>/StateflowChart'
         *  Inport: '<Root>/VeCPLR_b_Lock_Status'
         *  Inport: '<Root>/VeFCPR_b_FCPS_HV_AfterRunSts'
         *  RelationalOperator: '<S27>/Comparison5'
         *  SignalConversion generated from: '<S1>/VeOBCR_e_ChrgSysStat_SF'
         */
        VeCCCR_b_ReqZero_tmp = CCCR_ac_B.TmpSignalConversionAtVeOBCR_e_C;

        /* Logic: '<S25>/Logical11' incorporates:
         *  Constant: '<S28>/Constant'
         *  Constant: '<S29>/Constant'
         *  Logic: '<S25>/Logical3'
         *  Logic: '<S25>/Logical4'
         *  Logic: '<S25>/Logical5'
         *  Logic: '<S25>/Logical7'
         *  RelationalOperator: '<S25>/Comparison4'
         *  RelationalOperator: '<S25>/Comparison5'
         *  Switch: '<S5>/Switch59'
         */
        VeCCCR_b_ReqZero = (((((((uint32)VeCCCR_e_EVSE_ProxStat_In) !=
                                CeOBCR_e_ProxIn_OBCM) || (!rtb_Comparison5_l)) ||
                              (((uint32)VeCCCR_b_ReqZero_tmp) !=
                               CeOBCR_e_Charging)) || ((CCCR_ac_B.Logical11) &&
                              (!VeCCCR_b_PSAChrgTest3))) || rtb_AND_os);

        /* RelationalOperator: '<S26>/Comparison5' incorporates:
         *  Constant: '<S70>/Calib'
         */
        rtb_Comparison5_l = (VeCCCR_U_HV_BatVoltModMaxArbFil >
                             KeCCCR_U_MaxCellVltUprBound);

        /* Outputs for Atomic SubSystem: '<S26>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S80>/EdgeRising' */
        /* Logic: '<S102>/AND' incorporates:
         *  Logic: '<S102>/OR1'
         *  UnitDelay: '<S102>/Unit Delay'
         */
        rtb_AND_os = (rtb_Comparison5_l && (!CCCR_ac_DW.UnitDelay_DSTATE_j4));

        /* Update for UnitDelay: '<S102>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_j4 = rtb_Comparison5_l;

        /* End of Outputs for SubSystem: '<S80>/EdgeRising' */

        /* Switch: '<S80>/Switch1' incorporates:
         *  Constant: '<S69>/Calib'
         *  Constant: '<S80>/Constant Value'
         *  Logic: '<S80>/OR'
         *  Logic: '<S80>/OR1'
         *  MinMax: '<S80>/Minimum'
         *  Sum: '<S80>/Summation'
         *  UnitDelay: '<S80>/Unit Delay'
         */
        if ((!rtb_Comparison5_l) || rtb_AND_os)
        {
            /* Switch: '<S80>/Switch1' incorporates:
             *  Constant: '<S80>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_DbncCellVltUprCond < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_jr) + 1U)))
        {
            /* MinMax: '<S80>/Minimum' incorporates:
             *  Constant: '<S69>/Calib'
             *  Switch: '<S80>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_DbncCellVltUprCond;
        }
        else
        {
            /* Switch: '<S80>/Switch1' incorporates:
             *  Constant: '<S80>/Constant Value'
             *  MinMax: '<S80>/Minimum'
             *  Sum: '<S80>/Summation'
             *  UnitDelay: '<S80>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_jr) + 1U);
        }

        /* End of Switch: '<S80>/Switch1' */

        /* Logic: '<S80>/AND' incorporates:
         *  Constant: '<S69>/Calib'
         *  RelationalOperator: '<S80>/Greater  Than'
         */
        VeCCCR_b_CellVltCondMet = (rtb_Comparison5_l && (rtb_Switch1 >=
            KeCCCR_Cnt_DbncCellVltUprCond));

        /* Update for UnitDelay: '<S80>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_jr = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S26>/Turn On Delay Sample1' */

        /* Logic: '<S26>/Logical' incorporates:
         *  Constant: '<S66>/Constant'
         *  Constant: '<S67>/Constant'
         *  RelationalOperator: '<S26>/Comparison2'
         *  RelationalOperator: '<S26>/Comparison3'
         */
        rtb_AND_os = ((((uint32)rtb_Product1_tmp) == CeOBCR_e_ChargingLvlAC2) ||
                      (((uint32)rtb_Product1_tmp) == CeOBCR_e_ChargingLvlDC2));

        /* RelationalOperator: '<S26>/Comparison4' incorporates:
         *  Constant: '<S65>/Constant'
         *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
         */
        rtb_TmpSignalConversionAtVeOBCR = (CePMDR_e_PowerMode_Off == ((uint32)
            CCCR_ac_B.TmpSignalConversionAtVePMDR_e_P));

        /* RelationalOperator: '<S26>/Comparison1' */
        rtb_AND_is = (VeCCCR_U_HV_BatVoltModMaxArbFil >=
                      VeCCCR_I_MaxCellCurrTargCal);

        /* Outputs for Atomic SubSystem: '<S26>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S79>/EdgeRising' */
        /* Logic: '<S101>/AND' incorporates:
         *  Logic: '<S101>/OR1'
         *  UnitDelay: '<S101>/Unit Delay'
         */
        rtb_AND_psp = (rtb_AND_is && (!CCCR_ac_DW.UnitDelay_DSTATE_kg));

        /* Update for UnitDelay: '<S101>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_kg = rtb_AND_is;

        /* End of Outputs for SubSystem: '<S79>/EdgeRising' */

        /* Switch: '<S79>/Switch1' incorporates:
         *  Constant: '<S68>/Calib'
         *  Constant: '<S79>/Constant Value'
         *  Logic: '<S79>/OR'
         *  Logic: '<S79>/OR1'
         *  MinMax: '<S79>/Minimum'
         *  Sum: '<S79>/Summation'
         *  UnitDelay: '<S79>/Unit Delay'
         */
        if ((!rtb_AND_is) || rtb_AND_psp)
        {
            /* Switch: '<S79>/Switch1' incorporates:
             *  Constant: '<S79>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_DbncCellVltCond < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_if) + 1U)))
        {
            /* MinMax: '<S79>/Minimum' incorporates:
             *  Constant: '<S68>/Calib'
             *  Switch: '<S79>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_DbncCellVltCond;
        }
        else
        {
            /* Switch: '<S79>/Switch1' incorporates:
             *  Constant: '<S79>/Constant Value'
             *  MinMax: '<S79>/Minimum'
             *  Sum: '<S79>/Summation'
             *  UnitDelay: '<S79>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_if) + 1U);
        }

        /* End of Switch: '<S79>/Switch1' */

        /* Update for UnitDelay: '<S79>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_if = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S26>/Turn On Delay Sample' */

        /* Chart: '<S26>/StateflowChart' incorporates:
         *  Constant: '<S68>/Calib'
         *  Logic: '<S79>/AND'
         *  RelationalOperator: '<S79>/Greater  Than'
         *  UnitDelay: '<S26>/Unit Delay'
         */
        /* Gateway: CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/StateflowChart */
        /* During: CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/StateflowChart */
        if (((uint32)CCCR_ac_DW.is_active_c4_CCCR_ac) == 0U)
        {
            /* Entry: CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/StateflowChart */
            CCCR_ac_DW.is_active_c4_CCCR_ac = 1U;

            /* Entry Internal: CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/StateflowChart */
            /* Transition: '<S78>:12' */
            CCCR_ac_DW.is_c4_CCCR_ac = CCCR_ac_IN_Default;

            /* Gain: '<S76>/Gain' */
            /* Entry 'Default': '<S78>:8' */
            VeCCCR_K_ChargingSystemDtrm = 0.0F;
            CCCR_ac_B.VeCCCR_b_CV_Mode_SF = false;
            CCCR_ac_B.VoltRq = 0.0F;
            CCCR_ac_B.CurrRq = 0.0F;
        }
        else if (((sint32)CCCR_ac_DW.is_c4_CCCR_ac) == 1)
        {
            /* Gain: '<S76>/Gain' */
            VeCCCR_K_ChargingSystemDtrm = 0.0F;
            CCCR_ac_B.VeCCCR_b_CV_Mode_SF = false;

            /* During 'Default': '<S78>:8' */
            if (((uint32)VeCCCR_b_ReqZero_tmp) == CeOBCR_e_Charging)
            {
                /* Transition: '<S78>:18' */
                CCCR_ac_DW.is_c4_CCCR_ac = CCCR_ac_IN_Plugged_In;

                /* Entry Internal 'Plugged_In': '<S78>:106' */
                /* Transition: '<S78>:33' */
                CCCR_ac_DW.is_Plugged_In = CCCR_ac_IN_ConstantPowerStage;

                /* Gain: '<S76>/Gain' */
                /* Entry 'ConstantPowerStage': '<S78>:9' */
                VeCCCR_K_ChargingSystemDtrm = 1.0F;
                CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer = 0.0F;
                CCCR_ac_B.VoltRq = KeCCCR_U_ChrgrVoltReqDefaultVal;
            }
        }
        else
        {
            /* During 'Plugged_In': '<S78>:106' */
            if (((uint32)VeCCCR_b_ReqZero_tmp) == CeOBCR_e_PowerUp)
            {
                /* Transition: '<S78>:27' */
                /* Exit Internal 'Plugged_In': '<S78>:106' */
                CCCR_ac_DW.is_Plugged_In = CCCR_ac_IN_NO_ACTIVE_CHILD;
                CCCR_ac_DW.is_c4_CCCR_ac = CCCR_ac_IN_Default;

                /* Gain: '<S76>/Gain' */
                /* Entry 'Default': '<S78>:8' */
                VeCCCR_K_ChargingSystemDtrm = 0.0F;
                CCCR_ac_B.VeCCCR_b_CV_Mode_SF = false;
                CCCR_ac_B.VoltRq = 0.0F;
                CCCR_ac_B.CurrRq = 0.0F;
            }
            else
            {
                switch (CCCR_ac_DW.is_Plugged_In)
                {
                  case CCCR_ac_IN_ConstantPowerStage:
                    /* Gain: '<S76>/Gain' */
                    VeCCCR_K_ChargingSystemDtrm = 1.0F;

                    /* Switch: '<S26>/Switch' incorporates:
                     *  Constant: '<S71>/Calib'
                     */
                    /* During 'ConstantPowerStage': '<S78>:9' */
                    if (!KeCCCR_b_RelaxStageEnbl)
                    {
                        rtb_Comparison5_l = VeCCCR_b_CellVltCondMet;
                    }

                    /* End of Switch: '<S26>/Switch' */
                    if ((((rtb_Comparison5_l ||
                            (CCCR_ac_B.TmpSignalConversionAtVeBPCR_Pct >
                             KeCCCR_Pct_MaxSOC2allowCCStep)) &&
                            (CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer >
                             KeCCCR_t_DbncTimeB4Stp3Alwd)) && rtb_AND_os) &&
                            rtb_TmpSignalConversionAtVeOBCR)
                    {
                        /* Transition: '<S78>:44' */
                        CCCR_ac_DW.is_Plugged_In =
                            CCCR_ac_IN_ConstantVoltageStage;

                        /* Gain: '<S76>/Gain' */
                        /* Entry 'ConstantVoltageStage': '<S78>:10' */
                        VeCCCR_K_ChargingSystemDtrm = 3.0F;
                        CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer = 0.0F;
                        CCCR_ac_B.VeCCCR_b_CV_Mode_SF = true;
                    }
                    else
                    {
                        /* Outputs for Atomic SubSystem: '<S26>/Turn On Delay Sample' */
                        if (((((rtb_AND_is && (rtb_Switch1 >=
                                               KeCCCR_Cnt_DbncCellVltCond)) &&
                                (CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer >
                                 KeCCCR_t_MinTimeB4LatchingRelxStp)) &&
                                rtb_AND_os) && rtb_TmpSignalConversionAtVeOBCR) &&
                            (KeCCCR_b_RelaxStageEnbl))
                        {
                            /* Transition: '<S78>:40' */
                            CCCR_ac_DW.is_Plugged_In = CCCR_ac_IN_RelaxStage;

                            /* Gain: '<S76>/Gain' */
                            /* Entry 'RelaxStage': '<S78>:11' */
                            VeCCCR_K_ChargingSystemDtrm = 2.0F;
                            CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer = 0.0F;
                        }
                        else
                        {
                            CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer += 0.025F;
                            CCCR_ac_B.CurrRq = VeCCCR_I_HWBounds;
                        }

                        /* End of Outputs for SubSystem: '<S26>/Turn On Delay Sample' */
                    }
                    break;

                  case CCCR_ac_IN_ConstantVoltageStage:
                    /* Gain: '<S76>/Gain' */
                    VeCCCR_K_ChargingSystemDtrm = 3.0F;
                    CCCR_ac_B.VeCCCR_b_CV_Mode_SF = true;

                    /* During 'ConstantVoltageStage': '<S78>:10' */
                    if (!rtb_TmpSignalConversionAtVeOBCR)
                    {
                        /* Transition: '<S78>:95' */
                        CCCR_ac_DW.is_Plugged_In = CCCR_ac_IN_ConstantPowerStage;

                        /* Gain: '<S76>/Gain' */
                        /* Entry 'ConstantPowerStage': '<S78>:9' */
                        VeCCCR_K_ChargingSystemDtrm = 1.0F;
                        CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer = 0.0F;
                        CCCR_ac_B.VoltRq = KeCCCR_U_ChrgrVoltReqDefaultVal;
                    }
                    else
                    {
                        CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer += 0.025F;
                        CCCR_ac_B.VoltRq = KeCCCR_U_ChrgrVoltReqDefaultVal;
                        CCCR_ac_B.CurrRq = CCCR_ac_DW.UnitDelay_DSTATE_b;
                    }
                    break;

                  default:
                    /* Gain: '<S76>/Gain' */
                    VeCCCR_K_ChargingSystemDtrm = 2.0F;

                    /* During 'RelaxStage': '<S78>:11' */
                    if (!rtb_TmpSignalConversionAtVeOBCR)
                    {
                        /* Transition: '<S78>:77' */
                        CCCR_ac_DW.is_Plugged_In = CCCR_ac_IN_ConstantPowerStage;

                        /* Gain: '<S76>/Gain' */
                        /* Entry 'ConstantPowerStage': '<S78>:9' */
                        VeCCCR_K_ChargingSystemDtrm = 1.0F;
                        CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer = 0.0F;
                        CCCR_ac_B.VoltRq = KeCCCR_U_ChrgrVoltReqDefaultVal;
                    }
                    else if ((VeCCCR_U_HV_BatVoltModMaxArbFil <
                              KeCCCR_U_MinVoltB4Step3Alwd) ||
                             (CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer >
                              KeCCCR_t_MaxTimeAlwdStp2))
                    {
                        /* Transition: '<S78>:47' */
                        CCCR_ac_DW.is_Plugged_In =
                            CCCR_ac_IN_ConstantVoltageStage;

                        /* Gain: '<S76>/Gain' */
                        /* Entry 'ConstantVoltageStage': '<S78>:10' */
                        VeCCCR_K_ChargingSystemDtrm = 3.0F;
                        CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer = 0.0F;
                        CCCR_ac_B.VeCCCR_b_CV_Mode_SF = true;
                    }
                    else
                    {
                        CCCR_ac_B.VeCCCR_t_ChrgSysDtrmnStatTimer += 0.025F;
                        CCCR_ac_B.VoltRq = KeCCCR_U_ChrgrVoltReqDefaultVal;
                        CCCR_ac_B.CurrRq = KeCCCR_I_Step2CC;
                    }
                    break;
                }
            }
        }

        /* MinMax: '<S25>/MinMax1' incorporates:
         *  Constant: '<S44>/Calib'
         */
        VeCCCR_I_MaxAllwCurr = fminf(fminf(VeCCCR_I_HWBounds,
            VeCCCR_I_BattLimCrnt), KeCCCR_I_MaxAllowChrgCrntOvrd);

        /* Switch: '<S38>/Switch1' incorporates:
         *  Logic: '<S25>/Logical12'
         *  Logic: '<S25>/Logical8'
         *  Switch: '<S38>/Switch2'
         */
        if ((VeCCCR_b_ReqZero) || (CCCR_ac_B.Logical12))
        {
            /* Switch: '<S38>/Switch1' incorporates:
             *  Constant: '<S25>/Constant Value57'
             */
            VeCCCR_I_TargetCurr = 0.0F;
        }
        else if (!VeCCCR_b_EnableCurrRq)
        {
            /* Switch: '<S38>/Switch2' incorporates:
             *  Constant: '<S43>/Calib'
             *  Switch: '<S38>/Switch1'
             */
            VeCCCR_I_TargetCurr = KeCCCR_I_DischargeCurrHighSOC;
        }
        else
        {
            /* Switch: '<S38>/Switch1' incorporates:
             *  MinMax: '<S25>/MinMax4'
             *  Switch: '<S38>/Switch2'
             */
            VeCCCR_I_TargetCurr = fminf(CCCR_ac_B.CurrRq, VeCCCR_I_MaxAllwCurr);
        }

        /* End of Switch: '<S38>/Switch1' */

        /* UnitDelay: '<S26>/Unit Delay1' */
        rtb_TmpSignalConversionAtVeESMR = CCCR_ac_DW.UnitDelay1_DSTATE_b;

        /* If: '<S26>/If' */
        rtPrevAction = CCCR_ac_DW.If_ActiveSubsystem_g;
        rtAction = -1;
        if (VeCCCR_K_ChargingSystemDtrm == 3.0F)
        {
            rtAction = 0;
        }

        CCCR_ac_DW.If_ActiveSubsystem_g = rtAction;
        if (rtAction == 0)
        {
            if (0 != rtPrevAction)
            {
                /* SystemReset for IfAction SubSystem: '<S26>/CnstVoltagePhase' incorporates:
                 *  ActionPort: '<S63>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S63>/EdgeRising' */
                /* SystemReset for If: '<S26>/If' incorporates:
                 *  UnitDelay: '<S81>/Unit Delay'
                 *  UnitDelay: '<S84>/Unit Delay'
                 */
                CCCR_ac_DW.UnitDelay_DSTATE_my = false;

                /* End of SystemReset for SubSystem: '<S63>/EdgeRising' */

                /* SystemReset for Atomic SubSystem: '<S63>/IntegratorT Reset Enabled Limited' */
                CCCR_ac_DW.UnitDelay_DSTATE_be = 0.0F;

                /* End of SystemReset for SubSystem: '<S63>/IntegratorT Reset Enabled Limited' */
                /* End of SystemReset for SubSystem: '<S26>/CnstVoltagePhase' */
            }

            /* Outputs for IfAction SubSystem: '<S26>/CnstVoltagePhase' incorporates:
             *  ActionPort: '<S63>/Action Port'
             */
            /* RelationalOperator: '<S63>/Comparison4' incorporates:
             *  Constant: '<S82>/Constant'
             */
            rtb_Comparison5_l = (((uint32)rtb_TmpSignalConversionAtVeOB_k) ==
                                 CeOBCR_e_DC);

            /* Outputs for Atomic SubSystem: '<S63>/EdgeRising' */
            /* Logic: '<S81>/OR1' incorporates:
             *  UnitDelay: '<S81>/Unit Delay'
             */
            rtb_AND_os = !CCCR_ac_DW.UnitDelay_DSTATE_my;

            /* Update for UnitDelay: '<S81>/Unit Delay' incorporates:
             *  Constant: '<S63>/TRUE Constant2'
             */
            CCCR_ac_DW.UnitDelay_DSTATE_my = true;

            /* End of Outputs for SubSystem: '<S63>/EdgeRising' */

            /* Switch: '<S63>/Switch3' incorporates:
             *  Constant: '<S96>/Calib'
             *  Constant: '<S97>/Calib'
             *  Switch: '<S63>/Switch'
             *  Switch: '<S63>/Switch4'
             */
            if (rtb_Comparison5_l)
            {
                /* Switch: '<S63>/Switch3' incorporates:
                 *  Constant: '<S93>/Calib'
                 */
                rtb_Product1 = KeCCCR_U_MaxCurrDiff_CV_DC;

                /* Switch: '<S63>/Switch4' incorporates:
                 *  Constant: '<S95>/Calib'
                 */
                rtb_TmpSignalConversionAtVeTHMR = KeCCCR_U_MinCurrDiff_CV_DC;
                rtb_Multiplication1 = KeCCCR_U_TrgtCellVltDC;
            }
            else
            {
                /* Switch: '<S63>/Switch3' incorporates:
                 *  Constant: '<S92>/Calib'
                 */
                rtb_Product1 = KeCCCR_U_MaxCurrDiff_CV;

                /* Switch: '<S63>/Switch4' incorporates:
                 *  Constant: '<S94>/Calib'
                 */
                rtb_TmpSignalConversionAtVeTHMR = KeCCCR_U_MinCurrDiff_CV;
                rtb_Multiplication1 = KeCCCR_U_TrgtCellVlt;
            }

            /* End of Switch: '<S63>/Switch3' */

            /* Sum: '<S63>/Sum3' */
            rtb_TmpSignalConversionAtVeDCCR = rtb_Multiplication1 -
                VeCCCR_U_HV_BatVoltModMaxArbFil;

            /* Switch: '<S63>/Switch1' incorporates:
             *  Constant: '<S88>/Calib'
             *  Constant: '<S89>/Calib'
             */
            if (rtb_Comparison5_l)
            {
                rtb_Multiplication1 = KeCCCR_U_KiTermDC;
            }
            else
            {
                rtb_Multiplication1 = KeCCCR_U_KiTerm;
            }

            /* End of Switch: '<S63>/Switch1' */

            /* Product: '<S63>/Product3' */
            VeCCCR_U_Input2IntegratorV = rtb_TmpSignalConversionAtVeDCCR *
                rtb_Multiplication1;

            /* Outputs for Atomic SubSystem: '<S63>/IntegratorT Reset Enabled Limited' */
            /* Outputs for Atomic SubSystem: '<S63>/EdgeRising' */
            /* Switch: '<S84>/Switch' incorporates:
             *  Logic: '<S81>/AND'
             */
            if (rtb_AND_os)
            {
                /* Switch: '<S63>/Switch5' */
                if (rtb_Comparison5_l)
                {
                    /* Switch: '<S84>/Switch' incorporates:
                     *  Constant: '<S86>/Calib'
                     */
                    rtb_Switch3_nq = KeCCCR_I_CV_IV_DC;
                }
                else
                {
                    /* Switch: '<S84>/Switch' incorporates:
                     *  Constant: '<S85>/Calib'
                     */
                    rtb_Switch3_nq = KeCCCR_I_CV_IV;
                }

                /* End of Switch: '<S63>/Switch5' */
            }
            else
            {
                /* Switch: '<S84>/Switch' incorporates:
                 *  Constant: '<S83>/Calib'
                 *  Product: '<S84>/Division'
                 *  Product: '<S84>/Multiplication'
                 *  Sum: '<S84>/Sum//Sub'
                 *  UnitDelay: '<S84>/Unit Delay'
                 */
                rtb_Switch3_nq = (VeCCCR_U_Input2IntegratorV *
                                  HeCCCR_t_PI_ExecutionRate) +
                    CCCR_ac_DW.UnitDelay_DSTATE_be;
            }

            /* End of Switch: '<S84>/Switch' */
            /* End of Outputs for SubSystem: '<S63>/EdgeRising' */

            /* Outputs for Atomic SubSystem: '<S84>/Limiter' */
            /* Switch: '<S100>/Switch1' incorporates:
             *  RelationalOperator: '<S100>/Relational Operator'
             */
            if (rtb_Product1 >= rtb_Switch3_nq)
            {
                /* Switch: '<S99>/Switch1' */
                rtb_Product1 = rtb_Switch3_nq;
            }

            /* End of Switch: '<S100>/Switch1' */

            /* Switch: '<S100>/Switch' incorporates:
             *  RelationalOperator: '<S100>/Relational Operator1'
             */
            if (rtb_Product1 > rtb_TmpSignalConversionAtVeTHMR)
            {
                /* Switch: '<S100>/Switch' */
                VeCCCR_U_IntegratorOutputV = rtb_Product1;
            }
            else
            {
                /* Switch: '<S100>/Switch' */
                VeCCCR_U_IntegratorOutputV = rtb_TmpSignalConversionAtVeTHMR;
            }

            /* End of Switch: '<S100>/Switch' */
            /* End of Outputs for SubSystem: '<S84>/Limiter' */

            /* Update for UnitDelay: '<S84>/Unit Delay' */
            CCCR_ac_DW.UnitDelay_DSTATE_be = VeCCCR_U_IntegratorOutputV;

            /* End of Outputs for SubSystem: '<S63>/IntegratorT Reset Enabled Limited' */

            /* Switch: '<S63>/Switch2' incorporates:
             *  Constant: '<S90>/Calib'
             *  Constant: '<S91>/Calib'
             */
            if (rtb_Comparison5_l)
            {
                rtb_Multiplication1 = KeCCCR_U_KpTermDC;
            }
            else
            {
                rtb_Multiplication1 = KeCCCR_U_KpTerm;
            }

            /* End of Switch: '<S63>/Switch2' */

            /* Product: '<S63>/Product2' */
            VeCCCR_U_PTermOutput = rtb_TmpSignalConversionAtVeDCCR *
                rtb_Multiplication1;

            /* Sum: '<S63>/Sum1' */
            rtb_TmpSignalConversionAtVeTHMR = VeCCCR_U_PTermOutput +
                VeCCCR_U_IntegratorOutputV;

            /* Outputs for Atomic SubSystem: '<S63>/Limiter' */
            /* Switch: '<S99>/Switch1' incorporates:
             *  RelationalOperator: '<S99>/Relational Operator'
             */
            if (rtb_TmpSignalConversionAtVeESMR <
                    rtb_TmpSignalConversionAtVeTHMR)
            {
                /* Switch: '<S99>/Switch1' */
                rtb_Product1 = rtb_TmpSignalConversionAtVeESMR;
            }
            else
            {
                /* Switch: '<S99>/Switch1' */
                rtb_Product1 = rtb_TmpSignalConversionAtVeTHMR;
            }

            /* End of Switch: '<S99>/Switch1' */

            /* Switch: '<S99>/Switch' incorporates:
             *  Constant: '<S63>/Constant Value10'
             *  RelationalOperator: '<S99>/Relational Operator1'
             */
            if (rtb_Product1 > 0.0F)
            {
                /* Switch: '<S99>/Switch' */
                VeCCCR_I_CurrPID_Output_DragAndDrop = rtb_Product1;
            }
            else
            {
                /* Switch: '<S99>/Switch' */
                VeCCCR_I_CurrPID_Output_DragAndDrop = 0.0F;
            }

            /* End of Switch: '<S99>/Switch' */
            /* End of Outputs for SubSystem: '<S63>/Limiter' */

            /* Switch: '<S63>/Switch6' incorporates:
             *  Constant: '<S98>/Calib'
             */
            if (KeCCCR_b_ChrgCrntOvrdstp3)
            {
                /* Switch: '<S63>/Switch6' incorporates:
                 *  Constant: '<S87>/Calib'
                 */
                VeCCCR_I_ChrgCrntReqDeltaStep3 = KeCCCR_I_ChrgCrntOvrdValStp3;
            }
            else
            {
                /* Switch: '<S63>/Switch6' */
                VeCCCR_I_ChrgCrntReqDeltaStep3 =
                    VeCCCR_I_CurrPID_Output_DragAndDrop;
            }

            /* End of Switch: '<S63>/Switch6' */
            /* End of Outputs for SubSystem: '<S26>/CnstVoltagePhase' */
        }

        /* End of If: '<S26>/If' */
        /* End of Outputs for SubSystem: '<S4>/CurrRq_ChrgCompl' */
        (void)Rte_Read_VeIDCR_e_ChrgrModeStat_OBCM_Value(&tmpRead_1);
        (void)Rte_Read_VeIDCR_I_BattSide_Curr_Value(&rtb_Switch_n);

        /* Outputs for IfAction SubSystem: '<S4>/CurrRq_ChrgCompl' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Gain: '<S72>/Gain' incorporates:
         *  Inport: '<Root>/VeIDCR_I_BattSide_Curr'
         *  Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM'
         */
        VeCCCR_b_CV_Mode = CCCR_ac_B.VeCCCR_b_CV_Mode_SF;

        /* Abs: '<S27>/Abs1' incorporates:
         *  Abs: '<S27>/Abs'
         */
        rtb_TmpSignalConversionAtVeESMR = fabsf(rtb_TmpSignalConversionAtVeIDCR);

        /* RelationalOperator: '<S27>/Comparison2' incorporates:
         *  Constant: '<S126>/Calib'
         */
        rtb_TmpSignalConversionAtVeOBCR = (rtb_Switch_n <
            KeCCCR_I_MinIDCMCurrRspThr);

        /* RelationalOperator: '<S27>/Comparison5' incorporates:
         *  Constant: '<S104>/Constant'
         */
        rtb_Comparison5_l = (((uint32)VeCCCR_b_ReqZero_tmp) == CeOBCR_e_Charging);

        /* Outputs for Atomic SubSystem: '<S27>/EdgeRising' */
        /* Logic: '<S103>/OR1' incorporates:
         *  UnitDelay: '<S103>/Unit Delay'
         */
        rtb_AND_os = !CCCR_ac_DW.UnitDelay_DSTATE_pl;

        /* Update for UnitDelay: '<S103>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_pl = rtb_Comparison5_l;

        /* End of Outputs for SubSystem: '<S27>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S27>/Limiter' */
        /* Switch: '<S129>/Switch1' incorporates:
         *  Constant: '<S114>/Calib'
         *  RelationalOperator: '<S129>/Relational Operator'
         */
        if (KeCCCR_I_BatCurrMaxVal < CCCR_ac_B.TmpSignalConversionAtVeHVTR_I_S)
        {
            /* Switch: '<S135>/Switch1' */
            rtb_TmpSignalConversionAtVeBP_e = KeCCCR_I_BatCurrMaxVal;
        }
        else
        {
            /* Switch: '<S135>/Switch1' */
            rtb_TmpSignalConversionAtVeBP_e =
                CCCR_ac_B.TmpSignalConversionAtVeHVTR_I_S;
        }

        /* End of Switch: '<S129>/Switch1' */

        /* Switch: '<S129>/Switch' incorporates:
         *  Constant: '<S115>/Calib'
         *  RelationalOperator: '<S129>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeBP_e > KeCCCR_I_BatCurrMinVal)
        {
            /* Switch: '<S129>/Switch' */
            rtb_Switch_n = rtb_TmpSignalConversionAtVeBP_e;
        }
        else
        {
            /* Switch: '<S129>/Switch' */
            rtb_Switch_n = KeCCCR_I_BatCurrMinVal;
        }

        /* End of Switch: '<S129>/Switch' */
        /* End of Outputs for SubSystem: '<S27>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S27>/GradientLimiter' */
        /* Switch: '<S135>/Switch1' incorporates:
         *  UnitDelay: '<S108>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBP_e = CCCR_ac_DW.UnitDelay_DSTATE_g3;

        /* Sum: '<S108>/Sum2' */
        rtb_Switch_n -= rtb_TmpSignalConversionAtVeBP_e;

        /* Outputs for Atomic SubSystem: '<S108>/Limiter' */
        /* Switch: '<S134>/Switch1' incorporates:
         *  Constant: '<S117>/Calib'
         *  RelationalOperator: '<S134>/Relational Operator'
         */
        if (KeCCCR_I_BattCrntLimLU < rtb_Switch_n)
        {
            /* Switch: '<S134>/Switch1' */
            rtb_Switch_n = KeCCCR_I_BattCrntLimLU;
        }

        /* End of Switch: '<S134>/Switch1' */

        /* Switch: '<S134>/Switch' incorporates:
         *  Constant: '<S116>/Calib'
         *  RelationalOperator: '<S134>/Relational Operator1'
         */
        if (rtb_Switch_n <= KeCCCR_I_BattCrntLimLD)
        {
            rtb_Switch_n = KeCCCR_I_BattCrntLimLD;
        }

        /* End of Switch: '<S134>/Switch' */
        /* End of Outputs for SubSystem: '<S108>/Limiter' */

        /* Sum: '<S108>/Sum3' */
        VeCCCR_I_BatCurrAfterFilter = rtb_Switch_n +
            rtb_TmpSignalConversionAtVeBP_e;

        /* Update for UnitDelay: '<S108>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_g3 = VeCCCR_I_BatCurrAfterFilter;

        /* End of Outputs for SubSystem: '<S27>/GradientLimiter' */

        /* Sum: '<S27>/Sum3' */
        rtb_Switch_n = VeCCCR_I_TargetCurr + VeCCCR_I_BatCurrAfterFilter;

        /* Outputs for Atomic SubSystem: '<S107>/ClosedInterval' */
        /* Switch: '<S107>/Switch' incorporates:
         *  Constant: '<S119>/Calib'
         *  Logic: '<S107>/Logical2'
         *  Logic: '<S133>/Logical Operator'
         *  Product: '<S107>/Product'
         *  RelationalOperator: '<S133>/Relatonal Operator'
         *  RelationalOperator: '<S133>/Relatonal Operator1'
         */
        if ((rtb_Switch_n < (-KeCCCR_I_ErrorDeb)) || (rtb_Switch_n >
                KeCCCR_I_ErrorDeb))
        {
            /* Switch: '<S107>/Switch' */
            VeCCCR_I_ChargingErrorDebounce = rtb_Switch_n;
        }
        else
        {
            /* Switch: '<S107>/Switch' incorporates:
             *  Constant: '<S107>/Constant Value1'
             */
            VeCCCR_I_ChargingErrorDebounce = 0.0F;
        }

        /* End of Switch: '<S107>/Switch' */
        /* End of Outputs for SubSystem: '<S107>/ClosedInterval' */

        /* Switch: '<S27>/Switch' incorporates:
         *  Constant: '<S106>/Constant'
         *  RelationalOperator: '<S27>/Comparison4'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeOB_k) == CeOBCR_e_DC)
        {
            /* Switch: '<S27>/Switch' incorporates:
             *  Constant: '<S125>/Calib'
             */
            rtb_Switch_n = KeCCCR_I_LU_CurrRq_DC;
        }
        else
        {
            /* Switch: '<S27>/Switch' incorporates:
             *  Constant: '<S124>/Calib'
             */
            rtb_Switch_n = KeCCCR_I_LU_CurrRq;
        }

        /* End of Switch: '<S27>/Switch' */

        /* Product: '<S27>/Product2' incorporates:
         *  Constant: '<S122>/Calib'
         */
        VeCCCR_I_PTermOutput = VeCCCR_I_ChargingErrorDebounce * KeCCCR_I_KpTerm;

        /* Outputs for Atomic SubSystem: '<S27>/Turn Off Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S131>/EdgeFalling' */
        /* Logic: '<S137>/AND' incorporates:
         *  Logic: '<S137>/OR1'
         *  UnitDelay: '<S137>/Unit Delay'
         */
        rtb_AND_is = ((!rtb_TmpSignalConversionAtVeOBCR) &&
                      (CCCR_ac_DW.UnitDelay_DSTATE_k4));

        /* Update for UnitDelay: '<S137>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_k4 = rtb_TmpSignalConversionAtVeOBCR;

        /* End of Outputs for SubSystem: '<S131>/EdgeFalling' */

        /* Switch: '<S131>/Switch' */
        if (rtb_AND_is)
        {
            /* Switch: '<S131>/Switch' incorporates:
             *  Constant: '<S112>/Calib'
             */
            rtb_Switch1 = KeCCCR_Cnt_BattSideCurrCondDbnc;
        }
        else
        {
            /* Sum: '<S131>/Summation' incorporates:
             *  Constant: '<S131>/Constant Value'
             *  UnitDelay: '<S131>/Unit Delay'
             */
            i = ((sint32)CCCR_ac_DW.UnitDelay_DSTATE_o1) - 1;
            if ((((sint32)CCCR_ac_DW.UnitDelay_DSTATE_o1) - 1) < 0)
            {
                i = 0;
            }

            /* Switch: '<S131>/Switch' incorporates:
             *  Sum: '<S131>/Summation'
             */
            rtb_Switch1 = (uint16)i;
        }

        /* End of Switch: '<S131>/Switch' */

        /* Update for UnitDelay: '<S131>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_o1 = rtb_Switch1;

        /* Logic: '<S27>/Logical1' incorporates:
         *  Constant: '<S105>/Constant'
         *  Constant: '<S128>/Calib'
         *  Constant: '<S131>/Constant Value2'
         *  Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM'
         *  Logic: '<S131>/AND'
         *  RelationalOperator: '<S131>/Greater  Than'
         *  RelationalOperator: '<S27>/Comparison1'
         */
        rtb_TmpSignalConversionAtVeOBCR = (((rtb_TmpSignalConversionAtVeOBCR ||
            (((sint32)rtb_Switch1) > 0)) && (((uint32)tmpRead_1) ==
            CeOBCR_e_Charge_OBCM)) && (KeCCCR_b_FrzPIEnbl));

        /* End of Outputs for SubSystem: '<S27>/Turn Off Delay Sample' */

        /* Outputs for Atomic SubSystem: '<S27>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S132>/EdgeRising' */
        /* Logic: '<S138>/AND' incorporates:
         *  Logic: '<S138>/OR1'
         *  UnitDelay: '<S138>/Unit Delay'
         */
        rtb_AND_is = (rtb_TmpSignalConversionAtVeOBCR &&
                      (!CCCR_ac_DW.UnitDelay_DSTATE_jd));

        /* Update for UnitDelay: '<S138>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_jd = rtb_TmpSignalConversionAtVeOBCR;

        /* End of Outputs for SubSystem: '<S132>/EdgeRising' */

        /* Switch: '<S132>/Switch1' incorporates:
         *  Constant: '<S113>/Calib'
         *  Constant: '<S132>/Constant Value'
         *  Logic: '<S132>/OR'
         *  Logic: '<S132>/OR1'
         *  MinMax: '<S132>/Minimum'
         *  Sum: '<S132>/Summation'
         *  UnitDelay: '<S132>/Unit Delay'
         */
        if ((!rtb_TmpSignalConversionAtVeOBCR) || rtb_AND_is)
        {
            /* Switch: '<S132>/Switch1' incorporates:
             *  Constant: '<S132>/Constant Value1'
             */
            rtb_Switch1 = 0U;
        }
        else if (KeCCCR_Cnt_FrzPIDbnc < ((uint16)(((uint32)
                    CCCR_ac_DW.UnitDelay_DSTATE_et) + 1U)))
        {
            /* MinMax: '<S132>/Minimum' incorporates:
             *  Constant: '<S113>/Calib'
             *  Switch: '<S132>/Switch1'
             */
            rtb_Switch1 = KeCCCR_Cnt_FrzPIDbnc;
        }
        else
        {
            /* Switch: '<S132>/Switch1' incorporates:
             *  Constant: '<S132>/Constant Value'
             *  MinMax: '<S132>/Minimum'
             *  Sum: '<S132>/Summation'
             *  UnitDelay: '<S132>/Unit Delay'
             */
            rtb_Switch1 = (uint16)(((uint32)CCCR_ac_DW.UnitDelay_DSTATE_et) + 1U);
        }

        /* End of Switch: '<S132>/Switch1' */

        /* Logic: '<S132>/AND' incorporates:
         *  Constant: '<S113>/Calib'
         *  RelationalOperator: '<S132>/Greater  Than'
         */
        VeCCCR_b_FrzSignal = (rtb_TmpSignalConversionAtVeOBCR && (rtb_Switch1 >=
                               KeCCCR_Cnt_FrzPIDbnc));

        /* Update for UnitDelay: '<S132>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_et = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S27>/Turn On Delay Sample' */

        /* Switch: '<S27>/Switch4' */
        if (VeCCCR_b_FrzSignal)
        {
            /* Switch: '<S27>/Switch1' incorporates:
             *  Constant: '<S120>/Calib'
             *  Constant: '<S27>/Constant Value1'
             *  Constant: '<S27>/Constant Value4'
             *  RelationalOperator: '<S27>/Comparison3'
             *  UnitDelay: '<S27>/Unit Delay'
             */
            if (CCCR_ac_DW.UnitDelay_DSTATE_h > 0.0F)
            {
                rtb_VeCCCR_T_Hyst_MinCold11 = KeCCCR_I_IntegratorFrzdrain;
            }
            else
            {
                rtb_VeCCCR_T_Hyst_MinCold11 = 0.0F;
            }

            /* End of Switch: '<S27>/Switch1' */
        }
        else
        {
            rtb_VeCCCR_T_Hyst_MinCold11 = VeCCCR_I_ChargingErrorDebounce;
        }

        /* End of Switch: '<S27>/Switch4' */

        /* Product: '<S27>/Product3' incorporates:
         *  Constant: '<S121>/Calib'
         */
        VeCCCR_I_Input2Integrator = rtb_VeCCCR_T_Hyst_MinCold11 *
            KeCCCR_I_KiTerm;

        /* Outputs for Atomic SubSystem: '<S27>/IntegratorT Reset Enabled Limited' */
        /* Outputs for Atomic SubSystem: '<S27>/EdgeRising' */
        /* Switch: '<S111>/Switch' incorporates:
         *  Logic: '<S103>/AND'
         */
        if (rtb_Comparison5_l && rtb_AND_os)
        {
            /* Switch: '<S111>/Switch' incorporates:
             *  Constant: '<S27>/Constant Value26'
             */
            rtb_TmpSignalConversionAtVeDCCR = 0.0F;
        }
        else
        {
            /* Switch: '<S111>/Switch' incorporates:
             *  Constant: '<S110>/Calib'
             *  Product: '<S111>/Division'
             *  Product: '<S111>/Multiplication'
             *  Sum: '<S111>/Sum//Sub'
             *  UnitDelay: '<S111>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeDCCR = (VeCCCR_I_Input2Integrator *
                HeCCCR_t_PI_ExecutionRate) + CCCR_ac_DW.UnitDelay_DSTATE_ft;
        }

        /* End of Switch: '<S111>/Switch' */
        /* End of Outputs for SubSystem: '<S27>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S111>/Limiter' */
        /* Switch: '<S136>/Switch1' incorporates:
         *  Abs: '<S27>/Abs1'
         *  RelationalOperator: '<S136>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeESMR < rtb_TmpSignalConversionAtVeDCCR)
        {
            /* UnitDelay: '<S109>/Unit Delay' */
            rtb_TmpSignalConversionAtVeBP_i = rtb_TmpSignalConversionAtVeESMR;
        }
        else
        {
            /* UnitDelay: '<S109>/Unit Delay' */
            rtb_TmpSignalConversionAtVeBP_i = rtb_TmpSignalConversionAtVeDCCR;
        }

        /* End of Switch: '<S136>/Switch1' */

        /* Switch: '<S136>/Switch' incorporates:
         *  Product: '<S27>/Product'
         *  RelationalOperator: '<S136>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeBP_i > (-rtb_TmpSignalConversionAtVeESMR))
        {
            /* Switch: '<S136>/Switch' */
            VeCCCR_I_IntegratorOutput = rtb_TmpSignalConversionAtVeBP_i;
        }
        else
        {
            /* Switch: '<S136>/Switch' */
            VeCCCR_I_IntegratorOutput = -rtb_TmpSignalConversionAtVeESMR;
        }

        /* End of Switch: '<S136>/Switch' */
        /* End of Outputs for SubSystem: '<S111>/Limiter' */

        /* Update for UnitDelay: '<S111>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_ft = VeCCCR_I_IntegratorOutput;

        /* End of Outputs for SubSystem: '<S27>/IntegratorT Reset Enabled Limited' */

        /* Sum: '<S27>/Sum1' */
        rtb_TmpSignalConversionAtVeESMR = VeCCCR_I_PTermOutput +
            VeCCCR_I_IntegratorOutput;

        /* Outputs for Atomic SubSystem: '<S27>/Limiter2' */
        /* Switch: '<S130>/Switch1' incorporates:
         *  RelationalOperator: '<S130>/Relational Operator'
         */
        if (VeCCCR_I_HWBounds < rtb_TmpSignalConversionAtVeESMR)
        {
            /* UnitDelay: '<S109>/Unit Delay' */
            rtb_TmpSignalConversionAtVeBP_i = VeCCCR_I_HWBounds;
        }
        else
        {
            /* UnitDelay: '<S109>/Unit Delay' */
            rtb_TmpSignalConversionAtVeBP_i = rtb_TmpSignalConversionAtVeESMR;
        }

        /* End of Switch: '<S130>/Switch1' */

        /* Switch: '<S130>/Switch' incorporates:
         *  Constant: '<S27>/Constant Value10'
         *  RelationalOperator: '<S130>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeBP_i > 0.0F)
        {
            /* Switch: '<S130>/Switch' */
            VeCCCR_I_CurrPID_Output = rtb_TmpSignalConversionAtVeBP_i;
        }
        else
        {
            /* Switch: '<S130>/Switch' */
            VeCCCR_I_CurrPID_Output = 0.0F;
        }

        /* End of Switch: '<S130>/Switch' */
        /* End of Outputs for SubSystem: '<S27>/Limiter2' */

        /* Switch: '<S27>/Switch2' incorporates:
         *  Constant: '<S27>/Constant Value2'
         */
        if (VeCCCR_b_ReqZero)
        {
            rtb_VeCCCR_T_Hyst_MinCold11 = 0.0F;
        }
        else
        {
            rtb_VeCCCR_T_Hyst_MinCold11 = VeCCCR_I_CurrPID_Output;
        }

        /* End of Switch: '<S27>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S27>/GradientLimiter1' */
        /* Sum: '<S109>/Sum2' incorporates:
         *  UnitDelay: '<S109>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeESMR = rtb_VeCCCR_T_Hyst_MinCold11 -
            CCCR_ac_DW.UnitDelay_DSTATE_g;

        /* Outputs for Atomic SubSystem: '<S109>/Limiter' */
        /* Switch: '<S135>/Switch1' incorporates:
         *  RelationalOperator: '<S135>/Relational Operator'
         */
        if (rtb_Switch_n < rtb_TmpSignalConversionAtVeESMR)
        {
            /* Switch: '<S135>/Switch1' */
            rtb_TmpSignalConversionAtVeBP_e = rtb_Switch_n;
        }
        else
        {
            /* Switch: '<S135>/Switch1' */
            rtb_TmpSignalConversionAtVeBP_e = rtb_TmpSignalConversionAtVeESMR;
        }

        /* End of Switch: '<S135>/Switch1' */

        /* Switch: '<S135>/Switch' incorporates:
         *  Constant: '<S123>/Calib'
         *  RelationalOperator: '<S135>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeBP_e <= KeCCCR_I_LD_CurrRq)
        {
            rtb_TmpSignalConversionAtVeBP_e = KeCCCR_I_LD_CurrRq;
        }

        /* End of Switch: '<S135>/Switch' */
        /* End of Outputs for SubSystem: '<S109>/Limiter' */

        /* Sum: '<S109>/Sum3' incorporates:
         *  UnitDelay: '<S109>/Unit Delay'
         */
        rtb_Switch_n = rtb_TmpSignalConversionAtVeBP_e +
            CCCR_ac_DW.UnitDelay_DSTATE_g;

        /* Update for UnitDelay: '<S109>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch_n;

        /* End of Outputs for SubSystem: '<S27>/GradientLimiter1' */

        /* Merge: '<S4>/Merge13' incorporates:
         *  Constant: '<S430>/Constant'
         *  SignalConversion generated from: '<S7>/MaxCellVoltRchd_BST'
         */
        CCCR_ac_B.Merge13 = CCCR_ac_ConstB.Constant;

        /* Merge: '<S4>/Merge6' incorporates:
         *  DataStoreWrite: '<S327>/Data Store Write1'
         *  SignalConversion generated from: '<S7>/PwrLevSet'
         *  Switch: '<S327>/Switch4'
         */
        CCCR_ac_B.Merge6 = CCCR_ac_DW.NeCCCR_e_PwrLvlSet;

        /* Merge: '<S4>/Merge19' incorporates:
         *  SignalConversion generated from: '<S7>/SOC_LvlSet_80'
         */
        CCCR_ac_B.Merge19 = CCCR_ac_B.AND_c;

        /* Merge: '<S4>/Merge1' incorporates:
         *  SignalConversion generated from: '<S7>/VoltRq'
         */
        CCCR_ac_B.Merge1 = CCCR_ac_B.VoltRq;

        /* Merge: '<S4>/Merge8' incorporates:
         *  Gain: '<S14>/Gain'
         */
        CCCR_ac_B.Merge8 = VeCCCR_I_MaxAllwCurr;

        /* Merge: '<S4>/Merge18' incorporates:
         *  Gain: '<S15>/Gain'
         */
        CCCR_ac_B.Merge18 = CCCR_ac_B.OutportBufferForPwrLev_Lv5;

        /* Merge: '<S4>/Merge5' incorporates:
         *  Gain: '<S16>/Gain'
         */
        CCCR_ac_B.Merge5 = rtb_VeCCCR_b_PwrLevActive;

        /* Merge: '<S4>/Merge7' incorporates:
         *  Gain: '<S17>/Gain'
         */
        CCCR_ac_B.Merge7 = rtb_TmpSignalConversionAtVeIDCR;

        /* Merge: '<S4>/Merge9' incorporates:
         *  Gain: '<S18>/Gain'
         */
        CCCR_ac_B.Merge9 = rtb_TmpSignalConversionAtVeOFCR;

        /* Merge: '<S4>/Merge10' incorporates:
         *  Gain: '<S19>/Gain'
         */
        CCCR_ac_B.Merge10 = rtb_TmpSignalConversionAtVeID_k;

        /* Merge: '<S4>/Merge2' incorporates:
         *  Gain: '<S20>/Gain'
         */
        CCCR_ac_B.Merge2 = CCCR_ac_B.CurrRq;

        /* Merge: '<S4>/Merge14' incorporates:
         *  Gain: '<S21>/Gain'
         */
        CCCR_ac_B.Merge14 = CCCR_ac_B.Switch[0];

        /* Merge: '<S4>/Merge15' incorporates:
         *  Gain: '<S22>/Gain'
         */
        CCCR_ac_B.Merge15 = CCCR_ac_B.Product8;

        /* Merge: '<S4>/Merge16' incorporates:
         *  Gain: '<S23>/Gain'
         */
        CCCR_ac_B.Merge16 = CCCR_ac_B.Product9;

        /* Merge: '<S4>/Merge17' incorporates:
         *  Gain: '<S24>/Gain'
         */
        CCCR_ac_B.Merge17 = CCCR_ac_B.Product10;

        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S127>/Calib'
         *  Inport: '<Root>/VeDCCR_b_V2G_Perf_Inhibited'
         *  Switch: '<S27>/Switch6'
         */
        if (rtb_TmpSignalConversionAtVeDC_d)
        {
            (void)Rte_Read_VeDCCR_b_V2G_Perf_Inhibited_Value(&tmpRead_b);

            /* Switch: '<S7>/Switch2' incorporates:
             *  Inport: '<Root>/VeDCCR_b_V2G_Perf_Inhibited'
             */
            if (tmpRead_b)
            {
                /* Merge: '<S4>/Merge' incorporates:
                 *  Constant: '<S13>/Calib'
                 *  MinMax: '<S7>/MinMax1'
                 *  Switch: '<S7>/Switch2'
                 */
                CCCR_ac_B.Merge = fminf(KeCCCR_I_V2GPerfLimChrgCurr,
                                        VeCCCR_I_TargetCurr);
            }
            else
            {
                /* Merge: '<S4>/Merge' incorporates:
                 *  Switch: '<S7>/Switch2'
                 */
                CCCR_ac_B.Merge = VeCCCR_I_TargetCurr;
            }

            /* End of Switch: '<S7>/Switch2' */
        }
        else if (KeCCCR_b_ChrgCrntOvrd)
        {
            /* Switch: '<S27>/Switch6' incorporates:
             *  Constant: '<S118>/Calib'
             *  Merge: '<S4>/Merge'
             */
            CCCR_ac_B.Merge = KeCCCR_I_ChrgCrntOvrdVal;
        }
        else
        {
            /* Merge: '<S4>/Merge' incorporates:
             *  Switch: '<S27>/Switch6'
             */
            CCCR_ac_B.Merge = rtb_Switch_n;
        }

        /* End of Switch: '<S7>/Switch' */

        /* Update for UnitDelay: '<S194>/Unit Delay' incorporates:
         *  Rounding: '<S194>/Rounding2'
         */
        CCCR_ac_DW.UnitDelay_DSTATE = tmpRead_8;

        /* Update for UnitDelay: '<S194>/Unit Delay2' */
        CCCR_ac_DW.UnitDelay2_DSTATE = VeCCCR_T_Hyst_Cold;

        /* Update for UnitDelay: '<S194>/Unit Delay4' incorporates:
         *  DataStoreRead: '<S194>/Data Store Read2'
         */
        CCCR_ac_DW.UnitDelay4_DSTATE_i = CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_Cold;

        /* Update for UnitDelay: '<S194>/Unit Delay1' incorporates:
         *  DataStoreRead: '<S194>/Data Store Read1'
         */
        CCCR_ac_DW.UnitDelay1_DSTATE_h = CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_Cold;

        /* Update for UnitDelay: '<S195>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_f = tmpRead_8;

        /* Update for UnitDelay: '<S195>/Unit Delay7' */
        CCCR_ac_DW.UnitDelay7_DSTATE = VeCCCR_T_Hyst_Hot;

        /* Update for UnitDelay: '<S195>/Unit Delay5' incorporates:
         *  DataStoreRead: '<S195>/Data Store Read1'
         */
        CCCR_ac_DW.UnitDelay5_DSTATE = CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_Hot;

        /* Update for UnitDelay: '<S195>/Unit Delay6' incorporates:
         *  DataStoreRead: '<S195>/Data Store Read'
         */
        CCCR_ac_DW.UnitDelay6_DSTATE_o = CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_Hot;

        /* Update for UnitDelay: '<S223>/Unit Delay' incorporates:
         *  Rounding: '<S223>/Rounding2'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_a = rtb_VeCCCR_T_Hyst_Debug11;

        /* Update for UnitDelay: '<S223>/Unit Delay2' */
        CCCR_ac_DW.UnitDelay2_DSTATE_j = VeCCCR_T_Hyst_MaxCold;

        /* Update for UnitDelay: '<S223>/Unit Delay4' incorporates:
         *  DataStoreRead: '<S223>/Data Store Read2'
         */
        CCCR_ac_DW.UnitDelay4_DSTATE_f =
            CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MaxCold;

        /* Update for UnitDelay: '<S223>/Unit Delay1' incorporates:
         *  DataStoreRead: '<S223>/Data Store Read1'
         */
        CCCR_ac_DW.UnitDelay1_DSTATE_e =
            CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MaxCold;

        /* Update for UnitDelay: '<S224>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_o = rtb_VeCCCR_T_Hyst_Debug11;

        /* Update for UnitDelay: '<S224>/Unit Delay7' */
        CCCR_ac_DW.UnitDelay7_DSTATE_f = VeCCCR_T_Hyst_MaxHot;

        /* Update for UnitDelay: '<S224>/Unit Delay5' incorporates:
         *  DataStoreRead: '<S224>/Data Store Read1'
         */
        CCCR_ac_DW.UnitDelay5_DSTATE_m =
            CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MaxHot;

        /* Update for UnitDelay: '<S224>/Unit Delay6' incorporates:
         *  DataStoreRead: '<S224>/Data Store Read'
         */
        CCCR_ac_DW.UnitDelay6_DSTATE_i =
            CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MaxHot;

        /* Update for UnitDelay: '<S252>/Unit Delay' incorporates:
         *  Rounding: '<S252>/Rounding2'
         */
        CCCR_ac_DW.UnitDelay_DSTATE_c = rtb_VeCCCR_T_Hyst_MaxCold11;

        /* Update for UnitDelay: '<S252>/Unit Delay2' */
        CCCR_ac_DW.UnitDelay2_DSTATE_h = VeCCCR_T_Hyst_MinCold;

        /* Update for UnitDelay: '<S252>/Unit Delay4' incorporates:
         *  DataStoreRead: '<S252>/Data Store Read2'
         */
        CCCR_ac_DW.UnitDelay4_DSTATE_iy =
            CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MinCold;

        /* Update for UnitDelay: '<S252>/Unit Delay1' incorporates:
         *  DataStoreRead: '<S252>/Data Store Read1'
         */
        CCCR_ac_DW.UnitDelay1_DSTATE_i =
            CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MinCold;

        /* Update for UnitDelay: '<S253>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_m = rtb_VeCCCR_T_Hyst_MaxCold11;

        /* Update for UnitDelay: '<S253>/Unit Delay7' */
        CCCR_ac_DW.UnitDelay7_DSTATE_m = VeCCCR_T_Hyst_MinHot;

        /* Update for UnitDelay: '<S253>/Unit Delay5' incorporates:
         *  DataStoreRead: '<S253>/Data Store Read1'
         */
        CCCR_ac_DW.UnitDelay5_DSTATE_c =
            CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MinHot;

        /* Update for UnitDelay: '<S253>/Unit Delay6' incorporates:
         *  DataStoreRead: '<S253>/Data Store Read'
         */
        CCCR_ac_DW.UnitDelay6_DSTATE_c =
            CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MinHot;

        /* Update for UnitDelay: '<S183>/Unit Delay4' incorporates:
         *  Constant: '<S181>/Calib'
         *  RelationalOperator: '<S183>/Comparison1'
         */
        CCCR_ac_DW.UnitDelay4_DSTATE_a = (KeCCCR_t_Time4AvgCurrCalc <
            rtb_TmpSignalConversionAtVeBPCR);

        /* Update for UnitDelay: '<S183>/Unit Delay6' */
        CCCR_ac_DW.UnitDelay6_DSTATE = VeCCCR_I_ChrgSysStatTestSig2;

        /* Update for UnitDelay: '<S183>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_mi = rtb_TmpSignalConversionAtVeBP_f;

        /* Update for Atomic SubSystem: '<S7>/ChrgComplDet' */
        CCCR_ac_ChrgComplDet_Update();

        /* End of Update for SubSystem: '<S7>/ChrgComplDet' */

        /* Update for UnitDelay: '<S26>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_b = VeCCCR_I_ChrgCrntReqDeltaStep3;

        /* Update for UnitDelay: '<S26>/Unit Delay1' */
        CCCR_ac_DW.UnitDelay1_DSTATE_b = VeCCCR_I_MaxAllwCurr;

        /* Update for UnitDelay: '<S27>/Unit Delay' */
        CCCR_ac_DW.UnitDelay_DSTATE_h = VeCCCR_I_IntegratorOutput;

        /* End of Outputs for SubSystem: '<S4>/CurrRq_ChrgCompl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S4>/CurrRq_ChrgCompl_Init' incorporates:
         *  ActionPort: '<S8>/Action Port'
         */
        /* Merge: '<S4>/Merge' incorporates:
         *  Constant: '<S8>/Const7'
         *  SignalConversion generated from: '<S8>/CurrRq'
         */
        CCCR_ac_B.Merge = 0.0F;

        /* Merge: '<S4>/Merge1' incorporates:
         *  Constant: '<S8>/Const8'
         *  SignalConversion generated from: '<S8>/VoltRq'
         */
        CCCR_ac_B.Merge1 = 0.0F;

        /* Merge: '<S4>/Merge2' incorporates:
         *  Constant: '<S8>/Const2'
         *  SignalConversion generated from: '<S8>/I_Target'
         */
        CCCR_ac_B.Merge2 = 0.0F;

        /* SignalConversion generated from: '<S8>/ChrgCmplte' incorporates:
         *  Constant: '<S8>/Const9'
         */
        CCCR_ac_B.Merge3 = false;

        /* SignalConversion generated from: '<S8>/HVBattBalReq' incorporates:
         *  Constant: '<S8>/Const11'
         *  Merge: '<S4>/Merge4'
         */
        CCCR_ac_B.Merge4 = CeOBCR_e_NoRequest;

        /* Merge: '<S4>/Merge5' incorporates:
         *  Constant: '<S8>/Const3'
         *  SignalConversion generated from: '<S8>/PwrLevActive'
         */
        CCCR_ac_B.Merge5 = false;

        /* Merge: '<S4>/Merge6' incorporates:
         *  Constant: '<S8>/Const94'
         *  SignalConversion generated from: '<S8>/PwrLevSet'
         */
        CCCR_ac_B.Merge6 = CeOBCR_e_PwrLimReq_SNA;

        /* Merge: '<S4>/Merge7' incorporates:
         *  Constant: '<S8>/Const1'
         *  SignalConversion generated from: '<S8>/ChrgTypeHWLim'
         */
        CCCR_ac_B.Merge7 = 0.0F;

        /* Merge: '<S4>/Merge8' incorporates:
         *  Constant: '<S8>/Const66'
         *  SignalConversion generated from: '<S8>/MaxAllowedCurr'
         */
        CCCR_ac_B.Merge8 = 0.0F;

        /* Merge: '<S4>/Merge9' incorporates:
         *  Constant: '<S8>/Const4'
         *  SignalConversion generated from: '<S8>/HWCurrentBound'
         */
        CCCR_ac_B.Merge9 = 0.0F;

        /* Merge: '<S4>/Merge10' incorporates:
         *  Constant: '<S8>/Const5'
         *  SignalConversion generated from: '<S8>/PwrLevCurrent'
         */
        CCCR_ac_B.Merge10 = 0.0F;

        /* SignalConversion generated from: '<S8>/BattPckVoltRchd_BST' incorporates:
         *  Constant: '<S8>/Const79'
         *  Merge: '<S4>/Merge11'
         */
        CCCR_ac_B.Merge11 = CeOBCR_e_BattPckVolt_NotReached;

        /* SignalConversion generated from: '<S8>/SOCRchd_BST' incorporates:
         *  Constant: '<S8>/Const80'
         *  Merge: '<S4>/Merge12'
         */
        CCCR_ac_B.Merge12 = CeOBCR_e_SOC_NotReached;

        /* Merge: '<S4>/Merge13' incorporates:
         *  Constant: '<S8>/Const83'
         *  SignalConversion generated from: '<S8>/MaxCellVoltRchd_BST'
         */
        CCCR_ac_B.Merge13 = CeOBCR_e_MaxCellVolt_NotReached;

        /* Merge: '<S4>/Merge14' incorporates:
         *  Constant: '<S8>/Const84'
         *  SignalConversion generated from: '<S8>/PwrLev1'
         */
        CCCR_ac_B.Merge14 = 0.0F;

        /* Merge: '<S4>/Merge15' incorporates:
         *  Constant: '<S8>/Const85'
         *  SignalConversion generated from: '<S8>/PwrLev2'
         */
        CCCR_ac_B.Merge15 = 0.0F;

        /* Merge: '<S4>/Merge16' incorporates:
         *  Constant: '<S8>/Const86'
         *  SignalConversion generated from: '<S8>/PwrLev3'
         */
        CCCR_ac_B.Merge16 = 0.0F;

        /* Merge: '<S4>/Merge17' incorporates:
         *  Constant: '<S8>/Const87'
         *  SignalConversion generated from: '<S8>/PwrLev4'
         */
        CCCR_ac_B.Merge17 = 0.0F;

        /* Merge: '<S4>/Merge18' incorporates:
         *  Constant: '<S8>/Const88'
         *  SignalConversion generated from: '<S8>/PwrLev5'
         */
        CCCR_ac_B.Merge18 = 0.0F;

        /* Merge: '<S4>/Merge19' incorporates:
         *  Constant: '<S8>/Const6'
         *  SignalConversion generated from: '<S8>/SOC_LvlSet_80'
         */
        CCCR_ac_B.Merge19 = false;

        /* End of Outputs for SubSystem: '<S4>/CurrRq_ChrgCompl_Init' */
    }

    /* End of If: '<S4>/If' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev1' incorporates:
     *  Gain: '<S501>/Gain'
     *  SignalConversion generated from: '<S1>/Output_Proc_VeCCCR_P_PLS_PwrLev1'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev1_Value(CCCR_ac_B.Merge14);

    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev2' incorporates:
     *  Gain: '<S502>/Gain'
     *  SignalConversion generated from: '<S1>/Output_Proc_VeCCCR_P_PLS_PwrLev2'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev2_Value(CCCR_ac_B.Merge15);

    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev3' incorporates:
     *  Gain: '<S503>/Gain'
     *  SignalConversion generated from: '<S1>/Output_Proc_VeCCCR_P_PLS_PwrLev3'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev3_Value(CCCR_ac_B.Merge16);

    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev4' incorporates:
     *  Gain: '<S504>/Gain'
     *  SignalConversion generated from: '<S1>/Output_Proc_VeCCCR_P_PLS_PwrLev4'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev4_Value(CCCR_ac_B.Merge17);

    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev5' incorporates:
     *  Gain: '<S505>/Gain'
     *  SignalConversion generated from: '<S1>/Output_Proc_VeCCCR_P_PLS_PwrLev5'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev5_Value(CCCR_ac_B.Merge18);

    /* Outport: '<Root>/VeCCCR_e_PwrLevSet' incorporates:
     *  DataTypeConversion: '<S495>/DataTypeConversion'
     *  Merge: '<S4>/Merge6'
     *  SignalConversion generated from: '<S1>/Output_Proc_VeCCCR_e_PwrLevSet'
     */
    (void)Rte_Write_VeCCCR_e_PwrLevSet_Value(CCCR_ac_B.Merge6);

    /* Outport: '<Root>/VeCCCR_I_BattCommandedCurr' incorporates:
     *  Gain: '<S507>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_I_BattCommandedCurr'
     */
    (void)Rte_Write_VeCCCR_I_BattCommandedCurr_Value(CCCR_ac_B.Merge2);

    /* Outport: '<Root>/VeCCCR_I_ChrgCrntReqDelta' incorporates:
     *  Gain: '<S500>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_I_ChrgCrntReqDelta'
     */
    (void)Rte_Write_VeCCCR_I_ChrgCrntReqDelta_Value(CCCR_ac_B.Merge);

    /* Outport: '<Root>/VeCCCR_I_ChrgTypeHWLim' incorporates:
     *  Gain: '<S499>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_I_ChrgTypeHWLim'
     */
    (void)Rte_Write_VeCCCR_I_ChrgTypeHWLim_Value(CCCR_ac_B.Merge7);

    /* Outport: '<Root>/VeCCCR_I_HWCurrentBound' incorporates:
     *  Gain: '<S510>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_I_HWCurrentBound'
     */
    (void)Rte_Write_VeCCCR_I_HWCurrentBound_Value(CCCR_ac_B.Merge9);

    /* Outport: '<Root>/VeCCCR_I_MaxAllowedCurr' incorporates:
     *  Gain: '<S509>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_I_MaxAllowedCurr'
     */
    (void)Rte_Write_VeCCCR_I_MaxAllowedCurr_Value(CCCR_ac_B.Merge8);

    /* Outport: '<Root>/VeCCCR_I_PLS_ReducedCurr' incorporates:
     *  Gain: '<S511>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_I_PLS_ReducedCurr'
     */
    (void)Rte_Write_VeCCCR_I_PLS_ReducedCurr_Value(CCCR_ac_B.Merge10);

    /* Outport: '<Root>/VeCCCR_U_VoltRq' incorporates:
     *  Gain: '<S506>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_U_VoltRq'
     */
    (void)Rte_Write_VeCCCR_U_VoltRq_Value(CCCR_ac_B.Merge1);

    /* Outport: '<Root>/VeCCCR_b_ChrgCmplteCondtnMet' incorporates:
     *  Gain: '<S497>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_b_ChrgCmplteCondtnMet'
     */
    (void)Rte_Write_VeCCCR_b_ChrgCmplteCondtnMet_Value(CCCR_ac_B.Merge3);

    /* Outport: '<Root>/VeCCCR_b_PwrLevActive' incorporates:
     *  Gain: '<S508>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_b_PwrLevActive'
     */
    (void)Rte_Write_VeCCCR_b_PwrLevActive_Value(CCCR_ac_B.Merge5);

    /* Outport: '<Root>/VeCCCR_b_SOC_LvlSet_80' incorporates:
     *  Gain: '<S498>/Gain'
     *  SignalConversion generated from: '<S1>/VeCCCR_b_SOC_LvlSet_80'
     */
    (void)Rte_Write_VeCCCR_b_SOC_LvlSet_80_Value(CCCR_ac_B.Merge19);

    /* Outport: '<Root>/VeCCCR_e_BattPckVoltRchd_BST' incorporates:
     *  DataTypeConversion: '<S496>/DataTypeConversion'
     *  Merge: '<S4>/Merge11'
     *  SignalConversion generated from: '<S1>/VeCCCR_e_BattPckVoltRchd_BST'
     */
    (void)Rte_Write_VeCCCR_e_BattPckVoltRchd_BST_Value(CCCR_ac_B.Merge11);

    /* Outport: '<Root>/VeCCCR_e_HVBattBalReq' incorporates:
     *  DataTypeConversion: '<S492>/DataTypeConversion'
     *  Merge: '<S4>/Merge4'
     *  SignalConversion generated from: '<S1>/VeCCCR_e_HVBattBalReq'
     */
    (void)Rte_Write_VeCCCR_e_HVBattBalReq_Value(CCCR_ac_B.Merge4);

    /* Outport: '<Root>/VeCCCR_e_MaxCellVoltRchd_BST' incorporates:
     *  DataTypeConversion: '<S494>/DataTypeConversion'
     *  Merge: '<S4>/Merge13'
     *  SignalConversion generated from: '<S1>/VeCCCR_e_MaxCellVoltRchd_BST'
     */
    (void)Rte_Write_VeCCCR_e_MaxCellVoltRchd_BST_Value(CCCR_ac_B.Merge13);

    /* Outport: '<Root>/VeCCCR_e_SOCRchd_BST' incorporates:
     *  DataTypeConversion: '<S493>/DataTypeConversion'
     *  Merge: '<S4>/Merge12'
     *  SignalConversion generated from: '<S1>/VeCCCR_e_SOCRchd_BST'
     */
    (void)Rte_Write_VeCCCR_e_SOCRchd_BST_Value(CCCR_ac_B.Merge12);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CCCR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CCCR_FUNC

FUNC(void, CCCR_CODE) CCCR_PwrOff(void)
{

#if Rte_SysCon_Variant_CCCR_FUNC

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/CCCR_PwrOff' */
    /* Outport: '<Root>/NeCCCR_P_PLSMaxPower_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_P_PLSMaxPower'
     */
    (void)Rte_Write_NeCCCR_P_PLSMaxPower_NeCCCR_P_PLSMaxPower
        (CCCR_ac_DW.NeCCCR_P_PLSMaxPower);

    /* Outport: '<Root>/NeCCCR_b_FirstDecrFlag_Cold_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstDecrFlag_Cold'
     */
    (void)Rte_Write_NeCCCR_b_FirstDecrFlag_Cold_NeCCCR_b_FirstDecrFlag_Cold
        (CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_Cold);

    /* Outport: '<Root>/NeCCCR_b_FirstDecrFlag_Hot_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstDecrFlag_Hot'
     */
    (void)Rte_Write_NeCCCR_b_FirstDecrFlag_Hot_NeCCCR_b_FirstDecrFlag_Hot
        (CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_Hot);

    /* Outport: '<Root>/NeCCCR_b_FirstDecrFlag_MaxCold_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstDecrFlag_MaxCold'
     */
    (void)
        Rte_Write_NeCCCR_b_FirstDecrFlag_MaxCold_NeCCCR_b_FirstDecrFlag_MaxCold
        (CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MaxCold);

    /* Outport: '<Root>/NeCCCR_b_FirstDecrFlag_MaxHot_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstDecrFlag_MaxHot'
     */
    (void)Rte_Write_NeCCCR_b_FirstDecrFlag_MaxHot_NeCCCR_b_FirstDecrFlag_MaxHot
        (CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MaxHot);

    /* Outport: '<Root>/NeCCCR_b_FirstDecrFlag_MinCold_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstDecrFlag_MinCold'
     */
    (void)
        Rte_Write_NeCCCR_b_FirstDecrFlag_MinCold_NeCCCR_b_FirstDecrFlag_MinCold
        (CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MinCold);

    /* Outport: '<Root>/NeCCCR_b_FirstDecrFlag_MinHot_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstDecrFlag_MinHot'
     */
    (void)Rte_Write_NeCCCR_b_FirstDecrFlag_MinHot_NeCCCR_b_FirstDecrFlag_MinHot
        (CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MinHot);

    /* Outport: '<Root>/NeCCCR_b_FirstIncrFlag_Cold_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstIncrFlag_Cold'
     */
    (void)Rte_Write_NeCCCR_b_FirstIncrFlag_Cold_NeCCCR_b_FirstIncrFlag_Cold
        (CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_Cold);

    /* Outport: '<Root>/NeCCCR_b_FirstIncrFlag_Hot_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstIncrFlag_Hot'
     */
    (void)Rte_Write_NeCCCR_b_FirstIncrFlag_Hot_NeCCCR_b_FirstIncrFlag_Hot
        (CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_Hot);

    /* Outport: '<Root>/NeCCCR_b_FirstIncrFlag_MaxCold_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstIncrFlag_MaxCold'
     */
    (void)
        Rte_Write_NeCCCR_b_FirstIncrFlag_MaxCold_NeCCCR_b_FirstIncrFlag_MaxCold
        (CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MaxCold);

    /* Outport: '<Root>/NeCCCR_b_FirstIncrFlag_MaxHot_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstIncrFlag_MaxHot'
     */
    (void)Rte_Write_NeCCCR_b_FirstIncrFlag_MaxHot_NeCCCR_b_FirstIncrFlag_MaxHot
        (CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MaxHot);

    /* Outport: '<Root>/NeCCCR_b_FirstIncrFlag_MinCold_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstIncrFlag_MinCold'
     */
    (void)
        Rte_Write_NeCCCR_b_FirstIncrFlag_MinCold_NeCCCR_b_FirstIncrFlag_MinCold
        (CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MinCold);

    /* Outport: '<Root>/NeCCCR_b_FirstIncrFlag_MinHot_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeCCCR_b_FirstIncrFlag_MinHot'
     */
    (void)Rte_Write_NeCCCR_b_FirstIncrFlag_MinHot_NeCCCR_b_FirstIncrFlag_MinHot
        (CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MinHot);

    /* Outport: '<Root>/NeCCCR_e_PwrLvlSet_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeOBCR_e_PwrLvlSet'
     */
    (void)Rte_Write_NeCCCR_e_PwrLvlSet_NeCCCR_e_PwrLvlSet
        (CCCR_ac_DW.NeCCCR_e_PwrLvlSet);

    /* End of Outputs for SubSystem: '<Root>/CCCR_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, CCCR_CODE) CCCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CCCR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* Outputs for Atomic SubSystem: '<S513>/Subsystem' */
#if Rte_SysCon_Variant_CCCR_FUNC

    /* Outputs for Atomic SubSystem: '<S514>/FUNC' */
    /* Outputs for Function Call SubSystem: '<S3>/DSM_Init' */
    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstIncrFlag_MinHot' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstIncrFlag_MinHot_PM_In'
     */
    (void)
        Rte_Read_NeCCCR_b_FirstIncrFlag_MinHot_Rx_NeCCCR_b_FirstIncrFlag_MinHot(
        &CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MinHot);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstIncrFlag_MinCold' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstIncrFlag_MinCold_PM_In'
     */
    (void)
        Rte_Read_NeCCCR_b_FirstIncrFlag_MinCold_Rx_NeCCCR_b_FirstIncrFlag_MinCold
        (&CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MinCold);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstIncrFlag_MaxHot' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstIncrFlag_MaxHot_PM_In'
     */
    (void)
        Rte_Read_NeCCCR_b_FirstIncrFlag_MaxHot_Rx_NeCCCR_b_FirstIncrFlag_MaxHot(
        &CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MaxHot);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstIncrFlag_MaxCold' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstIncrFlag_MaxCold_PM_In'
     */
    (void)
        Rte_Read_NeCCCR_b_FirstIncrFlag_MaxCold_Rx_NeCCCR_b_FirstIncrFlag_MaxCold
        (&CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_MaxCold);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstIncrFlag_Hot' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstIncrFlag_Hot_PM_In'
     */
    (void)Rte_Read_NeCCCR_b_FirstIncrFlag_Hot_Rx_NeCCCR_b_FirstIncrFlag_Hot
        (&CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_Hot);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstIncrFlag_Cold' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstIncrFlag_Cold_PM_In'
     */
    (void)Rte_Read_NeCCCR_b_FirstIncrFlag_Cold_Rx_NeCCCR_b_FirstIncrFlag_Cold
        (&CCCR_ac_DW.NeCCCR_b_FirstIncrFlag_Cold);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstDecrFlag_MinHot' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstDecrFlag_MinHot_PM_In'
     */
    (void)
        Rte_Read_NeCCCR_b_FirstDecrFlag_MinHot_Rx_NeCCCR_b_FirstDecrFlag_MinHot(
        &CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MinHot);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstDecrFlag_MinCold' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstDecrFlag_MinCold_PM_In'
     */
    (void)
        Rte_Read_NeCCCR_b_FirstDecrFlag_MinCold_Rx_NeCCCR_b_FirstDecrFlag_MinCold
        (&CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MinCold);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstDecrFlag_MaxHot' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstDecrFlag_MaxHot_PM_In'
     */
    (void)
        Rte_Read_NeCCCR_b_FirstDecrFlag_MaxHot_Rx_NeCCCR_b_FirstDecrFlag_MaxHot(
        &CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MaxHot);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstDecrFlag_MaxCold' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstDecrFlag_MaxCold_PM_In'
     */
    (void)
        Rte_Read_NeCCCR_b_FirstDecrFlag_MaxCold_Rx_NeCCCR_b_FirstDecrFlag_MaxCold
        (&CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_MaxCold);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstDecrFlag_Hot' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstDecrFlag_Hot_PM_In'
     */
    (void)Rte_Read_NeCCCR_b_FirstDecrFlag_Hot_Rx_NeCCCR_b_FirstDecrFlag_Hot
        (&CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_Hot);

    /* DataStoreWrite: '<S512>/NeOBCR_b_FirstDecrFlag_Cold' incorporates:
     *  Inport: '<Root>/NeCCCR_b_FirstDecrFlag_Cold_PM_In'
     */
    (void)Rte_Read_NeCCCR_b_FirstDecrFlag_Cold_Rx_NeCCCR_b_FirstDecrFlag_Cold
        (&CCCR_ac_DW.NeCCCR_b_FirstDecrFlag_Cold);

    /* DataStoreWrite: '<S512>/NeOBCR_e_PwrLvlSet' incorporates:
     *  Inport: '<Root>/NeCCCR_e_PwrLvlSet_PM_In'
     */
    (void)Rte_Read_NeCCCR_e_PwrLvlSet_Rx_NeCCCR_e_PwrLvlSet
        (&CCCR_ac_DW.NeCCCR_e_PwrLvlSet);

    /* DataStoreWrite: '<S512>/NeCCCR_P_PLSMaxPower' incorporates:
     *  Inport: '<Root>/NeCCCR_P_PLSMaxPower_PM_In'
     */
    (void)Rte_Read_NeCCCR_P_PLSMaxPower_Rx_NeCCCR_P_PLSMaxPower
        (&CCCR_ac_DW.NeCCCR_P_PLSMaxPower);

    /* End of Outputs for SubSystem: '<S3>/DSM_Init' */
    CCCR_ac_FUNC(&CCCR_ac_B.VariantMergeForOutportVeCCCR__d,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_U_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__l,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__c,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_ji,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_e_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__n,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_P_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__k,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__g,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_ge,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_p1,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__j,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_b_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__h,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_I_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_c2,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__e,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__p,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__b);

    /* End of Outputs for SubSystem: '<S514>/FUNC' */
    /* End of Outputs for SubSystem: '<S513>/Subsystem' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#else

    /* Outputs for Atomic SubSystem: '<S514>/NF' */
    CCCR_ac_FUNC(&CCCR_ac_B.VariantMergeForOutportVeCCCR__d,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_U_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__l,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__c,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_ji,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_e_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__n,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_P_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__k,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__g,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_ge,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_p1,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__j,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_b_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__h,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_I_,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR_c2,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__e,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__p,
                 &CCCR_ac_B.VariantMergeForOutportVeCCCR__b);

    /* End of Outputs for SubSystem: '<S514>/NF' */
#endif

    /* Outport: '<Root>/VeCCCR_I_BattCommandedCurr' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_I_BattCommandedCurr_Out_Init'
     */
    (void)Rte_Write_VeCCCR_I_BattCommandedCurr_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR_I_);

    /* Outport: '<Root>/VeCCCR_I_ChrgCrntReqDelta' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_I_ChrgCrntReqDelta_Out_Init'
     */
    (void)Rte_Write_VeCCCR_I_ChrgCrntReqDelta_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__d);

    /* Outport: '<Root>/VeCCCR_I_ChrgTypeHWLim' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_I_ChrgTypeHWLim_Out_Init'
     */
    (void)Rte_Write_VeCCCR_I_ChrgTypeHWLim_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__h);

    /* Outport: '<Root>/VeCCCR_I_HWCurrentBound' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_I_HWCurrentBound_Out_Init'
     */
    (void)Rte_Write_VeCCCR_I_HWCurrentBound_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__e);

    /* Outport: '<Root>/VeCCCR_I_MaxAllowedCurr' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_I_MaxAllowedCurr_Out_Init'
     */
    (void)Rte_Write_VeCCCR_I_MaxAllowedCurr_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__c);

    /* Outport: '<Root>/VeCCCR_I_PLS_ReducedCurr' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_I_PLS_ReducedCurr_Out_Init'
     */
    (void)Rte_Write_VeCCCR_I_PLS_ReducedCurr_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__p);

    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev1' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_P_PLS_PwrLev1_Out_Init'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev1_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR_P_);

    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev2' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_P_PLS_PwrLev2_Out_Init'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev2_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__k);

    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev3' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_P_PLS_PwrLev3_Out_Init'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev3_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__g);

    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev4' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_P_PLS_PwrLev4_Out_Init'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev4_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR_ge);

    /* Outport: '<Root>/VeCCCR_P_PLS_PwrLev5' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_P_PLS_PwrLev5_Out_Init'
     */
    (void)Rte_Write_VeCCCR_P_PLS_PwrLev5_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR_p1);

    /* Outport: '<Root>/VeCCCR_U_VoltRq' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_U_VoltRq_Out_Init'
     */
    (void)Rte_Write_VeCCCR_U_VoltRq_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR_U_);

    /* Outport: '<Root>/VeCCCR_b_ChrgCmplteCondtnMet' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_b_ChrgCmplteCondtnMet_Out_Init'
     */
    (void)Rte_Write_VeCCCR_b_ChrgCmplteCondtnMet_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR_b_);

    /* Outport: '<Root>/VeCCCR_b_PwrLevActive' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_b_PwrLevActive_Out_Init'
     */
    (void)Rte_Write_VeCCCR_b_PwrLevActive_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR_c2);

    /* Outport: '<Root>/VeCCCR_b_SOC_LvlSet_80' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_b_SOC_LvlSet_80_Out_Init'
     */
    (void)Rte_Write_VeCCCR_b_SOC_LvlSet_80_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__b);

    /* Outport: '<Root>/VeCCCR_e_BattPckVoltRchd_BST' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_e_BattPckVoltRchd_BST_Out_Init'
     *  VariantMerge generated from: '<S514>/VeCCCR_e_BattPckVoltRchd_BST_Out_Init'
     */
    (void)Rte_Write_VeCCCR_e_BattPckVoltRchd_BST_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR_ji);

    /* Outport: '<Root>/VeCCCR_e_HVBattBalReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_e_HVBattBalReq_Out_Init'
     *  VariantMerge generated from: '<S514>/VeCCCR_e_HVBattBalReq_Out_Init'
     */
    (void)Rte_Write_VeCCCR_e_HVBattBalReq_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__l);

    /* Outport: '<Root>/VeCCCR_e_MaxCellVoltRchd_BST' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_e_MaxCellVoltRchd_BST_Out_Init'
     *  VariantMerge generated from: '<S514>/VeCCCR_e_MaxCellVoltRchd_BST_Out_Init'
     */
    (void)Rte_Write_VeCCCR_e_MaxCellVoltRchd_BST_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__n);

    /* Outport: '<Root>/VeCCCR_e_PwrLevSet' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_e_PwrLevSet_Out_Init'
     *  VariantMerge generated from: '<S514>/VeCCCR_e_PwrLevSet_Out_Init'
     */
    (void)Rte_Write_VeCCCR_e_PwrLevSet_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR__j);

    /* Outport: '<Root>/VeCCCR_e_SOCRchd_BST' incorporates:
     *  SignalConversion generated from: '<S3>/VeCCCR_e_SOCRchd_BST_Out_Init'
     *  VariantMerge generated from: '<S514>/VeCCCR_e_SOCRchd_BST_Out_Init'
     */
    (void)Rte_Write_VeCCCR_e_SOCRchd_BST_Value
        (CCCR_ac_B.VariantMergeForOutportVeCCCR_e_);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CCCR_CODE) CCCR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        CCCR_ac_B.VariantMergeForOutportVeCCCR__j = CeOBCR_e_PwrLimReq_SNA;

#if Rte_SysCon_Variant_CCCR_FUNC

        CCCR_ac_B.Merge6 = CeOBCR_e_PwrLimReq_SNA;

#endif

    }

    /* custom signals */
#if Rte_SysCon_Variant_CCCR_FUNC

    VeCCCR_e_PwrLimReq = CeOBCR_e_PwrLimReq_SNA;

#endif

    /* Start for DataStoreMemory: '<Root>/DSM_NeCCCR_e_PwrLvlSet' */
#if Rte_SysCon_Variant_CCCR_FUNC

    CCCR_ac_DW.NeCCCR_e_PwrLvlSet = CeOBCR_e_PwrLimReq_NoChange;

#endif

    /* End of Start for DataStoreMemory: '<Root>/DSM_NeCCCR_e_PwrLvlSet' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CCCR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for Atomic SubSystem: '<S513>/Subsystem' */
#if Rte_SysCon_Variant_CCCR_FUNC

    /* SystemInitialize for Atomic SubSystem: '<S514>/FUNC' */
    CCCR_ac_FUNC_Init(&CCCR_ac_B.VariantMergeForOutportVeCCCR__d,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_U_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__l,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__c,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_ji,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_e_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__n,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_P_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__k,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__g,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_ge,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_p1,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__j,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_b_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__h,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_I_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_c2,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__e,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__p,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__b);

    /* End of SystemInitialize for SubSystem: '<S514>/FUNC' */
    /* End of SystemInitialize for SubSystem: '<S513>/Subsystem' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
#else

    /* SystemInitialize for Atomic SubSystem: '<S514>/NF' */
    CCCR_ac_FUNC_Init(&CCCR_ac_B.VariantMergeForOutportVeCCCR__d,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_U_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__l,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__c,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_ji,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_e_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__n,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_P_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__k,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__g,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_ge,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_p1,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__j,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_b_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__h,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_I_,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR_c2,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__e,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__p,
                      &CCCR_ac_B.VariantMergeForOutportVeCCCR__b);

    /* End of SystemInitialize for SubSystem: '<S514>/NF' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_CCCR_FUNC

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/CCCR_MedTED' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CCCI'
     */
    /* SystemInitialize for Switch: '<S5>/Switch16' incorporates:
     *  Outport: '<S5>/PwrLimReq'
     */
    VeCCCR_e_PwrLimReq = CeOBCR_e_PwrLimReq_SNA;

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CCCC'
     */
    /* Start for If: '<S4>/If' */
    CCCR_ac_DW.If_ActiveSubsystem = -1;

    /* SystemInitialize for IfAction SubSystem: '<S4>/CurrRq_ChrgCompl' */
    /* Start for If: '<S26>/If' */
    CCCR_ac_DW.If_ActiveSubsystem_g = -1;

    /* SystemInitialize for IfAction SubSystem: '<S194>/If Action Subsystem1' */
    /* SystemInitialize for IfAction SubSystem: '<S198>/If Action Subsystem1' */
    CCCR_ac_IfActionSubsystem1_Init(&CCCR_ac_B.IfActionSubsystem1_k);

    /* End of SystemInitialize for SubSystem: '<S198>/If Action Subsystem1' */
    /* End of SystemInitialize for SubSystem: '<S194>/If Action Subsystem1' */

    /* SystemInitialize for IfAction SubSystem: '<S194>/If Action Subsystem2' */
    CCCR_ac_IfActionSubsystem2_Init(&CCCR_ac_B.IfActionSubsystem2);

    /* End of SystemInitialize for SubSystem: '<S194>/If Action Subsystem2' */

    /* SystemInitialize for IfAction SubSystem: '<S195>/If Action Subsystem' */
    CCCR_a_IfActionSubsystem_o_Init(&CCCR_ac_B.IfActionSubsystem);

    /* End of SystemInitialize for SubSystem: '<S195>/If Action Subsystem' */

    /* SystemInitialize for IfAction SubSystem: '<S195>/If Action Subsystem1' */
    CCCR__IfActionSubsystem1_m_Init(&CCCR_ac_B.IfActionSubsystem1_g);

    /* End of SystemInitialize for SubSystem: '<S195>/If Action Subsystem1' */

    /* SystemInitialize for IfAction SubSystem: '<S223>/If Action Subsystem1' */
    CCCR__IfActionSubsystem1_j_Init(&CCCR_ac_B.IfActionSubsystem1_j);

    /* End of SystemInitialize for SubSystem: '<S223>/If Action Subsystem1' */

    /* SystemInitialize for IfAction SubSystem: '<S223>/If Action Subsystem2' */
    CCCR_ac_IfActionSubsystem2_Init(&CCCR_ac_B.IfActionSubsystem2_h);

    /* End of SystemInitialize for SubSystem: '<S223>/If Action Subsystem2' */

    /* SystemInitialize for IfAction SubSystem: '<S224>/If Action Subsystem' */
    CCCR_a_IfActionSubsystem_o_Init(&CCCR_ac_B.IfActionSubsystem_h);

    /* End of SystemInitialize for SubSystem: '<S224>/If Action Subsystem' */

    /* SystemInitialize for IfAction SubSystem: '<S224>/If Action Subsystem1' */
    CCCR__IfActionSubsystem1_m_Init(&CCCR_ac_B.IfActionSubsystem1_d);

    /* End of SystemInitialize for SubSystem: '<S224>/If Action Subsystem1' */

    /* SystemInitialize for IfAction SubSystem: '<S252>/If Action Subsystem1' */
    CCCR__IfActionSubsystem1_j_Init(&CCCR_ac_B.IfActionSubsystem1_b);

    /* End of SystemInitialize for SubSystem: '<S252>/If Action Subsystem1' */

    /* SystemInitialize for IfAction SubSystem: '<S252>/If Action Subsystem2' */
    CCCR_ac_IfActionSubsystem2_Init(&CCCR_ac_B.IfActionSubsystem2_nk);

    /* End of SystemInitialize for SubSystem: '<S252>/If Action Subsystem2' */

    /* SystemInitialize for IfAction SubSystem: '<S253>/If Action Subsystem' */
    CCCR_a_IfActionSubsystem_o_Init(&CCCR_ac_B.IfActionSubsystem_o);

    /* End of SystemInitialize for SubSystem: '<S253>/If Action Subsystem' */

    /* SystemInitialize for IfAction SubSystem: '<S253>/If Action Subsystem1' */
    CCCR__IfActionSubsystem1_m_Init(&CCCR_ac_B.IfActionSubsystem1_f);

    /* End of SystemInitialize for SubSystem: '<S253>/If Action Subsystem1' */
    /* End of SystemInitialize for SubSystem: '<S4>/CurrRq_ChrgCompl' */

    /* SystemInitialize for Merge: '<S4>/Merge6' */
    CCCR_ac_B.Merge6 = CeOBCR_e_PwrLimReq_SNA;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/CCCR_MedTED' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeCCCR_e_HVBattBalReq' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VeCCCR_e_HVBattBalReq_Value(CeOBCR_e_NoRequest);

    /* SystemInitialize for Outport: '<Root>/VeCCCR_e_BattPckVoltRchd_BST' incorporates:
     *  Merge: '<Root>/Merge_Outport_85'
     */
    (void)Rte_Write_VeCCCR_e_BattPckVoltRchd_BST_Value
        (CeOBCR_e_BattPckVolt_NotReached);

    /* SystemInitialize for Outport: '<Root>/VeCCCR_e_SOCRchd_BST' incorporates:
     *  Merge: '<Root>/Merge_Outport_86'
     */
    (void)Rte_Write_VeCCCR_e_SOCRchd_BST_Value(CeOBCR_e_SOC_NotReached);

    /* SystemInitialize for Outport: '<Root>/VeCCCR_e_MaxCellVoltRchd_BST' incorporates:
     *  Merge: '<Root>/Merge_Outport_89'
     */
    (void)Rte_Write_VeCCCR_e_MaxCellVoltRchd_BST_Value
        (CeOBCR_e_MaxCellVolt_NotReached);

    /* SystemInitialize for Outport: '<Root>/VeCCCR_e_PwrLevSet' incorporates:
     *  Merge: '<Root>/Merge_Outport_100'
     */
    (void)Rte_Write_VeCCCR_e_PwrLevSet_Value(CeOBCR_e_PwrLimReq_SNA);

#if Rte_SysCon_Variant_CCCR_FUNC

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/CCCR_PwrOff' */
    /* SystemInitialize for Outport: '<Root>/NeCCCR_e_PwrLvlSet_PM_Out' incorporates:
     *  Outport: '<S2>/NeCCCR_e_PwrLvlSet_PM_Out'
     */
    (void)Rte_Write_NeCCCR_e_PwrLvlSet_NeCCCR_e_PwrLvlSet(CeOBCR_e_PwrLimReq_SNA);

    /* End of SystemInitialize for SubSystem: '<Root>/CCCR_PwrOff' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
